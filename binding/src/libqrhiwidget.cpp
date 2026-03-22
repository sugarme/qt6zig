#include <QEvent>
#include <QImage>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QRhiWidget>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qrhiwidget.h>
#include "libqrhiwidget.h"
#include "libqrhiwidget.hxx"

QRhiWidget* QRhiWidget_new(QWidget* parent) {
	 return new VirtualQRhiWidget(parent);
}

QRhiWidget* QRhiWidget_new2() {
	 return new VirtualQRhiWidget();
}

QRhiWidget* QRhiWidget_new3(QWidget* parent, int f) {
	 return new VirtualQRhiWidget(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QRhiWidget_Tr(const char* s) {
	QString _ret = QRhiWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QRhiWidget_Api(const QRhiWidget* self) {
	return self->api();
}

void QRhiWidget_SetApi(QRhiWidget* self, int api) {
	self->setApi(static_cast<QRhiWidget::Api>(api));
}

bool QRhiWidget_IsDebugLayerEnabled(const QRhiWidget* self) {
	return self->isDebugLayerEnabled();
}

void QRhiWidget_SetDebugLayerEnabled(QRhiWidget* self, bool enable) {
	self->setDebugLayerEnabled(enable);
}

int QRhiWidget_SampleCount(const QRhiWidget* self) {
	return self->sampleCount();
}

void QRhiWidget_SetSampleCount(QRhiWidget* self, int samples) {
	self->setSampleCount(samples);
}

int QRhiWidget_ColorBufferFormat(const QRhiWidget* self) {
	return self->colorBufferFormat();
}

void QRhiWidget_SetColorBufferFormat(QRhiWidget* self, int format) {
	self->setColorBufferFormat(static_cast<QRhiWidget::TextureFormat>(format));
}

QSize* QRhiWidget_FixedColorBufferSize(const QRhiWidget* self) {
	return new QSize(self->fixedColorBufferSize());
}

void QRhiWidget_SetFixedColorBufferSize(QRhiWidget* self, QSize* pixelSize) {
	self->setFixedColorBufferSize(*pixelSize);
}

void QRhiWidget_SetFixedColorBufferSize2(QRhiWidget* self, int w, int h) {
	self->setFixedColorBufferSize(w, h);
}

bool QRhiWidget_IsMirrorVerticallyEnabled(const QRhiWidget* self) {
	return self->isMirrorVerticallyEnabled();
}

void QRhiWidget_SetMirrorVertically(QRhiWidget* self, bool enabled) {
	self->setMirrorVertically(enabled);
}

QImage* QRhiWidget_GrabFramebuffer(const QRhiWidget* self) {
	return new QImage(self->grabFramebuffer());
}

void QRhiWidget_FrameSubmitted(QRhiWidget* self) {
	self->frameSubmitted();
}

void QRhiWidget_Connect_FrameSubmitted(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*) = reinterpret_cast<void (*)(QRhiWidget*)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::frameSubmitted, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QRhiWidget_RenderFailed(QRhiWidget* self) {
	self->renderFailed();
}

void QRhiWidget_Connect_RenderFailed(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*) = reinterpret_cast<void (*)(QRhiWidget*)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::renderFailed, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QRhiWidget_SampleCountChanged(QRhiWidget* self, int samples) {
	self->sampleCountChanged(samples);
}

void QRhiWidget_Connect_SampleCountChanged(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*, int) = reinterpret_cast<void (*)(QRhiWidget*, int)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::sampleCountChanged, [self, slotFunc](int samples) {
	slotFunc(self, samples);
    });
}

void QRhiWidget_ColorBufferFormatChanged(QRhiWidget* self, int format) {
	self->colorBufferFormatChanged(static_cast<QRhiWidget::TextureFormat>(format));
}

void QRhiWidget_Connect_ColorBufferFormatChanged(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*, int) = reinterpret_cast<void (*)(QRhiWidget*, int)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::colorBufferFormatChanged, [self, slotFunc](TextureFormat format) {
	slotFunc(self, format);
    });
}

void QRhiWidget_FixedColorBufferSizeChanged(QRhiWidget* self, const QSize* pixelSize) {
	self->fixedColorBufferSizeChanged(*pixelSize);
}

