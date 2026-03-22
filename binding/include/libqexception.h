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
QException* QException_new2(const QException* param1);
void QException_OperatorAssign(QException* self, const QException* param1);
void QException_Raise(const QException* self);
void QException_OnRaise(const QException* self, intptr_t slot);
void QException_QBaseRaise(const QException* self);
void QException_Delete(QException* self);

QUnhandledException* QUnhandledException_new();
QUnhandledException* QUnhandledException_new2(const QUnhandledException* other);
QUnhandledException* QUnhandledException_new3(std::exception_ptr exception);
void QUnhandledException_Swap(QUnhandledException* self, QUnhandledException* other);
void QUnhandledException_OperatorAssign(QUnhandledException* self, const QUnhandledException* other);
void QUnhandledException_Raise(const QUnhandledException* self);
std::exception_ptr QUnhandledException_Exception(const QUnhandledException* self);
void QUnhandledException_OnRaise(const QUnhandledException* self, intptr_t slot);
void QUnhandledException_QBaseRaise(const QUnhandledException* self);
void QUnhandledException_Delete(QUnhandledException* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
