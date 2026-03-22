#pragma once
#ifndef QLAYOUTITEM_H_C_LIB
#define QLAYOUTITEM_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QSpacerItem QSpacerItem;
typedef struct QWidget QWidget;
typedef struct QWidgetItem QWidgetItem;
typedef struct QWidgetItemV2 QWidgetItemV2;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QLayoutItem* QLayoutItem_new();
QLayoutItem* QLayoutItem_new2(const QLayoutItem* param1);
QLayoutItem* QLayoutItem_new3(int alignment);
QSize* QLayoutItem_SizeHint(const QLayoutItem* self);
QSize* QLayoutItem_MinimumSize(const QLayoutItem* self);
QSize* QLayoutItem_MaximumSize(const QLayoutItem* self);
int QLayoutItem_ExpandingDirections(const QLayoutItem* self);
void QLayoutItem_SetGeometry(QLayoutItem* self, const QRect* geometry);
QRect* QLayoutItem_Geometry(const QLayoutItem* self);
bool QLayoutItem_IsEmpty(const QLayoutItem* self);
bool QLayoutItem_HasHeightForWidth(const QLayoutItem* self);
int QLayoutItem_HeightForWidth(const QLayoutItem* self, int param1);
int QLayoutItem_MinimumHeightForWidth(const QLayoutItem* self, int param1);
void QLayoutItem_Invalidate(QLayoutItem* self);
QWidget* QLayoutItem_Widget(const QLayoutItem* self);
QLayout* QLayoutItem_Layout(QLayoutItem* self);
QSpacerItem* QLayoutItem_SpacerItem(QLayoutItem* self);
int QLayoutItem_Alignment(const QLayoutItem* self);
void QLayoutItem_SetAlignment(QLayoutItem* self, int a);
int QLayoutItem_ControlTypes(const QLayoutItem* self);
void QLayoutItem_OnSizeHint(const QLayoutItem* self, intptr_t slot);
QSize* QLayoutItem_QBaseSizeHint(const QLayoutItem* self);
void QLayoutItem_OnMinimumSize(const QLayoutItem* self, intptr_t slot);
QSize* QLayoutItem_QBaseMinimumSize(const QLayoutItem* self);
void QLayoutItem_OnMaximumSize(const QLayoutItem* self, intptr_t slot);
QSize* QLayoutItem_QBaseMaximumSize(const QLayoutItem* self);
void QLayoutItem_OnExpandingDirections(const QLayoutItem* self, intptr_t slot);
int QLayoutItem_QBaseExpandingDirections(const QLayoutItem* self);
void QLayoutItem_OnSetGeometry(QLayoutItem* self, intptr_t slot);
void QLayoutItem_QBaseSetGeometry(QLayoutItem* self, const QRect* geometry);
void QLayoutItem_OnGeometry(const QLayoutItem* self, intptr_t slot);
QRect* QLayoutItem_QBaseGeometry(const QLayoutItem* self);
void QLayoutItem_OnIsEmpty(const QLayoutItem* self, intptr_t slot);
bool QLayoutItem_QBaseIsEmpty(const QLayoutItem* self);
void QLayoutItem_OnHasHeightForWidth(const QLayoutItem* self, intptr_t slot);
bool QLayoutItem_QBaseHasHeightForWidth(const QLayoutItem* self);
void QLayoutItem_OnHeightForWidth(const QLayoutItem* self, intptr_t slot);
int QLayoutItem_QBaseHeightForWidth(const QLayoutItem* self, int param1);
void QLayoutItem_OnMinimumHeightForWidth(const QLayoutItem* self, intptr_t slot);
int QLayoutItem_QBaseMinimumHeightForWidth(const QLayoutItem* self, int param1);
void QLayoutItem_OnInvalidate(QLayoutItem* self, intptr_t slot);
void QLayoutItem_QBaseInvalidate(QLayoutItem* self);
void QLayoutItem_OnWidget(const QLayoutItem* self, intptr_t slot);
QWidget* QLayoutItem_QBaseWidget(const QLayoutItem* self);
void QLayoutItem_OnLayout(QLayoutItem* self, intptr_t slot);
QLayout* QLayoutItem_QBaseLayout(QLayoutItem* self);
void QLayoutItem_OnSpacerItem(QLayoutItem* self, intptr_t slot);
QSpacerItem* QLayoutItem_QBaseSpacerItem(QLayoutItem* self);
void QLayoutItem_OnControlTypes(const QLayoutItem* self, intptr_t slot);
int QLayoutItem_QBaseControlTypes(const QLayoutItem* self);
void QLayoutItem_OperatorAssign(QLayoutItem* self, const QLayoutItem* param1);
void QLayoutItem_OnOperatorAssign(QLayoutItem* self, intptr_t slot);
void QLayoutItem_QBaseOperatorAssign(QLayoutItem* self, const QLayoutItem* param1);
void QLayoutItem_Delete(QLayoutItem* self);

