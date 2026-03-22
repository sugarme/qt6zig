#pragma once
#ifndef QPROPERTYPRIVATE_H_C_LIB
#define QPROPERTYPRIVATE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPropertyProxyBindingData QPropertyProxyBindingData;
typedef struct QUntypedPropertyData QUntypedPropertyData;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPropertyBindingPrivatePtr* QPropertyBindingPrivatePtr_new();
QPropertyBindingPrivatePtr* QPropertyBindingPrivatePtr_new2(QtPrivate__RefCounted* data);
QPropertyBindingPrivatePtr* QPropertyBindingPrivatePtr_new3(const QPropertyBindingPrivatePtr* o);
QtPrivate__RefCounted* QPropertyBindingPrivatePtr_OperatorMultiply(const QPropertyBindingPrivatePtr* self);
QtPrivate__RefCounted* QPropertyBindingPrivatePtr_OperatorMinusGreater(QPropertyBindingPrivatePtr* self);
QtPrivate__RefCounted* QPropertyBindingPrivatePtr_OperatorMinusGreater2(const QPropertyBindingPrivatePtr* self);
QtPrivate__RefCounted* QPropertyBindingPrivatePtr_OperatorQtPrivate__RefCountedMultiply(QPropertyBindingPrivatePtr* self);
const QtPrivate__RefCounted* QPropertyBindingPrivatePtr_OperatorconstQtPrivate__RefCountedMultiply(const QPropertyBindingPrivatePtr* self);
QtPrivate__RefCounted* QPropertyBindingPrivatePtr_Data(const QPropertyBindingPrivatePtr* self);
QtPrivate__RefCounted* QPropertyBindingPrivatePtr_Get(const QPropertyBindingPrivatePtr* self);
const QtPrivate__RefCounted* QPropertyBindingPrivatePtr_ConstData(const QPropertyBindingPrivatePtr* self);
QtPrivate__RefCounted* QPropertyBindingPrivatePtr_Take(QPropertyBindingPrivatePtr* self);
void QPropertyBindingPrivatePtr_DestroyAndFreeMemory(QPropertyBindingPrivatePtr* self);
void QPropertyBindingPrivatePtr_Reset(QPropertyBindingPrivatePtr* self);
void QPropertyBindingPrivatePtr_OperatorAssign(QPropertyBindingPrivatePtr* self, const QPropertyBindingPrivatePtr* o);
void QPropertyBindingPrivatePtr_OperatorAssign2(QPropertyBindingPrivatePtr* self, QtPrivate__RefCounted* o);
bool QPropertyBindingPrivatePtr_Operatorbool(const QPropertyBindingPrivatePtr* self);
bool QPropertyBindingPrivatePtr_OperatorNot(const QPropertyBindingPrivatePtr* self);
void QPropertyBindingPrivatePtr_Swap(QPropertyBindingPrivatePtr* self, QPropertyBindingPrivatePtr* other);
void QPropertyBindingPrivatePtr_Reset1(QPropertyBindingPrivatePtr* self, QtPrivate__RefCounted* ptr);
void QPropertyBindingPrivatePtr_Delete(QPropertyBindingPrivatePtr* self);

QUntypedPropertyData* QUntypedPropertyData_new(const QUntypedPropertyData* other);
QUntypedPropertyData* QUntypedPropertyData_new2(QUntypedPropertyData* other);
void QUntypedPropertyData_CopyAssign(QUntypedPropertyData* self, QUntypedPropertyData* other);
void QUntypedPropertyData_MoveAssign(QUntypedPropertyData* self, QUntypedPropertyData* other);
void QUntypedPropertyData_Delete(QUntypedPropertyData* self);

uintptr_t QPropertyProxyBindingData_DPtr(const QPropertyProxyBindingData* self);
void QPropertyProxyBindingData_SetDPtr(QPropertyProxyBindingData* self, uintptr_t d_ptr);
const QtPrivate__QPropertyBindingData* QPropertyProxyBindingData_OriginalBindingData(const QPropertyProxyBindingData* self);
void QPropertyProxyBindingData_SetOriginalBindingData(QPropertyProxyBindingData* self, const QtPrivate__QPropertyBindingData* originalBindingData);
QUntypedPropertyData* QPropertyProxyBindingData_PropertyData(const QPropertyProxyBindingData* self);
void QPropertyProxyBindingData_SetPropertyData(QPropertyProxyBindingData* self, QUntypedPropertyData* propertyData);
void QPropertyProxyBindingData_Delete(QPropertyProxyBindingData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
