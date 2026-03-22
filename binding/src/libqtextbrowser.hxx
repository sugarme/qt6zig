#pragma once
#ifndef QTEXTBROWSER_H_C_LIBVIRTUAL
#define QTEXTBROWSER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTextBrowser so that we can call protected methods
class VirtualQTextBrowser final : public QTextBrowser {

public:
	// Virtual class boolean flag
	bool isVirtualQTextBrowser= true;

	// Virtual class public types (including callbacks)
	using QTextBrowser_LoadResource_Callback = QVariant* (*)(QTextBrowser*, int, const QUrl*);
	using QTextBrowser_Backward_Callback = void (*)();
	using QTextBrowser_Forward_Callback = void (*)();
	using QTextBrowser_Home_Callback = void (*)();
	using QTextBrowser_Reload_Callback = void (*)();
	using QTextBrowser_Event_Callback = bool (*)(QTextBrowser*, QEvent*);
	using QTextBrowser_KeyPressEvent_Callback = void (*)(QTextBrowser*, QKeyEvent*);
	using QTextBrowser_MouseMoveEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
	using QTextBrowser_MousePressEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
	using QTextBrowser_MouseReleaseEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
	using QTextBrowser_FocusOutEvent_Callback = void (*)(QTextBrowser*, QFocusEvent*);
	using QTextBrowser_FocusNextPrevChild_Callback = bool (*)(QTextBrowser*, bool);
	using QTextBrowser_PaintEvent_Callback = void (*)(QTextBrowser*, QPaintEvent*);
	using QTextBrowser_DoSetSource_Callback = void (*)(QTextBrowser*, const QUrl*, int);

protected:
	// Instance callback storage
	mutable QTextBrowser_LoadResource_Callback qtextbrowser_loadresource_callback = nullptr;
	mutable QTextBrowser_Backward_Callback qtextbrowser_backward_callback = nullptr;
	mutable QTextBrowser_Forward_Callback qtextbrowser_forward_callback = nullptr;
	mutable QTextBrowser_Home_Callback qtextbrowser_home_callback = nullptr;
	mutable QTextBrowser_Reload_Callback qtextbrowser_reload_callback = nullptr;
	mutable QTextBrowser_Event_Callback qtextbrowser_event_callback = nullptr;
	mutable QTextBrowser_KeyPressEvent_Callback qtextbrowser_keypressevent_callback = nullptr;
	mutable QTextBrowser_MouseMoveEvent_Callback qtextbrowser_mousemoveevent_callback = nullptr;
	mutable QTextBrowser_MousePressEvent_Callback qtextbrowser_mousepressevent_callback = nullptr;
	mutable QTextBrowser_MouseReleaseEvent_Callback qtextbrowser_mousereleaseevent_callback = nullptr;
	mutable QTextBrowser_FocusOutEvent_Callback qtextbrowser_focusoutevent_callback = nullptr;
	mutable QTextBrowser_FocusNextPrevChild_Callback qtextbrowser_focusnextprevchild_callback = nullptr;
	mutable QTextBrowser_PaintEvent_Callback qtextbrowser_paintevent_callback = nullptr;
	mutable QTextBrowser_DoSetSource_Callback qtextbrowser_dosetsource_callback = nullptr;

	// Instance base flags
    mutable bool qtextbrowser_loadresource_isbase = false;
    mutable bool qtextbrowser_backward_isbase = false;
    mutable bool qtextbrowser_forward_isbase = false;
    mutable bool qtextbrowser_home_isbase = false;
    mutable bool qtextbrowser_reload_isbase = false;
    mutable bool qtextbrowser_event_isbase = false;
    mutable bool qtextbrowser_keypressevent_isbase = false;
    mutable bool qtextbrowser_mousemoveevent_isbase = false;
    mutable bool qtextbrowser_mousepressevent_isbase = false;
    mutable bool qtextbrowser_mousereleaseevent_isbase = false;
    mutable bool qtextbrowser_focusoutevent_isbase = false;
    mutable bool qtextbrowser_focusnextprevchild_isbase = false;
    mutable bool qtextbrowser_paintevent_isbase = false;
    mutable bool qtextbrowser_dosetsource_isbase = false;

public:
	VirtualQTextBrowser(QWidget* parent): QTextBrowser(parent) {};
	VirtualQTextBrowser(): QTextBrowser() {};

