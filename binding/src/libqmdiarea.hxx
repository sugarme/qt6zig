#pragma once
#ifndef QMDIAREA_H_C_LIBVIRTUAL
#define QMDIAREA_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QMdiArea so that we can call protected methods
class VirtualQMdiArea final : public QMdiArea {

public:
	// Virtual class boolean flag
	bool isVirtualQMdiArea= true;

	// Virtual class public types (including callbacks)
	using QMdiArea_SizeHint_Callback = QSize* (*)();
	using QMdiArea_MinimumSizeHint_Callback = QSize* (*)();
	using QMdiArea_SetupViewport_Callback = void (*)(QMdiArea*, QWidget*);
	using QMdiArea_Event_Callback = bool (*)(QMdiArea*, QEvent*);
	using QMdiArea_EventFilter_Callback = bool (*)(QMdiArea*, QObject*, QEvent*);
	using QMdiArea_PaintEvent_Callback = void (*)(QMdiArea*, QPaintEvent*);
	using QMdiArea_ChildEvent_Callback = void (*)(QMdiArea*, QChildEvent*);
	using QMdiArea_ResizeEvent_Callback = void (*)(QMdiArea*, QResizeEvent*);
	using QMdiArea_TimerEvent_Callback = void (*)(QMdiArea*, QTimerEvent*);
	using QMdiArea_ShowEvent_Callback = void (*)(QMdiArea*, QShowEvent*);
	using QMdiArea_ViewportEvent_Callback = bool (*)(QMdiArea*, QEvent*);
	using QMdiArea_ScrollContentsBy_Callback = void (*)(QMdiArea*, int, int);

protected:
	// Instance callback storage
	mutable QMdiArea_SizeHint_Callback qmdiarea_sizehint_callback = nullptr;
	mutable QMdiArea_MinimumSizeHint_Callback qmdiarea_minimumsizehint_callback = nullptr;
	mutable QMdiArea_SetupViewport_Callback qmdiarea_setupviewport_callback = nullptr;
	mutable QMdiArea_Event_Callback qmdiarea_event_callback = nullptr;
	mutable QMdiArea_EventFilter_Callback qmdiarea_eventfilter_callback = nullptr;
	mutable QMdiArea_PaintEvent_Callback qmdiarea_paintevent_callback = nullptr;
	mutable QMdiArea_ChildEvent_Callback qmdiarea_childevent_callback = nullptr;
	mutable QMdiArea_ResizeEvent_Callback qmdiarea_resizeevent_callback = nullptr;
	mutable QMdiArea_TimerEvent_Callback qmdiarea_timerevent_callback = nullptr;
	mutable QMdiArea_ShowEvent_Callback qmdiarea_showevent_callback = nullptr;
	mutable QMdiArea_ViewportEvent_Callback qmdiarea_viewportevent_callback = nullptr;
	mutable QMdiArea_ScrollContentsBy_Callback qmdiarea_scrollcontentsby_callback = nullptr;

	// Instance base flags
    mutable bool qmdiarea_sizehint_isbase = false;
    mutable bool qmdiarea_minimumsizehint_isbase = false;
    mutable bool qmdiarea_setupviewport_isbase = false;
    mutable bool qmdiarea_event_isbase = false;
    mutable bool qmdiarea_eventfilter_isbase = false;
    mutable bool qmdiarea_paintevent_isbase = false;
    mutable bool qmdiarea_childevent_isbase = false;
    mutable bool qmdiarea_resizeevent_isbase = false;
    mutable bool qmdiarea_timerevent_isbase = false;
    mutable bool qmdiarea_showevent_isbase = false;
    mutable bool qmdiarea_viewportevent_isbase = false;
    mutable bool qmdiarea_scrollcontentsby_isbase = false;

public:
	VirtualQMdiArea(QWidget* parent): QMdiArea(parent) {};
	VirtualQMdiArea(): QMdiArea() {};

