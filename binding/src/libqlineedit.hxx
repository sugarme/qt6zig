#pragma once
#ifndef QLINEEDIT_H_C_LIBVIRTUAL
#define QLINEEDIT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QLineEdit so that we can call protected methods
class VirtualQLineEdit final : public QLineEdit {

public:
	// Virtual class boolean flag
	bool isVirtualQLineEdit= true;

	// Virtual class public types (including callbacks)
	using QLineEdit_SizeHint_Callback = QSize* (*)();
	using QLineEdit_MinimumSizeHint_Callback = QSize* (*)();
	using QLineEdit_MousePressEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
	using QLineEdit_MouseMoveEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
	using QLineEdit_MouseReleaseEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
	using QLineEdit_MouseDoubleClickEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
	using QLineEdit_KeyPressEvent_Callback = void (*)(QLineEdit*, QKeyEvent*);
	using QLineEdit_KeyReleaseEvent_Callback = void (*)(QLineEdit*, QKeyEvent*);
	using QLineEdit_FocusInEvent_Callback = void (*)(QLineEdit*, QFocusEvent*);
	using QLineEdit_FocusOutEvent_Callback = void (*)(QLineEdit*, QFocusEvent*);
	using QLineEdit_PaintEvent_Callback = void (*)(QLineEdit*, QPaintEvent*);
	using QLineEdit_DragEnterEvent_Callback = void (*)(QLineEdit*, QDragEnterEvent*);
	using QLineEdit_DragMoveEvent_Callback = void (*)(QLineEdit*, QDragMoveEvent*);
	using QLineEdit_DragLeaveEvent_Callback = void (*)(QLineEdit*, QDragLeaveEvent*);
	using QLineEdit_DropEvent_Callback = void (*)(QLineEdit*, QDropEvent*);
	using QLineEdit_ChangeEvent_Callback = void (*)(QLineEdit*, QEvent*);
	using QLineEdit_ContextMenuEvent_Callback = void (*)(QLineEdit*, QContextMenuEvent*);
	using QLineEdit_InputMethodEvent_Callback = void (*)(QLineEdit*, QInputMethodEvent*);
	using QLineEdit_InitStyleOption_Callback = void (*)(const QLineEdit*, QStyleOptionFrame*);
	using QLineEdit_InputMethodQuery_Callback = QVariant* (*)(const QLineEdit*, int);
	using QLineEdit_TimerEvent_Callback = void (*)(QLineEdit*, QTimerEvent*);
	using QLineEdit_Event_Callback = bool (*)(QLineEdit*, QEvent*);
	using QLineEdit_CursorRect_Callback = QRect* (*)();

protected:
	// Instance callback storage
	mutable QLineEdit_SizeHint_Callback qlineedit_sizehint_callback = nullptr;
	mutable QLineEdit_MinimumSizeHint_Callback qlineedit_minimumsizehint_callback = nullptr;
	mutable QLineEdit_MousePressEvent_Callback qlineedit_mousepressevent_callback = nullptr;
	mutable QLineEdit_MouseMoveEvent_Callback qlineedit_mousemoveevent_callback = nullptr;
	mutable QLineEdit_MouseReleaseEvent_Callback qlineedit_mousereleaseevent_callback = nullptr;
	mutable QLineEdit_MouseDoubleClickEvent_Callback qlineedit_mousedoubleclickevent_callback = nullptr;
	mutable QLineEdit_KeyPressEvent_Callback qlineedit_keypressevent_callback = nullptr;
	mutable QLineEdit_KeyReleaseEvent_Callback qlineedit_keyreleaseevent_callback = nullptr;
	mutable QLineEdit_FocusInEvent_Callback qlineedit_focusinevent_callback = nullptr;
	mutable QLineEdit_FocusOutEvent_Callback qlineedit_focusoutevent_callback = nullptr;
	mutable QLineEdit_PaintEvent_Callback qlineedit_paintevent_callback = nullptr;
	mutable QLineEdit_DragEnterEvent_Callback qlineedit_dragenterevent_callback = nullptr;
	mutable QLineEdit_DragMoveEvent_Callback qlineedit_dragmoveevent_callback = nullptr;
	mutable QLineEdit_DragLeaveEvent_Callback qlineedit_dragleaveevent_callback = nullptr;
	mutable QLineEdit_DropEvent_Callback qlineedit_dropevent_callback = nullptr;
	mutable QLineEdit_ChangeEvent_Callback qlineedit_changeevent_callback = nullptr;
	mutable QLineEdit_ContextMenuEvent_Callback qlineedit_contextmenuevent_callback = nullptr;
	mutable QLineEdit_InputMethodEvent_Callback qlineedit_inputmethodevent_callback = nullptr;
	mutable QLineEdit_InitStyleOption_Callback qlineedit_initstyleoption_callback = nullptr;
	mutable QLineEdit_InputMethodQuery_Callback qlineedit_inputmethodquery_callback = nullptr;
	mutable QLineEdit_TimerEvent_Callback qlineedit_timerevent_callback = nullptr;
	mutable QLineEdit_Event_Callback qlineedit_event_callback = nullptr;
	mutable QLineEdit_CursorRect_Callback qlineedit_cursorrect_callback = nullptr;

