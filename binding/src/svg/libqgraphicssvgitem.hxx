#pragma once
#ifndef QGRAPHICSSVGITEM_H_C_LIBVIRTUAL
#define QGRAPHICSSVGITEM_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QGraphicsSvgItem so that we can call protected methods
class VirtualQGraphicsSvgItem final : public QGraphicsSvgItem {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsSvgItem= true;

	// Virtual class public types (including callbacks)
	using QGraphicsSvgItem_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsSvgItem_Paint_Callback = void (*)(QGraphicsSvgItem*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsSvgItem_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QGraphicsSvgItem_BoundingRect_Callback qgraphicssvgitem_boundingrect_callback = nullptr;
	mutable QGraphicsSvgItem_Paint_Callback qgraphicssvgitem_paint_callback = nullptr;
	mutable QGraphicsSvgItem_Type_Callback qgraphicssvgitem_type_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicssvgitem_boundingrect_isbase = false;
    mutable bool qgraphicssvgitem_paint_isbase = false;
    mutable bool qgraphicssvgitem_type_isbase = false;

public:
	VirtualQGraphicsSvgItem(): QGraphicsSvgItem() {};
	VirtualQGraphicsSvgItem(const QString& fileName): QGraphicsSvgItem(fileName) {};
	VirtualQGraphicsSvgItem(QGraphicsItem* parentItem): QGraphicsSvgItem(parentItem) {};
	VirtualQGraphicsSvgItem(const QString& fileName, QGraphicsItem* parentItem): QGraphicsSvgItem(fileName, parentItem) {};

	~VirtualQGraphicsSvgItem() {
		qgraphicssvgitem_boundingrect_callback = nullptr;
		qgraphicssvgitem_paint_callback = nullptr;
		qgraphicssvgitem_type_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsSvgItem_BoundingRect_Callback(QGraphicsSvgItem_BoundingRect_Callback cb) const { qgraphicssvgitem_boundingrect_callback = cb; }
	inline void setQGraphicsSvgItem_Paint_Callback(QGraphicsSvgItem_Paint_Callback cb) const { qgraphicssvgitem_paint_callback = cb; }
	inline void setQGraphicsSvgItem_Type_Callback(QGraphicsSvgItem_Type_Callback cb) const { qgraphicssvgitem_type_callback = cb; }

// Base flag setters
	inline void setQGraphicsSvgItem_BoundingRect_IsBase(bool value) const { qgraphicssvgitem_boundingrect_isbase = value; }
	inline void setQGraphicsSvgItem_Paint_IsBase(bool value) const { qgraphicssvgitem_paint_isbase = value; }
	inline void setQGraphicsSvgItem_Type_IsBase(bool value) const { qgraphicssvgitem_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicssvgitem_boundingrect_isbase) {
			qgraphicssvgitem_boundingrect_isbase = false;
			return QGraphicsSvgItem::boundingRect();
		} else if (qgraphicssvgitem_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicssvgitem_boundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsSvgItem::boundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicssvgitem_paint_isbase) {
			qgraphicssvgitem_paint_isbase = false;
			QGraphicsSvgItem::paint(painter, option, widget);
		} else if (qgraphicssvgitem_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicssvgitem_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsSvgItem::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicssvgitem_type_isbase) {
			qgraphicssvgitem_type_isbase = false;
			return QGraphicsSvgItem::type();
		} else if (qgraphicssvgitem_type_callback != nullptr) {
			int callback_ret = qgraphicssvgitem_type_callback();
			return callback_ret;
		} else {
			return QGraphicsSvgItem::type();
		}
	}
};

#endif


