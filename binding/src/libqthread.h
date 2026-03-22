#pragma once
#ifndef QTHREAD_H_C_LIB
#define QTHREAD_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QThread* QThread_new();
QThread* QThread_new2(QObject* parent);
libqt_string QThread_Tr(const char* s);
void* QThread_CurrentThreadId();
QThread* QThread_CurrentThread();
bool QThread_IsMainThread();
int QThread_IdealThreadCount();
void QThread_YieldCurrentThread();
void QThread_SetPriority(QThread* self, int priority);
int QThread_Priority(const QThread* self);
bool QThread_IsFinished(const QThread* self);
bool QThread_IsRunning(const QThread* self);
void QThread_RequestInterruption(QThread* self);
bool QThread_IsInterruptionRequested(const QThread* self);
void QThread_SetStackSize(QThread* self, unsigned int stackSize);
unsigned int QThread_StackSize(const QThread* self);
QAbstractEventDispatcher* QThread_EventDispatcher(const QThread* self);
void QThread_SetEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher);
bool QThread_Event(QThread* self, QEvent* event);
int QThread_LoopLevel(const QThread* self);
bool QThread_IsCurrentThread(const QThread* self);
void QThread_Start(QThread* self);
void QThread_Terminate(QThread* self);
void QThread_Exit(QThread* self);
void QThread_Quit(QThread* self);
bool QThread_Wait(QThread* self);
bool QThread_Wait2(QThread* self, unsigned long time);
void QThread_Sleep(unsigned long param1);
void QThread_Msleep(unsigned long param1);
void QThread_Usleep(unsigned long param1);
void QThread_Run(QThread* self);
libqt_string QThread_Tr2(const char* s, const char* c);
libqt_string QThread_Tr3(const char* s, const char* c, int n);
void QThread_Start1(QThread* self, int param1);
void QThread_Exit1(QThread* self, int retcode);
bool QThread_Wait1(QThread* self, QDeadlineTimer* deadline);
void QThread_OnEvent(QThread* self, intptr_t slot);
bool QThread_QBaseEvent(QThread* self, QEvent* event);
void QThread_OnRun(QThread* self, intptr_t slot);
void QThread_QBaseRun(QThread* self);
int QThread_Exec(QThread* self);
void QThread_OnExec(QThread* self, intptr_t slot);
int QThread_QBaseExec(QThread* self);
void QThread_SetTerminationEnabled(QThread* self);
void QThread_OnSetTerminationEnabled(QThread* self, intptr_t slot);
void QThread_QBaseSetTerminationEnabled(QThread* self);
void QThread_SetTerminationEnabled1(QThread* self, bool enabled);
void QThread_OnSetTerminationEnabled1(QThread* self, intptr_t slot);
void QThread_QBaseSetTerminationEnabled1(QThread* self, bool enabled);
void QThread_Connect_started(QThread* self, intptr_t slot);
void QThread_Connect_finished(QThread* self, intptr_t slot);
void QThread_Delete(QThread* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
