#pragma once
#ifndef QSTACKEDLAYOUT_H_C_LIBVIRTUAL
#define QSTACKEDLAYOUT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QStackedLayout so that we can call protected methods
class VirtualQStackedLayout final : public QStackedLayout {

public:
	// Virtual class boolean flag
	bool isVirtualQStackedLayout= true;

	// Virtual class public types (including callbacks)
	using QStackedLayout_Count_Callback = int (*)();
	using QStackedLayout_AddItem_Callback = void (*)(QStackedLayout*, QLayoutItem*);
	using QStackedLayout_SizeHint_Callback = QSize* (*)();
	using QStackedLayout_MinimumSize_Callback = QSize* (*)();
	using QStackedLayout_ItemAt_Callback = QLayoutItem* (*)(const QStackedLayout*, int);
	using QStackedLayout_TakeAt_Callback = QLayoutItem* (*)(QStackedLayout*, int);
	using QStackedLayout_SetGeometry_Callback = void (*)(QStackedLayout*, const QRect*);
	using QStackedLayout_HasHeightForWidth_Callback = bool (*)();
	using QStackedLayout_HeightForWidth_Callback = int (*)(const QStackedLayout*, int);

protected:
	// Instance callback storage
	mutable QStackedLayout_Count_Callback qstackedlayout_count_callback = nullptr;
	mutable QStackedLayout_AddItem_Callback qstackedlayout_additem_callback = nullptr;
	mutable QStackedLayout_SizeHint_Callback qstackedlayout_sizehint_callback = nullptr;
	mutable QStackedLayout_MinimumSize_Callback qstackedlayout_minimumsize_callback = nullptr;
	mutable QStackedLayout_ItemAt_Callback qstackedlayout_itemat_callback = nullptr;
	mutable QStackedLayout_TakeAt_Callback qstackedlayout_takeat_callback = nullptr;
	mutable QStackedLayout_SetGeometry_Callback qstackedlayout_setgeometry_callback = nullptr;
	mutable QStackedLayout_HasHeightForWidth_Callback qstackedlayout_hasheightforwidth_callback = nullptr;
	mutable QStackedLayout_HeightForWidth_Callback qstackedlayout_heightforwidth_callback = nullptr;

	// Instance base flags
    mutable bool qstackedlayout_count_isbase = false;
    mutable bool qstackedlayout_additem_isbase = false;
    mutable bool qstackedlayout_sizehint_isbase = false;
    mutable bool qstackedlayout_minimumsize_isbase = false;
    mutable bool qstackedlayout_itemat_isbase = false;
    mutable bool qstackedlayout_takeat_isbase = false;
    mutable bool qstackedlayout_setgeometry_isbase = false;
    mutable bool qstackedlayout_hasheightforwidth_isbase = false;
    mutable bool qstackedlayout_heightforwidth_isbase = false;

public:
	VirtualQStackedLayout(QWidget* parent): QStackedLayout(parent) {};
	VirtualQStackedLayout(): QStackedLayout() {};
	VirtualQStackedLayout(QLayout* parentLayout): QStackedLayout(parentLayout) {};

