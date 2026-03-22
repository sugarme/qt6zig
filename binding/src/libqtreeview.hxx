#pragma once
#ifndef QTREEVIEW_H_C_LIBVIRTUAL
#define QTREEVIEW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTreeView so that we can call protected methods
class VirtualQTreeView final : public QTreeView {

public:
	// Virtual class boolean flag
	bool isVirtualQTreeView= true;

	// Virtual class public types (including callbacks)
	using QTreeView_SetModel_Callback = void (*)(QTreeView*, QAbstractItemModel*);
	using QTreeView_SetRootIndex_Callback = void (*)(QTreeView*, const QModelIndex*);
	using QTreeView_SetSelectionModel_Callback = void (*)(QTreeView*, QItemSelectionModel*);
	using QTreeView_KeyboardSearch_Callback = void (*)(QTreeView*, libqt_string);
	using QTreeView_VisualRect_Callback = QRect* (*)(const QTreeView*, const QModelIndex*);
	using QTreeView_ScrollTo_Callback = void (*)(QTreeView*, const QModelIndex*, int);
	using QTreeView_IndexAt_Callback = QModelIndex* (*)(const QTreeView*, const QPoint*);
	using QTreeView_DoItemsLayout_Callback = void (*)();
	using QTreeView_Reset_Callback = void (*)();
	using QTreeView_DataChanged_Callback = void (*)(QTreeView*, const QModelIndex*, const QModelIndex*, libqt_list);
	using QTreeView_SelectAll_Callback = void (*)();
	using QTreeView_VerticalScrollbarValueChanged_Callback = void (*)(QTreeView*, int);
	using QTreeView_ScrollContentsBy_Callback = void (*)(QTreeView*, int, int);
	using QTreeView_RowsInserted_Callback = void (*)(QTreeView*, const QModelIndex*, int, int);
	using QTreeView_RowsAboutToBeRemoved_Callback = void (*)(QTreeView*, const QModelIndex*, int, int);
	using QTreeView_MoveCursor_Callback = QModelIndex* (*)(QTreeView*, int, int);
	using QTreeView_HorizontalOffset_Callback = int (*)();
	using QTreeView_VerticalOffset_Callback = int (*)();
	using QTreeView_SetSelection_Callback = void (*)(QTreeView*, const QRect*, int);
	using QTreeView_VisualRegionForSelection_Callback = QRegion* (*)(const QTreeView*, const QItemSelection*);
	using QTreeView_SelectedIndexes_Callback = libqt_list (*)();
	using QTreeView_ChangeEvent_Callback = void (*)(QTreeView*, QEvent*);
	using QTreeView_TimerEvent_Callback = void (*)(QTreeView*, QTimerEvent*);
	using QTreeView_PaintEvent_Callback = void (*)(QTreeView*, QPaintEvent*);
	using QTreeView_DrawRow_Callback = void (*)(const QTreeView*, QPainter*, const QStyleOptionViewItem*, const QModelIndex*);
	using QTreeView_DrawBranches_Callback = void (*)(const QTreeView*, QPainter*, const QRect*, const QModelIndex*);
	using QTreeView_MousePressEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
	using QTreeView_MouseReleaseEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
	using QTreeView_MouseDoubleClickEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
	using QTreeView_MouseMoveEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
	using QTreeView_KeyPressEvent_Callback = void (*)(QTreeView*, QKeyEvent*);
	using QTreeView_DragMoveEvent_Callback = void (*)(QTreeView*, QDragMoveEvent*);
	using QTreeView_ViewportEvent_Callback = bool (*)(QTreeView*, QEvent*);
	using QTreeView_UpdateGeometries_Callback = void (*)();
	using QTreeView_ViewportSizeHint_Callback = QSize* (*)();
	using QTreeView_SizeHintForColumn_Callback = int (*)(const QTreeView*, int);
	using QTreeView_HorizontalScrollbarAction_Callback = void (*)(QTreeView*, int);
	using QTreeView_IsIndexHidden_Callback = bool (*)(const QTreeView*, const QModelIndex*);
	using QTreeView_SelectionChanged_Callback = void (*)(QTreeView*, const QItemSelection*, const QItemSelection*);
	using QTreeView_CurrentChanged_Callback = void (*)(QTreeView*, const QModelIndex*, const QModelIndex*);
	using QTreeView_ColumnResized_Callback = void (*)(QTreeView*, int, int, int);
	using QTreeView_ColumnCountChanged_Callback = void (*)(QTreeView*, int, int);
	using QTreeView_ColumnMoved_Callback = void (*)();
	using QTreeView_Reexpand_Callback = void (*)();
	using QTreeView_RowsRemoved_Callback = void (*)(QTreeView*, const QModelIndex*, int, int);
	using QTreeView_DrawTree_Callback = void (*)(const QTreeView*, QPainter*, const QRegion*);
	using QTreeView_IndexRowSizeHint_Callback = int (*)(const QTreeView*, const QModelIndex*);
	using QTreeView_RowHeight_Callback = int (*)(const QTreeView*, const QModelIndex*);

protected:
	// Instance callback storage
	mutable QTreeView_SetModel_Callback qtreeview_setmodel_callback = nullptr;
	mutable QTreeView_SetRootIndex_Callback qtreeview_setrootindex_callback = nullptr;
	mutable QTreeView_SetSelectionModel_Callback qtreeview_setselectionmodel_callback = nullptr;
	mutable QTreeView_KeyboardSearch_Callback qtreeview_keyboardsearch_callback = nullptr;
	mutable QTreeView_VisualRect_Callback qtreeview_visualrect_callback = nullptr;
	mutable QTreeView_ScrollTo_Callback qtreeview_scrollto_callback = nullptr;
	mutable QTreeView_IndexAt_Callback qtreeview_indexat_callback = nullptr;
	mutable QTreeView_DoItemsLayout_Callback qtreeview_doitemslayout_callback = nullptr;
	mutable QTreeView_Reset_Callback qtreeview_reset_callback = nullptr;
	mutable QTreeView_DataChanged_Callback qtreeview_datachanged_callback = nullptr;
	mutable QTreeView_SelectAll_Callback qtreeview_selectall_callback = nullptr;
	mutable QTreeView_VerticalScrollbarValueChanged_Callback qtreeview_verticalscrollbarvaluechanged_callback = nullptr;
	mutable QTreeView_ScrollContentsBy_Callback qtreeview_scrollcontentsby_callback = nullptr;
	mutable QTreeView_RowsInserted_Callback qtreeview_rowsinserted_callback = nullptr;
	mutable QTreeView_RowsAboutToBeRemoved_Callback qtreeview_rowsabouttoberemoved_callback = nullptr;
	mutable QTreeView_MoveCursor_Callback qtreeview_movecursor_callback = nullptr;
	mutable QTreeView_HorizontalOffset_Callback qtreeview_horizontaloffset_callback = nullptr;
	mutable QTreeView_VerticalOffset_Callback qtreeview_verticaloffset_callback = nullptr;
	mutable QTreeView_SetSelection_Callback qtreeview_setselection_callback = nullptr;
	mutable QTreeView_VisualRegionForSelection_Callback qtreeview_visualregionforselection_callback = nullptr;
	mutable QTreeView_SelectedIndexes_Callback qtreeview_selectedindexes_callback = nullptr;
	mutable QTreeView_ChangeEvent_Callback qtreeview_changeevent_callback = nullptr;
	mutable QTreeView_TimerEvent_Callback qtreeview_timerevent_callback = nullptr;
	mutable QTreeView_PaintEvent_Callback qtreeview_paintevent_callback = nullptr;
	mutable QTreeView_DrawRow_Callback qtreeview_drawrow_callback = nullptr;
	mutable QTreeView_DrawBranches_Callback qtreeview_drawbranches_callback = nullptr;
	mutable QTreeView_MousePressEvent_Callback qtreeview_mousepressevent_callback = nullptr;
	mutable QTreeView_MouseReleaseEvent_Callback qtreeview_mousereleaseevent_callback = nullptr;
	mutable QTreeView_MouseDoubleClickEvent_Callback qtreeview_mousedoubleclickevent_callback = nullptr;
	mutable QTreeView_MouseMoveEvent_Callback qtreeview_mousemoveevent_callback = nullptr;
	mutable QTreeView_KeyPressEvent_Callback qtreeview_keypressevent_callback = nullptr;
	mutable QTreeView_DragMoveEvent_Callback qtreeview_dragmoveevent_callback = nullptr;
	mutable QTreeView_ViewportEvent_Callback qtreeview_viewportevent_callback = nullptr;
	mutable QTreeView_UpdateGeometries_Callback qtreeview_updategeometries_callback = nullptr;
	mutable QTreeView_ViewportSizeHint_Callback qtreeview_viewportsizehint_callback = nullptr;
	mutable QTreeView_SizeHintForColumn_Callback qtreeview_sizehintforcolumn_callback = nullptr;
	mutable QTreeView_HorizontalScrollbarAction_Callback qtreeview_horizontalscrollbaraction_callback = nullptr;
	mutable QTreeView_IsIndexHidden_Callback qtreeview_isindexhidden_callback = nullptr;
	mutable QTreeView_SelectionChanged_Callback qtreeview_selectionchanged_callback = nullptr;
	mutable QTreeView_CurrentChanged_Callback qtreeview_currentchanged_callback = nullptr;
	mutable QTreeView_ColumnResized_Callback qtreeview_columnresized_callback = nullptr;
	mutable QTreeView_ColumnCountChanged_Callback qtreeview_columncountchanged_callback = nullptr;
	mutable QTreeView_ColumnMoved_Callback qtreeview_columnmoved_callback = nullptr;
	mutable QTreeView_Reexpand_Callback qtreeview_reexpand_callback = nullptr;
	mutable QTreeView_RowsRemoved_Callback qtreeview_rowsremoved_callback = nullptr;
	mutable QTreeView_DrawTree_Callback qtreeview_drawtree_callback = nullptr;
	mutable QTreeView_IndexRowSizeHint_Callback qtreeview_indexrowsizehint_callback = nullptr;
	mutable QTreeView_RowHeight_Callback qtreeview_rowheight_callback = nullptr;

