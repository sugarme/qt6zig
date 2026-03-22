#pragma once
#ifndef QSCATTERSERIES_H_C_LIB
#define QSCATTERSERIES_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QScatterSeries QScatterSeries;
typedef struct QXYSeries QXYSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QScatterSeries* QScatterSeries_new();
QScatterSeries* QScatterSeries_new2(QObject* parent);
libqt_string QScatterSeries_Tr(const char* s);
int QScatterSeries_Type(const QScatterSeries* self);
void QScatterSeries_SetPen(QScatterSeries* self, const QPen* pen);
void QScatterSeries_SetBrush(QScatterSeries* self, const QBrush* brush);
QBrush* QScatterSeries_Brush(const QScatterSeries* self);
void QScatterSeries_SetColor(QScatterSeries* self, const QColor* color);
QColor* QScatterSeries_Color(const QScatterSeries* self);
void QScatterSeries_SetBorderColor(QScatterSeries* self, const QColor* color);
QColor* QScatterSeries_BorderColor(const QScatterSeries* self);
int QScatterSeries_MarkerShape(const QScatterSeries* self);
void QScatterSeries_SetMarkerShape(QScatterSeries* self, int shape);
double QScatterSeries_MarkerSize(const QScatterSeries* self);
void QScatterSeries_SetMarkerSize(QScatterSeries* self, double size);
void QScatterSeries_ColorChanged(QScatterSeries* self, QColor* color);
void QScatterSeries_Connect_ColorChanged(QScatterSeries* self, intptr_t slot);
void QScatterSeries_BorderColorChanged(QScatterSeries* self, QColor* color);
void QScatterSeries_Connect_BorderColorChanged(QScatterSeries* self, intptr_t slot);
void QScatterSeries_MarkerShapeChanged(QScatterSeries* self, int shape);
void QScatterSeries_Connect_MarkerShapeChanged(QScatterSeries* self, intptr_t slot);
void QScatterSeries_MarkerSizeChanged(QScatterSeries* self, double size);
void QScatterSeries_Connect_MarkerSizeChanged(QScatterSeries* self, intptr_t slot);
libqt_string QScatterSeries_Tr2(const char* s, const char* c);
libqt_string QScatterSeries_Tr3(const char* s, const char* c, int n);
void QScatterSeries_OnType(const QScatterSeries* self, intptr_t slot);
int QScatterSeries_QBaseType(const QScatterSeries* self);
void QScatterSeries_OnSetPen(QScatterSeries* self, intptr_t slot);
void QScatterSeries_QBaseSetPen(QScatterSeries* self, const QPen* pen);
void QScatterSeries_OnSetBrush(QScatterSeries* self, intptr_t slot);
void QScatterSeries_QBaseSetBrush(QScatterSeries* self, const QBrush* brush);
void QScatterSeries_OnSetColor(QScatterSeries* self, intptr_t slot);
void QScatterSeries_QBaseSetColor(QScatterSeries* self, const QColor* color);
void QScatterSeries_OnColor(const QScatterSeries* self, intptr_t slot);
QColor* QScatterSeries_QBaseColor(const QScatterSeries* self);
void QScatterSeries_Delete(QScatterSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
