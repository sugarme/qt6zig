#pragma once
#ifndef QCOMBOBOX_H_C_LIBVIRTUAL
#define QCOMBOBOX_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QComboBox so that we can call protected methods
class VirtualQComboBox final : public QComboBox {

public:
	// Virtual class boolean flag
	bool isVirtualQComboBox= true;

	// Virtual class public types (including callbacks)
	using QComboBox_SetModel_Callback = void (*)(QComboBox*, QAbstractItemModel*);
	using QComboBox_SizeHint_Callback = QSize* (*)();
	using QComboBox_MinimumSizeHint_Callback = QSize* (*)();
	using QComboBox_ShowPopup_Callback = void (*)();
	using QComboBox_HidePopup_Callback = void (*)();
	using QComboBox_Event_Callback = bool (*)(QComboBox*, QEvent*);
	using QComboBox_InputMethodQuery_Callback = QVariant* (*)(const QComboBox*, int);
	using QComboBox_FocusInEvent_Callback = void (*)(QComboBox*, QFocusEvent*);
	using QComboBox_FocusOutEvent_Callback = void (*)(QComboBox*, QFocusEvent*);
	using QComboBox_ChangeEvent_Callback = void (*)(QComboBox*, QEvent*);
	using QComboBox_ResizeEvent_Callback = void (*)(QComboBox*, QResizeEvent*);
	using QComboBox_PaintEvent_Callback = void (*)(QComboBox*, QPaintEvent*);
	using QComboBox_ShowEvent_Callback = void (*)(QComboBox*, QShowEvent*);
	using QComboBox_HideEvent_Callback = void (*)(QComboBox*, QHideEvent*);
	using QComboBox_MousePressEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
	using QComboBox_MouseReleaseEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
	using QComboBox_KeyPressEvent_Callback = void (*)(QComboBox*, QKeyEvent*);
	using QComboBox_KeyReleaseEvent_Callback = void (*)(QComboBox*, QKeyEvent*);
	using QComboBox_WheelEvent_Callback = void (*)(QComboBox*, QWheelEvent*);
	using QComboBox_ContextMenuEvent_Callback = void (*)(QComboBox*, QContextMenuEvent*);
	using QComboBox_InputMethodEvent_Callback = void (*)(QComboBox*, QInputMethodEvent*);
	using QComboBox_InitStyleOption_Callback = void (*)(const QComboBox*, QStyleOptionComboBox*);

protected:
	// Instance callback storage
	mutable QComboBox_SetModel_Callback qcombobox_setmodel_callback = nullptr;
	mutable QComboBox_SizeHint_Callback qcombobox_sizehint_callback = nullptr;
	mutable QComboBox_MinimumSizeHint_Callback qcombobox_minimumsizehint_callback = nullptr;
	mutable QComboBox_ShowPopup_Callback qcombobox_showpopup_callback = nullptr;
	mutable QComboBox_HidePopup_Callback qcombobox_hidepopup_callback = nullptr;
	mutable QComboBox_Event_Callback qcombobox_event_callback = nullptr;
	mutable QComboBox_InputMethodQuery_Callback qcombobox_inputmethodquery_callback = nullptr;
	mutable QComboBox_FocusInEvent_Callback qcombobox_focusinevent_callback = nullptr;
	mutable QComboBox_FocusOutEvent_Callback qcombobox_focusoutevent_callback = nullptr;
	mutable QComboBox_ChangeEvent_Callback qcombobox_changeevent_callback = nullptr;
	mutable QComboBox_ResizeEvent_Callback qcombobox_resizeevent_callback = nullptr;
	mutable QComboBox_PaintEvent_Callback qcombobox_paintevent_callback = nullptr;
	mutable QComboBox_ShowEvent_Callback qcombobox_showevent_callback = nullptr;
	mutable QComboBox_HideEvent_Callback qcombobox_hideevent_callback = nullptr;
	mutable QComboBox_MousePressEvent_Callback qcombobox_mousepressevent_callback = nullptr;
	mutable QComboBox_MouseReleaseEvent_Callback qcombobox_mousereleaseevent_callback = nullptr;
	mutable QComboBox_KeyPressEvent_Callback qcombobox_keypressevent_callback = nullptr;
	mutable QComboBox_KeyReleaseEvent_Callback qcombobox_keyreleaseevent_callback = nullptr;
	mutable QComboBox_WheelEvent_Callback qcombobox_wheelevent_callback = nullptr;
	mutable QComboBox_ContextMenuEvent_Callback qcombobox_contextmenuevent_callback = nullptr;
	mutable QComboBox_InputMethodEvent_Callback qcombobox_inputmethodevent_callback = nullptr;
	mutable QComboBox_InitStyleOption_Callback qcombobox_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qcombobox_setmodel_isbase = false;
    mutable bool qcombobox_sizehint_isbase = false;
    mutable bool qcombobox_minimumsizehint_isbase = false;
    mutable bool qcombobox_showpopup_isbase = false;
    mutable bool qcombobox_hidepopup_isbase = false;
    mutable bool qcombobox_event_isbase = false;
    mutable bool qcombobox_inputmethodquery_isbase = false;
    mutable bool qcombobox_focusinevent_isbase = false;
    mutable bool qcombobox_focusoutevent_isbase = false;
    mutable bool qcombobox_changeevent_isbase = false;
    mutable bool qcombobox_resizeevent_isbase = false;
    mutable bool qcombobox_paintevent_isbase = false;
    mutable bool qcombobox_showevent_isbase = false;
    mutable bool qcombobox_hideevent_isbase = false;
    mutable bool qcombobox_mousepressevent_isbase = false;
    mutable bool qcombobox_mousereleaseevent_isbase = false;
    mutable bool qcombobox_keypressevent_isbase = false;
    mutable bool qcombobox_keyreleaseevent_isbase = false;
    mutable bool qcombobox_wheelevent_isbase = false;
    mutable bool qcombobox_contextmenuevent_isbase = false;
    mutable bool qcombobox_inputmethodevent_isbase = false;
    mutable bool qcombobox_initstyleoption_isbase = false;

public:
	VirtualQComboBox(QWidget* parent): QComboBox(parent) {};
	VirtualQComboBox(): QComboBox() {};

