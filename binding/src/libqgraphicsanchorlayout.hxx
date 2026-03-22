#pragma once
#ifndef QGRAPHICSANCHORLAYOUT_H_C_LIBVIRTUAL
#define QGRAPHICSANCHORLAYOUT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGraphicsAnchorLayout so that we can call protected methods
class VirtualQGraphicsAnchorLayout final : public QGraphicsAnchorLayout {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsAnchorLayout= true;

	// Virtual class public types (including callbacks)
	using QGraphicsAnchorLayout_RemoveAt_Callback = void (*)(QGraphicsAnchorLayout*, int);
	using QGraphicsAnchorLayout_SetGeometry_Callback = void (*)(QGraphicsAnchorLayout*, const QRectF*);
	using QGraphicsAnchorLayout_Count_Callback = int (*)();
	using QGraphicsAnchorLayout_ItemAt_Callback = QGraphicsLayoutItem* (*)(const QGraphicsAnchorLayout*, int);
	using QGraphicsAnchorLayout_Invalidate_Callback = void (*)();
	using QGraphicsAnchorLayout_SizeHint_Callback = QSizeF* (*)(const QGraphicsAnchorLayout*, int, const QSizeF*);

protected:
	// Instance callback storage
	mutable QGraphicsAnchorLayout_RemoveAt_Callback qgraphicsanchorlayout_removeat_callback = nullptr;
	mutable QGraphicsAnchorLayout_SetGeometry_Callback qgraphicsanchorlayout_setgeometry_callback = nullptr;
	mutable QGraphicsAnchorLayout_Count_Callback qgraphicsanchorlayout_count_callback = nullptr;
	mutable QGraphicsAnchorLayout_ItemAt_Callback qgraphicsanchorlayout_itemat_callback = nullptr;
	mutable QGraphicsAnchorLayout_Invalidate_Callback qgraphicsanchorlayout_invalidate_callback = nullptr;
	mutable QGraphicsAnchorLayout_SizeHint_Callback qgraphicsanchorlayout_sizehint_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsanchorlayout_removeat_isbase = false;
    mutable bool qgraphicsanchorlayout_setgeometry_isbase = false;
    mutable bool qgraphicsanchorlayout_count_isbase = false;
    mutable bool qgraphicsanchorlayout_itemat_isbase = false;
    mutable bool qgraphicsanchorlayout_invalidate_isbase = false;
    mutable bool qgraphicsanchorlayout_sizehint_isbase = false;

public:
	VirtualQGraphicsAnchorLayout(): QGraphicsAnchorLayout() {};
	VirtualQGraphicsAnchorLayout(QGraphicsLayoutItem* parent): QGraphicsAnchorLayout(parent) {};

