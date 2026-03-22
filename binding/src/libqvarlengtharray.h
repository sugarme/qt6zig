#pragma once
#ifndef QVARLENGTHARRAY_H_C_LIB
#define QVARLENGTHARRAY_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QVLABaseBase QVLABaseBase;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



ptrdiff_t QVLABaseBase_Capacity(const QVLABaseBase* self);
ptrdiff_t QVLABaseBase_Size(const QVLABaseBase* self);
bool QVLABaseBase_Empty(const QVLABaseBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
