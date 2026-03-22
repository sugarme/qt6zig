#pragma once
#ifndef QRHIWIDGET_H_C_LIBVIRTUAL
#define QRHIWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QRhiWidget so that we can call protected methods
class VirtualQRhiWidget final : public QRhiWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQRhiWidget= true;

	// Virtual class public types (including callbacks)
	using QRhiWidget_Initialize_Callback = void (*)(QRhiWidget*, QRhiCommandBuffer*);
	using QRhiWidget_Render_Callback = void (*)(QRhiWidget*, QRhiCommandBuffer*);
	using QRhiWidget_ReleaseResources_Callback = void (*)();
	using QRhiWidget_ResizeEvent_Callback = void (*)(QRhiWidget*, QResizeEvent*);
	using QRhiWidget_PaintEvent_Callback = void (*)(QRhiWidget*, QPaintEvent*);
	using QRhiWidget_Event_Callback = bool (*)(QRhiWidget*, QEvent*);
	using QRhiWidget_IsAutoRenderTargetEnabled_Callback = bool (*)();
	using QRhiWidget_SetAutoRenderTarget_Callback = void (*)(QRhiWidget*, bool);
	using QRhiWidget_Rhi_Callback = QRhi* (*)();
	using QRhiWidget_ColorTexture_Callback = QRhiTexture* (*)();
	using QRhiWidget_MsaaColorBuffer_Callback = QRhiRenderBuffer* (*)();
	using QRhiWidget_ResolveTexture_Callback = QRhiTexture* (*)();
	using QRhiWidget_DepthStencilBuffer_Callback = QRhiRenderBuffer* (*)();
	using QRhiWidget_RenderTarget_Callback = QRhiRenderTarget* (*)();

protected:
	// Instance callback storage
	mutable QRhiWidget_Initialize_Callback qrhiwidget_initialize_callback = nullptr;
	mutable QRhiWidget_Render_Callback qrhiwidget_render_callback = nullptr;
	mutable QRhiWidget_ReleaseResources_Callback qrhiwidget_releaseresources_callback = nullptr;
	mutable QRhiWidget_ResizeEvent_Callback qrhiwidget_resizeevent_callback = nullptr;
	mutable QRhiWidget_PaintEvent_Callback qrhiwidget_paintevent_callback = nullptr;
	mutable QRhiWidget_Event_Callback qrhiwidget_event_callback = nullptr;
	mutable QRhiWidget_IsAutoRenderTargetEnabled_Callback qrhiwidget_isautorendertargetenabled_callback = nullptr;
	mutable QRhiWidget_SetAutoRenderTarget_Callback qrhiwidget_setautorendertarget_callback = nullptr;
	mutable QRhiWidget_Rhi_Callback qrhiwidget_rhi_callback = nullptr;
	mutable QRhiWidget_ColorTexture_Callback qrhiwidget_colortexture_callback = nullptr;
	mutable QRhiWidget_MsaaColorBuffer_Callback qrhiwidget_msaacolorbuffer_callback = nullptr;
	mutable QRhiWidget_ResolveTexture_Callback qrhiwidget_resolvetexture_callback = nullptr;
	mutable QRhiWidget_DepthStencilBuffer_Callback qrhiwidget_depthstencilbuffer_callback = nullptr;
	mutable QRhiWidget_RenderTarget_Callback qrhiwidget_rendertarget_callback = nullptr;

	// Instance base flags
    mutable bool qrhiwidget_initialize_isbase = false;
    mutable bool qrhiwidget_render_isbase = false;
    mutable bool qrhiwidget_releaseresources_isbase = false;
    mutable bool qrhiwidget_resizeevent_isbase = false;
    mutable bool qrhiwidget_paintevent_isbase = false;
    mutable bool qrhiwidget_event_isbase = false;
    mutable bool qrhiwidget_isautorendertargetenabled_isbase = false;
    mutable bool qrhiwidget_setautorendertarget_isbase = false;
    mutable bool qrhiwidget_rhi_isbase = false;
    mutable bool qrhiwidget_colortexture_isbase = false;
    mutable bool qrhiwidget_msaacolorbuffer_isbase = false;
    mutable bool qrhiwidget_resolvetexture_isbase = false;
    mutable bool qrhiwidget_depthstencilbuffer_isbase = false;
    mutable bool qrhiwidget_rendertarget_isbase = false;

