#pragma once
#ifndef QOPENGLPAINTDEVICE_H_C_LIB
#define QOPENGLPAINTDEVICE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QOpenGLPaintDevice QOpenGLPaintDevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QSize QSize;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QOpenGLPaintDevice* QOpenGLPaintDevice_new();
QOpenGLPaintDevice* QOpenGLPaintDevice_new2(const QSize* size);
QOpenGLPaintDevice* QOpenGLPaintDevice_new3(int width, int height);
int QOpenGLPaintDevice_DevType(const QOpenGLPaintDevice* self);
QPaintEngine* QOpenGLPaintDevice_PaintEngine(const QOpenGLPaintDevice* self);
QOpenGLContext* QOpenGLPaintDevice_Context(const QOpenGLPaintDevice* self);
QSize* QOpenGLPaintDevice_Size(const QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_SetSize(QOpenGLPaintDevice* self, const QSize* size);
void QOpenGLPaintDevice_SetDevicePixelRatio(QOpenGLPaintDevice* self, double devicePixelRatio);
double QOpenGLPaintDevice_DotsPerMeterX(const QOpenGLPaintDevice* self);
double QOpenGLPaintDevice_DotsPerMeterY(const QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_SetDotsPerMeterX(QOpenGLPaintDevice* self, double dotsPerMeterX);
void QOpenGLPaintDevice_SetDotsPerMeterY(QOpenGLPaintDevice* self, double dotsPerMeterY);
void QOpenGLPaintDevice_SetPaintFlipped(QOpenGLPaintDevice* self, bool flipped);
bool QOpenGLPaintDevice_PaintFlipped(const QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_EnsureActiveTarget(QOpenGLPaintDevice* self);
int QOpenGLPaintDevice_Metric(const QOpenGLPaintDevice* self, int metric);
void QOpenGLPaintDevice_OnDevType(const QOpenGLPaintDevice* self, intptr_t slot);
int QOpenGLPaintDevice_QBaseDevType(const QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_OnPaintEngine(const QOpenGLPaintDevice* self, intptr_t slot);
QPaintEngine* QOpenGLPaintDevice_QBasePaintEngine(const QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_OnEnsureActiveTarget(QOpenGLPaintDevice* self, intptr_t slot);
void QOpenGLPaintDevice_QBaseEnsureActiveTarget(QOpenGLPaintDevice* self);
void QOpenGLPaintDevice_OnMetric(const QOpenGLPaintDevice* self, intptr_t slot);
int QOpenGLPaintDevice_QBaseMetric(const QOpenGLPaintDevice* self, int metric);
void QOpenGLPaintDevice_Delete(QOpenGLPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
