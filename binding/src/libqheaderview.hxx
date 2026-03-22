#pragma once
#ifndef QHEADERVIEW_H_C_LIBVIRTUAL
#define QHEADERVIEW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QHeaderView so that we can call protected methods
class VirtualQHeaderView final : public QHeaderView {

public:
	// Virtual class boolean flag
	bool isVirtualQHeaderView= true;

	// Virtual class public types (including callbacks)
	using QHeaderView_SetModel_Callback = void (*)(QHeaderView*, QAbstractItemModel*);
	using QHeaderView_SizeHint_Callback = QSize* (*)();
	using QHeaderView_SetVisible_Callback = void (*)(QHeaderView*, bool);
	using QHeaderView_DoItemsLayout_Callback = void (*)();
	using QHeaderView_Reset_Callback = void (*)();
	using QHeaderView_CurrentChanged_Callback = void (*)(QHeaderView*, const QModelIndex*, const QModelIndex*);
	using QHeaderView_Event_Callback = bool (*)(QHeaderView*, QEvent*);
	using QHeaderView_PaintEvent_Callback = void (*)(QHeaderView*, QPaintEvent*);
	using QHeaderView_MousePressEvent_Callback = void (*)(QHeaderView*, QMouseEvent*);
	using QHeaderView_MouseMoveEvent_Callback = void (*)(QHeaderView*, QMouseEvent*);
	using QHeaderView_MouseReleaseEvent_Callback = void (*)(QHeaderView*, QMouseEvent*);
	using QHeaderView_MouseDoubleClickEvent_Callback = void (*)(QHeaderView*, QMouseEvent*);
	using QHeaderView_ViewportEvent_Callback = bool (*)(QHeaderView*, QEvent*);
	using QHeaderView_PaintSection_Callback = void (*)(const QHeaderView*, QPainter*, const QRect*, int);
	using QHeaderView_SectionSizeFromContents_Callback = QSize* (*)(const QHeaderView*, int);
	using QHeaderView_HorizontalOffset_Callback = int (*)();
	using QHeaderView_VerticalOffset_Callback = int (*)();
	using QHeaderView_UpdateGeometries_Callback = void (*)();
	using QHeaderView_ScrollContentsBy_Callback = void (*)(QHeaderView*, int, int);
	using QHeaderView_DataChanged_Callback = void (*)(QHeaderView*, const QModelIndex*, const QModelIndex*, libqt_list);
	using QHeaderView_RowsInserted_Callback = void (*)(QHeaderView*, const QModelIndex*, int, int);
	using QHeaderView_VisualRect_Callback = QRect* (*)(const QHeaderView*, const QModelIndex*);
	using QHeaderView_ScrollTo_Callback = void (*)(QHeaderView*, const QModelIndex*, int);
	using QHeaderView_IndexAt_Callback = QModelIndex* (*)(const QHeaderView*, const QPoint*);
	using QHeaderView_IsIndexHidden_Callback = bool (*)(const QHeaderView*, const QModelIndex*);
	using QHeaderView_MoveCursor_Callback = QModelIndex* (*)(QHeaderView*, int, int);
	using QHeaderView_SetSelection_Callback = void (*)(QHeaderView*, const QRect*, int);
	using QHeaderView_VisualRegionForSelection_Callback = QRegion* (*)(const QHeaderView*, const QItemSelection*);
	using QHeaderView_InitStyleOptionForIndex_Callback = void (*)(const QHeaderView*, QStyleOptionHeader*, int);
	using QHeaderView_InitStyleOption_Callback = void (*)(const QHeaderView*, QStyleOptionHeader*);
	using QHeaderView_UpdateSection_Callback = void (*)(QHeaderView*, int);
	using QHeaderView_ResizeSections2_Callback = void (*)();
	using QHeaderView_SectionsInserted_Callback = void (*)(QHeaderView*, const QModelIndex*, int, int);
	using QHeaderView_SectionsAboutToBeRemoved_Callback = void (*)(QHeaderView*, const QModelIndex*, int, int);
	using QHeaderView_Initialize_Callback = void (*)();
	using QHeaderView_InitializeSections_Callback = void (*)();
	using QHeaderView_InitializeSections2_Callback = void (*)(QHeaderView*, int, int);

protected:
	// Instance callback storage
	mutable QHeaderView_SetModel_Callback qheaderview_setmodel_callback = nullptr;
	mutable QHeaderView_SizeHint_Callback qheaderview_sizehint_callback = nullptr;
	mutable QHeaderView_SetVisible_Callback qheaderview_setvisible_callback = nullptr;
	mutable QHeaderView_DoItemsLayout_Callback qheaderview_doitemslayout_callback = nullptr;
	mutable QHeaderView_Reset_Callback qheaderview_reset_callback = nullptr;
	mutable QHeaderView_CurrentChanged_Callback qheaderview_currentchanged_callback = nullptr;
	mutable QHeaderView_Event_Callback qheaderview_event_callback = nullptr;
	mutable QHeaderView_PaintEvent_Callback qheaderview_paintevent_callback = nullptr;
	mutable QHeaderView_MousePressEvent_Callback qheaderview_mousepressevent_callback = nullptr;
	mutable QHeaderView_MouseMoveEvent_Callback qheaderview_mousemoveevent_callback = nullptr;
	mutable QHeaderView_MouseReleaseEvent_Callback qheaderview_mousereleaseevent_callback = nullptr;
	mutable QHeaderView_MouseDoubleClickEvent_Callback qheaderview_mousedoubleclickevent_callback = nullptr;
	mutable QHeaderView_ViewportEvent_Callback qheaderview_viewportevent_callback = nullptr;
	mutable QHeaderView_PaintSection_Callback qheaderview_paintsection_callback = nullptr;
	mutable QHeaderView_SectionSizeFromContents_Callback qheaderview_sectionsizefromcontents_callback = nullptr;
	mutable QHeaderView_HorizontalOffset_Callback qheaderview_horizontaloffset_callback = nullptr;
	mutable QHeaderView_VerticalOffset_Callback qheaderview_verticaloffset_callback = nullptr;
	mutable QHeaderView_UpdateGeometries_Callback qheaderview_updategeometries_callback = nullptr;
	mutable QHeaderView_ScrollContentsBy_Callback qheaderview_scrollcontentsby_callback = nullptr;
	mutable QHeaderView_DataChanged_Callback qheaderview_datachanged_callback = nullptr;
	mutable QHeaderView_RowsInserted_Callback qheaderview_rowsinserted_callback = nullptr;
	mutable QHeaderView_VisualRect_Callback qheaderview_visualrect_callback = nullptr;
	mutable QHeaderView_ScrollTo_Callback qheaderview_scrollto_callback = nullptr;
	mutable QHeaderView_IndexAt_Callback qheaderview_indexat_callback = nullptr;
	mutable QHeaderView_IsIndexHidden_Callback qheaderview_isindexhidden_callback = nullptr;
	mutable QHeaderView_MoveCursor_Callback qheaderview_movecursor_callback = nullptr;
	mutable QHeaderView_SetSelection_Callback qheaderview_setselection_callback = nullptr;
	mutable QHeaderView_VisualRegionForSelection_Callback qheaderview_visualregionforselection_callback = nullptr;
	mutable QHeaderView_InitStyleOptionForIndex_Callback qheaderview_initstyleoptionforindex_callback = nullptr;
	mutable QHeaderView_InitStyleOption_Callback qheaderview_initstyleoption_callback = nullptr;
	mutable QHeaderView_UpdateSection_Callback qheaderview_updatesection_callback = nullptr;
	mutable QHeaderView_ResizeSections2_Callback qheaderview_resizesections2_callback = nullptr;
	mutable QHeaderView_SectionsInserted_Callback qheaderview_sectionsinserted_callback = nullptr;
	mutable QHeaderView_SectionsAboutToBeRemoved_Callback qheaderview_sectionsabouttoberemoved_callback = nullptr;
	mutable QHeaderView_Initialize_Callback qheaderview_initialize_callback = nullptr;
	mutable QHeaderView_InitializeSections_Callback qheaderview_initializesections_callback = nullptr;
	mutable QHeaderView_InitializeSections2_Callback qheaderview_initializesections2_callback = nullptr;

