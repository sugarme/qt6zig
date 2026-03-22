#include <QObject>
#include <QPointF>
#include <QRectF>
#include <QScroller>
#include <QScrollerProperties>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscroller.h>
#include "libqscroller.h"
#include "libqscroller.hxx"

libqt_string QScroller_Tr(const char* s) {
	QString _ret = QScroller::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QScroller_HasScroller(QObject* target) {
	return QScroller::hasScroller(target);
}

QScroller* QScroller_Scroller(QObject* target) {
	return QScroller::scroller(target);
}

const QScroller* QScroller_Scroller2(const QObject* target) {
	return QScroller::scroller(target);
}

int QScroller_GrabGesture(QObject* target) {
	return QScroller::grabGesture(target);
}

int QScroller_GrabbedGesture(QObject* target) {
	return QScroller::grabbedGesture(target);
}

void QScroller_UngrabGesture(QObject* target) {
	QScroller::ungrabGesture(target);
}

libqt_list QScroller_ActiveScrollers() {
	return QScroller::activeScrollers();
}

QObject* QScroller_Target(const QScroller* self) {
	return self->target();
}

int QScroller_State(const QScroller* self) {
	return self->state();
}

bool QScroller_HandleInput(QScroller* self, int input, const QPointF* position) {
	return self->handleInput(static_cast<QScroller::Input>(input), *position);
}

void QScroller_Stop(QScroller* self) {
	self->stop();
}

QPointF* QScroller_Velocity(const QScroller* self) {
	return new QPointF(self->velocity());
}

QPointF* QScroller_FinalPosition(const QScroller* self) {
	return new QPointF(self->finalPosition());
}

QPointF* QScroller_PixelPerMeter(const QScroller* self) {
	return new QPointF(self->pixelPerMeter());
}

QScrollerProperties* QScroller_ScrollerProperties(const QScroller* self) {
	return new QScrollerProperties(self->scrollerProperties());
}

void QScroller_SetSnapPositionsX(QScroller* self, const libqt_list positions) {
	self->setSnapPositionsX(*positions);
}

void QScroller_SetSnapPositionsX2(QScroller* self, double first, double interval) {
	self->setSnapPositionsX(first, interval);
}

void QScroller_SetSnapPositionsY(QScroller* self, const libqt_list positions) {
	self->setSnapPositionsY(*positions);
}

void QScroller_SetSnapPositionsY2(QScroller* self, double first, double interval) {
	self->setSnapPositionsY(first, interval);
}

void QScroller_SetScrollerProperties(QScroller* self, const QScrollerProperties* prop) {
	self->setScrollerProperties(*prop);
}

void QScroller_ScrollTo(QScroller* self, const QPointF* pos) {
	self->scrollTo(*pos);
}

void QScroller_ScrollTo2(QScroller* self, const QPointF* pos, int scrollTime) {
	self->scrollTo(*pos, scrollTime);
}

void QScroller_EnsureVisible(QScroller* self, const QRectF* rect, double xmargin, double ymargin) {
	self->ensureVisible(*rect, xmargin, ymargin);
}

void QScroller_EnsureVisible2(QScroller* self, const QRectF* rect, double xmargin, double ymargin, int scrollTime) {
	self->ensureVisible(*rect, xmargin, ymargin, scrollTime);
}

void QScroller_ResendPrepareEvent(QScroller* self) {
	self->resendPrepareEvent();
}

void QScroller_StateChanged(QScroller* self, int newstate) {
	self->stateChanged(static_cast<QScroller::State>(newstate));
}

void QScroller_Connect_StateChanged(QScroller* self, intptr_t slot) {
    void (*slotFunc)(QScroller*, int) = reinterpret_cast<void (*)(QScroller*, int)>(slot);
    QScroller::connect(self, &QScroller::stateChanged, [self, slotFunc](QScroller::State newstate) {
	slotFunc(self, newstate);
    });
}

void QScroller_ScrollerPropertiesChanged(QScroller* self, const QScrollerProperties* param1) {
	self->scrollerPropertiesChanged(*param1);
}

void QScroller_Connect_ScrollerPropertiesChanged(QScroller* self, intptr_t slot) {
    void (*slotFunc)(QScroller*, const QScrollerProperties*) = reinterpret_cast<void (*)(QScroller*, const QScrollerProperties*)>(slot);
    QScroller::connect(self, &QScroller::scrollerPropertiesChanged, [self, slotFunc](const QScrollerProperties& param1) {
	slotFunc(self, param1);
    });
}

libqt_string QScroller_Tr2(const char* s, const char* c) {
	QString _ret = QScroller::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QScroller_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScroller::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QScroller_GrabGesture2(QObject* target, int gestureType) {
	return QScroller::grabGesture(target, static_cast<QScroller::ScrollerGestureType>(gestureType));
}

bool QScroller_HandleInput3(QScroller* self, int input, const QPointF* position, long long timestamp) {
	return self->handleInput(static_cast<QScroller::Input>(input), *position, timestamp);
}

