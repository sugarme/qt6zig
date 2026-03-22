#pragma once
#ifndef QTABWIDGET_H_C_LIBVIRTUAL
#define QTABWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTabWidget so that we can call protected methods
class VirtualQTabWidget final : public QTabWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQTabWidget= true;

	// Virtual class public types (including callbacks)
	using QTabWidget_SizeHint_Callback = QSize* (*)();
	using QTabWidget_MinimumSizeHint_Callback = QSize* (*)();
	using QTabWidget_HeightForWidth_Callback = int (*)(const QTabWidget*, int);
	using QTabWidget_HasHeightForWidth_Callback = bool (*)();
	using QTabWidget_TabInserted_Callback = void (*)(QTabWidget*, int);
	using QTabWidget_TabRemoved_Callback = void (*)(QTabWidget*, int);
	using QTabWidget_ShowEvent_Callback = void (*)(QTabWidget*, QShowEvent*);
	using QTabWidget_ResizeEvent_Callback = void (*)(QTabWidget*, QResizeEvent*);
	using QTabWidget_KeyPressEvent_Callback = void (*)(QTabWidget*, QKeyEvent*);
	using QTabWidget_PaintEvent_Callback = void (*)(QTabWidget*, QPaintEvent*);
	using QTabWidget_ChangeEvent_Callback = void (*)(QTabWidget*, QEvent*);
	using QTabWidget_Event_Callback = bool (*)(QTabWidget*, QEvent*);
	using QTabWidget_InitStyleOption_Callback = void (*)(const QTabWidget*, QStyleOptionTabWidgetFrame*);
	using QTabWidget_SetTabBar_Callback = void (*)(QTabWidget*, QTabBar*);

protected:
	// Instance callback storage
	mutable QTabWidget_SizeHint_Callback qtabwidget_sizehint_callback = nullptr;
	mutable QTabWidget_MinimumSizeHint_Callback qtabwidget_minimumsizehint_callback = nullptr;
	mutable QTabWidget_HeightForWidth_Callback qtabwidget_heightforwidth_callback = nullptr;
	mutable QTabWidget_HasHeightForWidth_Callback qtabwidget_hasheightforwidth_callback = nullptr;
	mutable QTabWidget_TabInserted_Callback qtabwidget_tabinserted_callback = nullptr;
	mutable QTabWidget_TabRemoved_Callback qtabwidget_tabremoved_callback = nullptr;
	mutable QTabWidget_ShowEvent_Callback qtabwidget_showevent_callback = nullptr;
	mutable QTabWidget_ResizeEvent_Callback qtabwidget_resizeevent_callback = nullptr;
	mutable QTabWidget_KeyPressEvent_Callback qtabwidget_keypressevent_callback = nullptr;
	mutable QTabWidget_PaintEvent_Callback qtabwidget_paintevent_callback = nullptr;
	mutable QTabWidget_ChangeEvent_Callback qtabwidget_changeevent_callback = nullptr;
	mutable QTabWidget_Event_Callback qtabwidget_event_callback = nullptr;
	mutable QTabWidget_InitStyleOption_Callback qtabwidget_initstyleoption_callback = nullptr;
	mutable QTabWidget_SetTabBar_Callback qtabwidget_settabbar_callback = nullptr;

	// Instance base flags
    mutable bool qtabwidget_sizehint_isbase = false;
    mutable bool qtabwidget_minimumsizehint_isbase = false;
    mutable bool qtabwidget_heightforwidth_isbase = false;
    mutable bool qtabwidget_hasheightforwidth_isbase = false;
    mutable bool qtabwidget_tabinserted_isbase = false;
    mutable bool qtabwidget_tabremoved_isbase = false;
    mutable bool qtabwidget_showevent_isbase = false;
    mutable bool qtabwidget_resizeevent_isbase = false;
    mutable bool qtabwidget_keypressevent_isbase = false;
    mutable bool qtabwidget_paintevent_isbase = false;
    mutable bool qtabwidget_changeevent_isbase = false;
    mutable bool qtabwidget_event_isbase = false;
    mutable bool qtabwidget_initstyleoption_isbase = false;
    mutable bool qtabwidget_settabbar_isbase = false;

