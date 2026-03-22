#pragma once
#ifndef QLISTVIEW_H_C_LIB
#define QLISTVIEW_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QListView QListView;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QListView* QListView_new(QWidget* parent);
QListView* QListView_new2();
libqt_string QListView_Tr(const char* s);
void QListView_SetMovement(QListView* self, int movement);
int QListView_Movement(const QListView* self);
void QListView_SetFlow(QListView* self, int flow);
int QListView_Flow(const QListView* self);
void QListView_SetWrapping(QListView* self, bool enable);
bool QListView_IsWrapping(const QListView* self);
void QListView_SetResizeMode(QListView* self, int mode);
int QListView_ResizeMode(const QListView* self);
void QListView_SetLayoutMode(QListView* self, int mode);
int QListView_LayoutMode(const QListView* self);
void QListView_SetSpacing(QListView* self, int space);
int QListView_Spacing(const QListView* self);
void QListView_SetBatchSize(QListView* self, int batchSize);
int QListView_BatchSize(const QListView* self);
void QListView_SetGridSize(QListView* self, const QSize* size);
QSize* QListView_GridSize(const QListView* self);
void QListView_SetViewMode(QListView* self, int mode);
int QListView_ViewMode(const QListView* self);
void QListView_ClearPropertyFlags(QListView* self);
bool QListView_IsRowHidden(const QListView* self, int row);
void QListView_SetRowHidden(QListView* self, int row, bool hide);
void QListView_SetModelColumn(QListView* self, int column);
int QListView_ModelColumn(const QListView* self);
void QListView_SetUniformItemSizes(QListView* self, bool enable);
bool QListView_UniformItemSizes(const QListView* self);
void QListView_SetWordWrap(QListView* self, bool on);
bool QListView_WordWrap(const QListView* self);
void QListView_SetSelectionRectVisible(QListView* self, bool show);
bool QListView_IsSelectionRectVisible(const QListView* self);
void QListView_SetItemAlignment(QListView* self, int alignment);
int QListView_ItemAlignment(const QListView* self);
QRect* QListView_VisualRect(const QListView* self, const QModelIndex* index);
void QListView_ScrollTo(QListView* self, const QModelIndex* index, int hint);
QModelIndex* QListView_IndexAt(const QListView* self, const QPoint* p);
void QListView_DoItemsLayout(QListView* self);
void QListView_Reset(QListView* self);
void QListView_SetRootIndex(QListView* self, const QModelIndex* index);
void QListView_IndexesMoved(QListView* self, const libqt_list indexes);
void QListView_Connect_IndexesMoved(QListView* self, intptr_t slot);
bool QListView_Event(QListView* self, QEvent* e);
void QListView_ScrollContentsBy(QListView* self, int dx, int dy);
void QListView_DataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
void QListView_RowsInserted(QListView* self, const QModelIndex* parent, int start, int end);
void QListView_RowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end);
void QListView_MouseMoveEvent(QListView* self, QMouseEvent* e);
void QListView_MouseReleaseEvent(QListView* self, QMouseEvent* e);
void QListView_WheelEvent(QListView* self, QWheelEvent* e);
void QListView_TimerEvent(QListView* self, QTimerEvent* e);
void QListView_ResizeEvent(QListView* self, QResizeEvent* e);
void QListView_DragMoveEvent(QListView* self, QDragMoveEvent* e);
void QListView_DragLeaveEvent(QListView* self, QDragLeaveEvent* e);
void QListView_DropEvent(QListView* self, QDropEvent* e);
void QListView_StartDrag(QListView* self, int supportedActions);
void QListView_InitViewItemOption(const QListView* self, QStyleOptionViewItem* option);
void QListView_PaintEvent(QListView* self, QPaintEvent* e);
int QListView_HorizontalOffset(const QListView* self);
int QListView_VerticalOffset(const QListView* self);
QModelIndex* QListView_MoveCursor(QListView* self, int cursorAction, int modifiers);
void QListView_SetSelection(QListView* self, const QRect* rect, int command);
QRegion* QListView_VisualRegionForSelection(const QListView* self, const QItemSelection* selection);
libqt_list QListView_SelectedIndexes(const QListView* self);
void QListView_UpdateGeometries(QListView* self);
bool QListView_IsIndexHidden(const QListView* self, const QModelIndex* index);
void QListView_SelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected);
void QListView_CurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous);
QSize* QListView_ViewportSizeHint(const QListView* self);
libqt_string QListView_Tr2(const char* s, const char* c);
libqt_string QListView_Tr3(const char* s, const char* c, int n);
void QListView_OnVisualRect(const QListView* self, intptr_t slot);
QRect* QListView_QBaseVisualRect(const QListView* self, const QModelIndex* index);
void QListView_OnScrollTo(QListView* self, intptr_t slot);
void QListView_QBaseScrollTo(QListView* self, const QModelIndex* index, int hint);
void QListView_OnIndexAt(const QListView* self, intptr_t slot);
QModelIndex* QListView_QBaseIndexAt(const QListView* self, const QPoint* p);
void QListView_OnDoItemsLayout(QListView* self, intptr_t slot);
void QListView_QBaseDoItemsLayout(QListView* self);
void QListView_OnReset(QListView* self, intptr_t slot);
void QListView_QBaseReset(QListView* self);
void QListView_OnSetRootIndex(QListView* self, intptr_t slot);
void QListView_QBaseSetRootIndex(QListView* self, const QModelIndex* index);
void QListView_OnEvent(QListView* self, intptr_t slot);
bool QListView_QBaseEvent(QListView* self, QEvent* e);
void QListView_OnScrollContentsBy(QListView* self, intptr_t slot);
void QListView_QBaseScrollContentsBy(QListView* self, int dx, int dy);
void QListView_OnDataChanged(QListView* self, intptr_t slot);
void QListView_QBaseDataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
void QListView_OnRowsInserted(QListView* self, intptr_t slot);
void QListView_QBaseRowsInserted(QListView* self, const QModelIndex* parent, int start, int end);
void QListView_OnRowsAboutToBeRemoved(QListView* self, intptr_t slot);
void QListView_QBaseRowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end);
void QListView_OnMouseMoveEvent(QListView* self, intptr_t slot);
void QListView_QBaseMouseMoveEvent(QListView* self, QMouseEvent* e);
void QListView_OnMouseReleaseEvent(QListView* self, intptr_t slot);
void QListView_QBaseMouseReleaseEvent(QListView* self, QMouseEvent* e);
void QListView_OnWheelEvent(QListView* self, intptr_t slot);
void QListView_QBaseWheelEvent(QListView* self, QWheelEvent* e);
void QListView_OnTimerEvent(QListView* self, intptr_t slot);
void QListView_QBaseTimerEvent(QListView* self, QTimerEvent* e);
void QListView_OnResizeEvent(QListView* self, intptr_t slot);
void QListView_QBaseResizeEvent(QListView* self, QResizeEvent* e);
void QListView_OnDragMoveEvent(QListView* self, intptr_t slot);
void QListView_QBaseDragMoveEvent(QListView* self, QDragMoveEvent* e);
void QListView_OnDragLeaveEvent(QListView* self, intptr_t slot);
void QListView_QBaseDragLeaveEvent(QListView* self, QDragLeaveEvent* e);
void QListView_OnDropEvent(QListView* self, intptr_t slot);
void QListView_QBaseDropEvent(QListView* self, QDropEvent* e);
void QListView_OnStartDrag(QListView* self, intptr_t slot);
void QListView_QBaseStartDrag(QListView* self, int supportedActions);
void QListView_OnInitViewItemOption(const QListView* self, intptr_t slot);
void QListView_QBaseInitViewItemOption(const QListView* self, QStyleOptionViewItem* option);
void QListView_OnPaintEvent(QListView* self, intptr_t slot);
void QListView_QBasePaintEvent(QListView* self, QPaintEvent* e);
void QListView_OnHorizontalOffset(const QListView* self, intptr_t slot);
int QListView_QBaseHorizontalOffset(const QListView* self);
void QListView_OnVerticalOffset(const QListView* self, intptr_t slot);
int QListView_QBaseVerticalOffset(const QListView* self);
void QListView_OnMoveCursor(QListView* self, intptr_t slot);
QModelIndex* QListView_QBaseMoveCursor(QListView* self, int cursorAction, int modifiers);
void QListView_OnSetSelection(QListView* self, intptr_t slot);
void QListView_QBaseSetSelection(QListView* self, const QRect* rect, int command);
void QListView_OnVisualRegionForSelection(const QListView* self, intptr_t slot);
QRegion* QListView_QBaseVisualRegionForSelection(const QListView* self, const QItemSelection* selection);
void QListView_OnSelectedIndexes(const QListView* self, intptr_t slot);
libqt_list QListView_QBaseSelectedIndexes(const QListView* self);
void QListView_OnUpdateGeometries(QListView* self, intptr_t slot);
void QListView_QBaseUpdateGeometries(QListView* self);
void QListView_OnIsIndexHidden(const QListView* self, intptr_t slot);
bool QListView_QBaseIsIndexHidden(const QListView* self, const QModelIndex* index);
void QListView_OnSelectionChanged(QListView* self, intptr_t slot);
void QListView_QBaseSelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected);
void QListView_OnCurrentChanged(QListView* self, intptr_t slot);
void QListView_QBaseCurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous);
void QListView_OnViewportSizeHint(const QListView* self, intptr_t slot);
QSize* QListView_QBaseViewportSizeHint(const QListView* self);
void QListView_ResizeContents(QListView* self, int width, int height);
void QListView_OnResizeContents(QListView* self, intptr_t slot);
void QListView_QBaseResizeContents(QListView* self, int width, int height);
QSize* QListView_ContentsSize(const QListView* self);
void QListView_OnContentsSize(const QListView* self, intptr_t slot);
QSize* QListView_QBaseContentsSize(const QListView* self);
QRect* QListView_RectForIndex(const QListView* self, const QModelIndex* index);
void QListView_OnRectForIndex(const QListView* self, intptr_t slot);
QRect* QListView_QBaseRectForIndex(const QListView* self, const QModelIndex* index);
void QListView_SetPositionForIndex(QListView* self, const QPoint* position, const QModelIndex* index);
void QListView_OnSetPositionForIndex(QListView* self, intptr_t slot);
void QListView_QBaseSetPositionForIndex(QListView* self, const QPoint* position, const QModelIndex* index);
void QListView_Delete(QListView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