QSpacerItem* QSpacerItem_new(int w, int h);
QSpacerItem* QSpacerItem_new2(const QSpacerItem* param1);
QSpacerItem* QSpacerItem_new3(int w, int h, int hData);
QSpacerItem* QSpacerItem_new4(int w, int h, int hData, int vData);
void QSpacerItem_ChangeSize(QSpacerItem* self, int w, int h);
QSize* QSpacerItem_SizeHint(const QSpacerItem* self);
QSize* QSpacerItem_MinimumSize(const QSpacerItem* self);
QSize* QSpacerItem_MaximumSize(const QSpacerItem* self);
int QSpacerItem_ExpandingDirections(const QSpacerItem* self);
bool QSpacerItem_IsEmpty(const QSpacerItem* self);
void QSpacerItem_SetGeometry(QSpacerItem* self, const QRect* geometry);
QRect* QSpacerItem_Geometry(const QSpacerItem* self);
QSpacerItem* QSpacerItem_SpacerItem(QSpacerItem* self);
QSizePolicy* QSpacerItem_SizePolicy(const QSpacerItem* self);
void QSpacerItem_ChangeSize3(QSpacerItem* self, int w, int h, int hData);
void QSpacerItem_ChangeSize4(QSpacerItem* self, int w, int h, int hData, int vData);
void QSpacerItem_OnSizeHint(const QSpacerItem* self, intptr_t slot);
QSize* QSpacerItem_QBaseSizeHint(const QSpacerItem* self);
void QSpacerItem_OnMinimumSize(const QSpacerItem* self, intptr_t slot);
QSize* QSpacerItem_QBaseMinimumSize(const QSpacerItem* self);
void QSpacerItem_OnMaximumSize(const QSpacerItem* self, intptr_t slot);
QSize* QSpacerItem_QBaseMaximumSize(const QSpacerItem* self);
void QSpacerItem_OnExpandingDirections(const QSpacerItem* self, intptr_t slot);
int QSpacerItem_QBaseExpandingDirections(const QSpacerItem* self);
void QSpacerItem_OnIsEmpty(const QSpacerItem* self, intptr_t slot);
bool QSpacerItem_QBaseIsEmpty(const QSpacerItem* self);
void QSpacerItem_OnSetGeometry(QSpacerItem* self, intptr_t slot);
void QSpacerItem_QBaseSetGeometry(QSpacerItem* self, const QRect* geometry);
void QSpacerItem_OnGeometry(const QSpacerItem* self, intptr_t slot);
QRect* QSpacerItem_QBaseGeometry(const QSpacerItem* self);
void QSpacerItem_OnSpacerItem(QSpacerItem* self, intptr_t slot);
QSpacerItem* QSpacerItem_QBaseSpacerItem(QSpacerItem* self);
void QSpacerItem_Delete(QSpacerItem* self);

