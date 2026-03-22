#pragma once
#ifndef QSPLASHSCREEN_H_C_LIBVIRTUAL
#define QSPLASHSCREEN_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSplashScreen so that we can call protected methods
class VirtualQSplashScreen final : public QSplashScreen {

public:
	// Virtual class boolean flag
	bool isVirtualQSplashScreen= true;

	// Virtual class public types (including callbacks)
	using QSplashScreen_Event_Callback = bool (*)(QSplashScreen*, QEvent*);
	using QSplashScreen_DrawContents_Callback = void (*)(QSplashScreen*, QPainter*);
	using QSplashScreen_MousePressEvent_Callback = void (*)(QSplashScreen*, QMouseEvent*);

protected:
	// Instance callback storage
	mutable QSplashScreen_Event_Callback qsplashscreen_event_callback = nullptr;
	mutable QSplashScreen_DrawContents_Callback qsplashscreen_drawcontents_callback = nullptr;
	mutable QSplashScreen_MousePressEvent_Callback qsplashscreen_mousepressevent_callback = nullptr;

	// Instance base flags
    mutable bool qsplashscreen_event_isbase = false;
    mutable bool qsplashscreen_drawcontents_isbase = false;
    mutable bool qsplashscreen_mousepressevent_isbase = false;

public:
	VirtualQSplashScreen(): QSplashScreen() {};
	VirtualQSplashScreen(QScreen* screen): QSplashScreen(screen) {};
	VirtualQSplashScreen(const QPixmap& pixmap): QSplashScreen(pixmap) {};
	VirtualQSplashScreen(const QPixmap& pixmap, Qt::WindowFlags f): QSplashScreen(pixmap, f) {};
	VirtualQSplashScreen(QScreen* screen, const QPixmap& pixmap): QSplashScreen(screen, pixmap) {};
	VirtualQSplashScreen(QScreen* screen, const QPixmap& pixmap, Qt::WindowFlags f): QSplashScreen(screen, pixmap, f) {};

	~VirtualQSplashScreen() {
		qsplashscreen_event_callback = nullptr;
		qsplashscreen_drawcontents_callback = nullptr;
		qsplashscreen_mousepressevent_callback = nullptr;
	}

// Callback setters
	inline void setQSplashScreen_Event_Callback(QSplashScreen_Event_Callback cb) const { qsplashscreen_event_callback = cb; }
	inline void setQSplashScreen_DrawContents_Callback(QSplashScreen_DrawContents_Callback cb) const { qsplashscreen_drawcontents_callback = cb; }
	inline void setQSplashScreen_MousePressEvent_Callback(QSplashScreen_MousePressEvent_Callback cb) const { qsplashscreen_mousepressevent_callback = cb; }

// Base flag setters
	inline void setQSplashScreen_Event_IsBase(bool value) const { qsplashscreen_event_isbase = value; }
	inline void setQSplashScreen_DrawContents_IsBase(bool value) const { qsplashscreen_drawcontents_isbase = value; }
	inline void setQSplashScreen_MousePressEvent_IsBase(bool value) const { qsplashscreen_mousepressevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qsplashscreen_event_isbase) {
			qsplashscreen_event_isbase = false;
			return QSplashScreen::event(e);
		} else if (qsplashscreen_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qsplashscreen_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSplashScreen::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawContents(QPainter* painter) override {
		if (qsplashscreen_drawcontents_isbase) {
			qsplashscreen_drawcontents_isbase = false;
			QSplashScreen::drawContents(painter);
		} else if (qsplashscreen_drawcontents_callback != nullptr) {
			QPainter* cbval1 = painter;
			qsplashscreen_drawcontents_callback(this, cbval1);
		} else {
			QSplashScreen::drawContents(painter);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (qsplashscreen_mousepressevent_isbase) {
			qsplashscreen_mousepressevent_isbase = false;
			QSplashScreen::mousePressEvent(param1);
		} else if (qsplashscreen_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qsplashscreen_mousepressevent_callback(this, cbval1);
		} else {
			QSplashScreen::mousePressEvent(param1);
		}
	}

	// Friend functions
	friend bool QSplashScreen_Event(QSplashScreen* self, QEvent* e);
	friend bool QSplashScreen_QBaseEvent(QSplashScreen* self, QEvent* e);
	friend void QSplashScreen_DrawContents(QSplashScreen* self, QPainter* painter);
	friend void QSplashScreen_QBaseDrawContents(QSplashScreen* self, QPainter* painter);
	friend void QSplashScreen_MousePressEvent(QSplashScreen* self, QMouseEvent* param1);
	friend void QSplashScreen_QBaseMousePressEvent(QSplashScreen* self, QMouseEvent* param1);
};

#endif


