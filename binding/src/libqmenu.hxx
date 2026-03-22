#pragma once
#ifndef QMENU_H_C_LIBVIRTUAL
#define QMENU_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QMenu so that we can call protected methods
class VirtualQMenu final : public QMenu {

public:
	// Virtual class boolean flag
	bool isVirtualQMenu= true;

	// Virtual class public types (including callbacks)
	using QMenu_SizeHint_Callback = QSize* (*)();
	using QMenu_ChangeEvent_Callback = void (*)(QMenu*, QEvent*);
	using QMenu_KeyPressEvent_Callback = void (*)(QMenu*, QKeyEvent*);
	using QMenu_MouseReleaseEvent_Callback = void (*)(QMenu*, QMouseEvent*);
	using QMenu_MousePressEvent_Callback = void (*)(QMenu*, QMouseEvent*);
	using QMenu_MouseMoveEvent_Callback = void (*)(QMenu*, QMouseEvent*);
	using QMenu_WheelEvent_Callback = void (*)(QMenu*, QWheelEvent*);
	using QMenu_EnterEvent_Callback = void (*)(QMenu*, QEnterEvent*);
	using QMenu_LeaveEvent_Callback = void (*)(QMenu*, QEvent*);
	using QMenu_HideEvent_Callback = void (*)(QMenu*, QHideEvent*);
	using QMenu_PaintEvent_Callback = void (*)(QMenu*, QPaintEvent*);
	using QMenu_ActionEvent_Callback = void (*)(QMenu*, QActionEvent*);
	using QMenu_TimerEvent_Callback = void (*)(QMenu*, QTimerEvent*);
	using QMenu_Event_Callback = bool (*)(QMenu*, QEvent*);
	using QMenu_FocusNextPrevChild_Callback = bool (*)(QMenu*, bool);
	using QMenu_InitStyleOption_Callback = void (*)(const QMenu*, QStyleOptionMenuItem*, const QAction*);
	using QMenu_ColumnCount_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QMenu_SizeHint_Callback qmenu_sizehint_callback = nullptr;
	mutable QMenu_ChangeEvent_Callback qmenu_changeevent_callback = nullptr;
	mutable QMenu_KeyPressEvent_Callback qmenu_keypressevent_callback = nullptr;
	mutable QMenu_MouseReleaseEvent_Callback qmenu_mousereleaseevent_callback = nullptr;
	mutable QMenu_MousePressEvent_Callback qmenu_mousepressevent_callback = nullptr;
	mutable QMenu_MouseMoveEvent_Callback qmenu_mousemoveevent_callback = nullptr;
	mutable QMenu_WheelEvent_Callback qmenu_wheelevent_callback = nullptr;
	mutable QMenu_EnterEvent_Callback qmenu_enterevent_callback = nullptr;
	mutable QMenu_LeaveEvent_Callback qmenu_leaveevent_callback = nullptr;
	mutable QMenu_HideEvent_Callback qmenu_hideevent_callback = nullptr;
	mutable QMenu_PaintEvent_Callback qmenu_paintevent_callback = nullptr;
	mutable QMenu_ActionEvent_Callback qmenu_actionevent_callback = nullptr;
	mutable QMenu_TimerEvent_Callback qmenu_timerevent_callback = nullptr;
	mutable QMenu_Event_Callback qmenu_event_callback = nullptr;
	mutable QMenu_FocusNextPrevChild_Callback qmenu_focusnextprevchild_callback = nullptr;
	mutable QMenu_InitStyleOption_Callback qmenu_initstyleoption_callback = nullptr;
	mutable QMenu_ColumnCount_Callback qmenu_columncount_callback = nullptr;

	// Instance base flags
    mutable bool qmenu_sizehint_isbase = false;
    mutable bool qmenu_changeevent_isbase = false;
    mutable bool qmenu_keypressevent_isbase = false;
    mutable bool qmenu_mousereleaseevent_isbase = false;
    mutable bool qmenu_mousepressevent_isbase = false;
    mutable bool qmenu_mousemoveevent_isbase = false;
    mutable bool qmenu_wheelevent_isbase = false;
    mutable bool qmenu_enterevent_isbase = false;
    mutable bool qmenu_leaveevent_isbase = false;
    mutable bool qmenu_hideevent_isbase = false;
    mutable bool qmenu_paintevent_isbase = false;
    mutable bool qmenu_actionevent_isbase = false;
    mutable bool qmenu_timerevent_isbase = false;
    mutable bool qmenu_event_isbase = false;
    mutable bool qmenu_focusnextprevchild_isbase = false;
    mutable bool qmenu_initstyleoption_isbase = false;
    mutable bool qmenu_columncount_isbase = false;

public:
	VirtualQMenu(QWidget* parent): QMenu(parent) {};
	VirtualQMenu(): QMenu() {};
	VirtualQMenu(const QString& title): QMenu(title) {};
	VirtualQMenu(const QString& title, QWidget* parent): QMenu(title, parent) {};

