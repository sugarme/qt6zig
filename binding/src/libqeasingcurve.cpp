#include <QEasingCurve>
#include <QPointF>
#include <qeasingcurve.h>
#include "libqeasingcurve.h"
#include "libqeasingcurve.hxx"

QEasingCurve* QEasingCurve_new() {
	 return new QEasingCurve();
}

QEasingCurve* QEasingCurve_new2(const QEasingCurve* other) {
	 return new QEasingCurve(*other);
}

QEasingCurve* QEasingCurve_new3(int typeVal) {
	 return new QEasingCurve(static_cast<QMetaType::Type>(typeVal));
}

void QEasingCurve_OperatorAssign(QEasingCurve* self, const QEasingCurve* other) {
	self->operator=(*other);
}

void QEasingCurve_Swap(QEasingCurve* self, QEasingCurve* other) {
	self->swap(*other);
}

double QEasingCurve_Amplitude(const QEasingCurve* self) {
	return self->amplitude();
}

void QEasingCurve_SetAmplitude(QEasingCurve* self, double amplitude) {
	self->setAmplitude(amplitude);
}

double QEasingCurve_Period(const QEasingCurve* self) {
	return self->period();
}

void QEasingCurve_SetPeriod(QEasingCurve* self, double period) {
	self->setPeriod(period);
}

double QEasingCurve_Overshoot(const QEasingCurve* self) {
	return self->overshoot();
}

void QEasingCurve_SetOvershoot(QEasingCurve* self, double overshoot) {
	self->setOvershoot(overshoot);
}

void QEasingCurve_AddCubicBezierSegment(QEasingCurve* self, const QPointF* c1, const QPointF* c2, const QPointF* endPoint) {
	self->addCubicBezierSegment(*c1, *c2, *endPoint);
}

void QEasingCurve_AddTCBSegment(QEasingCurve* self, const QPointF* nextPoint, double t, double c, double b) {
	self->addTCBSegment(*nextPoint, t, c, b);
}

libqt_list QEasingCurve_ToCubicSpline(const QEasingCurve* self) {
	return self->toCubicSpline();
}

int QEasingCurve_Type(const QEasingCurve* self) {
	return self->type();
}

void QEasingCurve_SetType(QEasingCurve* self, int typeVal) {
	self->setType(static_cast<QMetaType::Type>(typeVal));
}

double QEasingCurve_ValueForProgress(const QEasingCurve* self, double progress) {
	return self->valueForProgress(progress);
}

void QEasingCurve_Delete(QEasingCurve* self) {
    delete self;
}

