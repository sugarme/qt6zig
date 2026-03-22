#pragma once
#ifndef QATOMIC_H_C_LIB
#define QATOMIC_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAtomicInt QAtomicInt;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAtomicInt* QAtomicInt_new();
QAtomicInt* QAtomicInt_new2(const QAtomicInt* param1);
QAtomicInt* QAtomicInt_new3(int value);
void QAtomicInt_OperatorAssign(QAtomicInt* self, const QAtomicInt* param1);
void QAtomicInt_Delete(QAtomicInt* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
