#include <QByteArray>
#include <QPaintEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSvgRenderer>
#include <QSvgWidget>
#include <QWidget>
#include <qsvgwidget.h>
#include "libqsvgwidget.h"
#include "libqsvgwidget.hxx"

QSvgWidget* QSvgWidget_new(QWidget* parent) {
	 return new VirtualQSvgWidget(parent);
}

QSvgWidget* QSvgWidget_new2() {
	 return new VirtualQSvgWidget();
}

QSvgWidget* QSvgWidget_new3(const libqt_string file) {
	 return new VirtualQSvgWidget(QString::fromUtf8(file.data, file.len));
}

QSvgWidget* QSvgWidget_new4(const libqt_string file, QWidget* parent) {
	 return new VirtualQSvgWidget(QString::fromUtf8(file.data, file.len), parent);
}

libqt_string QSvgWidget_Tr(const char* s) {
	QString _ret = QSvgWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSvgRenderer* QSvgWidget_Renderer(const QSvgWidget* self) {
	return self->renderer();
}

QSize* QSvgWidget_SizeHint(const QSvgWidget* self) {
	return new QSize(self->sizeHint());
}

quint32 QSvgWidget_Options(const QSvgWidget* self) {
	return self->options();
}

void QSvgWidget_SetOptions(QSvgWidget* self, quint32 options) {
	self->setOptions(static_cast<QFlags<QtSvg::Option>>(options));
}

void QSvgWidget_Load(QSvgWidget* self, const libqt_string file) {
	self->load(QString::fromUtf8(file.data, file.len));
}

void QSvgWidget_Load2(QSvgWidget* self, const libqt_string contents) {
	self->load(QByteArray(contents.data, contents.len));
}

libqt_string QSvgWidget_Tr2(const char* s, const char* c) {
	QString _ret = QSvgWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSvgWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSvgWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QSvgWidget_QBaseSizeHint(const QSvgWidget* self) {
	auto* vqsvgwidget = dynamic_cast<const VirtualQSvgWidget*>(self);
	if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
vqsvgwidget->setQSvgWidget_SizeHint_IsBase(true);
	return new QSize(vqsvgwidget->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnSizeHint(const QSvgWidget* self, intptr_t slot) {
	auto* vqsvgwidget = dynamic_cast<const VirtualQSvgWidget*>(self);
	if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
vqsvgwidget->setQSvgWidget_SizeHint_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_SizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QSvgWidget_PaintEvent(QSvgWidget* self, QPaintEvent* event) {
	auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
	if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
	vqsvgwidget->paintEvent(event);
	} else {
	self->QSvgWidget::paintEvent(event);
}
}

// Base class handler implementation
void QSvgWidget_QBasePaintEvent(QSvgWidget* self, QPaintEvent* event) {
	auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
	if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
vqsvgwidget->setQSvgWidget_PaintEvent_IsBase(true);
	vqsvgwidget->paintEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QSvgWidget_OnPaintEvent(QSvgWidget* self, intptr_t slot) {
	auto* vqsvgwidget = dynamic_cast<VirtualQSvgWidget*>(self);
	if (vqsvgwidget && vqsvgwidget->isVirtualQSvgWidget) {
vqsvgwidget->setQSvgWidget_PaintEvent_Callback(reinterpret_cast<VirtualQSvgWidget::QSvgWidget_PaintEvent_Callback>(slot));
}
}

void QSvgWidget_Delete(QSvgWidget* self) {
    delete self;
}

