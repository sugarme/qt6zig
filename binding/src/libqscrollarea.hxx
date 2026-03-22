#pragma once
#ifndef QSCROLLAREA_H_C_LIBVIRTUAL
#define QSCROLLAREA_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QScrollArea so that we can call protected methods
class VirtualQScrollArea final : public QScrollArea {

public:
	// Virtual class boolean flag
	bool isVirtualQScrollArea= true;

	// Virtual class public types (including callbacks)
	using QScrollArea_SizeHint_Callback = QSize* (*)();
	using QScrollArea_FocusNextPrevChild_Callback = bool (*)(QScrollArea*, bool);
	using QScrollArea_Event_Callback = bool (*)(QScrollArea*, QEvent*);
	using QScrollArea_EventFilter_Callback = bool (*)(QScrollArea*, QObject*, QEvent*);
	using QScrollArea_ResizeEvent_Callback = void (*)(QScrollArea*, QResizeEvent*);
	using QScrollArea_ScrollContentsBy_Callback = void (*)(QScrollArea*, int, int);
	using QScrollArea_ViewportSizeHint_Callback = QSize* (*)();

protected:
	// Instance callback storage
	mutable QScrollArea_SizeHint_Callback qscrollarea_sizehint_callback = nullptr;
	mutable QScrollArea_FocusNextPrevChild_Callback qscrollarea_focusnextprevchild_callback = nullptr;
	mutable QScrollArea_Event_Callback qscrollarea_event_callback = nullptr;
	mutable QScrollArea_EventFilter_Callback qscrollarea_eventfilter_callback = nullptr;
	mutable QScrollArea_ResizeEvent_Callback qscrollarea_resizeevent_callback = nullptr;
	mutable QScrollArea_ScrollContentsBy_Callback qscrollarea_scrollcontentsby_callback = nullptr;
	mutable QScrollArea_ViewportSizeHint_Callback qscrollarea_viewportsizehint_callback = nullptr;

	// Instance base flags
    mutable bool qscrollarea_sizehint_isbase = false;
    mutable bool qscrollarea_focusnextprevchild_isbase = false;
    mutable bool qscrollarea_event_isbase = false;
    mutable bool qscrollarea_eventfilter_isbase = false;
    mutable bool qscrollarea_resizeevent_isbase = false;
    mutable bool qscrollarea_scrollcontentsby_isbase = false;
    mutable bool qscrollarea_viewportsizehint_isbase = false;

public:
	VirtualQScrollArea(QWidget* parent): QScrollArea(parent) {};
	VirtualQScrollArea(): QScrollArea() {};

