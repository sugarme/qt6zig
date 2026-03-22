#pragma once
#ifndef QWINEVENTNOTIFIER_H_C_LIB
#define QWINEVENTNOTIFIER_H_C_LIB

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
typedef struct QWinEventNotifier QWinEventNotifier;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QWinEventNotifier* QWinEventNotifier_new();
QWinEventNotifier* QWinEventNotifier_new2(void** hEvent);
QWinEventNotifier* QWinEventNotifier_new3(QObject* parent);
QWinEventNotifier* QWinEventNotifier_new4(void** hEvent, QObject* parent);
libqt_string QWinEventNotifier_Tr(const char* s);
void QWinEventNotifier_SetHandle(QWinEventNotifier* self, void** hEvent);
void** QWinEventNotifier_Handle(const QWinEventNotifier* self);
bool QWinEventNotifier_IsEnabled(const QWinEventNotifier* self);
void QWinEventNotifier_SetEnabled(QWinEventNotifier* self, bool enable);
bool QWinEventNotifier_Event(QWinEventNotifier* self, QEvent* e);
libqt_string QWinEventNotifier_Tr2(const char* s, const char* c);
libqt_string QWinEventNotifier_Tr3(const char* s, const char* c, int n);
void QWinEventNotifier_OnEvent(QWinEventNotifier* self, intptr_t slot);
bool QWinEventNotifier_QBaseEvent(QWinEventNotifier* self, QEvent* e);
void QWinEventNotifier_Connect_activated(QWinEventNotifier* self, intptr_t slot);
void QWinEventNotifier_Delete(QWinEventNotifier* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
