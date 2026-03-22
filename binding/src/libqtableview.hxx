#pragma once
#ifndef QTABLEVIEW_H_C_LIBVIRTUAL
#define QTABLEVIEW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTableView so that we can call protected methods
class VirtualQTableView final : public QTableView {

public:
	// Virtual class boolean flag
	bool isVirtualQTableView= true;

	// Virtual class public types (including callbacks)
	using QTableView_SetModel_Callback = void (*)(QTableView*, QAbstractItemModel*);
	using QTableView_SetRootIndex_Callback = void (*)(QTableView*, const QModelIndex*);
	using QTableView_SetSelectionModel_Callback = void (*)(QTableView*, QItemSelectionModel*);
	using QTableView_DoItemsLayout_Callback = void (*)();
	using QTableView_VisualRect_Callback = QRect* (*)(const QTableView*, const QModelIndex*);
	using QTableView_ScrollTo_Callback = void (*)(QTableView*, const QModelIndex*, int);
	using QTableView_IndexAt_Callback = QModelIndex* (*)(const QTableView*, const QPoint*);
	using QTableView_ScrollContentsBy_Callback = void (*)(QTableView*, int, int);
	using QTableView_InitViewItemOption_Callback = void (*)(const QTableView*, QStyleOptionViewItem*);
	using QTableView_PaintEvent_Callback = void (*)(QTableView*, QPaintEvent*);
	using QTableView_TimerEvent_Callback = void (*)(QTableView*, QTimerEvent*);
	using QTableView_DropEvent_Callback = void (*)(QTableView*, QDropEvent*);
	using QTableView_HorizontalOffset_Callback = int (*)();
	using QTableView_VerticalOffset_Callback = int (*)();
	using QTableView_MoveCursor_Callback = QModelIndex* (*)(QTableView*, int, int);
	using QTableView_SetSelection_Callback = void (*)(QTableView*, const QRect*, int);
	using QTableView_VisualRegionForSelection_Callback = QRegion* (*)(const QTableView*, const QItemSelection*);
	using QTableView_SelectedIndexes_Callback = libqt_list (*)();
	using QTableView_UpdateGeometries_Callback = void (*)();
	using QTableView_ViewportSizeHint_Callback = QSize* (*)();
	using QTableView_SizeHintForRow_Callback = int (*)(const QTableView*, int);
	using QTableView_SizeHintForColumn_Callback = int (*)(const QTableView*, int);
	using QTableView_VerticalScrollbarAction_Callback = void (*)(QTableView*, int);
	using QTableView_HorizontalScrollbarAction_Callback = void (*)(QTableView*, int);
	using QTableView_IsIndexHidden_Callback = bool (*)(const QTableView*, const QModelIndex*);
	using QTableView_SelectionChanged_Callback = void (*)(QTableView*, const QItemSelection*, const QItemSelection*);
	using QTableView_CurrentChanged_Callback = void (*)(QTableView*, const QModelIndex*, const QModelIndex*);
	using QTableView_RowMoved_Callback = void (*)(QTableView*, int, int, int);
	using QTableView_ColumnMoved_Callback = void (*)(QTableView*, int, int, int);
	using QTableView_RowResized_Callback = void (*)(QTableView*, int, int, int);
	using QTableView_ColumnResized_Callback = void (*)(QTableView*, int, int, int);
	using QTableView_RowCountChanged_Callback = void (*)(QTableView*, int, int);
	using QTableView_ColumnCountChanged_Callback = void (*)(QTableView*, int, int);

protected:
	// Instance callback storage
	mutable QTableView_SetModel_Callback qtableview_setmodel_callback = nullptr;
	mutable QTableView_SetRootIndex_Callback qtableview_setrootindex_callback = nullptr;
	mutable QTableView_SetSelectionModel_Callback qtableview_setselectionmodel_callback = nullptr;
	mutable QTableView_DoItemsLayout_Callback qtableview_doitemslayout_callback = nullptr;
	mutable QTableView_VisualRect_Callback qtableview_visualrect_callback = nullptr;
	mutable QTableView_ScrollTo_Callback qtableview_scrollto_callback = nullptr;
	mutable QTableView_IndexAt_Callback qtableview_indexat_callback = nullptr;
	mutable QTableView_ScrollContentsBy_Callback qtableview_scrollcontentsby_callback = nullptr;
	mutable QTableView_InitViewItemOption_Callback qtableview_initviewitemoption_callback = nullptr;
	mutable QTableView_PaintEvent_Callback qtableview_paintevent_callback = nullptr;
	mutable QTableView_TimerEvent_Callback qtableview_timerevent_callback = nullptr;
	mutable QTableView_DropEvent_Callback qtableview_dropevent_callback = nullptr;
	mutable QTableView_HorizontalOffset_Callback qtableview_horizontaloffset_callback = nullptr;
	mutable QTableView_VerticalOffset_Callback qtableview_verticaloffset_callback = nullptr;
	mutable QTableView_MoveCursor_Callback qtableview_movecursor_callback = nullptr;
	mutable QTableView_SetSelection_Callback qtableview_setselection_callback = nullptr;
	mutable QTableView_VisualRegionForSelection_Callback qtableview_visualregionforselection_callback = nullptr;
	mutable QTableView_SelectedIndexes_Callback qtableview_selectedindexes_callback = nullptr;
	mutable QTableView_UpdateGeometries_Callback qtableview_updategeometries_callback = nullptr;
	mutable QTableView_ViewportSizeHint_Callback qtableview_viewportsizehint_callback = nullptr;
	mutable QTableView_SizeHintForRow_Callback qtableview_sizehintforrow_callback = nullptr;
	mutable QTableView_SizeHintForColumn_Callback qtableview_sizehintforcolumn_callback = nullptr;
	mutable QTableView_VerticalScrollbarAction_Callback qtableview_verticalscrollbaraction_callback = nullptr;
	mutable QTableView_HorizontalScrollbarAction_Callback qtableview_horizontalscrollbaraction_callback = nullptr;
	mutable QTableView_IsIndexHidden_Callback qtableview_isindexhidden_callback = nullptr;
	mutable QTableView_SelectionChanged_Callback qtableview_selectionchanged_callback = nullptr;
	mutable QTableView_CurrentChanged_Callback qtableview_currentchanged_callback = nullptr;
	mutable QTableView_RowMoved_Callback qtableview_rowmoved_callback = nullptr;
	mutable QTableView_ColumnMoved_Callback qtableview_columnmoved_callback = nullptr;
	mutable QTableView_RowResized_Callback qtableview_rowresized_callback = nullptr;
	mutable QTableView_ColumnResized_Callback qtableview_columnresized_callback = nullptr;
	mutable QTableView_RowCountChanged_Callback qtableview_rowcountchanged_callback = nullptr;
	mutable QTableView_ColumnCountChanged_Callback qtableview_columncountchanged_callback = nullptr;