	~VirtualQMdiArea() {
		qmdiarea_sizehint_callback = nullptr;
		qmdiarea_minimumsizehint_callback = nullptr;
		qmdiarea_setupviewport_callback = nullptr;
		qmdiarea_event_callback = nullptr;
		qmdiarea_eventfilter_callback = nullptr;
		qmdiarea_paintevent_callback = nullptr;
		qmdiarea_childevent_callback = nullptr;
		qmdiarea_resizeevent_callback = nullptr;
		qmdiarea_timerevent_callback = nullptr;
		qmdiarea_showevent_callback = nullptr;
		qmdiarea_viewportevent_callback = nullptr;
		qmdiarea_scrollcontentsby_callback = nullptr;
	}

// Callback setters
	inline void setQMdiArea_SizeHint_Callback(QMdiArea_SizeHint_Callback cb) const { qmdiarea_sizehint_callback = cb; }
	inline void setQMdiArea_MinimumSizeHint_Callback(QMdiArea_MinimumSizeHint_Callback cb) const { qmdiarea_minimumsizehint_callback = cb; }
	inline void setQMdiArea_SetupViewport_Callback(QMdiArea_SetupViewport_Callback cb) const { qmdiarea_setupviewport_callback = cb; }
	inline void setQMdiArea_Event_Callback(QMdiArea_Event_Callback cb) const { qmdiarea_event_callback = cb; }
	inline void setQMdiArea_EventFilter_Callback(QMdiArea_EventFilter_Callback cb) const { qmdiarea_eventfilter_callback = cb; }
	inline void setQMdiArea_PaintEvent_Callback(QMdiArea_PaintEvent_Callback cb) const { qmdiarea_paintevent_callback = cb; }
	inline void setQMdiArea_ChildEvent_Callback(QMdiArea_ChildEvent_Callback cb) const { qmdiarea_childevent_callback = cb; }
	inline void setQMdiArea_ResizeEvent_Callback(QMdiArea_ResizeEvent_Callback cb) const { qmdiarea_resizeevent_callback = cb; }
	inline void setQMdiArea_TimerEvent_Callback(QMdiArea_TimerEvent_Callback cb) const { qmdiarea_timerevent_callback = cb; }
	inline void setQMdiArea_ShowEvent_Callback(QMdiArea_ShowEvent_Callback cb) const { qmdiarea_showevent_callback = cb; }
	inline void setQMdiArea_ViewportEvent_Callback(QMdiArea_ViewportEvent_Callback cb) const { qmdiarea_viewportevent_callback = cb; }
	inline void setQMdiArea_ScrollContentsBy_Callback(QMdiArea_ScrollContentsBy_Callback cb) const { qmdiarea_scrollcontentsby_callback = cb; }

// Base flag setters
	inline void setQMdiArea_SizeHint_IsBase(bool value) const { qmdiarea_sizehint_isbase = value; }
	inline void setQMdiArea_MinimumSizeHint_IsBase(bool value) const { qmdiarea_minimumsizehint_isbase = value; }
	inline void setQMdiArea_SetupViewport_IsBase(bool value) const { qmdiarea_setupviewport_isbase = value; }
	inline void setQMdiArea_Event_IsBase(bool value) const { qmdiarea_event_isbase = value; }
	inline void setQMdiArea_EventFilter_IsBase(bool value) const { qmdiarea_eventfilter_isbase = value; }
	inline void setQMdiArea_PaintEvent_IsBase(bool value) const { qmdiarea_paintevent_isbase = value; }
	inline void setQMdiArea_ChildEvent_IsBase(bool value) const { qmdiarea_childevent_isbase = value; }
	inline void setQMdiArea_ResizeEvent_IsBase(bool value) const { qmdiarea_resizeevent_isbase = value; }
	inline void setQMdiArea_TimerEvent_IsBase(bool value) const { qmdiarea_timerevent_isbase = value; }
	inline void setQMdiArea_ShowEvent_IsBase(bool value) const { qmdiarea_showevent_isbase = value; }
	inline void setQMdiArea_ViewportEvent_IsBase(bool value) const { qmdiarea_viewportevent_isbase = value; }
	inline void setQMdiArea_ScrollContentsBy_IsBase(bool value) const { qmdiarea_scrollcontentsby_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qmdiarea_sizehint_isbase) {
			qmdiarea_sizehint_isbase = false;
			return QMdiArea::sizeHint();
		} else if (qmdiarea_sizehint_callback != nullptr) {
			QSize* callback_ret = qmdiarea_sizehint_callback();
			return *callback_ret;
		} else {
			return QMdiArea::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qmdiarea_minimumsizehint_isbase) {
			qmdiarea_minimumsizehint_isbase = false;
			return QMdiArea::minimumSizeHint();
		} else if (qmdiarea_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qmdiarea_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QMdiArea::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setupViewport(QWidget* viewport) override {
		if (qmdiarea_setupviewport_isbase) {
			qmdiarea_setupviewport_isbase = false;
			QMdiArea::setupViewport(viewport);
		} else if (qmdiarea_setupviewport_callback != nullptr) {
			QWidget* cbval1 = viewport;
			qmdiarea_setupviewport_callback(this, cbval1);
		} else {
			QMdiArea::setupViewport(viewport);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qmdiarea_event_isbase) {
			qmdiarea_event_isbase = false;
			return QMdiArea::event(event);
		} else if (qmdiarea_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qmdiarea_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QMdiArea::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (qmdiarea_eventfilter_isbase) {
			qmdiarea_eventfilter_isbase = false;
			return QMdiArea::eventFilter(object, event);
		} else if (qmdiarea_eventfilter_callback != nullptr) {
			QObject* cbval1 = object;
			QEvent* cbval2 = event;
			bool callback_ret = qmdiarea_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QMdiArea::eventFilter(object, event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* paintEvent) override {
		if (qmdiarea_paintevent_isbase) {
			qmdiarea_paintevent_isbase = false;
			QMdiArea::paintEvent(paintEvent);
		} else if (qmdiarea_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = paintEvent;
			qmdiarea_paintevent_callback(this, cbval1);
		} else {
			QMdiArea::paintEvent(paintEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void childEvent(QChildEvent* childEvent) override {
		if (qmdiarea_childevent_isbase) {
			qmdiarea_childevent_isbase = false;
			QMdiArea::childEvent(childEvent);
		} else if (qmdiarea_childevent_callback != nullptr) {
			QChildEvent* cbval1 = childEvent;
			qmdiarea_childevent_callback(this, cbval1);
		} else {
			QMdiArea::childEvent(childEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* resizeEvent) override {
		if (qmdiarea_resizeevent_isbase) {
			qmdiarea_resizeevent_isbase = false;
			QMdiArea::resizeEvent(resizeEvent);
		} else if (qmdiarea_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = resizeEvent;
			qmdiarea_resizeevent_callback(this, cbval1);
		} else {
			QMdiArea::resizeEvent(resizeEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* timerEvent) override {
		if (qmdiarea_timerevent_isbase) {
			qmdiarea_timerevent_isbase = false;
			QMdiArea::timerEvent(timerEvent);
		} else if (qmdiarea_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = timerEvent;
			qmdiarea_timerevent_callback(this, cbval1);
		} else {
			QMdiArea::timerEvent(timerEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* showEvent) override {
		if (qmdiarea_showevent_isbase) {
			qmdiarea_showevent_isbase = false;
			QMdiArea::showEvent(showEvent);
		} else if (qmdiarea_showevent_callback != nullptr) {
			QShowEvent* cbval1 = showEvent;
			qmdiarea_showevent_callback(this, cbval1);
		} else {
			QMdiArea::showEvent(showEvent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool viewportEvent(QEvent* event) override {
		if (qmdiarea_viewportevent_isbase) {
			qmdiarea_viewportevent_isbase = false;
			return QMdiArea::viewportEvent(event);
		} else if (qmdiarea_viewportevent_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qmdiarea_viewportevent_callback(this, cbval1);
			return callback_ret;
		} else {
			return QMdiArea::viewportEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollContentsBy(int dx, int dy) override {
		if (qmdiarea_scrollcontentsby_isbase) {
			qmdiarea_scrollcontentsby_isbase = false;
			QMdiArea::scrollContentsBy(dx, dy);
		} else if (qmdiarea_scrollcontentsby_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qmdiarea_scrollcontentsby_callback(this, cbval1, cbval2);
		} else {
			QMdiArea::scrollContentsBy(dx, dy);
		}
	}

	// Friend functions
	friend void QMdiArea_SetupViewport(QMdiArea* self, QWidget* viewport);
	friend void QMdiArea_QBaseSetupViewport(QMdiArea* self, QWidget* viewport);
	friend bool QMdiArea_Event(QMdiArea* self, QEvent* event);
	friend bool QMdiArea_QBaseEvent(QMdiArea* self, QEvent* event);
	friend bool QMdiArea_EventFilter(QMdiArea* self, QObject* object, QEvent* event);
	friend bool QMdiArea_QBaseEventFilter(QMdiArea* self, QObject* object, QEvent* event);
	friend void QMdiArea_PaintEvent(QMdiArea* self, QPaintEvent* paintEvent);
	friend void QMdiArea_QBasePaintEvent(QMdiArea* self, QPaintEvent* paintEvent);
	friend void QMdiArea_ChildEvent(QMdiArea* self, QChildEvent* childEvent);
	friend void QMdiArea_QBaseChildEvent(QMdiArea* self, QChildEvent* childEvent);
	friend void QMdiArea_ResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent);
	friend void QMdiArea_QBaseResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent);
	friend void QMdiArea_TimerEvent(QMdiArea* self, QTimerEvent* timerEvent);
	friend void QMdiArea_QBaseTimerEvent(QMdiArea* self, QTimerEvent* timerEvent);
	friend void QMdiArea_ShowEvent(QMdiArea* self, QShowEvent* showEvent);
	friend void QMdiArea_QBaseShowEvent(QMdiArea* self, QShowEvent* showEvent);
	friend bool QMdiArea_ViewportEvent(QMdiArea* self, QEvent* event);
	friend bool QMdiArea_QBaseViewportEvent(QMdiArea* self, QEvent* event);
	friend void QMdiArea_ScrollContentsBy(QMdiArea* self, int dx, int dy);
	friend void QMdiArea_QBaseScrollContentsBy(QMdiArea* self, int dx, int dy);
};

#endif


