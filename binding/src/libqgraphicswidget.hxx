#pragma once
#ifndef QGRAPHICSWIDGET_H_C_LIBVIRTUAL
#define QGRAPHICSWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGraphicsWidget so that we can call protected methods
class VirtualQGraphicsWidget final : public QGraphicsWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsWidget= true;

	// Virtual class public types (including callbacks)
	using QGraphicsWidget_SetGeometry_Callback = void (*)(QGraphicsWidget*, const QRectF*);
	using QGraphicsWidget_GetContentsMargins_Callback = void (*)(const QGraphicsWidget*, double*, double*, double*, double*);
	using QGraphicsWidget_Type_Callback = int (*)();
	using QGraphicsWidget_Paint_Callback = void (*)(QGraphicsWidget*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsWidget_PaintWindowFrame_Callback = void (*)(QGraphicsWidget*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsWidget_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsWidget_Shape_Callback = QPainterPath* (*)();
	using QGraphicsWidget_InitStyleOption_Callback = void (*)(const QGraphicsWidget*, QStyleOption*);
	using QGraphicsWidget_SizeHint_Callback = QSizeF* (*)(const QGraphicsWidget*, int, const QSizeF*);
	using QGraphicsWidget_UpdateGeometry_Callback = void (*)();
	using QGraphicsWidget_ItemChange_Callback = QVariant* (*)(QGraphicsWidget*, int, const QVariant*);
	using QGraphicsWidget_PropertyChange_Callback = QVariant* (*)(QGraphicsWidget*, libqt_string, const QVariant*);
	using QGraphicsWidget_SceneEvent_Callback = bool (*)(QGraphicsWidget*, QEvent*);
	using QGraphicsWidget_WindowFrameEvent_Callback = bool (*)(QGraphicsWidget*, QEvent*);
	using QGraphicsWidget_WindowFrameSectionAt_Callback = int (*)(const QGraphicsWidget*, const QPointF*);
	using QGraphicsWidget_Event_Callback = bool (*)(QGraphicsWidget*, QEvent*);
	using QGraphicsWidget_ChangeEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
	using QGraphicsWidget_CloseEvent_Callback = void (*)(QGraphicsWidget*, QCloseEvent*);
	using QGraphicsWidget_FocusInEvent_Callback = void (*)(QGraphicsWidget*, QFocusEvent*);
	using QGraphicsWidget_FocusNextPrevChild_Callback = bool (*)(QGraphicsWidget*, bool);
	using QGraphicsWidget_FocusOutEvent_Callback = void (*)(QGraphicsWidget*, QFocusEvent*);
	using QGraphicsWidget_HideEvent_Callback = void (*)(QGraphicsWidget*, QHideEvent*);
	using QGraphicsWidget_MoveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneMoveEvent*);
	using QGraphicsWidget_PolishEvent_Callback = void (*)();
	using QGraphicsWidget_ResizeEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneResizeEvent*);
	using QGraphicsWidget_ShowEvent_Callback = void (*)(QGraphicsWidget*, QShowEvent*);
	using QGraphicsWidget_HoverMoveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneHoverEvent*);
	using QGraphicsWidget_HoverLeaveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneHoverEvent*);
	using QGraphicsWidget_GrabMouseEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
	using QGraphicsWidget_UngrabMouseEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
	using QGraphicsWidget_GrabKeyboardEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
	using QGraphicsWidget_UngrabKeyboardEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);

