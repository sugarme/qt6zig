#pragma once
#ifndef QFONTCOMBOBOX_H_C_LIBVIRTUAL
#define QFONTCOMBOBOX_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFontComboBox so that we can call protected methods
class VirtualQFontComboBox final : public QFontComboBox {

public:
	// Virtual class boolean flag
	bool isVirtualQFontComboBox= true;

	// Virtual class public types (including callbacks)
	using QFontComboBox_SizeHint_Callback = QSize* (*)();
	using QFontComboBox_Event_Callback = bool (*)(QFontComboBox*, QEvent*);

protected:
	// Instance callback storage
	mutable QFontComboBox_SizeHint_Callback qfontcombobox_sizehint_callback = nullptr;
	mutable QFontComboBox_Event_Callback qfontcombobox_event_callback = nullptr;

	// Instance base flags
    mutable bool qfontcombobox_sizehint_isbase = false;
    mutable bool qfontcombobox_event_isbase = false;

public:
	VirtualQFontComboBox(QWidget* parent): QFontComboBox(parent) {};
	VirtualQFontComboBox(): QFontComboBox() {};

	~VirtualQFontComboBox() {
		qfontcombobox_sizehint_callback = nullptr;
		qfontcombobox_event_callback = nullptr;
	}

// Callback setters
	inline void setQFontComboBox_SizeHint_Callback(QFontComboBox_SizeHint_Callback cb) const { qfontcombobox_sizehint_callback = cb; }
	inline void setQFontComboBox_Event_Callback(QFontComboBox_Event_Callback cb) const { qfontcombobox_event_callback = cb; }

// Base flag setters
	inline void setQFontComboBox_SizeHint_IsBase(bool value) const { qfontcombobox_sizehint_isbase = value; }
	inline void setQFontComboBox_Event_IsBase(bool value) const { qfontcombobox_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qfontcombobox_sizehint_isbase) {
			qfontcombobox_sizehint_isbase = false;
			return QFontComboBox::sizeHint();
		} else if (qfontcombobox_sizehint_callback != nullptr) {
			QSize* callback_ret = qfontcombobox_sizehint_callback();
			return *callback_ret;
		} else {
			return QFontComboBox::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qfontcombobox_event_isbase) {
			qfontcombobox_event_isbase = false;
			return QFontComboBox::event(e);
		} else if (qfontcombobox_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qfontcombobox_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFontComboBox::event(e);
		}
	}

	// Friend functions
	friend bool QFontComboBox_Event(QFontComboBox* self, QEvent* e);
	friend bool QFontComboBox_QBaseEvent(QFontComboBox* self, QEvent* e);
};

#endif


