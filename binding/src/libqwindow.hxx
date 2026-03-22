#pragma once
#ifndef QWINDOW_H_C_LIBVIRTUAL
#define QWINDOW_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QWindow so that we can call protected methods
class VirtualQWindow final : public QWindow {

public:
	// Virtual class boolean flag
	bool isVirtualQWindow= true;

	// Virtual class public types (including callbacks)
	using QWindow_SurfaceType_Callback = int (*)();
	using QWindow_Format_Callback = QSurfaceFormat* (*)();
	using QWindow_Size_Callback = QSize* (*)();
	using QWindow_AccessibleRoot_Callback = QAccessibleInterface* (*)();
	using QWindow_FocusObject_Callback = QObject* (*)();
	using QWindow_ExposeEvent_Callback = void (*)(QWindow*, QExposeEvent*);
	using QWindow_ResizeEvent_Callback = void (*)(QWindow*, QResizeEvent*);
	using QWindow_PaintEvent_Callback = void (*)(QWindow*, QPaintEvent*);
	using QWindow_MoveEvent_Callback = void (*)(QWindow*, QMoveEvent*);
	using QWindow_FocusInEvent_Callback = void (*)(QWindow*, QFocusEvent*);
	using QWindow_FocusOutEvent_Callback = void (*)(QWindow*, QFocusEvent*);
	using QWindow_ShowEvent_Callback = void (*)(QWindow*, QShowEvent*);
	using QWindow_HideEvent_Callback = void (*)(QWindow*, QHideEvent*);
	using QWindow_CloseEvent_Callback = void (*)(QWindow*, QCloseEvent*);
	using QWindow_Event_Callback = bool (*)(QWindow*, QEvent*);
	using QWindow_KeyPressEvent_Callback = void (*)(QWindow*, QKeyEvent*);
	using QWindow_KeyReleaseEvent_Callback = void (*)(QWindow*, QKeyEvent*);
	using QWindow_MousePressEvent_Callback = void (*)(QWindow*, QMouseEvent*);
	using QWindow_MouseReleaseEvent_Callback = void (*)(QWindow*, QMouseEvent*);
	using QWindow_MouseDoubleClickEvent_Callback = void (*)(QWindow*, QMouseEvent*);
	using QWindow_MouseMoveEvent_Callback = void (*)(QWindow*, QMouseEvent*);
	using QWindow_WheelEvent_Callback = void (*)(QWindow*, QWheelEvent*);
	using QWindow_TouchEvent_Callback = void (*)(QWindow*, QTouchEvent*);
	using QWindow_TabletEvent_Callback = void (*)(QWindow*, QTabletEvent*);
	using QWindow_NativeEvent_Callback = bool (*)(QWindow*, libqt_string, void*, intptr_t*);
	using QWindow_ResolveInterface_Callback = void* (*)(const QWindow*, const char*, int);

protected:
	// Instance callback storage
	mutable QWindow_SurfaceType_Callback qwindow_surfacetype_callback = nullptr;
	mutable QWindow_Format_Callback qwindow_format_callback = nullptr;
	mutable QWindow_Size_Callback qwindow_size_callback = nullptr;
	mutable QWindow_AccessibleRoot_Callback qwindow_accessibleroot_callback = nullptr;
	mutable QWindow_FocusObject_Callback qwindow_focusobject_callback = nullptr;
	mutable QWindow_ExposeEvent_Callback qwindow_exposeevent_callback = nullptr;
	mutable QWindow_ResizeEvent_Callback qwindow_resizeevent_callback = nullptr;
	mutable QWindow_PaintEvent_Callback qwindow_paintevent_callback = nullptr;
	mutable QWindow_MoveEvent_Callback qwindow_moveevent_callback = nullptr;
	mutable QWindow_FocusInEvent_Callback qwindow_focusinevent_callback = nullptr;
	mutable QWindow_FocusOutEvent_Callback qwindow_focusoutevent_callback = nullptr;
	mutable QWindow_ShowEvent_Callback qwindow_showevent_callback = nullptr;
	mutable QWindow_HideEvent_Callback qwindow_hideevent_callback = nullptr;
	mutable QWindow_CloseEvent_Callback qwindow_closeevent_callback = nullptr;
	mutable QWindow_Event_Callback qwindow_event_callback = nullptr;
	mutable QWindow_KeyPressEvent_Callback qwindow_keypressevent_callback = nullptr;
	mutable QWindow_KeyReleaseEvent_Callback qwindow_keyreleaseevent_callback = nullptr;
	mutable QWindow_MousePressEvent_Callback qwindow_mousepressevent_callback = nullptr;
	mutable QWindow_MouseReleaseEvent_Callback qwindow_mousereleaseevent_callback = nullptr;
	mutable QWindow_MouseDoubleClickEvent_Callback qwindow_mousedoubleclickevent_callback = nullptr;
	mutable QWindow_MouseMoveEvent_Callback qwindow_mousemoveevent_callback = nullptr;
	mutable QWindow_WheelEvent_Callback qwindow_wheelevent_callback = nullptr;
	mutable QWindow_TouchEvent_Callback qwindow_touchevent_callback = nullptr;
	mutable QWindow_TabletEvent_Callback qwindow_tabletevent_callback = nullptr;
	mutable QWindow_NativeEvent_Callback qwindow_nativeevent_callback = nullptr;
	mutable QWindow_ResolveInterface_Callback qwindow_resolveinterface_callback = nullptr;

