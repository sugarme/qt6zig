#pragma once
#ifndef QMDISUBWINDOW_H_C_LIBVIRTUAL
#define QMDISUBWINDOW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QMdiSubWindow so that we can call protected methods
class VirtualQMdiSubWindow final : public QMdiSubWindow {

public:
	// Virtual class boolean flag
	bool isVirtualQMdiSubWindow= true;

	// Virtual class public types (including callbacks)
	using QMdiSubWindow_SizeHint_Callback = QSize* (*)();
	using QMdiSubWindow_MinimumSizeHint_Callback = QSize* (*)();
	using QMdiSubWindow_EventFilter_Callback = bool (*)(QMdiSubWindow*, QObject*, QEvent*);
	using QMdiSubWindow_Event_Callback = bool (*)(QMdiSubWindow*, QEvent*);
	using QMdiSubWindow_ShowEvent_Callback = void (*)(QMdiSubWindow*, QShowEvent*);
	using QMdiSubWindow_HideEvent_Callback = void (*)(QMdiSubWindow*, QHideEvent*);
	using QMdiSubWindow_ChangeEvent_Callback = void (*)(QMdiSubWindow*, QEvent*);
	using QMdiSubWindow_CloseEvent_Callback = void (*)(QMdiSubWindow*, QCloseEvent*);
	using QMdiSubWindow_LeaveEvent_Callback = void (*)(QMdiSubWindow*, QEvent*);
	using QMdiSubWindow_ResizeEvent_Callback = void (*)(QMdiSubWindow*, QResizeEvent*);
	using QMdiSubWindow_TimerEvent_Callback = void (*)(QMdiSubWindow*, QTimerEvent*);
	using QMdiSubWindow_MoveEvent_Callback = void (*)(QMdiSubWindow*, QMoveEvent*);
	using QMdiSubWindow_PaintEvent_Callback = void (*)(QMdiSubWindow*, QPaintEvent*);
	using QMdiSubWindow_MousePressEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
	using QMdiSubWindow_MouseDoubleClickEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
	using QMdiSubWindow_MouseReleaseEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
	using QMdiSubWindow_MouseMoveEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
	using QMdiSubWindow_KeyPressEvent_Callback = void (*)(QMdiSubWindow*, QKeyEvent*);
	using QMdiSubWindow_ContextMenuEvent_Callback = void (*)(QMdiSubWindow*, QContextMenuEvent*);
	using QMdiSubWindow_FocusInEvent_Callback = void (*)(QMdiSubWindow*, QFocusEvent*);
	using QMdiSubWindow_FocusOutEvent_Callback = void (*)(QMdiSubWindow*, QFocusEvent*);
	using QMdiSubWindow_ChildEvent_Callback = void (*)(QMdiSubWindow*, QChildEvent*);

protected:
	// Instance callback storage
	mutable QMdiSubWindow_SizeHint_Callback qmdisubwindow_sizehint_callback = nullptr;
	mutable QMdiSubWindow_MinimumSizeHint_Callback qmdisubwindow_minimumsizehint_callback = nullptr;
	mutable QMdiSubWindow_EventFilter_Callback qmdisubwindow_eventfilter_callback = nullptr;
	mutable QMdiSubWindow_Event_Callback qmdisubwindow_event_callback = nullptr;
	mutable QMdiSubWindow_ShowEvent_Callback qmdisubwindow_showevent_callback = nullptr;
	mutable QMdiSubWindow_HideEvent_Callback qmdisubwindow_hideevent_callback = nullptr;
	mutable QMdiSubWindow_ChangeEvent_Callback qmdisubwindow_changeevent_callback = nullptr;
	mutable QMdiSubWindow_CloseEvent_Callback qmdisubwindow_closeevent_callback = nullptr;
	mutable QMdiSubWindow_LeaveEvent_Callback qmdisubwindow_leaveevent_callback = nullptr;
	mutable QMdiSubWindow_ResizeEvent_Callback qmdisubwindow_resizeevent_callback = nullptr;
	mutable QMdiSubWindow_TimerEvent_Callback qmdisubwindow_timerevent_callback = nullptr;
	mutable QMdiSubWindow_MoveEvent_Callback qmdisubwindow_moveevent_callback = nullptr;
	mutable QMdiSubWindow_PaintEvent_Callback qmdisubwindow_paintevent_callback = nullptr;
	mutable QMdiSubWindow_MousePressEvent_Callback qmdisubwindow_mousepressevent_callback = nullptr;
	mutable QMdiSubWindow_MouseDoubleClickEvent_Callback qmdisubwindow_mousedoubleclickevent_callback = nullptr;
	mutable QMdiSubWindow_MouseReleaseEvent_Callback qmdisubwindow_mousereleaseevent_callback = nullptr;
	mutable QMdiSubWindow_MouseMoveEvent_Callback qmdisubwindow_mousemoveevent_callback = nullptr;
	mutable QMdiSubWindow_KeyPressEvent_Callback qmdisubwindow_keypressevent_callback = nullptr;
	mutable QMdiSubWindow_ContextMenuEvent_Callback qmdisubwindow_contextmenuevent_callback = nullptr;
	mutable QMdiSubWindow_FocusInEvent_Callback qmdisubwindow_focusinevent_callback = nullptr;
	mutable QMdiSubWindow_FocusOutEvent_Callback qmdisubwindow_focusoutevent_callback = nullptr;
	mutable QMdiSubWindow_ChildEvent_Callback qmdisubwindow_childevent_callback = nullptr;

