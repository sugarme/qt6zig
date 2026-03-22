#include <QPropertyProxyBindingData>
#include <QUntypedPropertyData>
#include <qpropertyprivate.h>
#include "libqpropertyprivate.h"
#include "libqpropertyprivate.hxx"

QPropertyBindingPrivatePtr* QPropertyBindingPrivatePtr_new() {
	 return new QPropertyBindingPrivatePtr();
}

QPropertyBindingPrivatePtr* QPropertyBindingPrivatePtr_new2(QtPrivate__RefCounted* data) {
	 return new QPropertyBindingPrivatePtr(data);
}

QPropertyBindingPrivatePtr* QPropertyBindingPrivatePtr_new3(const QPropertyBindingPrivatePtr* o) {
	 return new QPropertyBindingPrivatePtr(*o);
}

QtPrivate__RefCounted* QPropertyBindingPrivatePtr_OperatorMultiply(const QPropertyBindingPrivatePtr* self) {
	return new QtPrivate::RefCounted(self->operator*());
}

QtPrivate__RefCounted* QPropertyBindingPrivatePtr_OperatorMinusGreater(QPropertyBindingPrivatePtr* self) {
	return self->operator->();
}

QtPrivate__RefCounted* QPropertyBindingPrivatePtr_OperatorMinusGreater2(const QPropertyBindingPrivatePtr* self) {
	return self->operator->();
}

QtPrivate__RefCounted* QPropertyBindingPrivatePtr_OperatorQtPrivate__RefCountedMultiply(QPropertyBindingPrivatePtr* self) {
	return self->operator QtPrivate::RefCounted *();
}

const QtPrivate__RefCounted* QPropertyBindingPrivatePtr_OperatorconstQtPrivate__RefCountedMultiply(const QPropertyBindingPrivatePtr* self) {
	return self->operator const QtPrivate::RefCounted *();
}

QtPrivate__RefCounted* QPropertyBindingPrivatePtr_Data(const QPropertyBindingPrivatePtr* self) {
	return self->data();
}

QtPrivate__RefCounted* QPropertyBindingPrivatePtr_Get(const QPropertyBindingPrivatePtr* self) {
	return self->get();
}

const QtPrivate__RefCounted* QPropertyBindingPrivatePtr_ConstData(const QPropertyBindingPrivatePtr* self) {
	return self->constData();
}

QtPrivate__RefCounted* QPropertyBindingPrivatePtr_Take(QPropertyBindingPrivatePtr* self) {
	return self->take();
}

void QPropertyBindingPrivatePtr_DestroyAndFreeMemory(QPropertyBindingPrivatePtr* self) {
	self->destroyAndFreeMemory();
}

void QPropertyBindingPrivatePtr_Reset(QPropertyBindingPrivatePtr* self) {
	self->reset();
}

void QPropertyBindingPrivatePtr_OperatorAssign(QPropertyBindingPrivatePtr* self, const QPropertyBindingPrivatePtr* o) {
	self->operator=(*o);
}

void QPropertyBindingPrivatePtr_OperatorAssign2(QPropertyBindingPrivatePtr* self, QtPrivate__RefCounted* o) {
	self->operator=(o);
}

bool QPropertyBindingPrivatePtr_Operatorbool(const QPropertyBindingPrivatePtr* self) {
	return self->operator bool();
}

bool QPropertyBindingPrivatePtr_OperatorNot(const QPropertyBindingPrivatePtr* self) {
	return self->operator!();
}

void QPropertyBindingPrivatePtr_Swap(QPropertyBindingPrivatePtr* self, QPropertyBindingPrivatePtr* other) {
	self->swap(*other);
}

void QPropertyBindingPrivatePtr_Reset1(QPropertyBindingPrivatePtr* self, QtPrivate__RefCounted* ptr) {
	self->reset(ptr);
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

const QtPrivate__QPropertyBindingData* QPropertyProxyBindingData_OriginalBindingData(const QPropertyProxyBindingData* self) {
	return self->originalBindingData;
}

void QPropertyProxyBindingData_SetOriginalBindingData(QPropertyProxyBindingData* self, const QtPrivate__QPropertyBindingData* originalBindingData) {
	self->originalBindingData;
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

