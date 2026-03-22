#pragma once
#ifndef QGRIDLAYOUT_H_C_LIBVIRTUAL
#define QGRIDLAYOUT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGridLayout so that we can call protected methods
class VirtualQGridLayout final : public QGridLayout {

public:
	// Virtual class boolean flag
	bool isVirtualQGridLayout= true;

	// Virtual class public types (including callbacks)
	using QGridLayout_SizeHint_Callback = QSize* (*)();
	using QGridLayout_MinimumSize_Callback = QSize* (*)();
	using QGridLayout_MaximumSize_Callback = QSize* (*)();
	using QGridLayout_SetSpacing_Callback = void (*)(QGridLayout*, int);
	using QGridLayout_Spacing_Callback = int (*)();
	using QGridLayout_HasHeightForWidth_Callback = bool (*)();
	using QGridLayout_HeightForWidth_Callback = int (*)(const QGridLayout*, int);
	using QGridLayout_MinimumHeightForWidth_Callback = int (*)(const QGridLayout*, int);
	using QGridLayout_ExpandingDirections_Callback = int (*)();
	using QGridLayout_Invalidate_Callback = void (*)();
	using QGridLayout_ItemAt_Callback = QLayoutItem* (*)(const QGridLayout*, int);
	using QGridLayout_TakeAt_Callback = QLayoutItem* (*)(QGridLayout*, int);
	using QGridLayout_Count_Callback = int (*)();
	using QGridLayout_SetGeometry_Callback = void (*)(QGridLayout*, const QRect*);
	using QGridLayout_AddItem2_Callback = void (*)(QGridLayout*, QLayoutItem*);

protected:
	// Instance callback storage
	mutable QGridLayout_SizeHint_Callback qgridlayout_sizehint_callback = nullptr;
	mutable QGridLayout_MinimumSize_Callback qgridlayout_minimumsize_callback = nullptr;
	mutable QGridLayout_MaximumSize_Callback qgridlayout_maximumsize_callback = nullptr;
	mutable QGridLayout_SetSpacing_Callback qgridlayout_setspacing_callback = nullptr;
	mutable QGridLayout_Spacing_Callback qgridlayout_spacing_callback = nullptr;
	mutable QGridLayout_HasHeightForWidth_Callback qgridlayout_hasheightforwidth_callback = nullptr;
	mutable QGridLayout_HeightForWidth_Callback qgridlayout_heightforwidth_callback = nullptr;
	mutable QGridLayout_MinimumHeightForWidth_Callback qgridlayout_minimumheightforwidth_callback = nullptr;
	mutable QGridLayout_ExpandingDirections_Callback qgridlayout_expandingdirections_callback = nullptr;
	mutable QGridLayout_Invalidate_Callback qgridlayout_invalidate_callback = nullptr;
	mutable QGridLayout_ItemAt_Callback qgridlayout_itemat_callback = nullptr;
	mutable QGridLayout_TakeAt_Callback qgridlayout_takeat_callback = nullptr;
	mutable QGridLayout_Count_Callback qgridlayout_count_callback = nullptr;
	mutable QGridLayout_SetGeometry_Callback qgridlayout_setgeometry_callback = nullptr;
	mutable QGridLayout_AddItem2_Callback qgridlayout_additem2_callback = nullptr;

	// Instance base flags
    mutable bool qgridlayout_sizehint_isbase = false;
    mutable bool qgridlayout_minimumsize_isbase = false;
    mutable bool qgridlayout_maximumsize_isbase = false;
    mutable bool qgridlayout_setspacing_isbase = false;
    mutable bool qgridlayout_spacing_isbase = false;
    mutable bool qgridlayout_hasheightforwidth_isbase = false;
    mutable bool qgridlayout_heightforwidth_isbase = false;
    mutable bool qgridlayout_minimumheightforwidth_isbase = false;
    mutable bool qgridlayout_expandingdirections_isbase = false;
    mutable bool qgridlayout_invalidate_isbase = false;
    mutable bool qgridlayout_itemat_isbase = false;
    mutable bool qgridlayout_takeat_isbase = false;
    mutable bool qgridlayout_count_isbase = false;
    mutable bool qgridlayout_setgeometry_isbase = false;
    mutable bool qgridlayout_additem2_isbase = false;

public:
	VirtualQGridLayout(QWidget* parent): QGridLayout(parent) {};
	VirtualQGridLayout(): QGridLayout() {};