protected:
	// Instance callback storage
	mutable QGraphicsWidget_SetGeometry_Callback qgraphicswidget_setgeometry_callback = nullptr;
	mutable QGraphicsWidget_GetContentsMargins_Callback qgraphicswidget_getcontentsmargins_callback = nullptr;
	mutable QGraphicsWidget_Type_Callback qgraphicswidget_type_callback = nullptr;
	mutable QGraphicsWidget_Paint_Callback qgraphicswidget_paint_callback = nullptr;
	mutable QGraphicsWidget_PaintWindowFrame_Callback qgraphicswidget_paintwindowframe_callback = nullptr;
	mutable QGraphicsWidget_BoundingRect_Callback qgraphicswidget_boundingrect_callback = nullptr;
	mutable QGraphicsWidget_Shape_Callback qgraphicswidget_shape_callback = nullptr;
	mutable QGraphicsWidget_InitStyleOption_Callback qgraphicswidget_initstyleoption_callback = nullptr;
	mutable QGraphicsWidget_SizeHint_Callback qgraphicswidget_sizehint_callback = nullptr;
	mutable QGraphicsWidget_UpdateGeometry_Callback qgraphicswidget_updategeometry_callback = nullptr;
	mutable QGraphicsWidget_ItemChange_Callback qgraphicswidget_itemchange_callback = nullptr;
	mutable QGraphicsWidget_PropertyChange_Callback qgraphicswidget_propertychange_callback = nullptr;
	mutable QGraphicsWidget_SceneEvent_Callback qgraphicswidget_sceneevent_callback = nullptr;
	mutable QGraphicsWidget_WindowFrameEvent_Callback qgraphicswidget_windowframeevent_callback = nullptr;
	mutable QGraphicsWidget_WindowFrameSectionAt_Callback qgraphicswidget_windowframesectionat_callback = nullptr;
	mutable QGraphicsWidget_Event_Callback qgraphicswidget_event_callback = nullptr;
	mutable QGraphicsWidget_ChangeEvent_Callback qgraphicswidget_changeevent_callback = nullptr;
	mutable QGraphicsWidget_CloseEvent_Callback qgraphicswidget_closeevent_callback = nullptr;
	mutable QGraphicsWidget_FocusInEvent_Callback qgraphicswidget_focusinevent_callback = nullptr;
	mutable QGraphicsWidget_FocusNextPrevChild_Callback qgraphicswidget_focusnextprevchild_callback = nullptr;
	mutable QGraphicsWidget_FocusOutEvent_Callback qgraphicswidget_focusoutevent_callback = nullptr;
	mutable QGraphicsWidget_HideEvent_Callback qgraphicswidget_hideevent_callback = nullptr;
	mutable QGraphicsWidget_MoveEvent_Callback qgraphicswidget_moveevent_callback = nullptr;
	mutable QGraphicsWidget_PolishEvent_Callback qgraphicswidget_polishevent_callback = nullptr;
	mutable QGraphicsWidget_ResizeEvent_Callback qgraphicswidget_resizeevent_callback = nullptr;
	mutable QGraphicsWidget_ShowEvent_Callback qgraphicswidget_showevent_callback = nullptr;
	mutable QGraphicsWidget_HoverMoveEvent_Callback qgraphicswidget_hovermoveevent_callback = nullptr;
	mutable QGraphicsWidget_HoverLeaveEvent_Callback qgraphicswidget_hoverleaveevent_callback = nullptr;
	mutable QGraphicsWidget_GrabMouseEvent_Callback qgraphicswidget_grabmouseevent_callback = nullptr;
	mutable QGraphicsWidget_UngrabMouseEvent_Callback qgraphicswidget_ungrabmouseevent_callback = nullptr;
	mutable QGraphicsWidget_GrabKeyboardEvent_Callback qgraphicswidget_grabkeyboardevent_callback = nullptr;
	mutable QGraphicsWidget_UngrabKeyboardEvent_Callback qgraphicswidget_ungrabkeyboardevent_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicswidget_setgeometry_isbase = false;
    mutable bool qgraphicswidget_getcontentsmargins_isbase = false;
    mutable bool qgraphicswidget_type_isbase = false;
    mutable bool qgraphicswidget_paint_isbase = false;
    mutable bool qgraphicswidget_paintwindowframe_isbase = false;
    mutable bool qgraphicswidget_boundingrect_isbase = false;
    mutable bool qgraphicswidget_shape_isbase = false;
    mutable bool qgraphicswidget_initstyleoption_isbase = false;
    mutable bool qgraphicswidget_sizehint_isbase = false;
    mutable bool qgraphicswidget_updategeometry_isbase = false;
    mutable bool qgraphicswidget_itemchange_isbase = false;
    mutable bool qgraphicswidget_propertychange_isbase = false;
    mutable bool qgraphicswidget_sceneevent_isbase = false;
    mutable bool qgraphicswidget_windowframeevent_isbase = false;
    mutable bool qgraphicswidget_windowframesectionat_isbase = false;
    mutable bool qgraphicswidget_event_isbase = false;
    mutable bool qgraphicswidget_changeevent_isbase = false;
    mutable bool qgraphicswidget_closeevent_isbase = false;
    mutable bool qgraphicswidget_focusinevent_isbase = false;
    mutable bool qgraphicswidget_focusnextprevchild_isbase = false;
    mutable bool qgraphicswidget_focusoutevent_isbase = false;
    mutable bool qgraphicswidget_hideevent_isbase = false;
    mutable bool qgraphicswidget_moveevent_isbase = false;
    mutable bool qgraphicswidget_polishevent_isbase = false;
    mutable bool qgraphicswidget_resizeevent_isbase = false;
    mutable bool qgraphicswidget_showevent_isbase = false;
    mutable bool qgraphicswidget_hovermoveevent_isbase = false;
    mutable bool qgraphicswidget_hoverleaveevent_isbase = false;
    mutable bool qgraphicswidget_grabmouseevent_isbase = false;
    mutable bool qgraphicswidget_ungrabmouseevent_isbase = false;
    mutable bool qgraphicswidget_grabkeyboardevent_isbase = false;
    mutable bool qgraphicswidget_ungrabkeyboardevent_isbase = false;

