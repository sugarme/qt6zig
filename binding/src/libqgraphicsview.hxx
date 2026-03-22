#pragma once
#ifndef QGRAPHICSVIEW_H_C_LIBVIRTUAL
#define QGRAPHICSVIEW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGraphicsView so that we can call protected methods
class VirtualQGraphicsView final : public QGraphicsView {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsView= true;

	// Virtual class public types (including callbacks)
	using QGraphicsView_SizeHint_Callback = QSize* (*)();
	using QGraphicsView_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsView*, int);
	using QGraphicsView_SetupViewport_Callback = void (*)(QGraphicsView*, QWidget*);
	using QGraphicsView_Event_Callback = bool (*)(QGraphicsView*, QEvent*);
	using QGraphicsView_ViewportEvent_Callback = bool (*)(QGraphicsView*, QEvent*);
	using QGraphicsView_ContextMenuEvent_Callback = void (*)(QGraphicsView*, QContextMenuEvent*);
	using QGraphicsView_DragEnterEvent_Callback = void (*)(QGraphicsView*, QDragEnterEvent*);
	using QGraphicsView_DragLeaveEvent_Callback = void (*)(QGraphicsView*, QDragLeaveEvent*);
	using QGraphicsView_DragMoveEvent_Callback = void (*)(QGraphicsView*, QDragMoveEvent*);
	using QGraphicsView_DropEvent_Callback = void (*)(QGraphicsView*, QDropEvent*);
	using QGraphicsView_FocusInEvent_Callback = void (*)(QGraphicsView*, QFocusEvent*);
	using QGraphicsView_FocusNextPrevChild_Callback = bool (*)(QGraphicsView*, bool);
	using QGraphicsView_FocusOutEvent_Callback = void (*)(QGraphicsView*, QFocusEvent*);
	using QGraphicsView_KeyPressEvent_Callback = void (*)(QGraphicsView*, QKeyEvent*);
	using QGraphicsView_KeyReleaseEvent_Callback = void (*)(QGraphicsView*, QKeyEvent*);
	using QGraphicsView_MouseDoubleClickEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
	using QGraphicsView_MousePressEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
	using QGraphicsView_MouseMoveEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
	using QGraphicsView_MouseReleaseEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
	using QGraphicsView_WheelEvent_Callback = void (*)(QGraphicsView*, QWheelEvent*);
	using QGraphicsView_PaintEvent_Callback = void (*)(QGraphicsView*, QPaintEvent*);
	using QGraphicsView_ResizeEvent_Callback = void (*)(QGraphicsView*, QResizeEvent*);
	using QGraphicsView_ScrollContentsBy_Callback = void (*)(QGraphicsView*, int, int);
	using QGraphicsView_ShowEvent_Callback = void (*)(QGraphicsView*, QShowEvent*);
	using QGraphicsView_InputMethodEvent_Callback = void (*)(QGraphicsView*, QInputMethodEvent*);
	using QGraphicsView_DrawBackground_Callback = void (*)(QGraphicsView*, QPainter*, const QRectF*);
	using QGraphicsView_DrawForeground_Callback = void (*)(QGraphicsView*, QPainter*, const QRectF*);
	using QGraphicsView_DrawItems_Callback = void (*)(QGraphicsView*, QPainter*, int, QGraphicsItem**, const QStyleOptionGraphicsItem*);

