#pragma once
#ifndef QPLAINTEXTEDIT_H_C_LIBVIRTUAL
#define QPLAINTEXTEDIT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QPlainTextEdit so that we can call protected methods
class VirtualQPlainTextEdit final : public QPlainTextEdit {

public:
	// Virtual class boolean flag
	bool isVirtualQPlainTextEdit= true;

	// Virtual class public types (including callbacks)
	using QPlainTextEdit_LoadResource_Callback = QVariant* (*)(QPlainTextEdit*, int, const QUrl*);
	using QPlainTextEdit_InputMethodQuery_Callback = QVariant* (*)(const QPlainTextEdit*, int);
	using QPlainTextEdit_Event_Callback = bool (*)(QPlainTextEdit*, QEvent*);
	using QPlainTextEdit_TimerEvent_Callback = void (*)(QPlainTextEdit*, QTimerEvent*);
	using QPlainTextEdit_KeyPressEvent_Callback = void (*)(QPlainTextEdit*, QKeyEvent*);
	using QPlainTextEdit_KeyReleaseEvent_Callback = void (*)(QPlainTextEdit*, QKeyEvent*);
	using QPlainTextEdit_ResizeEvent_Callback = void (*)(QPlainTextEdit*, QResizeEvent*);
	using QPlainTextEdit_PaintEvent_Callback = void (*)(QPlainTextEdit*, QPaintEvent*);
	using QPlainTextEdit_MousePressEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
	using QPlainTextEdit_MouseMoveEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
	using QPlainTextEdit_MouseReleaseEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
	using QPlainTextEdit_MouseDoubleClickEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
	using QPlainTextEdit_FocusNextPrevChild_Callback = bool (*)(QPlainTextEdit*, bool);
	using QPlainTextEdit_ContextMenuEvent_Callback = void (*)(QPlainTextEdit*, QContextMenuEvent*);
	using QPlainTextEdit_DragEnterEvent_Callback = void (*)(QPlainTextEdit*, QDragEnterEvent*);
	using QPlainTextEdit_DragLeaveEvent_Callback = void (*)(QPlainTextEdit*, QDragLeaveEvent*);
	using QPlainTextEdit_DragMoveEvent_Callback = void (*)(QPlainTextEdit*, QDragMoveEvent*);
	using QPlainTextEdit_DropEvent_Callback = void (*)(QPlainTextEdit*, QDropEvent*);
	using QPlainTextEdit_FocusInEvent_Callback = void (*)(QPlainTextEdit*, QFocusEvent*);
	using QPlainTextEdit_FocusOutEvent_Callback = void (*)(QPlainTextEdit*, QFocusEvent*);
	using QPlainTextEdit_ShowEvent_Callback = void (*)(QPlainTextEdit*, QShowEvent*);
	using QPlainTextEdit_ChangeEvent_Callback = void (*)(QPlainTextEdit*, QEvent*);
	using QPlainTextEdit_WheelEvent_Callback = void (*)(QPlainTextEdit*, QWheelEvent*);
	using QPlainTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
	using QPlainTextEdit_CanInsertFromMimeData_Callback = bool (*)(const QPlainTextEdit*, const QMimeData*);
	using QPlainTextEdit_InsertFromMimeData_Callback = void (*)(QPlainTextEdit*, const QMimeData*);
	using QPlainTextEdit_InputMethodEvent_Callback = void (*)(QPlainTextEdit*, QInputMethodEvent*);
	using QPlainTextEdit_ScrollContentsBy_Callback = void (*)(QPlainTextEdit*, int, int);
	using QPlainTextEdit_DoSetTextCursor_Callback = void (*)(QPlainTextEdit*, const QTextCursor*);
	using QPlainTextEdit_FirstVisibleBlock_Callback = QTextBlock* (*)();
	using QPlainTextEdit_ContentOffset_Callback = QPointF* (*)();
	using QPlainTextEdit_BlockBoundingRect_Callback = QRectF* (*)(const QPlainTextEdit*, const QTextBlock*);
	using QPlainTextEdit_BlockBoundingGeometry_Callback = QRectF* (*)(const QPlainTextEdit*, const QTextBlock*);
	using QPlainTextEdit_GetPaintContext_Callback = QAbstractTextDocumentLayout__PaintContext* (*)();
	using QPlainTextEdit_ZoomInF_Callback = void (*)(QPlainTextEdit*, float);

protected:
	// Instance callback storage
	mutable QPlainTextEdit_LoadResource_Callback qplaintextedit_loadresource_callback = nullptr;
	mutable QPlainTextEdit_InputMethodQuery_Callback qplaintextedit_inputmethodquery_callback = nullptr;
	mutable QPlainTextEdit_Event_Callback qplaintextedit_event_callback = nullptr;
	mutable QPlainTextEdit_TimerEvent_Callback qplaintextedit_timerevent_callback = nullptr;
	mutable QPlainTextEdit_KeyPressEvent_Callback qplaintextedit_keypressevent_callback = nullptr;
	mutable QPlainTextEdit_KeyReleaseEvent_Callback qplaintextedit_keyreleaseevent_callback = nullptr;
	mutable QPlainTextEdit_ResizeEvent_Callback qplaintextedit_resizeevent_callback = nullptr;
	mutable QPlainTextEdit_PaintEvent_Callback qplaintextedit_paintevent_callback = nullptr;
	mutable QPlainTextEdit_MousePressEvent_Callback qplaintextedit_mousepressevent_callback = nullptr;
	mutable QPlainTextEdit_MouseMoveEvent_Callback qplaintextedit_mousemoveevent_callback = nullptr;
	mutable QPlainTextEdit_MouseReleaseEvent_Callback qplaintextedit_mousereleaseevent_callback = nullptr;
	mutable QPlainTextEdit_MouseDoubleClickEvent_Callback qplaintextedit_mousedoubleclickevent_callback = nullptr;
	mutable QPlainTextEdit_FocusNextPrevChild_Callback qplaintextedit_focusnextprevchild_callback = nullptr;
	mutable QPlainTextEdit_ContextMenuEvent_Callback qplaintextedit_contextmenuevent_callback = nullptr;
	mutable QPlainTextEdit_DragEnterEvent_Callback qplaintextedit_dragenterevent_callback = nullptr;
	mutable QPlainTextEdit_DragLeaveEvent_Callback qplaintextedit_dragleaveevent_callback = nullptr;
	mutable QPlainTextEdit_DragMoveEvent_Callback qplaintextedit_dragmoveevent_callback = nullptr;
	mutable QPlainTextEdit_DropEvent_Callback qplaintextedit_dropevent_callback = nullptr;
	mutable QPlainTextEdit_FocusInEvent_Callback qplaintextedit_focusinevent_callback = nullptr;
	mutable QPlainTextEdit_FocusOutEvent_Callback qplaintextedit_focusoutevent_callback = nullptr;
	mutable QPlainTextEdit_ShowEvent_Callback qplaintextedit_showevent_callback = nullptr;
	mutable QPlainTextEdit_ChangeEvent_Callback qplaintextedit_changeevent_callback = nullptr;
	mutable QPlainTextEdit_WheelEvent_Callback qplaintextedit_wheelevent_callback = nullptr;
	mutable QPlainTextEdit_CreateMimeDataFromSelection_Callback qplaintextedit_createmimedatafromselection_callback = nullptr;
	mutable QPlainTextEdit_CanInsertFromMimeData_Callback qplaintextedit_caninsertfrommimedata_callback = nullptr;
	mutable QPlainTextEdit_InsertFromMimeData_Callback qplaintextedit_insertfrommimedata_callback = nullptr;
	mutable QPlainTextEdit_InputMethodEvent_Callback qplaintextedit_inputmethodevent_callback = nullptr;
	mutable QPlainTextEdit_ScrollContentsBy_Callback qplaintextedit_scrollcontentsby_callback = nullptr;
	mutable QPlainTextEdit_DoSetTextCursor_Callback qplaintextedit_dosettextcursor_callback = nullptr;
	mutable QPlainTextEdit_FirstVisibleBlock_Callback qplaintextedit_firstvisibleblock_callback = nullptr;
	mutable QPlainTextEdit_ContentOffset_Callback qplaintextedit_contentoffset_callback = nullptr;
	mutable QPlainTextEdit_BlockBoundingRect_Callback qplaintextedit_blockboundingrect_callback = nullptr;
	mutable QPlainTextEdit_BlockBoundingGeometry_Callback qplaintextedit_blockboundinggeometry_callback = nullptr;
	mutable QPlainTextEdit_GetPaintContext_Callback qplaintextedit_getpaintcontext_callback = nullptr;
	mutable QPlainTextEdit_ZoomInF_Callback qplaintextedit_zoominf_callback = nullptr;

