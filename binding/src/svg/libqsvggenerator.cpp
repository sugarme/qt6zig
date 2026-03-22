#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSvgGenerator>
#include <qsvggenerator.h>
#include "libqsvggenerator.h"
#include "libqsvggenerator.hxx"

QSvgGenerator* QSvgGenerator_new() {
	 return new VirtualQSvgGenerator();
}

QSvgGenerator* QSvgGenerator_new2(int version) {
	 return new VirtualQSvgGenerator(static_cast<QSvgGenerator::SvgVersion>(version));
}

libqt_string QSvgGenerator_Title(const QSvgGenerator* self) {
	QString _ret = self->title();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSvgGenerator_SetTitle(QSvgGenerator* self, const libqt_string title) {
	self->setTitle(QString::fromUtf8(title.data, title.len));
}

libqt_string QSvgGenerator_Description(const QSvgGenerator* self) {
	QString _ret = self->description();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSvgGenerator_SetDescription(QSvgGenerator* self, const libqt_string description) {
	self->setDescription(QString::fromUtf8(description.data, description.len));
}

QSize* QSvgGenerator_Size(const QSvgGenerator* self) {
	return new QSize(self->size());
}

void QSvgGenerator_SetSize(QSvgGenerator* self, const QSize* size) {
	self->setSize(*size);
}

QRect* QSvgGenerator_ViewBox(const QSvgGenerator* self) {
	return new QRect(self->viewBox());
}

QRectF* QSvgGenerator_ViewBoxF(const QSvgGenerator* self) {
	return new QRectF(self->viewBoxF());
}

void QSvgGenerator_SetViewBox(QSvgGenerator* self, const QRect* viewBox) {
	self->setViewBox(*viewBox);
}

void QSvgGenerator_SetViewBox2(QSvgGenerator* self, const QRectF* viewBox) {
	self->setViewBox(*viewBox);
}

libqt_string QSvgGenerator_FileName(const QSvgGenerator* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSvgGenerator_SetFileName(QSvgGenerator* self, const libqt_string fileName) {
	self->setFileName(QString::fromUtf8(fileName.data, fileName.len));
}

QIODevice* QSvgGenerator_OutputDevice(const QSvgGenerator* self) {
	return self->outputDevice();
}

void QSvgGenerator_SetOutputDevice(QSvgGenerator* self, QIODevice* outputDevice) {
	self->setOutputDevice(outputDevice);
}

void QSvgGenerator_SetResolution(QSvgGenerator* self, int dpi) {
	self->setResolution(dpi);
}

int QSvgGenerator_Resolution(const QSvgGenerator* self) {
	return self->resolution();
}

int QSvgGenerator_SvgVersion(const QSvgGenerator* self) {
	return self->svgVersion();
}

// Derived class handler implementation
QPaintEngine* QSvgGenerator_PaintEngine(const QSvgGenerator* self) {
	auto* vqsvggenerator = dynamic_cast<const VirtualQSvgGenerator*>(self);
	if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
	return vqsvggenerator->paintEngine();
	} else {
	return self->QSvgGenerator::paintEngine();
}
}

// Base class handler implementation
QPaintEngine* QSvgGenerator_QBasePaintEngine(const QSvgGenerator* self) {
	auto* vqsvggenerator = dynamic_cast<const VirtualQSvgGenerator*>(self);
	if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
vqsvggenerator->setQSvgGenerator_PaintEngine_IsBase(true);
	return vqsvggenerator->paintEngine();
}
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnPaintEngine(const QSvgGenerator* self, intptr_t slot) {
	auto* vqsvggenerator = dynamic_cast<const VirtualQSvgGenerator*>(self);
	if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
vqsvggenerator->setQSvgGenerator_PaintEngine_Callback(reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_PaintEngine_Callback>(slot));
}
}

// Derived class handler implementation
int QSvgGenerator_Metric(const QSvgGenerator* self, int metric) {
	auto* vqsvggenerator = dynamic_cast<const VirtualQSvgGenerator*>(self);
	if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
	return vqsvggenerator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
	} else {
	return self->QSvgGenerator::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Base class handler implementation
int QSvgGenerator_QBaseMetric(const QSvgGenerator* self, int metric) {
	auto* vqsvggenerator = dynamic_cast<const VirtualQSvgGenerator*>(self);
	if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
vqsvggenerator->setQSvgGenerator_Metric_IsBase(true);
	return vqsvggenerator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnMetric(const QSvgGenerator* self, intptr_t slot) {
	auto* vqsvggenerator = dynamic_cast<const VirtualQSvgGenerator*>(self);
	if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
vqsvggenerator->setQSvgGenerator_Metric_Callback(reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_Metric_Callback>(slot));
}
}

void QSvgGenerator_Delete(QSvgGenerator* self) {
    delete self;
}

