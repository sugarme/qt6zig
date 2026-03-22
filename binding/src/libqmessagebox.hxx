#pragma once
#ifndef QMESSAGEBOX_H_C_LIBVIRTUAL
#define QMESSAGEBOX_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QMessageBox so that we can call protected methods
class VirtualQMessageBox final : public QMessageBox {

public:
	// Virtual class boolean flag
	bool isVirtualQMessageBox= true;

	// Virtual class public types (including callbacks)
	using QMessageBox_Event_Callback = bool (*)(QMessageBox*, QEvent*);
	using QMessageBox_ResizeEvent_Callback = void (*)(QMessageBox*, QResizeEvent*);
	using QMessageBox_ShowEvent_Callback = void (*)(QMessageBox*, QShowEvent*);
	using QMessageBox_CloseEvent_Callback = void (*)(QMessageBox*, QCloseEvent*);
	using QMessageBox_KeyPressEvent_Callback = void (*)(QMessageBox*, QKeyEvent*);
	using QMessageBox_ChangeEvent_Callback = void (*)(QMessageBox*, QEvent*);

protected:
	// Instance callback storage
	mutable QMessageBox_Event_Callback qmessagebox_event_callback = nullptr;
	mutable QMessageBox_ResizeEvent_Callback qmessagebox_resizeevent_callback = nullptr;
	mutable QMessageBox_ShowEvent_Callback qmessagebox_showevent_callback = nullptr;
	mutable QMessageBox_CloseEvent_Callback qmessagebox_closeevent_callback = nullptr;
	mutable QMessageBox_KeyPressEvent_Callback qmessagebox_keypressevent_callback = nullptr;
	mutable QMessageBox_ChangeEvent_Callback qmessagebox_changeevent_callback = nullptr;

	// Instance base flags
    mutable bool qmessagebox_event_isbase = false;
    mutable bool qmessagebox_resizeevent_isbase = false;
    mutable bool qmessagebox_showevent_isbase = false;
    mutable bool qmessagebox_closeevent_isbase = false;
    mutable bool qmessagebox_keypressevent_isbase = false;
    mutable bool qmessagebox_changeevent_isbase = false;

public:
	VirtualQMessageBox(QWidget* parent): QMessageBox(parent) {};
	VirtualQMessageBox(): QMessageBox() {};
	VirtualQMessageBox(Icon icon, const QString& title, const QString& text): QMessageBox(icon, title, text) {};
	VirtualQMessageBox(const QString& title, const QString& text, Icon icon, int button0, int button1, int button2): QMessageBox(title, text, icon, button0, button1, button2) {};
	VirtualQMessageBox(Icon icon, const QString& title, const QString& text, QFlags<QMessageBox::StandardButton> buttons): QMessageBox(icon, title, text, buttons) {};
	VirtualQMessageBox(Icon icon, const QString& title, const QString& text, QFlags<QMessageBox::StandardButton> buttons, QWidget* parent): QMessageBox(icon, title, text, buttons, parent) {};
	VirtualQMessageBox(Icon icon, const QString& title, const QString& text, QFlags<QMessageBox::StandardButton> buttons, QWidget* parent, Qt::WindowFlags flags): QMessageBox(icon, title, text, buttons, parent, flags) {};
	VirtualQMessageBox(const QString& title, const QString& text, Icon icon, int button0, int button1, int button2, QWidget* parent): QMessageBox(title, text, icon, button0, button1, button2, parent) {};
	VirtualQMessageBox(const QString& title, const QString& text, Icon icon, int button0, int button1, int button2, QWidget* parent, Qt::WindowFlags f): QMessageBox(title, text, icon, button0, button1, button2, parent, f) {};