	// Instance base flags
    mutable bool qwindow_surfacetype_isbase = false;
    mutable bool qwindow_format_isbase = false;
    mutable bool qwindow_size_isbase = false;
    mutable bool qwindow_accessibleroot_isbase = false;
    mutable bool qwindow_focusobject_isbase = false;
    mutable bool qwindow_exposeevent_isbase = false;
    mutable bool qwindow_resizeevent_isbase = false;
    mutable bool qwindow_paintevent_isbase = false;
    mutable bool qwindow_moveevent_isbase = false;
    mutable bool qwindow_focusinevent_isbase = false;
    mutable bool qwindow_focusoutevent_isbase = false;
    mutable bool qwindow_showevent_isbase = false;
    mutable bool qwindow_hideevent_isbase = false;
    mutable bool qwindow_closeevent_isbase = false;
    mutable bool qwindow_event_isbase = false;
    mutable bool qwindow_keypressevent_isbase = false;
    mutable bool qwindow_keyreleaseevent_isbase = false;
    mutable bool qwindow_mousepressevent_isbase = false;
    mutable bool qwindow_mousereleaseevent_isbase = false;
    mutable bool qwindow_mousedoubleclickevent_isbase = false;
    mutable bool qwindow_mousemoveevent_isbase = false;
    mutable bool qwindow_wheelevent_isbase = false;
    mutable bool qwindow_touchevent_isbase = false;
    mutable bool qwindow_tabletevent_isbase = false;
    mutable bool qwindow_nativeevent_isbase = false;
    mutable bool qwindow_resolveinterface_isbase = false;

public:
	VirtualQWindow(): QWindow() {};
	VirtualQWindow(QWindow* parent): QWindow(parent) {};
	VirtualQWindow(QScreen* screen): QWindow(screen) {};

