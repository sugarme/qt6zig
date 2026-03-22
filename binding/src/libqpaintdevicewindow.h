#pragma once
#ifndef QPAINTDEVICEWINDOW_H_C_LIB
#define QPAINTDEVICEWINDOW_H_C_LIB

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
typedef struct QExposeEvent QExposeEvent;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintDeviceWindow QPaintDeviceWindow;
typedef struct QPaintEvent QPaintEvent;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QWindow QWindow;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



libqt_string QPaintDeviceWindow_Tr(const char* s);
void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, const QRect* rect);
void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self, const QRegion* region);
void QPaintDeviceWindow_Update3(QPaintDeviceWindow* self);
void QPaintDeviceWindow_ExposeEvent(QPaintDeviceWindow* self, QExposeEvent* param1);
void QPaintDeviceWindow_PaintEvent(QPaintDeviceWindow* self, QPaintEvent* event);
int QPaintDeviceWindow_Metric(const QPaintDeviceWindow* self, int metric);
bool QPaintDeviceWindow_Event(QPaintDeviceWindow* self, QEvent* event);
libqt_string QPaintDeviceWindow_Tr2(const char* s, const char* c);
libqt_string QPaintDeviceWindow_Tr3(const char* s, const char* c, int n);
void QPaintDeviceWindow_OnExposeEvent(QPaintDeviceWindow* self, intptr_t slot);
void QPaintDeviceWindow_QBaseExposeEvent(QPaintDeviceWindow* self, QExposeEvent* param1);
void QPaintDeviceWindow_OnPaintEvent(QPaintDeviceWindow* self, intptr_t slot);
void QPaintDeviceWindow_QBasePaintEvent(QPaintDeviceWindow* self, QPaintEvent* event);
void QPaintDeviceWindow_OnMetric(const QPaintDeviceWindow* self, intptr_t slot);
int QPaintDeviceWindow_QBaseMetric(const QPaintDeviceWindow* self, int metric);
void QPaintDeviceWindow_OnEvent(QPaintDeviceWindow* self, intptr_t slot);
bool QPaintDeviceWindow_QBaseEvent(QPaintDeviceWindow* self, QEvent* event);
void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
