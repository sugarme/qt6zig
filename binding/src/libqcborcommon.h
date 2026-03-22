#pragma once
#ifndef QCBORCOMMON_H_C_LIB
#define QCBORCOMMON_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCborError QCborError;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QCborError* QCborError_new();
QCborError* QCborError_new2(const QCborError* param1);
int QCborError_C(const QCborError* self);
void QCborError_SetC(QCborError* self, int c);
int QCborError_OperatorQCborError__Code(const QCborError* self);
libqt_string QCborError_ToString(const QCborError* self);
void QCborError_OperatorAssign(QCborError* self, const QCborError* param1);
void QCborError_Delete(QCborError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
