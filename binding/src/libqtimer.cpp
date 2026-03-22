#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTimer>
#include <QTimerEvent>
#include <qtimer.h>
#include "libqtimer.h"
#include "libqtimer.hxx"

QTimer* QTimer_new() {
	 return new VirtualQTimer();
}

QTimer* QTimer_new2(QObject* parent) {
	 return new VirtualQTimer(parent);
}

libqt_string QTimer_Tr(const char* s) {
	QString _ret = QTimer::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTimer_IsActive(const QTimer* self) {
	return self->isActive();
}

int QTimer_TimerId(const QTimer* self) {
	return self->timerId();
}

void QTimer_SetInterval(QTimer* self, int msec) {
	self->setInterval(msec);
}

int QTimer_Interval(const QTimer* self) {
	return self->interval();
}

int QTimer_RemainingTime(const QTimer* self) {
	return self->remainingTime();
}

void QTimer_SetTimerType(QTimer* self, int atype) {
	self->setTimerType(static_cast<Qt::TimerType>(atype));
}

int QTimer_TimerType(const QTimer* self) {
	return self->timerType();
}

void QTimer_SetSingleShot(QTimer* self, bool singleShot) {
	self->setSingleShot(singleShot);
}

bool QTimer_IsSingleShot(const QTimer* self) {
	return self->isSingleShot();
}

void QTimer_SingleShot(int msec, const QObject* receiver, const char* member) {
	QTimer::singleShot(msec, receiver, member);
}

void QTimer_SingleShot2(int msec, int timerType, const QObject* receiver, const char* member) {
	QTimer::singleShot(msec, static_cast<Qt::TimerType>(timerType), receiver, member);
}

void QTimer_Start(QTimer* self, int msec) {
	self->start(msec);
}

void QTimer_Start2(QTimer* self) {
	self->start();
}

void QTimer_Stop(QTimer* self) {
	self->stop();
}

libqt_string QTimer_Tr2(const char* s, const char* c) {
	QString _ret = QTimer::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTimer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTimer::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTimer_Connect_timeout(QTimer* self, intptr_t slot) {
    void (*slotFunc)(QTimer*) = reinterpret_cast<void (*)(QTimer*)>(slot);
    QTimer::connect(self, &QTimer::timeout, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QTimer_Delete(QTimer* self) {
    delete self;
}