	// Instance base flags
    mutable bool qmdisubwindow_sizehint_isbase = false;
    mutable bool qmdisubwindow_minimumsizehint_isbase = false;
    mutable bool qmdisubwindow_eventfilter_isbase = false;
    mutable bool qmdisubwindow_event_isbase = false;
    mutable bool qmdisubwindow_showevent_isbase = false;
    mutable bool qmdisubwindow_hideevent_isbase = false;
    mutable bool qmdisubwindow_changeevent_isbase = false;
    mutable bool qmdisubwindow_closeevent_isbase = false;
    mutable bool qmdisubwindow_leaveevent_isbase = false;
    mutable bool qmdisubwindow_resizeevent_isbase = false;
    mutable bool qmdisubwindow_timerevent_isbase = false;
    mutable bool qmdisubwindow_moveevent_isbase = false;
    mutable bool qmdisubwindow_paintevent_isbase = false;
    mutable bool qmdisubwindow_mousepressevent_isbase = false;
    mutable bool qmdisubwindow_mousedoubleclickevent_isbase = false;
    mutable bool qmdisubwindow_mousereleaseevent_isbase = false;
    mutable bool qmdisubwindow_mousemoveevent_isbase = false;
    mutable bool qmdisubwindow_keypressevent_isbase = false;
    mutable bool qmdisubwindow_contextmenuevent_isbase = false;
    mutable bool qmdisubwindow_focusinevent_isbase = false;
    mutable bool qmdisubwindow_focusoutevent_isbase = false;
    mutable bool qmdisubwindow_childevent_isbase = false;

public:
	VirtualQMdiSubWindow(QWidget* parent): QMdiSubWindow(parent) {};
	VirtualQMdiSubWindow(): QMdiSubWindow() {};
	VirtualQMdiSubWindow(QWidget* parent, Qt::WindowFlags flags): QMdiSubWindow(parent, flags) {};

