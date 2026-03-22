#pragma once
#ifndef QCOREEVENT_H_C_LIB
#define QCOREEVENT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDynamicPropertyChangeEvent QDynamicPropertyChangeEvent;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QEvent* QEvent_new(int typeVal);
int QEvent_Type(const QEvent* self);
bool QEvent_Spontaneous(const QEvent* self);
void QEvent_SetAccepted(QEvent* self, bool accepted);
bool QEvent_IsAccepted(const QEvent* self);
void QEvent_Accept(QEvent* self);
void QEvent_Ignore(QEvent* self);
bool QEvent_IsInputEvent(const QEvent* self);
bool QEvent_IsPointerEvent(const QEvent* self);
bool QEvent_IsSinglePointEvent(const QEvent* self);
int QEvent_RegisterEventType();
int QEvent_RegisterEventType1(int hint);
void QEvent_OnSetAccepted(QEvent* self, intptr_t slot);
void QEvent_QBaseSetAccepted(QEvent* self, bool accepted);
void QEvent_OperatorAssign(QEvent* self, const QEvent* other);
void QEvent_OnOperatorAssign(QEvent* self, intptr_t slot);
void QEvent_QBaseOperatorAssign(QEvent* self, const QEvent* other);
void QEvent_Delete(QEvent* self);

QTimerEvent* QTimerEvent_new(int timerId);
QTimerEvent* QTimerEvent_new2(int timerId);
int QTimerEvent_TimerId(const QTimerEvent* self);
int QTimerEvent_Id(const QTimerEvent* self);
void QTimerEvent_Delete(QTimerEvent* self);

QChildEvent* QChildEvent_new(int typeVal, QObject* child);
QObject* QChildEvent_Child(const QChildEvent* self);
bool QChildEvent_Added(const QChildEvent* self);
bool QChildEvent_Polished(const QChildEvent* self);
bool QChildEvent_Removed(const QChildEvent* self);
void QChildEvent_Delete(QChildEvent* self);

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(const libqt_string name);
libqt_string QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self);
void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
