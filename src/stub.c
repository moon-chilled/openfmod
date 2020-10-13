#include <stdio.h>

#include "openfmod.h"
#include "openfmod-internal.h"

FMOD_RESULT FMOD_System_CreateReverb3D(FMOD_SYSTEM *system, FMOD_REVERB3D **reverb) {
	STUB;
}

FMOD_RESULT FMOD_Studio_ParseID(const char *idstring, FMOD_GUID *id) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_LookupID(FMOD_STUDIO_SYSTEM *system, const char *path, FMOD_GUID *id) {
	STUB;
}

FMOD_RESULT FMOD_Studio_VCA_GetID(FMOD_STUDIO_VCA *vca, FMOD_GUID *id) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetID(FMOD_STUDIO_BANK *bank, FMOD_GUID *id) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetID(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_GUID *id) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bus_GetID(FMOD_STUDIO_BUS *bus, FMOD_GUID *id) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetVCAByID(FMOD_STUDIO_SYSTEM *system, const FMOD_GUID *id, FMOD_STUDIO_VCA **vca) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetBankByID(FMOD_STUDIO_SYSTEM *system, const FMOD_GUID *id, FMOD_STUDIO_BANK **bank) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetBusByID(FMOD_STUDIO_SYSTEM *system, const FMOD_GUID *id, FMOD_STUDIO_BUS **bus) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetEventByID(FMOD_STUDIO_SYSTEM *system, const FMOD_GUID *id, FMOD_STUDIO_EVENTDESCRIPTION **event) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_AddDSP(FMOD_CHANNELGROUP *channelgroup, int index, FMOD_DSP *dsp) {
	STUB;
}

FMOD_RESULT FMOD_System_CreateDSP(FMOD_SYSTEM *system, const FMOD_DSP_DESCRIPTION *description, FMOD_DSP **dsp) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_RemoveDSP(FMOD_CHANNELGROUP *channelgroup, FMOD_DSP *dsp) {
	STUB;
}

