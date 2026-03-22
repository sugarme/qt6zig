#include <QBindingStatus>
#include <QBindingStorage>
#include <QUntypedPropertyData>
#include <qbindingstorage.h>
#include "libqbindingstorage.h"
#include "libqbindingstorage.hxx"

QBindingStatus* QBindingStatus_new(const QBindingStatus* other) {
	 return new QBindingStatus(*other);
}

QBindingStatus* QBindingStatus_new2(QBindingStatus* other) {
	 return new QBindingStatus(*other);
}

void QBindingStatus_CopyAssign(QBindingStatus* self, QBindingStatus* other) {
    *self = *other;
}

void QBindingStatus_MoveAssign(QBindingStatus* self, QBindingStatus* other) {
    *self = std::move(*other);
}

QtPrivate::BindingEvaluationState* QBindingStatus_CurrentlyEvaluatingBinding(const QBindingStatus* self) {
	return self->currentlyEvaluatingBinding;
}

void QBindingStatus_SetCurrentlyEvaluatingBinding(QBindingStatus* self, QtPrivate::BindingEvaluationState* currentlyEvaluatingBinding) {
	self->currentlyEvaluatingBinding;
}

QtPrivate::CompatPropertySafePoint* QBindingStatus_CurrentCompatProperty(const QBindingStatus* self) {
	return self->currentCompatProperty;
}

void QBindingStatus_SetCurrentCompatProperty(QBindingStatus* self, QtPrivate::CompatPropertySafePoint* currentCompatProperty) {
	self->currentCompatProperty;
}

QPropertyDelayedNotifications* QBindingStatus_GroupUpdateData(const QBindingStatus* self) {
	return self->groupUpdateData;
}

void QBindingStatus_SetGroupUpdateData(QBindingStatus* self, QPropertyDelayedNotifications* groupUpdateData) {
	self->groupUpdateData;
}

void QBindingStatus_Delete(QBindingStatus* self) {
    delete self;
}

QBindingStorage* QBindingStorage_new() {
	 return new QBindingStorage();
}

QBindingStorage* QBindingStorage_new2(const QBindingStorage* param1) {
	 return new QBindingStorage(*param1);
}

bool QBindingStorage_IsEmpty(QBindingStorage* self) {
	return self->isEmpty();
}

bool QBindingStorage_IsValid(const QBindingStorage* self) {
	return self->isValid();
}

const QBindingStatus* QBindingStorage_Status(const QBindingStorage* self, QtPrivate::QBindingStatusAccessToken param1) {
	return self->status(param1);
}

void QBindingStorage_RegisterDependency(const QBindingStorage* self, const QUntypedPropertyData* data) {
	self->registerDependency(data);
}

QtPrivate__QPropertyBindingData* QBindingStorage_BindingData(const QBindingStorage* self, const QUntypedPropertyData* data) {
	return self->bindingData(data);
}

QtPrivate__QPropertyBindingData* QBindingStorage_BindingData2(QBindingStorage* self, QUntypedPropertyData* data, bool create) {
	return self->bindingData(data, create);
}

void QBindingStorage_Delete(QBindingStorage* self) {
    delete self;
}

