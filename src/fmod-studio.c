#include "openfmod.h"
#include "openfmod-internal.h"

FMOD_RESULT FMOD_Studio_System_Create(FMOD_STUDIO_SYSTEM **system, unsigned int headerversion) {
	STUB;
}


FMOD_RESULT FMOD_Studio_Bank_LoadSampleData(FMOD_STUDIO_BANK *bank) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetLowLevelSystem(FMOD_STUDIO_SYSTEM *system, FMOD_SYSTEM **lowLevelSystem) {
	DSTUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_SetParameterValue(FMOD_STUDIO_EVENTINSTANCE *eventinstance, const char *name, float value) {
	DSTUB;
}

FMOD_RESULT FMOD_Studio_Bus_GetPaused(FMOD_STUDIO_BUS *bus, FMOD_BOOL *paused) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bus_SetPaused(FMOD_STUDIO_BUS *bus, FMOD_BOOL paused) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_CreateInstance(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_STUDIO_EVENTINSTANCE **instance) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetPath(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, char *path, int size, int *retrieved) {
	// needed for mvp celeste to work
	path = "\0";
	*retrieved = 1;
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_Is3D(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_BOOL *is3d) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_IsOneshot(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_BOOL *oneshot) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_LoadSampleData(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_GetDescription(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_STUDIO_EVENTDESCRIPTION **description) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_Release(FMOD_STUDIO_EVENTINSTANCE *eventinstance) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_Start(FMOD_STUDIO_EVENTINSTANCE *eventinstance) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_Stop(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_STUDIO_STOP_MODE mode) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetBus(FMOD_STUDIO_SYSTEM *system, const char *pathOrID, FMOD_STUDIO_BUS **bus) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetEvent(FMOD_STUDIO_SYSTEM *system, const char *pathOrID, FMOD_STUDIO_EVENTDESCRIPTION **event) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetVCA(FMOD_STUDIO_SYSTEM *system, const char *path, FMOD_STUDIO_VCA **vca) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_Initialize(FMOD_STUDIO_SYSTEM *system, int maxchannels, FMOD_STUDIO_INITFLAGS studioflags, FMOD_INITFLAGS flags, void *extradriverdata) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_LoadBankFile(FMOD_STUDIO_SYSTEM *system, const char *filename, FMOD_STUDIO_LOAD_BANK_FLAGS flags, FMOD_STUDIO_BANK **bank) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_SetListenerAttributes(FMOD_STUDIO_SYSTEM *system, int index, const FMOD_3D_ATTRIBUTES *attributes, const FMOD_VECTOR *attenuationposition) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_Update(FMOD_STUDIO_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_Studio_VCA_GetVolume(FMOD_STUDIO_VCA *vca, float *volume, float *finalvolume) {
	STUB;
}

FMOD_RESULT FMOD_Studio_VCA_SetVolume(FMOD_STUDIO_VCA *vca, float volume) {
	STUB;
}
