#include <QChronoTimer>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTimerEvent>
#include <qchronotimer.h>
#include "libqchronotimer.h"
#include "libqchronotimer.hxx"

QChronoTimer* QChronoTimer_new() {
	 return new VirtualQChronoTimer();
}

QChronoTimer* QChronoTimer_new2(QObject* parent) {
	 return new VirtualQChronoTimer(parent);
}

libqt_string QChronoTimer_Tr(const char* s) {
	QString _ret = QChronoTimer::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QChronoTimer_IsActive(const QChronoTimer* self) {
	return self->isActive();
}

void QChronoTimer_SetTimerType(QChronoTimer* self, int atype) {
	self->setTimerType(static_cast<Qt::TimerType>(atype));
}

int QChronoTimer_TimerType(const QChronoTimer* self) {
	return self->timerType();
}

void QChronoTimer_SetSingleShot(QChronoTimer* self, bool singleShot) {
	self->setSingleShot(singleShot);
}

bool QChronoTimer_IsSingleShot(const QChronoTimer* self) {
	return self->isSingleShot();
}

void QChronoTimer_Start(QChronoTimer* self) {
	self->start();
}

void QChronoTimer_Stop(QChronoTimer* self) {
	self->stop();
}

libqt_string QChronoTimer_Tr2(const char* s, const char* c) {
	QString _ret = QChronoTimer::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QChronoTimer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QChronoTimer::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QChronoTimer_Connect_timeout(QChronoTimer* self, intptr_t slot) {
    void (*slotFunc)(QChronoTimer*) = reinterpret_cast<void (*)(QChronoTimer*)>(slot);
    QChronoTimer::connect(self, &QChronoTimer::timeout, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QChronoTimer_Delete(QChronoTimer* self) {
    delete self;
}

