#ifndef __PRECOMPILED_INC__
#define __PRECOMPILED_INC__

#include <stdint.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef float flt32_t;
typedef double flt64_t;
typedef struct
{
    uint16_t len;         // data[]的长度，不包括 null 字符
    const uint8_t data[]; // 字符串内容
} string_t;

#endif // __PRECOMPILED_INC__