FMOD_RESULT FMOD_System_LockDSP(FMOD_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_System_UnlockDSP(FMOD_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_System_RegisterDSP(FMOD_SYSTEM *system, const FMOD_DSP_DESCRIPTION *description, unsigned int *handle) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetDSP(FMOD_CHANNELGROUP *channelgroup, int index, FMOD_DSP **dsp) {
	STUB;
}

FMOD_RESULT FMOD_System_PlayDSP(FMOD_SYSTEM *system, FMOD_DSP *dsp, FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL paused, FMOD_CHANNEL **channel) {
	STUB;
}

FMOD_RESULT FMOD_Sound_ReadData(FMOD_SOUND *sound, void *buffer, unsigned int length, unsigned int *read) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_UnloadSampleData(FMOD_STUDIO_BANK *bank) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_UnloadSampleData(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription) {
	STUB;
}

FMOD_RESULT FMOD_Sound_SeekData(FMOD_SOUND *sound, unsigned int pcm) {
	STUB;
}

FMOD_RESULT FMOD_Reverb3D_GetUserData(FMOD_REVERB3D *reverb3d, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetUserData(FMOD_DSP *dsp, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetUserData(FMOD_SOUND *sound, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_GetUserData(FMOD_STUDIO_EVENTINSTANCE *eventinstance, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetUserData(FMOD_STUDIO_BANK *bank, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_Channel_GetUserData (FMOD_CHANNEL *channel, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_System_GetUserData (FMOD_SYSTEM *system, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetUserData(FMOD_STUDIO_SYSTEM *system, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_DSPConnection_GetUserData (FMOD_DSPCONNECTION *dspconnection, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetUserData(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_GetUserData (FMOD_SOUNDGROUP *soundgroup, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetUserData (FMOD_CHANNELGROUP *channelgroup, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_GetUserData(FMOD_STUDIO_COMMANDREPLAY *replay, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_GetUserData (FMOD_GEOMETRY *geometry, void **userdata) {
	STUB;
}

FMOD_RESULT FMOD_Reverb3D_SetUserData (FMOD_REVERB3D *reverb3d, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_DSP_SetUserData (FMOD_DSP *dsp, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_Sound_SetUserData (FMOD_SOUND *sound, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_SetUserData(FMOD_STUDIO_EVENTINSTANCE *eventinstance, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_SetUserData(FMOD_STUDIO_BANK *bank, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_Channel_SetUserData (FMOD_CHANNEL *channel, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_System_SetUserData (FMOD_SYSTEM *system, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_SetUserData(FMOD_STUDIO_SYSTEM *system, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_DSPConnection_SetUserData (FMOD_DSPCONNECTION *dspconnection, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_SetUserData(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_SetUserData (FMOD_SOUNDGROUP *soundgroup, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetUserData (FMOD_CHANNELGROUP *channelgroup, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_SetUserData(FMOD_STUDIO_COMMANDREPLAY *replay, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_SetUserData (FMOD_GEOMETRY *geometry, void *userdata) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetParameterData (FMOD_DSP *dsp, int index, void **data, unsigned int *length, char *valuestr, int valuestrlen) {
	STUB;
}

FMOD_RESULT FMOD_DSP_SetParameterData (FMOD_DSP *dsp, int index, void *data, unsigned int length) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Get3DSpread (FMOD_CHANNELGROUP *channelgroup, float *angle) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Set3DSpread (FMOD_CHANNELGROUP *channelgroup, float angle) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_Unload(FMOD_STUDIO_BANK *bank) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetMusicSpeed (FMOD_SOUND *sound, float *speed) {
	STUB;
}

FMOD_RESULT FMOD_Sound_SetMusicSpeed (FMOD_SOUND *sound, float speed) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_GetMuteFadeSpeed (FMOD_SOUNDGROUP *soundgroup, float *speed) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_SetMuteFadeSpeed (FMOD_SOUNDGROUP *soundgroup, float speed) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetMeteringEnabled (FMOD_DSP *dsp, FMOD_BOOL *inputEnabled, FMOD_BOOL *outputEnabled) {
	STUB;
}

FMOD_RESULT FMOD_DSP_SetMeteringEnabled (FMOD_DSP *dsp, FMOD_BOOL inputEnabled, FMOD_BOOL outputEnabled) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_GetPaused(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_BOOL *paused) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetPaused (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL *paused) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_GetPaused(FMOD_STUDIO_COMMANDREPLAY *replay, FMOD_BOOL *paused) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_SetPaused(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_BOOL paused) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetPaused (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL paused) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_SetPaused(FMOD_STUDIO_COMMANDREPLAY *replay, FMOD_BOOL paused) {
	STUB;
}

FMOD_BOOL FMOD_Studio_VCA_IsValid(FMOD_STUDIO_VCA *vca) {
	BSTUB;
}

FMOD_BOOL FMOD_Studio_EventInstance_IsValid(FMOD_STUDIO_EVENTINSTANCE *eventinstance) {
	BSTUB;
}

FMOD_BOOL FMOD_Studio_Bank_IsValid(FMOD_STUDIO_BANK *bank) {
	BSTUB;
}

FMOD_BOOL FMOD_Studio_System_IsValid(FMOD_STUDIO_SYSTEM *system) {
	BSTUB;
}

FMOD_BOOL FMOD_Studio_EventDescription_IsValid(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription) {
	BSTUB;
}

FMOD_BOOL FMOD_Studio_Bus_IsValid(FMOD_STUDIO_BUS *bus) {
	BSTUB;
}

FMOD_BOOL FMOD_Studio_CommandReplay_IsValid(FMOD_STUDIO_COMMANDREPLAY *replay) {
	BSTUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_SeekToCommand(FMOD_STUDIO_COMMANDREPLAY *replay, int commandindex) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_GetCurrentCommand(FMOD_STUDIO_COMMANDREPLAY *replay, int *commandindex, float *currenttime) {
	STUB;
}

FMOD_RESULT FMOD_System_MixerSuspend (FMOD_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetSubSound (FMOD_SOUND *sound, int index, FMOD_SOUND **subsound) {
	STUB;
}

FMOD_RESULT FMOD_System_CreateSound (FMOD_SYSTEM *system, const char *name_or_data, FMOD_MODE mode, FMOD_CREATESOUNDEXINFO *exinfo, FMOD_SOUND **sound) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_GetSound (FMOD_SOUNDGROUP *soundgroup, int index, FMOD_SOUND **sound) {
	STUB;
}

FMOD_RESULT FMOD_Channel_GetCurrentSound (FMOD_CHANNEL *channel, FMOD_SOUND **sound) {
	STUB;
}

FMOD_RESULT FMOD_System_PlaySound (FMOD_SYSTEM *system, FMOD_SOUND *sound, FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL paused, FMOD_CHANNEL **channel) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetMinimumDistance(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, float *distance) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetMaximumDistance(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, float *distance) {
	STUB;
}

FMOD_RESULT FMOD_Sound_Get3DMinMaxDistance (FMOD_SOUND *sound, float *min, float *max) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Get3DMinMaxDistance (FMOD_CHANNELGROUP *channelgroup, float *mindistance, float *maxdistance) {
	STUB;
}

FMOD_RESULT FMOD_Sound_Set3DMinMaxDistance (FMOD_SOUND *sound, float min, float max) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Set3DMinMaxDistance (FMOD_CHANNELGROUP *channelgroup, float mindistance, float maxdistance) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetMode (FMOD_SOUND *sound, FMOD_MODE *mode) {
	STUB;
}

FMOD_RESULT FMOD_Channel_GetMode (FMOD_CHANNEL *channel, FMOD_MODE *mode) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetMode (FMOD_CHANNELGROUP *channelgroup, FMOD_MODE *mode) {
	STUB;
}

FMOD_RESULT FMOD_Sound_SetMode (FMOD_SOUND *sound, FMOD_MODE mode) {
	STUB;
}

FMOD_RESULT FMOD_Channel_SetMode (FMOD_CHANNEL *channel, FMOD_MODE mode) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetMode (FMOD_CHANNELGROUP *channelgroup, FMOD_MODE mode) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetCPUUsage (FMOD_DSP *dsp, unsigned int *exclusive, unsigned int *inclusive) {
	STUB;
}

FMOD_RESULT FMOD_System_GetCPUUsage (FMOD_SYSTEM *system, float *dsp, float *stream, float *geometry, float *update, float *total) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetCPUUsage(FMOD_STUDIO_SYSTEM *system, FMOD_STUDIO_CPU_USAGE *usage) {
	STUB;
}

FMOD_RESULT FMOD_System_GetFileUsage (FMOD_SYSTEM *system, long long *sampleBytesRead, long long *streamBytesRead, long long *otherBytesRead) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetBufferUsage(FMOD_STUDIO_SYSTEM *system, FMOD_STUDIO_BUFFER_USAGE *usage) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_ResetBufferUsage(FMOD_STUDIO_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_GetScale (FMOD_GEOMETRY *geometry, FMOD_VECTOR *scale) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_SetScale (FMOD_GEOMETRY *geometry, const FMOD_VECTOR *scale) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_GetMaxAudible (FMOD_SOUNDGROUP *soundgroup, int *maxaudible) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_SetMaxAudible (FMOD_SOUNDGROUP *soundgroup, int maxaudible) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetIdle (FMOD_DSP *dsp, FMOD_BOOL *idle) {
	STUB;
}

FMOD_RESULT FMOD_System_GetPluginHandle (FMOD_SYSTEM *system, FMOD_PLUGINTYPE plugintype, int index, unsigned int *handle) {
	STUB;
}

FMOD_RESULT FMOD_System_GetOutputHandle (FMOD_SYSTEM *system, void **handle) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetName (FMOD_SOUND *sound, char *name, int namelen) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_GetName (FMOD_SOUNDGROUP *soundgroup, char *name, int namelen) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetName (FMOD_CHANNELGROUP *channelgroup, char *name, int namelen) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_SeekToTime(FMOD_STUDIO_COMMANDREPLAY *replay, float time) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_GetCommandAtTime(FMOD_STUDIO_COMMANDREPLAY *replay, float time, int *commandindex) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetMusicChannelVolume (FMOD_SOUND *sound, int channel, float *volume) {
	STUB;
}

FMOD_RESULT FMOD_Sound_SetMusicChannelVolume (FMOD_SOUND *sound, int channel, float volume) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_GetVolume(FMOD_STUDIO_EVENTINSTANCE *eventinstance, float *volume, float *finalvolume) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_GetVolume (FMOD_SOUNDGROUP *soundgroup, float *volume) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetVolume (FMOD_CHANNELGROUP *channelgroup, float *volume) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bus_GetVolume(FMOD_STUDIO_BUS *bus, float *volume, float *finalvolume) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_SetVolume(FMOD_STUDIO_EVENTINSTANCE *eventinstance, float volume) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_SetVolume (FMOD_SOUNDGROUP *soundgroup, float volume) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetVolume (FMOD_CHANNELGROUP *channelgroup, float volume) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bus_SetVolume(FMOD_STUDIO_BUS *bus, float volume) {
	STUB;
}

FMOD_RESULT FMOD_System_MixerResume (FMOD_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetType (FMOD_DSP *dsp, FMOD_DSP_TYPE *type) {
	STUB;
}

FMOD_RESULT FMOD_DSPConnection_GetType (FMOD_DSPCONNECTION *dspconnection, FMOD_DSPCONNECTION_TYPE *type) {
	STUB;
}

FMOD_RESULT FMOD_System_CreateDSPByType (FMOD_SYSTEM *system, FMOD_DSP_TYPE type, FMOD_DSP **dsp) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_StopCommandCapture(FMOD_STUDIO_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_StartCommandCapture(FMOD_STUDIO_SYSTEM *system, const char *filename, FMOD_STUDIO_COMMANDCAPTURE_FLAGS flags) {
	STUB;
}

FMOD_RESULT FMOD_Reverb3D_Release (FMOD_REVERB3D *reverb3d) {
	STUB;
}

FMOD_RESULT FMOD_DSP_Release (FMOD_DSP *dsp) {
	STUB;
}

FMOD_RESULT FMOD_Sound_Release (FMOD_SOUND *sound) {
	STUB;
}

FMOD_RESULT FMOD_System_Release (FMOD_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_Release(FMOD_STUDIO_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_Release (FMOD_SOUNDGROUP *soundgroup) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Release (FMOD_CHANNELGROUP *channelgroup) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_Release(FMOD_STUDIO_COMMANDREPLAY *replay) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_Release (FMOD_GEOMETRY *geometry) {
	STUB;
}

FMOD_RESULT FMOD_System_Close (FMOD_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_System_Update (FMOD_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_System_Create (FMOD_SYSTEM **system) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetSampleLoadingState(FMOD_STUDIO_BANK *bank, FMOD_STUDIO_LOADING_STATE *state) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetSampleLoadingState(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_STUDIO_LOADING_STATE *state) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetLoadingState(FMOD_STUDIO_BANK *bank, FMOD_STUDIO_LOADING_STATE *state) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_GetPlaybackState(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_STUDIO_PLAYBACK_STATE *state) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_GetPlaybackState(FMOD_STUDIO_COMMANDREPLAY *replay, FMOD_STUDIO_PLAYBACK_STATE *state) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetOpenState (FMOD_SOUND *sound, FMOD_OPENSTATE *openstate, unsigned int *percentbuffered, FMOD_BOOL *starving, FMOD_BOOL *diskbusy) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetMute (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL *mute) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bus_GetMute(FMOD_STUDIO_BUS *bus, FMOD_BOOL *mute) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetMute (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL mute) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bus_SetMute(FMOD_STUDIO_BUS *bus, FMOD_BOOL mute) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_TriggerCue(FMOD_STUDIO_EVENTINSTANCE *eventinstance) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_HasCue(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_BOOL *cue) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_Save (FMOD_GEOMETRY *geometry, void *data, int *datasize) {
	STUB;
}

FMOD_RESULT FMOD_Reverb3D_GetActive (FMOD_REVERB3D *reverb3d, FMOD_BOOL *active) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetActive (FMOD_DSP *dsp, FMOD_BOOL *active) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_GetActive (FMOD_GEOMETRY *geometry, FMOD_BOOL *active) {
	STUB;
}

FMOD_RESULT FMOD_Reverb3D_SetActive (FMOD_REVERB3D *reverb3d, FMOD_BOOL active) {
	STUB;
}

FMOD_RESULT FMOD_DSP_SetActive (FMOD_DSP *dsp, FMOD_BOOL active) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_SetActive (FMOD_GEOMETRY *geometry, FMOD_BOOL active) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetSoundSize(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, float *size) {
	STUB;
}

FMOD_RESULT FMOD_System_GetDSPBufferSize (FMOD_SYSTEM *system, unsigned int *bufferlength, int *numbuffers) {
	STUB;
}

FMOD_RESULT FMOD_System_SetDSPBufferSize (FMOD_SYSTEM *system, unsigned int bufferlength, int numbuffers) {
	STUB;
}

FMOD_RESULT FMOD_System_GetStreamBufferSize (FMOD_SYSTEM *system, unsigned int *filebuffersize, FMOD_TIMEUNIT *filebuffersizetype) {
	STUB;
}

FMOD_RESULT FMOD_System_SetStreamBufferSize (FMOD_SYSTEM *system, unsigned int filebuffersize, FMOD_TIMEUNIT filebuffersizetype) {
	STUB;
}

FMOD_RESULT FMOD_Debug_Initialize (FMOD_DEBUG_FLAGS flags, FMOD_DEBUG_MODE mode, FMOD_DEBUG_CALLBACK callback, const char *filename) {
	STUB;
}

FMOD_RESULT FMOD_Memory_Initialize (void *poolmem, int poollen, FMOD_MEMORY_ALLOC_CALLBACK useralloc, FMOD_MEMORY_REALLOC_CALLBACK userrealloc, FMOD_MEMORY_FREE_CALLBACK userfree, FMOD_MEMORY_TYPE memtypeflags) {
	STUB;
}

FMOD_RESULT FMOD_Sound_Get3DCustomRolloff (FMOD_SOUND *sound, FMOD_VECTOR **points, int *numpoints) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Get3DCustomRolloff (FMOD_CHANNELGROUP *channelgroup, FMOD_VECTOR **points, int *numpoints) {
	STUB;
}

FMOD_RESULT FMOD_Sound_Set3DCustomRolloff (FMOD_SOUND *sound, FMOD_VECTOR *points, int numpoints) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Set3DCustomRolloff (FMOD_CHANNELGROUP *channelgroup, FMOD_VECTOR *points, int numpoints) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetTag (FMOD_SOUND *sound, const char *name, int index, FMOD_TAG *tag) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_FlushSampleLoading(FMOD_STUDIO_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_System_IsRecording (FMOD_SYSTEM *system, int id, FMOD_BOOL *recording) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_GetCommandString(FMOD_STUDIO_COMMANDREPLAY *replay, int commandindex, char *buffer, int length) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_GetNumPlaying (FMOD_SOUNDGROUP *soundgroup, int *numplaying) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_IsPlaying (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL *isplaying) {
	STUB;
}

FMOD_RESULT FMOD_System_GetChannelsPlaying (FMOD_SYSTEM *system, int *channels, int *realchannels) {
	STUB;
}

FMOD_RESULT FMOD_DSP_ShowConfigDialog (FMOD_DSP *dsp, void *hwnd, FMOD_BOOL show) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_GetPitch(FMOD_STUDIO_EVENTINSTANCE *eventinstance, float *pitch, float *finalpitch) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetPitch (FMOD_CHANNELGROUP *channelgroup, float *pitch) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_SetPitch(FMOD_STUDIO_EVENTINSTANCE *eventinstance, float pitch) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetPitch (FMOD_CHANNELGROUP *channelgroup, float pitch) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_SetBankPath(FMOD_STUDIO_COMMANDREPLAY *replay, const char *bankPath) {
	STUB;
}

FMOD_RESULT FMOD_System_SetPluginPath (FMOD_SYSTEM *system, const char *path) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_LookupPath(FMOD_STUDIO_SYSTEM *system, const FMOD_GUID *id, char *path, int size, int *retrieved) {
	STUB;
}

FMOD_RESULT FMOD_Studio_VCA_GetPath(FMOD_STUDIO_VCA *vca, char *path, int size, int *retrieved) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetPath(FMOD_STUDIO_BANK *bank, char *path, int size, int *retrieved) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bus_GetPath(FMOD_STUDIO_BUS *bus, char *path, int size, int *retrieved) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetLength (FMOD_SOUND *sound, unsigned int *length, FMOD_TIMEUNIT lengthtype) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetLength(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, int *length) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_GetLength(FMOD_STUDIO_COMMANDREPLAY *replay, float *length) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_SetCreateInstanceCallback(FMOD_STUDIO_COMMANDREPLAY *replay, FMOD_STUDIO_COMMANDREPLAY_CREATE_INSTANCE_CALLBACK callback) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_SetFrameCallback(FMOD_STUDIO_COMMANDREPLAY *replay, FMOD_STUDIO_COMMANDREPLAY_FRAME_CALLBACK callback) {
	STUB;
}

FMOD_RESULT FMOD_System_Set3DRolloffCallback (FMOD_SYSTEM *system, FMOD_3D_ROLLOFF_CALLBACK callback) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_SetLoadBankCallback(FMOD_STUDIO_COMMANDREPLAY *replay, FMOD_STUDIO_COMMANDREPLAY_LOAD_BANK_CALLBACK callback) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_SetCallback(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_STUDIO_EVENT_CALLBACK callback, FMOD_STUDIO_EVENT_CALLBACK_TYPE callbackmask) {
	STUB;
}

FMOD_RESULT FMOD_System_SetCallback (FMOD_SYSTEM *system, FMOD_SYSTEM_CALLBACK callback, FMOD_SYSTEM_CALLBACK_TYPE callbackmask) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_SetCallback(FMOD_STUDIO_SYSTEM *system, FMOD_STUDIO_SYSTEM_CALLBACK callback, FMOD_STUDIO_SYSTEM_CALLBACK_TYPE callbackmask) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_SetCallback(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_STUDIO_EVENT_CALLBACK callback, FMOD_STUDIO_EVENT_CALLBACK_TYPE callbackmask) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetCallback (FMOD_CHANNELGROUP *channelgroup, FMOD_CHANNELCONTROL_CALLBACK callback) {
	STUB;
}

FMOD_RESULT FMOD_Sound_Lock (FMOD_SOUND *sound, unsigned int offset, unsigned int length, void **ptr1, void **ptr2, unsigned int *len1, unsigned int *len2) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetDSPClock (FMOD_CHANNELGROUP *channelgroup, unsigned long long *dspclock, unsigned long long *parentclock) {
	STUB;
}

FMOD_RESULT FMOD_Sound_Unlock (FMOD_SOUND *sound, void *ptr1, void *ptr2, unsigned int len1, unsigned int len2) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetBank(FMOD_STUDIO_SYSTEM *system, const char *pathOrID, FMOD_STUDIO_BANK **bank) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_GetListenerMask(FMOD_STUDIO_EVENTINSTANCE *eventinstance, unsigned int *mask) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_SetListenerMask(FMOD_STUDIO_EVENTINSTANCE *eventinstance, unsigned int mask) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_IsVirtual(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_BOOL *virtualstate) {
	STUB;
}

FMOD_RESULT FMOD_Channel_IsVirtual (FMOD_CHANNEL *channel, FMOD_BOOL *isvirtual) {
	STUB;
}

FMOD_RESULT FMOD_System_GetChannel (FMOD_SYSTEM *system, int channelid, FMOD_CHANNEL **channel) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetChannel (FMOD_CHANNELGROUP *channelgroup, int index, FMOD_CHANNEL **channel) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Get3DLevel (FMOD_CHANNELGROUP *channelgroup, float *level) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Set3DLevel (FMOD_CHANNELGROUP *channelgroup, float level) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_GetReverbLevel(FMOD_STUDIO_EVENTINSTANCE *eventinstance, int index, float *level) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_SetReverbLevel(FMOD_STUDIO_EVENTINSTANCE *eventinstance, int index, float level) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Get3DDopplerLevel (FMOD_CHANNELGROUP *channelgroup, float *level) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Set3DDopplerLevel (FMOD_CHANNELGROUP *channelgroup, float level) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_UnloadAll(FMOD_STUDIO_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_DSP_DisconnectAll (FMOD_DSP *dsp, FMOD_BOOL inputs, FMOD_BOOL outputs) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetParameterBool (FMOD_DSP *dsp, int index, FMOD_BOOL *value, char *valuestr, int valuestrlen) {
	STUB;
}

FMOD_RESULT FMOD_DSP_SetParameterBool (FMOD_DSP *dsp, int index, FMOD_BOOL value) {
	STUB;
}

FMOD_RESULT FMOD_System_CreateStream (FMOD_SYSTEM *system, const char *name_or_data, FMOD_MODE mode, FMOD_CREATESOUNDEXINFO *exinfo, FMOD_SOUND **sound) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_IsStream(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_BOOL *isStream) {
	STUB;
}

FMOD_RESULT FMOD_System_AttachFileSystem (FMOD_SYSTEM *system, FMOD_FILE_OPEN_CALLBACK useropen, FMOD_FILE_CLOSE_CALLBACK userclose, FMOD_FILE_READ_CALLBACK userread, FMOD_FILE_SEEK_CALLBACK userseek) {
	STUB;
}

FMOD_RESULT FMOD_System_SetFileSystem (FMOD_SYSTEM *system, FMOD_FILE_OPEN_CALLBACK useropen, FMOD_FILE_CLOSE_CALLBACK userclose, FMOD_FILE_READ_CALLBACK userread, FMOD_FILE_SEEK_CALLBACK userseek, FMOD_FILE_ASYNCREAD_CALLBACK userasyncread, FMOD_FILE_ASYNCCANCEL_CALLBACK userasynccancel, int blockalign) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_GetSystem(FMOD_STUDIO_COMMANDREPLAY *replay, FMOD_STUDIO_SYSTEM **system) {
	STUB;
}

FMOD_RESULT FMOD_DSP_DisconnectFrom (FMOD_DSP *dsp, FMOD_DSP *target, FMOD_DSPCONNECTION *connection) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_LoadBankCustom(FMOD_STUDIO_SYSTEM *system, const FMOD_STUDIO_BANK_INFO *info, FMOD_STUDIO_LOAD_BANK_FLAGS flags, FMOD_STUDIO_BANK **bank) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetPan (FMOD_CHANNELGROUP *channelgroup, float pan) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetLowPassGain (FMOD_CHANNELGROUP *channelgroup, float *gain) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetLowPassGain (FMOD_CHANNELGROUP *channelgroup, float gain) {
	STUB;
}

FMOD_RESULT FMOD_System_LoadPlugin (FMOD_SYSTEM *system, const char *filename, unsigned int *handle, unsigned int priority) {
	STUB;
}

FMOD_RESULT FMOD_System_UnloadPlugin (FMOD_SYSTEM *system, unsigned int handle) {
	STUB;
}

FMOD_RESULT FMOD_System_GetNestedPlugin (FMOD_SYSTEM *system, unsigned int handle, int index, unsigned int *nestedhandle) {
	STUB;
}

FMOD_RESULT FMOD_System_CreateDSPByPlugin (FMOD_SYSTEM *system, unsigned int handle, FMOD_DSP **dsp) {
	STUB;
}

FMOD_RESULT FMOD_System_GetDSPInfoByPlugin (FMOD_SYSTEM *system, unsigned int handle, const FMOD_DSP_DESCRIPTION **description) {
	STUB;
}

FMOD_RESULT FMOD_System_GetOutputByPlugin (FMOD_SYSTEM *system, unsigned int *handle) {
	STUB;
}

FMOD_RESULT FMOD_System_SetOutputByPlugin (FMOD_SYSTEM *system, unsigned int handle) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_AddPolygon (FMOD_GEOMETRY *geometry, float directocclusion, float reverbocclusion, FMOD_BOOL doublesided, int numvertices, const FMOD_VECTOR *vertices, int *polygonindex) {
	STUB;
}

FMOD_RESULT FMOD_System_GetVersion (FMOD_SYSTEM *system, unsigned int *version) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Get3DOcclusion (FMOD_CHANNELGROUP *channelgroup, float *directocclusion, float *reverbocclusion) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Set3DOcclusion (FMOD_CHANNELGROUP *channelgroup, float directocclusion, float reverbocclusion) {
	STUB;
}

FMOD_RESULT FMOD_System_GetGeometryOcclusion (FMOD_SYSTEM *system, const FMOD_VECTOR *listener, const FMOD_VECTOR *source, float *direct, float *reverb) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Get3DConeOrientation(FMOD_CHANNELGROUP *channelgroup, FMOD_VECTOR *orientation) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Set3DConeOrientation(FMOD_CHANNELGROUP *channelgroup, FMOD_VECTOR *orientation) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_GetRotation (FMOD_GEOMETRY *geometry, FMOD_VECTOR *forward, FMOD_VECTOR *up) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_SetRotation (FMOD_GEOMETRY *geometry, const FMOD_VECTOR *forward, const FMOD_VECTOR *up) {
	STUB;
}

FMOD_RESULT FMOD_System_GetRecordPosition (FMOD_SYSTEM *system, int id, unsigned int *position) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_GetTimelinePosition(FMOD_STUDIO_EVENTINSTANCE *eventinstance, int *position) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_SetTimelinePosition(FMOD_STUDIO_EVENTINSTANCE *eventinstance, int position) {
	STUB;
}

FMOD_RESULT FMOD_System_GetSpeakerPosition (FMOD_SYSTEM *system, FMOD_SPEAKER speaker, float *x, float *y, FMOD_BOOL *active) {
	STUB;
}

FMOD_RESULT FMOD_System_SetSpeakerPosition (FMOD_SYSTEM *system, FMOD_SPEAKER speaker, float x, float y, FMOD_BOOL active) {
	STUB;
}

FMOD_RESULT FMOD_Channel_GetPosition (FMOD_CHANNEL *channel, unsigned int *position, FMOD_TIMEUNIT postype) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_GetPosition (FMOD_GEOMETRY *geometry, FMOD_VECTOR *position) {
	STUB;
}

FMOD_RESULT FMOD_Channel_SetPosition (FMOD_CHANNEL *channel, unsigned int position, FMOD_TIMEUNIT postype) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_SetPosition (FMOD_GEOMETRY *geometry, const FMOD_VECTOR *position) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_GetCommandInfo(FMOD_STUDIO_COMMANDREPLAY *replay, int commandindex, FMOD_STUDIO_COMMAND_INFO *info) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetSoundInfo(FMOD_STUDIO_SYSTEM *system, const char *key, FMOD_STUDIO_SOUND_INFO *info) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetMeteringInfo (FMOD_DSP *dsp, FMOD_DSP_METERING_INFO *inputInfo, FMOD_DSP_METERING_INFO *outputInfo) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetStringInfo(FMOD_STUDIO_BANK *bank, int index, FMOD_GUID *id, char *path, int size, int *retrieved) {
	STUB;
}

FMOD_RESULT FMOD_System_GetPluginInfo (FMOD_SYSTEM *system, unsigned int handle, FMOD_PLUGINTYPE *plugintype, char *name, int namelen, unsigned int *version) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetParameterInfo (FMOD_DSP *dsp, int index, FMOD_DSP_PARAMETER_DESC **desc) {
	STUB;
}

FMOD_RESULT FMOD_System_GetRecordDriverInfo (FMOD_SYSTEM *system, int id, char *name, int namelen, FMOD_GUID *guid, int *systemrate, FMOD_SPEAKERMODE *speakermode, int *speakermodechannels, FMOD_DRIVER_STATE *state) {
	STUB;
}

FMOD_RESULT FMOD_System_GetDriverInfo (FMOD_SYSTEM *system, int id, char *name, int namelen, FMOD_GUID *guid, int *systemrate, FMOD_SPEAKERMODE *speakermode, int *speakermodechannels) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetInfo (FMOD_DSP *dsp, char *name, unsigned int *version, int *channels, int *configwidth, int *configheight) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetSyncPointInfo (FMOD_SOUND *sound, FMOD_SYNCPOINT *point, char *name, int namelen, unsigned int *offset, FMOD_TIMEUNIT offsettype) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetVolumeRamp (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL *ramp) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetVolumeRamp (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL ramp) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetFadePointRamp (FMOD_CHANNELGROUP *channelgroup, unsigned long long dspclock, float volume) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_Stop (FMOD_SOUNDGROUP *soundgroup) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Stop (FMOD_CHANNELGROUP *channelgroup) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_Stop(FMOD_STUDIO_COMMANDREPLAY *replay) {
	STUB;
}

FMOD_RESULT FMOD_System_RecordStop (FMOD_SYSTEM *system, int id) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_AddGroup (FMOD_CHANNELGROUP *channelgroup, FMOD_CHANNELGROUP *group, FMOD_BOOL propagatedspclock, FMOD_DSPCONNECTION **connection) {
	STUB;
}

FMOD_RESULT FMOD_System_CreateSoundGroup (FMOD_SYSTEM *system, const char *name, FMOD_SOUNDGROUP **soundgroup) {
	STUB;
}

FMOD_RESULT FMOD_System_GetMasterSoundGroup (FMOD_SYSTEM *system, FMOD_SOUNDGROUP **soundgroup) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetSoundGroup (FMOD_SOUND *sound, FMOD_SOUNDGROUP **soundgroup) {
	STUB;
}

FMOD_RESULT FMOD_Sound_SetSoundGroup (FMOD_SOUND *sound, FMOD_SOUNDGROUP *soundgroup) {
	STUB;
}

FMOD_RESULT FMOD_System_CreateChannelGroup (FMOD_SYSTEM *system, const char *name, FMOD_CHANNELGROUP **channelgroup) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bus_LockChannelGroup(FMOD_STUDIO_BUS *bus) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bus_UnlockChannelGroup(FMOD_STUDIO_BUS *bus) {
	STUB;
}

FMOD_RESULT FMOD_System_GetMasterChannelGroup (FMOD_SYSTEM *system, FMOD_CHANNELGROUP **channelgroup) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_GetChannelGroup(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_CHANNELGROUP **group) {
	STUB;
}

FMOD_RESULT FMOD_Channel_GetChannelGroup (FMOD_CHANNEL *channel, FMOD_CHANNELGROUP **channelgroup) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bus_GetChannelGroup(FMOD_STUDIO_BUS *bus, FMOD_CHANNELGROUP **group) {
	STUB;
}

FMOD_RESULT FMOD_Channel_SetChannelGroup (FMOD_CHANNEL *channel, FMOD_CHANNELGROUP *channelgroup) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetGroup (FMOD_CHANNELGROUP *channelgroup, int index, FMOD_CHANNELGROUP **group) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetParentGroup (FMOD_CHANNELGROUP *channelgroup, FMOD_CHANNELGROUP **group) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Get3DDistanceFilter (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL *custom, float *customLevel, float *centerFreq) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Set3DDistanceFilter (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL custom, float customLevel, float centerFreq) {
	STUB;
}

FMOD_RESULT FMOD_System_GetDriver (FMOD_SYSTEM *system, int *driver) {
	STUB;
}

FMOD_RESULT FMOD_System_SetDriver (FMOD_SYSTEM *system, int driver) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_GetMaxAudibleBehavior (FMOD_SOUNDGROUP *soundgroup, FMOD_SOUNDGROUP_BEHAVIOR *behavior) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_SetMaxAudibleBehavior (FMOD_SOUNDGROUP *soundgroup, FMOD_SOUNDGROUP_BEHAVIOR behavior) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetNumDSPs (FMOD_CHANNELGROUP *channelgroup, int *numdsps) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_FlushCommands(FMOD_STUDIO_SYSTEM *system) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetNumSubSounds (FMOD_SOUND *sound, int *numsubsounds) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_GetNumSounds (FMOD_SOUNDGROUP *soundgroup, int *numsounds) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_GetPolygonNumVertices (FMOD_GEOMETRY *geometry, int index, int *numvertices) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_ReleaseAllInstances(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription) {
	STUB;
}

FMOD_RESULT FMOD_System_GetReverbProperties (FMOD_SYSTEM *system, int instance, FMOD_REVERB_PROPERTIES *prop) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetReverbProperties (FMOD_CHANNELGROUP *channelgroup, int instance, float *wet) {
	STUB;
}

FMOD_RESULT FMOD_System_SetReverbProperties (FMOD_SYSTEM *system, int instance, const FMOD_REVERB_PROPERTIES *prop) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetReverbProperties (FMOD_CHANNELGROUP *channelgroup, int instance, float wet) {
	STUB;
}

FMOD_RESULT FMOD_Reverb3D_GetProperties (FMOD_REVERB3D *reverb3d, FMOD_REVERB_PROPERTIES *properties) {
	STUB;
}

FMOD_RESULT FMOD_Reverb3D_SetProperties (FMOD_REVERB3D *reverb3d, const FMOD_REVERB_PROPERTIES *properties) {
	STUB;
}

FMOD_RESULT FMOD_Reverb3D_Get3DAttributes (FMOD_REVERB3D *reverb3d, FMOD_VECTOR *position, float *mindistance, float *maxdistance) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_Get3DAttributes(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_3D_ATTRIBUTES *attributes) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Get3DAttributes (FMOD_CHANNELGROUP *channelgroup, FMOD_VECTOR *pos, FMOD_VECTOR *vel) {
	STUB;
}

FMOD_RESULT FMOD_Reverb3D_Set3DAttributes (FMOD_REVERB3D *reverb3d, const FMOD_VECTOR *position, float mindistance, float maxdistance) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_Set3DAttributes(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_3D_ATTRIBUTES *attributes) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Set3DAttributes (FMOD_CHANNELGROUP *channelgroup, const FMOD_VECTOR *pos, const FMOD_VECTOR *vel) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_GetPolygonAttributes (FMOD_GEOMETRY *geometry, int index, float *directocclusion, float *reverbocclusion, FMOD_BOOL *doublesided) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_SetPolygonAttributes (FMOD_GEOMETRY *geometry, int index, float directocclusion, float reverbocclusion, FMOD_BOOL doublesided) {
	STUB;
}

FMOD_RESULT FMOD_System_Get3DListenerAttributes (FMOD_SYSTEM *system, int listener, FMOD_VECTOR *pos, FMOD_VECTOR *vel, FMOD_VECTOR *forward, FMOD_VECTOR *up) {
	STUB;
}

FMOD_RESULT FMOD_System_Set3DListenerAttributes (FMOD_SYSTEM *system, int listener, const FMOD_VECTOR *pos, const FMOD_VECTOR *vel, const FMOD_VECTOR *forward, const FMOD_VECTOR *up) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetListenerAttributes(FMOD_STUDIO_SYSTEM *system, int index, FMOD_3D_ATTRIBUTES *attributes, FMOD_VECTOR *attenuationposition) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetNumTags (FMOD_SOUND *sound, int *numtags, int *numtagsupdated) {
	STUB;
}

FMOD_RESULT FMOD_System_Get3DSettings (FMOD_SYSTEM *system, float *dopplerscale, float *distancefactor, float *rolloffscale) {
	STUB;
}

FMOD_RESULT FMOD_System_Set3DSettings (FMOD_SYSTEM *system, float dopplerscale, float distancefactor, float rolloffscale) {
	STUB;
}

FMOD_RESULT FMOD_System_GetAdvancedSettings (FMOD_SYSTEM *system, FMOD_ADVANCEDSETTINGS *settings) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetAdvancedSettings(FMOD_STUDIO_SYSTEM *system, FMOD_STUDIO_ADVANCEDSETTINGS *settings) {
	STUB;
}

FMOD_RESULT FMOD_System_SetAdvancedSettings (FMOD_SYSTEM *system, FMOD_ADVANCEDSETTINGS *settings) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_SetAdvancedSettings(FMOD_STUDIO_SYSTEM *system, FMOD_STUDIO_ADVANCEDSETTINGS *settings) {
	printf("Setting advanced settings.  Encryption key is '%s'.\n", settings->encryptionkey);
	STUB;
}

FMOD_RESULT FMOD_Sound_Get3DConeSettings (FMOD_SOUND *sound, float *insideconeangle, float *outsideconeangle, float *outsidevolume) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Get3DConeSettings (FMOD_CHANNELGROUP *channelgroup, float *insideconeangle, float *outsideconeangle, float *outsidevolume) {
	STUB;
}

FMOD_RESULT FMOD_Sound_Set3DConeSettings (FMOD_SOUND *sound, float insideconeangle, float outsideconeangle, float outsidevolume) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_Set3DConeSettings (FMOD_CHANNELGROUP *channelgroup, float insideconeangle, float outsideconeangle, float outsidevolume) {
	STUB;
}

FMOD_RESULT FMOD_System_GetGeometrySettings (FMOD_SYSTEM *system, float *maxworldsize) {
	STUB;
}

FMOD_RESULT FMOD_System_SetGeometrySettings (FMOD_SYSTEM *system, float maxworldsize) {
	STUB;
}

FMOD_RESULT FMOD_System_GetSpeakerModeChannels (FMOD_SYSTEM *system, FMOD_SPEAKERMODE mode, int *channels) {
	STUB;
}

FMOD_RESULT FMOD_System_GetSoftwareChannels (FMOD_SYSTEM *system, int *numsoftwarechannels) {
	STUB;
}

FMOD_RESULT FMOD_System_SetSoftwareChannels (FMOD_SYSTEM *system, int numsoftwarechannels) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetMusicNumChannels (FMOD_SOUND *sound, int *numchannels) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetNumChannels (FMOD_CHANNELGROUP *channelgroup, int *numchannels) {
	STUB;
}

FMOD_RESULT FMOD_System_GetNumNestedPlugins (FMOD_SYSTEM *system, unsigned int handle, int *count) {
	STUB;
}

FMOD_RESULT FMOD_System_GetNumPlugins (FMOD_SYSTEM *system, FMOD_PLUGINTYPE plugintype, int *numplugins) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_GetNumPolygons (FMOD_GEOMETRY *geometry, int *numpolygons) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_GetMaxPolygons (FMOD_GEOMETRY *geometry, int *maxpolygons, int *maxvertices) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetNumGroups (FMOD_CHANNELGROUP *channelgroup, int *numgroups) {
	STUB;
}

FMOD_RESULT FMOD_System_Get3DNumListeners (FMOD_SYSTEM *system, int *numlisteners) {
	STUB;
}

FMOD_RESULT FMOD_System_Set3DNumListeners (FMOD_SYSTEM *system, int numlisteners) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetNumListeners(FMOD_STUDIO_SYSTEM *system, int *numlisteners) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_SetNumListeners(FMOD_STUDIO_SYSTEM *system, int numlisteners) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetNumParameters (FMOD_DSP *dsp, int *numparams) {
	STUB;
}

FMOD_RESULT FMOD_System_GetRecordNumDrivers (FMOD_SYSTEM *system, int *numdrivers, int *numconnected) {
	STUB;
}

FMOD_RESULT FMOD_System_GetNumDrivers (FMOD_SYSTEM *system, int *numdrivers) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetBypass (FMOD_DSP *dsp, FMOD_BOOL *bypass) {
	STUB;
}

FMOD_RESULT FMOD_DSP_SetBypass (FMOD_DSP *dsp, FMOD_BOOL bypass) {
	STUB;
}

FMOD_RESULT FMOD_Memory_GetStats (int *currentalloced, int *maxalloced, FMOD_BOOL blocking) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetDefaults (FMOD_SOUND *sound, float *frequency, int *priority) {
	STUB;
}

FMOD_RESULT FMOD_Sound_SetDefaults (FMOD_SOUND *sound, float frequency, int priority) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bus_StopAllEvents(FMOD_STUDIO_BUS *bus, FMOD_STUDIO_STOP_MODE mode) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetNumSyncPoints (FMOD_SOUND *sound, int *numsyncpoints) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_RemoveFadePoints (FMOD_CHANNELGROUP *channelgroup, unsigned long long dspclock_start, unsigned long long dspclock_end) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetFadePoints (FMOD_CHANNELGROUP *channelgroup, unsigned int *numpoints, unsigned long long *point_dspclock, float *point_volume) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetLoopPoints (FMOD_SOUND *sound, unsigned int *loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int *loopend, FMOD_TIMEUNIT loopendtype) {
	STUB;
}

FMOD_RESULT FMOD_Channel_GetLoopPoints (FMOD_CHANNEL *channel, unsigned int *loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int *loopend, FMOD_TIMEUNIT loopendtype) {
	STUB;
}

FMOD_RESULT FMOD_Sound_SetLoopPoints (FMOD_SOUND *sound, unsigned int loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int loopend, FMOD_TIMEUNIT loopendtype) {
	STUB;
}

FMOD_RESULT FMOD_Channel_SetLoopPoints (FMOD_CHANNEL *channel, unsigned int loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int loopend, FMOD_TIMEUNIT loopendtype) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetNumInputs (FMOD_DSP *dsp, int *numinputs) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetNumOutputs (FMOD_DSP *dsp, int *numoutputs) {
	STUB;
}

FMOD_RESULT FMOD_System_GetSoftwareFormat (FMOD_SYSTEM *system, int *samplerate, FMOD_SPEAKERMODE *speakermode, int *numrawspeakers) {
	STUB;
}

FMOD_RESULT FMOD_System_SetSoftwareFormat (FMOD_SYSTEM *system, int samplerate, FMOD_SPEAKERMODE speakermode, int numrawspeakers) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetChannelFormat (FMOD_DSP *dsp, FMOD_CHANNELMASK *channelmask, int *numchannels, FMOD_SPEAKERMODE *source_speakermode) {
	STUB;
}

FMOD_RESULT FMOD_DSP_SetChannelFormat (FMOD_DSP *dsp, FMOD_CHANNELMASK channelmask, int numchannels, FMOD_SPEAKERMODE source_speakermode) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetOutputChannelFormat (FMOD_DSP *dsp, FMOD_CHANNELMASK inmask, int inchannels, FMOD_SPEAKERMODE inspeakermode, FMOD_CHANNELMASK *outmask, int *outchannels, FMOD_SPEAKERMODE *outspeakermode) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetFormat (FMOD_SOUND *sound, FMOD_SOUND_TYPE *type, FMOD_SOUND_FORMAT *format, int *channels, int *bits) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetParameterFloat (FMOD_DSP *dsp, int index, float *value, char *valuestr, int valuestrlen) {
	STUB;
}

FMOD_RESULT FMOD_DSP_SetParameterFloat (FMOD_DSP *dsp, int index, float value) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetSystemObject (FMOD_DSP *dsp, FMOD_SYSTEM **system) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetSystemObject (FMOD_SOUND *sound, FMOD_SYSTEM **system) {
	STUB;
}

FMOD_RESULT FMOD_SoundGroup_GetSystemObject (FMOD_SOUNDGROUP *soundgroup, FMOD_SYSTEM **system) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetSystemObject (FMOD_CHANNELGROUP *channelgroup, FMOD_SYSTEM **system) {
	STUB;
}

FMOD_RESULT FMOD_DSP_Reset (FMOD_DSP *dsp) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetListenerWeight(FMOD_STUDIO_SYSTEM *system, int index, float *weight) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_SetListenerWeight(FMOD_STUDIO_SYSTEM *system, int index, float weight) {
	STUB;
}

FMOD_RESULT FMOD_System_Init (FMOD_SYSTEM *system, int maxchannels, FMOD_INITFLAGS flags, void *extradriverdata) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetParameterInt (FMOD_DSP *dsp, int index, int *value, char *valuestr, int valuestrlen) {
	STUB;
}

FMOD_RESULT FMOD_DSP_SetParameterInt (FMOD_DSP *dsp, int index, int value) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetSubSoundParent (FMOD_SOUND *sound, FMOD_SOUND **parentsound) {
	STUB;
}

FMOD_RESULT FMOD_Sound_AddSyncPoint (FMOD_SOUND *sound, unsigned int offset, FMOD_TIMEUNIT offsettype, const char *name, FMOD_SYNCPOINT **point) {
	STUB;
}

FMOD_RESULT FMOD_Sound_DeleteSyncPoint (FMOD_SOUND *sound, FMOD_SYNCPOINT *point) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetSyncPoint (FMOD_SOUND *sound, int index, FMOD_SYNCPOINT **point) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_AddFadePoint (FMOD_CHANNELGROUP *channelgroup, unsigned long long dspclock, float volume) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetVCACount(FMOD_STUDIO_BANK *bank, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_GetCommandCount(FMOD_STUDIO_COMMANDREPLAY *replay, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetInstanceCount(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetStringCount(FMOD_STUDIO_BANK *bank, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetBankCount(FMOD_STUDIO_SYSTEM *system, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Sound_GetLoopCount (FMOD_SOUND *sound, int *loopcount) {
	STUB;
}

FMOD_RESULT FMOD_Channel_GetLoopCount (FMOD_CHANNEL *channel, int *loopcount) {
	STUB;
}

FMOD_RESULT FMOD_Sound_SetLoopCount (FMOD_SOUND *sound, int loopcount) {
	STUB;
}

FMOD_RESULT FMOD_Channel_SetLoopCount (FMOD_CHANNEL *channel, int loopcount) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetBusCount(FMOD_STUDIO_BANK *bank, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetEventCount(FMOD_STUDIO_BANK *bank, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetUserPropertyCount(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_IsSnapshot(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_BOOL *snapshot) {
	STUB;
}

FMOD_RESULT FMOD_Studio_CommandReplay_Start(FMOD_STUDIO_COMMANDREPLAY *replay) {
	STUB;
}

FMOD_RESULT FMOD_System_RecordStart (FMOD_SYSTEM *system, int id, FMOD_SOUND *sound, FMOD_BOOL loop) {
	STUB;
}

FMOD_RESULT FMOD_System_DetachChannelGroupFromPort(FMOD_SYSTEM *system, FMOD_CHANNELGROUP *channelgroup) {
	STUB;
}

FMOD_RESULT FMOD_System_AttachChannelGroupToPort (FMOD_SYSTEM *system, FMOD_PORT_TYPE portType, FMOD_PORT_INDEX portIndex, FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL passThru) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetVCAList(FMOD_STUDIO_BANK *bank, FMOD_STUDIO_VCA **array, int capacity, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetInstanceList(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, FMOD_STUDIO_EVENTINSTANCE **array, int capacity, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_GetBankList(FMOD_STUDIO_SYSTEM *system, FMOD_STUDIO_BANK **array, int capacity, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetBusList(FMOD_STUDIO_BANK *bank, FMOD_STUDIO_BUS **array, int capacity, int *count) {
	STUB;
}

FMOD_RESULT FMOD_Studio_Bank_GetEventList(FMOD_STUDIO_BANK *bank, FMOD_STUDIO_EVENTDESCRIPTION **array, int capacity, int *count) {
	STUB;
}

FMOD_RESULT FMOD_System_GetNetworkTimeout (FMOD_SYSTEM *system, int *timeout) {
	STUB;
}

FMOD_RESULT FMOD_System_SetNetworkTimeout (FMOD_SYSTEM *system, int timeout) {
	STUB;
}

FMOD_RESULT FMOD_DSP_AddInput (FMOD_DSP *dsp, FMOD_DSP *input, FMOD_DSPCONNECTION **connection, FMOD_DSPCONNECTION_TYPE type) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetMixLevelsInput (FMOD_CHANNELGROUP *channelgroup, float *levels, int numlevels) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetInput (FMOD_DSP *dsp, int index, FMOD_DSP **input, FMOD_DSPCONNECTION **inputconnection) {
	STUB;
}

FMOD_RESULT FMOD_DSPConnection_GetInput (FMOD_DSPCONNECTION *dspconnection, FMOD_DSP **input) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetMixLevelsOutput (FMOD_CHANNELGROUP *channelgroup, float frontleft, float frontright, float center, float lfe, float surroundleft, float surroundright, float backleft, float backright) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetOutput (FMOD_DSP *dsp, int index, FMOD_DSP **output, FMOD_DSPCONNECTION **outputconnection) {
	STUB;
}

FMOD_RESULT FMOD_System_GetOutput (FMOD_SYSTEM *system, FMOD_OUTPUTTYPE *output) {
	STUB;
}

FMOD_RESULT FMOD_DSPConnection_GetOutput (FMOD_DSPCONNECTION *dspconnection, FMOD_DSP **output) {
	STUB;
}

FMOD_RESULT FMOD_System_SetOutput (FMOD_SYSTEM *system, FMOD_OUTPUTTYPE output) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetDSPIndex (FMOD_CHANNELGROUP *channelgroup, FMOD_DSP *dsp, int *index) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetDSPIndex (FMOD_CHANNELGROUP *channelgroup, FMOD_DSP *dsp, int index) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetDataParameterIndex (FMOD_DSP *dsp, int datatype, int *index) {
	STUB;
}

FMOD_RESULT FMOD_Channel_GetIndex (FMOD_CHANNEL *channel, int *index) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetUserPropertyByIndex(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, int index, FMOD_STUDIO_USER_PROPERTY *property) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_GetPolygonVertex (FMOD_GEOMETRY *geometry, int index, int vertexindex, FMOD_VECTOR *vertex) {
	STUB;
}

FMOD_RESULT FMOD_Geometry_SetPolygonVertex (FMOD_GEOMETRY *geometry, int index, int vertexindex, const FMOD_VECTOR *vertex) {
	STUB;
}

FMOD_RESULT FMOD_DSPConnection_GetMix (FMOD_DSPCONNECTION *dspconnection, float *volume) {
	STUB;
}

FMOD_RESULT FMOD_DSPConnection_SetMix (FMOD_DSPCONNECTION *dspconnection, float volume) {
	STUB;
}

FMOD_RESULT FMOD_DSP_GetWetDryMix (FMOD_DSP *dsp, float *prewet, float *postwet, float *dry) {
	STUB;
}

FMOD_RESULT FMOD_DSP_SetWetDryMix (FMOD_DSP *dsp, float prewet, float postwet, float dry) {
	STUB;
}

FMOD_RESULT FMOD_DSPConnection_GetMixMatrix (FMOD_DSPCONNECTION *dspconnection, float *matrix, int *outchannels, int *inchannels, int inchannel_hop) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetMixMatrix (FMOD_CHANNELGROUP *channelgroup, float *matrix, int *outchannels, int *inchannels, int inchannel_hop) {
	STUB;
}

FMOD_RESULT FMOD_DSPConnection_SetMixMatrix (FMOD_DSPCONNECTION *dspconnection, float *matrix, int outchannels, int inchannels, int inchannel_hop) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetMixMatrix (FMOD_CHANNELGROUP *channelgroup, float *matrix, int outchannels, int inchannels, int inchannel_hop) {
	STUB;
}

FMOD_RESULT FMOD_System_GetDefaultMixMatrix (FMOD_SYSTEM *system, FMOD_SPEAKERMODE sourcespeakermode, FMOD_SPEAKERMODE targetspeakermode, float *matrix, int matrixhop) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetDelay (FMOD_CHANNELGROUP *channelgroup, unsigned long long *dspclock_start, unsigned long long *dspclock_end, FMOD_BOOL *stopchannels) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_SetDelay (FMOD_CHANNELGROUP *channelgroup, unsigned long long dspclock_start, unsigned long long dspclock_end, FMOD_BOOL stopchannels) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_LoadCommandReplay(FMOD_STUDIO_SYSTEM *system, const char *filename, FMOD_STUDIO_COMMANDREPLAY_FLAGS flags, FMOD_STUDIO_COMMANDREPLAY **replay) {
	STUB;
}

FMOD_RESULT FMOD_Channel_GetFrequency (FMOD_CHANNEL *channel, float *frequency) {
	STUB;
}

FMOD_RESULT FMOD_Channel_SetFrequency (FMOD_CHANNEL *channel, float frequency) {
	STUB;
}

FMOD_RESULT FMOD_Studio_System_LoadBankMemory(FMOD_STUDIO_SYSTEM *system, const char *buffer, int length, FMOD_STUDIO_LOAD_MEMORY_MODE mode, FMOD_STUDIO_LOAD_BANK_FLAGS flags, FMOD_STUDIO_BANK **bank) {
	STUB;
}

FMOD_RESULT FMOD_System_LoadGeometry (FMOD_SYSTEM *system, const void *data, int datasize, FMOD_GEOMETRY **geometry) {
	STUB;
}

FMOD_RESULT FMOD_System_CreateGeometry (FMOD_SYSTEM *system, int maxpolygons, int maxvertices, FMOD_GEOMETRY **geometry) {
	STUB;
}

FMOD_RESULT FMOD_ChannelGroup_GetAudibility (FMOD_CHANNELGROUP *channelgroup, float *audibility) {
	STUB;
}

FMOD_RESULT FMOD_Channel_GetPriority (FMOD_CHANNEL *channel, int *priority) {
	STUB;
}

FMOD_RESULT FMOD_Channel_SetPriority (FMOD_CHANNEL *channel, int priority) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventDescription_GetUserProperty(FMOD_STUDIO_EVENTDESCRIPTION *eventdescription, const char *name, FMOD_STUDIO_USER_PROPERTY *property) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_GetProperty(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_STUDIO_EVENT_PROPERTY index, float *value) {
	STUB;
}

FMOD_RESULT FMOD_Studio_EventInstance_SetProperty(FMOD_STUDIO_EVENTINSTANCE *eventinstance, FMOD_STUDIO_EVENT_PROPERTY index, float value) {
	STUB;
}

FMOD_RESULT FMOD_System_GetNetworkProxy (FMOD_SYSTEM *system, char *proxy, int proxylen) {
	STUB;
}

FMOD_RESULT FMOD_System_SetNetworkProxy (FMOD_SYSTEM *system, const char *proxy) {
	STUB;
}

