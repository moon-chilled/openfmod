#ifndef OPENFMOD_INTERNAL_H
#define OPENFMOD_INTERNAL_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>

#include <gorilla/gau.h>

typedef char c1;
typedef const char Cc1;
typedef int8_t s1;
typedef int32_t s4;
typedef int64_t s8;
typedef uint8_t u1;
typedef uint32_t u4;
typedef uint64_t u8;

typedef size_t usz;
typedef ptrdiff_t ssz;

extern FILE *logfp;

typedef struct {
	Cc1 *key;
	FMOD_GUID val;
} *MapPathToGuid;

struct FMOD_SOUND {
	bool is_mem, is_loaded;
	GaHandle *handle;
	Cc1 *fpath;
};

struct FMOD_STUDIO_EVENTDESCRIPTION {
	FMOD_STUDIO_SYSTEM *sys;

	Cc1 *path;

	FMOD_SOUND **sounds;
};

struct FMOD_STUDIO_EVENTINSTANCE {
	FMOD_STUDIO_SYSTEM *sys;
	FMOD_STUDIO_EVENTDESCRIPTION *evd;

	bool playing;
	FMOD_SOUND *snd; //just pick one for now...
};

//todo proper hashmap
typedef struct {
	FMOD_GUID key;
	FMOD_STUDIO_EVENTDESCRIPTION *val;
} *MapGuidToEventDescr;

void guid_evdescr_insert(MapGuidToEventDescr *map, FMOD_GUID *key, FMOD_STUDIO_EVENTDESCRIPTION *val);
FMOD_STUDIO_EVENTDESCRIPTION **guid_evdescr_get(MapGuidToEventDescr *map, FMOD_GUID *key);

void path_guid_insert(MapPathToGuid *map, Cc1 *key, FMOD_GUID *guid);
FMOD_GUID *path_guid_get(MapPathToGuid *map, Cc1 *key);

struct FMOD_STUDIO_SYSTEM {
	FMOD_SYSTEM *system;
	struct {
		GauManager *mgr;
		GaMixer *mixer;
		GaStreamManager *stream_mgr;
	} ga;

	MapPathToGuid pathmap;
	MapGuidToEventDescr sounds;
};

struct FMOD_STUDIO_BANK {
	FMOD_STUDIO_SYSTEM *sys;
	c1 *dir;
	c1 *basename; // excludes '.bank' suffix if present

	MapGuidToEventDescr sounds;
};

FMOD_RESULT FMOD_log(FMOD_DEBUG_FLAGS level, Cc1 *file, int line, Cc1 *function, Cc1 *string, ...);

#define trace(...) FMOD_log(FMOD_DEBUG_LEVEL_LOG, __FILE__, __LINE__, __func__, __VA_ARGS__)
#define log(...) FMOD_log(FMOD_DEBUG_LEVEL_LOG, __FILE__, __LINE__, __func__, __VA_ARGS__)
#define warn(...) FMOD_log(FMOD_DEBUG_LEVEL_WARNING, __FILE__, __LINE__, __func__, __VA_ARGS__)

#define DEPRECATED() warn("Warning: function '%s' is deprecated.", __func__)
#define FSTUB() do { \
	warn("Warning: function '%s' has been stubbed and is nonoperational.", __func__); \
	return FMOD_OK; \
} while (0)
#define CSTUB(...) do { \
	c1 buf[512]; \
	snprintf(buf, sizeof(buf), __VA_ARGS__); \
	warn("Warning: functionality '%s' of function '%s' has been stubbed and is nonoperational.", buf, __func__); \
	return FMOD_OK; \
} while (0)

#define BSTUB() do { \
	warn("Warning: function '%s' has been stubbed and is nonoperational.", __func__); \
	return 1; \
} while (0)


#define ALEN(x) (sizeof(x)/sizeof(0[x]))

// mem* functions that don't need a size param

