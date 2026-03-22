#pragma once
#ifndef QTHREADSTORAGE_H_C_LIB
#define QTHREADSTORAGE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QThreadStorageData QThreadStorageData;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QThreadStorageData* QThreadStorageData_new(const QThreadStorageData* other);
QThreadStorageData* QThreadStorageData_new2(const QThreadStorageData* param1);
void QThreadStorageData_CopyAssign(QThreadStorageData* self, QThreadStorageData* other);
void** QThreadStorageData_Get(const QThreadStorageData* self);
void** QThreadStorageData_Set(QThreadStorageData* self, void* p);
void QThreadStorageData_Finish(void** param1);
int QThreadStorageData_Id(const QThreadStorageData* self);
void QThreadStorageData_SetId(QThreadStorageData* self, int id);
void QThreadStorageData_OperatorAssign(QThreadStorageData* self, const QThreadStorageData* param1);
void QThreadStorageData_Delete(QThreadStorageData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
