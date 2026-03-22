#include <QEvent>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWinEventNotifier>
#include <qwineventnotifier.h>
#include "libqwineventnotifier.h"
#include "libqwineventnotifier.hxx"

QWinEventNotifier* QWinEventNotifier_new() {
	 return new VirtualQWinEventNotifier();
}

QWinEventNotifier* QWinEventNotifier_new2(void** hEvent) {
	 return new VirtualQWinEventNotifier(hEvent);
}

QWinEventNotifier* QWinEventNotifier_new3(QObject* parent) {
	 return new VirtualQWinEventNotifier(parent);
}

QWinEventNotifier* QWinEventNotifier_new4(void** hEvent, QObject* parent) {
	 return new VirtualQWinEventNotifier(hEvent, parent);
}

libqt_string QWinEventNotifier_Tr(const char* s) {
	QString _ret = QWinEventNotifier::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWinEventNotifier_SetHandle(QWinEventNotifier* self, void** hEvent) {
	self->setHandle(hEvent);
}

void** QWinEventNotifier_Handle(const QWinEventNotifier* self) {
	return self->handle();
}

bool QWinEventNotifier_IsEnabled(const QWinEventNotifier* self) {
	return self->isEnabled();
}

void QWinEventNotifier_SetEnabled(QWinEventNotifier* self, bool enable) {
	self->setEnabled(enable);
}

libqt_string QWinEventNotifier_Tr2(const char* s, const char* c) {
	QString _ret = QWinEventNotifier::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWinEventNotifier_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWinEventNotifier::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
bool QWinEventNotifier_Event(QWinEventNotifier* self, QEvent* e) {
	auto* vqwineventnotifier = dynamic_cast<VirtualQWinEventNotifier*>(self);
	if (vqwineventnotifier && vqwineventnotifier->isVirtualQWinEventNotifier) {
	return vqwineventnotifier->event(e);
	} else {
	return self->QWinEventNotifier::event(e);
}
}

// Base class handler implementation
bool QWinEventNotifier_QBaseEvent(QWinEventNotifier* self, QEvent* e) {
	auto* vqwineventnotifier = dynamic_cast<VirtualQWinEventNotifier*>(self);
	if (vqwineventnotifier && vqwineventnotifier->isVirtualQWinEventNotifier) {
vqwineventnotifier->setQWinEventNotifier_Event_IsBase(true);
	return vqwineventnotifier->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QWinEventNotifier_OnEvent(QWinEventNotifier* self, intptr_t slot) {
	auto* vqwineventnotifier = dynamic_cast<VirtualQWinEventNotifier*>(self);
	if (vqwineventnotifier && vqwineventnotifier->isVirtualQWinEventNotifier) {
vqwineventnotifier->setQWinEventNotifier_Event_Callback(reinterpret_cast<VirtualQWinEventNotifier::QWinEventNotifier_Event_Callback>(slot));
}
}

void QWinEventNotifier_Connect_activated(QWinEventNotifier* self, intptr_t slot) {
    void (*slotFunc)(QWinEventNotifier*, HANDLE) = reinterpret_cast<void (*)(QWinEventNotifier*, HANDLE)>(slot);
    QWinEventNotifier::connect(self, &QWinEventNotifier::activated, [self, slotFunc](HANDLE hEvent) {
	slotFunc(self, hEvent);
    });
}

void QWinEventNotifier_Delete(QWinEventNotifier* self) {
    delete self;
}

