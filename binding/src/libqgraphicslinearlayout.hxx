#pragma once
#ifndef QGRAPHICSLINEARLAYOUT_H_C_LIBVIRTUAL
#define QGRAPHICSLINEARLAYOUT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGraphicsLinearLayout so that we can call protected methods
class VirtualQGraphicsLinearLayout final : public QGraphicsLinearLayout {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsLinearLayout= true;

	// Virtual class public types (including callbacks)
	using QGraphicsLinearLayout_RemoveAt_Callback = void (*)(QGraphicsLinearLayout*, int);
	using QGraphicsLinearLayout_SetGeometry_Callback = void (*)(QGraphicsLinearLayout*, const QRectF*);
	using QGraphicsLinearLayout_Count_Callback = int (*)();
	using QGraphicsLinearLayout_ItemAt_Callback = QGraphicsLayoutItem* (*)(const QGraphicsLinearLayout*, int);
	using QGraphicsLinearLayout_Invalidate_Callback = void (*)();
	using QGraphicsLinearLayout_SizeHint_Callback = QSizeF* (*)(const QGraphicsLinearLayout*, int, const QSizeF*);

protected:
	// Instance callback storage
	mutable QGraphicsLinearLayout_RemoveAt_Callback qgraphicslinearlayout_removeat_callback = nullptr;
	mutable QGraphicsLinearLayout_SetGeometry_Callback qgraphicslinearlayout_setgeometry_callback = nullptr;
	mutable QGraphicsLinearLayout_Count_Callback qgraphicslinearlayout_count_callback = nullptr;
	mutable QGraphicsLinearLayout_ItemAt_Callback qgraphicslinearlayout_itemat_callback = nullptr;
	mutable QGraphicsLinearLayout_Invalidate_Callback qgraphicslinearlayout_invalidate_callback = nullptr;
	mutable QGraphicsLinearLayout_SizeHint_Callback qgraphicslinearlayout_sizehint_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicslinearlayout_removeat_isbase = false;
    mutable bool qgraphicslinearlayout_setgeometry_isbase = false;
    mutable bool qgraphicslinearlayout_count_isbase = false;
    mutable bool qgraphicslinearlayout_itemat_isbase = false;
    mutable bool qgraphicslinearlayout_invalidate_isbase = false;
    mutable bool qgraphicslinearlayout_sizehint_isbase = false;

public:
	VirtualQGraphicsLinearLayout(): QGraphicsLinearLayout() {};
	VirtualQGraphicsLinearLayout(Qt::Orientation orientation): QGraphicsLinearLayout(orientation) {};
	VirtualQGraphicsLinearLayout(QGraphicsLayoutItem* parent): QGraphicsLinearLayout(parent) {};
	VirtualQGraphicsLinearLayout(Qt::Orientation orientation, QGraphicsLayoutItem* parent): QGraphicsLinearLayout(orientation, parent) {};

