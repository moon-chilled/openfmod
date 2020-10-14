#include "openfmod.h"
#include "openfmod-internal.h"

atomic_bool is_gorilla_initialized = false;

static void check_gorilla_initialized(void) {
	if (!atomic_compare_exchange_strong(&is_gorilla_initialized, &(bool){false}, true)) {
		// another thread beat us; fine
		return;
	}

	// we won!
	gc_initialize(NULL);
}

// just initialized right here
// note that our version *is* threadsafe, unlike upstream's
FMOD_RESULT FMOD_Studio_System_Create(FMOD_STUDIO_SYSTEM **system, unsigned int headerversion) {
	check_gorilla_initialized();

	FMOD_STUDIO_SYSTEM *ret = malloc(sizeof(FMOD_STUDIO_SYSTEM));
	if (!ret) return FMOD_ERR_INTERNAL;
	ret->ga.mgr = gau_manager_create_custom(GA_DEVICE_TYPE_DEFAULT, GAU_THREAD_POLICY_MULTI, 4, 512);
	if (!ret->ga.mgr) return FMOD_ERR_INTERNAL;
	ret->ga.mixer = gau_manager_mixer(ret->ga.mgr);
	if (!ret->ga.mixer) return FMOD_ERR_INTERNAL;
	ret->ga.stream_mgr = gau_manager_streamManager(ret->ga.mgr);

	*system = ret;
	return FMOD_OK;
}

FMOD_RESULT FMOD_Studio_System_Initialize(FMOD_STUDIO_SYSTEM *system, int maxchannels, FMOD_STUDIO_INITFLAGS studioflags, FMOD_INITFLAGS flags, void *extradriverdata) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_System_SetListenerAttributes(FMOD_STUDIO_SYSTEM *system, int index, const FMOD_3D_ATTRIBUTES *attributes, const FMOD_VECTOR *attenuationposition) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_System_LoadBankFile(FMOD_STUDIO_SYSTEM *system, const char *filename, FMOD_STUDIO_LOAD_BANK_FLAGS flags, FMOD_STUDIO_BANK **bank) {
	if (flags != FMOD_STUDIO_LOAD_BANK_NORMAL) CSTUB("load flags %x", flags);
	FSTUB();
}

FMOD_RESULT FMOD_Studio_System_GetEvent(FMOD_STUDIO_SYSTEM *system, const char *pathOrID, FMOD_STUDIO_EVENTDESCRIPTION **event) {
	CSTUB("get event pathorid \"%s\"", pathOrID);
}

FMOD_RESULT FMOD_Studio_Bank_LoadSampleData(FMOD_STUDIO_BANK *bank) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_System_GetLowLevelSystem(FMOD_STUDIO_SYSTEM *system, FMOD_SYSTEM **lowLevelSystem) {
	DEPRECATED();
	FSTUB();
}

FMOD_RESULT FMOD_Studio_EventInstance_SetParameterValue(FMOD_STUDIO_EVENTINSTANCE *eventinstance, const char *name, float value) {
	DEPRECATED();
	CSTUB("set \"%s\" to \"%f\"", name, value);
}

FMOD_RESULT FMOD_Studio_Bus_GetPaused(FMOD_STUDIO_BUS *bus, FMOD_BOOL *paused) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_Bus_SetPaused(FMOD_STUDIO_BUS *bus, FMOD_BOOL paused) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_EventDescription_CreateInstance(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_STUDIO_EVENTINSTANCE **instance) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_EventDescription_GetPath(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, char *path, int size, int *retrieved) {
	// needed for mvp celeste to work
	if (path && size) *path = '\0';
	*retrieved = 1;
	FSTUB();
}

FMOD_RESULT FMOD_Studio_EventDescription_Is3D(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_BOOL *is3d) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_EventDescription_IsOneshot(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_BOOL *oneshot) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_EventDescription_LoadSampleData(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_EventInstance_GetDescription(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_STUDIO_EVENTDESCRIPTION **description) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_EventInstance_Release(FMOD_STUDIO_EVENTINSTANCE *eventinstance) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_EventInstance_Start(FMOD_STUDIO_EVENTINSTANCE *eventinstance) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_EventInstance_Stop(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_STUDIO_STOP_MODE mode) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_System_GetBus(FMOD_STUDIO_SYSTEM *system, const char *pathOrID, FMOD_STUDIO_BUS **bus) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_System_GetVCA(FMOD_STUDIO_SYSTEM *system, const char *path, FMOD_STUDIO_VCA **vca) {
	CSTUB("get VCA \"%s\"", path);
}

FMOD_RESULT FMOD_Studio_System_Update(FMOD_STUDIO_SYSTEM *system) {
	gau_manager_update(system->ga.mgr);
	return FMOD_OK;
}

FMOD_RESULT FMOD_Studio_VCA_GetVolume(FMOD_STUDIO_VCA *vca, float *volume, float *finalvolume) {
	FSTUB();
}

FMOD_RESULT FMOD_Studio_VCA_SetVolume(FMOD_STUDIO_VCA *vca, float volume) {
	FSTUB();
}
