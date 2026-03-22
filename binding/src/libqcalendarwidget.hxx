#pragma once
#ifndef QCALENDARWIDGET_H_C_LIBVIRTUAL
#define QCALENDARWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QCalendarWidget so that we can call protected methods
class VirtualQCalendarWidget final : public QCalendarWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQCalendarWidget= true;

	// Virtual class public types (including callbacks)
	using QCalendarWidget_SizeHint_Callback = QSize* (*)();
	using QCalendarWidget_MinimumSizeHint_Callback = QSize* (*)();
	using QCalendarWidget_Event_Callback = bool (*)(QCalendarWidget*, QEvent*);
	using QCalendarWidget_EventFilter_Callback = bool (*)(QCalendarWidget*, QObject*, QEvent*);
	using QCalendarWidget_MousePressEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
	using QCalendarWidget_ResizeEvent_Callback = void (*)(QCalendarWidget*, QResizeEvent*);
	using QCalendarWidget_KeyPressEvent_Callback = void (*)(QCalendarWidget*, QKeyEvent*);
	using QCalendarWidget_PaintCell_Callback = void (*)(const QCalendarWidget*, QPainter*, const QRect*, QDate*);
	using QCalendarWidget_UpdateCell_Callback = void (*)(QCalendarWidget*, QDate*);
	using QCalendarWidget_UpdateCells_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QCalendarWidget_SizeHint_Callback qcalendarwidget_sizehint_callback = nullptr;
	mutable QCalendarWidget_MinimumSizeHint_Callback qcalendarwidget_minimumsizehint_callback = nullptr;
	mutable QCalendarWidget_Event_Callback qcalendarwidget_event_callback = nullptr;
	mutable QCalendarWidget_EventFilter_Callback qcalendarwidget_eventfilter_callback = nullptr;
	mutable QCalendarWidget_MousePressEvent_Callback qcalendarwidget_mousepressevent_callback = nullptr;
	mutable QCalendarWidget_ResizeEvent_Callback qcalendarwidget_resizeevent_callback = nullptr;
	mutable QCalendarWidget_KeyPressEvent_Callback qcalendarwidget_keypressevent_callback = nullptr;
	mutable QCalendarWidget_PaintCell_Callback qcalendarwidget_paintcell_callback = nullptr;
	mutable QCalendarWidget_UpdateCell_Callback qcalendarwidget_updatecell_callback = nullptr;
	mutable QCalendarWidget_UpdateCells_Callback qcalendarwidget_updatecells_callback = nullptr;

	// Instance base flags
    mutable bool qcalendarwidget_sizehint_isbase = false;
    mutable bool qcalendarwidget_minimumsizehint_isbase = false;
    mutable bool qcalendarwidget_event_isbase = false;
    mutable bool qcalendarwidget_eventfilter_isbase = false;
    mutable bool qcalendarwidget_mousepressevent_isbase = false;
    mutable bool qcalendarwidget_resizeevent_isbase = false;
    mutable bool qcalendarwidget_keypressevent_isbase = false;
    mutable bool qcalendarwidget_paintcell_isbase = false;
    mutable bool qcalendarwidget_updatecell_isbase = false;
    mutable bool qcalendarwidget_updatecells_isbase = false;

public:
	VirtualQCalendarWidget(QWidget* parent): QCalendarWidget(parent) {};
	VirtualQCalendarWidget(): QCalendarWidget() {};

	~VirtualQCalendarWidget() {
		qcalendarwidget_sizehint_callback = nullptr;
		qcalendarwidget_minimumsizehint_callback = nullptr;
		qcalendarwidget_event_callback = nullptr;
		qcalendarwidget_eventfilter_callback = nullptr;
		qcalendarwidget_mousepressevent_callback = nullptr;
		qcalendarwidget_resizeevent_callback = nullptr;
		qcalendarwidget_keypressevent_callback = nullptr;
		qcalendarwidget_paintcell_callback = nullptr;
		qcalendarwidget_updatecell_callback = nullptr;
		qcalendarwidget_updatecells_callback = nullptr;
	}

