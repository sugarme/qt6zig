#pragma once
#ifndef QRHIWIDGET_H_C_LIB
#define QRHIWIDGET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QRhiWidget QRhiWidget;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QRhiWidget* QRhiWidget_new(QWidget* parent);
QRhiWidget* QRhiWidget_new2();
QRhiWidget* QRhiWidget_new3(QWidget* parent, int f);
libqt_string QRhiWidget_Tr(const char* s);
int QRhiWidget_Api(const QRhiWidget* self);
void QRhiWidget_SetApi(QRhiWidget* self, int api);
bool QRhiWidget_IsDebugLayerEnabled(const QRhiWidget* self);
void QRhiWidget_SetDebugLayerEnabled(QRhiWidget* self, bool enable);
int QRhiWidget_SampleCount(const QRhiWidget* self);
void QRhiWidget_SetSampleCount(QRhiWidget* self, int samples);
int QRhiWidget_ColorBufferFormat(const QRhiWidget* self);
void QRhiWidget_SetColorBufferFormat(QRhiWidget* self, int format);
QSize* QRhiWidget_FixedColorBufferSize(const QRhiWidget* self);
void QRhiWidget_SetFixedColorBufferSize(QRhiWidget* self, QSize* pixelSize);
void QRhiWidget_SetFixedColorBufferSize2(QRhiWidget* self, int w, int h);
bool QRhiWidget_IsMirrorVerticallyEnabled(const QRhiWidget* self);
void QRhiWidget_SetMirrorVertically(QRhiWidget* self, bool enabled);
QImage* QRhiWidget_GrabFramebuffer(const QRhiWidget* self);
void QRhiWidget_Initialize(QRhiWidget* self, QRhiCommandBuffer* cb);
void QRhiWidget_Render(QRhiWidget* self, QRhiCommandBuffer* cb);
void QRhiWidget_ReleaseResources(QRhiWidget* self);
void QRhiWidget_ResizeEvent(QRhiWidget* self, QResizeEvent* e);
void QRhiWidget_PaintEvent(QRhiWidget* self, QPaintEvent* e);
bool QRhiWidget_Event(QRhiWidget* self, QEvent* e);
void QRhiWidget_FrameSubmitted(QRhiWidget* self);
void QRhiWidget_Connect_FrameSubmitted(QRhiWidget* self, intptr_t slot);
void QRhiWidget_RenderFailed(QRhiWidget* self);
void QRhiWidget_Connect_RenderFailed(QRhiWidget* self, intptr_t slot);
void QRhiWidget_SampleCountChanged(QRhiWidget* self, int samples);
void QRhiWidget_Connect_SampleCountChanged(QRhiWidget* self, intptr_t slot);
void QRhiWidget_ColorBufferFormatChanged(QRhiWidget* self, int format);
void QRhiWidget_Connect_ColorBufferFormatChanged(QRhiWidget* self, intptr_t slot);
void QRhiWidget_FixedColorBufferSizeChanged(QRhiWidget* self, const QSize* pixelSize);
void QRhiWidget_Connect_FixedColorBufferSizeChanged(QRhiWidget* self, intptr_t slot);
void QRhiWidget_MirrorVerticallyChanged(QRhiWidget* self, bool enabled);
void QRhiWidget_Connect_MirrorVerticallyChanged(QRhiWidget* self, intptr_t slot);
libqt_string QRhiWidget_Tr2(const char* s, const char* c);
libqt_string QRhiWidget_Tr3(const char* s, const char* c, int n);
void QRhiWidget_OnInitialize(QRhiWidget* self, intptr_t slot);
void QRhiWidget_QBaseInitialize(QRhiWidget* self, QRhiCommandBuffer* cb);
void QRhiWidget_OnRender(QRhiWidget* self, intptr_t slot);
void QRhiWidget_QBaseRender(QRhiWidget* self, QRhiCommandBuffer* cb);
void QRhiWidget_OnReleaseResources(QRhiWidget* self, intptr_t slot);
void QRhiWidget_QBaseReleaseResources(QRhiWidget* self);
void QRhiWidget_OnResizeEvent(QRhiWidget* self, intptr_t slot);
void QRhiWidget_QBaseResizeEvent(QRhiWidget* self, QResizeEvent* e);
void QRhiWidget_OnPaintEvent(QRhiWidget* self, intptr_t slot);
void QRhiWidget_QBasePaintEvent(QRhiWidget* self, QPaintEvent* e);
void QRhiWidget_OnEvent(QRhiWidget* self, intptr_t slot);
bool QRhiWidget_QBaseEvent(QRhiWidget* self, QEvent* e);
bool QRhiWidget_IsAutoRenderTargetEnabled(const QRhiWidget* self);
void QRhiWidget_OnIsAutoRenderTargetEnabled(const QRhiWidget* self, intptr_t slot);
bool QRhiWidget_QBaseIsAutoRenderTargetEnabled(const QRhiWidget* self);
void QRhiWidget_SetAutoRenderTarget(QRhiWidget* self, bool enabled);
void QRhiWidget_OnSetAutoRenderTarget(QRhiWidget* self, intptr_t slot);
void QRhiWidget_QBaseSetAutoRenderTarget(QRhiWidget* self, bool enabled);
QRhi* QRhiWidget_Rhi(const QRhiWidget* self);
void QRhiWidget_OnRhi(const QRhiWidget* self, intptr_t slot);
QRhi* QRhiWidget_QBaseRhi(const QRhiWidget* self);
QRhiTexture* QRhiWidget_ColorTexture(const QRhiWidget* self);
void QRhiWidget_OnColorTexture(const QRhiWidget* self, intptr_t slot);
QRhiTexture* QRhiWidget_QBaseColorTexture(const QRhiWidget* self);
QRhiRenderBuffer* QRhiWidget_MsaaColorBuffer(const QRhiWidget* self);
void QRhiWidget_OnMsaaColorBuffer(const QRhiWidget* self, intptr_t slot);
QRhiRenderBuffer* QRhiWidget_QBaseMsaaColorBuffer(const QRhiWidget* self);
QRhiTexture* QRhiWidget_ResolveTexture(const QRhiWidget* self);
void QRhiWidget_OnResolveTexture(const QRhiWidget* self, intptr_t slot);
QRhiTexture* QRhiWidget_QBaseResolveTexture(const QRhiWidget* self);
QRhiRenderBuffer* QRhiWidget_DepthStencilBuffer(const QRhiWidget* self);
void QRhiWidget_OnDepthStencilBuffer(const QRhiWidget* self, intptr_t slot);
QRhiRenderBuffer* QRhiWidget_QBaseDepthStencilBuffer(const QRhiWidget* self);
QRhiRenderTarget* QRhiWidget_RenderTarget(const QRhiWidget* self);
void QRhiWidget_OnRenderTarget(const QRhiWidget* self, intptr_t slot);
QRhiRenderTarget* QRhiWidget_QBaseRenderTarget(const QRhiWidget* self);
void QRhiWidget_Delete(QRhiWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