	~VirtualQGraphicsLinearLayout() {
		qgraphicslinearlayout_removeat_callback = nullptr;
		qgraphicslinearlayout_setgeometry_callback = nullptr;
		qgraphicslinearlayout_count_callback = nullptr;
		qgraphicslinearlayout_itemat_callback = nullptr;
		qgraphicslinearlayout_invalidate_callback = nullptr;
		qgraphicslinearlayout_sizehint_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsLinearLayout_RemoveAt_Callback(QGraphicsLinearLayout_RemoveAt_Callback cb) const { qgraphicslinearlayout_removeat_callback = cb; }
	inline void setQGraphicsLinearLayout_SetGeometry_Callback(QGraphicsLinearLayout_SetGeometry_Callback cb) const { qgraphicslinearlayout_setgeometry_callback = cb; }
	inline void setQGraphicsLinearLayout_Count_Callback(QGraphicsLinearLayout_Count_Callback cb) const { qgraphicslinearlayout_count_callback = cb; }
	inline void setQGraphicsLinearLayout_ItemAt_Callback(QGraphicsLinearLayout_ItemAt_Callback cb) const { qgraphicslinearlayout_itemat_callback = cb; }
	inline void setQGraphicsLinearLayout_Invalidate_Callback(QGraphicsLinearLayout_Invalidate_Callback cb) const { qgraphicslinearlayout_invalidate_callback = cb; }
	inline void setQGraphicsLinearLayout_SizeHint_Callback(QGraphicsLinearLayout_SizeHint_Callback cb) const { qgraphicslinearlayout_sizehint_callback = cb; }

// Base flag setters
	inline void setQGraphicsLinearLayout_RemoveAt_IsBase(bool value) const { qgraphicslinearlayout_removeat_isbase = value; }
	inline void setQGraphicsLinearLayout_SetGeometry_IsBase(bool value) const { qgraphicslinearlayout_setgeometry_isbase = value; }
	inline void setQGraphicsLinearLayout_Count_IsBase(bool value) const { qgraphicslinearlayout_count_isbase = value; }
	inline void setQGraphicsLinearLayout_ItemAt_IsBase(bool value) const { qgraphicslinearlayout_itemat_isbase = value; }
	inline void setQGraphicsLinearLayout_Invalidate_IsBase(bool value) const { qgraphicslinearlayout_invalidate_isbase = value; }
	inline void setQGraphicsLinearLayout_SizeHint_IsBase(bool value) const { qgraphicslinearlayout_sizehint_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void removeAt(int index) override {
		if (qgraphicslinearlayout_removeat_isbase) {
			qgraphicslinearlayout_removeat_isbase = false;
			QGraphicsLinearLayout::removeAt(index);
		} else if (qgraphicslinearlayout_removeat_callback != nullptr) {
			int cbval1 = index;
			qgraphicslinearlayout_removeat_callback(this, cbval1);
		} else {
			QGraphicsLinearLayout::removeAt(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setGeometry(const QRectF& rect) override {
		if (qgraphicslinearlayout_setgeometry_isbase) {
			qgraphicslinearlayout_setgeometry_isbase = false;
			QGraphicsLinearLayout::setGeometry(rect);
		} else if (qgraphicslinearlayout_setgeometry_callback != nullptr) {
			const QRectF* cbval1 = (const QRectF*)&rect;
			qgraphicslinearlayout_setgeometry_callback(this, cbval1);
		} else {
			QGraphicsLinearLayout::setGeometry(rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int count() const override {
		if (qgraphicslinearlayout_count_isbase) {
			qgraphicslinearlayout_count_isbase = false;
			return QGraphicsLinearLayout::count();
		} else if (qgraphicslinearlayout_count_callback != nullptr) {
			int callback_ret = qgraphicslinearlayout_count_callback();
			return callback_ret;
		} else {
			return QGraphicsLinearLayout::count();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QGraphicsLayoutItem* itemAt(int index) const override {
		if (qgraphicslinearlayout_itemat_isbase) {
			qgraphicslinearlayout_itemat_isbase = false;
			return QGraphicsLinearLayout::itemAt(index);
		} else if (qgraphicslinearlayout_itemat_callback != nullptr) {
			int cbval1 = index;
			QGraphicsLayoutItem* callback_ret = qgraphicslinearlayout_itemat_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsLinearLayout::itemAt(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void invalidate() override {
		if (qgraphicslinearlayout_invalidate_isbase) {
			qgraphicslinearlayout_invalidate_isbase = false;
			QGraphicsLinearLayout::invalidate();
		} else if (qgraphicslinearlayout_invalidate_callback != nullptr) {
			qgraphicslinearlayout_invalidate_callback();
		} else {
			QGraphicsLinearLayout::invalidate();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (qgraphicslinearlayout_sizehint_isbase) {
			qgraphicslinearlayout_sizehint_isbase = false;
			return QGraphicsLinearLayout::sizeHint(which, constraint);
		} else if (qgraphicslinearlayout_sizehint_callback != nullptr) {
			int cbval1 = static_cast<int>(which);
			const QSizeF* cbval2 = (const QSizeF*)&constraint;
			QSizeF* callback_ret = qgraphicslinearlayout_sizehint_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QGraphicsLinearLayout::sizeHint(which, constraint);
		}
	}
};

#endif


