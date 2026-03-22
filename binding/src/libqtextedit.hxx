#pragma once
#ifndef QTEXTEDIT_H_C_LIBVIRTUAL
#define QTEXTEDIT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTextEdit so that we can call protected methods
class VirtualQTextEdit final : public QTextEdit {

public:
	// Virtual class boolean flag
	bool isVirtualQTextEdit= true;

	// Virtual class public types (including callbacks)
	using QTextEdit_LoadResource_Callback = QVariant* (*)(QTextEdit*, int, const QUrl*);
	using QTextEdit_InputMethodQuery_Callback = QVariant* (*)(const QTextEdit*, int);
	using QTextEdit_Event_Callback = bool (*)(QTextEdit*, QEvent*);
	using QTextEdit_TimerEvent_Callback = void (*)(QTextEdit*, QTimerEvent*);
	using QTextEdit_KeyPressEvent_Callback = void (*)(QTextEdit*, QKeyEvent*);
	using QTextEdit_KeyReleaseEvent_Callback = void (*)(QTextEdit*, QKeyEvent*);
	using QTextEdit_ResizeEvent_Callback = void (*)(QTextEdit*, QResizeEvent*);
	using QTextEdit_PaintEvent_Callback = void (*)(QTextEdit*, QPaintEvent*);
	using QTextEdit_MousePressEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
	using QTextEdit_MouseMoveEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
	using QTextEdit_MouseReleaseEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
	using QTextEdit_MouseDoubleClickEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
	using QTextEdit_FocusNextPrevChild_Callback = bool (*)(QTextEdit*, bool);
	using QTextEdit_ContextMenuEvent_Callback = void (*)(QTextEdit*, QContextMenuEvent*);
	using QTextEdit_DragEnterEvent_Callback = void (*)(QTextEdit*, QDragEnterEvent*);
	using QTextEdit_DragLeaveEvent_Callback = void (*)(QTextEdit*, QDragLeaveEvent*);
	using QTextEdit_DragMoveEvent_Callback = void (*)(QTextEdit*, QDragMoveEvent*);
	using QTextEdit_DropEvent_Callback = void (*)(QTextEdit*, QDropEvent*);
	using QTextEdit_FocusInEvent_Callback = void (*)(QTextEdit*, QFocusEvent*);
	using QTextEdit_FocusOutEvent_Callback = void (*)(QTextEdit*, QFocusEvent*);
	using QTextEdit_ShowEvent_Callback = void (*)(QTextEdit*, QShowEvent*);
	using QTextEdit_ChangeEvent_Callback = void (*)(QTextEdit*, QEvent*);
	using QTextEdit_WheelEvent_Callback = void (*)(QTextEdit*, QWheelEvent*);
	using QTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
	using QTextEdit_CanInsertFromMimeData_Callback = bool (*)(const QTextEdit*, const QMimeData*);
	using QTextEdit_InsertFromMimeData_Callback = void (*)(QTextEdit*, const QMimeData*);
	using QTextEdit_InputMethodEvent_Callback = void (*)(QTextEdit*, QInputMethodEvent*);
	using QTextEdit_ScrollContentsBy_Callback = void (*)(QTextEdit*, int, int);
	using QTextEdit_DoSetTextCursor_Callback = void (*)(QTextEdit*, const QTextCursor*);
	using QTextEdit_ZoomInF_Callback = void (*)(QTextEdit*, float);

protected:
	// Instance callback storage
	mutable QTextEdit_LoadResource_Callback qtextedit_loadresource_callback = nullptr;
	mutable QTextEdit_InputMethodQuery_Callback qtextedit_inputmethodquery_callback = nullptr;
	mutable QTextEdit_Event_Callback qtextedit_event_callback = nullptr;
	mutable QTextEdit_TimerEvent_Callback qtextedit_timerevent_callback = nullptr;
	mutable QTextEdit_KeyPressEvent_Callback qtextedit_keypressevent_callback = nullptr;
	mutable QTextEdit_KeyReleaseEvent_Callback qtextedit_keyreleaseevent_callback = nullptr;
	mutable QTextEdit_ResizeEvent_Callback qtextedit_resizeevent_callback = nullptr;
	mutable QTextEdit_PaintEvent_Callback qtextedit_paintevent_callback = nullptr;
	mutable QTextEdit_MousePressEvent_Callback qtextedit_mousepressevent_callback = nullptr;
	mutable QTextEdit_MouseMoveEvent_Callback qtextedit_mousemoveevent_callback = nullptr;
	mutable QTextEdit_MouseReleaseEvent_Callback qtextedit_mousereleaseevent_callback = nullptr;
	mutable QTextEdit_MouseDoubleClickEvent_Callback qtextedit_mousedoubleclickevent_callback = nullptr;
	mutable QTextEdit_FocusNextPrevChild_Callback qtextedit_focusnextprevchild_callback = nullptr;
	mutable QTextEdit_ContextMenuEvent_Callback qtextedit_contextmenuevent_callback = nullptr;
	mutable QTextEdit_DragEnterEvent_Callback qtextedit_dragenterevent_callback = nullptr;
	mutable QTextEdit_DragLeaveEvent_Callback qtextedit_dragleaveevent_callback = nullptr;
	mutable QTextEdit_DragMoveEvent_Callback qtextedit_dragmoveevent_callback = nullptr;
	mutable QTextEdit_DropEvent_Callback qtextedit_dropevent_callback = nullptr;
	mutable QTextEdit_FocusInEvent_Callback qtextedit_focusinevent_callback = nullptr;
	mutable QTextEdit_FocusOutEvent_Callback qtextedit_focusoutevent_callback = nullptr;
	mutable QTextEdit_ShowEvent_Callback qtextedit_showevent_callback = nullptr;
	mutable QTextEdit_ChangeEvent_Callback qtextedit_changeevent_callback = nullptr;
	mutable QTextEdit_WheelEvent_Callback qtextedit_wheelevent_callback = nullptr;
	mutable QTextEdit_CreateMimeDataFromSelection_Callback qtextedit_createmimedatafromselection_callback = nullptr;
	mutable QTextEdit_CanInsertFromMimeData_Callback qtextedit_caninsertfrommimedata_callback = nullptr;
	mutable QTextEdit_InsertFromMimeData_Callback qtextedit_insertfrommimedata_callback = nullptr;
	mutable QTextEdit_InputMethodEvent_Callback qtextedit_inputmethodevent_callback = nullptr;
	mutable QTextEdit_ScrollContentsBy_Callback qtextedit_scrollcontentsby_callback = nullptr;
	mutable QTextEdit_DoSetTextCursor_Callback qtextedit_dosettextcursor_callback = nullptr;
	mutable QTextEdit_ZoomInF_Callback qtextedit_zoominf_callback = nullptr;

