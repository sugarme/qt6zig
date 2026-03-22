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
void QPropertyBindingPrivatePtr_DestroyAndFreeMemory(QPropertyBindingPrivatePtr* self);
void QPropertyBindingPrivatePtr_Reset(QPropertyBindingPrivatePtr* self);
bool QPropertyBindingPrivatePtr_Operatorbool(const QPropertyBindingPrivatePtr* self);
bool QPropertyBindingPrivatePtr_OperatorNot(const QPropertyBindingPrivatePtr* self);
void QPropertyBindingPrivatePtr_Delete(QPropertyBindingPrivatePtr* self);

QUntypedPropertyData* QUntypedPropertyData_new(const QUntypedPropertyData* other);
QUntypedPropertyData* QUntypedPropertyData_new2(QUntypedPropertyData* other);
void QUntypedPropertyData_CopyAssign(QUntypedPropertyData* self, QUntypedPropertyData* other);
void QUntypedPropertyData_MoveAssign(QUntypedPropertyData* self, QUntypedPropertyData* other);
void QUntypedPropertyData_Delete(QUntypedPropertyData* self);

uintptr_t QPropertyProxyBindingData_DPtr(const QPropertyProxyBindingData* self);
void QPropertyProxyBindingData_SetDPtr(QPropertyProxyBindingData* self, uintptr_t d_ptr);
QUntypedPropertyData* QPropertyProxyBindingData_PropertyData(const QPropertyProxyBindingData* self);
void QPropertyProxyBindingData_SetPropertyData(QPropertyProxyBindingData* self, QUntypedPropertyData* propertyData);
void QPropertyProxyBindingData_Delete(QPropertyProxyBindingData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
