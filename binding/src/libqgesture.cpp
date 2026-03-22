#include <QEvent>
#include <QGesture>
#include <QGestureEvent>
#include <QObject>
#include <QPanGesture>
#include <QPinchGesture>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSwipeGesture>
#include <QTapAndHoldGesture>
#include <QTapGesture>
#include <QWidget>
#include <qgesture.h>
#include "libqgesture.h"
#include "libqgesture.hxx"

QGesture* QGesture_new() {
	 return new QGesture();
}

QGesture* QGesture_new2(QObject* parent) {
	 return new QGesture(parent);
}

libqt_string QGesture_Tr(const char* s) {
	QString _ret = QGesture::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QGesture_GestureType(const QGesture* self) {
	return self->gestureType();
}

int QGesture_State(const QGesture* self) {
	return self->state();
}

QPointF* QGesture_HotSpot(const QGesture* self) {
	return new QPointF(self->hotSpot());
}

void QGesture_SetHotSpot(QGesture* self, const QPointF* value) {
	self->setHotSpot(*value);
}

bool QGesture_HasHotSpot(const QGesture* self) {
	return self->hasHotSpot();
}

void QGesture_UnsetHotSpot(QGesture* self) {
	self->unsetHotSpot();
}

void QGesture_SetGestureCancelPolicy(QGesture* self, int policy) {
	self->setGestureCancelPolicy(static_cast<QGesture::GestureCancelPolicy>(policy));
}

int QGesture_GestureCancelPolicy(const QGesture* self) {
	return self->gestureCancelPolicy();
}

libqt_string QGesture_Tr2(const char* s, const char* c) {
	QString _ret = QGesture::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGesture::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGesture_Delete(QGesture* self) {
    delete self;
}

QPanGesture* QPanGesture_new() {
	 return new QPanGesture();
}

QPanGesture* QPanGesture_new2(QObject* parent) {
	 return new QPanGesture(parent);
}

libqt_string QPanGesture_Tr(const char* s) {
	QString _ret = QPanGesture::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QPointF* QPanGesture_LastOffset(const QPanGesture* self) {
	return new QPointF(self->lastOffset());
}

QPointF* QPanGesture_Offset(const QPanGesture* self) {
	return new QPointF(self->offset());
}

QPointF* QPanGesture_Delta(const QPanGesture* self) {
	return new QPointF(self->delta());
}

double QPanGesture_Acceleration(const QPanGesture* self) {
	return self->acceleration();
}

void QPanGesture_SetLastOffset(QPanGesture* self, const QPointF* value) {
	self->setLastOffset(*value);
}

void QPanGesture_SetOffset(QPanGesture* self, const QPointF* value) {
	self->setOffset(*value);
}

void QPanGesture_SetAcceleration(QPanGesture* self, double value) {
	self->setAcceleration(value);
}

libqt_string QPanGesture_Tr2(const char* s, const char* c) {
	QString _ret = QPanGesture::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPanGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPanGesture::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPanGesture_Delete(QPanGesture* self) {
    delete self;
}

QPinchGesture* QPinchGesture_new() {
	 return new QPinchGesture();
}

QPinchGesture* QPinchGesture_new2(QObject* parent) {
	 return new QPinchGesture(parent);
}

libqt_string QPinchGesture_Tr(const char* s) {
	QString _ret = QPinchGesture::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QPinchGesture_TotalChangeFlags(const QPinchGesture* self) {
	return self->totalChangeFlags();
}

void QPinchGesture_SetTotalChangeFlags(QPinchGesture* self, int value) {
	self->setTotalChangeFlags(static_cast<QFlags<QPinchGesture::ChangeFlag>>(value));
}

int QPinchGesture_ChangeFlags(const QPinchGesture* self) {
	return self->changeFlags();
}

void QPinchGesture_SetChangeFlags(QPinchGesture* self, int value) {
	self->setChangeFlags(static_cast<QFlags<QPinchGesture::ChangeFlag>>(value));
}

QPointF* QPinchGesture_StartCenterPoint(const QPinchGesture* self) {
	return new QPointF(self->startCenterPoint());
}

QPointF* QPinchGesture_LastCenterPoint(const QPinchGesture* self) {
	return new QPointF(self->lastCenterPoint());
}

QPointF* QPinchGesture_CenterPoint(const QPinchGesture* self) {
	return new QPointF(self->centerPoint());
}

void QPinchGesture_SetStartCenterPoint(QPinchGesture* self, const QPointF* value) {
	self->setStartCenterPoint(*value);
}

void QPinchGesture_SetLastCenterPoint(QPinchGesture* self, const QPointF* value) {
	self->setLastCenterPoint(*value);
}

void QPinchGesture_SetCenterPoint(QPinchGesture* self, const QPointF* value) {
	self->setCenterPoint(*value);
}

double QPinchGesture_TotalScaleFactor(const QPinchGesture* self) {
	return self->totalScaleFactor();
}

double QPinchGesture_LastScaleFactor(const QPinchGesture* self) {
	return self->lastScaleFactor();
}

double QPinchGesture_ScaleFactor(const QPinchGesture* self) {
	return self->scaleFactor();
}

void QPinchGesture_SetTotalScaleFactor(QPinchGesture* self, double value) {
	self->setTotalScaleFactor(value);
}

void QPinchGesture_SetLastScaleFactor(QPinchGesture* self, double value) {
	self->setLastScaleFactor(value);
}

void QPinchGesture_SetScaleFactor(QPinchGesture* self, double value) {
	self->setScaleFactor(value);
}

double QPinchGesture_TotalRotationAngle(const QPinchGesture* self) {
	return self->totalRotationAngle();
}

double QPinchGesture_LastRotationAngle(const QPinchGesture* self) {
	return self->lastRotationAngle();
}

double QPinchGesture_RotationAngle(const QPinchGesture* self) {
	return self->rotationAngle();
}

void QPinchGesture_SetTotalRotationAngle(QPinchGesture* self, double value) {
	self->setTotalRotationAngle(value);
}

void QPinchGesture_SetLastRotationAngle(QPinchGesture* self, double value) {
	self->setLastRotationAngle(value);
}

void QPinchGesture_SetRotationAngle(QPinchGesture* self, double value) {
	self->setRotationAngle(value);
}

libqt_string QPinchGesture_Tr2(const char* s, const char* c) {
	QString _ret = QPinchGesture::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPinchGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPinchGesture::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPinchGesture_Delete(QPinchGesture* self) {
    delete self;
}

QSwipeGesture* QSwipeGesture_new() {
	 return new QSwipeGesture();
}

QSwipeGesture* QSwipeGesture_new2(QObject* parent) {
	 return new QSwipeGesture(parent);
}

libqt_string QSwipeGesture_Tr(const char* s) {
	QString _ret = QSwipeGesture::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QSwipeGesture_HorizontalDirection(const QSwipeGesture* self) {
	return self->horizontalDirection();
}

int QSwipeGesture_VerticalDirection(const QSwipeGesture* self) {
	return self->verticalDirection();
}

double QSwipeGesture_SwipeAngle(const QSwipeGesture* self) {
	return self->swipeAngle();
}

void QSwipeGesture_SetSwipeAngle(QSwipeGesture* self, double value) {
	self->setSwipeAngle(value);
}

libqt_string QSwipeGesture_Tr2(const char* s, const char* c) {
	QString _ret = QSwipeGesture::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSwipeGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSwipeGesture::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSwipeGesture_Delete(QSwipeGesture* self) {
    delete self;
}

QTapGesture* QTapGesture_new() {
	 return new QTapGesture();
}

QTapGesture* QTapGesture_new2(QObject* parent) {
	 return new QTapGesture(parent);
}

libqt_string QTapGesture_Tr(const char* s) {
	QString _ret = QTapGesture::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QPointF* QTapGesture_Position(const QTapGesture* self) {
	return new QPointF(self->position());
}

void QTapGesture_SetPosition(QTapGesture* self, const QPointF* pos) {
	self->setPosition(*pos);
}

libqt_string QTapGesture_Tr2(const char* s, const char* c) {
	QString _ret = QTapGesture::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTapGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTapGesture::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTapGesture_Delete(QTapGesture* self) {
    delete self;
}

QTapAndHoldGesture* QTapAndHoldGesture_new() {
	 return new QTapAndHoldGesture();
}

QTapAndHoldGesture* QTapAndHoldGesture_new2(QObject* parent) {
	 return new QTapAndHoldGesture(parent);
}

libqt_string QTapAndHoldGesture_Tr(const char* s) {
	QString _ret = QTapAndHoldGesture::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QPointF* QTapAndHoldGesture_Position(const QTapAndHoldGesture* self) {
	return new QPointF(self->position());
}

void QTapAndHoldGesture_SetPosition(QTapAndHoldGesture* self, const QPointF* pos) {
	self->setPosition(*pos);
}

void QTapAndHoldGesture_SetTimeout(int msecs) {
	QTapAndHoldGesture::setTimeout(msecs);
}

int QTapAndHoldGesture_Timeout() {
	return QTapAndHoldGesture::timeout();
}

libqt_string QTapAndHoldGesture_Tr2(const char* s, const char* c) {
	QString _ret = QTapAndHoldGesture::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTapAndHoldGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTapAndHoldGesture::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTapAndHoldGesture_Delete(QTapAndHoldGesture* self) {
    delete self;
}

QGestureEvent* QGestureEvent_new(const libqt_list gestures) {
	 return new QGestureEvent(*gestures);
}

QGestureEvent* QGestureEvent_new2(const QGestureEvent* param1) {
	 return new QGestureEvent(*param1);
}

libqt_list QGestureEvent_Gestures(const QGestureEvent* self) {
	return self->gestures();
}

QGesture* QGestureEvent_Gesture(const QGestureEvent* self, int typeVal) {
	return self->gesture(static_cast<Qt::GestureType>(typeVal));
}

libqt_list QGestureEvent_ActiveGestures(const QGestureEvent* self) {
	return self->activeGestures();
}

libqt_list QGestureEvent_CanceledGestures(const QGestureEvent* self) {
	return self->canceledGestures();
}

void QGestureEvent_SetAccepted(QGestureEvent* self, QGesture* param1, bool param2) {
	self->setAccepted(param1, param2);
}

void QGestureEvent_Accept(QGestureEvent* self, QGesture* param1) {
	self->accept(param1);
}

void QGestureEvent_Ignore(QGestureEvent* self, QGesture* param1) {
	self->ignore(param1);
}

bool QGestureEvent_IsAccepted(const QGestureEvent* self, QGesture* param1) {
	return self->isAccepted(param1);
}

void QGestureEvent_SetAccepted2(QGestureEvent* self, int param1, bool param2) {
	self->setAccepted(static_cast<Qt::GestureType>(param1), param2);
}

void QGestureEvent_Accept2(QGestureEvent* self, int param1) {
	self->accept(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_Ignore2(QGestureEvent* self, int param1) {
	self->ignore(static_cast<Qt::GestureType>(param1));
}

bool QGestureEvent_IsAccepted2(const QGestureEvent* self, int param1) {
	return self->isAccepted(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_SetWidget(QGestureEvent* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QGestureEvent_Widget(const QGestureEvent* self) {
	return self->widget();
}

QPointF* QGestureEvent_MapToGraphicsScene(const QGestureEvent* self, const QPointF* gesturePoint) {
	return new QPointF(self->mapToGraphicsScene(*gesturePoint));
}

void QGestureEvent_Delete(QGestureEvent* self) {
    delete self;
}

