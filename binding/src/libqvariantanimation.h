#pragma once
#ifndef QVARIANTANIMATION_H_C_LIB
#define QVARIANTANIMATION_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QEasingCurve QEasingCurve;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct QVariantAnimation QVariantAnimation;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QVariantAnimation* QVariantAnimation_new();
QVariantAnimation* QVariantAnimation_new2(QObject* parent);
libqt_string QVariantAnimation_Tr(const char* s);
QVariant* QVariantAnimation_StartValue(const QVariantAnimation* self);
void QVariantAnimation_SetStartValue(QVariantAnimation* self, const QVariant* value);
QVariant* QVariantAnimation_EndValue(const QVariantAnimation* self);
void QVariantAnimation_SetEndValue(QVariantAnimation* self, const QVariant* value);
QVariant* QVariantAnimation_KeyValueAt(const QVariantAnimation* self, double step);
void QVariantAnimation_SetKeyValueAt(QVariantAnimation* self, double step, const QVariant* value);
libqt_list QVariantAnimation_KeyValues(const QVariantAnimation* self);
void QVariantAnimation_SetKeyValues(QVariantAnimation* self, const libqt_list values);
QVariant* QVariantAnimation_CurrentValue(const QVariantAnimation* self);
int QVariantAnimation_Duration(const QVariantAnimation* self);
void QVariantAnimation_SetDuration(QVariantAnimation* self, int msecs);
QEasingCurve* QVariantAnimation_EasingCurve(const QVariantAnimation* self);
void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, const QEasingCurve* easing);
void QVariantAnimation_ValueChanged(QVariantAnimation* self, const QVariant* value);
void QVariantAnimation_Connect_ValueChanged(QVariantAnimation* self, intptr_t slot);
bool QVariantAnimation_Event(QVariantAnimation* self, QEvent* event);
void QVariantAnimation_UpdateCurrentTime(QVariantAnimation* self, int param1);
void QVariantAnimation_UpdateState(QVariantAnimation* self, int newState, int oldState);
void QVariantAnimation_UpdateCurrentValue(QVariantAnimation* self, const QVariant* value);
QVariant* QVariantAnimation_Interpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress);
libqt_string QVariantAnimation_Tr2(const char* s, const char* c);
libqt_string QVariantAnimation_Tr3(const char* s, const char* c, int n);
void QVariantAnimation_OnDuration(const QVariantAnimation* self, intptr_t slot);
int QVariantAnimation_QBaseDuration(const QVariantAnimation* self);
void QVariantAnimation_OnEvent(QVariantAnimation* self, intptr_t slot);
bool QVariantAnimation_QBaseEvent(QVariantAnimation* self, QEvent* event);
void QVariantAnimation_OnUpdateCurrentTime(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseUpdateCurrentTime(QVariantAnimation* self, int param1);
void QVariantAnimation_OnUpdateState(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseUpdateState(QVariantAnimation* self, int newState, int oldState);
void QVariantAnimation_OnUpdateCurrentValue(QVariantAnimation* self, intptr_t slot);
void QVariantAnimation_QBaseUpdateCurrentValue(QVariantAnimation* self, const QVariant* value);
void QVariantAnimation_OnInterpolated(const QVariantAnimation* self, intptr_t slot);
QVariant* QVariantAnimation_QBaseInterpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress);
void QVariantAnimation_Delete(QVariantAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
