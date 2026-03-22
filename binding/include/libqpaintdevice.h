#pragma once
#ifndef QPAINTDEVICE_H_C_LIB
#define QPAINTDEVICE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



int QPaintDevice_DevType(const QPaintDevice* self);
bool QPaintDevice_PaintingActive(const QPaintDevice* self);
QPaintEngine* QPaintDevice_PaintEngine(const QPaintDevice* self);
int QPaintDevice_Width(const QPaintDevice* self);
int QPaintDevice_Height(const QPaintDevice* self);
int QPaintDevice_WidthMM(const QPaintDevice* self);
int QPaintDevice_HeightMM(const QPaintDevice* self);
int QPaintDevice_LogicalDpiX(const QPaintDevice* self);
int QPaintDevice_LogicalDpiY(const QPaintDevice* self);
int QPaintDevice_PhysicalDpiX(const QPaintDevice* self);
int QPaintDevice_PhysicalDpiY(const QPaintDevice* self);
double QPaintDevice_DevicePixelRatio(const QPaintDevice* self);
double QPaintDevice_DevicePixelRatioF(const QPaintDevice* self);
int QPaintDevice_ColorCount(const QPaintDevice* self);
int QPaintDevice_Depth(const QPaintDevice* self);
double QPaintDevice_DevicePixelRatioFScale();
int QPaintDevice_EncodeMetricF(int metric, double value);
int QPaintDevice_Metric(const QPaintDevice* self, int metric);
void QPaintDevice_InitPainter(const QPaintDevice* self, QPainter* painter);
QPaintDevice* QPaintDevice_Redirected(const QPaintDevice* self, QPoint* offset);
QPainter* QPaintDevice_SharedPainter(const QPaintDevice* self);
void QPaintDevice_OnDevType(const QPaintDevice* self, intptr_t slot);
int QPaintDevice_QBaseDevType(const QPaintDevice* self);
void QPaintDevice_OnPaintEngine(const QPaintDevice* self, intptr_t slot);
QPaintEngine* QPaintDevice_QBasePaintEngine(const QPaintDevice* self);
void QPaintDevice_OnMetric(const QPaintDevice* self, intptr_t slot);
int QPaintDevice_QBaseMetric(const QPaintDevice* self, int metric);
void QPaintDevice_OnInitPainter(const QPaintDevice* self, intptr_t slot);
void QPaintDevice_QBaseInitPainter(const QPaintDevice* self, QPainter* painter);
void QPaintDevice_OnRedirected(const QPaintDevice* self, intptr_t slot);
QPaintDevice* QPaintDevice_QBaseRedirected(const QPaintDevice* self, QPoint* offset);
void QPaintDevice_OnSharedPainter(const QPaintDevice* self, intptr_t slot);
QPainter* QPaintDevice_QBaseSharedPainter(const QPaintDevice* self);
double QPaintDevice_GetDecodedMetricF(const QPaintDevice* self, int metricA, int metricB);
void QPaintDevice_OnGetDecodedMetricF(const QPaintDevice* self, intptr_t slot);
double QPaintDevice_QBaseGetDecodedMetricF(const QPaintDevice* self, int metricA, int metricB);
void QPaintDevice_Delete(QPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
