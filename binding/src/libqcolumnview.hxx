#pragma once
#ifndef QCOLUMNVIEW_H_C_LIBVIRTUAL
#define QCOLUMNVIEW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QColumnView so that we can call protected methods
class VirtualQColumnView final : public QColumnView {

public:
	// Virtual class boolean flag
	bool isVirtualQColumnView= true;

	// Virtual class public types (including callbacks)
	using QColumnView_IndexAt_Callback = QModelIndex* (*)(const QColumnView*, const QPoint*);
	using QColumnView_ScrollTo_Callback = void (*)(QColumnView*, const QModelIndex*, int);
	using QColumnView_SizeHint_Callback = QSize* (*)();
	using QColumnView_VisualRect_Callback = QRect* (*)(const QColumnView*, const QModelIndex*);
	using QColumnView_SetModel_Callback = void (*)(QColumnView*, QAbstractItemModel*);
	using QColumnView_SetSelectionModel_Callback = void (*)(QColumnView*, QItemSelectionModel*);
	using QColumnView_SetRootIndex_Callback = void (*)(QColumnView*, const QModelIndex*);
	using QColumnView_SelectAll_Callback = void (*)();
	using QColumnView_IsIndexHidden_Callback = bool (*)(const QColumnView*, const QModelIndex*);
	using QColumnView_MoveCursor_Callback = QModelIndex* (*)(QColumnView*, int, int);
	using QColumnView_ResizeEvent_Callback = void (*)(QColumnView*, QResizeEvent*);
	using QColumnView_SetSelection_Callback = void (*)(QColumnView*, const QRect*, int);
	using QColumnView_VisualRegionForSelection_Callback = QRegion* (*)(const QColumnView*, const QItemSelection*);
	using QColumnView_HorizontalOffset_Callback = int (*)();
	using QColumnView_VerticalOffset_Callback = int (*)();
	using QColumnView_RowsInserted_Callback = void (*)(QColumnView*, const QModelIndex*, int, int);
	using QColumnView_CurrentChanged_Callback = void (*)(QColumnView*, const QModelIndex*, const QModelIndex*);
	using QColumnView_ScrollContentsBy_Callback = void (*)(QColumnView*, int, int);
	using QColumnView_CreateColumn_Callback = QAbstractItemView* (*)(QColumnView*, const QModelIndex*);
	using QColumnView_InitializeColumn_Callback = void (*)(const QColumnView*, QAbstractItemView*);

protected:
	// Instance callback storage
	mutable QColumnView_IndexAt_Callback qcolumnview_indexat_callback = nullptr;
	mutable QColumnView_ScrollTo_Callback qcolumnview_scrollto_callback = nullptr;
	mutable QColumnView_SizeHint_Callback qcolumnview_sizehint_callback = nullptr;
	mutable QColumnView_VisualRect_Callback qcolumnview_visualrect_callback = nullptr;
	mutable QColumnView_SetModel_Callback qcolumnview_setmodel_callback = nullptr;
	mutable QColumnView_SetSelectionModel_Callback qcolumnview_setselectionmodel_callback = nullptr;
	mutable QColumnView_SetRootIndex_Callback qcolumnview_setrootindex_callback = nullptr;
	mutable QColumnView_SelectAll_Callback qcolumnview_selectall_callback = nullptr;
	mutable QColumnView_IsIndexHidden_Callback qcolumnview_isindexhidden_callback = nullptr;
	mutable QColumnView_MoveCursor_Callback qcolumnview_movecursor_callback = nullptr;
	mutable QColumnView_ResizeEvent_Callback qcolumnview_resizeevent_callback = nullptr;
	mutable QColumnView_SetSelection_Callback qcolumnview_setselection_callback = nullptr;
	mutable QColumnView_VisualRegionForSelection_Callback qcolumnview_visualregionforselection_callback = nullptr;
	mutable QColumnView_HorizontalOffset_Callback qcolumnview_horizontaloffset_callback = nullptr;
	mutable QColumnView_VerticalOffset_Callback qcolumnview_verticaloffset_callback = nullptr;
	mutable QColumnView_RowsInserted_Callback qcolumnview_rowsinserted_callback = nullptr;
	mutable QColumnView_CurrentChanged_Callback qcolumnview_currentchanged_callback = nullptr;
	mutable QColumnView_ScrollContentsBy_Callback qcolumnview_scrollcontentsby_callback = nullptr;
	mutable QColumnView_CreateColumn_Callback qcolumnview_createcolumn_callback = nullptr;
	mutable QColumnView_InitializeColumn_Callback qcolumnview_initializecolumn_callback = nullptr;

