#pragma once
#ifndef QTABBAR_H_C_LIBVIRTUAL
#define QTABBAR_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTabBar so that we can call protected methods
class VirtualQTabBar final : public QTabBar {

public:
	// Virtual class boolean flag
	bool isVirtualQTabBar= true;

	// Virtual class public types (including callbacks)
	using QTabBar_SizeHint_Callback = QSize* (*)();
	using QTabBar_MinimumSizeHint_Callback = QSize* (*)();
	using QTabBar_TabSizeHint_Callback = QSize* (*)(const QTabBar*, int);
	using QTabBar_MinimumTabSizeHint_Callback = QSize* (*)(const QTabBar*, int);
	using QTabBar_TabInserted_Callback = void (*)(QTabBar*, int);
	using QTabBar_TabRemoved_Callback = void (*)(QTabBar*, int);
	using QTabBar_TabLayoutChange_Callback = void (*)();
	using QTabBar_Event_Callback = bool (*)(QTabBar*, QEvent*);
	using QTabBar_ResizeEvent_Callback = void (*)(QTabBar*, QResizeEvent*);
	using QTabBar_ShowEvent_Callback = void (*)(QTabBar*, QShowEvent*);
	using QTabBar_HideEvent_Callback = void (*)(QTabBar*, QHideEvent*);
	using QTabBar_PaintEvent_Callback = void (*)(QTabBar*, QPaintEvent*);
	using QTabBar_MousePressEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
	using QTabBar_MouseMoveEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
	using QTabBar_MouseReleaseEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
	using QTabBar_MouseDoubleClickEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
	using QTabBar_WheelEvent_Callback = void (*)(QTabBar*, QWheelEvent*);
	using QTabBar_KeyPressEvent_Callback = void (*)(QTabBar*, QKeyEvent*);
	using QTabBar_ChangeEvent_Callback = void (*)(QTabBar*, QEvent*);
	using QTabBar_TimerEvent_Callback = void (*)(QTabBar*, QTimerEvent*);
	using QTabBar_InitStyleOption_Callback = void (*)(const QTabBar*, QStyleOptionTab*, int);

protected:
	// Instance callback storage
	mutable QTabBar_SizeHint_Callback qtabbar_sizehint_callback = nullptr;
	mutable QTabBar_MinimumSizeHint_Callback qtabbar_minimumsizehint_callback = nullptr;
	mutable QTabBar_TabSizeHint_Callback qtabbar_tabsizehint_callback = nullptr;
	mutable QTabBar_MinimumTabSizeHint_Callback qtabbar_minimumtabsizehint_callback = nullptr;
	mutable QTabBar_TabInserted_Callback qtabbar_tabinserted_callback = nullptr;
	mutable QTabBar_TabRemoved_Callback qtabbar_tabremoved_callback = nullptr;
	mutable QTabBar_TabLayoutChange_Callback qtabbar_tablayoutchange_callback = nullptr;
	mutable QTabBar_Event_Callback qtabbar_event_callback = nullptr;
	mutable QTabBar_ResizeEvent_Callback qtabbar_resizeevent_callback = nullptr;
	mutable QTabBar_ShowEvent_Callback qtabbar_showevent_callback = nullptr;
	mutable QTabBar_HideEvent_Callback qtabbar_hideevent_callback = nullptr;
	mutable QTabBar_PaintEvent_Callback qtabbar_paintevent_callback = nullptr;
	mutable QTabBar_MousePressEvent_Callback qtabbar_mousepressevent_callback = nullptr;
	mutable QTabBar_MouseMoveEvent_Callback qtabbar_mousemoveevent_callback = nullptr;
	mutable QTabBar_MouseReleaseEvent_Callback qtabbar_mousereleaseevent_callback = nullptr;
	mutable QTabBar_MouseDoubleClickEvent_Callback qtabbar_mousedoubleclickevent_callback = nullptr;
	mutable QTabBar_WheelEvent_Callback qtabbar_wheelevent_callback = nullptr;
	mutable QTabBar_KeyPressEvent_Callback qtabbar_keypressevent_callback = nullptr;
	mutable QTabBar_ChangeEvent_Callback qtabbar_changeevent_callback = nullptr;
	mutable QTabBar_TimerEvent_Callback qtabbar_timerevent_callback = nullptr;
	mutable QTabBar_InitStyleOption_Callback qtabbar_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qtabbar_sizehint_isbase = false;
    mutable bool qtabbar_minimumsizehint_isbase = false;
    mutable bool qtabbar_tabsizehint_isbase = false;
    mutable bool qtabbar_minimumtabsizehint_isbase = false;
    mutable bool qtabbar_tabinserted_isbase = false;
    mutable bool qtabbar_tabremoved_isbase = false;
    mutable bool qtabbar_tablayoutchange_isbase = false;
    mutable bool qtabbar_event_isbase = false;
    mutable bool qtabbar_resizeevent_isbase = false;
    mutable bool qtabbar_showevent_isbase = false;
    mutable bool qtabbar_hideevent_isbase = false;
    mutable bool qtabbar_paintevent_isbase = false;
    mutable bool qtabbar_mousepressevent_isbase = false;
    mutable bool qtabbar_mousemoveevent_isbase = false;
    mutable bool qtabbar_mousereleaseevent_isbase = false;
    mutable bool qtabbar_mousedoubleclickevent_isbase = false;
    mutable bool qtabbar_wheelevent_isbase = false;
    mutable bool qtabbar_keypressevent_isbase = false;
    mutable bool qtabbar_changeevent_isbase = false;
    mutable bool qtabbar_timerevent_isbase = false;
    mutable bool qtabbar_initstyleoption_isbase = false;

public:
	VirtualQTabBar(QWidget* parent): QTabBar(parent) {};
	VirtualQTabBar(): QTabBar() {};

