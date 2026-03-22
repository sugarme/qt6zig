#pragma once
#ifndef QABSTRACTSCROLLAREA_H_C_LIBVIRTUAL
#define QABSTRACTSCROLLAREA_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractScrollArea so that we can call protected methods
class VirtualQAbstractScrollArea final : public QAbstractScrollArea {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractScrollArea= true;

	// Virtual class public types (including callbacks)
	using QAbstractScrollArea_MinimumSizeHint_Callback = QSize* (*)();
	using QAbstractScrollArea_SizeHint_Callback = QSize* (*)();
	using QAbstractScrollArea_SetupViewport_Callback = void (*)(QAbstractScrollArea*, QWidget*);
	using QAbstractScrollArea_EventFilter_Callback = bool (*)(QAbstractScrollArea*, QObject*, QEvent*);
	using QAbstractScrollArea_Event_Callback = bool (*)(QAbstractScrollArea*, QEvent*);
	using QAbstractScrollArea_ViewportEvent_Callback = bool (*)(QAbstractScrollArea*, QEvent*);
	using QAbstractScrollArea_ResizeEvent_Callback = void (*)(QAbstractScrollArea*, QResizeEvent*);
	using QAbstractScrollArea_PaintEvent_Callback = void (*)(QAbstractScrollArea*, QPaintEvent*);
	using QAbstractScrollArea_MousePressEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
	using QAbstractScrollArea_MouseReleaseEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
	using QAbstractScrollArea_MouseDoubleClickEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
	using QAbstractScrollArea_MouseMoveEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
	using QAbstractScrollArea_WheelEvent_Callback = void (*)(QAbstractScrollArea*, QWheelEvent*);
	using QAbstractScrollArea_ContextMenuEvent_Callback = void (*)(QAbstractScrollArea*, QContextMenuEvent*);
	using QAbstractScrollArea_DragEnterEvent_Callback = void (*)(QAbstractScrollArea*, QDragEnterEvent*);
	using QAbstractScrollArea_DragMoveEvent_Callback = void (*)(QAbstractScrollArea*, QDragMoveEvent*);
	using QAbstractScrollArea_DragLeaveEvent_Callback = void (*)(QAbstractScrollArea*, QDragLeaveEvent*);
	using QAbstractScrollArea_DropEvent_Callback = void (*)(QAbstractScrollArea*, QDropEvent*);
	using QAbstractScrollArea_KeyPressEvent_Callback = void (*)(QAbstractScrollArea*, QKeyEvent*);
	using QAbstractScrollArea_ScrollContentsBy_Callback = void (*)(QAbstractScrollArea*, int, int);
	using QAbstractScrollArea_ViewportSizeHint_Callback = QSize* (*)();
	using QAbstractScrollArea_SetViewportMargins_Callback = void (*)(QAbstractScrollArea*, int, int, int, int);
	using QAbstractScrollArea_SetViewportMargins2_Callback = void (*)(QAbstractScrollArea*, const QMargins*);
	using QAbstractScrollArea_ViewportMargins_Callback = QMargins* (*)();

protected:
	// Instance callback storage
	mutable QAbstractScrollArea_MinimumSizeHint_Callback qabstractscrollarea_minimumsizehint_callback = nullptr;
	mutable QAbstractScrollArea_SizeHint_Callback qabstractscrollarea_sizehint_callback = nullptr;
	mutable QAbstractScrollArea_SetupViewport_Callback qabstractscrollarea_setupviewport_callback = nullptr;
	mutable QAbstractScrollArea_EventFilter_Callback qabstractscrollarea_eventfilter_callback = nullptr;
	mutable QAbstractScrollArea_Event_Callback qabstractscrollarea_event_callback = nullptr;
	mutable QAbstractScrollArea_ViewportEvent_Callback qabstractscrollarea_viewportevent_callback = nullptr;
	mutable QAbstractScrollArea_ResizeEvent_Callback qabstractscrollarea_resizeevent_callback = nullptr;
	mutable QAbstractScrollArea_PaintEvent_Callback qabstractscrollarea_paintevent_callback = nullptr;
	mutable QAbstractScrollArea_MousePressEvent_Callback qabstractscrollarea_mousepressevent_callback = nullptr;
	mutable QAbstractScrollArea_MouseReleaseEvent_Callback qabstractscrollarea_mousereleaseevent_callback = nullptr;
	mutable QAbstractScrollArea_MouseDoubleClickEvent_Callback qabstractscrollarea_mousedoubleclickevent_callback = nullptr;
	mutable QAbstractScrollArea_MouseMoveEvent_Callback qabstractscrollarea_mousemoveevent_callback = nullptr;
	mutable QAbstractScrollArea_WheelEvent_Callback qabstractscrollarea_wheelevent_callback = nullptr;
	mutable QAbstractScrollArea_ContextMenuEvent_Callback qabstractscrollarea_contextmenuevent_callback = nullptr;
	mutable QAbstractScrollArea_DragEnterEvent_Callback qabstractscrollarea_dragenterevent_callback = nullptr;
	mutable QAbstractScrollArea_DragMoveEvent_Callback qabstractscrollarea_dragmoveevent_callback = nullptr;
	mutable QAbstractScrollArea_DragLeaveEvent_Callback qabstractscrollarea_dragleaveevent_callback = nullptr;
	mutable QAbstractScrollArea_DropEvent_Callback qabstractscrollarea_dropevent_callback = nullptr;
	mutable QAbstractScrollArea_KeyPressEvent_Callback qabstractscrollarea_keypressevent_callback = nullptr;
	mutable QAbstractScrollArea_ScrollContentsBy_Callback qabstractscrollarea_scrollcontentsby_callback = nullptr;
	mutable QAbstractScrollArea_ViewportSizeHint_Callback qabstractscrollarea_viewportsizehint_callback = nullptr;
	mutable QAbstractScrollArea_SetViewportMargins_Callback qabstractscrollarea_setviewportmargins_callback = nullptr;
	mutable QAbstractScrollArea_SetViewportMargins2_Callback qabstractscrollarea_setviewportmargins2_callback = nullptr;
	mutable QAbstractScrollArea_ViewportMargins_Callback qabstractscrollarea_viewportmargins_callback = nullptr;

