#pragma once
#ifndef QDIALOG_H_C_LIBVIRTUAL
#define QDIALOG_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QDialog so that we can call protected methods
class VirtualQDialog final : public QDialog {

public:
	// Virtual class boolean flag
	bool isVirtualQDialog= true;

	// Virtual class public types (including callbacks)
	using QDialog_SetVisible_Callback = void (*)(QDialog*, bool);
	using QDialog_SizeHint_Callback = QSize* (*)();
	using QDialog_MinimumSizeHint_Callback = QSize* (*)();
	using QDialog_Open_Callback = void (*)();
	using QDialog_Exec_Callback = int (*)();
	using QDialog_Done_Callback = void (*)(QDialog*, int);
	using QDialog_Accept_Callback = void (*)();
	using QDialog_Reject_Callback = void (*)();
	using QDialog_KeyPressEvent_Callback = void (*)(QDialog*, QKeyEvent*);
	using QDialog_CloseEvent_Callback = void (*)(QDialog*, QCloseEvent*);
	using QDialog_ShowEvent_Callback = void (*)(QDialog*, QShowEvent*);
	using QDialog_ResizeEvent_Callback = void (*)(QDialog*, QResizeEvent*);
	using QDialog_ContextMenuEvent_Callback = void (*)(QDialog*, QContextMenuEvent*);
	using QDialog_EventFilter_Callback = bool (*)(QDialog*, QObject*, QEvent*);
	using QDialog_AdjustPosition_Callback = void (*)(QDialog*, QWidget*);

protected:
	// Instance callback storage
	mutable QDialog_SetVisible_Callback qdialog_setvisible_callback = nullptr;
	mutable QDialog_SizeHint_Callback qdialog_sizehint_callback = nullptr;
	mutable QDialog_MinimumSizeHint_Callback qdialog_minimumsizehint_callback = nullptr;
	mutable QDialog_Open_Callback qdialog_open_callback = nullptr;
	mutable QDialog_Exec_Callback qdialog_exec_callback = nullptr;
	mutable QDialog_Done_Callback qdialog_done_callback = nullptr;
	mutable QDialog_Accept_Callback qdialog_accept_callback = nullptr;
	mutable QDialog_Reject_Callback qdialog_reject_callback = nullptr;
	mutable QDialog_KeyPressEvent_Callback qdialog_keypressevent_callback = nullptr;
	mutable QDialog_CloseEvent_Callback qdialog_closeevent_callback = nullptr;
	mutable QDialog_ShowEvent_Callback qdialog_showevent_callback = nullptr;
	mutable QDialog_ResizeEvent_Callback qdialog_resizeevent_callback = nullptr;
	mutable QDialog_ContextMenuEvent_Callback qdialog_contextmenuevent_callback = nullptr;
	mutable QDialog_EventFilter_Callback qdialog_eventfilter_callback = nullptr;
	mutable QDialog_AdjustPosition_Callback qdialog_adjustposition_callback = nullptr;

	// Instance base flags
    mutable bool qdialog_setvisible_isbase = false;
    mutable bool qdialog_sizehint_isbase = false;
    mutable bool qdialog_minimumsizehint_isbase = false;
    mutable bool qdialog_open_isbase = false;
    mutable bool qdialog_exec_isbase = false;
    mutable bool qdialog_done_isbase = false;
    mutable bool qdialog_accept_isbase = false;
    mutable bool qdialog_reject_isbase = false;
    mutable bool qdialog_keypressevent_isbase = false;
    mutable bool qdialog_closeevent_isbase = false;
    mutable bool qdialog_showevent_isbase = false;
    mutable bool qdialog_resizeevent_isbase = false;
    mutable bool qdialog_contextmenuevent_isbase = false;
    mutable bool qdialog_eventfilter_isbase = false;
    mutable bool qdialog_adjustposition_isbase = false;

public:
	VirtualQDialog(QWidget* parent): QDialog(parent) {};
	VirtualQDialog(): QDialog() {};
	VirtualQDialog(QWidget* parent, Qt::WindowFlags f): QDialog(parent, f) {};

