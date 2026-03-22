#pragma once
#ifndef QAREASERIES_H_C_LIB
#define QAREASERIES_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QAreaSeries QAreaSeries;
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QLineSeries QLineSeries;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAreaSeries* QAreaSeries_new();
QAreaSeries* QAreaSeries_new2(QLineSeries* upperSeries);
QAreaSeries* QAreaSeries_new3(QObject* parent);
QAreaSeries* QAreaSeries_new4(QLineSeries* upperSeries, QLineSeries* lowerSeries);
libqt_string QAreaSeries_Tr(const char* s);
int QAreaSeries_Type(const QAreaSeries* self);
void QAreaSeries_SetUpperSeries(QAreaSeries* self, QLineSeries* series);
QLineSeries* QAreaSeries_UpperSeries(const QAreaSeries* self);
void QAreaSeries_SetLowerSeries(QAreaSeries* self, QLineSeries* series);
QLineSeries* QAreaSeries_LowerSeries(const QAreaSeries* self);
void QAreaSeries_SetPen(QAreaSeries* self, const QPen* pen);
QPen* QAreaSeries_Pen(const QAreaSeries* self);
void QAreaSeries_SetBrush(QAreaSeries* self, const QBrush* brush);
QBrush* QAreaSeries_Brush(const QAreaSeries* self);
void QAreaSeries_SetColor(QAreaSeries* self, const QColor* color);
QColor* QAreaSeries_Color(const QAreaSeries* self);
void QAreaSeries_SetBorderColor(QAreaSeries* self, const QColor* color);
QColor* QAreaSeries_BorderColor(const QAreaSeries* self);
void QAreaSeries_SetPointsVisible(QAreaSeries* self);
bool QAreaSeries_PointsVisible(const QAreaSeries* self);
void QAreaSeries_SetPointLabelsFormat(QAreaSeries* self, const libqt_string format);
libqt_string QAreaSeries_PointLabelsFormat(const QAreaSeries* self);
void QAreaSeries_SetPointLabelsVisible(QAreaSeries* self);
bool QAreaSeries_PointLabelsVisible(const QAreaSeries* self);
void QAreaSeries_SetPointLabelsFont(QAreaSeries* self, const QFont* font);
QFont* QAreaSeries_PointLabelsFont(const QAreaSeries* self);
void QAreaSeries_SetPointLabelsColor(QAreaSeries* self, const QColor* color);
QColor* QAreaSeries_PointLabelsColor(const QAreaSeries* self);
void QAreaSeries_SetPointLabelsClipping(QAreaSeries* self);
bool QAreaSeries_PointLabelsClipping(const QAreaSeries* self);
void QAreaSeries_Clicked(QAreaSeries* self, const QPointF* point);
void QAreaSeries_Connect_Clicked(QAreaSeries* self, intptr_t slot);
void QAreaSeries_Hovered(QAreaSeries* self, const QPointF* point, bool state);
void QAreaSeries_Connect_Hovered(QAreaSeries* self, intptr_t slot);
void QAreaSeries_Pressed(QAreaSeries* self, const QPointF* point);
void QAreaSeries_Connect_Pressed(QAreaSeries* self, intptr_t slot);
void QAreaSeries_Released(QAreaSeries* self, const QPointF* point);
void QAreaSeries_Connect_Released(QAreaSeries* self, intptr_t slot);
void QAreaSeries_DoubleClicked(QAreaSeries* self, const QPointF* point);
void QAreaSeries_Connect_DoubleClicked(QAreaSeries* self, intptr_t slot);
void QAreaSeries_Selected(QAreaSeries* self);
void QAreaSeries_Connect_Selected(QAreaSeries* self, intptr_t slot);
void QAreaSeries_ColorChanged(QAreaSeries* self, QColor* color);
void QAreaSeries_Connect_ColorChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_BorderColorChanged(QAreaSeries* self, QColor* color);
void QAreaSeries_Connect_BorderColorChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_PointLabelsFormatChanged(QAreaSeries* self, const libqt_string format);
void QAreaSeries_Connect_PointLabelsFormatChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_PointLabelsVisibilityChanged(QAreaSeries* self, bool visible);
void QAreaSeries_Connect_PointLabelsVisibilityChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_PointLabelsFontChanged(QAreaSeries* self, const QFont* font);
void QAreaSeries_Connect_PointLabelsFontChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_PointLabelsColorChanged(QAreaSeries* self, const QColor* color);
void QAreaSeries_Connect_PointLabelsColorChanged(QAreaSeries* self, intptr_t slot);
void QAreaSeries_PointLabelsClippingChanged(QAreaSeries* self, bool clipping);
void QAreaSeries_Connect_PointLabelsClippingChanged(QAreaSeries* self, intptr_t slot);
libqt_string QAreaSeries_Tr2(const char* s, const char* c);
libqt_string QAreaSeries_Tr3(const char* s, const char* c, int n);
void QAreaSeries_SetPointsVisible1(QAreaSeries* self, bool visible);
void QAreaSeries_SetPointLabelsVisible1(QAreaSeries* self, bool visible);
void QAreaSeries_SetPointLabelsClipping1(QAreaSeries* self, bool enabled);
void QAreaSeries_OnType(const QAreaSeries* self, intptr_t slot);
int QAreaSeries_QBaseType(const QAreaSeries* self);
void QAreaSeries_Delete(QAreaSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