protected:
	// Instance callback storage
	mutable QGraphicsView_SizeHint_Callback qgraphicsview_sizehint_callback = nullptr;
	mutable QGraphicsView_InputMethodQuery_Callback qgraphicsview_inputmethodquery_callback = nullptr;
	mutable QGraphicsView_SetupViewport_Callback qgraphicsview_setupviewport_callback = nullptr;
	mutable QGraphicsView_Event_Callback qgraphicsview_event_callback = nullptr;
	mutable QGraphicsView_ViewportEvent_Callback qgraphicsview_viewportevent_callback = nullptr;
	mutable QGraphicsView_ContextMenuEvent_Callback qgraphicsview_contextmenuevent_callback = nullptr;
	mutable QGraphicsView_DragEnterEvent_Callback qgraphicsview_dragenterevent_callback = nullptr;
	mutable QGraphicsView_DragLeaveEvent_Callback qgraphicsview_dragleaveevent_callback = nullptr;
	mutable QGraphicsView_DragMoveEvent_Callback qgraphicsview_dragmoveevent_callback = nullptr;
	mutable QGraphicsView_DropEvent_Callback qgraphicsview_dropevent_callback = nullptr;
	mutable QGraphicsView_FocusInEvent_Callback qgraphicsview_focusinevent_callback = nullptr;
	mutable QGraphicsView_FocusNextPrevChild_Callback qgraphicsview_focusnextprevchild_callback = nullptr;
	mutable QGraphicsView_FocusOutEvent_Callback qgraphicsview_focusoutevent_callback = nullptr;
	mutable QGraphicsView_KeyPressEvent_Callback qgraphicsview_keypressevent_callback = nullptr;
	mutable QGraphicsView_KeyReleaseEvent_Callback qgraphicsview_keyreleaseevent_callback = nullptr;
	mutable QGraphicsView_MouseDoubleClickEvent_Callback qgraphicsview_mousedoubleclickevent_callback = nullptr;
	mutable QGraphicsView_MousePressEvent_Callback qgraphicsview_mousepressevent_callback = nullptr;
	mutable QGraphicsView_MouseMoveEvent_Callback qgraphicsview_mousemoveevent_callback = nullptr;
	mutable QGraphicsView_MouseReleaseEvent_Callback qgraphicsview_mousereleaseevent_callback = nullptr;
	mutable QGraphicsView_WheelEvent_Callback qgraphicsview_wheelevent_callback = nullptr;
	mutable QGraphicsView_PaintEvent_Callback qgraphicsview_paintevent_callback = nullptr;
	mutable QGraphicsView_ResizeEvent_Callback qgraphicsview_resizeevent_callback = nullptr;
	mutable QGraphicsView_ScrollContentsBy_Callback qgraphicsview_scrollcontentsby_callback = nullptr;
	mutable QGraphicsView_ShowEvent_Callback qgraphicsview_showevent_callback = nullptr;
	mutable QGraphicsView_InputMethodEvent_Callback qgraphicsview_inputmethodevent_callback = nullptr;
	mutable QGraphicsView_DrawBackground_Callback qgraphicsview_drawbackground_callback = nullptr;
	mutable QGraphicsView_DrawForeground_Callback qgraphicsview_drawforeground_callback = nullptr;
	mutable QGraphicsView_DrawItems_Callback qgraphicsview_drawitems_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsview_sizehint_isbase = false;
    mutable bool qgraphicsview_inputmethodquery_isbase = false;
    mutable bool qgraphicsview_setupviewport_isbase = false;
    mutable bool qgraphicsview_event_isbase = false;
    mutable bool qgraphicsview_viewportevent_isbase = false;
    mutable bool qgraphicsview_contextmenuevent_isbase = false;
    mutable bool qgraphicsview_dragenterevent_isbase = false;
    mutable bool qgraphicsview_dragleaveevent_isbase = false;
    mutable bool qgraphicsview_dragmoveevent_isbase = false;
    mutable bool qgraphicsview_dropevent_isbase = false;
    mutable bool qgraphicsview_focusinevent_isbase = false;
    mutable bool qgraphicsview_focusnextprevchild_isbase = false;
    mutable bool qgraphicsview_focusoutevent_isbase = false;
    mutable bool qgraphicsview_keypressevent_isbase = false;
    mutable bool qgraphicsview_keyreleaseevent_isbase = false;
    mutable bool qgraphicsview_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsview_mousepressevent_isbase = false;
    mutable bool qgraphicsview_mousemoveevent_isbase = false;
    mutable bool qgraphicsview_mousereleaseevent_isbase = false;
    mutable bool qgraphicsview_wheelevent_isbase = false;
    mutable bool qgraphicsview_paintevent_isbase = false;
    mutable bool qgraphicsview_resizeevent_isbase = false;
    mutable bool qgraphicsview_scrollcontentsby_isbase = false;
    mutable bool qgraphicsview_showevent_isbase = false;
    mutable bool qgraphicsview_inputmethodevent_isbase = false;
    mutable bool qgraphicsview_drawbackground_isbase = false;
    mutable bool qgraphicsview_drawforeground_isbase = false;
    mutable bool qgraphicsview_drawitems_isbase = false;

