#pragma once
#ifndef QLABEL_H_C_LIBVIRTUAL
#define QLABEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QLabel so that we can call protected methods
class VirtualQLabel final : public QLabel {

public:
	// Virtual class boolean flag
	bool isVirtualQLabel= true;

	// Virtual class public types (including callbacks)
	using QLabel_SizeHint_Callback = QSize* (*)();
	using QLabel_MinimumSizeHint_Callback = QSize* (*)();
	using QLabel_HeightForWidth_Callback = int (*)(const QLabel*, int);
	using QLabel_Event_Callback = bool (*)(QLabel*, QEvent*);
	using QLabel_KeyPressEvent_Callback = void (*)(QLabel*, QKeyEvent*);
	using QLabel_PaintEvent_Callback = void (*)(QLabel*, QPaintEvent*);
	using QLabel_ChangeEvent_Callback = void (*)(QLabel*, QEvent*);
	using QLabel_MousePressEvent_Callback = void (*)(QLabel*, QMouseEvent*);
	using QLabel_MouseMoveEvent_Callback = void (*)(QLabel*, QMouseEvent*);
	using QLabel_MouseReleaseEvent_Callback = void (*)(QLabel*, QMouseEvent*);
	using QLabel_ContextMenuEvent_Callback = void (*)(QLabel*, QContextMenuEvent*);
	using QLabel_FocusInEvent_Callback = void (*)(QLabel*, QFocusEvent*);
	using QLabel_FocusOutEvent_Callback = void (*)(QLabel*, QFocusEvent*);
	using QLabel_FocusNextPrevChild_Callback = bool (*)(QLabel*, bool);

protected:
	// Instance callback storage
	mutable QLabel_SizeHint_Callback qlabel_sizehint_callback = nullptr;
	mutable QLabel_MinimumSizeHint_Callback qlabel_minimumsizehint_callback = nullptr;
	mutable QLabel_HeightForWidth_Callback qlabel_heightforwidth_callback = nullptr;
	mutable QLabel_Event_Callback qlabel_event_callback = nullptr;
	mutable QLabel_KeyPressEvent_Callback qlabel_keypressevent_callback = nullptr;
	mutable QLabel_PaintEvent_Callback qlabel_paintevent_callback = nullptr;
	mutable QLabel_ChangeEvent_Callback qlabel_changeevent_callback = nullptr;
	mutable QLabel_MousePressEvent_Callback qlabel_mousepressevent_callback = nullptr;
	mutable QLabel_MouseMoveEvent_Callback qlabel_mousemoveevent_callback = nullptr;
	mutable QLabel_MouseReleaseEvent_Callback qlabel_mousereleaseevent_callback = nullptr;
	mutable QLabel_ContextMenuEvent_Callback qlabel_contextmenuevent_callback = nullptr;
	mutable QLabel_FocusInEvent_Callback qlabel_focusinevent_callback = nullptr;
	mutable QLabel_FocusOutEvent_Callback qlabel_focusoutevent_callback = nullptr;
	mutable QLabel_FocusNextPrevChild_Callback qlabel_focusnextprevchild_callback = nullptr;

	// Instance base flags
    mutable bool qlabel_sizehint_isbase = false;
    mutable bool qlabel_minimumsizehint_isbase = false;
    mutable bool qlabel_heightforwidth_isbase = false;
    mutable bool qlabel_event_isbase = false;
    mutable bool qlabel_keypressevent_isbase = false;
    mutable bool qlabel_paintevent_isbase = false;
    mutable bool qlabel_changeevent_isbase = false;
    mutable bool qlabel_mousepressevent_isbase = false;
    mutable bool qlabel_mousemoveevent_isbase = false;
    mutable bool qlabel_mousereleaseevent_isbase = false;
    mutable bool qlabel_contextmenuevent_isbase = false;
    mutable bool qlabel_focusinevent_isbase = false;
    mutable bool qlabel_focusoutevent_isbase = false;
    mutable bool qlabel_focusnextprevchild_isbase = false;

public:
	VirtualQLabel(QWidget* parent): QLabel(parent) {};
	VirtualQLabel(): QLabel() {};
	VirtualQLabel(const QString& text): QLabel(text) {};
	VirtualQLabel(QWidget* parent, Qt::WindowFlags f): QLabel(parent, f) {};
	VirtualQLabel(const QString& text, QWidget* parent): QLabel(text, parent) {};
	VirtualQLabel(const QString& text, QWidget* parent, Qt::WindowFlags f): QLabel(text, parent, f) {};

