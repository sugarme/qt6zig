#include <QGraphicsRotation>
#include <QGraphicsScale>
#include <QGraphicsTransform>
#include <QMatrix4x4>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVector3D>
#include <qgraphicstransform.h>
#include "libqgraphicstransform.h"
#include "libqgraphicstransform.hxx"

QGraphicsTransform* QGraphicsTransform_new() {
	 return new VirtualQGraphicsTransform();
}

QGraphicsTransform* QGraphicsTransform_new2(QObject* parent) {
	 return new VirtualQGraphicsTransform(parent);
}

libqt_string QGraphicsTransform_Tr(const char* s) {
	QString _ret = QGraphicsTransform::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsTransform_ApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

libqt_string QGraphicsTransform_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsTransform::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsTransform_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTransform::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QGraphicsTransform_QBaseApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix) {
	auto* vqgraphicstransform = dynamic_cast<const VirtualQGraphicsTransform*>(self);
	if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
vqgraphicstransform->setQGraphicsTransform_ApplyTo_IsBase(true);
	vqgraphicstransform->applyTo(matrix);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnApplyTo(const QGraphicsTransform* self, intptr_t slot) {
	auto* vqgraphicstransform = dynamic_cast<const VirtualQGraphicsTransform*>(self);
	if (vqgraphicstransform && vqgraphicstransform->isVirtualQGraphicsTransform) {
vqgraphicstransform->setQGraphicsTransform_ApplyTo_Callback(reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_ApplyTo_Callback>(slot));
}
}

void QGraphicsTransform_Delete(QGraphicsTransform* self) {
    delete self;
}

QGraphicsScale* QGraphicsScale_new() {
	 return new VirtualQGraphicsScale();
}

QGraphicsScale* QGraphicsScale_new2(QObject* parent) {
	 return new VirtualQGraphicsScale(parent);
}

libqt_string QGraphicsScale_Tr(const char* s) {
	QString _ret = QGraphicsScale::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QVector3D* QGraphicsScale_Origin(const QGraphicsScale* self) {
	return new QVector3D(self->origin());
}

void QGraphicsScale_SetOrigin(QGraphicsScale* self, const QVector3D* point) {
	self->setOrigin(*point);
}

double QGraphicsScale_XScale(const QGraphicsScale* self) {
	return self->xScale();
}

void QGraphicsScale_SetXScale(QGraphicsScale* self, double xScale) {
	self->setXScale(xScale);
}

double QGraphicsScale_YScale(const QGraphicsScale* self) {
	return self->yScale();
}

void QGraphicsScale_SetYScale(QGraphicsScale* self, double yScale) {
	self->setYScale(yScale);
}

double QGraphicsScale_ZScale(const QGraphicsScale* self) {
	return self->zScale();
}

void QGraphicsScale_SetZScale(QGraphicsScale* self, double zScale) {
	self->setZScale(zScale);
}

void QGraphicsScale_ApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

void QGraphicsScale_OriginChanged(QGraphicsScale* self) {
	self->originChanged();
}

void QGraphicsScale_Connect_OriginChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self, &QGraphicsScale::originChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsScale_XScaleChanged(QGraphicsScale* self) {
	self->xScaleChanged();
}

void QGraphicsScale_Connect_XScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self, &QGraphicsScale::xScaleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsScale_YScaleChanged(QGraphicsScale* self) {
	self->yScaleChanged();
}

void QGraphicsScale_Connect_YScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self, &QGraphicsScale::yScaleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsScale_ZScaleChanged(QGraphicsScale* self) {
	self->zScaleChanged();
}

void QGraphicsScale_Connect_ZScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self, &QGraphicsScale::zScaleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsScale_ScaleChanged(QGraphicsScale* self) {
	self->scaleChanged();
}

void QGraphicsScale_Connect_ScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self, &QGraphicsScale::scaleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QGraphicsScale_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsScale::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsScale_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsScale::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QGraphicsScale_QBaseApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix) {
	auto* vqgraphicsscale = dynamic_cast<const VirtualQGraphicsScale*>(self);
	if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
vqgraphicsscale->setQGraphicsScale_ApplyTo_IsBase(true);
	vqgraphicsscale->applyTo(matrix);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnApplyTo(const QGraphicsScale* self, intptr_t slot) {
	auto* vqgraphicsscale = dynamic_cast<const VirtualQGraphicsScale*>(self);
	if (vqgraphicsscale && vqgraphicsscale->isVirtualQGraphicsScale) {
vqgraphicsscale->setQGraphicsScale_ApplyTo_Callback(reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_ApplyTo_Callback>(slot));
}
}

void QGraphicsScale_Delete(QGraphicsScale* self) {
    delete self;
}

QGraphicsRotation* QGraphicsRotation_new() {
	 return new VirtualQGraphicsRotation();
}

QGraphicsRotation* QGraphicsRotation_new2(QObject* parent) {
	 return new VirtualQGraphicsRotation(parent);
}

libqt_string QGraphicsRotation_Tr(const char* s) {
	QString _ret = QGraphicsRotation::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QVector3D* QGraphicsRotation_Origin(const QGraphicsRotation* self) {
	return new QVector3D(self->origin());
}

void QGraphicsRotation_SetOrigin(QGraphicsRotation* self, const QVector3D* point) {
	self->setOrigin(*point);
}

double QGraphicsRotation_Angle(const QGraphicsRotation* self) {
	return self->angle();
}

void QGraphicsRotation_SetAngle(QGraphicsRotation* self, double angle) {
	self->setAngle(angle);
}

QVector3D* QGraphicsRotation_Axis(const QGraphicsRotation* self) {
	return new QVector3D(self->axis());
}

void QGraphicsRotation_SetAxis(QGraphicsRotation* self, const QVector3D* axis) {
	self->setAxis(*axis);
}

void QGraphicsRotation_SetAxis2(QGraphicsRotation* self, int axis) {
	self->setAxis(static_cast<Qt::Axis>(axis));
}

void QGraphicsRotation_ApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

void QGraphicsRotation_OriginChanged(QGraphicsRotation* self) {
	self->originChanged();
}

void QGraphicsRotation_Connect_OriginChanged(QGraphicsRotation* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsRotation*) = reinterpret_cast<void (*)(QGraphicsRotation*)>(slot);
    QGraphicsRotation::connect(self, &QGraphicsRotation::originChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsRotation_AngleChanged(QGraphicsRotation* self) {
	self->angleChanged();
}

void QGraphicsRotation_Connect_AngleChanged(QGraphicsRotation* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsRotation*) = reinterpret_cast<void (*)(QGraphicsRotation*)>(slot);
    QGraphicsRotation::connect(self, &QGraphicsRotation::angleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsRotation_AxisChanged(QGraphicsRotation* self) {
	self->axisChanged();
}

void QGraphicsRotation_Connect_AxisChanged(QGraphicsRotation* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsRotation*) = reinterpret_cast<void (*)(QGraphicsRotation*)>(slot);
    QGraphicsRotation::connect(self, &QGraphicsRotation::axisChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QGraphicsRotation_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsRotation::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsRotation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsRotation::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QGraphicsRotation_QBaseApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix) {
	auto* vqgraphicsrotation = dynamic_cast<const VirtualQGraphicsRotation*>(self);
	if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
vqgraphicsrotation->setQGraphicsRotation_ApplyTo_IsBase(true);
	vqgraphicsrotation->applyTo(matrix);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnApplyTo(const QGraphicsRotation* self, intptr_t slot) {
	auto* vqgraphicsrotation = dynamic_cast<const VirtualQGraphicsRotation*>(self);
	if (vqgraphicsrotation && vqgraphicsrotation->isVirtualQGraphicsRotation) {
vqgraphicsrotation->setQGraphicsRotation_ApplyTo_Callback(reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_ApplyTo_Callback>(slot));
}
}

void QGraphicsRotation_Delete(QGraphicsRotation* self) {
    delete self;
}

