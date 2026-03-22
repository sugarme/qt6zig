#include <QByteArray>
#include <QChildEvent>
#include <QDynamicPropertyChangeEvent>
#include <QEvent>
#include <QObject>
#include <QTimerEvent>
#include <qcoreevent.h>
#include "libqcoreevent.h"
#include "libqcoreevent.hxx"

QEvent* QEvent_new(int typeVal) {
	 return new VirtualQEvent(static_cast<QMetaType::Type>(typeVal));
}

int QEvent_Type(const QEvent* self) {
	return self->type();
}

bool QEvent_Spontaneous(const QEvent* self) {
	return self->spontaneous();
}

void QEvent_SetAccepted(QEvent* self, bool accepted) {
	self->setAccepted(accepted);
}

bool QEvent_IsAccepted(const QEvent* self) {
	return self->isAccepted();
}

void QEvent_Accept(QEvent* self) {
	self->accept();
}

void QEvent_Ignore(QEvent* self) {
	self->ignore();
}

bool QEvent_IsInputEvent(const QEvent* self) {
	return self->isInputEvent();
}

bool QEvent_IsPointerEvent(const QEvent* self) {
	return self->isPointerEvent();
}

bool QEvent_IsSinglePointEvent(const QEvent* self) {
	return self->isSinglePointEvent();
}

int QEvent_RegisterEventType() {
	return QEvent::registerEventType();
}

int QEvent_RegisterEventType1(int hint) {
	return QEvent::registerEventType(hint);
}

// Base class handler implementation
void QEvent_QBaseSetAccepted(QEvent* self, bool accepted) {
	auto* vqevent = dynamic_cast<VirtualQEvent*>(self);
	if (vqevent && vqevent->isVirtualQEvent) {
vqevent->setQEvent_SetAccepted_IsBase(true);
	vqevent->setAccepted(accepted);
}
}

// Auxiliary method to allow providing re-implementation
void QEvent_OnSetAccepted(QEvent* self, intptr_t slot) {
	auto* vqevent = dynamic_cast<VirtualQEvent*>(self);
	if (vqevent && vqevent->isVirtualQEvent) {
vqevent->setQEvent_SetAccepted_Callback(reinterpret_cast<VirtualQEvent::QEvent_SetAccepted_Callback>(slot));
}
}

void QEvent_Delete(QEvent* self) {
    delete self;
}

QTimerEvent* QTimerEvent_new(int timerId) {
	 return new QTimerEvent(timerId);
}

int QTimerEvent_TimerId(const QTimerEvent* self) {
	return self->timerId();
}

void QTimerEvent_Delete(QTimerEvent* self) {
    delete self;
}

QChildEvent* QChildEvent_new(int typeVal, QObject* child) {
	 return new QChildEvent(static_cast<QMetaType::Type>(typeVal), child);
}

QObject* QChildEvent_Child(const QChildEvent* self) {
	return self->child();
}

bool QChildEvent_Added(const QChildEvent* self) {
	return self->added();
}

bool QChildEvent_Polished(const QChildEvent* self) {
	return self->polished();
}

bool QChildEvent_Removed(const QChildEvent* self) {
	return self->removed();
}

void QChildEvent_Delete(QChildEvent* self) {
    delete self;
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(const libqt_string name) {
	 return new QDynamicPropertyChangeEvent(QByteArray(name.data, name.len));
}

libqt_string QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self) {
	QByteArray _qb = self->propertyName();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self) {
    delete self;
}