	// Instance base flags
    mutable bool qheaderview_setmodel_isbase = false;
    mutable bool qheaderview_sizehint_isbase = false;
    mutable bool qheaderview_setvisible_isbase = false;
    mutable bool qheaderview_doitemslayout_isbase = false;
    mutable bool qheaderview_reset_isbase = false;
    mutable bool qheaderview_currentchanged_isbase = false;
    mutable bool qheaderview_event_isbase = false;
    mutable bool qheaderview_paintevent_isbase = false;
    mutable bool qheaderview_mousepressevent_isbase = false;
    mutable bool qheaderview_mousemoveevent_isbase = false;
    mutable bool qheaderview_mousereleaseevent_isbase = false;
    mutable bool qheaderview_mousedoubleclickevent_isbase = false;
    mutable bool qheaderview_viewportevent_isbase = false;
    mutable bool qheaderview_paintsection_isbase = false;
    mutable bool qheaderview_sectionsizefromcontents_isbase = false;
    mutable bool qheaderview_horizontaloffset_isbase = false;
    mutable bool qheaderview_verticaloffset_isbase = false;
    mutable bool qheaderview_updategeometries_isbase = false;
    mutable bool qheaderview_scrollcontentsby_isbase = false;
    mutable bool qheaderview_datachanged_isbase = false;
    mutable bool qheaderview_rowsinserted_isbase = false;
    mutable bool qheaderview_visualrect_isbase = false;
    mutable bool qheaderview_scrollto_isbase = false;
    mutable bool qheaderview_indexat_isbase = false;
    mutable bool qheaderview_isindexhidden_isbase = false;
    mutable bool qheaderview_movecursor_isbase = false;
    mutable bool qheaderview_setselection_isbase = false;
    mutable bool qheaderview_visualregionforselection_isbase = false;
    mutable bool qheaderview_initstyleoptionforindex_isbase = false;
    mutable bool qheaderview_initstyleoption_isbase = false;
    mutable bool qheaderview_updatesection_isbase = false;
    mutable bool qheaderview_resizesections2_isbase = false;
    mutable bool qheaderview_sectionsinserted_isbase = false;
    mutable bool qheaderview_sectionsabouttoberemoved_isbase = false;
    mutable bool qheaderview_initialize_isbase = false;
    mutable bool qheaderview_initializesections_isbase = false;
    mutable bool qheaderview_initializesections2_isbase = false;

public:
	VirtualQHeaderView(Qt::Orientation orientation): QHeaderView(orientation) {};
	VirtualQHeaderView(Qt::Orientation orientation, QWidget* parent): QHeaderView(orientation, parent) {};