// Callback setters
	inline void setQCalendarWidget_SizeHint_Callback(QCalendarWidget_SizeHint_Callback cb) const { qcalendarwidget_sizehint_callback = cb; }
	inline void setQCalendarWidget_MinimumSizeHint_Callback(QCalendarWidget_MinimumSizeHint_Callback cb) const { qcalendarwidget_minimumsizehint_callback = cb; }
	inline void setQCalendarWidget_Event_Callback(QCalendarWidget_Event_Callback cb) const { qcalendarwidget_event_callback = cb; }
	inline void setQCalendarWidget_EventFilter_Callback(QCalendarWidget_EventFilter_Callback cb) const { qcalendarwidget_eventfilter_callback = cb; }
	inline void setQCalendarWidget_MousePressEvent_Callback(QCalendarWidget_MousePressEvent_Callback cb) const { qcalendarwidget_mousepressevent_callback = cb; }
	inline void setQCalendarWidget_ResizeEvent_Callback(QCalendarWidget_ResizeEvent_Callback cb) const { qcalendarwidget_resizeevent_callback = cb; }
	inline void setQCalendarWidget_KeyPressEvent_Callback(QCalendarWidget_KeyPressEvent_Callback cb) const { qcalendarwidget_keypressevent_callback = cb; }
	inline void setQCalendarWidget_PaintCell_Callback(QCalendarWidget_PaintCell_Callback cb) const { qcalendarwidget_paintcell_callback = cb; }
	inline void setQCalendarWidget_UpdateCell_Callback(QCalendarWidget_UpdateCell_Callback cb) const { qcalendarwidget_updatecell_callback = cb; }
	inline void setQCalendarWidget_UpdateCells_Callback(QCalendarWidget_UpdateCells_Callback cb) const { qcalendarwidget_updatecells_callback = cb; }