	~VirtualQDialog() {
		qdialog_setvisible_callback = nullptr;
		qdialog_sizehint_callback = nullptr;
		qdialog_minimumsizehint_callback = nullptr;
		qdialog_open_callback = nullptr;
		qdialog_exec_callback = nullptr;
		qdialog_done_callback = nullptr;
		qdialog_accept_callback = nullptr;
		qdialog_reject_callback = nullptr;
		qdialog_keypressevent_callback = nullptr;
		qdialog_closeevent_callback = nullptr;
		qdialog_showevent_callback = nullptr;
		qdialog_resizeevent_callback = nullptr;
		qdialog_contextmenuevent_callback = nullptr;
		qdialog_eventfilter_callback = nullptr;
		qdialog_adjustposition_callback = nullptr;
	}

// Callback setters
	inline void setQDialog_SetVisible_Callback(QDialog_SetVisible_Callback cb) const { qdialog_setvisible_callback = cb; }
	inline void setQDialog_SizeHint_Callback(QDialog_SizeHint_Callback cb) const { qdialog_sizehint_callback = cb; }
	inline void setQDialog_MinimumSizeHint_Callback(QDialog_MinimumSizeHint_Callback cb) const { qdialog_minimumsizehint_callback = cb; }
	inline void setQDialog_Open_Callback(QDialog_Open_Callback cb) const { qdialog_open_callback = cb; }
	inline void setQDialog_Exec_Callback(QDialog_Exec_Callback cb) const { qdialog_exec_callback = cb; }
	inline void setQDialog_Done_Callback(QDialog_Done_Callback cb) const { qdialog_done_callback = cb; }
	inline void setQDialog_Accept_Callback(QDialog_Accept_Callback cb) const { qdialog_accept_callback = cb; }
	inline void setQDialog_Reject_Callback(QDialog_Reject_Callback cb) const { qdialog_reject_callback = cb; }
	inline void setQDialog_KeyPressEvent_Callback(QDialog_KeyPressEvent_Callback cb) const { qdialog_keypressevent_callback = cb; }
	inline void setQDialog_CloseEvent_Callback(QDialog_CloseEvent_Callback cb) const { qdialog_closeevent_callback = cb; }
	inline void setQDialog_ShowEvent_Callback(QDialog_ShowEvent_Callback cb) const { qdialog_showevent_callback = cb; }
	inline void setQDialog_ResizeEvent_Callback(QDialog_ResizeEvent_Callback cb) const { qdialog_resizeevent_callback = cb; }
	inline void setQDialog_ContextMenuEvent_Callback(QDialog_ContextMenuEvent_Callback cb) const { qdialog_contextmenuevent_callback = cb; }
	inline void setQDialog_EventFilter_Callback(QDialog_EventFilter_Callback cb) const { qdialog_eventfilter_callback = cb; }
	inline void setQDialog_AdjustPosition_Callback(QDialog_AdjustPosition_Callback cb) const { qdialog_adjustposition_callback = cb; }

// Base flag setters
	inline void setQDialog_SetVisible_IsBase(bool value) const { qdialog_setvisible_isbase = value; }
	inline void setQDialog_SizeHint_IsBase(bool value) const { qdialog_sizehint_isbase = value; }
	inline void setQDialog_MinimumSizeHint_IsBase(bool value) const { qdialog_minimumsizehint_isbase = value; }
	inline void setQDialog_Open_IsBase(bool value) const { qdialog_open_isbase = value; }
	inline void setQDialog_Exec_IsBase(bool value) const { qdialog_exec_isbase = value; }
	inline void setQDialog_Done_IsBase(bool value) const { qdialog_done_isbase = value; }
	inline void setQDialog_Accept_IsBase(bool value) const { qdialog_accept_isbase = value; }
	inline void setQDialog_Reject_IsBase(bool value) const { qdialog_reject_isbase = value; }
	inline void setQDialog_KeyPressEvent_IsBase(bool value) const { qdialog_keypressevent_isbase = value; }
	inline void setQDialog_CloseEvent_IsBase(bool value) const { qdialog_closeevent_isbase = value; }
	inline void setQDialog_ShowEvent_IsBase(bool value) const { qdialog_showevent_isbase = value; }
	inline void setQDialog_ResizeEvent_IsBase(bool value) const { qdialog_resizeevent_isbase = value; }
	inline void setQDialog_ContextMenuEvent_IsBase(bool value) const { qdialog_contextmenuevent_isbase = value; }
	inline void setQDialog_EventFilter_IsBase(bool value) const { qdialog_eventfilter_isbase = value; }
	inline void setQDialog_AdjustPosition_IsBase(bool value) const { qdialog_adjustposition_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qdialog_setvisible_isbase) {
			qdialog_setvisible_isbase = false;
			QDialog::setVisible(visible);
		} else if (qdialog_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qdialog_setvisible_callback(this, cbval1);
		} else {
			QDialog::setVisible(visible);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qdialog_sizehint_isbase) {
			qdialog_sizehint_isbase = false;
			return QDialog::sizeHint();
		} else if (qdialog_sizehint_callback != nullptr) {
			QSize* callback_ret = qdialog_sizehint_callback();
			return *callback_ret;
		} else {
			return QDialog::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qdialog_minimumsizehint_isbase) {
			qdialog_minimumsizehint_isbase = false;
			return QDialog::minimumSizeHint();
		} else if (qdialog_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qdialog_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QDialog::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void open() override {
		if (qdialog_open_isbase) {
			qdialog_open_isbase = false;
			QDialog::open();
		} else if (qdialog_open_callback != nullptr) {
			qdialog_open_callback();
		} else {
			QDialog::open();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int exec() override {
		if (qdialog_exec_isbase) {
			qdialog_exec_isbase = false;
			return QDialog::exec();
		} else if (qdialog_exec_callback != nullptr) {
			int callback_ret = qdialog_exec_callback();
			return callback_ret;
		} else {
			return QDialog::exec();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void done(int param1) override {
		if (qdialog_done_isbase) {
			qdialog_done_isbase = false;
			QDialog::done(param1);
		} else if (qdialog_done_callback != nullptr) {
			int cbval1 = param1;
			qdialog_done_callback(this, cbval1);
		} else {
			QDialog::done(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void accept() override {
		if (qdialog_accept_isbase) {
			qdialog_accept_isbase = false;
			QDialog::accept();
		} else if (qdialog_accept_callback != nullptr) {
			qdialog_accept_callback();
		} else {
			QDialog::accept();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void reject() override {
		if (qdialog_reject_isbase) {
			qdialog_reject_isbase = false;
			QDialog::reject();
		} else if (qdialog_reject_callback != nullptr) {
			qdialog_reject_callback();
		} else {
			QDialog::reject();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (qdialog_keypressevent_isbase) {
			qdialog_keypressevent_isbase = false;
			QDialog::keyPressEvent(param1);
		} else if (qdialog_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qdialog_keypressevent_callback(this, cbval1);
		} else {
			QDialog::keyPressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void closeEvent(QCloseEvent* param1) override {
		if (qdialog_closeevent_isbase) {
			qdialog_closeevent_isbase = false;
			QDialog::closeEvent(param1);
		} else if (qdialog_closeevent_callback != nullptr) {
			QCloseEvent* cbval1 = param1;
			qdialog_closeevent_callback(this, cbval1);
		} else {
			QDialog::closeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* param1) override {
		if (qdialog_showevent_isbase) {
			qdialog_showevent_isbase = false;
			QDialog::showEvent(param1);
		} else if (qdialog_showevent_callback != nullptr) {
			QShowEvent* cbval1 = param1;
			qdialog_showevent_callback(this, cbval1);
		} else {
			QDialog::showEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (qdialog_resizeevent_isbase) {
			qdialog_resizeevent_isbase = false;
			QDialog::resizeEvent(param1);
		} else if (qdialog_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = param1;
			qdialog_resizeevent_callback(this, cbval1);
		} else {
			QDialog::resizeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (qdialog_contextmenuevent_isbase) {
			qdialog_contextmenuevent_isbase = false;
			QDialog::contextMenuEvent(param1);
		} else if (qdialog_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = param1;
			qdialog_contextmenuevent_callback(this, cbval1);
		} else {
			QDialog::contextMenuEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (qdialog_eventfilter_isbase) {
			qdialog_eventfilter_isbase = false;
			return QDialog::eventFilter(param1, param2);
		} else if (qdialog_eventfilter_callback != nullptr) {
			QObject* cbval1 = param1;
			QEvent* cbval2 = param2;
			bool callback_ret = qdialog_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QDialog::eventFilter(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	void adjustPosition(QWidget* param1) {
		if (qdialog_adjustposition_isbase) {
			qdialog_adjustposition_isbase = false;
			QDialog::adjustPosition(param1);
		} else if (qdialog_adjustposition_callback != nullptr) {
			QWidget* cbval1 = param1;
			qdialog_adjustposition_callback(this, cbval1);
		} else {
			QDialog::adjustPosition(param1);
		}
	}

	// Friend functions
	friend void QDialog_KeyPressEvent(QDialog* self, QKeyEvent* param1);
	friend void QDialog_QBaseKeyPressEvent(QDialog* self, QKeyEvent* param1);
	friend void QDialog_CloseEvent(QDialog* self, QCloseEvent* param1);
	friend void QDialog_QBaseCloseEvent(QDialog* self, QCloseEvent* param1);
	friend void QDialog_ShowEvent(QDialog* self, QShowEvent* param1);
	friend void QDialog_QBaseShowEvent(QDialog* self, QShowEvent* param1);
	friend void QDialog_ResizeEvent(QDialog* self, QResizeEvent* param1);
	friend void QDialog_QBaseResizeEvent(QDialog* self, QResizeEvent* param1);
	friend void QDialog_ContextMenuEvent(QDialog* self, QContextMenuEvent* param1);
	friend void QDialog_QBaseContextMenuEvent(QDialog* self, QContextMenuEvent* param1);
	friend bool QDialog_EventFilter(QDialog* self, QObject* param1, QEvent* param2);
	friend bool QDialog_QBaseEventFilter(QDialog* self, QObject* param1, QEvent* param2);
	friend void QDialog_AdjustPosition(QDialog* self, QWidget* param1);
	friend void QDialog_QBaseAdjustPosition(QDialog* self, QWidget* param1);
};

#endif


