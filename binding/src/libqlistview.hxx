#pragma once
#ifndef QLISTVIEW_H_C_LIBVIRTUAL
#define QLISTVIEW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QListView so that we can call protected methods
class VirtualQListView final : public QListView {

public:
	// Virtual class boolean flag
	bool isVirtualQListView= true;

	// Virtual class public types (including callbacks)
	using QListView_VisualRect_Callback = QRect* (*)(const QListView*, const QModelIndex*);
	using QListView_ScrollTo_Callback = void (*)(QListView*, const QModelIndex*, int);
	using QListView_IndexAt_Callback = QModelIndex* (*)(const QListView*, const QPoint*);
	using QListView_DoItemsLayout_Callback = void (*)();
	using QListView_Reset_Callback = void (*)();
	using QListView_SetRootIndex_Callback = void (*)(QListView*, const QModelIndex*);
	using QListView_Event_Callback = bool (*)(QListView*, QEvent*);
	using QListView_ScrollContentsBy_Callback = void (*)(QListView*, int, int);
	using QListView_DataChanged_Callback = void (*)(QListView*, const QModelIndex*, const QModelIndex*, libqt_list);
	using QListView_RowsInserted_Callback = void (*)(QListView*, const QModelIndex*, int, int);
	using QListView_RowsAboutToBeRemoved_Callback = void (*)(QListView*, const QModelIndex*, int, int);
	using QListView_MouseMoveEvent_Callback = void (*)(QListView*, QMouseEvent*);
	using QListView_MouseReleaseEvent_Callback = void (*)(QListView*, QMouseEvent*);
	using QListView_WheelEvent_Callback = void (*)(QListView*, QWheelEvent*);
	using QListView_TimerEvent_Callback = void (*)(QListView*, QTimerEvent*);
	using QListView_ResizeEvent_Callback = void (*)(QListView*, QResizeEvent*);
	using QListView_DragMoveEvent_Callback = void (*)(QListView*, QDragMoveEvent*);
	using QListView_DragLeaveEvent_Callback = void (*)(QListView*, QDragLeaveEvent*);
	using QListView_DropEvent_Callback = void (*)(QListView*, QDropEvent*);
	using QListView_StartDrag_Callback = void (*)(QListView*, int);
	using QListView_InitViewItemOption_Callback = void (*)(const QListView*, QStyleOptionViewItem*);
	using QListView_PaintEvent_Callback = void (*)(QListView*, QPaintEvent*);
	using QListView_HorizontalOffset_Callback = int (*)();
	using QListView_VerticalOffset_Callback = int (*)();
	using QListView_MoveCursor_Callback = QModelIndex* (*)(QListView*, int, int);
	using QListView_SetSelection_Callback = void (*)(QListView*, const QRect*, int);
	using QListView_VisualRegionForSelection_Callback = QRegion* (*)(const QListView*, const QItemSelection*);
	using QListView_SelectedIndexes_Callback = libqt_list (*)();
	using QListView_UpdateGeometries_Callback = void (*)();
	using QListView_IsIndexHidden_Callback = bool (*)(const QListView*, const QModelIndex*);
	using QListView_SelectionChanged_Callback = void (*)(QListView*, const QItemSelection*, const QItemSelection*);
	using QListView_CurrentChanged_Callback = void (*)(QListView*, const QModelIndex*, const QModelIndex*);
	using QListView_ViewportSizeHint_Callback = QSize* (*)();
	using QListView_ResizeContents_Callback = void (*)(QListView*, int, int);
	using QListView_ContentsSize_Callback = QSize* (*)();
	using QListView_RectForIndex_Callback = QRect* (*)(const QListView*, const QModelIndex*);
	using QListView_SetPositionForIndex_Callback = void (*)(QListView*, const QPoint*, const QModelIndex*);

protected:
	// Instance callback storage
	mutable QListView_VisualRect_Callback qlistview_visualrect_callback = nullptr;
	mutable QListView_ScrollTo_Callback qlistview_scrollto_callback = nullptr;
	mutable QListView_IndexAt_Callback qlistview_indexat_callback = nullptr;
	mutable QListView_DoItemsLayout_Callback qlistview_doitemslayout_callback = nullptr;
	mutable QListView_Reset_Callback qlistview_reset_callback = nullptr;
	mutable QListView_SetRootIndex_Callback qlistview_setrootindex_callback = nullptr;
	mutable QListView_Event_Callback qlistview_event_callback = nullptr;
	mutable QListView_ScrollContentsBy_Callback qlistview_scrollcontentsby_callback = nullptr;
	mutable QListView_DataChanged_Callback qlistview_datachanged_callback = nullptr;
	mutable QListView_RowsInserted_Callback qlistview_rowsinserted_callback = nullptr;
	mutable QListView_RowsAboutToBeRemoved_Callback qlistview_rowsabouttoberemoved_callback = nullptr;
	mutable QListView_MouseMoveEvent_Callback qlistview_mousemoveevent_callback = nullptr;
	mutable QListView_MouseReleaseEvent_Callback qlistview_mousereleaseevent_callback = nullptr;
	mutable QListView_WheelEvent_Callback qlistview_wheelevent_callback = nullptr;
	mutable QListView_TimerEvent_Callback qlistview_timerevent_callback = nullptr;
	mutable QListView_ResizeEvent_Callback qlistview_resizeevent_callback = nullptr;
	mutable QListView_DragMoveEvent_Callback qlistview_dragmoveevent_callback = nullptr;
	mutable QListView_DragLeaveEvent_Callback qlistview_dragleaveevent_callback = nullptr;
	mutable QListView_DropEvent_Callback qlistview_dropevent_callback = nullptr;
	mutable QListView_StartDrag_Callback qlistview_startdrag_callback = nullptr;
	mutable QListView_InitViewItemOption_Callback qlistview_initviewitemoption_callback = nullptr;
	mutable QListView_PaintEvent_Callback qlistview_paintevent_callback = nullptr;
	mutable QListView_HorizontalOffset_Callback qlistview_horizontaloffset_callback = nullptr;
	mutable QListView_VerticalOffset_Callback qlistview_verticaloffset_callback = nullptr;
	mutable QListView_MoveCursor_Callback qlistview_movecursor_callback = nullptr;
	mutable QListView_SetSelection_Callback qlistview_setselection_callback = nullptr;
	mutable QListView_VisualRegionForSelection_Callback qlistview_visualregionforselection_callback = nullptr;
	mutable QListView_SelectedIndexes_Callback qlistview_selectedindexes_callback = nullptr;
	mutable QListView_UpdateGeometries_Callback qlistview_updategeometries_callback = nullptr;
	mutable QListView_IsIndexHidden_Callback qlistview_isindexhidden_callback = nullptr;
	mutable QListView_SelectionChanged_Callback qlistview_selectionchanged_callback = nullptr;
	mutable QListView_CurrentChanged_Callback qlistview_currentchanged_callback = nullptr;
	mutable QListView_ViewportSizeHint_Callback qlistview_viewportsizehint_callback = nullptr;
	mutable QListView_ResizeContents_Callback qlistview_resizecontents_callback = nullptr;
	mutable QListView_ContentsSize_Callback qlistview_contentssize_callback = nullptr;
	mutable QListView_RectForIndex_Callback qlistview_rectforindex_callback = nullptr;
	mutable QListView_SetPositionForIndex_Callback qlistview_setpositionforindex_callback = nullptr;

