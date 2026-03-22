#pragma once
#ifndef QGRAPHICSLAYOUT_H_C_LIBVIRTUAL
#define QGRAPHICSLAYOUT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGraphicsLayout so that we can call protected methods
class VirtualQGraphicsLayout : public QGraphicsLayout {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsLayout= true;

	// Virtual class public types (including callbacks)
	using QGraphicsLayout_GetContentsMargins_Callback = void (*)(const QGraphicsLayout*, double*, double*, double*, double*);
	using QGraphicsLayout_Invalidate_Callback = void (*)();
	using QGraphicsLayout_UpdateGeometry_Callback = void (*)();
	using QGraphicsLayout_WidgetEvent_Callback = void (*)(QGraphicsLayout*, QEvent*);
	using QGraphicsLayout_Count_Callback = int (*)();
	using QGraphicsLayout_ItemAt_Callback = QGraphicsLayoutItem* (*)(const QGraphicsLayout*, int);
	using QGraphicsLayout_RemoveAt_Callback = void (*)(QGraphicsLayout*, int);
	using QGraphicsLayout_AddChildLayoutItem_Callback = void (*)(QGraphicsLayout*, QGraphicsLayoutItem*);

protected:
	// Instance callback storage
	mutable QGraphicsLayout_GetContentsMargins_Callback qgraphicslayout_getcontentsmargins_callback = nullptr;
	mutable QGraphicsLayout_Invalidate_Callback qgraphicslayout_invalidate_callback = nullptr;
	mutable QGraphicsLayout_UpdateGeometry_Callback qgraphicslayout_updategeometry_callback = nullptr;
	mutable QGraphicsLayout_WidgetEvent_Callback qgraphicslayout_widgetevent_callback = nullptr;
	mutable QGraphicsLayout_Count_Callback qgraphicslayout_count_callback = nullptr;
	mutable QGraphicsLayout_ItemAt_Callback qgraphicslayout_itemat_callback = nullptr;
	mutable QGraphicsLayout_RemoveAt_Callback qgraphicslayout_removeat_callback = nullptr;
	mutable QGraphicsLayout_AddChildLayoutItem_Callback qgraphicslayout_addchildlayoutitem_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicslayout_getcontentsmargins_isbase = false;
    mutable bool qgraphicslayout_invalidate_isbase = false;
    mutable bool qgraphicslayout_updategeometry_isbase = false;
    mutable bool qgraphicslayout_widgetevent_isbase = false;
    mutable bool qgraphicslayout_count_isbase = false;
    mutable bool qgraphicslayout_itemat_isbase = false;
    mutable bool qgraphicslayout_removeat_isbase = false;
    mutable bool qgraphicslayout_addchildlayoutitem_isbase = false;

public:
	VirtualQGraphicsLayout(): QGraphicsLayout() {};
	VirtualQGraphicsLayout(QGraphicsLayoutItem* parent): QGraphicsLayout(parent) {};

