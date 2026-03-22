#include <QEvent>
#include <QExposeEvent>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEvent>
#include <QRect>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWindow>
#include <qpaintdevicewindow.h>
#include "libqpaintdevicewindow.h"
#include "libqpaintdevicewindow.hxx"

libqt_string QPaintDeviceWindow_Tr(const char* s) {
	QString _ret = QPaintDeviceWindow::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, const QRect* rect) {
	self->update(*rect);
}

void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self, const QRegion* region) {
	self->update(*region);
}

void QPaintDeviceWindow_Update3(QPaintDeviceWindow* self) {
	self->update();
}

libqt_string QPaintDeviceWindow_Tr2(const char* s, const char* c) {
	QString _ret = QPaintDeviceWindow::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPaintDeviceWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPaintDeviceWindow::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QPaintDeviceWindow_ExposeEvent(QPaintDeviceWindow* self, QExposeEvent* param1) {
	auto* vqpaintdevicewindow = dynamic_cast<VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
	vqpaintdevicewindow->exposeEvent(param1);
	} else {
	self->QPaintDeviceWindow::exposeEvent(param1);
}
}

// Base class handler implementation
void QPaintDeviceWindow_QBaseExposeEvent(QPaintDeviceWindow* self, QExposeEvent* param1) {
	auto* vqpaintdevicewindow = dynamic_cast<VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
vqpaintdevicewindow->setQPaintDeviceWindow_ExposeEvent_IsBase(true);
	vqpaintdevicewindow->exposeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QPaintDeviceWindow_OnExposeEvent(QPaintDeviceWindow* self, intptr_t slot) {
	auto* vqpaintdevicewindow = dynamic_cast<VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
vqpaintdevicewindow->setQPaintDeviceWindow_ExposeEvent_Callback(reinterpret_cast<VirtualQPaintDeviceWindow::QPaintDeviceWindow_ExposeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPaintDeviceWindow_PaintEvent(QPaintDeviceWindow* self, QPaintEvent* event) {
	auto* vqpaintdevicewindow = dynamic_cast<VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
	vqpaintdevicewindow->paintEvent(event);
	} else {
	self->QPaintDeviceWindow::paintEvent(event);
}
}

// Base class handler implementation
void QPaintDeviceWindow_QBasePaintEvent(QPaintDeviceWindow* self, QPaintEvent* event) {
	auto* vqpaintdevicewindow = dynamic_cast<VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
vqpaintdevicewindow->setQPaintDeviceWindow_PaintEvent_IsBase(true);
	vqpaintdevicewindow->paintEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QPaintDeviceWindow_OnPaintEvent(QPaintDeviceWindow* self, intptr_t slot) {
	auto* vqpaintdevicewindow = dynamic_cast<VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
vqpaintdevicewindow->setQPaintDeviceWindow_PaintEvent_Callback(reinterpret_cast<VirtualQPaintDeviceWindow::QPaintDeviceWindow_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
int QPaintDeviceWindow_Metric(const QPaintDeviceWindow* self, int metric) {
	auto* vqpaintdevicewindow = dynamic_cast<const VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
	return vqpaintdevicewindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
	} else {
	return self->QPaintDeviceWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Base class handler implementation
int QPaintDeviceWindow_QBaseMetric(const QPaintDeviceWindow* self, int metric) {
	auto* vqpaintdevicewindow = dynamic_cast<const VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
vqpaintdevicewindow->setQPaintDeviceWindow_Metric_IsBase(true);
	return vqpaintdevicewindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Auxiliary method to allow providing re-implementation
void QPaintDeviceWindow_OnMetric(const QPaintDeviceWindow* self, intptr_t slot) {
	auto* vqpaintdevicewindow = dynamic_cast<const VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
vqpaintdevicewindow->setQPaintDeviceWindow_Metric_Callback(reinterpret_cast<VirtualQPaintDeviceWindow::QPaintDeviceWindow_Metric_Callback>(slot));
}
}

// Derived class handler implementation
bool QPaintDeviceWindow_Event(QPaintDeviceWindow* self, QEvent* event) {
	auto* vqpaintdevicewindow = dynamic_cast<VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
	return vqpaintdevicewindow->event(event);
	} else {
	return self->QPaintDeviceWindow::event(event);
}
}

// Base class handler implementation
bool QPaintDeviceWindow_QBaseEvent(QPaintDeviceWindow* self, QEvent* event) {
	auto* vqpaintdevicewindow = dynamic_cast<VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
vqpaintdevicewindow->setQPaintDeviceWindow_Event_IsBase(true);
	return vqpaintdevicewindow->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QPaintDeviceWindow_OnEvent(QPaintDeviceWindow* self, intptr_t slot) {
	auto* vqpaintdevicewindow = dynamic_cast<VirtualQPaintDeviceWindow*>(self);
	if (vqpaintdevicewindow && vqpaintdevicewindow->isVirtualQPaintDeviceWindow) {
vqpaintdevicewindow->setQPaintDeviceWindow_Event_Callback(reinterpret_cast<VirtualQPaintDeviceWindow::QPaintDeviceWindow_Event_Callback>(slot));
}
}

void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self) {
    delete self;
}