	~VirtualQMenu() {
		qmenu_sizehint_callback = nullptr;
		qmenu_changeevent_callback = nullptr;
		qmenu_keypressevent_callback = nullptr;
		qmenu_mousereleaseevent_callback = nullptr;
		qmenu_mousepressevent_callback = nullptr;
		qmenu_mousemoveevent_callback = nullptr;
		qmenu_wheelevent_callback = nullptr;
		qmenu_enterevent_callback = nullptr;
		qmenu_leaveevent_callback = nullptr;
		qmenu_hideevent_callback = nullptr;
		qmenu_paintevent_callback = nullptr;
		qmenu_actionevent_callback = nullptr;
		qmenu_timerevent_callback = nullptr;
		qmenu_event_callback = nullptr;
		qmenu_focusnextprevchild_callback = nullptr;
		qmenu_initstyleoption_callback = nullptr;
		qmenu_columncount_callback = nullptr;
	}

// Callback setters
	inline void setQMenu_SizeHint_Callback(QMenu_SizeHint_Callback cb) const { qmenu_sizehint_callback = cb; }
	inline void setQMenu_ChangeEvent_Callback(QMenu_ChangeEvent_Callback cb) const { qmenu_changeevent_callback = cb; }
	inline void setQMenu_KeyPressEvent_Callback(QMenu_KeyPressEvent_Callback cb) const { qmenu_keypressevent_callback = cb; }
	inline void setQMenu_MouseReleaseEvent_Callback(QMenu_MouseReleaseEvent_Callback cb) const { qmenu_mousereleaseevent_callback = cb; }
	inline void setQMenu_MousePressEvent_Callback(QMenu_MousePressEvent_Callback cb) const { qmenu_mousepressevent_callback = cb; }
	inline void setQMenu_MouseMoveEvent_Callback(QMenu_MouseMoveEvent_Callback cb) const { qmenu_mousemoveevent_callback = cb; }
	inline void setQMenu_WheelEvent_Callback(QMenu_WheelEvent_Callback cb) const { qmenu_wheelevent_callback = cb; }
	inline void setQMenu_EnterEvent_Callback(QMenu_EnterEvent_Callback cb) const { qmenu_enterevent_callback = cb; }
	inline void setQMenu_LeaveEvent_Callback(QMenu_LeaveEvent_Callback cb) const { qmenu_leaveevent_callback = cb; }
	inline void setQMenu_HideEvent_Callback(QMenu_HideEvent_Callback cb) const { qmenu_hideevent_callback = cb; }
	inline void setQMenu_PaintEvent_Callback(QMenu_PaintEvent_Callback cb) const { qmenu_paintevent_callback = cb; }
	inline void setQMenu_ActionEvent_Callback(QMenu_ActionEvent_Callback cb) const { qmenu_actionevent_callback = cb; }
	inline void setQMenu_TimerEvent_Callback(QMenu_TimerEvent_Callback cb) const { qmenu_timerevent_callback = cb; }
	inline void setQMenu_Event_Callback(QMenu_Event_Callback cb) const { qmenu_event_callback = cb; }
	inline void setQMenu_FocusNextPrevChild_Callback(QMenu_FocusNextPrevChild_Callback cb) const { qmenu_focusnextprevchild_callback = cb; }
	inline void setQMenu_InitStyleOption_Callback(QMenu_InitStyleOption_Callback cb) const { qmenu_initstyleoption_callback = cb; }
	inline void setQMenu_ColumnCount_Callback(QMenu_ColumnCount_Callback cb) const { qmenu_columncount_callback = cb; }

// Base flag setters
	inline void setQMenu_SizeHint_IsBase(bool value) const { qmenu_sizehint_isbase = value; }
	inline void setQMenu_ChangeEvent_IsBase(bool value) const { qmenu_changeevent_isbase = value; }
	inline void setQMenu_KeyPressEvent_IsBase(bool value) const { qmenu_keypressevent_isbase = value; }
	inline void setQMenu_MouseReleaseEvent_IsBase(bool value) const { qmenu_mousereleaseevent_isbase = value; }
	inline void setQMenu_MousePressEvent_IsBase(bool value) const { qmenu_mousepressevent_isbase = value; }
	inline void setQMenu_MouseMoveEvent_IsBase(bool value) const { qmenu_mousemoveevent_isbase = value; }
	inline void setQMenu_WheelEvent_IsBase(bool value) const { qmenu_wheelevent_isbase = value; }
	inline void setQMenu_EnterEvent_IsBase(bool value) const { qmenu_enterevent_isbase = value; }
	inline void setQMenu_LeaveEvent_IsBase(bool value) const { qmenu_leaveevent_isbase = value; }
	inline void setQMenu_HideEvent_IsBase(bool value) const { qmenu_hideevent_isbase = value; }
	inline void setQMenu_PaintEvent_IsBase(bool value) const { qmenu_paintevent_isbase = value; }
	inline void setQMenu_ActionEvent_IsBase(bool value) const { qmenu_actionevent_isbase = value; }
	inline void setQMenu_TimerEvent_IsBase(bool value) const { qmenu_timerevent_isbase = value; }
	inline void setQMenu_Event_IsBase(bool value) const { qmenu_event_isbase = value; }
	inline void setQMenu_FocusNextPrevChild_IsBase(bool value) const { qmenu_focusnextprevchild_isbase = value; }
	inline void setQMenu_InitStyleOption_IsBase(bool value) const { qmenu_initstyleoption_isbase = value; }
	inline void setQMenu_ColumnCount_IsBase(bool value) const { qmenu_columncount_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qmenu_sizehint_isbase) {
			qmenu_sizehint_isbase = false;
			return QMenu::sizeHint();
		} else if (qmenu_sizehint_callback != nullptr) {
			QSize* callback_ret = qmenu_sizehint_callback();
			return *callback_ret;
		} else {
			return QMenu::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* param1) override {
		if (qmenu_changeevent_isbase) {
			qmenu_changeevent_isbase = false;
			QMenu::changeEvent(param1);
		} else if (qmenu_changeevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qmenu_changeevent_callback(this, cbval1);
		} else {
			QMenu::changeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (qmenu_keypressevent_isbase) {
			qmenu_keypressevent_isbase = false;
			QMenu::keyPressEvent(param1);
		} else if (qmenu_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qmenu_keypressevent_callback(this, cbval1);
		} else {
			QMenu::keyPressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (qmenu_mousereleaseevent_isbase) {
			qmenu_mousereleaseevent_isbase = false;
			QMenu::mouseReleaseEvent(param1);
		} else if (qmenu_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qmenu_mousereleaseevent_callback(this, cbval1);
		} else {
			QMenu::mouseReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (qmenu_mousepressevent_isbase) {
			qmenu_mousepressevent_isbase = false;
			QMenu::mousePressEvent(param1);
		} else if (qmenu_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qmenu_mousepressevent_callback(this, cbval1);
		} else {
			QMenu::mousePressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qmenu_mousemoveevent_isbase) {
			qmenu_mousemoveevent_isbase = false;
			QMenu::mouseMoveEvent(param1);
		} else if (qmenu_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qmenu_mousemoveevent_callback(this, cbval1);
		} else {
			QMenu::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (qmenu_wheelevent_isbase) {
			qmenu_wheelevent_isbase = false;
			QMenu::wheelEvent(param1);
		} else if (qmenu_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = param1;
			qmenu_wheelevent_callback(this, cbval1);
		} else {
			QMenu::wheelEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void enterEvent(QEnterEvent* param1) override {
		if (qmenu_enterevent_isbase) {
			qmenu_enterevent_isbase = false;
			QMenu::enterEvent(param1);
		} else if (qmenu_enterevent_callback != nullptr) {
			QEnterEvent* cbval1 = param1;
			qmenu_enterevent_callback(this, cbval1);
		} else {
			QMenu::enterEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void leaveEvent(QEvent* param1) override {
		if (qmenu_leaveevent_isbase) {
			qmenu_leaveevent_isbase = false;
			QMenu::leaveEvent(param1);
		} else if (qmenu_leaveevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qmenu_leaveevent_callback(this, cbval1);
		} else {
			QMenu::leaveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hideEvent(QHideEvent* param1) override {
		if (qmenu_hideevent_isbase) {
			qmenu_hideevent_isbase = false;
			QMenu::hideEvent(param1);
		} else if (qmenu_hideevent_callback != nullptr) {
			QHideEvent* cbval1 = param1;
			qmenu_hideevent_callback(this, cbval1);
		} else {
			QMenu::hideEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qmenu_paintevent_isbase) {
			qmenu_paintevent_isbase = false;
			QMenu::paintEvent(param1);
		} else if (qmenu_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qmenu_paintevent_callback(this, cbval1);
		} else {
			QMenu::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void actionEvent(QActionEvent* param1) override {
		if (qmenu_actionevent_isbase) {
			qmenu_actionevent_isbase = false;
			QMenu::actionEvent(param1);
		} else if (qmenu_actionevent_callback != nullptr) {
			QActionEvent* cbval1 = param1;
			qmenu_actionevent_callback(this, cbval1);
		} else {
			QMenu::actionEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* param1) override {
		if (qmenu_timerevent_isbase) {
			qmenu_timerevent_isbase = false;
			QMenu::timerEvent(param1);
		} else if (qmenu_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = param1;
			qmenu_timerevent_callback(this, cbval1);
		} else {
			QMenu::timerEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qmenu_event_isbase) {
			qmenu_event_isbase = false;
			return QMenu::event(param1);
		} else if (qmenu_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qmenu_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QMenu::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool focusNextPrevChild(bool next) override {
		if (qmenu_focusnextprevchild_isbase) {
			qmenu_focusnextprevchild_isbase = false;
			return QMenu::focusNextPrevChild(next);
		} else if (qmenu_focusnextprevchild_callback != nullptr) {
			bool cbval1 = next;
			bool callback_ret = qmenu_focusnextprevchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QMenu::focusNextPrevChild(next);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
		if (qmenu_initstyleoption_isbase) {
			qmenu_initstyleoption_isbase = false;
			QMenu::initStyleOption(option, action);
		} else if (qmenu_initstyleoption_callback != nullptr) {
			QStyleOptionMenuItem* cbval1 = option;
			const QAction* cbval2 = action;
			qmenu_initstyleoption_callback(this, cbval1, cbval2);
		} else {
			QMenu::initStyleOption(option, action);
		}
	}

	// Virtual method for C ABI access and custom callback
	int columnCount() const {
		if (qmenu_columncount_isbase) {
			qmenu_columncount_isbase = false;
			return QMenu::columnCount();
		} else if (qmenu_columncount_callback != nullptr) {
			int callback_ret = qmenu_columncount_callback();
			return callback_ret;
		} else {
			return QMenu::columnCount();
		}
	}

	// Friend functions
	friend void QMenu_ChangeEvent(QMenu* self, QEvent* param1);
	friend void QMenu_QBaseChangeEvent(QMenu* self, QEvent* param1);
	friend void QMenu_KeyPressEvent(QMenu* self, QKeyEvent* param1);
	friend void QMenu_QBaseKeyPressEvent(QMenu* self, QKeyEvent* param1);
	friend void QMenu_MouseReleaseEvent(QMenu* self, QMouseEvent* param1);
	friend void QMenu_QBaseMouseReleaseEvent(QMenu* self, QMouseEvent* param1);
	friend void QMenu_MousePressEvent(QMenu* self, QMouseEvent* param1);
	friend void QMenu_QBaseMousePressEvent(QMenu* self, QMouseEvent* param1);
	friend void QMenu_MouseMoveEvent(QMenu* self, QMouseEvent* param1);
	friend void QMenu_QBaseMouseMoveEvent(QMenu* self, QMouseEvent* param1);
	friend void QMenu_WheelEvent(QMenu* self, QWheelEvent* param1);
	friend void QMenu_QBaseWheelEvent(QMenu* self, QWheelEvent* param1);
	friend void QMenu_EnterEvent(QMenu* self, QEnterEvent* param1);
	friend void QMenu_QBaseEnterEvent(QMenu* self, QEnterEvent* param1);
	friend void QMenu_LeaveEvent(QMenu* self, QEvent* param1);
	friend void QMenu_QBaseLeaveEvent(QMenu* self, QEvent* param1);
	friend void QMenu_HideEvent(QMenu* self, QHideEvent* param1);
	friend void QMenu_QBaseHideEvent(QMenu* self, QHideEvent* param1);
	friend void QMenu_PaintEvent(QMenu* self, QPaintEvent* param1);
	friend void QMenu_QBasePaintEvent(QMenu* self, QPaintEvent* param1);
	friend void QMenu_ActionEvent(QMenu* self, QActionEvent* param1);
	friend void QMenu_QBaseActionEvent(QMenu* self, QActionEvent* param1);
	friend void QMenu_TimerEvent(QMenu* self, QTimerEvent* param1);
	friend void QMenu_QBaseTimerEvent(QMenu* self, QTimerEvent* param1);
	friend bool QMenu_Event(QMenu* self, QEvent* param1);
	friend bool QMenu_QBaseEvent(QMenu* self, QEvent* param1);
	friend bool QMenu_FocusNextPrevChild(QMenu* self, bool next);
	friend bool QMenu_QBaseFocusNextPrevChild(QMenu* self, bool next);
	friend void QMenu_InitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, const QAction* action);
	friend void QMenu_QBaseInitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, const QAction* action);
	friend int QMenu_ColumnCount(const QMenu* self);
	friend int QMenu_QBaseColumnCount(const QMenu* self);
};

#endif


