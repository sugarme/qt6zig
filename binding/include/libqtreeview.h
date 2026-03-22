#pragma once
#ifndef QTREEVIEW_H_C_LIB
#define QTREEVIEW_H_C_LIB

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
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QEvent QEvent;
typedef struct QHeaderView QHeaderView;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTreeView QTreeView;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTreeView* QTreeView_new(QWidget* parent);
QTreeView* QTreeView_new2();
libqt_string QTreeView_Tr(const char* s);
void QTreeView_SetModel(QTreeView* self, QAbstractItemModel* model);
void QTreeView_SetRootIndex(QTreeView* self, const QModelIndex* index);
void QTreeView_SetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel);
QHeaderView* QTreeView_Header(const QTreeView* self);
void QTreeView_SetHeader(QTreeView* self, QHeaderView* header);
int QTreeView_AutoExpandDelay(const QTreeView* self);
void QTreeView_SetAutoExpandDelay(QTreeView* self, int delay);
int QTreeView_Indentation(const QTreeView* self);
void QTreeView_SetIndentation(QTreeView* self, int i);
void QTreeView_ResetIndentation(QTreeView* self);
bool QTreeView_RootIsDecorated(const QTreeView* self);
void QTreeView_SetRootIsDecorated(QTreeView* self, bool show);
bool QTreeView_UniformRowHeights(const QTreeView* self);
void QTreeView_SetUniformRowHeights(QTreeView* self, bool uniform);
bool QTreeView_ItemsExpandable(const QTreeView* self);
void QTreeView_SetItemsExpandable(QTreeView* self, bool enable);
bool QTreeView_ExpandsOnDoubleClick(const QTreeView* self);
void QTreeView_SetExpandsOnDoubleClick(QTreeView* self, bool enable);
int QTreeView_ColumnViewportPosition(const QTreeView* self, int column);
int QTreeView_ColumnWidth(const QTreeView* self, int column);
void QTreeView_SetColumnWidth(QTreeView* self, int column, int width);
int QTreeView_ColumnAt(const QTreeView* self, int x);
bool QTreeView_IsColumnHidden(const QTreeView* self, int column);
void QTreeView_SetColumnHidden(QTreeView* self, int column, bool hide);
bool QTreeView_IsHeaderHidden(const QTreeView* self);
void QTreeView_SetHeaderHidden(QTreeView* self, bool hide);
bool QTreeView_IsRowHidden(const QTreeView* self, int row, const QModelIndex* parent);
void QTreeView_SetRowHidden(QTreeView* self, int row, const QModelIndex* parent, bool hide);
bool QTreeView_IsFirstColumnSpanned(const QTreeView* self, int row, const QModelIndex* parent);
void QTreeView_SetFirstColumnSpanned(QTreeView* self, int row, const QModelIndex* parent, bool span);
bool QTreeView_IsExpanded(const QTreeView* self, const QModelIndex* index);
void QTreeView_SetExpanded(QTreeView* self, const QModelIndex* index, bool expand);
void QTreeView_SetSortingEnabled(QTreeView* self, bool enable);
bool QTreeView_IsSortingEnabled(const QTreeView* self);
void QTreeView_SetAnimated(QTreeView* self, bool enable);
bool QTreeView_IsAnimated(const QTreeView* self);
void QTreeView_SetAllColumnsShowFocus(QTreeView* self, bool enable);
bool QTreeView_AllColumnsShowFocus(const QTreeView* self);
void QTreeView_SetWordWrap(QTreeView* self, bool on);
bool QTreeView_WordWrap(const QTreeView* self);
void QTreeView_SetTreePosition(QTreeView* self, int logicalIndex);
int QTreeView_TreePosition(const QTreeView* self);
void QTreeView_KeyboardSearch(QTreeView* self, const libqt_string search);
QRect* QTreeView_VisualRect(const QTreeView* self, const QModelIndex* index);
void QTreeView_ScrollTo(QTreeView* self, const QModelIndex* index, int hint);
QModelIndex* QTreeView_IndexAt(const QTreeView* self, const QPoint* p);
QModelIndex* QTreeView_IndexAbove(const QTreeView* self, const QModelIndex* index);
QModelIndex* QTreeView_IndexBelow(const QTreeView* self, const QModelIndex* index);
void QTreeView_DoItemsLayout(QTreeView* self);
void QTreeView_Reset(QTreeView* self);
void QTreeView_DataChanged(QTreeView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
void QTreeView_SelectAll(QTreeView* self);
void QTreeView_Expanded(QTreeView* self, const QModelIndex* index);
void QTreeView_Connect_Expanded(QTreeView* self, intptr_t slot);
void QTreeView_Collapsed(QTreeView* self, const QModelIndex* index);
void QTreeView_Connect_Collapsed(QTreeView* self, intptr_t slot);
void QTreeView_HideColumn(QTreeView* self, int column);
void QTreeView_ShowColumn(QTreeView* self, int column);
void QTreeView_Expand(QTreeView* self, const QModelIndex* index);
void QTreeView_Collapse(QTreeView* self, const QModelIndex* index);
void QTreeView_ResizeColumnToContents(QTreeView* self, int column);
void QTreeView_SortByColumn(QTreeView* self, int column, int order);
void QTreeView_ExpandAll(QTreeView* self);
void QTreeView_ExpandRecursively(QTreeView* self, const QModelIndex* index);
void QTreeView_CollapseAll(QTreeView* self);
void QTreeView_ExpandToDepth(QTreeView* self, int depth);
void QTreeView_VerticalScrollbarValueChanged(QTreeView* self, int value);
void QTreeView_ScrollContentsBy(QTreeView* self, int dx, int dy);
void QTreeView_RowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end);
void QTreeView_RowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end);
QModelIndex* QTreeView_MoveCursor(QTreeView* self, int cursorAction, int modifiers);
int QTreeView_HorizontalOffset(const QTreeView* self);
int QTreeView_VerticalOffset(const QTreeView* self);
void QTreeView_SetSelection(QTreeView* self, const QRect* rect, int command);
QRegion* QTreeView_VisualRegionForSelection(const QTreeView* self, const QItemSelection* selection);
libqt_list QTreeView_SelectedIndexes(const QTreeView* self);
void QTreeView_ChangeEvent(QTreeView* self, QEvent* event);
void QTreeView_TimerEvent(QTreeView* self, QTimerEvent* event);
void QTreeView_PaintEvent(QTreeView* self, QPaintEvent* event);
void QTreeView_DrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index);
void QTreeView_DrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index);
void QTreeView_MousePressEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_MouseReleaseEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_MouseDoubleClickEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_MouseMoveEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_KeyPressEvent(QTreeView* self, QKeyEvent* event);
void QTreeView_DragMoveEvent(QTreeView* self, QDragMoveEvent* event);
bool QTreeView_ViewportEvent(QTreeView* self, QEvent* event);
void QTreeView_UpdateGeometries(QTreeView* self);
QSize* QTreeView_ViewportSizeHint(const QTreeView* self);
int QTreeView_SizeHintForColumn(const QTreeView* self, int column);
void QTreeView_HorizontalScrollbarAction(QTreeView* self, int action);
bool QTreeView_IsIndexHidden(const QTreeView* self, const QModelIndex* index);
void QTreeView_SelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected);
void QTreeView_CurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous);
libqt_string QTreeView_Tr2(const char* s, const char* c);
libqt_string QTreeView_Tr3(const char* s, const char* c, int n);
void QTreeView_ExpandRecursively2(QTreeView* self, const QModelIndex* index, int depth);
void QTreeView_OnSetModel(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetModel(QTreeView* self, QAbstractItemModel* model);
void QTreeView_OnSetRootIndex(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetRootIndex(QTreeView* self, const QModelIndex* index);
void QTreeView_OnSetSelectionModel(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel);
void QTreeView_OnKeyboardSearch(QTreeView* self, intptr_t slot);
void QTreeView_QBaseKeyboardSearch(QTreeView* self, const libqt_string search);
void QTreeView_OnVisualRect(const QTreeView* self, intptr_t slot);
QRect* QTreeView_QBaseVisualRect(const QTreeView* self, const QModelIndex* index);
void QTreeView_OnScrollTo(QTreeView* self, intptr_t slot);
void QTreeView_QBaseScrollTo(QTreeView* self, const QModelIndex* index, int hint);
void QTreeView_OnIndexAt(const QTreeView* self, intptr_t slot);
QModelIndex* QTreeView_QBaseIndexAt(const QTreeView* self, const QPoint* p);
void QTreeView_OnDoItemsLayout(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDoItemsLayout(QTreeView* self);
void QTreeView_OnReset(QTreeView* self, intptr_t slot);
void QTreeView_QBaseReset(QTreeView* self);
void QTreeView_OnDataChanged(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDataChanged(QTreeView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
void QTreeView_OnSelectAll(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSelectAll(QTreeView* self);
void QTreeView_OnVerticalScrollbarValueChanged(QTreeView* self, intptr_t slot);
void QTreeView_QBaseVerticalScrollbarValueChanged(QTreeView* self, int value);
void QTreeView_OnScrollContentsBy(QTreeView* self, intptr_t slot);
void QTreeView_QBaseScrollContentsBy(QTreeView* self, int dx, int dy);
void QTreeView_OnRowsInserted(QTreeView* self, intptr_t slot);
void QTreeView_QBaseRowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end);
void QTreeView_OnRowsAboutToBeRemoved(QTreeView* self, intptr_t slot);
void QTreeView_QBaseRowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end);
void QTreeView_OnMoveCursor(QTreeView* self, intptr_t slot);
QModelIndex* QTreeView_QBaseMoveCursor(QTreeView* self, int cursorAction, int modifiers);
void QTreeView_OnHorizontalOffset(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseHorizontalOffset(const QTreeView* self);
void QTreeView_OnVerticalOffset(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseVerticalOffset(const QTreeView* self);
void QTreeView_OnSetSelection(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetSelection(QTreeView* self, const QRect* rect, int command);
void QTreeView_OnVisualRegionForSelection(const QTreeView* self, intptr_t slot);
QRegion* QTreeView_QBaseVisualRegionForSelection(const QTreeView* self, const QItemSelection* selection);
void QTreeView_OnSelectedIndexes(const QTreeView* self, intptr_t slot);
libqt_list QTreeView_QBaseSelectedIndexes(const QTreeView* self);
void QTreeView_OnChangeEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseChangeEvent(QTreeView* self, QEvent* event);
void QTreeView_OnTimerEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseTimerEvent(QTreeView* self, QTimerEvent* event);
void QTreeView_OnPaintEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBasePaintEvent(QTreeView* self, QPaintEvent* event);
void QTreeView_OnDrawRow(const QTreeView* self, intptr_t slot);
void QTreeView_QBaseDrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index);
void QTreeView_OnDrawBranches(const QTreeView* self, intptr_t slot);
void QTreeView_QBaseDrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index);
void QTreeView_OnMousePressEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseMousePressEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_OnMouseReleaseEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseMouseReleaseEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_OnMouseDoubleClickEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseMouseDoubleClickEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_OnMouseMoveEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseMouseMoveEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_OnKeyPressEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseKeyPressEvent(QTreeView* self, QKeyEvent* event);
void QTreeView_OnDragMoveEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDragMoveEvent(QTreeView* self, QDragMoveEvent* event);
void QTreeView_OnViewportEvent(QTreeView* self, intptr_t slot);
bool QTreeView_QBaseViewportEvent(QTreeView* self, QEvent* event);
void QTreeView_OnUpdateGeometries(QTreeView* self, intptr_t slot);
void QTreeView_QBaseUpdateGeometries(QTreeView* self);
void QTreeView_OnViewportSizeHint(const QTreeView* self, intptr_t slot);
QSize* QTreeView_QBaseViewportSizeHint(const QTreeView* self);
void QTreeView_OnSizeHintForColumn(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseSizeHintForColumn(const QTreeView* self, int column);
void QTreeView_OnHorizontalScrollbarAction(QTreeView* self, intptr_t slot);
void QTreeView_QBaseHorizontalScrollbarAction(QTreeView* self, int action);
void QTreeView_OnIsIndexHidden(const QTreeView* self, intptr_t slot);
bool QTreeView_QBaseIsIndexHidden(const QTreeView* self, const QModelIndex* index);
void QTreeView_OnSelectionChanged(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected);
void QTreeView_OnCurrentChanged(QTreeView* self, intptr_t slot);
void QTreeView_QBaseCurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous);
void QTreeView_ColumnResized(QTreeView* self, int column, int oldSize, int newSize);
void QTreeView_OnColumnResized(QTreeView* self, intptr_t slot);
void QTreeView_QBaseColumnResized(QTreeView* self, int column, int oldSize, int newSize);
void QTreeView_ColumnCountChanged(QTreeView* self, int oldCount, int newCount);
void QTreeView_OnColumnCountChanged(QTreeView* self, intptr_t slot);
void QTreeView_QBaseColumnCountChanged(QTreeView* self, int oldCount, int newCount);
void QTreeView_ColumnMoved(QTreeView* self);
void QTreeView_OnColumnMoved(QTreeView* self, intptr_t slot);
void QTreeView_QBaseColumnMoved(QTreeView* self);
void QTreeView_Reexpand(QTreeView* self);
void QTreeView_OnReexpand(QTreeView* self, intptr_t slot);
void QTreeView_QBaseReexpand(QTreeView* self);
void QTreeView_RowsRemoved(QTreeView* self, const QModelIndex* parent, int first, int last);
void QTreeView_OnRowsRemoved(QTreeView* self, intptr_t slot);
void QTreeView_QBaseRowsRemoved(QTreeView* self, const QModelIndex* parent, int first, int last);
void QTreeView_DrawTree(const QTreeView* self, QPainter* painter, const QRegion* region);
void QTreeView_OnDrawTree(const QTreeView* self, intptr_t slot);
void QTreeView_QBaseDrawTree(const QTreeView* self, QPainter* painter, const QRegion* region);
int QTreeView_IndexRowSizeHint(const QTreeView* self, const QModelIndex* index);
void QTreeView_OnIndexRowSizeHint(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseIndexRowSizeHint(const QTreeView* self, const QModelIndex* index);
int QTreeView_RowHeight(const QTreeView* self, const QModelIndex* index);
void QTreeView_OnRowHeight(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseRowHeight(const QTreeView* self, const QModelIndex* index);
void QTreeView_Delete(QTreeView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