	~VirtualQStackedLayout() {
		qstackedlayout_count_callback = nullptr;
		qstackedlayout_additem_callback = nullptr;
		qstackedlayout_sizehint_callback = nullptr;
		qstackedlayout_minimumsize_callback = nullptr;
		qstackedlayout_itemat_callback = nullptr;
		qstackedlayout_takeat_callback = nullptr;
		qstackedlayout_setgeometry_callback = nullptr;
		qstackedlayout_hasheightforwidth_callback = nullptr;
		qstackedlayout_heightforwidth_callback = nullptr;
	}

// Callback setters
	inline void setQStackedLayout_Count_Callback(QStackedLayout_Count_Callback cb) const { qstackedlayout_count_callback = cb; }
	inline void setQStackedLayout_AddItem_Callback(QStackedLayout_AddItem_Callback cb) const { qstackedlayout_additem_callback = cb; }
	inline void setQStackedLayout_SizeHint_Callback(QStackedLayout_SizeHint_Callback cb) const { qstackedlayout_sizehint_callback = cb; }
	inline void setQStackedLayout_MinimumSize_Callback(QStackedLayout_MinimumSize_Callback cb) const { qstackedlayout_minimumsize_callback = cb; }
	inline void setQStackedLayout_ItemAt_Callback(QStackedLayout_ItemAt_Callback cb) const { qstackedlayout_itemat_callback = cb; }
	inline void setQStackedLayout_TakeAt_Callback(QStackedLayout_TakeAt_Callback cb) const { qstackedlayout_takeat_callback = cb; }
	inline void setQStackedLayout_SetGeometry_Callback(QStackedLayout_SetGeometry_Callback cb) const { qstackedlayout_setgeometry_callback = cb; }
	inline void setQStackedLayout_HasHeightForWidth_Callback(QStackedLayout_HasHeightForWidth_Callback cb) const { qstackedlayout_hasheightforwidth_callback = cb; }
	inline void setQStackedLayout_HeightForWidth_Callback(QStackedLayout_HeightForWidth_Callback cb) const { qstackedlayout_heightforwidth_callback = cb; }

// Base flag setters
	inline void setQStackedLayout_Count_IsBase(bool value) const { qstackedlayout_count_isbase = value; }
	inline void setQStackedLayout_AddItem_IsBase(bool value) const { qstackedlayout_additem_isbase = value; }
	inline void setQStackedLayout_SizeHint_IsBase(bool value) const { qstackedlayout_sizehint_isbase = value; }
	inline void setQStackedLayout_MinimumSize_IsBase(bool value) const { qstackedlayout_minimumsize_isbase = value; }
	inline void setQStackedLayout_ItemAt_IsBase(bool value) const { qstackedlayout_itemat_isbase = value; }
	inline void setQStackedLayout_TakeAt_IsBase(bool value) const { qstackedlayout_takeat_isbase = value; }
	inline void setQStackedLayout_SetGeometry_IsBase(bool value) const { qstackedlayout_setgeometry_isbase = value; }
	inline void setQStackedLayout_HasHeightForWidth_IsBase(bool value) const { qstackedlayout_hasheightforwidth_isbase = value; }
	inline void setQStackedLayout_HeightForWidth_IsBase(bool value) const { qstackedlayout_heightforwidth_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int count() const override {
		if (qstackedlayout_count_isbase) {
			qstackedlayout_count_isbase = false;
			return QStackedLayout::count();
		} else if (qstackedlayout_count_callback != nullptr) {
			int callback_ret = qstackedlayout_count_callback();
			return callback_ret;
		} else {
			return QStackedLayout::count();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void addItem(QLayoutItem* item) override {
		if (qstackedlayout_additem_isbase) {
			qstackedlayout_additem_isbase = false;
			QStackedLayout::addItem(item);
		} else if (qstackedlayout_additem_callback != nullptr) {
			QLayoutItem* cbval1 = item;
			qstackedlayout_additem_callback(this, cbval1);
		} else {
			QStackedLayout::addItem(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qstackedlayout_sizehint_isbase) {
			qstackedlayout_sizehint_isbase = false;
			return QStackedLayout::sizeHint();
		} else if (qstackedlayout_sizehint_callback != nullptr) {
			QSize* callback_ret = qstackedlayout_sizehint_callback();
			return *callback_ret;
		} else {
			return QStackedLayout::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSize() const override {
		if (qstackedlayout_minimumsize_isbase) {
			qstackedlayout_minimumsize_isbase = false;
			return QStackedLayout::minimumSize();
		} else if (qstackedlayout_minimumsize_callback != nullptr) {
			QSize* callback_ret = qstackedlayout_minimumsize_callback();
			return *callback_ret;
		} else {
			return QStackedLayout::minimumSize();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayoutItem* itemAt(int param1) const override {
		if (qstackedlayout_itemat_isbase) {
			qstackedlayout_itemat_isbase = false;
			return QStackedLayout::itemAt(param1);
		} else if (qstackedlayout_itemat_callback != nullptr) {
			int cbval1 = param1;
			QLayoutItem* callback_ret = qstackedlayout_itemat_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStackedLayout::itemAt(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayoutItem* takeAt(int param1) override {
		if (qstackedlayout_takeat_isbase) {
			qstackedlayout_takeat_isbase = false;
			return QStackedLayout::takeAt(param1);
		} else if (qstackedlayout_takeat_callback != nullptr) {
			int cbval1 = param1;
			QLayoutItem* callback_ret = qstackedlayout_takeat_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStackedLayout::takeAt(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setGeometry(const QRect& rect) override {
		if (qstackedlayout_setgeometry_isbase) {
			qstackedlayout_setgeometry_isbase = false;
			QStackedLayout::setGeometry(rect);
		} else if (qstackedlayout_setgeometry_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&rect;
			qstackedlayout_setgeometry_callback(this, cbval1);
		} else {
			QStackedLayout::setGeometry(rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hasHeightForWidth() const override {
		if (qstackedlayout_hasheightforwidth_isbase) {
			qstackedlayout_hasheightforwidth_isbase = false;
			return QStackedLayout::hasHeightForWidth();
		} else if (qstackedlayout_hasheightforwidth_callback != nullptr) {
			bool callback_ret = qstackedlayout_hasheightforwidth_callback();
			return callback_ret;
		} else {
			return QStackedLayout::hasHeightForWidth();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int heightForWidth(int width) const override {
		if (qstackedlayout_heightforwidth_isbase) {
			qstackedlayout_heightforwidth_isbase = false;
			return QStackedLayout::heightForWidth(width);
		} else if (qstackedlayout_heightforwidth_callback != nullptr) {
			int cbval1 = width;
			int callback_ret = qstackedlayout_heightforwidth_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStackedLayout::heightForWidth(width);
		}
	}
};

#endif


