#pragma once
#ifndef QSIZEGRIP_H_C_LIBVIRTUAL
#define QSIZEGRIP_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSizeGrip so that we can call protected methods
class VirtualQSizeGrip final : public QSizeGrip {

public:
	// Virtual class boolean flag
	bool isVirtualQSizeGrip= true;

	// Virtual class public types (including callbacks)
	using QSizeGrip_SizeHint_Callback = QSize* (*)();
	using QSizeGrip_SetVisible_Callback = void (*)(QSizeGrip*, bool);
	using QSizeGrip_PaintEvent_Callback = void (*)(QSizeGrip*, QPaintEvent*);
	using QSizeGrip_MousePressEvent_Callback = void (*)(QSizeGrip*, QMouseEvent*);
	using QSizeGrip_MouseMoveEvent_Callback = void (*)(QSizeGrip*, QMouseEvent*);
	using QSizeGrip_MouseReleaseEvent_Callback = void (*)(QSizeGrip*, QMouseEvent*);
	using QSizeGrip_MoveEvent_Callback = void (*)(QSizeGrip*, QMoveEvent*);
	using QSizeGrip_ShowEvent_Callback = void (*)(QSizeGrip*, QShowEvent*);
	using QSizeGrip_HideEvent_Callback = void (*)(QSizeGrip*, QHideEvent*);
	using QSizeGrip_EventFilter_Callback = bool (*)(QSizeGrip*, QObject*, QEvent*);
	using QSizeGrip_Event_Callback = bool (*)(QSizeGrip*, QEvent*);

protected:
	// Instance callback storage
	mutable QSizeGrip_SizeHint_Callback qsizegrip_sizehint_callback = nullptr;
	mutable QSizeGrip_SetVisible_Callback qsizegrip_setvisible_callback = nullptr;
	mutable QSizeGrip_PaintEvent_Callback qsizegrip_paintevent_callback = nullptr;
	mutable QSizeGrip_MousePressEvent_Callback qsizegrip_mousepressevent_callback = nullptr;
	mutable QSizeGrip_MouseMoveEvent_Callback qsizegrip_mousemoveevent_callback = nullptr;
	mutable QSizeGrip_MouseReleaseEvent_Callback qsizegrip_mousereleaseevent_callback = nullptr;
	mutable QSizeGrip_MoveEvent_Callback qsizegrip_moveevent_callback = nullptr;
	mutable QSizeGrip_ShowEvent_Callback qsizegrip_showevent_callback = nullptr;
	mutable QSizeGrip_HideEvent_Callback qsizegrip_hideevent_callback = nullptr;
	mutable QSizeGrip_EventFilter_Callback qsizegrip_eventfilter_callback = nullptr;
	mutable QSizeGrip_Event_Callback qsizegrip_event_callback = nullptr;

	// Instance base flags
    mutable bool qsizegrip_sizehint_isbase = false;
    mutable bool qsizegrip_setvisible_isbase = false;
    mutable bool qsizegrip_paintevent_isbase = false;
    mutable bool qsizegrip_mousepressevent_isbase = false;
    mutable bool qsizegrip_mousemoveevent_isbase = false;
    mutable bool qsizegrip_mousereleaseevent_isbase = false;
    mutable bool qsizegrip_moveevent_isbase = false;
    mutable bool qsizegrip_showevent_isbase = false;
    mutable bool qsizegrip_hideevent_isbase = false;
    mutable bool qsizegrip_eventfilter_isbase = false;
    mutable bool qsizegrip_event_isbase = false;

public:
	VirtualQSizeGrip(QWidget* parent): QSizeGrip(parent) {};

