#pragma once
#ifndef QBOXLAYOUT_H_C_LIBVIRTUAL
#define QBOXLAYOUT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QBoxLayout so that we can call protected methods
class VirtualQBoxLayout final : public QBoxLayout {

public:
	// Virtual class boolean flag
	bool isVirtualQBoxLayout= true;

	// Virtual class public types (including callbacks)
	using QBoxLayout_AddItem_Callback = void (*)(QBoxLayout*, QLayoutItem*);
	using QBoxLayout_Spacing_Callback = int (*)();
	using QBoxLayout_SetSpacing_Callback = void (*)(QBoxLayout*, int);
	using QBoxLayout_SizeHint_Callback = QSize* (*)();
	using QBoxLayout_MinimumSize_Callback = QSize* (*)();
	using QBoxLayout_MaximumSize_Callback = QSize* (*)();
	using QBoxLayout_HasHeightForWidth_Callback = bool (*)();
	using QBoxLayout_HeightForWidth_Callback = int (*)(const QBoxLayout*, int);
	using QBoxLayout_MinimumHeightForWidth_Callback = int (*)(const QBoxLayout*, int);
	using QBoxLayout_ExpandingDirections_Callback = int (*)();
	using QBoxLayout_Invalidate_Callback = void (*)();
	using QBoxLayout_ItemAt_Callback = QLayoutItem* (*)(const QBoxLayout*, int);
	using QBoxLayout_TakeAt_Callback = QLayoutItem* (*)(QBoxLayout*, int);
	using QBoxLayout_Count_Callback = int (*)();
	using QBoxLayout_SetGeometry_Callback = void (*)(QBoxLayout*, const QRect*);

protected:
	// Instance callback storage
	mutable QBoxLayout_AddItem_Callback qboxlayout_additem_callback = nullptr;
	mutable QBoxLayout_Spacing_Callback qboxlayout_spacing_callback = nullptr;
	mutable QBoxLayout_SetSpacing_Callback qboxlayout_setspacing_callback = nullptr;
	mutable QBoxLayout_SizeHint_Callback qboxlayout_sizehint_callback = nullptr;
	mutable QBoxLayout_MinimumSize_Callback qboxlayout_minimumsize_callback = nullptr;
	mutable QBoxLayout_MaximumSize_Callback qboxlayout_maximumsize_callback = nullptr;
	mutable QBoxLayout_HasHeightForWidth_Callback qboxlayout_hasheightforwidth_callback = nullptr;
	mutable QBoxLayout_HeightForWidth_Callback qboxlayout_heightforwidth_callback = nullptr;
	mutable QBoxLayout_MinimumHeightForWidth_Callback qboxlayout_minimumheightforwidth_callback = nullptr;
	mutable QBoxLayout_ExpandingDirections_Callback qboxlayout_expandingdirections_callback = nullptr;
	mutable QBoxLayout_Invalidate_Callback qboxlayout_invalidate_callback = nullptr;
	mutable QBoxLayout_ItemAt_Callback qboxlayout_itemat_callback = nullptr;
	mutable QBoxLayout_TakeAt_Callback qboxlayout_takeat_callback = nullptr;
	mutable QBoxLayout_Count_Callback qboxlayout_count_callback = nullptr;
	mutable QBoxLayout_SetGeometry_Callback qboxlayout_setgeometry_callback = nullptr;

	// Instance base flags
    mutable bool qboxlayout_additem_isbase = false;
    mutable bool qboxlayout_spacing_isbase = false;
    mutable bool qboxlayout_setspacing_isbase = false;
    mutable bool qboxlayout_sizehint_isbase = false;
    mutable bool qboxlayout_minimumsize_isbase = false;
    mutable bool qboxlayout_maximumsize_isbase = false;
    mutable bool qboxlayout_hasheightforwidth_isbase = false;
    mutable bool qboxlayout_heightforwidth_isbase = false;
    mutable bool qboxlayout_minimumheightforwidth_isbase = false;
    mutable bool qboxlayout_expandingdirections_isbase = false;
    mutable bool qboxlayout_invalidate_isbase = false;
    mutable bool qboxlayout_itemat_isbase = false;
    mutable bool qboxlayout_takeat_isbase = false;
    mutable bool qboxlayout_count_isbase = false;
    mutable bool qboxlayout_setgeometry_isbase = false;

public:
	VirtualQBoxLayout(QBoxLayout::Direction param1): QBoxLayout(param1) {};
	VirtualQBoxLayout(QBoxLayout::Direction param1, QWidget* parent): QBoxLayout(param1, parent) {};

