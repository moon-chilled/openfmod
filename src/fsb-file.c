#include <libgen.h>

#include <jansson.h>

#include "openfmod.h"
#include "openfmod-internal.h"

static inline bool ishex(char c) { return (('0' <= c) && (c <= '9')) || (('a' <= c) && (c <= 'f')) || (('A' <= c) && (c <= 'F')); }
static inline u8 parsehex(char c) {
	if (('0' <= c) && (c <= '9'))      return      c - '0';
	else if (('a' <= c) && (c <= 'f')) return 10 + c - 'a';
	else if (('A' <= c) && (c <= 'F')) return 10 + c - 'A';
	assert(0);
}

static bool try_parsehex(u64 *out, const char **str, usz max) {
	*out = 0;

	for (usz i = 0; i < max && ishex(**str); (*str)++, i++) {
		if (!ishex(**str)) return false;
		*out <<= 4;
		*out |= parsehex(**str);
	}

	return true;
}

static bool try_parseguid(FMOD_GUID *out, const char *str) {
	u64 d;
	if (!try_parsehex(&d, &str, 8)) return false;
	out->Data1 = d;
	if (*str++ != '-') return false;

	if (!try_parsehex(&d, &str, 4)) return false;
	out->Data2 = d;
	if (*str++ != '-') return false;

	if (!try_parsehex(&d, &str, 4)) return false;
	out->Data3 = d;
	if (*str++ != '-') return false;

	for (usz i = 0; i < 8; i++) {
		if (!try_parsehex(&d, &str, 2)) return false;
		out->Data4[i] = d;
	}

	return !*str;
}

static bool ensure_sound_loaded(FMOD_STUDIO_SYSTEM *sys, FMOD_SOUND *snd) {
	if (snd->is_loaded) return true;

	if (snd->is_mem) {
		snd->handle = gau_create_handle_buffered_file(sys->ga.mixer, sys->ga.stream_mgr, snd->fpath, GAU_AUDIO_TYPE_OGG, NULL, NULL, NULL);
	} else {
		ga_Sound *sound = gau_load_sound_file(snd->fpath, GAU_AUDIO_TYPE_OGG);
		if (!sound) return false;
		snd->handle = gau_create_handle_sound(sys->ga.mixer, sound, NULL, NULL, NULL);
	}

	return snd->handle;
}

static bool try_loadevent(FMOD_STUDIO_SYSTEM *sys, FMOD_STUDIO_BANK *bank, json_t *json) {
	if (!json || !json_is_object(json)) return false;

	json_t *ev_guid = json_object_get(json, "GUID");
	if (!ev_guid || !json_is_string(ev_guid)) return false;

	FMOD_GUID guid;
	if (!try_parseguid(&guid, json_string_value(ev_guid))) return false;
	
	json_t *ev_path = json_object_get(json, "path");
	if (!ev_path || !json_is_string(ev_path)) return false;

	path_guid_insert(&sys->pathmap, json_string_value(ev_path), &guid);

	json_t *ev_files = json_object_get(json, "files");
	if (!json_is_array(ev_files)) return false;

	FMOD_STUDIO_EVENTDESCRIPTION *ev_descr = calloc(sizeof(*ev_descr), 1);
	ev_descr->sys = sys;
	ev_descr->path = strdup(json_string_value(ev_path));

	for (usz i = 0; i < json_array_size(ev_files); i++) {
		json_t *ev_file = json_array_get(ev_files, i);
		if (!ev_file || !json_is_object(ev_file)) return false;

		// allow missing issample key
		// (assume false if it's not there)
		json_t *ev_issample = json_object_get(ev_file, "issample");
		if (ev_issample && !json_is_boolean(ev_issample)) return false;

		bool issample = ev_issample ? json_boolean_value(ev_issample) : false;

		json_t *ev_filename = json_object_get(ev_file, "filename");
		if (!ev_filename || !json_is_string(ev_filename)) return false;

		// extracted filename doesn't include ext
		// just guess ogg for now
		char fnambuf[512];
		sprintf(fnambuf, "%s/%s.banko/%s-%s.ogg", bank->dir, bank->basename, bank->basename, json_string_value(ev_filename));
		log("load file %s", fnambuf);

		apush(ev_descr->sounds, cpy((FMOD_SOUND*)malloc(sizeof(FMOD_SOUND)), (&(FMOD_SOUND){.is_mem=issample, .is_loaded=false, .fpath=strdup(fnambuf)}),1));
	}

	// todo check if already in sys->sounds, and if so FMOD_ERR_EVENT_ALREADY_LOADED
	guid_evdescr_insert(&bank->sounds, &guid, ev_descr);
	guid_evdescr_insert(&sys->sounds, &guid, ev_descr);

	return true;
}