// Base flag setters
	inline void setQCalendarWidget_SizeHint_IsBase(bool value) const { qcalendarwidget_sizehint_isbase = value; }
	inline void setQCalendarWidget_MinimumSizeHint_IsBase(bool value) const { qcalendarwidget_minimumsizehint_isbase = value; }
	inline void setQCalendarWidget_Event_IsBase(bool value) const { qcalendarwidget_event_isbase = value; }
	inline void setQCalendarWidget_EventFilter_IsBase(bool value) const { qcalendarwidget_eventfilter_isbase = value; }
	inline void setQCalendarWidget_MousePressEvent_IsBase(bool value) const { qcalendarwidget_mousepressevent_isbase = value; }
	inline void setQCalendarWidget_ResizeEvent_IsBase(bool value) const { qcalendarwidget_resizeevent_isbase = value; }
	inline void setQCalendarWidget_KeyPressEvent_IsBase(bool value) const { qcalendarwidget_keypressevent_isbase = value; }
	inline void setQCalendarWidget_PaintCell_IsBase(bool value) const { qcalendarwidget_paintcell_isbase = value; }
	inline void setQCalendarWidget_UpdateCell_IsBase(bool value) const { qcalendarwidget_updatecell_isbase = value; }
	inline void setQCalendarWidget_UpdateCells_IsBase(bool value) const { qcalendarwidget_updatecells_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qcalendarwidget_sizehint_isbase) {
			qcalendarwidget_sizehint_isbase = false;
			return QCalendarWidget::sizeHint();
		} else if (qcalendarwidget_sizehint_callback != nullptr) {
			QSize* callback_ret = qcalendarwidget_sizehint_callback();
			return *callback_ret;
		} else {
			return QCalendarWidget::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qcalendarwidget_minimumsizehint_isbase) {
			qcalendarwidget_minimumsizehint_isbase = false;
			return QCalendarWidget::minimumSizeHint();
		} else if (qcalendarwidget_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qcalendarwidget_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QCalendarWidget::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qcalendarwidget_event_isbase) {
			qcalendarwidget_event_isbase = false;
			return QCalendarWidget::event(event);
		} else if (qcalendarwidget_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qcalendarwidget_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QCalendarWidget::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (qcalendarwidget_eventfilter_isbase) {
			qcalendarwidget_eventfilter_isbase = false;
			return QCalendarWidget::eventFilter(watched, event);
		} else if (qcalendarwidget_eventfilter_callback != nullptr) {
			QObject* cbval1 = watched;
			QEvent* cbval2 = event;
			bool callback_ret = qcalendarwidget_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QCalendarWidget::eventFilter(watched, event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (qcalendarwidget_mousepressevent_isbase) {
			qcalendarwidget_mousepressevent_isbase = false;
			QCalendarWidget::mousePressEvent(event);
		} else if (qcalendarwidget_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qcalendarwidget_mousepressevent_callback(this, cbval1);
		} else {
			QCalendarWidget::mousePressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qcalendarwidget_resizeevent_isbase) {
			qcalendarwidget_resizeevent_isbase = false;
			QCalendarWidget::resizeEvent(event);
		} else if (qcalendarwidget_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qcalendarwidget_resizeevent_callback(this, cbval1);
		} else {
			QCalendarWidget::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (qcalendarwidget_keypressevent_isbase) {
			qcalendarwidget_keypressevent_isbase = false;
			QCalendarWidget::keyPressEvent(event);
		} else if (qcalendarwidget_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qcalendarwidget_keypressevent_callback(this, cbval1);
		} else {
			QCalendarWidget::keyPressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintCell(QPainter* painter, const QRect& rect, QDate date) const override {
		if (qcalendarwidget_paintcell_isbase) {
			qcalendarwidget_paintcell_isbase = false;
			QCalendarWidget::paintCell(painter, rect, date);
		} else if (qcalendarwidget_paintcell_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRect* cbval2 = (const QRect*)&rect;
			QDate* cbval3 = &date;
			qcalendarwidget_paintcell_callback(this, cbval1, cbval2, cbval3);
		} else {
			QCalendarWidget::paintCell(painter, rect, date);
		}
	}

	// Virtual method for C ABI access and custom callback
	void updateCell(QDate date) {
		if (qcalendarwidget_updatecell_isbase) {
			qcalendarwidget_updatecell_isbase = false;
			QCalendarWidget::updateCell(date);
		} else if (qcalendarwidget_updatecell_callback != nullptr) {
			QDate* cbval1 = &date;
			qcalendarwidget_updatecell_callback(this, cbval1);
		} else {
			QCalendarWidget::updateCell(date);
		}
	}

	// Virtual method for C ABI access and custom callback
	void updateCells() {
		if (qcalendarwidget_updatecells_isbase) {
			qcalendarwidget_updatecells_isbase = false;
			QCalendarWidget::updateCells();
		} else if (qcalendarwidget_updatecells_callback != nullptr) {
			qcalendarwidget_updatecells_callback();
		} else {
			QCalendarWidget::updateCells();
		}
	}

	// Friend functions
	friend bool QCalendarWidget_Event(QCalendarWidget* self, QEvent* event);
	friend bool QCalendarWidget_QBaseEvent(QCalendarWidget* self, QEvent* event);
	friend bool QCalendarWidget_EventFilter(QCalendarWidget* self, QObject* watched, QEvent* event);
	friend bool QCalendarWidget_QBaseEventFilter(QCalendarWidget* self, QObject* watched, QEvent* event);
	friend void QCalendarWidget_MousePressEvent(QCalendarWidget* self, QMouseEvent* event);
	friend void QCalendarWidget_QBaseMousePressEvent(QCalendarWidget* self, QMouseEvent* event);
	friend void QCalendarWidget_ResizeEvent(QCalendarWidget* self, QResizeEvent* event);
	friend void QCalendarWidget_QBaseResizeEvent(QCalendarWidget* self, QResizeEvent* event);
	friend void QCalendarWidget_KeyPressEvent(QCalendarWidget* self, QKeyEvent* event);
	friend void QCalendarWidget_QBaseKeyPressEvent(QCalendarWidget* self, QKeyEvent* event);
	friend void QCalendarWidget_PaintCell(const QCalendarWidget* self, QPainter* painter, const QRect* rect, QDate* date);
	friend void QCalendarWidget_QBasePaintCell(const QCalendarWidget* self, QPainter* painter, const QRect* rect, QDate* date);
	friend void QCalendarWidget_UpdateCell(QCalendarWidget* self, QDate* date);
	friend void QCalendarWidget_QBaseUpdateCell(QCalendarWidget* self, QDate* date);
	friend void QCalendarWidget_UpdateCells(QCalendarWidget* self);
	friend void QCalendarWidget_QBaseUpdateCells(QCalendarWidget* self);
};

#endif