public:
	VirtualQTabWidget(QWidget* parent): QTabWidget(parent) {};
	VirtualQTabWidget(): QTabWidget() {};

	~VirtualQTabWidget() {
		qtabwidget_sizehint_callback = nullptr;
		qtabwidget_minimumsizehint_callback = nullptr;
		qtabwidget_heightforwidth_callback = nullptr;
		qtabwidget_hasheightforwidth_callback = nullptr;
		qtabwidget_tabinserted_callback = nullptr;
		qtabwidget_tabremoved_callback = nullptr;
		qtabwidget_showevent_callback = nullptr;
		qtabwidget_resizeevent_callback = nullptr;
		qtabwidget_keypressevent_callback = nullptr;
		qtabwidget_paintevent_callback = nullptr;
		qtabwidget_changeevent_callback = nullptr;
		qtabwidget_event_callback = nullptr;
		qtabwidget_initstyleoption_callback = nullptr;
		qtabwidget_settabbar_callback = nullptr;
	}

// Callback setters
	inline void setQTabWidget_SizeHint_Callback(QTabWidget_SizeHint_Callback cb) const { qtabwidget_sizehint_callback = cb; }
	inline void setQTabWidget_MinimumSizeHint_Callback(QTabWidget_MinimumSizeHint_Callback cb) const { qtabwidget_minimumsizehint_callback = cb; }
	inline void setQTabWidget_HeightForWidth_Callback(QTabWidget_HeightForWidth_Callback cb) const { qtabwidget_heightforwidth_callback = cb; }
	inline void setQTabWidget_HasHeightForWidth_Callback(QTabWidget_HasHeightForWidth_Callback cb) const { qtabwidget_hasheightforwidth_callback = cb; }
	inline void setQTabWidget_TabInserted_Callback(QTabWidget_TabInserted_Callback cb) const { qtabwidget_tabinserted_callback = cb; }
	inline void setQTabWidget_TabRemoved_Callback(QTabWidget_TabRemoved_Callback cb) const { qtabwidget_tabremoved_callback = cb; }
	inline void setQTabWidget_ShowEvent_Callback(QTabWidget_ShowEvent_Callback cb) const { qtabwidget_showevent_callback = cb; }
	inline void setQTabWidget_ResizeEvent_Callback(QTabWidget_ResizeEvent_Callback cb) const { qtabwidget_resizeevent_callback = cb; }
	inline void setQTabWidget_KeyPressEvent_Callback(QTabWidget_KeyPressEvent_Callback cb) const { qtabwidget_keypressevent_callback = cb; }
	inline void setQTabWidget_PaintEvent_Callback(QTabWidget_PaintEvent_Callback cb) const { qtabwidget_paintevent_callback = cb; }
	inline void setQTabWidget_ChangeEvent_Callback(QTabWidget_ChangeEvent_Callback cb) const { qtabwidget_changeevent_callback = cb; }
	inline void setQTabWidget_Event_Callback(QTabWidget_Event_Callback cb) const { qtabwidget_event_callback = cb; }
	inline void setQTabWidget_InitStyleOption_Callback(QTabWidget_InitStyleOption_Callback cb) const { qtabwidget_initstyleoption_callback = cb; }
	inline void setQTabWidget_SetTabBar_Callback(QTabWidget_SetTabBar_Callback cb) const { qtabwidget_settabbar_callback = cb; }