	// Instance base flags
    mutable bool qplaintextedit_loadresource_isbase = false;
    mutable bool qplaintextedit_inputmethodquery_isbase = false;
    mutable bool qplaintextedit_event_isbase = false;
    mutable bool qplaintextedit_timerevent_isbase = false;
    mutable bool qplaintextedit_keypressevent_isbase = false;
    mutable bool qplaintextedit_keyreleaseevent_isbase = false;
    mutable bool qplaintextedit_resizeevent_isbase = false;
    mutable bool qplaintextedit_paintevent_isbase = false;
    mutable bool qplaintextedit_mousepressevent_isbase = false;
    mutable bool qplaintextedit_mousemoveevent_isbase = false;
    mutable bool qplaintextedit_mousereleaseevent_isbase = false;
    mutable bool qplaintextedit_mousedoubleclickevent_isbase = false;
    mutable bool qplaintextedit_focusnextprevchild_isbase = false;
    mutable bool qplaintextedit_contextmenuevent_isbase = false;
    mutable bool qplaintextedit_dragenterevent_isbase = false;
    mutable bool qplaintextedit_dragleaveevent_isbase = false;
    mutable bool qplaintextedit_dragmoveevent_isbase = false;
    mutable bool qplaintextedit_dropevent_isbase = false;
    mutable bool qplaintextedit_focusinevent_isbase = false;
    mutable bool qplaintextedit_focusoutevent_isbase = false;
    mutable bool qplaintextedit_showevent_isbase = false;
    mutable bool qplaintextedit_changeevent_isbase = false;
    mutable bool qplaintextedit_wheelevent_isbase = false;
    mutable bool qplaintextedit_createmimedatafromselection_isbase = false;
    mutable bool qplaintextedit_caninsertfrommimedata_isbase = false;
    mutable bool qplaintextedit_insertfrommimedata_isbase = false;
    mutable bool qplaintextedit_inputmethodevent_isbase = false;
    mutable bool qplaintextedit_scrollcontentsby_isbase = false;
    mutable bool qplaintextedit_dosettextcursor_isbase = false;
    mutable bool qplaintextedit_firstvisibleblock_isbase = false;
    mutable bool qplaintextedit_contentoffset_isbase = false;
    mutable bool qplaintextedit_blockboundingrect_isbase = false;
    mutable bool qplaintextedit_blockboundinggeometry_isbase = false;
    mutable bool qplaintextedit_getpaintcontext_isbase = false;
    mutable bool qplaintextedit_zoominf_isbase = false;

public:
	VirtualQPlainTextEdit(QWidget* parent): QPlainTextEdit(parent) {};
	VirtualQPlainTextEdit(): QPlainTextEdit() {};
	VirtualQPlainTextEdit(const QString& text): QPlainTextEdit(text) {};
	VirtualQPlainTextEdit(const QString& text, QWidget* parent): QPlainTextEdit(text, parent) {};