	// Instance base flags
    mutable bool qlistview_visualrect_isbase = false;
    mutable bool qlistview_scrollto_isbase = false;
    mutable bool qlistview_indexat_isbase = false;
    mutable bool qlistview_doitemslayout_isbase = false;
    mutable bool qlistview_reset_isbase = false;
    mutable bool qlistview_setrootindex_isbase = false;
    mutable bool qlistview_event_isbase = false;
    mutable bool qlistview_scrollcontentsby_isbase = false;
    mutable bool qlistview_datachanged_isbase = false;
    mutable bool qlistview_rowsinserted_isbase = false;
    mutable bool qlistview_rowsabouttoberemoved_isbase = false;
    mutable bool qlistview_mousemoveevent_isbase = false;
    mutable bool qlistview_mousereleaseevent_isbase = false;
    mutable bool qlistview_wheelevent_isbase = false;
    mutable bool qlistview_timerevent_isbase = false;
    mutable bool qlistview_resizeevent_isbase = false;
    mutable bool qlistview_dragmoveevent_isbase = false;
    mutable bool qlistview_dragleaveevent_isbase = false;
    mutable bool qlistview_dropevent_isbase = false;
    mutable bool qlistview_startdrag_isbase = false;
    mutable bool qlistview_initviewitemoption_isbase = false;
    mutable bool qlistview_paintevent_isbase = false;
    mutable bool qlistview_horizontaloffset_isbase = false;
    mutable bool qlistview_verticaloffset_isbase = false;
    mutable bool qlistview_movecursor_isbase = false;
    mutable bool qlistview_setselection_isbase = false;
    mutable bool qlistview_visualregionforselection_isbase = false;
    mutable bool qlistview_selectedindexes_isbase = false;
    mutable bool qlistview_updategeometries_isbase = false;
    mutable bool qlistview_isindexhidden_isbase = false;
    mutable bool qlistview_selectionchanged_isbase = false;
    mutable bool qlistview_currentchanged_isbase = false;
    mutable bool qlistview_viewportsizehint_isbase = false;
    mutable bool qlistview_resizecontents_isbase = false;
    mutable bool qlistview_contentssize_isbase = false;
    mutable bool qlistview_rectforindex_isbase = false;
    mutable bool qlistview_setpositionforindex_isbase = false;

public:
	VirtualQListView(QWidget* parent): QListView(parent) {};
	VirtualQListView(): QListView() {};