	~VirtualQWindow() {
		qwindow_surfacetype_callback = nullptr;
		qwindow_format_callback = nullptr;
		qwindow_size_callback = nullptr;
		qwindow_accessibleroot_callback = nullptr;
		qwindow_focusobject_callback = nullptr;
		qwindow_exposeevent_callback = nullptr;
		qwindow_resizeevent_callback = nullptr;
		qwindow_paintevent_callback = nullptr;
		qwindow_moveevent_callback = nullptr;
		qwindow_focusinevent_callback = nullptr;
		qwindow_focusoutevent_callback = nullptr;
		qwindow_showevent_callback = nullptr;
		qwindow_hideevent_callback = nullptr;
		qwindow_closeevent_callback = nullptr;
		qwindow_event_callback = nullptr;
		qwindow_keypressevent_callback = nullptr;
		qwindow_keyreleaseevent_callback = nullptr;
		qwindow_mousepressevent_callback = nullptr;
		qwindow_mousereleaseevent_callback = nullptr;
		qwindow_mousedoubleclickevent_callback = nullptr;
		qwindow_mousemoveevent_callback = nullptr;
		qwindow_wheelevent_callback = nullptr;
		qwindow_touchevent_callback = nullptr;
		qwindow_tabletevent_callback = nullptr;
		qwindow_nativeevent_callback = nullptr;
		qwindow_resolveinterface_callback = nullptr;
	}

// Callback setters
	inline void setQWindow_SurfaceType_Callback(QWindow_SurfaceType_Callback cb) const { qwindow_surfacetype_callback = cb; }
	inline void setQWindow_Format_Callback(QWindow_Format_Callback cb) const { qwindow_format_callback = cb; }
	inline void setQWindow_Size_Callback(QWindow_Size_Callback cb) const { qwindow_size_callback = cb; }
	inline void setQWindow_AccessibleRoot_Callback(QWindow_AccessibleRoot_Callback cb) const { qwindow_accessibleroot_callback = cb; }
	inline void setQWindow_FocusObject_Callback(QWindow_FocusObject_Callback cb) const { qwindow_focusobject_callback = cb; }
	inline void setQWindow_ExposeEvent_Callback(QWindow_ExposeEvent_Callback cb) const { qwindow_exposeevent_callback = cb; }
	inline void setQWindow_ResizeEvent_Callback(QWindow_ResizeEvent_Callback cb) const { qwindow_resizeevent_callback = cb; }
	inline void setQWindow_PaintEvent_Callback(QWindow_PaintEvent_Callback cb) const { qwindow_paintevent_callback = cb; }
	inline void setQWindow_MoveEvent_Callback(QWindow_MoveEvent_Callback cb) const { qwindow_moveevent_callback = cb; }
	inline void setQWindow_FocusInEvent_Callback(QWindow_FocusInEvent_Callback cb) const { qwindow_focusinevent_callback = cb; }
	inline void setQWindow_FocusOutEvent_Callback(QWindow_FocusOutEvent_Callback cb) const { qwindow_focusoutevent_callback = cb; }
	inline void setQWindow_ShowEvent_Callback(QWindow_ShowEvent_Callback cb) const { qwindow_showevent_callback = cb; }
	inline void setQWindow_HideEvent_Callback(QWindow_HideEvent_Callback cb) const { qwindow_hideevent_callback = cb; }
	inline void setQWindow_CloseEvent_Callback(QWindow_CloseEvent_Callback cb) const { qwindow_closeevent_callback = cb; }
	inline void setQWindow_Event_Callback(QWindow_Event_Callback cb) const { qwindow_event_callback = cb; }
	inline void setQWindow_KeyPressEvent_Callback(QWindow_KeyPressEvent_Callback cb) const { qwindow_keypressevent_callback = cb; }
	inline void setQWindow_KeyReleaseEvent_Callback(QWindow_KeyReleaseEvent_Callback cb) const { qwindow_keyreleaseevent_callback = cb; }
	inline void setQWindow_MousePressEvent_Callback(QWindow_MousePressEvent_Callback cb) const { qwindow_mousepressevent_callback = cb; }
	inline void setQWindow_MouseReleaseEvent_Callback(QWindow_MouseReleaseEvent_Callback cb) const { qwindow_mousereleaseevent_callback = cb; }
	inline void setQWindow_MouseDoubleClickEvent_Callback(QWindow_MouseDoubleClickEvent_Callback cb) const { qwindow_mousedoubleclickevent_callback = cb; }
	inline void setQWindow_MouseMoveEvent_Callback(QWindow_MouseMoveEvent_Callback cb) const { qwindow_mousemoveevent_callback = cb; }
	inline void setQWindow_WheelEvent_Callback(QWindow_WheelEvent_Callback cb) const { qwindow_wheelevent_callback = cb; }
	inline void setQWindow_TouchEvent_Callback(QWindow_TouchEvent_Callback cb) const { qwindow_touchevent_callback = cb; }
	inline void setQWindow_TabletEvent_Callback(QWindow_TabletEvent_Callback cb) const { qwindow_tabletevent_callback = cb; }
	inline void setQWindow_NativeEvent_Callback(QWindow_NativeEvent_Callback cb) const { qwindow_nativeevent_callback = cb; }
	inline void setQWindow_ResolveInterface_Callback(QWindow_ResolveInterface_Callback cb) const { qwindow_resolveinterface_callback = cb; }

// Base flag setters
	inline void setQWindow_SurfaceType_IsBase(bool value) const { qwindow_surfacetype_isbase = value; }
	inline void setQWindow_Format_IsBase(bool value) const { qwindow_format_isbase = value; }
	inline void setQWindow_Size_IsBase(bool value) const { qwindow_size_isbase = value; }
	inline void setQWindow_AccessibleRoot_IsBase(bool value) const { qwindow_accessibleroot_isbase = value; }
	inline void setQWindow_FocusObject_IsBase(bool value) const { qwindow_focusobject_isbase = value; }
	inline void setQWindow_ExposeEvent_IsBase(bool value) const { qwindow_exposeevent_isbase = value; }
	inline void setQWindow_ResizeEvent_IsBase(bool value) const { qwindow_resizeevent_isbase = value; }
	inline void setQWindow_PaintEvent_IsBase(bool value) const { qwindow_paintevent_isbase = value; }
	inline void setQWindow_MoveEvent_IsBase(bool value) const { qwindow_moveevent_isbase = value; }
	inline void setQWindow_FocusInEvent_IsBase(bool value) const { qwindow_focusinevent_isbase = value; }
	inline void setQWindow_FocusOutEvent_IsBase(bool value) const { qwindow_focusoutevent_isbase = value; }
	inline void setQWindow_ShowEvent_IsBase(bool value) const { qwindow_showevent_isbase = value; }
	inline void setQWindow_HideEvent_IsBase(bool value) const { qwindow_hideevent_isbase = value; }
	inline void setQWindow_CloseEvent_IsBase(bool value) const { qwindow_closeevent_isbase = value; }
	inline void setQWindow_Event_IsBase(bool value) const { qwindow_event_isbase = value; }
	inline void setQWindow_KeyPressEvent_IsBase(bool value) const { qwindow_keypressevent_isbase = value; }
	inline void setQWindow_KeyReleaseEvent_IsBase(bool value) const { qwindow_keyreleaseevent_isbase = value; }
	inline void setQWindow_MousePressEvent_IsBase(bool value) const { qwindow_mousepressevent_isbase = value; }
	inline void setQWindow_MouseReleaseEvent_IsBase(bool value) const { qwindow_mousereleaseevent_isbase = value; }
	inline void setQWindow_MouseDoubleClickEvent_IsBase(bool value) const { qwindow_mousedoubleclickevent_isbase = value; }
	inline void setQWindow_MouseMoveEvent_IsBase(bool value) const { qwindow_mousemoveevent_isbase = value; }
	inline void setQWindow_WheelEvent_IsBase(bool value) const { qwindow_wheelevent_isbase = value; }
	inline void setQWindow_TouchEvent_IsBase(bool value) const { qwindow_touchevent_isbase = value; }
	inline void setQWindow_TabletEvent_IsBase(bool value) const { qwindow_tabletevent_isbase = value; }
	inline void setQWindow_NativeEvent_IsBase(bool value) const { qwindow_nativeevent_isbase = value; }
	inline void setQWindow_ResolveInterface_IsBase(bool value) const { qwindow_resolveinterface_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual SurfaceType surfaceType() const override {
		if (qwindow_surfacetype_isbase) {
			qwindow_surfacetype_isbase = false;
			return QWindow::surfaceType();
		} else if (qwindow_surfacetype_callback != nullptr) {
			int callback_ret = qwindow_surfacetype_callback();
			return static_cast<QSurface::SurfaceType>(callback_ret);
		} else {
			return QWindow::surfaceType();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSurfaceFormat format() const override {
		if (qwindow_format_isbase) {
			qwindow_format_isbase = false;
			return QWindow::format();
		} else if (qwindow_format_callback != nullptr) {
			QSurfaceFormat* callback_ret = qwindow_format_callback();
			return *callback_ret;
		} else {
			return QWindow::format();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize size() const override {
		if (qwindow_size_isbase) {
			qwindow_size_isbase = false;
			return QWindow::size();
		} else if (qwindow_size_callback != nullptr) {
			QSize* callback_ret = qwindow_size_callback();
			return *callback_ret;
		} else {
			return QWindow::size();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* accessibleRoot() const override {
		if (qwindow_accessibleroot_isbase) {
			qwindow_accessibleroot_isbase = false;
			return QWindow::accessibleRoot();
		} else if (qwindow_accessibleroot_callback != nullptr) {
			QAccessibleInterface* callback_ret = qwindow_accessibleroot_callback();
			return callback_ret;
		} else {
			return QWindow::accessibleRoot();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QObject* focusObject() const override {
		if (qwindow_focusobject_isbase) {
			qwindow_focusobject_isbase = false;
			return QWindow::focusObject();
		} else if (qwindow_focusobject_callback != nullptr) {
			QObject* callback_ret = qwindow_focusobject_callback();
			return callback_ret;
		} else {
			return QWindow::focusObject();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void exposeEvent(QExposeEvent* param1) override {
		if (qwindow_exposeevent_isbase) {
			qwindow_exposeevent_isbase = false;
			QWindow::exposeEvent(param1);
		} else if (qwindow_exposeevent_callback != nullptr) {
			QExposeEvent* cbval1 = param1;
			qwindow_exposeevent_callback(this, cbval1);
		} else {
			QWindow::exposeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (qwindow_resizeevent_isbase) {
			qwindow_resizeevent_isbase = false;
			QWindow::resizeEvent(param1);
		} else if (qwindow_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = param1;
			qwindow_resizeevent_callback(this, cbval1);
		} else {
			QWindow::resizeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qwindow_paintevent_isbase) {
			qwindow_paintevent_isbase = false;
			QWindow::paintEvent(param1);
		} else if (qwindow_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qwindow_paintevent_callback(this, cbval1);
		} else {
			QWindow::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void moveEvent(QMoveEvent* param1) override {
		if (qwindow_moveevent_isbase) {
			qwindow_moveevent_isbase = false;
			QWindow::moveEvent(param1);
		} else if (qwindow_moveevent_callback != nullptr) {
			QMoveEvent* cbval1 = param1;
			qwindow_moveevent_callback(this, cbval1);
		} else {
			QWindow::moveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (qwindow_focusinevent_isbase) {
			qwindow_focusinevent_isbase = false;
			QWindow::focusInEvent(param1);
		} else if (qwindow_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = param1;
			qwindow_focusinevent_callback(this, cbval1);
		} else {
			QWindow::focusInEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (qwindow_focusoutevent_isbase) {
			qwindow_focusoutevent_isbase = false;
			QWindow::focusOutEvent(param1);
		} else if (qwindow_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = param1;
			qwindow_focusoutevent_callback(this, cbval1);
		} else {
			QWindow::focusOutEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* param1) override {
		if (qwindow_showevent_isbase) {
			qwindow_showevent_isbase = false;
			QWindow::showEvent(param1);
		} else if (qwindow_showevent_callback != nullptr) {
			QShowEvent* cbval1 = param1;
			qwindow_showevent_callback(this, cbval1);
		} else {
			QWindow::showEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hideEvent(QHideEvent* param1) override {
		if (qwindow_hideevent_isbase) {
			qwindow_hideevent_isbase = false;
			QWindow::hideEvent(param1);
		} else if (qwindow_hideevent_callback != nullptr) {
			QHideEvent* cbval1 = param1;
			qwindow_hideevent_callback(this, cbval1);
		} else {
			QWindow::hideEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void closeEvent(QCloseEvent* param1) override {
		if (qwindow_closeevent_isbase) {
			qwindow_closeevent_isbase = false;
			QWindow::closeEvent(param1);
		} else if (qwindow_closeevent_callback != nullptr) {
			QCloseEvent* cbval1 = param1;
			qwindow_closeevent_callback(this, cbval1);
		} else {
			QWindow::closeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qwindow_event_isbase) {
			qwindow_event_isbase = false;
			return QWindow::event(param1);
		} else if (qwindow_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qwindow_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QWindow::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (qwindow_keypressevent_isbase) {
			qwindow_keypressevent_isbase = false;
			QWindow::keyPressEvent(param1);
		} else if (qwindow_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qwindow_keypressevent_callback(this, cbval1);
		} else {
			QWindow::keyPressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (qwindow_keyreleaseevent_isbase) {
			qwindow_keyreleaseevent_isbase = false;
			QWindow::keyReleaseEvent(param1);
		} else if (qwindow_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qwindow_keyreleaseevent_callback(this, cbval1);
		} else {
			QWindow::keyReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (qwindow_mousepressevent_isbase) {
			qwindow_mousepressevent_isbase = false;
			QWindow::mousePressEvent(param1);
		} else if (qwindow_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qwindow_mousepressevent_callback(this, cbval1);
		} else {
			QWindow::mousePressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (qwindow_mousereleaseevent_isbase) {
			qwindow_mousereleaseevent_isbase = false;
			QWindow::mouseReleaseEvent(param1);
		} else if (qwindow_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qwindow_mousereleaseevent_callback(this, cbval1);
		} else {
			QWindow::mouseReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (qwindow_mousedoubleclickevent_isbase) {
			qwindow_mousedoubleclickevent_isbase = false;
			QWindow::mouseDoubleClickEvent(param1);
		} else if (qwindow_mousedoubleclickevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qwindow_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QWindow::mouseDoubleClickEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qwindow_mousemoveevent_isbase) {
			qwindow_mousemoveevent_isbase = false;
			QWindow::mouseMoveEvent(param1);
		} else if (qwindow_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qwindow_mousemoveevent_callback(this, cbval1);
		} else {
			QWindow::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (qwindow_wheelevent_isbase) {
			qwindow_wheelevent_isbase = false;
			QWindow::wheelEvent(param1);
		} else if (qwindow_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = param1;
			qwindow_wheelevent_callback(this, cbval1);
		} else {
			QWindow::wheelEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void touchEvent(QTouchEvent* param1) override {
		if (qwindow_touchevent_isbase) {
			qwindow_touchevent_isbase = false;
			QWindow::touchEvent(param1);
		} else if (qwindow_touchevent_callback != nullptr) {
			QTouchEvent* cbval1 = param1;
			qwindow_touchevent_callback(this, cbval1);
		} else {
			QWindow::touchEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void tabletEvent(QTabletEvent* param1) override {
		if (qwindow_tabletevent_isbase) {
			qwindow_tabletevent_isbase = false;
			QWindow::tabletEvent(param1);
		} else if (qwindow_tabletevent_callback != nullptr) {
			QTabletEvent* cbval1 = param1;
			qwindow_tabletevent_callback(this, cbval1);
		} else {
			QWindow::tabletEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (qwindow_nativeevent_isbase) {
			qwindow_nativeevent_isbase = false;
			return QWindow::nativeEvent(eventType, message, result);
		} else if (qwindow_nativeevent_callback != nullptr) {
			QByteArray eventType_qb = eventType.toUtf8();
			libqt_string cbval1;
			cbval1.len = eventType_qb.length();
			cbval1.data = static_cast<const char*>(eventType_qb.constData());
			void* cbval2 = message;
			intptr_t* cbval3 = result;
			bool callback_ret = qwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QWindow::nativeEvent(eventType, message, result);
		}
	}

	// Virtual method for C ABI access and custom callback
	void* resolveInterface(const char* name, int revision) const {
		if (qwindow_resolveinterface_isbase) {
			qwindow_resolveinterface_isbase = false;
			return QWindow::resolveInterface(name, revision);
		} else if (qwindow_resolveinterface_callback != nullptr) {
			const char* cbval1 = name;
			int cbval2 = revision;
			void* callback_ret = qwindow_resolveinterface_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QWindow::resolveInterface(name, revision);
		}
	}

	// Friend functions
	friend void QWindow_ExposeEvent(QWindow* self, QExposeEvent* param1);
	friend void QWindow_QBaseExposeEvent(QWindow* self, QExposeEvent* param1);
	friend void QWindow_ResizeEvent(QWindow* self, QResizeEvent* param1);
	friend void QWindow_QBaseResizeEvent(QWindow* self, QResizeEvent* param1);
	friend void QWindow_PaintEvent(QWindow* self, QPaintEvent* param1);
	friend void QWindow_QBasePaintEvent(QWindow* self, QPaintEvent* param1);
	friend void QWindow_MoveEvent(QWindow* self, QMoveEvent* param1);
	friend void QWindow_QBaseMoveEvent(QWindow* self, QMoveEvent* param1);
	friend void QWindow_FocusInEvent(QWindow* self, QFocusEvent* param1);
	friend void QWindow_QBaseFocusInEvent(QWindow* self, QFocusEvent* param1);
	friend void QWindow_FocusOutEvent(QWindow* self, QFocusEvent* param1);
	friend void QWindow_QBaseFocusOutEvent(QWindow* self, QFocusEvent* param1);
	friend void QWindow_ShowEvent(QWindow* self, QShowEvent* param1);
	friend void QWindow_QBaseShowEvent(QWindow* self, QShowEvent* param1);
	friend void QWindow_HideEvent(QWindow* self, QHideEvent* param1);
	friend void QWindow_QBaseHideEvent(QWindow* self, QHideEvent* param1);
	friend void QWindow_CloseEvent(QWindow* self, QCloseEvent* param1);
	friend void QWindow_QBaseCloseEvent(QWindow* self, QCloseEvent* param1);
	friend bool QWindow_Event(QWindow* self, QEvent* param1);
	friend bool QWindow_QBaseEvent(QWindow* self, QEvent* param1);
	friend void QWindow_KeyPressEvent(QWindow* self, QKeyEvent* param1);
	friend void QWindow_QBaseKeyPressEvent(QWindow* self, QKeyEvent* param1);
	friend void QWindow_KeyReleaseEvent(QWindow* self, QKeyEvent* param1);
	friend void QWindow_QBaseKeyReleaseEvent(QWindow* self, QKeyEvent* param1);
	friend void QWindow_MousePressEvent(QWindow* self, QMouseEvent* param1);
	friend void QWindow_QBaseMousePressEvent(QWindow* self, QMouseEvent* param1);
	friend void QWindow_MouseReleaseEvent(QWindow* self, QMouseEvent* param1);
	friend void QWindow_QBaseMouseReleaseEvent(QWindow* self, QMouseEvent* param1);
	friend void QWindow_MouseDoubleClickEvent(QWindow* self, QMouseEvent* param1);
	friend void QWindow_QBaseMouseDoubleClickEvent(QWindow* self, QMouseEvent* param1);
	friend void QWindow_MouseMoveEvent(QWindow* self, QMouseEvent* param1);
	friend void QWindow_QBaseMouseMoveEvent(QWindow* self, QMouseEvent* param1);
	friend void QWindow_WheelEvent(QWindow* self, QWheelEvent* param1);
	friend void QWindow_QBaseWheelEvent(QWindow* self, QWheelEvent* param1);
	friend void QWindow_TouchEvent(QWindow* self, QTouchEvent* param1);
	friend void QWindow_QBaseTouchEvent(QWindow* self, QTouchEvent* param1);
	friend void QWindow_TabletEvent(QWindow* self, QTabletEvent* param1);
	friend void QWindow_QBaseTabletEvent(QWindow* self, QTabletEvent* param1);
	friend bool QWindow_NativeEvent(QWindow* self, const libqt_string eventType, void* message, intptr_t* result);
	friend bool QWindow_QBaseNativeEvent(QWindow* self, const libqt_string eventType, void* message, intptr_t* result);
	friend void* QWindow_ResolveInterface(const QWindow* self, const char* name, int revision);
	friend void* QWindow_QBaseResolveInterface(const QWindow* self, const char* name, int revision);
};

#endif