	// Instance base flags
    mutable bool qlineedit_sizehint_isbase = false;
    mutable bool qlineedit_minimumsizehint_isbase = false;
    mutable bool qlineedit_mousepressevent_isbase = false;
    mutable bool qlineedit_mousemoveevent_isbase = false;
    mutable bool qlineedit_mousereleaseevent_isbase = false;
    mutable bool qlineedit_mousedoubleclickevent_isbase = false;
    mutable bool qlineedit_keypressevent_isbase = false;
    mutable bool qlineedit_keyreleaseevent_isbase = false;
    mutable bool qlineedit_focusinevent_isbase = false;
    mutable bool qlineedit_focusoutevent_isbase = false;
    mutable bool qlineedit_paintevent_isbase = false;
    mutable bool qlineedit_dragenterevent_isbase = false;
    mutable bool qlineedit_dragmoveevent_isbase = false;
    mutable bool qlineedit_dragleaveevent_isbase = false;
    mutable bool qlineedit_dropevent_isbase = false;
    mutable bool qlineedit_changeevent_isbase = false;
    mutable bool qlineedit_contextmenuevent_isbase = false;
    mutable bool qlineedit_inputmethodevent_isbase = false;
    mutable bool qlineedit_initstyleoption_isbase = false;
    mutable bool qlineedit_inputmethodquery_isbase = false;
    mutable bool qlineedit_timerevent_isbase = false;
    mutable bool qlineedit_event_isbase = false;
    mutable bool qlineedit_cursorrect_isbase = false;

public:
	VirtualQLineEdit(QWidget* parent): QLineEdit(parent) {};
	VirtualQLineEdit(): QLineEdit() {};
	VirtualQLineEdit(const QString& param1): QLineEdit(param1) {};
	VirtualQLineEdit(const QString& param1, QWidget* parent): QLineEdit(param1, parent) {};