	~VirtualQMdiSubWindow() {
		qmdisubwindow_sizehint_callback = nullptr;
		qmdisubwindow_minimumsizehint_callback = nullptr;
		qmdisubwindow_eventfilter_callback = nullptr;
		qmdisubwindow_event_callback = nullptr;
		qmdisubwindow_showevent_callback = nullptr;
		qmdisubwindow_hideevent_callback = nullptr;
		qmdisubwindow_changeevent_callback = nullptr;
		qmdisubwindow_closeevent_callback = nullptr;
		qmdisubwindow_leaveevent_callback = nullptr;
		qmdisubwindow_resizeevent_callback = nullptr;
		qmdisubwindow_timerevent_callback = nullptr;
		qmdisubwindow_moveevent_callback = nullptr;
		qmdisubwindow_paintevent_callback = nullptr;
		qmdisubwindow_mousepressevent_callback = nullptr;
		qmdisubwindow_mousedoubleclickevent_callback = nullptr;
		qmdisubwindow_mousereleaseevent_callback = nullptr;
		qmdisubwindow_mousemoveevent_callback = nullptr;
		qmdisubwindow_keypressevent_callback = nullptr;
		qmdisubwindow_contextmenuevent_callback = nullptr;
		qmdisubwindow_focusinevent_callback = nullptr;
		qmdisubwindow_focusoutevent_callback = nullptr;
		qmdisubwindow_childevent_callback = nullptr;
	}

// Callback setters
	inline void setQMdiSubWindow_SizeHint_Callback(QMdiSubWindow_SizeHint_Callback cb) const { qmdisubwindow_sizehint_callback = cb; }
	inline void setQMdiSubWindow_MinimumSizeHint_Callback(QMdiSubWindow_MinimumSizeHint_Callback cb) const { qmdisubwindow_minimumsizehint_callback = cb; }
	inline void setQMdiSubWindow_EventFilter_Callback(QMdiSubWindow_EventFilter_Callback cb) const { qmdisubwindow_eventfilter_callback = cb; }
	inline void setQMdiSubWindow_Event_Callback(QMdiSubWindow_Event_Callback cb) const { qmdisubwindow_event_callback = cb; }
	inline void setQMdiSubWindow_ShowEvent_Callback(QMdiSubWindow_ShowEvent_Callback cb) const { qmdisubwindow_showevent_callback = cb; }
	inline void setQMdiSubWindow_HideEvent_Callback(QMdiSubWindow_HideEvent_Callback cb) const { qmdisubwindow_hideevent_callback = cb; }
	inline void setQMdiSubWindow_ChangeEvent_Callback(QMdiSubWindow_ChangeEvent_Callback cb) const { qmdisubwindow_changeevent_callback = cb; }
	inline void setQMdiSubWindow_CloseEvent_Callback(QMdiSubWindow_CloseEvent_Callback cb) const { qmdisubwindow_closeevent_callback = cb; }
	inline void setQMdiSubWindow_LeaveEvent_Callback(QMdiSubWindow_LeaveEvent_Callback cb) const { qmdisubwindow_leaveevent_callback = cb; }
	inline void setQMdiSubWindow_ResizeEvent_Callback(QMdiSubWindow_ResizeEvent_Callback cb) const { qmdisubwindow_resizeevent_callback = cb; }
	inline void setQMdiSubWindow_TimerEvent_Callback(QMdiSubWindow_TimerEvent_Callback cb) const { qmdisubwindow_timerevent_callback = cb; }
	inline void setQMdiSubWindow_MoveEvent_Callback(QMdiSubWindow_MoveEvent_Callback cb) const { qmdisubwindow_moveevent_callback = cb; }
	inline void setQMdiSubWindow_PaintEvent_Callback(QMdiSubWindow_PaintEvent_Callback cb) const { qmdisubwindow_paintevent_callback = cb; }
	inline void setQMdiSubWindow_MousePressEvent_Callback(QMdiSubWindow_MousePressEvent_Callback cb) const { qmdisubwindow_mousepressevent_callback = cb; }
	inline void setQMdiSubWindow_MouseDoubleClickEvent_Callback(QMdiSubWindow_MouseDoubleClickEvent_Callback cb) const { qmdisubwindow_mousedoubleclickevent_callback = cb; }
	inline void setQMdiSubWindow_MouseReleaseEvent_Callback(QMdiSubWindow_MouseReleaseEvent_Callback cb) const { qmdisubwindow_mousereleaseevent_callback = cb; }
	inline void setQMdiSubWindow_MouseMoveEvent_Callback(QMdiSubWindow_MouseMoveEvent_Callback cb) const { qmdisubwindow_mousemoveevent_callback = cb; }
	inline void setQMdiSubWindow_KeyPressEvent_Callback(QMdiSubWindow_KeyPressEvent_Callback cb) const { qmdisubwindow_keypressevent_callback = cb; }
	inline void setQMdiSubWindow_ContextMenuEvent_Callback(QMdiSubWindow_ContextMenuEvent_Callback cb) const { qmdisubwindow_contextmenuevent_callback = cb; }
	inline void setQMdiSubWindow_FocusInEvent_Callback(QMdiSubWindow_FocusInEvent_Callback cb) const { qmdisubwindow_focusinevent_callback = cb; }
	inline void setQMdiSubWindow_FocusOutEvent_Callback(QMdiSubWindow_FocusOutEvent_Callback cb) const { qmdisubwindow_focusoutevent_callback = cb; }
	inline void setQMdiSubWindow_ChildEvent_Callback(QMdiSubWindow_ChildEvent_Callback cb) const { qmdisubwindow_childevent_callback = cb; }

// Base flag setters
	inline void setQMdiSubWindow_SizeHint_IsBase(bool value) const { qmdisubwindow_sizehint_isbase = value; }
	inline void setQMdiSubWindow_MinimumSizeHint_IsBase(bool value) const { qmdisubwindow_minimumsizehint_isbase = value; }
	inline void setQMdiSubWindow_EventFilter_IsBase(bool value) const { qmdisubwindow_eventfilter_isbase = value; }
	inline void setQMdiSubWindow_Event_IsBase(bool value) const { qmdisubwindow_event_isbase = value; }
	inline void setQMdiSubWindow_ShowEvent_IsBase(bool value) const { qmdisubwindow_showevent_isbase = value; }
	inline void setQMdiSubWindow_HideEvent_IsBase(bool value) const { qmdisubwindow_hideevent_isbase = value; }
	inline void setQMdiSubWindow_ChangeEvent_IsBase(bool value) const { qmdisubwindow_changeevent_isbase = value; }
	inline void setQMdiSubWindow_CloseEvent_IsBase(bool value) const { qmdisubwindow_closeevent_isbase = value; }
	inline void setQMdiSubWindow_LeaveEvent_IsBase(bool value) const { qmdisubwindow_leaveevent_isbase = value; }
	inline void setQMdiSubWindow_ResizeEvent_IsBase(bool value) const { qmdisubwindow_resizeevent_isbase = value; }
	inline void setQMdiSubWindow_TimerEvent_IsBase(bool value) const { qmdisubwindow_timerevent_isbase = value; }
	inline void setQMdiSubWindow_MoveEvent_IsBase(bool value) const { qmdisubwindow_moveevent_isbase = value; }
	inline void setQMdiSubWindow_PaintEvent_IsBase(bool value) const { qmdisubwindow_paintevent_isbase = value; }
	inline void setQMdiSubWindow_MousePressEvent_IsBase(bool value) const { qmdisubwindow_mousepressevent_isbase = value; }
	inline void setQMdiSubWindow_MouseDoubleClickEvent_IsBase(bool value) const { qmdisubwindow_mousedoubleclickevent_isbase = value; }
	inline void setQMdiSubWindow_MouseReleaseEvent_IsBase(bool value) const { qmdisubwindow_mousereleaseevent_isbase = value; }
	inline void setQMdiSubWindow_MouseMoveEvent_IsBase(bool value) const { qmdisubwindow_mousemoveevent_isbase = value; }
	inline void setQMdiSubWindow_KeyPressEvent_IsBase(bool value) const { qmdisubwindow_keypressevent_isbase = value; }
	inline void setQMdiSubWindow_ContextMenuEvent_IsBase(bool value) const { qmdisubwindow_contextmenuevent_isbase = value; }
	inline void setQMdiSubWindow_FocusInEvent_IsBase(bool value) const { qmdisubwindow_focusinevent_isbase = value; }
	inline void setQMdiSubWindow_FocusOutEvent_IsBase(bool value) const { qmdisubwindow_focusoutevent_isbase = value; }
	inline void setQMdiSubWindow_ChildEvent_IsBase(bool value) const { qmdisubwindow_childevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qmdisubwindow_sizehint_isbase) {
			qmdisubwindow_sizehint_isbase = false;
			return QMdiSubWindow::sizeHint();
		} else if (qmdisubwindow_sizehint_callback != nullptr) {
			QSize* callback_ret = qmdisubwindow_sizehint_callback();
			return *callback_ret;
		} else {
			return QMdiSubWindow::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qmdisubwindow_minimumsizehint_isbase) {
			qmdisubwindow_minimumsizehint_isbase = false;
			return QMdiSubWindow::minimumSizeHint();
		} else if (qmdisubwindow_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qmdisubwindow_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QMdiSubWindow::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (qmdisubwindow_eventfilter_isbase) {
			qmdisubwindow_eventfilter_isbase = false;
			return QMdiSubWindow::eventFilter(object, event);
		} else if (qmdisubwindow_eventfilter_callback != nullptr) {
			QObject* cbval1 = object;
			QEvent* cbval2 = event;
			bool callback_ret = qmdisubwindow_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QMdiSubWindow::eventFilter(object, event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qmdisubwindow_event_isbase) {
			qmdisubwindow_event_isbase = false;
			return QMdiSubWindow::event(event);
		} else if (qmdisubwindow_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qmdisubwindow_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QMdiSubWindow::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* showEvent) override {
		if (qmdisubwindow_showevent_isbase) {
			qmdisubwindow_showevent_isbase = false;
			QMdiSubWindow::showEvent(showEvent);
		} else if (qmdisubwindow_showevent_callback != nullptr) {
			QShowEvent* cbval1 = showEvent;
			qmdisubwindow_showevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::showEvent(showEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hideEvent(QHideEvent* hideEvent) override {
		if (qmdisubwindow_hideevent_isbase) {
			qmdisubwindow_hideevent_isbase = false;
			QMdiSubWindow::hideEvent(hideEvent);
		} else if (qmdisubwindow_hideevent_callback != nullptr) {
			QHideEvent* cbval1 = hideEvent;
			qmdisubwindow_hideevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::hideEvent(hideEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* changeEvent) override {
		if (qmdisubwindow_changeevent_isbase) {
			qmdisubwindow_changeevent_isbase = false;
			QMdiSubWindow::changeEvent(changeEvent);
		} else if (qmdisubwindow_changeevent_callback != nullptr) {
			QEvent* cbval1 = changeEvent;
			qmdisubwindow_changeevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::changeEvent(changeEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void closeEvent(QCloseEvent* closeEvent) override {
		if (qmdisubwindow_closeevent_isbase) {
			qmdisubwindow_closeevent_isbase = false;
			QMdiSubWindow::closeEvent(closeEvent);
		} else if (qmdisubwindow_closeevent_callback != nullptr) {
			QCloseEvent* cbval1 = closeEvent;
			qmdisubwindow_closeevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::closeEvent(closeEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void leaveEvent(QEvent* leaveEvent) override {
		if (qmdisubwindow_leaveevent_isbase) {
			qmdisubwindow_leaveevent_isbase = false;
			QMdiSubWindow::leaveEvent(leaveEvent);
		} else if (qmdisubwindow_leaveevent_callback != nullptr) {
			QEvent* cbval1 = leaveEvent;
			qmdisubwindow_leaveevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::leaveEvent(leaveEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* resizeEvent) override {
		if (qmdisubwindow_resizeevent_isbase) {
			qmdisubwindow_resizeevent_isbase = false;
			QMdiSubWindow::resizeEvent(resizeEvent);
		} else if (qmdisubwindow_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = resizeEvent;
			qmdisubwindow_resizeevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::resizeEvent(resizeEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* timerEvent) override {
		if (qmdisubwindow_timerevent_isbase) {
			qmdisubwindow_timerevent_isbase = false;
			QMdiSubWindow::timerEvent(timerEvent);
		} else if (qmdisubwindow_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = timerEvent;
			qmdisubwindow_timerevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::timerEvent(timerEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void moveEvent(QMoveEvent* moveEvent) override {
		if (qmdisubwindow_moveevent_isbase) {
			qmdisubwindow_moveevent_isbase = false;
			QMdiSubWindow::moveEvent(moveEvent);
		} else if (qmdisubwindow_moveevent_callback != nullptr) {
			QMoveEvent* cbval1 = moveEvent;
			qmdisubwindow_moveevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::moveEvent(moveEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* paintEvent) override {
		if (qmdisubwindow_paintevent_isbase) {
			qmdisubwindow_paintevent_isbase = false;
			QMdiSubWindow::paintEvent(paintEvent);
		} else if (qmdisubwindow_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = paintEvent;
			qmdisubwindow_paintevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::paintEvent(paintEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* mouseEvent) override {
		if (qmdisubwindow_mousepressevent_isbase) {
			qmdisubwindow_mousepressevent_isbase = false;
			QMdiSubWindow::mousePressEvent(mouseEvent);
		} else if (qmdisubwindow_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = mouseEvent;
			qmdisubwindow_mousepressevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::mousePressEvent(mouseEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QMouseEvent* mouseEvent) override {
		if (qmdisubwindow_mousedoubleclickevent_isbase) {
			qmdisubwindow_mousedoubleclickevent_isbase = false;
			QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
		} else if (qmdisubwindow_mousedoubleclickevent_callback != nullptr) {
			QMouseEvent* cbval1 = mouseEvent;
			qmdisubwindow_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* mouseEvent) override {
		if (qmdisubwindow_mousereleaseevent_isbase) {
			qmdisubwindow_mousereleaseevent_isbase = false;
			QMdiSubWindow::mouseReleaseEvent(mouseEvent);
		} else if (qmdisubwindow_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = mouseEvent;
			qmdisubwindow_mousereleaseevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::mouseReleaseEvent(mouseEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* mouseEvent) override {
		if (qmdisubwindow_mousemoveevent_isbase) {
			qmdisubwindow_mousemoveevent_isbase = false;
			QMdiSubWindow::mouseMoveEvent(mouseEvent);
		} else if (qmdisubwindow_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = mouseEvent;
			qmdisubwindow_mousemoveevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::mouseMoveEvent(mouseEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* keyEvent) override {
		if (qmdisubwindow_keypressevent_isbase) {
			qmdisubwindow_keypressevent_isbase = false;
			QMdiSubWindow::keyPressEvent(keyEvent);
		} else if (qmdisubwindow_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = keyEvent;
			qmdisubwindow_keypressevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::keyPressEvent(keyEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* contextMenuEvent) override {
		if (qmdisubwindow_contextmenuevent_isbase) {
			qmdisubwindow_contextmenuevent_isbase = false;
			QMdiSubWindow::contextMenuEvent(contextMenuEvent);
		} else if (qmdisubwindow_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = contextMenuEvent;
			qmdisubwindow_contextmenuevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::contextMenuEvent(contextMenuEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* focusInEvent) override {
		if (qmdisubwindow_focusinevent_isbase) {
			qmdisubwindow_focusinevent_isbase = false;
			QMdiSubWindow::focusInEvent(focusInEvent);
		} else if (qmdisubwindow_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = focusInEvent;
			qmdisubwindow_focusinevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::focusInEvent(focusInEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* focusOutEvent) override {
		if (qmdisubwindow_focusoutevent_isbase) {
			qmdisubwindow_focusoutevent_isbase = false;
			QMdiSubWindow::focusOutEvent(focusOutEvent);
		} else if (qmdisubwindow_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = focusOutEvent;
			qmdisubwindow_focusoutevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::focusOutEvent(focusOutEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void childEvent(QChildEvent* childEvent) override {
		if (qmdisubwindow_childevent_isbase) {
			qmdisubwindow_childevent_isbase = false;
			QMdiSubWindow::childEvent(childEvent);
		} else if (qmdisubwindow_childevent_callback != nullptr) {
			QChildEvent* cbval1 = childEvent;
			qmdisubwindow_childevent_callback(this, cbval1);
		} else {
			QMdiSubWindow::childEvent(childEvent);
		}
	}

	// Friend functions
	friend bool QMdiSubWindow_EventFilter(QMdiSubWindow* self, QObject* object, QEvent* event);
	friend bool QMdiSubWindow_QBaseEventFilter(QMdiSubWindow* self, QObject* object, QEvent* event);
	friend bool QMdiSubWindow_Event(QMdiSubWindow* self, QEvent* event);
	friend bool QMdiSubWindow_QBaseEvent(QMdiSubWindow* self, QEvent* event);
	friend void QMdiSubWindow_ShowEvent(QMdiSubWindow* self, QShowEvent* showEvent);
	friend void QMdiSubWindow_QBaseShowEvent(QMdiSubWindow* self, QShowEvent* showEvent);
	friend void QMdiSubWindow_HideEvent(QMdiSubWindow* self, QHideEvent* hideEvent);
	friend void QMdiSubWindow_QBaseHideEvent(QMdiSubWindow* self, QHideEvent* hideEvent);
	friend void QMdiSubWindow_ChangeEvent(QMdiSubWindow* self, QEvent* changeEvent);
	friend void QMdiSubWindow_QBaseChangeEvent(QMdiSubWindow* self, QEvent* changeEvent);
	friend void QMdiSubWindow_CloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent);
	friend void QMdiSubWindow_QBaseCloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent);
	friend void QMdiSubWindow_LeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent);
	friend void QMdiSubWindow_QBaseLeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent);
	friend void QMdiSubWindow_ResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent);
	friend void QMdiSubWindow_QBaseResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent);
	friend void QMdiSubWindow_TimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent);
	friend void QMdiSubWindow_QBaseTimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent);
	friend void QMdiSubWindow_MoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent);
	friend void QMdiSubWindow_QBaseMoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent);
	friend void QMdiSubWindow_PaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent);
	friend void QMdiSubWindow_QBasePaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent);
	friend void QMdiSubWindow_MousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
	friend void QMdiSubWindow_QBaseMousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
	friend void QMdiSubWindow_MouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
	friend void QMdiSubWindow_QBaseMouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
	friend void QMdiSubWindow_MouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
	friend void QMdiSubWindow_QBaseMouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
	friend void QMdiSubWindow_MouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
	friend void QMdiSubWindow_QBaseMouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
	friend void QMdiSubWindow_KeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent);
	friend void QMdiSubWindow_QBaseKeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent);
	friend void QMdiSubWindow_ContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent);
	friend void QMdiSubWindow_QBaseContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent);
	friend void QMdiSubWindow_FocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent);
	friend void QMdiSubWindow_QBaseFocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent);
	friend void QMdiSubWindow_FocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent);
	friend void QMdiSubWindow_QBaseFocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent);
	friend void QMdiSubWindow_ChildEvent(QMdiSubWindow* self, QChildEvent* childEvent);
	friend void QMdiSubWindow_QBaseChildEvent(QMdiSubWindow* self, QChildEvent* childEvent);
};

#endif


