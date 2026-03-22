#pragma once
#ifndef QBINDINGSTORAGE_H_C_LIB
#define QBINDINGSTORAGE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBindingStatus QBindingStatus;
typedef struct QBindingStorage QBindingStorage;
typedef struct QUntypedPropertyData QUntypedPropertyData;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QBindingStatus* QBindingStatus_new(const QBindingStatus* other);
QBindingStatus* QBindingStatus_new2(QBindingStatus* other);
void QBindingStatus_CopyAssign(QBindingStatus* self, QBindingStatus* other);
void QBindingStatus_MoveAssign(QBindingStatus* self, QBindingStatus* other);
QtPrivate::BindingEvaluationState* QBindingStatus_CurrentlyEvaluatingBinding(const QBindingStatus* self);
void QBindingStatus_SetCurrentlyEvaluatingBinding(QBindingStatus* self, QtPrivate::BindingEvaluationState* currentlyEvaluatingBinding);
QtPrivate::CompatPropertySafePoint* QBindingStatus_CurrentCompatProperty(const QBindingStatus* self);
void QBindingStatus_SetCurrentCompatProperty(QBindingStatus* self, QtPrivate::CompatPropertySafePoint* currentCompatProperty);
QPropertyDelayedNotifications* QBindingStatus_GroupUpdateData(const QBindingStatus* self);
void QBindingStatus_SetGroupUpdateData(QBindingStatus* self, QPropertyDelayedNotifications* groupUpdateData);
void QBindingStatus_Delete(QBindingStatus* self);

QBindingStorage* QBindingStorage_new();
QBindingStorage* QBindingStorage_new2(const QBindingStorage* param1);
bool QBindingStorage_IsEmpty(QBindingStorage* self);
bool QBindingStorage_IsValid(const QBindingStorage* self);
const QBindingStatus* QBindingStorage_Status(const QBindingStorage* self, QtPrivate::QBindingStatusAccessToken param1);
void QBindingStorage_RegisterDependency(const QBindingStorage* self, const QUntypedPropertyData* data);
QtPrivate__QPropertyBindingData* QBindingStorage_BindingData(const QBindingStorage* self, const QUntypedPropertyData* data);
QtPrivate__QPropertyBindingData* QBindingStorage_BindingData2(QBindingStorage* self, QUntypedPropertyData* data, bool create);
void QBindingStorage_Delete(QBindingStorage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