	// Instance base flags
    mutable bool qtreeview_setmodel_isbase = false;
    mutable bool qtreeview_setrootindex_isbase = false;
    mutable bool qtreeview_setselectionmodel_isbase = false;
    mutable bool qtreeview_keyboardsearch_isbase = false;
    mutable bool qtreeview_visualrect_isbase = false;
    mutable bool qtreeview_scrollto_isbase = false;
    mutable bool qtreeview_indexat_isbase = false;
    mutable bool qtreeview_doitemslayout_isbase = false;
    mutable bool qtreeview_reset_isbase = false;
    mutable bool qtreeview_datachanged_isbase = false;
    mutable bool qtreeview_selectall_isbase = false;
    mutable bool qtreeview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qtreeview_scrollcontentsby_isbase = false;
    mutable bool qtreeview_rowsinserted_isbase = false;
    mutable bool qtreeview_rowsabouttoberemoved_isbase = false;
    mutable bool qtreeview_movecursor_isbase = false;
    mutable bool qtreeview_horizontaloffset_isbase = false;
    mutable bool qtreeview_verticaloffset_isbase = false;
    mutable bool qtreeview_setselection_isbase = false;
    mutable bool qtreeview_visualregionforselection_isbase = false;
    mutable bool qtreeview_selectedindexes_isbase = false;
    mutable bool qtreeview_changeevent_isbase = false;
    mutable bool qtreeview_timerevent_isbase = false;
    mutable bool qtreeview_paintevent_isbase = false;
    mutable bool qtreeview_drawrow_isbase = false;
    mutable bool qtreeview_drawbranches_isbase = false;
    mutable bool qtreeview_mousepressevent_isbase = false;
    mutable bool qtreeview_mousereleaseevent_isbase = false;
    mutable bool qtreeview_mousedoubleclickevent_isbase = false;
    mutable bool qtreeview_mousemoveevent_isbase = false;
    mutable bool qtreeview_keypressevent_isbase = false;
    mutable bool qtreeview_dragmoveevent_isbase = false;
    mutable bool qtreeview_viewportevent_isbase = false;
    mutable bool qtreeview_updategeometries_isbase = false;
    mutable bool qtreeview_viewportsizehint_isbase = false;
    mutable bool qtreeview_sizehintforcolumn_isbase = false;
    mutable bool qtreeview_horizontalscrollbaraction_isbase = false;
    mutable bool qtreeview_isindexhidden_isbase = false;
    mutable bool qtreeview_selectionchanged_isbase = false;
    mutable bool qtreeview_currentchanged_isbase = false;
    mutable bool qtreeview_columnresized_isbase = false;
    mutable bool qtreeview_columncountchanged_isbase = false;
    mutable bool qtreeview_columnmoved_isbase = false;
    mutable bool qtreeview_reexpand_isbase = false;
    mutable bool qtreeview_rowsremoved_isbase = false;
    mutable bool qtreeview_drawtree_isbase = false;
    mutable bool qtreeview_indexrowsizehint_isbase = false;
    mutable bool qtreeview_rowheight_isbase = false;

public:
	VirtualQTreeView(QWidget* parent): QTreeView(parent) {};
	VirtualQTreeView(): QTreeView() {};

