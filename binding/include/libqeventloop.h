#pragma once
#ifndef QEVENTLOOP_H_C_LIB
#define QEVENTLOOP_H_C_LIB

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
typedef struct QEvent QEvent;
typedef struct QEventLoop QEventLoop;
typedef struct QEventLoopLocker QEventLoopLocker;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QEventLoop* QEventLoop_new();
QEventLoop* QEventLoop_new2(QObject* parent);
libqt_string QEventLoop_Tr(const char* s);
bool QEventLoop_ProcessEvents(QEventLoop* self);
void QEventLoop_ProcessEvents2(QEventLoop* self, int flags, int maximumTime);
void QEventLoop_ProcessEvents3(QEventLoop* self, int flags, QDeadlineTimer* deadline);
int QEventLoop_Exec(QEventLoop* self);
bool QEventLoop_IsRunning(const QEventLoop* self);
void QEventLoop_WakeUp(QEventLoop* self);
bool QEventLoop_Event(QEventLoop* self, QEvent* event);
void QEventLoop_Exit(QEventLoop* self);
void QEventLoop_Quit(QEventLoop* self);
libqt_string QEventLoop_Tr2(const char* s, const char* c);
libqt_string QEventLoop_Tr3(const char* s, const char* c, int n);
bool QEventLoop_ProcessEvents1(QEventLoop* self, int flags);
int QEventLoop_Exec1(QEventLoop* self, int flags);
void QEventLoop_Exit1(QEventLoop* self, int returnCode);
void QEventLoop_OnEvent(QEventLoop* self, intptr_t slot);
bool QEventLoop_QBaseEvent(QEventLoop* self, QEvent* event);
void QEventLoop_Delete(QEventLoop* self);

QEventLoopLocker* QEventLoopLocker_new();
QEventLoopLocker* QEventLoopLocker_new2(QEventLoop* loop);
QEventLoopLocker* QEventLoopLocker_new3(QThread* thread);
void QEventLoopLocker_Swap(QEventLoopLocker* self, QEventLoopLocker* other);
void QEventLoopLocker_Delete(QEventLoopLocker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