	~VirtualQListView() {
		qlistview_visualrect_callback = nullptr;
		qlistview_scrollto_callback = nullptr;
		qlistview_indexat_callback = nullptr;
		qlistview_doitemslayout_callback = nullptr;
		qlistview_reset_callback = nullptr;
		qlistview_setrootindex_callback = nullptr;
		qlistview_event_callback = nullptr;
		qlistview_scrollcontentsby_callback = nullptr;
		qlistview_datachanged_callback = nullptr;
		qlistview_rowsinserted_callback = nullptr;
		qlistview_rowsabouttoberemoved_callback = nullptr;
		qlistview_mousemoveevent_callback = nullptr;
		qlistview_mousereleaseevent_callback = nullptr;
		qlistview_wheelevent_callback = nullptr;
		qlistview_timerevent_callback = nullptr;
		qlistview_resizeevent_callback = nullptr;
		qlistview_dragmoveevent_callback = nullptr;
		qlistview_dragleaveevent_callback = nullptr;
		qlistview_dropevent_callback = nullptr;
		qlistview_startdrag_callback = nullptr;
		qlistview_initviewitemoption_callback = nullptr;
		qlistview_paintevent_callback = nullptr;
		qlistview_horizontaloffset_callback = nullptr;
		qlistview_verticaloffset_callback = nullptr;
		qlistview_movecursor_callback = nullptr;
		qlistview_setselection_callback = nullptr;
		qlistview_visualregionforselection_callback = nullptr;
		qlistview_selectedindexes_callback = nullptr;
		qlistview_updategeometries_callback = nullptr;
		qlistview_isindexhidden_callback = nullptr;
		qlistview_selectionchanged_callback = nullptr;
		qlistview_currentchanged_callback = nullptr;
		qlistview_viewportsizehint_callback = nullptr;
		qlistview_resizecontents_callback = nullptr;
		qlistview_contentssize_callback = nullptr;
		qlistview_rectforindex_callback = nullptr;
		qlistview_setpositionforindex_callback = nullptr;
	}

// Callback setters
	inline void setQListView_VisualRect_Callback(QListView_VisualRect_Callback cb) const { qlistview_visualrect_callback = cb; }
	inline void setQListView_ScrollTo_Callback(QListView_ScrollTo_Callback cb) const { qlistview_scrollto_callback = cb; }
	inline void setQListView_IndexAt_Callback(QListView_IndexAt_Callback cb) const { qlistview_indexat_callback = cb; }
	inline void setQListView_DoItemsLayout_Callback(QListView_DoItemsLayout_Callback cb) const { qlistview_doitemslayout_callback = cb; }
	inline void setQListView_Reset_Callback(QListView_Reset_Callback cb) const { qlistview_reset_callback = cb; }
	inline void setQListView_SetRootIndex_Callback(QListView_SetRootIndex_Callback cb) const { qlistview_setrootindex_callback = cb; }
	inline void setQListView_Event_Callback(QListView_Event_Callback cb) const { qlistview_event_callback = cb; }
	inline void setQListView_ScrollContentsBy_Callback(QListView_ScrollContentsBy_Callback cb) const { qlistview_scrollcontentsby_callback = cb; }
	inline void setQListView_DataChanged_Callback(QListView_DataChanged_Callback cb) const { qlistview_datachanged_callback = cb; }
	inline void setQListView_RowsInserted_Callback(QListView_RowsInserted_Callback cb) const { qlistview_rowsinserted_callback = cb; }
	inline void setQListView_RowsAboutToBeRemoved_Callback(QListView_RowsAboutToBeRemoved_Callback cb) const { qlistview_rowsabouttoberemoved_callback = cb; }
	inline void setQListView_MouseMoveEvent_Callback(QListView_MouseMoveEvent_Callback cb) const { qlistview_mousemoveevent_callback = cb; }
	inline void setQListView_MouseReleaseEvent_Callback(QListView_MouseReleaseEvent_Callback cb) const { qlistview_mousereleaseevent_callback = cb; }
	inline void setQListView_WheelEvent_Callback(QListView_WheelEvent_Callback cb) const { qlistview_wheelevent_callback = cb; }
	inline void setQListView_TimerEvent_Callback(QListView_TimerEvent_Callback cb) const { qlistview_timerevent_callback = cb; }
	inline void setQListView_ResizeEvent_Callback(QListView_ResizeEvent_Callback cb) const { qlistview_resizeevent_callback = cb; }
	inline void setQListView_DragMoveEvent_Callback(QListView_DragMoveEvent_Callback cb) const { qlistview_dragmoveevent_callback = cb; }
	inline void setQListView_DragLeaveEvent_Callback(QListView_DragLeaveEvent_Callback cb) const { qlistview_dragleaveevent_callback = cb; }
	inline void setQListView_DropEvent_Callback(QListView_DropEvent_Callback cb) const { qlistview_dropevent_callback = cb; }
	inline void setQListView_StartDrag_Callback(QListView_StartDrag_Callback cb) const { qlistview_startdrag_callback = cb; }
	inline void setQListView_InitViewItemOption_Callback(QListView_InitViewItemOption_Callback cb) const { qlistview_initviewitemoption_callback = cb; }
	inline void setQListView_PaintEvent_Callback(QListView_PaintEvent_Callback cb) const { qlistview_paintevent_callback = cb; }
	inline void setQListView_HorizontalOffset_Callback(QListView_HorizontalOffset_Callback cb) const { qlistview_horizontaloffset_callback = cb; }
	inline void setQListView_VerticalOffset_Callback(QListView_VerticalOffset_Callback cb) const { qlistview_verticaloffset_callback = cb; }
	inline void setQListView_MoveCursor_Callback(QListView_MoveCursor_Callback cb) const { qlistview_movecursor_callback = cb; }
	inline void setQListView_SetSelection_Callback(QListView_SetSelection_Callback cb) const { qlistview_setselection_callback = cb; }
	inline void setQListView_VisualRegionForSelection_Callback(QListView_VisualRegionForSelection_Callback cb) const { qlistview_visualregionforselection_callback = cb; }
	inline void setQListView_SelectedIndexes_Callback(QListView_SelectedIndexes_Callback cb) const { qlistview_selectedindexes_callback = cb; }
	inline void setQListView_UpdateGeometries_Callback(QListView_UpdateGeometries_Callback cb) const { qlistview_updategeometries_callback = cb; }
	inline void setQListView_IsIndexHidden_Callback(QListView_IsIndexHidden_Callback cb) const { qlistview_isindexhidden_callback = cb; }
	inline void setQListView_SelectionChanged_Callback(QListView_SelectionChanged_Callback cb) const { qlistview_selectionchanged_callback = cb; }
	inline void setQListView_CurrentChanged_Callback(QListView_CurrentChanged_Callback cb) const { qlistview_currentchanged_callback = cb; }
	inline void setQListView_ViewportSizeHint_Callback(QListView_ViewportSizeHint_Callback cb) const { qlistview_viewportsizehint_callback = cb; }
	inline void setQListView_ResizeContents_Callback(QListView_ResizeContents_Callback cb) const { qlistview_resizecontents_callback = cb; }
	inline void setQListView_ContentsSize_Callback(QListView_ContentsSize_Callback cb) const { qlistview_contentssize_callback = cb; }
	inline void setQListView_RectForIndex_Callback(QListView_RectForIndex_Callback cb) const { qlistview_rectforindex_callback = cb; }
	inline void setQListView_SetPositionForIndex_Callback(QListView_SetPositionForIndex_Callback cb) const { qlistview_setpositionforindex_callback = cb; }

// Base flag setters
	inline void setQListView_VisualRect_IsBase(bool value) const { qlistview_visualrect_isbase = value; }
	inline void setQListView_ScrollTo_IsBase(bool value) const { qlistview_scrollto_isbase = value; }
	inline void setQListView_IndexAt_IsBase(bool value) const { qlistview_indexat_isbase = value; }
	inline void setQListView_DoItemsLayout_IsBase(bool value) const { qlistview_doitemslayout_isbase = value; }
	inline void setQListView_Reset_IsBase(bool value) const { qlistview_reset_isbase = value; }
	inline void setQListView_SetRootIndex_IsBase(bool value) const { qlistview_setrootindex_isbase = value; }
	inline void setQListView_Event_IsBase(bool value) const { qlistview_event_isbase = value; }
	inline void setQListView_ScrollContentsBy_IsBase(bool value) const { qlistview_scrollcontentsby_isbase = value; }
	inline void setQListView_DataChanged_IsBase(bool value) const { qlistview_datachanged_isbase = value; }
	inline void setQListView_RowsInserted_IsBase(bool value) const { qlistview_rowsinserted_isbase = value; }
	inline void setQListView_RowsAboutToBeRemoved_IsBase(bool value) const { qlistview_rowsabouttoberemoved_isbase = value; }
	inline void setQListView_MouseMoveEvent_IsBase(bool value) const { qlistview_mousemoveevent_isbase = value; }
	inline void setQListView_MouseReleaseEvent_IsBase(bool value) const { qlistview_mousereleaseevent_isbase = value; }
	inline void setQListView_WheelEvent_IsBase(bool value) const { qlistview_wheelevent_isbase = value; }
	inline void setQListView_TimerEvent_IsBase(bool value) const { qlistview_timerevent_isbase = value; }
	inline void setQListView_ResizeEvent_IsBase(bool value) const { qlistview_resizeevent_isbase = value; }
	inline void setQListView_DragMoveEvent_IsBase(bool value) const { qlistview_dragmoveevent_isbase = value; }
	inline void setQListView_DragLeaveEvent_IsBase(bool value) const { qlistview_dragleaveevent_isbase = value; }
	inline void setQListView_DropEvent_IsBase(bool value) const { qlistview_dropevent_isbase = value; }
	inline void setQListView_StartDrag_IsBase(bool value) const { qlistview_startdrag_isbase = value; }
	inline void setQListView_InitViewItemOption_IsBase(bool value) const { qlistview_initviewitemoption_isbase = value; }
	inline void setQListView_PaintEvent_IsBase(bool value) const { qlistview_paintevent_isbase = value; }
	inline void setQListView_HorizontalOffset_IsBase(bool value) const { qlistview_horizontaloffset_isbase = value; }
	inline void setQListView_VerticalOffset_IsBase(bool value) const { qlistview_verticaloffset_isbase = value; }
	inline void setQListView_MoveCursor_IsBase(bool value) const { qlistview_movecursor_isbase = value; }
	inline void setQListView_SetSelection_IsBase(bool value) const { qlistview_setselection_isbase = value; }
	inline void setQListView_VisualRegionForSelection_IsBase(bool value) const { qlistview_visualregionforselection_isbase = value; }
	inline void setQListView_SelectedIndexes_IsBase(bool value) const { qlistview_selectedindexes_isbase = value; }
	inline void setQListView_UpdateGeometries_IsBase(bool value) const { qlistview_updategeometries_isbase = value; }
	inline void setQListView_IsIndexHidden_IsBase(bool value) const { qlistview_isindexhidden_isbase = value; }
	inline void setQListView_SelectionChanged_IsBase(bool value) const { qlistview_selectionchanged_isbase = value; }
	inline void setQListView_CurrentChanged_IsBase(bool value) const { qlistview_currentchanged_isbase = value; }
	inline void setQListView_ViewportSizeHint_IsBase(bool value) const { qlistview_viewportsizehint_isbase = value; }
	inline void setQListView_ResizeContents_IsBase(bool value) const { qlistview_resizecontents_isbase = value; }
	inline void setQListView_ContentsSize_IsBase(bool value) const { qlistview_contentssize_isbase = value; }
	inline void setQListView_RectForIndex_IsBase(bool value) const { qlistview_rectforindex_isbase = value; }
	inline void setQListView_SetPositionForIndex_IsBase(bool value) const { qlistview_setpositionforindex_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (qlistview_visualrect_isbase) {
			qlistview_visualrect_isbase = false;
			return QListView::visualRect(index);
		} else if (qlistview_visualrect_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QRect* callback_ret = qlistview_visualrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QListView::visualRect(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollTo(const QModelIndex& index, ScrollHint hint) override {
		if (qlistview_scrollto_isbase) {
			qlistview_scrollto_isbase = false;
			QListView::scrollTo(index, hint);
		} else if (qlistview_scrollto_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = static_cast<int>(hint);
			qlistview_scrollto_callback(this, cbval1, cbval2);
		} else {
			QListView::scrollTo(index, hint);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (qlistview_indexat_isbase) {
			qlistview_indexat_isbase = false;
			return QListView::indexAt(p);
		} else if (qlistview_indexat_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&p;
			QModelIndex* callback_ret = qlistview_indexat_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QListView::indexAt(p);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void doItemsLayout() override {
		if (qlistview_doitemslayout_isbase) {
			qlistview_doitemslayout_isbase = false;
			QListView::doItemsLayout();
		} else if (qlistview_doitemslayout_callback != nullptr) {
			qlistview_doitemslayout_callback();
		} else {
			QListView::doItemsLayout();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void reset() override {
		if (qlistview_reset_isbase) {
			qlistview_reset_isbase = false;
			QListView::reset();
		} else if (qlistview_reset_callback != nullptr) {
			qlistview_reset_callback();
		} else {
			QListView::reset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setRootIndex(const QModelIndex& index) override {
		if (qlistview_setrootindex_isbase) {
			qlistview_setrootindex_isbase = false;
			QListView::setRootIndex(index);
		} else if (qlistview_setrootindex_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			qlistview_setrootindex_callback(this, cbval1);
		} else {
			QListView::setRootIndex(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qlistview_event_isbase) {
			qlistview_event_isbase = false;
			return QListView::event(e);
		} else if (qlistview_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qlistview_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QListView::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollContentsBy(int dx, int dy) override {
		if (qlistview_scrollcontentsby_isbase) {
			qlistview_scrollcontentsby_isbase = false;
			QListView::scrollContentsBy(dx, dy);
		} else if (qlistview_scrollcontentsby_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qlistview_scrollcontentsby_callback(this, cbval1, cbval2);
		} else {
			QListView::scrollContentsBy(dx, dy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (qlistview_datachanged_isbase) {
			qlistview_datachanged_isbase = false;
			QListView::dataChanged(topLeft, bottomRight, roles);
		} else if (qlistview_datachanged_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&topLeft;
			const QModelIndex* cbval2 = (const QModelIndex*)&bottomRight;
			libqt_list cbval3 = roles;
			qlistview_datachanged_callback(this, cbval1, cbval2, cbval3);
		} else {
			QListView::dataChanged(topLeft, bottomRight, roles);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (qlistview_rowsinserted_isbase) {
			qlistview_rowsinserted_isbase = false;
			QListView::rowsInserted(parent, start, end);
		} else if (qlistview_rowsinserted_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = start;
			int cbval3 = end;
			qlistview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
		} else {
			QListView::rowsInserted(parent, start, end);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (qlistview_rowsabouttoberemoved_isbase) {
			qlistview_rowsabouttoberemoved_isbase = false;
			QListView::rowsAboutToBeRemoved(parent, start, end);
		} else if (qlistview_rowsabouttoberemoved_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = start;
			int cbval3 = end;
			qlistview_rowsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
		} else {
			QListView::rowsAboutToBeRemoved(parent, start, end);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (qlistview_mousemoveevent_isbase) {
			qlistview_mousemoveevent_isbase = false;
			QListView::mouseMoveEvent(e);
		} else if (qlistview_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qlistview_mousemoveevent_callback(this, cbval1);
		} else {
			QListView::mouseMoveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (qlistview_mousereleaseevent_isbase) {
			qlistview_mousereleaseevent_isbase = false;
			QListView::mouseReleaseEvent(e);
		} else if (qlistview_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qlistview_mousereleaseevent_callback(this, cbval1);
		} else {
			QListView::mouseReleaseEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* e) override {
		if (qlistview_wheelevent_isbase) {
			qlistview_wheelevent_isbase = false;
			QListView::wheelEvent(e);
		} else if (qlistview_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = e;
			qlistview_wheelevent_callback(this, cbval1);
		} else {
			QListView::wheelEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* e) override {
		if (qlistview_timerevent_isbase) {
			qlistview_timerevent_isbase = false;
			QListView::timerEvent(e);
		} else if (qlistview_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = e;
			qlistview_timerevent_callback(this, cbval1);
		} else {
			QListView::timerEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* e) override {
		if (qlistview_resizeevent_isbase) {
			qlistview_resizeevent_isbase = false;
			QListView::resizeEvent(e);
		} else if (qlistview_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = e;
			qlistview_resizeevent_callback(this, cbval1);
		} else {
			QListView::resizeEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (qlistview_dragmoveevent_isbase) {
			qlistview_dragmoveevent_isbase = false;
			QListView::dragMoveEvent(e);
		} else if (qlistview_dragmoveevent_callback != nullptr) {
			QDragMoveEvent* cbval1 = e;
			qlistview_dragmoveevent_callback(this, cbval1);
		} else {
			QListView::dragMoveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (qlistview_dragleaveevent_isbase) {
			qlistview_dragleaveevent_isbase = false;
			QListView::dragLeaveEvent(e);
		} else if (qlistview_dragleaveevent_callback != nullptr) {
			QDragLeaveEvent* cbval1 = e;
			qlistview_dragleaveevent_callback(this, cbval1);
		} else {
			QListView::dragLeaveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QDropEvent* e) override {
		if (qlistview_dropevent_isbase) {
			qlistview_dropevent_isbase = false;
			QListView::dropEvent(e);
		} else if (qlistview_dropevent_callback != nullptr) {
			QDropEvent* cbval1 = e;
			qlistview_dropevent_callback(this, cbval1);
		} else {
			QListView::dropEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (qlistview_startdrag_isbase) {
			qlistview_startdrag_isbase = false;
			QListView::startDrag(supportedActions);
		} else if (qlistview_startdrag_callback != nullptr) {
			int cbval1 = static_cast<int>(supportedActions);
			qlistview_startdrag_callback(this, cbval1);
		} else {
			QListView::startDrag(supportedActions);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (qlistview_initviewitemoption_isbase) {
			qlistview_initviewitemoption_isbase = false;
			QListView::initViewItemOption(option);
		} else if (qlistview_initviewitemoption_callback != nullptr) {
			QStyleOptionViewItem* cbval1 = option;
			qlistview_initviewitemoption_callback(this, cbval1);
		} else {
			QListView::initViewItemOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* e) override {
		if (qlistview_paintevent_isbase) {
			qlistview_paintevent_isbase = false;
			QListView::paintEvent(e);
		} else if (qlistview_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = e;
			qlistview_paintevent_callback(this, cbval1);
		} else {
			QListView::paintEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int horizontalOffset() const override {
		if (qlistview_horizontaloffset_isbase) {
			qlistview_horizontaloffset_isbase = false;
			return QListView::horizontalOffset();
		} else if (qlistview_horizontaloffset_callback != nullptr) {
			int callback_ret = qlistview_horizontaloffset_callback();
			return callback_ret;
		} else {
			return QListView::horizontalOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int verticalOffset() const override {
		if (qlistview_verticaloffset_isbase) {
			qlistview_verticaloffset_isbase = false;
			return QListView::verticalOffset();
		} else if (qlistview_verticaloffset_callback != nullptr) {
			int callback_ret = qlistview_verticaloffset_callback();
			return callback_ret;
		} else {
			return QListView::verticalOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex moveCursor(CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (qlistview_movecursor_isbase) {
			qlistview_movecursor_isbase = false;
			return QListView::moveCursor(cursorAction, modifiers);
		} else if (qlistview_movecursor_callback != nullptr) {
			int cbval1 = static_cast<int>(cursorAction);
			int cbval2 = static_cast<int>(modifiers);
			QModelIndex* callback_ret = qlistview_movecursor_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QListView::moveCursor(cursorAction, modifiers);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (qlistview_setselection_isbase) {
			qlistview_setselection_isbase = false;
			QListView::setSelection(rect, command);
		} else if (qlistview_setselection_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&rect;
			int cbval2 = static_cast<int>(command);
			qlistview_setselection_callback(this, cbval1, cbval2);
		} else {
			QListView::setSelection(rect, command);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (qlistview_visualregionforselection_isbase) {
			qlistview_visualregionforselection_isbase = false;
			return QListView::visualRegionForSelection(selection);
		} else if (qlistview_visualregionforselection_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selection;
			QRegion* callback_ret = qlistview_visualregionforselection_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QListView::visualRegionForSelection(selection);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QModelIndex> selectedIndexes() const override {
		if (qlistview_selectedindexes_isbase) {
			qlistview_selectedindexes_isbase = false;
			return QListView::selectedIndexes();
		} else if (qlistview_selectedindexes_callback != nullptr) {
			libqt_list callback_ret = qlistview_selectedindexes_callback();
			return callback_ret;
		} else {
			return QListView::selectedIndexes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateGeometries() override {
		if (qlistview_updategeometries_isbase) {
			qlistview_updategeometries_isbase = false;
			QListView::updateGeometries();
		} else if (qlistview_updategeometries_callback != nullptr) {
			qlistview_updategeometries_callback();
		} else {
			QListView::updateGeometries();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (qlistview_isindexhidden_isbase) {
			qlistview_isindexhidden_isbase = false;
			return QListView::isIndexHidden(index);
		} else if (qlistview_isindexhidden_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			bool callback_ret = qlistview_isindexhidden_callback(this, cbval1);
			return callback_ret;
		} else {
			return QListView::isIndexHidden(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (qlistview_selectionchanged_isbase) {
			qlistview_selectionchanged_isbase = false;
			QListView::selectionChanged(selected, deselected);
		} else if (qlistview_selectionchanged_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selected;
			const QItemSelection* cbval2 = (const QItemSelection*)&deselected;
			qlistview_selectionchanged_callback(this, cbval1, cbval2);
		} else {
			QListView::selectionChanged(selected, deselected);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (qlistview_currentchanged_isbase) {
			qlistview_currentchanged_isbase = false;
			QListView::currentChanged(current, previous);
		} else if (qlistview_currentchanged_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&current;
			const QModelIndex* cbval2 = (const QModelIndex*)&previous;
			qlistview_currentchanged_callback(this, cbval1, cbval2);
		} else {
			QListView::currentChanged(current, previous);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize viewportSizeHint() const override {
		if (qlistview_viewportsizehint_isbase) {
			qlistview_viewportsizehint_isbase = false;
			return QListView::viewportSizeHint();
		} else if (qlistview_viewportsizehint_callback != nullptr) {
			QSize* callback_ret = qlistview_viewportsizehint_callback();
			return *callback_ret;
		} else {
			return QListView::viewportSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	void resizeContents(int width, int height) {
		if (qlistview_resizecontents_isbase) {
			qlistview_resizecontents_isbase = false;
			QListView::resizeContents(width, height);
		} else if (qlistview_resizecontents_callback != nullptr) {
			int cbval1 = width;
			int cbval2 = height;
			qlistview_resizecontents_callback(this, cbval1, cbval2);
		} else {
			QListView::resizeContents(width, height);
		}
	}

	// Virtual method for C ABI access and custom callback
	QSize contentsSize() const {
		if (qlistview_contentssize_isbase) {
			qlistview_contentssize_isbase = false;
			return QListView::contentsSize();
		} else if (qlistview_contentssize_callback != nullptr) {
			QSize* callback_ret = qlistview_contentssize_callback();
			return *callback_ret;
		} else {
			return QListView::contentsSize();
		}
	}

	// Virtual method for C ABI access and custom callback
	QRect rectForIndex(const QModelIndex& index) const {
		if (qlistview_rectforindex_isbase) {
			qlistview_rectforindex_isbase = false;
			return QListView::rectForIndex(index);
		} else if (qlistview_rectforindex_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QRect* callback_ret = qlistview_rectforindex_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QListView::rectForIndex(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setPositionForIndex(const QPoint& position, const QModelIndex& index) {
		if (qlistview_setpositionforindex_isbase) {
			qlistview_setpositionforindex_isbase = false;
			QListView::setPositionForIndex(position, index);
		} else if (qlistview_setpositionforindex_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&position;
			const QModelIndex* cbval2 = (const QModelIndex*)&index;
			qlistview_setpositionforindex_callback(this, cbval1, cbval2);
		} else {
			QListView::setPositionForIndex(position, index);
		}
	}

	// Friend functions
	friend bool QListView_Event(QListView* self, QEvent* e);
	friend bool QListView_QBaseEvent(QListView* self, QEvent* e);
	friend void QListView_ScrollContentsBy(QListView* self, int dx, int dy);
	friend void QListView_QBaseScrollContentsBy(QListView* self, int dx, int dy);
	friend void QListView_DataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
	friend void QListView_QBaseDataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
	friend void QListView_RowsInserted(QListView* self, const QModelIndex* parent, int start, int end);
	friend void QListView_QBaseRowsInserted(QListView* self, const QModelIndex* parent, int start, int end);
	friend void QListView_RowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end);
	friend void QListView_QBaseRowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end);
	friend void QListView_MouseMoveEvent(QListView* self, QMouseEvent* e);
	friend void QListView_QBaseMouseMoveEvent(QListView* self, QMouseEvent* e);
	friend void QListView_MouseReleaseEvent(QListView* self, QMouseEvent* e);
	friend void QListView_QBaseMouseReleaseEvent(QListView* self, QMouseEvent* e);
	friend void QListView_WheelEvent(QListView* self, QWheelEvent* e);
	friend void QListView_QBaseWheelEvent(QListView* self, QWheelEvent* e);
	friend void QListView_TimerEvent(QListView* self, QTimerEvent* e);
	friend void QListView_QBaseTimerEvent(QListView* self, QTimerEvent* e);
	friend void QListView_ResizeEvent(QListView* self, QResizeEvent* e);
	friend void QListView_QBaseResizeEvent(QListView* self, QResizeEvent* e);
	friend void QListView_DragMoveEvent(QListView* self, QDragMoveEvent* e);
	friend void QListView_QBaseDragMoveEvent(QListView* self, QDragMoveEvent* e);
	friend void QListView_DragLeaveEvent(QListView* self, QDragLeaveEvent* e);
	friend void QListView_QBaseDragLeaveEvent(QListView* self, QDragLeaveEvent* e);
	friend void QListView_DropEvent(QListView* self, QDropEvent* e);
	friend void QListView_QBaseDropEvent(QListView* self, QDropEvent* e);
	friend void QListView_StartDrag(QListView* self, int supportedActions);
	friend void QListView_QBaseStartDrag(QListView* self, int supportedActions);
	friend void QListView_InitViewItemOption(const QListView* self, QStyleOptionViewItem* option);
	friend void QListView_QBaseInitViewItemOption(const QListView* self, QStyleOptionViewItem* option);
	friend void QListView_PaintEvent(QListView* self, QPaintEvent* e);
	friend void QListView_QBasePaintEvent(QListView* self, QPaintEvent* e);
	friend int QListView_HorizontalOffset(const QListView* self);
	friend int QListView_QBaseHorizontalOffset(const QListView* self);
	friend int QListView_VerticalOffset(const QListView* self);
	friend int QListView_QBaseVerticalOffset(const QListView* self);
	friend QModelIndex* QListView_MoveCursor(QListView* self, int cursorAction, int modifiers);
	friend QModelIndex* QListView_QBaseMoveCursor(QListView* self, int cursorAction, int modifiers);
	friend void QListView_SetSelection(QListView* self, const QRect* rect, int command);
	friend void QListView_QBaseSetSelection(QListView* self, const QRect* rect, int command);
	friend QRegion* QListView_VisualRegionForSelection(const QListView* self, const QItemSelection* selection);
	friend QRegion* QListView_QBaseVisualRegionForSelection(const QListView* self, const QItemSelection* selection);
	friend libqt_list QListView_SelectedIndexes(const QListView* self);
	friend libqt_list QListView_QBaseSelectedIndexes(const QListView* self);
	friend void QListView_UpdateGeometries(QListView* self);
	friend void QListView_QBaseUpdateGeometries(QListView* self);
	friend bool QListView_IsIndexHidden(const QListView* self, const QModelIndex* index);
	friend bool QListView_QBaseIsIndexHidden(const QListView* self, const QModelIndex* index);
	friend void QListView_SelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected);
	friend void QListView_QBaseSelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected);
	friend void QListView_CurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous);
	friend void QListView_QBaseCurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous);
	friend QSize* QListView_ViewportSizeHint(const QListView* self);
	friend QSize* QListView_QBaseViewportSizeHint(const QListView* self);
	friend void QListView_ResizeContents(QListView* self, int width, int height);
	friend void QListView_QBaseResizeContents(QListView* self, int width, int height);
	friend QSize* QListView_ContentsSize(const QListView* self);
	friend QSize* QListView_QBaseContentsSize(const QListView* self);
	friend QRect* QListView_RectForIndex(const QListView* self, const QModelIndex* index);
	friend QRect* QListView_QBaseRectForIndex(const QListView* self, const QModelIndex* index);
	friend void QListView_SetPositionForIndex(QListView* self, const QPoint* position, const QModelIndex* index);
	friend void QListView_QBaseSetPositionForIndex(QListView* self, const QPoint* position, const QModelIndex* index);
};

#endif