public:
	VirtualQRhiWidget(QWidget* parent): QRhiWidget(parent) {};
	VirtualQRhiWidget(): QRhiWidget() {};
	VirtualQRhiWidget(QWidget* parent, Qt::WindowFlags f): QRhiWidget(parent, f) {};

	~VirtualQRhiWidget() {
		qrhiwidget_initialize_callback = nullptr;
		qrhiwidget_render_callback = nullptr;
		qrhiwidget_releaseresources_callback = nullptr;
		qrhiwidget_resizeevent_callback = nullptr;
		qrhiwidget_paintevent_callback = nullptr;
		qrhiwidget_event_callback = nullptr;
		qrhiwidget_isautorendertargetenabled_callback = nullptr;
		qrhiwidget_setautorendertarget_callback = nullptr;
		qrhiwidget_rhi_callback = nullptr;
		qrhiwidget_colortexture_callback = nullptr;
		qrhiwidget_msaacolorbuffer_callback = nullptr;
		qrhiwidget_resolvetexture_callback = nullptr;
		qrhiwidget_depthstencilbuffer_callback = nullptr;
		qrhiwidget_rendertarget_callback = nullptr;
	}

// Callback setters
	inline void setQRhiWidget_Initialize_Callback(QRhiWidget_Initialize_Callback cb) const { qrhiwidget_initialize_callback = cb; }
	inline void setQRhiWidget_Render_Callback(QRhiWidget_Render_Callback cb) const { qrhiwidget_render_callback = cb; }
	inline void setQRhiWidget_ReleaseResources_Callback(QRhiWidget_ReleaseResources_Callback cb) const { qrhiwidget_releaseresources_callback = cb; }
	inline void setQRhiWidget_ResizeEvent_Callback(QRhiWidget_ResizeEvent_Callback cb) const { qrhiwidget_resizeevent_callback = cb; }
	inline void setQRhiWidget_PaintEvent_Callback(QRhiWidget_PaintEvent_Callback cb) const { qrhiwidget_paintevent_callback = cb; }
	inline void setQRhiWidget_Event_Callback(QRhiWidget_Event_Callback cb) const { qrhiwidget_event_callback = cb; }
	inline void setQRhiWidget_IsAutoRenderTargetEnabled_Callback(QRhiWidget_IsAutoRenderTargetEnabled_Callback cb) const { qrhiwidget_isautorendertargetenabled_callback = cb; }
	inline void setQRhiWidget_SetAutoRenderTarget_Callback(QRhiWidget_SetAutoRenderTarget_Callback cb) const { qrhiwidget_setautorendertarget_callback = cb; }
	inline void setQRhiWidget_Rhi_Callback(QRhiWidget_Rhi_Callback cb) const { qrhiwidget_rhi_callback = cb; }
	inline void setQRhiWidget_ColorTexture_Callback(QRhiWidget_ColorTexture_Callback cb) const { qrhiwidget_colortexture_callback = cb; }
	inline void setQRhiWidget_MsaaColorBuffer_Callback(QRhiWidget_MsaaColorBuffer_Callback cb) const { qrhiwidget_msaacolorbuffer_callback = cb; }
	inline void setQRhiWidget_ResolveTexture_Callback(QRhiWidget_ResolveTexture_Callback cb) const { qrhiwidget_resolvetexture_callback = cb; }
	inline void setQRhiWidget_DepthStencilBuffer_Callback(QRhiWidget_DepthStencilBuffer_Callback cb) const { qrhiwidget_depthstencilbuffer_callback = cb; }
	inline void setQRhiWidget_RenderTarget_Callback(QRhiWidget_RenderTarget_Callback cb) const { qrhiwidget_rendertarget_callback = cb; }

