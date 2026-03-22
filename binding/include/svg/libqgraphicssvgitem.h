#pragma once
#ifndef QGRAPHICSSVGITEM_H_C_LIB
#define QGRAPHICSSVGITEM_H_C_LIB

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
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsSvgItem QGraphicsSvgItem;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QSvgRenderer QSvgRenderer;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QGraphicsSvgItem* QGraphicsSvgItem_new();
QGraphicsSvgItem* QGraphicsSvgItem_new2(const libqt_string fileName);
QGraphicsSvgItem* QGraphicsSvgItem_new3(QGraphicsItem* parentItem);
QGraphicsSvgItem* QGraphicsSvgItem_new4(const libqt_string fileName, QGraphicsItem* parentItem);
libqt_string QGraphicsSvgItem_Tr(const char* s);
void QGraphicsSvgItem_SetSharedRenderer(QGraphicsSvgItem* self, QSvgRenderer* renderer);
QSvgRenderer* QGraphicsSvgItem_Renderer(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_SetElementId(QGraphicsSvgItem* self, const libqt_string id);
libqt_string QGraphicsSvgItem_ElementId(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_SetCachingEnabled(QGraphicsSvgItem* self, bool cachingEnabled);
bool QGraphicsSvgItem_IsCachingEnabled(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_SetMaximumCacheSize(QGraphicsSvgItem* self, const QSize* size);
QSize* QGraphicsSvgItem_MaximumCacheSize(const QGraphicsSvgItem* self);
QRectF* QGraphicsSvgItem_BoundingRect(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_Paint(QGraphicsSvgItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsSvgItem_Type(const QGraphicsSvgItem* self);
libqt_string QGraphicsSvgItem_Tr2(const char* s, const char* c);
libqt_string QGraphicsSvgItem_Tr3(const char* s, const char* c, int n);
void QGraphicsSvgItem_OnBoundingRect(const QGraphicsSvgItem* self, intptr_t slot);
QRectF* QGraphicsSvgItem_QBaseBoundingRect(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_OnPaint(QGraphicsSvgItem* self, intptr_t slot);
void QGraphicsSvgItem_QBasePaint(QGraphicsSvgItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsSvgItem_OnType(const QGraphicsSvgItem* self, intptr_t slot);
int QGraphicsSvgItem_QBaseType(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_Delete(QGraphicsSvgItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
