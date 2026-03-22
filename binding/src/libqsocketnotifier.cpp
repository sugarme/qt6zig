#include <QEvent>
#include <QObject>
#include <QSocketDescriptor>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qsocketnotifier.h>
#include "libqsocketnotifier.h"
#include "libqsocketnotifier.hxx"

QSocketNotifier* QSocketNotifier_new(int param1) {
	 return new VirtualQSocketNotifier(static_cast<QSocketNotifier::Type>(param1));
}

QSocketNotifier* QSocketNotifier_new2(intptr_t socket, int param2) {
	 return new VirtualQSocketNotifier(socket, static_cast<QSocketNotifier::Type>(param2));
}

QSocketNotifier* QSocketNotifier_new3(int param1, QObject* parent) {
	 return new VirtualQSocketNotifier(static_cast<QSocketNotifier::Type>(param1), parent);
}

QSocketNotifier* QSocketNotifier_new4(intptr_t socket, int param2, QObject* parent) {
	 return new VirtualQSocketNotifier(socket, static_cast<QSocketNotifier::Type>(param2), parent);
}

libqt_string QSocketNotifier_Tr(const char* s) {
	QString _ret = QSocketNotifier::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSocketNotifier_SetSocket(QSocketNotifier* self, intptr_t socket) {
	self->setSocket(socket);
}

intptr_t QSocketNotifier_Socket(const QSocketNotifier* self) {
	return self->socket();
}

int QSocketNotifier_Type(const QSocketNotifier* self) {
	return self->type();
}

bool QSocketNotifier_IsValid(const QSocketNotifier* self) {
	return self->isValid();
}

bool QSocketNotifier_IsEnabled(const QSocketNotifier* self) {
	return self->isEnabled();
}

void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled) {
	self->setEnabled(enabled);
}

libqt_string QSocketNotifier_Tr2(const char* s, const char* c) {
	QString _ret = QSocketNotifier::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSocketNotifier_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSocketNotifier::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
bool QSocketNotifier_Event(QSocketNotifier* self, QEvent* param1) {
	auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self);
	if (vqsocketnotifier && vqsocketnotifier->isVirtualQSocketNotifier) {
	return vqsocketnotifier->event(param1);
	} else {
	return self->QSocketNotifier::event(param1);
}
}

// Base class handler implementation
bool QSocketNotifier_QBaseEvent(QSocketNotifier* self, QEvent* param1) {
	auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self);
	if (vqsocketnotifier && vqsocketnotifier->isVirtualQSocketNotifier) {
vqsocketnotifier->setQSocketNotifier_Event_IsBase(true);
	return vqsocketnotifier->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnEvent(QSocketNotifier* self, intptr_t slot) {
	auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self);
	if (vqsocketnotifier && vqsocketnotifier->isVirtualQSocketNotifier) {
vqsocketnotifier->setQSocketNotifier_Event_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_Event_Callback>(slot));
}
}

void QSocketNotifier_Connect_activated(QSocketNotifier* self, intptr_t slot) {
    void (*slotFunc)(QSocketNotifier*, QSocketDescriptor*, int) = reinterpret_cast<void (*)(QSocketNotifier*, QSocketDescriptor*, int)>(slot);
    QSocketNotifier::connect(self, &QSocketNotifier::activated, [self, slotFunc](QSocketDescriptor socket, QSocketNotifier::Type activationEvent) {
	slotFunc(self, socket, activationEvent);
    });
}

void QSocketNotifier_Delete(QSocketNotifier* self) {
    delete self;
}

QSocketDescriptor* QSocketDescriptor_new(const QSocketDescriptor* other) {
	 return new QSocketDescriptor(*other);
}

QSocketDescriptor* QSocketDescriptor_new2(QSocketDescriptor* other) {
	 return new QSocketDescriptor(*other);
}

QSocketDescriptor* QSocketDescriptor_new3() {
	 return new QSocketDescriptor();
}

QSocketDescriptor* QSocketDescriptor_new4(intptr_t desc) {
	 return new QSocketDescriptor(desc);
}

QSocketDescriptor* QSocketDescriptor_new5(const QSocketDescriptor* param1) {
	 return new QSocketDescriptor(*param1);
}

QSocketDescriptor* QSocketDescriptor_new6(void** descriptor) {
	 return new QSocketDescriptor(descriptor);
}

void QSocketDescriptor_CopyAssign(QSocketDescriptor* self, QSocketDescriptor* other) {
    *self = *other;
}

void QSocketDescriptor_MoveAssign(QSocketDescriptor* self, QSocketDescriptor* other) {
    *self = std::move(*other);
}

intptr_t QSocketDescriptor_OperatorlongLong(const QSocketDescriptor* self) {
	return self->operator long long();
}

void* QSocketDescriptor_WinHandle(const QSocketDescriptor* self) {
	return self->winHandle();
}

void** QSocketDescriptor_OperatorvoidMultiply(const QSocketDescriptor* self) {
	return self->operator void *();
}

bool QSocketDescriptor_IsValid(const QSocketDescriptor* self) {
	return self->isValid();
}

void QSocketDescriptor_Delete(QSocketDescriptor* self) {
    delete self;
}

