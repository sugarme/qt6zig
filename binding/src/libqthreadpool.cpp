#include <QDeadlineTimer>
#include <QObject>
#include <QRunnable>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QThread>
#include <QThreadPool>
#include <qthreadpool.h>
#include "libqthreadpool.h"
#include "libqthreadpool.hxx"

QThreadPool* QThreadPool_new() {
	 return new QThreadPool();
}

QThreadPool* QThreadPool_new2(QObject* parent) {
	 return new QThreadPool(parent);
}

libqt_string QThreadPool_Tr(const char* s) {
	QString _ret = QThreadPool::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QThreadPool* QThreadPool_GlobalInstance() {
	return QThreadPool::globalInstance();
}

void QThreadPool_Start(QThreadPool* self, QRunnable* runnable) {
	self->start(runnable);
}

bool QThreadPool_TryStart(QThreadPool* self, QRunnable* runnable) {
	return self->tryStart(runnable);
}

void QThreadPool_StartOnReservedThread(QThreadPool* self, QRunnable* runnable) {
	self->startOnReservedThread(runnable);
}

int QThreadPool_ExpiryTimeout(const QThreadPool* self) {
	return self->expiryTimeout();
}

void QThreadPool_SetExpiryTimeout(QThreadPool* self, int expiryTimeout) {
	self->setExpiryTimeout(expiryTimeout);
}

int QThreadPool_MaxThreadCount(const QThreadPool* self) {
	return self->maxThreadCount();
}

void QThreadPool_SetMaxThreadCount(QThreadPool* self, int maxThreadCount) {
	self->setMaxThreadCount(maxThreadCount);
}

int QThreadPool_ActiveThreadCount(const QThreadPool* self) {
	return self->activeThreadCount();
}

void QThreadPool_SetStackSize(QThreadPool* self, unsigned int stackSize) {
	self->setStackSize(stackSize);
}

unsigned int QThreadPool_StackSize(const QThreadPool* self) {
	return self->stackSize();
}

void QThreadPool_SetThreadPriority(QThreadPool* self, int priority) {
	self->setThreadPriority(static_cast<QThread::Priority>(priority));
}

int QThreadPool_ThreadPriority(const QThreadPool* self) {
	return self->threadPriority();
}

void QThreadPool_ReserveThread(QThreadPool* self) {
	self->reserveThread();
}

void QThreadPool_ReleaseThread(QThreadPool* self) {
	self->releaseThread();
}

bool QThreadPool_WaitForDone(QThreadPool* self, int msecs) {
	return self->waitForDone(msecs);
}

bool QThreadPool_WaitForDone2(QThreadPool* self) {
	return self->waitForDone();
}

void QThreadPool_Clear(QThreadPool* self) {
	self->clear();
}

bool QThreadPool_Contains(const QThreadPool* self, const QThread* thread) {
	return self->contains(thread);
}

bool QThreadPool_TryTake(QThreadPool* self, QRunnable* runnable) {
	return self->tryTake(runnable);
}

libqt_string QThreadPool_Tr2(const char* s, const char* c) {
	QString _ret = QThreadPool::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QThreadPool_Tr3(const char* s, const char* c, int n) {
	QString _ret = QThreadPool::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QThreadPool_Start2(QThreadPool* self, QRunnable* runnable, int priority) {
	self->start(runnable, priority);
}

bool QThreadPool_WaitForDone1(QThreadPool* self, QDeadlineTimer* deadline) {
	return self->waitForDone(*deadline);
}

void QThreadPool_Delete(QThreadPool* self) {
    delete self;
}

