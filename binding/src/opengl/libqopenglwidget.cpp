#include <QEvent>
#include <QImage>
#include <QOpenGLContext>
#include <QOpenGLWidget>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPoint>
#include <QResizeEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurfaceFormat>
#include <QWidget>
#include <qopenglwidget.h>
#include "libqopenglwidget.h"
#include "libqopenglwidget.hxx"

QOpenGLWidget* QOpenGLWidget_new(QWidget* parent) {
	 return new VirtualQOpenGLWidget(parent);
}

QOpenGLWidget* QOpenGLWidget_new2() {
	 return new VirtualQOpenGLWidget();
}

QOpenGLWidget* QOpenGLWidget_new3(QWidget* parent, int f) {
	 return new VirtualQOpenGLWidget(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QOpenGLWidget_Tr(const char* s) {
	QString _ret = QOpenGLWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLWidget_SetUpdateBehavior(QOpenGLWidget* self, int updateBehavior) {
	self->setUpdateBehavior(static_cast<QOpenGLWidget::UpdateBehavior>(updateBehavior));
}

int QOpenGLWidget_UpdateBehavior(const QOpenGLWidget* self) {
	return self->updateBehavior();
}

void QOpenGLWidget_SetFormat(QOpenGLWidget* self, const QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QOpenGLWidget_Format(const QOpenGLWidget* self) {
	return new QSurfaceFormat(self->format());
}

GL QOpenGLWidget_TextureFormat(const QOpenGLWidget* self) {
	return self->textureFormat();
}

void QOpenGLWidget_SetTextureFormat(QOpenGLWidget* self, uint32_t texFormat) {
	self->setTextureFormat(texFormat);
}

bool QOpenGLWidget_IsValid(const QOpenGLWidget* self) {
	return self->isValid();
}

void QOpenGLWidget_MakeCurrent(QOpenGLWidget* self) {
	self->makeCurrent();
}

void QOpenGLWidget_MakeCurrent2(QOpenGLWidget* self, uint8_t targetBuffer) {
	self->makeCurrent(static_cast<QOpenGLWidget::TargetBuffer>(targetBuffer));
}

void QOpenGLWidget_DoneCurrent(QOpenGLWidget* self) {
	self->doneCurrent();
}

QOpenGLContext* QOpenGLWidget_Context(const QOpenGLWidget* self) {
	return self->context();
}

uint32_t QOpenGLWidget_DefaultFramebufferObject(const QOpenGLWidget* self) {
	return self->defaultFramebufferObject();
}

uint32_t QOpenGLWidget_DefaultFramebufferObject2(const QOpenGLWidget* self, uint8_t targetBuffer) {
	return self->defaultFramebufferObject(static_cast<QOpenGLWidget::TargetBuffer>(targetBuffer));
}

QImage* QOpenGLWidget_GrabFramebuffer(QOpenGLWidget* self) {
	return new QImage(self->grabFramebuffer());
}

QImage* QOpenGLWidget_GrabFramebuffer2(QOpenGLWidget* self, uint8_t targetBuffer) {
	return new QImage(self->grabFramebuffer(static_cast<QOpenGLWidget::TargetBuffer>(targetBuffer)));
}

uint8_t QOpenGLWidget_CurrentTargetBuffer(const QOpenGLWidget* self) {
	return self->currentTargetBuffer();
}

void QOpenGLWidget_AboutToCompose(QOpenGLWidget* self) {
	self->aboutToCompose();
}

void QOpenGLWidget_Connect_AboutToCompose(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::aboutToCompose, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QOpenGLWidget_FrameSwapped(QOpenGLWidget* self) {
	self->frameSwapped();
}

void QOpenGLWidget_Connect_FrameSwapped(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::frameSwapped, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QOpenGLWidget_AboutToResize(QOpenGLWidget* self) {
	self->aboutToResize();
}

void QOpenGLWidget_Connect_AboutToResize(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::aboutToResize, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QOpenGLWidget_Resized(QOpenGLWidget* self) {
	self->resized();
}

void QOpenGLWidget_Connect_Resized(QOpenGLWidget* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLWidget*) = reinterpret_cast<void (*)(QOpenGLWidget*)>(slot);
    QOpenGLWidget::connect(self, &QOpenGLWidget::resized, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QOpenGLWidget_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QOpenGLWidget_InitializeGL(QOpenGLWidget* self) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
	vqopenglwidget->initializeGL();
	} else {
	self->QOpenGLWidget::initializeGL();
}
}

// Base class handler implementation
void QOpenGLWidget_QBaseInitializeGL(QOpenGLWidget* self) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_InitializeGL_IsBase(true);
	vqopenglwidget->initializeGL();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnInitializeGL(QOpenGLWidget* self, intptr_t slot) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_InitializeGL_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_InitializeGL_Callback>(slot));
}
}

// Derived class handler implementation
void QOpenGLWidget_ResizeGL(QOpenGLWidget* self, int w, int h) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
	vqopenglwidget->resizeGL(w, h);
	} else {
	self->QOpenGLWidget::resizeGL(w, h);
}
}

// Base class handler implementation
void QOpenGLWidget_QBaseResizeGL(QOpenGLWidget* self, int w, int h) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_ResizeGL_IsBase(true);
	vqopenglwidget->resizeGL(w, h);
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnResizeGL(QOpenGLWidget* self, intptr_t slot) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_ResizeGL_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ResizeGL_Callback>(slot));
}
}

