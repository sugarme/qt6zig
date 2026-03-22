#pragma once
#ifndef QHEADERVIEW_H_C_LIB
#define QHEADERVIEW_H_C_LIB

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
typedef struct QEvent QEvent;
typedef struct QHeaderView QHeaderView;
typedef struct QItemSelection QItemSelection;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QStyleOptionHeader QStyleOptionHeader;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QHeaderView* QHeaderView_new(int orientation);
QHeaderView* QHeaderView_new2(int orientation, QWidget* parent);
libqt_string QHeaderView_Tr(const char* s);
void QHeaderView_SetModel(QHeaderView* self, QAbstractItemModel* model);
int QHeaderView_Orientation(const QHeaderView* self);
int QHeaderView_Offset(const QHeaderView* self);
int QHeaderView_Length(const QHeaderView* self);
QSize* QHeaderView_SizeHint(const QHeaderView* self);
void QHeaderView_SetVisible(QHeaderView* self, bool v);
int QHeaderView_SectionSizeHint(const QHeaderView* self, int logicalIndex);
int QHeaderView_VisualIndexAt(const QHeaderView* self, int position);
int QHeaderView_LogicalIndexAt(const QHeaderView* self, int position);
int QHeaderView_LogicalIndexAt2(const QHeaderView* self, int x, int y);
int QHeaderView_LogicalIndexAt3(const QHeaderView* self, const QPoint* pos);
int QHeaderView_SectionSize(const QHeaderView* self, int logicalIndex);
int QHeaderView_SectionPosition(const QHeaderView* self, int logicalIndex);
int QHeaderView_SectionViewportPosition(const QHeaderView* self, int logicalIndex);
void QHeaderView_MoveSection(QHeaderView* self, int from, int to);
void QHeaderView_SwapSections(QHeaderView* self, int first, int second);
void QHeaderView_ResizeSection(QHeaderView* self, int logicalIndex, int size);
void QHeaderView_ResizeSections(QHeaderView* self, int mode);
bool QHeaderView_IsSectionHidden(const QHeaderView* self, int logicalIndex);
void QHeaderView_SetSectionHidden(QHeaderView* self, int logicalIndex, bool hide);
int QHeaderView_HiddenSectionCount(const QHeaderView* self);
void QHeaderView_HideSection(QHeaderView* self, int logicalIndex);
void QHeaderView_ShowSection(QHeaderView* self, int logicalIndex);
int QHeaderView_Count(const QHeaderView* self);
int QHeaderView_VisualIndex(const QHeaderView* self, int logicalIndex);
int QHeaderView_LogicalIndex(const QHeaderView* self, int visualIndex);
void QHeaderView_SetSectionsMovable(QHeaderView* self, bool movable);
bool QHeaderView_SectionsMovable(const QHeaderView* self);
void QHeaderView_SetFirstSectionMovable(QHeaderView* self, bool movable);
bool QHeaderView_IsFirstSectionMovable(const QHeaderView* self);
void QHeaderView_SetSectionsClickable(QHeaderView* self, bool clickable);
bool QHeaderView_SectionsClickable(const QHeaderView* self);
void QHeaderView_SetHighlightSections(QHeaderView* self, bool highlight);
bool QHeaderView_HighlightSections(const QHeaderView* self);
int QHeaderView_SectionResizeMode(const QHeaderView* self, int logicalIndex);
void QHeaderView_SetSectionResizeMode(QHeaderView* self, int mode);
void QHeaderView_SetSectionResizeMode2(QHeaderView* self, int logicalIndex, int mode);
void QHeaderView_SetResizeContentsPrecision(QHeaderView* self, int precision);
int QHeaderView_ResizeContentsPrecision(const QHeaderView* self);
int QHeaderView_StretchSectionCount(const QHeaderView* self);
void QHeaderView_SetSortIndicatorShown(QHeaderView* self, bool show);
bool QHeaderView_IsSortIndicatorShown(const QHeaderView* self);
void QHeaderView_SetSortIndicator(QHeaderView* self, int logicalIndex, int order);
int QHeaderView_SortIndicatorSection(const QHeaderView* self);
int QHeaderView_SortIndicatorOrder(const QHeaderView* self);
void QHeaderView_SetSortIndicatorClearable(QHeaderView* self, bool clearable);
bool QHeaderView_IsSortIndicatorClearable(const QHeaderView* self);
bool QHeaderView_StretchLastSection(const QHeaderView* self);
void QHeaderView_SetStretchLastSection(QHeaderView* self, bool stretch);
bool QHeaderView_CascadingSectionResizes(const QHeaderView* self);
void QHeaderView_SetCascadingSectionResizes(QHeaderView* self, bool enable);
int QHeaderView_DefaultSectionSize(const QHeaderView* self);
void QHeaderView_SetDefaultSectionSize(QHeaderView* self, int size);
void QHeaderView_ResetDefaultSectionSize(QHeaderView* self);
int QHeaderView_MinimumSectionSize(const QHeaderView* self);
void QHeaderView_SetMinimumSectionSize(QHeaderView* self, int size);
int QHeaderView_MaximumSectionSize(const QHeaderView* self);
void QHeaderView_SetMaximumSectionSize(QHeaderView* self, int size);
int QHeaderView_DefaultAlignment(const QHeaderView* self);
void QHeaderView_SetDefaultAlignment(QHeaderView* self, int alignment);
void QHeaderView_DoItemsLayout(QHeaderView* self);
bool QHeaderView_SectionsMoved(const QHeaderView* self);
bool QHeaderView_SectionsHidden(const QHeaderView* self);
libqt_string QHeaderView_SaveState(const QHeaderView* self);
bool QHeaderView_RestoreState(QHeaderView* self, const libqt_string state);
void QHeaderView_Reset(QHeaderView* self);
void QHeaderView_SetOffset(QHeaderView* self, int offset);
void QHeaderView_SetOffsetToSectionPosition(QHeaderView* self, int visualIndex);
void QHeaderView_SetOffsetToLastSection(QHeaderView* self);
void QHeaderView_HeaderDataChanged(QHeaderView* self, int orientation, int logicalFirst, int logicalLast);
void QHeaderView_SectionMoved(QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex);
void QHeaderView_Connect_SectionMoved(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionResized(QHeaderView* self, int logicalIndex, int oldSize, int newSize);
void QHeaderView_Connect_SectionResized(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionPressed(QHeaderView* self, int logicalIndex);
void QHeaderView_Connect_SectionPressed(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_Connect_SectionClicked(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionEntered(QHeaderView* self, int logicalIndex);
void QHeaderView_Connect_SectionEntered(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionDoubleClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_Connect_SectionDoubleClicked(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionCountChanged(QHeaderView* self, int oldCount, int newCount);
void QHeaderView_Connect_SectionCountChanged(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionHandleDoubleClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_Connect_SectionHandleDoubleClicked(QHeaderView* self, intptr_t slot);
void QHeaderView_GeometriesChanged(QHeaderView* self);
void QHeaderView_Connect_GeometriesChanged(QHeaderView* self, intptr_t slot);
void QHeaderView_SortIndicatorChanged(QHeaderView* self, int logicalIndex, int order);
void QHeaderView_Connect_SortIndicatorChanged(QHeaderView* self, intptr_t slot);
void QHeaderView_SortIndicatorClearableChanged(QHeaderView* self, bool clearable);
void QHeaderView_Connect_SortIndicatorClearableChanged(QHeaderView* self, intptr_t slot);
void QHeaderView_CurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old);
bool QHeaderView_Event(QHeaderView* self, QEvent* e);
void QHeaderView_PaintEvent(QHeaderView* self, QPaintEvent* e);
void QHeaderView_MousePressEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_MouseMoveEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_MouseReleaseEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_MouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e);
bool QHeaderView_ViewportEvent(QHeaderView* self, QEvent* e);
void QHeaderView_PaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex);
QSize* QHeaderView_SectionSizeFromContents(const QHeaderView* self, int logicalIndex);
int QHeaderView_HorizontalOffset(const QHeaderView* self);
int QHeaderView_VerticalOffset(const QHeaderView* self);
void QHeaderView_UpdateGeometries(QHeaderView* self);
void QHeaderView_ScrollContentsBy(QHeaderView* self, int dx, int dy);
void QHeaderView_DataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
void QHeaderView_RowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end);
QRect* QHeaderView_VisualRect(const QHeaderView* self, const QModelIndex* index);
void QHeaderView_ScrollTo(QHeaderView* self, const QModelIndex* index, int hint);
QModelIndex* QHeaderView_IndexAt(const QHeaderView* self, const QPoint* p);
bool QHeaderView_IsIndexHidden(const QHeaderView* self, const QModelIndex* index);
QModelIndex* QHeaderView_MoveCursor(QHeaderView* self, int param1, int param2);
void QHeaderView_SetSelection(QHeaderView* self, const QRect* rect, int flags);
QRegion* QHeaderView_VisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection);
void QHeaderView_InitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex);
void QHeaderView_InitStyleOption(const QHeaderView* self, QStyleOptionHeader* option);
libqt_string QHeaderView_Tr2(const char* s, const char* c);
libqt_string QHeaderView_Tr3(const char* s, const char* c, int n);
void QHeaderView_OnSetModel(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseSetModel(QHeaderView* self, QAbstractItemModel* model);
void QHeaderView_OnSizeHint(const QHeaderView* self, intptr_t slot);
QSize* QHeaderView_QBaseSizeHint(const QHeaderView* self);
void QHeaderView_OnSetVisible(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseSetVisible(QHeaderView* self, bool v);
void QHeaderView_OnDoItemsLayout(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseDoItemsLayout(QHeaderView* self);
void QHeaderView_OnReset(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseReset(QHeaderView* self);
void QHeaderView_OnCurrentChanged(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseCurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old);
void QHeaderView_OnEvent(QHeaderView* self, intptr_t slot);
bool QHeaderView_QBaseEvent(QHeaderView* self, QEvent* e);
void QHeaderView_OnPaintEvent(QHeaderView* self, intptr_t slot);
void QHeaderView_QBasePaintEvent(QHeaderView* self, QPaintEvent* e);
void QHeaderView_OnMousePressEvent(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseMousePressEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_OnMouseMoveEvent(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseMouseMoveEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_OnMouseReleaseEvent(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseMouseReleaseEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_OnMouseDoubleClickEvent(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseMouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_OnViewportEvent(QHeaderView* self, intptr_t slot);
bool QHeaderView_QBaseViewportEvent(QHeaderView* self, QEvent* e);
void QHeaderView_OnPaintSection(const QHeaderView* self, intptr_t slot);
void QHeaderView_QBasePaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex);
void QHeaderView_OnSectionSizeFromContents(const QHeaderView* self, intptr_t slot);
QSize* QHeaderView_QBaseSectionSizeFromContents(const QHeaderView* self, int logicalIndex);
void QHeaderView_OnHorizontalOffset(const QHeaderView* self, intptr_t slot);
int QHeaderView_QBaseHorizontalOffset(const QHeaderView* self);
void QHeaderView_OnVerticalOffset(const QHeaderView* self, intptr_t slot);
int QHeaderView_QBaseVerticalOffset(const QHeaderView* self);
void QHeaderView_OnUpdateGeometries(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseUpdateGeometries(QHeaderView* self);
void QHeaderView_OnScrollContentsBy(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseScrollContentsBy(QHeaderView* self, int dx, int dy);
void QHeaderView_OnDataChanged(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseDataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
void QHeaderView_OnRowsInserted(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseRowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end);
void QHeaderView_OnVisualRect(const QHeaderView* self, intptr_t slot);
QRect* QHeaderView_QBaseVisualRect(const QHeaderView* self, const QModelIndex* index);
void QHeaderView_OnScrollTo(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseScrollTo(QHeaderView* self, const QModelIndex* index, int hint);
void QHeaderView_OnIndexAt(const QHeaderView* self, intptr_t slot);
QModelIndex* QHeaderView_QBaseIndexAt(const QHeaderView* self, const QPoint* p);
void QHeaderView_OnIsIndexHidden(const QHeaderView* self, intptr_t slot);
bool QHeaderView_QBaseIsIndexHidden(const QHeaderView* self, const QModelIndex* index);
void QHeaderView_OnMoveCursor(QHeaderView* self, intptr_t slot);
QModelIndex* QHeaderView_QBaseMoveCursor(QHeaderView* self, int param1, int param2);
void QHeaderView_OnSetSelection(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseSetSelection(QHeaderView* self, const QRect* rect, int flags);
void QHeaderView_OnVisualRegionForSelection(const QHeaderView* self, intptr_t slot);
QRegion* QHeaderView_QBaseVisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection);
void QHeaderView_OnInitStyleOptionForIndex(const QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseInitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex);
void QHeaderView_OnInitStyleOption(const QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseInitStyleOption(const QHeaderView* self, QStyleOptionHeader* option);
void QHeaderView_UpdateSection(QHeaderView* self, int logicalIndex);
void QHeaderView_OnUpdateSection(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseUpdateSection(QHeaderView* self, int logicalIndex);
void QHeaderView_ResizeSections2(QHeaderView* self);
void QHeaderView_OnResizeSections2(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseResizeSections2(QHeaderView* self);
void QHeaderView_SectionsInserted(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
void QHeaderView_OnSectionsInserted(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseSectionsInserted(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
void QHeaderView_SectionsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
void QHeaderView_OnSectionsAboutToBeRemoved(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseSectionsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
void QHeaderView_Initialize(QHeaderView* self);
void QHeaderView_OnInitialize(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseInitialize(QHeaderView* self);
void QHeaderView_InitializeSections(QHeaderView* self);
void QHeaderView_OnInitializeSections(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseInitializeSections(QHeaderView* self);
void QHeaderView_InitializeSections2(QHeaderView* self, int start, int end);
void QHeaderView_OnInitializeSections2(QHeaderView* self, intptr_t slot);
void QHeaderView_QBaseInitializeSections2(QHeaderView* self, int start, int end);
void QHeaderView_Delete(QHeaderView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