	~VirtualQGraphicsAnchorLayout() {
		qgraphicsanchorlayout_removeat_callback = nullptr;
		qgraphicsanchorlayout_setgeometry_callback = nullptr;
		qgraphicsanchorlayout_count_callback = nullptr;
		qgraphicsanchorlayout_itemat_callback = nullptr;
		qgraphicsanchorlayout_invalidate_callback = nullptr;
		qgraphicsanchorlayout_sizehint_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsAnchorLayout_RemoveAt_Callback(QGraphicsAnchorLayout_RemoveAt_Callback cb) const { qgraphicsanchorlayout_removeat_callback = cb; }
	inline void setQGraphicsAnchorLayout_SetGeometry_Callback(QGraphicsAnchorLayout_SetGeometry_Callback cb) const { qgraphicsanchorlayout_setgeometry_callback = cb; }
	inline void setQGraphicsAnchorLayout_Count_Callback(QGraphicsAnchorLayout_Count_Callback cb) const { qgraphicsanchorlayout_count_callback = cb; }
	inline void setQGraphicsAnchorLayout_ItemAt_Callback(QGraphicsAnchorLayout_ItemAt_Callback cb) const { qgraphicsanchorlayout_itemat_callback = cb; }
	inline void setQGraphicsAnchorLayout_Invalidate_Callback(QGraphicsAnchorLayout_Invalidate_Callback cb) const { qgraphicsanchorlayout_invalidate_callback = cb; }
	inline void setQGraphicsAnchorLayout_SizeHint_Callback(QGraphicsAnchorLayout_SizeHint_Callback cb) const { qgraphicsanchorlayout_sizehint_callback = cb; }

// Base flag setters
	inline void setQGraphicsAnchorLayout_RemoveAt_IsBase(bool value) const { qgraphicsanchorlayout_removeat_isbase = value; }
	inline void setQGraphicsAnchorLayout_SetGeometry_IsBase(bool value) const { qgraphicsanchorlayout_setgeometry_isbase = value; }
	inline void setQGraphicsAnchorLayout_Count_IsBase(bool value) const { qgraphicsanchorlayout_count_isbase = value; }
	inline void setQGraphicsAnchorLayout_ItemAt_IsBase(bool value) const { qgraphicsanchorlayout_itemat_isbase = value; }
	inline void setQGraphicsAnchorLayout_Invalidate_IsBase(bool value) const { qgraphicsanchorlayout_invalidate_isbase = value; }
	inline void setQGraphicsAnchorLayout_SizeHint_IsBase(bool value) const { qgraphicsanchorlayout_sizehint_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void removeAt(int index) override {
		if (qgraphicsanchorlayout_removeat_isbase) {
			qgraphicsanchorlayout_removeat_isbase = false;
			QGraphicsAnchorLayout::removeAt(index);
		} else if (qgraphicsanchorlayout_removeat_callback != nullptr) {
			int cbval1 = index;
			qgraphicsanchorlayout_removeat_callback(this, cbval1);
		} else {
			QGraphicsAnchorLayout::removeAt(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setGeometry(const QRectF& rect) override {
		if (qgraphicsanchorlayout_setgeometry_isbase) {
			qgraphicsanchorlayout_setgeometry_isbase = false;
			QGraphicsAnchorLayout::setGeometry(rect);
		} else if (qgraphicsanchorlayout_setgeometry_callback != nullptr) {
			const QRectF* cbval1 = (const QRectF*)&rect;
			qgraphicsanchorlayout_setgeometry_callback(this, cbval1);
		} else {
			QGraphicsAnchorLayout::setGeometry(rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int count() const override {
		if (qgraphicsanchorlayout_count_isbase) {
			qgraphicsanchorlayout_count_isbase = false;
			return QGraphicsAnchorLayout::count();
		} else if (qgraphicsanchorlayout_count_callback != nullptr) {
			int callback_ret = qgraphicsanchorlayout_count_callback();
			return callback_ret;
		} else {
			return QGraphicsAnchorLayout::count();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QGraphicsLayoutItem* itemAt(int index) const override {
		if (qgraphicsanchorlayout_itemat_isbase) {
			qgraphicsanchorlayout_itemat_isbase = false;
			return QGraphicsAnchorLayout::itemAt(index);
		} else if (qgraphicsanchorlayout_itemat_callback != nullptr) {
			int cbval1 = index;
			QGraphicsLayoutItem* callback_ret = qgraphicsanchorlayout_itemat_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsAnchorLayout::itemAt(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void invalidate() override {
		if (qgraphicsanchorlayout_invalidate_isbase) {
			qgraphicsanchorlayout_invalidate_isbase = false;
			QGraphicsAnchorLayout::invalidate();
		} else if (qgraphicsanchorlayout_invalidate_callback != nullptr) {
			qgraphicsanchorlayout_invalidate_callback();
		} else {
			QGraphicsAnchorLayout::invalidate();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (qgraphicsanchorlayout_sizehint_isbase) {
			qgraphicsanchorlayout_sizehint_isbase = false;
			return QGraphicsAnchorLayout::sizeHint(which, constraint);
		} else if (qgraphicsanchorlayout_sizehint_callback != nullptr) {
			int cbval1 = static_cast<int>(which);
			const QSizeF* cbval2 = (const QSizeF*)&constraint;
			QSizeF* callback_ret = qgraphicsanchorlayout_sizehint_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QGraphicsAnchorLayout::sizeHint(which, constraint);
		}
	}

	// Friend functions
	friend QSizeF* QGraphicsAnchorLayout_SizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint);
	friend QSizeF* QGraphicsAnchorLayout_QBaseSizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint);
};

#endif


