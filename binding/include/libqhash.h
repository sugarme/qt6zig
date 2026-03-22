#pragma once
#ifndef QHASH_H_C_LIB
#define QHASH_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QHashDummyValue QHashDummyValue;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QHashDummyValue* QHashDummyValue_new(const QHashDummyValue* other);
QHashDummyValue* QHashDummyValue_new2(QHashDummyValue* other);
void QHashDummyValue_CopyAssign(QHashDummyValue* self, QHashDummyValue* other);
void QHashDummyValue_MoveAssign(QHashDummyValue* self, QHashDummyValue* other);
bool QHashDummyValue_OperatorEqual(const QHashDummyValue* self, const QHashDummyValue* param1);
void QHashDummyValue_Delete(QHashDummyValue* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
