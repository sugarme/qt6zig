#pragma once
#ifndef QTOOLBOX_H_C_LIBVIRTUAL
#define QTOOLBOX_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QToolBox so that we can call protected methods
class VirtualQToolBox final : public QToolBox {

public:
	// Virtual class boolean flag
	bool isVirtualQToolBox= true;

	// Virtual class public types (including callbacks)
	using QToolBox_Event_Callback = bool (*)(QToolBox*, QEvent*);
	using QToolBox_ItemInserted_Callback = void (*)(QToolBox*, int);
	using QToolBox_ItemRemoved_Callback = void (*)(QToolBox*, int);
	using QToolBox_ShowEvent_Callback = void (*)(QToolBox*, QShowEvent*);
	using QToolBox_ChangeEvent_Callback = void (*)(QToolBox*, QEvent*);

protected:
	// Instance callback storage
	mutable QToolBox_Event_Callback qtoolbox_event_callback = nullptr;
	mutable QToolBox_ItemInserted_Callback qtoolbox_iteminserted_callback = nullptr;
	mutable QToolBox_ItemRemoved_Callback qtoolbox_itemremoved_callback = nullptr;
	mutable QToolBox_ShowEvent_Callback qtoolbox_showevent_callback = nullptr;
	mutable QToolBox_ChangeEvent_Callback qtoolbox_changeevent_callback = nullptr;

	// Instance base flags
    mutable bool qtoolbox_event_isbase = false;
    mutable bool qtoolbox_iteminserted_isbase = false;
    mutable bool qtoolbox_itemremoved_isbase = false;
    mutable bool qtoolbox_showevent_isbase = false;
    mutable bool qtoolbox_changeevent_isbase = false;

public:
	VirtualQToolBox(QWidget* parent): QToolBox(parent) {};
	VirtualQToolBox(): QToolBox() {};
	VirtualQToolBox(QWidget* parent, Qt::WindowFlags f): QToolBox(parent, f) {};

	~VirtualQToolBox() {
		qtoolbox_event_callback = nullptr;
		qtoolbox_iteminserted_callback = nullptr;
		qtoolbox_itemremoved_callback = nullptr;
		qtoolbox_showevent_callback = nullptr;
		qtoolbox_changeevent_callback = nullptr;
	}

// Callback setters
	inline void setQToolBox_Event_Callback(QToolBox_Event_Callback cb) const { qtoolbox_event_callback = cb; }
	inline void setQToolBox_ItemInserted_Callback(QToolBox_ItemInserted_Callback cb) const { qtoolbox_iteminserted_callback = cb; }
	inline void setQToolBox_ItemRemoved_Callback(QToolBox_ItemRemoved_Callback cb) const { qtoolbox_itemremoved_callback = cb; }
	inline void setQToolBox_ShowEvent_Callback(QToolBox_ShowEvent_Callback cb) const { qtoolbox_showevent_callback = cb; }
	inline void setQToolBox_ChangeEvent_Callback(QToolBox_ChangeEvent_Callback cb) const { qtoolbox_changeevent_callback = cb; }

// Base flag setters
	inline void setQToolBox_Event_IsBase(bool value) const { qtoolbox_event_isbase = value; }
	inline void setQToolBox_ItemInserted_IsBase(bool value) const { qtoolbox_iteminserted_isbase = value; }
	inline void setQToolBox_ItemRemoved_IsBase(bool value) const { qtoolbox_itemremoved_isbase = value; }
	inline void setQToolBox_ShowEvent_IsBase(bool value) const { qtoolbox_showevent_isbase = value; }
	inline void setQToolBox_ChangeEvent_IsBase(bool value) const { qtoolbox_changeevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qtoolbox_event_isbase) {
			qtoolbox_event_isbase = false;
			return QToolBox::event(e);
		} else if (qtoolbox_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qtoolbox_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QToolBox::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void itemInserted(int index) override {
		if (qtoolbox_iteminserted_isbase) {
			qtoolbox_iteminserted_isbase = false;
			QToolBox::itemInserted(index);
		} else if (qtoolbox_iteminserted_callback != nullptr) {
			int cbval1 = index;
			qtoolbox_iteminserted_callback(this, cbval1);
		} else {
			QToolBox::itemInserted(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void itemRemoved(int index) override {
		if (qtoolbox_itemremoved_isbase) {
			qtoolbox_itemremoved_isbase = false;
			QToolBox::itemRemoved(index);
		} else if (qtoolbox_itemremoved_callback != nullptr) {
			int cbval1 = index;
			qtoolbox_itemremoved_callback(this, cbval1);
		} else {
			QToolBox::itemRemoved(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* e) override {
		if (qtoolbox_showevent_isbase) {
			qtoolbox_showevent_isbase = false;
			QToolBox::showEvent(e);
		} else if (qtoolbox_showevent_callback != nullptr) {
			QShowEvent* cbval1 = e;
			qtoolbox_showevent_callback(this, cbval1);
		} else {
			QToolBox::showEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* param1) override {
		if (qtoolbox_changeevent_isbase) {
			qtoolbox_changeevent_isbase = false;
			QToolBox::changeEvent(param1);
		} else if (qtoolbox_changeevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qtoolbox_changeevent_callback(this, cbval1);
		} else {
			QToolBox::changeEvent(param1);
		}
	}

	// Friend functions
	friend bool QToolBox_Event(QToolBox* self, QEvent* e);
	friend bool QToolBox_QBaseEvent(QToolBox* self, QEvent* e);
	friend void QToolBox_ItemInserted(QToolBox* self, int index);
	friend void QToolBox_QBaseItemInserted(QToolBox* self, int index);
	friend void QToolBox_ItemRemoved(QToolBox* self, int index);
	friend void QToolBox_QBaseItemRemoved(QToolBox* self, int index);
	friend void QToolBox_ShowEvent(QToolBox* self, QShowEvent* e);
	friend void QToolBox_QBaseShowEvent(QToolBox* self, QShowEvent* e);
	friend void QToolBox_ChangeEvent(QToolBox* self, QEvent* param1);
	friend void QToolBox_QBaseChangeEvent(QToolBox* self, QEvent* param1);
};

#endif


