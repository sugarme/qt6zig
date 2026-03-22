#pragma once
#ifndef QCOMMANDLINKBUTTON_H_C_LIBVIRTUAL
#define QCOMMANDLINKBUTTON_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QCommandLinkButton so that we can call protected methods
class VirtualQCommandLinkButton final : public QCommandLinkButton {

public:
	// Virtual class boolean flag
	bool isVirtualQCommandLinkButton= true;

	// Virtual class public types (including callbacks)
	using QCommandLinkButton_SizeHint_Callback = QSize* (*)();
	using QCommandLinkButton_HeightForWidth_Callback = int (*)(const QCommandLinkButton*, int);
	using QCommandLinkButton_MinimumSizeHint_Callback = QSize* (*)();
	using QCommandLinkButton_InitStyleOption_Callback = void (*)(const QCommandLinkButton*, QStyleOptionButton*);
	using QCommandLinkButton_Event_Callback = bool (*)(QCommandLinkButton*, QEvent*);
	using QCommandLinkButton_PaintEvent_Callback = void (*)(QCommandLinkButton*, QPaintEvent*);

protected:
	// Instance callback storage
	mutable QCommandLinkButton_SizeHint_Callback qcommandlinkbutton_sizehint_callback = nullptr;
	mutable QCommandLinkButton_HeightForWidth_Callback qcommandlinkbutton_heightforwidth_callback = nullptr;
	mutable QCommandLinkButton_MinimumSizeHint_Callback qcommandlinkbutton_minimumsizehint_callback = nullptr;
	mutable QCommandLinkButton_InitStyleOption_Callback qcommandlinkbutton_initstyleoption_callback = nullptr;
	mutable QCommandLinkButton_Event_Callback qcommandlinkbutton_event_callback = nullptr;
	mutable QCommandLinkButton_PaintEvent_Callback qcommandlinkbutton_paintevent_callback = nullptr;

	// Instance base flags
    mutable bool qcommandlinkbutton_sizehint_isbase = false;
    mutable bool qcommandlinkbutton_heightforwidth_isbase = false;
    mutable bool qcommandlinkbutton_minimumsizehint_isbase = false;
    mutable bool qcommandlinkbutton_initstyleoption_isbase = false;
    mutable bool qcommandlinkbutton_event_isbase = false;
    mutable bool qcommandlinkbutton_paintevent_isbase = false;

public:
	VirtualQCommandLinkButton(QWidget* parent): QCommandLinkButton(parent) {};
	VirtualQCommandLinkButton(): QCommandLinkButton() {};
	VirtualQCommandLinkButton(const QString& text): QCommandLinkButton(text) {};
	VirtualQCommandLinkButton(const QString& text, const QString& description): QCommandLinkButton(text, description) {};
	VirtualQCommandLinkButton(const QString& text, QWidget* parent): QCommandLinkButton(text, parent) {};
	VirtualQCommandLinkButton(const QString& text, const QString& description, QWidget* parent): QCommandLinkButton(text, description, parent) {};

