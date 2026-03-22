#pragma once
#ifndef QGRAPHICSPROXYWIDGET_H_C_LIBVIRTUAL
#define QGRAPHICSPROXYWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGraphicsProxyWidget so that we can call protected methods
class VirtualQGraphicsProxyWidget final : public QGraphicsProxyWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsProxyWidget= true;

	// Virtual class public types (including callbacks)
	using QGraphicsProxyWidget_SetGeometry_Callback = void (*)(QGraphicsProxyWidget*, const QRectF*);
	using QGraphicsProxyWidget_Paint_Callback = void (*)(QGraphicsProxyWidget*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsProxyWidget_Type_Callback = int (*)();
	using QGraphicsProxyWidget_ItemChange_Callback = QVariant* (*)(QGraphicsProxyWidget*, int, const QVariant*);
	using QGraphicsProxyWidget_Event_Callback = bool (*)(QGraphicsProxyWidget*, QEvent*);
	using QGraphicsProxyWidget_EventFilter_Callback = bool (*)(QGraphicsProxyWidget*, QObject*, QEvent*);
	using QGraphicsProxyWidget_ShowEvent_Callback = void (*)(QGraphicsProxyWidget*, QShowEvent*);
	using QGraphicsProxyWidget_HideEvent_Callback = void (*)(QGraphicsProxyWidget*, QHideEvent*);
	using QGraphicsProxyWidget_ContextMenuEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneContextMenuEvent*);
	using QGraphicsProxyWidget_DragEnterEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
	using QGraphicsProxyWidget_DragLeaveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
	using QGraphicsProxyWidget_DragMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
	using QGraphicsProxyWidget_DropEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
	using QGraphicsProxyWidget_HoverEnterEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
	using QGraphicsProxyWidget_HoverLeaveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
	using QGraphicsProxyWidget_HoverMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
	using QGraphicsProxyWidget_GrabMouseEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
	using QGraphicsProxyWidget_UngrabMouseEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
	using QGraphicsProxyWidget_MouseMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
	using QGraphicsProxyWidget_MousePressEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
	using QGraphicsProxyWidget_MouseReleaseEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
	using QGraphicsProxyWidget_MouseDoubleClickEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
	using QGraphicsProxyWidget_WheelEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneWheelEvent*);
	using QGraphicsProxyWidget_KeyPressEvent_Callback = void (*)(QGraphicsProxyWidget*, QKeyEvent*);
	using QGraphicsProxyWidget_KeyReleaseEvent_Callback = void (*)(QGraphicsProxyWidget*, QKeyEvent*);
	using QGraphicsProxyWidget_FocusInEvent_Callback = void (*)(QGraphicsProxyWidget*, QFocusEvent*);
	using QGraphicsProxyWidget_FocusOutEvent_Callback = void (*)(QGraphicsProxyWidget*, QFocusEvent*);
	using QGraphicsProxyWidget_FocusNextPrevChild_Callback = bool (*)(QGraphicsProxyWidget*, bool);
	using QGraphicsProxyWidget_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsProxyWidget*, int);
	using QGraphicsProxyWidget_InputMethodEvent_Callback = void (*)(QGraphicsProxyWidget*, QInputMethodEvent*);
	using QGraphicsProxyWidget_SizeHint_Callback = QSizeF* (*)(const QGraphicsProxyWidget*, int, const QSizeF*);
	using QGraphicsProxyWidget_ResizeEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneResizeEvent*);
	using QGraphicsProxyWidget_NewProxyWidget_Callback = QGraphicsProxyWidget* (*)(QGraphicsProxyWidget*, const QWidget*);

