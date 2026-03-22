#pragma once
#ifndef QABSTRACTITEMVIEW_H_C_LIBVIRTUAL
#define QABSTRACTITEMVIEW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractItemView so that we can call protected methods
class VirtualQAbstractItemView : public QAbstractItemView {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractItemView= true;

	// Virtual class public types (including callbacks)
	using QAbstractItemView::CursorAction;
	using QAbstractItemView::State;
	using QAbstractItemView::DropIndicatorPosition;
	using QAbstractItemView_SetModel_Callback = void (*)(QAbstractItemView*, QAbstractItemModel*);
	using QAbstractItemView_SetSelectionModel_Callback = void (*)(QAbstractItemView*, QItemSelectionModel*);
	using QAbstractItemView_KeyboardSearch_Callback = void (*)(QAbstractItemView*, libqt_string);
	using QAbstractItemView_VisualRect_Callback = QRect* (*)(const QAbstractItemView*, const QModelIndex*);
	using QAbstractItemView_ScrollTo_Callback = void (*)(QAbstractItemView*, const QModelIndex*, int);
	using QAbstractItemView_IndexAt_Callback = QModelIndex* (*)(const QAbstractItemView*, const QPoint*);
	using QAbstractItemView_SizeHintForRow_Callback = int (*)(const QAbstractItemView*, int);
	using QAbstractItemView_SizeHintForColumn_Callback = int (*)(const QAbstractItemView*, int);
	using QAbstractItemView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QAbstractItemView*, const QModelIndex*);
	using QAbstractItemView_InputMethodQuery_Callback = QVariant* (*)(const QAbstractItemView*, int);
	using QAbstractItemView_Reset_Callback = void (*)();
	using QAbstractItemView_SetRootIndex_Callback = void (*)(QAbstractItemView*, const QModelIndex*);
	using QAbstractItemView_DoItemsLayout_Callback = void (*)();
	using QAbstractItemView_SelectAll_Callback = void (*)();
	using QAbstractItemView_DataChanged_Callback = void (*)(QAbstractItemView*, const QModelIndex*, const QModelIndex*, libqt_list);
	using QAbstractItemView_RowsInserted_Callback = void (*)(QAbstractItemView*, const QModelIndex*, int, int);
	using QAbstractItemView_RowsAboutToBeRemoved_Callback = void (*)(QAbstractItemView*, const QModelIndex*, int, int);
	using QAbstractItemView_SelectionChanged_Callback = void (*)(QAbstractItemView*, const QItemSelection*, const QItemSelection*);
	using QAbstractItemView_CurrentChanged_Callback = void (*)(QAbstractItemView*, const QModelIndex*, const QModelIndex*);
	using QAbstractItemView_UpdateEditorData_Callback = void (*)();
	using QAbstractItemView_UpdateEditorGeometries_Callback = void (*)();
	using QAbstractItemView_UpdateGeometries_Callback = void (*)();
	using QAbstractItemView_VerticalScrollbarAction_Callback = void (*)(QAbstractItemView*, int);
	using QAbstractItemView_HorizontalScrollbarAction_Callback = void (*)(QAbstractItemView*, int);
	using QAbstractItemView_VerticalScrollbarValueChanged_Callback = void (*)(QAbstractItemView*, int);
	using QAbstractItemView_HorizontalScrollbarValueChanged_Callback = void (*)(QAbstractItemView*, int);
	using QAbstractItemView_CloseEditor_Callback = void (*)(QAbstractItemView*, QWidget*, int);
	using QAbstractItemView_CommitData_Callback = void (*)(QAbstractItemView*, QWidget*);
	using QAbstractItemView_EditorDestroyed_Callback = void (*)(QAbstractItemView*, QObject*);
	using QAbstractItemView_MoveCursor_Callback = QModelIndex* (*)(QAbstractItemView*, int, int);
	using QAbstractItemView_HorizontalOffset_Callback = int (*)();
	using QAbstractItemView_VerticalOffset_Callback = int (*)();
	using QAbstractItemView_IsIndexHidden_Callback = bool (*)(const QAbstractItemView*, const QModelIndex*);
	using QAbstractItemView_SetSelection_Callback = void (*)(QAbstractItemView*, const QRect*, int);
	using QAbstractItemView_VisualRegionForSelection_Callback = QRegion* (*)(const QAbstractItemView*, const QItemSelection*);
	using QAbstractItemView_SelectedIndexes_Callback = libqt_list (*)();
	using QAbstractItemView_Edit2_Callback = bool (*)(QAbstractItemView*, const QModelIndex*, int, QEvent*);
	using QAbstractItemView_SelectionCommand_Callback = int (*)(const QAbstractItemView*, const QModelIndex*, const QEvent*);
	using QAbstractItemView_StartDrag_Callback = void (*)(QAbstractItemView*, int);
	using QAbstractItemView_InitViewItemOption_Callback = void (*)(const QAbstractItemView*, QStyleOptionViewItem*);
	using QAbstractItemView_FocusNextPrevChild_Callback = bool (*)(QAbstractItemView*, bool);
	using QAbstractItemView_Event_Callback = bool (*)(QAbstractItemView*, QEvent*);
	using QAbstractItemView_ViewportEvent_Callback = bool (*)(QAbstractItemView*, QEvent*);
	using QAbstractItemView_MousePressEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
	using QAbstractItemView_MouseMoveEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
	using QAbstractItemView_MouseReleaseEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
	using QAbstractItemView_MouseDoubleClickEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
	using QAbstractItemView_DragEnterEvent_Callback = void (*)(QAbstractItemView*, QDragEnterEvent*);
	using QAbstractItemView_DragMoveEvent_Callback = void (*)(QAbstractItemView*, QDragMoveEvent*);
	using QAbstractItemView_DragLeaveEvent_Callback = void (*)(QAbstractItemView*, QDragLeaveEvent*);
	using QAbstractItemView_DropEvent_Callback = void (*)(QAbstractItemView*, QDropEvent*);
	using QAbstractItemView_FocusInEvent_Callback = void (*)(QAbstractItemView*, QFocusEvent*);
	using QAbstractItemView_FocusOutEvent_Callback = void (*)(QAbstractItemView*, QFocusEvent*);
	using QAbstractItemView_KeyPressEvent_Callback = void (*)(QAbstractItemView*, QKeyEvent*);
	using QAbstractItemView_ResizeEvent_Callback = void (*)(QAbstractItemView*, QResizeEvent*);
	using QAbstractItemView_TimerEvent_Callback = void (*)(QAbstractItemView*, QTimerEvent*);
	using QAbstractItemView_InputMethodEvent_Callback = void (*)(QAbstractItemView*, QInputMethodEvent*);
	using QAbstractItemView_EventFilter_Callback = bool (*)(QAbstractItemView*, QObject*, QEvent*);
	using QAbstractItemView_ViewportSizeHint_Callback = QSize* (*)();
	using QAbstractItemView_State_Callback = int (*)();
	using QAbstractItemView_SetState_Callback = void (*)(QAbstractItemView*, int);
	using QAbstractItemView_ScheduleDelayedItemsLayout_Callback = void (*)();
	using QAbstractItemView_ExecuteDelayedItemsLayout_Callback = void (*)();
	using QAbstractItemView_SetDirtyRegion_Callback = void (*)(QAbstractItemView*, const QRegion*);
	using QAbstractItemView_ScrollDirtyRegion_Callback = void (*)(QAbstractItemView*, int, int);
	using QAbstractItemView_DirtyRegionOffset_Callback = QPoint* (*)();
	using QAbstractItemView_StartAutoScroll_Callback = void (*)();
	using QAbstractItemView_StopAutoScroll_Callback = void (*)();
	using QAbstractItemView_DoAutoScroll_Callback = void (*)();
	using QAbstractItemView_DropIndicatorPosition_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QAbstractItemView_SetModel_Callback qabstractitemview_setmodel_callback = nullptr;
	mutable QAbstractItemView_SetSelectionModel_Callback qabstractitemview_setselectionmodel_callback = nullptr;
	mutable QAbstractItemView_KeyboardSearch_Callback qabstractitemview_keyboardsearch_callback = nullptr;
	mutable QAbstractItemView_VisualRect_Callback qabstractitemview_visualrect_callback = nullptr;
	mutable QAbstractItemView_ScrollTo_Callback qabstractitemview_scrollto_callback = nullptr;
	mutable QAbstractItemView_IndexAt_Callback qabstractitemview_indexat_callback = nullptr;
	mutable QAbstractItemView_SizeHintForRow_Callback qabstractitemview_sizehintforrow_callback = nullptr;
	mutable QAbstractItemView_SizeHintForColumn_Callback qabstractitemview_sizehintforcolumn_callback = nullptr;
	mutable QAbstractItemView_ItemDelegateForIndex_Callback qabstractitemview_itemdelegateforindex_callback = nullptr;
	mutable QAbstractItemView_InputMethodQuery_Callback qabstractitemview_inputmethodquery_callback = nullptr;
	mutable QAbstractItemView_Reset_Callback qabstractitemview_reset_callback = nullptr;
	mutable QAbstractItemView_SetRootIndex_Callback qabstractitemview_setrootindex_callback = nullptr;
	mutable QAbstractItemView_DoItemsLayout_Callback qabstractitemview_doitemslayout_callback = nullptr;
	mutable QAbstractItemView_SelectAll_Callback qabstractitemview_selectall_callback = nullptr;
	mutable QAbstractItemView_DataChanged_Callback qabstractitemview_datachanged_callback = nullptr;
	mutable QAbstractItemView_RowsInserted_Callback qabstractitemview_rowsinserted_callback = nullptr;
	mutable QAbstractItemView_RowsAboutToBeRemoved_Callback qabstractitemview_rowsabouttoberemoved_callback = nullptr;
	mutable QAbstractItemView_SelectionChanged_Callback qabstractitemview_selectionchanged_callback = nullptr;
	mutable QAbstractItemView_CurrentChanged_Callback qabstractitemview_currentchanged_callback = nullptr;
	mutable QAbstractItemView_UpdateEditorData_Callback qabstractitemview_updateeditordata_callback = nullptr;
	mutable QAbstractItemView_UpdateEditorGeometries_Callback qabstractitemview_updateeditorgeometries_callback = nullptr;
	mutable QAbstractItemView_UpdateGeometries_Callback qabstractitemview_updategeometries_callback = nullptr;
	mutable QAbstractItemView_VerticalScrollbarAction_Callback qabstractitemview_verticalscrollbaraction_callback = nullptr;
	mutable QAbstractItemView_HorizontalScrollbarAction_Callback qabstractitemview_horizontalscrollbaraction_callback = nullptr;
	mutable QAbstractItemView_VerticalScrollbarValueChanged_Callback qabstractitemview_verticalscrollbarvaluechanged_callback = nullptr;
	mutable QAbstractItemView_HorizontalScrollbarValueChanged_Callback qabstractitemview_horizontalscrollbarvaluechanged_callback = nullptr;
	mutable QAbstractItemView_CloseEditor_Callback qabstractitemview_closeeditor_callback = nullptr;
	mutable QAbstractItemView_CommitData_Callback qabstractitemview_commitdata_callback = nullptr;
	mutable QAbstractItemView_EditorDestroyed_Callback qabstractitemview_editordestroyed_callback = nullptr;
	mutable QAbstractItemView_MoveCursor_Callback qabstractitemview_movecursor_callback = nullptr;
	mutable QAbstractItemView_HorizontalOffset_Callback qabstractitemview_horizontaloffset_callback = nullptr;
	mutable QAbstractItemView_VerticalOffset_Callback qabstractitemview_verticaloffset_callback = nullptr;
	mutable QAbstractItemView_IsIndexHidden_Callback qabstractitemview_isindexhidden_callback = nullptr;
	mutable QAbstractItemView_SetSelection_Callback qabstractitemview_setselection_callback = nullptr;
	mutable QAbstractItemView_VisualRegionForSelection_Callback qabstractitemview_visualregionforselection_callback = nullptr;
	mutable QAbstractItemView_SelectedIndexes_Callback qabstractitemview_selectedindexes_callback = nullptr;
	mutable QAbstractItemView_Edit2_Callback qabstractitemview_edit2_callback = nullptr;
	mutable QAbstractItemView_SelectionCommand_Callback qabstractitemview_selectioncommand_callback = nullptr;
	mutable QAbstractItemView_StartDrag_Callback qabstractitemview_startdrag_callback = nullptr;
	mutable QAbstractItemView_InitViewItemOption_Callback qabstractitemview_initviewitemoption_callback = nullptr;
	mutable QAbstractItemView_FocusNextPrevChild_Callback qabstractitemview_focusnextprevchild_callback = nullptr;
	mutable QAbstractItemView_Event_Callback qabstractitemview_event_callback = nullptr;
	mutable QAbstractItemView_ViewportEvent_Callback qabstractitemview_viewportevent_callback = nullptr;
	mutable QAbstractItemView_MousePressEvent_Callback qabstractitemview_mousepressevent_callback = nullptr;
	mutable QAbstractItemView_MouseMoveEvent_Callback qabstractitemview_mousemoveevent_callback = nullptr;
	mutable QAbstractItemView_MouseReleaseEvent_Callback qabstractitemview_mousereleaseevent_callback = nullptr;
	mutable QAbstractItemView_MouseDoubleClickEvent_Callback qabstractitemview_mousedoubleclickevent_callback = nullptr;
	mutable QAbstractItemView_DragEnterEvent_Callback qabstractitemview_dragenterevent_callback = nullptr;
	mutable QAbstractItemView_DragMoveEvent_Callback qabstractitemview_dragmoveevent_callback = nullptr;
	mutable QAbstractItemView_DragLeaveEvent_Callback qabstractitemview_dragleaveevent_callback = nullptr;
	mutable QAbstractItemView_DropEvent_Callback qabstractitemview_dropevent_callback = nullptr;
	mutable QAbstractItemView_FocusInEvent_Callback qabstractitemview_focusinevent_callback = nullptr;
	mutable QAbstractItemView_FocusOutEvent_Callback qabstractitemview_focusoutevent_callback = nullptr;
	mutable QAbstractItemView_KeyPressEvent_Callback qabstractitemview_keypressevent_callback = nullptr;
	mutable QAbstractItemView_ResizeEvent_Callback qabstractitemview_resizeevent_callback = nullptr;
	mutable QAbstractItemView_TimerEvent_Callback qabstractitemview_timerevent_callback = nullptr;
	mutable QAbstractItemView_InputMethodEvent_Callback qabstractitemview_inputmethodevent_callback = nullptr;
	mutable QAbstractItemView_EventFilter_Callback qabstractitemview_eventfilter_callback = nullptr;
	mutable QAbstractItemView_ViewportSizeHint_Callback qabstractitemview_viewportsizehint_callback = nullptr;
	mutable QAbstractItemView_State_Callback qabstractitemview_state_callback = nullptr;
	mutable QAbstractItemView_SetState_Callback qabstractitemview_setstate_callback = nullptr;
	mutable QAbstractItemView_ScheduleDelayedItemsLayout_Callback qabstractitemview_scheduledelayeditemslayout_callback = nullptr;
	mutable QAbstractItemView_ExecuteDelayedItemsLayout_Callback qabstractitemview_executedelayeditemslayout_callback = nullptr;
	mutable QAbstractItemView_SetDirtyRegion_Callback qabstractitemview_setdirtyregion_callback = nullptr;
	mutable QAbstractItemView_ScrollDirtyRegion_Callback qabstractitemview_scrolldirtyregion_callback = nullptr;
	mutable QAbstractItemView_DirtyRegionOffset_Callback qabstractitemview_dirtyregionoffset_callback = nullptr;
	mutable QAbstractItemView_StartAutoScroll_Callback qabstractitemview_startautoscroll_callback = nullptr;
	mutable QAbstractItemView_StopAutoScroll_Callback qabstractitemview_stopautoscroll_callback = nullptr;
	mutable QAbstractItemView_DoAutoScroll_Callback qabstractitemview_doautoscroll_callback = nullptr;
	mutable QAbstractItemView_DropIndicatorPosition_Callback qabstractitemview_dropindicatorposition_callback = nullptr;

	// Instance base flags
    mutable bool qabstractitemview_setmodel_isbase = false;
    mutable bool qabstractitemview_setselectionmodel_isbase = false;
    mutable bool qabstractitemview_keyboardsearch_isbase = false;
    mutable bool qabstractitemview_visualrect_isbase = false;
    mutable bool qabstractitemview_scrollto_isbase = false;
    mutable bool qabstractitemview_indexat_isbase = false;
    mutable bool qabstractitemview_sizehintforrow_isbase = false;
    mutable bool qabstractitemview_sizehintforcolumn_isbase = false;
    mutable bool qabstractitemview_itemdelegateforindex_isbase = false;
    mutable bool qabstractitemview_inputmethodquery_isbase = false;
    mutable bool qabstractitemview_reset_isbase = false;
    mutable bool qabstractitemview_setrootindex_isbase = false;
    mutable bool qabstractitemview_doitemslayout_isbase = false;
    mutable bool qabstractitemview_selectall_isbase = false;
    mutable bool qabstractitemview_datachanged_isbase = false;
    mutable bool qabstractitemview_rowsinserted_isbase = false;
    mutable bool qabstractitemview_rowsabouttoberemoved_isbase = false;
    mutable bool qabstractitemview_selectionchanged_isbase = false;
    mutable bool qabstractitemview_currentchanged_isbase = false;
    mutable bool qabstractitemview_updateeditordata_isbase = false;
    mutable bool qabstractitemview_updateeditorgeometries_isbase = false;
    mutable bool qabstractitemview_updategeometries_isbase = false;
    mutable bool qabstractitemview_verticalscrollbaraction_isbase = false;
    mutable bool qabstractitemview_horizontalscrollbaraction_isbase = false;
    mutable bool qabstractitemview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qabstractitemview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qabstractitemview_closeeditor_isbase = false;
    mutable bool qabstractitemview_commitdata_isbase = false;
    mutable bool qabstractitemview_editordestroyed_isbase = false;
    mutable bool qabstractitemview_movecursor_isbase = false;
    mutable bool qabstractitemview_horizontaloffset_isbase = false;
    mutable bool qabstractitemview_verticaloffset_isbase = false;
    mutable bool qabstractitemview_isindexhidden_isbase = false;
    mutable bool qabstractitemview_setselection_isbase = false;
    mutable bool qabstractitemview_visualregionforselection_isbase = false;
    mutable bool qabstractitemview_selectedindexes_isbase = false;
    mutable bool qabstractitemview_edit2_isbase = false;
    mutable bool qabstractitemview_selectioncommand_isbase = false;
    mutable bool qabstractitemview_startdrag_isbase = false;
    mutable bool qabstractitemview_initviewitemoption_isbase = false;
    mutable bool qabstractitemview_focusnextprevchild_isbase = false;
    mutable bool qabstractitemview_event_isbase = false;
    mutable bool qabstractitemview_viewportevent_isbase = false;
    mutable bool qabstractitemview_mousepressevent_isbase = false;
    mutable bool qabstractitemview_mousemoveevent_isbase = false;
    mutable bool qabstractitemview_mousereleaseevent_isbase = false;
    mutable bool qabstractitemview_mousedoubleclickevent_isbase = false;
    mutable bool qabstractitemview_dragenterevent_isbase = false;
    mutable bool qabstractitemview_dragmoveevent_isbase = false;
    mutable bool qabstractitemview_dragleaveevent_isbase = false;
    mutable bool qabstractitemview_dropevent_isbase = false;
    mutable bool qabstractitemview_focusinevent_isbase = false;
    mutable bool qabstractitemview_focusoutevent_isbase = false;
    mutable bool qabstractitemview_keypressevent_isbase = false;
    mutable bool qabstractitemview_resizeevent_isbase = false;
    mutable bool qabstractitemview_timerevent_isbase = false;
    mutable bool qabstractitemview_inputmethodevent_isbase = false;
    mutable bool qabstractitemview_eventfilter_isbase = false;
    mutable bool qabstractitemview_viewportsizehint_isbase = false;
    mutable bool qabstractitemview_state_isbase = false;
    mutable bool qabstractitemview_setstate_isbase = false;
    mutable bool qabstractitemview_scheduledelayeditemslayout_isbase = false;
    mutable bool qabstractitemview_executedelayeditemslayout_isbase = false;
    mutable bool qabstractitemview_setdirtyregion_isbase = false;
    mutable bool qabstractitemview_scrolldirtyregion_isbase = false;
    mutable bool qabstractitemview_dirtyregionoffset_isbase = false;
    mutable bool qabstractitemview_startautoscroll_isbase = false;
    mutable bool qabstractitemview_stopautoscroll_isbase = false;
    mutable bool qabstractitemview_doautoscroll_isbase = false;
    mutable bool qabstractitemview_dropindicatorposition_isbase = false;

