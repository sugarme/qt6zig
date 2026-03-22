#include <QPropertyProxyBindingData>
#include <QUntypedPropertyData>
#include <qpropertyprivate.h>
#include "libqpropertyprivate.h"
#include "libqpropertyprivate.hxx"

QPropertyBindingPrivatePtr* QPropertyBindingPrivatePtr_new() {
	 return new QPropertyBindingPrivatePtr();
}

void QPropertyBindingPrivatePtr_DestroyAndFreeMemory(QPropertyBindingPrivatePtr* self) {
	self->destroyAndFreeMemory();
}

void QPropertyBindingPrivatePtr_Reset(QPropertyBindingPrivatePtr* self) {
	self->reset();
}

bool QPropertyBindingPrivatePtr_Operatorbool(const QPropertyBindingPrivatePtr* self) {
	return self->operator bool();
}

bool QPropertyBindingPrivatePtr_OperatorNot(const QPropertyBindingPrivatePtr* self) {
	return self->operator!();
}

void QPropertyBindingPrivatePtr_Delete(QPropertyBindingPrivatePtr* self) {
    delete self;
}

QUntypedPropertyData* QUntypedPropertyData_new(const QUntypedPropertyData* other) {
	 return new QUntypedPropertyData(*other);
}

QUntypedPropertyData* QUntypedPropertyData_new2(QUntypedPropertyData* other) {
	 return new QUntypedPropertyData(*other);
}

void QUntypedPropertyData_CopyAssign(QUntypedPropertyData* self, QUntypedPropertyData* other) {
    *self = *other;
}

void QUntypedPropertyData_MoveAssign(QUntypedPropertyData* self, QUntypedPropertyData* other) {
    *self = std::move(*other);
}

void QUntypedPropertyData_Delete(QUntypedPropertyData* self) {
    delete self;
}

uintptr_t QPropertyProxyBindingData_DPtr(const QPropertyProxyBindingData* self) {
	return self->d_ptr;
}

void QPropertyProxyBindingData_SetDPtr(QPropertyProxyBindingData* self, uintptr_t d_ptr) {
	self->d_ptr;
}

QUntypedPropertyData* QPropertyProxyBindingData_PropertyData(const QPropertyProxyBindingData* self) {
	return self->propertyData;
}

void QPropertyProxyBindingData_SetPropertyData(QPropertyProxyBindingData* self, QUntypedPropertyData* propertyData) {
	self->propertyData;
}

void QPropertyProxyBindingData_Delete(QPropertyProxyBindingData* self) {
    delete self;
}