	~VirtualQPlainTextEdit() {
		qplaintextedit_loadresource_callback = nullptr;
		qplaintextedit_inputmethodquery_callback = nullptr;
		qplaintextedit_event_callback = nullptr;
		qplaintextedit_timerevent_callback = nullptr;
		qplaintextedit_keypressevent_callback = nullptr;
		qplaintextedit_keyreleaseevent_callback = nullptr;
		qplaintextedit_resizeevent_callback = nullptr;
		qplaintextedit_paintevent_callback = nullptr;
		qplaintextedit_mousepressevent_callback = nullptr;
		qplaintextedit_mousemoveevent_callback = nullptr;
		qplaintextedit_mousereleaseevent_callback = nullptr;
		qplaintextedit_mousedoubleclickevent_callback = nullptr;
		qplaintextedit_focusnextprevchild_callback = nullptr;
		qplaintextedit_contextmenuevent_callback = nullptr;
		qplaintextedit_dragenterevent_callback = nullptr;
		qplaintextedit_dragleaveevent_callback = nullptr;
		qplaintextedit_dragmoveevent_callback = nullptr;
		qplaintextedit_dropevent_callback = nullptr;
		qplaintextedit_focusinevent_callback = nullptr;
		qplaintextedit_focusoutevent_callback = nullptr;
		qplaintextedit_showevent_callback = nullptr;
		qplaintextedit_changeevent_callback = nullptr;
		qplaintextedit_wheelevent_callback = nullptr;
		qplaintextedit_createmimedatafromselection_callback = nullptr;
		qplaintextedit_caninsertfrommimedata_callback = nullptr;
		qplaintextedit_insertfrommimedata_callback = nullptr;
		qplaintextedit_inputmethodevent_callback = nullptr;
		qplaintextedit_scrollcontentsby_callback = nullptr;
		qplaintextedit_dosettextcursor_callback = nullptr;
		qplaintextedit_firstvisibleblock_callback = nullptr;
		qplaintextedit_contentoffset_callback = nullptr;
		qplaintextedit_blockboundingrect_callback = nullptr;
		qplaintextedit_blockboundinggeometry_callback = nullptr;
		qplaintextedit_getpaintcontext_callback = nullptr;
		qplaintextedit_zoominf_callback = nullptr;
	}

// Callback setters
	inline void setQPlainTextEdit_LoadResource_Callback(QPlainTextEdit_LoadResource_Callback cb) const { qplaintextedit_loadresource_callback = cb; }
	inline void setQPlainTextEdit_InputMethodQuery_Callback(QPlainTextEdit_InputMethodQuery_Callback cb) const { qplaintextedit_inputmethodquery_callback = cb; }
	inline void setQPlainTextEdit_Event_Callback(QPlainTextEdit_Event_Callback cb) const { qplaintextedit_event_callback = cb; }
	inline void setQPlainTextEdit_TimerEvent_Callback(QPlainTextEdit_TimerEvent_Callback cb) const { qplaintextedit_timerevent_callback = cb; }
	inline void setQPlainTextEdit_KeyPressEvent_Callback(QPlainTextEdit_KeyPressEvent_Callback cb) const { qplaintextedit_keypressevent_callback = cb; }
	inline void setQPlainTextEdit_KeyReleaseEvent_Callback(QPlainTextEdit_KeyReleaseEvent_Callback cb) const { qplaintextedit_keyreleaseevent_callback = cb; }
	inline void setQPlainTextEdit_ResizeEvent_Callback(QPlainTextEdit_ResizeEvent_Callback cb) const { qplaintextedit_resizeevent_callback = cb; }
	inline void setQPlainTextEdit_PaintEvent_Callback(QPlainTextEdit_PaintEvent_Callback cb) const { qplaintextedit_paintevent_callback = cb; }
	inline void setQPlainTextEdit_MousePressEvent_Callback(QPlainTextEdit_MousePressEvent_Callback cb) const { qplaintextedit_mousepressevent_callback = cb; }
	inline void setQPlainTextEdit_MouseMoveEvent_Callback(QPlainTextEdit_MouseMoveEvent_Callback cb) const { qplaintextedit_mousemoveevent_callback = cb; }
	inline void setQPlainTextEdit_MouseReleaseEvent_Callback(QPlainTextEdit_MouseReleaseEvent_Callback cb) const { qplaintextedit_mousereleaseevent_callback = cb; }
	inline void setQPlainTextEdit_MouseDoubleClickEvent_Callback(QPlainTextEdit_MouseDoubleClickEvent_Callback cb) const { qplaintextedit_mousedoubleclickevent_callback = cb; }
	inline void setQPlainTextEdit_FocusNextPrevChild_Callback(QPlainTextEdit_FocusNextPrevChild_Callback cb) const { qplaintextedit_focusnextprevchild_callback = cb; }
	inline void setQPlainTextEdit_ContextMenuEvent_Callback(QPlainTextEdit_ContextMenuEvent_Callback cb) const { qplaintextedit_contextmenuevent_callback = cb; }
	inline void setQPlainTextEdit_DragEnterEvent_Callback(QPlainTextEdit_DragEnterEvent_Callback cb) const { qplaintextedit_dragenterevent_callback = cb; }
	inline void setQPlainTextEdit_DragLeaveEvent_Callback(QPlainTextEdit_DragLeaveEvent_Callback cb) const { qplaintextedit_dragleaveevent_callback = cb; }
	inline void setQPlainTextEdit_DragMoveEvent_Callback(QPlainTextEdit_DragMoveEvent_Callback cb) const { qplaintextedit_dragmoveevent_callback = cb; }
	inline void setQPlainTextEdit_DropEvent_Callback(QPlainTextEdit_DropEvent_Callback cb) const { qplaintextedit_dropevent_callback = cb; }
	inline void setQPlainTextEdit_FocusInEvent_Callback(QPlainTextEdit_FocusInEvent_Callback cb) const { qplaintextedit_focusinevent_callback = cb; }
	inline void setQPlainTextEdit_FocusOutEvent_Callback(QPlainTextEdit_FocusOutEvent_Callback cb) const { qplaintextedit_focusoutevent_callback = cb; }
	inline void setQPlainTextEdit_ShowEvent_Callback(QPlainTextEdit_ShowEvent_Callback cb) const { qplaintextedit_showevent_callback = cb; }
	inline void setQPlainTextEdit_ChangeEvent_Callback(QPlainTextEdit_ChangeEvent_Callback cb) const { qplaintextedit_changeevent_callback = cb; }
	inline void setQPlainTextEdit_WheelEvent_Callback(QPlainTextEdit_WheelEvent_Callback cb) const { qplaintextedit_wheelevent_callback = cb; }
	inline void setQPlainTextEdit_CreateMimeDataFromSelection_Callback(QPlainTextEdit_CreateMimeDataFromSelection_Callback cb) const { qplaintextedit_createmimedatafromselection_callback = cb; }
	inline void setQPlainTextEdit_CanInsertFromMimeData_Callback(QPlainTextEdit_CanInsertFromMimeData_Callback cb) const { qplaintextedit_caninsertfrommimedata_callback = cb; }
	inline void setQPlainTextEdit_InsertFromMimeData_Callback(QPlainTextEdit_InsertFromMimeData_Callback cb) const { qplaintextedit_insertfrommimedata_callback = cb; }
	inline void setQPlainTextEdit_InputMethodEvent_Callback(QPlainTextEdit_InputMethodEvent_Callback cb) const { qplaintextedit_inputmethodevent_callback = cb; }
	inline void setQPlainTextEdit_ScrollContentsBy_Callback(QPlainTextEdit_ScrollContentsBy_Callback cb) const { qplaintextedit_scrollcontentsby_callback = cb; }
	inline void setQPlainTextEdit_DoSetTextCursor_Callback(QPlainTextEdit_DoSetTextCursor_Callback cb) const { qplaintextedit_dosettextcursor_callback = cb; }
	inline void setQPlainTextEdit_FirstVisibleBlock_Callback(QPlainTextEdit_FirstVisibleBlock_Callback cb) const { qplaintextedit_firstvisibleblock_callback = cb; }
	inline void setQPlainTextEdit_ContentOffset_Callback(QPlainTextEdit_ContentOffset_Callback cb) const { qplaintextedit_contentoffset_callback = cb; }
	inline void setQPlainTextEdit_BlockBoundingRect_Callback(QPlainTextEdit_BlockBoundingRect_Callback cb) const { qplaintextedit_blockboundingrect_callback = cb; }
	inline void setQPlainTextEdit_BlockBoundingGeometry_Callback(QPlainTextEdit_BlockBoundingGeometry_Callback cb) const { qplaintextedit_blockboundinggeometry_callback = cb; }
	inline void setQPlainTextEdit_GetPaintContext_Callback(QPlainTextEdit_GetPaintContext_Callback cb) const { qplaintextedit_getpaintcontext_callback = cb; }
	inline void setQPlainTextEdit_ZoomInF_Callback(QPlainTextEdit_ZoomInF_Callback cb) const { qplaintextedit_zoominf_callback = cb; }

// Base flag setters
	inline void setQPlainTextEdit_LoadResource_IsBase(bool value) const { qplaintextedit_loadresource_isbase = value; }
	inline void setQPlainTextEdit_InputMethodQuery_IsBase(bool value) const { qplaintextedit_inputmethodquery_isbase = value; }
	inline void setQPlainTextEdit_Event_IsBase(bool value) const { qplaintextedit_event_isbase = value; }
	inline void setQPlainTextEdit_TimerEvent_IsBase(bool value) const { qplaintextedit_timerevent_isbase = value; }
	inline void setQPlainTextEdit_KeyPressEvent_IsBase(bool value) const { qplaintextedit_keypressevent_isbase = value; }
	inline void setQPlainTextEdit_KeyReleaseEvent_IsBase(bool value) const { qplaintextedit_keyreleaseevent_isbase = value; }
	inline void setQPlainTextEdit_ResizeEvent_IsBase(bool value) const { qplaintextedit_resizeevent_isbase = value; }
	inline void setQPlainTextEdit_PaintEvent_IsBase(bool value) const { qplaintextedit_paintevent_isbase = value; }
	inline void setQPlainTextEdit_MousePressEvent_IsBase(bool value) const { qplaintextedit_mousepressevent_isbase = value; }
	inline void setQPlainTextEdit_MouseMoveEvent_IsBase(bool value) const { qplaintextedit_mousemoveevent_isbase = value; }
	inline void setQPlainTextEdit_MouseReleaseEvent_IsBase(bool value) const { qplaintextedit_mousereleaseevent_isbase = value; }
	inline void setQPlainTextEdit_MouseDoubleClickEvent_IsBase(bool value) const { qplaintextedit_mousedoubleclickevent_isbase = value; }
	inline void setQPlainTextEdit_FocusNextPrevChild_IsBase(bool value) const { qplaintextedit_focusnextprevchild_isbase = value; }
	inline void setQPlainTextEdit_ContextMenuEvent_IsBase(bool value) const { qplaintextedit_contextmenuevent_isbase = value; }
	inline void setQPlainTextEdit_DragEnterEvent_IsBase(bool value) const { qplaintextedit_dragenterevent_isbase = value; }
	inline void setQPlainTextEdit_DragLeaveEvent_IsBase(bool value) const { qplaintextedit_dragleaveevent_isbase = value; }
	inline void setQPlainTextEdit_DragMoveEvent_IsBase(bool value) const { qplaintextedit_dragmoveevent_isbase = value; }
	inline void setQPlainTextEdit_DropEvent_IsBase(bool value) const { qplaintextedit_dropevent_isbase = value; }
	inline void setQPlainTextEdit_FocusInEvent_IsBase(bool value) const { qplaintextedit_focusinevent_isbase = value; }
	inline void setQPlainTextEdit_FocusOutEvent_IsBase(bool value) const { qplaintextedit_focusoutevent_isbase = value; }
	inline void setQPlainTextEdit_ShowEvent_IsBase(bool value) const { qplaintextedit_showevent_isbase = value; }
	inline void setQPlainTextEdit_ChangeEvent_IsBase(bool value) const { qplaintextedit_changeevent_isbase = value; }
	inline void setQPlainTextEdit_WheelEvent_IsBase(bool value) const { qplaintextedit_wheelevent_isbase = value; }
	inline void setQPlainTextEdit_CreateMimeDataFromSelection_IsBase(bool value) const { qplaintextedit_createmimedatafromselection_isbase = value; }
	inline void setQPlainTextEdit_CanInsertFromMimeData_IsBase(bool value) const { qplaintextedit_caninsertfrommimedata_isbase = value; }
	inline void setQPlainTextEdit_InsertFromMimeData_IsBase(bool value) const { qplaintextedit_insertfrommimedata_isbase = value; }
	inline void setQPlainTextEdit_InputMethodEvent_IsBase(bool value) const { qplaintextedit_inputmethodevent_isbase = value; }
	inline void setQPlainTextEdit_ScrollContentsBy_IsBase(bool value) const { qplaintextedit_scrollcontentsby_isbase = value; }
	inline void setQPlainTextEdit_DoSetTextCursor_IsBase(bool value) const { qplaintextedit_dosettextcursor_isbase = value; }
	inline void setQPlainTextEdit_FirstVisibleBlock_IsBase(bool value) const { qplaintextedit_firstvisibleblock_isbase = value; }
	inline void setQPlainTextEdit_ContentOffset_IsBase(bool value) const { qplaintextedit_contentoffset_isbase = value; }
	inline void setQPlainTextEdit_BlockBoundingRect_IsBase(bool value) const { qplaintextedit_blockboundingrect_isbase = value; }
	inline void setQPlainTextEdit_BlockBoundingGeometry_IsBase(bool value) const { qplaintextedit_blockboundinggeometry_isbase = value; }
	inline void setQPlainTextEdit_GetPaintContext_IsBase(bool value) const { qplaintextedit_getpaintcontext_isbase = value; }
	inline void setQPlainTextEdit_ZoomInF_IsBase(bool value) const { qplaintextedit_zoominf_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QVariant loadResource(int typeVal, const QUrl& name) override {
		if (qplaintextedit_loadresource_isbase) {
			qplaintextedit_loadresource_isbase = false;
			return QPlainTextEdit::loadResource(typeVal, name);
		} else if (qplaintextedit_loadresource_callback != nullptr) {
			int cbval1 = typeVal;
			const QUrl* cbval2 = (const QUrl*)&name;
			QVariant* callback_ret = qplaintextedit_loadresource_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QPlainTextEdit::loadResource(typeVal, name);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
		if (qplaintextedit_inputmethodquery_isbase) {
			qplaintextedit_inputmethodquery_isbase = false;
			return QPlainTextEdit::inputMethodQuery(property);
		} else if (qplaintextedit_inputmethodquery_callback != nullptr) {
			int cbval1 = static_cast<int>(property);
			QVariant* callback_ret = qplaintextedit_inputmethodquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QPlainTextEdit::inputMethodQuery(property);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qplaintextedit_event_isbase) {
			qplaintextedit_event_isbase = false;
			return QPlainTextEdit::event(e);
		} else if (qplaintextedit_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qplaintextedit_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPlainTextEdit::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* e) override {
		if (qplaintextedit_timerevent_isbase) {
			qplaintextedit_timerevent_isbase = false;
			QPlainTextEdit::timerEvent(e);
		} else if (qplaintextedit_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = e;
			qplaintextedit_timerevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::timerEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (qplaintextedit_keypressevent_isbase) {
			qplaintextedit_keypressevent_isbase = false;
			QPlainTextEdit::keyPressEvent(e);
		} else if (qplaintextedit_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = e;
			qplaintextedit_keypressevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::keyPressEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (qplaintextedit_keyreleaseevent_isbase) {
			qplaintextedit_keyreleaseevent_isbase = false;
			QPlainTextEdit::keyReleaseEvent(e);
		} else if (qplaintextedit_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = e;
			qplaintextedit_keyreleaseevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::keyReleaseEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* e) override {
		if (qplaintextedit_resizeevent_isbase) {
			qplaintextedit_resizeevent_isbase = false;
			QPlainTextEdit::resizeEvent(e);
		} else if (qplaintextedit_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = e;
			qplaintextedit_resizeevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::resizeEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* e) override {
		if (qplaintextedit_paintevent_isbase) {
			qplaintextedit_paintevent_isbase = false;
			QPlainTextEdit::paintEvent(e);
		} else if (qplaintextedit_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = e;
			qplaintextedit_paintevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::paintEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (qplaintextedit_mousepressevent_isbase) {
			qplaintextedit_mousepressevent_isbase = false;
			QPlainTextEdit::mousePressEvent(e);
		} else if (qplaintextedit_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qplaintextedit_mousepressevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::mousePressEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (qplaintextedit_mousemoveevent_isbase) {
			qplaintextedit_mousemoveevent_isbase = false;
			QPlainTextEdit::mouseMoveEvent(e);
		} else if (qplaintextedit_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qplaintextedit_mousemoveevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::mouseMoveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (qplaintextedit_mousereleaseevent_isbase) {
			qplaintextedit_mousereleaseevent_isbase = false;
			QPlainTextEdit::mouseReleaseEvent(e);
		} else if (qplaintextedit_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qplaintextedit_mousereleaseevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::mouseReleaseEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (qplaintextedit_mousedoubleclickevent_isbase) {
			qplaintextedit_mousedoubleclickevent_isbase = false;
			QPlainTextEdit::mouseDoubleClickEvent(e);
		} else if (qplaintextedit_mousedoubleclickevent_callback != nullptr) {
			QMouseEvent* cbval1 = e;
			qplaintextedit_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::mouseDoubleClickEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool focusNextPrevChild(bool next) override {
		if (qplaintextedit_focusnextprevchild_isbase) {
			qplaintextedit_focusnextprevchild_isbase = false;
			return QPlainTextEdit::focusNextPrevChild(next);
		} else if (qplaintextedit_focusnextprevchild_callback != nullptr) {
			bool cbval1 = next;
			bool callback_ret = qplaintextedit_focusnextprevchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPlainTextEdit::focusNextPrevChild(next);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (qplaintextedit_contextmenuevent_isbase) {
			qplaintextedit_contextmenuevent_isbase = false;
			QPlainTextEdit::contextMenuEvent(e);
		} else if (qplaintextedit_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = e;
			qplaintextedit_contextmenuevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::contextMenuEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (qplaintextedit_dragenterevent_isbase) {
			qplaintextedit_dragenterevent_isbase = false;
			QPlainTextEdit::dragEnterEvent(e);
		} else if (qplaintextedit_dragenterevent_callback != nullptr) {
			QDragEnterEvent* cbval1 = e;
			qplaintextedit_dragenterevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::dragEnterEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (qplaintextedit_dragleaveevent_isbase) {
			qplaintextedit_dragleaveevent_isbase = false;
			QPlainTextEdit::dragLeaveEvent(e);
		} else if (qplaintextedit_dragleaveevent_callback != nullptr) {
			QDragLeaveEvent* cbval1 = e;
			qplaintextedit_dragleaveevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::dragLeaveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (qplaintextedit_dragmoveevent_isbase) {
			qplaintextedit_dragmoveevent_isbase = false;
			QPlainTextEdit::dragMoveEvent(e);
		} else if (qplaintextedit_dragmoveevent_callback != nullptr) {
			QDragMoveEvent* cbval1 = e;
			qplaintextedit_dragmoveevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::dragMoveEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QDropEvent* e) override {
		if (qplaintextedit_dropevent_isbase) {
			qplaintextedit_dropevent_isbase = false;
			QPlainTextEdit::dropEvent(e);
		} else if (qplaintextedit_dropevent_callback != nullptr) {
			QDropEvent* cbval1 = e;
			qplaintextedit_dropevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::dropEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* e) override {
		if (qplaintextedit_focusinevent_isbase) {
			qplaintextedit_focusinevent_isbase = false;
			QPlainTextEdit::focusInEvent(e);
		} else if (qplaintextedit_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = e;
			qplaintextedit_focusinevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::focusInEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (qplaintextedit_focusoutevent_isbase) {
			qplaintextedit_focusoutevent_isbase = false;
			QPlainTextEdit::focusOutEvent(e);
		} else if (qplaintextedit_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = e;
			qplaintextedit_focusoutevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::focusOutEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* param1) override {
		if (qplaintextedit_showevent_isbase) {
			qplaintextedit_showevent_isbase = false;
			QPlainTextEdit::showEvent(param1);
		} else if (qplaintextedit_showevent_callback != nullptr) {
			QShowEvent* cbval1 = param1;
			qplaintextedit_showevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::showEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* e) override {
		if (qplaintextedit_changeevent_isbase) {
			qplaintextedit_changeevent_isbase = false;
			QPlainTextEdit::changeEvent(e);
		} else if (qplaintextedit_changeevent_callback != nullptr) {
			QEvent* cbval1 = e;
			qplaintextedit_changeevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::changeEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* e) override {
		if (qplaintextedit_wheelevent_isbase) {
			qplaintextedit_wheelevent_isbase = false;
			QPlainTextEdit::wheelEvent(e);
		} else if (qplaintextedit_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = e;
			qplaintextedit_wheelevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::wheelEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMimeData* createMimeDataFromSelection() const override {
		if (qplaintextedit_createmimedatafromselection_isbase) {
			qplaintextedit_createmimedatafromselection_isbase = false;
			return QPlainTextEdit::createMimeDataFromSelection();
		} else if (qplaintextedit_createmimedatafromselection_callback != nullptr) {
			QMimeData* callback_ret = qplaintextedit_createmimedatafromselection_callback();
			return callback_ret;
		} else {
			return QPlainTextEdit::createMimeDataFromSelection();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (qplaintextedit_caninsertfrommimedata_isbase) {
			qplaintextedit_caninsertfrommimedata_isbase = false;
			return QPlainTextEdit::canInsertFromMimeData(source);
		} else if (qplaintextedit_caninsertfrommimedata_callback != nullptr) {
			const QMimeData* cbval1 = source;
			bool callback_ret = qplaintextedit_caninsertfrommimedata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QPlainTextEdit::canInsertFromMimeData(source);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void insertFromMimeData(const QMimeData* source) override {
		if (qplaintextedit_insertfrommimedata_isbase) {
			qplaintextedit_insertfrommimedata_isbase = false;
			QPlainTextEdit::insertFromMimeData(source);
		} else if (qplaintextedit_insertfrommimedata_callback != nullptr) {
			const QMimeData* cbval1 = source;
			qplaintextedit_insertfrommimedata_callback(this, cbval1);
		} else {
			QPlainTextEdit::insertFromMimeData(source);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (qplaintextedit_inputmethodevent_isbase) {
			qplaintextedit_inputmethodevent_isbase = false;
			QPlainTextEdit::inputMethodEvent(param1);
		} else if (qplaintextedit_inputmethodevent_callback != nullptr) {
			QInputMethodEvent* cbval1 = param1;
			qplaintextedit_inputmethodevent_callback(this, cbval1);
		} else {
			QPlainTextEdit::inputMethodEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollContentsBy(int dx, int dy) override {
		if (qplaintextedit_scrollcontentsby_isbase) {
			qplaintextedit_scrollcontentsby_isbase = false;
			QPlainTextEdit::scrollContentsBy(dx, dy);
		} else if (qplaintextedit_scrollcontentsby_callback != nullptr) {
			int cbval1 = dx;
			int cbval2 = dy;
			qplaintextedit_scrollcontentsby_callback(this, cbval1, cbval2);
		} else {
			QPlainTextEdit::scrollContentsBy(dx, dy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void doSetTextCursor(const QTextCursor& cursor) override {
		if (qplaintextedit_dosettextcursor_isbase) {
			qplaintextedit_dosettextcursor_isbase = false;
			QPlainTextEdit::doSetTextCursor(cursor);
		} else if (qplaintextedit_dosettextcursor_callback != nullptr) {
			const QTextCursor* cbval1 = (const QTextCursor*)&cursor;
			qplaintextedit_dosettextcursor_callback(this, cbval1);
		} else {
			QPlainTextEdit::doSetTextCursor(cursor);
		}
	}

	// Virtual method for C ABI access and custom callback
	QTextBlock firstVisibleBlock() const {
		if (qplaintextedit_firstvisibleblock_isbase) {
			qplaintextedit_firstvisibleblock_isbase = false;
			return QPlainTextEdit::firstVisibleBlock();
		} else if (qplaintextedit_firstvisibleblock_callback != nullptr) {
			QTextBlock* callback_ret = qplaintextedit_firstvisibleblock_callback();
			return *callback_ret;
		} else {
			return QPlainTextEdit::firstVisibleBlock();
		}
	}

	// Virtual method for C ABI access and custom callback
	QPointF contentOffset() const {
		if (qplaintextedit_contentoffset_isbase) {
			qplaintextedit_contentoffset_isbase = false;
			return QPlainTextEdit::contentOffset();
		} else if (qplaintextedit_contentoffset_callback != nullptr) {
			QPointF* callback_ret = qplaintextedit_contentoffset_callback();
			return *callback_ret;
		} else {
			return QPlainTextEdit::contentOffset();
		}
	}

	// Virtual method for C ABI access and custom callback
	QRectF blockBoundingRect(const QTextBlock& block) const {
		if (qplaintextedit_blockboundingrect_isbase) {
			qplaintextedit_blockboundingrect_isbase = false;
			return QPlainTextEdit::blockBoundingRect(block);
		} else if (qplaintextedit_blockboundingrect_callback != nullptr) {
			const QTextBlock* cbval1 = (const QTextBlock*)&block;
			QRectF* callback_ret = qplaintextedit_blockboundingrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QPlainTextEdit::blockBoundingRect(block);
		}
	}

	// Virtual method for C ABI access and custom callback
	QRectF blockBoundingGeometry(const QTextBlock& block) const {
		if (qplaintextedit_blockboundinggeometry_isbase) {
			qplaintextedit_blockboundinggeometry_isbase = false;
			return QPlainTextEdit::blockBoundingGeometry(block);
		} else if (qplaintextedit_blockboundinggeometry_callback != nullptr) {
			const QTextBlock* cbval1 = (const QTextBlock*)&block;
			QRectF* callback_ret = qplaintextedit_blockboundinggeometry_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QPlainTextEdit::blockBoundingGeometry(block);
		}
	}

	// Virtual method for C ABI access and custom callback
	QAbstractTextDocumentLayout::PaintContext getPaintContext() const {
		if (qplaintextedit_getpaintcontext_isbase) {
			qplaintextedit_getpaintcontext_isbase = false;
			return QPlainTextEdit::getPaintContext();
		} else if (qplaintextedit_getpaintcontext_callback != nullptr) {
			QAbstractTextDocumentLayout__PaintContext* callback_ret = qplaintextedit_getpaintcontext_callback();
			return *callback_ret;
		} else {
			return QPlainTextEdit::getPaintContext();
		}
	}

	// Virtual method for C ABI access and custom callback
	void zoomInF(float range) {
		if (qplaintextedit_zoominf_isbase) {
			qplaintextedit_zoominf_isbase = false;
			QPlainTextEdit::zoomInF(range);
		} else if (qplaintextedit_zoominf_callback != nullptr) {
			float cbval1 = range;
			qplaintextedit_zoominf_callback(this, cbval1);
		} else {
			QPlainTextEdit::zoomInF(range);
		}
	}

	// Friend functions
	friend bool QPlainTextEdit_Event(QPlainTextEdit* self, QEvent* e);
	friend bool QPlainTextEdit_QBaseEvent(QPlainTextEdit* self, QEvent* e);
	friend void QPlainTextEdit_TimerEvent(QPlainTextEdit* self, QTimerEvent* e);
	friend void QPlainTextEdit_QBaseTimerEvent(QPlainTextEdit* self, QTimerEvent* e);
	friend void QPlainTextEdit_KeyPressEvent(QPlainTextEdit* self, QKeyEvent* e);
	friend void QPlainTextEdit_QBaseKeyPressEvent(QPlainTextEdit* self, QKeyEvent* e);
	friend void QPlainTextEdit_KeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e);
	friend void QPlainTextEdit_QBaseKeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e);
	friend void QPlainTextEdit_ResizeEvent(QPlainTextEdit* self, QResizeEvent* e);
	friend void QPlainTextEdit_QBaseResizeEvent(QPlainTextEdit* self, QResizeEvent* e);
	friend void QPlainTextEdit_PaintEvent(QPlainTextEdit* self, QPaintEvent* e);
	friend void QPlainTextEdit_QBasePaintEvent(QPlainTextEdit* self, QPaintEvent* e);
	friend void QPlainTextEdit_MousePressEvent(QPlainTextEdit* self, QMouseEvent* e);
	friend void QPlainTextEdit_QBaseMousePressEvent(QPlainTextEdit* self, QMouseEvent* e);
	friend void QPlainTextEdit_MouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e);
	friend void QPlainTextEdit_QBaseMouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e);
	friend void QPlainTextEdit_MouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e);
	friend void QPlainTextEdit_QBaseMouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e);
	friend void QPlainTextEdit_MouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e);
	friend void QPlainTextEdit_QBaseMouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e);
	friend bool QPlainTextEdit_FocusNextPrevChild(QPlainTextEdit* self, bool next);
	friend bool QPlainTextEdit_QBaseFocusNextPrevChild(QPlainTextEdit* self, bool next);
	friend void QPlainTextEdit_ContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e);
	friend void QPlainTextEdit_QBaseContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e);
	friend void QPlainTextEdit_DragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e);
	friend void QPlainTextEdit_QBaseDragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e);
	friend void QPlainTextEdit_DragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e);
	friend void QPlainTextEdit_QBaseDragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e);
	friend void QPlainTextEdit_DragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e);
	friend void QPlainTextEdit_QBaseDragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e);
	friend void QPlainTextEdit_DropEvent(QPlainTextEdit* self, QDropEvent* e);
	friend void QPlainTextEdit_QBaseDropEvent(QPlainTextEdit* self, QDropEvent* e);
	friend void QPlainTextEdit_FocusInEvent(QPlainTextEdit* self, QFocusEvent* e);
	friend void QPlainTextEdit_QBaseFocusInEvent(QPlainTextEdit* self, QFocusEvent* e);
	friend void QPlainTextEdit_FocusOutEvent(QPlainTextEdit* self, QFocusEvent* e);
	friend void QPlainTextEdit_QBaseFocusOutEvent(QPlainTextEdit* self, QFocusEvent* e);
	friend void QPlainTextEdit_ShowEvent(QPlainTextEdit* self, QShowEvent* param1);
	friend void QPlainTextEdit_QBaseShowEvent(QPlainTextEdit* self, QShowEvent* param1);
	friend void QPlainTextEdit_ChangeEvent(QPlainTextEdit* self, QEvent* e);
	friend void QPlainTextEdit_QBaseChangeEvent(QPlainTextEdit* self, QEvent* e);
	friend void QPlainTextEdit_WheelEvent(QPlainTextEdit* self, QWheelEvent* e);
	friend void QPlainTextEdit_QBaseWheelEvent(QPlainTextEdit* self, QWheelEvent* e);
	friend QMimeData* QPlainTextEdit_CreateMimeDataFromSelection(const QPlainTextEdit* self);
	friend QMimeData* QPlainTextEdit_QBaseCreateMimeDataFromSelection(const QPlainTextEdit* self);
	friend bool QPlainTextEdit_CanInsertFromMimeData(const QPlainTextEdit* self, const QMimeData* source);
	friend bool QPlainTextEdit_QBaseCanInsertFromMimeData(const QPlainTextEdit* self, const QMimeData* source);
	friend void QPlainTextEdit_InsertFromMimeData(QPlainTextEdit* self, const QMimeData* source);
	friend void QPlainTextEdit_QBaseInsertFromMimeData(QPlainTextEdit* self, const QMimeData* source);
	friend void QPlainTextEdit_InputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1);
	friend void QPlainTextEdit_QBaseInputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1);
	friend void QPlainTextEdit_ScrollContentsBy(QPlainTextEdit* self, int dx, int dy);
	friend void QPlainTextEdit_QBaseScrollContentsBy(QPlainTextEdit* self, int dx, int dy);
	friend void QPlainTextEdit_DoSetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor);
	friend void QPlainTextEdit_QBaseDoSetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor);
	friend QTextBlock* QPlainTextEdit_FirstVisibleBlock(const QPlainTextEdit* self);
	friend QTextBlock* QPlainTextEdit_QBaseFirstVisibleBlock(const QPlainTextEdit* self);
	friend QPointF* QPlainTextEdit_ContentOffset(const QPlainTextEdit* self);
	friend QPointF* QPlainTextEdit_QBaseContentOffset(const QPlainTextEdit* self);
	friend QRectF* QPlainTextEdit_BlockBoundingRect(const QPlainTextEdit* self, const QTextBlock* block);
	friend QRectF* QPlainTextEdit_QBaseBlockBoundingRect(const QPlainTextEdit* self, const QTextBlock* block);
	friend QRectF* QPlainTextEdit_BlockBoundingGeometry(const QPlainTextEdit* self, const QTextBlock* block);
	friend QRectF* QPlainTextEdit_QBaseBlockBoundingGeometry(const QPlainTextEdit* self, const QTextBlock* block);
	friend QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_GetPaintContext(const QPlainTextEdit* self);
	friend QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_QBaseGetPaintContext(const QPlainTextEdit* self);
	friend void QPlainTextEdit_ZoomInF(QPlainTextEdit* self, float range);
	friend void QPlainTextEdit_QBaseZoomInF(QPlainTextEdit* self, float range);
};

// This class is a subclass of QPlainTextDocumentLayout so that we can call protected methods
class VirtualQPlainTextDocumentLayout final : public QPlainTextDocumentLayout {

public:
	// Virtual class boolean flag
	bool isVirtualQPlainTextDocumentLayout= true;

	// Virtual class public types (including callbacks)
	using QPlainTextDocumentLayout_Draw_Callback = void (*)(QPlainTextDocumentLayout*, QPainter*, const QAbstractTextDocumentLayout__PaintContext*);
	using QPlainTextDocumentLayout_HitTest_Callback = int (*)(const QPlainTextDocumentLayout*, const QPointF*, int);
	using QPlainTextDocumentLayout_PageCount_Callback = int (*)();
	using QPlainTextDocumentLayout_DocumentSize_Callback = QSizeF* (*)();
	using QPlainTextDocumentLayout_FrameBoundingRect_Callback = QRectF* (*)(const QPlainTextDocumentLayout*, QTextFrame*);
	using QPlainTextDocumentLayout_BlockBoundingRect_Callback = QRectF* (*)(const QPlainTextDocumentLayout*, const QTextBlock*);
	using QPlainTextDocumentLayout_DocumentChanged_Callback = void (*)(QPlainTextDocumentLayout*, int, int, int);

protected:
	// Instance callback storage
	mutable QPlainTextDocumentLayout_Draw_Callback qplaintextdocumentlayout_draw_callback = nullptr;
	mutable QPlainTextDocumentLayout_HitTest_Callback qplaintextdocumentlayout_hittest_callback = nullptr;
	mutable QPlainTextDocumentLayout_PageCount_Callback qplaintextdocumentlayout_pagecount_callback = nullptr;
	mutable QPlainTextDocumentLayout_DocumentSize_Callback qplaintextdocumentlayout_documentsize_callback = nullptr;
	mutable QPlainTextDocumentLayout_FrameBoundingRect_Callback qplaintextdocumentlayout_frameboundingrect_callback = nullptr;
	mutable QPlainTextDocumentLayout_BlockBoundingRect_Callback qplaintextdocumentlayout_blockboundingrect_callback = nullptr;
	mutable QPlainTextDocumentLayout_DocumentChanged_Callback qplaintextdocumentlayout_documentchanged_callback = nullptr;

	// Instance base flags
    mutable bool qplaintextdocumentlayout_draw_isbase = false;
    mutable bool qplaintextdocumentlayout_hittest_isbase = false;
    mutable bool qplaintextdocumentlayout_pagecount_isbase = false;
    mutable bool qplaintextdocumentlayout_documentsize_isbase = false;
    mutable bool qplaintextdocumentlayout_frameboundingrect_isbase = false;
    mutable bool qplaintextdocumentlayout_blockboundingrect_isbase = false;
    mutable bool qplaintextdocumentlayout_documentchanged_isbase = false;

public:
	VirtualQPlainTextDocumentLayout(QTextDocument* document): QPlainTextDocumentLayout(document) {};

	~VirtualQPlainTextDocumentLayout() {
		qplaintextdocumentlayout_draw_callback = nullptr;
		qplaintextdocumentlayout_hittest_callback = nullptr;
		qplaintextdocumentlayout_pagecount_callback = nullptr;
		qplaintextdocumentlayout_documentsize_callback = nullptr;
		qplaintextdocumentlayout_frameboundingrect_callback = nullptr;
		qplaintextdocumentlayout_blockboundingrect_callback = nullptr;
		qplaintextdocumentlayout_documentchanged_callback = nullptr;
	}

// Callback setters
	inline void setQPlainTextDocumentLayout_Draw_Callback(QPlainTextDocumentLayout_Draw_Callback cb) const { qplaintextdocumentlayout_draw_callback = cb; }
	inline void setQPlainTextDocumentLayout_HitTest_Callback(QPlainTextDocumentLayout_HitTest_Callback cb) const { qplaintextdocumentlayout_hittest_callback = cb; }
	inline void setQPlainTextDocumentLayout_PageCount_Callback(QPlainTextDocumentLayout_PageCount_Callback cb) const { qplaintextdocumentlayout_pagecount_callback = cb; }
	inline void setQPlainTextDocumentLayout_DocumentSize_Callback(QPlainTextDocumentLayout_DocumentSize_Callback cb) const { qplaintextdocumentlayout_documentsize_callback = cb; }
	inline void setQPlainTextDocumentLayout_FrameBoundingRect_Callback(QPlainTextDocumentLayout_FrameBoundingRect_Callback cb) const { qplaintextdocumentlayout_frameboundingrect_callback = cb; }
	inline void setQPlainTextDocumentLayout_BlockBoundingRect_Callback(QPlainTextDocumentLayout_BlockBoundingRect_Callback cb) const { qplaintextdocumentlayout_blockboundingrect_callback = cb; }
	inline void setQPlainTextDocumentLayout_DocumentChanged_Callback(QPlainTextDocumentLayout_DocumentChanged_Callback cb) const { qplaintextdocumentlayout_documentchanged_callback = cb; }

// Base flag setters
	inline void setQPlainTextDocumentLayout_Draw_IsBase(bool value) const { qplaintextdocumentlayout_draw_isbase = value; }
	inline void setQPlainTextDocumentLayout_HitTest_IsBase(bool value) const { qplaintextdocumentlayout_hittest_isbase = value; }
	inline void setQPlainTextDocumentLayout_PageCount_IsBase(bool value) const { qplaintextdocumentlayout_pagecount_isbase = value; }
	inline void setQPlainTextDocumentLayout_DocumentSize_IsBase(bool value) const { qplaintextdocumentlayout_documentsize_isbase = value; }
	inline void setQPlainTextDocumentLayout_FrameBoundingRect_IsBase(bool value) const { qplaintextdocumentlayout_frameboundingrect_isbase = value; }
	inline void setQPlainTextDocumentLayout_BlockBoundingRect_IsBase(bool value) const { qplaintextdocumentlayout_blockboundingrect_isbase = value; }
	inline void setQPlainTextDocumentLayout_DocumentChanged_IsBase(bool value) const { qplaintextdocumentlayout_documentchanged_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void draw(QPainter* param1, const QAbstractTextDocumentLayout::PaintContext& param2) override {
		if (qplaintextdocumentlayout_draw_isbase) {
			qplaintextdocumentlayout_draw_isbase = false;
			QPlainTextDocumentLayout::draw(param1, param2);
		} else if (qplaintextdocumentlayout_draw_callback != nullptr) {
			QPainter* cbval1 = param1;
			const QAbstractTextDocumentLayout__PaintContext* cbval2 = (const QAbstractTextDocumentLayout__PaintContext*)&param2;
			qplaintextdocumentlayout_draw_callback(this, cbval1, cbval2);
		} else {
			QPlainTextDocumentLayout::draw(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int hitTest(const QPointF& param1, Qt::HitTestAccuracy param2) const override {
		if (qplaintextdocumentlayout_hittest_isbase) {
			qplaintextdocumentlayout_hittest_isbase = false;
			return QPlainTextDocumentLayout::hitTest(param1, param2);
		} else if (qplaintextdocumentlayout_hittest_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&param1;
			int cbval2 = static_cast<int>(param2);
			int callback_ret = qplaintextdocumentlayout_hittest_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QPlainTextDocumentLayout::hitTest(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int pageCount() const override {
		if (qplaintextdocumentlayout_pagecount_isbase) {
			qplaintextdocumentlayout_pagecount_isbase = false;
			return QPlainTextDocumentLayout::pageCount();
		} else if (qplaintextdocumentlayout_pagecount_callback != nullptr) {
			int callback_ret = qplaintextdocumentlayout_pagecount_callback();
			return callback_ret;
		} else {
			return QPlainTextDocumentLayout::pageCount();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSizeF documentSize() const override {
		if (qplaintextdocumentlayout_documentsize_isbase) {
			qplaintextdocumentlayout_documentsize_isbase = false;
			return QPlainTextDocumentLayout::documentSize();
		} else if (qplaintextdocumentlayout_documentsize_callback != nullptr) {
			QSizeF* callback_ret = qplaintextdocumentlayout_documentsize_callback();
			return *callback_ret;
		} else {
			return QPlainTextDocumentLayout::documentSize();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRectF frameBoundingRect(QTextFrame* param1) const override {
		if (qplaintextdocumentlayout_frameboundingrect_isbase) {
			qplaintextdocumentlayout_frameboundingrect_isbase = false;
			return QPlainTextDocumentLayout::frameBoundingRect(param1);
		} else if (qplaintextdocumentlayout_frameboundingrect_callback != nullptr) {
			QTextFrame* cbval1 = param1;
			QRectF* callback_ret = qplaintextdocumentlayout_frameboundingrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QPlainTextDocumentLayout::frameBoundingRect(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
		if (qplaintextdocumentlayout_blockboundingrect_isbase) {
			qplaintextdocumentlayout_blockboundingrect_isbase = false;
			return QPlainTextDocumentLayout::blockBoundingRect(block);
		} else if (qplaintextdocumentlayout_blockboundingrect_callback != nullptr) {
			const QTextBlock* cbval1 = (const QTextBlock*)&block;
			QRectF* callback_ret = qplaintextdocumentlayout_blockboundingrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QPlainTextDocumentLayout::blockBoundingRect(block);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void documentChanged(int from, int param2, int charsAdded) override {
		if (qplaintextdocumentlayout_documentchanged_isbase) {
			qplaintextdocumentlayout_documentchanged_isbase = false;
			QPlainTextDocumentLayout::documentChanged(from, param2, charsAdded);
		} else if (qplaintextdocumentlayout_documentchanged_callback != nullptr) {
			int cbval1 = from;
			int cbval2 = param2;
			int cbval3 = charsAdded;
			qplaintextdocumentlayout_documentchanged_callback(this, cbval1, cbval2, cbval3);
		} else {
			QPlainTextDocumentLayout::documentChanged(from, param2, charsAdded);
		}
	}

	// Friend functions
	friend void QPlainTextDocumentLayout_DocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded);
	friend void QPlainTextDocumentLayout_QBaseDocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded);
};

#endif


