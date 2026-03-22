#pragma once
#ifndef QMENUBAR_H_C_LIBVIRTUAL
#define QMENUBAR_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QMenuBar so that we can call protected methods
class VirtualQMenuBar final : public QMenuBar {

public:
	// Virtual class boolean flag
	bool isVirtualQMenuBar= true;

	// Virtual class public types (including callbacks)
	using QMenuBar_SizeHint_Callback = QSize* (*)();
	using QMenuBar_MinimumSizeHint_Callback = QSize* (*)();
	using QMenuBar_HeightForWidth_Callback = int (*)(const QMenuBar*, int);
	using QMenuBar_SetVisible_Callback = void (*)(QMenuBar*, bool);
	using QMenuBar_ChangeEvent_Callback = void (*)(QMenuBar*, QEvent*);
	using QMenuBar_KeyPressEvent_Callback = void (*)(QMenuBar*, QKeyEvent*);
	using QMenuBar_MouseReleaseEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
	using QMenuBar_MousePressEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
	using QMenuBar_MouseMoveEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
	using QMenuBar_LeaveEvent_Callback = void (*)(QMenuBar*, QEvent*);
	using QMenuBar_PaintEvent_Callback = void (*)(QMenuBar*, QPaintEvent*);
	using QMenuBar_ResizeEvent_Callback = void (*)(QMenuBar*, QResizeEvent*);
	using QMenuBar_ActionEvent_Callback = void (*)(QMenuBar*, QActionEvent*);
	using QMenuBar_FocusOutEvent_Callback = void (*)(QMenuBar*, QFocusEvent*);
	using QMenuBar_FocusInEvent_Callback = void (*)(QMenuBar*, QFocusEvent*);
	using QMenuBar_TimerEvent_Callback = void (*)(QMenuBar*, QTimerEvent*);
	using QMenuBar_EventFilter_Callback = bool (*)(QMenuBar*, QObject*, QEvent*);
	using QMenuBar_Event_Callback = bool (*)(QMenuBar*, QEvent*);
	using QMenuBar_InitStyleOption_Callback = void (*)(const QMenuBar*, QStyleOptionMenuItem*, const QAction*);

protected:
	// Instance callback storage
	mutable QMenuBar_SizeHint_Callback qmenubar_sizehint_callback = nullptr;
	mutable QMenuBar_MinimumSizeHint_Callback qmenubar_minimumsizehint_callback = nullptr;
	mutable QMenuBar_HeightForWidth_Callback qmenubar_heightforwidth_callback = nullptr;
	mutable QMenuBar_SetVisible_Callback qmenubar_setvisible_callback = nullptr;
	mutable QMenuBar_ChangeEvent_Callback qmenubar_changeevent_callback = nullptr;
	mutable QMenuBar_KeyPressEvent_Callback qmenubar_keypressevent_callback = nullptr;
	mutable QMenuBar_MouseReleaseEvent_Callback qmenubar_mousereleaseevent_callback = nullptr;
	mutable QMenuBar_MousePressEvent_Callback qmenubar_mousepressevent_callback = nullptr;
	mutable QMenuBar_MouseMoveEvent_Callback qmenubar_mousemoveevent_callback = nullptr;
	mutable QMenuBar_LeaveEvent_Callback qmenubar_leaveevent_callback = nullptr;
	mutable QMenuBar_PaintEvent_Callback qmenubar_paintevent_callback = nullptr;
	mutable QMenuBar_ResizeEvent_Callback qmenubar_resizeevent_callback = nullptr;
	mutable QMenuBar_ActionEvent_Callback qmenubar_actionevent_callback = nullptr;
	mutable QMenuBar_FocusOutEvent_Callback qmenubar_focusoutevent_callback = nullptr;
	mutable QMenuBar_FocusInEvent_Callback qmenubar_focusinevent_callback = nullptr;
	mutable QMenuBar_TimerEvent_Callback qmenubar_timerevent_callback = nullptr;
	mutable QMenuBar_EventFilter_Callback qmenubar_eventfilter_callback = nullptr;
	mutable QMenuBar_Event_Callback qmenubar_event_callback = nullptr;
	mutable QMenuBar_InitStyleOption_Callback qmenubar_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qmenubar_sizehint_isbase = false;
    mutable bool qmenubar_minimumsizehint_isbase = false;
    mutable bool qmenubar_heightforwidth_isbase = false;
    mutable bool qmenubar_setvisible_isbase = false;
    mutable bool qmenubar_changeevent_isbase = false;
    mutable bool qmenubar_keypressevent_isbase = false;
    mutable bool qmenubar_mousereleaseevent_isbase = false;
    mutable bool qmenubar_mousepressevent_isbase = false;
    mutable bool qmenubar_mousemoveevent_isbase = false;
    mutable bool qmenubar_leaveevent_isbase = false;
    mutable bool qmenubar_paintevent_isbase = false;
    mutable bool qmenubar_resizeevent_isbase = false;
    mutable bool qmenubar_actionevent_isbase = false;
    mutable bool qmenubar_focusoutevent_isbase = false;
    mutable bool qmenubar_focusinevent_isbase = false;
    mutable bool qmenubar_timerevent_isbase = false;
    mutable bool qmenubar_eventfilter_isbase = false;
    mutable bool qmenubar_event_isbase = false;
    mutable bool qmenubar_initstyleoption_isbase = false;

public:
	VirtualQMenuBar(QWidget* parent): QMenuBar(parent) {};
	VirtualQMenuBar(): QMenuBar() {};

