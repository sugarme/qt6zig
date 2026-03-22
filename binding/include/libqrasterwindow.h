#pragma once
#ifndef QRASTERWINDOW_H_C_LIB
#define QRASTERWINDOW_H_C_LIB

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
typedef struct QPaintDeviceWindow QPaintDeviceWindow;
typedef struct QPoint QPoint;
typedef struct QRasterWindow QRasterWindow;
typedef struct QResizeEvent QResizeEvent;
typedef struct QWindow QWindow;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QRasterWindow* QRasterWindow_new();
QRasterWindow* QRasterWindow_new2(QWindow* parent);
libqt_string QRasterWindow_Tr(const char* s);
int QRasterWindow_Metric(const QRasterWindow* self, int metric);
QPaintDevice* QRasterWindow_Redirected(const QRasterWindow* self, QPoint* param1);
void QRasterWindow_ResizeEvent(QRasterWindow* self, QResizeEvent* event);
libqt_string QRasterWindow_Tr2(const char* s, const char* c);
libqt_string QRasterWindow_Tr3(const char* s, const char* c, int n);
void QRasterWindow_OnMetric(const QRasterWindow* self, intptr_t slot);
int QRasterWindow_QBaseMetric(const QRasterWindow* self, int metric);
void QRasterWindow_OnRedirected(const QRasterWindow* self, intptr_t slot);
QPaintDevice* QRasterWindow_QBaseRedirected(const QRasterWindow* self, QPoint* param1);
void QRasterWindow_OnResizeEvent(QRasterWindow* self, intptr_t slot);
void QRasterWindow_QBaseResizeEvent(QRasterWindow* self, QResizeEvent* event);
void QRasterWindow_Delete(QRasterWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