	~VirtualQBoxLayout() {
		qboxlayout_additem_callback = nullptr;
		qboxlayout_spacing_callback = nullptr;
		qboxlayout_setspacing_callback = nullptr;
		qboxlayout_sizehint_callback = nullptr;
		qboxlayout_minimumsize_callback = nullptr;
		qboxlayout_maximumsize_callback = nullptr;
		qboxlayout_hasheightforwidth_callback = nullptr;
		qboxlayout_heightforwidth_callback = nullptr;
		qboxlayout_minimumheightforwidth_callback = nullptr;
		qboxlayout_expandingdirections_callback = nullptr;
		qboxlayout_invalidate_callback = nullptr;
		qboxlayout_itemat_callback = nullptr;
		qboxlayout_takeat_callback = nullptr;
		qboxlayout_count_callback = nullptr;
		qboxlayout_setgeometry_callback = nullptr;
	}

// Callback setters
	inline void setQBoxLayout_AddItem_Callback(QBoxLayout_AddItem_Callback cb) const { qboxlayout_additem_callback = cb; }
	inline void setQBoxLayout_Spacing_Callback(QBoxLayout_Spacing_Callback cb) const { qboxlayout_spacing_callback = cb; }
	inline void setQBoxLayout_SetSpacing_Callback(QBoxLayout_SetSpacing_Callback cb) const { qboxlayout_setspacing_callback = cb; }
	inline void setQBoxLayout_SizeHint_Callback(QBoxLayout_SizeHint_Callback cb) const { qboxlayout_sizehint_callback = cb; }
	inline void setQBoxLayout_MinimumSize_Callback(QBoxLayout_MinimumSize_Callback cb) const { qboxlayout_minimumsize_callback = cb; }
	inline void setQBoxLayout_MaximumSize_Callback(QBoxLayout_MaximumSize_Callback cb) const { qboxlayout_maximumsize_callback = cb; }
	inline void setQBoxLayout_HasHeightForWidth_Callback(QBoxLayout_HasHeightForWidth_Callback cb) const { qboxlayout_hasheightforwidth_callback = cb; }
	inline void setQBoxLayout_HeightForWidth_Callback(QBoxLayout_HeightForWidth_Callback cb) const { qboxlayout_heightforwidth_callback = cb; }
	inline void setQBoxLayout_MinimumHeightForWidth_Callback(QBoxLayout_MinimumHeightForWidth_Callback cb) const { qboxlayout_minimumheightforwidth_callback = cb; }
	inline void setQBoxLayout_ExpandingDirections_Callback(QBoxLayout_ExpandingDirections_Callback cb) const { qboxlayout_expandingdirections_callback = cb; }
	inline void setQBoxLayout_Invalidate_Callback(QBoxLayout_Invalidate_Callback cb) const { qboxlayout_invalidate_callback = cb; }
	inline void setQBoxLayout_ItemAt_Callback(QBoxLayout_ItemAt_Callback cb) const { qboxlayout_itemat_callback = cb; }
	inline void setQBoxLayout_TakeAt_Callback(QBoxLayout_TakeAt_Callback cb) const { qboxlayout_takeat_callback = cb; }
	inline void setQBoxLayout_Count_Callback(QBoxLayout_Count_Callback cb) const { qboxlayout_count_callback = cb; }
	inline void setQBoxLayout_SetGeometry_Callback(QBoxLayout_SetGeometry_Callback cb) const { qboxlayout_setgeometry_callback = cb; }

// Base flag setters
	inline void setQBoxLayout_AddItem_IsBase(bool value) const { qboxlayout_additem_isbase = value; }
	inline void setQBoxLayout_Spacing_IsBase(bool value) const { qboxlayout_spacing_isbase = value; }
	inline void setQBoxLayout_SetSpacing_IsBase(bool value) const { qboxlayout_setspacing_isbase = value; }
	inline void setQBoxLayout_SizeHint_IsBase(bool value) const { qboxlayout_sizehint_isbase = value; }
	inline void setQBoxLayout_MinimumSize_IsBase(bool value) const { qboxlayout_minimumsize_isbase = value; }
	inline void setQBoxLayout_MaximumSize_IsBase(bool value) const { qboxlayout_maximumsize_isbase = value; }
	inline void setQBoxLayout_HasHeightForWidth_IsBase(bool value) const { qboxlayout_hasheightforwidth_isbase = value; }
	inline void setQBoxLayout_HeightForWidth_IsBase(bool value) const { qboxlayout_heightforwidth_isbase = value; }
	inline void setQBoxLayout_MinimumHeightForWidth_IsBase(bool value) const { qboxlayout_minimumheightforwidth_isbase = value; }
	inline void setQBoxLayout_ExpandingDirections_IsBase(bool value) const { qboxlayout_expandingdirections_isbase = value; }
	inline void setQBoxLayout_Invalidate_IsBase(bool value) const { qboxlayout_invalidate_isbase = value; }
	inline void setQBoxLayout_ItemAt_IsBase(bool value) const { qboxlayout_itemat_isbase = value; }
	inline void setQBoxLayout_TakeAt_IsBase(bool value) const { qboxlayout_takeat_isbase = value; }
	inline void setQBoxLayout_Count_IsBase(bool value) const { qboxlayout_count_isbase = value; }
	inline void setQBoxLayout_SetGeometry_IsBase(bool value) const { qboxlayout_setgeometry_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void addItem(QLayoutItem* param1) override {
		if (qboxlayout_additem_isbase) {
			qboxlayout_additem_isbase = false;
			QBoxLayout::addItem(param1);
		} else if (qboxlayout_additem_callback != nullptr) {
			QLayoutItem* cbval1 = param1;
			qboxlayout_additem_callback(this, cbval1);
		} else {
			QBoxLayout::addItem(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int spacing() const override {
		if (qboxlayout_spacing_isbase) {
			qboxlayout_spacing_isbase = false;
			return QBoxLayout::spacing();
		} else if (qboxlayout_spacing_callback != nullptr) {
			int callback_ret = qboxlayout_spacing_callback();
			return callback_ret;
		} else {
			return QBoxLayout::spacing();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSpacing(int spacing) override {
		if (qboxlayout_setspacing_isbase) {
			qboxlayout_setspacing_isbase = false;
			QBoxLayout::setSpacing(spacing);
		} else if (qboxlayout_setspacing_callback != nullptr) {
			int cbval1 = spacing;
			qboxlayout_setspacing_callback(this, cbval1);
		} else {
			QBoxLayout::setSpacing(spacing);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qboxlayout_sizehint_isbase) {
			qboxlayout_sizehint_isbase = false;
			return QBoxLayout::sizeHint();
		} else if (qboxlayout_sizehint_callback != nullptr) {
			QSize* callback_ret = qboxlayout_sizehint_callback();
			return *callback_ret;
		} else {
			return QBoxLayout::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSize() const override {
		if (qboxlayout_minimumsize_isbase) {
			qboxlayout_minimumsize_isbase = false;
			return QBoxLayout::minimumSize();
		} else if (qboxlayout_minimumsize_callback != nullptr) {
			QSize* callback_ret = qboxlayout_minimumsize_callback();
			return *callback_ret;
		} else {
			return QBoxLayout::minimumSize();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize maximumSize() const override {
		if (qboxlayout_maximumsize_isbase) {
			qboxlayout_maximumsize_isbase = false;
			return QBoxLayout::maximumSize();
		} else if (qboxlayout_maximumsize_callback != nullptr) {
			QSize* callback_ret = qboxlayout_maximumsize_callback();
			return *callback_ret;
		} else {
			return QBoxLayout::maximumSize();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hasHeightForWidth() const override {
		if (qboxlayout_hasheightforwidth_isbase) {
			qboxlayout_hasheightforwidth_isbase = false;
			return QBoxLayout::hasHeightForWidth();
		} else if (qboxlayout_hasheightforwidth_callback != nullptr) {
			bool callback_ret = qboxlayout_hasheightforwidth_callback();
			return callback_ret;
		} else {
			return QBoxLayout::hasHeightForWidth();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int heightForWidth(int param1) const override {
		if (qboxlayout_heightforwidth_isbase) {
			qboxlayout_heightforwidth_isbase = false;
			return QBoxLayout::heightForWidth(param1);
		} else if (qboxlayout_heightforwidth_callback != nullptr) {
			int cbval1 = param1;
			int callback_ret = qboxlayout_heightforwidth_callback(this, cbval1);
			return callback_ret;
		} else {
			return QBoxLayout::heightForWidth(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int minimumHeightForWidth(int param1) const override {
		if (qboxlayout_minimumheightforwidth_isbase) {
			qboxlayout_minimumheightforwidth_isbase = false;
			return QBoxLayout::minimumHeightForWidth(param1);
		} else if (qboxlayout_minimumheightforwidth_callback != nullptr) {
			int cbval1 = param1;
			int callback_ret = qboxlayout_minimumheightforwidth_callback(this, cbval1);
			return callback_ret;
		} else {
			return QBoxLayout::minimumHeightForWidth(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::Orientation> expandingDirections() const override {
		if (qboxlayout_expandingdirections_isbase) {
			qboxlayout_expandingdirections_isbase = false;
			return QBoxLayout::expandingDirections();
		} else if (qboxlayout_expandingdirections_callback != nullptr) {
			int callback_ret = qboxlayout_expandingdirections_callback();
			return static_cast<QFlags<Qt::Orientation>>(callback_ret);
		} else {
			return QBoxLayout::expandingDirections();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void invalidate() override {
		if (qboxlayout_invalidate_isbase) {
			qboxlayout_invalidate_isbase = false;
			QBoxLayout::invalidate();
		} else if (qboxlayout_invalidate_callback != nullptr) {
			qboxlayout_invalidate_callback();
		} else {
			QBoxLayout::invalidate();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayoutItem* itemAt(int param1) const override {
		if (qboxlayout_itemat_isbase) {
			qboxlayout_itemat_isbase = false;
			return QBoxLayout::itemAt(param1);
		} else if (qboxlayout_itemat_callback != nullptr) {
			int cbval1 = param1;
			QLayoutItem* callback_ret = qboxlayout_itemat_callback(this, cbval1);
			return callback_ret;
		} else {
			return QBoxLayout::itemAt(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayoutItem* takeAt(int param1) override {
		if (qboxlayout_takeat_isbase) {
			qboxlayout_takeat_isbase = false;
			return QBoxLayout::takeAt(param1);
		} else if (qboxlayout_takeat_callback != nullptr) {
			int cbval1 = param1;
			QLayoutItem* callback_ret = qboxlayout_takeat_callback(this, cbval1);
			return callback_ret;
		} else {
			return QBoxLayout::takeAt(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int count() const override {
		if (qboxlayout_count_isbase) {
			qboxlayout_count_isbase = false;
			return QBoxLayout::count();
		} else if (qboxlayout_count_callback != nullptr) {
			int callback_ret = qboxlayout_count_callback();
			return callback_ret;
		} else {
			return QBoxLayout::count();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setGeometry(const QRect& geometry) override {
		if (qboxlayout_setgeometry_isbase) {
			qboxlayout_setgeometry_isbase = false;
			QBoxLayout::setGeometry(geometry);
		} else if (qboxlayout_setgeometry_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&geometry;
			qboxlayout_setgeometry_callback(this, cbval1);
		} else {
			QBoxLayout::setGeometry(geometry);
		}
	}
};

#endif