// Base flag setters
	inline void setQRhiWidget_Initialize_IsBase(bool value) const { qrhiwidget_initialize_isbase = value; }
	inline void setQRhiWidget_Render_IsBase(bool value) const { qrhiwidget_render_isbase = value; }
	inline void setQRhiWidget_ReleaseResources_IsBase(bool value) const { qrhiwidget_releaseresources_isbase = value; }
	inline void setQRhiWidget_ResizeEvent_IsBase(bool value) const { qrhiwidget_resizeevent_isbase = value; }
	inline void setQRhiWidget_PaintEvent_IsBase(bool value) const { qrhiwidget_paintevent_isbase = value; }
	inline void setQRhiWidget_Event_IsBase(bool value) const { qrhiwidget_event_isbase = value; }
	inline void setQRhiWidget_IsAutoRenderTargetEnabled_IsBase(bool value) const { qrhiwidget_isautorendertargetenabled_isbase = value; }
	inline void setQRhiWidget_SetAutoRenderTarget_IsBase(bool value) const { qrhiwidget_setautorendertarget_isbase = value; }
	inline void setQRhiWidget_Rhi_IsBase(bool value) const { qrhiwidget_rhi_isbase = value; }
	inline void setQRhiWidget_ColorTexture_IsBase(bool value) const { qrhiwidget_colortexture_isbase = value; }
	inline void setQRhiWidget_MsaaColorBuffer_IsBase(bool value) const { qrhiwidget_msaacolorbuffer_isbase = value; }
	inline void setQRhiWidget_ResolveTexture_IsBase(bool value) const { qrhiwidget_resolvetexture_isbase = value; }
	inline void setQRhiWidget_DepthStencilBuffer_IsBase(bool value) const { qrhiwidget_depthstencilbuffer_isbase = value; }
	inline void setQRhiWidget_RenderTarget_IsBase(bool value) const { qrhiwidget_rendertarget_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void initialize(QRhiCommandBuffer* cb) override {
		if (qrhiwidget_initialize_isbase) {
			qrhiwidget_initialize_isbase = false;
			QRhiWidget::initialize(cb);
		} else if (qrhiwidget_initialize_callback != nullptr) {
			QRhiCommandBuffer* cbval1 = cb;
			qrhiwidget_initialize_callback(this, cbval1);
		} else {
			QRhiWidget::initialize(cb);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void render(QRhiCommandBuffer* cb) override {
		if (qrhiwidget_render_isbase) {
			qrhiwidget_render_isbase = false;
			QRhiWidget::render(cb);
		} else if (qrhiwidget_render_callback != nullptr) {
			QRhiCommandBuffer* cbval1 = cb;
			qrhiwidget_render_callback(this, cbval1);
		} else {
			QRhiWidget::render(cb);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void releaseResources() override {
		if (qrhiwidget_releaseresources_isbase) {
			qrhiwidget_releaseresources_isbase = false;
			QRhiWidget::releaseResources();
		} else if (qrhiwidget_releaseresources_callback != nullptr) {
			qrhiwidget_releaseresources_callback();
		} else {
			QRhiWidget::releaseResources();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* e) override {
		if (qrhiwidget_resizeevent_isbase) {
			qrhiwidget_resizeevent_isbase = false;
			QRhiWidget::resizeEvent(e);
		} else if (qrhiwidget_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = e;
			qrhiwidget_resizeevent_callback(this, cbval1);
		} else {
			QRhiWidget::resizeEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* e) override {
		if (qrhiwidget_paintevent_isbase) {
			qrhiwidget_paintevent_isbase = false;
			QRhiWidget::paintEvent(e);
		} else if (qrhiwidget_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = e;
			qrhiwidget_paintevent_callback(this, cbval1);
		} else {
			QRhiWidget::paintEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qrhiwidget_event_isbase) {
			qrhiwidget_event_isbase = false;
			return QRhiWidget::event(e);
		} else if (qrhiwidget_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qrhiwidget_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QRhiWidget::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	bool isAutoRenderTargetEnabled() const {
		if (qrhiwidget_isautorendertargetenabled_isbase) {
			qrhiwidget_isautorendertargetenabled_isbase = false;
			return QRhiWidget::isAutoRenderTargetEnabled();
		} else if (qrhiwidget_isautorendertargetenabled_callback != nullptr) {
			bool callback_ret = qrhiwidget_isautorendertargetenabled_callback();
			return callback_ret;
		} else {
			return QRhiWidget::isAutoRenderTargetEnabled();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setAutoRenderTarget(bool enabled) {
		if (qrhiwidget_setautorendertarget_isbase) {
			qrhiwidget_setautorendertarget_isbase = false;
			QRhiWidget::setAutoRenderTarget(enabled);
		} else if (qrhiwidget_setautorendertarget_callback != nullptr) {
			bool cbval1 = enabled;
			qrhiwidget_setautorendertarget_callback(this, cbval1);
		} else {
			QRhiWidget::setAutoRenderTarget(enabled);
		}
	}

	// Virtual method for C ABI access and custom callback
	QRhi* rhi() const {
		if (qrhiwidget_rhi_isbase) {
			qrhiwidget_rhi_isbase = false;
			return QRhiWidget::rhi();
		} else if (qrhiwidget_rhi_callback != nullptr) {
			QRhi* callback_ret = qrhiwidget_rhi_callback();
			return callback_ret;
		} else {
			return QRhiWidget::rhi();
		}
	}

	// Virtual method for C ABI access and custom callback
	QRhiTexture* colorTexture() const {
		if (qrhiwidget_colortexture_isbase) {
			qrhiwidget_colortexture_isbase = false;
			return QRhiWidget::colorTexture();
		} else if (qrhiwidget_colortexture_callback != nullptr) {
			QRhiTexture* callback_ret = qrhiwidget_colortexture_callback();
			return callback_ret;
		} else {
			return QRhiWidget::colorTexture();
		}
	}

	// Virtual method for C ABI access and custom callback
	QRhiRenderBuffer* msaaColorBuffer() const {
		if (qrhiwidget_msaacolorbuffer_isbase) {
			qrhiwidget_msaacolorbuffer_isbase = false;
			return QRhiWidget::msaaColorBuffer();
		} else if (qrhiwidget_msaacolorbuffer_callback != nullptr) {
			QRhiRenderBuffer* callback_ret = qrhiwidget_msaacolorbuffer_callback();
			return callback_ret;
		} else {
			return QRhiWidget::msaaColorBuffer();
		}
	}

	// Virtual method for C ABI access and custom callback
	QRhiTexture* resolveTexture() const {
		if (qrhiwidget_resolvetexture_isbase) {
			qrhiwidget_resolvetexture_isbase = false;
			return QRhiWidget::resolveTexture();
		} else if (qrhiwidget_resolvetexture_callback != nullptr) {
			QRhiTexture* callback_ret = qrhiwidget_resolvetexture_callback();
			return callback_ret;
		} else {
			return QRhiWidget::resolveTexture();
		}
	}

	// Virtual method for C ABI access and custom callback
	QRhiRenderBuffer* depthStencilBuffer() const {
		if (qrhiwidget_depthstencilbuffer_isbase) {
			qrhiwidget_depthstencilbuffer_isbase = false;
			return QRhiWidget::depthStencilBuffer();
		} else if (qrhiwidget_depthstencilbuffer_callback != nullptr) {
			QRhiRenderBuffer* callback_ret = qrhiwidget_depthstencilbuffer_callback();
			return callback_ret;
		} else {
			return QRhiWidget::depthStencilBuffer();
		}
	}

	// Virtual method for C ABI access and custom callback
	QRhiRenderTarget* renderTarget() const {
		if (qrhiwidget_rendertarget_isbase) {
			qrhiwidget_rendertarget_isbase = false;
			return QRhiWidget::renderTarget();
		} else if (qrhiwidget_rendertarget_callback != nullptr) {
			QRhiRenderTarget* callback_ret = qrhiwidget_rendertarget_callback();
			return callback_ret;
		} else {
			return QRhiWidget::renderTarget();
		}
	}

	// Friend functions
	friend void QRhiWidget_Initialize(QRhiWidget* self, QRhiCommandBuffer* cb);
	friend void QRhiWidget_QBaseInitialize(QRhiWidget* self, QRhiCommandBuffer* cb);
	friend void QRhiWidget_Render(QRhiWidget* self, QRhiCommandBuffer* cb);
	friend void QRhiWidget_QBaseRender(QRhiWidget* self, QRhiCommandBuffer* cb);
	friend void QRhiWidget_ReleaseResources(QRhiWidget* self);
	friend void QRhiWidget_QBaseReleaseResources(QRhiWidget* self);
	friend void QRhiWidget_ResizeEvent(QRhiWidget* self, QResizeEvent* e);
	friend void QRhiWidget_QBaseResizeEvent(QRhiWidget* self, QResizeEvent* e);
	friend void QRhiWidget_PaintEvent(QRhiWidget* self, QPaintEvent* e);
	friend void QRhiWidget_QBasePaintEvent(QRhiWidget* self, QPaintEvent* e);
	friend bool QRhiWidget_Event(QRhiWidget* self, QEvent* e);
	friend bool QRhiWidget_QBaseEvent(QRhiWidget* self, QEvent* e);
	friend bool QRhiWidget_IsAutoRenderTargetEnabled(const QRhiWidget* self);
	friend bool QRhiWidget_QBaseIsAutoRenderTargetEnabled(const QRhiWidget* self);
	friend void QRhiWidget_SetAutoRenderTarget(QRhiWidget* self, bool enabled);
	friend void QRhiWidget_QBaseSetAutoRenderTarget(QRhiWidget* self, bool enabled);
	friend QRhi* QRhiWidget_Rhi(const QRhiWidget* self);
	friend QRhi* QRhiWidget_QBaseRhi(const QRhiWidget* self);
	friend QRhiTexture* QRhiWidget_ColorTexture(const QRhiWidget* self);
	friend QRhiTexture* QRhiWidget_QBaseColorTexture(const QRhiWidget* self);
	friend QRhiRenderBuffer* QRhiWidget_MsaaColorBuffer(const QRhiWidget* self);
	friend QRhiRenderBuffer* QRhiWidget_QBaseMsaaColorBuffer(const QRhiWidget* self);
	friend QRhiTexture* QRhiWidget_ResolveTexture(const QRhiWidget* self);
	friend QRhiTexture* QRhiWidget_QBaseResolveTexture(const QRhiWidget* self);
	friend QRhiRenderBuffer* QRhiWidget_DepthStencilBuffer(const QRhiWidget* self);
	friend QRhiRenderBuffer* QRhiWidget_QBaseDepthStencilBuffer(const QRhiWidget* self);
	friend QRhiRenderTarget* QRhiWidget_RenderTarget(const QRhiWidget* self);
	friend QRhiRenderTarget* QRhiWidget_QBaseRenderTarget(const QRhiWidget* self);
};

#endif