// Base flag setters
	inline void setQTabWidget_SizeHint_IsBase(bool value) const { qtabwidget_sizehint_isbase = value; }
	inline void setQTabWidget_MinimumSizeHint_IsBase(bool value) const { qtabwidget_minimumsizehint_isbase = value; }
	inline void setQTabWidget_HeightForWidth_IsBase(bool value) const { qtabwidget_heightforwidth_isbase = value; }
	inline void setQTabWidget_HasHeightForWidth_IsBase(bool value) const { qtabwidget_hasheightforwidth_isbase = value; }
	inline void setQTabWidget_TabInserted_IsBase(bool value) const { qtabwidget_tabinserted_isbase = value; }
	inline void setQTabWidget_TabRemoved_IsBase(bool value) const { qtabwidget_tabremoved_isbase = value; }
	inline void setQTabWidget_ShowEvent_IsBase(bool value) const { qtabwidget_showevent_isbase = value; }
	inline void setQTabWidget_ResizeEvent_IsBase(bool value) const { qtabwidget_resizeevent_isbase = value; }
	inline void setQTabWidget_KeyPressEvent_IsBase(bool value) const { qtabwidget_keypressevent_isbase = value; }
	inline void setQTabWidget_PaintEvent_IsBase(bool value) const { qtabwidget_paintevent_isbase = value; }
	inline void setQTabWidget_ChangeEvent_IsBase(bool value) const { qtabwidget_changeevent_isbase = value; }
	inline void setQTabWidget_Event_IsBase(bool value) const { qtabwidget_event_isbase = value; }
	inline void setQTabWidget_InitStyleOption_IsBase(bool value) const { qtabwidget_initstyleoption_isbase = value; }
	inline void setQTabWidget_SetTabBar_IsBase(bool value) const { qtabwidget_settabbar_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qtabwidget_sizehint_isbase) {
			qtabwidget_sizehint_isbase = false;
			return QTabWidget::sizeHint();
		} else if (qtabwidget_sizehint_callback != nullptr) {
			QSize* callback_ret = qtabwidget_sizehint_callback();
			return *callback_ret;
		} else {
			return QTabWidget::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qtabwidget_minimumsizehint_isbase) {
			qtabwidget_minimumsizehint_isbase = false;
			return QTabWidget::minimumSizeHint();
		} else if (qtabwidget_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qtabwidget_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QTabWidget::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int heightForWidth(int width) const override {
		if (qtabwidget_heightforwidth_isbase) {
			qtabwidget_heightforwidth_isbase = false;
			return QTabWidget::heightForWidth(width);
		} else if (qtabwidget_heightforwidth_callback != nullptr) {
			int cbval1 = width;
			int callback_ret = qtabwidget_heightforwidth_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTabWidget::heightForWidth(width);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hasHeightForWidth() const override {
		if (qtabwidget_hasheightforwidth_isbase) {
			qtabwidget_hasheightforwidth_isbase = false;
			return QTabWidget::hasHeightForWidth();
		} else if (qtabwidget_hasheightforwidth_callback != nullptr) {
			bool callback_ret = qtabwidget_hasheightforwidth_callback();
			return callback_ret;
		} else {
			return QTabWidget::hasHeightForWidth();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void tabInserted(int index) override {
		if (qtabwidget_tabinserted_isbase) {
			qtabwidget_tabinserted_isbase = false;
			QTabWidget::tabInserted(index);
		} else if (qtabwidget_tabinserted_callback != nullptr) {
			int cbval1 = index;
			qtabwidget_tabinserted_callback(this, cbval1);
		} else {
			QTabWidget::tabInserted(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void tabRemoved(int index) override {
		if (qtabwidget_tabremoved_isbase) {
			qtabwidget_tabremoved_isbase = false;
			QTabWidget::tabRemoved(index);
		} else if (qtabwidget_tabremoved_callback != nullptr) {
			int cbval1 = index;
			qtabwidget_tabremoved_callback(this, cbval1);
		} else {
			QTabWidget::tabRemoved(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* param1) override {
		if (qtabwidget_showevent_isbase) {
			qtabwidget_showevent_isbase = false;
			QTabWidget::showEvent(param1);
		} else if (qtabwidget_showevent_callback != nullptr) {
			QShowEvent* cbval1 = param1;
			qtabwidget_showevent_callback(this, cbval1);
		} else {
			QTabWidget::showEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (qtabwidget_resizeevent_isbase) {
			qtabwidget_resizeevent_isbase = false;
			QTabWidget::resizeEvent(param1);
		} else if (qtabwidget_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = param1;
			qtabwidget_resizeevent_callback(this, cbval1);
		} else {
			QTabWidget::resizeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (qtabwidget_keypressevent_isbase) {
			qtabwidget_keypressevent_isbase = false;
			QTabWidget::keyPressEvent(param1);
		} else if (qtabwidget_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = param1;
			qtabwidget_keypressevent_callback(this, cbval1);
		} else {
			QTabWidget::keyPressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qtabwidget_paintevent_isbase) {
			qtabwidget_paintevent_isbase = false;
			QTabWidget::paintEvent(param1);
		} else if (qtabwidget_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qtabwidget_paintevent_callback(this, cbval1);
		} else {
			QTabWidget::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* param1) override {
		if (qtabwidget_changeevent_isbase) {
			qtabwidget_changeevent_isbase = false;
			QTabWidget::changeEvent(param1);
		} else if (qtabwidget_changeevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qtabwidget_changeevent_callback(this, cbval1);
		} else {
			QTabWidget::changeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qtabwidget_event_isbase) {
			qtabwidget_event_isbase = false;
			return QTabWidget::event(param1);
		} else if (qtabwidget_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qtabwidget_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTabWidget::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionTabWidgetFrame* option) const override {
		if (qtabwidget_initstyleoption_isbase) {
			qtabwidget_initstyleoption_isbase = false;
			QTabWidget::initStyleOption(option);
		} else if (qtabwidget_initstyleoption_callback != nullptr) {
			QStyleOptionTabWidgetFrame* cbval1 = option;
			qtabwidget_initstyleoption_callback(this, cbval1);
		} else {
			QTabWidget::initStyleOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setTabBar(QTabBar* tabBar) {
		if (qtabwidget_settabbar_isbase) {
			qtabwidget_settabbar_isbase = false;
			QTabWidget::setTabBar(tabBar);
		} else if (qtabwidget_settabbar_callback != nullptr) {
			QTabBar* cbval1 = tabBar;
			qtabwidget_settabbar_callback(this, cbval1);
		} else {
			QTabWidget::setTabBar(tabBar);
		}
	}

	// Friend functions
	friend void QTabWidget_TabInserted(QTabWidget* self, int index);
	friend void QTabWidget_QBaseTabInserted(QTabWidget* self, int index);
	friend void QTabWidget_TabRemoved(QTabWidget* self, int index);
	friend void QTabWidget_QBaseTabRemoved(QTabWidget* self, int index);
	friend void QTabWidget_ShowEvent(QTabWidget* self, QShowEvent* param1);
	friend void QTabWidget_QBaseShowEvent(QTabWidget* self, QShowEvent* param1);
	friend void QTabWidget_ResizeEvent(QTabWidget* self, QResizeEvent* param1);
	friend void QTabWidget_QBaseResizeEvent(QTabWidget* self, QResizeEvent* param1);
	friend void QTabWidget_KeyPressEvent(QTabWidget* self, QKeyEvent* param1);
	friend void QTabWidget_QBaseKeyPressEvent(QTabWidget* self, QKeyEvent* param1);
	friend void QTabWidget_PaintEvent(QTabWidget* self, QPaintEvent* param1);
	friend void QTabWidget_QBasePaintEvent(QTabWidget* self, QPaintEvent* param1);
	friend void QTabWidget_ChangeEvent(QTabWidget* self, QEvent* param1);
	friend void QTabWidget_QBaseChangeEvent(QTabWidget* self, QEvent* param1);
	friend bool QTabWidget_Event(QTabWidget* self, QEvent* param1);
	friend bool QTabWidget_QBaseEvent(QTabWidget* self, QEvent* param1);
	friend void QTabWidget_InitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option);
	friend void QTabWidget_QBaseInitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option);
	friend void QTabWidget_SetTabBar(QTabWidget* self, QTabBar* tabBar);
	friend void QTabWidget_QBaseSetTabBar(QTabWidget* self, QTabBar* tabBar);
};

#endif


