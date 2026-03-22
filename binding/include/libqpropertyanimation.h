#pragma once
#ifndef QPROPERTYANIMATION_H_C_LIB
#define QPROPERTYANIMATION_H_C_LIB

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
typedef struct QPropertyAnimation QPropertyAnimation;
typedef struct QVariant QVariant;
typedef struct QVariantAnimation QVariantAnimation;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPropertyAnimation* QPropertyAnimation_new();
QPropertyAnimation* QPropertyAnimation_new2(QObject* target, const libqt_string propertyName);
QPropertyAnimation* QPropertyAnimation_new3(QObject* parent);
QPropertyAnimation* QPropertyAnimation_new4(QObject* target, const libqt_string propertyName, QObject* parent);
libqt_string QPropertyAnimation_Tr(const char* s);
QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self);
void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target);
libqt_string QPropertyAnimation_PropertyName(const QPropertyAnimation* self);
void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, const libqt_string propertyName);
bool QPropertyAnimation_Event(QPropertyAnimation* self, QEvent* event);
void QPropertyAnimation_UpdateCurrentValue(QPropertyAnimation* self, const QVariant* value);
void QPropertyAnimation_UpdateState(QPropertyAnimation* self, int newState, int oldState);
libqt_string QPropertyAnimation_Tr2(const char* s, const char* c);
libqt_string QPropertyAnimation_Tr3(const char* s, const char* c, int n);
void QPropertyAnimation_OnEvent(QPropertyAnimation* self, intptr_t slot);
bool QPropertyAnimation_QBaseEvent(QPropertyAnimation* self, QEvent* event);
void QPropertyAnimation_OnUpdateCurrentValue(QPropertyAnimation* self, intptr_t slot);
void QPropertyAnimation_QBaseUpdateCurrentValue(QPropertyAnimation* self, const QVariant* value);
void QPropertyAnimation_OnUpdateState(QPropertyAnimation* self, intptr_t slot);
void QPropertyAnimation_QBaseUpdateState(QPropertyAnimation* self, int newState, int oldState);
void QPropertyAnimation_Delete(QPropertyAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
