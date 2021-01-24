#include "openfmod.h"
#include "openfmod-internal.h"

static struct {
	void *data;
	FMOD_DEBUG_FLAGS flags;
	FMOD_RESULT (*cb)(FMOD_DEBUG_FLAGS level, Cc1 *file, int line, Cc1 *function, Cc1 *string, va_list ap);
} logging_info;

static FMOD_RESULT logcb_file(FMOD_DEBUG_FLAGS level, Cc1 *file, int line, Cc1 *function, Cc1 *string, va_list ap) {
	if (fprintf(logging_info.data, "%s:%s:%d: ", file, function, line) < 0) return FMOD_ERR_FILE_BAD; //is this right?
	if (vfprintf(logging_info.data, string, ap) < 0) return FMOD_ERR_FILE_BAD; //ditto
	return FMOD_OK;
}

static FMOD_RESULT vdolog(FMOD_DEBUG_FLAGS level, Cc1 *file, int line, Cc1 *function, Cc1 *string, va_list ap) {
	if (!(level & logging_info.flags)) return FMOD_OK;
	return logging_info.cb(level, file, line, function, string, ap);
}
FMOD_RESULT FMOD_log(FMOD_DEBUG_FLAGS level, Cc1 *file, int line, Cc1 *function, Cc1 *string, ...) {
	va_list ap;
	va_start(ap, string);
	FMOD_RESULT res = vdolog(level, file, line, function, string, ap);
	va_end(ap);
	return res;
}

FMOD_RESULT FMOD_Debug_Initialize(FMOD_DEBUG_FLAGS flags, FMOD_DEBUG_MODE mode, FMOD_DEBUG_CALLBACK callback, const char *filename) {
	switch (mode) {
		case FMOD_DEBUG_MODE_TTY:
			logging_info.data = stderr;
			logging_info.cb = logcb_file;
			break;
		case FMOD_DEBUG_MODE_FILE: {
			if (!filename) return FMOD_ERR_INVALID_PARAM;
			FILE *fp = fopen(filename, "a");
			if (!fp) return FMOD_ERR_FILE_NOTFOUND;
			logging_info.data = fb;
			logging_info.cb = logcb_file;
			break;
		}
		case FMOD_DEBUG_MODE_FILE:
			if (!callback) return FMOD_ERR_INVALID_PARAM;
			logging_info.cb = callback;
			break;
	}
	logging_info.flags = flags;
}


FMOD_RESULT FMOD_System_Release (FMOD_SYSTEM *system) {
	if (logging_info.cb == logcb_file && logging_info.data != stderr) fclose(logging_info.data);
}
