#pragma once
#ifndef QARRAYDATA_H_C_LIB
#define QARRAYDATA_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QArrayData QArrayData;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



int QArrayData_Flags(const QArrayData* self);
void QArrayData_SetFlags(QArrayData* self, int flags);
ptrdiff_t QArrayData_Alloc(const QArrayData* self);
void QArrayData_SetAlloc(QArrayData* self, ptrdiff_t alloc);
ptrdiff_t QArrayData_AllocatedCapacity(QArrayData* self);
ptrdiff_t QArrayData_ConstAllocatedCapacity(const QArrayData* self);
bool QArrayData_Ref(QArrayData* self);
bool QArrayData_Deref(QArrayData* self);
bool QArrayData_IsShared(const QArrayData* self);
bool QArrayData_NeedsDetach(QArrayData* self);
ptrdiff_t QArrayData_DetachCapacity(const QArrayData* self, ptrdiff_t newSize);
void* QArrayData_Allocate(QArrayData** pdata, ptrdiff_t objectSize, ptrdiff_t alignment, ptrdiff_t capacity);
void* QArrayData_Allocate1(QArrayData** pdata, ptrdiff_t capacity);
void* QArrayData_Allocate2(QArrayData** pdata, ptrdiff_t capacity);
libqt_pair QArrayData_ReallocateUnaligned(QArrayData* data, void* dataPointer, ptrdiff_t objectSize, ptrdiff_t newCapacity, int option);
void QArrayData_Deallocate(QArrayData* data, ptrdiff_t objectSize, ptrdiff_t alignment);
void* QArrayData_Allocate5(QArrayData** pdata, ptrdiff_t objectSize, ptrdiff_t alignment, ptrdiff_t capacity, int option);
void* QArrayData_Allocate13(QArrayData** pdata, ptrdiff_t capacity, int option);
void* QArrayData_Allocate23(QArrayData** pdata, ptrdiff_t capacity, int option);
void QArrayData_Delete(QArrayData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