	~VirtualQLineEdit() {
		qlineedit_sizehint_callback = nullptr;
		qlineedit_minimumsizehint_callback = nullptr;
		qlineedit_mousepressevent_callback = nullptr;
		qlineedit_mousemoveevent_callback = nullptr;
		qlineedit_mousereleaseevent_callback = nullptr;
		qlineedit_mousedoubleclickevent_callback = nullptr;
		qlineedit_keypressevent_callback = nullptr;
		qlineedit_keyreleaseevent_callback = nullptr;
		qlineedit_focusinevent_callback = nullptr;
		qlineedit_focusoutevent_callback = nullptr;
		qlineedit_paintevent_callback = nullptr;
		qlineedit_dragenterevent_callback = nullptr;
		qlineedit_dragmoveevent_callback = nullptr;
		qlineedit_dragleaveevent_callback = nullptr;
		qlineedit_dropevent_callback = nullptr;
		qlineedit_changeevent_callback = nullptr;
		qlineedit_contextmenuevent_callback = nullptr;
		qlineedit_inputmethodevent_callback = nullptr;
		qlineedit_initstyleoption_callback = nullptr;
		qlineedit_inputmethodquery_callback = nullptr;
		qlineedit_timerevent_callback = nullptr;
		qlineedit_event_callback = nullptr;
		qlineedit_cursorrect_callback = nullptr;
	}

// Callback setters
	inline void setQLineEdit_SizeHint_Callback(QLineEdit_SizeHint_Callback cb) const { qlineedit_sizehint_callback = cb; }
	inline void setQLineEdit_MinimumSizeHint_Callback(QLineEdit_MinimumSizeHint_Callback cb) const { qlineedit_minimumsizehint_callback = cb; }
	inline void setQLineEdit_MousePressEvent_Callback(QLineEdit_MousePressEvent_Callback cb) const { qlineedit_mousepressevent_callback = cb; }
	inline void setQLineEdit_MouseMoveEvent_Callback(QLineEdit_MouseMoveEvent_Callback cb) const { qlineedit_mousemoveevent_callback = cb; }
	inline void setQLineEdit_MouseReleaseEvent_Callback(QLineEdit_MouseReleaseEvent_Callback cb) const { qlineedit_mousereleaseevent_callback = cb; }
	inline void setQLineEdit_MouseDoubleClickEvent_Callback(QLineEdit_MouseDoubleClickEvent_Callback cb) const { qlineedit_mousedoubleclickevent_callback = cb; }
	inline void setQLineEdit_KeyPressEvent_Callback(QLineEdit_KeyPressEvent_Callback cb) const { qlineedit_keypressevent_callback = cb; }
	inline void setQLineEdit_KeyReleaseEvent_Callback(QLineEdit_KeyReleaseEvent_Callback cb) const { qlineedit_keyreleaseevent_callback = cb; }
	inline void setQLineEdit_FocusInEvent_Callback(QLineEdit_FocusInEvent_Callback cb) const { qlineedit_focusinevent_callback = cb; }
	inline void setQLineEdit_FocusOutEvent_Callback(QLineEdit_FocusOutEvent_Callback cb) const { qlineedit_focusoutevent_callback = cb; }
	inline void setQLineEdit_PaintEvent_Callback(QLineEdit_PaintEvent_Callback cb) const { qlineedit_paintevent_callback = cb; }
	inline void setQLineEdit_DragEnterEvent_Callback(QLineEdit_DragEnterEvent_Callback cb) const { qlineedit_dragenterevent_callback = cb; }
	inline void setQLineEdit_DragMoveEvent_Callback(QLineEdit_DragMoveEvent_Callback cb) const { qlineedit_dragmoveevent_callback = cb; }
	inline void setQLineEdit_DragLeaveEvent_Callback(QLineEdit_DragLeaveEvent_Callback cb) const { qlineedit_dragleaveevent_callback = cb; }
	inline void setQLineEdit_DropEvent_Callback(QLineEdit_DropEvent_Callback cb) const { qlineedit_dropevent_callback = cb; }
	inline void setQLineEdit_ChangeEvent_Callback(QLineEdit_ChangeEvent_Callback cb) const { qlineedit_changeevent_callback = cb; }
	inline void setQLineEdit_ContextMenuEvent_Callback(QLineEdit_ContextMenuEvent_Callback cb) const { qlineedit_contextmenuevent_callback = cb; }
	inline void setQLineEdit_InputMethodEvent_Callback(QLineEdit_InputMethodEvent_Callback cb) const { qlineedit_inputmethodevent_callback = cb; }
	inline void setQLineEdit_InitStyleOption_Callback(QLineEdit_InitStyleOption_Callback cb) const { qlineedit_initstyleoption_callback = cb; }
	inline void setQLineEdit_InputMethodQuery_Callback(QLineEdit_InputMethodQuery_Callback cb) const { qlineedit_inputmethodquery_callback = cb; }
	inline void setQLineEdit_TimerEvent_Callback(QLineEdit_TimerEvent_Callback cb) const { qlineedit_timerevent_callback = cb; }
	inline void setQLineEdit_Event_Callback(QLineEdit_Event_Callback cb) const { qlineedit_event_callback = cb; }
	inline void setQLineEdit_CursorRect_Callback(QLineEdit_CursorRect_Callback cb) const { qlineedit_cursorrect_callback = cb; }

// Base flag setters
	inline void setQLineEdit_SizeHint_IsBase(bool value) const { qlineedit_sizehint_isbase = value; }
	inline void setQLineEdit_MinimumSizeHint_IsBase(bool value) const { qlineedit_minimumsizehint_isbase = value; }
	inline void setQLineEdit_MousePressEvent_IsBase(bool value) const { qlineedit_mousepressevent_isbase = value; }
	inline void setQLineEdit_MouseMoveEvent_IsBase(bool value) const { qlineedit_mousemoveevent_isbase = value; }
	inline void setQLineEdit_MouseReleaseEvent_IsBase(bool value) const { qlineedit_mousereleaseevent_isbase = value; }
	inline void setQLineEdit_MouseDoubleClickEvent_IsBase(bool value) const { qlineedit_mousedoubleclickevent_isbase = value; }
	inline void setQLineEdit_KeyPressEvent_IsBase(bool value) const { qlineedit_keypressevent_isbase = value; }
	inline void setQLineEdit_KeyReleaseEvent_IsBase(bool value) const { qlineedit_keyreleaseevent_isbase = value; }
	inline void setQLineEdit_FocusInEvent_IsBase(bool value) const { qlineedit_focusinevent_isbase = value; }
	inline void setQLineEdit_FocusOutEvent_IsBase(bool value) const { qlineedit_focusoutevent_isbase = value; }
	inline void setQLineEdit_PaintEvent_IsBase(bool value) const { qlineedit_paintevent_isbase = value; }
	inline void setQLineEdit_DragEnterEvent_IsBase(bool value) const { qlineedit_dragenterevent_isbase = value; }
	inline void setQLineEdit_DragMoveEvent_IsBase(bool value) const { qlineedit_dragmoveevent_isbase = value; }
	inline void setQLineEdit_DragLeaveEvent_IsBase(bool value) const { qlineedit_dragleaveevent_isbase = value; }
	inline void setQLineEdit_DropEvent_IsBase(bool value) const { qlineedit_dropevent_isbase = value; }
	inline void setQLineEdit_ChangeEvent_IsBase(bool value) const { qlineedit_changeevent_isbase = value; }
	inline void setQLineEdit_ContextMenuEvent_IsBase(bool value) const { qlineedit_contextmenuevent_isbase = value; }
	inline void setQLineEdit_InputMethodEvent_IsBase(bool value) const { qlineedit_inputmethodevent_isbase = value; }
	inline void setQLineEdit_InitStyleOption_IsBase(bool value) const { qlineedit_initstyleoption_isbase = value; }
	inline void setQLineEdit_InputMethodQuery_IsBase(bool value) const { qlineedit_inputmethodquery_isbase = value; }
	inline void setQLineEdit_TimerEvent_IsBase(bool value) const { qlineedit_timerevent_isbase = value; }
	inline void setQLineEdit_Event_IsBase(bool value) const { qlineedit_event_isbase = value; }
	inline void setQLineEdit_CursorRect_IsBase(bool value) const { qlineedit_cursorrect_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qlineedit_sizehint_isbase) {
			qlineedit_sizehint_isbase = false;
			return QLineEdit::sizeHint();
		} else if (qlineedit_sizehint_callback != nullptr) {
			QSize* callback_ret = qlineedit_sizehint_callback();
			return *callback_ret;
		} else {
			return QLineEdit::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qlineedit_minimumsizehint_isbase) {
			qlineedit_minimumsizehint_isbase = false;
			return QLineEdit::minimumSizeHint();
		} else if (qlineedit_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qlineedit_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QLineEdit::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (qlineedit_mousepressevent_isbase) {
			qlineedit_mousepressevent_isbase = false;
			QLineEdit::mousePressEvent(param1);
		} else if (qlineedit_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qlineedit_mousepressevent_callback(this, cbval1);
		} else {
			QLineEdit::mousePressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qlineedit_mousemoveevent_isbase) {
			qlineedit_mousemoveevent_isbase = false;
			QLineEdit::mouseMoveEvent(param1);
		} else if (qlineedit_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qlineedit_mousemoveevent_callback(this, cbval1);
		} else {
			QLineEdit::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (qlineedit_mousereleaseevent_isbase) {
			qlineedit_mousereleaseevent_isbase = false;
			QLineEdit::mouseReleaseEvent(param1);
		} else if (qlineedit_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qlineedit_mousereleaseevent_callback(this, cbval1);
		} else {
			QLineEdit::mouseReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (qlineedit_mousedoubleclickevent_isbase) {
			qlineedit_mousedoubleclickevent_isbase = false;
			QLineEdit::mouseDoubleClickEvent(param1);
		} else if (qlineedit_mousedoubleclickevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qlineedit_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QLineEdit::mouseDoubleClickEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (qlineedit_keypressevent_isbase) {
			qlineedit_keypressevent_isbase = false;
			QLineEdit::keyPressEvent(param1);
		} else if (qlineedit_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qlineedit_keypressevent_callback(this, cbval1);
		} else {
			QLineEdit::keyPressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (qlineedit_keyreleaseevent_isbase) {
			qlineedit_keyreleaseevent_isbase = false;
			QLineEdit::keyReleaseEvent(param1);
		} else if (qlineedit_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qlineedit_keyreleaseevent_callback(this, cbval1);
		} else {
			QLineEdit::keyReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (qlineedit_focusinevent_isbase) {
			qlineedit_focusinevent_isbase = false;
			QLineEdit::focusInEvent(param1);
		} else if (qlineedit_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = param1;
			qlineedit_focusinevent_callback(this, cbval1);
		} else {
			QLineEdit::focusInEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (qlineedit_focusoutevent_isbase) {
			qlineedit_focusoutevent_isbase = false;
			QLineEdit::focusOutEvent(param1);
		} else if (qlineedit_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = param1;
			qlineedit_focusoutevent_callback(this, cbval1);
		} else {
			QLineEdit::focusOutEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qlineedit_paintevent_isbase) {
			qlineedit_paintevent_isbase = false;
			QLineEdit::paintEvent(param1);
		} else if (qlineedit_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qlineedit_paintevent_callback(this, cbval1);
		} else {
			QLineEdit::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (qlineedit_dragenterevent_isbase) {
			qlineedit_dragenterevent_isbase = false;
			QLineEdit::dragEnterEvent(param1);
		} else if (qlineedit_dragenterevent_callback != nullptr) {
			QDragEnterEvent* cbval1 = param1;
			qlineedit_dragenterevent_callback(this, cbval1);
		} else {
			QLineEdit::dragEnterEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (qlineedit_dragmoveevent_isbase) {
			qlineedit_dragmoveevent_isbase = false;
			QLineEdit::dragMoveEvent(e);
		} else if (qlineedit_dragmoveevent_callback != nullptr) {
			QDragMoveEvent* cbval1 = e;
			qlineedit_dragmoveevent_callback(this, cbval1);
		} else {
			QLineEdit::dragMoveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (qlineedit_dragleaveevent_isbase) {
			qlineedit_dragleaveevent_isbase = false;
			QLineEdit::dragLeaveEvent(e);
		} else if (qlineedit_dragleaveevent_callback != nullptr) {
			QDragLeaveEvent* cbval1 = e;
			qlineedit_dragleaveevent_callback(this, cbval1);
		} else {
			QLineEdit::dragLeaveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QDropEvent* param1) override {
		if (qlineedit_dropevent_isbase) {
			qlineedit_dropevent_isbase = false;
			QLineEdit::dropEvent(param1);
		} else if (qlineedit_dropevent_callback != nullptr) {
			QDropEvent* cbval1 = param1;
			qlineedit_dropevent_callback(this, cbval1);
		} else {
			QLineEdit::dropEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* param1) override {
		if (qlineedit_changeevent_isbase) {
			qlineedit_changeevent_isbase = false;
			QLineEdit::changeEvent(param1);
		} else if (qlineedit_changeevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qlineedit_changeevent_callback(this, cbval1);
		} else {
			QLineEdit::changeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (qlineedit_contextmenuevent_isbase) {
			qlineedit_contextmenuevent_isbase = false;
			QLineEdit::contextMenuEvent(param1);
		} else if (qlineedit_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = param1;
			qlineedit_contextmenuevent_callback(this, cbval1);
		} else {
			QLineEdit::contextMenuEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (qlineedit_inputmethodevent_isbase) {
			qlineedit_inputmethodevent_isbase = false;
			QLineEdit::inputMethodEvent(param1);
		} else if (qlineedit_inputmethodevent_callback != nullptr) {
			QInputMethodEvent* cbval1 = param1;
			qlineedit_inputmethodevent_callback(this, cbval1);
		} else {
			QLineEdit::inputMethodEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (qlineedit_initstyleoption_isbase) {
			qlineedit_initstyleoption_isbase = false;
			QLineEdit::initStyleOption(option);
		} else if (qlineedit_initstyleoption_callback != nullptr) {
			QStyleOptionFrame* cbval1 = option;
			qlineedit_initstyleoption_callback(this, cbval1);
		} else {
			QLineEdit::initStyleOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (qlineedit_inputmethodquery_isbase) {
			qlineedit_inputmethodquery_isbase = false;
			return QLineEdit::inputMethodQuery(param1);
		} else if (qlineedit_inputmethodquery_callback != nullptr) {
			int cbval1 = static_cast<int>(param1);
			QVariant* callback_ret = qlineedit_inputmethodquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QLineEdit::inputMethodQuery(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* param1) override {
		if (qlineedit_timerevent_isbase) {
			qlineedit_timerevent_isbase = false;
			QLineEdit::timerEvent(param1);
		} else if (qlineedit_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = param1;
			qlineedit_timerevent_callback(this, cbval1);
		} else {
			QLineEdit::timerEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qlineedit_event_isbase) {
			qlineedit_event_isbase = false;
			return QLineEdit::event(param1);
		} else if (qlineedit_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qlineedit_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLineEdit::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	QRect cursorRect() const {
		if (qlineedit_cursorrect_isbase) {
			qlineedit_cursorrect_isbase = false;
			return QLineEdit::cursorRect();
		} else if (qlineedit_cursorrect_callback != nullptr) {
			QRect* callback_ret = qlineedit_cursorrect_callback();
			return *callback_ret;
		} else {
			return QLineEdit::cursorRect();
		}
	}

	// Friend functions
	friend void QLineEdit_MousePressEvent(QLineEdit* self, QMouseEvent* param1);
	friend void QLineEdit_QBaseMousePressEvent(QLineEdit* self, QMouseEvent* param1);
	friend void QLineEdit_MouseMoveEvent(QLineEdit* self, QMouseEvent* param1);
	friend void QLineEdit_QBaseMouseMoveEvent(QLineEdit* self, QMouseEvent* param1);
	friend void QLineEdit_MouseReleaseEvent(QLineEdit* self, QMouseEvent* param1);
	friend void QLineEdit_QBaseMouseReleaseEvent(QLineEdit* self, QMouseEvent* param1);
	friend void QLineEdit_MouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1);
	friend void QLineEdit_QBaseMouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1);
	friend void QLineEdit_KeyPressEvent(QLineEdit* self, QKeyEvent* param1);
	friend void QLineEdit_QBaseKeyPressEvent(QLineEdit* self, QKeyEvent* param1);
	friend void QLineEdit_KeyReleaseEvent(QLineEdit* self, QKeyEvent* param1);
	friend void QLineEdit_QBaseKeyReleaseEvent(QLineEdit* self, QKeyEvent* param1);
	friend void QLineEdit_FocusInEvent(QLineEdit* self, QFocusEvent* param1);
	friend void QLineEdit_QBaseFocusInEvent(QLineEdit* self, QFocusEvent* param1);
	friend void QLineEdit_FocusOutEvent(QLineEdit* self, QFocusEvent* param1);
	friend void QLineEdit_QBaseFocusOutEvent(QLineEdit* self, QFocusEvent* param1);
	friend void QLineEdit_PaintEvent(QLineEdit* self, QPaintEvent* param1);
	friend void QLineEdit_QBasePaintEvent(QLineEdit* self, QPaintEvent* param1);
	friend void QLineEdit_DragEnterEvent(QLineEdit* self, QDragEnterEvent* param1);
	friend void QLineEdit_QBaseDragEnterEvent(QLineEdit* self, QDragEnterEvent* param1);
	friend void QLineEdit_DragMoveEvent(QLineEdit* self, QDragMoveEvent* e);
	friend void QLineEdit_QBaseDragMoveEvent(QLineEdit* self, QDragMoveEvent* e);
	friend void QLineEdit_DragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e);
	friend void QLineEdit_QBaseDragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e);
	friend void QLineEdit_DropEvent(QLineEdit* self, QDropEvent* param1);
	friend void QLineEdit_QBaseDropEvent(QLineEdit* self, QDropEvent* param1);
	friend void QLineEdit_ChangeEvent(QLineEdit* self, QEvent* param1);
	friend void QLineEdit_QBaseChangeEvent(QLineEdit* self, QEvent* param1);
	friend void QLineEdit_ContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1);
	friend void QLineEdit_QBaseContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1);
	friend void QLineEdit_InputMethodEvent(QLineEdit* self, QInputMethodEvent* param1);
	friend void QLineEdit_QBaseInputMethodEvent(QLineEdit* self, QInputMethodEvent* param1);
	friend void QLineEdit_InitStyleOption(const QLineEdit* self, QStyleOptionFrame* option);
	friend void QLineEdit_QBaseInitStyleOption(const QLineEdit* self, QStyleOptionFrame* option);
	friend QRect* QLineEdit_CursorRect(const QLineEdit* self);
	friend QRect* QLineEdit_QBaseCursorRect(const QLineEdit* self);
};

#endif