	~VirtualQCommandLinkButton() {
		qcommandlinkbutton_sizehint_callback = nullptr;
		qcommandlinkbutton_heightforwidth_callback = nullptr;
		qcommandlinkbutton_minimumsizehint_callback = nullptr;
		qcommandlinkbutton_initstyleoption_callback = nullptr;
		qcommandlinkbutton_event_callback = nullptr;
		qcommandlinkbutton_paintevent_callback = nullptr;
	}

// Callback setters
	inline void setQCommandLinkButton_SizeHint_Callback(QCommandLinkButton_SizeHint_Callback cb) const { qcommandlinkbutton_sizehint_callback = cb; }
	inline void setQCommandLinkButton_HeightForWidth_Callback(QCommandLinkButton_HeightForWidth_Callback cb) const { qcommandlinkbutton_heightforwidth_callback = cb; }
	inline void setQCommandLinkButton_MinimumSizeHint_Callback(QCommandLinkButton_MinimumSizeHint_Callback cb) const { qcommandlinkbutton_minimumsizehint_callback = cb; }
	inline void setQCommandLinkButton_InitStyleOption_Callback(QCommandLinkButton_InitStyleOption_Callback cb) const { qcommandlinkbutton_initstyleoption_callback = cb; }
	inline void setQCommandLinkButton_Event_Callback(QCommandLinkButton_Event_Callback cb) const { qcommandlinkbutton_event_callback = cb; }
	inline void setQCommandLinkButton_PaintEvent_Callback(QCommandLinkButton_PaintEvent_Callback cb) const { qcommandlinkbutton_paintevent_callback = cb; }

// Base flag setters
	inline void setQCommandLinkButton_SizeHint_IsBase(bool value) const { qcommandlinkbutton_sizehint_isbase = value; }
	inline void setQCommandLinkButton_HeightForWidth_IsBase(bool value) const { qcommandlinkbutton_heightforwidth_isbase = value; }
	inline void setQCommandLinkButton_MinimumSizeHint_IsBase(bool value) const { qcommandlinkbutton_minimumsizehint_isbase = value; }
	inline void setQCommandLinkButton_InitStyleOption_IsBase(bool value) const { qcommandlinkbutton_initstyleoption_isbase = value; }
	inline void setQCommandLinkButton_Event_IsBase(bool value) const { qcommandlinkbutton_event_isbase = value; }
	inline void setQCommandLinkButton_PaintEvent_IsBase(bool value) const { qcommandlinkbutton_paintevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qcommandlinkbutton_sizehint_isbase) {
			qcommandlinkbutton_sizehint_isbase = false;
			return QCommandLinkButton::sizeHint();
		} else if (qcommandlinkbutton_sizehint_callback != nullptr) {
			QSize* callback_ret = qcommandlinkbutton_sizehint_callback();
			return *callback_ret;
		} else {
			return QCommandLinkButton::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int heightForWidth(int param1) const override {
		if (qcommandlinkbutton_heightforwidth_isbase) {
			qcommandlinkbutton_heightforwidth_isbase = false;
			return QCommandLinkButton::heightForWidth(param1);
		} else if (qcommandlinkbutton_heightforwidth_callback != nullptr) {
			int cbval1 = param1;
			int callback_ret = qcommandlinkbutton_heightforwidth_callback(this, cbval1);
			return callback_ret;
		} else {
			return QCommandLinkButton::heightForWidth(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qcommandlinkbutton_minimumsizehint_isbase) {
			qcommandlinkbutton_minimumsizehint_isbase = false;
			return QCommandLinkButton::minimumSizeHint();
		} else if (qcommandlinkbutton_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qcommandlinkbutton_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QCommandLinkButton::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionButton* option) const override {
		if (qcommandlinkbutton_initstyleoption_isbase) {
			qcommandlinkbutton_initstyleoption_isbase = false;
			QCommandLinkButton::initStyleOption(option);
		} else if (qcommandlinkbutton_initstyleoption_callback != nullptr) {
			QStyleOptionButton* cbval1 = option;
			qcommandlinkbutton_initstyleoption_callback(this, cbval1);
		} else {
			QCommandLinkButton::initStyleOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qcommandlinkbutton_event_isbase) {
			qcommandlinkbutton_event_isbase = false;
			return QCommandLinkButton::event(e);
		} else if (qcommandlinkbutton_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qcommandlinkbutton_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QCommandLinkButton::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qcommandlinkbutton_paintevent_isbase) {
			qcommandlinkbutton_paintevent_isbase = false;
			QCommandLinkButton::paintEvent(param1);
		} else if (qcommandlinkbutton_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qcommandlinkbutton_paintevent_callback(this, cbval1);
		} else {
			QCommandLinkButton::paintEvent(param1);
		}
	}

	// Friend functions
	friend bool QCommandLinkButton_Event(QCommandLinkButton* self, QEvent* e);
	friend bool QCommandLinkButton_QBaseEvent(QCommandLinkButton* self, QEvent* e);
	friend void QCommandLinkButton_PaintEvent(QCommandLinkButton* self, QPaintEvent* param1);
	friend void QCommandLinkButton_QBasePaintEvent(QCommandLinkButton* self, QPaintEvent* param1);
};

#endif


