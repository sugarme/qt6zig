#pragma once
#ifndef QRUNNABLE_H_C_LIB
#define QRUNNABLE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QRunnable QRunnable;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QRunnable* QRunnable_new();
void QRunnable_Run(QRunnable* self);
bool QRunnable_AutoDelete(const QRunnable* self);
void QRunnable_SetAutoDelete(QRunnable* self, bool autoDelete);
void QRunnable_OnRun(QRunnable* self, intptr_t slot);
void QRunnable_QBaseRun(QRunnable* self);
void QRunnable_Delete(QRunnable* self);

void QGenericRunnable_Run(QGenericRunnable* self);
void QGenericRunnable_OnRun(QGenericRunnable* self, intptr_t slot);
void QGenericRunnable_QBaseRun(QGenericRunnable* self);
void QGenericRunnable_Delete(QGenericRunnable* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
