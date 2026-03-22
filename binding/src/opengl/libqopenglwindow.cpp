#include <QImage>
#include <QOpenGLContext>
#include <QOpenGLWindow>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEvent>
#include <QPoint>
#include <QResizeEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include <qopenglwindow.h>
#include "libqopenglwindow.h"
#include "libqopenglwindow.hxx"

QOpenGLWindow* QOpenGLWindow_new() {
	 return new VirtualQOpenGLWindow();
}

QOpenGLWindow* QOpenGLWindow_new2(QOpenGLContext* shareContext) {
	 return new VirtualQOpenGLWindow(shareContext);
}

QOpenGLWindow* QOpenGLWindow_new3(int updateBehavior) {
	 return new VirtualQOpenGLWindow(static_cast<QOpenGLWidget::UpdateBehavior>(updateBehavior));
}

QOpenGLWindow* QOpenGLWindow_new4(int updateBehavior, QWindow* parent) {
	 return new VirtualQOpenGLWindow(static_cast<QOpenGLWidget::UpdateBehavior>(updateBehavior), parent);
}

QOpenGLWindow* QOpenGLWindow_new5(QOpenGLContext* shareContext, int updateBehavior) {
	 return new VirtualQOpenGLWindow(shareContext, static_cast<QOpenGLWidget::UpdateBehavior>(updateBehavior));
}

QOpenGLWindow* QOpenGLWindow_new6(QOpenGLContext* shareContext, int updateBehavior, QWindow* parent) {
	 return new VirtualQOpenGLWindow(shareContext, static_cast<QOpenGLWidget::UpdateBehavior>(updateBehavior), parent);
}

libqt_string QOpenGLWindow_Tr(const char* s) {
	QString _ret = QOpenGLWindow::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QOpenGLWindow_UpdateBehavior(const QOpenGLWindow* self) {
	return self->updateBehavior();
}

bool QOpenGLWindow_IsValid(const QOpenGLWindow* self) {
	return self->isValid();
}

void QOpenGLWindow_MakeCurrent(QOpenGLWindow* self) {
	self->makeCurrent();
}

void QOpenGLWindow_DoneCurrent(QOpenGLWindow* self) {
	self->doneCurrent();
}

QOpenGLContext* QOpenGLWindow_Context(const QOpenGLWindow* self) {
	return self->context();
}

QOpenGLContext* QOpenGLWindow_ShareContext(const QOpenGLWindow* self) {
	return self->shareContext();
}

uint32_t QOpenGLWindow_DefaultFramebufferObject(const QOpenGLWindow* self) {
	return self->defaultFramebufferObject();
}

QImage* QOpenGLWindow_GrabFramebuffer(QOpenGLWindow* self) {
	return new QImage(self->grabFramebuffer());
}

void QOpenGLWindow_FrameSwapped(QOpenGLWindow* self) {
	self->frameSwapped();
}

void QOpenGLWindow_Connect_FrameSwapped(QOpenGLWindow* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWindow*) = reinterpret_cast<void (*)(QOpenGLWindow*)>(slot);
    QOpenGLWindow::connect(self, &QOpenGLWindow::frameSwapped, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QOpenGLWindow_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLWindow::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLWindow::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QOpenGLWindow_InitializeGL(QOpenGLWindow* self) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
	vqopenglwindow->initializeGL();
	} else {
	self->QOpenGLWindow::initializeGL();
}
}

// Base class handler implementation
void QOpenGLWindow_QBaseInitializeGL(QOpenGLWindow* self) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_InitializeGL_IsBase(true);
	vqopenglwindow->initializeGL();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnInitializeGL(QOpenGLWindow* self, intptr_t slot) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_InitializeGL_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_InitializeGL_Callback>(slot));
}
}

// Derived class handler implementation
void QOpenGLWindow_ResizeGL(QOpenGLWindow* self, int w, int h) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
	vqopenglwindow->resizeGL(w, h);
	} else {
	self->QOpenGLWindow::resizeGL(w, h);
}
}

// Base class handler implementation
void QOpenGLWindow_QBaseResizeGL(QOpenGLWindow* self, int w, int h) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_ResizeGL_IsBase(true);
	vqopenglwindow->resizeGL(w, h);
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnResizeGL(QOpenGLWindow* self, intptr_t slot) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_ResizeGL_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ResizeGL_Callback>(slot));
}
}

// Derived class handler implementation
void QOpenGLWindow_PaintGL(QOpenGLWindow* self) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
	vqopenglwindow->paintGL();
	} else {
	self->QOpenGLWindow::paintGL();
}
}

