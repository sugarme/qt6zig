#pragma once
#ifndef QCHART_H_C_LIB
#define QCHART_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBrush QBrush;
typedef struct QChart QChart;
typedef struct QEasingCurve QEasingCurve;
typedef struct QFont QFont;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QLegend QLegend;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif






QChart* QChart_new();
QChart* QChart_new2(QGraphicsItem* parent);
QChart* QChart_new3(QGraphicsItem* parent, int wFlags);
libqt_string QChart_Tr(const char* s);
void QChart_AddSeries(QChart* self, QAbstractSeries* series);
void QChart_RemoveSeries(QChart* self, QAbstractSeries* series);
void QChart_RemoveAllSeries(QChart* self);
libqt_list QChart_Series(const QChart* self);
void QChart_SetAxisX(QChart* self, QAbstractAxis* axis);
void QChart_SetAxisY(QChart* self, QAbstractAxis* axis);
QAbstractAxis* QChart_AxisX(const QChart* self);
QAbstractAxis* QChart_AxisY(const QChart* self);
void QChart_AddAxis(QChart* self, QAbstractAxis* axis, int alignment);
void QChart_RemoveAxis(QChart* self, QAbstractAxis* axis);
libqt_list QChart_Axes(const QChart* self);
void QChart_CreateDefaultAxes(QChart* self);
void QChart_SetTheme(QChart* self, int theme);
int QChart_Theme(const QChart* self);
void QChart_SetTitle(QChart* self, const libqt_string title);
libqt_string QChart_Title(const QChart* self);
void QChart_SetTitleFont(QChart* self, const QFont* font);
QFont* QChart_TitleFont(const QChart* self);
void QChart_SetTitleBrush(QChart* self, const QBrush* brush);
QBrush* QChart_TitleBrush(const QChart* self);
void QChart_SetBackgroundBrush(QChart* self, const QBrush* brush);
QBrush* QChart_BackgroundBrush(const QChart* self);
void QChart_SetBackgroundPen(QChart* self, const QPen* pen);
QPen* QChart_BackgroundPen(const QChart* self);
void QChart_SetBackgroundVisible(QChart* self);
bool QChart_IsBackgroundVisible(const QChart* self);
void QChart_SetDropShadowEnabled(QChart* self);
bool QChart_IsDropShadowEnabled(const QChart* self);
void QChart_SetBackgroundRoundness(QChart* self, double diameter);
double QChart_BackgroundRoundness(const QChart* self);
void QChart_SetAnimationOptions(QChart* self, int options);
int QChart_AnimationOptions(const QChart* self);
void QChart_SetAnimationDuration(QChart* self, int msecs);
int QChart_AnimationDuration(const QChart* self);
void QChart_SetAnimationEasingCurve(QChart* self, const QEasingCurve* curve);
QEasingCurve* QChart_AnimationEasingCurve(const QChart* self);
void QChart_ZoomIn(QChart* self);
void QChart_ZoomOut(QChart* self);
void QChart_ZoomIn2(QChart* self, const QRectF* rect);
void QChart_Zoom(QChart* self, double factor);
void QChart_ZoomReset(QChart* self);
bool QChart_IsZoomed(QChart* self);
void QChart_Scroll(QChart* self, double dx, double dy);
QLegend* QChart_Legend(const QChart* self);
void QChart_SetMargins(QChart* self, const QMargins* margins);
QMargins* QChart_Margins(const QChart* self);
QRectF* QChart_PlotArea(const QChart* self);
void QChart_SetPlotArea(QChart* self, const QRectF* rect);
void QChart_SetPlotAreaBackgroundBrush(QChart* self, const QBrush* brush);
QBrush* QChart_PlotAreaBackgroundBrush(const QChart* self);
void QChart_SetPlotAreaBackgroundPen(QChart* self, const QPen* pen);
QPen* QChart_PlotAreaBackgroundPen(const QChart* self);
void QChart_SetPlotAreaBackgroundVisible(QChart* self);
bool QChart_IsPlotAreaBackgroundVisible(const QChart* self);
void QChart_SetLocalizeNumbers(QChart* self, bool localize);
bool QChart_LocalizeNumbers(const QChart* self);
void QChart_SetLocale(QChart* self, const QLocale* locale);
QLocale* QChart_Locale(const QChart* self);
QPointF* QChart_MapToValue(QChart* self, const QPointF* position);
QPointF* QChart_MapToPosition(QChart* self, const QPointF* value);
int QChart_ChartType(const QChart* self);
void QChart_PlotAreaChanged(QChart* self, const QRectF* plotArea);
void QChart_Connect_PlotAreaChanged(QChart* self, intptr_t slot);
libqt_string QChart_Tr2(const char* s, const char* c);
libqt_string QChart_Tr3(const char* s, const char* c, int n);
void QChart_SetAxisX2(QChart* self, QAbstractAxis* axis, QAbstractSeries* series);
void QChart_SetAxisY2(QChart* self, QAbstractAxis* axis, QAbstractSeries* series);
QAbstractAxis* QChart_AxisX1(const QChart* self, QAbstractSeries* series);
QAbstractAxis* QChart_AxisY1(const QChart* self, QAbstractSeries* series);
libqt_list QChart_Axes1(const QChart* self, int orientation);
libqt_list QChart_Axes2(const QChart* self, int orientation, QAbstractSeries* series);
void QChart_SetBackgroundVisible1(QChart* self, bool visible);
void QChart_SetDropShadowEnabled1(QChart* self, bool enabled);
void QChart_SetPlotAreaBackgroundVisible1(QChart* self, bool visible);
QPointF* QChart_MapToValue2(QChart* self, const QPointF* position, QAbstractSeries* series);
QPointF* QChart_MapToPosition2(QChart* self, const QPointF* value, QAbstractSeries* series);
void QChart_Delete(QChart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
