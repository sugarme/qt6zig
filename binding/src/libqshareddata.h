#pragma once
#ifndef QSHAREDDATA_H_C_LIB
#define QSHAREDDATA_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAdoptSharedDataTag QAdoptSharedDataTag;
typedef struct QAtomicInt QAtomicInt;
typedef struct QSharedData QSharedData;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSharedData* QSharedData_new();
QSharedData* QSharedData_new2(const QSharedData* param1);
QAtomicInt* QSharedData_Ref(const QSharedData* self);
void QSharedData_SetRef(QSharedData* self, QAtomicInt* ref);
void QSharedData_Delete(QSharedData* self);

QAdoptSharedDataTag* QAdoptSharedDataTag_new(const QAdoptSharedDataTag* other);
QAdoptSharedDataTag* QAdoptSharedDataTag_new2(QAdoptSharedDataTag* other);
QAdoptSharedDataTag* QAdoptSharedDataTag_new3();
void QAdoptSharedDataTag_CopyAssign(QAdoptSharedDataTag* self, QAdoptSharedDataTag* other);
void QAdoptSharedDataTag_MoveAssign(QAdoptSharedDataTag* self, QAdoptSharedDataTag* other);
void QAdoptSharedDataTag_Delete(QAdoptSharedDataTag* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
