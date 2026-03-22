#pragma once
#ifndef QBASICTIMER_H_C_LIB
#define QBASICTIMER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBasicTimer QBasicTimer;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QBasicTimer* QBasicTimer_new();
void QBasicTimer_Swap(QBasicTimer* self, QBasicTimer* other);
bool QBasicTimer_IsActive(const QBasicTimer* self);
int QBasicTimer_TimerId(const QBasicTimer* self);
void QBasicTimer_Start(QBasicTimer* self, int msec, QObject* obj);
void QBasicTimer_Start2(QBasicTimer* self, int msec, int timerType, QObject* obj);
void QBasicTimer_Stop(QBasicTimer* self);
void QBasicTimer_Delete(QBasicTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