public:
	VirtualQGraphicsWidget(): QGraphicsWidget() {};
	VirtualQGraphicsWidget(QGraphicsItem* parent): QGraphicsWidget(parent) {};
	VirtualQGraphicsWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags): QGraphicsWidget(parent, wFlags) {};

	~VirtualQGraphicsWidget() {
		qgraphicswidget_setgeometry_callback = nullptr;
		qgraphicswidget_getcontentsmargins_callback = nullptr;
		qgraphicswidget_type_callback = nullptr;
		qgraphicswidget_paint_callback = nullptr;
		qgraphicswidget_paintwindowframe_callback = nullptr;
		qgraphicswidget_boundingrect_callback = nullptr;
		qgraphicswidget_shape_callback = nullptr;
		qgraphicswidget_initstyleoption_callback = nullptr;
		qgraphicswidget_sizehint_callback = nullptr;
		qgraphicswidget_updategeometry_callback = nullptr;
		qgraphicswidget_itemchange_callback = nullptr;
		qgraphicswidget_propertychange_callback = nullptr;
		qgraphicswidget_sceneevent_callback = nullptr;
		qgraphicswidget_windowframeevent_callback = nullptr;
		qgraphicswidget_windowframesectionat_callback = nullptr;
		qgraphicswidget_event_callback = nullptr;
		qgraphicswidget_changeevent_callback = nullptr;
		qgraphicswidget_closeevent_callback = nullptr;
		qgraphicswidget_focusinevent_callback = nullptr;
		qgraphicswidget_focusnextprevchild_callback = nullptr;
		qgraphicswidget_focusoutevent_callback = nullptr;
		qgraphicswidget_hideevent_callback = nullptr;
		qgraphicswidget_moveevent_callback = nullptr;
		qgraphicswidget_polishevent_callback = nullptr;
		qgraphicswidget_resizeevent_callback = nullptr;
		qgraphicswidget_showevent_callback = nullptr;
		qgraphicswidget_hovermoveevent_callback = nullptr;
		qgraphicswidget_hoverleaveevent_callback = nullptr;
		qgraphicswidget_grabmouseevent_callback = nullptr;
		qgraphicswidget_ungrabmouseevent_callback = nullptr;
		qgraphicswidget_grabkeyboardevent_callback = nullptr;
		qgraphicswidget_ungrabkeyboardevent_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsWidget_SetGeometry_Callback(QGraphicsWidget_SetGeometry_Callback cb) const { qgraphicswidget_setgeometry_callback = cb; }
	inline void setQGraphicsWidget_GetContentsMargins_Callback(QGraphicsWidget_GetContentsMargins_Callback cb) const { qgraphicswidget_getcontentsmargins_callback = cb; }
	inline void setQGraphicsWidget_Type_Callback(QGraphicsWidget_Type_Callback cb) const { qgraphicswidget_type_callback = cb; }
	inline void setQGraphicsWidget_Paint_Callback(QGraphicsWidget_Paint_Callback cb) const { qgraphicswidget_paint_callback = cb; }
	inline void setQGraphicsWidget_PaintWindowFrame_Callback(QGraphicsWidget_PaintWindowFrame_Callback cb) const { qgraphicswidget_paintwindowframe_callback = cb; }
	inline void setQGraphicsWidget_BoundingRect_Callback(QGraphicsWidget_BoundingRect_Callback cb) const { qgraphicswidget_boundingrect_callback = cb; }
	inline void setQGraphicsWidget_Shape_Callback(QGraphicsWidget_Shape_Callback cb) const { qgraphicswidget_shape_callback = cb; }
	inline void setQGraphicsWidget_InitStyleOption_Callback(QGraphicsWidget_InitStyleOption_Callback cb) const { qgraphicswidget_initstyleoption_callback = cb; }
	inline void setQGraphicsWidget_SizeHint_Callback(QGraphicsWidget_SizeHint_Callback cb) const { qgraphicswidget_sizehint_callback = cb; }
	inline void setQGraphicsWidget_UpdateGeometry_Callback(QGraphicsWidget_UpdateGeometry_Callback cb) const { qgraphicswidget_updategeometry_callback = cb; }
	inline void setQGraphicsWidget_ItemChange_Callback(QGraphicsWidget_ItemChange_Callback cb) const { qgraphicswidget_itemchange_callback = cb; }
	inline void setQGraphicsWidget_PropertyChange_Callback(QGraphicsWidget_PropertyChange_Callback cb) const { qgraphicswidget_propertychange_callback = cb; }
	inline void setQGraphicsWidget_SceneEvent_Callback(QGraphicsWidget_SceneEvent_Callback cb) const { qgraphicswidget_sceneevent_callback = cb; }
	inline void setQGraphicsWidget_WindowFrameEvent_Callback(QGraphicsWidget_WindowFrameEvent_Callback cb) const { qgraphicswidget_windowframeevent_callback = cb; }
	inline void setQGraphicsWidget_WindowFrameSectionAt_Callback(QGraphicsWidget_WindowFrameSectionAt_Callback cb) const { qgraphicswidget_windowframesectionat_callback = cb; }
	inline void setQGraphicsWidget_Event_Callback(QGraphicsWidget_Event_Callback cb) const { qgraphicswidget_event_callback = cb; }
	inline void setQGraphicsWidget_ChangeEvent_Callback(QGraphicsWidget_ChangeEvent_Callback cb) const { qgraphicswidget_changeevent_callback = cb; }
	inline void setQGraphicsWidget_CloseEvent_Callback(QGraphicsWidget_CloseEvent_Callback cb) const { qgraphicswidget_closeevent_callback = cb; }
	inline void setQGraphicsWidget_FocusInEvent_Callback(QGraphicsWidget_FocusInEvent_Callback cb) const { qgraphicswidget_focusinevent_callback = cb; }
	inline void setQGraphicsWidget_FocusNextPrevChild_Callback(QGraphicsWidget_FocusNextPrevChild_Callback cb) const { qgraphicswidget_focusnextprevchild_callback = cb; }
	inline void setQGraphicsWidget_FocusOutEvent_Callback(QGraphicsWidget_FocusOutEvent_Callback cb) const { qgraphicswidget_focusoutevent_callback = cb; }
	inline void setQGraphicsWidget_HideEvent_Callback(QGraphicsWidget_HideEvent_Callback cb) const { qgraphicswidget_hideevent_callback = cb; }
	inline void setQGraphicsWidget_MoveEvent_Callback(QGraphicsWidget_MoveEvent_Callback cb) const { qgraphicswidget_moveevent_callback = cb; }
	inline void setQGraphicsWidget_PolishEvent_Callback(QGraphicsWidget_PolishEvent_Callback cb) const { qgraphicswidget_polishevent_callback = cb; }
	inline void setQGraphicsWidget_ResizeEvent_Callback(QGraphicsWidget_ResizeEvent_Callback cb) const { qgraphicswidget_resizeevent_callback = cb; }
	inline void setQGraphicsWidget_ShowEvent_Callback(QGraphicsWidget_ShowEvent_Callback cb) const { qgraphicswidget_showevent_callback = cb; }
	inline void setQGraphicsWidget_HoverMoveEvent_Callback(QGraphicsWidget_HoverMoveEvent_Callback cb) const { qgraphicswidget_hovermoveevent_callback = cb; }
	inline void setQGraphicsWidget_HoverLeaveEvent_Callback(QGraphicsWidget_HoverLeaveEvent_Callback cb) const { qgraphicswidget_hoverleaveevent_callback = cb; }
	inline void setQGraphicsWidget_GrabMouseEvent_Callback(QGraphicsWidget_GrabMouseEvent_Callback cb) const { qgraphicswidget_grabmouseevent_callback = cb; }
	inline void setQGraphicsWidget_UngrabMouseEvent_Callback(QGraphicsWidget_UngrabMouseEvent_Callback cb) const { qgraphicswidget_ungrabmouseevent_callback = cb; }
	inline void setQGraphicsWidget_GrabKeyboardEvent_Callback(QGraphicsWidget_GrabKeyboardEvent_Callback cb) const { qgraphicswidget_grabkeyboardevent_callback = cb; }
	inline void setQGraphicsWidget_UngrabKeyboardEvent_Callback(QGraphicsWidget_UngrabKeyboardEvent_Callback cb) const { qgraphicswidget_ungrabkeyboardevent_callback = cb; }

// Base flag setters
	inline void setQGraphicsWidget_SetGeometry_IsBase(bool value) const { qgraphicswidget_setgeometry_isbase = value; }
	inline void setQGraphicsWidget_GetContentsMargins_IsBase(bool value) const { qgraphicswidget_getcontentsmargins_isbase = value; }
	inline void setQGraphicsWidget_Type_IsBase(bool value) const { qgraphicswidget_type_isbase = value; }
	inline void setQGraphicsWidget_Paint_IsBase(bool value) const { qgraphicswidget_paint_isbase = value; }
	inline void setQGraphicsWidget_PaintWindowFrame_IsBase(bool value) const { qgraphicswidget_paintwindowframe_isbase = value; }
	inline void setQGraphicsWidget_BoundingRect_IsBase(bool value) const { qgraphicswidget_boundingrect_isbase = value; }
	inline void setQGraphicsWidget_Shape_IsBase(bool value) const { qgraphicswidget_shape_isbase = value; }
	inline void setQGraphicsWidget_InitStyleOption_IsBase(bool value) const { qgraphicswidget_initstyleoption_isbase = value; }
	inline void setQGraphicsWidget_SizeHint_IsBase(bool value) const { qgraphicswidget_sizehint_isbase = value; }
	inline void setQGraphicsWidget_UpdateGeometry_IsBase(bool value) const { qgraphicswidget_updategeometry_isbase = value; }
	inline void setQGraphicsWidget_ItemChange_IsBase(bool value) const { qgraphicswidget_itemchange_isbase = value; }
	inline void setQGraphicsWidget_PropertyChange_IsBase(bool value) const { qgraphicswidget_propertychange_isbase = value; }
	inline void setQGraphicsWidget_SceneEvent_IsBase(bool value) const { qgraphicswidget_sceneevent_isbase = value; }
	inline void setQGraphicsWidget_WindowFrameEvent_IsBase(bool value) const { qgraphicswidget_windowframeevent_isbase = value; }
	inline void setQGraphicsWidget_WindowFrameSectionAt_IsBase(bool value) const { qgraphicswidget_windowframesectionat_isbase = value; }
	inline void setQGraphicsWidget_Event_IsBase(bool value) const { qgraphicswidget_event_isbase = value; }
	inline void setQGraphicsWidget_ChangeEvent_IsBase(bool value) const { qgraphicswidget_changeevent_isbase = value; }
	inline void setQGraphicsWidget_CloseEvent_IsBase(bool value) const { qgraphicswidget_closeevent_isbase = value; }
	inline void setQGraphicsWidget_FocusInEvent_IsBase(bool value) const { qgraphicswidget_focusinevent_isbase = value; }
	inline void setQGraphicsWidget_FocusNextPrevChild_IsBase(bool value) const { qgraphicswidget_focusnextprevchild_isbase = value; }
	inline void setQGraphicsWidget_FocusOutEvent_IsBase(bool value) const { qgraphicswidget_focusoutevent_isbase = value; }
	inline void setQGraphicsWidget_HideEvent_IsBase(bool value) const { qgraphicswidget_hideevent_isbase = value; }
	inline void setQGraphicsWidget_MoveEvent_IsBase(bool value) const { qgraphicswidget_moveevent_isbase = value; }
	inline void setQGraphicsWidget_PolishEvent_IsBase(bool value) const { qgraphicswidget_polishevent_isbase = value; }
	inline void setQGraphicsWidget_ResizeEvent_IsBase(bool value) const { qgraphicswidget_resizeevent_isbase = value; }
	inline void setQGraphicsWidget_ShowEvent_IsBase(bool value) const { qgraphicswidget_showevent_isbase = value; }
	inline void setQGraphicsWidget_HoverMoveEvent_IsBase(bool value) const { qgraphicswidget_hovermoveevent_isbase = value; }
	inline void setQGraphicsWidget_HoverLeaveEvent_IsBase(bool value) const { qgraphicswidget_hoverleaveevent_isbase = value; }
	inline void setQGraphicsWidget_GrabMouseEvent_IsBase(bool value) const { qgraphicswidget_grabmouseevent_isbase = value; }
	inline void setQGraphicsWidget_UngrabMouseEvent_IsBase(bool value) const { qgraphicswidget_ungrabmouseevent_isbase = value; }
	inline void setQGraphicsWidget_GrabKeyboardEvent_IsBase(bool value) const { qgraphicswidget_grabkeyboardevent_isbase = value; }
	inline void setQGraphicsWidget_UngrabKeyboardEvent_IsBase(bool value) const { qgraphicswidget_ungrabkeyboardevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setGeometry(const QRectF& rect) override {
		if (qgraphicswidget_setgeometry_isbase) {
			qgraphicswidget_setgeometry_isbase = false;
			QGraphicsWidget::setGeometry(rect);
		} else if (qgraphicswidget_setgeometry_callback != nullptr) {
			const QRectF* cbval1 = (const QRectF*)&rect;
			qgraphicswidget_setgeometry_callback(this, cbval1);
		} else {
			QGraphicsWidget::setGeometry(rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (qgraphicswidget_getcontentsmargins_isbase) {
			qgraphicswidget_getcontentsmargins_isbase = false;
			QGraphicsWidget::getContentsMargins(left, top, right, bottom);
		} else if (qgraphicswidget_getcontentsmargins_callback != nullptr) {
			double* cbval1 = left;
			double* cbval2 = top;
			double* cbval3 = right;
			double* cbval4 = bottom;
			qgraphicswidget_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QGraphicsWidget::getContentsMargins(left, top, right, bottom);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicswidget_type_isbase) {
			qgraphicswidget_type_isbase = false;
			return QGraphicsWidget::type();
		} else if (qgraphicswidget_type_callback != nullptr) {
			int callback_ret = qgraphicswidget_type_callback();
			return callback_ret;
		} else {
			return QGraphicsWidget::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicswidget_paint_isbase) {
			qgraphicswidget_paint_isbase = false;
			QGraphicsWidget::paint(painter, option, widget);
		} else if (qgraphicswidget_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicswidget_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsWidget::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicswidget_paintwindowframe_isbase) {
			qgraphicswidget_paintwindowframe_isbase = false;
			QGraphicsWidget::paintWindowFrame(painter, option, widget);
		} else if (qgraphicswidget_paintwindowframe_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicswidget_paintwindowframe_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsWidget::paintWindowFrame(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicswidget_boundingrect_isbase) {
			qgraphicswidget_boundingrect_isbase = false;
			return QGraphicsWidget::boundingRect();
		} else if (qgraphicswidget_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicswidget_boundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsWidget::boundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath shape() const override {
		if (qgraphicswidget_shape_isbase) {
			qgraphicswidget_shape_isbase = false;
			return QGraphicsWidget::shape();
		} else if (qgraphicswidget_shape_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicswidget_shape_callback();
			return *callback_ret;
		} else {
			return QGraphicsWidget::shape();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOption* option) const override {
		if (qgraphicswidget_initstyleoption_isbase) {
			qgraphicswidget_initstyleoption_isbase = false;
			QGraphicsWidget::initStyleOption(option);
		} else if (qgraphicswidget_initstyleoption_callback != nullptr) {
			QStyleOption* cbval1 = option;
			qgraphicswidget_initstyleoption_callback(this, cbval1);
		} else {
			QGraphicsWidget::initStyleOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (qgraphicswidget_sizehint_isbase) {
			qgraphicswidget_sizehint_isbase = false;
			return QGraphicsWidget::sizeHint(which, constraint);
		} else if (qgraphicswidget_sizehint_callback != nullptr) {
			int cbval1 = static_cast<int>(which);
			const QSizeF* cbval2 = (const QSizeF*)&constraint;
			QSizeF* callback_ret = qgraphicswidget_sizehint_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QGraphicsWidget::sizeHint(which, constraint);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateGeometry() override {
		if (qgraphicswidget_updategeometry_isbase) {
			qgraphicswidget_updategeometry_isbase = false;
			QGraphicsWidget::updateGeometry();
		} else if (qgraphicswidget_updategeometry_callback != nullptr) {
			qgraphicswidget_updategeometry_callback();
		} else {
			QGraphicsWidget::updateGeometry();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant itemChange(GraphicsItemChange change, const QVariant& value) override {
		if (qgraphicswidget_itemchange_isbase) {
			qgraphicswidget_itemchange_isbase = false;
			return QGraphicsWidget::itemChange(change, value);
		} else if (qgraphicswidget_itemchange_callback != nullptr) {
			int cbval1 = static_cast<int>(change);
			const QVariant* cbval2 = (const QVariant*)&value;
			QVariant* callback_ret = qgraphicswidget_itemchange_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QGraphicsWidget::itemChange(change, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
		if (qgraphicswidget_propertychange_isbase) {
			qgraphicswidget_propertychange_isbase = false;
			return QGraphicsWidget::propertyChange(propertyName, value);
		} else if (qgraphicswidget_propertychange_callback != nullptr) {
			QByteArray propertyName_qb = propertyName.toUtf8();
			libqt_string cbval1;
			cbval1.len = propertyName_qb.length();
			cbval1.data = static_cast<const char*>(propertyName_qb.constData());
			const QVariant* cbval2 = (const QVariant*)&value;
			QVariant* callback_ret = qgraphicswidget_propertychange_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QGraphicsWidget::propertyChange(propertyName, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool sceneEvent(QEvent* event) override {
		if (qgraphicswidget_sceneevent_isbase) {
			qgraphicswidget_sceneevent_isbase = false;
			return QGraphicsWidget::sceneEvent(event);
		} else if (qgraphicswidget_sceneevent_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qgraphicswidget_sceneevent_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsWidget::sceneEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool windowFrameEvent(QEvent* e) override {
		if (qgraphicswidget_windowframeevent_isbase) {
			qgraphicswidget_windowframeevent_isbase = false;
			return QGraphicsWidget::windowFrameEvent(e);
		} else if (qgraphicswidget_windowframeevent_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qgraphicswidget_windowframeevent_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsWidget::windowFrameEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
		if (qgraphicswidget_windowframesectionat_isbase) {
			qgraphicswidget_windowframesectionat_isbase = false;
			return QGraphicsWidget::windowFrameSectionAt(pos);
		} else if (qgraphicswidget_windowframesectionat_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&pos;
			int callback_ret = qgraphicswidget_windowframesectionat_callback(this, cbval1);
			return static_cast<Qt::WindowFrameSection>(callback_ret);
		} else {
			return QGraphicsWidget::windowFrameSectionAt(pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qgraphicswidget_event_isbase) {
			qgraphicswidget_event_isbase = false;
			return QGraphicsWidget::event(event);
		} else if (qgraphicswidget_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qgraphicswidget_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsWidget::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* event) override {
		if (qgraphicswidget_changeevent_isbase) {
			qgraphicswidget_changeevent_isbase = false;
			QGraphicsWidget::changeEvent(event);
		} else if (qgraphicswidget_changeevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qgraphicswidget_changeevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::changeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void closeEvent(QCloseEvent* event) override {
		if (qgraphicswidget_closeevent_isbase) {
			qgraphicswidget_closeevent_isbase = false;
			QGraphicsWidget::closeEvent(event);
		} else if (qgraphicswidget_closeevent_callback != nullptr) {
			QCloseEvent* cbval1 = event;
			qgraphicswidget_closeevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::closeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* event) override {
		if (qgraphicswidget_focusinevent_isbase) {
			qgraphicswidget_focusinevent_isbase = false;
			QGraphicsWidget::focusInEvent(event);
		} else if (qgraphicswidget_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qgraphicswidget_focusinevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::focusInEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool focusNextPrevChild(bool next) override {
		if (qgraphicswidget_focusnextprevchild_isbase) {
			qgraphicswidget_focusnextprevchild_isbase = false;
			return QGraphicsWidget::focusNextPrevChild(next);
		} else if (qgraphicswidget_focusnextprevchild_callback != nullptr) {
			bool cbval1 = next;
			bool callback_ret = qgraphicswidget_focusnextprevchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsWidget::focusNextPrevChild(next);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (qgraphicswidget_focusoutevent_isbase) {
			qgraphicswidget_focusoutevent_isbase = false;
			QGraphicsWidget::focusOutEvent(event);
		} else if (qgraphicswidget_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qgraphicswidget_focusoutevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::focusOutEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hideEvent(QHideEvent* event) override {
		if (qgraphicswidget_hideevent_isbase) {
			qgraphicswidget_hideevent_isbase = false;
			QGraphicsWidget::hideEvent(event);
		} else if (qgraphicswidget_hideevent_callback != nullptr) {
			QHideEvent* cbval1 = event;
			qgraphicswidget_hideevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::hideEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
		if (qgraphicswidget_moveevent_isbase) {
			qgraphicswidget_moveevent_isbase = false;
			QGraphicsWidget::moveEvent(event);
		} else if (qgraphicswidget_moveevent_callback != nullptr) {
			QGraphicsSceneMoveEvent* cbval1 = event;
			qgraphicswidget_moveevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::moveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void polishEvent() override {
		if (qgraphicswidget_polishevent_isbase) {
			qgraphicswidget_polishevent_isbase = false;
			QGraphicsWidget::polishEvent();
		} else if (qgraphicswidget_polishevent_callback != nullptr) {
			qgraphicswidget_polishevent_callback();
		} else {
			QGraphicsWidget::polishEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (qgraphicswidget_resizeevent_isbase) {
			qgraphicswidget_resizeevent_isbase = false;
			QGraphicsWidget::resizeEvent(event);
		} else if (qgraphicswidget_resizeevent_callback != nullptr) {
			QGraphicsSceneResizeEvent* cbval1 = event;
			qgraphicswidget_resizeevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* event) override {
		if (qgraphicswidget_showevent_isbase) {
			qgraphicswidget_showevent_isbase = false;
			QGraphicsWidget::showEvent(event);
		} else if (qgraphicswidget_showevent_callback != nullptr) {
			QShowEvent* cbval1 = event;
			qgraphicswidget_showevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::showEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (qgraphicswidget_hovermoveevent_isbase) {
			qgraphicswidget_hovermoveevent_isbase = false;
			QGraphicsWidget::hoverMoveEvent(event);
		} else if (qgraphicswidget_hovermoveevent_callback != nullptr) {
			QGraphicsSceneHoverEvent* cbval1 = event;
			qgraphicswidget_hovermoveevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::hoverMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (qgraphicswidget_hoverleaveevent_isbase) {
			qgraphicswidget_hoverleaveevent_isbase = false;
			QGraphicsWidget::hoverLeaveEvent(event);
		} else if (qgraphicswidget_hoverleaveevent_callback != nullptr) {
			QGraphicsSceneHoverEvent* cbval1 = event;
			qgraphicswidget_hoverleaveevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::hoverLeaveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void grabMouseEvent(QEvent* event) override {
		if (qgraphicswidget_grabmouseevent_isbase) {
			qgraphicswidget_grabmouseevent_isbase = false;
			QGraphicsWidget::grabMouseEvent(event);
		} else if (qgraphicswidget_grabmouseevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qgraphicswidget_grabmouseevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::grabMouseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (qgraphicswidget_ungrabmouseevent_isbase) {
			qgraphicswidget_ungrabmouseevent_isbase = false;
			QGraphicsWidget::ungrabMouseEvent(event);
		} else if (qgraphicswidget_ungrabmouseevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qgraphicswidget_ungrabmouseevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::ungrabMouseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void grabKeyboardEvent(QEvent* event) override {
		if (qgraphicswidget_grabkeyboardevent_isbase) {
			qgraphicswidget_grabkeyboardevent_isbase = false;
			QGraphicsWidget::grabKeyboardEvent(event);
		} else if (qgraphicswidget_grabkeyboardevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qgraphicswidget_grabkeyboardevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::grabKeyboardEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void ungrabKeyboardEvent(QEvent* event) override {
		if (qgraphicswidget_ungrabkeyboardevent_isbase) {
			qgraphicswidget_ungrabkeyboardevent_isbase = false;
			QGraphicsWidget::ungrabKeyboardEvent(event);
		} else if (qgraphicswidget_ungrabkeyboardevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qgraphicswidget_ungrabkeyboardevent_callback(this, cbval1);
		} else {
			QGraphicsWidget::ungrabKeyboardEvent(event);
		}
	}

	// Friend functions
	friend void QGraphicsWidget_InitStyleOption(const QGraphicsWidget* self, QStyleOption* option);
	friend void QGraphicsWidget_QBaseInitStyleOption(const QGraphicsWidget* self, QStyleOption* option);
	friend QSizeF* QGraphicsWidget_SizeHint(const QGraphicsWidget* self, int which, const QSizeF* constraint);
	friend QSizeF* QGraphicsWidget_QBaseSizeHint(const QGraphicsWidget* self, int which, const QSizeF* constraint);
	friend void QGraphicsWidget_UpdateGeometry(QGraphicsWidget* self);
	friend void QGraphicsWidget_QBaseUpdateGeometry(QGraphicsWidget* self);
	friend QVariant* QGraphicsWidget_ItemChange(QGraphicsWidget* self, int change, const QVariant* value);
	friend QVariant* QGraphicsWidget_QBaseItemChange(QGraphicsWidget* self, int change, const QVariant* value);
	friend QVariant* QGraphicsWidget_PropertyChange(QGraphicsWidget* self, const libqt_string propertyName, const QVariant* value);
	friend QVariant* QGraphicsWidget_QBasePropertyChange(QGraphicsWidget* self, const libqt_string propertyName, const QVariant* value);
	friend bool QGraphicsWidget_SceneEvent(QGraphicsWidget* self, QEvent* event);
	friend bool QGraphicsWidget_QBaseSceneEvent(QGraphicsWidget* self, QEvent* event);
	friend bool QGraphicsWidget_WindowFrameEvent(QGraphicsWidget* self, QEvent* e);
	friend bool QGraphicsWidget_QBaseWindowFrameEvent(QGraphicsWidget* self, QEvent* e);
	friend int QGraphicsWidget_WindowFrameSectionAt(const QGraphicsWidget* self, const QPointF* pos);
	friend int QGraphicsWidget_QBaseWindowFrameSectionAt(const QGraphicsWidget* self, const QPointF* pos);
	friend bool QGraphicsWidget_Event(QGraphicsWidget* self, QEvent* event);
	friend bool QGraphicsWidget_QBaseEvent(QGraphicsWidget* self, QEvent* event);
	friend void QGraphicsWidget_ChangeEvent(QGraphicsWidget* self, QEvent* event);
	friend void QGraphicsWidget_QBaseChangeEvent(QGraphicsWidget* self, QEvent* event);
	friend void QGraphicsWidget_CloseEvent(QGraphicsWidget* self, QCloseEvent* event);
	friend void QGraphicsWidget_QBaseCloseEvent(QGraphicsWidget* self, QCloseEvent* event);
	friend void QGraphicsWidget_FocusInEvent(QGraphicsWidget* self, QFocusEvent* event);
	friend void QGraphicsWidget_QBaseFocusInEvent(QGraphicsWidget* self, QFocusEvent* event);
	friend bool QGraphicsWidget_FocusNextPrevChild(QGraphicsWidget* self, bool next);
	friend bool QGraphicsWidget_QBaseFocusNextPrevChild(QGraphicsWidget* self, bool next);
	friend void QGraphicsWidget_FocusOutEvent(QGraphicsWidget* self, QFocusEvent* event);
	friend void QGraphicsWidget_QBaseFocusOutEvent(QGraphicsWidget* self, QFocusEvent* event);
	friend void QGraphicsWidget_HideEvent(QGraphicsWidget* self, QHideEvent* event);
	friend void QGraphicsWidget_QBaseHideEvent(QGraphicsWidget* self, QHideEvent* event);
	friend void QGraphicsWidget_MoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event);
	friend void QGraphicsWidget_QBaseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event);
	friend void QGraphicsWidget_PolishEvent(QGraphicsWidget* self);
	friend void QGraphicsWidget_QBasePolishEvent(QGraphicsWidget* self);
	friend void QGraphicsWidget_ResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event);
	friend void QGraphicsWidget_QBaseResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event);
	friend void QGraphicsWidget_ShowEvent(QGraphicsWidget* self, QShowEvent* event);
	friend void QGraphicsWidget_QBaseShowEvent(QGraphicsWidget* self, QShowEvent* event);
	friend void QGraphicsWidget_HoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsWidget_QBaseHoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsWidget_HoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsWidget_QBaseHoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsWidget_GrabMouseEvent(QGraphicsWidget* self, QEvent* event);
	friend void QGraphicsWidget_QBaseGrabMouseEvent(QGraphicsWidget* self, QEvent* event);
	friend void QGraphicsWidget_UngrabMouseEvent(QGraphicsWidget* self, QEvent* event);
	friend void QGraphicsWidget_QBaseUngrabMouseEvent(QGraphicsWidget* self, QEvent* event);
	friend void QGraphicsWidget_GrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
	friend void QGraphicsWidget_QBaseGrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
	friend void QGraphicsWidget_UngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
	friend void QGraphicsWidget_QBaseUngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
};

#endif