// Derived class handler implementation
void QOpenGLWidget_PaintGL(QOpenGLWidget* self) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
	vqopenglwidget->paintGL();
	} else {
	self->QOpenGLWidget::paintGL();
}
}

// Base class handler implementation
void QOpenGLWidget_QBasePaintGL(QOpenGLWidget* self) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_PaintGL_IsBase(true);
	vqopenglwidget->paintGL();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnPaintGL(QOpenGLWidget* self, intptr_t slot) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_PaintGL_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_PaintGL_Callback>(slot));
}
}

// Derived class handler implementation
void QOpenGLWidget_PaintEvent(QOpenGLWidget* self, QPaintEvent* e) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
	vqopenglwidget->paintEvent(e);
	} else {
	self->QOpenGLWidget::paintEvent(e);
}
}

// Base class handler implementation
void QOpenGLWidget_QBasePaintEvent(QOpenGLWidget* self, QPaintEvent* e) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_PaintEvent_IsBase(true);
	vqopenglwidget->paintEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnPaintEvent(QOpenGLWidget* self, intptr_t slot) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_PaintEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QOpenGLWidget_ResizeEvent(QOpenGLWidget* self, QResizeEvent* e) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
	vqopenglwidget->resizeEvent(e);
	} else {
	self->QOpenGLWidget::resizeEvent(e);
}
}

// Base class handler implementation
void QOpenGLWidget_QBaseResizeEvent(QOpenGLWidget* self, QResizeEvent* e) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_ResizeEvent_IsBase(true);
	vqopenglwidget->resizeEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnResizeEvent(QOpenGLWidget* self, intptr_t slot) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QOpenGLWidget_Event(QOpenGLWidget* self, QEvent* e) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
	return vqopenglwidget->event(e);
	} else {
	return self->QOpenGLWidget::event(e);
}
}

// Base class handler implementation
bool QOpenGLWidget_QBaseEvent(QOpenGLWidget* self, QEvent* e) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_Event_IsBase(true);
	return vqopenglwidget->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnEvent(QOpenGLWidget* self, intptr_t slot) {
	auto* vqopenglwidget = dynamic_cast<VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_Event_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Event_Callback>(slot));
}
}

// Derived class handler implementation
int QOpenGLWidget_Metric(const QOpenGLWidget* self, int metric) {
	auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
	return vqopenglwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
	} else {
	return self->QOpenGLWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Base class handler implementation
int QOpenGLWidget_QBaseMetric(const QOpenGLWidget* self, int metric) {
	auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_Metric_IsBase(true);
	return vqopenglwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnMetric(const QOpenGLWidget* self, intptr_t slot) {
	auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_Metric_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Metric_Callback>(slot));
}
}

// Derived class handler implementation
QPaintDevice* QOpenGLWidget_Redirected(const QOpenGLWidget* self, QPoint* p) {
	auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
	return vqopenglwidget->redirected(p);
	} else {
	return self->QOpenGLWidget::redirected(p);
}
}

// Base class handler implementation
QPaintDevice* QOpenGLWidget_QBaseRedirected(const QOpenGLWidget* self, QPoint* p) {
	auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_Redirected_IsBase(true);
	return vqopenglwidget->redirected(p);
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnRedirected(const QOpenGLWidget* self, intptr_t slot) {
	auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_Redirected_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_Redirected_Callback>(slot));
}
}

// Derived class handler implementation
QPaintEngine* QOpenGLWidget_PaintEngine(const QOpenGLWidget* self) {
	auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
	return vqopenglwidget->paintEngine();
	} else {
	return self->QOpenGLWidget::paintEngine();
}
}

// Base class handler implementation
QPaintEngine* QOpenGLWidget_QBasePaintEngine(const QOpenGLWidget* self) {
	auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_PaintEngine_IsBase(true);
	return vqopenglwidget->paintEngine();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLWidget_OnPaintEngine(const QOpenGLWidget* self, intptr_t slot) {
	auto* vqopenglwidget = dynamic_cast<const VirtualQOpenGLWidget*>(self);
	if (vqopenglwidget && vqopenglwidget->isVirtualQOpenGLWidget) {
vqopenglwidget->setQOpenGLWidget_PaintEngine_Callback(reinterpret_cast<VirtualQOpenGLWidget::QOpenGLWidget_PaintEngine_Callback>(slot));
}
}

void QOpenGLWidget_Delete(QOpenGLWidget* self) {
    delete self;
}

