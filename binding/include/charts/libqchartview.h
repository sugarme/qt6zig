#pragma once
#ifndef QCHARTVIEW_H_C_LIB
#define QCHARTVIEW_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChart QChart;
typedef struct QChartView QChartView;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsView QGraphicsView;
typedef struct QMouseEvent QMouseEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QChartView* QChartView_new(QWidget* parent);
QChartView* QChartView_new2();
QChartView* QChartView_new3(QChart* chart);
QChartView* QChartView_new4(QChart* chart, QWidget* parent);
libqt_string QChartView_Tr(const char* s);
void QChartView_SetRubberBand(QChartView* self, const int* rubberBands);
int QChartView_RubberBand(const QChartView* self);
QChart* QChartView_Chart(const QChartView* self);
void QChartView_SetChart(QChartView* self, QChart* chart);
void QChartView_ResizeEvent(QChartView* self, QResizeEvent* event);
void QChartView_MousePressEvent(QChartView* self, QMouseEvent* event);
void QChartView_MouseMoveEvent(QChartView* self, QMouseEvent* event);
void QChartView_MouseReleaseEvent(QChartView* self, QMouseEvent* event);
libqt_string QChartView_Tr2(const char* s, const char* c);
libqt_string QChartView_Tr3(const char* s, const char* c, int n);
void QChartView_OnResizeEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseResizeEvent(QChartView* self, QResizeEvent* event);
void QChartView_OnMousePressEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseMousePressEvent(QChartView* self, QMouseEvent* event);
void QChartView_OnMouseMoveEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseMouseMoveEvent(QChartView* self, QMouseEvent* event);
void QChartView_OnMouseReleaseEvent(QChartView* self, intptr_t slot);
void QChartView_QBaseMouseReleaseEvent(QChartView* self, QMouseEvent* event);
void QChartView_Delete(QChartView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