	~VirtualQSizeGrip() {
		qsizegrip_sizehint_callback = nullptr;
		qsizegrip_setvisible_callback = nullptr;
		qsizegrip_paintevent_callback = nullptr;
		qsizegrip_mousepressevent_callback = nullptr;
		qsizegrip_mousemoveevent_callback = nullptr;
		qsizegrip_mousereleaseevent_callback = nullptr;
		qsizegrip_moveevent_callback = nullptr;
		qsizegrip_showevent_callback = nullptr;
		qsizegrip_hideevent_callback = nullptr;
		qsizegrip_eventfilter_callback = nullptr;
		qsizegrip_event_callback = nullptr;
	}

// Callback setters
	inline void setQSizeGrip_SizeHint_Callback(QSizeGrip_SizeHint_Callback cb) const { qsizegrip_sizehint_callback = cb; }
	inline void setQSizeGrip_SetVisible_Callback(QSizeGrip_SetVisible_Callback cb) const { qsizegrip_setvisible_callback = cb; }
	inline void setQSizeGrip_PaintEvent_Callback(QSizeGrip_PaintEvent_Callback cb) const { qsizegrip_paintevent_callback = cb; }
	inline void setQSizeGrip_MousePressEvent_Callback(QSizeGrip_MousePressEvent_Callback cb) const { qsizegrip_mousepressevent_callback = cb; }
	inline void setQSizeGrip_MouseMoveEvent_Callback(QSizeGrip_MouseMoveEvent_Callback cb) const { qsizegrip_mousemoveevent_callback = cb; }
	inline void setQSizeGrip_MouseReleaseEvent_Callback(QSizeGrip_MouseReleaseEvent_Callback cb) const { qsizegrip_mousereleaseevent_callback = cb; }
	inline void setQSizeGrip_MoveEvent_Callback(QSizeGrip_MoveEvent_Callback cb) const { qsizegrip_moveevent_callback = cb; }
	inline void setQSizeGrip_ShowEvent_Callback(QSizeGrip_ShowEvent_Callback cb) const { qsizegrip_showevent_callback = cb; }
	inline void setQSizeGrip_HideEvent_Callback(QSizeGrip_HideEvent_Callback cb) const { qsizegrip_hideevent_callback = cb; }
	inline void setQSizeGrip_EventFilter_Callback(QSizeGrip_EventFilter_Callback cb) const { qsizegrip_eventfilter_callback = cb; }
	inline void setQSizeGrip_Event_Callback(QSizeGrip_Event_Callback cb) const { qsizegrip_event_callback = cb; }

// Base flag setters
	inline void setQSizeGrip_SizeHint_IsBase(bool value) const { qsizegrip_sizehint_isbase = value; }
	inline void setQSizeGrip_SetVisible_IsBase(bool value) const { qsizegrip_setvisible_isbase = value; }
	inline void setQSizeGrip_PaintEvent_IsBase(bool value) const { qsizegrip_paintevent_isbase = value; }
	inline void setQSizeGrip_MousePressEvent_IsBase(bool value) const { qsizegrip_mousepressevent_isbase = value; }
	inline void setQSizeGrip_MouseMoveEvent_IsBase(bool value) const { qsizegrip_mousemoveevent_isbase = value; }
	inline void setQSizeGrip_MouseReleaseEvent_IsBase(bool value) const { qsizegrip_mousereleaseevent_isbase = value; }
	inline void setQSizeGrip_MoveEvent_IsBase(bool value) const { qsizegrip_moveevent_isbase = value; }
	inline void setQSizeGrip_ShowEvent_IsBase(bool value) const { qsizegrip_showevent_isbase = value; }
	inline void setQSizeGrip_HideEvent_IsBase(bool value) const { qsizegrip_hideevent_isbase = value; }
	inline void setQSizeGrip_EventFilter_IsBase(bool value) const { qsizegrip_eventfilter_isbase = value; }
	inline void setQSizeGrip_Event_IsBase(bool value) const { qsizegrip_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qsizegrip_sizehint_isbase) {
			qsizegrip_sizehint_isbase = false;
			return QSizeGrip::sizeHint();
		} else if (qsizegrip_sizehint_callback != nullptr) {
			QSize* callback_ret = qsizegrip_sizehint_callback();
			return *callback_ret;
		} else {
			return QSizeGrip::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qsizegrip_setvisible_isbase) {
			qsizegrip_setvisible_isbase = false;
			QSizeGrip::setVisible(visible);
		} else if (qsizegrip_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qsizegrip_setvisible_callback(this, cbval1);
		} else {
			QSizeGrip::setVisible(visible);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qsizegrip_paintevent_isbase) {
			qsizegrip_paintevent_isbase = false;
			QSizeGrip::paintEvent(param1);
		} else if (qsizegrip_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qsizegrip_paintevent_callback(this, cbval1);
		} else {
			QSizeGrip::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (qsizegrip_mousepressevent_isbase) {
			qsizegrip_mousepressevent_isbase = false;
			QSizeGrip::mousePressEvent(param1);
		} else if (qsizegrip_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qsizegrip_mousepressevent_callback(this, cbval1);
		} else {
			QSizeGrip::mousePressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qsizegrip_mousemoveevent_isbase) {
			qsizegrip_mousemoveevent_isbase = false;
			QSizeGrip::mouseMoveEvent(param1);
		} else if (qsizegrip_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qsizegrip_mousemoveevent_callback(this, cbval1);
		} else {
			QSizeGrip::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* mouseEvent) override {
		if (qsizegrip_mousereleaseevent_isbase) {
			qsizegrip_mousereleaseevent_isbase = false;
			QSizeGrip::mouseReleaseEvent(mouseEvent);
		} else if (qsizegrip_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = mouseEvent;
			qsizegrip_mousereleaseevent_callback(this, cbval1);
		} else {
			QSizeGrip::mouseReleaseEvent(mouseEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void moveEvent(QMoveEvent* moveEvent) override {
		if (qsizegrip_moveevent_isbase) {
			qsizegrip_moveevent_isbase = false;
			QSizeGrip::moveEvent(moveEvent);
		} else if (qsizegrip_moveevent_callback != nullptr) {
			QMoveEvent* cbval1 = moveEvent;
			qsizegrip_moveevent_callback(this, cbval1);
		} else {
			QSizeGrip::moveEvent(moveEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* showEvent) override {
		if (qsizegrip_showevent_isbase) {
			qsizegrip_showevent_isbase = false;
			QSizeGrip::showEvent(showEvent);
		} else if (qsizegrip_showevent_callback != nullptr) {
			QShowEvent* cbval1 = showEvent;
			qsizegrip_showevent_callback(this, cbval1);
		} else {
			QSizeGrip::showEvent(showEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hideEvent(QHideEvent* hideEvent) override {
		if (qsizegrip_hideevent_isbase) {
			qsizegrip_hideevent_isbase = false;
			QSizeGrip::hideEvent(hideEvent);
		} else if (qsizegrip_hideevent_callback != nullptr) {
			QHideEvent* cbval1 = hideEvent;
			qsizegrip_hideevent_callback(this, cbval1);
		} else {
			QSizeGrip::hideEvent(hideEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (qsizegrip_eventfilter_isbase) {
			qsizegrip_eventfilter_isbase = false;
			return QSizeGrip::eventFilter(param1, param2);
		} else if (qsizegrip_eventfilter_callback != nullptr) {
			QObject* cbval1 = param1;
			QEvent* cbval2 = param2;
			bool callback_ret = qsizegrip_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QSizeGrip::eventFilter(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qsizegrip_event_isbase) {
			qsizegrip_event_isbase = false;
			return QSizeGrip::event(param1);
		} else if (qsizegrip_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qsizegrip_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSizeGrip::event(param1);
		}
	}

	// Friend functions
	friend void QSizeGrip_PaintEvent(QSizeGrip* self, QPaintEvent* param1);
	friend void QSizeGrip_QBasePaintEvent(QSizeGrip* self, QPaintEvent* param1);
	friend void QSizeGrip_MousePressEvent(QSizeGrip* self, QMouseEvent* param1);
	friend void QSizeGrip_QBaseMousePressEvent(QSizeGrip* self, QMouseEvent* param1);
	friend void QSizeGrip_MouseMoveEvent(QSizeGrip* self, QMouseEvent* param1);
	friend void QSizeGrip_QBaseMouseMoveEvent(QSizeGrip* self, QMouseEvent* param1);
	friend void QSizeGrip_MouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent);
	friend void QSizeGrip_QBaseMouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent);
	friend void QSizeGrip_MoveEvent(QSizeGrip* self, QMoveEvent* moveEvent);
	friend void QSizeGrip_QBaseMoveEvent(QSizeGrip* self, QMoveEvent* moveEvent);
	friend void QSizeGrip_ShowEvent(QSizeGrip* self, QShowEvent* showEvent);
	friend void QSizeGrip_QBaseShowEvent(QSizeGrip* self, QShowEvent* showEvent);
	friend void QSizeGrip_HideEvent(QSizeGrip* self, QHideEvent* hideEvent);
	friend void QSizeGrip_QBaseHideEvent(QSizeGrip* self, QHideEvent* hideEvent);
	friend bool QSizeGrip_EventFilter(QSizeGrip* self, QObject* param1, QEvent* param2);
	friend bool QSizeGrip_QBaseEventFilter(QSizeGrip* self, QObject* param1, QEvent* param2);
	friend bool QSizeGrip_Event(QSizeGrip* self, QEvent* param1);
	friend bool QSizeGrip_QBaseEvent(QSizeGrip* self, QEvent* param1);
};

#endif