QWidgetItem* QWidgetItem_new(QWidget* w);
QSize* QWidgetItem_SizeHint(const QWidgetItem* self);
QSize* QWidgetItem_MinimumSize(const QWidgetItem* self);
QSize* QWidgetItem_MaximumSize(const QWidgetItem* self);
int QWidgetItem_ExpandingDirections(const QWidgetItem* self);
bool QWidgetItem_IsEmpty(const QWidgetItem* self);
void QWidgetItem_SetGeometry(QWidgetItem* self, const QRect* geometry);
QRect* QWidgetItem_Geometry(const QWidgetItem* self);
QWidget* QWidgetItem_Widget(const QWidgetItem* self);
bool QWidgetItem_HasHeightForWidth(const QWidgetItem* self);
int QWidgetItem_HeightForWidth(const QWidgetItem* self, int param1);
int QWidgetItem_MinimumHeightForWidth(const QWidgetItem* self, int param1);
int QWidgetItem_ControlTypes(const QWidgetItem* self);
void QWidgetItem_OnSizeHint(const QWidgetItem* self, intptr_t slot);
QSize* QWidgetItem_QBaseSizeHint(const QWidgetItem* self);
void QWidgetItem_OnMinimumSize(const QWidgetItem* self, intptr_t slot);
QSize* QWidgetItem_QBaseMinimumSize(const QWidgetItem* self);
void QWidgetItem_OnMaximumSize(const QWidgetItem* self, intptr_t slot);
QSize* QWidgetItem_QBaseMaximumSize(const QWidgetItem* self);
void QWidgetItem_OnExpandingDirections(const QWidgetItem* self, intptr_t slot);
int QWidgetItem_QBaseExpandingDirections(const QWidgetItem* self);
void QWidgetItem_OnIsEmpty(const QWidgetItem* self, intptr_t slot);
bool QWidgetItem_QBaseIsEmpty(const QWidgetItem* self);
void QWidgetItem_OnSetGeometry(QWidgetItem* self, intptr_t slot);
void QWidgetItem_QBaseSetGeometry(QWidgetItem* self, const QRect* geometry);
void QWidgetItem_OnGeometry(const QWidgetItem* self, intptr_t slot);
QRect* QWidgetItem_QBaseGeometry(const QWidgetItem* self);
void QWidgetItem_OnWidget(const QWidgetItem* self, intptr_t slot);
QWidget* QWidgetItem_QBaseWidget(const QWidgetItem* self);
void QWidgetItem_OnHasHeightForWidth(const QWidgetItem* self, intptr_t slot);
bool QWidgetItem_QBaseHasHeightForWidth(const QWidgetItem* self);
void QWidgetItem_OnHeightForWidth(const QWidgetItem* self, intptr_t slot);
int QWidgetItem_QBaseHeightForWidth(const QWidgetItem* self, int param1);
void QWidgetItem_OnMinimumHeightForWidth(const QWidgetItem* self, intptr_t slot);
int QWidgetItem_QBaseMinimumHeightForWidth(const QWidgetItem* self, int param1);
void QWidgetItem_OnControlTypes(const QWidgetItem* self, intptr_t slot);
int QWidgetItem_QBaseControlTypes(const QWidgetItem* self);
void QWidgetItem_Delete(QWidgetItem* self);

QWidgetItemV2* QWidgetItemV2_new(QWidget* widget);
QSize* QWidgetItemV2_SizeHint(const QWidgetItemV2* self);
QSize* QWidgetItemV2_MinimumSize(const QWidgetItemV2* self);
QSize* QWidgetItemV2_MaximumSize(const QWidgetItemV2* self);
int QWidgetItemV2_HeightForWidth(const QWidgetItemV2* self, int width);
void QWidgetItemV2_OnSizeHint(const QWidgetItemV2* self, intptr_t slot);
QSize* QWidgetItemV2_QBaseSizeHint(const QWidgetItemV2* self);
void QWidgetItemV2_OnMinimumSize(const QWidgetItemV2* self, intptr_t slot);
QSize* QWidgetItemV2_QBaseMinimumSize(const QWidgetItemV2* self);
void QWidgetItemV2_OnMaximumSize(const QWidgetItemV2* self, intptr_t slot);
QSize* QWidgetItemV2_QBaseMaximumSize(const QWidgetItemV2* self);
void QWidgetItemV2_OnHeightForWidth(const QWidgetItemV2* self, intptr_t slot);
int QWidgetItemV2_QBaseHeightForWidth(const QWidgetItemV2* self, int width);
void QWidgetItemV2_Delete(QWidgetItemV2* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