	~VirtualQGraphicsLayout() {
		qgraphicslayout_getcontentsmargins_callback = nullptr;
		qgraphicslayout_invalidate_callback = nullptr;
		qgraphicslayout_updategeometry_callback = nullptr;
		qgraphicslayout_widgetevent_callback = nullptr;
		qgraphicslayout_count_callback = nullptr;
		qgraphicslayout_itemat_callback = nullptr;
		qgraphicslayout_removeat_callback = nullptr;
		qgraphicslayout_addchildlayoutitem_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsLayout_GetContentsMargins_Callback(QGraphicsLayout_GetContentsMargins_Callback cb) const { qgraphicslayout_getcontentsmargins_callback = cb; }
	inline void setQGraphicsLayout_Invalidate_Callback(QGraphicsLayout_Invalidate_Callback cb) const { qgraphicslayout_invalidate_callback = cb; }
	inline void setQGraphicsLayout_UpdateGeometry_Callback(QGraphicsLayout_UpdateGeometry_Callback cb) const { qgraphicslayout_updategeometry_callback = cb; }
	inline void setQGraphicsLayout_WidgetEvent_Callback(QGraphicsLayout_WidgetEvent_Callback cb) const { qgraphicslayout_widgetevent_callback = cb; }
	inline void setQGraphicsLayout_Count_Callback(QGraphicsLayout_Count_Callback cb) const { qgraphicslayout_count_callback = cb; }
	inline void setQGraphicsLayout_ItemAt_Callback(QGraphicsLayout_ItemAt_Callback cb) const { qgraphicslayout_itemat_callback = cb; }
	inline void setQGraphicsLayout_RemoveAt_Callback(QGraphicsLayout_RemoveAt_Callback cb) const { qgraphicslayout_removeat_callback = cb; }
	inline void setQGraphicsLayout_AddChildLayoutItem_Callback(QGraphicsLayout_AddChildLayoutItem_Callback cb) const { qgraphicslayout_addchildlayoutitem_callback = cb; }

// Base flag setters
	inline void setQGraphicsLayout_GetContentsMargins_IsBase(bool value) const { qgraphicslayout_getcontentsmargins_isbase = value; }
	inline void setQGraphicsLayout_Invalidate_IsBase(bool value) const { qgraphicslayout_invalidate_isbase = value; }
	inline void setQGraphicsLayout_UpdateGeometry_IsBase(bool value) const { qgraphicslayout_updategeometry_isbase = value; }
	inline void setQGraphicsLayout_WidgetEvent_IsBase(bool value) const { qgraphicslayout_widgetevent_isbase = value; }
	inline void setQGraphicsLayout_Count_IsBase(bool value) const { qgraphicslayout_count_isbase = value; }
	inline void setQGraphicsLayout_ItemAt_IsBase(bool value) const { qgraphicslayout_itemat_isbase = value; }
	inline void setQGraphicsLayout_RemoveAt_IsBase(bool value) const { qgraphicslayout_removeat_isbase = value; }
	inline void setQGraphicsLayout_AddChildLayoutItem_IsBase(bool value) const { qgraphicslayout_addchildlayoutitem_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (qgraphicslayout_getcontentsmargins_isbase) {
			qgraphicslayout_getcontentsmargins_isbase = false;
			QGraphicsLayout::getContentsMargins(left, top, right, bottom);
		} else if (qgraphicslayout_getcontentsmargins_callback != nullptr) {
			double* cbval1 = left;
			double* cbval2 = top;
			double* cbval3 = right;
			double* cbval4 = bottom;
			qgraphicslayout_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QGraphicsLayout::getContentsMargins(left, top, right, bottom);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void invalidate() override {
		if (qgraphicslayout_invalidate_isbase) {
			qgraphicslayout_invalidate_isbase = false;
			QGraphicsLayout::invalidate();
		} else if (qgraphicslayout_invalidate_callback != nullptr) {
			qgraphicslayout_invalidate_callback();
		} else {
			QGraphicsLayout::invalidate();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateGeometry() override {
		if (qgraphicslayout_updategeometry_isbase) {
			qgraphicslayout_updategeometry_isbase = false;
			QGraphicsLayout::updateGeometry();
		} else if (qgraphicslayout_updategeometry_callback != nullptr) {
			qgraphicslayout_updategeometry_callback();
		} else {
			QGraphicsLayout::updateGeometry();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void widgetEvent(QEvent* e) override {
		if (qgraphicslayout_widgetevent_isbase) {
			qgraphicslayout_widgetevent_isbase = false;
			QGraphicsLayout::widgetEvent(e);
		} else if (qgraphicslayout_widgetevent_callback != nullptr) {
			QEvent* cbval1 = e;
			qgraphicslayout_widgetevent_callback(this, cbval1);
		} else {
			QGraphicsLayout::widgetEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int count() const override {
		if (qgraphicslayout_count_callback != nullptr) {
			int callback_ret = qgraphicslayout_count_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QGraphicsLayoutItem* itemAt(int i) const override {
		if (qgraphicslayout_itemat_callback != nullptr) {
			int cbval1 = i;
			QGraphicsLayoutItem* callback_ret = qgraphicslayout_itemat_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void removeAt(int index) override {
		if (qgraphicslayout_removeat_callback != nullptr) {
			int cbval1 = index;
			qgraphicslayout_removeat_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void addChildLayoutItem(QGraphicsLayoutItem* layoutItem) {
		if (qgraphicslayout_addchildlayoutitem_isbase) {
			qgraphicslayout_addchildlayoutitem_isbase = false;
			QGraphicsLayout::addChildLayoutItem(layoutItem);
		} else if (qgraphicslayout_addchildlayoutitem_callback != nullptr) {
			QGraphicsLayoutItem* cbval1 = layoutItem;
			qgraphicslayout_addchildlayoutitem_callback(this, cbval1);
		} else {
			QGraphicsLayout::addChildLayoutItem(layoutItem);
		}
	}

	// Friend functions
	friend void QGraphicsLayout_AddChildLayoutItem(QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem);
	friend void QGraphicsLayout_QBaseAddChildLayoutItem(QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem);
};

#endif