	~VirtualQGridLayout() {
		qgridlayout_sizehint_callback = nullptr;
		qgridlayout_minimumsize_callback = nullptr;
		qgridlayout_maximumsize_callback = nullptr;
		qgridlayout_setspacing_callback = nullptr;
		qgridlayout_spacing_callback = nullptr;
		qgridlayout_hasheightforwidth_callback = nullptr;
		qgridlayout_heightforwidth_callback = nullptr;
		qgridlayout_minimumheightforwidth_callback = nullptr;
		qgridlayout_expandingdirections_callback = nullptr;
		qgridlayout_invalidate_callback = nullptr;
		qgridlayout_itemat_callback = nullptr;
		qgridlayout_takeat_callback = nullptr;
		qgridlayout_count_callback = nullptr;
		qgridlayout_setgeometry_callback = nullptr;
		qgridlayout_additem2_callback = nullptr;
	}

// Callback setters
	inline void setQGridLayout_SizeHint_Callback(QGridLayout_SizeHint_Callback cb) const { qgridlayout_sizehint_callback = cb; }
	inline void setQGridLayout_MinimumSize_Callback(QGridLayout_MinimumSize_Callback cb) const { qgridlayout_minimumsize_callback = cb; }
	inline void setQGridLayout_MaximumSize_Callback(QGridLayout_MaximumSize_Callback cb) const { qgridlayout_maximumsize_callback = cb; }
	inline void setQGridLayout_SetSpacing_Callback(QGridLayout_SetSpacing_Callback cb) const { qgridlayout_setspacing_callback = cb; }
	inline void setQGridLayout_Spacing_Callback(QGridLayout_Spacing_Callback cb) const { qgridlayout_spacing_callback = cb; }
	inline void setQGridLayout_HasHeightForWidth_Callback(QGridLayout_HasHeightForWidth_Callback cb) const { qgridlayout_hasheightforwidth_callback = cb; }
	inline void setQGridLayout_HeightForWidth_Callback(QGridLayout_HeightForWidth_Callback cb) const { qgridlayout_heightforwidth_callback = cb; }
	inline void setQGridLayout_MinimumHeightForWidth_Callback(QGridLayout_MinimumHeightForWidth_Callback cb) const { qgridlayout_minimumheightforwidth_callback = cb; }
	inline void setQGridLayout_ExpandingDirections_Callback(QGridLayout_ExpandingDirections_Callback cb) const { qgridlayout_expandingdirections_callback = cb; }
	inline void setQGridLayout_Invalidate_Callback(QGridLayout_Invalidate_Callback cb) const { qgridlayout_invalidate_callback = cb; }
	inline void setQGridLayout_ItemAt_Callback(QGridLayout_ItemAt_Callback cb) const { qgridlayout_itemat_callback = cb; }
	inline void setQGridLayout_TakeAt_Callback(QGridLayout_TakeAt_Callback cb) const { qgridlayout_takeat_callback = cb; }
	inline void setQGridLayout_Count_Callback(QGridLayout_Count_Callback cb) const { qgridlayout_count_callback = cb; }
	inline void setQGridLayout_SetGeometry_Callback(QGridLayout_SetGeometry_Callback cb) const { qgridlayout_setgeometry_callback = cb; }
	inline void setQGridLayout_AddItem2_Callback(QGridLayout_AddItem2_Callback cb) const { qgridlayout_additem2_callback = cb; }

// Base flag setters
	inline void setQGridLayout_SizeHint_IsBase(bool value) const { qgridlayout_sizehint_isbase = value; }
	inline void setQGridLayout_MinimumSize_IsBase(bool value) const { qgridlayout_minimumsize_isbase = value; }
	inline void setQGridLayout_MaximumSize_IsBase(bool value) const { qgridlayout_maximumsize_isbase = value; }
	inline void setQGridLayout_SetSpacing_IsBase(bool value) const { qgridlayout_setspacing_isbase = value; }
	inline void setQGridLayout_Spacing_IsBase(bool value) const { qgridlayout_spacing_isbase = value; }
	inline void setQGridLayout_HasHeightForWidth_IsBase(bool value) const { qgridlayout_hasheightforwidth_isbase = value; }
	inline void setQGridLayout_HeightForWidth_IsBase(bool value) const { qgridlayout_heightforwidth_isbase = value; }
	inline void setQGridLayout_MinimumHeightForWidth_IsBase(bool value) const { qgridlayout_minimumheightforwidth_isbase = value; }
	inline void setQGridLayout_ExpandingDirections_IsBase(bool value) const { qgridlayout_expandingdirections_isbase = value; }
	inline void setQGridLayout_Invalidate_IsBase(bool value) const { qgridlayout_invalidate_isbase = value; }
	inline void setQGridLayout_ItemAt_IsBase(bool value) const { qgridlayout_itemat_isbase = value; }
	inline void setQGridLayout_TakeAt_IsBase(bool value) const { qgridlayout_takeat_isbase = value; }
	inline void setQGridLayout_Count_IsBase(bool value) const { qgridlayout_count_isbase = value; }
	inline void setQGridLayout_SetGeometry_IsBase(bool value) const { qgridlayout_setgeometry_isbase = value; }
	inline void setQGridLayout_AddItem2_IsBase(bool value) const { qgridlayout_additem2_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qgridlayout_sizehint_isbase) {
			qgridlayout_sizehint_isbase = false;
			return QGridLayout::sizeHint();
		} else if (qgridlayout_sizehint_callback != nullptr) {
			QSize* callback_ret = qgridlayout_sizehint_callback();
			return *callback_ret;
		} else {
			return QGridLayout::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSize() const override {
		if (qgridlayout_minimumsize_isbase) {
			qgridlayout_minimumsize_isbase = false;
			return QGridLayout::minimumSize();
		} else if (qgridlayout_minimumsize_callback != nullptr) {
			QSize* callback_ret = qgridlayout_minimumsize_callback();
			return *callback_ret;
		} else {
			return QGridLayout::minimumSize();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize maximumSize() const override {
		if (qgridlayout_maximumsize_isbase) {
			qgridlayout_maximumsize_isbase = false;
			return QGridLayout::maximumSize();
		} else if (qgridlayout_maximumsize_callback != nullptr) {
			QSize* callback_ret = qgridlayout_maximumsize_callback();
			return *callback_ret;
		} else {
			return QGridLayout::maximumSize();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSpacing(int spacing) override {
		if (qgridlayout_setspacing_isbase) {
			qgridlayout_setspacing_isbase = false;
			QGridLayout::setSpacing(spacing);
		} else if (qgridlayout_setspacing_callback != nullptr) {
			int cbval1 = spacing;
			qgridlayout_setspacing_callback(this, cbval1);
		} else {
			QGridLayout::setSpacing(spacing);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int spacing() const override {
		if (qgridlayout_spacing_isbase) {
			qgridlayout_spacing_isbase = false;
			return QGridLayout::spacing();
		} else if (qgridlayout_spacing_callback != nullptr) {
			int callback_ret = qgridlayout_spacing_callback();
			return callback_ret;
		} else {
			return QGridLayout::spacing();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hasHeightForWidth() const override {
		if (qgridlayout_hasheightforwidth_isbase) {
			qgridlayout_hasheightforwidth_isbase = false;
			return QGridLayout::hasHeightForWidth();
		} else if (qgridlayout_hasheightforwidth_callback != nullptr) {
			bool callback_ret = qgridlayout_hasheightforwidth_callback();
			return callback_ret;
		} else {
			return QGridLayout::hasHeightForWidth();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int heightForWidth(int param1) const override {
		if (qgridlayout_heightforwidth_isbase) {
			qgridlayout_heightforwidth_isbase = false;
			return QGridLayout::heightForWidth(param1);
		} else if (qgridlayout_heightforwidth_callback != nullptr) {
			int cbval1 = param1;
			int callback_ret = qgridlayout_heightforwidth_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGridLayout::heightForWidth(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int minimumHeightForWidth(int param1) const override {
		if (qgridlayout_minimumheightforwidth_isbase) {
			qgridlayout_minimumheightforwidth_isbase = false;
			return QGridLayout::minimumHeightForWidth(param1);
		} else if (qgridlayout_minimumheightforwidth_callback != nullptr) {
			int cbval1 = param1;
			int callback_ret = qgridlayout_minimumheightforwidth_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGridLayout::minimumHeightForWidth(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::Orientation> expandingDirections() const override {
		if (qgridlayout_expandingdirections_isbase) {
			qgridlayout_expandingdirections_isbase = false;
			return QGridLayout::expandingDirections();
		} else if (qgridlayout_expandingdirections_callback != nullptr) {
			int callback_ret = qgridlayout_expandingdirections_callback();
			return static_cast<QFlags<Qt::Orientation>>(callback_ret);
		} else {
			return QGridLayout::expandingDirections();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void invalidate() override {
		if (qgridlayout_invalidate_isbase) {
			qgridlayout_invalidate_isbase = false;
			QGridLayout::invalidate();
		} else if (qgridlayout_invalidate_callback != nullptr) {
			qgridlayout_invalidate_callback();
		} else {
			QGridLayout::invalidate();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayoutItem* itemAt(int index) const override {
		if (qgridlayout_itemat_isbase) {
			qgridlayout_itemat_isbase = false;
			return QGridLayout::itemAt(index);
		} else if (qgridlayout_itemat_callback != nullptr) {
			int cbval1 = index;
			QLayoutItem* callback_ret = qgridlayout_itemat_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGridLayout::itemAt(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayoutItem* takeAt(int index) override {
		if (qgridlayout_takeat_isbase) {
			qgridlayout_takeat_isbase = false;
			return QGridLayout::takeAt(index);
		} else if (qgridlayout_takeat_callback != nullptr) {
			int cbval1 = index;
			QLayoutItem* callback_ret = qgridlayout_takeat_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGridLayout::takeAt(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int count() const override {
		if (qgridlayout_count_isbase) {
			qgridlayout_count_isbase = false;
			return QGridLayout::count();
		} else if (qgridlayout_count_callback != nullptr) {
			int callback_ret = qgridlayout_count_callback();
			return callback_ret;
		} else {
			return QGridLayout::count();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setGeometry(const QRect& geometry) override {
		if (qgridlayout_setgeometry_isbase) {
			qgridlayout_setgeometry_isbase = false;
			QGridLayout::setGeometry(geometry);
		} else if (qgridlayout_setgeometry_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&geometry;
			qgridlayout_setgeometry_callback(this, cbval1);
		} else {
			QGridLayout::setGeometry(geometry);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void addItem(QLayoutItem* param1) override {
		if (qgridlayout_additem2_isbase) {
			qgridlayout_additem2_isbase = false;
			QGridLayout::addItem(param1);
		} else if (qgridlayout_additem2_callback != nullptr) {
			QLayoutItem* cbval1 = param1;
			qgridlayout_additem2_callback(this, cbval1);
		} else {
			QGridLayout::addItem(param1);
		}
	}

	// Friend functions
	friend void QGridLayout_AddItem2(QGridLayout* self, QLayoutItem* param1);
	friend void QGridLayout_QBaseAddItem2(QGridLayout* self, QLayoutItem* param1);
};

#endif


