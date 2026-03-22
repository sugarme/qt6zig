#pragma once
#ifndef QTABLEVIEW_H_C_LIB
#define QTABLEVIEW_H_C_LIB

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
typedef struct QDropEvent QDropEvent;
typedef struct QHeaderView QHeaderView;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QModelIndex QModelIndex;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTableView QTableView;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTableView* QTableView_new(QWidget* parent);
QTableView* QTableView_new2();
libqt_string QTableView_Tr(const char* s);
void QTableView_SetModel(QTableView* self, QAbstractItemModel* model);
void QTableView_SetRootIndex(QTableView* self, const QModelIndex* index);
void QTableView_SetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel);
void QTableView_DoItemsLayout(QTableView* self);
QHeaderView* QTableView_HorizontalHeader(const QTableView* self);
QHeaderView* QTableView_VerticalHeader(const QTableView* self);
void QTableView_SetHorizontalHeader(QTableView* self, QHeaderView* header);
void QTableView_SetVerticalHeader(QTableView* self, QHeaderView* header);
int QTableView_RowViewportPosition(const QTableView* self, int row);
int QTableView_RowAt(const QTableView* self, int y);
void QTableView_SetRowHeight(QTableView* self, int row, int height);
int QTableView_RowHeight(const QTableView* self, int row);
int QTableView_ColumnViewportPosition(const QTableView* self, int column);
int QTableView_ColumnAt(const QTableView* self, int x);
void QTableView_SetColumnWidth(QTableView* self, int column, int width);
int QTableView_ColumnWidth(const QTableView* self, int column);
bool QTableView_IsRowHidden(const QTableView* self, int row);
void QTableView_SetRowHidden(QTableView* self, int row, bool hide);
bool QTableView_IsColumnHidden(const QTableView* self, int column);
void QTableView_SetColumnHidden(QTableView* self, int column, bool hide);
void QTableView_SetSortingEnabled(QTableView* self, bool enable);
bool QTableView_IsSortingEnabled(const QTableView* self);
bool QTableView_ShowGrid(const QTableView* self);
int QTableView_GridStyle(const QTableView* self);
void QTableView_SetGridStyle(QTableView* self, int style);
void QTableView_SetWordWrap(QTableView* self, bool on);
bool QTableView_WordWrap(const QTableView* self);
void QTableView_SetCornerButtonEnabled(QTableView* self, bool enable);
bool QTableView_IsCornerButtonEnabled(const QTableView* self);
QRect* QTableView_VisualRect(const QTableView* self, const QModelIndex* index);
void QTableView_ScrollTo(QTableView* self, const QModelIndex* index, int hint);
QModelIndex* QTableView_IndexAt(const QTableView* self, const QPoint* p);
void QTableView_SetSpan(QTableView* self, int row, int column, int rowSpan, int columnSpan);
int QTableView_RowSpan(const QTableView* self, int row, int column);
int QTableView_ColumnSpan(const QTableView* self, int row, int column);
void QTableView_ClearSpans(QTableView* self);
void QTableView_SelectRow(QTableView* self, int row);
void QTableView_SelectColumn(QTableView* self, int column);
void QTableView_HideRow(QTableView* self, int row);
void QTableView_HideColumn(QTableView* self, int column);
void QTableView_ShowRow(QTableView* self, int row);
void QTableView_ShowColumn(QTableView* self, int column);
void QTableView_ResizeRowToContents(QTableView* self, int row);
void QTableView_ResizeRowsToContents(QTableView* self);
void QTableView_ResizeColumnToContents(QTableView* self, int column);
void QTableView_ResizeColumnsToContents(QTableView* self);
void QTableView_SortByColumn(QTableView* self, int column, int order);
void QTableView_SetShowGrid(QTableView* self, bool show);
void QTableView_ScrollContentsBy(QTableView* self, int dx, int dy);
void QTableView_InitViewItemOption(const QTableView* self, QStyleOptionViewItem* option);
void QTableView_PaintEvent(QTableView* self, QPaintEvent* e);
void QTableView_TimerEvent(QTableView* self, QTimerEvent* event);
void QTableView_DropEvent(QTableView* self, QDropEvent* event);
int QTableView_HorizontalOffset(const QTableView* self);
int QTableView_VerticalOffset(const QTableView* self);
QModelIndex* QTableView_MoveCursor(QTableView* self, int cursorAction, int modifiers);
void QTableView_SetSelection(QTableView* self, const QRect* rect, int command);
QRegion* QTableView_VisualRegionForSelection(const QTableView* self, const QItemSelection* selection);
libqt_list QTableView_SelectedIndexes(const QTableView* self);
void QTableView_UpdateGeometries(QTableView* self);
QSize* QTableView_ViewportSizeHint(const QTableView* self);
int QTableView_SizeHintForRow(const QTableView* self, int row);
int QTableView_SizeHintForColumn(const QTableView* self, int column);
void QTableView_VerticalScrollbarAction(QTableView* self, int action);
void QTableView_HorizontalScrollbarAction(QTableView* self, int action);
bool QTableView_IsIndexHidden(const QTableView* self, const QModelIndex* index);
void QTableView_SelectionChanged(QTableView* self, const QItemSelection* selected, const QItemSelection* deselected);
void QTableView_CurrentChanged(QTableView* self, const QModelIndex* current, const QModelIndex* previous);
libqt_string QTableView_Tr2(const char* s, const char* c);
libqt_string QTableView_Tr3(const char* s, const char* c, int n);
void QTableView_OnSetModel(QTableView* self, intptr_t slot);
void QTableView_QBaseSetModel(QTableView* self, QAbstractItemModel* model);
void QTableView_OnSetRootIndex(QTableView* self, intptr_t slot);
void QTableView_QBaseSetRootIndex(QTableView* self, const QModelIndex* index);
void QTableView_OnSetSelectionModel(QTableView* self, intptr_t slot);
void QTableView_QBaseSetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel);
void QTableView_OnDoItemsLayout(QTableView* self, intptr_t slot);
void QTableView_QBaseDoItemsLayout(QTableView* self);
void QTableView_OnVisualRect(const QTableView* self, intptr_t slot);
QRect* QTableView_QBaseVisualRect(const QTableView* self, const QModelIndex* index);
void QTableView_OnScrollTo(QTableView* self, intptr_t slot);
void QTableView_QBaseScrollTo(QTableView* self, const QModelIndex* index, int hint);
void QTableView_OnIndexAt(const QTableView* self, intptr_t slot);
QModelIndex* QTableView_QBaseIndexAt(const QTableView* self, const QPoint* p);
void QTableView_OnScrollContentsBy(QTableView* self, intptr_t slot);
void QTableView_QBaseScrollContentsBy(QTableView* self, int dx, int dy);
void QTableView_OnInitViewItemOption(const QTableView* self, intptr_t slot);
void QTableView_QBaseInitViewItemOption(const QTableView* self, QStyleOptionViewItem* option);
void QTableView_OnPaintEvent(QTableView* self, intptr_t slot);
void QTableView_QBasePaintEvent(QTableView* self, QPaintEvent* e);
void QTableView_OnTimerEvent(QTableView* self, intptr_t slot);
void QTableView_QBaseTimerEvent(QTableView* self, QTimerEvent* event);
void QTableView_OnDropEvent(QTableView* self, intptr_t slot);
void QTableView_QBaseDropEvent(QTableView* self, QDropEvent* event);
void QTableView_OnHorizontalOffset(const QTableView* self, intptr_t slot);
int QTableView_QBaseHorizontalOffset(const QTableView* self);
void QTableView_OnVerticalOffset(const QTableView* self, intptr_t slot);
int QTableView_QBaseVerticalOffset(const QTableView* self);
void QTableView_OnMoveCursor(QTableView* self, intptr_t slot);
QModelIndex* QTableView_QBaseMoveCursor(QTableView* self, int cursorAction, int modifiers);
void QTableView_OnSetSelection(QTableView* self, intptr_t slot);
void QTableView_QBaseSetSelection(QTableView* self, const QRect* rect, int command);
void QTableView_OnVisualRegionForSelection(const QTableView* self, intptr_t slot);
QRegion* QTableView_QBaseVisualRegionForSelection(const QTableView* self, const QItemSelection* selection);
void QTableView_OnSelectedIndexes(const QTableView* self, intptr_t slot);
libqt_list QTableView_QBaseSelectedIndexes(const QTableView* self);
void QTableView_OnUpdateGeometries(QTableView* self, intptr_t slot);
void QTableView_QBaseUpdateGeometries(QTableView* self);
void QTableView_OnViewportSizeHint(const QTableView* self, intptr_t slot);
QSize* QTableView_QBaseViewportSizeHint(const QTableView* self);
void QTableView_OnSizeHintForRow(const QTableView* self, intptr_t slot);
int QTableView_QBaseSizeHintForRow(const QTableView* self, int row);
void QTableView_OnSizeHintForColumn(const QTableView* self, intptr_t slot);
int QTableView_QBaseSizeHintForColumn(const QTableView* self, int column);
void QTableView_OnVerticalScrollbarAction(QTableView* self, intptr_t slot);
void QTableView_QBaseVerticalScrollbarAction(QTableView* self, int action);
void QTableView_OnHorizontalScrollbarAction(QTableView* self, intptr_t slot);
void QTableView_QBaseHorizontalScrollbarAction(QTableView* self, int action);
void QTableView_OnIsIndexHidden(const QTableView* self, intptr_t slot);
bool QTableView_QBaseIsIndexHidden(const QTableView* self, const QModelIndex* index);
void QTableView_OnSelectionChanged(QTableView* self, intptr_t slot);
void QTableView_QBaseSelectionChanged(QTableView* self, const QItemSelection* selected, const QItemSelection* deselected);
void QTableView_OnCurrentChanged(QTableView* self, intptr_t slot);
void QTableView_QBaseCurrentChanged(QTableView* self, const QModelIndex* current, const QModelIndex* previous);
void QTableView_RowMoved(QTableView* self, int row, int oldIndex, int newIndex);
void QTableView_OnRowMoved(QTableView* self, intptr_t slot);
void QTableView_QBaseRowMoved(QTableView* self, int row, int oldIndex, int newIndex);
void QTableView_ColumnMoved(QTableView* self, int column, int oldIndex, int newIndex);
void QTableView_OnColumnMoved(QTableView* self, intptr_t slot);
void QTableView_QBaseColumnMoved(QTableView* self, int column, int oldIndex, int newIndex);
void QTableView_RowResized(QTableView* self, int row, int oldHeight, int newHeight);
void QTableView_OnRowResized(QTableView* self, intptr_t slot);
void QTableView_QBaseRowResized(QTableView* self, int row, int oldHeight, int newHeight);
void QTableView_ColumnResized(QTableView* self, int column, int oldWidth, int newWidth);
void QTableView_OnColumnResized(QTableView* self, intptr_t slot);
void QTableView_QBaseColumnResized(QTableView* self, int column, int oldWidth, int newWidth);
void QTableView_RowCountChanged(QTableView* self, int oldCount, int newCount);
void QTableView_OnRowCountChanged(QTableView* self, intptr_t slot);
void QTableView_QBaseRowCountChanged(QTableView* self, int oldCount, int newCount);
void QTableView_ColumnCountChanged(QTableView* self, int oldCount, int newCount);
void QTableView_OnColumnCountChanged(QTableView* self, intptr_t slot);
void QTableView_QBaseColumnCountChanged(QTableView* self, int oldCount, int newCount);
void QTableView_Delete(QTableView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
