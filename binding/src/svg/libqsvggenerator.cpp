#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
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

void QSvgGenerator_Delete(QSvgGenerator* self) {
    delete self;
}

