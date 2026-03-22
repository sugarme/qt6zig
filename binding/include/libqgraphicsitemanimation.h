#pragma once
#ifndef QGRAPHICSITEMANIMATION_H_C_LIB
#define QGRAPHICSITEMANIMATION_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsItemAnimation QGraphicsItemAnimation;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QTimeLine QTimeLine;
typedef struct QTransform QTransform;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QGraphicsItemAnimation* QGraphicsItemAnimation_new();
QGraphicsItemAnimation* QGraphicsItemAnimation_new2(QObject* parent);
libqt_string QGraphicsItemAnimation_Tr(const char* s);
QGraphicsItem* QGraphicsItemAnimation_Item(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetItem(QGraphicsItemAnimation* self, QGraphicsItem* item);
QTimeLine* QGraphicsItemAnimation_TimeLine(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetTimeLine(QGraphicsItemAnimation* self, QTimeLine* timeLine);
QPointF* QGraphicsItemAnimation_PosAt(const QGraphicsItemAnimation* self, double step);
libqt_list QGraphicsItemAnimation_PosList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetPosAt(QGraphicsItemAnimation* self, double step, const QPointF* pos);
QTransform* QGraphicsItemAnimation_TransformAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_RotationAt(const QGraphicsItemAnimation* self, double step);
libqt_list QGraphicsItemAnimation_RotationList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetRotationAt(QGraphicsItemAnimation* self, double step, double angle);
double QGraphicsItemAnimation_XTranslationAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_YTranslationAt(const QGraphicsItemAnimation* self, double step);
libqt_list QGraphicsItemAnimation_TranslationList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetTranslationAt(QGraphicsItemAnimation* self, double step, double dx, double dy);
double QGraphicsItemAnimation_VerticalScaleAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_HorizontalScaleAt(const QGraphicsItemAnimation* self, double step);
libqt_list QGraphicsItemAnimation_ScaleList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetScaleAt(QGraphicsItemAnimation* self, double step, double sx, double sy);
double QGraphicsItemAnimation_VerticalShearAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_HorizontalShearAt(const QGraphicsItemAnimation* self, double step);
libqt_list QGraphicsItemAnimation_ShearList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetShearAt(QGraphicsItemAnimation* self, double step, double sh, double sv);
void QGraphicsItemAnimation_Clear(QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetStep(QGraphicsItemAnimation* self, double x);
void QGraphicsItemAnimation_BeforeAnimationStep(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_AfterAnimationStep(QGraphicsItemAnimation* self, double step);
libqt_string QGraphicsItemAnimation_Tr2(const char* s, const char* c);
libqt_string QGraphicsItemAnimation_Tr3(const char* s, const char* c, int n);
void QGraphicsItemAnimation_OnBeforeAnimationStep(QGraphicsItemAnimation* self, intptr_t slot);
void QGraphicsItemAnimation_QBaseBeforeAnimationStep(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_OnAfterAnimationStep(QGraphicsItemAnimation* self, intptr_t slot);
void QGraphicsItemAnimation_QBaseAfterAnimationStep(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_Delete(QGraphicsItemAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
