#pragma once
#ifndef QTIMER_H_C_LIB
#define QTIMER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QTimer QTimer;
typedef struct QTimerEvent QTimerEvent;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTimer* QTimer_new();
QTimer* QTimer_new2(QObject* parent);
libqt_string QTimer_Tr(const char* s);
bool QTimer_IsActive(const QTimer* self);
QBindable<bool> QTimer_BindableActive(QTimer* self);
int QTimer_TimerId(const QTimer* self);
int QTimer_Id(const QTimer* self);
void QTimer_SetInterval(QTimer* self, int msec);
int QTimer_Interval(const QTimer* self);
QBindable<int> QTimer_BindableInterval(QTimer* self);
int QTimer_RemainingTime(const QTimer* self);
void QTimer_SetTimerType(QTimer* self, int atype);
int QTimer_TimerType(const QTimer* self);
QBindable<Qt::TimerType> QTimer_BindableTimerType(QTimer* self);
void QTimer_SetSingleShot(QTimer* self, bool singleShot);
bool QTimer_IsSingleShot(const QTimer* self);
QBindable<bool> QTimer_BindableSingleShot(QTimer* self);
void QTimer_SingleShot(int msec, const QObject* receiver, const char* member);
void QTimer_SingleShot2(int msec, int timerType, const QObject* receiver, const char* member);
void QTimer_Start(QTimer* self, int msec);
void QTimer_Start2(QTimer* self);
void QTimer_Stop(QTimer* self);
void QTimer_TimerEvent(QTimer* self, QTimerEvent* param1);
libqt_string QTimer_Tr2(const char* s, const char* c);
libqt_string QTimer_Tr3(const char* s, const char* c, int n);
void QTimer_OnTimerEvent(QTimer* self, intptr_t slot);
void QTimer_QBaseTimerEvent(QTimer* self, QTimerEvent* param1);
void QTimer_Connect_timeout(QTimer* self, intptr_t slot);
void QTimer_Delete(QTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
