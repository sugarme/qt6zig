#pragma once
#ifndef QFORMLAYOUT_H_C_LIBVIRTUAL
#define QFORMLAYOUT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFormLayout so that we can call protected methods
class VirtualQFormLayout final : public QFormLayout {

public:
	// Virtual class boolean flag
	bool isVirtualQFormLayout= true;

	// Virtual class public types (including callbacks)
	using QFormLayout_Spacing_Callback = int (*)();
	using QFormLayout_SetSpacing_Callback = void (*)(QFormLayout*, int);
	using QFormLayout_AddItem_Callback = void (*)(QFormLayout*, QLayoutItem*);
	using QFormLayout_ItemAt2_Callback = QLayoutItem* (*)(const QFormLayout*, int);
	using QFormLayout_TakeAt_Callback = QLayoutItem* (*)(QFormLayout*, int);
	using QFormLayout_SetGeometry_Callback = void (*)(QFormLayout*, const QRect*);
	using QFormLayout_MinimumSize_Callback = QSize* (*)();
	using QFormLayout_SizeHint_Callback = QSize* (*)();
	using QFormLayout_Invalidate_Callback = void (*)();
	using QFormLayout_HasHeightForWidth_Callback = bool (*)();
	using QFormLayout_HeightForWidth_Callback = int (*)(const QFormLayout*, int);
	using QFormLayout_ExpandingDirections_Callback = int (*)();
	using QFormLayout_Count_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QFormLayout_Spacing_Callback qformlayout_spacing_callback = nullptr;
	mutable QFormLayout_SetSpacing_Callback qformlayout_setspacing_callback = nullptr;
	mutable QFormLayout_AddItem_Callback qformlayout_additem_callback = nullptr;
	mutable QFormLayout_ItemAt2_Callback qformlayout_itemat2_callback = nullptr;
	mutable QFormLayout_TakeAt_Callback qformlayout_takeat_callback = nullptr;
	mutable QFormLayout_SetGeometry_Callback qformlayout_setgeometry_callback = nullptr;
	mutable QFormLayout_MinimumSize_Callback qformlayout_minimumsize_callback = nullptr;
	mutable QFormLayout_SizeHint_Callback qformlayout_sizehint_callback = nullptr;
	mutable QFormLayout_Invalidate_Callback qformlayout_invalidate_callback = nullptr;
	mutable QFormLayout_HasHeightForWidth_Callback qformlayout_hasheightforwidth_callback = nullptr;
	mutable QFormLayout_HeightForWidth_Callback qformlayout_heightforwidth_callback = nullptr;
	mutable QFormLayout_ExpandingDirections_Callback qformlayout_expandingdirections_callback = nullptr;
	mutable QFormLayout_Count_Callback qformlayout_count_callback = nullptr;

	// Instance base flags
    mutable bool qformlayout_spacing_isbase = false;
    mutable bool qformlayout_setspacing_isbase = false;
    mutable bool qformlayout_additem_isbase = false;
    mutable bool qformlayout_itemat2_isbase = false;
    mutable bool qformlayout_takeat_isbase = false;
    mutable bool qformlayout_setgeometry_isbase = false;
    mutable bool qformlayout_minimumsize_isbase = false;
    mutable bool qformlayout_sizehint_isbase = false;
    mutable bool qformlayout_invalidate_isbase = false;
    mutable bool qformlayout_hasheightforwidth_isbase = false;
    mutable bool qformlayout_heightforwidth_isbase = false;
    mutable bool qformlayout_expandingdirections_isbase = false;
    mutable bool qformlayout_count_isbase = false;

public:
	VirtualQFormLayout(QWidget* parent): QFormLayout(parent) {};
	VirtualQFormLayout(): QFormLayout() {};