// check that: both have same element size; and if both are arrays, they have the same length
#ifdef __GNUC__
# define mcompat(x,y) ({ \
	static_assert(sizeof(*(x)) == sizeof(*(y)), "sizeof element of " #x " != sizeof element of " #y); \
	_Pragma("GCC diagnostic push"); \
	_Pragma("GCC diagnostic ignored \"-Wsizeof-pointer-div\""); \
	static_assert(sizeof(x)==sizeof(void*) || sizeof(y)==sizeof(void*) || sizeof(x)==sizeof(y), "one of " #x " or " #y " is an array, but they do not have the same size"); \
	_Pragma("GCC diagnostic pop"); \
	(void)0;})
#else
# define mcompat(x,y) (void)0
#endif

#define cpy(dst,src,n) (mcompat(dst,src), (typeof(dst))memcpy((dst),(src),(n)*sizeof(*(dst))))
#define move(dst,src,n) (mcompat(dst,src), (typeof(dst))memmove((dst),(src),(n)*sizeof(*(dst))))
#define cmp(x,y,n) (mcompat(x,y),memcmp((x),(y),(n)*sizeof(*(x))))

static inline usz alen(void *arr) { return arr ? ((usz*)arr)[-1] : 0; }
// element is ... because it might be a designated initializer and cpp doesn't know how to cope with commas
// I know _[A-Z] is reserved.  This is intentional.
// Nominally, it's a lazy way to avoid name collision; but the official justification is that,
// as a component of a c implementation, we get to count this as part of the implementation
#define apush(arr, ...) ({ \
	typeof(&(arr)) _A = &(arr); \
	typeof(**_A) _R = __VA_ARGS__; \
	if (!arr) { \
		void *_S = malloc(sizeof(usz)+sizeof(_R)); \
		*(usz*)_S = 1; \
		*_A = _S+sizeof(usz); \
		(*_A)[0] = _R; \
	} else { \
		usz *_S = (((usz*)*_A)-1); \
		usz _L = *_S; \
		*_A = realloc(_S, sizeof(usz) + ++*_S * sizeof(_R))+sizeof(usz); \
		(*_A)[_L] = _R; \
	} \
	_R;})
#define aresize(arr, L) do { \
	typeof(&(arr)) _A = &(arr); \
	usz _L = L; \
	if (!arr) { \
		void *s = malloc(sizeof(usz)+_L*sizeof(**_A)); \
		*(usz*)s = _L; \
		*_A = s+sizeof(usz); \
	} else { \
		*_A = realloc(((usz*)*_A)-1, sizeof(usz) + _L*sizeof(**_A))+sizeof(usz); \
		((usz*)*_A)[-1] = _L; \
	} \
} while (0)
// poke: like push, but without any weight behind it
// (extend the length of the array by 1, leaving the new entry uninitialized)
//todo make it so you can say apoke(arr).whatever = whatever as shorthand for apoke(arr); atail(arr).whatever = whatever
#define apoke(arr) do { \
	typeof(&(arr)) _AA = &(arr); \
	aresize(*_AA, alen(*_AA)+1); \
} while (0)
#define anew(_T,_L) ({ \
	_T *arr = NULL; \
	aresize(arr,_L); \
	arr;})
#define apop(arr) ({ \
	typeof(&arr) _A = &(arr); \
	usz *s = (((usz*)*_A)-1); \
	assert(*s); \
	(*s)--; /*realloc intentionally elided (should it be retained for asan/valgrind/etc.?)*/ \
	typeof(**_A) r = (*_A)[*s]; \
	r; })
#define atail(arr) ((arr)[alen(arr)-1])
#define foreach(e, arr) for (typeof(*arr) e, *_o=(arr), *_p=0; (usz)_p < alen(_o) && ((e=_o[(usz)_p]),1); _p = (typeof(_p))(1+(usz)_p))
#define foreach_reverse(e, arr) for (typeof(*arr) e, *_o=(arr), *_x=_o+alen(_o); (_x-- > _o) && ((e=*_x),1);)
#define aremove(arr, i) _aremove(arr, sizeof(*arr), i)

static inline void _aremove(void *arr_, usz elemsz, usz elemno) {
	c1 *arr = arr_;
	assert(elemno < alen(arr));
	memcpy(arr + elemno*elemsz, arr + (elemno+1)*elemsz, (alen(arr)-elemno-1)*elemsz);
	((usz*)arr)[-1]--;
}


#endif //OPENFMOD_INTERNAL_H
