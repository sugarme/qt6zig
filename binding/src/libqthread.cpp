#include <QAbstractEventDispatcher>
#include <QDeadlineTimer>
#include <QEvent>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QThread>
#include <qthread.h>
#include "libqthread.h"
#include "libqthread.hxx"

QThread* QThread_new() {
	 return new VirtualQThread();
}

QThread* QThread_new2(QObject* parent) {
	 return new VirtualQThread(parent);
}

libqt_string QThread_Tr(const char* s) {
	QString _ret = QThread::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void* QThread_CurrentThreadId() {
	return QThread::currentThreadId();
}

QThread* QThread_CurrentThread() {
	return QThread::currentThread();
}

bool QThread_IsMainThread() {
	return QThread::isMainThread();
}

int QThread_IdealThreadCount() {
	return QThread::idealThreadCount();
}

void QThread_YieldCurrentThread() {
	QThread::yieldCurrentThread();
}

void QThread_SetPriority(QThread* self, int priority) {
	self->setPriority(static_cast<QAction::Priority>(priority));
}

int QThread_Priority(const QThread* self) {
	return self->priority();
}

bool QThread_IsFinished(const QThread* self) {
	return self->isFinished();
}

bool QThread_IsRunning(const QThread* self) {
	return self->isRunning();
}

void QThread_RequestInterruption(QThread* self) {
	self->requestInterruption();
}

bool QThread_IsInterruptionRequested(const QThread* self) {
	return self->isInterruptionRequested();
}

void QThread_SetStackSize(QThread* self, unsigned int stackSize) {
	self->setStackSize(stackSize);
}

unsigned int QThread_StackSize(const QThread* self) {
	return self->stackSize();
}

QAbstractEventDispatcher* QThread_EventDispatcher(const QThread* self) {
	return self->eventDispatcher();
}

void QThread_SetEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher) {
	self->setEventDispatcher(eventDispatcher);
}

bool QThread_Event(QThread* self, QEvent* event) {
	return self->event(event);
}

int QThread_LoopLevel(const QThread* self) {
	return self->loopLevel();
}

bool QThread_IsCurrentThread(const QThread* self) {
	return self->isCurrentThread();
}

void QThread_Start(QThread* self) {
	self->start();
}

void QThread_Terminate(QThread* self) {
	self->terminate();
}

void QThread_Exit(QThread* self) {
	self->exit();
}

void QThread_Quit(QThread* self) {
	self->quit();
}

bool QThread_Wait(QThread* self) {
	return self->wait();
}

bool QThread_Wait2(QThread* self, unsigned long time) {
	return self->wait(time);
}

void QThread_Sleep(unsigned long param1) {
	QThread::sleep(param1);
}

void QThread_Msleep(unsigned long param1) {
	QThread::msleep(param1);
}

void QThread_Usleep(unsigned long param1) {
	QThread::usleep(param1);
}

libqt_string QThread_Tr2(const char* s, const char* c) {
	QString _ret = QThread::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QThread_Tr3(const char* s, const char* c, int n) {
	QString _ret = QThread::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QThread_Start1(QThread* self, int param1) {
	self->start(static_cast<QThread::Priority>(param1));
}

void QThread_Exit1(QThread* self, int retcode) {
	self->exit(retcode);
}

bool QThread_Wait1(QThread* self, QDeadlineTimer* deadline) {
	return self->wait(*deadline);
}

// Base class handler implementation
bool QThread_QBaseEvent(QThread* self, QEvent* event) {
	auto* vqthread = dynamic_cast<VirtualQThread*>(self);
	if (vqthread && vqthread->isVirtualQThread) {
vqthread->setQThread_Event_IsBase(true);
	return vqthread->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QThread_OnEvent(QThread* self, intptr_t slot) {
	auto* vqthread = dynamic_cast<VirtualQThread*>(self);
	if (vqthread && vqthread->isVirtualQThread) {
vqthread->setQThread_Event_Callback(reinterpret_cast<VirtualQThread::QThread_Event_Callback>(slot));
}
}

void QThread_Connect_started(QThread* self, intptr_t slot) {
    void (*slotFunc)(QThread*) = reinterpret_cast<void (*)(QThread*)>(slot);
    QThread::connect(self, &QThread::started, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QThread_Connect_finished(QThread* self, intptr_t slot) {
    void (*slotFunc)(QThread*) = reinterpret_cast<void (*)(QThread*)>(slot);
    QThread::connect(self, &QThread::finished, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QThread_Delete(QThread* self) {
    delete self;
}