	~VirtualQFormLayout() {
		qformlayout_spacing_callback = nullptr;
		qformlayout_setspacing_callback = nullptr;
		qformlayout_additem_callback = nullptr;
		qformlayout_itemat2_callback = nullptr;
		qformlayout_takeat_callback = nullptr;
		qformlayout_setgeometry_callback = nullptr;
		qformlayout_minimumsize_callback = nullptr;
		qformlayout_sizehint_callback = nullptr;
		qformlayout_invalidate_callback = nullptr;
		qformlayout_hasheightforwidth_callback = nullptr;
		qformlayout_heightforwidth_callback = nullptr;
		qformlayout_expandingdirections_callback = nullptr;
		qformlayout_count_callback = nullptr;
	}

// Callback setters
	inline void setQFormLayout_Spacing_Callback(QFormLayout_Spacing_Callback cb) const { qformlayout_spacing_callback = cb; }
	inline void setQFormLayout_SetSpacing_Callback(QFormLayout_SetSpacing_Callback cb) const { qformlayout_setspacing_callback = cb; }
	inline void setQFormLayout_AddItem_Callback(QFormLayout_AddItem_Callback cb) const { qformlayout_additem_callback = cb; }
	inline void setQFormLayout_ItemAt2_Callback(QFormLayout_ItemAt2_Callback cb) const { qformlayout_itemat2_callback = cb; }
	inline void setQFormLayout_TakeAt_Callback(QFormLayout_TakeAt_Callback cb) const { qformlayout_takeat_callback = cb; }
	inline void setQFormLayout_SetGeometry_Callback(QFormLayout_SetGeometry_Callback cb) const { qformlayout_setgeometry_callback = cb; }
	inline void setQFormLayout_MinimumSize_Callback(QFormLayout_MinimumSize_Callback cb) const { qformlayout_minimumsize_callback = cb; }
	inline void setQFormLayout_SizeHint_Callback(QFormLayout_SizeHint_Callback cb) const { qformlayout_sizehint_callback = cb; }
	inline void setQFormLayout_Invalidate_Callback(QFormLayout_Invalidate_Callback cb) const { qformlayout_invalidate_callback = cb; }
	inline void setQFormLayout_HasHeightForWidth_Callback(QFormLayout_HasHeightForWidth_Callback cb) const { qformlayout_hasheightforwidth_callback = cb; }
	inline void setQFormLayout_HeightForWidth_Callback(QFormLayout_HeightForWidth_Callback cb) const { qformlayout_heightforwidth_callback = cb; }
	inline void setQFormLayout_ExpandingDirections_Callback(QFormLayout_ExpandingDirections_Callback cb) const { qformlayout_expandingdirections_callback = cb; }
	inline void setQFormLayout_Count_Callback(QFormLayout_Count_Callback cb) const { qformlayout_count_callback = cb; }

// Base flag setters
	inline void setQFormLayout_Spacing_IsBase(bool value) const { qformlayout_spacing_isbase = value; }
	inline void setQFormLayout_SetSpacing_IsBase(bool value) const { qformlayout_setspacing_isbase = value; }
	inline void setQFormLayout_AddItem_IsBase(bool value) const { qformlayout_additem_isbase = value; }
	inline void setQFormLayout_ItemAt2_IsBase(bool value) const { qformlayout_itemat2_isbase = value; }
	inline void setQFormLayout_TakeAt_IsBase(bool value) const { qformlayout_takeat_isbase = value; }
	inline void setQFormLayout_SetGeometry_IsBase(bool value) const { qformlayout_setgeometry_isbase = value; }
	inline void setQFormLayout_MinimumSize_IsBase(bool value) const { qformlayout_minimumsize_isbase = value; }
	inline void setQFormLayout_SizeHint_IsBase(bool value) const { qformlayout_sizehint_isbase = value; }
	inline void setQFormLayout_Invalidate_IsBase(bool value) const { qformlayout_invalidate_isbase = value; }
	inline void setQFormLayout_HasHeightForWidth_IsBase(bool value) const { qformlayout_hasheightforwidth_isbase = value; }
	inline void setQFormLayout_HeightForWidth_IsBase(bool value) const { qformlayout_heightforwidth_isbase = value; }
	inline void setQFormLayout_ExpandingDirections_IsBase(bool value) const { qformlayout_expandingdirections_isbase = value; }
	inline void setQFormLayout_Count_IsBase(bool value) const { qformlayout_count_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int spacing() const override {
		if (qformlayout_spacing_isbase) {
			qformlayout_spacing_isbase = false;
			return QFormLayout::spacing();
		} else if (qformlayout_spacing_callback != nullptr) {
			int callback_ret = qformlayout_spacing_callback();
			return callback_ret;
		} else {
			return QFormLayout::spacing();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSpacing(int spacing) override {
		if (qformlayout_setspacing_isbase) {
			qformlayout_setspacing_isbase = false;
			QFormLayout::setSpacing(spacing);
		} else if (qformlayout_setspacing_callback != nullptr) {
			int cbval1 = spacing;
			qformlayout_setspacing_callback(this, cbval1);
		} else {
			QFormLayout::setSpacing(spacing);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void addItem(QLayoutItem* item) override {
		if (qformlayout_additem_isbase) {
			qformlayout_additem_isbase = false;
			QFormLayout::addItem(item);
		} else if (qformlayout_additem_callback != nullptr) {
			QLayoutItem* cbval1 = item;
			qformlayout_additem_callback(this, cbval1);
		} else {
			QFormLayout::addItem(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayoutItem* itemAt(int index) const override {
		if (qformlayout_itemat2_isbase) {
			qformlayout_itemat2_isbase = false;
			return QFormLayout::itemAt(index);
		} else if (qformlayout_itemat2_callback != nullptr) {
			int cbval1 = index;
			QLayoutItem* callback_ret = qformlayout_itemat2_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFormLayout::itemAt(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayoutItem* takeAt(int index) override {
		if (qformlayout_takeat_isbase) {
			qformlayout_takeat_isbase = false;
			return QFormLayout::takeAt(index);
		} else if (qformlayout_takeat_callback != nullptr) {
			int cbval1 = index;
			QLayoutItem* callback_ret = qformlayout_takeat_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFormLayout::takeAt(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setGeometry(const QRect& rect) override {
		if (qformlayout_setgeometry_isbase) {
			qformlayout_setgeometry_isbase = false;
			QFormLayout::setGeometry(rect);
		} else if (qformlayout_setgeometry_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&rect;
			qformlayout_setgeometry_callback(this, cbval1);
		} else {
			QFormLayout::setGeometry(rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSize() const override {
		if (qformlayout_minimumsize_isbase) {
			qformlayout_minimumsize_isbase = false;
			return QFormLayout::minimumSize();
		} else if (qformlayout_minimumsize_callback != nullptr) {
			QSize* callback_ret = qformlayout_minimumsize_callback();
			return *callback_ret;
		} else {
			return QFormLayout::minimumSize();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qformlayout_sizehint_isbase) {
			qformlayout_sizehint_isbase = false;
			return QFormLayout::sizeHint();
		} else if (qformlayout_sizehint_callback != nullptr) {
			QSize* callback_ret = qformlayout_sizehint_callback();
			return *callback_ret;
		} else {
			return QFormLayout::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void invalidate() override {
		if (qformlayout_invalidate_isbase) {
			qformlayout_invalidate_isbase = false;
			QFormLayout::invalidate();
		} else if (qformlayout_invalidate_callback != nullptr) {
			qformlayout_invalidate_callback();
		} else {
			QFormLayout::invalidate();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hasHeightForWidth() const override {
		if (qformlayout_hasheightforwidth_isbase) {
			qformlayout_hasheightforwidth_isbase = false;
			return QFormLayout::hasHeightForWidth();
		} else if (qformlayout_hasheightforwidth_callback != nullptr) {
			bool callback_ret = qformlayout_hasheightforwidth_callback();
			return callback_ret;
		} else {
			return QFormLayout::hasHeightForWidth();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int heightForWidth(int width) const override {
		if (qformlayout_heightforwidth_isbase) {
			qformlayout_heightforwidth_isbase = false;
			return QFormLayout::heightForWidth(width);
		} else if (qformlayout_heightforwidth_callback != nullptr) {
			int cbval1 = width;
			int callback_ret = qformlayout_heightforwidth_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFormLayout::heightForWidth(width);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::Orientation> expandingDirections() const override {
		if (qformlayout_expandingdirections_isbase) {
			qformlayout_expandingdirections_isbase = false;
			return QFormLayout::expandingDirections();
		} else if (qformlayout_expandingdirections_callback != nullptr) {
			int callback_ret = qformlayout_expandingdirections_callback();
			return static_cast<QFlags<Qt::Orientation>>(callback_ret);
		} else {
			return QFormLayout::expandingDirections();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int count() const override {
		if (qformlayout_count_isbase) {
			qformlayout_count_isbase = false;
			return QFormLayout::count();
		} else if (qformlayout_count_callback != nullptr) {
			int callback_ret = qformlayout_count_callback();
			return callback_ret;
		} else {
			return QFormLayout::count();
		}
	}
};

#endif