	~VirtualQTextBrowser() {
		qtextbrowser_loadresource_callback = nullptr;
		qtextbrowser_backward_callback = nullptr;
		qtextbrowser_forward_callback = nullptr;
		qtextbrowser_home_callback = nullptr;
		qtextbrowser_reload_callback = nullptr;
		qtextbrowser_event_callback = nullptr;
		qtextbrowser_keypressevent_callback = nullptr;
		qtextbrowser_mousemoveevent_callback = nullptr;
		qtextbrowser_mousepressevent_callback = nullptr;
		qtextbrowser_mousereleaseevent_callback = nullptr;
		qtextbrowser_focusoutevent_callback = nullptr;
		qtextbrowser_focusnextprevchild_callback = nullptr;
		qtextbrowser_paintevent_callback = nullptr;
		qtextbrowser_dosetsource_callback = nullptr;
	}

// Callback setters
	inline void setQTextBrowser_LoadResource_Callback(QTextBrowser_LoadResource_Callback cb) const { qtextbrowser_loadresource_callback = cb; }
	inline void setQTextBrowser_Backward_Callback(QTextBrowser_Backward_Callback cb) const { qtextbrowser_backward_callback = cb; }
	inline void setQTextBrowser_Forward_Callback(QTextBrowser_Forward_Callback cb) const { qtextbrowser_forward_callback = cb; }
	inline void setQTextBrowser_Home_Callback(QTextBrowser_Home_Callback cb) const { qtextbrowser_home_callback = cb; }
	inline void setQTextBrowser_Reload_Callback(QTextBrowser_Reload_Callback cb) const { qtextbrowser_reload_callback = cb; }
	inline void setQTextBrowser_Event_Callback(QTextBrowser_Event_Callback cb) const { qtextbrowser_event_callback = cb; }
	inline void setQTextBrowser_KeyPressEvent_Callback(QTextBrowser_KeyPressEvent_Callback cb) const { qtextbrowser_keypressevent_callback = cb; }
	inline void setQTextBrowser_MouseMoveEvent_Callback(QTextBrowser_MouseMoveEvent_Callback cb) const { qtextbrowser_mousemoveevent_callback = cb; }
	inline void setQTextBrowser_MousePressEvent_Callback(QTextBrowser_MousePressEvent_Callback cb) const { qtextbrowser_mousepressevent_callback = cb; }
	inline void setQTextBrowser_MouseReleaseEvent_Callback(QTextBrowser_MouseReleaseEvent_Callback cb) const { qtextbrowser_mousereleaseevent_callback = cb; }
	inline void setQTextBrowser_FocusOutEvent_Callback(QTextBrowser_FocusOutEvent_Callback cb) const { qtextbrowser_focusoutevent_callback = cb; }
	inline void setQTextBrowser_FocusNextPrevChild_Callback(QTextBrowser_FocusNextPrevChild_Callback cb) const { qtextbrowser_focusnextprevchild_callback = cb; }
	inline void setQTextBrowser_PaintEvent_Callback(QTextBrowser_PaintEvent_Callback cb) const { qtextbrowser_paintevent_callback = cb; }
	inline void setQTextBrowser_DoSetSource_Callback(QTextBrowser_DoSetSource_Callback cb) const { qtextbrowser_dosetsource_callback = cb; }

// Base flag setters
	inline void setQTextBrowser_LoadResource_IsBase(bool value) const { qtextbrowser_loadresource_isbase = value; }
	inline void setQTextBrowser_Backward_IsBase(bool value) const { qtextbrowser_backward_isbase = value; }
	inline void setQTextBrowser_Forward_IsBase(bool value) const { qtextbrowser_forward_isbase = value; }
	inline void setQTextBrowser_Home_IsBase(bool value) const { qtextbrowser_home_isbase = value; }
	inline void setQTextBrowser_Reload_IsBase(bool value) const { qtextbrowser_reload_isbase = value; }
	inline void setQTextBrowser_Event_IsBase(bool value) const { qtextbrowser_event_isbase = value; }
	inline void setQTextBrowser_KeyPressEvent_IsBase(bool value) const { qtextbrowser_keypressevent_isbase = value; }
	inline void setQTextBrowser_MouseMoveEvent_IsBase(bool value) const { qtextbrowser_mousemoveevent_isbase = value; }
	inline void setQTextBrowser_MousePressEvent_IsBase(bool value) const { qtextbrowser_mousepressevent_isbase = value; }
	inline void setQTextBrowser_MouseReleaseEvent_IsBase(bool value) const { qtextbrowser_mousereleaseevent_isbase = value; }
	inline void setQTextBrowser_FocusOutEvent_IsBase(bool value) const { qtextbrowser_focusoutevent_isbase = value; }
	inline void setQTextBrowser_FocusNextPrevChild_IsBase(bool value) const { qtextbrowser_focusnextprevchild_isbase = value; }
	inline void setQTextBrowser_PaintEvent_IsBase(bool value) const { qtextbrowser_paintevent_isbase = value; }
	inline void setQTextBrowser_DoSetSource_IsBase(bool value) const { qtextbrowser_dosetsource_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QVariant loadResource(int typeVal, const QUrl& name) override {
		if (qtextbrowser_loadresource_isbase) {
			qtextbrowser_loadresource_isbase = false;
			return QTextBrowser::loadResource(typeVal, name);
		} else if (qtextbrowser_loadresource_callback != nullptr) {
			int cbval1 = typeVal;
			const QUrl* cbval2 = (const QUrl*)&name;
			QVariant* callback_ret = qtextbrowser_loadresource_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QTextBrowser::loadResource(typeVal, name);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void backward() override {
		if (qtextbrowser_backward_isbase) {
			qtextbrowser_backward_isbase = false;
			QTextBrowser::backward();
		} else if (qtextbrowser_backward_callback != nullptr) {
			qtextbrowser_backward_callback();
		} else {
			QTextBrowser::backward();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void forward() override {
		if (qtextbrowser_forward_isbase) {
			qtextbrowser_forward_isbase = false;
			QTextBrowser::forward();
		} else if (qtextbrowser_forward_callback != nullptr) {
			qtextbrowser_forward_callback();
		} else {
			QTextBrowser::forward();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void home() override {
		if (qtextbrowser_home_isbase) {
			qtextbrowser_home_isbase = false;
			QTextBrowser::home();
		} else if (qtextbrowser_home_callback != nullptr) {
			qtextbrowser_home_callback();
		} else {
			QTextBrowser::home();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void reload() override {
		if (qtextbrowser_reload_isbase) {
			qtextbrowser_reload_isbase = false;
			QTextBrowser::reload();
		} else if (qtextbrowser_reload_callback != nullptr) {
			qtextbrowser_reload_callback();
		} else {
			QTextBrowser::reload();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qtextbrowser_event_isbase) {
			qtextbrowser_event_isbase = false;
			return QTextBrowser::event(e);
		} else if (qtextbrowser_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qtextbrowser_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTextBrowser::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (qtextbrowser_keypressevent_isbase) {
			qtextbrowser_keypressevent_isbase = false;
			QTextBrowser::keyPressEvent(ev);
		} else if (qtextbrowser_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = ev;
			qtextbrowser_keypressevent_callback(this, cbval1);
		} else {
			QTextBrowser::keyPressEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* ev) override {
		if (qtextbrowser_mousemoveevent_isbase) {
			qtextbrowser_mousemoveevent_isbase = false;
			QTextBrowser::mouseMoveEvent(ev);
		} else if (qtextbrowser_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = ev;
			qtextbrowser_mousemoveevent_callback(this, cbval1);
		} else {
			QTextBrowser::mouseMoveEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* ev) override {
		if (qtextbrowser_mousepressevent_isbase) {
			qtextbrowser_mousepressevent_isbase = false;
			QTextBrowser::mousePressEvent(ev);
		} else if (qtextbrowser_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = ev;
			qtextbrowser_mousepressevent_callback(this, cbval1);
		} else {
			QTextBrowser::mousePressEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* ev) override {
		if (qtextbrowser_mousereleaseevent_isbase) {
			qtextbrowser_mousereleaseevent_isbase = false;
			QTextBrowser::mouseReleaseEvent(ev);
		} else if (qtextbrowser_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = ev;
			qtextbrowser_mousereleaseevent_callback(this, cbval1);
		} else {
			QTextBrowser::mouseReleaseEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* ev) override {
		if (qtextbrowser_focusoutevent_isbase) {
			qtextbrowser_focusoutevent_isbase = false;
			QTextBrowser::focusOutEvent(ev);
		} else if (qtextbrowser_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = ev;
			qtextbrowser_focusoutevent_callback(this, cbval1);
		} else {
			QTextBrowser::focusOutEvent(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool focusNextPrevChild(bool next) override {
		if (qtextbrowser_focusnextprevchild_isbase) {
			qtextbrowser_focusnextprevchild_isbase = false;
			return QTextBrowser::focusNextPrevChild(next);
		} else if (qtextbrowser_focusnextprevchild_callback != nullptr) {
			bool cbval1 = next;
			bool callback_ret = qtextbrowser_focusnextprevchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTextBrowser::focusNextPrevChild(next);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* e) override {
		if (qtextbrowser_paintevent_isbase) {
			qtextbrowser_paintevent_isbase = false;
			QTextBrowser::paintEvent(e);
		} else if (qtextbrowser_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = e;
			qtextbrowser_paintevent_callback(this, cbval1);
		} else {
			QTextBrowser::paintEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void doSetSource(const QUrl& name, QTextDocument::ResourceType typeVal) override {
		if (qtextbrowser_dosetsource_isbase) {
			qtextbrowser_dosetsource_isbase = false;
			QTextBrowser::doSetSource(name, typeVal);
		} else if (qtextbrowser_dosetsource_callback != nullptr) {
			const QUrl* cbval1 = (const QUrl*)&name;
			int cbval2 = static_cast<int>(typeVal);
			qtextbrowser_dosetsource_callback(this, cbval1, cbval2);
		} else {
			QTextBrowser::doSetSource(name, typeVal);
		}
	}

	// Friend functions
	friend bool QTextBrowser_Event(QTextBrowser* self, QEvent* e);
	friend bool QTextBrowser_QBaseEvent(QTextBrowser* self, QEvent* e);
	friend void QTextBrowser_KeyPressEvent(QTextBrowser* self, QKeyEvent* ev);
	friend void QTextBrowser_QBaseKeyPressEvent(QTextBrowser* self, QKeyEvent* ev);
	friend void QTextBrowser_MouseMoveEvent(QTextBrowser* self, QMouseEvent* ev);
	friend void QTextBrowser_QBaseMouseMoveEvent(QTextBrowser* self, QMouseEvent* ev);
	friend void QTextBrowser_MousePressEvent(QTextBrowser* self, QMouseEvent* ev);
	friend void QTextBrowser_QBaseMousePressEvent(QTextBrowser* self, QMouseEvent* ev);
	friend void QTextBrowser_MouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev);
	friend void QTextBrowser_QBaseMouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev);
	friend void QTextBrowser_FocusOutEvent(QTextBrowser* self, QFocusEvent* ev);
	friend void QTextBrowser_QBaseFocusOutEvent(QTextBrowser* self, QFocusEvent* ev);
	friend bool QTextBrowser_FocusNextPrevChild(QTextBrowser* self, bool next);
	friend bool QTextBrowser_QBaseFocusNextPrevChild(QTextBrowser* self, bool next);
	friend void QTextBrowser_PaintEvent(QTextBrowser* self, QPaintEvent* e);
	friend void QTextBrowser_QBasePaintEvent(QTextBrowser* self, QPaintEvent* e);
	friend void QTextBrowser_DoSetSource(QTextBrowser* self, const QUrl* name, int typeVal);
	friend void QTextBrowser_QBaseDoSetSource(QTextBrowser* self, const QUrl* name, int typeVal);
};

#endif


