#pragma once
#ifndef QPOLYGON_H_C_LIB
#define QPOLYGON_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QPolygon* QPolygon_new();
QPolygon* QPolygon_new2(const libqt_list v);
QPolygon* QPolygon_new3(const QRect* r);
QPolygon* QPolygon_new4(int nPoints, const int* points);
QPolygon* QPolygon_new5(const QRect* r, bool closed);
QVariant* QPolygon_OperatorQVariant(const QPolygon* self);
void QPolygon_Translate(QPolygon* self, int dx, int dy);
void QPolygon_Translate2(QPolygon* self, const QPoint* offset);
QRect* QPolygon_BoundingRect(const QPolygon* self);
void QPolygon_Point(const QPolygon* self, int i, int* x, int* y);
QPoint* QPolygon_Point2(const QPolygon* self, int i);
void QPolygon_SetPoint(QPolygon* self, int index, int x, int y);
void QPolygon_SetPoint2(QPolygon* self, int index, const QPoint* p);
void QPolygon_SetPoints(QPolygon* self, int nPoints, const int* points);
void QPolygon_SetPoints2(QPolygon* self, int nPoints, int firstx, int firsty, ... );
void QPolygon_PutPoints(QPolygon* self, int index, int nPoints, const int* points);
void QPolygon_PutPoints2(QPolygon* self, int index, int nPoints, int firstx, int firsty, ... );
bool QPolygon_ContainsPoint(const QPolygon* self, const QPoint* pt, int fillRule);
void QPolygon_Delete(QPolygon* self);


QPolygonF* QPolygonF_new();
QPolygonF* QPolygonF_new2(const libqt_list v);
QPolygonF* QPolygonF_new3(const QRectF* r);
QVariant* QPolygonF_OperatorQVariant(const QPolygonF* self);
void QPolygonF_Translate(QPolygonF* self, double dx, double dy);
void QPolygonF_Translate2(QPolygonF* self, const QPointF* offset);
bool QPolygonF_IsClosed(const QPolygonF* self);
QRectF* QPolygonF_BoundingRect(const QPolygonF* self);
bool QPolygonF_ContainsPoint(const QPolygonF* self, const QPointF* pt, int fillRule);
void QPolygonF_Delete(QPolygonF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