	// Instance base flags
    mutable bool qcolumnview_indexat_isbase = false;
    mutable bool qcolumnview_scrollto_isbase = false;
    mutable bool qcolumnview_sizehint_isbase = false;
    mutable bool qcolumnview_visualrect_isbase = false;
    mutable bool qcolumnview_setmodel_isbase = false;
    mutable bool qcolumnview_setselectionmodel_isbase = false;
    mutable bool qcolumnview_setrootindex_isbase = false;
    mutable bool qcolumnview_selectall_isbase = false;
    mutable bool qcolumnview_isindexhidden_isbase = false;
    mutable bool qcolumnview_movecursor_isbase = false;
    mutable bool qcolumnview_resizeevent_isbase = false;
    mutable bool qcolumnview_setselection_isbase = false;
    mutable bool qcolumnview_visualregionforselection_isbase = false;
    mutable bool qcolumnview_horizontaloffset_isbase = false;
    mutable bool qcolumnview_verticaloffset_isbase = false;
    mutable bool qcolumnview_rowsinserted_isbase = false;
    mutable bool qcolumnview_currentchanged_isbase = false;
    mutable bool qcolumnview_scrollcontentsby_isbase = false;
    mutable bool qcolumnview_createcolumn_isbase = false;
    mutable bool qcolumnview_initializecolumn_isbase = false;

public:
	VirtualQColumnView(QWidget* parent): QColumnView(parent) {};
	VirtualQColumnView(): QColumnView() {};

