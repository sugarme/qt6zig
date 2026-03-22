#include <QBrush>
#include <QColor>
#include <QObject>
#include <QPen>
#include <QScatterSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXYSeries>
#include <qscatterseries.h>
#include "libqscatterseries.h"
#include "libqscatterseries.hxx"

QScatterSeries* QScatterSeries_new() {
	 return new VirtualQScatterSeries();
}

QScatterSeries* QScatterSeries_new2(QObject* parent) {
	 return new VirtualQScatterSeries(parent);
}

libqt_string QScatterSeries_Tr(const char* s) {
	QString _ret = QScatterSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QScatterSeries_Type(const QScatterSeries* self) {
	return self->type();
}

void QScatterSeries_SetPen(QScatterSeries* self, const QPen* pen) {
	self->setPen(*pen);
}

void QScatterSeries_SetBrush(QScatterSeries* self, const QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QScatterSeries_Brush(const QScatterSeries* self) {
	return new QBrush(self->brush());
}

void QScatterSeries_SetColor(QScatterSeries* self, const QColor* color) {
	self->setColor(*color);
}

QColor* QScatterSeries_Color(const QScatterSeries* self) {
	return new QColor(self->color());
}

void QScatterSeries_SetBorderColor(QScatterSeries* self, const QColor* color) {
	self->setBorderColor(*color);
}

QColor* QScatterSeries_BorderColor(const QScatterSeries* self) {
	return new QColor(self->borderColor());
}

int QScatterSeries_MarkerShape(const QScatterSeries* self) {
	return self->markerShape();
}

void QScatterSeries_SetMarkerShape(QScatterSeries* self, int shape) {
	self->setMarkerShape(static_cast<QScatterSeries::MarkerShape>(shape));
}

double QScatterSeries_MarkerSize(const QScatterSeries* self) {
	return self->markerSize();
}

void QScatterSeries_SetMarkerSize(QScatterSeries* self, double size) {
	self->setMarkerSize(size);
}

void QScatterSeries_ColorChanged(QScatterSeries* self, QColor* color) {
	self->colorChanged(*color);
}

void QScatterSeries_Connect_ColorChanged(QScatterSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatterSeries*, QColor*) = reinterpret_cast<void (*)(QScatterSeries*, QColor*)>(slot);
    QScatterSeries::connect(self, &QScatterSeries::colorChanged, [self, slotFunc](QColor color) {
	slotFunc(self, color);
    });
}

void QScatterSeries_BorderColorChanged(QScatterSeries* self, QColor* color) {
	self->borderColorChanged(*color);
}

void QScatterSeries_Connect_BorderColorChanged(QScatterSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatterSeries*, QColor*) = reinterpret_cast<void (*)(QScatterSeries*, QColor*)>(slot);
    QScatterSeries::connect(self, &QScatterSeries::borderColorChanged, [self, slotFunc](QColor color) {
	slotFunc(self, color);
    });
}

void QScatterSeries_MarkerShapeChanged(QScatterSeries* self, int shape) {
	self->markerShapeChanged(static_cast<QScatterSeries::MarkerShape>(shape));
}

void QScatterSeries_Connect_MarkerShapeChanged(QScatterSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatterSeries*, int) = reinterpret_cast<void (*)(QScatterSeries*, int)>(slot);
    QScatterSeries::connect(self, &QScatterSeries::markerShapeChanged, [self, slotFunc](MarkerShape shape) {
	slotFunc(self, shape);
    });
}

void QScatterSeries_MarkerSizeChanged(QScatterSeries* self, double size) {
	self->markerSizeChanged(size);
}

void QScatterSeries_Connect_MarkerSizeChanged(QScatterSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatterSeries*, double) = reinterpret_cast<void (*)(QScatterSeries*, double)>(slot);
    QScatterSeries::connect(self, &QScatterSeries::markerSizeChanged, [self, slotFunc](qreal size) {
	slotFunc(self, size);
    });
}

libqt_string QScatterSeries_Tr2(const char* s, const char* c) {
	QString _ret = QScatterSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QScatterSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScatterSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QScatterSeries_QBaseType(const QScatterSeries* self) {
	auto* vqscatterseries = dynamic_cast<const VirtualQScatterSeries*>(self);
	if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
vqscatterseries->setQScatterSeries_Type_IsBase(true);
	return vqscatterseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnType(const QScatterSeries* self, intptr_t slot) {
	auto* vqscatterseries = dynamic_cast<const VirtualQScatterSeries*>(self);
	if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
vqscatterseries->setQScatterSeries_Type_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Type_Callback>(slot));
}
}

// Base class handler implementation
void QScatterSeries_QBaseSetPen(QScatterSeries* self, const QPen* pen) {
	auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
	if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
vqscatterseries->setQScatterSeries_SetPen_IsBase(true);
	vqscatterseries->setPen(*pen);
}
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetPen(QScatterSeries* self, intptr_t slot) {
	auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
	if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
vqscatterseries->setQScatterSeries_SetPen_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetPen_Callback>(slot));
}
}

// Base class handler implementation
void QScatterSeries_QBaseSetBrush(QScatterSeries* self, const QBrush* brush) {
	auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
	if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
vqscatterseries->setQScatterSeries_SetBrush_IsBase(true);
	vqscatterseries->setBrush(*brush);
}
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetBrush(QScatterSeries* self, intptr_t slot) {
	auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
	if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
vqscatterseries->setQScatterSeries_SetBrush_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetBrush_Callback>(slot));
}
}

// Base class handler implementation
void QScatterSeries_QBaseSetColor(QScatterSeries* self, const QColor* color) {
	auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
	if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
vqscatterseries->setQScatterSeries_SetColor_IsBase(true);
	vqscatterseries->setColor(*color);
}
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetColor(QScatterSeries* self, intptr_t slot) {
	auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
	if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
vqscatterseries->setQScatterSeries_SetColor_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetColor_Callback>(slot));
}
}

// Base class handler implementation
QColor* QScatterSeries_QBaseColor(const QScatterSeries* self) {
	auto* vqscatterseries = dynamic_cast<const VirtualQScatterSeries*>(self);
	if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
vqscatterseries->setQScatterSeries_Color_IsBase(true);
	return new QColor(vqscatterseries->color());
}
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnColor(const QScatterSeries* self, intptr_t slot) {
	auto* vqscatterseries = dynamic_cast<const VirtualQScatterSeries*>(self);
	if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
vqscatterseries->setQScatterSeries_Color_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Color_Callback>(slot));
}
}

void QScatterSeries_Delete(QScatterSeries* self) {
    delete self;
}