	~VirtualQLabel() {
		qlabel_sizehint_callback = nullptr;
		qlabel_minimumsizehint_callback = nullptr;
		qlabel_heightforwidth_callback = nullptr;
		qlabel_event_callback = nullptr;
		qlabel_keypressevent_callback = nullptr;
		qlabel_paintevent_callback = nullptr;
		qlabel_changeevent_callback = nullptr;
		qlabel_mousepressevent_callback = nullptr;
		qlabel_mousemoveevent_callback = nullptr;
		qlabel_mousereleaseevent_callback = nullptr;
		qlabel_contextmenuevent_callback = nullptr;
		qlabel_focusinevent_callback = nullptr;
		qlabel_focusoutevent_callback = nullptr;
		qlabel_focusnextprevchild_callback = nullptr;
	}

// Callback setters
	inline void setQLabel_SizeHint_Callback(QLabel_SizeHint_Callback cb) const { qlabel_sizehint_callback = cb; }
	inline void setQLabel_MinimumSizeHint_Callback(QLabel_MinimumSizeHint_Callback cb) const { qlabel_minimumsizehint_callback = cb; }
	inline void setQLabel_HeightForWidth_Callback(QLabel_HeightForWidth_Callback cb) const { qlabel_heightforwidth_callback = cb; }
	inline void setQLabel_Event_Callback(QLabel_Event_Callback cb) const { qlabel_event_callback = cb; }
	inline void setQLabel_KeyPressEvent_Callback(QLabel_KeyPressEvent_Callback cb) const { qlabel_keypressevent_callback = cb; }
	inline void setQLabel_PaintEvent_Callback(QLabel_PaintEvent_Callback cb) const { qlabel_paintevent_callback = cb; }
	inline void setQLabel_ChangeEvent_Callback(QLabel_ChangeEvent_Callback cb) const { qlabel_changeevent_callback = cb; }
	inline void setQLabel_MousePressEvent_Callback(QLabel_MousePressEvent_Callback cb) const { qlabel_mousepressevent_callback = cb; }
	inline void setQLabel_MouseMoveEvent_Callback(QLabel_MouseMoveEvent_Callback cb) const { qlabel_mousemoveevent_callback = cb; }
	inline void setQLabel_MouseReleaseEvent_Callback(QLabel_MouseReleaseEvent_Callback cb) const { qlabel_mousereleaseevent_callback = cb; }
	inline void setQLabel_ContextMenuEvent_Callback(QLabel_ContextMenuEvent_Callback cb) const { qlabel_contextmenuevent_callback = cb; }
	inline void setQLabel_FocusInEvent_Callback(QLabel_FocusInEvent_Callback cb) const { qlabel_focusinevent_callback = cb; }
	inline void setQLabel_FocusOutEvent_Callback(QLabel_FocusOutEvent_Callback cb) const { qlabel_focusoutevent_callback = cb; }
	inline void setQLabel_FocusNextPrevChild_Callback(QLabel_FocusNextPrevChild_Callback cb) const { qlabel_focusnextprevchild_callback = cb; }

// Base flag setters
	inline void setQLabel_SizeHint_IsBase(bool value) const { qlabel_sizehint_isbase = value; }
	inline void setQLabel_MinimumSizeHint_IsBase(bool value) const { qlabel_minimumsizehint_isbase = value; }
	inline void setQLabel_HeightForWidth_IsBase(bool value) const { qlabel_heightforwidth_isbase = value; }
	inline void setQLabel_Event_IsBase(bool value) const { qlabel_event_isbase = value; }
	inline void setQLabel_KeyPressEvent_IsBase(bool value) const { qlabel_keypressevent_isbase = value; }
	inline void setQLabel_PaintEvent_IsBase(bool value) const { qlabel_paintevent_isbase = value; }
	inline void setQLabel_ChangeEvent_IsBase(bool value) const { qlabel_changeevent_isbase = value; }
	inline void setQLabel_MousePressEvent_IsBase(bool value) const { qlabel_mousepressevent_isbase = value; }
	inline void setQLabel_MouseMoveEvent_IsBase(bool value) const { qlabel_mousemoveevent_isbase = value; }
	inline void setQLabel_MouseReleaseEvent_IsBase(bool value) const { qlabel_mousereleaseevent_isbase = value; }
	inline void setQLabel_ContextMenuEvent_IsBase(bool value) const { qlabel_contextmenuevent_isbase = value; }
	inline void setQLabel_FocusInEvent_IsBase(bool value) const { qlabel_focusinevent_isbase = value; }
	inline void setQLabel_FocusOutEvent_IsBase(bool value) const { qlabel_focusoutevent_isbase = value; }
	inline void setQLabel_FocusNextPrevChild_IsBase(bool value) const { qlabel_focusnextprevchild_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qlabel_sizehint_isbase) {
			qlabel_sizehint_isbase = false;
			return QLabel::sizeHint();
		} else if (qlabel_sizehint_callback != nullptr) {
			QSize* callback_ret = qlabel_sizehint_callback();
			return *callback_ret;
		} else {
			return QLabel::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qlabel_minimumsizehint_isbase) {
			qlabel_minimumsizehint_isbase = false;
			return QLabel::minimumSizeHint();
		} else if (qlabel_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qlabel_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QLabel::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int heightForWidth(int param1) const override {
		if (qlabel_heightforwidth_isbase) {
			qlabel_heightforwidth_isbase = false;
			return QLabel::heightForWidth(param1);
		} else if (qlabel_heightforwidth_callback != nullptr) {
			int cbval1 = param1;
			int callback_ret = qlabel_heightforwidth_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLabel::heightForWidth(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qlabel_event_isbase) {
			qlabel_event_isbase = false;
			return QLabel::event(e);
		} else if (qlabel_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qlabel_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLabel::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (qlabel_keypressevent_isbase) {
			qlabel_keypressevent_isbase = false;
			QLabel::keyPressEvent(ev);
		} else if (qlabel_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = ev;
			qlabel_keypressevent_callback(this, cbval1);
		} else {
			QLabel::keyPressEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qlabel_paintevent_isbase) {
			qlabel_paintevent_isbase = false;
			QLabel::paintEvent(param1);
		} else if (qlabel_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qlabel_paintevent_callback(this, cbval1);
		} else {
			QLabel::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* param1) override {
		if (qlabel_changeevent_isbase) {
			qlabel_changeevent_isbase = false;
			QLabel::changeEvent(param1);
		} else if (qlabel_changeevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qlabel_changeevent_callback(this, cbval1);
		} else {
			QLabel::changeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* ev) override {
		if (qlabel_mousepressevent_isbase) {
			qlabel_mousepressevent_isbase = false;
			QLabel::mousePressEvent(ev);
		} else if (qlabel_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = ev;
			qlabel_mousepressevent_callback(this, cbval1);
		} else {
			QLabel::mousePressEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* ev) override {
		if (qlabel_mousemoveevent_isbase) {
			qlabel_mousemoveevent_isbase = false;
			QLabel::mouseMoveEvent(ev);
		} else if (qlabel_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = ev;
			qlabel_mousemoveevent_callback(this, cbval1);
		} else {
			QLabel::mouseMoveEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* ev) override {
		if (qlabel_mousereleaseevent_isbase) {
			qlabel_mousereleaseevent_isbase = false;
			QLabel::mouseReleaseEvent(ev);
		} else if (qlabel_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = ev;
			qlabel_mousereleaseevent_callback(this, cbval1);
		} else {
			QLabel::mouseReleaseEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* ev) override {
		if (qlabel_contextmenuevent_isbase) {
			qlabel_contextmenuevent_isbase = false;
			QLabel::contextMenuEvent(ev);
		} else if (qlabel_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = ev;
			qlabel_contextmenuevent_callback(this, cbval1);
		} else {
			QLabel::contextMenuEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* ev) override {
		if (qlabel_focusinevent_isbase) {
			qlabel_focusinevent_isbase = false;
			QLabel::focusInEvent(ev);
		} else if (qlabel_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = ev;
			qlabel_focusinevent_callback(this, cbval1);
		} else {
			QLabel::focusInEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* ev) override {
		if (qlabel_focusoutevent_isbase) {
			qlabel_focusoutevent_isbase = false;
			QLabel::focusOutEvent(ev);
		} else if (qlabel_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = ev;
			qlabel_focusoutevent_callback(this, cbval1);
		} else {
			QLabel::focusOutEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool focusNextPrevChild(bool next) override {
		if (qlabel_focusnextprevchild_isbase) {
			qlabel_focusnextprevchild_isbase = false;
			return QLabel::focusNextPrevChild(next);
		} else if (qlabel_focusnextprevchild_callback != nullptr) {
			bool cbval1 = next;
			bool callback_ret = qlabel_focusnextprevchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLabel::focusNextPrevChild(next);
		}
	}

	// Friend functions
	friend bool QLabel_Event(QLabel* self, QEvent* e);
	friend bool QLabel_QBaseEvent(QLabel* self, QEvent* e);
	friend void QLabel_KeyPressEvent(QLabel* self, QKeyEvent* ev);
	friend void QLabel_QBaseKeyPressEvent(QLabel* self, QKeyEvent* ev);
	friend void QLabel_PaintEvent(QLabel* self, QPaintEvent* param1);
	friend void QLabel_QBasePaintEvent(QLabel* self, QPaintEvent* param1);
	friend void QLabel_ChangeEvent(QLabel* self, QEvent* param1);
	friend void QLabel_QBaseChangeEvent(QLabel* self, QEvent* param1);
	friend void QLabel_MousePressEvent(QLabel* self, QMouseEvent* ev);
	friend void QLabel_QBaseMousePressEvent(QLabel* self, QMouseEvent* ev);
	friend void QLabel_MouseMoveEvent(QLabel* self, QMouseEvent* ev);
	friend void QLabel_QBaseMouseMoveEvent(QLabel* self, QMouseEvent* ev);
	friend void QLabel_MouseReleaseEvent(QLabel* self, QMouseEvent* ev);
	friend void QLabel_QBaseMouseReleaseEvent(QLabel* self, QMouseEvent* ev);
	friend void QLabel_ContextMenuEvent(QLabel* self, QContextMenuEvent* ev);
	friend void QLabel_QBaseContextMenuEvent(QLabel* self, QContextMenuEvent* ev);
	friend void QLabel_FocusInEvent(QLabel* self, QFocusEvent* ev);
	friend void QLabel_QBaseFocusInEvent(QLabel* self, QFocusEvent* ev);
	friend void QLabel_FocusOutEvent(QLabel* self, QFocusEvent* ev);
	friend void QLabel_QBaseFocusOutEvent(QLabel* self, QFocusEvent* ev);
	friend bool QLabel_FocusNextPrevChild(QLabel* self, bool next);
	friend bool QLabel_QBaseFocusNextPrevChild(QLabel* self, bool next);
};

#endif