	// Instance base flags
    mutable bool qtextedit_loadresource_isbase = false;
    mutable bool qtextedit_inputmethodquery_isbase = false;
    mutable bool qtextedit_event_isbase = false;
    mutable bool qtextedit_timerevent_isbase = false;
    mutable bool qtextedit_keypressevent_isbase = false;
    mutable bool qtextedit_keyreleaseevent_isbase = false;
    mutable bool qtextedit_resizeevent_isbase = false;
    mutable bool qtextedit_paintevent_isbase = false;
    mutable bool qtextedit_mousepressevent_isbase = false;
    mutable bool qtextedit_mousemoveevent_isbase = false;
    mutable bool qtextedit_mousereleaseevent_isbase = false;
    mutable bool qtextedit_mousedoubleclickevent_isbase = false;
    mutable bool qtextedit_focusnextprevchild_isbase = false;
    mutable bool qtextedit_contextmenuevent_isbase = false;
    mutable bool qtextedit_dragenterevent_isbase = false;
    mutable bool qtextedit_dragleaveevent_isbase = false;
    mutable bool qtextedit_dragmoveevent_isbase = false;
    mutable bool qtextedit_dropevent_isbase = false;
    mutable bool qtextedit_focusinevent_isbase = false;
    mutable bool qtextedit_focusoutevent_isbase = false;
    mutable bool qtextedit_showevent_isbase = false;
    mutable bool qtextedit_changeevent_isbase = false;
    mutable bool qtextedit_wheelevent_isbase = false;
    mutable bool qtextedit_createmimedatafromselection_isbase = false;
    mutable bool qtextedit_caninsertfrommimedata_isbase = false;
    mutable bool qtextedit_insertfrommimedata_isbase = false;
    mutable bool qtextedit_inputmethodevent_isbase = false;
    mutable bool qtextedit_scrollcontentsby_isbase = false;
    mutable bool qtextedit_dosettextcursor_isbase = false;
    mutable bool qtextedit_zoominf_isbase = false;

public:
	VirtualQTextEdit(QWidget* parent): QTextEdit(parent) {};
	VirtualQTextEdit(): QTextEdit() {};
	VirtualQTextEdit(const QString& text): QTextEdit(text) {};
	VirtualQTextEdit(const QString& text, QWidget* parent): QTextEdit(text, parent) {};

