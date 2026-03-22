#pragma once
#ifndef QGRAPHICSLINEARLAYOUT_H_C_LIB
#define QGRAPHICSLINEARLAYOUT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsLinearLayout QGraphicsLinearLayout;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QGraphicsLinearLayout* QGraphicsLinearLayout_new();
QGraphicsLinearLayout* QGraphicsLinearLayout_new2(int orientation);
QGraphicsLinearLayout* QGraphicsLinearLayout_new3(QGraphicsLayoutItem* parent);
QGraphicsLinearLayout* QGraphicsLinearLayout_new4(int orientation, QGraphicsLayoutItem* parent);
void QGraphicsLinearLayout_SetOrientation(QGraphicsLinearLayout* self, int orientation);
int QGraphicsLinearLayout_Orientation(const QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_AddItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_AddStretch(QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_InsertItem(QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_InsertStretch(QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_RemoveItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_RemoveAt(QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_SetSpacing(QGraphicsLinearLayout* self, double spacing);
double QGraphicsLinearLayout_Spacing(const QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_SetItemSpacing(QGraphicsLinearLayout* self, int index, double spacing);
double QGraphicsLinearLayout_ItemSpacing(const QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_SetStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch);
int QGraphicsLinearLayout_StretchFactor(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_SetAlignment(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment);
int QGraphicsLinearLayout_Alignment(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item);
void QGraphicsLinearLayout_SetGeometry(QGraphicsLinearLayout* self, const QRectF* rect);
int QGraphicsLinearLayout_Count(const QGraphicsLinearLayout* self);
QGraphicsLayoutItem* QGraphicsLinearLayout_ItemAt(const QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_Invalidate(QGraphicsLinearLayout* self);
QSizeF* QGraphicsLinearLayout_SizeHint(const QGraphicsLinearLayout* self, int which, const QSizeF* constraint);
void QGraphicsLinearLayout_Dump(const QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_AddStretch1(QGraphicsLinearLayout* self, int stretch);
void QGraphicsLinearLayout_InsertStretch2(QGraphicsLinearLayout* self, int index, int stretch);
void QGraphicsLinearLayout_Dump1(const QGraphicsLinearLayout* self, int indent);
void QGraphicsLinearLayout_OnRemoveAt(QGraphicsLinearLayout* self, intptr_t slot);
void QGraphicsLinearLayout_QBaseRemoveAt(QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_OnSetGeometry(QGraphicsLinearLayout* self, intptr_t slot);
void QGraphicsLinearLayout_QBaseSetGeometry(QGraphicsLinearLayout* self, const QRectF* rect);
void QGraphicsLinearLayout_OnCount(const QGraphicsLinearLayout* self, intptr_t slot);
int QGraphicsLinearLayout_QBaseCount(const QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_OnItemAt(const QGraphicsLinearLayout* self, intptr_t slot);
QGraphicsLayoutItem* QGraphicsLinearLayout_QBaseItemAt(const QGraphicsLinearLayout* self, int index);
void QGraphicsLinearLayout_OnInvalidate(QGraphicsLinearLayout* self, intptr_t slot);
void QGraphicsLinearLayout_QBaseInvalidate(QGraphicsLinearLayout* self);
void QGraphicsLinearLayout_OnSizeHint(const QGraphicsLinearLayout* self, intptr_t slot);
QSizeF* QGraphicsLinearLayout_QBaseSizeHint(const QGraphicsLinearLayout* self, int which, const QSizeF* constraint);
void QGraphicsLinearLayout_Delete(QGraphicsLinearLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