void QRhiWidget_Connect_FixedColorBufferSizeChanged(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*, const QSize*) = reinterpret_cast<void (*)(QRhiWidget*, const QSize*)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::fixedColorBufferSizeChanged, [self, slotFunc](const QSize& pixelSize) {
	slotFunc(self, pixelSize);
    });
}

void QRhiWidget_MirrorVerticallyChanged(QRhiWidget* self, bool enabled) {
	self->mirrorVerticallyChanged(enabled);
}

void QRhiWidget_Connect_MirrorVerticallyChanged(QRhiWidget* self, intptr_t slot) {
    void (*slotFunc)(QRhiWidget*, bool) = reinterpret_cast<void (*)(QRhiWidget*, bool)>(slot);
    QRhiWidget::connect(self, &QRhiWidget::mirrorVerticallyChanged, [self, slotFunc](bool enabled) {
	slotFunc(self, enabled);
    });
}

libqt_string QRhiWidget_Tr2(const char* s, const char* c) {
	QString _ret = QRhiWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRhiWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRhiWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QRhiWidget_Initialize(QRhiWidget* self, QRhiCommandBuffer* cb) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	vqrhiwidget->initialize(cb);
	} else {
	self->QRhiWidget::initialize(cb);
}
}

// Base class handler implementation
void QRhiWidget_QBaseInitialize(QRhiWidget* self, QRhiCommandBuffer* cb) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_Initialize_IsBase(true);
	vqrhiwidget->initialize(cb);
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnInitialize(QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_Initialize_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_Initialize_Callback>(slot));
}
}

// Derived class handler implementation
void QRhiWidget_Render(QRhiWidget* self, QRhiCommandBuffer* cb) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	vqrhiwidget->render(cb);
	} else {
	self->QRhiWidget::render(cb);
}
}

// Base class handler implementation
void QRhiWidget_QBaseRender(QRhiWidget* self, QRhiCommandBuffer* cb) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_Render_IsBase(true);
	vqrhiwidget->render(cb);
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnRender(QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_Render_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_Render_Callback>(slot));
}
}

// Derived class handler implementation
void QRhiWidget_ReleaseResources(QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	vqrhiwidget->releaseResources();
	} else {
	self->QRhiWidget::releaseResources();
}
}

// Base class handler implementation
void QRhiWidget_QBaseReleaseResources(QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_ReleaseResources_IsBase(true);
	vqrhiwidget->releaseResources();
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnReleaseResources(QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_ReleaseResources_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_ReleaseResources_Callback>(slot));
}
}

// Derived class handler implementation
void QRhiWidget_ResizeEvent(QRhiWidget* self, QResizeEvent* e) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	vqrhiwidget->resizeEvent(e);
	} else {
	self->QRhiWidget::resizeEvent(e);
}
}

// Base class handler implementation
void QRhiWidget_QBaseResizeEvent(QRhiWidget* self, QResizeEvent* e) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_ResizeEvent_IsBase(true);
	vqrhiwidget->resizeEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnResizeEvent(QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QRhiWidget_PaintEvent(QRhiWidget* self, QPaintEvent* e) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	vqrhiwidget->paintEvent(e);
	} else {
	self->QRhiWidget::paintEvent(e);
}
}

// Base class handler implementation
void QRhiWidget_QBasePaintEvent(QRhiWidget* self, QPaintEvent* e) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_PaintEvent_IsBase(true);
	vqrhiwidget->paintEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnPaintEvent(QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_PaintEvent_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QRhiWidget_Event(QRhiWidget* self, QEvent* e) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	return vqrhiwidget->event(e);
	} else {
	return self->QRhiWidget::event(e);
}
}

// Base class handler implementation
bool QRhiWidget_QBaseEvent(QRhiWidget* self, QEvent* e) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_Event_IsBase(true);
	return vqrhiwidget->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnEvent(QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_Event_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QRhiWidget_IsAutoRenderTargetEnabled(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	return vqrhiwidget->isAutoRenderTargetEnabled();
	} else {
	return self->QRhiWidget::isAutoRenderTargetEnabled();
}
}