	// Instance base flags
    mutable bool qabstractscrollarea_minimumsizehint_isbase = false;
    mutable bool qabstractscrollarea_sizehint_isbase = false;
    mutable bool qabstractscrollarea_setupviewport_isbase = false;
    mutable bool qabstractscrollarea_eventfilter_isbase = false;
    mutable bool qabstractscrollarea_event_isbase = false;
    mutable bool qabstractscrollarea_viewportevent_isbase = false;
    mutable bool qabstractscrollarea_resizeevent_isbase = false;
    mutable bool qabstractscrollarea_paintevent_isbase = false;
    mutable bool qabstractscrollarea_mousepressevent_isbase = false;
    mutable bool qabstractscrollarea_mousereleaseevent_isbase = false;
    mutable bool qabstractscrollarea_mousedoubleclickevent_isbase = false;
    mutable bool qabstractscrollarea_mousemoveevent_isbase = false;
    mutable bool qabstractscrollarea_wheelevent_isbase = false;
    mutable bool qabstractscrollarea_contextmenuevent_isbase = false;
    mutable bool qabstractscrollarea_dragenterevent_isbase = false;
    mutable bool qabstractscrollarea_dragmoveevent_isbase = false;
    mutable bool qabstractscrollarea_dragleaveevent_isbase = false;
    mutable bool qabstractscrollarea_dropevent_isbase = false;
    mutable bool qabstractscrollarea_keypressevent_isbase = false;
    mutable bool qabstractscrollarea_scrollcontentsby_isbase = false;
    mutable bool qabstractscrollarea_viewportsizehint_isbase = false;
    mutable bool qabstractscrollarea_setviewportmargins_isbase = false;
    mutable bool qabstractscrollarea_setviewportmargins2_isbase = false;
    mutable bool qabstractscrollarea_viewportmargins_isbase = false;

public:
	VirtualQAbstractScrollArea(QWidget* parent): QAbstractScrollArea(parent) {};
	VirtualQAbstractScrollArea(): QAbstractScrollArea() {};

