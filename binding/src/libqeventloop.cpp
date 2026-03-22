#include <QDeadlineTimer>
#include <QEvent>
#include <QEventLoop>
#include <QEventLoopLocker>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QThread>
#include <qeventloop.h>
#include "libqeventloop.h"
#include "libqeventloop.hxx"

QEventLoop* QEventLoop_new() {
	 return new VirtualQEventLoop();
}

QEventLoop* QEventLoop_new2(QObject* parent) {
	 return new VirtualQEventLoop(parent);
}

libqt_string QEventLoop_Tr(const char* s) {
	QString _ret = QEventLoop::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QEventLoop_ProcessEvents(QEventLoop* self) {
	return self->processEvents();
}

void QEventLoop_ProcessEvents2(QEventLoop* self, int flags, int maximumTime) {
	self->processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags), maximumTime);
}

void QEventLoop_ProcessEvents3(QEventLoop* self, int flags, QDeadlineTimer* deadline) {
	self->processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags), *deadline);
}

int QEventLoop_Exec(QEventLoop* self) {
	return self->exec();
}

bool QEventLoop_IsRunning(const QEventLoop* self) {
	return self->isRunning();
}

void QEventLoop_WakeUp(QEventLoop* self) {
	self->wakeUp();
}

bool QEventLoop_Event(QEventLoop* self, QEvent* event) {
	return self->event(event);
}

void QEventLoop_Exit(QEventLoop* self) {
	self->exit();
}

void QEventLoop_Quit(QEventLoop* self) {
	self->quit();
}

libqt_string QEventLoop_Tr2(const char* s, const char* c) {
	QString _ret = QEventLoop::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QEventLoop_Tr3(const char* s, const char* c, int n) {
	QString _ret = QEventLoop::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QEventLoop_ProcessEvents1(QEventLoop* self, int flags) {
	return self->processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags));
}

int QEventLoop_Exec1(QEventLoop* self, int flags) {
	return self->exec(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags));
}

void QEventLoop_Exit1(QEventLoop* self, int returnCode) {
	self->exit(returnCode);
}

// Base class handler implementation
bool QEventLoop_QBaseEvent(QEventLoop* self, QEvent* event) {
	auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self);
	if (vqeventloop && vqeventloop->isVirtualQEventLoop) {
vqeventloop->setQEventLoop_Event_IsBase(true);
	return vqeventloop->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QEventLoop_OnEvent(QEventLoop* self, intptr_t slot) {
	auto* vqeventloop = dynamic_cast<VirtualQEventLoop*>(self);
	if (vqeventloop && vqeventloop->isVirtualQEventLoop) {
vqeventloop->setQEventLoop_Event_Callback(reinterpret_cast<VirtualQEventLoop::QEventLoop_Event_Callback>(slot));
}
}

void QEventLoop_Delete(QEventLoop* self) {
    delete self;
}

QEventLoopLocker* QEventLoopLocker_new() {
	 return new QEventLoopLocker();
}

QEventLoopLocker* QEventLoopLocker_new2(QEventLoop* loop) {
	 return new QEventLoopLocker(loop);
}

QEventLoopLocker* QEventLoopLocker_new3(QThread* thread) {
	 return new QEventLoopLocker(thread);
}

void QEventLoopLocker_Swap(QEventLoopLocker* self, QEventLoopLocker* other) {
	self->swap(*other);
}

void QEventLoopLocker_Delete(QEventLoopLocker* self) {
    delete self;
}