	~VirtualQMenuBar() {
		qmenubar_sizehint_callback = nullptr;
		qmenubar_minimumsizehint_callback = nullptr;
		qmenubar_heightforwidth_callback = nullptr;
		qmenubar_setvisible_callback = nullptr;
		qmenubar_changeevent_callback = nullptr;
		qmenubar_keypressevent_callback = nullptr;
		qmenubar_mousereleaseevent_callback = nullptr;
		qmenubar_mousepressevent_callback = nullptr;
		qmenubar_mousemoveevent_callback = nullptr;
		qmenubar_leaveevent_callback = nullptr;
		qmenubar_paintevent_callback = nullptr;
		qmenubar_resizeevent_callback = nullptr;
		qmenubar_actionevent_callback = nullptr;
		qmenubar_focusoutevent_callback = nullptr;
		qmenubar_focusinevent_callback = nullptr;
		qmenubar_timerevent_callback = nullptr;
		qmenubar_eventfilter_callback = nullptr;
		qmenubar_event_callback = nullptr;
		qmenubar_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQMenuBar_SizeHint_Callback(QMenuBar_SizeHint_Callback cb) const { qmenubar_sizehint_callback = cb; }
	inline void setQMenuBar_MinimumSizeHint_Callback(QMenuBar_MinimumSizeHint_Callback cb) const { qmenubar_minimumsizehint_callback = cb; }
	inline void setQMenuBar_HeightForWidth_Callback(QMenuBar_HeightForWidth_Callback cb) const { qmenubar_heightforwidth_callback = cb; }
	inline void setQMenuBar_SetVisible_Callback(QMenuBar_SetVisible_Callback cb) const { qmenubar_setvisible_callback = cb; }
	inline void setQMenuBar_ChangeEvent_Callback(QMenuBar_ChangeEvent_Callback cb) const { qmenubar_changeevent_callback = cb; }
	inline void setQMenuBar_KeyPressEvent_Callback(QMenuBar_KeyPressEvent_Callback cb) const { qmenubar_keypressevent_callback = cb; }
	inline void setQMenuBar_MouseReleaseEvent_Callback(QMenuBar_MouseReleaseEvent_Callback cb) const { qmenubar_mousereleaseevent_callback = cb; }
	inline void setQMenuBar_MousePressEvent_Callback(QMenuBar_MousePressEvent_Callback cb) const { qmenubar_mousepressevent_callback = cb; }
	inline void setQMenuBar_MouseMoveEvent_Callback(QMenuBar_MouseMoveEvent_Callback cb) const { qmenubar_mousemoveevent_callback = cb; }
	inline void setQMenuBar_LeaveEvent_Callback(QMenuBar_LeaveEvent_Callback cb) const { qmenubar_leaveevent_callback = cb; }
	inline void setQMenuBar_PaintEvent_Callback(QMenuBar_PaintEvent_Callback cb) const { qmenubar_paintevent_callback = cb; }
	inline void setQMenuBar_ResizeEvent_Callback(QMenuBar_ResizeEvent_Callback cb) const { qmenubar_resizeevent_callback = cb; }
	inline void setQMenuBar_ActionEvent_Callback(QMenuBar_ActionEvent_Callback cb) const { qmenubar_actionevent_callback = cb; }
	inline void setQMenuBar_FocusOutEvent_Callback(QMenuBar_FocusOutEvent_Callback cb) const { qmenubar_focusoutevent_callback = cb; }
	inline void setQMenuBar_FocusInEvent_Callback(QMenuBar_FocusInEvent_Callback cb) const { qmenubar_focusinevent_callback = cb; }
	inline void setQMenuBar_TimerEvent_Callback(QMenuBar_TimerEvent_Callback cb) const { qmenubar_timerevent_callback = cb; }
	inline void setQMenuBar_EventFilter_Callback(QMenuBar_EventFilter_Callback cb) const { qmenubar_eventfilter_callback = cb; }
	inline void setQMenuBar_Event_Callback(QMenuBar_Event_Callback cb) const { qmenubar_event_callback = cb; }
	inline void setQMenuBar_InitStyleOption_Callback(QMenuBar_InitStyleOption_Callback cb) const { qmenubar_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQMenuBar_SizeHint_IsBase(bool value) const { qmenubar_sizehint_isbase = value; }
	inline void setQMenuBar_MinimumSizeHint_IsBase(bool value) const { qmenubar_minimumsizehint_isbase = value; }
	inline void setQMenuBar_HeightForWidth_IsBase(bool value) const { qmenubar_heightforwidth_isbase = value; }
	inline void setQMenuBar_SetVisible_IsBase(bool value) const { qmenubar_setvisible_isbase = value; }
	inline void setQMenuBar_ChangeEvent_IsBase(bool value) const { qmenubar_changeevent_isbase = value; }
	inline void setQMenuBar_KeyPressEvent_IsBase(bool value) const { qmenubar_keypressevent_isbase = value; }
	inline void setQMenuBar_MouseReleaseEvent_IsBase(bool value) const { qmenubar_mousereleaseevent_isbase = value; }
	inline void setQMenuBar_MousePressEvent_IsBase(bool value) const { qmenubar_mousepressevent_isbase = value; }
	inline void setQMenuBar_MouseMoveEvent_IsBase(bool value) const { qmenubar_mousemoveevent_isbase = value; }
	inline void setQMenuBar_LeaveEvent_IsBase(bool value) const { qmenubar_leaveevent_isbase = value; }
	inline void setQMenuBar_PaintEvent_IsBase(bool value) const { qmenubar_paintevent_isbase = value; }
	inline void setQMenuBar_ResizeEvent_IsBase(bool value) const { qmenubar_resizeevent_isbase = value; }
	inline void setQMenuBar_ActionEvent_IsBase(bool value) const { qmenubar_actionevent_isbase = value; }
	inline void setQMenuBar_FocusOutEvent_IsBase(bool value) const { qmenubar_focusoutevent_isbase = value; }
	inline void setQMenuBar_FocusInEvent_IsBase(bool value) const { qmenubar_focusinevent_isbase = value; }
	inline void setQMenuBar_TimerEvent_IsBase(bool value) const { qmenubar_timerevent_isbase = value; }
	inline void setQMenuBar_EventFilter_IsBase(bool value) const { qmenubar_eventfilter_isbase = value; }
	inline void setQMenuBar_Event_IsBase(bool value) const { qmenubar_event_isbase = value; }
	inline void setQMenuBar_InitStyleOption_IsBase(bool value) const { qmenubar_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qmenubar_sizehint_isbase) {
			qmenubar_sizehint_isbase = false;
			return QMenuBar::sizeHint();
		} else if (qmenubar_sizehint_callback != nullptr) {
			QSize* callback_ret = qmenubar_sizehint_callback();
			return *callback_ret;
		} else {
			return QMenuBar::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qmenubar_minimumsizehint_isbase) {
			qmenubar_minimumsizehint_isbase = false;
			return QMenuBar::minimumSizeHint();
		} else if (qmenubar_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qmenubar_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QMenuBar::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int heightForWidth(int param1) const override {
		if (qmenubar_heightforwidth_isbase) {
			qmenubar_heightforwidth_isbase = false;
			return QMenuBar::heightForWidth(param1);
		} else if (qmenubar_heightforwidth_callback != nullptr) {
			int cbval1 = param1;
			int callback_ret = qmenubar_heightforwidth_callback(this, cbval1);
			return callback_ret;
		} else {
			return QMenuBar::heightForWidth(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qmenubar_setvisible_isbase) {
			qmenubar_setvisible_isbase = false;
			QMenuBar::setVisible(visible);
		} else if (qmenubar_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qmenubar_setvisible_callback(this, cbval1);
		} else {
			QMenuBar::setVisible(visible);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* param1) override {
		if (qmenubar_changeevent_isbase) {
			qmenubar_changeevent_isbase = false;
			QMenuBar::changeEvent(param1);
		} else if (qmenubar_changeevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qmenubar_changeevent_callback(this, cbval1);
		} else {
			QMenuBar::changeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (qmenubar_keypressevent_isbase) {
			qmenubar_keypressevent_isbase = false;
			QMenuBar::keyPressEvent(param1);
		} else if (qmenubar_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qmenubar_keypressevent_callback(this, cbval1);
		} else {
			QMenuBar::keyPressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (qmenubar_mousereleaseevent_isbase) {
			qmenubar_mousereleaseevent_isbase = false;
			QMenuBar::mouseReleaseEvent(param1);
		} else if (qmenubar_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qmenubar_mousereleaseevent_callback(this, cbval1);
		} else {
			QMenuBar::mouseReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (qmenubar_mousepressevent_isbase) {
			qmenubar_mousepressevent_isbase = false;
			QMenuBar::mousePressEvent(param1);
		} else if (qmenubar_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qmenubar_mousepressevent_callback(this, cbval1);
		} else {
			QMenuBar::mousePressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qmenubar_mousemoveevent_isbase) {
			qmenubar_mousemoveevent_isbase = false;
			QMenuBar::mouseMoveEvent(param1);
		} else if (qmenubar_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qmenubar_mousemoveevent_callback(this, cbval1);
		} else {
			QMenuBar::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void leaveEvent(QEvent* param1) override {
		if (qmenubar_leaveevent_isbase) {
			qmenubar_leaveevent_isbase = false;
			QMenuBar::leaveEvent(param1);
		} else if (qmenubar_leaveevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qmenubar_leaveevent_callback(this, cbval1);
		} else {
			QMenuBar::leaveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qmenubar_paintevent_isbase) {
			qmenubar_paintevent_isbase = false;
			QMenuBar::paintEvent(param1);
		} else if (qmenubar_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qmenubar_paintevent_callback(this, cbval1);
		} else {
			QMenuBar::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (qmenubar_resizeevent_isbase) {
			qmenubar_resizeevent_isbase = false;
			QMenuBar::resizeEvent(param1);
		} else if (qmenubar_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = param1;
			qmenubar_resizeevent_callback(this, cbval1);
		} else {
			QMenuBar::resizeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void actionEvent(QActionEvent* param1) override {
		if (qmenubar_actionevent_isbase) {
			qmenubar_actionevent_isbase = false;
			QMenuBar::actionEvent(param1);
		} else if (qmenubar_actionevent_callback != nullptr) {
			QActionEvent* cbval1 = param1;
			qmenubar_actionevent_callback(this, cbval1);
		} else {
			QMenuBar::actionEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (qmenubar_focusoutevent_isbase) {
			qmenubar_focusoutevent_isbase = false;
			QMenuBar::focusOutEvent(param1);
		} else if (qmenubar_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = param1;
			qmenubar_focusoutevent_callback(this, cbval1);
		} else {
			QMenuBar::focusOutEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (qmenubar_focusinevent_isbase) {
			qmenubar_focusinevent_isbase = false;
			QMenuBar::focusInEvent(param1);
		} else if (qmenubar_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = param1;
			qmenubar_focusinevent_callback(this, cbval1);
		} else {
			QMenuBar::focusInEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* param1) override {
		if (qmenubar_timerevent_isbase) {
			qmenubar_timerevent_isbase = false;
			QMenuBar::timerEvent(param1);
		} else if (qmenubar_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = param1;
			qmenubar_timerevent_callback(this, cbval1);
		} else {
			QMenuBar::timerEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (qmenubar_eventfilter_isbase) {
			qmenubar_eventfilter_isbase = false;
			return QMenuBar::eventFilter(param1, param2);
		} else if (qmenubar_eventfilter_callback != nullptr) {
			QObject* cbval1 = param1;
			QEvent* cbval2 = param2;
			bool callback_ret = qmenubar_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QMenuBar::eventFilter(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qmenubar_event_isbase) {
			qmenubar_event_isbase = false;
			return QMenuBar::event(param1);
		} else if (qmenubar_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qmenubar_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QMenuBar::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
		if (qmenubar_initstyleoption_isbase) {
			qmenubar_initstyleoption_isbase = false;
			QMenuBar::initStyleOption(option, action);
		} else if (qmenubar_initstyleoption_callback != nullptr) {
			QStyleOptionMenuItem* cbval1 = option;
			const QAction* cbval2 = action;
			qmenubar_initstyleoption_callback(this, cbval1, cbval2);
		} else {
			QMenuBar::initStyleOption(option, action);
		}
	}

	// Friend functions
	friend void QMenuBar_ChangeEvent(QMenuBar* self, QEvent* param1);
	friend void QMenuBar_QBaseChangeEvent(QMenuBar* self, QEvent* param1);
	friend void QMenuBar_KeyPressEvent(QMenuBar* self, QKeyEvent* param1);
	friend void QMenuBar_QBaseKeyPressEvent(QMenuBar* self, QKeyEvent* param1);
	friend void QMenuBar_MouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
	friend void QMenuBar_QBaseMouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
	friend void QMenuBar_MousePressEvent(QMenuBar* self, QMouseEvent* param1);
	friend void QMenuBar_QBaseMousePressEvent(QMenuBar* self, QMouseEvent* param1);
	friend void QMenuBar_MouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
	friend void QMenuBar_QBaseMouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
	friend void QMenuBar_LeaveEvent(QMenuBar* self, QEvent* param1);
	friend void QMenuBar_QBaseLeaveEvent(QMenuBar* self, QEvent* param1);
	friend void QMenuBar_PaintEvent(QMenuBar* self, QPaintEvent* param1);
	friend void QMenuBar_QBasePaintEvent(QMenuBar* self, QPaintEvent* param1);
	friend void QMenuBar_ResizeEvent(QMenuBar* self, QResizeEvent* param1);
	friend void QMenuBar_QBaseResizeEvent(QMenuBar* self, QResizeEvent* param1);
	friend void QMenuBar_ActionEvent(QMenuBar* self, QActionEvent* param1);
	friend void QMenuBar_QBaseActionEvent(QMenuBar* self, QActionEvent* param1);
	friend void QMenuBar_FocusOutEvent(QMenuBar* self, QFocusEvent* param1);
	friend void QMenuBar_QBaseFocusOutEvent(QMenuBar* self, QFocusEvent* param1);
	friend void QMenuBar_FocusInEvent(QMenuBar* self, QFocusEvent* param1);
	friend void QMenuBar_QBaseFocusInEvent(QMenuBar* self, QFocusEvent* param1);
	friend void QMenuBar_TimerEvent(QMenuBar* self, QTimerEvent* param1);
	friend void QMenuBar_QBaseTimerEvent(QMenuBar* self, QTimerEvent* param1);
	friend bool QMenuBar_EventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
	friend bool QMenuBar_QBaseEventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
	friend bool QMenuBar_Event(QMenuBar* self, QEvent* param1);
	friend bool QMenuBar_QBaseEvent(QMenuBar* self, QEvent* param1);
	friend void QMenuBar_InitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action);
	friend void QMenuBar_QBaseInitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action);
};

#endif


