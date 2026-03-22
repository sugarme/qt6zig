#pragma once
#ifndef QCOLUMNVIEW_H_C_LIB
#define QCOLUMNVIEW_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QColumnView QColumnView;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QModelIndex QModelIndex;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QColumnView* QColumnView_new(QWidget* parent);
QColumnView* QColumnView_new2();
libqt_string QColumnView_Tr(const char* s);
void QColumnView_UpdatePreviewWidget(QColumnView* self, const QModelIndex* index);
void QColumnView_Connect_UpdatePreviewWidget(QColumnView* self, intptr_t slot);
QModelIndex* QColumnView_IndexAt(const QColumnView* self, const QPoint* point);
void QColumnView_ScrollTo(QColumnView* self, const QModelIndex* index, int hint);
QSize* QColumnView_SizeHint(const QColumnView* self);
QRect* QColumnView_VisualRect(const QColumnView* self, const QModelIndex* index);
void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model);
void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel);
void QColumnView_SetRootIndex(QColumnView* self, const QModelIndex* index);
void QColumnView_SelectAll(QColumnView* self);
void QColumnView_SetResizeGripsVisible(QColumnView* self, bool visible);
bool QColumnView_ResizeGripsVisible(const QColumnView* self);
QWidget* QColumnView_PreviewWidget(const QColumnView* self);
void QColumnView_SetPreviewWidget(QColumnView* self, QWidget* widget);
void QColumnView_SetColumnWidths(QColumnView* self, const libqt_list list);
libqt_list QColumnView_ColumnWidths(const QColumnView* self);
bool QColumnView_IsIndexHidden(const QColumnView* self, const QModelIndex* index);
QModelIndex* QColumnView_MoveCursor(QColumnView* self, int cursorAction, int modifiers);
void QColumnView_ResizeEvent(QColumnView* self, QResizeEvent* event);
void QColumnView_SetSelection(QColumnView* self, const QRect* rect, int command);
QRegion* QColumnView_VisualRegionForSelection(const QColumnView* self, const QItemSelection* selection);
int QColumnView_HorizontalOffset(const QColumnView* self);
int QColumnView_VerticalOffset(const QColumnView* self);
void QColumnView_RowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end);
void QColumnView_CurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous);
void QColumnView_ScrollContentsBy(QColumnView* self, int dx, int dy);
QAbstractItemView* QColumnView_CreateColumn(QColumnView* self, const QModelIndex* rootIndex);
libqt_string QColumnView_Tr2(const char* s, const char* c);
libqt_string QColumnView_Tr3(const char* s, const char* c, int n);
void QColumnView_OnIndexAt(const QColumnView* self, intptr_t slot);
QModelIndex* QColumnView_QBaseIndexAt(const QColumnView* self, const QPoint* point);
void QColumnView_OnScrollTo(QColumnView* self, intptr_t slot);
void QColumnView_QBaseScrollTo(QColumnView* self, const QModelIndex* index, int hint);
void QColumnView_OnSizeHint(const QColumnView* self, intptr_t slot);
QSize* QColumnView_QBaseSizeHint(const QColumnView* self);
void QColumnView_OnVisualRect(const QColumnView* self, intptr_t slot);
QRect* QColumnView_QBaseVisualRect(const QColumnView* self, const QModelIndex* index);
void QColumnView_OnSetModel(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetModel(QColumnView* self, QAbstractItemModel* model);
void QColumnView_OnSetSelectionModel(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel);
void QColumnView_OnSetRootIndex(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetRootIndex(QColumnView* self, const QModelIndex* index);
void QColumnView_OnSelectAll(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSelectAll(QColumnView* self);
void QColumnView_OnIsIndexHidden(const QColumnView* self, intptr_t slot);
bool QColumnView_QBaseIsIndexHidden(const QColumnView* self, const QModelIndex* index);
void QColumnView_OnMoveCursor(QColumnView* self, intptr_t slot);
QModelIndex* QColumnView_QBaseMoveCursor(QColumnView* self, int cursorAction, int modifiers);
void QColumnView_OnResizeEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseResizeEvent(QColumnView* self, QResizeEvent* event);
void QColumnView_OnSetSelection(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetSelection(QColumnView* self, const QRect* rect, int command);
void QColumnView_OnVisualRegionForSelection(const QColumnView* self, intptr_t slot);
QRegion* QColumnView_QBaseVisualRegionForSelection(const QColumnView* self, const QItemSelection* selection);
void QColumnView_OnHorizontalOffset(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseHorizontalOffset(const QColumnView* self);
void QColumnView_OnVerticalOffset(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseVerticalOffset(const QColumnView* self);
void QColumnView_OnRowsInserted(QColumnView* self, intptr_t slot);
void QColumnView_QBaseRowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end);
void QColumnView_OnCurrentChanged(QColumnView* self, intptr_t slot);
void QColumnView_QBaseCurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous);
void QColumnView_OnScrollContentsBy(QColumnView* self, intptr_t slot);
void QColumnView_QBaseScrollContentsBy(QColumnView* self, int dx, int dy);
void QColumnView_OnCreateColumn(QColumnView* self, intptr_t slot);
QAbstractItemView* QColumnView_QBaseCreateColumn(QColumnView* self, const QModelIndex* rootIndex);
void QColumnView_InitializeColumn(const QColumnView* self, QAbstractItemView* column);
void QColumnView_OnInitializeColumn(const QColumnView* self, intptr_t slot);
void QColumnView_QBaseInitializeColumn(const QColumnView* self, QAbstractItemView* column);
void QColumnView_Delete(QColumnView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
