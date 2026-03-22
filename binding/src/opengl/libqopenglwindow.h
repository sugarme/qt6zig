#pragma once
#ifndef QOPENGLWINDOW_H_C_LIB
#define QOPENGLWINDOW_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QImage QImage;
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QOpenGLWindow QOpenGLWindow;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintDeviceWindow QPaintDeviceWindow;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QWindow QWindow;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QOpenGLWindow* QOpenGLWindow_new();
QOpenGLWindow* QOpenGLWindow_new2(QOpenGLContext* shareContext);
QOpenGLWindow* QOpenGLWindow_new3(int updateBehavior);
QOpenGLWindow* QOpenGLWindow_new4(int updateBehavior, QWindow* parent);
QOpenGLWindow* QOpenGLWindow_new5(QOpenGLContext* shareContext, int updateBehavior);
QOpenGLWindow* QOpenGLWindow_new6(QOpenGLContext* shareContext, int updateBehavior, QWindow* parent);
libqt_string QOpenGLWindow_Tr(const char* s);
int QOpenGLWindow_UpdateBehavior(const QOpenGLWindow* self);
bool QOpenGLWindow_IsValid(const QOpenGLWindow* self);
void QOpenGLWindow_MakeCurrent(QOpenGLWindow* self);
void QOpenGLWindow_DoneCurrent(QOpenGLWindow* self);
QOpenGLContext* QOpenGLWindow_Context(const QOpenGLWindow* self);
QOpenGLContext* QOpenGLWindow_ShareContext(const QOpenGLWindow* self);
uint32_t QOpenGLWindow_DefaultFramebufferObject(const QOpenGLWindow* self);
QImage* QOpenGLWindow_GrabFramebuffer(QOpenGLWindow* self);
void QOpenGLWindow_FrameSwapped(QOpenGLWindow* self);
void QOpenGLWindow_Connect_FrameSwapped(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_InitializeGL(QOpenGLWindow* self);
void QOpenGLWindow_ResizeGL(QOpenGLWindow* self, int w, int h);
void QOpenGLWindow_PaintGL(QOpenGLWindow* self);
void QOpenGLWindow_PaintUnderGL(QOpenGLWindow* self);
void QOpenGLWindow_PaintOverGL(QOpenGLWindow* self);
void QOpenGLWindow_PaintEvent(QOpenGLWindow* self, QPaintEvent* event);
void QOpenGLWindow_ResizeEvent(QOpenGLWindow* self, QResizeEvent* event);
int QOpenGLWindow_Metric(const QOpenGLWindow* self, int metric);
QPaintDevice* QOpenGLWindow_Redirected(const QOpenGLWindow* self, QPoint* param1);
libqt_string QOpenGLWindow_Tr2(const char* s, const char* c);
libqt_string QOpenGLWindow_Tr3(const char* s, const char* c, int n);
void QOpenGLWindow_OnInitializeGL(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseInitializeGL(QOpenGLWindow* self);
void QOpenGLWindow_OnResizeGL(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseResizeGL(QOpenGLWindow* self, int w, int h);
void QOpenGLWindow_OnPaintGL(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBasePaintGL(QOpenGLWindow* self);
void QOpenGLWindow_OnPaintUnderGL(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBasePaintUnderGL(QOpenGLWindow* self);
void QOpenGLWindow_OnPaintOverGL(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBasePaintOverGL(QOpenGLWindow* self);
void QOpenGLWindow_OnPaintEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBasePaintEvent(QOpenGLWindow* self, QPaintEvent* event);
void QOpenGLWindow_OnResizeEvent(QOpenGLWindow* self, intptr_t slot);
void QOpenGLWindow_QBaseResizeEvent(QOpenGLWindow* self, QResizeEvent* event);
void QOpenGLWindow_OnMetric(const QOpenGLWindow* self, intptr_t slot);
int QOpenGLWindow_QBaseMetric(const QOpenGLWindow* self, int metric);
void QOpenGLWindow_OnRedirected(const QOpenGLWindow* self, intptr_t slot);
QPaintDevice* QOpenGLWindow_QBaseRedirected(const QOpenGLWindow* self, QPoint* param1);
void QOpenGLWindow_Delete(QOpenGLWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