public:
	VirtualQAbstractItemView(QWidget* parent): QAbstractItemView(parent) {};
	VirtualQAbstractItemView(): QAbstractItemView() {};

	~VirtualQAbstractItemView() {
		qabstractitemview_setmodel_callback = nullptr;
		qabstractitemview_setselectionmodel_callback = nullptr;
		qabstractitemview_keyboardsearch_callback = nullptr;
		qabstractitemview_visualrect_callback = nullptr;
		qabstractitemview_scrollto_callback = nullptr;
		qabstractitemview_indexat_callback = nullptr;
		qabstractitemview_sizehintforrow_callback = nullptr;
		qabstractitemview_sizehintforcolumn_callback = nullptr;
		qabstractitemview_itemdelegateforindex_callback = nullptr;
		qabstractitemview_inputmethodquery_callback = nullptr;
		qabstractitemview_reset_callback = nullptr;
		qabstractitemview_setrootindex_callback = nullptr;
		qabstractitemview_doitemslayout_callback = nullptr;
		qabstractitemview_selectall_callback = nullptr;
		qabstractitemview_datachanged_callback = nullptr;
		qabstractitemview_rowsinserted_callback = nullptr;
		qabstractitemview_rowsabouttoberemoved_callback = nullptr;
		qabstractitemview_selectionchanged_callback = nullptr;
		qabstractitemview_currentchanged_callback = nullptr;
		qabstractitemview_updateeditordata_callback = nullptr;
		qabstractitemview_updateeditorgeometries_callback = nullptr;
		qabstractitemview_updategeometries_callback = nullptr;
		qabstractitemview_verticalscrollbaraction_callback = nullptr;
		qabstractitemview_horizontalscrollbaraction_callback = nullptr;
		qabstractitemview_verticalscrollbarvaluechanged_callback = nullptr;
		qabstractitemview_horizontalscrollbarvaluechanged_callback = nullptr;
		qabstractitemview_closeeditor_callback = nullptr;
		qabstractitemview_commitdata_callback = nullptr;
		qabstractitemview_editordestroyed_callback = nullptr;
		qabstractitemview_movecursor_callback = nullptr;
		qabstractitemview_horizontaloffset_callback = nullptr;
		qabstractitemview_verticaloffset_callback = nullptr;
		qabstractitemview_isindexhidden_callback = nullptr;
		qabstractitemview_setselection_callback = nullptr;
		qabstractitemview_visualregionforselection_callback = nullptr;
		qabstractitemview_selectedindexes_callback = nullptr;
		qabstractitemview_edit2_callback = nullptr;
		qabstractitemview_selectioncommand_callback = nullptr;
		qabstractitemview_startdrag_callback = nullptr;
		qabstractitemview_initviewitemoption_callback = nullptr;
		qabstractitemview_focusnextprevchild_callback = nullptr;
		qabstractitemview_event_callback = nullptr;
		qabstractitemview_viewportevent_callback = nullptr;
		qabstractitemview_mousepressevent_callback = nullptr;
		qabstractitemview_mousemoveevent_callback = nullptr;
		qabstractitemview_mousereleaseevent_callback = nullptr;
		qabstractitemview_mousedoubleclickevent_callback = nullptr;
		qabstractitemview_dragenterevent_callback = nullptr;
		qabstractitemview_dragmoveevent_callback = nullptr;
		qabstractitemview_dragleaveevent_callback = nullptr;
		qabstractitemview_dropevent_callback = nullptr;
		qabstractitemview_focusinevent_callback = nullptr;
		qabstractitemview_focusoutevent_callback = nullptr;
		qabstractitemview_keypressevent_callback = nullptr;
		qabstractitemview_resizeevent_callback = nullptr;
		qabstractitemview_timerevent_callback = nullptr;
		qabstractitemview_inputmethodevent_callback = nullptr;
		qabstractitemview_eventfilter_callback = nullptr;
		qabstractitemview_viewportsizehint_callback = nullptr;
		qabstractitemview_state_callback = nullptr;
		qabstractitemview_setstate_callback = nullptr;
		qabstractitemview_scheduledelayeditemslayout_callback = nullptr;
		qabstractitemview_executedelayeditemslayout_callback = nullptr;
		qabstractitemview_setdirtyregion_callback = nullptr;
		qabstractitemview_scrolldirtyregion_callback = nullptr;
		qabstractitemview_dirtyregionoffset_callback = nullptr;
		qabstractitemview_startautoscroll_callback = nullptr;
		qabstractitemview_stopautoscroll_callback = nullptr;
		qabstractitemview_doautoscroll_callback = nullptr;
		qabstractitemview_dropindicatorposition_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractItemView_SetModel_Callback(QAbstractItemView_SetModel_Callback cb) const { qabstractitemview_setmodel_callback = cb; }
	inline void setQAbstractItemView_SetSelectionModel_Callback(QAbstractItemView_SetSelectionModel_Callback cb) const { qabstractitemview_setselectionmodel_callback = cb; }
	inline void setQAbstractItemView_KeyboardSearch_Callback(QAbstractItemView_KeyboardSearch_Callback cb) const { qabstractitemview_keyboardsearch_callback = cb; }
	inline void setQAbstractItemView_VisualRect_Callback(QAbstractItemView_VisualRect_Callback cb) const { qabstractitemview_visualrect_callback = cb; }
	inline void setQAbstractItemView_ScrollTo_Callback(QAbstractItemView_ScrollTo_Callback cb) const { qabstractitemview_scrollto_callback = cb; }
	inline void setQAbstractItemView_IndexAt_Callback(QAbstractItemView_IndexAt_Callback cb) const { qabstractitemview_indexat_callback = cb; }
	inline void setQAbstractItemView_SizeHintForRow_Callback(QAbstractItemView_SizeHintForRow_Callback cb) const { qabstractitemview_sizehintforrow_callback = cb; }
	inline void setQAbstractItemView_SizeHintForColumn_Callback(QAbstractItemView_SizeHintForColumn_Callback cb) const { qabstractitemview_sizehintforcolumn_callback = cb; }
	inline void setQAbstractItemView_ItemDelegateForIndex_Callback(QAbstractItemView_ItemDelegateForIndex_Callback cb) const { qabstractitemview_itemdelegateforindex_callback = cb; }
	inline void setQAbstractItemView_InputMethodQuery_Callback(QAbstractItemView_InputMethodQuery_Callback cb) const { qabstractitemview_inputmethodquery_callback = cb; }
	inline void setQAbstractItemView_Reset_Callback(QAbstractItemView_Reset_Callback cb) const { qabstractitemview_reset_callback = cb; }
	inline void setQAbstractItemView_SetRootIndex_Callback(QAbstractItemView_SetRootIndex_Callback cb) const { qabstractitemview_setrootindex_callback = cb; }
	inline void setQAbstractItemView_DoItemsLayout_Callback(QAbstractItemView_DoItemsLayout_Callback cb) const { qabstractitemview_doitemslayout_callback = cb; }
	inline void setQAbstractItemView_SelectAll_Callback(QAbstractItemView_SelectAll_Callback cb) const { qabstractitemview_selectall_callback = cb; }
	inline void setQAbstractItemView_DataChanged_Callback(QAbstractItemView_DataChanged_Callback cb) const { qabstractitemview_datachanged_callback = cb; }
	inline void setQAbstractItemView_RowsInserted_Callback(QAbstractItemView_RowsInserted_Callback cb) const { qabstractitemview_rowsinserted_callback = cb; }
	inline void setQAbstractItemView_RowsAboutToBeRemoved_Callback(QAbstractItemView_RowsAboutToBeRemoved_Callback cb) const { qabstractitemview_rowsabouttoberemoved_callback = cb; }
	inline void setQAbstractItemView_SelectionChanged_Callback(QAbstractItemView_SelectionChanged_Callback cb) const { qabstractitemview_selectionchanged_callback = cb; }
	inline void setQAbstractItemView_CurrentChanged_Callback(QAbstractItemView_CurrentChanged_Callback cb) const { qabstractitemview_currentchanged_callback = cb; }
	inline void setQAbstractItemView_UpdateEditorData_Callback(QAbstractItemView_UpdateEditorData_Callback cb) const { qabstractitemview_updateeditordata_callback = cb; }
	inline void setQAbstractItemView_UpdateEditorGeometries_Callback(QAbstractItemView_UpdateEditorGeometries_Callback cb) const { qabstractitemview_updateeditorgeometries_callback = cb; }
	inline void setQAbstractItemView_UpdateGeometries_Callback(QAbstractItemView_UpdateGeometries_Callback cb) const { qabstractitemview_updategeometries_callback = cb; }
	inline void setQAbstractItemView_VerticalScrollbarAction_Callback(QAbstractItemView_VerticalScrollbarAction_Callback cb) const { qabstractitemview_verticalscrollbaraction_callback = cb; }
	inline void setQAbstractItemView_HorizontalScrollbarAction_Callback(QAbstractItemView_HorizontalScrollbarAction_Callback cb) const { qabstractitemview_horizontalscrollbaraction_callback = cb; }
	inline void setQAbstractItemView_VerticalScrollbarValueChanged_Callback(QAbstractItemView_VerticalScrollbarValueChanged_Callback cb) const { qabstractitemview_verticalscrollbarvaluechanged_callback = cb; }
	inline void setQAbstractItemView_HorizontalScrollbarValueChanged_Callback(QAbstractItemView_HorizontalScrollbarValueChanged_Callback cb) const { qabstractitemview_horizontalscrollbarvaluechanged_callback = cb; }
	inline void setQAbstractItemView_CloseEditor_Callback(QAbstractItemView_CloseEditor_Callback cb) const { qabstractitemview_closeeditor_callback = cb; }
	inline void setQAbstractItemView_CommitData_Callback(QAbstractItemView_CommitData_Callback cb) const { qabstractitemview_commitdata_callback = cb; }
	inline void setQAbstractItemView_EditorDestroyed_Callback(QAbstractItemView_EditorDestroyed_Callback cb) const { qabstractitemview_editordestroyed_callback = cb; }
	inline void setQAbstractItemView_MoveCursor_Callback(QAbstractItemView_MoveCursor_Callback cb) const { qabstractitemview_movecursor_callback = cb; }
	inline void setQAbstractItemView_HorizontalOffset_Callback(QAbstractItemView_HorizontalOffset_Callback cb) const { qabstractitemview_horizontaloffset_callback = cb; }
	inline void setQAbstractItemView_VerticalOffset_Callback(QAbstractItemView_VerticalOffset_Callback cb) const { qabstractitemview_verticaloffset_callback = cb; }
	inline void setQAbstractItemView_IsIndexHidden_Callback(QAbstractItemView_IsIndexHidden_Callback cb) const { qabstractitemview_isindexhidden_callback = cb; }
	inline void setQAbstractItemView_SetSelection_Callback(QAbstractItemView_SetSelection_Callback cb) const { qabstractitemview_setselection_callback = cb; }
	inline void setQAbstractItemView_VisualRegionForSelection_Callback(QAbstractItemView_VisualRegionForSelection_Callback cb) const { qabstractitemview_visualregionforselection_callback = cb; }
	inline void setQAbstractItemView_SelectedIndexes_Callback(QAbstractItemView_SelectedIndexes_Callback cb) const { qabstractitemview_selectedindexes_callback = cb; }
	inline void setQAbstractItemView_Edit2_Callback(QAbstractItemView_Edit2_Callback cb) const { qabstractitemview_edit2_callback = cb; }
	inline void setQAbstractItemView_SelectionCommand_Callback(QAbstractItemView_SelectionCommand_Callback cb) const { qabstractitemview_selectioncommand_callback = cb; }
	inline void setQAbstractItemView_StartDrag_Callback(QAbstractItemView_StartDrag_Callback cb) const { qabstractitemview_startdrag_callback = cb; }
	inline void setQAbstractItemView_InitViewItemOption_Callback(QAbstractItemView_InitViewItemOption_Callback cb) const { qabstractitemview_initviewitemoption_callback = cb; }
	inline void setQAbstractItemView_FocusNextPrevChild_Callback(QAbstractItemView_FocusNextPrevChild_Callback cb) const { qabstractitemview_focusnextprevchild_callback = cb; }
	inline void setQAbstractItemView_Event_Callback(QAbstractItemView_Event_Callback cb) const { qabstractitemview_event_callback = cb; }
	inline void setQAbstractItemView_ViewportEvent_Callback(QAbstractItemView_ViewportEvent_Callback cb) const { qabstractitemview_viewportevent_callback = cb; }
	inline void setQAbstractItemView_MousePressEvent_Callback(QAbstractItemView_MousePressEvent_Callback cb) const { qabstractitemview_mousepressevent_callback = cb; }
	inline void setQAbstractItemView_MouseMoveEvent_Callback(QAbstractItemView_MouseMoveEvent_Callback cb) const { qabstractitemview_mousemoveevent_callback = cb; }
	inline void setQAbstractItemView_MouseReleaseEvent_Callback(QAbstractItemView_MouseReleaseEvent_Callback cb) const { qabstractitemview_mousereleaseevent_callback = cb; }
	inline void setQAbstractItemView_MouseDoubleClickEvent_Callback(QAbstractItemView_MouseDoubleClickEvent_Callback cb) const { qabstractitemview_mousedoubleclickevent_callback = cb; }
	inline void setQAbstractItemView_DragEnterEvent_Callback(QAbstractItemView_DragEnterEvent_Callback cb) const { qabstractitemview_dragenterevent_callback = cb; }
	inline void setQAbstractItemView_DragMoveEvent_Callback(QAbstractItemView_DragMoveEvent_Callback cb) const { qabstractitemview_dragmoveevent_callback = cb; }
	inline void setQAbstractItemView_DragLeaveEvent_Callback(QAbstractItemView_DragLeaveEvent_Callback cb) const { qabstractitemview_dragleaveevent_callback = cb; }
	inline void setQAbstractItemView_DropEvent_Callback(QAbstractItemView_DropEvent_Callback cb) const { qabstractitemview_dropevent_callback = cb; }
	inline void setQAbstractItemView_FocusInEvent_Callback(QAbstractItemView_FocusInEvent_Callback cb) const { qabstractitemview_focusinevent_callback = cb; }
	inline void setQAbstractItemView_FocusOutEvent_Callback(QAbstractItemView_FocusOutEvent_Callback cb) const { qabstractitemview_focusoutevent_callback = cb; }
	inline void setQAbstractItemView_KeyPressEvent_Callback(QAbstractItemView_KeyPressEvent_Callback cb) const { qabstractitemview_keypressevent_callback = cb; }
	inline void setQAbstractItemView_ResizeEvent_Callback(QAbstractItemView_ResizeEvent_Callback cb) const { qabstractitemview_resizeevent_callback = cb; }
	inline void setQAbstractItemView_TimerEvent_Callback(QAbstractItemView_TimerEvent_Callback cb) const { qabstractitemview_timerevent_callback = cb; }
	inline void setQAbstractItemView_InputMethodEvent_Callback(QAbstractItemView_InputMethodEvent_Callback cb) const { qabstractitemview_inputmethodevent_callback = cb; }
	inline void setQAbstractItemView_EventFilter_Callback(QAbstractItemView_EventFilter_Callback cb) const { qabstractitemview_eventfilter_callback = cb; }
	inline void setQAbstractItemView_ViewportSizeHint_Callback(QAbstractItemView_ViewportSizeHint_Callback cb) const { qabstractitemview_viewportsizehint_callback = cb; }
	inline void setQAbstractItemView_State_Callback(QAbstractItemView_State_Callback cb) const { qabstractitemview_state_callback = cb; }
	inline void setQAbstractItemView_SetState_Callback(QAbstractItemView_SetState_Callback cb) const { qabstractitemview_setstate_callback = cb; }
	inline void setQAbstractItemView_ScheduleDelayedItemsLayout_Callback(QAbstractItemView_ScheduleDelayedItemsLayout_Callback cb) const { qabstractitemview_scheduledelayeditemslayout_callback = cb; }
	inline void setQAbstractItemView_ExecuteDelayedItemsLayout_Callback(QAbstractItemView_ExecuteDelayedItemsLayout_Callback cb) const { qabstractitemview_executedelayeditemslayout_callback = cb; }
	inline void setQAbstractItemView_SetDirtyRegion_Callback(QAbstractItemView_SetDirtyRegion_Callback cb) const { qabstractitemview_setdirtyregion_callback = cb; }
	inline void setQAbstractItemView_ScrollDirtyRegion_Callback(QAbstractItemView_ScrollDirtyRegion_Callback cb) const { qabstractitemview_scrolldirtyregion_callback = cb; }
	inline void setQAbstractItemView_DirtyRegionOffset_Callback(QAbstractItemView_DirtyRegionOffset_Callback cb) const { qabstractitemview_dirtyregionoffset_callback = cb; }
	inline void setQAbstractItemView_StartAutoScroll_Callback(QAbstractItemView_StartAutoScroll_Callback cb) const { qabstractitemview_startautoscroll_callback = cb; }
	inline void setQAbstractItemView_StopAutoScroll_Callback(QAbstractItemView_StopAutoScroll_Callback cb) const { qabstractitemview_stopautoscroll_callback = cb; }
	inline void setQAbstractItemView_DoAutoScroll_Callback(QAbstractItemView_DoAutoScroll_Callback cb) const { qabstractitemview_doautoscroll_callback = cb; }
	inline void setQAbstractItemView_DropIndicatorPosition_Callback(QAbstractItemView_DropIndicatorPosition_Callback cb) const { qabstractitemview_dropindicatorposition_callback = cb; }

// Base flag setters
	inline void setQAbstractItemView_SetModel_IsBase(bool value) const { qabstractitemview_setmodel_isbase = value; }
	inline void setQAbstractItemView_SetSelectionModel_IsBase(bool value) const { qabstractitemview_setselectionmodel_isbase = value; }
	inline void setQAbstractItemView_KeyboardSearch_IsBase(bool value) const { qabstractitemview_keyboardsearch_isbase = value; }
	inline void setQAbstractItemView_VisualRect_IsBase(bool value) const { qabstractitemview_visualrect_isbase = value; }
	inline void setQAbstractItemView_ScrollTo_IsBase(bool value) const { qabstractitemview_scrollto_isbase = value; }
	inline void setQAbstractItemView_IndexAt_IsBase(bool value) const { qabstractitemview_indexat_isbase = value; }
	inline void setQAbstractItemView_SizeHintForRow_IsBase(bool value) const { qabstractitemview_sizehintforrow_isbase = value; }
	inline void setQAbstractItemView_SizeHintForColumn_IsBase(bool value) const { qabstractitemview_sizehintforcolumn_isbase = value; }
	inline void setQAbstractItemView_ItemDelegateForIndex_IsBase(bool value) const { qabstractitemview_itemdelegateforindex_isbase = value; }
	inline void setQAbstractItemView_InputMethodQuery_IsBase(bool value) const { qabstractitemview_inputmethodquery_isbase = value; }
	inline void setQAbstractItemView_Reset_IsBase(bool value) const { qabstractitemview_reset_isbase = value; }
	inline void setQAbstractItemView_SetRootIndex_IsBase(bool value) const { qabstractitemview_setrootindex_isbase = value; }
	inline void setQAbstractItemView_DoItemsLayout_IsBase(bool value) const { qabstractitemview_doitemslayout_isbase = value; }
	inline void setQAbstractItemView_SelectAll_IsBase(bool value) const { qabstractitemview_selectall_isbase = value; }
	inline void setQAbstractItemView_DataChanged_IsBase(bool value) const { qabstractitemview_datachanged_isbase = value; }
	inline void setQAbstractItemView_RowsInserted_IsBase(bool value) const { qabstractitemview_rowsinserted_isbase = value; }
	inline void setQAbstractItemView_RowsAboutToBeRemoved_IsBase(bool value) const { qabstractitemview_rowsabouttoberemoved_isbase = value; }
	inline void setQAbstractItemView_SelectionChanged_IsBase(bool value) const { qabstractitemview_selectionchanged_isbase = value; }
	inline void setQAbstractItemView_CurrentChanged_IsBase(bool value) const { qabstractitemview_currentchanged_isbase = value; }
	inline void setQAbstractItemView_UpdateEditorData_IsBase(bool value) const { qabstractitemview_updateeditordata_isbase = value; }
	inline void setQAbstractItemView_UpdateEditorGeometries_IsBase(bool value) const { qabstractitemview_updateeditorgeometries_isbase = value; }
	inline void setQAbstractItemView_UpdateGeometries_IsBase(bool value) const { qabstractitemview_updategeometries_isbase = value; }
	inline void setQAbstractItemView_VerticalScrollbarAction_IsBase(bool value) const { qabstractitemview_verticalscrollbaraction_isbase = value; }
	inline void setQAbstractItemView_HorizontalScrollbarAction_IsBase(bool value) const { qabstractitemview_horizontalscrollbaraction_isbase = value; }
	inline void setQAbstractItemView_VerticalScrollbarValueChanged_IsBase(bool value) const { qabstractitemview_verticalscrollbarvaluechanged_isbase = value; }
	inline void setQAbstractItemView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qabstractitemview_horizontalscrollbarvaluechanged_isbase = value; }
	inline void setQAbstractItemView_CloseEditor_IsBase(bool value) const { qabstractitemview_closeeditor_isbase = value; }
	inline void setQAbstractItemView_CommitData_IsBase(bool value) const { qabstractitemview_commitdata_isbase = value; }
	inline void setQAbstractItemView_EditorDestroyed_IsBase(bool value) const { qabstractitemview_editordestroyed_isbase = value; }
	inline void setQAbstractItemView_MoveCursor_IsBase(bool value) const { qabstractitemview_movecursor_isbase = value; }
	inline void setQAbstractItemView_HorizontalOffset_IsBase(bool value) const { qabstractitemview_horizontaloffset_isbase = value; }
	inline void setQAbstractItemView_VerticalOffset_IsBase(bool value) const { qabstractitemview_verticaloffset_isbase = value; }
	inline void setQAbstractItemView_IsIndexHidden_IsBase(bool value) const { qabstractitemview_isindexhidden_isbase = value; }
	inline void setQAbstractItemView_SetSelection_IsBase(bool value) const { qabstractitemview_setselection_isbase = value; }
	inline void setQAbstractItemView_VisualRegionForSelection_IsBase(bool value) const { qabstractitemview_visualregionforselection_isbase = value; }
	inline void setQAbstractItemView_SelectedIndexes_IsBase(bool value) const { qabstractitemview_selectedindexes_isbase = value; }
	inline void setQAbstractItemView_Edit2_IsBase(bool value) const { qabstractitemview_edit2_isbase = value; }
	inline void setQAbstractItemView_SelectionCommand_IsBase(bool value) const { qabstractitemview_selectioncommand_isbase = value; }
	inline void setQAbstractItemView_StartDrag_IsBase(bool value) const { qabstractitemview_startdrag_isbase = value; }
	inline void setQAbstractItemView_InitViewItemOption_IsBase(bool value) const { qabstractitemview_initviewitemoption_isbase = value; }
	inline void setQAbstractItemView_FocusNextPrevChild_IsBase(bool value) const { qabstractitemview_focusnextprevchild_isbase = value; }
	inline void setQAbstractItemView_Event_IsBase(bool value) const { qabstractitemview_event_isbase = value; }
	inline void setQAbstractItemView_ViewportEvent_IsBase(bool value) const { qabstractitemview_viewportevent_isbase = value; }
	inline void setQAbstractItemView_MousePressEvent_IsBase(bool value) const { qabstractitemview_mousepressevent_isbase = value; }
	inline void setQAbstractItemView_MouseMoveEvent_IsBase(bool value) const { qabstractitemview_mousemoveevent_isbase = value; }
	inline void setQAbstractItemView_MouseReleaseEvent_IsBase(bool value) const { qabstractitemview_mousereleaseevent_isbase = value; }
	inline void setQAbstractItemView_MouseDoubleClickEvent_IsBase(bool value) const { qabstractitemview_mousedoubleclickevent_isbase = value; }
	inline void setQAbstractItemView_DragEnterEvent_IsBase(bool value) const { qabstractitemview_dragenterevent_isbase = value; }
	inline void setQAbstractItemView_DragMoveEvent_IsBase(bool value) const { qabstractitemview_dragmoveevent_isbase = value; }
	inline void setQAbstractItemView_DragLeaveEvent_IsBase(bool value) const { qabstractitemview_dragleaveevent_isbase = value; }
	inline void setQAbstractItemView_DropEvent_IsBase(bool value) const { qabstractitemview_dropevent_isbase = value; }
	inline void setQAbstractItemView_FocusInEvent_IsBase(bool value) const { qabstractitemview_focusinevent_isbase = value; }
	inline void setQAbstractItemView_FocusOutEvent_IsBase(bool value) const { qabstractitemview_focusoutevent_isbase = value; }
	inline void setQAbstractItemView_KeyPressEvent_IsBase(bool value) const { qabstractitemview_keypressevent_isbase = value; }
	inline void setQAbstractItemView_ResizeEvent_IsBase(bool value) const { qabstractitemview_resizeevent_isbase = value; }
	inline void setQAbstractItemView_TimerEvent_IsBase(bool value) const { qabstractitemview_timerevent_isbase = value; }
	inline void setQAbstractItemView_InputMethodEvent_IsBase(bool value) const { qabstractitemview_inputmethodevent_isbase = value; }
	inline void setQAbstractItemView_EventFilter_IsBase(bool value) const { qabstractitemview_eventfilter_isbase = value; }
	inline void setQAbstractItemView_ViewportSizeHint_IsBase(bool value) const { qabstractitemview_viewportsizehint_isbase = value; }
	inline void setQAbstractItemView_State_IsBase(bool value) const { qabstractitemview_state_isbase = value; }
	inline void setQAbstractItemView_SetState_IsBase(bool value) const { qabstractitemview_setstate_isbase = value; }
	inline void setQAbstractItemView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qabstractitemview_scheduledelayeditemslayout_isbase = value; }
	inline void setQAbstractItemView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qabstractitemview_executedelayeditemslayout_isbase = value; }
	inline void setQAbstractItemView_SetDirtyRegion_IsBase(bool value) const { qabstractitemview_setdirtyregion_isbase = value; }
	inline void setQAbstractItemView_ScrollDirtyRegion_IsBase(bool value) const { qabstractitemview_scrolldirtyregion_isbase = value; }
	inline void setQAbstractItemView_DirtyRegionOffset_IsBase(bool value) const { qabstractitemview_dirtyregionoffset_isbase = value; }
	inline void setQAbstractItemView_StartAutoScroll_IsBase(bool value) const { qabstractitemview_startautoscroll_isbase = value; }
	inline void setQAbstractItemView_StopAutoScroll_IsBase(bool value) const { qabstractitemview_stopautoscroll_isbase = value; }
	inline void setQAbstractItemView_DoAutoScroll_IsBase(bool value) const { qabstractitemview_doautoscroll_isbase = value; }
	inline void setQAbstractItemView_DropIndicatorPosition_IsBase(bool value) const { qabstractitemview_dropindicatorposition_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setModel(QAbstractItemModel* model) override {
		if (qabstractitemview_setmodel_isbase) {
			qabstractitemview_setmodel_isbase = false;
			QAbstractItemView::setModel(model);
		} else if (qabstractitemview_setmodel_callback != nullptr) {
			QAbstractItemModel* cbval1 = model;
			qabstractitemview_setmodel_callback(this, cbval1);
		} else {
			QAbstractItemView::setModel(model);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (qabstractitemview_setselectionmodel_isbase) {
			qabstractitemview_setselectionmodel_isbase = false;
			QAbstractItemView::setSelectionModel(selectionModel);
		} else if (qabstractitemview_setselectionmodel_callback != nullptr) {
			QItemSelectionModel* cbval1 = selectionModel;
			qabstractitemview_setselectionmodel_callback(this, cbval1);
		} else {
			QAbstractItemView::setSelectionModel(selectionModel);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyboardSearch(const QString& search) override {
		if (qabstractitemview_keyboardsearch_isbase) {
			qabstractitemview_keyboardsearch_isbase = false;
			QAbstractItemView::keyboardSearch(search);
		} else if (qabstractitemview_keyboardsearch_callback != nullptr) {
			QByteArray search_qb = search.toUtf8();
			libqt_string cbval1;
			cbval1.len = search_qb.length();
			cbval1.data = static_cast<const char*>(search_qb.constData());
			qabstractitemview_keyboardsearch_callback(this, cbval1);
		} else {
			QAbstractItemView::keyboardSearch(search);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (qabstractitemview_visualrect_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QRect* callback_ret = qabstractitemview_visualrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollTo(const QModelIndex& index, ScrollHint hint) override {
		if (qabstractitemview_scrollto_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = static_cast<int>(hint);
			qabstractitemview_scrollto_callback(this, cbval1, cbval2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex indexAt(const QPoint& point) const override {
		if (qabstractitemview_indexat_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&point;
			QModelIndex* callback_ret = qabstractitemview_indexat_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int sizeHintForRow(int row) const override {
		if (qabstractitemview_sizehintforrow_isbase) {
			qabstractitemview_sizehintforrow_isbase = false;
			return QAbstractItemView::sizeHintForRow(row);
		} else if (qabstractitemview_sizehintforrow_callback != nullptr) {
			int cbval1 = row;
			int callback_ret = qabstractitemview_sizehintforrow_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractItemView::sizeHintForRow(row);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int sizeHintForColumn(int column) const override {
		if (qabstractitemview_sizehintforcolumn_isbase) {
			qabstractitemview_sizehintforcolumn_isbase = false;
			return QAbstractItemView::sizeHintForColumn(column);
		} else if (qabstractitemview_sizehintforcolumn_callback != nullptr) {
			int cbval1 = column;
			int callback_ret = qabstractitemview_sizehintforcolumn_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractItemView::sizeHintForColumn(column);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
		if (qabstractitemview_itemdelegateforindex_isbase) {
			qabstractitemview_itemdelegateforindex_isbase = false;
			return QAbstractItemView::itemDelegateForIndex(index);
		} else if (qabstractitemview_itemdelegateforindex_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QAbstractItemDelegate* callback_ret = qabstractitemview_itemdelegateforindex_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractItemView::itemDelegateForIndex(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (qabstractitemview_inputmethodquery_isbase) {
			qabstractitemview_inputmethodquery_isbase = false;
			return QAbstractItemView::inputMethodQuery(query);
		} else if (qabstractitemview_inputmethodquery_callback != nullptr) {
			int cbval1 = static_cast<int>(query);
			QVariant* callback_ret = qabstractitemview_inputmethodquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QAbstractItemView::inputMethodQuery(query);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void reset() override {
		if (qabstractitemview_reset_isbase) {
			qabstractitemview_reset_isbase = false;
			QAbstractItemView::reset();
		} else if (qabstractitemview_reset_callback != nullptr) {
			qabstractitemview_reset_callback();
		} else {
			QAbstractItemView::reset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setRootIndex(const QModelIndex& index) override {
		if (qabstractitemview_setrootindex_isbase) {
			qabstractitemview_setrootindex_isbase = false;
			QAbstractItemView::setRootIndex(index);
		} else if (qabstractitemview_setrootindex_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			qabstractitemview_setrootindex_callback(this, cbval1);
		} else {
			QAbstractItemView::setRootIndex(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void doItemsLayout() override {
		if (qabstractitemview_doitemslayout_isbase) {
			qabstractitemview_doitemslayout_isbase = false;
			QAbstractItemView::doItemsLayout();
		} else if (qabstractitemview_doitemslayout_callback != nullptr) {
			qabstractitemview_doitemslayout_callback();
		} else {
			QAbstractItemView::doItemsLayout();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void selectAll() override {
		if (qabstractitemview_selectall_isbase) {
			qabstractitemview_selectall_isbase = false;
			QAbstractItemView::selectAll();
		} else if (qabstractitemview_selectall_callback != nullptr) {
			qabstractitemview_selectall_callback();
		} else {
			QAbstractItemView::selectAll();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (qabstractitemview_datachanged_isbase) {
			qabstractitemview_datachanged_isbase = false;
			QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
		} else if (qabstractitemview_datachanged_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&topLeft;
			const QModelIndex* cbval2 = (const QModelIndex*)&bottomRight;
			libqt_list cbval3 = roles;
			qabstractitemview_datachanged_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (qabstractitemview_rowsinserted_isbase) {
			qabstractitemview_rowsinserted_isbase = false;
			QAbstractItemView::rowsInserted(parent, start, end);
		} else if (qabstractitemview_rowsinserted_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = start;
			int cbval3 = end;
			qabstractitemview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractItemView::rowsInserted(parent, start, end);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (qabstractitemview_rowsabouttoberemoved_isbase) {
			qabstractitemview_rowsabouttoberemoved_isbase = false;
			QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
		} else if (qabstractitemview_rowsabouttoberemoved_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = start;
			int cbval3 = end;
			qabstractitemview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (qabstractitemview_selectionchanged_isbase) {
			qabstractitemview_selectionchanged_isbase = false;
			QAbstractItemView::selectionChanged(selected, deselected);
		} else if (qabstractitemview_selectionchanged_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selected;
			const QItemSelection* cbval2 = (const QItemSelection*)&deselected;
			qabstractitemview_selectionchanged_callback(this, cbval1, cbval2);
		} else {
			QAbstractItemView::selectionChanged(selected, deselected);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (qabstractitemview_currentchanged_isbase) {
			qabstractitemview_currentchanged_isbase = false;
			QAbstractItemView::currentChanged(current, previous);
		} else if (qabstractitemview_currentchanged_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&current;
			const QModelIndex* cbval2 = (const QModelIndex*)&previous;
			qabstractitemview_currentchanged_callback(this, cbval1, cbval2);
		} else {
			QAbstractItemView::currentChanged(current, previous);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateEditorData() override {
		if (qabstractitemview_updateeditordata_isbase) {
			qabstractitemview_updateeditordata_isbase = false;
			QAbstractItemView::updateEditorData();
		} else if (qabstractitemview_updateeditordata_callback != nullptr) {
			qabstractitemview_updateeditordata_callback();
		} else {
			QAbstractItemView::updateEditorData();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateEditorGeometries() override {
		if (qabstractitemview_updateeditorgeometries_isbase) {
			qabstractitemview_updateeditorgeometries_isbase = false;
			QAbstractItemView::updateEditorGeometries();
		} else if (qabstractitemview_updateeditorgeometries_callback != nullptr) {
			qabstractitemview_updateeditorgeometries_callback();
		} else {
			QAbstractItemView::updateEditorGeometries();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateGeometries() override {
		if (qabstractitemview_updategeometries_isbase) {
			qabstractitemview_updategeometries_isbase = false;
			QAbstractItemView::updateGeometries();
		} else if (qabstractitemview_updategeometries_callback != nullptr) {
			qabstractitemview_updategeometries_callback();
		} else {
			QAbstractItemView::updateGeometries();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void verticalScrollbarAction(int action) override {
		if (qabstractitemview_verticalscrollbaraction_isbase) {
			qabstractitemview_verticalscrollbaraction_isbase = false;
			QAbstractItemView::verticalScrollbarAction(action);
		} else if (qabstractitemview_verticalscrollbaraction_callback != nullptr) {
			int cbval1 = action;
			qabstractitemview_verticalscrollbaraction_callback(this, cbval1);
		} else {
			QAbstractItemView::verticalScrollbarAction(action);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void horizontalScrollbarAction(int action) override {
		if (qabstractitemview_horizontalscrollbaraction_isbase) {
			qabstractitemview_horizontalscrollbaraction_isbase = false;
			QAbstractItemView::horizontalScrollbarAction(action);
		} else if (qabstractitemview_horizontalscrollbaraction_callback != nullptr) {
			int cbval1 = action;
			qabstractitemview_horizontalscrollbaraction_callback(this, cbval1);
		} else {
			QAbstractItemView::horizontalScrollbarAction(action);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void verticalScrollbarValueChanged(int value) override {
		if (qabstractitemview_verticalscrollbarvaluechanged_isbase) {
			qabstractitemview_verticalscrollbarvaluechanged_isbase = false;
			QAbstractItemView::verticalScrollbarValueChanged(value);
		} else if (qabstractitemview_verticalscrollbarvaluechanged_callback != nullptr) {
			int cbval1 = value;
			qabstractitemview_verticalscrollbarvaluechanged_callback(this, cbval1);
		} else {
			QAbstractItemView::verticalScrollbarValueChanged(value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (qabstractitemview_horizontalscrollbarvaluechanged_isbase) {
			qabstractitemview_horizontalscrollbarvaluechanged_isbase = false;
			QAbstractItemView::horizontalScrollbarValueChanged(value);
		} else if (qabstractitemview_horizontalscrollbarvaluechanged_callback != nullptr) {
			int cbval1 = value;
			qabstractitemview_horizontalscrollbarvaluechanged_callback(this, cbval1);
		} else {
			QAbstractItemView::horizontalScrollbarValueChanged(value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (qabstractitemview_closeeditor_isbase) {
			qabstractitemview_closeeditor_isbase = false;
			QAbstractItemView::closeEditor(editor, hint);
		} else if (qabstractitemview_closeeditor_callback != nullptr) {
			QWidget* cbval1 = editor;
			int cbval2 = static_cast<int>(hint);
			qabstractitemview_closeeditor_callback(this, cbval1, cbval2);
		} else {
			QAbstractItemView::closeEditor(editor, hint);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void commitData(QWidget* editor) override {
		if (qabstractitemview_commitdata_isbase) {
			qabstractitemview_commitdata_isbase = false;
			QAbstractItemView::commitData(editor);
		} else if (qabstractitemview_commitdata_callback != nullptr) {
			QWidget* cbval1 = editor;
			qabstractitemview_commitdata_callback(this, cbval1);
		} else {
			QAbstractItemView::commitData(editor);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void editorDestroyed(QObject* editor) override {
		if (qabstractitemview_editordestroyed_isbase) {
			qabstractitemview_editordestroyed_isbase = false;
			QAbstractItemView::editorDestroyed(editor);
		} else if (qabstractitemview_editordestroyed_callback != nullptr) {
			QObject* cbval1 = editor;
			qabstractitemview_editordestroyed_callback(this, cbval1);
		} else {
			QAbstractItemView::editorDestroyed(editor);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex moveCursor(CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (qabstractitemview_movecursor_callback != nullptr) {
			int cbval1 = static_cast<int>(cursorAction);
			int cbval2 = static_cast<int>(modifiers);
			QModelIndex* callback_ret = qabstractitemview_movecursor_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int horizontalOffset() const override {
		if (qabstractitemview_horizontaloffset_callback != nullptr) {
			int callback_ret = qabstractitemview_horizontaloffset_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int verticalOffset() const override {
		if (qabstractitemview_verticaloffset_callback != nullptr) {
			int callback_ret = qabstractitemview_verticaloffset_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (qabstractitemview_isindexhidden_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			bool callback_ret = qabstractitemview_isindexhidden_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (qabstractitemview_setselection_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&rect;
			int cbval2 = static_cast<int>(command);
			qabstractitemview_setselection_callback(this, cbval1, cbval2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (qabstractitemview_visualregionforselection_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selection;
			QRegion* callback_ret = qabstractitemview_visualregionforselection_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QModelIndex> selectedIndexes() const override {
		if (qabstractitemview_selectedindexes_isbase) {
			qabstractitemview_selectedindexes_isbase = false;
			return QAbstractItemView::selectedIndexes();
		} else if (qabstractitemview_selectedindexes_callback != nullptr) {
			libqt_list callback_ret = qabstractitemview_selectedindexes_callback();
			return callback_ret;
		} else {
			return QAbstractItemView::selectedIndexes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool edit(const QModelIndex& index, EditTrigger trigger, QEvent* event) override {
		if (qabstractitemview_edit2_isbase) {
			qabstractitemview_edit2_isbase = false;
			return QAbstractItemView::edit(index, trigger, event);
		} else if (qabstractitemview_edit2_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = static_cast<int>(trigger);
			QEvent* cbval3 = event;
			bool callback_ret = qabstractitemview_edit2_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QAbstractItemView::edit(index, trigger, event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<QItemSelectionModel::SelectionFlag> selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (qabstractitemview_selectioncommand_isbase) {
			qabstractitemview_selectioncommand_isbase = false;
			return QAbstractItemView::selectionCommand(index, event);
		} else if (qabstractitemview_selectioncommand_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			const QEvent* cbval2 = event;
			int callback_ret = qabstractitemview_selectioncommand_callback(this, cbval1, cbval2);
			return static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(callback_ret);
		} else {
			return QAbstractItemView::selectionCommand(index, event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (qabstractitemview_startdrag_isbase) {
			qabstractitemview_startdrag_isbase = false;
			QAbstractItemView::startDrag(supportedActions);
		} else if (qabstractitemview_startdrag_callback != nullptr) {
			int cbval1 = static_cast<int>(supportedActions);
			qabstractitemview_startdrag_callback(this, cbval1);
		} else {
			QAbstractItemView::startDrag(supportedActions);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (qabstractitemview_initviewitemoption_isbase) {
			qabstractitemview_initviewitemoption_isbase = false;
			QAbstractItemView::initViewItemOption(option);
		} else if (qabstractitemview_initviewitemoption_callback != nullptr) {
			QStyleOptionViewItem* cbval1 = option;
			qabstractitemview_initviewitemoption_callback(this, cbval1);
		} else {
			QAbstractItemView::initViewItemOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool focusNextPrevChild(bool next) override {
		if (qabstractitemview_focusnextprevchild_isbase) {
			qabstractitemview_focusnextprevchild_isbase = false;
			return QAbstractItemView::focusNextPrevChild(next);
		} else if (qabstractitemview_focusnextprevchild_callback != nullptr) {
			bool cbval1 = next;
			bool callback_ret = qabstractitemview_focusnextprevchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractItemView::focusNextPrevChild(next);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qabstractitemview_event_isbase) {
			qabstractitemview_event_isbase = false;
			return QAbstractItemView::event(event);
		} else if (qabstractitemview_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qabstractitemview_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractItemView::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool viewportEvent(QEvent* event) override {
		if (qabstractitemview_viewportevent_isbase) {
			qabstractitemview_viewportevent_isbase = false;
			return QAbstractItemView::viewportEvent(event);
		} else if (qabstractitemview_viewportevent_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qabstractitemview_viewportevent_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractItemView::viewportEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (qabstractitemview_mousepressevent_isbase) {
			qabstractitemview_mousepressevent_isbase = false;
			QAbstractItemView::mousePressEvent(event);
		} else if (qabstractitemview_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qabstractitemview_mousepressevent_callback(this, cbval1);
		} else {
			QAbstractItemView::mousePressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (qabstractitemview_mousemoveevent_isbase) {
			qabstractitemview_mousemoveevent_isbase = false;
			QAbstractItemView::mouseMoveEvent(event);
		} else if (qabstractitemview_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qabstractitemview_mousemoveevent_callback(this, cbval1);
		} else {
			QAbstractItemView::mouseMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (qabstractitemview_mousereleaseevent_isbase) {
			qabstractitemview_mousereleaseevent_isbase = false;
			QAbstractItemView::mouseReleaseEvent(event);
		} else if (qabstractitemview_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qabstractitemview_mousereleaseevent_callback(this, cbval1);
		} else {
			QAbstractItemView::mouseReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (qabstractitemview_mousedoubleclickevent_isbase) {
			qabstractitemview_mousedoubleclickevent_isbase = false;
			QAbstractItemView::mouseDoubleClickEvent(event);
		} else if (qabstractitemview_mousedoubleclickevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qabstractitemview_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QAbstractItemView::mouseDoubleClickEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (qabstractitemview_dragenterevent_isbase) {
			qabstractitemview_dragenterevent_isbase = false;
			QAbstractItemView::dragEnterEvent(event);
		} else if (qabstractitemview_dragenterevent_callback != nullptr) {
			QDragEnterEvent* cbval1 = event;
			qabstractitemview_dragenterevent_callback(this, cbval1);
		} else {
			QAbstractItemView::dragEnterEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (qabstractitemview_dragmoveevent_isbase) {
			qabstractitemview_dragmoveevent_isbase = false;
			QAbstractItemView::dragMoveEvent(event);
		} else if (qabstractitemview_dragmoveevent_callback != nullptr) {
			QDragMoveEvent* cbval1 = event;
			qabstractitemview_dragmoveevent_callback(this, cbval1);
		} else {
			QAbstractItemView::dragMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (qabstractitemview_dragleaveevent_isbase) {
			qabstractitemview_dragleaveevent_isbase = false;
			QAbstractItemView::dragLeaveEvent(event);
		} else if (qabstractitemview_dragleaveevent_callback != nullptr) {
			QDragLeaveEvent* cbval1 = event;
			qabstractitemview_dragleaveevent_callback(this, cbval1);
		} else {
			QAbstractItemView::dragLeaveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QDropEvent* event) override {
		if (qabstractitemview_dropevent_isbase) {
			qabstractitemview_dropevent_isbase = false;
			QAbstractItemView::dropEvent(event);
		} else if (qabstractitemview_dropevent_callback != nullptr) {
			QDropEvent* cbval1 = event;
			qabstractitemview_dropevent_callback(this, cbval1);
		} else {
			QAbstractItemView::dropEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* event) override {
		if (qabstractitemview_focusinevent_isbase) {
			qabstractitemview_focusinevent_isbase = false;
			QAbstractItemView::focusInEvent(event);
		} else if (qabstractitemview_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qabstractitemview_focusinevent_callback(this, cbval1);
		} else {
			QAbstractItemView::focusInEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (qabstractitemview_focusoutevent_isbase) {
			qabstractitemview_focusoutevent_isbase = false;
			QAbstractItemView::focusOutEvent(event);
		} else if (qabstractitemview_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qabstractitemview_focusoutevent_callback(this, cbval1);
		} else {
			QAbstractItemView::focusOutEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (qabstractitemview_keypressevent_isbase) {
			qabstractitemview_keypressevent_isbase = false;
			QAbstractItemView::keyPressEvent(event);
		} else if (qabstractitemview_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qabstractitemview_keypressevent_callback(this, cbval1);
		} else {
			QAbstractItemView::keyPressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qabstractitemview_resizeevent_isbase) {
			qabstractitemview_resizeevent_isbase = false;
			QAbstractItemView::resizeEvent(event);
		} else if (qabstractitemview_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qabstractitemview_resizeevent_callback(this, cbval1);
		} else {
			QAbstractItemView::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* event) override {
		if (qabstractitemview_timerevent_isbase) {
			qabstractitemview_timerevent_isbase = false;
			QAbstractItemView::timerEvent(event);
		} else if (qabstractitemview_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = event;
			qabstractitemview_timerevent_callback(this, cbval1);
		} else {
			QAbstractItemView::timerEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (qabstractitemview_inputmethodevent_isbase) {
			qabstractitemview_inputmethodevent_isbase = false;
			QAbstractItemView::inputMethodEvent(event);
		} else if (qabstractitemview_inputmethodevent_callback != nullptr) {
			QInputMethodEvent* cbval1 = event;
			qabstractitemview_inputmethodevent_callback(this, cbval1);
		} else {
			QAbstractItemView::inputMethodEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (qabstractitemview_eventfilter_isbase) {
			qabstractitemview_eventfilter_isbase = false;
			return QAbstractItemView::eventFilter(object, event);
		} else if (qabstractitemview_eventfilter_callback != nullptr) {
			QObject* cbval1 = object;
			QEvent* cbval2 = event;
			bool callback_ret = qabstractitemview_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QAbstractItemView::eventFilter(object, event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize viewportSizeHint() const override {
		if (qabstractitemview_viewportsizehint_isbase) {
			qabstractitemview_viewportsizehint_isbase = false;
			return QAbstractItemView::viewportSizeHint();
		} else if (qabstractitemview_viewportsizehint_callback != nullptr) {
			QSize* callback_ret = qabstractitemview_viewportsizehint_callback();
			return *callback_ret;
		} else {
			return QAbstractItemView::viewportSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	QFlags<QStyle::StateFlag> state() const {
		if (qabstractitemview_state_isbase) {
			qabstractitemview_state_isbase = false;
			return QAbstractItemView::state();
		} else if (qabstractitemview_state_callback != nullptr) {
			int callback_ret = qabstractitemview_state_callback();
			return static_cast<QFlags<QStyle::StateFlag>>(callback_ret);
		} else {
			return QAbstractItemView::state();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setState(QStyle::State state) {
		if (qabstractitemview_setstate_isbase) {
			qabstractitemview_setstate_isbase = false;
			QAbstractItemView::setState(state);
		} else if (qabstractitemview_setstate_callback != nullptr) {
			int cbval1 = static_cast<int>(state);
			qabstractitemview_setstate_callback(this, cbval1);
		} else {
			QAbstractItemView::setState(state);
		}
	}

	// Virtual method for C ABI access and custom callback
	void scheduleDelayedItemsLayout() {
		if (qabstractitemview_scheduledelayeditemslayout_isbase) {
			qabstractitemview_scheduledelayeditemslayout_isbase = false;
			QAbstractItemView::scheduleDelayedItemsLayout();
		} else if (qabstractitemview_scheduledelayeditemslayout_callback != nullptr) {
			qabstractitemview_scheduledelayeditemslayout_callback();
		} else {
			QAbstractItemView::scheduleDelayedItemsLayout();
		}
	}

	// Virtual method for C ABI access and custom callback
	void executeDelayedItemsLayout() {
		if (qabstractitemview_executedelayeditemslayout_isbase) {
			qabstractitemview_executedelayeditemslayout_isbase = false;
			QAbstractItemView::executeDelayedItemsLayout();
		} else if (qabstractitemview_executedelayeditemslayout_callback != nullptr) {
			qabstractitemview_executedelayeditemslayout_callback();
		} else {
			QAbstractItemView::executeDelayedItemsLayout();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setDirtyRegion(const QRegion& region) {
		if (qabstractitemview_setdirtyregion_isbase) {
			qabstractitemview_setdirtyregion_isbase = false;
			QAbstractItemView::setDirtyRegion(region);
		} else if (qabstractitemview_setdirtyregion_callback != nullptr) {
			const QRegion* cbval1 = (const QRegion*)&region;
			qabstractitemview_setdirtyregion_callback(this, cbval1);
		} else {
			QAbstractItemView::setDirtyRegion(region);
		}
	}

	// Virtual method for C ABI access and custom callback
	void scrollDirtyRegion(int dx, int dy) {
		if (qabstractitemview_scrolldirtyregion_isbase) {
			qabstractitemview_scrolldirtyregion_isbase = false;
			QAbstractItemView::scrollDirtyRegion(dx, dy);
		} else if (qabstractitemview_scrolldirtyregion_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qabstractitemview_scrolldirtyregion_callback(this, cbval1, cbval2);
		} else {
			QAbstractItemView::scrollDirtyRegion(dx, dy);
		}
	}

	// Virtual method for C ABI access and custom callback
	QPoint dirtyRegionOffset() const {
		if (qabstractitemview_dirtyregionoffset_isbase) {
			qabstractitemview_dirtyregionoffset_isbase = false;
			return QAbstractItemView::dirtyRegionOffset();
		} else if (qabstractitemview_dirtyregionoffset_callback != nullptr) {
			QPoint* callback_ret = qabstractitemview_dirtyregionoffset_callback();
			return *callback_ret;
		} else {
			return QAbstractItemView::dirtyRegionOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	void startAutoScroll() {
		if (qabstractitemview_startautoscroll_isbase) {
			qabstractitemview_startautoscroll_isbase = false;
			QAbstractItemView::startAutoScroll();
		} else if (qabstractitemview_startautoscroll_callback != nullptr) {
			qabstractitemview_startautoscroll_callback();
		} else {
			QAbstractItemView::startAutoScroll();
		}
	}

	// Virtual method for C ABI access and custom callback
	void stopAutoScroll() {
		if (qabstractitemview_stopautoscroll_isbase) {
			qabstractitemview_stopautoscroll_isbase = false;
			QAbstractItemView::stopAutoScroll();
		} else if (qabstractitemview_stopautoscroll_callback != nullptr) {
			qabstractitemview_stopautoscroll_callback();
		} else {
			QAbstractItemView::stopAutoScroll();
		}
	}

	// Virtual method for C ABI access and custom callback
	void doAutoScroll() {
		if (qabstractitemview_doautoscroll_isbase) {
			qabstractitemview_doautoscroll_isbase = false;
			QAbstractItemView::doAutoScroll();
		} else if (qabstractitemview_doautoscroll_callback != nullptr) {
			qabstractitemview_doautoscroll_callback();
		} else {
			QAbstractItemView::doAutoScroll();
		}
	}

	// Virtual method for C ABI access and custom callback
	DropIndicatorPosition dropIndicatorPosition() const {
		if (qabstractitemview_dropindicatorposition_isbase) {
			qabstractitemview_dropindicatorposition_isbase = false;
			return QAbstractItemView::dropIndicatorPosition();
		} else if (qabstractitemview_dropindicatorposition_callback != nullptr) {
			int callback_ret = qabstractitemview_dropindicatorposition_callback();
			return static_cast<QAbstractItemView::DropIndicatorPosition>(callback_ret);
		} else {
			return QAbstractItemView::dropIndicatorPosition();
		}
	}

	// Friend functions
	friend void QAbstractItemView_DataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
	friend void QAbstractItemView_QBaseDataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
	friend void QAbstractItemView_RowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
	friend void QAbstractItemView_QBaseRowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
	friend void QAbstractItemView_RowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
	friend void QAbstractItemView_QBaseRowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end);
	friend void QAbstractItemView_SelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected);
	friend void QAbstractItemView_QBaseSelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected);
	friend void QAbstractItemView_CurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous);
	friend void QAbstractItemView_QBaseCurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous);
	friend void QAbstractItemView_UpdateEditorData(QAbstractItemView* self);
	friend void QAbstractItemView_QBaseUpdateEditorData(QAbstractItemView* self);
	friend void QAbstractItemView_UpdateEditorGeometries(QAbstractItemView* self);
	friend void QAbstractItemView_QBaseUpdateEditorGeometries(QAbstractItemView* self);
	friend void QAbstractItemView_UpdateGeometries(QAbstractItemView* self);
	friend void QAbstractItemView_QBaseUpdateGeometries(QAbstractItemView* self);
	friend void QAbstractItemView_VerticalScrollbarAction(QAbstractItemView* self, int action);
	friend void QAbstractItemView_QBaseVerticalScrollbarAction(QAbstractItemView* self, int action);
	friend void QAbstractItemView_HorizontalScrollbarAction(QAbstractItemView* self, int action);
	friend void QAbstractItemView_QBaseHorizontalScrollbarAction(QAbstractItemView* self, int action);
	friend void QAbstractItemView_VerticalScrollbarValueChanged(QAbstractItemView* self, int value);
	friend void QAbstractItemView_QBaseVerticalScrollbarValueChanged(QAbstractItemView* self, int value);
	friend void QAbstractItemView_HorizontalScrollbarValueChanged(QAbstractItemView* self, int value);
	friend void QAbstractItemView_QBaseHorizontalScrollbarValueChanged(QAbstractItemView* self, int value);
	friend void QAbstractItemView_CloseEditor(QAbstractItemView* self, QWidget* editor, int hint);
	friend void QAbstractItemView_QBaseCloseEditor(QAbstractItemView* self, QWidget* editor, int hint);
	friend void QAbstractItemView_CommitData(QAbstractItemView* self, QWidget* editor);
	friend void QAbstractItemView_QBaseCommitData(QAbstractItemView* self, QWidget* editor);
	friend void QAbstractItemView_EditorDestroyed(QAbstractItemView* self, QObject* editor);
	friend void QAbstractItemView_QBaseEditorDestroyed(QAbstractItemView* self, QObject* editor);
	friend QModelIndex* QAbstractItemView_MoveCursor(QAbstractItemView* self, int cursorAction, int modifiers);
	friend QModelIndex* QAbstractItemView_QBaseMoveCursor(QAbstractItemView* self, int cursorAction, int modifiers);
	friend int QAbstractItemView_HorizontalOffset(const QAbstractItemView* self);
	friend int QAbstractItemView_QBaseHorizontalOffset(const QAbstractItemView* self);
	friend int QAbstractItemView_VerticalOffset(const QAbstractItemView* self);
	friend int QAbstractItemView_QBaseVerticalOffset(const QAbstractItemView* self);
	friend bool QAbstractItemView_IsIndexHidden(const QAbstractItemView* self, const QModelIndex* index);
	friend bool QAbstractItemView_QBaseIsIndexHidden(const QAbstractItemView* self, const QModelIndex* index);
	friend void QAbstractItemView_SetSelection(QAbstractItemView* self, const QRect* rect, int command);
	friend void QAbstractItemView_QBaseSetSelection(QAbstractItemView* self, const QRect* rect, int command);
	friend QRegion* QAbstractItemView_VisualRegionForSelection(const QAbstractItemView* self, const QItemSelection* selection);
	friend QRegion* QAbstractItemView_QBaseVisualRegionForSelection(const QAbstractItemView* self, const QItemSelection* selection);
	friend libqt_list QAbstractItemView_SelectedIndexes(const QAbstractItemView* self);
	friend libqt_list QAbstractItemView_QBaseSelectedIndexes(const QAbstractItemView* self);
	friend bool QAbstractItemView_Edit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event);
	friend bool QAbstractItemView_QBaseEdit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event);
	friend int QAbstractItemView_SelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event);
	friend int QAbstractItemView_QBaseSelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event);
	friend void QAbstractItemView_StartDrag(QAbstractItemView* self, int supportedActions);
	friend void QAbstractItemView_QBaseStartDrag(QAbstractItemView* self, int supportedActions);
	friend void QAbstractItemView_InitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option);
	friend void QAbstractItemView_QBaseInitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option);
	friend bool QAbstractItemView_FocusNextPrevChild(QAbstractItemView* self, bool next);
	friend bool QAbstractItemView_QBaseFocusNextPrevChild(QAbstractItemView* self, bool next);
	friend bool QAbstractItemView_Event(QAbstractItemView* self, QEvent* event);
	friend bool QAbstractItemView_QBaseEvent(QAbstractItemView* self, QEvent* event);
	friend bool QAbstractItemView_ViewportEvent(QAbstractItemView* self, QEvent* event);
	friend bool QAbstractItemView_QBaseViewportEvent(QAbstractItemView* self, QEvent* event);
	friend void QAbstractItemView_MousePressEvent(QAbstractItemView* self, QMouseEvent* event);
	friend void QAbstractItemView_QBaseMousePressEvent(QAbstractItemView* self, QMouseEvent* event);
	friend void QAbstractItemView_MouseMoveEvent(QAbstractItemView* self, QMouseEvent* event);
	friend void QAbstractItemView_QBaseMouseMoveEvent(QAbstractItemView* self, QMouseEvent* event);
	friend void QAbstractItemView_MouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event);
	friend void QAbstractItemView_QBaseMouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event);
	friend void QAbstractItemView_MouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event);
	friend void QAbstractItemView_QBaseMouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event);
	friend void QAbstractItemView_DragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event);
	friend void QAbstractItemView_QBaseDragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event);
	friend void QAbstractItemView_DragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event);
	friend void QAbstractItemView_QBaseDragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event);
	friend void QAbstractItemView_DragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event);
	friend void QAbstractItemView_QBaseDragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event);
	friend void QAbstractItemView_DropEvent(QAbstractItemView* self, QDropEvent* event);
	friend void QAbstractItemView_QBaseDropEvent(QAbstractItemView* self, QDropEvent* event);
	friend void QAbstractItemView_FocusInEvent(QAbstractItemView* self, QFocusEvent* event);
	friend void QAbstractItemView_QBaseFocusInEvent(QAbstractItemView* self, QFocusEvent* event);
	friend void QAbstractItemView_FocusOutEvent(QAbstractItemView* self, QFocusEvent* event);
	friend void QAbstractItemView_QBaseFocusOutEvent(QAbstractItemView* self, QFocusEvent* event);
	friend void QAbstractItemView_KeyPressEvent(QAbstractItemView* self, QKeyEvent* event);
	friend void QAbstractItemView_QBaseKeyPressEvent(QAbstractItemView* self, QKeyEvent* event);
	friend void QAbstractItemView_ResizeEvent(QAbstractItemView* self, QResizeEvent* event);
	friend void QAbstractItemView_QBaseResizeEvent(QAbstractItemView* self, QResizeEvent* event);
	friend void QAbstractItemView_TimerEvent(QAbstractItemView* self, QTimerEvent* event);
	friend void QAbstractItemView_QBaseTimerEvent(QAbstractItemView* self, QTimerEvent* event);
	friend void QAbstractItemView_InputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event);
	friend void QAbstractItemView_QBaseInputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event);
	friend bool QAbstractItemView_EventFilter(QAbstractItemView* self, QObject* object, QEvent* event);
	friend bool QAbstractItemView_QBaseEventFilter(QAbstractItemView* self, QObject* object, QEvent* event);
	friend QSize* QAbstractItemView_ViewportSizeHint(const QAbstractItemView* self);
	friend QSize* QAbstractItemView_QBaseViewportSizeHint(const QAbstractItemView* self);
	friend int QAbstractItemView_State(const QAbstractItemView* self);
	friend int QAbstractItemView_QBaseState(const QAbstractItemView* self);
	friend void QAbstractItemView_SetState(QAbstractItemView* self, int state);
	friend void QAbstractItemView_QBaseSetState(QAbstractItemView* self, int state);
	friend void QAbstractItemView_ScheduleDelayedItemsLayout(QAbstractItemView* self);
	friend void QAbstractItemView_QBaseScheduleDelayedItemsLayout(QAbstractItemView* self);
	friend void QAbstractItemView_ExecuteDelayedItemsLayout(QAbstractItemView* self);
	friend void QAbstractItemView_QBaseExecuteDelayedItemsLayout(QAbstractItemView* self);
	friend void QAbstractItemView_SetDirtyRegion(QAbstractItemView* self, const QRegion* region);
	friend void QAbstractItemView_QBaseSetDirtyRegion(QAbstractItemView* self, const QRegion* region);
	friend void QAbstractItemView_ScrollDirtyRegion(QAbstractItemView* self, int dx, int dy);
	friend void QAbstractItemView_QBaseScrollDirtyRegion(QAbstractItemView* self, int dx, int dy);
	friend QPoint* QAbstractItemView_DirtyRegionOffset(const QAbstractItemView* self);
	friend QPoint* QAbstractItemView_QBaseDirtyRegionOffset(const QAbstractItemView* self);
	friend void QAbstractItemView_StartAutoScroll(QAbstractItemView* self);
	friend void QAbstractItemView_QBaseStartAutoScroll(QAbstractItemView* self);
	friend void QAbstractItemView_StopAutoScroll(QAbstractItemView* self);
	friend void QAbstractItemView_QBaseStopAutoScroll(QAbstractItemView* self);
	friend void QAbstractItemView_DoAutoScroll(QAbstractItemView* self);
	friend void QAbstractItemView_QBaseDoAutoScroll(QAbstractItemView* self);
	friend int QAbstractItemView_DropIndicatorPosition(const QAbstractItemView* self);
	friend int QAbstractItemView_QBaseDropIndicatorPosition(const QAbstractItemView* self);
};

#endif