	~VirtualQComboBox() {
		qcombobox_setmodel_callback = nullptr;
		qcombobox_sizehint_callback = nullptr;
		qcombobox_minimumsizehint_callback = nullptr;
		qcombobox_showpopup_callback = nullptr;
		qcombobox_hidepopup_callback = nullptr;
		qcombobox_event_callback = nullptr;
		qcombobox_inputmethodquery_callback = nullptr;
		qcombobox_focusinevent_callback = nullptr;
		qcombobox_focusoutevent_callback = nullptr;
		qcombobox_changeevent_callback = nullptr;
		qcombobox_resizeevent_callback = nullptr;
		qcombobox_paintevent_callback = nullptr;
		qcombobox_showevent_callback = nullptr;
		qcombobox_hideevent_callback = nullptr;
		qcombobox_mousepressevent_callback = nullptr;
		qcombobox_mousereleaseevent_callback = nullptr;
		qcombobox_keypressevent_callback = nullptr;
		qcombobox_keyreleaseevent_callback = nullptr;
		qcombobox_wheelevent_callback = nullptr;
		qcombobox_contextmenuevent_callback = nullptr;
		qcombobox_inputmethodevent_callback = nullptr;
		qcombobox_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQComboBox_SetModel_Callback(QComboBox_SetModel_Callback cb) const { qcombobox_setmodel_callback = cb; }
	inline void setQComboBox_SizeHint_Callback(QComboBox_SizeHint_Callback cb) const { qcombobox_sizehint_callback = cb; }
	inline void setQComboBox_MinimumSizeHint_Callback(QComboBox_MinimumSizeHint_Callback cb) const { qcombobox_minimumsizehint_callback = cb; }
	inline void setQComboBox_ShowPopup_Callback(QComboBox_ShowPopup_Callback cb) const { qcombobox_showpopup_callback = cb; }
	inline void setQComboBox_HidePopup_Callback(QComboBox_HidePopup_Callback cb) const { qcombobox_hidepopup_callback = cb; }
	inline void setQComboBox_Event_Callback(QComboBox_Event_Callback cb) const { qcombobox_event_callback = cb; }
	inline void setQComboBox_InputMethodQuery_Callback(QComboBox_InputMethodQuery_Callback cb) const { qcombobox_inputmethodquery_callback = cb; }
	inline void setQComboBox_FocusInEvent_Callback(QComboBox_FocusInEvent_Callback cb) const { qcombobox_focusinevent_callback = cb; }
	inline void setQComboBox_FocusOutEvent_Callback(QComboBox_FocusOutEvent_Callback cb) const { qcombobox_focusoutevent_callback = cb; }
	inline void setQComboBox_ChangeEvent_Callback(QComboBox_ChangeEvent_Callback cb) const { qcombobox_changeevent_callback = cb; }
	inline void setQComboBox_ResizeEvent_Callback(QComboBox_ResizeEvent_Callback cb) const { qcombobox_resizeevent_callback = cb; }
	inline void setQComboBox_PaintEvent_Callback(QComboBox_PaintEvent_Callback cb) const { qcombobox_paintevent_callback = cb; }
	inline void setQComboBox_ShowEvent_Callback(QComboBox_ShowEvent_Callback cb) const { qcombobox_showevent_callback = cb; }
	inline void setQComboBox_HideEvent_Callback(QComboBox_HideEvent_Callback cb) const { qcombobox_hideevent_callback = cb; }
	inline void setQComboBox_MousePressEvent_Callback(QComboBox_MousePressEvent_Callback cb) const { qcombobox_mousepressevent_callback = cb; }
	inline void setQComboBox_MouseReleaseEvent_Callback(QComboBox_MouseReleaseEvent_Callback cb) const { qcombobox_mousereleaseevent_callback = cb; }
	inline void setQComboBox_KeyPressEvent_Callback(QComboBox_KeyPressEvent_Callback cb) const { qcombobox_keypressevent_callback = cb; }
	inline void setQComboBox_KeyReleaseEvent_Callback(QComboBox_KeyReleaseEvent_Callback cb) const { qcombobox_keyreleaseevent_callback = cb; }
	inline void setQComboBox_WheelEvent_Callback(QComboBox_WheelEvent_Callback cb) const { qcombobox_wheelevent_callback = cb; }
	inline void setQComboBox_ContextMenuEvent_Callback(QComboBox_ContextMenuEvent_Callback cb) const { qcombobox_contextmenuevent_callback = cb; }
	inline void setQComboBox_InputMethodEvent_Callback(QComboBox_InputMethodEvent_Callback cb) const { qcombobox_inputmethodevent_callback = cb; }
	inline void setQComboBox_InitStyleOption_Callback(QComboBox_InitStyleOption_Callback cb) const { qcombobox_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQComboBox_SetModel_IsBase(bool value) const { qcombobox_setmodel_isbase = value; }
	inline void setQComboBox_SizeHint_IsBase(bool value) const { qcombobox_sizehint_isbase = value; }
	inline void setQComboBox_MinimumSizeHint_IsBase(bool value) const { qcombobox_minimumsizehint_isbase = value; }
	inline void setQComboBox_ShowPopup_IsBase(bool value) const { qcombobox_showpopup_isbase = value; }
	inline void setQComboBox_HidePopup_IsBase(bool value) const { qcombobox_hidepopup_isbase = value; }
	inline void setQComboBox_Event_IsBase(bool value) const { qcombobox_event_isbase = value; }
	inline void setQComboBox_InputMethodQuery_IsBase(bool value) const { qcombobox_inputmethodquery_isbase = value; }
	inline void setQComboBox_FocusInEvent_IsBase(bool value) const { qcombobox_focusinevent_isbase = value; }
	inline void setQComboBox_FocusOutEvent_IsBase(bool value) const { qcombobox_focusoutevent_isbase = value; }
	inline void setQComboBox_ChangeEvent_IsBase(bool value) const { qcombobox_changeevent_isbase = value; }
	inline void setQComboBox_ResizeEvent_IsBase(bool value) const { qcombobox_resizeevent_isbase = value; }
	inline void setQComboBox_PaintEvent_IsBase(bool value) const { qcombobox_paintevent_isbase = value; }
	inline void setQComboBox_ShowEvent_IsBase(bool value) const { qcombobox_showevent_isbase = value; }
	inline void setQComboBox_HideEvent_IsBase(bool value) const { qcombobox_hideevent_isbase = value; }
	inline void setQComboBox_MousePressEvent_IsBase(bool value) const { qcombobox_mousepressevent_isbase = value; }
	inline void setQComboBox_MouseReleaseEvent_IsBase(bool value) const { qcombobox_mousereleaseevent_isbase = value; }
	inline void setQComboBox_KeyPressEvent_IsBase(bool value) const { qcombobox_keypressevent_isbase = value; }
	inline void setQComboBox_KeyReleaseEvent_IsBase(bool value) const { qcombobox_keyreleaseevent_isbase = value; }
	inline void setQComboBox_WheelEvent_IsBase(bool value) const { qcombobox_wheelevent_isbase = value; }
	inline void setQComboBox_ContextMenuEvent_IsBase(bool value) const { qcombobox_contextmenuevent_isbase = value; }
	inline void setQComboBox_InputMethodEvent_IsBase(bool value) const { qcombobox_inputmethodevent_isbase = value; }
	inline void setQComboBox_InitStyleOption_IsBase(bool value) const { qcombobox_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setModel(QAbstractItemModel* model) override {
		if (qcombobox_setmodel_isbase) {
			qcombobox_setmodel_isbase = false;
			QComboBox::setModel(model);
		} else if (qcombobox_setmodel_callback != nullptr) {
			QAbstractItemModel* cbval1 = model;
			qcombobox_setmodel_callback(this, cbval1);
		} else {
			QComboBox::setModel(model);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qcombobox_sizehint_isbase) {
			qcombobox_sizehint_isbase = false;
			return QComboBox::sizeHint();
		} else if (qcombobox_sizehint_callback != nullptr) {
			QSize* callback_ret = qcombobox_sizehint_callback();
			return *callback_ret;
		} else {
			return QComboBox::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qcombobox_minimumsizehint_isbase) {
			qcombobox_minimumsizehint_isbase = false;
			return QComboBox::minimumSizeHint();
		} else if (qcombobox_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qcombobox_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QComboBox::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showPopup() override {
		if (qcombobox_showpopup_isbase) {
			qcombobox_showpopup_isbase = false;
			QComboBox::showPopup();
		} else if (qcombobox_showpopup_callback != nullptr) {
			qcombobox_showpopup_callback();
		} else {
			QComboBox::showPopup();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hidePopup() override {
		if (qcombobox_hidepopup_isbase) {
			qcombobox_hidepopup_isbase = false;
			QComboBox::hidePopup();
		} else if (qcombobox_hidepopup_callback != nullptr) {
			qcombobox_hidepopup_callback();
		} else {
			QComboBox::hidePopup();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qcombobox_event_isbase) {
			qcombobox_event_isbase = false;
			return QComboBox::event(event);
		} else if (qcombobox_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qcombobox_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QComboBox::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (qcombobox_inputmethodquery_isbase) {
			qcombobox_inputmethodquery_isbase = false;
			return QComboBox::inputMethodQuery(param1);
		} else if (qcombobox_inputmethodquery_callback != nullptr) {
			int cbval1 = static_cast<int>(param1);
			QVariant* callback_ret = qcombobox_inputmethodquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QComboBox::inputMethodQuery(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* e) override {
		if (qcombobox_focusinevent_isbase) {
			qcombobox_focusinevent_isbase = false;
			QComboBox::focusInEvent(e);
		} else if (qcombobox_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = e;
			qcombobox_focusinevent_callback(this, cbval1);
		} else {
			QComboBox::focusInEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (qcombobox_focusoutevent_isbase) {
			qcombobox_focusoutevent_isbase = false;
			QComboBox::focusOutEvent(e);
		} else if (qcombobox_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = e;
			qcombobox_focusoutevent_callback(this, cbval1);
		} else {
			QComboBox::focusOutEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* e) override {
		if (qcombobox_changeevent_isbase) {
			qcombobox_changeevent_isbase = false;
			QComboBox::changeEvent(e);
		} else if (qcombobox_changeevent_callback != nullptr) {
			QEvent* cbval1 = e;
			qcombobox_changeevent_callback(this, cbval1);
		} else {
			QComboBox::changeEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* e) override {
		if (qcombobox_resizeevent_isbase) {
			qcombobox_resizeevent_isbase = false;
			QComboBox::resizeEvent(e);
		} else if (qcombobox_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = e;
			qcombobox_resizeevent_callback(this, cbval1);
		} else {
			QComboBox::resizeEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* e) override {
		if (qcombobox_paintevent_isbase) {
			qcombobox_paintevent_isbase = false;
			QComboBox::paintEvent(e);
		} else if (qcombobox_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = e;
			qcombobox_paintevent_callback(this, cbval1);
		} else {
			QComboBox::paintEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* e) override {
		if (qcombobox_showevent_isbase) {
			qcombobox_showevent_isbase = false;
			QComboBox::showEvent(e);
		} else if (qcombobox_showevent_callback != nullptr) {
			QShowEvent* cbval1 = e;
			qcombobox_showevent_callback(this, cbval1);
		} else {
			QComboBox::showEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hideEvent(QHideEvent* e) override {
		if (qcombobox_hideevent_isbase) {
			qcombobox_hideevent_isbase = false;
			QComboBox::hideEvent(e);
		} else if (qcombobox_hideevent_callback != nullptr) {
			QHideEvent* cbval1 = e;
			qcombobox_hideevent_callback(this, cbval1);
		} else {
			QComboBox::hideEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (qcombobox_mousepressevent_isbase) {
			qcombobox_mousepressevent_isbase = false;
			QComboBox::mousePressEvent(e);
		} else if (qcombobox_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qcombobox_mousepressevent_callback(this, cbval1);
		} else {
			QComboBox::mousePressEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (qcombobox_mousereleaseevent_isbase) {
			qcombobox_mousereleaseevent_isbase = false;
			QComboBox::mouseReleaseEvent(e);
		} else if (qcombobox_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qcombobox_mousereleaseevent_callback(this, cbval1);
		} else {
			QComboBox::mouseReleaseEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (qcombobox_keypressevent_isbase) {
			qcombobox_keypressevent_isbase = false;
			QComboBox::keyPressEvent(e);
		} else if (qcombobox_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = e;
			qcombobox_keypressevent_callback(this, cbval1);
		} else {
			QComboBox::keyPressEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (qcombobox_keyreleaseevent_isbase) {
			qcombobox_keyreleaseevent_isbase = false;
			QComboBox::keyReleaseEvent(e);
		} else if (qcombobox_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = e;
			qcombobox_keyreleaseevent_callback(this, cbval1);
		} else {
			QComboBox::keyReleaseEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* e) override {
		if (qcombobox_wheelevent_isbase) {
			qcombobox_wheelevent_isbase = false;
			QComboBox::wheelEvent(e);
		} else if (qcombobox_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = e;
			qcombobox_wheelevent_callback(this, cbval1);
		} else {
			QComboBox::wheelEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (qcombobox_contextmenuevent_isbase) {
			qcombobox_contextmenuevent_isbase = false;
			QComboBox::contextMenuEvent(e);
		} else if (qcombobox_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = e;
			qcombobox_contextmenuevent_callback(this, cbval1);
		} else {
			QComboBox::contextMenuEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (qcombobox_inputmethodevent_isbase) {
			qcombobox_inputmethodevent_isbase = false;
			QComboBox::inputMethodEvent(param1);
		} else if (qcombobox_inputmethodevent_callback != nullptr) {
			QInputMethodEvent* cbval1 = param1;
			qcombobox_inputmethodevent_callback(this, cbval1);
		} else {
			QComboBox::inputMethodEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionComboBox* option) const override {
		if (qcombobox_initstyleoption_isbase) {
			qcombobox_initstyleoption_isbase = false;
			QComboBox::initStyleOption(option);
		} else if (qcombobox_initstyleoption_callback != nullptr) {
			QStyleOptionComboBox* cbval1 = option;
			qcombobox_initstyleoption_callback(this, cbval1);
		} else {
			QComboBox::initStyleOption(option);
		}
	}

	// Friend functions
	friend void QComboBox_FocusInEvent(QComboBox* self, QFocusEvent* e);
	friend void QComboBox_QBaseFocusInEvent(QComboBox* self, QFocusEvent* e);
	friend void QComboBox_FocusOutEvent(QComboBox* self, QFocusEvent* e);
	friend void QComboBox_QBaseFocusOutEvent(QComboBox* self, QFocusEvent* e);
	friend void QComboBox_ChangeEvent(QComboBox* self, QEvent* e);
	friend void QComboBox_QBaseChangeEvent(QComboBox* self, QEvent* e);
	friend void QComboBox_ResizeEvent(QComboBox* self, QResizeEvent* e);
	friend void QComboBox_QBaseResizeEvent(QComboBox* self, QResizeEvent* e);
	friend void QComboBox_PaintEvent(QComboBox* self, QPaintEvent* e);
	friend void QComboBox_QBasePaintEvent(QComboBox* self, QPaintEvent* e);
	friend void QComboBox_ShowEvent(QComboBox* self, QShowEvent* e);
	friend void QComboBox_QBaseShowEvent(QComboBox* self, QShowEvent* e);
	friend void QComboBox_HideEvent(QComboBox* self, QHideEvent* e);
	friend void QComboBox_QBaseHideEvent(QComboBox* self, QHideEvent* e);
	friend void QComboBox_MousePressEvent(QComboBox* self, QMouseEvent* e);
	friend void QComboBox_QBaseMousePressEvent(QComboBox* self, QMouseEvent* e);
	friend void QComboBox_MouseReleaseEvent(QComboBox* self, QMouseEvent* e);
	friend void QComboBox_QBaseMouseReleaseEvent(QComboBox* self, QMouseEvent* e);
	friend void QComboBox_KeyPressEvent(QComboBox* self, QKeyEvent* e);
	friend void QComboBox_QBaseKeyPressEvent(QComboBox* self, QKeyEvent* e);
	friend void QComboBox_KeyReleaseEvent(QComboBox* self, QKeyEvent* e);
	friend void QComboBox_QBaseKeyReleaseEvent(QComboBox* self, QKeyEvent* e);
	friend void QComboBox_WheelEvent(QComboBox* self, QWheelEvent* e);
	friend void QComboBox_QBaseWheelEvent(QComboBox* self, QWheelEvent* e);
	friend void QComboBox_ContextMenuEvent(QComboBox* self, QContextMenuEvent* e);
	friend void QComboBox_QBaseContextMenuEvent(QComboBox* self, QContextMenuEvent* e);
	friend void QComboBox_InputMethodEvent(QComboBox* self, QInputMethodEvent* param1);
	friend void QComboBox_QBaseInputMethodEvent(QComboBox* self, QInputMethodEvent* param1);
	friend void QComboBox_InitStyleOption(const QComboBox* self, QStyleOptionComboBox* option);
	friend void QComboBox_QBaseInitStyleOption(const QComboBox* self, QStyleOptionComboBox* option);
};

#endif


