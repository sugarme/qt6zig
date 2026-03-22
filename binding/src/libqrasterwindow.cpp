#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPoint>
#include <QRasterWindow>
#include <QResizeEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include <qrasterwindow.h>
#include "libqrasterwindow.h"
#include "libqrasterwindow.hxx"

QRasterWindow* QRasterWindow_new() {
	 return new VirtualQRasterWindow();
}

QRasterWindow* QRasterWindow_new2(QWindow* parent) {
	 return new VirtualQRasterWindow(parent);
}

libqt_string QRasterWindow_Tr(const char* s) {
	QString _ret = QRasterWindow::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRasterWindow_Tr2(const char* s, const char* c) {
	QString _ret = QRasterWindow::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRasterWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRasterWindow::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
int QRasterWindow_Metric(const QRasterWindow* self, int metric) {
	auto* vqrasterwindow = dynamic_cast<const VirtualQRasterWindow*>(self);
	if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
	return vqrasterwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
	} else {
	return self->QRasterWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Base class handler implementation
int QRasterWindow_QBaseMetric(const QRasterWindow* self, int metric) {
	auto* vqrasterwindow = dynamic_cast<const VirtualQRasterWindow*>(self);
	if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
vqrasterwindow->setQRasterWindow_Metric_IsBase(true);
	return vqrasterwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMetric(const QRasterWindow* self, intptr_t slot) {
	auto* vqrasterwindow = dynamic_cast<const VirtualQRasterWindow*>(self);
	if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
vqrasterwindow->setQRasterWindow_Metric_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Metric_Callback>(slot));
}
}

// Derived class handler implementation
QPaintDevice* QRasterWindow_Redirected(const QRasterWindow* self, QPoint* param1) {
	auto* vqrasterwindow = dynamic_cast<const VirtualQRasterWindow*>(self);
	if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
	return vqrasterwindow->redirected(param1);
	} else {
	return self->QRasterWindow::redirected(param1);
}
}

// Base class handler implementation
QPaintDevice* QRasterWindow_QBaseRedirected(const QRasterWindow* self, QPoint* param1) {
	auto* vqrasterwindow = dynamic_cast<const VirtualQRasterWindow*>(self);
	if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
vqrasterwindow->setQRasterWindow_Redirected_IsBase(true);
	return vqrasterwindow->redirected(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnRedirected(const QRasterWindow* self, intptr_t slot) {
	auto* vqrasterwindow = dynamic_cast<const VirtualQRasterWindow*>(self);
	if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
vqrasterwindow->setQRasterWindow_Redirected_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Redirected_Callback>(slot));
}
}

// Derived class handler implementation
void QRasterWindow_ResizeEvent(QRasterWindow* self, QResizeEvent* event) {
	auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
	if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
	vqrasterwindow->resizeEvent(event);
	} else {
	self->QRasterWindow::resizeEvent(event);
}
}

// Base class handler implementation
void QRasterWindow_QBaseResizeEvent(QRasterWindow* self, QResizeEvent* event) {
	auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
	if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
vqrasterwindow->setQRasterWindow_ResizeEvent_IsBase(true);
	vqrasterwindow->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnResizeEvent(QRasterWindow* self, intptr_t slot) {
	auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self);
	if (vqrasterwindow && vqrasterwindow->isVirtualQRasterWindow) {
vqrasterwindow->setQRasterWindow_ResizeEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ResizeEvent_Callback>(slot));
}
}

void QRasterWindow_Delete(QRasterWindow* self) {
    delete self;
}