	// Instance base flags
    mutable bool qtableview_setmodel_isbase = false;
    mutable bool qtableview_setrootindex_isbase = false;
    mutable bool qtableview_setselectionmodel_isbase = false;
    mutable bool qtableview_doitemslayout_isbase = false;
    mutable bool qtableview_visualrect_isbase = false;
    mutable bool qtableview_scrollto_isbase = false;
    mutable bool qtableview_indexat_isbase = false;
    mutable bool qtableview_scrollcontentsby_isbase = false;
    mutable bool qtableview_initviewitemoption_isbase = false;
    mutable bool qtableview_paintevent_isbase = false;
    mutable bool qtableview_timerevent_isbase = false;
    mutable bool qtableview_dropevent_isbase = false;
    mutable bool qtableview_horizontaloffset_isbase = false;
    mutable bool qtableview_verticaloffset_isbase = false;
    mutable bool qtableview_movecursor_isbase = false;
    mutable bool qtableview_setselection_isbase = false;
    mutable bool qtableview_visualregionforselection_isbase = false;
    mutable bool qtableview_selectedindexes_isbase = false;
    mutable bool qtableview_updategeometries_isbase = false;
    mutable bool qtableview_viewportsizehint_isbase = false;
    mutable bool qtableview_sizehintforrow_isbase = false;
    mutable bool qtableview_sizehintforcolumn_isbase = false;
    mutable bool qtableview_verticalscrollbaraction_isbase = false;
    mutable bool qtableview_horizontalscrollbaraction_isbase = false;
    mutable bool qtableview_isindexhidden_isbase = false;
    mutable bool qtableview_selectionchanged_isbase = false;
    mutable bool qtableview_currentchanged_isbase = false;
    mutable bool qtableview_rowmoved_isbase = false;
    mutable bool qtableview_columnmoved_isbase = false;
    mutable bool qtableview_rowresized_isbase = false;
    mutable bool qtableview_columnresized_isbase = false;
    mutable bool qtableview_rowcountchanged_isbase = false;
    mutable bool qtableview_columncountchanged_isbase = false;

public:
	VirtualQTableView(QWidget* parent): QTableView(parent) {};
	VirtualQTableView(): QTableView() {};