public:
	VirtualQGraphicsView(QWidget* parent): QGraphicsView(parent) {};
	VirtualQGraphicsView(): QGraphicsView() {};
	VirtualQGraphicsView(QGraphicsScene* scene): QGraphicsView(scene) {};
	VirtualQGraphicsView(QGraphicsScene* scene, QWidget* parent): QGraphicsView(scene, parent) {};

	~VirtualQGraphicsView() {
		qgraphicsview_sizehint_callback = nullptr;
		qgraphicsview_inputmethodquery_callback = nullptr;
		qgraphicsview_setupviewport_callback = nullptr;
		qgraphicsview_event_callback = nullptr;
		qgraphicsview_viewportevent_callback = nullptr;
		qgraphicsview_contextmenuevent_callback = nullptr;
		qgraphicsview_dragenterevent_callback = nullptr;
		qgraphicsview_dragleaveevent_callback = nullptr;
		qgraphicsview_dragmoveevent_callback = nullptr;
		qgraphicsview_dropevent_callback = nullptr;
		qgraphicsview_focusinevent_callback = nullptr;
		qgraphicsview_focusnextprevchild_callback = nullptr;
		qgraphicsview_focusoutevent_callback = nullptr;
		qgraphicsview_keypressevent_callback = nullptr;
		qgraphicsview_keyreleaseevent_callback = nullptr;
		qgraphicsview_mousedoubleclickevent_callback = nullptr;
		qgraphicsview_mousepressevent_callback = nullptr;
		qgraphicsview_mousemoveevent_callback = nullptr;
		qgraphicsview_mousereleaseevent_callback = nullptr;
		qgraphicsview_wheelevent_callback = nullptr;
		qgraphicsview_paintevent_callback = nullptr;
		qgraphicsview_resizeevent_callback = nullptr;
		qgraphicsview_scrollcontentsby_callback = nullptr;
		qgraphicsview_showevent_callback = nullptr;
		qgraphicsview_inputmethodevent_callback = nullptr;
		qgraphicsview_drawbackground_callback = nullptr;
		qgraphicsview_drawforeground_callback = nullptr;
		qgraphicsview_drawitems_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsView_SizeHint_Callback(QGraphicsView_SizeHint_Callback cb) const { qgraphicsview_sizehint_callback = cb; }
	inline void setQGraphicsView_InputMethodQuery_Callback(QGraphicsView_InputMethodQuery_Callback cb) const { qgraphicsview_inputmethodquery_callback = cb; }
	inline void setQGraphicsView_SetupViewport_Callback(QGraphicsView_SetupViewport_Callback cb) const { qgraphicsview_setupviewport_callback = cb; }
	inline void setQGraphicsView_Event_Callback(QGraphicsView_Event_Callback cb) const { qgraphicsview_event_callback = cb; }
	inline void setQGraphicsView_ViewportEvent_Callback(QGraphicsView_ViewportEvent_Callback cb) const { qgraphicsview_viewportevent_callback = cb; }
	inline void setQGraphicsView_ContextMenuEvent_Callback(QGraphicsView_ContextMenuEvent_Callback cb) const { qgraphicsview_contextmenuevent_callback = cb; }
	inline void setQGraphicsView_DragEnterEvent_Callback(QGraphicsView_DragEnterEvent_Callback cb) const { qgraphicsview_dragenterevent_callback = cb; }
	inline void setQGraphicsView_DragLeaveEvent_Callback(QGraphicsView_DragLeaveEvent_Callback cb) const { qgraphicsview_dragleaveevent_callback = cb; }
	inline void setQGraphicsView_DragMoveEvent_Callback(QGraphicsView_DragMoveEvent_Callback cb) const { qgraphicsview_dragmoveevent_callback = cb; }
	inline void setQGraphicsView_DropEvent_Callback(QGraphicsView_DropEvent_Callback cb) const { qgraphicsview_dropevent_callback = cb; }
	inline void setQGraphicsView_FocusInEvent_Callback(QGraphicsView_FocusInEvent_Callback cb) const { qgraphicsview_focusinevent_callback = cb; }
	inline void setQGraphicsView_FocusNextPrevChild_Callback(QGraphicsView_FocusNextPrevChild_Callback cb) const { qgraphicsview_focusnextprevchild_callback = cb; }
	inline void setQGraphicsView_FocusOutEvent_Callback(QGraphicsView_FocusOutEvent_Callback cb) const { qgraphicsview_focusoutevent_callback = cb; }
	inline void setQGraphicsView_KeyPressEvent_Callback(QGraphicsView_KeyPressEvent_Callback cb) const { qgraphicsview_keypressevent_callback = cb; }
	inline void setQGraphicsView_KeyReleaseEvent_Callback(QGraphicsView_KeyReleaseEvent_Callback cb) const { qgraphicsview_keyreleaseevent_callback = cb; }
	inline void setQGraphicsView_MouseDoubleClickEvent_Callback(QGraphicsView_MouseDoubleClickEvent_Callback cb) const { qgraphicsview_mousedoubleclickevent_callback = cb; }
	inline void setQGraphicsView_MousePressEvent_Callback(QGraphicsView_MousePressEvent_Callback cb) const { qgraphicsview_mousepressevent_callback = cb; }
	inline void setQGraphicsView_MouseMoveEvent_Callback(QGraphicsView_MouseMoveEvent_Callback cb) const { qgraphicsview_mousemoveevent_callback = cb; }
	inline void setQGraphicsView_MouseReleaseEvent_Callback(QGraphicsView_MouseReleaseEvent_Callback cb) const { qgraphicsview_mousereleaseevent_callback = cb; }
	inline void setQGraphicsView_WheelEvent_Callback(QGraphicsView_WheelEvent_Callback cb) const { qgraphicsview_wheelevent_callback = cb; }
	inline void setQGraphicsView_PaintEvent_Callback(QGraphicsView_PaintEvent_Callback cb) const { qgraphicsview_paintevent_callback = cb; }
	inline void setQGraphicsView_ResizeEvent_Callback(QGraphicsView_ResizeEvent_Callback cb) const { qgraphicsview_resizeevent_callback = cb; }
	inline void setQGraphicsView_ScrollContentsBy_Callback(QGraphicsView_ScrollContentsBy_Callback cb) const { qgraphicsview_scrollcontentsby_callback = cb; }
	inline void setQGraphicsView_ShowEvent_Callback(QGraphicsView_ShowEvent_Callback cb) const { qgraphicsview_showevent_callback = cb; }
	inline void setQGraphicsView_InputMethodEvent_Callback(QGraphicsView_InputMethodEvent_Callback cb) const { qgraphicsview_inputmethodevent_callback = cb; }
	inline void setQGraphicsView_DrawBackground_Callback(QGraphicsView_DrawBackground_Callback cb) const { qgraphicsview_drawbackground_callback = cb; }
	inline void setQGraphicsView_DrawForeground_Callback(QGraphicsView_DrawForeground_Callback cb) const { qgraphicsview_drawforeground_callback = cb; }
	inline void setQGraphicsView_DrawItems_Callback(QGraphicsView_DrawItems_Callback cb) const { qgraphicsview_drawitems_callback = cb; }

// Base flag setters
	inline void setQGraphicsView_SizeHint_IsBase(bool value) const { qgraphicsview_sizehint_isbase = value; }
	inline void setQGraphicsView_InputMethodQuery_IsBase(bool value) const { qgraphicsview_inputmethodquery_isbase = value; }
	inline void setQGraphicsView_SetupViewport_IsBase(bool value) const { qgraphicsview_setupviewport_isbase = value; }
	inline void setQGraphicsView_Event_IsBase(bool value) const { qgraphicsview_event_isbase = value; }
	inline void setQGraphicsView_ViewportEvent_IsBase(bool value) const { qgraphicsview_viewportevent_isbase = value; }
	inline void setQGraphicsView_ContextMenuEvent_IsBase(bool value) const { qgraphicsview_contextmenuevent_isbase = value; }
	inline void setQGraphicsView_DragEnterEvent_IsBase(bool value) const { qgraphicsview_dragenterevent_isbase = value; }
	inline void setQGraphicsView_DragLeaveEvent_IsBase(bool value) const { qgraphicsview_dragleaveevent_isbase = value; }
	inline void setQGraphicsView_DragMoveEvent_IsBase(bool value) const { qgraphicsview_dragmoveevent_isbase = value; }
	inline void setQGraphicsView_DropEvent_IsBase(bool value) const { qgraphicsview_dropevent_isbase = value; }
	inline void setQGraphicsView_FocusInEvent_IsBase(bool value) const { qgraphicsview_focusinevent_isbase = value; }
	inline void setQGraphicsView_FocusNextPrevChild_IsBase(bool value) const { qgraphicsview_focusnextprevchild_isbase = value; }
	inline void setQGraphicsView_FocusOutEvent_IsBase(bool value) const { qgraphicsview_focusoutevent_isbase = value; }
	inline void setQGraphicsView_KeyPressEvent_IsBase(bool value) const { qgraphicsview_keypressevent_isbase = value; }
	inline void setQGraphicsView_KeyReleaseEvent_IsBase(bool value) const { qgraphicsview_keyreleaseevent_isbase = value; }
	inline void setQGraphicsView_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsview_mousedoubleclickevent_isbase = value; }
	inline void setQGraphicsView_MousePressEvent_IsBase(bool value) const { qgraphicsview_mousepressevent_isbase = value; }
	inline void setQGraphicsView_MouseMoveEvent_IsBase(bool value) const { qgraphicsview_mousemoveevent_isbase = value; }
	inline void setQGraphicsView_MouseReleaseEvent_IsBase(bool value) const { qgraphicsview_mousereleaseevent_isbase = value; }
	inline void setQGraphicsView_WheelEvent_IsBase(bool value) const { qgraphicsview_wheelevent_isbase = value; }
	inline void setQGraphicsView_PaintEvent_IsBase(bool value) const { qgraphicsview_paintevent_isbase = value; }
	inline void setQGraphicsView_ResizeEvent_IsBase(bool value) const { qgraphicsview_resizeevent_isbase = value; }
	inline void setQGraphicsView_ScrollContentsBy_IsBase(bool value) const { qgraphicsview_scrollcontentsby_isbase = value; }
	inline void setQGraphicsView_ShowEvent_IsBase(bool value) const { qgraphicsview_showevent_isbase = value; }
	inline void setQGraphicsView_InputMethodEvent_IsBase(bool value) const { qgraphicsview_inputmethodevent_isbase = value; }
	inline void setQGraphicsView_DrawBackground_IsBase(bool value) const { qgraphicsview_drawbackground_isbase = value; }
	inline void setQGraphicsView_DrawForeground_IsBase(bool value) const { qgraphicsview_drawforeground_isbase = value; }
	inline void setQGraphicsView_DrawItems_IsBase(bool value) const { qgraphicsview_drawitems_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qgraphicsview_sizehint_isbase) {
			qgraphicsview_sizehint_isbase = false;
			return QGraphicsView::sizeHint();
		} else if (qgraphicsview_sizehint_callback != nullptr) {
			QSize* callback_ret = qgraphicsview_sizehint_callback();
			return *callback_ret;
		} else {
			return QGraphicsView::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (qgraphicsview_inputmethodquery_isbase) {
			qgraphicsview_inputmethodquery_isbase = false;
			return QGraphicsView::inputMethodQuery(query);
		} else if (qgraphicsview_inputmethodquery_callback != nullptr) {
			int cbval1 = static_cast<int>(query);
			QVariant* callback_ret = qgraphicsview_inputmethodquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsView::inputMethodQuery(query);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setupViewport(QWidget* widget) override {
		if (qgraphicsview_setupviewport_isbase) {
			qgraphicsview_setupviewport_isbase = false;
			QGraphicsView::setupViewport(widget);
		} else if (qgraphicsview_setupviewport_callback != nullptr) {
			QWidget* cbval1 = widget;
			qgraphicsview_setupviewport_callback(this, cbval1);
		} else {
			QGraphicsView::setupViewport(widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qgraphicsview_event_isbase) {
			qgraphicsview_event_isbase = false;
			return QGraphicsView::event(event);
		} else if (qgraphicsview_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qgraphicsview_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsView::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool viewportEvent(QEvent* event) override {
		if (qgraphicsview_viewportevent_isbase) {
			qgraphicsview_viewportevent_isbase = false;
			return QGraphicsView::viewportEvent(event);
		} else if (qgraphicsview_viewportevent_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qgraphicsview_viewportevent_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsView::viewportEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (qgraphicsview_contextmenuevent_isbase) {
			qgraphicsview_contextmenuevent_isbase = false;
			QGraphicsView::contextMenuEvent(event);
		} else if (qgraphicsview_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = event;
			qgraphicsview_contextmenuevent_callback(this, cbval1);
		} else {
			QGraphicsView::contextMenuEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (qgraphicsview_dragenterevent_isbase) {
			qgraphicsview_dragenterevent_isbase = false;
			QGraphicsView::dragEnterEvent(event);
		} else if (qgraphicsview_dragenterevent_callback != nullptr) {
			QDragEnterEvent* cbval1 = event;
			qgraphicsview_dragenterevent_callback(this, cbval1);
		} else {
			QGraphicsView::dragEnterEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (qgraphicsview_dragleaveevent_isbase) {
			qgraphicsview_dragleaveevent_isbase = false;
			QGraphicsView::dragLeaveEvent(event);
		} else if (qgraphicsview_dragleaveevent_callback != nullptr) {
			QDragLeaveEvent* cbval1 = event;
			qgraphicsview_dragleaveevent_callback(this, cbval1);
		} else {
			QGraphicsView::dragLeaveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (qgraphicsview_dragmoveevent_isbase) {
			qgraphicsview_dragmoveevent_isbase = false;
			QGraphicsView::dragMoveEvent(event);
		} else if (qgraphicsview_dragmoveevent_callback != nullptr) {
			QDragMoveEvent* cbval1 = event;
			qgraphicsview_dragmoveevent_callback(this, cbval1);
		} else {
			QGraphicsView::dragMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QDropEvent* event) override {
		if (qgraphicsview_dropevent_isbase) {
			qgraphicsview_dropevent_isbase = false;
			QGraphicsView::dropEvent(event);
		} else if (qgraphicsview_dropevent_callback != nullptr) {
			QDropEvent* cbval1 = event;
			qgraphicsview_dropevent_callback(this, cbval1);
		} else {
			QGraphicsView::dropEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* event) override {
		if (qgraphicsview_focusinevent_isbase) {
			qgraphicsview_focusinevent_isbase = false;
			QGraphicsView::focusInEvent(event);
		} else if (qgraphicsview_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qgraphicsview_focusinevent_callback(this, cbval1);
		} else {
			QGraphicsView::focusInEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool focusNextPrevChild(bool next) override {
		if (qgraphicsview_focusnextprevchild_isbase) {
			qgraphicsview_focusnextprevchild_isbase = false;
			return QGraphicsView::focusNextPrevChild(next);
		} else if (qgraphicsview_focusnextprevchild_callback != nullptr) {
			bool cbval1 = next;
			bool callback_ret = qgraphicsview_focusnextprevchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsView::focusNextPrevChild(next);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (qgraphicsview_focusoutevent_isbase) {
			qgraphicsview_focusoutevent_isbase = false;
			QGraphicsView::focusOutEvent(event);
		} else if (qgraphicsview_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qgraphicsview_focusoutevent_callback(this, cbval1);
		} else {
			QGraphicsView::focusOutEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (qgraphicsview_keypressevent_isbase) {
			qgraphicsview_keypressevent_isbase = false;
			QGraphicsView::keyPressEvent(event);
		} else if (qgraphicsview_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qgraphicsview_keypressevent_callback(this, cbval1);
		} else {
			QGraphicsView::keyPressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (qgraphicsview_keyreleaseevent_isbase) {
			qgraphicsview_keyreleaseevent_isbase = false;
			QGraphicsView::keyReleaseEvent(event);
		} else if (qgraphicsview_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qgraphicsview_keyreleaseevent_callback(this, cbval1);
		} else {
			QGraphicsView::keyReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (qgraphicsview_mousedoubleclickevent_isbase) {
			qgraphicsview_mousedoubleclickevent_isbase = false;
			QGraphicsView::mouseDoubleClickEvent(event);
		} else if (qgraphicsview_mousedoubleclickevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qgraphicsview_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QGraphicsView::mouseDoubleClickEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (qgraphicsview_mousepressevent_isbase) {
			qgraphicsview_mousepressevent_isbase = false;
			QGraphicsView::mousePressEvent(event);
		} else if (qgraphicsview_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qgraphicsview_mousepressevent_callback(this, cbval1);
		} else {
			QGraphicsView::mousePressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (qgraphicsview_mousemoveevent_isbase) {
			qgraphicsview_mousemoveevent_isbase = false;
			QGraphicsView::mouseMoveEvent(event);
		} else if (qgraphicsview_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qgraphicsview_mousemoveevent_callback(this, cbval1);
		} else {
			QGraphicsView::mouseMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (qgraphicsview_mousereleaseevent_isbase) {
			qgraphicsview_mousereleaseevent_isbase = false;
			QGraphicsView::mouseReleaseEvent(event);
		} else if (qgraphicsview_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qgraphicsview_mousereleaseevent_callback(this, cbval1);
		} else {
			QGraphicsView::mouseReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* event) override {
		if (qgraphicsview_wheelevent_isbase) {
			qgraphicsview_wheelevent_isbase = false;
			QGraphicsView::wheelEvent(event);
		} else if (qgraphicsview_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = event;
			qgraphicsview_wheelevent_callback(this, cbval1);
		} else {
			QGraphicsView::wheelEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* event) override {
		if (qgraphicsview_paintevent_isbase) {
			qgraphicsview_paintevent_isbase = false;
			QGraphicsView::paintEvent(event);
		} else if (qgraphicsview_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = event;
			qgraphicsview_paintevent_callback(this, cbval1);
		} else {
			QGraphicsView::paintEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qgraphicsview_resizeevent_isbase) {
			qgraphicsview_resizeevent_isbase = false;
			QGraphicsView::resizeEvent(event);
		} else if (qgraphicsview_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qgraphicsview_resizeevent_callback(this, cbval1);
		} else {
			QGraphicsView::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollContentsBy(int dx, int dy) override {
		if (qgraphicsview_scrollcontentsby_isbase) {
			qgraphicsview_scrollcontentsby_isbase = false;
			QGraphicsView::scrollContentsBy(dx, dy);
		} else if (qgraphicsview_scrollcontentsby_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qgraphicsview_scrollcontentsby_callback(this, cbval1, cbval2);
		} else {
			QGraphicsView::scrollContentsBy(dx, dy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* event) override {
		if (qgraphicsview_showevent_isbase) {
			qgraphicsview_showevent_isbase = false;
			QGraphicsView::showEvent(event);
		} else if (qgraphicsview_showevent_callback != nullptr) {
			QShowEvent* cbval1 = event;
			qgraphicsview_showevent_callback(this, cbval1);
		} else {
			QGraphicsView::showEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (qgraphicsview_inputmethodevent_isbase) {
			qgraphicsview_inputmethodevent_isbase = false;
			QGraphicsView::inputMethodEvent(event);
		} else if (qgraphicsview_inputmethodevent_callback != nullptr) {
			QInputMethodEvent* cbval1 = event;
			qgraphicsview_inputmethodevent_callback(this, cbval1);
		} else {
			QGraphicsView::inputMethodEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
		if (qgraphicsview_drawbackground_isbase) {
			qgraphicsview_drawbackground_isbase = false;
			QGraphicsView::drawBackground(painter, rect);
		} else if (qgraphicsview_drawbackground_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRectF* cbval2 = (const QRectF*)&rect;
			qgraphicsview_drawbackground_callback(this, cbval1, cbval2);
		} else {
			QGraphicsView::drawBackground(painter, rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
		if (qgraphicsview_drawforeground_isbase) {
			qgraphicsview_drawforeground_isbase = false;
			QGraphicsView::drawForeground(painter, rect);
		} else if (qgraphicsview_drawforeground_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRectF* cbval2 = (const QRectF*)&rect;
			qgraphicsview_drawforeground_callback(this, cbval1, cbval2);
		} else {
			QGraphicsView::drawForeground(painter, rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawItems(QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options) override {
		if (qgraphicsview_drawitems_isbase) {
			qgraphicsview_drawitems_isbase = false;
			QGraphicsView::drawItems(painter, numItems, items, options);
		} else if (qgraphicsview_drawitems_callback != nullptr) {
			QPainter* cbval1 = painter;
			int cbval2 = numItems;
			QGraphicsItem** cbval3 = items;
			const QStyleOptionGraphicsItem* cbval4 = options;
			qgraphicsview_drawitems_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QGraphicsView::drawItems(painter, numItems, items, options);
		}
	}

	// Friend functions
	friend void QGraphicsView_SetupViewport(QGraphicsView* self, QWidget* widget);
	friend void QGraphicsView_QBaseSetupViewport(QGraphicsView* self, QWidget* widget);
	friend bool QGraphicsView_Event(QGraphicsView* self, QEvent* event);
	friend bool QGraphicsView_QBaseEvent(QGraphicsView* self, QEvent* event);
	friend bool QGraphicsView_ViewportEvent(QGraphicsView* self, QEvent* event);
	friend bool QGraphicsView_QBaseViewportEvent(QGraphicsView* self, QEvent* event);
	friend void QGraphicsView_ContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event);
	friend void QGraphicsView_QBaseContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event);
	friend void QGraphicsView_DragEnterEvent(QGraphicsView* self, QDragEnterEvent* event);
	friend void QGraphicsView_QBaseDragEnterEvent(QGraphicsView* self, QDragEnterEvent* event);
	friend void QGraphicsView_DragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event);
	friend void QGraphicsView_QBaseDragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event);
	friend void QGraphicsView_DragMoveEvent(QGraphicsView* self, QDragMoveEvent* event);
	friend void QGraphicsView_QBaseDragMoveEvent(QGraphicsView* self, QDragMoveEvent* event);
	friend void QGraphicsView_DropEvent(QGraphicsView* self, QDropEvent* event);
	friend void QGraphicsView_QBaseDropEvent(QGraphicsView* self, QDropEvent* event);
	friend void QGraphicsView_FocusInEvent(QGraphicsView* self, QFocusEvent* event);
	friend void QGraphicsView_QBaseFocusInEvent(QGraphicsView* self, QFocusEvent* event);
	friend bool QGraphicsView_FocusNextPrevChild(QGraphicsView* self, bool next);
	friend bool QGraphicsView_QBaseFocusNextPrevChild(QGraphicsView* self, bool next);
	friend void QGraphicsView_FocusOutEvent(QGraphicsView* self, QFocusEvent* event);
	friend void QGraphicsView_QBaseFocusOutEvent(QGraphicsView* self, QFocusEvent* event);
	friend void QGraphicsView_KeyPressEvent(QGraphicsView* self, QKeyEvent* event);
	friend void QGraphicsView_QBaseKeyPressEvent(QGraphicsView* self, QKeyEvent* event);
	friend void QGraphicsView_KeyReleaseEvent(QGraphicsView* self, QKeyEvent* event);
	friend void QGraphicsView_QBaseKeyReleaseEvent(QGraphicsView* self, QKeyEvent* event);
	friend void QGraphicsView_MouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event);
	friend void QGraphicsView_QBaseMouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event);
	friend void QGraphicsView_MousePressEvent(QGraphicsView* self, QMouseEvent* event);
	friend void QGraphicsView_QBaseMousePressEvent(QGraphicsView* self, QMouseEvent* event);
	friend void QGraphicsView_MouseMoveEvent(QGraphicsView* self, QMouseEvent* event);
	friend void QGraphicsView_QBaseMouseMoveEvent(QGraphicsView* self, QMouseEvent* event);
	friend void QGraphicsView_MouseReleaseEvent(QGraphicsView* self, QMouseEvent* event);
	friend void QGraphicsView_QBaseMouseReleaseEvent(QGraphicsView* self, QMouseEvent* event);
	friend void QGraphicsView_WheelEvent(QGraphicsView* self, QWheelEvent* event);
	friend void QGraphicsView_QBaseWheelEvent(QGraphicsView* self, QWheelEvent* event);
	friend void QGraphicsView_PaintEvent(QGraphicsView* self, QPaintEvent* event);
	friend void QGraphicsView_QBasePaintEvent(QGraphicsView* self, QPaintEvent* event);
	friend void QGraphicsView_ResizeEvent(QGraphicsView* self, QResizeEvent* event);
	friend void QGraphicsView_QBaseResizeEvent(QGraphicsView* self, QResizeEvent* event);
	friend void QGraphicsView_ScrollContentsBy(QGraphicsView* self, int dx, int dy);
	friend void QGraphicsView_QBaseScrollContentsBy(QGraphicsView* self, int dx, int dy);
	friend void QGraphicsView_ShowEvent(QGraphicsView* self, QShowEvent* event);
	friend void QGraphicsView_QBaseShowEvent(QGraphicsView* self, QShowEvent* event);
	friend void QGraphicsView_InputMethodEvent(QGraphicsView* self, QInputMethodEvent* event);
	friend void QGraphicsView_QBaseInputMethodEvent(QGraphicsView* self, QInputMethodEvent* event);
	friend void QGraphicsView_DrawBackground(QGraphicsView* self, QPainter* painter, const QRectF* rect);
	friend void QGraphicsView_QBaseDrawBackground(QGraphicsView* self, QPainter* painter, const QRectF* rect);
	friend void QGraphicsView_DrawForeground(QGraphicsView* self, QPainter* painter, const QRectF* rect);
	friend void QGraphicsView_QBaseDrawForeground(QGraphicsView* self, QPainter* painter, const QRectF* rect);
	friend void QGraphicsView_DrawItems(QGraphicsView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options);
	friend void QGraphicsView_QBaseDrawItems(QGraphicsView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options);
};

#endif


