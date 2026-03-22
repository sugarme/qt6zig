#pragma once
#ifndef QHASHFUNCTIONS_H_C_LIB
#define QHASHFUNCTIONS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QHashSeed QHashSeed;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QHashSeed* QHashSeed_new(const QHashSeed* other);
QHashSeed* QHashSeed_new2(QHashSeed* other);
QHashSeed* QHashSeed_new3();
QHashSeed* QHashSeed_new4(unsigned long long d);
void QHashSeed_CopyAssign(QHashSeed* self, QHashSeed* other);
void QHashSeed_MoveAssign(QHashSeed* self, QHashSeed* other);
unsigned long long QHashSeed_OperatorunsignedLongLong(const QHashSeed* self);
QHashSeed* QHashSeed_GlobalSeed();
void QHashSeed_SetDeterministicGlobalSeed();
void QHashSeed_ResetRandomGlobalSeed();
void QHashSeed_Delete(QHashSeed* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