	~VirtualQTableView() {
		qtableview_setmodel_callback = nullptr;
		qtableview_setrootindex_callback = nullptr;
		qtableview_setselectionmodel_callback = nullptr;
		qtableview_doitemslayout_callback = nullptr;
		qtableview_visualrect_callback = nullptr;
		qtableview_scrollto_callback = nullptr;
		qtableview_indexat_callback = nullptr;
		qtableview_scrollcontentsby_callback = nullptr;
		qtableview_initviewitemoption_callback = nullptr;
		qtableview_paintevent_callback = nullptr;
		qtableview_timerevent_callback = nullptr;
		qtableview_dropevent_callback = nullptr;
		qtableview_horizontaloffset_callback = nullptr;
		qtableview_verticaloffset_callback = nullptr;
		qtableview_movecursor_callback = nullptr;
		qtableview_setselection_callback = nullptr;
		qtableview_visualregionforselection_callback = nullptr;
		qtableview_selectedindexes_callback = nullptr;
		qtableview_updategeometries_callback = nullptr;
		qtableview_viewportsizehint_callback = nullptr;
		qtableview_sizehintforrow_callback = nullptr;
		qtableview_sizehintforcolumn_callback = nullptr;
		qtableview_verticalscrollbaraction_callback = nullptr;
		qtableview_horizontalscrollbaraction_callback = nullptr;
		qtableview_isindexhidden_callback = nullptr;
		qtableview_selectionchanged_callback = nullptr;
		qtableview_currentchanged_callback = nullptr;
		qtableview_rowmoved_callback = nullptr;
		qtableview_columnmoved_callback = nullptr;
		qtableview_rowresized_callback = nullptr;
		qtableview_columnresized_callback = nullptr;
		qtableview_rowcountchanged_callback = nullptr;
		qtableview_columncountchanged_callback = nullptr;
	}

// Callback setters
	inline void setQTableView_SetModel_Callback(QTableView_SetModel_Callback cb) const { qtableview_setmodel_callback = cb; }
	inline void setQTableView_SetRootIndex_Callback(QTableView_SetRootIndex_Callback cb) const { qtableview_setrootindex_callback = cb; }
	inline void setQTableView_SetSelectionModel_Callback(QTableView_SetSelectionModel_Callback cb) const { qtableview_setselectionmodel_callback = cb; }
	inline void setQTableView_DoItemsLayout_Callback(QTableView_DoItemsLayout_Callback cb) const { qtableview_doitemslayout_callback = cb; }
	inline void setQTableView_VisualRect_Callback(QTableView_VisualRect_Callback cb) const { qtableview_visualrect_callback = cb; }
	inline void setQTableView_ScrollTo_Callback(QTableView_ScrollTo_Callback cb) const { qtableview_scrollto_callback = cb; }
	inline void setQTableView_IndexAt_Callback(QTableView_IndexAt_Callback cb) const { qtableview_indexat_callback = cb; }
	inline void setQTableView_ScrollContentsBy_Callback(QTableView_ScrollContentsBy_Callback cb) const { qtableview_scrollcontentsby_callback = cb; }
	inline void setQTableView_InitViewItemOption_Callback(QTableView_InitViewItemOption_Callback cb) const { qtableview_initviewitemoption_callback = cb; }
	inline void setQTableView_PaintEvent_Callback(QTableView_PaintEvent_Callback cb) const { qtableview_paintevent_callback = cb; }
	inline void setQTableView_TimerEvent_Callback(QTableView_TimerEvent_Callback cb) const { qtableview_timerevent_callback = cb; }
	inline void setQTableView_DropEvent_Callback(QTableView_DropEvent_Callback cb) const { qtableview_dropevent_callback = cb; }
	inline void setQTableView_HorizontalOffset_Callback(QTableView_HorizontalOffset_Callback cb) const { qtableview_horizontaloffset_callback = cb; }
	inline void setQTableView_VerticalOffset_Callback(QTableView_VerticalOffset_Callback cb) const { qtableview_verticaloffset_callback = cb; }
	inline void setQTableView_MoveCursor_Callback(QTableView_MoveCursor_Callback cb) const { qtableview_movecursor_callback = cb; }
	inline void setQTableView_SetSelection_Callback(QTableView_SetSelection_Callback cb) const { qtableview_setselection_callback = cb; }
	inline void setQTableView_VisualRegionForSelection_Callback(QTableView_VisualRegionForSelection_Callback cb) const { qtableview_visualregionforselection_callback = cb; }
	inline void setQTableView_SelectedIndexes_Callback(QTableView_SelectedIndexes_Callback cb) const { qtableview_selectedindexes_callback = cb; }
	inline void setQTableView_UpdateGeometries_Callback(QTableView_UpdateGeometries_Callback cb) const { qtableview_updategeometries_callback = cb; }
	inline void setQTableView_ViewportSizeHint_Callback(QTableView_ViewportSizeHint_Callback cb) const { qtableview_viewportsizehint_callback = cb; }
	inline void setQTableView_SizeHintForRow_Callback(QTableView_SizeHintForRow_Callback cb) const { qtableview_sizehintforrow_callback = cb; }
	inline void setQTableView_SizeHintForColumn_Callback(QTableView_SizeHintForColumn_Callback cb) const { qtableview_sizehintforcolumn_callback = cb; }
	inline void setQTableView_VerticalScrollbarAction_Callback(QTableView_VerticalScrollbarAction_Callback cb) const { qtableview_verticalscrollbaraction_callback = cb; }
	inline void setQTableView_HorizontalScrollbarAction_Callback(QTableView_HorizontalScrollbarAction_Callback cb) const { qtableview_horizontalscrollbaraction_callback = cb; }
	inline void setQTableView_IsIndexHidden_Callback(QTableView_IsIndexHidden_Callback cb) const { qtableview_isindexhidden_callback = cb; }
	inline void setQTableView_SelectionChanged_Callback(QTableView_SelectionChanged_Callback cb) const { qtableview_selectionchanged_callback = cb; }
	inline void setQTableView_CurrentChanged_Callback(QTableView_CurrentChanged_Callback cb) const { qtableview_currentchanged_callback = cb; }
	inline void setQTableView_RowMoved_Callback(QTableView_RowMoved_Callback cb) const { qtableview_rowmoved_callback = cb; }
	inline void setQTableView_ColumnMoved_Callback(QTableView_ColumnMoved_Callback cb) const { qtableview_columnmoved_callback = cb; }
	inline void setQTableView_RowResized_Callback(QTableView_RowResized_Callback cb) const { qtableview_rowresized_callback = cb; }
	inline void setQTableView_ColumnResized_Callback(QTableView_ColumnResized_Callback cb) const { qtableview_columnresized_callback = cb; }
	inline void setQTableView_RowCountChanged_Callback(QTableView_RowCountChanged_Callback cb) const { qtableview_rowcountchanged_callback = cb; }
	inline void setQTableView_ColumnCountChanged_Callback(QTableView_ColumnCountChanged_Callback cb) const { qtableview_columncountchanged_callback = cb; }

// Base flag setters
	inline void setQTableView_SetModel_IsBase(bool value) const { qtableview_setmodel_isbase = value; }
	inline void setQTableView_SetRootIndex_IsBase(bool value) const { qtableview_setrootindex_isbase = value; }
	inline void setQTableView_SetSelectionModel_IsBase(bool value) const { qtableview_setselectionmodel_isbase = value; }
	inline void setQTableView_DoItemsLayout_IsBase(bool value) const { qtableview_doitemslayout_isbase = value; }
	inline void setQTableView_VisualRect_IsBase(bool value) const { qtableview_visualrect_isbase = value; }
	inline void setQTableView_ScrollTo_IsBase(bool value) const { qtableview_scrollto_isbase = value; }
	inline void setQTableView_IndexAt_IsBase(bool value) const { qtableview_indexat_isbase = value; }
	inline void setQTableView_ScrollContentsBy_IsBase(bool value) const { qtableview_scrollcontentsby_isbase = value; }
	inline void setQTableView_InitViewItemOption_IsBase(bool value) const { qtableview_initviewitemoption_isbase = value; }
	inline void setQTableView_PaintEvent_IsBase(bool value) const { qtableview_paintevent_isbase = value; }
	inline void setQTableView_TimerEvent_IsBase(bool value) const { qtableview_timerevent_isbase = value; }
	inline void setQTableView_DropEvent_IsBase(bool value) const { qtableview_dropevent_isbase = value; }
	inline void setQTableView_HorizontalOffset_IsBase(bool value) const { qtableview_horizontaloffset_isbase = value; }
	inline void setQTableView_VerticalOffset_IsBase(bool value) const { qtableview_verticaloffset_isbase = value; }
	inline void setQTableView_MoveCursor_IsBase(bool value) const { qtableview_movecursor_isbase = value; }
	inline void setQTableView_SetSelection_IsBase(bool value) const { qtableview_setselection_isbase = value; }
	inline void setQTableView_VisualRegionForSelection_IsBase(bool value) const { qtableview_visualregionforselection_isbase = value; }
	inline void setQTableView_SelectedIndexes_IsBase(bool value) const { qtableview_selectedindexes_isbase = value; }
	inline void setQTableView_UpdateGeometries_IsBase(bool value) const { qtableview_updategeometries_isbase = value; }
	inline void setQTableView_ViewportSizeHint_IsBase(bool value) const { qtableview_viewportsizehint_isbase = value; }
	inline void setQTableView_SizeHintForRow_IsBase(bool value) const { qtableview_sizehintforrow_isbase = value; }
	inline void setQTableView_SizeHintForColumn_IsBase(bool value) const { qtableview_sizehintforcolumn_isbase = value; }
	inline void setQTableView_VerticalScrollbarAction_IsBase(bool value) const { qtableview_verticalscrollbaraction_isbase = value; }
	inline void setQTableView_HorizontalScrollbarAction_IsBase(bool value) const { qtableview_horizontalscrollbaraction_isbase = value; }
	inline void setQTableView_IsIndexHidden_IsBase(bool value) const { qtableview_isindexhidden_isbase = value; }
	inline void setQTableView_SelectionChanged_IsBase(bool value) const { qtableview_selectionchanged_isbase = value; }
	inline void setQTableView_CurrentChanged_IsBase(bool value) const { qtableview_currentchanged_isbase = value; }
	inline void setQTableView_RowMoved_IsBase(bool value) const { qtableview_rowmoved_isbase = value; }
	inline void setQTableView_ColumnMoved_IsBase(bool value) const { qtableview_columnmoved_isbase = value; }
	inline void setQTableView_RowResized_IsBase(bool value) const { qtableview_rowresized_isbase = value; }
	inline void setQTableView_ColumnResized_IsBase(bool value) const { qtableview_columnresized_isbase = value; }
	inline void setQTableView_RowCountChanged_IsBase(bool value) const { qtableview_rowcountchanged_isbase = value; }
	inline void setQTableView_ColumnCountChanged_IsBase(bool value) const { qtableview_columncountchanged_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setModel(QAbstractItemModel* model) override {
		if (qtableview_setmodel_isbase) {
			qtableview_setmodel_isbase = false;
			QTableView::setModel(model);
		} else if (qtableview_setmodel_callback != nullptr) {
			QAbstractItemModel* cbval1 = model;
			qtableview_setmodel_callback(this, cbval1);
		} else {
			QTableView::setModel(model);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setRootIndex(const QModelIndex& index) override {
		if (qtableview_setrootindex_isbase) {
			qtableview_setrootindex_isbase = false;
			QTableView::setRootIndex(index);
		} else if (qtableview_setrootindex_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			qtableview_setrootindex_callback(this, cbval1);
		} else {
			QTableView::setRootIndex(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (qtableview_setselectionmodel_isbase) {
			qtableview_setselectionmodel_isbase = false;
			QTableView::setSelectionModel(selectionModel);
		} else if (qtableview_setselectionmodel_callback != nullptr) {
			QItemSelectionModel* cbval1 = selectionModel;
			qtableview_setselectionmodel_callback(this, cbval1);
		} else {
			QTableView::setSelectionModel(selectionModel);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void doItemsLayout() override {
		if (qtableview_doitemslayout_isbase) {
			qtableview_doitemslayout_isbase = false;
			QTableView::doItemsLayout();
		} else if (qtableview_doitemslayout_callback != nullptr) {
			qtableview_doitemslayout_callback();
		} else {
			QTableView::doItemsLayout();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (qtableview_visualrect_isbase) {
			qtableview_visualrect_isbase = false;
			return QTableView::visualRect(index);
		} else if (qtableview_visualrect_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QRect* callback_ret = qtableview_visualrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTableView::visualRect(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollTo(const QModelIndex& index, ScrollHint hint) override {
		if (qtableview_scrollto_isbase) {
			qtableview_scrollto_isbase = false;
			QTableView::scrollTo(index, hint);
		} else if (qtableview_scrollto_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = static_cast<int>(hint);
			qtableview_scrollto_callback(this, cbval1, cbval2);
		} else {
			QTableView::scrollTo(index, hint);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (qtableview_indexat_isbase) {
			qtableview_indexat_isbase = false;
			return QTableView::indexAt(p);
		} else if (qtableview_indexat_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&p;
			QModelIndex* callback_ret = qtableview_indexat_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTableView::indexAt(p);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollContentsBy(int dx, int dy) override {
		if (qtableview_scrollcontentsby_isbase) {
			qtableview_scrollcontentsby_isbase = false;
			QTableView::scrollContentsBy(dx, dy);
		} else if (qtableview_scrollcontentsby_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qtableview_scrollcontentsby_callback(this, cbval1, cbval2);
		} else {
			QTableView::scrollContentsBy(dx, dy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (qtableview_initviewitemoption_isbase) {
			qtableview_initviewitemoption_isbase = false;
			QTableView::initViewItemOption(option);
		} else if (qtableview_initviewitemoption_callback != nullptr) {
			QStyleOptionViewItem* cbval1 = option;
			qtableview_initviewitemoption_callback(this, cbval1);
		} else {
			QTableView::initViewItemOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* e) override {
		if (qtableview_paintevent_isbase) {
			qtableview_paintevent_isbase = false;
			QTableView::paintEvent(e);
		} else if (qtableview_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = e;
			qtableview_paintevent_callback(this, cbval1);
		} else {
			QTableView::paintEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* event) override {
		if (qtableview_timerevent_isbase) {
			qtableview_timerevent_isbase = false;
			QTableView::timerEvent(event);
		} else if (qtableview_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = event;
			qtableview_timerevent_callback(this, cbval1);
		} else {
			QTableView::timerEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QDropEvent* event) override {
		if (qtableview_dropevent_isbase) {
			qtableview_dropevent_isbase = false;
			QTableView::dropEvent(event);
		} else if (qtableview_dropevent_callback != nullptr) {
			QDropEvent* cbval1 = event;
			qtableview_dropevent_callback(this, cbval1);
		} else {
			QTableView::dropEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int horizontalOffset() const override {
		if (qtableview_horizontaloffset_isbase) {
			qtableview_horizontaloffset_isbase = false;
			return QTableView::horizontalOffset();
		} else if (qtableview_horizontaloffset_callback != nullptr) {
			int callback_ret = qtableview_horizontaloffset_callback();
			return callback_ret;
		} else {
			return QTableView::horizontalOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int verticalOffset() const override {
		if (qtableview_verticaloffset_isbase) {
			qtableview_verticaloffset_isbase = false;
			return QTableView::verticalOffset();
		} else if (qtableview_verticaloffset_callback != nullptr) {
			int callback_ret = qtableview_verticaloffset_callback();
			return callback_ret;
		} else {
			return QTableView::verticalOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex moveCursor(CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (qtableview_movecursor_isbase) {
			qtableview_movecursor_isbase = false;
			return QTableView::moveCursor(cursorAction, modifiers);
		} else if (qtableview_movecursor_callback != nullptr) {
			int cbval1 = static_cast<int>(cursorAction);
			int cbval2 = static_cast<int>(modifiers);
			QModelIndex* callback_ret = qtableview_movecursor_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QTableView::moveCursor(cursorAction, modifiers);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (qtableview_setselection_isbase) {
			qtableview_setselection_isbase = false;
			QTableView::setSelection(rect, command);
		} else if (qtableview_setselection_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&rect;
			int cbval2 = static_cast<int>(command);
			qtableview_setselection_callback(this, cbval1, cbval2);
		} else {
			QTableView::setSelection(rect, command);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (qtableview_visualregionforselection_isbase) {
			qtableview_visualregionforselection_isbase = false;
			return QTableView::visualRegionForSelection(selection);
		} else if (qtableview_visualregionforselection_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selection;
			QRegion* callback_ret = qtableview_visualregionforselection_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTableView::visualRegionForSelection(selection);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QModelIndex> selectedIndexes() const override {
		if (qtableview_selectedindexes_isbase) {
			qtableview_selectedindexes_isbase = false;
			return QTableView::selectedIndexes();
		} else if (qtableview_selectedindexes_callback != nullptr) {
			libqt_list callback_ret = qtableview_selectedindexes_callback();
			return QList<QModelIndex>();
		} else {
			return QTableView::selectedIndexes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateGeometries() override {
		if (qtableview_updategeometries_isbase) {
			qtableview_updategeometries_isbase = false;
			QTableView::updateGeometries();
		} else if (qtableview_updategeometries_callback != nullptr) {
			qtableview_updategeometries_callback();
		} else {
			QTableView::updateGeometries();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize viewportSizeHint() const override {
		if (qtableview_viewportsizehint_isbase) {
			qtableview_viewportsizehint_isbase = false;
			return QTableView::viewportSizeHint();
		} else if (qtableview_viewportsizehint_callback != nullptr) {
			QSize* callback_ret = qtableview_viewportsizehint_callback();
			return *callback_ret;
		} else {
			return QTableView::viewportSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int sizeHintForRow(int row) const override {
		if (qtableview_sizehintforrow_isbase) {
			qtableview_sizehintforrow_isbase = false;
			return QTableView::sizeHintForRow(row);
		} else if (qtableview_sizehintforrow_callback != nullptr) {
			int cbval1 = row;
			int callback_ret = qtableview_sizehintforrow_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTableView::sizeHintForRow(row);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int sizeHintForColumn(int column) const override {
		if (qtableview_sizehintforcolumn_isbase) {
			qtableview_sizehintforcolumn_isbase = false;
			return QTableView::sizeHintForColumn(column);
		} else if (qtableview_sizehintforcolumn_callback != nullptr) {
			int cbval1 = column;
			int callback_ret = qtableview_sizehintforcolumn_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTableView::sizeHintForColumn(column);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void verticalScrollbarAction(int action) override {
		if (qtableview_verticalscrollbaraction_isbase) {
			qtableview_verticalscrollbaraction_isbase = false;
			QTableView::verticalScrollbarAction(action);
		} else if (qtableview_verticalscrollbaraction_callback != nullptr) {
			int cbval1 = action;
			qtableview_verticalscrollbaraction_callback(this, cbval1);
		} else {
			QTableView::verticalScrollbarAction(action);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void horizontalScrollbarAction(int action) override {
		if (qtableview_horizontalscrollbaraction_isbase) {
			qtableview_horizontalscrollbaraction_isbase = false;
			QTableView::horizontalScrollbarAction(action);
		} else if (qtableview_horizontalscrollbaraction_callback != nullptr) {
			int cbval1 = action;
			qtableview_horizontalscrollbaraction_callback(this, cbval1);
		} else {
			QTableView::horizontalScrollbarAction(action);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (qtableview_isindexhidden_isbase) {
			qtableview_isindexhidden_isbase = false;
			return QTableView::isIndexHidden(index);
		} else if (qtableview_isindexhidden_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			bool callback_ret = qtableview_isindexhidden_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTableView::isIndexHidden(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (qtableview_selectionchanged_isbase) {
			qtableview_selectionchanged_isbase = false;
			QTableView::selectionChanged(selected, deselected);
		} else if (qtableview_selectionchanged_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selected;
			const QItemSelection* cbval2 = (const QItemSelection*)&deselected;
			qtableview_selectionchanged_callback(this, cbval1, cbval2);
		} else {
			QTableView::selectionChanged(selected, deselected);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (qtableview_currentchanged_isbase) {
			qtableview_currentchanged_isbase = false;
			QTableView::currentChanged(current, previous);
		} else if (qtableview_currentchanged_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&current;
			const QModelIndex* cbval2 = (const QModelIndex*)&previous;
			qtableview_currentchanged_callback(this, cbval1, cbval2);
		} else {
			QTableView::currentChanged(current, previous);
		}
	}

	// Virtual method for C ABI access and custom callback
	void rowMoved(int row, int oldIndex, int newIndex) {
		if (qtableview_rowmoved_isbase) {
			qtableview_rowmoved_isbase = false;
			QTableView::rowMoved(row, oldIndex, newIndex);
		} else if (qtableview_rowmoved_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = oldIndex;
			int cbval3 = newIndex;
			qtableview_rowmoved_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTableView::rowMoved(row, oldIndex, newIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	void columnMoved(int column, int oldIndex, int newIndex) {
		if (qtableview_columnmoved_isbase) {
			qtableview_columnmoved_isbase = false;
			QTableView::columnMoved(column, oldIndex, newIndex);
		} else if (qtableview_columnmoved_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = oldIndex;
			int cbval3 = newIndex;
			qtableview_columnmoved_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTableView::columnMoved(column, oldIndex, newIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	void rowResized(int row, int oldHeight, int newHeight) {
		if (qtableview_rowresized_isbase) {
			qtableview_rowresized_isbase = false;
			QTableView::rowResized(row, oldHeight, newHeight);
		} else if (qtableview_rowresized_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = oldHeight;
			int cbval3 = newHeight;
			qtableview_rowresized_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTableView::rowResized(row, oldHeight, newHeight);
		}
	}

	// Virtual method for C ABI access and custom callback
	void columnResized(int column, int oldWidth, int newWidth) {
		if (qtableview_columnresized_isbase) {
			qtableview_columnresized_isbase = false;
			QTableView::columnResized(column, oldWidth, newWidth);
		} else if (qtableview_columnresized_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = oldWidth;
			int cbval3 = newWidth;
			qtableview_columnresized_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTableView::columnResized(column, oldWidth, newWidth);
		}
	}

	// Virtual method for C ABI access and custom callback
	void rowCountChanged(int oldCount, int newCount) {
		if (qtableview_rowcountchanged_isbase) {
			qtableview_rowcountchanged_isbase = false;
			QTableView::rowCountChanged(oldCount, newCount);
		} else if (qtableview_rowcountchanged_callback != nullptr) {
			int cbval1 = oldCount;
			int cbval2 = newCount;
			qtableview_rowcountchanged_callback(this, cbval1, cbval2);
		} else {
			QTableView::rowCountChanged(oldCount, newCount);
		}
	}

	// Virtual method for C ABI access and custom callback
	void columnCountChanged(int oldCount, int newCount) {
		if (qtableview_columncountchanged_isbase) {
			qtableview_columncountchanged_isbase = false;
			QTableView::columnCountChanged(oldCount, newCount);
		} else if (qtableview_columncountchanged_callback != nullptr) {
			int cbval1 = oldCount;
			int cbval2 = newCount;
			qtableview_columncountchanged_callback(this, cbval1, cbval2);
		} else {
			QTableView::columnCountChanged(oldCount, newCount);
		}
	}

	// Friend functions
	friend void QTableView_ScrollContentsBy(QTableView* self, int dx, int dy);
	friend void QTableView_QBaseScrollContentsBy(QTableView* self, int dx, int dy);
	friend void QTableView_InitViewItemOption(const QTableView* self, QStyleOptionViewItem* option);
	friend void QTableView_QBaseInitViewItemOption(const QTableView* self, QStyleOptionViewItem* option);
	friend void QTableView_PaintEvent(QTableView* self, QPaintEvent* e);
	friend void QTableView_QBasePaintEvent(QTableView* self, QPaintEvent* e);
	friend void QTableView_TimerEvent(QTableView* self, QTimerEvent* event);
	friend void QTableView_QBaseTimerEvent(QTableView* self, QTimerEvent* event);
	friend void QTableView_DropEvent(QTableView* self, QDropEvent* event);
	friend void QTableView_QBaseDropEvent(QTableView* self, QDropEvent* event);
	friend int QTableView_HorizontalOffset(const QTableView* self);
	friend int QTableView_QBaseHorizontalOffset(const QTableView* self);
	friend int QTableView_VerticalOffset(const QTableView* self);
	friend int QTableView_QBaseVerticalOffset(const QTableView* self);
	friend QModelIndex* QTableView_MoveCursor(QTableView* self, int cursorAction, int modifiers);
	friend QModelIndex* QTableView_QBaseMoveCursor(QTableView* self, int cursorAction, int modifiers);
	friend void QTableView_SetSelection(QTableView* self, const QRect* rect, int command);
	friend void QTableView_QBaseSetSelection(QTableView* self, const QRect* rect, int command);
	friend QRegion* QTableView_VisualRegionForSelection(const QTableView* self, const QItemSelection* selection);
	friend QRegion* QTableView_QBaseVisualRegionForSelection(const QTableView* self, const QItemSelection* selection);
	friend libqt_list QTableView_SelectedIndexes(const QTableView* self);
	friend libqt_list QTableView_QBaseSelectedIndexes(const QTableView* self);
	friend void QTableView_UpdateGeometries(QTableView* self);
	friend void QTableView_QBaseUpdateGeometries(QTableView* self);
	friend QSize* QTableView_ViewportSizeHint(const QTableView* self);
	friend QSize* QTableView_QBaseViewportSizeHint(const QTableView* self);
	friend int QTableView_SizeHintForRow(const QTableView* self, int row);
	friend int QTableView_QBaseSizeHintForRow(const QTableView* self, int row);
	friend int QTableView_SizeHintForColumn(const QTableView* self, int column);
	friend int QTableView_QBaseSizeHintForColumn(const QTableView* self, int column);
	friend void QTableView_VerticalScrollbarAction(QTableView* self, int action);
	friend void QTableView_QBaseVerticalScrollbarAction(QTableView* self, int action);
	friend void QTableView_HorizontalScrollbarAction(QTableView* self, int action);
	friend void QTableView_QBaseHorizontalScrollbarAction(QTableView* self, int action);
	friend bool QTableView_IsIndexHidden(const QTableView* self, const QModelIndex* index);
	friend bool QTableView_QBaseIsIndexHidden(const QTableView* self, const QModelIndex* index);
	friend void QTableView_SelectionChanged(QTableView* self, const QItemSelection* selected, const QItemSelection* deselected);
	friend void QTableView_QBaseSelectionChanged(QTableView* self, const QItemSelection* selected, const QItemSelection* deselected);
	friend void QTableView_CurrentChanged(QTableView* self, const QModelIndex* current, const QModelIndex* previous);
	friend void QTableView_QBaseCurrentChanged(QTableView* self, const QModelIndex* current, const QModelIndex* previous);
	friend void QTableView_RowMoved(QTableView* self, int row, int oldIndex, int newIndex);
	friend void QTableView_QBaseRowMoved(QTableView* self, int row, int oldIndex, int newIndex);
	friend void QTableView_ColumnMoved(QTableView* self, int column, int oldIndex, int newIndex);
	friend void QTableView_QBaseColumnMoved(QTableView* self, int column, int oldIndex, int newIndex);
	friend void QTableView_RowResized(QTableView* self, int row, int oldHeight, int newHeight);
	friend void QTableView_QBaseRowResized(QTableView* self, int row, int oldHeight, int newHeight);
	friend void QTableView_ColumnResized(QTableView* self, int column, int oldWidth, int newWidth);
	friend void QTableView_QBaseColumnResized(QTableView* self, int column, int oldWidth, int newWidth);
	friend void QTableView_RowCountChanged(QTableView* self, int oldCount, int newCount);
	friend void QTableView_QBaseRowCountChanged(QTableView* self, int oldCount, int newCount);
	friend void QTableView_ColumnCountChanged(QTableView* self, int oldCount, int newCount);
	friend void QTableView_QBaseColumnCountChanged(QTableView* self, int oldCount, int newCount);
};

#endif


