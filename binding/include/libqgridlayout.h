#pragma once
#ifndef QGRIDLAYOUT_H_C_LIB
#define QGRIDLAYOUT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGridLayout QGridLayout;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QGridLayout* QGridLayout_new(QWidget* parent);
QGridLayout* QGridLayout_new2();
libqt_string QGridLayout_Tr(const char* s);
QSize* QGridLayout_SizeHint(const QGridLayout* self);
QSize* QGridLayout_MinimumSize(const QGridLayout* self);
QSize* QGridLayout_MaximumSize(const QGridLayout* self);
void QGridLayout_SetHorizontalSpacing(QGridLayout* self, int spacing);
int QGridLayout_HorizontalSpacing(const QGridLayout* self);
void QGridLayout_SetVerticalSpacing(QGridLayout* self, int spacing);
int QGridLayout_VerticalSpacing(const QGridLayout* self);
void QGridLayout_SetSpacing(QGridLayout* self, int spacing);
int QGridLayout_Spacing(const QGridLayout* self);
void QGridLayout_SetRowStretch(QGridLayout* self, int row, int stretch);
void QGridLayout_SetColumnStretch(QGridLayout* self, int column, int stretch);
int QGridLayout_RowStretch(const QGridLayout* self, int row);
int QGridLayout_ColumnStretch(const QGridLayout* self, int column);
void QGridLayout_SetRowMinimumHeight(QGridLayout* self, int row, int minSize);
void QGridLayout_SetColumnMinimumWidth(QGridLayout* self, int column, int minSize);
int QGridLayout_RowMinimumHeight(const QGridLayout* self, int row);
int QGridLayout_ColumnMinimumWidth(const QGridLayout* self, int column);
int QGridLayout_ColumnCount(const QGridLayout* self);
int QGridLayout_RowCount(const QGridLayout* self);
QRect* QGridLayout_CellRect(const QGridLayout* self, int row, int column);
bool QGridLayout_HasHeightForWidth(const QGridLayout* self);
int QGridLayout_HeightForWidth(const QGridLayout* self, int param1);
int QGridLayout_MinimumHeightForWidth(const QGridLayout* self, int param1);
int QGridLayout_ExpandingDirections(const QGridLayout* self);
void QGridLayout_Invalidate(QGridLayout* self);
void QGridLayout_AddWidget(QGridLayout* self, QWidget* w);
void QGridLayout_AddWidget2(QGridLayout* self, QWidget* param1, int row, int column);
void QGridLayout_AddWidget3(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_AddLayout(QGridLayout* self, QLayout* param1, int row, int column);
void QGridLayout_AddLayout2(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_SetOriginCorner(QGridLayout* self, int originCorner);
int QGridLayout_OriginCorner(const QGridLayout* self);
QLayoutItem* QGridLayout_ItemAt(const QGridLayout* self, int index);
QLayoutItem* QGridLayout_ItemAtPosition(const QGridLayout* self, int row, int column);
QLayoutItem* QGridLayout_TakeAt(QGridLayout* self, int index);
int QGridLayout_Count(const QGridLayout* self);
void QGridLayout_SetGeometry(QGridLayout* self, const QRect* geometry);
void QGridLayout_AddItem(QGridLayout* self, QLayoutItem* item, int row, int column);
void QGridLayout_SetDefaultPositioning(QGridLayout* self, int n, int orient);
void QGridLayout_GetItemPosition(const QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan);
void QGridLayout_AddItem2(QGridLayout* self, QLayoutItem* param1);
libqt_string QGridLayout_Tr2(const char* s, const char* c);
libqt_string QGridLayout_Tr3(const char* s, const char* c, int n);
void QGridLayout_AddWidget4(QGridLayout* self, QWidget* param1, int row, int column, int param4);
void QGridLayout_AddWidget6(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6);
void QGridLayout_AddLayout4(QGridLayout* self, QLayout* param1, int row, int column, int param4);
void QGridLayout_AddLayout6(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6);
void QGridLayout_AddItem4(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan);
void QGridLayout_AddItem5(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_AddItem6(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6);
void QGridLayout_OnSizeHint(const QGridLayout* self, intptr_t slot);
QSize* QGridLayout_QBaseSizeHint(const QGridLayout* self);
void QGridLayout_OnMinimumSize(const QGridLayout* self, intptr_t slot);
QSize* QGridLayout_QBaseMinimumSize(const QGridLayout* self);
void QGridLayout_OnMaximumSize(const QGridLayout* self, intptr_t slot);
QSize* QGridLayout_QBaseMaximumSize(const QGridLayout* self);
void QGridLayout_OnSetSpacing(QGridLayout* self, intptr_t slot);
void QGridLayout_QBaseSetSpacing(QGridLayout* self, int spacing);
void QGridLayout_OnSpacing(const QGridLayout* self, intptr_t slot);
int QGridLayout_QBaseSpacing(const QGridLayout* self);
void QGridLayout_OnHasHeightForWidth(const QGridLayout* self, intptr_t slot);
bool QGridLayout_QBaseHasHeightForWidth(const QGridLayout* self);
void QGridLayout_OnHeightForWidth(const QGridLayout* self, intptr_t slot);
int QGridLayout_QBaseHeightForWidth(const QGridLayout* self, int param1);
void QGridLayout_OnMinimumHeightForWidth(const QGridLayout* self, intptr_t slot);
int QGridLayout_QBaseMinimumHeightForWidth(const QGridLayout* self, int param1);
void QGridLayout_OnExpandingDirections(const QGridLayout* self, intptr_t slot);
int QGridLayout_QBaseExpandingDirections(const QGridLayout* self);
void QGridLayout_OnInvalidate(QGridLayout* self, intptr_t slot);
void QGridLayout_QBaseInvalidate(QGridLayout* self);
void QGridLayout_OnItemAt(const QGridLayout* self, intptr_t slot);
QLayoutItem* QGridLayout_QBaseItemAt(const QGridLayout* self, int index);
void QGridLayout_OnTakeAt(QGridLayout* self, intptr_t slot);
QLayoutItem* QGridLayout_QBaseTakeAt(QGridLayout* self, int index);
void QGridLayout_OnCount(const QGridLayout* self, intptr_t slot);
int QGridLayout_QBaseCount(const QGridLayout* self);
void QGridLayout_OnSetGeometry(QGridLayout* self, intptr_t slot);
void QGridLayout_QBaseSetGeometry(QGridLayout* self, const QRect* geometry);
void QGridLayout_OnAddItem2(QGridLayout* self, intptr_t slot);
void QGridLayout_QBaseAddItem2(QGridLayout* self, QLayoutItem* param1);
void QGridLayout_Delete(QGridLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