	~VirtualQScrollArea() {
		qscrollarea_sizehint_callback = nullptr;
		qscrollarea_focusnextprevchild_callback = nullptr;
		qscrollarea_event_callback = nullptr;
		qscrollarea_eventfilter_callback = nullptr;
		qscrollarea_resizeevent_callback = nullptr;
		qscrollarea_scrollcontentsby_callback = nullptr;
		qscrollarea_viewportsizehint_callback = nullptr;
	}

// Callback setters
	inline void setQScrollArea_SizeHint_Callback(QScrollArea_SizeHint_Callback cb) const { qscrollarea_sizehint_callback = cb; }
	inline void setQScrollArea_FocusNextPrevChild_Callback(QScrollArea_FocusNextPrevChild_Callback cb) const { qscrollarea_focusnextprevchild_callback = cb; }
	inline void setQScrollArea_Event_Callback(QScrollArea_Event_Callback cb) const { qscrollarea_event_callback = cb; }
	inline void setQScrollArea_EventFilter_Callback(QScrollArea_EventFilter_Callback cb) const { qscrollarea_eventfilter_callback = cb; }
	inline void setQScrollArea_ResizeEvent_Callback(QScrollArea_ResizeEvent_Callback cb) const { qscrollarea_resizeevent_callback = cb; }
	inline void setQScrollArea_ScrollContentsBy_Callback(QScrollArea_ScrollContentsBy_Callback cb) const { qscrollarea_scrollcontentsby_callback = cb; }
	inline void setQScrollArea_ViewportSizeHint_Callback(QScrollArea_ViewportSizeHint_Callback cb) const { qscrollarea_viewportsizehint_callback = cb; }

// Base flag setters
	inline void setQScrollArea_SizeHint_IsBase(bool value) const { qscrollarea_sizehint_isbase = value; }
	inline void setQScrollArea_FocusNextPrevChild_IsBase(bool value) const { qscrollarea_focusnextprevchild_isbase = value; }
	inline void setQScrollArea_Event_IsBase(bool value) const { qscrollarea_event_isbase = value; }
	inline void setQScrollArea_EventFilter_IsBase(bool value) const { qscrollarea_eventfilter_isbase = value; }
	inline void setQScrollArea_ResizeEvent_IsBase(bool value) const { qscrollarea_resizeevent_isbase = value; }
	inline void setQScrollArea_ScrollContentsBy_IsBase(bool value) const { qscrollarea_scrollcontentsby_isbase = value; }
	inline void setQScrollArea_ViewportSizeHint_IsBase(bool value) const { qscrollarea_viewportsizehint_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qscrollarea_sizehint_isbase) {
			qscrollarea_sizehint_isbase = false;
			return QScrollArea::sizeHint();
		} else if (qscrollarea_sizehint_callback != nullptr) {
			QSize* callback_ret = qscrollarea_sizehint_callback();
			return *callback_ret;
		} else {
			return QScrollArea::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool focusNextPrevChild(bool next) override {
		if (qscrollarea_focusnextprevchild_isbase) {
			qscrollarea_focusnextprevchild_isbase = false;
			return QScrollArea::focusNextPrevChild(next);
		} else if (qscrollarea_focusnextprevchild_callback != nullptr) {
			bool cbval1 = next;
			bool callback_ret = qscrollarea_focusnextprevchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QScrollArea::focusNextPrevChild(next);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qscrollarea_event_isbase) {
			qscrollarea_event_isbase = false;
			return QScrollArea::event(param1);
		} else if (qscrollarea_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qscrollarea_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QScrollArea::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (qscrollarea_eventfilter_isbase) {
			qscrollarea_eventfilter_isbase = false;
			return QScrollArea::eventFilter(param1, param2);
		} else if (qscrollarea_eventfilter_callback != nullptr) {
			QObject* cbval1 = param1;
			QEvent* cbval2 = param2;
			bool callback_ret = qscrollarea_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QScrollArea::eventFilter(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (qscrollarea_resizeevent_isbase) {
			qscrollarea_resizeevent_isbase = false;
			QScrollArea::resizeEvent(param1);
		} else if (qscrollarea_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = param1;
			qscrollarea_resizeevent_callback(this, cbval1);
		} else {
			QScrollArea::resizeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollContentsBy(int dx, int dy) override {
		if (qscrollarea_scrollcontentsby_isbase) {
			qscrollarea_scrollcontentsby_isbase = false;
			QScrollArea::scrollContentsBy(dx, dy);
		} else if (qscrollarea_scrollcontentsby_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qscrollarea_scrollcontentsby_callback(this, cbval1, cbval2);
		} else {
			QScrollArea::scrollContentsBy(dx, dy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize viewportSizeHint() const override {
		if (qscrollarea_viewportsizehint_isbase) {
			qscrollarea_viewportsizehint_isbase = false;
			return QScrollArea::viewportSizeHint();
		} else if (qscrollarea_viewportsizehint_callback != nullptr) {
			QSize* callback_ret = qscrollarea_viewportsizehint_callback();
			return *callback_ret;
		} else {
			return QScrollArea::viewportSizeHint();
		}
	}

	// Friend functions
	friend bool QScrollArea_Event(QScrollArea* self, QEvent* param1);
	friend bool QScrollArea_QBaseEvent(QScrollArea* self, QEvent* param1);
	friend bool QScrollArea_EventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
	friend bool QScrollArea_QBaseEventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
	friend void QScrollArea_ResizeEvent(QScrollArea* self, QResizeEvent* param1);
	friend void QScrollArea_QBaseResizeEvent(QScrollArea* self, QResizeEvent* param1);
	friend void QScrollArea_ScrollContentsBy(QScrollArea* self, int dx, int dy);
	friend void QScrollArea_QBaseScrollContentsBy(QScrollArea* self, int dx, int dy);
	friend QSize* QScrollArea_ViewportSizeHint(const QScrollArea* self);
	friend QSize* QScrollArea_QBaseViewportSizeHint(const QScrollArea* self);
};

#endif


