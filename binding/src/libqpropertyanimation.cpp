#include <QByteArray>
#include <QEvent>
#include <QObject>
#include <QPropertyAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <QVariantAnimation>
#include <qpropertyanimation.h>
#include "libqpropertyanimation.h"
#include "libqpropertyanimation.hxx"

QPropertyAnimation* QPropertyAnimation_new() {
	 return new VirtualQPropertyAnimation();
}

QPropertyAnimation* QPropertyAnimation_new2(QObject* target, const libqt_string propertyName) {
	 return new VirtualQPropertyAnimation(target, QByteArray(propertyName.data, propertyName.len));
}

QPropertyAnimation* QPropertyAnimation_new3(QObject* parent) {
	 return new VirtualQPropertyAnimation(parent);
}

QPropertyAnimation* QPropertyAnimation_new4(QObject* target, const libqt_string propertyName, QObject* parent) {
	 return new VirtualQPropertyAnimation(target, QByteArray(propertyName.data, propertyName.len), parent);
}

libqt_string QPropertyAnimation_Tr(const char* s) {
	QString _ret = QPropertyAnimation::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self) {
	return self->targetObject();
}

void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target) {
	self->setTargetObject(target);
}

libqt_string QPropertyAnimation_PropertyName(const QPropertyAnimation* self) {
	QByteArray _qb = self->propertyName();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, const libqt_string propertyName) {
	self->setPropertyName(QByteArray(propertyName.data, propertyName.len));
}

libqt_string QPropertyAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QPropertyAnimation::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPropertyAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPropertyAnimation::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
bool QPropertyAnimation_Event(QPropertyAnimation* self, QEvent* event) {
	auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
	if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
	return vqpropertyanimation->event(event);
	} else {
	return self->QPropertyAnimation::event(event);
}
}

// Base class handler implementation
bool QPropertyAnimation_QBaseEvent(QPropertyAnimation* self, QEvent* event) {
	auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
	if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
vqpropertyanimation->setQPropertyAnimation_Event_IsBase(true);
	return vqpropertyanimation->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnEvent(QPropertyAnimation* self, intptr_t slot) {
	auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
	if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
vqpropertyanimation->setQPropertyAnimation_Event_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QPropertyAnimation_UpdateCurrentValue(QPropertyAnimation* self, const QVariant* value) {
	auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
	if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
	vqpropertyanimation->updateCurrentValue(*value);
	} else {
	self->QPropertyAnimation::updateCurrentValue(*value);
}
}

// Base class handler implementation
void QPropertyAnimation_QBaseUpdateCurrentValue(QPropertyAnimation* self, const QVariant* value) {
	auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
	if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
vqpropertyanimation->setQPropertyAnimation_UpdateCurrentValue_IsBase(true);
	vqpropertyanimation->updateCurrentValue(*value);
}
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnUpdateCurrentValue(QPropertyAnimation* self, intptr_t slot) {
	auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
	if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
vqpropertyanimation->setQPropertyAnimation_UpdateCurrentValue_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_UpdateCurrentValue_Callback>(slot));
}
}

// Derived class handler implementation
void QPropertyAnimation_UpdateState(QPropertyAnimation* self, int newState, int oldState) {
	auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
	if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
	vqpropertyanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
	} else {
	self->QPropertyAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}
}

// Base class handler implementation
void QPropertyAnimation_QBaseUpdateState(QPropertyAnimation* self, int newState, int oldState) {
	auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
	if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
vqpropertyanimation->setQPropertyAnimation_UpdateState_IsBase(true);
	vqpropertyanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnUpdateState(QPropertyAnimation* self, intptr_t slot) {
	auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self);
	if (vqpropertyanimation && vqpropertyanimation->isVirtualQPropertyAnimation) {
vqpropertyanimation->setQPropertyAnimation_UpdateState_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_UpdateState_Callback>(slot));
}
}

void QPropertyAnimation_Delete(QPropertyAnimation* self) {
    delete self;
}