	~VirtualQColumnView() {
		qcolumnview_indexat_callback = nullptr;
		qcolumnview_scrollto_callback = nullptr;
		qcolumnview_sizehint_callback = nullptr;
		qcolumnview_visualrect_callback = nullptr;
		qcolumnview_setmodel_callback = nullptr;
		qcolumnview_setselectionmodel_callback = nullptr;
		qcolumnview_setrootindex_callback = nullptr;
		qcolumnview_selectall_callback = nullptr;
		qcolumnview_isindexhidden_callback = nullptr;
		qcolumnview_movecursor_callback = nullptr;
		qcolumnview_resizeevent_callback = nullptr;
		qcolumnview_setselection_callback = nullptr;
		qcolumnview_visualregionforselection_callback = nullptr;
		qcolumnview_horizontaloffset_callback = nullptr;
		qcolumnview_verticaloffset_callback = nullptr;
		qcolumnview_rowsinserted_callback = nullptr;
		qcolumnview_currentchanged_callback = nullptr;
		qcolumnview_scrollcontentsby_callback = nullptr;
		qcolumnview_createcolumn_callback = nullptr;
		qcolumnview_initializecolumn_callback = nullptr;
	}

// Callback setters
	inline void setQColumnView_IndexAt_Callback(QColumnView_IndexAt_Callback cb) const { qcolumnview_indexat_callback = cb; }
	inline void setQColumnView_ScrollTo_Callback(QColumnView_ScrollTo_Callback cb) const { qcolumnview_scrollto_callback = cb; }
	inline void setQColumnView_SizeHint_Callback(QColumnView_SizeHint_Callback cb) const { qcolumnview_sizehint_callback = cb; }
	inline void setQColumnView_VisualRect_Callback(QColumnView_VisualRect_Callback cb) const { qcolumnview_visualrect_callback = cb; }
	inline void setQColumnView_SetModel_Callback(QColumnView_SetModel_Callback cb) const { qcolumnview_setmodel_callback = cb; }
	inline void setQColumnView_SetSelectionModel_Callback(QColumnView_SetSelectionModel_Callback cb) const { qcolumnview_setselectionmodel_callback = cb; }
	inline void setQColumnView_SetRootIndex_Callback(QColumnView_SetRootIndex_Callback cb) const { qcolumnview_setrootindex_callback = cb; }
	inline void setQColumnView_SelectAll_Callback(QColumnView_SelectAll_Callback cb) const { qcolumnview_selectall_callback = cb; }
	inline void setQColumnView_IsIndexHidden_Callback(QColumnView_IsIndexHidden_Callback cb) const { qcolumnview_isindexhidden_callback = cb; }
	inline void setQColumnView_MoveCursor_Callback(QColumnView_MoveCursor_Callback cb) const { qcolumnview_movecursor_callback = cb; }
	inline void setQColumnView_ResizeEvent_Callback(QColumnView_ResizeEvent_Callback cb) const { qcolumnview_resizeevent_callback = cb; }
	inline void setQColumnView_SetSelection_Callback(QColumnView_SetSelection_Callback cb) const { qcolumnview_setselection_callback = cb; }
	inline void setQColumnView_VisualRegionForSelection_Callback(QColumnView_VisualRegionForSelection_Callback cb) const { qcolumnview_visualregionforselection_callback = cb; }
	inline void setQColumnView_HorizontalOffset_Callback(QColumnView_HorizontalOffset_Callback cb) const { qcolumnview_horizontaloffset_callback = cb; }
	inline void setQColumnView_VerticalOffset_Callback(QColumnView_VerticalOffset_Callback cb) const { qcolumnview_verticaloffset_callback = cb; }
	inline void setQColumnView_RowsInserted_Callback(QColumnView_RowsInserted_Callback cb) const { qcolumnview_rowsinserted_callback = cb; }
	inline void setQColumnView_CurrentChanged_Callback(QColumnView_CurrentChanged_Callback cb) const { qcolumnview_currentchanged_callback = cb; }
	inline void setQColumnView_ScrollContentsBy_Callback(QColumnView_ScrollContentsBy_Callback cb) const { qcolumnview_scrollcontentsby_callback = cb; }
	inline void setQColumnView_CreateColumn_Callback(QColumnView_CreateColumn_Callback cb) const { qcolumnview_createcolumn_callback = cb; }
	inline void setQColumnView_InitializeColumn_Callback(QColumnView_InitializeColumn_Callback cb) const { qcolumnview_initializecolumn_callback = cb; }

// Base flag setters
	inline void setQColumnView_IndexAt_IsBase(bool value) const { qcolumnview_indexat_isbase = value; }
	inline void setQColumnView_ScrollTo_IsBase(bool value) const { qcolumnview_scrollto_isbase = value; }
	inline void setQColumnView_SizeHint_IsBase(bool value) const { qcolumnview_sizehint_isbase = value; }
	inline void setQColumnView_VisualRect_IsBase(bool value) const { qcolumnview_visualrect_isbase = value; }
	inline void setQColumnView_SetModel_IsBase(bool value) const { qcolumnview_setmodel_isbase = value; }
	inline void setQColumnView_SetSelectionModel_IsBase(bool value) const { qcolumnview_setselectionmodel_isbase = value; }
	inline void setQColumnView_SetRootIndex_IsBase(bool value) const { qcolumnview_setrootindex_isbase = value; }
	inline void setQColumnView_SelectAll_IsBase(bool value) const { qcolumnview_selectall_isbase = value; }
	inline void setQColumnView_IsIndexHidden_IsBase(bool value) const { qcolumnview_isindexhidden_isbase = value; }
	inline void setQColumnView_MoveCursor_IsBase(bool value) const { qcolumnview_movecursor_isbase = value; }
	inline void setQColumnView_ResizeEvent_IsBase(bool value) const { qcolumnview_resizeevent_isbase = value; }
	inline void setQColumnView_SetSelection_IsBase(bool value) const { qcolumnview_setselection_isbase = value; }
	inline void setQColumnView_VisualRegionForSelection_IsBase(bool value) const { qcolumnview_visualregionforselection_isbase = value; }
	inline void setQColumnView_HorizontalOffset_IsBase(bool value) const { qcolumnview_horizontaloffset_isbase = value; }
	inline void setQColumnView_VerticalOffset_IsBase(bool value) const { qcolumnview_verticaloffset_isbase = value; }
	inline void setQColumnView_RowsInserted_IsBase(bool value) const { qcolumnview_rowsinserted_isbase = value; }
	inline void setQColumnView_CurrentChanged_IsBase(bool value) const { qcolumnview_currentchanged_isbase = value; }
	inline void setQColumnView_ScrollContentsBy_IsBase(bool value) const { qcolumnview_scrollcontentsby_isbase = value; }
	inline void setQColumnView_CreateColumn_IsBase(bool value) const { qcolumnview_createcolumn_isbase = value; }
	inline void setQColumnView_InitializeColumn_IsBase(bool value) const { qcolumnview_initializecolumn_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QModelIndex indexAt(const QPoint& point) const override {
		if (qcolumnview_indexat_isbase) {
			qcolumnview_indexat_isbase = false;
			return QColumnView::indexAt(point);
		} else if (qcolumnview_indexat_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&point;
			QModelIndex* callback_ret = qcolumnview_indexat_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QColumnView::indexAt(point);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollTo(const QModelIndex& index, ScrollHint hint) override {
		if (qcolumnview_scrollto_isbase) {
			qcolumnview_scrollto_isbase = false;
			QColumnView::scrollTo(index, hint);
		} else if (qcolumnview_scrollto_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = static_cast<int>(hint);
			qcolumnview_scrollto_callback(this, cbval1, cbval2);
		} else {
			QColumnView::scrollTo(index, hint);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qcolumnview_sizehint_isbase) {
			qcolumnview_sizehint_isbase = false;
			return QColumnView::sizeHint();
		} else if (qcolumnview_sizehint_callback != nullptr) {
			QSize* callback_ret = qcolumnview_sizehint_callback();
			return *callback_ret;
		} else {
			return QColumnView::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (qcolumnview_visualrect_isbase) {
			qcolumnview_visualrect_isbase = false;
			return QColumnView::visualRect(index);
		} else if (qcolumnview_visualrect_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QRect* callback_ret = qcolumnview_visualrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QColumnView::visualRect(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setModel(QAbstractItemModel* model) override {
		if (qcolumnview_setmodel_isbase) {
			qcolumnview_setmodel_isbase = false;
			QColumnView::setModel(model);
		} else if (qcolumnview_setmodel_callback != nullptr) {
			QAbstractItemModel* cbval1 = model;
			qcolumnview_setmodel_callback(this, cbval1);
		} else {
			QColumnView::setModel(model);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (qcolumnview_setselectionmodel_isbase) {
			qcolumnview_setselectionmodel_isbase = false;
			QColumnView::setSelectionModel(selectionModel);
		} else if (qcolumnview_setselectionmodel_callback != nullptr) {
			QItemSelectionModel* cbval1 = selectionModel;
			qcolumnview_setselectionmodel_callback(this, cbval1);
		} else {
			QColumnView::setSelectionModel(selectionModel);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setRootIndex(const QModelIndex& index) override {
		if (qcolumnview_setrootindex_isbase) {
			qcolumnview_setrootindex_isbase = false;
			QColumnView::setRootIndex(index);
		} else if (qcolumnview_setrootindex_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			qcolumnview_setrootindex_callback(this, cbval1);
		} else {
			QColumnView::setRootIndex(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void selectAll() override {
		if (qcolumnview_selectall_isbase) {
			qcolumnview_selectall_isbase = false;
			QColumnView::selectAll();
		} else if (qcolumnview_selectall_callback != nullptr) {
			qcolumnview_selectall_callback();
		} else {
			QColumnView::selectAll();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (qcolumnview_isindexhidden_isbase) {
			qcolumnview_isindexhidden_isbase = false;
			return QColumnView::isIndexHidden(index);
		} else if (qcolumnview_isindexhidden_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			bool callback_ret = qcolumnview_isindexhidden_callback(this, cbval1);
			return callback_ret;
		} else {
			return QColumnView::isIndexHidden(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex moveCursor(CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (qcolumnview_movecursor_isbase) {
			qcolumnview_movecursor_isbase = false;
			return QColumnView::moveCursor(cursorAction, modifiers);
		} else if (qcolumnview_movecursor_callback != nullptr) {
			int cbval1 = static_cast<int>(cursorAction);
			int cbval2 = static_cast<int>(modifiers);
			QModelIndex* callback_ret = qcolumnview_movecursor_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QColumnView::moveCursor(cursorAction, modifiers);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qcolumnview_resizeevent_isbase) {
			qcolumnview_resizeevent_isbase = false;
			QColumnView::resizeEvent(event);
		} else if (qcolumnview_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qcolumnview_resizeevent_callback(this, cbval1);
		} else {
			QColumnView::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (qcolumnview_setselection_isbase) {
			qcolumnview_setselection_isbase = false;
			QColumnView::setSelection(rect, command);
		} else if (qcolumnview_setselection_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&rect;
			int cbval2 = static_cast<int>(command);
			qcolumnview_setselection_callback(this, cbval1, cbval2);
		} else {
			QColumnView::setSelection(rect, command);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (qcolumnview_visualregionforselection_isbase) {
			qcolumnview_visualregionforselection_isbase = false;
			return QColumnView::visualRegionForSelection(selection);
		} else if (qcolumnview_visualregionforselection_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selection;
			QRegion* callback_ret = qcolumnview_visualregionforselection_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QColumnView::visualRegionForSelection(selection);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int horizontalOffset() const override {
		if (qcolumnview_horizontaloffset_isbase) {
			qcolumnview_horizontaloffset_isbase = false;
			return QColumnView::horizontalOffset();
		} else if (qcolumnview_horizontaloffset_callback != nullptr) {
			int callback_ret = qcolumnview_horizontaloffset_callback();
			return callback_ret;
		} else {
			return QColumnView::horizontalOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int verticalOffset() const override {
		if (qcolumnview_verticaloffset_isbase) {
			qcolumnview_verticaloffset_isbase = false;
			return QColumnView::verticalOffset();
		} else if (qcolumnview_verticaloffset_callback != nullptr) {
			int callback_ret = qcolumnview_verticaloffset_callback();
			return callback_ret;
		} else {
			return QColumnView::verticalOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (qcolumnview_rowsinserted_isbase) {
			qcolumnview_rowsinserted_isbase = false;
			QColumnView::rowsInserted(parent, start, end);
		} else if (qcolumnview_rowsinserted_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = start;
			int cbval3 = end;
			qcolumnview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
		} else {
			QColumnView::rowsInserted(parent, start, end);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (qcolumnview_currentchanged_isbase) {
			qcolumnview_currentchanged_isbase = false;
			QColumnView::currentChanged(current, previous);
		} else if (qcolumnview_currentchanged_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&current;
			const QModelIndex* cbval2 = (const QModelIndex*)&previous;
			qcolumnview_currentchanged_callback(this, cbval1, cbval2);
		} else {
			QColumnView::currentChanged(current, previous);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollContentsBy(int dx, int dy) override {
		if (qcolumnview_scrollcontentsby_isbase) {
			qcolumnview_scrollcontentsby_isbase = false;
			QColumnView::scrollContentsBy(dx, dy);
		} else if (qcolumnview_scrollcontentsby_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qcolumnview_scrollcontentsby_callback(this, cbval1, cbval2);
		} else {
			QColumnView::scrollContentsBy(dx, dy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAbstractItemView* createColumn(const QModelIndex& rootIndex) override {
		if (qcolumnview_createcolumn_isbase) {
			qcolumnview_createcolumn_isbase = false;
			return QColumnView::createColumn(rootIndex);
		} else if (qcolumnview_createcolumn_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&rootIndex;
			QAbstractItemView* callback_ret = qcolumnview_createcolumn_callback(this, cbval1);
			return callback_ret;
		} else {
			return QColumnView::createColumn(rootIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	void initializeColumn(QAbstractItemView* column) const {
		if (qcolumnview_initializecolumn_isbase) {
			qcolumnview_initializecolumn_isbase = false;
			QColumnView::initializeColumn(column);
		} else if (qcolumnview_initializecolumn_callback != nullptr) {
			QAbstractItemView* cbval1 = column;
			qcolumnview_initializecolumn_callback(this, cbval1);
		} else {
			QColumnView::initializeColumn(column);
		}
	}

	// Friend functions
	friend bool QColumnView_IsIndexHidden(const QColumnView* self, const QModelIndex* index);
	friend bool QColumnView_QBaseIsIndexHidden(const QColumnView* self, const QModelIndex* index);
	friend QModelIndex* QColumnView_MoveCursor(QColumnView* self, int cursorAction, int modifiers);
	friend QModelIndex* QColumnView_QBaseMoveCursor(QColumnView* self, int cursorAction, int modifiers);
	friend void QColumnView_ResizeEvent(QColumnView* self, QResizeEvent* event);
	friend void QColumnView_QBaseResizeEvent(QColumnView* self, QResizeEvent* event);
	friend void QColumnView_SetSelection(QColumnView* self, const QRect* rect, int command);
	friend void QColumnView_QBaseSetSelection(QColumnView* self, const QRect* rect, int command);
	friend QRegion* QColumnView_VisualRegionForSelection(const QColumnView* self, const QItemSelection* selection);
	friend QRegion* QColumnView_QBaseVisualRegionForSelection(const QColumnView* self, const QItemSelection* selection);
	friend int QColumnView_HorizontalOffset(const QColumnView* self);
	friend int QColumnView_QBaseHorizontalOffset(const QColumnView* self);
	friend int QColumnView_VerticalOffset(const QColumnView* self);
	friend int QColumnView_QBaseVerticalOffset(const QColumnView* self);
	friend void QColumnView_RowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end);
	friend void QColumnView_QBaseRowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end);
	friend void QColumnView_CurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous);
	friend void QColumnView_QBaseCurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous);
	friend void QColumnView_ScrollContentsBy(QColumnView* self, int dx, int dy);
	friend void QColumnView_QBaseScrollContentsBy(QColumnView* self, int dx, int dy);
	friend QAbstractItemView* QColumnView_CreateColumn(QColumnView* self, const QModelIndex* rootIndex);
	friend QAbstractItemView* QColumnView_QBaseCreateColumn(QColumnView* self, const QModelIndex* rootIndex);
	friend void QColumnView_InitializeColumn(const QColumnView* self, QAbstractItemView* column);
	friend void QColumnView_QBaseInitializeColumn(const QColumnView* self, QAbstractItemView* column);
};

#endif


