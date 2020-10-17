#include "openfmod.h"
#include "openfmod-internal.h"

void guid_evdescr_insert(MapGuidToEventDescr *map, FMOD_GUID *key, FMOD_STUDIO_EVENTDESCRIPTION *sound) {
	for (usz i = 0; i < alen(*map); i++) {
		if (!memcmp(&(*map)[i].key, key, sizeof(FMOD_GUID))) {
			(*map)[i].val = sound;
			return;
		}
	}


	apush(*map, {.key=*key, .val=sound});
}

FMOD_STUDIO_EVENTDESCRIPTION **guid_evdescr_get(MapGuidToEventDescr *map, FMOD_GUID *key) {
	for (usz i = 0; i < alen(map); i++) {
		if (!memcmp(&(*map)[i].key, key, sizeof(FMOD_GUID)))
			return &(*map)[i].val;
	}

	return NULL;
}

void path_guid_insert(MapPathToGuid *map, const char *key, FMOD_GUID *guid) {
	for (usz i = 0; i < alen(*map); i++) {
		if (!strcmp((*map)[i].key, key)) {
			(*map)[i].val = *guid;
			return;
		}
	}

	apush(*map, {.key=strdup(key), .val=*guid});
}

FMOD_GUID *path_guid_get(MapPathToGuid *map, const char *key) {
	for (usz i = 0; i < alen(*map); i++) {
		if (!strcmp((*map)[i].key, key))
			return &(*map)[i].val;
	}

	return NULL;
}
