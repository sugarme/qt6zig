#pragma once
#ifndef QCHRONOTIMER_H_C_LIB
#define QCHRONOTIMER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChronoTimer QChronoTimer;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QChronoTimer* QChronoTimer_new();
QChronoTimer* QChronoTimer_new2(QObject* parent);
libqt_string QChronoTimer_Tr(const char* s);
bool QChronoTimer_IsActive(const QChronoTimer* self);
void QChronoTimer_SetTimerType(QChronoTimer* self, int atype);
int QChronoTimer_TimerType(const QChronoTimer* self);
void QChronoTimer_SetSingleShot(QChronoTimer* self, bool singleShot);
bool QChronoTimer_IsSingleShot(const QChronoTimer* self);
void QChronoTimer_Start(QChronoTimer* self);
void QChronoTimer_Stop(QChronoTimer* self);
void QChronoTimer_TimerEvent(QChronoTimer* self, QTimerEvent* param1);
libqt_string QChronoTimer_Tr2(const char* s, const char* c);
libqt_string QChronoTimer_Tr3(const char* s, const char* c, int n);
void QChronoTimer_OnTimerEvent(QChronoTimer* self, intptr_t slot);
void QChronoTimer_QBaseTimerEvent(QChronoTimer* self, QTimerEvent* param1);
void QChronoTimer_Connect_timeout(QChronoTimer* self, intptr_t slot);
void QChronoTimer_Delete(QChronoTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