	~VirtualQHeaderView() {
		qheaderview_setmodel_callback = nullptr;
		qheaderview_sizehint_callback = nullptr;
		qheaderview_setvisible_callback = nullptr;
		qheaderview_doitemslayout_callback = nullptr;
		qheaderview_reset_callback = nullptr;
		qheaderview_currentchanged_callback = nullptr;
		qheaderview_event_callback = nullptr;
		qheaderview_paintevent_callback = nullptr;
		qheaderview_mousepressevent_callback = nullptr;
		qheaderview_mousemoveevent_callback = nullptr;
		qheaderview_mousereleaseevent_callback = nullptr;
		qheaderview_mousedoubleclickevent_callback = nullptr;
		qheaderview_viewportevent_callback = nullptr;
		qheaderview_paintsection_callback = nullptr;
		qheaderview_sectionsizefromcontents_callback = nullptr;
		qheaderview_horizontaloffset_callback = nullptr;
		qheaderview_verticaloffset_callback = nullptr;
		qheaderview_updategeometries_callback = nullptr;
		qheaderview_scrollcontentsby_callback = nullptr;
		qheaderview_datachanged_callback = nullptr;
		qheaderview_rowsinserted_callback = nullptr;
		qheaderview_visualrect_callback = nullptr;
		qheaderview_scrollto_callback = nullptr;
		qheaderview_indexat_callback = nullptr;
		qheaderview_isindexhidden_callback = nullptr;
		qheaderview_movecursor_callback = nullptr;
		qheaderview_setselection_callback = nullptr;
		qheaderview_visualregionforselection_callback = nullptr;
		qheaderview_initstyleoptionforindex_callback = nullptr;
		qheaderview_initstyleoption_callback = nullptr;
		qheaderview_updatesection_callback = nullptr;
		qheaderview_resizesections2_callback = nullptr;
		qheaderview_sectionsinserted_callback = nullptr;
		qheaderview_sectionsabouttoberemoved_callback = nullptr;
		qheaderview_initialize_callback = nullptr;
		qheaderview_initializesections_callback = nullptr;
		qheaderview_initializesections2_callback = nullptr;
	}

// Callback setters
	inline void setQHeaderView_SetModel_Callback(QHeaderView_SetModel_Callback cb) const { qheaderview_setmodel_callback = cb; }
	inline void setQHeaderView_SizeHint_Callback(QHeaderView_SizeHint_Callback cb) const { qheaderview_sizehint_callback = cb; }
	inline void setQHeaderView_SetVisible_Callback(QHeaderView_SetVisible_Callback cb) const { qheaderview_setvisible_callback = cb; }
	inline void setQHeaderView_DoItemsLayout_Callback(QHeaderView_DoItemsLayout_Callback cb) const { qheaderview_doitemslayout_callback = cb; }
	inline void setQHeaderView_Reset_Callback(QHeaderView_Reset_Callback cb) const { qheaderview_reset_callback = cb; }
	inline void setQHeaderView_CurrentChanged_Callback(QHeaderView_CurrentChanged_Callback cb) const { qheaderview_currentchanged_callback = cb; }
	inline void setQHeaderView_Event_Callback(QHeaderView_Event_Callback cb) const { qheaderview_event_callback = cb; }
	inline void setQHeaderView_PaintEvent_Callback(QHeaderView_PaintEvent_Callback cb) const { qheaderview_paintevent_callback = cb; }
	inline void setQHeaderView_MousePressEvent_Callback(QHeaderView_MousePressEvent_Callback cb) const { qheaderview_mousepressevent_callback = cb; }
	inline void setQHeaderView_MouseMoveEvent_Callback(QHeaderView_MouseMoveEvent_Callback cb) const { qheaderview_mousemoveevent_callback = cb; }
	inline void setQHeaderView_MouseReleaseEvent_Callback(QHeaderView_MouseReleaseEvent_Callback cb) const { qheaderview_mousereleaseevent_callback = cb; }
	inline void setQHeaderView_MouseDoubleClickEvent_Callback(QHeaderView_MouseDoubleClickEvent_Callback cb) const { qheaderview_mousedoubleclickevent_callback = cb; }
	inline void setQHeaderView_ViewportEvent_Callback(QHeaderView_ViewportEvent_Callback cb) const { qheaderview_viewportevent_callback = cb; }
	inline void setQHeaderView_PaintSection_Callback(QHeaderView_PaintSection_Callback cb) const { qheaderview_paintsection_callback = cb; }
	inline void setQHeaderView_SectionSizeFromContents_Callback(QHeaderView_SectionSizeFromContents_Callback cb) const { qheaderview_sectionsizefromcontents_callback = cb; }
	inline void setQHeaderView_HorizontalOffset_Callback(QHeaderView_HorizontalOffset_Callback cb) const { qheaderview_horizontaloffset_callback = cb; }
	inline void setQHeaderView_VerticalOffset_Callback(QHeaderView_VerticalOffset_Callback cb) const { qheaderview_verticaloffset_callback = cb; }
	inline void setQHeaderView_UpdateGeometries_Callback(QHeaderView_UpdateGeometries_Callback cb) const { qheaderview_updategeometries_callback = cb; }
	inline void setQHeaderView_ScrollContentsBy_Callback(QHeaderView_ScrollContentsBy_Callback cb) const { qheaderview_scrollcontentsby_callback = cb; }
	inline void setQHeaderView_DataChanged_Callback(QHeaderView_DataChanged_Callback cb) const { qheaderview_datachanged_callback = cb; }
	inline void setQHeaderView_RowsInserted_Callback(QHeaderView_RowsInserted_Callback cb) const { qheaderview_rowsinserted_callback = cb; }
	inline void setQHeaderView_VisualRect_Callback(QHeaderView_VisualRect_Callback cb) const { qheaderview_visualrect_callback = cb; }
	inline void setQHeaderView_ScrollTo_Callback(QHeaderView_ScrollTo_Callback cb) const { qheaderview_scrollto_callback = cb; }
	inline void setQHeaderView_IndexAt_Callback(QHeaderView_IndexAt_Callback cb) const { qheaderview_indexat_callback = cb; }
	inline void setQHeaderView_IsIndexHidden_Callback(QHeaderView_IsIndexHidden_Callback cb) const { qheaderview_isindexhidden_callback = cb; }
	inline void setQHeaderView_MoveCursor_Callback(QHeaderView_MoveCursor_Callback cb) const { qheaderview_movecursor_callback = cb; }
	inline void setQHeaderView_SetSelection_Callback(QHeaderView_SetSelection_Callback cb) const { qheaderview_setselection_callback = cb; }
	inline void setQHeaderView_VisualRegionForSelection_Callback(QHeaderView_VisualRegionForSelection_Callback cb) const { qheaderview_visualregionforselection_callback = cb; }
	inline void setQHeaderView_InitStyleOptionForIndex_Callback(QHeaderView_InitStyleOptionForIndex_Callback cb) const { qheaderview_initstyleoptionforindex_callback = cb; }
	inline void setQHeaderView_InitStyleOption_Callback(QHeaderView_InitStyleOption_Callback cb) const { qheaderview_initstyleoption_callback = cb; }
	inline void setQHeaderView_UpdateSection_Callback(QHeaderView_UpdateSection_Callback cb) const { qheaderview_updatesection_callback = cb; }
	inline void setQHeaderView_ResizeSections2_Callback(QHeaderView_ResizeSections2_Callback cb) const { qheaderview_resizesections2_callback = cb; }
	inline void setQHeaderView_SectionsInserted_Callback(QHeaderView_SectionsInserted_Callback cb) const { qheaderview_sectionsinserted_callback = cb; }
	inline void setQHeaderView_SectionsAboutToBeRemoved_Callback(QHeaderView_SectionsAboutToBeRemoved_Callback cb) const { qheaderview_sectionsabouttoberemoved_callback = cb; }
	inline void setQHeaderView_Initialize_Callback(QHeaderView_Initialize_Callback cb) const { qheaderview_initialize_callback = cb; }
	inline void setQHeaderView_InitializeSections_Callback(QHeaderView_InitializeSections_Callback cb) const { qheaderview_initializesections_callback = cb; }
	inline void setQHeaderView_InitializeSections2_Callback(QHeaderView_InitializeSections2_Callback cb) const { qheaderview_initializesections2_callback = cb; }

// Base flag setters
	inline void setQHeaderView_SetModel_IsBase(bool value) const { qheaderview_setmodel_isbase = value; }
	inline void setQHeaderView_SizeHint_IsBase(bool value) const { qheaderview_sizehint_isbase = value; }
	inline void setQHeaderView_SetVisible_IsBase(bool value) const { qheaderview_setvisible_isbase = value; }
	inline void setQHeaderView_DoItemsLayout_IsBase(bool value) const { qheaderview_doitemslayout_isbase = value; }
	inline void setQHeaderView_Reset_IsBase(bool value) const { qheaderview_reset_isbase = value; }
	inline void setQHeaderView_CurrentChanged_IsBase(bool value) const { qheaderview_currentchanged_isbase = value; }
	inline void setQHeaderView_Event_IsBase(bool value) const { qheaderview_event_isbase = value; }
	inline void setQHeaderView_PaintEvent_IsBase(bool value) const { qheaderview_paintevent_isbase = value; }
	inline void setQHeaderView_MousePressEvent_IsBase(bool value) const { qheaderview_mousepressevent_isbase = value; }
	inline void setQHeaderView_MouseMoveEvent_IsBase(bool value) const { qheaderview_mousemoveevent_isbase = value; }
	inline void setQHeaderView_MouseReleaseEvent_IsBase(bool value) const { qheaderview_mousereleaseevent_isbase = value; }
	inline void setQHeaderView_MouseDoubleClickEvent_IsBase(bool value) const { qheaderview_mousedoubleclickevent_isbase = value; }
	inline void setQHeaderView_ViewportEvent_IsBase(bool value) const { qheaderview_viewportevent_isbase = value; }
	inline void setQHeaderView_PaintSection_IsBase(bool value) const { qheaderview_paintsection_isbase = value; }
	inline void setQHeaderView_SectionSizeFromContents_IsBase(bool value) const { qheaderview_sectionsizefromcontents_isbase = value; }
	inline void setQHeaderView_HorizontalOffset_IsBase(bool value) const { qheaderview_horizontaloffset_isbase = value; }
	inline void setQHeaderView_VerticalOffset_IsBase(bool value) const { qheaderview_verticaloffset_isbase = value; }
	inline void setQHeaderView_UpdateGeometries_IsBase(bool value) const { qheaderview_updategeometries_isbase = value; }
	inline void setQHeaderView_ScrollContentsBy_IsBase(bool value) const { qheaderview_scrollcontentsby_isbase = value; }
	inline void setQHeaderView_DataChanged_IsBase(bool value) const { qheaderview_datachanged_isbase = value; }
	inline void setQHeaderView_RowsInserted_IsBase(bool value) const { qheaderview_rowsinserted_isbase = value; }
	inline void setQHeaderView_VisualRect_IsBase(bool value) const { qheaderview_visualrect_isbase = value; }
	inline void setQHeaderView_ScrollTo_IsBase(bool value) const { qheaderview_scrollto_isbase = value; }
	inline void setQHeaderView_IndexAt_IsBase(bool value) const { qheaderview_indexat_isbase = value; }
	inline void setQHeaderView_IsIndexHidden_IsBase(bool value) const { qheaderview_isindexhidden_isbase = value; }
	inline void setQHeaderView_MoveCursor_IsBase(bool value) const { qheaderview_movecursor_isbase = value; }
	inline void setQHeaderView_SetSelection_IsBase(bool value) const { qheaderview_setselection_isbase = value; }
	inline void setQHeaderView_VisualRegionForSelection_IsBase(bool value) const { qheaderview_visualregionforselection_isbase = value; }
	inline void setQHeaderView_InitStyleOptionForIndex_IsBase(bool value) const { qheaderview_initstyleoptionforindex_isbase = value; }
	inline void setQHeaderView_InitStyleOption_IsBase(bool value) const { qheaderview_initstyleoption_isbase = value; }
	inline void setQHeaderView_UpdateSection_IsBase(bool value) const { qheaderview_updatesection_isbase = value; }
	inline void setQHeaderView_ResizeSections2_IsBase(bool value) const { qheaderview_resizesections2_isbase = value; }
	inline void setQHeaderView_SectionsInserted_IsBase(bool value) const { qheaderview_sectionsinserted_isbase = value; }
	inline void setQHeaderView_SectionsAboutToBeRemoved_IsBase(bool value) const { qheaderview_sectionsabouttoberemoved_isbase = value; }
	inline void setQHeaderView_Initialize_IsBase(bool value) const { qheaderview_initialize_isbase = value; }
	inline void setQHeaderView_InitializeSections_IsBase(bool value) const { qheaderview_initializesections_isbase = value; }
	inline void setQHeaderView_InitializeSections2_IsBase(bool value) const { qheaderview_initializesections2_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setModel(QAbstractItemModel* model) override {
		if (qheaderview_setmodel_isbase) {
			qheaderview_setmodel_isbase = false;
			QHeaderView::setModel(model);
		} else if (qheaderview_setmodel_callback != nullptr) {
			QAbstractItemModel* cbval1 = model;
			qheaderview_setmodel_callback(this, cbval1);
		} else {
			QHeaderView::setModel(model);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qheaderview_sizehint_isbase) {
			qheaderview_sizehint_isbase = false;
			return QHeaderView::sizeHint();
		} else if (qheaderview_sizehint_callback != nullptr) {
			QSize* callback_ret = qheaderview_sizehint_callback();
			return *callback_ret;
		} else {
			return QHeaderView::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool v) override {
		if (qheaderview_setvisible_isbase) {
			qheaderview_setvisible_isbase = false;
			QHeaderView::setVisible(v);
		} else if (qheaderview_setvisible_callback != nullptr) {
			bool cbval1 = v;
			qheaderview_setvisible_callback(this, cbval1);
		} else {
			QHeaderView::setVisible(v);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void doItemsLayout() override {
		if (qheaderview_doitemslayout_isbase) {
			qheaderview_doitemslayout_isbase = false;
			QHeaderView::doItemsLayout();
		} else if (qheaderview_doitemslayout_callback != nullptr) {
			qheaderview_doitemslayout_callback();
		} else {
			QHeaderView::doItemsLayout();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void reset() override {
		if (qheaderview_reset_isbase) {
			qheaderview_reset_isbase = false;
			QHeaderView::reset();
		} else if (qheaderview_reset_callback != nullptr) {
			qheaderview_reset_callback();
		} else {
			QHeaderView::reset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& old) override {
		if (qheaderview_currentchanged_isbase) {
			qheaderview_currentchanged_isbase = false;
			QHeaderView::currentChanged(current, old);
		} else if (qheaderview_currentchanged_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&current;
			const QModelIndex* cbval2 = (const QModelIndex*)&old;
			qheaderview_currentchanged_callback(this, cbval1, cbval2);
		} else {
			QHeaderView::currentChanged(current, old);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qheaderview_event_isbase) {
			qheaderview_event_isbase = false;
			return QHeaderView::event(e);
		} else if (qheaderview_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qheaderview_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QHeaderView::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* e) override {
		if (qheaderview_paintevent_isbase) {
			qheaderview_paintevent_isbase = false;
			QHeaderView::paintEvent(e);
		} else if (qheaderview_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = e;
			qheaderview_paintevent_callback(this, cbval1);
		} else {
			QHeaderView::paintEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (qheaderview_mousepressevent_isbase) {
			qheaderview_mousepressevent_isbase = false;
			QHeaderView::mousePressEvent(e);
		} else if (qheaderview_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qheaderview_mousepressevent_callback(this, cbval1);
		} else {
			QHeaderView::mousePressEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (qheaderview_mousemoveevent_isbase) {
			qheaderview_mousemoveevent_isbase = false;
			QHeaderView::mouseMoveEvent(e);
		} else if (qheaderview_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qheaderview_mousemoveevent_callback(this, cbval1);
		} else {
			QHeaderView::mouseMoveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (qheaderview_mousereleaseevent_isbase) {
			qheaderview_mousereleaseevent_isbase = false;
			QHeaderView::mouseReleaseEvent(e);
		} else if (qheaderview_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qheaderview_mousereleaseevent_callback(this, cbval1);
		} else {
			QHeaderView::mouseReleaseEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (qheaderview_mousedoubleclickevent_isbase) {
			qheaderview_mousedoubleclickevent_isbase = false;
			QHeaderView::mouseDoubleClickEvent(e);
		} else if (qheaderview_mousedoubleclickevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qheaderview_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QHeaderView::mouseDoubleClickEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool viewportEvent(QEvent* e) override {
		if (qheaderview_viewportevent_isbase) {
			qheaderview_viewportevent_isbase = false;
			return QHeaderView::viewportEvent(e);
		} else if (qheaderview_viewportevent_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qheaderview_viewportevent_callback(this, cbval1);
			return callback_ret;
		} else {
			return QHeaderView::viewportEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintSection(QPainter* painter, const QRect& rect, int logicalIndex) const override {
		if (qheaderview_paintsection_isbase) {
			qheaderview_paintsection_isbase = false;
			QHeaderView::paintSection(painter, rect, logicalIndex);
		} else if (qheaderview_paintsection_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRect* cbval2 = (const QRect*)&rect;
			int cbval3 = logicalIndex;
			qheaderview_paintsection_callback(this, cbval1, cbval2, cbval3);
		} else {
			QHeaderView::paintSection(painter, rect, logicalIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sectionSizeFromContents(int logicalIndex) const override {
		if (qheaderview_sectionsizefromcontents_isbase) {
			qheaderview_sectionsizefromcontents_isbase = false;
			return QHeaderView::sectionSizeFromContents(logicalIndex);
		} else if (qheaderview_sectionsizefromcontents_callback != nullptr) {
			int cbval1 = logicalIndex;
			QSize* callback_ret = qheaderview_sectionsizefromcontents_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QHeaderView::sectionSizeFromContents(logicalIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int horizontalOffset() const override {
		if (qheaderview_horizontaloffset_isbase) {
			qheaderview_horizontaloffset_isbase = false;
			return QHeaderView::horizontalOffset();
		} else if (qheaderview_horizontaloffset_callback != nullptr) {
			int callback_ret = qheaderview_horizontaloffset_callback();
			return callback_ret;
		} else {
			return QHeaderView::horizontalOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int verticalOffset() const override {
		if (qheaderview_verticaloffset_isbase) {
			qheaderview_verticaloffset_isbase = false;
			return QHeaderView::verticalOffset();
		} else if (qheaderview_verticaloffset_callback != nullptr) {
			int callback_ret = qheaderview_verticaloffset_callback();
			return callback_ret;
		} else {
			return QHeaderView::verticalOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateGeometries() override {
		if (qheaderview_updategeometries_isbase) {
			qheaderview_updategeometries_isbase = false;
			QHeaderView::updateGeometries();
		} else if (qheaderview_updategeometries_callback != nullptr) {
			qheaderview_updategeometries_callback();
		} else {
			QHeaderView::updateGeometries();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollContentsBy(int dx, int dy) override {
		if (qheaderview_scrollcontentsby_isbase) {
			qheaderview_scrollcontentsby_isbase = false;
			QHeaderView::scrollContentsBy(dx, dy);
		} else if (qheaderview_scrollcontentsby_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qheaderview_scrollcontentsby_callback(this, cbval1, cbval2);
		} else {
			QHeaderView::scrollContentsBy(dx, dy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (qheaderview_datachanged_isbase) {
			qheaderview_datachanged_isbase = false;
			QHeaderView::dataChanged(topLeft, bottomRight, roles);
		} else if (qheaderview_datachanged_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&topLeft;
			const QModelIndex* cbval2 = (const QModelIndex*)&bottomRight;
			libqt_list cbval3;
			cbval3.len = roles.size();
			cbval3.data = nullptr;
			qheaderview_datachanged_callback(this, cbval1, cbval2, cbval3);
		} else {
			QHeaderView::dataChanged(topLeft, bottomRight, roles);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (qheaderview_rowsinserted_isbase) {
			qheaderview_rowsinserted_isbase = false;
			QHeaderView::rowsInserted(parent, start, end);
		} else if (qheaderview_rowsinserted_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = start;
			int cbval3 = end;
			qheaderview_rowsinserted_callback(this, cbval1, cbval2, cbval3);
		} else {
			QHeaderView::rowsInserted(parent, start, end);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (qheaderview_visualrect_isbase) {
			qheaderview_visualrect_isbase = false;
			return QHeaderView::visualRect(index);
		} else if (qheaderview_visualrect_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QRect* callback_ret = qheaderview_visualrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QHeaderView::visualRect(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollTo(const QModelIndex& index, ScrollHint hint) override {
		if (qheaderview_scrollto_isbase) {
			qheaderview_scrollto_isbase = false;
			QHeaderView::scrollTo(index, hint);
		} else if (qheaderview_scrollto_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = static_cast<int>(hint);
			qheaderview_scrollto_callback(this, cbval1, cbval2);
		} else {
			QHeaderView::scrollTo(index, hint);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (qheaderview_indexat_isbase) {
			qheaderview_indexat_isbase = false;
			return QHeaderView::indexAt(p);
		} else if (qheaderview_indexat_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&p;
			QModelIndex* callback_ret = qheaderview_indexat_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QHeaderView::indexAt(p);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (qheaderview_isindexhidden_isbase) {
			qheaderview_isindexhidden_isbase = false;
			return QHeaderView::isIndexHidden(index);
		} else if (qheaderview_isindexhidden_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			bool callback_ret = qheaderview_isindexhidden_callback(this, cbval1);
			return callback_ret;
		} else {
			return QHeaderView::isIndexHidden(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction param1, QFlags<Qt::KeyboardModifier> param2) override {
		if (qheaderview_movecursor_isbase) {
			qheaderview_movecursor_isbase = false;
			return QHeaderView::moveCursor(param1, param2);
		} else if (qheaderview_movecursor_callback != nullptr) {
			int cbval1 = static_cast<int>(param1);
			int cbval2 = static_cast<int>(param2);
			QModelIndex* callback_ret = qheaderview_movecursor_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QHeaderView::moveCursor(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags flags) override {
		if (qheaderview_setselection_isbase) {
			qheaderview_setselection_isbase = false;
			QHeaderView::setSelection(rect, flags);
		} else if (qheaderview_setselection_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&rect;
			int cbval2 = static_cast<int>(flags);
			qheaderview_setselection_callback(this, cbval1, cbval2);
		} else {
			QHeaderView::setSelection(rect, flags);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (qheaderview_visualregionforselection_isbase) {
			qheaderview_visualregionforselection_isbase = false;
			return QHeaderView::visualRegionForSelection(selection);
		} else if (qheaderview_visualregionforselection_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selection;
			QRegion* callback_ret = qheaderview_visualregionforselection_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QHeaderView::visualRegionForSelection(selection);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOptionForIndex(QStyleOptionHeader* option, int logicalIndex) const override {
		if (qheaderview_initstyleoptionforindex_isbase) {
			qheaderview_initstyleoptionforindex_isbase = false;
			QHeaderView::initStyleOptionForIndex(option, logicalIndex);
		} else if (qheaderview_initstyleoptionforindex_callback != nullptr) {
			QStyleOptionHeader* cbval1 = option;
			int cbval2 = logicalIndex;
			qheaderview_initstyleoptionforindex_callback(this, cbval1, cbval2);
		} else {
			QHeaderView::initStyleOptionForIndex(option, logicalIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionHeader* option) const override {
		if (qheaderview_initstyleoption_isbase) {
			qheaderview_initstyleoption_isbase = false;
			QHeaderView::initStyleOption(option);
		} else if (qheaderview_initstyleoption_callback != nullptr) {
			QStyleOptionHeader* cbval1 = option;
			qheaderview_initstyleoption_callback(this, cbval1);
		} else {
			QHeaderView::initStyleOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	void updateSection(int logicalIndex) {
		if (qheaderview_updatesection_isbase) {
			qheaderview_updatesection_isbase = false;
			QHeaderView::updateSection(logicalIndex);
		} else if (qheaderview_updatesection_callback != nullptr) {
			int cbval1 = logicalIndex;
			qheaderview_updatesection_callback(this, cbval1);
		} else {
			QHeaderView::updateSection(logicalIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	void resizeSections() {
		if (qheaderview_resizesections2_isbase) {
			qheaderview_resizesections2_isbase = false;
			QHeaderView::resizeSections();
		} else if (qheaderview_resizesections2_callback != nullptr) {
			qheaderview_resizesections2_callback();
		} else {
			QHeaderView::resizeSections();
		}
	}

	// Virtual method for C ABI access and custom callback
	void sectionsInserted(const QModelIndex& parent, int logicalFirst, int logicalLast) {
		if (qheaderview_sectionsinserted_isbase) {
			qheaderview_sectionsinserted_isbase = false;
			QHeaderView::sectionsInserted(parent, logicalFirst, logicalLast);
		} else if (qheaderview_sectionsinserted_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = logicalFirst;
			int cbval3 = logicalLast;
			qheaderview_sectionsinserted_callback(this, cbval1, cbval2, cbval3);
		} else {
			QHeaderView::sectionsInserted(parent, logicalFirst, logicalLast);
		}
	}

	// Virtual method for C ABI access and custom callback
	void sectionsAboutToBeRemoved(const QModelIndex& parent, int logicalFirst, int logicalLast) {
		if (qheaderview_sectionsabouttoberemoved_isbase) {
			qheaderview_sectionsabouttoberemoved_isbase = false;
			QHeaderView::sectionsAboutToBeRemoved(parent, logicalFirst, logicalLast);
		} else if (qheaderview_sectionsabouttoberemoved_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = logicalFirst;
			int cbval3 = logicalLast;
			qheaderview_sectionsabouttoberemoved_callback(this, cbval1, cbval2, cbval3);
		} else {
			QHeaderView::sectionsAboutToBeRemoved(parent, logicalFirst, logicalLast);
		}
	}

	// Virtual method for C ABI access and custom callback
	void initialize() {
		if (qheaderview_initialize_isbase) {
			qheaderview_initialize_isbase = false;
			QHeaderView::initialize();
		} else if (qheaderview_initialize_callback != nullptr) {
			qheaderview_initialize_callback();
		} else {
			QHeaderView::initialize();
		}
	}

	// Virtual method for C ABI access and custom callback
	void initializeSections() {
		if (qheaderview_initializesections_isbase) {
			qheaderview_initializesections_isbase = false;
			QHeaderView::initializeSections();
		} else if (qheaderview_initializesections_callback != nullptr) {
			qheaderview_initializesections_callback();
		} else {
			QHeaderView::initializeSections();
		}
	}

	// Virtual method for C ABI access and custom callback
	void initializeSections(int start, int end) {
		if (qheaderview_initializesections2_isbase) {
			qheaderview_initializesections2_isbase = false;
			QHeaderView::initializeSections(start, end);
		} else if (qheaderview_initializesections2_callback != nullptr) {
			int cbval1 = start;
			int cbval2 = end;
			qheaderview_initializesections2_callback(this, cbval1, cbval2);
		} else {
			QHeaderView::initializeSections(start, end);
		}
	}

	// Friend functions
	friend void QHeaderView_CurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old);
	friend void QHeaderView_QBaseCurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old);
	friend bool QHeaderView_Event(QHeaderView* self, QEvent* e);
	friend bool QHeaderView_QBaseEvent(QHeaderView* self, QEvent* e);
	friend void QHeaderView_PaintEvent(QHeaderView* self, QPaintEvent* e);
	friend void QHeaderView_QBasePaintEvent(QHeaderView* self, QPaintEvent* e);
	friend void QHeaderView_MousePressEvent(QHeaderView* self, QMouseEvent* e);
	friend void QHeaderView_QBaseMousePressEvent(QHeaderView* self, QMouseEvent* e);
	friend void QHeaderView_MouseMoveEvent(QHeaderView* self, QMouseEvent* e);
	friend void QHeaderView_QBaseMouseMoveEvent(QHeaderView* self, QMouseEvent* e);
	friend void QHeaderView_MouseReleaseEvent(QHeaderView* self, QMouseEvent* e);
	friend void QHeaderView_QBaseMouseReleaseEvent(QHeaderView* self, QMouseEvent* e);
	friend void QHeaderView_MouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e);
	friend void QHeaderView_QBaseMouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e);
	friend bool QHeaderView_ViewportEvent(QHeaderView* self, QEvent* e);
	friend bool QHeaderView_QBaseViewportEvent(QHeaderView* self, QEvent* e);
	friend void QHeaderView_PaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex);
	friend void QHeaderView_QBasePaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex);
	friend QSize* QHeaderView_SectionSizeFromContents(const QHeaderView* self, int logicalIndex);
	friend QSize* QHeaderView_QBaseSectionSizeFromContents(const QHeaderView* self, int logicalIndex);
	friend int QHeaderView_HorizontalOffset(const QHeaderView* self);
	friend int QHeaderView_QBaseHorizontalOffset(const QHeaderView* self);
	friend int QHeaderView_VerticalOffset(const QHeaderView* self);
	friend int QHeaderView_QBaseVerticalOffset(const QHeaderView* self);
	friend void QHeaderView_UpdateGeometries(QHeaderView* self);
	friend void QHeaderView_QBaseUpdateGeometries(QHeaderView* self);
	friend void QHeaderView_ScrollContentsBy(QHeaderView* self, int dx, int dy);
	friend void QHeaderView_QBaseScrollContentsBy(QHeaderView* self, int dx, int dy);
	friend void QHeaderView_DataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
	friend void QHeaderView_QBaseDataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles);
	friend void QHeaderView_RowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end);
	friend void QHeaderView_QBaseRowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end);
	friend QRect* QHeaderView_VisualRect(const QHeaderView* self, const QModelIndex* index);
	friend QRect* QHeaderView_QBaseVisualRect(const QHeaderView* self, const QModelIndex* index);
	friend void QHeaderView_ScrollTo(QHeaderView* self, const QModelIndex* index, int hint);
	friend void QHeaderView_QBaseScrollTo(QHeaderView* self, const QModelIndex* index, int hint);
	friend QModelIndex* QHeaderView_IndexAt(const QHeaderView* self, const QPoint* p);
	friend QModelIndex* QHeaderView_QBaseIndexAt(const QHeaderView* self, const QPoint* p);
	friend bool QHeaderView_IsIndexHidden(const QHeaderView* self, const QModelIndex* index);
	friend bool QHeaderView_QBaseIsIndexHidden(const QHeaderView* self, const QModelIndex* index);
	friend QModelIndex* QHeaderView_MoveCursor(QHeaderView* self, int param1, int param2);
	friend QModelIndex* QHeaderView_QBaseMoveCursor(QHeaderView* self, int param1, int param2);
	friend void QHeaderView_SetSelection(QHeaderView* self, const QRect* rect, int flags);
	friend void QHeaderView_QBaseSetSelection(QHeaderView* self, const QRect* rect, int flags);
	friend QRegion* QHeaderView_VisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection);
	friend QRegion* QHeaderView_QBaseVisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection);
	friend void QHeaderView_InitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex);
	friend void QHeaderView_QBaseInitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex);
	friend void QHeaderView_InitStyleOption(const QHeaderView* self, QStyleOptionHeader* option);
	friend void QHeaderView_QBaseInitStyleOption(const QHeaderView* self, QStyleOptionHeader* option);
	friend void QHeaderView_UpdateSection(QHeaderView* self, int logicalIndex);
	friend void QHeaderView_QBaseUpdateSection(QHeaderView* self, int logicalIndex);
	friend void QHeaderView_ResizeSections2(QHeaderView* self);
	friend void QHeaderView_QBaseResizeSections2(QHeaderView* self);
	friend void QHeaderView_SectionsInserted(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
	friend void QHeaderView_QBaseSectionsInserted(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
	friend void QHeaderView_SectionsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
	friend void QHeaderView_QBaseSectionsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast);
	friend void QHeaderView_Initialize(QHeaderView* self);
	friend void QHeaderView_QBaseInitialize(QHeaderView* self);
	friend void QHeaderView_InitializeSections(QHeaderView* self);
	friend void QHeaderView_QBaseInitializeSections(QHeaderView* self);
	friend void QHeaderView_InitializeSections2(QHeaderView* self, int start, int end);
	friend void QHeaderView_QBaseInitializeSections2(QHeaderView* self, int start, int end);
};

#endif


