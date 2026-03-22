#pragma once
#ifndef QOPENGLWIDGET_H_C_LIB
#define QOPENGLWIDGET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QOpenGLWidget QOpenGLWidget;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QOpenGLWidget* QOpenGLWidget_new(QWidget* parent);
QOpenGLWidget* QOpenGLWidget_new2();
QOpenGLWidget* QOpenGLWidget_new3(QWidget* parent, int f);
libqt_string QOpenGLWidget_Tr(const char* s);
void QOpenGLWidget_SetUpdateBehavior(QOpenGLWidget* self, int updateBehavior);
int QOpenGLWidget_UpdateBehavior(const QOpenGLWidget* self);
void QOpenGLWidget_SetFormat(QOpenGLWidget* self, const QSurfaceFormat* format);
QSurfaceFormat* QOpenGLWidget_Format(const QOpenGLWidget* self);
GL QOpenGLWidget_TextureFormat(const QOpenGLWidget* self);
void QOpenGLWidget_SetTextureFormat(QOpenGLWidget* self, uint32_t texFormat);
bool QOpenGLWidget_IsValid(const QOpenGLWidget* self);
void QOpenGLWidget_MakeCurrent(QOpenGLWidget* self);
void QOpenGLWidget_MakeCurrent2(QOpenGLWidget* self, uint8_t targetBuffer);
void QOpenGLWidget_DoneCurrent(QOpenGLWidget* self);
QOpenGLContext* QOpenGLWidget_Context(const QOpenGLWidget* self);
uint32_t QOpenGLWidget_DefaultFramebufferObject(const QOpenGLWidget* self);
uint32_t QOpenGLWidget_DefaultFramebufferObject2(const QOpenGLWidget* self, uint8_t targetBuffer);
QImage* QOpenGLWidget_GrabFramebuffer(QOpenGLWidget* self);
QImage* QOpenGLWidget_GrabFramebuffer2(QOpenGLWidget* self, uint8_t targetBuffer);
uint8_t QOpenGLWidget_CurrentTargetBuffer(const QOpenGLWidget* self);
void QOpenGLWidget_AboutToCompose(QOpenGLWidget* self);
void QOpenGLWidget_Connect_AboutToCompose(QOpenGLWidget* self, intptr_t slot);
void QOpenGLWidget_FrameSwapped(QOpenGLWidget* self);
void QOpenGLWidget_Connect_FrameSwapped(QOpenGLWidget* self, intptr_t slot);
void QOpenGLWidget_AboutToResize(QOpenGLWidget* self);
void QOpenGLWidget_Connect_AboutToResize(QOpenGLWidget* self, intptr_t slot);
void QOpenGLWidget_Resized(QOpenGLWidget* self);
void QOpenGLWidget_Connect_Resized(QOpenGLWidget* self, intptr_t slot);
void QOpenGLWidget_InitializeGL(QOpenGLWidget* self);
void QOpenGLWidget_ResizeGL(QOpenGLWidget* self, int w, int h);
void QOpenGLWidget_PaintGL(QOpenGLWidget* self);
void QOpenGLWidget_PaintEvent(QOpenGLWidget* self, QPaintEvent* e);
void QOpenGLWidget_ResizeEvent(QOpenGLWidget* self, QResizeEvent* e);
bool QOpenGLWidget_Event(QOpenGLWidget* self, QEvent* e);
int QOpenGLWidget_Metric(const QOpenGLWidget* self, int metric);
QPaintDevice* QOpenGLWidget_Redirected(const QOpenGLWidget* self, QPoint* p);
QPaintEngine* QOpenGLWidget_PaintEngine(const QOpenGLWidget* self);
libqt_string QOpenGLWidget_Tr2(const char* s, const char* c);
libqt_string QOpenGLWidget_Tr3(const char* s, const char* c, int n);
void QOpenGLWidget_OnInitializeGL(QOpenGLWidget* self, intptr_t slot);
void QOpenGLWidget_QBaseInitializeGL(QOpenGLWidget* self);
void QOpenGLWidget_OnResizeGL(QOpenGLWidget* self, intptr_t slot);
void QOpenGLWidget_QBaseResizeGL(QOpenGLWidget* self, int w, int h);
void QOpenGLWidget_OnPaintGL(QOpenGLWidget* self, intptr_t slot);
void QOpenGLWidget_QBasePaintGL(QOpenGLWidget* self);
void QOpenGLWidget_OnPaintEvent(QOpenGLWidget* self, intptr_t slot);
void QOpenGLWidget_QBasePaintEvent(QOpenGLWidget* self, QPaintEvent* e);
void QOpenGLWidget_OnResizeEvent(QOpenGLWidget* self, intptr_t slot);
void QOpenGLWidget_QBaseResizeEvent(QOpenGLWidget* self, QResizeEvent* e);
void QOpenGLWidget_OnEvent(QOpenGLWidget* self, intptr_t slot);
bool QOpenGLWidget_QBaseEvent(QOpenGLWidget* self, QEvent* e);
void QOpenGLWidget_OnMetric(const QOpenGLWidget* self, intptr_t slot);
int QOpenGLWidget_QBaseMetric(const QOpenGLWidget* self, int metric);
void QOpenGLWidget_OnRedirected(const QOpenGLWidget* self, intptr_t slot);
QPaintDevice* QOpenGLWidget_QBaseRedirected(const QOpenGLWidget* self, QPoint* p);
void QOpenGLWidget_OnPaintEngine(const QOpenGLWidget* self, intptr_t slot);
QPaintEngine* QOpenGLWidget_QBasePaintEngine(const QOpenGLWidget* self);
void QOpenGLWidget_Delete(QOpenGLWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