	~VirtualQAbstractScrollArea() {
		qabstractscrollarea_minimumsizehint_callback = nullptr;
		qabstractscrollarea_sizehint_callback = nullptr;
		qabstractscrollarea_setupviewport_callback = nullptr;
		qabstractscrollarea_eventfilter_callback = nullptr;
		qabstractscrollarea_event_callback = nullptr;
		qabstractscrollarea_viewportevent_callback = nullptr;
		qabstractscrollarea_resizeevent_callback = nullptr;
		qabstractscrollarea_paintevent_callback = nullptr;
		qabstractscrollarea_mousepressevent_callback = nullptr;
		qabstractscrollarea_mousereleaseevent_callback = nullptr;
		qabstractscrollarea_mousedoubleclickevent_callback = nullptr;
		qabstractscrollarea_mousemoveevent_callback = nullptr;
		qabstractscrollarea_wheelevent_callback = nullptr;
		qabstractscrollarea_contextmenuevent_callback = nullptr;
		qabstractscrollarea_dragenterevent_callback = nullptr;
		qabstractscrollarea_dragmoveevent_callback = nullptr;
		qabstractscrollarea_dragleaveevent_callback = nullptr;
		qabstractscrollarea_dropevent_callback = nullptr;
		qabstractscrollarea_keypressevent_callback = nullptr;
		qabstractscrollarea_scrollcontentsby_callback = nullptr;
		qabstractscrollarea_viewportsizehint_callback = nullptr;
		qabstractscrollarea_setviewportmargins_callback = nullptr;
		qabstractscrollarea_setviewportmargins2_callback = nullptr;
		qabstractscrollarea_viewportmargins_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractScrollArea_MinimumSizeHint_Callback(QAbstractScrollArea_MinimumSizeHint_Callback cb) const { qabstractscrollarea_minimumsizehint_callback = cb; }
	inline void setQAbstractScrollArea_SizeHint_Callback(QAbstractScrollArea_SizeHint_Callback cb) const { qabstractscrollarea_sizehint_callback = cb; }
	inline void setQAbstractScrollArea_SetupViewport_Callback(QAbstractScrollArea_SetupViewport_Callback cb) const { qabstractscrollarea_setupviewport_callback = cb; }
	inline void setQAbstractScrollArea_EventFilter_Callback(QAbstractScrollArea_EventFilter_Callback cb) const { qabstractscrollarea_eventfilter_callback = cb; }
	inline void setQAbstractScrollArea_Event_Callback(QAbstractScrollArea_Event_Callback cb) const { qabstractscrollarea_event_callback = cb; }
	inline void setQAbstractScrollArea_ViewportEvent_Callback(QAbstractScrollArea_ViewportEvent_Callback cb) const { qabstractscrollarea_viewportevent_callback = cb; }
	inline void setQAbstractScrollArea_ResizeEvent_Callback(QAbstractScrollArea_ResizeEvent_Callback cb) const { qabstractscrollarea_resizeevent_callback = cb; }
	inline void setQAbstractScrollArea_PaintEvent_Callback(QAbstractScrollArea_PaintEvent_Callback cb) const { qabstractscrollarea_paintevent_callback = cb; }
	inline void setQAbstractScrollArea_MousePressEvent_Callback(QAbstractScrollArea_MousePressEvent_Callback cb) const { qabstractscrollarea_mousepressevent_callback = cb; }
	inline void setQAbstractScrollArea_MouseReleaseEvent_Callback(QAbstractScrollArea_MouseReleaseEvent_Callback cb) const { qabstractscrollarea_mousereleaseevent_callback = cb; }
	inline void setQAbstractScrollArea_MouseDoubleClickEvent_Callback(QAbstractScrollArea_MouseDoubleClickEvent_Callback cb) const { qabstractscrollarea_mousedoubleclickevent_callback = cb; }
	inline void setQAbstractScrollArea_MouseMoveEvent_Callback(QAbstractScrollArea_MouseMoveEvent_Callback cb) const { qabstractscrollarea_mousemoveevent_callback = cb; }
	inline void setQAbstractScrollArea_WheelEvent_Callback(QAbstractScrollArea_WheelEvent_Callback cb) const { qabstractscrollarea_wheelevent_callback = cb; }
	inline void setQAbstractScrollArea_ContextMenuEvent_Callback(QAbstractScrollArea_ContextMenuEvent_Callback cb) const { qabstractscrollarea_contextmenuevent_callback = cb; }
	inline void setQAbstractScrollArea_DragEnterEvent_Callback(QAbstractScrollArea_DragEnterEvent_Callback cb) const { qabstractscrollarea_dragenterevent_callback = cb; }
	inline void setQAbstractScrollArea_DragMoveEvent_Callback(QAbstractScrollArea_DragMoveEvent_Callback cb) const { qabstractscrollarea_dragmoveevent_callback = cb; }
	inline void setQAbstractScrollArea_DragLeaveEvent_Callback(QAbstractScrollArea_DragLeaveEvent_Callback cb) const { qabstractscrollarea_dragleaveevent_callback = cb; }
	inline void setQAbstractScrollArea_DropEvent_Callback(QAbstractScrollArea_DropEvent_Callback cb) const { qabstractscrollarea_dropevent_callback = cb; }
	inline void setQAbstractScrollArea_KeyPressEvent_Callback(QAbstractScrollArea_KeyPressEvent_Callback cb) const { qabstractscrollarea_keypressevent_callback = cb; }
	inline void setQAbstractScrollArea_ScrollContentsBy_Callback(QAbstractScrollArea_ScrollContentsBy_Callback cb) const { qabstractscrollarea_scrollcontentsby_callback = cb; }
	inline void setQAbstractScrollArea_ViewportSizeHint_Callback(QAbstractScrollArea_ViewportSizeHint_Callback cb) const { qabstractscrollarea_viewportsizehint_callback = cb; }
	inline void setQAbstractScrollArea_SetViewportMargins_Callback(QAbstractScrollArea_SetViewportMargins_Callback cb) const { qabstractscrollarea_setviewportmargins_callback = cb; }
	inline void setQAbstractScrollArea_SetViewportMargins2_Callback(QAbstractScrollArea_SetViewportMargins2_Callback cb) const { qabstractscrollarea_setviewportmargins2_callback = cb; }
	inline void setQAbstractScrollArea_ViewportMargins_Callback(QAbstractScrollArea_ViewportMargins_Callback cb) const { qabstractscrollarea_viewportmargins_callback = cb; }

// Base flag setters
	inline void setQAbstractScrollArea_MinimumSizeHint_IsBase(bool value) const { qabstractscrollarea_minimumsizehint_isbase = value; }
	inline void setQAbstractScrollArea_SizeHint_IsBase(bool value) const { qabstractscrollarea_sizehint_isbase = value; }
	inline void setQAbstractScrollArea_SetupViewport_IsBase(bool value) const { qabstractscrollarea_setupviewport_isbase = value; }
	inline void setQAbstractScrollArea_EventFilter_IsBase(bool value) const { qabstractscrollarea_eventfilter_isbase = value; }
	inline void setQAbstractScrollArea_Event_IsBase(bool value) const { qabstractscrollarea_event_isbase = value; }
	inline void setQAbstractScrollArea_ViewportEvent_IsBase(bool value) const { qabstractscrollarea_viewportevent_isbase = value; }
	inline void setQAbstractScrollArea_ResizeEvent_IsBase(bool value) const { qabstractscrollarea_resizeevent_isbase = value; }
	inline void setQAbstractScrollArea_PaintEvent_IsBase(bool value) const { qabstractscrollarea_paintevent_isbase = value; }
	inline void setQAbstractScrollArea_MousePressEvent_IsBase(bool value) const { qabstractscrollarea_mousepressevent_isbase = value; }
	inline void setQAbstractScrollArea_MouseReleaseEvent_IsBase(bool value) const { qabstractscrollarea_mousereleaseevent_isbase = value; }
	inline void setQAbstractScrollArea_MouseDoubleClickEvent_IsBase(bool value) const { qabstractscrollarea_mousedoubleclickevent_isbase = value; }
	inline void setQAbstractScrollArea_MouseMoveEvent_IsBase(bool value) const { qabstractscrollarea_mousemoveevent_isbase = value; }
	inline void setQAbstractScrollArea_WheelEvent_IsBase(bool value) const { qabstractscrollarea_wheelevent_isbase = value; }
	inline void setQAbstractScrollArea_ContextMenuEvent_IsBase(bool value) const { qabstractscrollarea_contextmenuevent_isbase = value; }
	inline void setQAbstractScrollArea_DragEnterEvent_IsBase(bool value) const { qabstractscrollarea_dragenterevent_isbase = value; }
	inline void setQAbstractScrollArea_DragMoveEvent_IsBase(bool value) const { qabstractscrollarea_dragmoveevent_isbase = value; }
	inline void setQAbstractScrollArea_DragLeaveEvent_IsBase(bool value) const { qabstractscrollarea_dragleaveevent_isbase = value; }
	inline void setQAbstractScrollArea_DropEvent_IsBase(bool value) const { qabstractscrollarea_dropevent_isbase = value; }
	inline void setQAbstractScrollArea_KeyPressEvent_IsBase(bool value) const { qabstractscrollarea_keypressevent_isbase = value; }
	inline void setQAbstractScrollArea_ScrollContentsBy_IsBase(bool value) const { qabstractscrollarea_scrollcontentsby_isbase = value; }
	inline void setQAbstractScrollArea_ViewportSizeHint_IsBase(bool value) const { qabstractscrollarea_viewportsizehint_isbase = value; }
	inline void setQAbstractScrollArea_SetViewportMargins_IsBase(bool value) const { qabstractscrollarea_setviewportmargins_isbase = value; }
	inline void setQAbstractScrollArea_SetViewportMargins2_IsBase(bool value) const { qabstractscrollarea_setviewportmargins2_isbase = value; }
	inline void setQAbstractScrollArea_ViewportMargins_IsBase(bool value) const { qabstractscrollarea_viewportmargins_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qabstractscrollarea_minimumsizehint_isbase) {
			qabstractscrollarea_minimumsizehint_isbase = false;
			return QAbstractScrollArea::minimumSizeHint();
		} else if (qabstractscrollarea_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qabstractscrollarea_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QAbstractScrollArea::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qabstractscrollarea_sizehint_isbase) {
			qabstractscrollarea_sizehint_isbase = false;
			return QAbstractScrollArea::sizeHint();
		} else if (qabstractscrollarea_sizehint_callback != nullptr) {
			QSize* callback_ret = qabstractscrollarea_sizehint_callback();
			return *callback_ret;
		} else {
			return QAbstractScrollArea::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setupViewport(QWidget* viewport) override {
		if (qabstractscrollarea_setupviewport_isbase) {
			qabstractscrollarea_setupviewport_isbase = false;
			QAbstractScrollArea::setupViewport(viewport);
		} else if (qabstractscrollarea_setupviewport_callback != nullptr) {
			QWidget* cbval1 = viewport;
			qabstractscrollarea_setupviewport_callback(this, cbval1);
		} else {
			QAbstractScrollArea::setupViewport(viewport);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (qabstractscrollarea_eventfilter_isbase) {
			qabstractscrollarea_eventfilter_isbase = false;
			return QAbstractScrollArea::eventFilter(param1, param2);
		} else if (qabstractscrollarea_eventfilter_callback != nullptr) {
			QObject* cbval1 = param1;
			QEvent* cbval2 = param2;
			bool callback_ret = qabstractscrollarea_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QAbstractScrollArea::eventFilter(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qabstractscrollarea_event_isbase) {
			qabstractscrollarea_event_isbase = false;
			return QAbstractScrollArea::event(param1);
		} else if (qabstractscrollarea_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qabstractscrollarea_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractScrollArea::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool viewportEvent(QEvent* param1) override {
		if (qabstractscrollarea_viewportevent_isbase) {
			qabstractscrollarea_viewportevent_isbase = false;
			return QAbstractScrollArea::viewportEvent(param1);
		} else if (qabstractscrollarea_viewportevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qabstractscrollarea_viewportevent_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractScrollArea::viewportEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (qabstractscrollarea_resizeevent_isbase) {
			qabstractscrollarea_resizeevent_isbase = false;
			QAbstractScrollArea::resizeEvent(param1);
		} else if (qabstractscrollarea_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = param1;
			qabstractscrollarea_resizeevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::resizeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qabstractscrollarea_paintevent_isbase) {
			qabstractscrollarea_paintevent_isbase = false;
			QAbstractScrollArea::paintEvent(param1);
		} else if (qabstractscrollarea_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qabstractscrollarea_paintevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (qabstractscrollarea_mousepressevent_isbase) {
			qabstractscrollarea_mousepressevent_isbase = false;
			QAbstractScrollArea::mousePressEvent(param1);
		} else if (qabstractscrollarea_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qabstractscrollarea_mousepressevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::mousePressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (qabstractscrollarea_mousereleaseevent_isbase) {
			qabstractscrollarea_mousereleaseevent_isbase = false;
			QAbstractScrollArea::mouseReleaseEvent(param1);
		} else if (qabstractscrollarea_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qabstractscrollarea_mousereleaseevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::mouseReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (qabstractscrollarea_mousedoubleclickevent_isbase) {
			qabstractscrollarea_mousedoubleclickevent_isbase = false;
			QAbstractScrollArea::mouseDoubleClickEvent(param1);
		} else if (qabstractscrollarea_mousedoubleclickevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qabstractscrollarea_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::mouseDoubleClickEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qabstractscrollarea_mousemoveevent_isbase) {
			qabstractscrollarea_mousemoveevent_isbase = false;
			QAbstractScrollArea::mouseMoveEvent(param1);
		} else if (qabstractscrollarea_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qabstractscrollarea_mousemoveevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (qabstractscrollarea_wheelevent_isbase) {
			qabstractscrollarea_wheelevent_isbase = false;
			QAbstractScrollArea::wheelEvent(param1);
		} else if (qabstractscrollarea_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = param1;
			qabstractscrollarea_wheelevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::wheelEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (qabstractscrollarea_contextmenuevent_isbase) {
			qabstractscrollarea_contextmenuevent_isbase = false;
			QAbstractScrollArea::contextMenuEvent(param1);
		} else if (qabstractscrollarea_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = param1;
			qabstractscrollarea_contextmenuevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::contextMenuEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (qabstractscrollarea_dragenterevent_isbase) {
			qabstractscrollarea_dragenterevent_isbase = false;
			QAbstractScrollArea::dragEnterEvent(param1);
		} else if (qabstractscrollarea_dragenterevent_callback != nullptr) {
			QDragEnterEvent* cbval1 = param1;
			qabstractscrollarea_dragenterevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::dragEnterEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragMoveEvent(QDragMoveEvent* param1) override {
		if (qabstractscrollarea_dragmoveevent_isbase) {
			qabstractscrollarea_dragmoveevent_isbase = false;
			QAbstractScrollArea::dragMoveEvent(param1);
		} else if (qabstractscrollarea_dragmoveevent_callback != nullptr) {
			QDragMoveEvent* cbval1 = param1;
			qabstractscrollarea_dragmoveevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::dragMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
		if (qabstractscrollarea_dragleaveevent_isbase) {
			qabstractscrollarea_dragleaveevent_isbase = false;
			QAbstractScrollArea::dragLeaveEvent(param1);
		} else if (qabstractscrollarea_dragleaveevent_callback != nullptr) {
			QDragLeaveEvent* cbval1 = param1;
			qabstractscrollarea_dragleaveevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::dragLeaveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QDropEvent* param1) override {
		if (qabstractscrollarea_dropevent_isbase) {
			qabstractscrollarea_dropevent_isbase = false;
			QAbstractScrollArea::dropEvent(param1);
		} else if (qabstractscrollarea_dropevent_callback != nullptr) {
			QDropEvent* cbval1 = param1;
			qabstractscrollarea_dropevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::dropEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (qabstractscrollarea_keypressevent_isbase) {
			qabstractscrollarea_keypressevent_isbase = false;
			QAbstractScrollArea::keyPressEvent(param1);
		} else if (qabstractscrollarea_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qabstractscrollarea_keypressevent_callback(this, cbval1);
		} else {
			QAbstractScrollArea::keyPressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollContentsBy(int dx, int dy) override {
		if (qabstractscrollarea_scrollcontentsby_isbase) {
			qabstractscrollarea_scrollcontentsby_isbase = false;
			QAbstractScrollArea::scrollContentsBy(dx, dy);
		} else if (qabstractscrollarea_scrollcontentsby_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qabstractscrollarea_scrollcontentsby_callback(this, cbval1, cbval2);
		} else {
			QAbstractScrollArea::scrollContentsBy(dx, dy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize viewportSizeHint() const override {
		if (qabstractscrollarea_viewportsizehint_isbase) {
			qabstractscrollarea_viewportsizehint_isbase = false;
			return QAbstractScrollArea::viewportSizeHint();
		} else if (qabstractscrollarea_viewportsizehint_callback != nullptr) {
			QSize* callback_ret = qabstractscrollarea_viewportsizehint_callback();
			return *callback_ret;
		} else {
			return QAbstractScrollArea::viewportSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setViewportMargins(int left, int top, int right, int bottom) {
		if (qabstractscrollarea_setviewportmargins_isbase) {
			qabstractscrollarea_setviewportmargins_isbase = false;
			QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
		} else if (qabstractscrollarea_setviewportmargins_callback != nullptr) {
			int cbval1 = left;
			int cbval2 = top;
			int cbval3 = right;
			int cbval4 = bottom;
			qabstractscrollarea_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setViewportMargins(const QMargins& margins) {
		if (qabstractscrollarea_setviewportmargins2_isbase) {
			qabstractscrollarea_setviewportmargins2_isbase = false;
			QAbstractScrollArea::setViewportMargins(margins);
		} else if (qabstractscrollarea_setviewportmargins2_callback != nullptr) {
			const QMargins* cbval1 = (const QMargins*)&margins;
			qabstractscrollarea_setviewportmargins2_callback(this, cbval1);
		} else {
			QAbstractScrollArea::setViewportMargins(margins);
		}
	}

	// Virtual method for C ABI access and custom callback
	QMargins viewportMargins() const {
		if (qabstractscrollarea_viewportmargins_isbase) {
			qabstractscrollarea_viewportmargins_isbase = false;
			return QAbstractScrollArea::viewportMargins();
		} else if (qabstractscrollarea_viewportmargins_callback != nullptr) {
			QMargins* callback_ret = qabstractscrollarea_viewportmargins_callback();
			return *callback_ret;
		} else {
			return QAbstractScrollArea::viewportMargins();
		}
	}

	// Friend functions
	friend bool QAbstractScrollArea_EventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2);
	friend bool QAbstractScrollArea_QBaseEventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2);
	friend bool QAbstractScrollArea_Event(QAbstractScrollArea* self, QEvent* param1);
	friend bool QAbstractScrollArea_QBaseEvent(QAbstractScrollArea* self, QEvent* param1);
	friend bool QAbstractScrollArea_ViewportEvent(QAbstractScrollArea* self, QEvent* param1);
	friend bool QAbstractScrollArea_QBaseViewportEvent(QAbstractScrollArea* self, QEvent* param1);
	friend void QAbstractScrollArea_ResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1);
	friend void QAbstractScrollArea_QBaseResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1);
	friend void QAbstractScrollArea_PaintEvent(QAbstractScrollArea* self, QPaintEvent* param1);
	friend void QAbstractScrollArea_QBasePaintEvent(QAbstractScrollArea* self, QPaintEvent* param1);
	friend void QAbstractScrollArea_MousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1);
	friend void QAbstractScrollArea_QBaseMousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1);
	friend void QAbstractScrollArea_MouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1);
	friend void QAbstractScrollArea_QBaseMouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1);
	friend void QAbstractScrollArea_MouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1);
	friend void QAbstractScrollArea_QBaseMouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1);
	friend void QAbstractScrollArea_MouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1);
	friend void QAbstractScrollArea_QBaseMouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1);
	friend void QAbstractScrollArea_WheelEvent(QAbstractScrollArea* self, QWheelEvent* param1);
	friend void QAbstractScrollArea_QBaseWheelEvent(QAbstractScrollArea* self, QWheelEvent* param1);
	friend void QAbstractScrollArea_ContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1);
	friend void QAbstractScrollArea_QBaseContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1);
	friend void QAbstractScrollArea_DragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1);
	friend void QAbstractScrollArea_QBaseDragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1);
	friend void QAbstractScrollArea_DragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1);
	friend void QAbstractScrollArea_QBaseDragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1);
	friend void QAbstractScrollArea_DragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1);
	friend void QAbstractScrollArea_QBaseDragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1);
	friend void QAbstractScrollArea_DropEvent(QAbstractScrollArea* self, QDropEvent* param1);
	friend void QAbstractScrollArea_QBaseDropEvent(QAbstractScrollArea* self, QDropEvent* param1);
	friend void QAbstractScrollArea_KeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1);
	friend void QAbstractScrollArea_QBaseKeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1);
	friend void QAbstractScrollArea_ScrollContentsBy(QAbstractScrollArea* self, int dx, int dy);
	friend void QAbstractScrollArea_QBaseScrollContentsBy(QAbstractScrollArea* self, int dx, int dy);
	friend QSize* QAbstractScrollArea_ViewportSizeHint(const QAbstractScrollArea* self);
	friend QSize* QAbstractScrollArea_QBaseViewportSizeHint(const QAbstractScrollArea* self);
	friend void QAbstractScrollArea_SetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom);
	friend void QAbstractScrollArea_QBaseSetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom);
	friend void QAbstractScrollArea_SetViewportMargins2(QAbstractScrollArea* self, const QMargins* margins);
	friend void QAbstractScrollArea_QBaseSetViewportMargins2(QAbstractScrollArea* self, const QMargins* margins);
	friend QMargins* QAbstractScrollArea_ViewportMargins(const QAbstractScrollArea* self);
	friend QMargins* QAbstractScrollArea_QBaseViewportMargins(const QAbstractScrollArea* self);
};

#endif


