#pragma once
#ifndef QFLAGS_H_C_LIB
#define QFLAGS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFlag QFlag;
typedef struct QIncompatibleFlag QIncompatibleFlag;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QFlag* QFlag_new(const QFlag* other);
QFlag* QFlag_new2(QFlag* other);
QFlag* QFlag_new3(int value);
QFlag* QFlag_new4(const QFlag* param1);
void QFlag_CopyAssign(QFlag* self, QFlag* other);
void QFlag_MoveAssign(QFlag* self, QFlag* other);
int QFlag_Operatorint(const QFlag* self);
void QFlag_Delete(QFlag* self);

QIncompatibleFlag* QIncompatibleFlag_new(const QIncompatibleFlag* other);
QIncompatibleFlag* QIncompatibleFlag_new2(QIncompatibleFlag* other);
QIncompatibleFlag* QIncompatibleFlag_new3(int i);
QIncompatibleFlag* QIncompatibleFlag_new4(const QIncompatibleFlag* param1);
void QIncompatibleFlag_CopyAssign(QIncompatibleFlag* self, QIncompatibleFlag* other);
void QIncompatibleFlag_MoveAssign(QIncompatibleFlag* self, QIncompatibleFlag* other);
int QIncompatibleFlag_Operatorint(const QIncompatibleFlag* self);
void QIncompatibleFlag_Delete(QIncompatibleFlag* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