	~VirtualQTabBar() {
		qtabbar_sizehint_callback = nullptr;
		qtabbar_minimumsizehint_callback = nullptr;
		qtabbar_tabsizehint_callback = nullptr;
		qtabbar_minimumtabsizehint_callback = nullptr;
		qtabbar_tabinserted_callback = nullptr;
		qtabbar_tabremoved_callback = nullptr;
		qtabbar_tablayoutchange_callback = nullptr;
		qtabbar_event_callback = nullptr;
		qtabbar_resizeevent_callback = nullptr;
		qtabbar_showevent_callback = nullptr;
		qtabbar_hideevent_callback = nullptr;
		qtabbar_paintevent_callback = nullptr;
		qtabbar_mousepressevent_callback = nullptr;
		qtabbar_mousemoveevent_callback = nullptr;
		qtabbar_mousereleaseevent_callback = nullptr;
		qtabbar_mousedoubleclickevent_callback = nullptr;
		qtabbar_wheelevent_callback = nullptr;
		qtabbar_keypressevent_callback = nullptr;
		qtabbar_changeevent_callback = nullptr;
		qtabbar_timerevent_callback = nullptr;
		qtabbar_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQTabBar_SizeHint_Callback(QTabBar_SizeHint_Callback cb) const { qtabbar_sizehint_callback = cb; }
	inline void setQTabBar_MinimumSizeHint_Callback(QTabBar_MinimumSizeHint_Callback cb) const { qtabbar_minimumsizehint_callback = cb; }
	inline void setQTabBar_TabSizeHint_Callback(QTabBar_TabSizeHint_Callback cb) const { qtabbar_tabsizehint_callback = cb; }
	inline void setQTabBar_MinimumTabSizeHint_Callback(QTabBar_MinimumTabSizeHint_Callback cb) const { qtabbar_minimumtabsizehint_callback = cb; }
	inline void setQTabBar_TabInserted_Callback(QTabBar_TabInserted_Callback cb) const { qtabbar_tabinserted_callback = cb; }
	inline void setQTabBar_TabRemoved_Callback(QTabBar_TabRemoved_Callback cb) const { qtabbar_tabremoved_callback = cb; }
	inline void setQTabBar_TabLayoutChange_Callback(QTabBar_TabLayoutChange_Callback cb) const { qtabbar_tablayoutchange_callback = cb; }
	inline void setQTabBar_Event_Callback(QTabBar_Event_Callback cb) const { qtabbar_event_callback = cb; }
	inline void setQTabBar_ResizeEvent_Callback(QTabBar_ResizeEvent_Callback cb) const { qtabbar_resizeevent_callback = cb; }
	inline void setQTabBar_ShowEvent_Callback(QTabBar_ShowEvent_Callback cb) const { qtabbar_showevent_callback = cb; }
	inline void setQTabBar_HideEvent_Callback(QTabBar_HideEvent_Callback cb) const { qtabbar_hideevent_callback = cb; }
	inline void setQTabBar_PaintEvent_Callback(QTabBar_PaintEvent_Callback cb) const { qtabbar_paintevent_callback = cb; }
	inline void setQTabBar_MousePressEvent_Callback(QTabBar_MousePressEvent_Callback cb) const { qtabbar_mousepressevent_callback = cb; }
	inline void setQTabBar_MouseMoveEvent_Callback(QTabBar_MouseMoveEvent_Callback cb) const { qtabbar_mousemoveevent_callback = cb; }
	inline void setQTabBar_MouseReleaseEvent_Callback(QTabBar_MouseReleaseEvent_Callback cb) const { qtabbar_mousereleaseevent_callback = cb; }
	inline void setQTabBar_MouseDoubleClickEvent_Callback(QTabBar_MouseDoubleClickEvent_Callback cb) const { qtabbar_mousedoubleclickevent_callback = cb; }
	inline void setQTabBar_WheelEvent_Callback(QTabBar_WheelEvent_Callback cb) const { qtabbar_wheelevent_callback = cb; }
	inline void setQTabBar_KeyPressEvent_Callback(QTabBar_KeyPressEvent_Callback cb) const { qtabbar_keypressevent_callback = cb; }
	inline void setQTabBar_ChangeEvent_Callback(QTabBar_ChangeEvent_Callback cb) const { qtabbar_changeevent_callback = cb; }
	inline void setQTabBar_TimerEvent_Callback(QTabBar_TimerEvent_Callback cb) const { qtabbar_timerevent_callback = cb; }
	inline void setQTabBar_InitStyleOption_Callback(QTabBar_InitStyleOption_Callback cb) const { qtabbar_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQTabBar_SizeHint_IsBase(bool value) const { qtabbar_sizehint_isbase = value; }
	inline void setQTabBar_MinimumSizeHint_IsBase(bool value) const { qtabbar_minimumsizehint_isbase = value; }
	inline void setQTabBar_TabSizeHint_IsBase(bool value) const { qtabbar_tabsizehint_isbase = value; }
	inline void setQTabBar_MinimumTabSizeHint_IsBase(bool value) const { qtabbar_minimumtabsizehint_isbase = value; }
	inline void setQTabBar_TabInserted_IsBase(bool value) const { qtabbar_tabinserted_isbase = value; }
	inline void setQTabBar_TabRemoved_IsBase(bool value) const { qtabbar_tabremoved_isbase = value; }
	inline void setQTabBar_TabLayoutChange_IsBase(bool value) const { qtabbar_tablayoutchange_isbase = value; }
	inline void setQTabBar_Event_IsBase(bool value) const { qtabbar_event_isbase = value; }
	inline void setQTabBar_ResizeEvent_IsBase(bool value) const { qtabbar_resizeevent_isbase = value; }
	inline void setQTabBar_ShowEvent_IsBase(bool value) const { qtabbar_showevent_isbase = value; }
	inline void setQTabBar_HideEvent_IsBase(bool value) const { qtabbar_hideevent_isbase = value; }
	inline void setQTabBar_PaintEvent_IsBase(bool value) const { qtabbar_paintevent_isbase = value; }
	inline void setQTabBar_MousePressEvent_IsBase(bool value) const { qtabbar_mousepressevent_isbase = value; }
	inline void setQTabBar_MouseMoveEvent_IsBase(bool value) const { qtabbar_mousemoveevent_isbase = value; }
	inline void setQTabBar_MouseReleaseEvent_IsBase(bool value) const { qtabbar_mousereleaseevent_isbase = value; }
	inline void setQTabBar_MouseDoubleClickEvent_IsBase(bool value) const { qtabbar_mousedoubleclickevent_isbase = value; }
	inline void setQTabBar_WheelEvent_IsBase(bool value) const { qtabbar_wheelevent_isbase = value; }
	inline void setQTabBar_KeyPressEvent_IsBase(bool value) const { qtabbar_keypressevent_isbase = value; }
	inline void setQTabBar_ChangeEvent_IsBase(bool value) const { qtabbar_changeevent_isbase = value; }
	inline void setQTabBar_TimerEvent_IsBase(bool value) const { qtabbar_timerevent_isbase = value; }
	inline void setQTabBar_InitStyleOption_IsBase(bool value) const { qtabbar_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qtabbar_sizehint_isbase) {
			qtabbar_sizehint_isbase = false;
			return QTabBar::sizeHint();
		} else if (qtabbar_sizehint_callback != nullptr) {
			QSize* callback_ret = qtabbar_sizehint_callback();
			return *callback_ret;
		} else {
			return QTabBar::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qtabbar_minimumsizehint_isbase) {
			qtabbar_minimumsizehint_isbase = false;
			return QTabBar::minimumSizeHint();
		} else if (qtabbar_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qtabbar_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QTabBar::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize tabSizeHint(int index) const override {
		if (qtabbar_tabsizehint_isbase) {
			qtabbar_tabsizehint_isbase = false;
			return QTabBar::tabSizeHint(index);
		} else if (qtabbar_tabsizehint_callback != nullptr) {
			int cbval1 = index;
			QSize* callback_ret = qtabbar_tabsizehint_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTabBar::tabSizeHint(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumTabSizeHint(int index) const override {
		if (qtabbar_minimumtabsizehint_isbase) {
			qtabbar_minimumtabsizehint_isbase = false;
			return QTabBar::minimumTabSizeHint(index);
		} else if (qtabbar_minimumtabsizehint_callback != nullptr) {
			int cbval1 = index;
			QSize* callback_ret = qtabbar_minimumtabsizehint_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTabBar::minimumTabSizeHint(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void tabInserted(int index) override {
		if (qtabbar_tabinserted_isbase) {
			qtabbar_tabinserted_isbase = false;
			QTabBar::tabInserted(index);
		} else if (qtabbar_tabinserted_callback != nullptr) {
			int cbval1 = index;
			qtabbar_tabinserted_callback(this, cbval1);
		} else {
			QTabBar::tabInserted(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void tabRemoved(int index) override {
		if (qtabbar_tabremoved_isbase) {
			qtabbar_tabremoved_isbase = false;
			QTabBar::tabRemoved(index);
		} else if (qtabbar_tabremoved_callback != nullptr) {
			int cbval1 = index;
			qtabbar_tabremoved_callback(this, cbval1);
		} else {
			QTabBar::tabRemoved(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void tabLayoutChange() override {
		if (qtabbar_tablayoutchange_isbase) {
			qtabbar_tablayoutchange_isbase = false;
			QTabBar::tabLayoutChange();
		} else if (qtabbar_tablayoutchange_callback != nullptr) {
			qtabbar_tablayoutchange_callback();
		} else {
			QTabBar::tabLayoutChange();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qtabbar_event_isbase) {
			qtabbar_event_isbase = false;
			return QTabBar::event(param1);
		} else if (qtabbar_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qtabbar_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTabBar::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (qtabbar_resizeevent_isbase) {
			qtabbar_resizeevent_isbase = false;
			QTabBar::resizeEvent(param1);
		} else if (qtabbar_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = param1;
			qtabbar_resizeevent_callback(this, cbval1);
		} else {
			QTabBar::resizeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* param1) override {
		if (qtabbar_showevent_isbase) {
			qtabbar_showevent_isbase = false;
			QTabBar::showEvent(param1);
		} else if (qtabbar_showevent_callback != nullptr) {
			QShowEvent* cbval1 = param1;
			qtabbar_showevent_callback(this, cbval1);
		} else {
			QTabBar::showEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hideEvent(QHideEvent* param1) override {
		if (qtabbar_hideevent_isbase) {
			qtabbar_hideevent_isbase = false;
			QTabBar::hideEvent(param1);
		} else if (qtabbar_hideevent_callback != nullptr) {
			QHideEvent* cbval1 = param1;
			qtabbar_hideevent_callback(this, cbval1);
		} else {
			QTabBar::hideEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qtabbar_paintevent_isbase) {
			qtabbar_paintevent_isbase = false;
			QTabBar::paintEvent(param1);
		} else if (qtabbar_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qtabbar_paintevent_callback(this, cbval1);
		} else {
			QTabBar::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (qtabbar_mousepressevent_isbase) {
			qtabbar_mousepressevent_isbase = false;
			QTabBar::mousePressEvent(param1);
		} else if (qtabbar_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qtabbar_mousepressevent_callback(this, cbval1);
		} else {
			QTabBar::mousePressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qtabbar_mousemoveevent_isbase) {
			qtabbar_mousemoveevent_isbase = false;
			QTabBar::mouseMoveEvent(param1);
		} else if (qtabbar_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qtabbar_mousemoveevent_callback(this, cbval1);
		} else {
			QTabBar::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (qtabbar_mousereleaseevent_isbase) {
			qtabbar_mousereleaseevent_isbase = false;
			QTabBar::mouseReleaseEvent(param1);
		} else if (qtabbar_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qtabbar_mousereleaseevent_callback(this, cbval1);
		} else {
			QTabBar::mouseReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (qtabbar_mousedoubleclickevent_isbase) {
			qtabbar_mousedoubleclickevent_isbase = false;
			QTabBar::mouseDoubleClickEvent(param1);
		} else if (qtabbar_mousedoubleclickevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qtabbar_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QTabBar::mouseDoubleClickEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* event) override {
		if (qtabbar_wheelevent_isbase) {
			qtabbar_wheelevent_isbase = false;
			QTabBar::wheelEvent(event);
		} else if (qtabbar_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = event;
			qtabbar_wheelevent_callback(this, cbval1);
		} else {
			QTabBar::wheelEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (qtabbar_keypressevent_isbase) {
			qtabbar_keypressevent_isbase = false;
			QTabBar::keyPressEvent(param1);
		} else if (qtabbar_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qtabbar_keypressevent_callback(this, cbval1);
		} else {
			QTabBar::keyPressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* param1) override {
		if (qtabbar_changeevent_isbase) {
			qtabbar_changeevent_isbase = false;
			QTabBar::changeEvent(param1);
		} else if (qtabbar_changeevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qtabbar_changeevent_callback(this, cbval1);
		} else {
			QTabBar::changeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* event) override {
		if (qtabbar_timerevent_isbase) {
			qtabbar_timerevent_isbase = false;
			QTabBar::timerEvent(event);
		} else if (qtabbar_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = event;
			qtabbar_timerevent_callback(this, cbval1);
		} else {
			QTabBar::timerEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionTab* option, int tabIndex) const override {
		if (qtabbar_initstyleoption_isbase) {
			qtabbar_initstyleoption_isbase = false;
			QTabBar::initStyleOption(option, tabIndex);
		} else if (qtabbar_initstyleoption_callback != nullptr) {
			QStyleOptionTab* cbval1 = option;
			int cbval2 = tabIndex;
			qtabbar_initstyleoption_callback(this, cbval1, cbval2);
		} else {
			QTabBar::initStyleOption(option, tabIndex);
		}
	}

	// Friend functions
	friend QSize* QTabBar_TabSizeHint(const QTabBar* self, int index);
	friend QSize* QTabBar_QBaseTabSizeHint(const QTabBar* self, int index);
	friend QSize* QTabBar_MinimumTabSizeHint(const QTabBar* self, int index);
	friend QSize* QTabBar_QBaseMinimumTabSizeHint(const QTabBar* self, int index);
	friend void QTabBar_TabInserted(QTabBar* self, int index);
	friend void QTabBar_QBaseTabInserted(QTabBar* self, int index);
	friend void QTabBar_TabRemoved(QTabBar* self, int index);
	friend void QTabBar_QBaseTabRemoved(QTabBar* self, int index);
	friend void QTabBar_TabLayoutChange(QTabBar* self);
	friend void QTabBar_QBaseTabLayoutChange(QTabBar* self);
	friend bool QTabBar_Event(QTabBar* self, QEvent* param1);
	friend bool QTabBar_QBaseEvent(QTabBar* self, QEvent* param1);
	friend void QTabBar_ResizeEvent(QTabBar* self, QResizeEvent* param1);
	friend void QTabBar_QBaseResizeEvent(QTabBar* self, QResizeEvent* param1);
	friend void QTabBar_ShowEvent(QTabBar* self, QShowEvent* param1);
	friend void QTabBar_QBaseShowEvent(QTabBar* self, QShowEvent* param1);
	friend void QTabBar_HideEvent(QTabBar* self, QHideEvent* param1);
	friend void QTabBar_QBaseHideEvent(QTabBar* self, QHideEvent* param1);
	friend void QTabBar_PaintEvent(QTabBar* self, QPaintEvent* param1);
	friend void QTabBar_QBasePaintEvent(QTabBar* self, QPaintEvent* param1);
	friend void QTabBar_MousePressEvent(QTabBar* self, QMouseEvent* param1);
	friend void QTabBar_QBaseMousePressEvent(QTabBar* self, QMouseEvent* param1);
	friend void QTabBar_MouseMoveEvent(QTabBar* self, QMouseEvent* param1);
	friend void QTabBar_QBaseMouseMoveEvent(QTabBar* self, QMouseEvent* param1);
	friend void QTabBar_MouseReleaseEvent(QTabBar* self, QMouseEvent* param1);
	friend void QTabBar_QBaseMouseReleaseEvent(QTabBar* self, QMouseEvent* param1);
	friend void QTabBar_MouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1);
	friend void QTabBar_QBaseMouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1);
	friend void QTabBar_WheelEvent(QTabBar* self, QWheelEvent* event);
	friend void QTabBar_QBaseWheelEvent(QTabBar* self, QWheelEvent* event);
	friend void QTabBar_KeyPressEvent(QTabBar* self, QKeyEvent* param1);
	friend void QTabBar_QBaseKeyPressEvent(QTabBar* self, QKeyEvent* param1);
	friend void QTabBar_ChangeEvent(QTabBar* self, QEvent* param1);
	friend void QTabBar_QBaseChangeEvent(QTabBar* self, QEvent* param1);
	friend void QTabBar_TimerEvent(QTabBar* self, QTimerEvent* event);
	friend void QTabBar_QBaseTimerEvent(QTabBar* self, QTimerEvent* event);
	friend void QTabBar_InitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex);
	friend void QTabBar_QBaseInitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex);
};

#endif