protected:
	// Instance callback storage
	mutable QGraphicsProxyWidget_SetGeometry_Callback qgraphicsproxywidget_setgeometry_callback = nullptr;
	mutable QGraphicsProxyWidget_Paint_Callback qgraphicsproxywidget_paint_callback = nullptr;
	mutable QGraphicsProxyWidget_Type_Callback qgraphicsproxywidget_type_callback = nullptr;
	mutable QGraphicsProxyWidget_ItemChange_Callback qgraphicsproxywidget_itemchange_callback = nullptr;
	mutable QGraphicsProxyWidget_Event_Callback qgraphicsproxywidget_event_callback = nullptr;
	mutable QGraphicsProxyWidget_EventFilter_Callback qgraphicsproxywidget_eventfilter_callback = nullptr;
	mutable QGraphicsProxyWidget_ShowEvent_Callback qgraphicsproxywidget_showevent_callback = nullptr;
	mutable QGraphicsProxyWidget_HideEvent_Callback qgraphicsproxywidget_hideevent_callback = nullptr;
	mutable QGraphicsProxyWidget_ContextMenuEvent_Callback qgraphicsproxywidget_contextmenuevent_callback = nullptr;
	mutable QGraphicsProxyWidget_DragEnterEvent_Callback qgraphicsproxywidget_dragenterevent_callback = nullptr;
	mutable QGraphicsProxyWidget_DragLeaveEvent_Callback qgraphicsproxywidget_dragleaveevent_callback = nullptr;
	mutable QGraphicsProxyWidget_DragMoveEvent_Callback qgraphicsproxywidget_dragmoveevent_callback = nullptr;
	mutable QGraphicsProxyWidget_DropEvent_Callback qgraphicsproxywidget_dropevent_callback = nullptr;
	mutable QGraphicsProxyWidget_HoverEnterEvent_Callback qgraphicsproxywidget_hoverenterevent_callback = nullptr;
	mutable QGraphicsProxyWidget_HoverLeaveEvent_Callback qgraphicsproxywidget_hoverleaveevent_callback = nullptr;
	mutable QGraphicsProxyWidget_HoverMoveEvent_Callback qgraphicsproxywidget_hovermoveevent_callback = nullptr;
	mutable QGraphicsProxyWidget_GrabMouseEvent_Callback qgraphicsproxywidget_grabmouseevent_callback = nullptr;
	mutable QGraphicsProxyWidget_UngrabMouseEvent_Callback qgraphicsproxywidget_ungrabmouseevent_callback = nullptr;
	mutable QGraphicsProxyWidget_MouseMoveEvent_Callback qgraphicsproxywidget_mousemoveevent_callback = nullptr;
	mutable QGraphicsProxyWidget_MousePressEvent_Callback qgraphicsproxywidget_mousepressevent_callback = nullptr;
	mutable QGraphicsProxyWidget_MouseReleaseEvent_Callback qgraphicsproxywidget_mousereleaseevent_callback = nullptr;
	mutable QGraphicsProxyWidget_MouseDoubleClickEvent_Callback qgraphicsproxywidget_mousedoubleclickevent_callback = nullptr;
	mutable QGraphicsProxyWidget_WheelEvent_Callback qgraphicsproxywidget_wheelevent_callback = nullptr;
	mutable QGraphicsProxyWidget_KeyPressEvent_Callback qgraphicsproxywidget_keypressevent_callback = nullptr;
	mutable QGraphicsProxyWidget_KeyReleaseEvent_Callback qgraphicsproxywidget_keyreleaseevent_callback = nullptr;
	mutable QGraphicsProxyWidget_FocusInEvent_Callback qgraphicsproxywidget_focusinevent_callback = nullptr;
	mutable QGraphicsProxyWidget_FocusOutEvent_Callback qgraphicsproxywidget_focusoutevent_callback = nullptr;
	mutable QGraphicsProxyWidget_FocusNextPrevChild_Callback qgraphicsproxywidget_focusnextprevchild_callback = nullptr;
	mutable QGraphicsProxyWidget_InputMethodQuery_Callback qgraphicsproxywidget_inputmethodquery_callback = nullptr;
	mutable QGraphicsProxyWidget_InputMethodEvent_Callback qgraphicsproxywidget_inputmethodevent_callback = nullptr;
	mutable QGraphicsProxyWidget_SizeHint_Callback qgraphicsproxywidget_sizehint_callback = nullptr;
	mutable QGraphicsProxyWidget_ResizeEvent_Callback qgraphicsproxywidget_resizeevent_callback = nullptr;
	mutable QGraphicsProxyWidget_NewProxyWidget_Callback qgraphicsproxywidget_newproxywidget_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsproxywidget_setgeometry_isbase = false;
    mutable bool qgraphicsproxywidget_paint_isbase = false;
    mutable bool qgraphicsproxywidget_type_isbase = false;
    mutable bool qgraphicsproxywidget_itemchange_isbase = false;
    mutable bool qgraphicsproxywidget_event_isbase = false;
    mutable bool qgraphicsproxywidget_eventfilter_isbase = false;
    mutable bool qgraphicsproxywidget_showevent_isbase = false;
    mutable bool qgraphicsproxywidget_hideevent_isbase = false;
    mutable bool qgraphicsproxywidget_contextmenuevent_isbase = false;
    mutable bool qgraphicsproxywidget_dragenterevent_isbase = false;
    mutable bool qgraphicsproxywidget_dragleaveevent_isbase = false;
    mutable bool qgraphicsproxywidget_dragmoveevent_isbase = false;
    mutable bool qgraphicsproxywidget_dropevent_isbase = false;
    mutable bool qgraphicsproxywidget_hoverenterevent_isbase = false;
    mutable bool qgraphicsproxywidget_hoverleaveevent_isbase = false;
    mutable bool qgraphicsproxywidget_hovermoveevent_isbase = false;
    mutable bool qgraphicsproxywidget_grabmouseevent_isbase = false;
    mutable bool qgraphicsproxywidget_ungrabmouseevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousemoveevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousepressevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousereleaseevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsproxywidget_wheelevent_isbase = false;
    mutable bool qgraphicsproxywidget_keypressevent_isbase = false;
    mutable bool qgraphicsproxywidget_keyreleaseevent_isbase = false;
    mutable bool qgraphicsproxywidget_focusinevent_isbase = false;
    mutable bool qgraphicsproxywidget_focusoutevent_isbase = false;
    mutable bool qgraphicsproxywidget_focusnextprevchild_isbase = false;
    mutable bool qgraphicsproxywidget_inputmethodquery_isbase = false;
    mutable bool qgraphicsproxywidget_inputmethodevent_isbase = false;
    mutable bool qgraphicsproxywidget_sizehint_isbase = false;
    mutable bool qgraphicsproxywidget_resizeevent_isbase = false;
    mutable bool qgraphicsproxywidget_newproxywidget_isbase = false;

