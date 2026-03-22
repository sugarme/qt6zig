#pragma once
#ifndef QXYSERIES_H_C_LIB
#define QXYSERIES_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QImage QImage;
typedef struct QLinearGradient QLinearGradient;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QVariant QVariant;
typedef struct QXYSeries QXYSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



libqt_string QXYSeries_Tr(const char* s);
void QXYSeries_Append(QXYSeries* self, double x, double y);
void QXYSeries_Append2(QXYSeries* self, const QPointF* point);
void QXYSeries_Append3(QXYSeries* self, const libqt_list points);
void QXYSeries_Replace(QXYSeries* self, double oldX, double oldY, double newX, double newY);
void QXYSeries_Replace2(QXYSeries* self, const QPointF* oldPoint, const QPointF* newPoint);
void QXYSeries_Replace3(QXYSeries* self, int index, double newX, double newY);
void QXYSeries_Replace4(QXYSeries* self, int index, const QPointF* newPoint);
void QXYSeries_Remove(QXYSeries* self, double x, double y);
void QXYSeries_Remove2(QXYSeries* self, const QPointF* point);
void QXYSeries_Remove3(QXYSeries* self, int index);
void QXYSeries_RemovePoints(QXYSeries* self, int index, int count);
void QXYSeries_Insert(QXYSeries* self, int index, const QPointF* point);
void QXYSeries_Clear(QXYSeries* self);
int QXYSeries_Count(const QXYSeries* self);
libqt_list QXYSeries_Points(const QXYSeries* self);
libqt_list QXYSeries_PointsVector(const QXYSeries* self);
const QPointF* QXYSeries_At(const QXYSeries* self, int index);
QXYSeries* QXYSeries_OperatorShiftLeft(QXYSeries* self, const QPointF* point);
QXYSeries* QXYSeries_OperatorShiftLeft2(QXYSeries* self, const libqt_list points);
void QXYSeries_SetPen(QXYSeries* self, const QPen* pen);
QPen* QXYSeries_Pen(const QXYSeries* self);
void QXYSeries_SetBrush(QXYSeries* self, const QBrush* brush);
QBrush* QXYSeries_Brush(const QXYSeries* self);
void QXYSeries_SetColor(QXYSeries* self, const QColor* color);
QColor* QXYSeries_Color(const QXYSeries* self);
void QXYSeries_SetSelectedColor(QXYSeries* self, const QColor* color);
QColor* QXYSeries_SelectedColor(const QXYSeries* self);
void QXYSeries_SetPointsVisible(QXYSeries* self);
bool QXYSeries_PointsVisible(const QXYSeries* self);
void QXYSeries_SetPointLabelsFormat(QXYSeries* self, const libqt_string format);
libqt_string QXYSeries_PointLabelsFormat(const QXYSeries* self);
void QXYSeries_SetPointLabelsVisible(QXYSeries* self);
bool QXYSeries_PointLabelsVisible(const QXYSeries* self);
void QXYSeries_SetPointLabelsFont(QXYSeries* self, const QFont* font);
QFont* QXYSeries_PointLabelsFont(const QXYSeries* self);
void QXYSeries_SetPointLabelsColor(QXYSeries* self, const QColor* color);
QColor* QXYSeries_PointLabelsColor(const QXYSeries* self);
void QXYSeries_SetPointLabelsClipping(QXYSeries* self);
bool QXYSeries_PointLabelsClipping(const QXYSeries* self);
void QXYSeries_Replace5(QXYSeries* self, const libqt_list points);
bool QXYSeries_IsPointSelected(QXYSeries* self, int index);
void QXYSeries_SelectPoint(QXYSeries* self, int index);
void QXYSeries_DeselectPoint(QXYSeries* self, int index);
void QXYSeries_SetPointSelected(QXYSeries* self, int index, bool selected);
void QXYSeries_SelectAllPoints(QXYSeries* self);
void QXYSeries_DeselectAllPoints(QXYSeries* self);
void QXYSeries_SelectPoints(QXYSeries* self, const libqt_list indexes);
void QXYSeries_DeselectPoints(QXYSeries* self, const libqt_list indexes);
void QXYSeries_ToggleSelection(QXYSeries* self, const libqt_list indexes);
libqt_list QXYSeries_SelectedPoints(const QXYSeries* self);
void QXYSeries_SetLightMarker(QXYSeries* self, const QImage* lightMarker);
const QImage* QXYSeries_LightMarker(const QXYSeries* self);
void QXYSeries_SetSelectedLightMarker(QXYSeries* self, const QImage* selectedLightMarker);
const QImage* QXYSeries_SelectedLightMarker(const QXYSeries* self);
void QXYSeries_SetMarkerSize(QXYSeries* self, double size);
double QXYSeries_MarkerSize(const QXYSeries* self);
void QXYSeries_SetBestFitLineVisible(QXYSeries* self);
bool QXYSeries_BestFitLineVisible(const QXYSeries* self);
libqt_pair QXYSeries_BestFitLineEquation(const QXYSeries* self, bool* ok);
void QXYSeries_SetBestFitLinePen(QXYSeries* self, const QPen* pen);
QPen* QXYSeries_BestFitLinePen(const QXYSeries* self);
void QXYSeries_SetBestFitLineColor(QXYSeries* self, const QColor* color);
QColor* QXYSeries_BestFitLineColor(const QXYSeries* self);
void QXYSeries_ClearPointConfiguration(QXYSeries* self, const int index);
void QXYSeries_ClearPointConfiguration2(QXYSeries* self, const int index, const int key);
void QXYSeries_ClearPointsConfiguration(QXYSeries* self);
void QXYSeries_ClearPointsConfiguration2(QXYSeries* self, const int key);
void QXYSeries_SetPointConfiguration(QXYSeries* self, const int index, const libqt_map configuration);
void QXYSeries_SetPointConfiguration2(QXYSeries* self, const int index, const int key, const QVariant* value);
void QXYSeries_SetPointsConfiguration(QXYSeries* self, const libqt_map pointsConfiguration);
libqt_map QXYSeries_PointConfiguration(const QXYSeries* self, const int index);
libqt_map QXYSeries_PointsConfiguration(const QXYSeries* self);
void QXYSeries_SizeBy(QXYSeries* self, const libqt_list sourceData, const double minSize, const double maxSize);
void QXYSeries_ColorBy(QXYSeries* self, const libqt_list sourceData);
void QXYSeries_Clicked(QXYSeries* self, const QPointF* point);
void QXYSeries_Connect_Clicked(QXYSeries* self, intptr_t slot);
void QXYSeries_Hovered(QXYSeries* self, const QPointF* point, bool state);
void QXYSeries_Connect_Hovered(QXYSeries* self, intptr_t slot);
void QXYSeries_Pressed(QXYSeries* self, const QPointF* point);
void QXYSeries_Connect_Pressed(QXYSeries* self, intptr_t slot);
void QXYSeries_Released(QXYSeries* self, const QPointF* point);
void QXYSeries_Connect_Released(QXYSeries* self, intptr_t slot);
void QXYSeries_DoubleClicked(QXYSeries* self, const QPointF* point);
void QXYSeries_Connect_DoubleClicked(QXYSeries* self, intptr_t slot);
void QXYSeries_PointReplaced(QXYSeries* self, int index);
void QXYSeries_Connect_PointReplaced(QXYSeries* self, intptr_t slot);
void QXYSeries_PointRemoved(QXYSeries* self, int index);
void QXYSeries_Connect_PointRemoved(QXYSeries* self, intptr_t slot);
void QXYSeries_PointAdded(QXYSeries* self, int index);
void QXYSeries_Connect_PointAdded(QXYSeries* self, intptr_t slot);
void QXYSeries_ColorChanged(QXYSeries* self, QColor* color);
void QXYSeries_Connect_ColorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_SelectedColorChanged(QXYSeries* self, const QColor* color);
void QXYSeries_Connect_SelectedColorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointsReplaced(QXYSeries* self);
void QXYSeries_Connect_PointsReplaced(QXYSeries* self, intptr_t slot);
void QXYSeries_PointLabelsFormatChanged(QXYSeries* self, const libqt_string format);
void QXYSeries_Connect_PointLabelsFormatChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointLabelsVisibilityChanged(QXYSeries* self, bool visible);
void QXYSeries_Connect_PointLabelsVisibilityChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointLabelsFontChanged(QXYSeries* self, const QFont* font);
void QXYSeries_Connect_PointLabelsFontChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointLabelsColorChanged(QXYSeries* self, const QColor* color);
void QXYSeries_Connect_PointLabelsColorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointLabelsClippingChanged(QXYSeries* self, bool clipping);
void QXYSeries_Connect_PointLabelsClippingChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointsRemoved(QXYSeries* self, int index, int count);
void QXYSeries_Connect_PointsRemoved(QXYSeries* self, intptr_t slot);
void QXYSeries_PenChanged(QXYSeries* self, const QPen* pen);
void QXYSeries_Connect_PenChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_SelectedPointsChanged(QXYSeries* self);
void QXYSeries_Connect_SelectedPointsChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_LightMarkerChanged(QXYSeries* self, const QImage* lightMarker);
void QXYSeries_Connect_LightMarkerChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_SelectedLightMarkerChanged(QXYSeries* self, const QImage* selectedLightMarker);
void QXYSeries_Connect_SelectedLightMarkerChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_BestFitLineVisibilityChanged(QXYSeries* self, bool visible);
void QXYSeries_Connect_BestFitLineVisibilityChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_BestFitLinePenChanged(QXYSeries* self, const QPen* pen);
void QXYSeries_Connect_BestFitLinePenChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_BestFitLineColorChanged(QXYSeries* self, const QColor* color);
void QXYSeries_Connect_BestFitLineColorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointsConfigurationChanged(QXYSeries* self, const libqt_map configuration);
void QXYSeries_Connect_PointsConfigurationChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_MarkerSizeChanged(QXYSeries* self, double size);
void QXYSeries_Connect_MarkerSizeChanged(QXYSeries* self, intptr_t slot);
libqt_string QXYSeries_Tr2(const char* s, const char* c);
libqt_string QXYSeries_Tr3(const char* s, const char* c, int n);
void QXYSeries_SetPointsVisible1(QXYSeries* self, bool visible);
void QXYSeries_SetPointLabelsVisible1(QXYSeries* self, bool visible);
void QXYSeries_SetPointLabelsClipping1(QXYSeries* self, bool enabled);
void QXYSeries_SetBestFitLineVisible1(QXYSeries* self, bool visible);
void QXYSeries_ColorBy2(QXYSeries* self, const libqt_list sourceData, const QLinearGradient* gradient);
void QXYSeries_OnSetPen(QXYSeries* self, intptr_t slot);
void QXYSeries_QBaseSetPen(QXYSeries* self, const QPen* pen);
void QXYSeries_OnSetBrush(QXYSeries* self, intptr_t slot);
void QXYSeries_QBaseSetBrush(QXYSeries* self, const QBrush* brush);
void QXYSeries_OnSetColor(QXYSeries* self, intptr_t slot);
void QXYSeries_QBaseSetColor(QXYSeries* self, const QColor* color);
void QXYSeries_OnColor(const QXYSeries* self, intptr_t slot);
QColor* QXYSeries_QBaseColor(const QXYSeries* self);
void QXYSeries_Delete(QXYSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
