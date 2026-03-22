#pragma once
#ifndef QRUBBERBAND_H_C_LIBVIRTUAL
#define QRUBBERBAND_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QRubberBand so that we can call protected methods
class VirtualQRubberBand final : public QRubberBand {

public:
	// Virtual class boolean flag
	bool isVirtualQRubberBand= true;

	// Virtual class public types (including callbacks)
	using QRubberBand_Event_Callback = bool (*)(QRubberBand*, QEvent*);
	using QRubberBand_PaintEvent_Callback = void (*)(QRubberBand*, QPaintEvent*);
	using QRubberBand_ChangeEvent_Callback = void (*)(QRubberBand*, QEvent*);
	using QRubberBand_ShowEvent_Callback = void (*)(QRubberBand*, QShowEvent*);
	using QRubberBand_ResizeEvent_Callback = void (*)(QRubberBand*, QResizeEvent*);
	using QRubberBand_MoveEvent_Callback = void (*)(QRubberBand*, QMoveEvent*);
	using QRubberBand_InitStyleOption_Callback = void (*)(const QRubberBand*, QStyleOptionRubberBand*);

protected:
	// Instance callback storage
	mutable QRubberBand_Event_Callback qrubberband_event_callback = nullptr;
	mutable QRubberBand_PaintEvent_Callback qrubberband_paintevent_callback = nullptr;
	mutable QRubberBand_ChangeEvent_Callback qrubberband_changeevent_callback = nullptr;
	mutable QRubberBand_ShowEvent_Callback qrubberband_showevent_callback = nullptr;
	mutable QRubberBand_ResizeEvent_Callback qrubberband_resizeevent_callback = nullptr;
	mutable QRubberBand_MoveEvent_Callback qrubberband_moveevent_callback = nullptr;
	mutable QRubberBand_InitStyleOption_Callback qrubberband_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qrubberband_event_isbase = false;
    mutable bool qrubberband_paintevent_isbase = false;
    mutable bool qrubberband_changeevent_isbase = false;
    mutable bool qrubberband_showevent_isbase = false;
    mutable bool qrubberband_resizeevent_isbase = false;
    mutable bool qrubberband_moveevent_isbase = false;
    mutable bool qrubberband_initstyleoption_isbase = false;

public:
	VirtualQRubberBand(QRubberBand::Shape param1): QRubberBand(param1) {};
	VirtualQRubberBand(QRubberBand::Shape param1, QWidget* param2): QRubberBand(param1, param2) {};