	~VirtualQTreeView() {
		qtreeview_setmodel_callback = nullptr;
		qtreeview_setrootindex_callback = nullptr;
		qtreeview_setselectionmodel_callback = nullptr;
		qtreeview_keyboardsearch_callback = nullptr;
		qtreeview_visualrect_callback = nullptr;
		qtreeview_scrollto_callback = nullptr;
		qtreeview_indexat_callback = nullptr;
		qtreeview_doitemslayout_callback = nullptr;
		qtreeview_reset_callback = nullptr;
		qtreeview_datachanged_callback = nullptr;
		qtreeview_selectall_callback = nullptr;
		qtreeview_verticalscrollbarvaluechanged_callback = nullptr;
		qtreeview_scrollcontentsby_callback = nullptr;
		qtreeview_rowsinserted_callback = nullptr;
		qtreeview_rowsabouttoberemoved_callback = nullptr;
		qtreeview_movecursor_callback = nullptr;
		qtreeview_horizontaloffset_callback = nullptr;
		qtreeview_verticaloffset_callback = nullptr;
		qtreeview_setselection_callback = nullptr;
		qtreeview_visualregionforselection_callback = nullptr;
		qtreeview_selectedindexes_callback = nullptr;
		qtreeview_changeevent_callback = nullptr;
		qtreeview_timerevent_callback = nullptr;
		qtreeview_paintevent_callback = nullptr;
		qtreeview_drawrow_callback = nullptr;
		qtreeview_drawbranches_callback = nullptr;
		qtreeview_mousepressevent_callback = nullptr;
		qtreeview_mousereleaseevent_callback = nullptr;
		qtreeview_mousedoubleclickevent_callback = nullptr;
		qtreeview_mousemoveevent_callback = nullptr;
		qtreeview_keypressevent_callback = nullptr;
		qtreeview_dragmoveevent_callback = nullptr;
		qtreeview_viewportevent_callback = nullptr;
		qtreeview_updategeometries_callback = nullptr;
		qtreeview_viewportsizehint_callback = nullptr;
		qtreeview_sizehintforcolumn_callback = nullptr;
		qtreeview_horizontalscrollbaraction_callback = nullptr;
		qtreeview_isindexhidden_callback = nullptr;
		qtreeview_selectionchanged_callback = nullptr;
		qtreeview_currentchanged_callback = nullptr;
		qtreeview_columnresized_callback = nullptr;
		qtreeview_columncountchanged_callback = nullptr;
		qtreeview_columnmoved_callback = nullptr;
		qtreeview_reexpand_callback = nullptr;
		qtreeview_rowsremoved_callback = nullptr;
		qtreeview_drawtree_callback = nullptr;
		qtreeview_indexrowsizehint_callback = nullptr;
		qtreeview_rowheight_callback = nullptr;
	}

// Callback setters
	inline void setQTreeView_SetModel_Callback(QTreeView_SetModel_Callback cb) const { qtreeview_setmodel_callback = cb; }
	inline void setQTreeView_SetRootIndex_Callback(QTreeView_SetRootIndex_Callback cb) const { qtreeview_setrootindex_callback = cb; }
	inline void setQTreeView_SetSelectionModel_Callback(QTreeView_SetSelectionModel_Callback cb) const { qtreeview_setselectionmodel_callback = cb; }
	inline void setQTreeView_KeyboardSearch_Callback(QTreeView_KeyboardSearch_Callback cb) const { qtreeview_keyboardsearch_callback = cb; }
	inline void setQTreeView_VisualRect_Callback(QTreeView_VisualRect_Callback cb) const { qtreeview_visualrect_callback = cb; }
	inline void setQTreeView_ScrollTo_Callback(QTreeView_ScrollTo_Callback cb) const { qtreeview_scrollto_callback = cb; }
	inline void setQTreeView_IndexAt_Callback(QTreeView_IndexAt_Callback cb) const { qtreeview_indexat_callback = cb; }
	inline void setQTreeView_DoItemsLayout_Callback(QTreeView_DoItemsLayout_Callback cb) const { qtreeview_doitemslayout_callback = cb; }
	inline void setQTreeView_Reset_Callback(QTreeView_Reset_Callback cb) const { qtreeview_reset_callback = cb; }
	inline void setQTreeView_DataChanged_Callback(QTreeView_DataChanged_Callback cb) const { qtreeview_datachanged_callback = cb; }
	inline void setQTreeView_SelectAll_Callback(QTreeView_SelectAll_Callback cb) const { qtreeview_selectall_callback = cb; }
	inline void setQTreeView_VerticalScrollbarValueChanged_Callback(QTreeView_VerticalScrollbarValueChanged_Callback cb) const { qtreeview_verticalscrollbarvaluechanged_callback = cb; }
	inline void setQTreeView_ScrollContentsBy_Callback(QTreeView_ScrollContentsBy_Callback cb) const { qtreeview_scrollcontentsby_callback = cb; }
	inline void setQTreeView_RowsInserted_Callback(QTreeView_RowsInserted_Callback cb) const { qtreeview_rowsinserted_callback = cb; }
	inline void setQTreeView_RowsAboutToBeRemoved_Callback(QTreeView_RowsAboutToBeRemoved_Callback cb) const { qtreeview_rowsabouttoberemoved_callback = cb; }
	inline void setQTreeView_MoveCursor_Callback(QTreeView_MoveCursor_Callback cb) const { qtreeview_movecursor_callback = cb; }
	inline void setQTreeView_HorizontalOffset_Callback(QTreeView_HorizontalOffset_Callback cb) const { qtreeview_horizontaloffset_callback = cb; }
	inline void setQTreeView_VerticalOffset_Callback(QTreeView_VerticalOffset_Callback cb) const { qtreeview_verticaloffset_callback = cb; }
	inline void setQTreeView_SetSelection_Callback(QTreeView_SetSelection_Callback cb) const { qtreeview_setselection_callback = cb; }
	inline void setQTreeView_VisualRegionForSelection_Callback(QTreeView_VisualRegionForSelection_Callback cb) const { qtreeview_visualregionforselection_callback = cb; }
	inline void setQTreeView_SelectedIndexes_Callback(QTreeView_SelectedIndexes_Callback cb) const { qtreeview_selectedindexes_callback = cb; }
	inline void setQTreeView_ChangeEvent_Callback(QTreeView_ChangeEvent_Callback cb) const { qtreeview_changeevent_callback = cb; }
	inline void setQTreeView_TimerEvent_Callback(QTreeView_TimerEvent_Callback cb) const { qtreeview_timerevent_callback = cb; }
	inline void setQTreeView_PaintEvent_Callback(QTreeView_PaintEvent_Callback cb) const { qtreeview_paintevent_callback = cb; }
	inline void setQTreeView_DrawRow_Callback(QTreeView_DrawRow_Callback cb) const { qtreeview_drawrow_callback = cb; }
	inline void setQTreeView_DrawBranches_Callback(QTreeView_DrawBranches_Callback cb) const { qtreeview_drawbranches_callback = cb; }
	inline void setQTreeView_MousePressEvent_Callback(QTreeView_MousePressEvent_Callback cb) const { qtreeview_mousepressevent_callback = cb; }
	inline void setQTreeView_MouseReleaseEvent_Callback(QTreeView_MouseReleaseEvent_Callback cb) const { qtreeview_mousereleaseevent_callback = cb; }
	inline void setQTreeView_MouseDoubleClickEvent_Callback(QTreeView_MouseDoubleClickEvent_Callback cb) const { qtreeview_mousedoubleclickevent_callback = cb; }
	inline void setQTreeView_MouseMoveEvent_Callback(QTreeView_MouseMoveEvent_Callback cb) const { qtreeview_mousemoveevent_callback = cb; }
	inline void setQTreeView_KeyPressEvent_Callback(QTreeView_KeyPressEvent_Callback cb) const { qtreeview_keypressevent_callback = cb; }
	inline void setQTreeView_DragMoveEvent_Callback(QTreeView_DragMoveEvent_Callback cb) const { qtreeview_dragmoveevent_callback = cb; }
	inline void setQTreeView_ViewportEvent_Callback(QTreeView_ViewportEvent_Callback cb) const { qtreeview_viewportevent_callback = cb; }
	inline void setQTreeView_UpdateGeometries_Callback(QTreeView_UpdateGeometries_Callback cb) const { qtreeview_updategeometries_callback = cb; }
	inline void setQTreeView_ViewportSizeHint_Callback(QTreeView_ViewportSizeHint_Callback cb) const { qtreeview_viewportsizehint_callback = cb; }
	inline void setQTreeView_SizeHintForColumn_Callback(QTreeView_SizeHintForColumn_Callback cb) const { qtreeview_sizehintforcolumn_callback = cb; }
	inline void setQTreeView_HorizontalScrollbarAction_Callback(QTreeView_HorizontalScrollbarAction_Callback cb) const { qtreeview_horizontalscrollbaraction_callback = cb; }
	inline void setQTreeView_IsIndexHidden_Callback(QTreeView_IsIndexHidden_Callback cb) const { qtreeview_isindexhidden_callback = cb; }
	inline void setQTreeView_SelectionChanged_Callback(QTreeView_SelectionChanged_Callback cb) const { qtreeview_selectionchanged_callback = cb; }
	inline void setQTreeView_CurrentChanged_Callback(QTreeView_CurrentChanged_Callback cb) const { qtreeview_currentchanged_callback = cb; }
	inline void setQTreeView_ColumnResized_Callback(QTreeView_ColumnResized_Callback cb) const { qtreeview_columnresized_callback = cb; }
	inline void setQTreeView_ColumnCountChanged_Callback(QTreeView_ColumnCountChanged_Callback cb) const { qtreeview_columncountchanged_callback = cb; }
	inline void setQTreeView_ColumnMoved_Callback(QTreeView_ColumnMoved_Callback cb) const { qtreeview_columnmoved_callback = cb; }
	inline void setQTreeView_Reexpand_Callback(QTreeView_Reexpand_Callback cb) const { qtreeview_reexpand_callback = cb; }
	inline void setQTreeView_RowsRemoved_Callback(QTreeView_RowsRemoved_Callback cb) const { qtreeview_rowsremoved_callback = cb; }
	inline void setQTreeView_DrawTree_Callback(QTreeView_DrawTree_Callback cb) const { qtreeview_drawtree_callback = cb; }
	inline void setQTreeView_IndexRowSizeHint_Callback(QTreeView_IndexRowSizeHint_Callback cb) const { qtreeview_indexrowsizehint_callback = cb; }
	inline void setQTreeView_RowHeight_Callback(QTreeView_RowHeight_Callback cb) const { qtreeview_rowheight_callback = cb; }

// Base flag setters
	inline void setQTreeView_SetModel_IsBase(bool value) const { qtreeview_setmodel_isbase = value; }
	inline void setQTreeView_SetRootIndex_IsBase(bool value) const { qtreeview_setrootindex_isbase = value; }
	inline void setQTreeView_SetSelectionModel_IsBase(bool value) const { qtreeview_setselectionmodel_isbase = value; }
	inline void setQTreeView_KeyboardSearch_IsBase(bool value) const { qtreeview_keyboardsearch_isbase = value; }
	inline void setQTreeView_VisualRect_IsBase(bool value) const { qtreeview_visualrect_isbase = value; }
	inline void setQTreeView_ScrollTo_IsBase(bool value) const { qtreeview_scrollto_isbase = value; }
	inline void setQTreeView_IndexAt_IsBase(bool value) const { qtreeview_indexat_isbase = value; }
	inline void setQTreeView_DoItemsLayout_IsBase(bool value) const { qtreeview_doitemslayout_isbase = value; }
	inline void setQTreeView_Reset_IsBase(bool value) const { qtreeview_reset_isbase = value; }
	inline void setQTreeView_DataChanged_IsBase(bool value) const { qtreeview_datachanged_isbase = value; }
	inline void setQTreeView_SelectAll_IsBase(bool value) const { qtreeview_selectall_isbase = value; }
	inline void setQTreeView_VerticalScrollbarValueChanged_IsBase(bool value) const { qtreeview_verticalscrollbarvaluechanged_isbase = value; }
	inline void setQTreeView_ScrollContentsBy_IsBase(bool value) const { qtreeview_scrollcontentsby_isbase = value; }
	inline void setQTreeView_RowsInserted_IsBase(bool value) const { qtreeview_rowsinserted_isbase = value; }
	inline void setQTreeView_RowsAboutToBeRemoved_IsBase(bool value) const { qtreeview_rowsabouttoberemoved_isbase = value; }
	inline void setQTreeView_MoveCursor_IsBase(bool value) const { qtreeview_movecursor_isbase = value; }
	inline void setQTreeView_HorizontalOffset_IsBase(bool value) const { qtreeview_horizontaloffset_isbase = value; }
	inline void setQTreeView_VerticalOffset_IsBase(bool value) const { qtreeview_verticaloffset_isbase = value; }
	inline void setQTreeView_SetSelection_IsBase(bool value) const { qtreeview_setselection_isbase = value; }
	inline void setQTreeView_VisualRegionForSelection_IsBase(bool value) const { qtreeview_visualregionforselection_isbase = value; }
	inline void setQTreeView_SelectedIndexes_IsBase(bool value) const { qtreeview_selectedindexes_isbase = value; }
	inline void setQTreeView_ChangeEvent_IsBase(bool value) const { qtreeview_changeevent_isbase = value; }
	inline void setQTreeView_TimerEvent_IsBase(bool value) const { qtreeview_timerevent_isbase = value; }
	inline void setQTreeView_PaintEvent_IsBase(bool value) const { qtreeview_paintevent_isbase = value; }
	inline void setQTreeView_DrawRow_IsBase(bool value) const { qtreeview_drawrow_isbase = value; }
	inline void setQTreeView_DrawBranches_IsBase(bool value) const { qtreeview_drawbranches_isbase = value; }
	inline void setQTreeView_MousePressEvent_IsBase(bool value) const { qtreeview_mousepressevent_isbase = value; }
	inline void setQTreeView_MouseReleaseEvent_IsBase(bool value) const { qtreeview_mousereleaseevent_isbase = value; }
	inline void setQTreeView_MouseDoubleClickEvent_IsBase(bool value) const { qtreeview_mousedoubleclickevent_isbase = value; }
	inline void setQTreeView_MouseMoveEvent_IsBase(bool value) const { qtreeview_mousemoveevent_isbase = value; }
	inline void setQTreeView_KeyPressEvent_IsBase(bool value) const { qtreeview_keypressevent_isbase = value; }
	inline void setQTreeView_DragMoveEvent_IsBase(bool value) const { qtreeview_dragmoveevent_isbase = value; }
	inline void setQTreeView_ViewportEvent_IsBase(bool value) const { qtreeview_viewportevent_isbase = value; }
	inline void setQTreeView_UpdateGeometries_IsBase(bool value) const { qtreeview_updategeometries_isbase = value; }
	inline void setQTreeView_ViewportSizeHint_IsBase(bool value) const { qtreeview_viewportsizehint_isbase = value; }
	inline void setQTreeView_SizeHintForColumn_IsBase(bool value) const { qtreeview_sizehintforcolumn_isbase = value; }
	inline void setQTreeView_HorizontalScrollbarAction_IsBase(bool value) const { qtreeview_horizontalscrollbaraction_isbase = value; }
	inline void setQTreeView_IsIndexHidden_IsBase(bool value) const { qtreeview_isindexhidden_isbase = value; }
	inline void setQTreeView_SelectionChanged_IsBase(bool value) const { qtreeview_selectionchanged_isbase = value; }
	inline void setQTreeView_CurrentChanged_IsBase(bool value) const { qtreeview_currentchanged_isbase = value; }
	inline void setQTreeView_ColumnResized_IsBase(bool value) const { qtreeview_columnresized_isbase = value; }
	inline void setQTreeView_ColumnCountChanged_IsBase(bool value) const { qtreeview_columncountchanged_isbase = value; }
	inline void setQTreeView_ColumnMoved_IsBase(bool value) const { qtreeview_columnmoved_isbase = value; }
	inline void setQTreeView_Reexpand_IsBase(bool value) const { qtreeview_reexpand_isbase = value; }
	inline void setQTreeView_RowsRemoved_IsBase(bool value) const { qtreeview_rowsremoved_isbase = value; }
	inline void setQTreeView_DrawTree_IsBase(bool value) const { qtreeview_drawtree_isbase = value; }
	inline void setQTreeView_IndexRowSizeHint_IsBase(bool value) const { qtreeview_indexrowsizehint_isbase = value; }
	inline void setQTreeView_RowHeight_IsBase(bool value) const { qtreeview_rowheight_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setModel(QAbstractItemModel* model) override {
		if (qtreeview_setmodel_isbase) {
			qtreeview_setmodel_isbase = false;
			QTreeView::setModel(model);
		} else if (qtreeview_setmodel_callback != nullptr) {
			QAbstractItemModel* cbval1 = model;
			qtreeview_setmodel_callback(this, cbval1);
		} else {
			QTreeView::setModel(model);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setRootIndex(const QModelIndex& index) override {
		if (qtreeview_setrootindex_isbase) {
			qtreeview_setrootindex_isbase = false;
			QTreeView::setRootIndex(index);
		} else if (qtreeview_setrootindex_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			qtreeview_setrootindex_callback(this, cbval1);
		} else {
			QTreeView::setRootIndex(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (qtreeview_setselectionmodel_isbase) {
			qtreeview_setselectionmodel_isbase = false;
			QTreeView::setSelectionModel(selectionModel);
		} else if (qtreeview_setselectionmodel_callback != nullptr) {
			QItemSelectionModel* cbval1 = selectionModel;
			qtreeview_setselectionmodel_callback(this, cbval1);
		} else {
			QTreeView::setSelectionModel(selectionModel);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyboardSearch(const QString& search) override {
		if (qtreeview_keyboardsearch_isbase) {
			qtreeview_keyboardsearch_isbase = false;
			QTreeView::keyboardSearch(search);
		} else if (qtreeview_keyboardsearch_callback != nullptr) {
			QByteArray search_qb = search.toUtf8();
			libqt_string cbval1;
			cbval1.len = search_qb.length();
			cbval1.data = static_cast<const char*>(search_qb.constData());
			qtreeview_keyboardsearch_callback(this, cbval1);
		} else {
			QTreeView::keyboardSearch(search);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (qtreeview_visualrect_isbase) {
			qtreeview_visualrect_isbase = false;
			return QTreeView::visualRect(index);
		} else if (qtreeview_visualrect_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QRect* callback_ret = qtreeview_visualrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTreeView::visualRect(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollTo(const QModelIndex& index, ScrollHint hint) override {
		if (qtreeview_scrollto_isbase) {
			qtreeview_scrollto_isbase = false;
			QTreeView::scrollTo(index, hint);
		} else if (qtreeview_scrollto_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = static_cast<int>(hint);
			qtreeview_scrollto_callback(this, cbval1, cbval2);
		} else {
			QTreeView::scrollTo(index, hint);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (qtreeview_indexat_isbase) {
			qtreeview_indexat_isbase = false;
			return QTreeView::indexAt(p);
		} else if (qtreeview_indexat_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&p;
			QModelIndex* callback_ret = qtreeview_indexat_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTreeView::indexAt(p);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void doItemsLayout() override {
		if (qtreeview_doitemslayout_isbase) {
			qtreeview_doitemslayout_isbase = false;
			QTreeView::doItemsLayout();
		} else if (qtreeview_doitemslayout_callback != nullptr) {
			qtreeview_doitemslayout_callback();
		} else {
			QTreeView::doItemsLayout();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void reset() override {
		if (qtreeview_reset_isbase) {
			qtreeview_reset_isbase = false;
			QTreeView::reset();
		} else if (qtreeview_reset_callback != nullptr) {
			qtreeview_reset_callback();
		} else {
			QTreeView::reset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (qtreeview_datachanged_isbase) {
			qtreeview_datachanged_isbase = false;
			QTreeView::dataChanged(topLeft, bottomRight, roles);
		} else if (qtreeview_datachanged_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&topLeft;
			const QModelIndex* cbval2 = (const QModelIndex*)&bottomRight;
			libqt_list cbval3 = roles;
			qtreeview_datachanged_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTreeView::dataChanged(topLeft, bottomRight, roles);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void selectAll() override {
		if (qtreeview_selectall_isbase) {
			qtreeview_selectall_isbase = false;
			QTreeView::selectAll();
		} else if (qtreeview_selectall_callback != nullptr) {
			qtreeview_selectall_callback();
		} else {
			QTreeView::selectAll();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void verticalScrollbarValueChanged(int value) override {
		if (qtreeview_verticalscrollbarvaluechanged_isbase) {
			qtreeview_verticalscrollbarvaluechanged_isbase = false;
			QTreeView::verticalScrollbarValueChanged(value);
		} else if (qtreeview_verticalscrollbarvaluechanged_callback != nullptr) {
			int cbval1 = value;
			qtreeview_verticalscrollbarvaluechanged_callback(this, cbval1);
		} else {
			QTreeView::verticalScrollbarValueChanged(value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollContentsBy(int dx, int dy) override {
		if (qtreeview_scrollcontentsby_isbase) {
			qtreeview_scrollcontentsby_isbase = false;
			QTreeView::scrollContentsBy(dx, dy);
		} else if (qtreeview_scrollcontentsby_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qtreeview_scrollcontentsby_callback(this, cbval1, cbval2);
		} else {
			QTreeView::scrollContentsBy(dx, dy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (qtreeview_rowsinserted_isbase) {
			qtreeview_rowsinserted_isbase = false;
			QTreeView::rowsInserted(parent, start, end);
		} else if (qtreeview_rowsinserted_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = start;
			int cbval3 = end;
			qtreeview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTreeView::rowsInserted(parent, start, end);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (qtreeview_rowsabouttoberemoved_isbase) {
			qtreeview_rowsabouttoberemoved_isbase = false;
			QTreeView::rowsAboutToBeRemoved(parent, start, end);
		} else if (qtreeview_rowsabouttoberemoved_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = start;
			int cbval3 = end;
			qtreeview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTreeView::rowsAboutToBeRemoved(parent, start, end);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex moveCursor(CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (qtreeview_movecursor_isbase) {
			qtreeview_movecursor_isbase = false;
			return QTreeView::moveCursor(cursorAction, modifiers);
		} else if (qtreeview_movecursor_callback != nullptr) {
			int cbval1 = static_cast<int>(cursorAction);
			int cbval2 = static_cast<int>(modifiers);
			QModelIndex* callback_ret = qtreeview_movecursor_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QTreeView::moveCursor(cursorAction, modifiers);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int horizontalOffset() const override {
		if (qtreeview_horizontaloffset_isbase) {
			qtreeview_horizontaloffset_isbase = false;
			return QTreeView::horizontalOffset();
		} else if (qtreeview_horizontaloffset_callback != nullptr) {
			int callback_ret = qtreeview_horizontaloffset_callback();
			return callback_ret;
		} else {
			return QTreeView::horizontalOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int verticalOffset() const override {
		if (qtreeview_verticaloffset_isbase) {
			qtreeview_verticaloffset_isbase = false;
			return QTreeView::verticalOffset();
		} else if (qtreeview_verticaloffset_callback != nullptr) {
			int callback_ret = qtreeview_verticaloffset_callback();
			return callback_ret;
		} else {
			return QTreeView::verticalOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (qtreeview_setselection_isbase) {
			qtreeview_setselection_isbase = false;
			QTreeView::setSelection(rect, command);
		} else if (qtreeview_setselection_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&rect;
			int cbval2 = static_cast<int>(command);
			qtreeview_setselection_callback(this, cbval1, cbval2);
		} else {
			QTreeView::setSelection(rect, command);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (qtreeview_visualregionforselection_isbase) {
			qtreeview_visualregionforselection_isbase = false;
			return QTreeView::visualRegionForSelection(selection);
		} else if (qtreeview_visualregionforselection_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selection;
			QRegion* callback_ret = qtreeview_visualregionforselection_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTreeView::visualRegionForSelection(selection);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QModelIndex> selectedIndexes() const override {
		if (qtreeview_selectedindexes_isbase) {
			qtreeview_selectedindexes_isbase = false;
			return QTreeView::selectedIndexes();
		} else if (qtreeview_selectedindexes_callback != nullptr) {
			libqt_list callback_ret = qtreeview_selectedindexes_callback();
			return callback_ret;
		} else {
			return QTreeView::selectedIndexes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* event) override {
		if (qtreeview_changeevent_isbase) {
			qtreeview_changeevent_isbase = false;
			QTreeView::changeEvent(event);
		} else if (qtreeview_changeevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qtreeview_changeevent_callback(this, cbval1);
		} else {
			QTreeView::changeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* event) override {
		if (qtreeview_timerevent_isbase) {
			qtreeview_timerevent_isbase = false;
			QTreeView::timerEvent(event);
		} else if (qtreeview_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = event;
			qtreeview_timerevent_callback(this, cbval1);
		} else {
			QTreeView::timerEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* event) override {
		if (qtreeview_paintevent_isbase) {
			qtreeview_paintevent_isbase = false;
			QTreeView::paintEvent(event);
		} else if (qtreeview_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = event;
			qtreeview_paintevent_callback(this, cbval1);
		} else {
			QTreeView::paintEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawRow(QPainter* painter, const QStyleOptionViewItem& options, const QModelIndex& index) const override {
		if (qtreeview_drawrow_isbase) {
			qtreeview_drawrow_isbase = false;
			QTreeView::drawRow(painter, options, index);
		} else if (qtreeview_drawrow_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&options;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qtreeview_drawrow_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTreeView::drawRow(painter, options, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawBranches(QPainter* painter, const QRect& rect, const QModelIndex& index) const override {
		if (qtreeview_drawbranches_isbase) {
			qtreeview_drawbranches_isbase = false;
			QTreeView::drawBranches(painter, rect, index);
		} else if (qtreeview_drawbranches_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRect* cbval2 = (const QRect*)&rect;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qtreeview_drawbranches_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTreeView::drawBranches(painter, rect, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (qtreeview_mousepressevent_isbase) {
			qtreeview_mousepressevent_isbase = false;
			QTreeView::mousePressEvent(event);
		} else if (qtreeview_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qtreeview_mousepressevent_callback(this, cbval1);
		} else {
			QTreeView::mousePressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (qtreeview_mousereleaseevent_isbase) {
			qtreeview_mousereleaseevent_isbase = false;
			QTreeView::mouseReleaseEvent(event);
		} else if (qtreeview_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qtreeview_mousereleaseevent_callback(this, cbval1);
		} else {
			QTreeView::mouseReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (qtreeview_mousedoubleclickevent_isbase) {
			qtreeview_mousedoubleclickevent_isbase = false;
			QTreeView::mouseDoubleClickEvent(event);
		} else if (qtreeview_mousedoubleclickevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qtreeview_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QTreeView::mouseDoubleClickEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (qtreeview_mousemoveevent_isbase) {
			qtreeview_mousemoveevent_isbase = false;
			QTreeView::mouseMoveEvent(event);
		} else if (qtreeview_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qtreeview_mousemoveevent_callback(this, cbval1);
		} else {
			QTreeView::mouseMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (qtreeview_keypressevent_isbase) {
			qtreeview_keypressevent_isbase = false;
			QTreeView::keyPressEvent(event);
		} else if (qtreeview_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qtreeview_keypressevent_callback(this, cbval1);
		} else {
			QTreeView::keyPressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (qtreeview_dragmoveevent_isbase) {
			qtreeview_dragmoveevent_isbase = false;
			QTreeView::dragMoveEvent(event);
		} else if (qtreeview_dragmoveevent_callback != nullptr) {
			QDragMoveEvent* cbval1 = event;
			qtreeview_dragmoveevent_callback(this, cbval1);
		} else {
			QTreeView::dragMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool viewportEvent(QEvent* event) override {
		if (qtreeview_viewportevent_isbase) {
			qtreeview_viewportevent_isbase = false;
			return QTreeView::viewportEvent(event);
		} else if (qtreeview_viewportevent_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qtreeview_viewportevent_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTreeView::viewportEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateGeometries() override {
		if (qtreeview_updategeometries_isbase) {
			qtreeview_updategeometries_isbase = false;
			QTreeView::updateGeometries();
		} else if (qtreeview_updategeometries_callback != nullptr) {
			qtreeview_updategeometries_callback();
		} else {
			QTreeView::updateGeometries();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize viewportSizeHint() const override {
		if (qtreeview_viewportsizehint_isbase) {
			qtreeview_viewportsizehint_isbase = false;
			return QTreeView::viewportSizeHint();
		} else if (qtreeview_viewportsizehint_callback != nullptr) {
			QSize* callback_ret = qtreeview_viewportsizehint_callback();
			return *callback_ret;
		} else {
			return QTreeView::viewportSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int sizeHintForColumn(int column) const override {
		if (qtreeview_sizehintforcolumn_isbase) {
			qtreeview_sizehintforcolumn_isbase = false;
			return QTreeView::sizeHintForColumn(column);
		} else if (qtreeview_sizehintforcolumn_callback != nullptr) {
			int cbval1 = column;
			int callback_ret = qtreeview_sizehintforcolumn_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTreeView::sizeHintForColumn(column);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void horizontalScrollbarAction(int action) override {
		if (qtreeview_horizontalscrollbaraction_isbase) {
			qtreeview_horizontalscrollbaraction_isbase = false;
			QTreeView::horizontalScrollbarAction(action);
		} else if (qtreeview_horizontalscrollbaraction_callback != nullptr) {
			int cbval1 = action;
			qtreeview_horizontalscrollbaraction_callback(this, cbval1);
		} else {
			QTreeView::horizontalScrollbarAction(action);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (qtreeview_isindexhidden_isbase) {
			qtreeview_isindexhidden_isbase = false;
			return QTreeView::isIndexHidden(index);
		} else if (qtreeview_isindexhidden_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			bool callback_ret = qtreeview_isindexhidden_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTreeView::isIndexHidden(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (qtreeview_selectionchanged_isbase) {
			qtreeview_selectionchanged_isbase = false;
			QTreeView::selectionChanged(selected, deselected);
		} else if (qtreeview_selectionchanged_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selected;
			const QItemSelection* cbval2 = (const QItemSelection*)&deselected;
			qtreeview_selectionchanged_callback(this, cbval1, cbval2);
		} else {
			QTreeView::selectionChanged(selected, deselected);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (qtreeview_currentchanged_isbase) {
			qtreeview_currentchanged_isbase = false;
			QTreeView::currentChanged(current, previous);
		} else if (qtreeview_currentchanged_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&current;
			const QModelIndex* cbval2 = (const QModelIndex*)&previous;
			qtreeview_currentchanged_callback(this, cbval1, cbval2);
		} else {
			QTreeView::currentChanged(current, previous);
		}
	}

	// Virtual method for C ABI access and custom callback
	void columnResized(int column, int oldSize, int newSize) {
		if (qtreeview_columnresized_isbase) {
			qtreeview_columnresized_isbase = false;
			QTreeView::columnResized(column, oldSize, newSize);
		} else if (qtreeview_columnresized_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = oldSize;
			int cbval3 = newSize;
			qtreeview_columnresized_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTreeView::columnResized(column, oldSize, newSize);
		}
	}

	// Virtual method for C ABI access and custom callback
	void columnCountChanged(int oldCount, int newCount) {
		if (qtreeview_columncountchanged_isbase) {
			qtreeview_columncountchanged_isbase = false;
			QTreeView::columnCountChanged(oldCount, newCount);
		} else if (qtreeview_columncountchanged_callback != nullptr) {
			int cbval1 = oldCount;
			int cbval2 = newCount;
			qtreeview_columncountchanged_callback(this, cbval1, cbval2);
		} else {
			QTreeView::columnCountChanged(oldCount, newCount);
		}
	}

	// Virtual method for C ABI access and custom callback
	void columnMoved() {
		if (qtreeview_columnmoved_isbase) {
			qtreeview_columnmoved_isbase = false;
			QTreeView::columnMoved();
		} else if (qtreeview_columnmoved_callback != nullptr) {
			qtreeview_columnmoved_callback();
		} else {
			QTreeView::columnMoved();
		}
	}

	// Virtual method for C ABI access and custom callback
	void reexpand() {
		if (qtreeview_reexpand_isbase) {
			qtreeview_reexpand_isbase = false;
			QTreeView::reexpand();
		} else if (qtreeview_reexpand_callback != nullptr) {
			qtreeview_reexpand_callback();
		} else {
			QTreeView::reexpand();
		}
	}

	// Virtual method for C ABI access and custom callback
	void rowsRemoved(const QModelIndex& parent, int first, int last) {
		if (qtreeview_rowsremoved_isbase) {
			qtreeview_rowsremoved_isbase = false;
			QTreeView::rowsRemoved(parent, first, last);
		} else if (qtreeview_rowsremoved_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = first;
			int cbval3 = last;
			qtreeview_rowsremoved_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTreeView::rowsRemoved(parent, first, last);
		}
	}

	// Virtual method for C ABI access and custom callback
	void drawTree(QPainter* painter, const QRegion& region) const {
		if (qtreeview_drawtree_isbase) {
			qtreeview_drawtree_isbase = false;
			QTreeView::drawTree(painter, region);
		} else if (qtreeview_drawtree_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRegion* cbval2 = (const QRegion*)&region;
			qtreeview_drawtree_callback(this, cbval1, cbval2);
		} else {
			QTreeView::drawTree(painter, region);
		}
	}

	// Virtual method for C ABI access and custom callback
	int indexRowSizeHint(const QModelIndex& index) const {
		if (qtreeview_indexrowsizehint_isbase) {
			qtreeview_indexrowsizehint_isbase = false;
			return QTreeView::indexRowSizeHint(index);
		} else if (qtreeview_indexrowsizehint_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qtreeview_indexrowsizehint_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTreeView::indexRowSizeHint(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	int rowHeight(const QModelIndex& index) const {
		if (qtreeview_rowheight_isbase) {
			qtreeview_rowheight_isbase = false;
			return QTreeView::rowHeight(index);
		} else if (qtreeview_rowheight_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qtreeview_rowheight_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTreeView::rowHeight(index);
		}
	}

	// Friend functions
	friend void QTreeView_VerticalScrollbarValueChanged(QTreeView* self, int value);
	friend void QTreeView_QBaseVerticalScrollbarValueChanged(QTreeView* self, int value);
	friend void QTreeView_ScrollContentsBy(QTreeView* self, int dx, int dy);
	friend void QTreeView_QBaseScrollContentsBy(QTreeView* self, int dx, int dy);
	friend void QTreeView_RowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end);
	friend void QTreeView_QBaseRowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end);
	friend void QTreeView_RowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end);
	friend void QTreeView_QBaseRowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end);
	friend QModelIndex* QTreeView_MoveCursor(QTreeView* self, int cursorAction, int modifiers);
	friend QModelIndex* QTreeView_QBaseMoveCursor(QTreeView* self, int cursorAction, int modifiers);
	friend int QTreeView_HorizontalOffset(const QTreeView* self);
	friend int QTreeView_QBaseHorizontalOffset(const QTreeView* self);
	friend int QTreeView_VerticalOffset(const QTreeView* self);
	friend int QTreeView_QBaseVerticalOffset(const QTreeView* self);
	friend void QTreeView_SetSelection(QTreeView* self, const QRect* rect, int command);
	friend void QTreeView_QBaseSetSelection(QTreeView* self, const QRect* rect, int command);
	friend QRegion* QTreeView_VisualRegionForSelection(const QTreeView* self, const QItemSelection* selection);
	friend QRegion* QTreeView_QBaseVisualRegionForSelection(const QTreeView* self, const QItemSelection* selection);
	friend libqt_list QTreeView_SelectedIndexes(const QTreeView* self);
	friend libqt_list QTreeView_QBaseSelectedIndexes(const QTreeView* self);
	friend void QTreeView_ChangeEvent(QTreeView* self, QEvent* event);
	friend void QTreeView_QBaseChangeEvent(QTreeView* self, QEvent* event);
	friend void QTreeView_TimerEvent(QTreeView* self, QTimerEvent* event);
	friend void QTreeView_QBaseTimerEvent(QTreeView* self, QTimerEvent* event);
	friend void QTreeView_PaintEvent(QTreeView* self, QPaintEvent* event);
	friend void QTreeView_QBasePaintEvent(QTreeView* self, QPaintEvent* event);
	friend void QTreeView_DrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index);
	friend void QTreeView_QBaseDrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index);
	friend void QTreeView_DrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index);
	friend void QTreeView_QBaseDrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index);
	friend void QTreeView_MousePressEvent(QTreeView* self, QMouseEvent* event);
	friend void QTreeView_QBaseMousePressEvent(QTreeView* self, QMouseEvent* event);
	friend void QTreeView_MouseReleaseEvent(QTreeView* self, QMouseEvent* event);
	friend void QTreeView_QBaseMouseReleaseEvent(QTreeView* self, QMouseEvent* event);
	friend void QTreeView_MouseDoubleClickEvent(QTreeView* self, QMouseEvent* event);
	friend void QTreeView_QBaseMouseDoubleClickEvent(QTreeView* self, QMouseEvent* event);
	friend void QTreeView_MouseMoveEvent(QTreeView* self, QMouseEvent* event);
	friend void QTreeView_QBaseMouseMoveEvent(QTreeView* self, QMouseEvent* event);
	friend void QTreeView_KeyPressEvent(QTreeView* self, QKeyEvent* event);
	friend void QTreeView_QBaseKeyPressEvent(QTreeView* self, QKeyEvent* event);
	friend void QTreeView_DragMoveEvent(QTreeView* self, QDragMoveEvent* event);
	friend void QTreeView_QBaseDragMoveEvent(QTreeView* self, QDragMoveEvent* event);
	friend bool QTreeView_ViewportEvent(QTreeView* self, QEvent* event);
	friend bool QTreeView_QBaseViewportEvent(QTreeView* self, QEvent* event);
	friend void QTreeView_UpdateGeometries(QTreeView* self);
	friend void QTreeView_QBaseUpdateGeometries(QTreeView* self);
	friend QSize* QTreeView_ViewportSizeHint(const QTreeView* self);
	friend QSize* QTreeView_QBaseViewportSizeHint(const QTreeView* self);
	friend int QTreeView_SizeHintForColumn(const QTreeView* self, int column);
	friend int QTreeView_QBaseSizeHintForColumn(const QTreeView* self, int column);
	friend void QTreeView_HorizontalScrollbarAction(QTreeView* self, int action);
	friend void QTreeView_QBaseHorizontalScrollbarAction(QTreeView* self, int action);
	friend bool QTreeView_IsIndexHidden(const QTreeView* self, const QModelIndex* index);
	friend bool QTreeView_QBaseIsIndexHidden(const QTreeView* self, const QModelIndex* index);
	friend void QTreeView_SelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected);
	friend void QTreeView_QBaseSelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected);
	friend void QTreeView_CurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous);
	friend void QTreeView_QBaseCurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous);
	friend void QTreeView_ColumnResized(QTreeView* self, int column, int oldSize, int newSize);
	friend void QTreeView_QBaseColumnResized(QTreeView* self, int column, int oldSize, int newSize);
	friend void QTreeView_ColumnCountChanged(QTreeView* self, int oldCount, int newCount);
	friend void QTreeView_QBaseColumnCountChanged(QTreeView* self, int oldCount, int newCount);
	friend void QTreeView_ColumnMoved(QTreeView* self);
	friend void QTreeView_QBaseColumnMoved(QTreeView* self);
	friend void QTreeView_Reexpand(QTreeView* self);
	friend void QTreeView_QBaseReexpand(QTreeView* self);
	friend void QTreeView_RowsRemoved(QTreeView* self, const QModelIndex* parent, int first, int last);
	friend void QTreeView_QBaseRowsRemoved(QTreeView* self, const QModelIndex* parent, int first, int last);
	friend void QTreeView_DrawTree(const QTreeView* self, QPainter* painter, const QRegion* region);
	friend void QTreeView_QBaseDrawTree(const QTreeView* self, QPainter* painter, const QRegion* region);
	friend int QTreeView_IndexRowSizeHint(const QTreeView* self, const QModelIndex* index);
	friend int QTreeView_QBaseIndexRowSizeHint(const QTreeView* self, const QModelIndex* index);
	friend int QTreeView_RowHeight(const QTreeView* self, const QModelIndex* index);
	friend int QTreeView_QBaseRowHeight(const QTreeView* self, const QModelIndex* index);
};

#endif