public:
	VirtualQGraphicsProxyWidget(): QGraphicsProxyWidget() {};
	VirtualQGraphicsProxyWidget(QGraphicsItem* parent): QGraphicsProxyWidget(parent) {};
	VirtualQGraphicsProxyWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags): QGraphicsProxyWidget(parent, wFlags) {};

	~VirtualQGraphicsProxyWidget() {
		qgraphicsproxywidget_setgeometry_callback = nullptr;
		qgraphicsproxywidget_paint_callback = nullptr;
		qgraphicsproxywidget_type_callback = nullptr;
		qgraphicsproxywidget_itemchange_callback = nullptr;
		qgraphicsproxywidget_event_callback = nullptr;
		qgraphicsproxywidget_eventfilter_callback = nullptr;
		qgraphicsproxywidget_showevent_callback = nullptr;
		qgraphicsproxywidget_hideevent_callback = nullptr;
		qgraphicsproxywidget_contextmenuevent_callback = nullptr;
		qgraphicsproxywidget_dragenterevent_callback = nullptr;
		qgraphicsproxywidget_dragleaveevent_callback = nullptr;
		qgraphicsproxywidget_dragmoveevent_callback = nullptr;
		qgraphicsproxywidget_dropevent_callback = nullptr;
		qgraphicsproxywidget_hoverenterevent_callback = nullptr;
		qgraphicsproxywidget_hoverleaveevent_callback = nullptr;
		qgraphicsproxywidget_hovermoveevent_callback = nullptr;
		qgraphicsproxywidget_grabmouseevent_callback = nullptr;
		qgraphicsproxywidget_ungrabmouseevent_callback = nullptr;
		qgraphicsproxywidget_mousemoveevent_callback = nullptr;
		qgraphicsproxywidget_mousepressevent_callback = nullptr;
		qgraphicsproxywidget_mousereleaseevent_callback = nullptr;
		qgraphicsproxywidget_mousedoubleclickevent_callback = nullptr;
		qgraphicsproxywidget_wheelevent_callback = nullptr;
		qgraphicsproxywidget_keypressevent_callback = nullptr;
		qgraphicsproxywidget_keyreleaseevent_callback = nullptr;
		qgraphicsproxywidget_focusinevent_callback = nullptr;
		qgraphicsproxywidget_focusoutevent_callback = nullptr;
		qgraphicsproxywidget_focusnextprevchild_callback = nullptr;
		qgraphicsproxywidget_inputmethodquery_callback = nullptr;
		qgraphicsproxywidget_inputmethodevent_callback = nullptr;
		qgraphicsproxywidget_sizehint_callback = nullptr;
		qgraphicsproxywidget_resizeevent_callback = nullptr;
		qgraphicsproxywidget_newproxywidget_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsProxyWidget_SetGeometry_Callback(QGraphicsProxyWidget_SetGeometry_Callback cb) const { qgraphicsproxywidget_setgeometry_callback = cb; }
	inline void setQGraphicsProxyWidget_Paint_Callback(QGraphicsProxyWidget_Paint_Callback cb) const { qgraphicsproxywidget_paint_callback = cb; }
	inline void setQGraphicsProxyWidget_Type_Callback(QGraphicsProxyWidget_Type_Callback cb) const { qgraphicsproxywidget_type_callback = cb; }
	inline void setQGraphicsProxyWidget_ItemChange_Callback(QGraphicsProxyWidget_ItemChange_Callback cb) const { qgraphicsproxywidget_itemchange_callback = cb; }
	inline void setQGraphicsProxyWidget_Event_Callback(QGraphicsProxyWidget_Event_Callback cb) const { qgraphicsproxywidget_event_callback = cb; }
	inline void setQGraphicsProxyWidget_EventFilter_Callback(QGraphicsProxyWidget_EventFilter_Callback cb) const { qgraphicsproxywidget_eventfilter_callback = cb; }
	inline void setQGraphicsProxyWidget_ShowEvent_Callback(QGraphicsProxyWidget_ShowEvent_Callback cb) const { qgraphicsproxywidget_showevent_callback = cb; }
	inline void setQGraphicsProxyWidget_HideEvent_Callback(QGraphicsProxyWidget_HideEvent_Callback cb) const { qgraphicsproxywidget_hideevent_callback = cb; }
	inline void setQGraphicsProxyWidget_ContextMenuEvent_Callback(QGraphicsProxyWidget_ContextMenuEvent_Callback cb) const { qgraphicsproxywidget_contextmenuevent_callback = cb; }
	inline void setQGraphicsProxyWidget_DragEnterEvent_Callback(QGraphicsProxyWidget_DragEnterEvent_Callback cb) const { qgraphicsproxywidget_dragenterevent_callback = cb; }
	inline void setQGraphicsProxyWidget_DragLeaveEvent_Callback(QGraphicsProxyWidget_DragLeaveEvent_Callback cb) const { qgraphicsproxywidget_dragleaveevent_callback = cb; }
	inline void setQGraphicsProxyWidget_DragMoveEvent_Callback(QGraphicsProxyWidget_DragMoveEvent_Callback cb) const { qgraphicsproxywidget_dragmoveevent_callback = cb; }
	inline void setQGraphicsProxyWidget_DropEvent_Callback(QGraphicsProxyWidget_DropEvent_Callback cb) const { qgraphicsproxywidget_dropevent_callback = cb; }
	inline void setQGraphicsProxyWidget_HoverEnterEvent_Callback(QGraphicsProxyWidget_HoverEnterEvent_Callback cb) const { qgraphicsproxywidget_hoverenterevent_callback = cb; }
	inline void setQGraphicsProxyWidget_HoverLeaveEvent_Callback(QGraphicsProxyWidget_HoverLeaveEvent_Callback cb) const { qgraphicsproxywidget_hoverleaveevent_callback = cb; }
	inline void setQGraphicsProxyWidget_HoverMoveEvent_Callback(QGraphicsProxyWidget_HoverMoveEvent_Callback cb) const { qgraphicsproxywidget_hovermoveevent_callback = cb; }
	inline void setQGraphicsProxyWidget_GrabMouseEvent_Callback(QGraphicsProxyWidget_GrabMouseEvent_Callback cb) const { qgraphicsproxywidget_grabmouseevent_callback = cb; }
	inline void setQGraphicsProxyWidget_UngrabMouseEvent_Callback(QGraphicsProxyWidget_UngrabMouseEvent_Callback cb) const { qgraphicsproxywidget_ungrabmouseevent_callback = cb; }
	inline void setQGraphicsProxyWidget_MouseMoveEvent_Callback(QGraphicsProxyWidget_MouseMoveEvent_Callback cb) const { qgraphicsproxywidget_mousemoveevent_callback = cb; }
	inline void setQGraphicsProxyWidget_MousePressEvent_Callback(QGraphicsProxyWidget_MousePressEvent_Callback cb) const { qgraphicsproxywidget_mousepressevent_callback = cb; }
	inline void setQGraphicsProxyWidget_MouseReleaseEvent_Callback(QGraphicsProxyWidget_MouseReleaseEvent_Callback cb) const { qgraphicsproxywidget_mousereleaseevent_callback = cb; }
	inline void setQGraphicsProxyWidget_MouseDoubleClickEvent_Callback(QGraphicsProxyWidget_MouseDoubleClickEvent_Callback cb) const { qgraphicsproxywidget_mousedoubleclickevent_callback = cb; }
	inline void setQGraphicsProxyWidget_WheelEvent_Callback(QGraphicsProxyWidget_WheelEvent_Callback cb) const { qgraphicsproxywidget_wheelevent_callback = cb; }
	inline void setQGraphicsProxyWidget_KeyPressEvent_Callback(QGraphicsProxyWidget_KeyPressEvent_Callback cb) const { qgraphicsproxywidget_keypressevent_callback = cb; }
	inline void setQGraphicsProxyWidget_KeyReleaseEvent_Callback(QGraphicsProxyWidget_KeyReleaseEvent_Callback cb) const { qgraphicsproxywidget_keyreleaseevent_callback = cb; }
	inline void setQGraphicsProxyWidget_FocusInEvent_Callback(QGraphicsProxyWidget_FocusInEvent_Callback cb) const { qgraphicsproxywidget_focusinevent_callback = cb; }
	inline void setQGraphicsProxyWidget_FocusOutEvent_Callback(QGraphicsProxyWidget_FocusOutEvent_Callback cb) const { qgraphicsproxywidget_focusoutevent_callback = cb; }
	inline void setQGraphicsProxyWidget_FocusNextPrevChild_Callback(QGraphicsProxyWidget_FocusNextPrevChild_Callback cb) const { qgraphicsproxywidget_focusnextprevchild_callback = cb; }
	inline void setQGraphicsProxyWidget_InputMethodQuery_Callback(QGraphicsProxyWidget_InputMethodQuery_Callback cb) const { qgraphicsproxywidget_inputmethodquery_callback = cb; }
	inline void setQGraphicsProxyWidget_InputMethodEvent_Callback(QGraphicsProxyWidget_InputMethodEvent_Callback cb) const { qgraphicsproxywidget_inputmethodevent_callback = cb; }
	inline void setQGraphicsProxyWidget_SizeHint_Callback(QGraphicsProxyWidget_SizeHint_Callback cb) const { qgraphicsproxywidget_sizehint_callback = cb; }
	inline void setQGraphicsProxyWidget_ResizeEvent_Callback(QGraphicsProxyWidget_ResizeEvent_Callback cb) const { qgraphicsproxywidget_resizeevent_callback = cb; }
	inline void setQGraphicsProxyWidget_NewProxyWidget_Callback(QGraphicsProxyWidget_NewProxyWidget_Callback cb) const { qgraphicsproxywidget_newproxywidget_callback = cb; }

// Base flag setters
	inline void setQGraphicsProxyWidget_SetGeometry_IsBase(bool value) const { qgraphicsproxywidget_setgeometry_isbase = value; }
	inline void setQGraphicsProxyWidget_Paint_IsBase(bool value) const { qgraphicsproxywidget_paint_isbase = value; }
	inline void setQGraphicsProxyWidget_Type_IsBase(bool value) const { qgraphicsproxywidget_type_isbase = value; }
	inline void setQGraphicsProxyWidget_ItemChange_IsBase(bool value) const { qgraphicsproxywidget_itemchange_isbase = value; }
	inline void setQGraphicsProxyWidget_Event_IsBase(bool value) const { qgraphicsproxywidget_event_isbase = value; }
	inline void setQGraphicsProxyWidget_EventFilter_IsBase(bool value) const { qgraphicsproxywidget_eventfilter_isbase = value; }
	inline void setQGraphicsProxyWidget_ShowEvent_IsBase(bool value) const { qgraphicsproxywidget_showevent_isbase = value; }
	inline void setQGraphicsProxyWidget_HideEvent_IsBase(bool value) const { qgraphicsproxywidget_hideevent_isbase = value; }
	inline void setQGraphicsProxyWidget_ContextMenuEvent_IsBase(bool value) const { qgraphicsproxywidget_contextmenuevent_isbase = value; }
	inline void setQGraphicsProxyWidget_DragEnterEvent_IsBase(bool value) const { qgraphicsproxywidget_dragenterevent_isbase = value; }
	inline void setQGraphicsProxyWidget_DragLeaveEvent_IsBase(bool value) const { qgraphicsproxywidget_dragleaveevent_isbase = value; }
	inline void setQGraphicsProxyWidget_DragMoveEvent_IsBase(bool value) const { qgraphicsproxywidget_dragmoveevent_isbase = value; }
	inline void setQGraphicsProxyWidget_DropEvent_IsBase(bool value) const { qgraphicsproxywidget_dropevent_isbase = value; }
	inline void setQGraphicsProxyWidget_HoverEnterEvent_IsBase(bool value) const { qgraphicsproxywidget_hoverenterevent_isbase = value; }
	inline void setQGraphicsProxyWidget_HoverLeaveEvent_IsBase(bool value) const { qgraphicsproxywidget_hoverleaveevent_isbase = value; }
	inline void setQGraphicsProxyWidget_HoverMoveEvent_IsBase(bool value) const { qgraphicsproxywidget_hovermoveevent_isbase = value; }
	inline void setQGraphicsProxyWidget_GrabMouseEvent_IsBase(bool value) const { qgraphicsproxywidget_grabmouseevent_isbase = value; }
	inline void setQGraphicsProxyWidget_UngrabMouseEvent_IsBase(bool value) const { qgraphicsproxywidget_ungrabmouseevent_isbase = value; }
	inline void setQGraphicsProxyWidget_MouseMoveEvent_IsBase(bool value) const { qgraphicsproxywidget_mousemoveevent_isbase = value; }
	inline void setQGraphicsProxyWidget_MousePressEvent_IsBase(bool value) const { qgraphicsproxywidget_mousepressevent_isbase = value; }
	inline void setQGraphicsProxyWidget_MouseReleaseEvent_IsBase(bool value) const { qgraphicsproxywidget_mousereleaseevent_isbase = value; }
	inline void setQGraphicsProxyWidget_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsproxywidget_mousedoubleclickevent_isbase = value; }
	inline void setQGraphicsProxyWidget_WheelEvent_IsBase(bool value) const { qgraphicsproxywidget_wheelevent_isbase = value; }
	inline void setQGraphicsProxyWidget_KeyPressEvent_IsBase(bool value) const { qgraphicsproxywidget_keypressevent_isbase = value; }
	inline void setQGraphicsProxyWidget_KeyReleaseEvent_IsBase(bool value) const { qgraphicsproxywidget_keyreleaseevent_isbase = value; }
	inline void setQGraphicsProxyWidget_FocusInEvent_IsBase(bool value) const { qgraphicsproxywidget_focusinevent_isbase = value; }
	inline void setQGraphicsProxyWidget_FocusOutEvent_IsBase(bool value) const { qgraphicsproxywidget_focusoutevent_isbase = value; }
	inline void setQGraphicsProxyWidget_FocusNextPrevChild_IsBase(bool value) const { qgraphicsproxywidget_focusnextprevchild_isbase = value; }
	inline void setQGraphicsProxyWidget_InputMethodQuery_IsBase(bool value) const { qgraphicsproxywidget_inputmethodquery_isbase = value; }
	inline void setQGraphicsProxyWidget_InputMethodEvent_IsBase(bool value) const { qgraphicsproxywidget_inputmethodevent_isbase = value; }
	inline void setQGraphicsProxyWidget_SizeHint_IsBase(bool value) const { qgraphicsproxywidget_sizehint_isbase = value; }
	inline void setQGraphicsProxyWidget_ResizeEvent_IsBase(bool value) const { qgraphicsproxywidget_resizeevent_isbase = value; }
	inline void setQGraphicsProxyWidget_NewProxyWidget_IsBase(bool value) const { qgraphicsproxywidget_newproxywidget_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setGeometry(const QRectF& rect) override {
		if (qgraphicsproxywidget_setgeometry_isbase) {
			qgraphicsproxywidget_setgeometry_isbase = false;
			QGraphicsProxyWidget::setGeometry(rect);
		} else if (qgraphicsproxywidget_setgeometry_callback != nullptr) {
			const QRectF* cbval1 = (const QRectF*)&rect;
			qgraphicsproxywidget_setgeometry_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::setGeometry(rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicsproxywidget_paint_isbase) {
			qgraphicsproxywidget_paint_isbase = false;
			QGraphicsProxyWidget::paint(painter, option, widget);
		} else if (qgraphicsproxywidget_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicsproxywidget_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsProxyWidget::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicsproxywidget_type_isbase) {
			qgraphicsproxywidget_type_isbase = false;
			return QGraphicsProxyWidget::type();
		} else if (qgraphicsproxywidget_type_callback != nullptr) {
			int callback_ret = qgraphicsproxywidget_type_callback();
			return callback_ret;
		} else {
			return QGraphicsProxyWidget::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant itemChange(GraphicsItemChange change, const QVariant& value) override {
		if (qgraphicsproxywidget_itemchange_isbase) {
			qgraphicsproxywidget_itemchange_isbase = false;
			return QGraphicsProxyWidget::itemChange(change, value);
		} else if (qgraphicsproxywidget_itemchange_callback != nullptr) {
			int cbval1 = static_cast<int>(change);
			const QVariant* cbval2 = (const QVariant*)&value;
			QVariant* callback_ret = qgraphicsproxywidget_itemchange_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QGraphicsProxyWidget::itemChange(change, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qgraphicsproxywidget_event_isbase) {
			qgraphicsproxywidget_event_isbase = false;
			return QGraphicsProxyWidget::event(event);
		} else if (qgraphicsproxywidget_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qgraphicsproxywidget_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsProxyWidget::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (qgraphicsproxywidget_eventfilter_isbase) {
			qgraphicsproxywidget_eventfilter_isbase = false;
			return QGraphicsProxyWidget::eventFilter(object, event);
		} else if (qgraphicsproxywidget_eventfilter_callback != nullptr) {
			QObject* cbval1 = object;
			QEvent* cbval2 = event;
			bool callback_ret = qgraphicsproxywidget_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QGraphicsProxyWidget::eventFilter(object, event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* event) override {
		if (qgraphicsproxywidget_showevent_isbase) {
			qgraphicsproxywidget_showevent_isbase = false;
			QGraphicsProxyWidget::showEvent(event);
		} else if (qgraphicsproxywidget_showevent_callback != nullptr) {
			QShowEvent* cbval1 = event;
			qgraphicsproxywidget_showevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::showEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hideEvent(QHideEvent* event) override {
		if (qgraphicsproxywidget_hideevent_isbase) {
			qgraphicsproxywidget_hideevent_isbase = false;
			QGraphicsProxyWidget::hideEvent(event);
		} else if (qgraphicsproxywidget_hideevent_callback != nullptr) {
			QHideEvent* cbval1 = event;
			qgraphicsproxywidget_hideevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::hideEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (qgraphicsproxywidget_contextmenuevent_isbase) {
			qgraphicsproxywidget_contextmenuevent_isbase = false;
			QGraphicsProxyWidget::contextMenuEvent(event);
		} else if (qgraphicsproxywidget_contextmenuevent_callback != nullptr) {
			QGraphicsSceneContextMenuEvent* cbval1 = event;
			qgraphicsproxywidget_contextmenuevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::contextMenuEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicsproxywidget_dragenterevent_isbase) {
			qgraphicsproxywidget_dragenterevent_isbase = false;
			QGraphicsProxyWidget::dragEnterEvent(event);
		} else if (qgraphicsproxywidget_dragenterevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicsproxywidget_dragenterevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::dragEnterEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicsproxywidget_dragleaveevent_isbase) {
			qgraphicsproxywidget_dragleaveevent_isbase = false;
			QGraphicsProxyWidget::dragLeaveEvent(event);
		} else if (qgraphicsproxywidget_dragleaveevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicsproxywidget_dragleaveevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::dragLeaveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicsproxywidget_dragmoveevent_isbase) {
			qgraphicsproxywidget_dragmoveevent_isbase = false;
			QGraphicsProxyWidget::dragMoveEvent(event);
		} else if (qgraphicsproxywidget_dragmoveevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicsproxywidget_dragmoveevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::dragMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicsproxywidget_dropevent_isbase) {
			qgraphicsproxywidget_dropevent_isbase = false;
			QGraphicsProxyWidget::dropEvent(event);
		} else if (qgraphicsproxywidget_dropevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicsproxywidget_dropevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::dropEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (qgraphicsproxywidget_hoverenterevent_isbase) {
			qgraphicsproxywidget_hoverenterevent_isbase = false;
			QGraphicsProxyWidget::hoverEnterEvent(event);
		} else if (qgraphicsproxywidget_hoverenterevent_callback != nullptr) {
			QGraphicsSceneHoverEvent* cbval1 = event;
			qgraphicsproxywidget_hoverenterevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::hoverEnterEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (qgraphicsproxywidget_hoverleaveevent_isbase) {
			qgraphicsproxywidget_hoverleaveevent_isbase = false;
			QGraphicsProxyWidget::hoverLeaveEvent(event);
		} else if (qgraphicsproxywidget_hoverleaveevent_callback != nullptr) {
			QGraphicsSceneHoverEvent* cbval1 = event;
			qgraphicsproxywidget_hoverleaveevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::hoverLeaveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (qgraphicsproxywidget_hovermoveevent_isbase) {
			qgraphicsproxywidget_hovermoveevent_isbase = false;
			QGraphicsProxyWidget::hoverMoveEvent(event);
		} else if (qgraphicsproxywidget_hovermoveevent_callback != nullptr) {
			QGraphicsSceneHoverEvent* cbval1 = event;
			qgraphicsproxywidget_hovermoveevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::hoverMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void grabMouseEvent(QEvent* event) override {
		if (qgraphicsproxywidget_grabmouseevent_isbase) {
			qgraphicsproxywidget_grabmouseevent_isbase = false;
			QGraphicsProxyWidget::grabMouseEvent(event);
		} else if (qgraphicsproxywidget_grabmouseevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qgraphicsproxywidget_grabmouseevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::grabMouseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (qgraphicsproxywidget_ungrabmouseevent_isbase) {
			qgraphicsproxywidget_ungrabmouseevent_isbase = false;
			QGraphicsProxyWidget::ungrabMouseEvent(event);
		} else if (qgraphicsproxywidget_ungrabmouseevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qgraphicsproxywidget_ungrabmouseevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::ungrabMouseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicsproxywidget_mousemoveevent_isbase) {
			qgraphicsproxywidget_mousemoveevent_isbase = false;
			QGraphicsProxyWidget::mouseMoveEvent(event);
		} else if (qgraphicsproxywidget_mousemoveevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicsproxywidget_mousemoveevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::mouseMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicsproxywidget_mousepressevent_isbase) {
			qgraphicsproxywidget_mousepressevent_isbase = false;
			QGraphicsProxyWidget::mousePressEvent(event);
		} else if (qgraphicsproxywidget_mousepressevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicsproxywidget_mousepressevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::mousePressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicsproxywidget_mousereleaseevent_isbase) {
			qgraphicsproxywidget_mousereleaseevent_isbase = false;
			QGraphicsProxyWidget::mouseReleaseEvent(event);
		} else if (qgraphicsproxywidget_mousereleaseevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicsproxywidget_mousereleaseevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::mouseReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicsproxywidget_mousedoubleclickevent_isbase) {
			qgraphicsproxywidget_mousedoubleclickevent_isbase = false;
			QGraphicsProxyWidget::mouseDoubleClickEvent(event);
		} else if (qgraphicsproxywidget_mousedoubleclickevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicsproxywidget_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::mouseDoubleClickEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (qgraphicsproxywidget_wheelevent_isbase) {
			qgraphicsproxywidget_wheelevent_isbase = false;
			QGraphicsProxyWidget::wheelEvent(event);
		} else if (qgraphicsproxywidget_wheelevent_callback != nullptr) {
			QGraphicsSceneWheelEvent* cbval1 = event;
			qgraphicsproxywidget_wheelevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::wheelEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (qgraphicsproxywidget_keypressevent_isbase) {
			qgraphicsproxywidget_keypressevent_isbase = false;
			QGraphicsProxyWidget::keyPressEvent(event);
		} else if (qgraphicsproxywidget_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qgraphicsproxywidget_keypressevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::keyPressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (qgraphicsproxywidget_keyreleaseevent_isbase) {
			qgraphicsproxywidget_keyreleaseevent_isbase = false;
			QGraphicsProxyWidget::keyReleaseEvent(event);
		} else if (qgraphicsproxywidget_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qgraphicsproxywidget_keyreleaseevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::keyReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* event) override {
		if (qgraphicsproxywidget_focusinevent_isbase) {
			qgraphicsproxywidget_focusinevent_isbase = false;
			QGraphicsProxyWidget::focusInEvent(event);
		} else if (qgraphicsproxywidget_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qgraphicsproxywidget_focusinevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::focusInEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (qgraphicsproxywidget_focusoutevent_isbase) {
			qgraphicsproxywidget_focusoutevent_isbase = false;
			QGraphicsProxyWidget::focusOutEvent(event);
		} else if (qgraphicsproxywidget_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qgraphicsproxywidget_focusoutevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::focusOutEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool focusNextPrevChild(bool next) override {
		if (qgraphicsproxywidget_focusnextprevchild_isbase) {
			qgraphicsproxywidget_focusnextprevchild_isbase = false;
			return QGraphicsProxyWidget::focusNextPrevChild(next);
		} else if (qgraphicsproxywidget_focusnextprevchild_callback != nullptr) {
			bool cbval1 = next;
			bool callback_ret = qgraphicsproxywidget_focusnextprevchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsProxyWidget::focusNextPrevChild(next);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (qgraphicsproxywidget_inputmethodquery_isbase) {
			qgraphicsproxywidget_inputmethodquery_isbase = false;
			return QGraphicsProxyWidget::inputMethodQuery(query);
		} else if (qgraphicsproxywidget_inputmethodquery_callback != nullptr) {
			int cbval1 = static_cast<int>(query);
			QVariant* callback_ret = qgraphicsproxywidget_inputmethodquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsProxyWidget::inputMethodQuery(query);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (qgraphicsproxywidget_inputmethodevent_isbase) {
			qgraphicsproxywidget_inputmethodevent_isbase = false;
			QGraphicsProxyWidget::inputMethodEvent(event);
		} else if (qgraphicsproxywidget_inputmethodevent_callback != nullptr) {
			QInputMethodEvent* cbval1 = event;
			qgraphicsproxywidget_inputmethodevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::inputMethodEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (qgraphicsproxywidget_sizehint_isbase) {
			qgraphicsproxywidget_sizehint_isbase = false;
			return QGraphicsProxyWidget::sizeHint(which, constraint);
		} else if (qgraphicsproxywidget_sizehint_callback != nullptr) {
			int cbval1 = static_cast<int>(which);
			const QSizeF* cbval2 = (const QSizeF*)&constraint;
			QSizeF* callback_ret = qgraphicsproxywidget_sizehint_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QGraphicsProxyWidget::sizeHint(which, constraint);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (qgraphicsproxywidget_resizeevent_isbase) {
			qgraphicsproxywidget_resizeevent_isbase = false;
			QGraphicsProxyWidget::resizeEvent(event);
		} else if (qgraphicsproxywidget_resizeevent_callback != nullptr) {
			QGraphicsSceneResizeEvent* cbval1 = event;
			qgraphicsproxywidget_resizeevent_callback(this, cbval1);
		} else {
			QGraphicsProxyWidget::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	QGraphicsProxyWidget* newProxyWidget(const QWidget* param1) {
		if (qgraphicsproxywidget_newproxywidget_isbase) {
			qgraphicsproxywidget_newproxywidget_isbase = false;
			return QGraphicsProxyWidget::newProxyWidget(param1);
		} else if (qgraphicsproxywidget_newproxywidget_callback != nullptr) {
			const QWidget* cbval1 = param1;
			QGraphicsProxyWidget* callback_ret = qgraphicsproxywidget_newproxywidget_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsProxyWidget::newProxyWidget(param1);
		}
	}

	// Friend functions
	friend QVariant* QGraphicsProxyWidget_ItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value);
	friend QVariant* QGraphicsProxyWidget_QBaseItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value);
	friend bool QGraphicsProxyWidget_Event(QGraphicsProxyWidget* self, QEvent* event);
	friend bool QGraphicsProxyWidget_QBaseEvent(QGraphicsProxyWidget* self, QEvent* event);
	friend bool QGraphicsProxyWidget_EventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event);
	friend bool QGraphicsProxyWidget_QBaseEventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event);
	friend void QGraphicsProxyWidget_ShowEvent(QGraphicsProxyWidget* self, QShowEvent* event);
	friend void QGraphicsProxyWidget_QBaseShowEvent(QGraphicsProxyWidget* self, QShowEvent* event);
	friend void QGraphicsProxyWidget_HideEvent(QGraphicsProxyWidget* self, QHideEvent* event);
	friend void QGraphicsProxyWidget_QBaseHideEvent(QGraphicsProxyWidget* self, QHideEvent* event);
	friend void QGraphicsProxyWidget_ContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event);
	friend void QGraphicsProxyWidget_QBaseContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event);
	friend void QGraphicsProxyWidget_DragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsProxyWidget_QBaseDragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsProxyWidget_DragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsProxyWidget_QBaseDragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsProxyWidget_DragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsProxyWidget_QBaseDragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsProxyWidget_DropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsProxyWidget_QBaseDropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsProxyWidget_HoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsProxyWidget_QBaseHoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsProxyWidget_HoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsProxyWidget_QBaseHoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsProxyWidget_HoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsProxyWidget_QBaseHoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsProxyWidget_GrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
	friend void QGraphicsProxyWidget_QBaseGrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
	friend void QGraphicsProxyWidget_UngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
	friend void QGraphicsProxyWidget_QBaseUngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
	friend void QGraphicsProxyWidget_MouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsProxyWidget_QBaseMouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsProxyWidget_MousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsProxyWidget_QBaseMousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsProxyWidget_MouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsProxyWidget_QBaseMouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsProxyWidget_MouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsProxyWidget_QBaseMouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsProxyWidget_WheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event);
	friend void QGraphicsProxyWidget_QBaseWheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event);
	friend void QGraphicsProxyWidget_KeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
	friend void QGraphicsProxyWidget_QBaseKeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
	friend void QGraphicsProxyWidget_KeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
	friend void QGraphicsProxyWidget_QBaseKeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
	friend void QGraphicsProxyWidget_FocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
	friend void QGraphicsProxyWidget_QBaseFocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
	friend void QGraphicsProxyWidget_FocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
	friend void QGraphicsProxyWidget_QBaseFocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
	friend bool QGraphicsProxyWidget_FocusNextPrevChild(QGraphicsProxyWidget* self, bool next);
	friend bool QGraphicsProxyWidget_QBaseFocusNextPrevChild(QGraphicsProxyWidget* self, bool next);
	friend QVariant* QGraphicsProxyWidget_InputMethodQuery(const QGraphicsProxyWidget* self, int query);
	friend QVariant* QGraphicsProxyWidget_QBaseInputMethodQuery(const QGraphicsProxyWidget* self, int query);
	friend void QGraphicsProxyWidget_InputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event);
	friend void QGraphicsProxyWidget_QBaseInputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event);
	friend QSizeF* QGraphicsProxyWidget_SizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint);
	friend QSizeF* QGraphicsProxyWidget_QBaseSizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint);
	friend void QGraphicsProxyWidget_ResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event);
	friend void QGraphicsProxyWidget_QBaseResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event);
	friend QGraphicsProxyWidget* QGraphicsProxyWidget_NewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1);
	friend QGraphicsProxyWidget* QGraphicsProxyWidget_QBaseNewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1);
};

#endif