FMOD_RESULT FMOD_Studio_System_LoadBankFile(FMOD_STUDIO_SYSTEM *system, const char *filename, FMOD_STUDIO_LOAD_BANK_FLAGS flags, FMOD_STUDIO_BANK **bank) {
	*bank = calloc(sizeof(FMOD_STUDIO_BANK), 1);

	{
		(**bank).dir = strdup(filename);
		for (usz i = strlen((**bank).dir); i-- > 0;) {
			if ((**bank).dir[i] == '/') {
				(**bank).dir[i] = 0;
				goto gotdir;
			}
		}

		free((**bank).dir);
		(**bank).dir = strdup(".");
gotdir:;
	}

	if (flags != FMOD_STUDIO_LOAD_BANK_NORMAL) CSTUB("load flags %x", flags);

	char fnbuf[512];
	usz l = strlen(filename);
	memcpy(fnbuf, filename, l);

	if (l < 5 || memcmp(filename + l - 5, ".bank", 5)) memcpy(fnbuf + l, ".json", 6);
	else memcpy(fnbuf + l - 4, "json", 5);

	{
		char *fnbuf2 = basename(fnbuf);
		(**bank).basename = strndup(fnbuf2, strlen(fnbuf2) - 5);
	}


	json_t *json;
	json_error_t json_err;
	json = json_load_file(fnbuf, 0, &json_err);
	if (!json) {
		switch (json_error_code(&json_err)) {
			case json_error_cannot_open_file: return FMOD_ERR_FILE_NOTFOUND;
			case json_error_premature_end_of_input: return FMOD_ERR_FILE_EOF;
			default: return FMOD_ERR_FILE_BAD;
		}
	}

	if (!json_is_object(json)) goto fail;

	json_t *ev = json_object_get(json, "events");
	if (!ev || !json_is_array(ev)) goto fail;

	for (usz i = 0; i < json_array_size(ev); i++) {
		if (!try_loadevent(system, *bank, json_array_get(ev, i))) goto fail;
	}

	return FMOD_OK;

fail:
	json_decref(json);
	return FMOD_ERR_FILE_BAD;
}

FMOD_RESULT FMOD_Studio_EventDescription_LoadSampleData(FMOD_STUDIO_EVENTDESCRIPTION *evd) {
	if (!evd) return FMOD_ERR_INVALID_HANDLE;

	foreach (s, evd->sounds) {
		if (s->is_mem) {
			if (!ensure_sound_loaded(evd->sys, s)) return FMOD_ERR_FILE_BAD;
		}
	}

	return FMOD_OK;
}

FMOD_RESULT FMOD_Studio_EventDescription_CreateInstance(FMOD_STUDIO_EVENTDESCRIPTION *evd, FMOD_STUDIO_EVENTINSTANCE **evi) {
	*evi = malloc(sizeof(FMOD_STUDIO_EVENTINSTANCE));
	(**evi).playing = false;
	(**evi).sys = evd->sys;

	if (!evd->sounds) return FMOD_ERR_INVALID_PARAM;

	// just pick a sound from evd to put in evi
	// pick the first non-mem sound; and if there is none, pick the last sound
	foreach (s, evd->sounds) {
		if (!s->is_mem) {
			(**evi).snd = s;
			return FMOD_OK;
		}
	}

	(**evi).snd = atail(evd->sounds);
	return FMOD_OK;
}

FMOD_RESULT FMOD_Studio_EventInstance_Start(FMOD_STUDIO_EVENTINSTANCE *evi) {
	if (!evi) return FMOD_ERR_INVALID_PARAM;

	if (evi->playing) return FMOD_OK; // is this right?

	ensure_sound_loaded(evi->sys, evi->snd);
	int res = ga_handle_play(evi->snd->handle);
	if (res == 0) return FMOD_ERR_INTERNAL;
	return FMOD_OK;
}

FMOD_RESULT FMOD_Studio_EventInstance_Stop(FMOD_STUDIO_EVENTINSTANCE *evi, FMOD_STUDIO_STOP_MODE mode) {
	if (!evi) return FMOD_ERR_INVALID_PARAM;

	if (evi->snd->is_mem) return FMOD_OK;

	//todo incorporate mode
	int res = ga_handle_stop(evi->snd->handle);
	if (res == 0) return FMOD_ERR_INTERNAL;
	return FMOD_OK;
}

FMOD_RESULT FMOD_Studio_EventInstance_Release(FMOD_STUDIO_EVENTINSTANCE *evi) {
	return FMOD_Studio_EventInstance_Stop(evi, 0);
}

FMOD_RESULT FMOD_Studio_System_GetEvent(FMOD_STUDIO_SYSTEM *sys, const char *pathOrID, FMOD_STUDIO_EVENTDESCRIPTION **evd) {
	*evd = NULL;

	//todo check for path or id
	FMOD_GUID *guid = path_guid_get(&sys->pathmap, pathOrID);
	if (!guid) return FMOD_ERR_EVENT_NOTFOUND;
	FMOD_STUDIO_EVENTDESCRIPTION **t = guid_evdescr_get(&sys->sounds, guid);
	if (!t) return FMOD_ERR_EVENT_NOTFOUND;
	*evd = *t;
	return FMOD_OK;
}