// Base class handler implementation
bool QRhiWidget_QBaseIsAutoRenderTargetEnabled(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_IsAutoRenderTargetEnabled_IsBase(true);
	return vqrhiwidget->isAutoRenderTargetEnabled();
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnIsAutoRenderTargetEnabled(const QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_IsAutoRenderTargetEnabled_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_IsAutoRenderTargetEnabled_Callback>(slot));
}
}

// Derived class handler implementation
void QRhiWidget_SetAutoRenderTarget(QRhiWidget* self, bool enabled) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	vqrhiwidget->setAutoRenderTarget(enabled);
	} else {
	self->QRhiWidget::setAutoRenderTarget(enabled);
}
}

// Base class handler implementation
void QRhiWidget_QBaseSetAutoRenderTarget(QRhiWidget* self, bool enabled) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_SetAutoRenderTarget_IsBase(true);
	vqrhiwidget->setAutoRenderTarget(enabled);
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnSetAutoRenderTarget(QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_SetAutoRenderTarget_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_SetAutoRenderTarget_Callback>(slot));
}
}

// Derived class handler implementation
QRhiTexture* QRhiWidget_ColorTexture(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	return vqrhiwidget->colorTexture();
	} else {
	return self->QRhiWidget::colorTexture();
}
}

// Base class handler implementation
QRhiTexture* QRhiWidget_QBaseColorTexture(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_ColorTexture_IsBase(true);
	return vqrhiwidget->colorTexture();
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnColorTexture(const QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_ColorTexture_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_ColorTexture_Callback>(slot));
}
}

// Derived class handler implementation
QRhiRenderBuffer* QRhiWidget_MsaaColorBuffer(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	return vqrhiwidget->msaaColorBuffer();
	} else {
	return self->QRhiWidget::msaaColorBuffer();
}
}

// Base class handler implementation
QRhiRenderBuffer* QRhiWidget_QBaseMsaaColorBuffer(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_MsaaColorBuffer_IsBase(true);
	return vqrhiwidget->msaaColorBuffer();
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnMsaaColorBuffer(const QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_MsaaColorBuffer_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_MsaaColorBuffer_Callback>(slot));
}
}

// Derived class handler implementation
QRhiTexture* QRhiWidget_ResolveTexture(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	return vqrhiwidget->resolveTexture();
	} else {
	return self->QRhiWidget::resolveTexture();
}
}

// Base class handler implementation
QRhiTexture* QRhiWidget_QBaseResolveTexture(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_ResolveTexture_IsBase(true);
	return vqrhiwidget->resolveTexture();
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnResolveTexture(const QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_ResolveTexture_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_ResolveTexture_Callback>(slot));
}
}

// Derived class handler implementation
QRhiRenderBuffer* QRhiWidget_DepthStencilBuffer(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	return vqrhiwidget->depthStencilBuffer();
	} else {
	return self->QRhiWidget::depthStencilBuffer();
}
}

// Base class handler implementation
QRhiRenderBuffer* QRhiWidget_QBaseDepthStencilBuffer(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_DepthStencilBuffer_IsBase(true);
	return vqrhiwidget->depthStencilBuffer();
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnDepthStencilBuffer(const QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_DepthStencilBuffer_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_DepthStencilBuffer_Callback>(slot));
}
}

// Derived class handler implementation
QRhiRenderTarget* QRhiWidget_RenderTarget(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
	return vqrhiwidget->renderTarget();
	} else {
	return self->QRhiWidget::renderTarget();
}
}

// Base class handler implementation
QRhiRenderTarget* QRhiWidget_QBaseRenderTarget(const QRhiWidget* self) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_RenderTarget_IsBase(true);
	return vqrhiwidget->renderTarget();
}
}

// Auxiliary method to allow providing re-implementation
void QRhiWidget_OnRenderTarget(const QRhiWidget* self, intptr_t slot) {
	auto* vqrhiwidget = dynamic_cast<const VirtualQRhiWidget*>(self);
	if (vqrhiwidget && vqrhiwidget->isVirtualQRhiWidget) {
vqrhiwidget->setQRhiWidget_RenderTarget_Callback(reinterpret_cast<VirtualQRhiWidget::QRhiWidget_RenderTarget_Callback>(slot));
}
}

void QRhiWidget_Delete(QRhiWidget* self) {
    delete self;
}