// Base class handler implementation
void QOpenGLWindow_QBasePaintGL(QOpenGLWindow* self) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_PaintGL_IsBase(true);
	vqopenglwindow->paintGL();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintGL(QOpenGLWindow* self, intptr_t slot) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_PaintGL_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintGL_Callback>(slot));
}
}

// Derived class handler implementation
void QOpenGLWindow_PaintUnderGL(QOpenGLWindow* self) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
	vqopenglwindow->paintUnderGL();
	} else {
	self->QOpenGLWindow::paintUnderGL();
}
}

// Base class handler implementation
void QOpenGLWindow_QBasePaintUnderGL(QOpenGLWindow* self) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_PaintUnderGL_IsBase(true);
	vqopenglwindow->paintUnderGL();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintUnderGL(QOpenGLWindow* self, intptr_t slot) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_PaintUnderGL_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintUnderGL_Callback>(slot));
}
}

// Derived class handler implementation
void QOpenGLWindow_PaintOverGL(QOpenGLWindow* self) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
	vqopenglwindow->paintOverGL();
	} else {
	self->QOpenGLWindow::paintOverGL();
}
}

// Base class handler implementation
void QOpenGLWindow_QBasePaintOverGL(QOpenGLWindow* self) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_PaintOverGL_IsBase(true);
	vqopenglwindow->paintOverGL();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintOverGL(QOpenGLWindow* self, intptr_t slot) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_PaintOverGL_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintOverGL_Callback>(slot));
}
}

// Derived class handler implementation
void QOpenGLWindow_PaintEvent(QOpenGLWindow* self, QPaintEvent* event) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
	vqopenglwindow->paintEvent(event);
	} else {
	self->QOpenGLWindow::paintEvent(event);
}
}

// Base class handler implementation
void QOpenGLWindow_QBasePaintEvent(QOpenGLWindow* self, QPaintEvent* event) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_PaintEvent_IsBase(true);
	vqopenglwindow->paintEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnPaintEvent(QOpenGLWindow* self, intptr_t slot) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_PaintEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QOpenGLWindow_ResizeEvent(QOpenGLWindow* self, QResizeEvent* event) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
	vqopenglwindow->resizeEvent(event);
	} else {
	self->QOpenGLWindow::resizeEvent(event);
}
}

// Base class handler implementation
void QOpenGLWindow_QBaseResizeEvent(QOpenGLWindow* self, QResizeEvent* event) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_ResizeEvent_IsBase(true);
	vqopenglwindow->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnResizeEvent(QOpenGLWindow* self, intptr_t slot) {
	auto* vqopenglwindow = dynamic_cast<VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_ResizeEvent_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
int QOpenGLWindow_Metric(const QOpenGLWindow* self, int metric) {
	auto* vqopenglwindow = dynamic_cast<const VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
	return vqopenglwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
	} else {
	return self->QOpenGLWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Base class handler implementation
int QOpenGLWindow_QBaseMetric(const QOpenGLWindow* self, int metric) {
	auto* vqopenglwindow = dynamic_cast<const VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_Metric_IsBase(true);
	return vqopenglwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnMetric(const QOpenGLWindow* self, intptr_t slot) {
	auto* vqopenglwindow = dynamic_cast<const VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_Metric_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Metric_Callback>(slot));
}
}

// Derived class handler implementation
QPaintDevice* QOpenGLWindow_Redirected(const QOpenGLWindow* self, QPoint* param1) {
	auto* vqopenglwindow = dynamic_cast<const VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
	return vqopenglwindow->redirected(param1);
	} else {
	return self->QOpenGLWindow::redirected(param1);
}
}

// Base class handler implementation
QPaintDevice* QOpenGLWindow_QBaseRedirected(const QOpenGLWindow* self, QPoint* param1) {
	auto* vqopenglwindow = dynamic_cast<const VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_Redirected_IsBase(true);
	return vqopenglwindow->redirected(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWindow_OnRedirected(const QOpenGLWindow* self, intptr_t slot) {
	auto* vqopenglwindow = dynamic_cast<const VirtualQOpenGLWindow*>(self);
	if (vqopenglwindow && vqopenglwindow->isVirtualQOpenGLWindow) {
vqopenglwindow->setQOpenGLWindow_Redirected_Callback(reinterpret_cast<VirtualQOpenGLWindow::QOpenGLWindow_Redirected_Callback>(slot));
}
}

void QOpenGLWindow_Delete(QOpenGLWindow* self) {
    delete self;
}

