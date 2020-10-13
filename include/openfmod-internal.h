#ifndef OPENFMOD_INTERNAL_H
#define OPENFMOD_INTERNAL_H

#include <stdio.h>

#define STUB printf("Warning: function '%s' has been stubbed and is nonoperational.\n", __func__); return FMOD_OK
#define DSTUB printf("Warning: deprecated function '%s' has been stubbed and is nonoperational.\n", __func__); return FMOD_OK
#define BSTUB printf("Warning: function '%s' has been stubbed and is nonoperational.\n", __func__); return 1

#endif //OPENFMOD_INTERNAL_H
