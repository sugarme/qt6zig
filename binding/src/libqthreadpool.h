#pragma once
#ifndef QTHREADPOOL_H_C_LIB
#define QTHREADPOOL_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QObject QObject;
typedef struct QRunnable QRunnable;
typedef struct QThread QThread;
typedef struct QThreadPool QThreadPool;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QThreadPool* QThreadPool_new();
QThreadPool* QThreadPool_new2(QObject* parent);
libqt_string QThreadPool_Tr(const char* s);
QThreadPool* QThreadPool_GlobalInstance();
void QThreadPool_Start(QThreadPool* self, QRunnable* runnable);
bool QThreadPool_TryStart(QThreadPool* self, QRunnable* runnable);
void QThreadPool_StartOnReservedThread(QThreadPool* self, QRunnable* runnable);
int QThreadPool_ExpiryTimeout(const QThreadPool* self);
void QThreadPool_SetExpiryTimeout(QThreadPool* self, int expiryTimeout);
int QThreadPool_MaxThreadCount(const QThreadPool* self);
void QThreadPool_SetMaxThreadCount(QThreadPool* self, int maxThreadCount);
int QThreadPool_ActiveThreadCount(const QThreadPool* self);
void QThreadPool_SetStackSize(QThreadPool* self, unsigned int stackSize);
unsigned int QThreadPool_StackSize(const QThreadPool* self);
void QThreadPool_SetThreadPriority(QThreadPool* self, int priority);
int QThreadPool_ThreadPriority(const QThreadPool* self);
void QThreadPool_ReserveThread(QThreadPool* self);
void QThreadPool_ReleaseThread(QThreadPool* self);
bool QThreadPool_WaitForDone(QThreadPool* self, int msecs);
bool QThreadPool_WaitForDone2(QThreadPool* self);
void QThreadPool_Clear(QThreadPool* self);
bool QThreadPool_Contains(const QThreadPool* self, const QThread* thread);
bool QThreadPool_TryTake(QThreadPool* self, QRunnable* runnable);
libqt_string QThreadPool_Tr2(const char* s, const char* c);
libqt_string QThreadPool_Tr3(const char* s, const char* c, int n);
void QThreadPool_Start2(QThreadPool* self, QRunnable* runnable, int priority);
bool QThreadPool_WaitForDone1(QThreadPool* self, QDeadlineTimer* deadline);
void QThreadPool_Delete(QThreadPool* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