	~VirtualQMessageBox() {
		qmessagebox_event_callback = nullptr;
		qmessagebox_resizeevent_callback = nullptr;
		qmessagebox_showevent_callback = nullptr;
		qmessagebox_closeevent_callback = nullptr;
		qmessagebox_keypressevent_callback = nullptr;
		qmessagebox_changeevent_callback = nullptr;
	}

// Callback setters
	inline void setQMessageBox_Event_Callback(QMessageBox_Event_Callback cb) const { qmessagebox_event_callback = cb; }
	inline void setQMessageBox_ResizeEvent_Callback(QMessageBox_ResizeEvent_Callback cb) const { qmessagebox_resizeevent_callback = cb; }
	inline void setQMessageBox_ShowEvent_Callback(QMessageBox_ShowEvent_Callback cb) const { qmessagebox_showevent_callback = cb; }
	inline void setQMessageBox_CloseEvent_Callback(QMessageBox_CloseEvent_Callback cb) const { qmessagebox_closeevent_callback = cb; }
	inline void setQMessageBox_KeyPressEvent_Callback(QMessageBox_KeyPressEvent_Callback cb) const { qmessagebox_keypressevent_callback = cb; }
	inline void setQMessageBox_ChangeEvent_Callback(QMessageBox_ChangeEvent_Callback cb) const { qmessagebox_changeevent_callback = cb; }

// Base flag setters
	inline void setQMessageBox_Event_IsBase(bool value) const { qmessagebox_event_isbase = value; }
	inline void setQMessageBox_ResizeEvent_IsBase(bool value) const { qmessagebox_resizeevent_isbase = value; }
	inline void setQMessageBox_ShowEvent_IsBase(bool value) const { qmessagebox_showevent_isbase = value; }
	inline void setQMessageBox_CloseEvent_IsBase(bool value) const { qmessagebox_closeevent_isbase = value; }
	inline void setQMessageBox_KeyPressEvent_IsBase(bool value) const { qmessagebox_keypressevent_isbase = value; }
	inline void setQMessageBox_ChangeEvent_IsBase(bool value) const { qmessagebox_changeevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qmessagebox_event_isbase) {
			qmessagebox_event_isbase = false;
			return QMessageBox::event(e);
		} else if (qmessagebox_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qmessagebox_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QMessageBox::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qmessagebox_resizeevent_isbase) {
			qmessagebox_resizeevent_isbase = false;
			QMessageBox::resizeEvent(event);
		} else if (qmessagebox_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qmessagebox_resizeevent_callback(this, cbval1);
		} else {
			QMessageBox::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* event) override {
		if (qmessagebox_showevent_isbase) {
			qmessagebox_showevent_isbase = false;
			QMessageBox::showEvent(event);
		} else if (qmessagebox_showevent_callback != nullptr) {
			QShowEvent* cbval1 = event;
			qmessagebox_showevent_callback(this, cbval1);
		} else {
			QMessageBox::showEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void closeEvent(QCloseEvent* event) override {
		if (qmessagebox_closeevent_isbase) {
			qmessagebox_closeevent_isbase = false;
			QMessageBox::closeEvent(event);
		} else if (qmessagebox_closeevent_callback != nullptr) {
			QCloseEvent* cbval1 = event;
			qmessagebox_closeevent_callback(this, cbval1);
		} else {
			QMessageBox::closeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (qmessagebox_keypressevent_isbase) {
			qmessagebox_keypressevent_isbase = false;
			QMessageBox::keyPressEvent(event);
		} else if (qmessagebox_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qmessagebox_keypressevent_callback(this, cbval1);
		} else {
			QMessageBox::keyPressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* event) override {
		if (qmessagebox_changeevent_isbase) {
			qmessagebox_changeevent_isbase = false;
			QMessageBox::changeEvent(event);
		} else if (qmessagebox_changeevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qmessagebox_changeevent_callback(this, cbval1);
		} else {
			QMessageBox::changeEvent(event);
		}
	}

	// Friend functions
	friend bool QMessageBox_Event(QMessageBox* self, QEvent* e);
	friend bool QMessageBox_QBaseEvent(QMessageBox* self, QEvent* e);
	friend void QMessageBox_ResizeEvent(QMessageBox* self, QResizeEvent* event);
	friend void QMessageBox_QBaseResizeEvent(QMessageBox* self, QResizeEvent* event);
	friend void QMessageBox_ShowEvent(QMessageBox* self, QShowEvent* event);
	friend void QMessageBox_QBaseShowEvent(QMessageBox* self, QShowEvent* event);
	friend void QMessageBox_CloseEvent(QMessageBox* self, QCloseEvent* event);
	friend void QMessageBox_QBaseCloseEvent(QMessageBox* self, QCloseEvent* event);
	friend void QMessageBox_KeyPressEvent(QMessageBox* self, QKeyEvent* event);
	friend void QMessageBox_QBaseKeyPressEvent(QMessageBox* self, QKeyEvent* event);
	friend void QMessageBox_ChangeEvent(QMessageBox* self, QEvent* event);
	friend void QMessageBox_QBaseChangeEvent(QMessageBox* self, QEvent* event);
};

#endif