	~VirtualQTextEdit() {
		qtextedit_loadresource_callback = nullptr;
		qtextedit_inputmethodquery_callback = nullptr;
		qtextedit_event_callback = nullptr;
		qtextedit_timerevent_callback = nullptr;
		qtextedit_keypressevent_callback = nullptr;
		qtextedit_keyreleaseevent_callback = nullptr;
		qtextedit_resizeevent_callback = nullptr;
		qtextedit_paintevent_callback = nullptr;
		qtextedit_mousepressevent_callback = nullptr;
		qtextedit_mousemoveevent_callback = nullptr;
		qtextedit_mousereleaseevent_callback = nullptr;
		qtextedit_mousedoubleclickevent_callback = nullptr;
		qtextedit_focusnextprevchild_callback = nullptr;
		qtextedit_contextmenuevent_callback = nullptr;
		qtextedit_dragenterevent_callback = nullptr;
		qtextedit_dragleaveevent_callback = nullptr;
		qtextedit_dragmoveevent_callback = nullptr;
		qtextedit_dropevent_callback = nullptr;
		qtextedit_focusinevent_callback = nullptr;
		qtextedit_focusoutevent_callback = nullptr;
		qtextedit_showevent_callback = nullptr;
		qtextedit_changeevent_callback = nullptr;
		qtextedit_wheelevent_callback = nullptr;
		qtextedit_createmimedatafromselection_callback = nullptr;
		qtextedit_caninsertfrommimedata_callback = nullptr;
		qtextedit_insertfrommimedata_callback = nullptr;
		qtextedit_inputmethodevent_callback = nullptr;
		qtextedit_scrollcontentsby_callback = nullptr;
		qtextedit_dosettextcursor_callback = nullptr;
		qtextedit_zoominf_callback = nullptr;
	}

// Callback setters
	inline void setQTextEdit_LoadResource_Callback(QTextEdit_LoadResource_Callback cb) const { qtextedit_loadresource_callback = cb; }
	inline void setQTextEdit_InputMethodQuery_Callback(QTextEdit_InputMethodQuery_Callback cb) const { qtextedit_inputmethodquery_callback = cb; }
	inline void setQTextEdit_Event_Callback(QTextEdit_Event_Callback cb) const { qtextedit_event_callback = cb; }
	inline void setQTextEdit_TimerEvent_Callback(QTextEdit_TimerEvent_Callback cb) const { qtextedit_timerevent_callback = cb; }
	inline void setQTextEdit_KeyPressEvent_Callback(QTextEdit_KeyPressEvent_Callback cb) const { qtextedit_keypressevent_callback = cb; }
	inline void setQTextEdit_KeyReleaseEvent_Callback(QTextEdit_KeyReleaseEvent_Callback cb) const { qtextedit_keyreleaseevent_callback = cb; }
	inline void setQTextEdit_ResizeEvent_Callback(QTextEdit_ResizeEvent_Callback cb) const { qtextedit_resizeevent_callback = cb; }
	inline void setQTextEdit_PaintEvent_Callback(QTextEdit_PaintEvent_Callback cb) const { qtextedit_paintevent_callback = cb; }
	inline void setQTextEdit_MousePressEvent_Callback(QTextEdit_MousePressEvent_Callback cb) const { qtextedit_mousepressevent_callback = cb; }
	inline void setQTextEdit_MouseMoveEvent_Callback(QTextEdit_MouseMoveEvent_Callback cb) const { qtextedit_mousemoveevent_callback = cb; }
	inline void setQTextEdit_MouseReleaseEvent_Callback(QTextEdit_MouseReleaseEvent_Callback cb) const { qtextedit_mousereleaseevent_callback = cb; }
	inline void setQTextEdit_MouseDoubleClickEvent_Callback(QTextEdit_MouseDoubleClickEvent_Callback cb) const { qtextedit_mousedoubleclickevent_callback = cb; }
	inline void setQTextEdit_FocusNextPrevChild_Callback(QTextEdit_FocusNextPrevChild_Callback cb) const { qtextedit_focusnextprevchild_callback = cb; }
	inline void setQTextEdit_ContextMenuEvent_Callback(QTextEdit_ContextMenuEvent_Callback cb) const { qtextedit_contextmenuevent_callback = cb; }
	inline void setQTextEdit_DragEnterEvent_Callback(QTextEdit_DragEnterEvent_Callback cb) const { qtextedit_dragenterevent_callback = cb; }
	inline void setQTextEdit_DragLeaveEvent_Callback(QTextEdit_DragLeaveEvent_Callback cb) const { qtextedit_dragleaveevent_callback = cb; }
	inline void setQTextEdit_DragMoveEvent_Callback(QTextEdit_DragMoveEvent_Callback cb) const { qtextedit_dragmoveevent_callback = cb; }
	inline void setQTextEdit_DropEvent_Callback(QTextEdit_DropEvent_Callback cb) const { qtextedit_dropevent_callback = cb; }
	inline void setQTextEdit_FocusInEvent_Callback(QTextEdit_FocusInEvent_Callback cb) const { qtextedit_focusinevent_callback = cb; }
	inline void setQTextEdit_FocusOutEvent_Callback(QTextEdit_FocusOutEvent_Callback cb) const { qtextedit_focusoutevent_callback = cb; }
	inline void setQTextEdit_ShowEvent_Callback(QTextEdit_ShowEvent_Callback cb) const { qtextedit_showevent_callback = cb; }
	inline void setQTextEdit_ChangeEvent_Callback(QTextEdit_ChangeEvent_Callback cb) const { qtextedit_changeevent_callback = cb; }
	inline void setQTextEdit_WheelEvent_Callback(QTextEdit_WheelEvent_Callback cb) const { qtextedit_wheelevent_callback = cb; }
	inline void setQTextEdit_CreateMimeDataFromSelection_Callback(QTextEdit_CreateMimeDataFromSelection_Callback cb) const { qtextedit_createmimedatafromselection_callback = cb; }
	inline void setQTextEdit_CanInsertFromMimeData_Callback(QTextEdit_CanInsertFromMimeData_Callback cb) const { qtextedit_caninsertfrommimedata_callback = cb; }
	inline void setQTextEdit_InsertFromMimeData_Callback(QTextEdit_InsertFromMimeData_Callback cb) const { qtextedit_insertfrommimedata_callback = cb; }
	inline void setQTextEdit_InputMethodEvent_Callback(QTextEdit_InputMethodEvent_Callback cb) const { qtextedit_inputmethodevent_callback = cb; }
	inline void setQTextEdit_ScrollContentsBy_Callback(QTextEdit_ScrollContentsBy_Callback cb) const { qtextedit_scrollcontentsby_callback = cb; }
	inline void setQTextEdit_DoSetTextCursor_Callback(QTextEdit_DoSetTextCursor_Callback cb) const { qtextedit_dosettextcursor_callback = cb; }
	inline void setQTextEdit_ZoomInF_Callback(QTextEdit_ZoomInF_Callback cb) const { qtextedit_zoominf_callback = cb; }

// Base flag setters
	inline void setQTextEdit_LoadResource_IsBase(bool value) const { qtextedit_loadresource_isbase = value; }
	inline void setQTextEdit_InputMethodQuery_IsBase(bool value) const { qtextedit_inputmethodquery_isbase = value; }
	inline void setQTextEdit_Event_IsBase(bool value) const { qtextedit_event_isbase = value; }
	inline void setQTextEdit_TimerEvent_IsBase(bool value) const { qtextedit_timerevent_isbase = value; }
	inline void setQTextEdit_KeyPressEvent_IsBase(bool value) const { qtextedit_keypressevent_isbase = value; }
	inline void setQTextEdit_KeyReleaseEvent_IsBase(bool value) const { qtextedit_keyreleaseevent_isbase = value; }
	inline void setQTextEdit_ResizeEvent_IsBase(bool value) const { qtextedit_resizeevent_isbase = value; }
	inline void setQTextEdit_PaintEvent_IsBase(bool value) const { qtextedit_paintevent_isbase = value; }
	inline void setQTextEdit_MousePressEvent_IsBase(bool value) const { qtextedit_mousepressevent_isbase = value; }
	inline void setQTextEdit_MouseMoveEvent_IsBase(bool value) const { qtextedit_mousemoveevent_isbase = value; }
	inline void setQTextEdit_MouseReleaseEvent_IsBase(bool value) const { qtextedit_mousereleaseevent_isbase = value; }
	inline void setQTextEdit_MouseDoubleClickEvent_IsBase(bool value) const { qtextedit_mousedoubleclickevent_isbase = value; }
	inline void setQTextEdit_FocusNextPrevChild_IsBase(bool value) const { qtextedit_focusnextprevchild_isbase = value; }
	inline void setQTextEdit_ContextMenuEvent_IsBase(bool value) const { qtextedit_contextmenuevent_isbase = value; }
	inline void setQTextEdit_DragEnterEvent_IsBase(bool value) const { qtextedit_dragenterevent_isbase = value; }
	inline void setQTextEdit_DragLeaveEvent_IsBase(bool value) const { qtextedit_dragleaveevent_isbase = value; }
	inline void setQTextEdit_DragMoveEvent_IsBase(bool value) const { qtextedit_dragmoveevent_isbase = value; }
	inline void setQTextEdit_DropEvent_IsBase(bool value) const { qtextedit_dropevent_isbase = value; }
	inline void setQTextEdit_FocusInEvent_IsBase(bool value) const { qtextedit_focusinevent_isbase = value; }
	inline void setQTextEdit_FocusOutEvent_IsBase(bool value) const { qtextedit_focusoutevent_isbase = value; }
	inline void setQTextEdit_ShowEvent_IsBase(bool value) const { qtextedit_showevent_isbase = value; }
	inline void setQTextEdit_ChangeEvent_IsBase(bool value) const { qtextedit_changeevent_isbase = value; }
	inline void setQTextEdit_WheelEvent_IsBase(bool value) const { qtextedit_wheelevent_isbase = value; }
	inline void setQTextEdit_CreateMimeDataFromSelection_IsBase(bool value) const { qtextedit_createmimedatafromselection_isbase = value; }
	inline void setQTextEdit_CanInsertFromMimeData_IsBase(bool value) const { qtextedit_caninsertfrommimedata_isbase = value; }
	inline void setQTextEdit_InsertFromMimeData_IsBase(bool value) const { qtextedit_insertfrommimedata_isbase = value; }
	inline void setQTextEdit_InputMethodEvent_IsBase(bool value) const { qtextedit_inputmethodevent_isbase = value; }
	inline void setQTextEdit_ScrollContentsBy_IsBase(bool value) const { qtextedit_scrollcontentsby_isbase = value; }
	inline void setQTextEdit_DoSetTextCursor_IsBase(bool value) const { qtextedit_dosettextcursor_isbase = value; }
	inline void setQTextEdit_ZoomInF_IsBase(bool value) const { qtextedit_zoominf_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QVariant loadResource(int typeVal, const QUrl& name) override {
		if (qtextedit_loadresource_isbase) {
			qtextedit_loadresource_isbase = false;
			return QTextEdit::loadResource(typeVal, name);
		} else if (qtextedit_loadresource_callback != nullptr) {
			int cbval1 = typeVal;
			const QUrl* cbval2 = (const QUrl*)&name;
			QVariant* callback_ret = qtextedit_loadresource_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QTextEdit::loadResource(typeVal, name);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
		if (qtextedit_inputmethodquery_isbase) {
			qtextedit_inputmethodquery_isbase = false;
			return QTextEdit::inputMethodQuery(property);
		} else if (qtextedit_inputmethodquery_callback != nullptr) {
			int cbval1 = static_cast<int>(property);
			QVariant* callback_ret = qtextedit_inputmethodquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTextEdit::inputMethodQuery(property);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qtextedit_event_isbase) {
			qtextedit_event_isbase = false;
			return QTextEdit::event(e);
		} else if (qtextedit_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qtextedit_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTextEdit::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* e) override {
		if (qtextedit_timerevent_isbase) {
			qtextedit_timerevent_isbase = false;
			QTextEdit::timerEvent(e);
		} else if (qtextedit_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = e;
			qtextedit_timerevent_callback(this, cbval1);
		} else {
			QTextEdit::timerEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (qtextedit_keypressevent_isbase) {
			qtextedit_keypressevent_isbase = false;
			QTextEdit::keyPressEvent(e);
		} else if (qtextedit_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = e;
			qtextedit_keypressevent_callback(this, cbval1);
		} else {
			QTextEdit::keyPressEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (qtextedit_keyreleaseevent_isbase) {
			qtextedit_keyreleaseevent_isbase = false;
			QTextEdit::keyReleaseEvent(e);
		} else if (qtextedit_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = e;
			qtextedit_keyreleaseevent_callback(this, cbval1);
		} else {
			QTextEdit::keyReleaseEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* e) override {
		if (qtextedit_resizeevent_isbase) {
			qtextedit_resizeevent_isbase = false;
			QTextEdit::resizeEvent(e);
		} else if (qtextedit_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = e;
			qtextedit_resizeevent_callback(this, cbval1);
		} else {
			QTextEdit::resizeEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* e) override {
		if (qtextedit_paintevent_isbase) {
			qtextedit_paintevent_isbase = false;
			QTextEdit::paintEvent(e);
		} else if (qtextedit_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = e;
			qtextedit_paintevent_callback(this, cbval1);
		} else {
			QTextEdit::paintEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (qtextedit_mousepressevent_isbase) {
			qtextedit_mousepressevent_isbase = false;
			QTextEdit::mousePressEvent(e);
		} else if (qtextedit_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qtextedit_mousepressevent_callback(this, cbval1);
		} else {
			QTextEdit::mousePressEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (qtextedit_mousemoveevent_isbase) {
			qtextedit_mousemoveevent_isbase = false;
			QTextEdit::mouseMoveEvent(e);
		} else if (qtextedit_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qtextedit_mousemoveevent_callback(this, cbval1);
		} else {
			QTextEdit::mouseMoveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (qtextedit_mousereleaseevent_isbase) {
			qtextedit_mousereleaseevent_isbase = false;
			QTextEdit::mouseReleaseEvent(e);
		} else if (qtextedit_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qtextedit_mousereleaseevent_callback(this, cbval1);
		} else {
			QTextEdit::mouseReleaseEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (qtextedit_mousedoubleclickevent_isbase) {
			qtextedit_mousedoubleclickevent_isbase = false;
			QTextEdit::mouseDoubleClickEvent(e);
		} else if (qtextedit_mousedoubleclickevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qtextedit_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QTextEdit::mouseDoubleClickEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool focusNextPrevChild(bool next) override {
		if (qtextedit_focusnextprevchild_isbase) {
			qtextedit_focusnextprevchild_isbase = false;
			return QTextEdit::focusNextPrevChild(next);
		} else if (qtextedit_focusnextprevchild_callback != nullptr) {
			bool cbval1 = next;
			bool callback_ret = qtextedit_focusnextprevchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTextEdit::focusNextPrevChild(next);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (qtextedit_contextmenuevent_isbase) {
			qtextedit_contextmenuevent_isbase = false;
			QTextEdit::contextMenuEvent(e);
		} else if (qtextedit_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = e;
			qtextedit_contextmenuevent_callback(this, cbval1);
		} else {
			QTextEdit::contextMenuEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (qtextedit_dragenterevent_isbase) {
			qtextedit_dragenterevent_isbase = false;
			QTextEdit::dragEnterEvent(e);
		} else if (qtextedit_dragenterevent_callback != nullptr) {
			QDragEnterEvent* cbval1 = e;
			qtextedit_dragenterevent_callback(this, cbval1);
		} else {
			QTextEdit::dragEnterEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (qtextedit_dragleaveevent_isbase) {
			qtextedit_dragleaveevent_isbase = false;
			QTextEdit::dragLeaveEvent(e);
		} else if (qtextedit_dragleaveevent_callback != nullptr) {
			QDragLeaveEvent* cbval1 = e;
			qtextedit_dragleaveevent_callback(this, cbval1);
		} else {
			QTextEdit::dragLeaveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (qtextedit_dragmoveevent_isbase) {
			qtextedit_dragmoveevent_isbase = false;
			QTextEdit::dragMoveEvent(e);
		} else if (qtextedit_dragmoveevent_callback != nullptr) {
			QDragMoveEvent* cbval1 = e;
			qtextedit_dragmoveevent_callback(this, cbval1);
		} else {
			QTextEdit::dragMoveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QDropEvent* e) override {
		if (qtextedit_dropevent_isbase) {
			qtextedit_dropevent_isbase = false;
			QTextEdit::dropEvent(e);
		} else if (qtextedit_dropevent_callback != nullptr) {
			QDropEvent* cbval1 = e;
			qtextedit_dropevent_callback(this, cbval1);
		} else {
			QTextEdit::dropEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* e) override {
		if (qtextedit_focusinevent_isbase) {
			qtextedit_focusinevent_isbase = false;
			QTextEdit::focusInEvent(e);
		} else if (qtextedit_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = e;
			qtextedit_focusinevent_callback(this, cbval1);
		} else {
			QTextEdit::focusInEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (qtextedit_focusoutevent_isbase) {
			qtextedit_focusoutevent_isbase = false;
			QTextEdit::focusOutEvent(e);
		} else if (qtextedit_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = e;
			qtextedit_focusoutevent_callback(this, cbval1);
		} else {
			QTextEdit::focusOutEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* param1) override {
		if (qtextedit_showevent_isbase) {
			qtextedit_showevent_isbase = false;
			QTextEdit::showEvent(param1);
		} else if (qtextedit_showevent_callback != nullptr) {
			QShowEvent* cbval1 = param1;
			qtextedit_showevent_callback(this, cbval1);
		} else {
			QTextEdit::showEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* e) override {
		if (qtextedit_changeevent_isbase) {
			qtextedit_changeevent_isbase = false;
			QTextEdit::changeEvent(e);
		} else if (qtextedit_changeevent_callback != nullptr) {
			QEvent* cbval1 = e;
			qtextedit_changeevent_callback(this, cbval1);
		} else {
			QTextEdit::changeEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* e) override {
		if (qtextedit_wheelevent_isbase) {
			qtextedit_wheelevent_isbase = false;
			QTextEdit::wheelEvent(e);
		} else if (qtextedit_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = e;
			qtextedit_wheelevent_callback(this, cbval1);
		} else {
			QTextEdit::wheelEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMimeData* createMimeDataFromSelection() const override {
		if (qtextedit_createmimedatafromselection_isbase) {
			qtextedit_createmimedatafromselection_isbase = false;
			return QTextEdit::createMimeDataFromSelection();
		} else if (qtextedit_createmimedatafromselection_callback != nullptr) {
			QMimeData* callback_ret = qtextedit_createmimedatafromselection_callback();
			return callback_ret;
		} else {
			return QTextEdit::createMimeDataFromSelection();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (qtextedit_caninsertfrommimedata_isbase) {
			qtextedit_caninsertfrommimedata_isbase = false;
			return QTextEdit::canInsertFromMimeData(source);
		} else if (qtextedit_caninsertfrommimedata_callback != nullptr) {
			const QMimeData* cbval1 = source;
			bool callback_ret = qtextedit_caninsertfrommimedata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTextEdit::canInsertFromMimeData(source);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void insertFromMimeData(const QMimeData* source) override {
		if (qtextedit_insertfrommimedata_isbase) {
			qtextedit_insertfrommimedata_isbase = false;
			QTextEdit::insertFromMimeData(source);
		} else if (qtextedit_insertfrommimedata_callback != nullptr) {
			const QMimeData* cbval1 = source;
			qtextedit_insertfrommimedata_callback(this, cbval1);
		} else {
			QTextEdit::insertFromMimeData(source);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (qtextedit_inputmethodevent_isbase) {
			qtextedit_inputmethodevent_isbase = false;
			QTextEdit::inputMethodEvent(param1);
		} else if (qtextedit_inputmethodevent_callback != nullptr) {
			QInputMethodEvent* cbval1 = param1;
			qtextedit_inputmethodevent_callback(this, cbval1);
		} else {
			QTextEdit::inputMethodEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollContentsBy(int dx, int dy) override {
		if (qtextedit_scrollcontentsby_isbase) {
			qtextedit_scrollcontentsby_isbase = false;
			QTextEdit::scrollContentsBy(dx, dy);
		} else if (qtextedit_scrollcontentsby_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qtextedit_scrollcontentsby_callback(this, cbval1, cbval2);
		} else {
			QTextEdit::scrollContentsBy(dx, dy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void doSetTextCursor(const QTextCursor& cursor) override {
		if (qtextedit_dosettextcursor_isbase) {
			qtextedit_dosettextcursor_isbase = false;
			QTextEdit::doSetTextCursor(cursor);
		} else if (qtextedit_dosettextcursor_callback != nullptr) {
			const QTextCursor* cbval1 = (const QTextCursor*)&cursor;
			qtextedit_dosettextcursor_callback(this, cbval1);
		} else {
			QTextEdit::doSetTextCursor(cursor);
		}
	}

	// Virtual method for C ABI access and custom callback
	void zoomInF(float range) {
		if (qtextedit_zoominf_isbase) {
			qtextedit_zoominf_isbase = false;
			QTextEdit::zoomInF(range);
		} else if (qtextedit_zoominf_callback != nullptr) {
			float cbval1 = range;
			qtextedit_zoominf_callback(this, cbval1);
		} else {
			QTextEdit::zoomInF(range);
		}
	}

	// Friend functions
	friend bool QTextEdit_Event(QTextEdit* self, QEvent* e);
	friend bool QTextEdit_QBaseEvent(QTextEdit* self, QEvent* e);
	friend void QTextEdit_TimerEvent(QTextEdit* self, QTimerEvent* e);
	friend void QTextEdit_QBaseTimerEvent(QTextEdit* self, QTimerEvent* e);
	friend void QTextEdit_KeyPressEvent(QTextEdit* self, QKeyEvent* e);
	friend void QTextEdit_QBaseKeyPressEvent(QTextEdit* self, QKeyEvent* e);
	friend void QTextEdit_KeyReleaseEvent(QTextEdit* self, QKeyEvent* e);
	friend void QTextEdit_QBaseKeyReleaseEvent(QTextEdit* self, QKeyEvent* e);
	friend void QTextEdit_ResizeEvent(QTextEdit* self, QResizeEvent* e);
	friend void QTextEdit_QBaseResizeEvent(QTextEdit* self, QResizeEvent* e);
	friend void QTextEdit_PaintEvent(QTextEdit* self, QPaintEvent* e);
	friend void QTextEdit_QBasePaintEvent(QTextEdit* self, QPaintEvent* e);
	friend void QTextEdit_MousePressEvent(QTextEdit* self, QMouseEvent* e);
	friend void QTextEdit_QBaseMousePressEvent(QTextEdit* self, QMouseEvent* e);
	friend void QTextEdit_MouseMoveEvent(QTextEdit* self, QMouseEvent* e);
	friend void QTextEdit_QBaseMouseMoveEvent(QTextEdit* self, QMouseEvent* e);
	friend void QTextEdit_MouseReleaseEvent(QTextEdit* self, QMouseEvent* e);
	friend void QTextEdit_QBaseMouseReleaseEvent(QTextEdit* self, QMouseEvent* e);
	friend void QTextEdit_MouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e);
	friend void QTextEdit_QBaseMouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e);
	friend bool QTextEdit_FocusNextPrevChild(QTextEdit* self, bool next);
	friend bool QTextEdit_QBaseFocusNextPrevChild(QTextEdit* self, bool next);
	friend void QTextEdit_ContextMenuEvent(QTextEdit* self, QContextMenuEvent* e);
	friend void QTextEdit_QBaseContextMenuEvent(QTextEdit* self, QContextMenuEvent* e);
	friend void QTextEdit_DragEnterEvent(QTextEdit* self, QDragEnterEvent* e);
	friend void QTextEdit_QBaseDragEnterEvent(QTextEdit* self, QDragEnterEvent* e);
	friend void QTextEdit_DragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e);
	friend void QTextEdit_QBaseDragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e);
	friend void QTextEdit_DragMoveEvent(QTextEdit* self, QDragMoveEvent* e);
	friend void QTextEdit_QBaseDragMoveEvent(QTextEdit* self, QDragMoveEvent* e);
	friend void QTextEdit_DropEvent(QTextEdit* self, QDropEvent* e);
	friend void QTextEdit_QBaseDropEvent(QTextEdit* self, QDropEvent* e);
	friend void QTextEdit_FocusInEvent(QTextEdit* self, QFocusEvent* e);
	friend void QTextEdit_QBaseFocusInEvent(QTextEdit* self, QFocusEvent* e);
	friend void QTextEdit_FocusOutEvent(QTextEdit* self, QFocusEvent* e);
	friend void QTextEdit_QBaseFocusOutEvent(QTextEdit* self, QFocusEvent* e);
	friend void QTextEdit_ShowEvent(QTextEdit* self, QShowEvent* param1);
	friend void QTextEdit_QBaseShowEvent(QTextEdit* self, QShowEvent* param1);
	friend void QTextEdit_ChangeEvent(QTextEdit* self, QEvent* e);
	friend void QTextEdit_QBaseChangeEvent(QTextEdit* self, QEvent* e);
	friend void QTextEdit_WheelEvent(QTextEdit* self, QWheelEvent* e);
	friend void QTextEdit_QBaseWheelEvent(QTextEdit* self, QWheelEvent* e);
	friend QMimeData* QTextEdit_CreateMimeDataFromSelection(const QTextEdit* self);
	friend QMimeData* QTextEdit_QBaseCreateMimeDataFromSelection(const QTextEdit* self);
	friend bool QTextEdit_CanInsertFromMimeData(const QTextEdit* self, const QMimeData* source);
	friend bool QTextEdit_QBaseCanInsertFromMimeData(const QTextEdit* self, const QMimeData* source);
	friend void QTextEdit_InsertFromMimeData(QTextEdit* self, const QMimeData* source);
	friend void QTextEdit_QBaseInsertFromMimeData(QTextEdit* self, const QMimeData* source);
	friend void QTextEdit_InputMethodEvent(QTextEdit* self, QInputMethodEvent* param1);
	friend void QTextEdit_QBaseInputMethodEvent(QTextEdit* self, QInputMethodEvent* param1);
	friend void QTextEdit_ScrollContentsBy(QTextEdit* self, int dx, int dy);
	friend void QTextEdit_QBaseScrollContentsBy(QTextEdit* self, int dx, int dy);
	friend void QTextEdit_DoSetTextCursor(QTextEdit* self, const QTextCursor* cursor);
	friend void QTextEdit_QBaseDoSetTextCursor(QTextEdit* self, const QTextCursor* cursor);
	friend void QTextEdit_ZoomInF(QTextEdit* self, float range);
	friend void QTextEdit_QBaseZoomInF(QTextEdit* self, float range);
};

#endif


