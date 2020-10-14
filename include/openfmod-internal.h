#ifndef OPENFMOD_INTERNAL_H
#define OPENFMOD_INTERNAL_H

#include <stdio.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stdlib.h>

#include <gorilla/gau.h>

extern atomic_bool is_gorilla_initialized;

struct FMOD_STUDIO_SYSTEM {
	struct {
		gau_Manager *mgr;
		ga_Mixer *mixer;
		ga_StreamManager *stream_mgr;
	} ga;
};

#define DEPRECATED() printf("Warning: function '%s' is deprecated.\n", __func__)
#define FSTUB() do { \
	printf("Warning: function '%s' has been stubbed and is nonoperational.\n", __func__); \
	return FMOD_OK; \
} while (0)
#define CSTUB(...) do { \
	char buf[512]; \
	snprintf(buf, sizeof(buf), __VA_ARGS__); \
	printf("Warning: functionality '%s' of function '%s' has been stubbed and is nonoperational.\n", buf, __func__); \
	return FMOD_OK; \
} while (0)

#define BSTUB() do { \
	printf("Warning: function '%s' has been stubbed and is nonoperational.\n", __func__); \
	return 1; \
} while (0)

#endif //OPENFMOD_INTERNAL_H
