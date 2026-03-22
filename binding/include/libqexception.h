#pragma once
#ifndef QEXCEPTION_H_C_LIB
#define QEXCEPTION_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QException* QException_new();
void QException_Raise(const QException* self);
void QException_OnRaise(const QException* self, intptr_t slot);
void QException_QBaseRaise(const QException* self);
void QException_Delete(QException* self);

QUnhandledException* QUnhandledException_new();
void QUnhandledException_Raise(const QUnhandledException* self);
void QUnhandledException_OnRaise(const QUnhandledException* self, intptr_t slot);
void QUnhandledException_QBaseRaise(const QUnhandledException* self);
void QUnhandledException_Delete(QUnhandledException* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