	~VirtualQRubberBand() {
		qrubberband_event_callback = nullptr;
		qrubberband_paintevent_callback = nullptr;
		qrubberband_changeevent_callback = nullptr;
		qrubberband_showevent_callback = nullptr;
		qrubberband_resizeevent_callback = nullptr;
		qrubberband_moveevent_callback = nullptr;
		qrubberband_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQRubberBand_Event_Callback(QRubberBand_Event_Callback cb) const { qrubberband_event_callback = cb; }
	inline void setQRubberBand_PaintEvent_Callback(QRubberBand_PaintEvent_Callback cb) const { qrubberband_paintevent_callback = cb; }
	inline void setQRubberBand_ChangeEvent_Callback(QRubberBand_ChangeEvent_Callback cb) const { qrubberband_changeevent_callback = cb; }
	inline void setQRubberBand_ShowEvent_Callback(QRubberBand_ShowEvent_Callback cb) const { qrubberband_showevent_callback = cb; }
	inline void setQRubberBand_ResizeEvent_Callback(QRubberBand_ResizeEvent_Callback cb) const { qrubberband_resizeevent_callback = cb; }
	inline void setQRubberBand_MoveEvent_Callback(QRubberBand_MoveEvent_Callback cb) const { qrubberband_moveevent_callback = cb; }
	inline void setQRubberBand_InitStyleOption_Callback(QRubberBand_InitStyleOption_Callback cb) const { qrubberband_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQRubberBand_Event_IsBase(bool value) const { qrubberband_event_isbase = value; }
	inline void setQRubberBand_PaintEvent_IsBase(bool value) const { qrubberband_paintevent_isbase = value; }
	inline void setQRubberBand_ChangeEvent_IsBase(bool value) const { qrubberband_changeevent_isbase = value; }
	inline void setQRubberBand_ShowEvent_IsBase(bool value) const { qrubberband_showevent_isbase = value; }
	inline void setQRubberBand_ResizeEvent_IsBase(bool value) const { qrubberband_resizeevent_isbase = value; }
	inline void setQRubberBand_MoveEvent_IsBase(bool value) const { qrubberband_moveevent_isbase = value; }
	inline void setQRubberBand_InitStyleOption_IsBase(bool value) const { qrubberband_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qrubberband_event_isbase) {
			qrubberband_event_isbase = false;
			return QRubberBand::event(e);
		} else if (qrubberband_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qrubberband_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QRubberBand::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qrubberband_paintevent_isbase) {
			qrubberband_paintevent_isbase = false;
			QRubberBand::paintEvent(param1);
		} else if (qrubberband_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qrubberband_paintevent_callback(this, cbval1);
		} else {
			QRubberBand::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* param1) override {
		if (qrubberband_changeevent_isbase) {
			qrubberband_changeevent_isbase = false;
			QRubberBand::changeEvent(param1);
		} else if (qrubberband_changeevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qrubberband_changeevent_callback(this, cbval1);
		} else {
			QRubberBand::changeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* param1) override {
		if (qrubberband_showevent_isbase) {
			qrubberband_showevent_isbase = false;
			QRubberBand::showEvent(param1);
		} else if (qrubberband_showevent_callback != nullptr) {
			QShowEvent* cbval1 = param1;
			qrubberband_showevent_callback(this, cbval1);
		} else {
			QRubberBand::showEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (qrubberband_resizeevent_isbase) {
			qrubberband_resizeevent_isbase = false;
			QRubberBand::resizeEvent(param1);
		} else if (qrubberband_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = param1;
			qrubberband_resizeevent_callback(this, cbval1);
		} else {
			QRubberBand::resizeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void moveEvent(QMoveEvent* param1) override {
		if (qrubberband_moveevent_isbase) {
			qrubberband_moveevent_isbase = false;
			QRubberBand::moveEvent(param1);
		} else if (qrubberband_moveevent_callback != nullptr) {
			QMoveEvent* cbval1 = param1;
			qrubberband_moveevent_callback(this, cbval1);
		} else {
			QRubberBand::moveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionRubberBand* option) const override {
		if (qrubberband_initstyleoption_isbase) {
			qrubberband_initstyleoption_isbase = false;
			QRubberBand::initStyleOption(option);
		} else if (qrubberband_initstyleoption_callback != nullptr) {
			QStyleOptionRubberBand* cbval1 = option;
			qrubberband_initstyleoption_callback(this, cbval1);
		} else {
			QRubberBand::initStyleOption(option);
		}
	}

	// Friend functions
	friend bool QRubberBand_Event(QRubberBand* self, QEvent* e);
	friend bool QRubberBand_QBaseEvent(QRubberBand* self, QEvent* e);
	friend void QRubberBand_PaintEvent(QRubberBand* self, QPaintEvent* param1);
	friend void QRubberBand_QBasePaintEvent(QRubberBand* self, QPaintEvent* param1);
	friend void QRubberBand_ChangeEvent(QRubberBand* self, QEvent* param1);
	friend void QRubberBand_QBaseChangeEvent(QRubberBand* self, QEvent* param1);
	friend void QRubberBand_ShowEvent(QRubberBand* self, QShowEvent* param1);
	friend void QRubberBand_QBaseShowEvent(QRubberBand* self, QShowEvent* param1);
	friend void QRubberBand_ResizeEvent(QRubberBand* self, QResizeEvent* param1);
	friend void QRubberBand_QBaseResizeEvent(QRubberBand* self, QResizeEvent* param1);
	friend void QRubberBand_MoveEvent(QRubberBand* self, QMoveEvent* param1);
	friend void QRubberBand_QBaseMoveEvent(QRubberBand* self, QMoveEvent* param1);
	friend void QRubberBand_InitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option);
	friend void QRubberBand_QBaseInitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option);
};

#endif


