#pragma once
#ifndef QGRAPHICSGRIDLAYOUT_H_C_LIBVIRTUAL
#define QGRAPHICSGRIDLAYOUT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGraphicsGridLayout so that we can call protected methods
class VirtualQGraphicsGridLayout final : public QGraphicsGridLayout {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsGridLayout= true;

	// Virtual class public types (including callbacks)
	using QGraphicsGridLayout_Count_Callback = int (*)();
	using QGraphicsGridLayout_ItemAt2_Callback = QGraphicsLayoutItem* (*)(const QGraphicsGridLayout*, int);
	using QGraphicsGridLayout_RemoveAt_Callback = void (*)(QGraphicsGridLayout*, int);
	using QGraphicsGridLayout_Invalidate_Callback = void (*)();
	using QGraphicsGridLayout_SetGeometry_Callback = void (*)(QGraphicsGridLayout*, const QRectF*);
	using QGraphicsGridLayout_SizeHint_Callback = QSizeF* (*)(const QGraphicsGridLayout*, int, const QSizeF*);

protected:
	// Instance callback storage
	mutable QGraphicsGridLayout_Count_Callback qgraphicsgridlayout_count_callback = nullptr;
	mutable QGraphicsGridLayout_ItemAt2_Callback qgraphicsgridlayout_itemat2_callback = nullptr;
	mutable QGraphicsGridLayout_RemoveAt_Callback qgraphicsgridlayout_removeat_callback = nullptr;
	mutable QGraphicsGridLayout_Invalidate_Callback qgraphicsgridlayout_invalidate_callback = nullptr;
	mutable QGraphicsGridLayout_SetGeometry_Callback qgraphicsgridlayout_setgeometry_callback = nullptr;
	mutable QGraphicsGridLayout_SizeHint_Callback qgraphicsgridlayout_sizehint_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsgridlayout_count_isbase = false;
    mutable bool qgraphicsgridlayout_itemat2_isbase = false;
    mutable bool qgraphicsgridlayout_removeat_isbase = false;
    mutable bool qgraphicsgridlayout_invalidate_isbase = false;
    mutable bool qgraphicsgridlayout_setgeometry_isbase = false;
    mutable bool qgraphicsgridlayout_sizehint_isbase = false;

public:
	VirtualQGraphicsGridLayout(): QGraphicsGridLayout() {};
	VirtualQGraphicsGridLayout(QGraphicsLayoutItem* parent): QGraphicsGridLayout(parent) {};

	~VirtualQGraphicsGridLayout() {
		qgraphicsgridlayout_count_callback = nullptr;
		qgraphicsgridlayout_itemat2_callback = nullptr;
		qgraphicsgridlayout_removeat_callback = nullptr;
		qgraphicsgridlayout_invalidate_callback = nullptr;
		qgraphicsgridlayout_setgeometry_callback = nullptr;
		qgraphicsgridlayout_sizehint_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsGridLayout_Count_Callback(QGraphicsGridLayout_Count_Callback cb) const { qgraphicsgridlayout_count_callback = cb; }
	inline void setQGraphicsGridLayout_ItemAt2_Callback(QGraphicsGridLayout_ItemAt2_Callback cb) const { qgraphicsgridlayout_itemat2_callback = cb; }
	inline void setQGraphicsGridLayout_RemoveAt_Callback(QGraphicsGridLayout_RemoveAt_Callback cb) const { qgraphicsgridlayout_removeat_callback = cb; }
	inline void setQGraphicsGridLayout_Invalidate_Callback(QGraphicsGridLayout_Invalidate_Callback cb) const { qgraphicsgridlayout_invalidate_callback = cb; }
	inline void setQGraphicsGridLayout_SetGeometry_Callback(QGraphicsGridLayout_SetGeometry_Callback cb) const { qgraphicsgridlayout_setgeometry_callback = cb; }
	inline void setQGraphicsGridLayout_SizeHint_Callback(QGraphicsGridLayout_SizeHint_Callback cb) const { qgraphicsgridlayout_sizehint_callback = cb; }

// Base flag setters
	inline void setQGraphicsGridLayout_Count_IsBase(bool value) const { qgraphicsgridlayout_count_isbase = value; }
	inline void setQGraphicsGridLayout_ItemAt2_IsBase(bool value) const { qgraphicsgridlayout_itemat2_isbase = value; }
	inline void setQGraphicsGridLayout_RemoveAt_IsBase(bool value) const { qgraphicsgridlayout_removeat_isbase = value; }
	inline void setQGraphicsGridLayout_Invalidate_IsBase(bool value) const { qgraphicsgridlayout_invalidate_isbase = value; }
	inline void setQGraphicsGridLayout_SetGeometry_IsBase(bool value) const { qgraphicsgridlayout_setgeometry_isbase = value; }
	inline void setQGraphicsGridLayout_SizeHint_IsBase(bool value) const { qgraphicsgridlayout_sizehint_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int count() const override {
		if (qgraphicsgridlayout_count_isbase) {
			qgraphicsgridlayout_count_isbase = false;
			return QGraphicsGridLayout::count();
		} else if (qgraphicsgridlayout_count_callback != nullptr) {
			int callback_ret = qgraphicsgridlayout_count_callback();
			return callback_ret;
		} else {
			return QGraphicsGridLayout::count();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QGraphicsLayoutItem* itemAt(int index) const override {
		if (qgraphicsgridlayout_itemat2_isbase) {
			qgraphicsgridlayout_itemat2_isbase = false;
			return QGraphicsGridLayout::itemAt(index);
		} else if (qgraphicsgridlayout_itemat2_callback != nullptr) {
			int cbval1 = index;
			QGraphicsLayoutItem* callback_ret = qgraphicsgridlayout_itemat2_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsGridLayout::itemAt(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void removeAt(int index) override {
		if (qgraphicsgridlayout_removeat_isbase) {
			qgraphicsgridlayout_removeat_isbase = false;
			QGraphicsGridLayout::removeAt(index);
		} else if (qgraphicsgridlayout_removeat_callback != nullptr) {
			int cbval1 = index;
			qgraphicsgridlayout_removeat_callback(this, cbval1);
		} else {
			QGraphicsGridLayout::removeAt(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void invalidate() override {
		if (qgraphicsgridlayout_invalidate_isbase) {
			qgraphicsgridlayout_invalidate_isbase = false;
			QGraphicsGridLayout::invalidate();
		} else if (qgraphicsgridlayout_invalidate_callback != nullptr) {
			qgraphicsgridlayout_invalidate_callback();
		} else {
			QGraphicsGridLayout::invalidate();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setGeometry(const QRectF& rect) override {
		if (qgraphicsgridlayout_setgeometry_isbase) {
			qgraphicsgridlayout_setgeometry_isbase = false;
			QGraphicsGridLayout::setGeometry(rect);
		} else if (qgraphicsgridlayout_setgeometry_callback != nullptr) {
			const QRectF* cbval1 = (const QRectF*)&rect;
			qgraphicsgridlayout_setgeometry_callback(this, cbval1);
		} else {
			QGraphicsGridLayout::setGeometry(rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (qgraphicsgridlayout_sizehint_isbase) {
			qgraphicsgridlayout_sizehint_isbase = false;
			return QGraphicsGridLayout::sizeHint(which, constraint);
		} else if (qgraphicsgridlayout_sizehint_callback != nullptr) {
			int cbval1 = static_cast<int>(which);
			const QSizeF* cbval2 = (const QSizeF*)&constraint;
			QSizeF* callback_ret = qgraphicsgridlayout_sizehint_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QGraphicsGridLayout::sizeHint(which, constraint);
		}
	}
};

#endif


