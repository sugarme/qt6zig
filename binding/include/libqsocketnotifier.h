#pragma once
#ifndef QSOCKETNOTIFIER_H_C_LIB
#define QSOCKETNOTIFIER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QSocketDescriptor QSocketDescriptor;
typedef struct QSocketNotifier QSocketNotifier;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSocketNotifier* QSocketNotifier_new(int param1);
QSocketNotifier* QSocketNotifier_new2(intptr_t socket, int param2);
QSocketNotifier* QSocketNotifier_new3(int param1, QObject* parent);
QSocketNotifier* QSocketNotifier_new4(intptr_t socket, int param2, QObject* parent);
libqt_string QSocketNotifier_Tr(const char* s);
void QSocketNotifier_SetSocket(QSocketNotifier* self, intptr_t socket);
intptr_t QSocketNotifier_Socket(const QSocketNotifier* self);
int QSocketNotifier_Type(const QSocketNotifier* self);
bool QSocketNotifier_IsValid(const QSocketNotifier* self);
bool QSocketNotifier_IsEnabled(const QSocketNotifier* self);
void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled);
bool QSocketNotifier_Event(QSocketNotifier* self, QEvent* param1);
libqt_string QSocketNotifier_Tr2(const char* s, const char* c);
libqt_string QSocketNotifier_Tr3(const char* s, const char* c, int n);
void QSocketNotifier_OnEvent(QSocketNotifier* self, intptr_t slot);
bool QSocketNotifier_QBaseEvent(QSocketNotifier* self, QEvent* param1);
void QSocketNotifier_Connect_activated(QSocketNotifier* self, intptr_t slot);
void QSocketNotifier_Delete(QSocketNotifier* self);

QSocketDescriptor* QSocketDescriptor_new(const QSocketDescriptor* other);
QSocketDescriptor* QSocketDescriptor_new2(QSocketDescriptor* other);
QSocketDescriptor* QSocketDescriptor_new3();
QSocketDescriptor* QSocketDescriptor_new4(intptr_t desc);
QSocketDescriptor* QSocketDescriptor_new5(const QSocketDescriptor* param1);
QSocketDescriptor* QSocketDescriptor_new6(void** descriptor);
void QSocketDescriptor_CopyAssign(QSocketDescriptor* self, QSocketDescriptor* other);
void QSocketDescriptor_MoveAssign(QSocketDescriptor* self, QSocketDescriptor* other);
intptr_t QSocketDescriptor_OperatorlongLong(const QSocketDescriptor* self);
void* QSocketDescriptor_WinHandle(const QSocketDescriptor* self);
void** QSocketDescriptor_OperatorvoidMultiply(const QSocketDescriptor* self);
bool QSocketDescriptor_IsValid(const QSocketDescriptor* self);
void QSocketDescriptor_Delete(QSocketDescriptor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
