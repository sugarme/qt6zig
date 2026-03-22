#pragma once
#ifndef QACCESSIBLE_H_C_LIBVIRTUAL
#define QACCESSIBLE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAccessibleInterface so that we can call protected methods
class VirtualQAccessibleInterface : public QAccessibleInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleInterface= true;

	// Virtual class public types (including callbacks)
	using QAccessibleInterface_IsValid_Callback = bool (*)();
	using QAccessibleInterface_Object_Callback = QObject* (*)();
	using QAccessibleInterface_Window_Callback = QWindow* (*)();
	using QAccessibleInterface_Relations_Callback = libqt_list (*)(const QAccessibleInterface*, int);
	using QAccessibleInterface_FocusChild_Callback = QAccessibleInterface* (*)();
	using QAccessibleInterface_ChildAt_Callback = QAccessibleInterface* (*)(const QAccessibleInterface*, int, int);
	using QAccessibleInterface_Parent_Callback = QAccessibleInterface* (*)();
	using QAccessibleInterface_Child_Callback = QAccessibleInterface* (*)(const QAccessibleInterface*, int);
	using QAccessibleInterface_ChildCount_Callback = int (*)();
	using QAccessibleInterface_IndexOfChild_Callback = int (*)(const QAccessibleInterface*, const QAccessibleInterface*);
	using QAccessibleInterface_Text_Callback = const char* (*)(const QAccessibleInterface*, int);
	using QAccessibleInterface_SetText_Callback = void (*)(QAccessibleInterface*, int, libqt_string);
	using QAccessibleInterface_Rect_Callback = QRect* (*)();
	using QAccessibleInterface_Role_Callback = int (*)();
	using QAccessibleInterface_State_Callback = QAccessible__State* (*)();
	using QAccessibleInterface_ForegroundColor_Callback = QColor* (*)();
	using QAccessibleInterface_BackgroundColor_Callback = QColor* (*)();
	using QAccessibleInterface_VirtualHook_Callback = void (*)(QAccessibleInterface*, int, void*);
	using QAccessibleInterface_InterfaceCast_Callback = void* (*)(QAccessibleInterface*, int);
	using QAccessibleInterface_OperatorAssign_Callback = void (*)(QAccessibleInterface*, const QAccessibleInterface*);

protected:
	// Instance callback storage
	mutable QAccessibleInterface_IsValid_Callback qaccessibleinterface_isvalid_callback = nullptr;
	mutable QAccessibleInterface_Object_Callback qaccessibleinterface_object_callback = nullptr;
	mutable QAccessibleInterface_Window_Callback qaccessibleinterface_window_callback = nullptr;
	mutable QAccessibleInterface_Relations_Callback qaccessibleinterface_relations_callback = nullptr;
	mutable QAccessibleInterface_FocusChild_Callback qaccessibleinterface_focuschild_callback = nullptr;
	mutable QAccessibleInterface_ChildAt_Callback qaccessibleinterface_childat_callback = nullptr;
	mutable QAccessibleInterface_Parent_Callback qaccessibleinterface_parent_callback = nullptr;
	mutable QAccessibleInterface_Child_Callback qaccessibleinterface_child_callback = nullptr;
	mutable QAccessibleInterface_ChildCount_Callback qaccessibleinterface_childcount_callback = nullptr;
	mutable QAccessibleInterface_IndexOfChild_Callback qaccessibleinterface_indexofchild_callback = nullptr;
	mutable QAccessibleInterface_Text_Callback qaccessibleinterface_text_callback = nullptr;
	mutable QAccessibleInterface_SetText_Callback qaccessibleinterface_settext_callback = nullptr;
	mutable QAccessibleInterface_Rect_Callback qaccessibleinterface_rect_callback = nullptr;
	mutable QAccessibleInterface_Role_Callback qaccessibleinterface_role_callback = nullptr;
	mutable QAccessibleInterface_State_Callback qaccessibleinterface_state_callback = nullptr;
	mutable QAccessibleInterface_ForegroundColor_Callback qaccessibleinterface_foregroundcolor_callback = nullptr;
	mutable QAccessibleInterface_BackgroundColor_Callback qaccessibleinterface_backgroundcolor_callback = nullptr;
	mutable QAccessibleInterface_VirtualHook_Callback qaccessibleinterface_virtualhook_callback = nullptr;
	mutable QAccessibleInterface_InterfaceCast_Callback qaccessibleinterface_interfacecast_callback = nullptr;
	mutable QAccessibleInterface_OperatorAssign_Callback qaccessibleinterface_operatorassign_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibleinterface_isvalid_isbase = false;
    mutable bool qaccessibleinterface_object_isbase = false;
    mutable bool qaccessibleinterface_window_isbase = false;
    mutable bool qaccessibleinterface_relations_isbase = false;
    mutable bool qaccessibleinterface_focuschild_isbase = false;
    mutable bool qaccessibleinterface_childat_isbase = false;
    mutable bool qaccessibleinterface_parent_isbase = false;
    mutable bool qaccessibleinterface_child_isbase = false;
    mutable bool qaccessibleinterface_childcount_isbase = false;
    mutable bool qaccessibleinterface_indexofchild_isbase = false;
    mutable bool qaccessibleinterface_text_isbase = false;
    mutable bool qaccessibleinterface_settext_isbase = false;
    mutable bool qaccessibleinterface_rect_isbase = false;
    mutable bool qaccessibleinterface_role_isbase = false;
    mutable bool qaccessibleinterface_state_isbase = false;
    mutable bool qaccessibleinterface_foregroundcolor_isbase = false;
    mutable bool qaccessibleinterface_backgroundcolor_isbase = false;
    mutable bool qaccessibleinterface_virtualhook_isbase = false;
    mutable bool qaccessibleinterface_interfacecast_isbase = false;
    mutable bool qaccessibleinterface_operatorassign_isbase = false;

public:
	VirtualQAccessibleInterface(): QAccessibleInterface() {};
	VirtualQAccessibleInterface(const QAccessibleInterface& param1): QAccessibleInterface(param1) {};

	~VirtualQAccessibleInterface() {
		qaccessibleinterface_isvalid_callback = nullptr;
		qaccessibleinterface_object_callback = nullptr;
		qaccessibleinterface_window_callback = nullptr;
		qaccessibleinterface_relations_callback = nullptr;
		qaccessibleinterface_focuschild_callback = nullptr;
		qaccessibleinterface_childat_callback = nullptr;
		qaccessibleinterface_parent_callback = nullptr;
		qaccessibleinterface_child_callback = nullptr;
		qaccessibleinterface_childcount_callback = nullptr;
		qaccessibleinterface_indexofchild_callback = nullptr;
		qaccessibleinterface_text_callback = nullptr;
		qaccessibleinterface_settext_callback = nullptr;
		qaccessibleinterface_rect_callback = nullptr;
		qaccessibleinterface_role_callback = nullptr;
		qaccessibleinterface_state_callback = nullptr;
		qaccessibleinterface_foregroundcolor_callback = nullptr;
		qaccessibleinterface_backgroundcolor_callback = nullptr;
		qaccessibleinterface_virtualhook_callback = nullptr;
		qaccessibleinterface_interfacecast_callback = nullptr;
		qaccessibleinterface_operatorassign_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleInterface_IsValid_Callback(QAccessibleInterface_IsValid_Callback cb) const { qaccessibleinterface_isvalid_callback = cb; }
	inline void setQAccessibleInterface_Object_Callback(QAccessibleInterface_Object_Callback cb) const { qaccessibleinterface_object_callback = cb; }
	inline void setQAccessibleInterface_Window_Callback(QAccessibleInterface_Window_Callback cb) const { qaccessibleinterface_window_callback = cb; }
	inline void setQAccessibleInterface_Relations_Callback(QAccessibleInterface_Relations_Callback cb) const { qaccessibleinterface_relations_callback = cb; }
	inline void setQAccessibleInterface_FocusChild_Callback(QAccessibleInterface_FocusChild_Callback cb) const { qaccessibleinterface_focuschild_callback = cb; }
	inline void setQAccessibleInterface_ChildAt_Callback(QAccessibleInterface_ChildAt_Callback cb) const { qaccessibleinterface_childat_callback = cb; }
	inline void setQAccessibleInterface_Parent_Callback(QAccessibleInterface_Parent_Callback cb) const { qaccessibleinterface_parent_callback = cb; }
	inline void setQAccessibleInterface_Child_Callback(QAccessibleInterface_Child_Callback cb) const { qaccessibleinterface_child_callback = cb; }
	inline void setQAccessibleInterface_ChildCount_Callback(QAccessibleInterface_ChildCount_Callback cb) const { qaccessibleinterface_childcount_callback = cb; }
	inline void setQAccessibleInterface_IndexOfChild_Callback(QAccessibleInterface_IndexOfChild_Callback cb) const { qaccessibleinterface_indexofchild_callback = cb; }
	inline void setQAccessibleInterface_Text_Callback(QAccessibleInterface_Text_Callback cb) const { qaccessibleinterface_text_callback = cb; }
	inline void setQAccessibleInterface_SetText_Callback(QAccessibleInterface_SetText_Callback cb) const { qaccessibleinterface_settext_callback = cb; }
	inline void setQAccessibleInterface_Rect_Callback(QAccessibleInterface_Rect_Callback cb) const { qaccessibleinterface_rect_callback = cb; }
	inline void setQAccessibleInterface_Role_Callback(QAccessibleInterface_Role_Callback cb) const { qaccessibleinterface_role_callback = cb; }
	inline void setQAccessibleInterface_State_Callback(QAccessibleInterface_State_Callback cb) const { qaccessibleinterface_state_callback = cb; }
	inline void setQAccessibleInterface_ForegroundColor_Callback(QAccessibleInterface_ForegroundColor_Callback cb) const { qaccessibleinterface_foregroundcolor_callback = cb; }
	inline void setQAccessibleInterface_BackgroundColor_Callback(QAccessibleInterface_BackgroundColor_Callback cb) const { qaccessibleinterface_backgroundcolor_callback = cb; }
	inline void setQAccessibleInterface_VirtualHook_Callback(QAccessibleInterface_VirtualHook_Callback cb) const { qaccessibleinterface_virtualhook_callback = cb; }
	inline void setQAccessibleInterface_InterfaceCast_Callback(QAccessibleInterface_InterfaceCast_Callback cb) const { qaccessibleinterface_interfacecast_callback = cb; }
	inline void setQAccessibleInterface_OperatorAssign_Callback(QAccessibleInterface_OperatorAssign_Callback cb) const { qaccessibleinterface_operatorassign_callback = cb; }

// Base flag setters
	inline void setQAccessibleInterface_IsValid_IsBase(bool value) const { qaccessibleinterface_isvalid_isbase = value; }
	inline void setQAccessibleInterface_Object_IsBase(bool value) const { qaccessibleinterface_object_isbase = value; }
	inline void setQAccessibleInterface_Window_IsBase(bool value) const { qaccessibleinterface_window_isbase = value; }
	inline void setQAccessibleInterface_Relations_IsBase(bool value) const { qaccessibleinterface_relations_isbase = value; }
	inline void setQAccessibleInterface_FocusChild_IsBase(bool value) const { qaccessibleinterface_focuschild_isbase = value; }
	inline void setQAccessibleInterface_ChildAt_IsBase(bool value) const { qaccessibleinterface_childat_isbase = value; }
	inline void setQAccessibleInterface_Parent_IsBase(bool value) const { qaccessibleinterface_parent_isbase = value; }
	inline void setQAccessibleInterface_Child_IsBase(bool value) const { qaccessibleinterface_child_isbase = value; }
	inline void setQAccessibleInterface_ChildCount_IsBase(bool value) const { qaccessibleinterface_childcount_isbase = value; }
	inline void setQAccessibleInterface_IndexOfChild_IsBase(bool value) const { qaccessibleinterface_indexofchild_isbase = value; }
	inline void setQAccessibleInterface_Text_IsBase(bool value) const { qaccessibleinterface_text_isbase = value; }
	inline void setQAccessibleInterface_SetText_IsBase(bool value) const { qaccessibleinterface_settext_isbase = value; }
	inline void setQAccessibleInterface_Rect_IsBase(bool value) const { qaccessibleinterface_rect_isbase = value; }
	inline void setQAccessibleInterface_Role_IsBase(bool value) const { qaccessibleinterface_role_isbase = value; }
	inline void setQAccessibleInterface_State_IsBase(bool value) const { qaccessibleinterface_state_isbase = value; }
	inline void setQAccessibleInterface_ForegroundColor_IsBase(bool value) const { qaccessibleinterface_foregroundcolor_isbase = value; }
	inline void setQAccessibleInterface_BackgroundColor_IsBase(bool value) const { qaccessibleinterface_backgroundcolor_isbase = value; }
	inline void setQAccessibleInterface_VirtualHook_IsBase(bool value) const { qaccessibleinterface_virtualhook_isbase = value; }
	inline void setQAccessibleInterface_InterfaceCast_IsBase(bool value) const { qaccessibleinterface_interfacecast_isbase = value; }
	inline void setQAccessibleInterface_OperatorAssign_IsBase(bool value) const { qaccessibleinterface_operatorassign_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool isValid() const override {
		if (qaccessibleinterface_isvalid_callback != nullptr) {
			bool callback_ret = qaccessibleinterface_isvalid_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QObject* object() const override {
		if (qaccessibleinterface_object_callback != nullptr) {
			QObject* callback_ret = qaccessibleinterface_object_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QWindow* window() const override {
		if (qaccessibleinterface_window_isbase) {
			qaccessibleinterface_window_isbase = false;
			return QAccessibleInterface::window();
		} else if (qaccessibleinterface_window_callback != nullptr) {
			QWindow* callback_ret = qaccessibleinterface_window_callback();
			return callback_ret;
		} else {
			return QAccessibleInterface::window();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QPair<QAccessibleInterface *, QFlags<QAccessible::RelationFlag>>> relations(QAccessible::Relation match) const override {
		if (qaccessibleinterface_relations_isbase) {
			qaccessibleinterface_relations_isbase = false;
			return QAccessibleInterface::relations(match);
		} else if (qaccessibleinterface_relations_callback != nullptr) {
			int cbval1 = static_cast<int>(match);
			libqt_list callback_ret = qaccessibleinterface_relations_callback(this, cbval1);
			return QList<QPair<QAccessibleInterface *, QFlags<QAccessible::RelationFlag>>>();
		} else {
			return QAccessibleInterface::relations(match);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* focusChild() const override {
		if (qaccessibleinterface_focuschild_isbase) {
			qaccessibleinterface_focuschild_isbase = false;
			return QAccessibleInterface::focusChild();
		} else if (qaccessibleinterface_focuschild_callback != nullptr) {
			QAccessibleInterface* callback_ret = qaccessibleinterface_focuschild_callback();
			return callback_ret;
		} else {
			return QAccessibleInterface::focusChild();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* childAt(int x, int y) const override {
		if (qaccessibleinterface_childat_callback != nullptr) {
			int cbval1 = x;
			int cbval2 = y;
			QAccessibleInterface* callback_ret = qaccessibleinterface_childat_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* parent() const override {
		if (qaccessibleinterface_parent_callback != nullptr) {
			QAccessibleInterface* callback_ret = qaccessibleinterface_parent_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* child(int index) const override {
		if (qaccessibleinterface_child_callback != nullptr) {
			int cbval1 = index;
			QAccessibleInterface* callback_ret = qaccessibleinterface_child_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int childCount() const override {
		if (qaccessibleinterface_childcount_callback != nullptr) {
			int callback_ret = qaccessibleinterface_childcount_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int indexOfChild(const QAccessibleInterface* param1) const override {
		if (qaccessibleinterface_indexofchild_callback != nullptr) {
			const QAccessibleInterface* cbval1 = param1;
			int callback_ret = qaccessibleinterface_indexofchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString text(QAccessible::Text t) const override {
		if (qaccessibleinterface_text_callback != nullptr) {
			int cbval1 = static_cast<int>(t);
			const char* callback_ret = qaccessibleinterface_text_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setText(QAccessible::Text t, const QString& text) override {
		if (qaccessibleinterface_settext_callback != nullptr) {
			int cbval1 = static_cast<int>(t);
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval2;
			cbval2.len = text_qb.length();
			cbval2.data = static_cast<const char*>(text_qb.constData());
			qaccessibleinterface_settext_callback(this, cbval1, cbval2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect rect() const override {
		if (qaccessibleinterface_rect_callback != nullptr) {
			QRect* callback_ret = qaccessibleinterface_rect_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessible::Role role() const override {
		if (qaccessibleinterface_role_callback != nullptr) {
			int callback_ret = qaccessibleinterface_role_callback();
			return static_cast<QAccessible::Role>(callback_ret);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessible::State state() const override {
		if (qaccessibleinterface_state_callback != nullptr) {
			QAccessible__State* callback_ret = qaccessibleinterface_state_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QColor foregroundColor() const override {
		if (qaccessibleinterface_foregroundcolor_isbase) {
			qaccessibleinterface_foregroundcolor_isbase = false;
			return QAccessibleInterface::foregroundColor();
		} else if (qaccessibleinterface_foregroundcolor_callback != nullptr) {
			QColor* callback_ret = qaccessibleinterface_foregroundcolor_callback();
			return *callback_ret;
		} else {
			return QAccessibleInterface::foregroundColor();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QColor backgroundColor() const override {
		if (qaccessibleinterface_backgroundcolor_isbase) {
			qaccessibleinterface_backgroundcolor_isbase = false;
			return QAccessibleInterface::backgroundColor();
		} else if (qaccessibleinterface_backgroundcolor_callback != nullptr) {
			QColor* callback_ret = qaccessibleinterface_backgroundcolor_callback();
			return *callback_ret;
		} else {
			return QAccessibleInterface::backgroundColor();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void virtual_hook(int id, void* data) override {
		if (qaccessibleinterface_virtualhook_isbase) {
			qaccessibleinterface_virtualhook_isbase = false;
			QAccessibleInterface::virtual_hook(id, data);
		} else if (qaccessibleinterface_virtualhook_callback != nullptr) {
			int cbval1 = id;
			void* cbval2 = data;
			qaccessibleinterface_virtualhook_callback(this, cbval1, cbval2);
		} else {
			QAccessibleInterface::virtual_hook(id, data);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void* interface_cast(QAccessible::InterfaceType param1) override {
		if (qaccessibleinterface_interfacecast_isbase) {
			qaccessibleinterface_interfacecast_isbase = false;
			return QAccessibleInterface::interface_cast(param1);
		} else if (qaccessibleinterface_interfacecast_callback != nullptr) {
			int cbval1 = static_cast<int>(param1);
			void* callback_ret = qaccessibleinterface_interfacecast_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAccessibleInterface::interface_cast(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QAccessibleInterface& param1) {
		if (qaccessibleinterface_operatorassign_isbase) {
			qaccessibleinterface_operatorassign_isbase = false;
			QAccessibleInterface::operator=(param1);
		} else if (qaccessibleinterface_operatorassign_callback != nullptr) {
			const QAccessibleInterface* cbval1 = (const QAccessibleInterface*)&param1;
			qaccessibleinterface_operatorassign_callback(this, cbval1);
		} else {
			QAccessibleInterface::operator=(param1);
		}
	}

	// Friend functions
	friend void QAccessibleInterface_OperatorAssign(QAccessibleInterface* self, const QAccessibleInterface* param1);
	friend void QAccessibleInterface_QBaseOperatorAssign(QAccessibleInterface* self, const QAccessibleInterface* param1);
};

// This class is a subclass of QAccessibleTextInterface so that we can call protected methods
class VirtualQAccessibleTextInterface : public QAccessibleTextInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleTextInterface= true;

	// Virtual class public types (including callbacks)
	using QAccessibleTextInterface_Selection_Callback = void (*)(const QAccessibleTextInterface*, int, int*, int*);
	using QAccessibleTextInterface_SelectionCount_Callback = int (*)();
	using QAccessibleTextInterface_AddSelection_Callback = void (*)(QAccessibleTextInterface*, int, int);
	using QAccessibleTextInterface_RemoveSelection_Callback = void (*)(QAccessibleTextInterface*, int);
	using QAccessibleTextInterface_SetSelection_Callback = void (*)(QAccessibleTextInterface*, int, int, int);
	using QAccessibleTextInterface_CursorPosition_Callback = int (*)();
	using QAccessibleTextInterface_SetCursorPosition_Callback = void (*)(QAccessibleTextInterface*, int);
	using QAccessibleTextInterface_Text_Callback = const char* (*)(const QAccessibleTextInterface*, int, int);
	using QAccessibleTextInterface_TextBeforeOffset_Callback = const char* (*)(const QAccessibleTextInterface*, int, int, int*, int*);
	using QAccessibleTextInterface_TextAfterOffset_Callback = const char* (*)(const QAccessibleTextInterface*, int, int, int*, int*);
	using QAccessibleTextInterface_TextAtOffset_Callback = const char* (*)(const QAccessibleTextInterface*, int, int, int*, int*);
	using QAccessibleTextInterface_CharacterCount_Callback = int (*)();
	using QAccessibleTextInterface_CharacterRect_Callback = QRect* (*)(const QAccessibleTextInterface*, int);
	using QAccessibleTextInterface_OffsetAtPoint_Callback = int (*)(const QAccessibleTextInterface*, const QPoint*);
	using QAccessibleTextInterface_ScrollToSubstring_Callback = void (*)(QAccessibleTextInterface*, int, int);
	using QAccessibleTextInterface_Attributes_Callback = const char* (*)(const QAccessibleTextInterface*, int, int*, int*);

protected:
	// Instance callback storage
	mutable QAccessibleTextInterface_Selection_Callback qaccessibletextinterface_selection_callback = nullptr;
	mutable QAccessibleTextInterface_SelectionCount_Callback qaccessibletextinterface_selectioncount_callback = nullptr;
	mutable QAccessibleTextInterface_AddSelection_Callback qaccessibletextinterface_addselection_callback = nullptr;
	mutable QAccessibleTextInterface_RemoveSelection_Callback qaccessibletextinterface_removeselection_callback = nullptr;
	mutable QAccessibleTextInterface_SetSelection_Callback qaccessibletextinterface_setselection_callback = nullptr;
	mutable QAccessibleTextInterface_CursorPosition_Callback qaccessibletextinterface_cursorposition_callback = nullptr;
	mutable QAccessibleTextInterface_SetCursorPosition_Callback qaccessibletextinterface_setcursorposition_callback = nullptr;
	mutable QAccessibleTextInterface_Text_Callback qaccessibletextinterface_text_callback = nullptr;
	mutable QAccessibleTextInterface_TextBeforeOffset_Callback qaccessibletextinterface_textbeforeoffset_callback = nullptr;
	mutable QAccessibleTextInterface_TextAfterOffset_Callback qaccessibletextinterface_textafteroffset_callback = nullptr;
	mutable QAccessibleTextInterface_TextAtOffset_Callback qaccessibletextinterface_textatoffset_callback = nullptr;
	mutable QAccessibleTextInterface_CharacterCount_Callback qaccessibletextinterface_charactercount_callback = nullptr;
	mutable QAccessibleTextInterface_CharacterRect_Callback qaccessibletextinterface_characterrect_callback = nullptr;
	mutable QAccessibleTextInterface_OffsetAtPoint_Callback qaccessibletextinterface_offsetatpoint_callback = nullptr;
	mutable QAccessibleTextInterface_ScrollToSubstring_Callback qaccessibletextinterface_scrolltosubstring_callback = nullptr;
	mutable QAccessibleTextInterface_Attributes_Callback qaccessibletextinterface_attributes_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibletextinterface_selection_isbase = false;
    mutable bool qaccessibletextinterface_selectioncount_isbase = false;
    mutable bool qaccessibletextinterface_addselection_isbase = false;
    mutable bool qaccessibletextinterface_removeselection_isbase = false;
    mutable bool qaccessibletextinterface_setselection_isbase = false;
    mutable bool qaccessibletextinterface_cursorposition_isbase = false;
    mutable bool qaccessibletextinterface_setcursorposition_isbase = false;
    mutable bool qaccessibletextinterface_text_isbase = false;
    mutable bool qaccessibletextinterface_textbeforeoffset_isbase = false;
    mutable bool qaccessibletextinterface_textafteroffset_isbase = false;
    mutable bool qaccessibletextinterface_textatoffset_isbase = false;
    mutable bool qaccessibletextinterface_charactercount_isbase = false;
    mutable bool qaccessibletextinterface_characterrect_isbase = false;
    mutable bool qaccessibletextinterface_offsetatpoint_isbase = false;
    mutable bool qaccessibletextinterface_scrolltosubstring_isbase = false;
    mutable bool qaccessibletextinterface_attributes_isbase = false;

public:
	VirtualQAccessibleTextInterface(): QAccessibleTextInterface() {};
	VirtualQAccessibleTextInterface(const QAccessibleTextInterface& param1): QAccessibleTextInterface(param1) {};

	~VirtualQAccessibleTextInterface() {
		qaccessibletextinterface_selection_callback = nullptr;
		qaccessibletextinterface_selectioncount_callback = nullptr;
		qaccessibletextinterface_addselection_callback = nullptr;
		qaccessibletextinterface_removeselection_callback = nullptr;
		qaccessibletextinterface_setselection_callback = nullptr;
		qaccessibletextinterface_cursorposition_callback = nullptr;
		qaccessibletextinterface_setcursorposition_callback = nullptr;
		qaccessibletextinterface_text_callback = nullptr;
		qaccessibletextinterface_textbeforeoffset_callback = nullptr;
		qaccessibletextinterface_textafteroffset_callback = nullptr;
		qaccessibletextinterface_textatoffset_callback = nullptr;
		qaccessibletextinterface_charactercount_callback = nullptr;
		qaccessibletextinterface_characterrect_callback = nullptr;
		qaccessibletextinterface_offsetatpoint_callback = nullptr;
		qaccessibletextinterface_scrolltosubstring_callback = nullptr;
		qaccessibletextinterface_attributes_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleTextInterface_Selection_Callback(QAccessibleTextInterface_Selection_Callback cb) const { qaccessibletextinterface_selection_callback = cb; }
	inline void setQAccessibleTextInterface_SelectionCount_Callback(QAccessibleTextInterface_SelectionCount_Callback cb) const { qaccessibletextinterface_selectioncount_callback = cb; }
	inline void setQAccessibleTextInterface_AddSelection_Callback(QAccessibleTextInterface_AddSelection_Callback cb) const { qaccessibletextinterface_addselection_callback = cb; }
	inline void setQAccessibleTextInterface_RemoveSelection_Callback(QAccessibleTextInterface_RemoveSelection_Callback cb) const { qaccessibletextinterface_removeselection_callback = cb; }
	inline void setQAccessibleTextInterface_SetSelection_Callback(QAccessibleTextInterface_SetSelection_Callback cb) const { qaccessibletextinterface_setselection_callback = cb; }
	inline void setQAccessibleTextInterface_CursorPosition_Callback(QAccessibleTextInterface_CursorPosition_Callback cb) const { qaccessibletextinterface_cursorposition_callback = cb; }
	inline void setQAccessibleTextInterface_SetCursorPosition_Callback(QAccessibleTextInterface_SetCursorPosition_Callback cb) const { qaccessibletextinterface_setcursorposition_callback = cb; }
	inline void setQAccessibleTextInterface_Text_Callback(QAccessibleTextInterface_Text_Callback cb) const { qaccessibletextinterface_text_callback = cb; }
	inline void setQAccessibleTextInterface_TextBeforeOffset_Callback(QAccessibleTextInterface_TextBeforeOffset_Callback cb) const { qaccessibletextinterface_textbeforeoffset_callback = cb; }
	inline void setQAccessibleTextInterface_TextAfterOffset_Callback(QAccessibleTextInterface_TextAfterOffset_Callback cb) const { qaccessibletextinterface_textafteroffset_callback = cb; }
	inline void setQAccessibleTextInterface_TextAtOffset_Callback(QAccessibleTextInterface_TextAtOffset_Callback cb) const { qaccessibletextinterface_textatoffset_callback = cb; }
	inline void setQAccessibleTextInterface_CharacterCount_Callback(QAccessibleTextInterface_CharacterCount_Callback cb) const { qaccessibletextinterface_charactercount_callback = cb; }
	inline void setQAccessibleTextInterface_CharacterRect_Callback(QAccessibleTextInterface_CharacterRect_Callback cb) const { qaccessibletextinterface_characterrect_callback = cb; }
	inline void setQAccessibleTextInterface_OffsetAtPoint_Callback(QAccessibleTextInterface_OffsetAtPoint_Callback cb) const { qaccessibletextinterface_offsetatpoint_callback = cb; }
	inline void setQAccessibleTextInterface_ScrollToSubstring_Callback(QAccessibleTextInterface_ScrollToSubstring_Callback cb) const { qaccessibletextinterface_scrolltosubstring_callback = cb; }
	inline void setQAccessibleTextInterface_Attributes_Callback(QAccessibleTextInterface_Attributes_Callback cb) const { qaccessibletextinterface_attributes_callback = cb; }

// Base flag setters
	inline void setQAccessibleTextInterface_Selection_IsBase(bool value) const { qaccessibletextinterface_selection_isbase = value; }
	inline void setQAccessibleTextInterface_SelectionCount_IsBase(bool value) const { qaccessibletextinterface_selectioncount_isbase = value; }
	inline void setQAccessibleTextInterface_AddSelection_IsBase(bool value) const { qaccessibletextinterface_addselection_isbase = value; }
	inline void setQAccessibleTextInterface_RemoveSelection_IsBase(bool value) const { qaccessibletextinterface_removeselection_isbase = value; }
	inline void setQAccessibleTextInterface_SetSelection_IsBase(bool value) const { qaccessibletextinterface_setselection_isbase = value; }
	inline void setQAccessibleTextInterface_CursorPosition_IsBase(bool value) const { qaccessibletextinterface_cursorposition_isbase = value; }
	inline void setQAccessibleTextInterface_SetCursorPosition_IsBase(bool value) const { qaccessibletextinterface_setcursorposition_isbase = value; }
	inline void setQAccessibleTextInterface_Text_IsBase(bool value) const { qaccessibletextinterface_text_isbase = value; }
	inline void setQAccessibleTextInterface_TextBeforeOffset_IsBase(bool value) const { qaccessibletextinterface_textbeforeoffset_isbase = value; }
	inline void setQAccessibleTextInterface_TextAfterOffset_IsBase(bool value) const { qaccessibletextinterface_textafteroffset_isbase = value; }
	inline void setQAccessibleTextInterface_TextAtOffset_IsBase(bool value) const { qaccessibletextinterface_textatoffset_isbase = value; }
	inline void setQAccessibleTextInterface_CharacterCount_IsBase(bool value) const { qaccessibletextinterface_charactercount_isbase = value; }
	inline void setQAccessibleTextInterface_CharacterRect_IsBase(bool value) const { qaccessibletextinterface_characterrect_isbase = value; }
	inline void setQAccessibleTextInterface_OffsetAtPoint_IsBase(bool value) const { qaccessibletextinterface_offsetatpoint_isbase = value; }
	inline void setQAccessibleTextInterface_ScrollToSubstring_IsBase(bool value) const { qaccessibletextinterface_scrolltosubstring_isbase = value; }
	inline void setQAccessibleTextInterface_Attributes_IsBase(bool value) const { qaccessibletextinterface_attributes_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void selection(int selectionIndex, int* startOffset, int* endOffset) const override {
		if (qaccessibletextinterface_selection_callback != nullptr) {
			int cbval1 = selectionIndex;
			int* cbval2 = startOffset;
			int* cbval3 = endOffset;
			qaccessibletextinterface_selection_callback(this, cbval1, cbval2, cbval3);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int selectionCount() const override {
		if (qaccessibletextinterface_selectioncount_callback != nullptr) {
			int callback_ret = qaccessibletextinterface_selectioncount_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void addSelection(int startOffset, int endOffset) override {
		if (qaccessibletextinterface_addselection_callback != nullptr) {
			int cbval1 = startOffset;
			int cbval2 = endOffset;
			qaccessibletextinterface_addselection_callback(this, cbval1, cbval2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void removeSelection(int selectionIndex) override {
		if (qaccessibletextinterface_removeselection_callback != nullptr) {
			int cbval1 = selectionIndex;
			qaccessibletextinterface_removeselection_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelection(int selectionIndex, int startOffset, int endOffset) override {
		if (qaccessibletextinterface_setselection_callback != nullptr) {
			int cbval1 = selectionIndex;
			int cbval2 = startOffset;
			int cbval3 = endOffset;
			qaccessibletextinterface_setselection_callback(this, cbval1, cbval2, cbval3);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int cursorPosition() const override {
		if (qaccessibletextinterface_cursorposition_callback != nullptr) {
			int callback_ret = qaccessibletextinterface_cursorposition_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setCursorPosition(int position) override {
		if (qaccessibletextinterface_setcursorposition_callback != nullptr) {
			int cbval1 = position;
			qaccessibletextinterface_setcursorposition_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString text(int startOffset, int endOffset) const override {
		if (qaccessibletextinterface_text_callback != nullptr) {
			int cbval1 = startOffset;
			int cbval2 = endOffset;
			const char* callback_ret = qaccessibletextinterface_text_callback(this, cbval1, cbval2);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int* startOffset, int* endOffset) const override {
		if (qaccessibletextinterface_textbeforeoffset_isbase) {
			qaccessibletextinterface_textbeforeoffset_isbase = false;
			return QAccessibleTextInterface::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
		} else if (qaccessibletextinterface_textbeforeoffset_callback != nullptr) {
			int cbval1 = offset;
			int cbval2 = static_cast<int>(boundaryType);
			int* cbval3 = startOffset;
			int* cbval4 = endOffset;
			const char* callback_ret = qaccessibletextinterface_textbeforeoffset_callback(this, cbval1, cbval2, cbval3, cbval4);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QAccessibleTextInterface::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int* startOffset, int* endOffset) const override {
		if (qaccessibletextinterface_textafteroffset_isbase) {
			qaccessibletextinterface_textafteroffset_isbase = false;
			return QAccessibleTextInterface::textAfterOffset(offset, boundaryType, startOffset, endOffset);
		} else if (qaccessibletextinterface_textafteroffset_callback != nullptr) {
			int cbval1 = offset;
			int cbval2 = static_cast<int>(boundaryType);
			int* cbval3 = startOffset;
			int* cbval4 = endOffset;
			const char* callback_ret = qaccessibletextinterface_textafteroffset_callback(this, cbval1, cbval2, cbval3, cbval4);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QAccessibleTextInterface::textAfterOffset(offset, boundaryType, startOffset, endOffset);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int* startOffset, int* endOffset) const override {
		if (qaccessibletextinterface_textatoffset_isbase) {
			qaccessibletextinterface_textatoffset_isbase = false;
			return QAccessibleTextInterface::textAtOffset(offset, boundaryType, startOffset, endOffset);
		} else if (qaccessibletextinterface_textatoffset_callback != nullptr) {
			int cbval1 = offset;
			int cbval2 = static_cast<int>(boundaryType);
			int* cbval3 = startOffset;
			int* cbval4 = endOffset;
			const char* callback_ret = qaccessibletextinterface_textatoffset_callback(this, cbval1, cbval2, cbval3, cbval4);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QAccessibleTextInterface::textAtOffset(offset, boundaryType, startOffset, endOffset);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int characterCount() const override {
		if (qaccessibletextinterface_charactercount_callback != nullptr) {
			int callback_ret = qaccessibletextinterface_charactercount_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect characterRect(int offset) const override {
		if (qaccessibletextinterface_characterrect_callback != nullptr) {
			int cbval1 = offset;
			QRect* callback_ret = qaccessibletextinterface_characterrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int offsetAtPoint(const QPoint& point) const override {
		if (qaccessibletextinterface_offsetatpoint_callback != nullptr) {
			const QPoint* cbval1 = (const QPoint*)&point;
			int callback_ret = qaccessibletextinterface_offsetatpoint_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void scrollToSubstring(int startIndex, int endIndex) override {
		if (qaccessibletextinterface_scrolltosubstring_callback != nullptr) {
			int cbval1 = startIndex;
			int cbval2 = endIndex;
			qaccessibletextinterface_scrolltosubstring_callback(this, cbval1, cbval2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString attributes(int offset, int* startOffset, int* endOffset) const override {
		if (qaccessibletextinterface_attributes_callback != nullptr) {
			int cbval1 = offset;
			int* cbval2 = startOffset;
			int* cbval3 = endOffset;
			const char* callback_ret = qaccessibletextinterface_attributes_callback(this, cbval1, cbval2, cbval3);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return {};
		}
	}
};

// This class is a subclass of QAccessibleEditableTextInterface so that we can call protected methods
class VirtualQAccessibleEditableTextInterface : public QAccessibleEditableTextInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleEditableTextInterface= true;

	// Virtual class public types (including callbacks)
	using QAccessibleEditableTextInterface_DeleteText_Callback = void (*)(QAccessibleEditableTextInterface*, int, int);
	using QAccessibleEditableTextInterface_InsertText_Callback = void (*)(QAccessibleEditableTextInterface*, int, libqt_string);
	using QAccessibleEditableTextInterface_ReplaceText_Callback = void (*)(QAccessibleEditableTextInterface*, int, int, libqt_string);

protected:
	// Instance callback storage
	mutable QAccessibleEditableTextInterface_DeleteText_Callback qaccessibleeditabletextinterface_deletetext_callback = nullptr;
	mutable QAccessibleEditableTextInterface_InsertText_Callback qaccessibleeditabletextinterface_inserttext_callback = nullptr;
	mutable QAccessibleEditableTextInterface_ReplaceText_Callback qaccessibleeditabletextinterface_replacetext_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibleeditabletextinterface_deletetext_isbase = false;
    mutable bool qaccessibleeditabletextinterface_inserttext_isbase = false;
    mutable bool qaccessibleeditabletextinterface_replacetext_isbase = false;

public:
	VirtualQAccessibleEditableTextInterface(): QAccessibleEditableTextInterface() {};
	VirtualQAccessibleEditableTextInterface(const QAccessibleEditableTextInterface& param1): QAccessibleEditableTextInterface(param1) {};

	~VirtualQAccessibleEditableTextInterface() {
		qaccessibleeditabletextinterface_deletetext_callback = nullptr;
		qaccessibleeditabletextinterface_inserttext_callback = nullptr;
		qaccessibleeditabletextinterface_replacetext_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleEditableTextInterface_DeleteText_Callback(QAccessibleEditableTextInterface_DeleteText_Callback cb) const { qaccessibleeditabletextinterface_deletetext_callback = cb; }
	inline void setQAccessibleEditableTextInterface_InsertText_Callback(QAccessibleEditableTextInterface_InsertText_Callback cb) const { qaccessibleeditabletextinterface_inserttext_callback = cb; }
	inline void setQAccessibleEditableTextInterface_ReplaceText_Callback(QAccessibleEditableTextInterface_ReplaceText_Callback cb) const { qaccessibleeditabletextinterface_replacetext_callback = cb; }

// Base flag setters
	inline void setQAccessibleEditableTextInterface_DeleteText_IsBase(bool value) const { qaccessibleeditabletextinterface_deletetext_isbase = value; }
	inline void setQAccessibleEditableTextInterface_InsertText_IsBase(bool value) const { qaccessibleeditabletextinterface_inserttext_isbase = value; }
	inline void setQAccessibleEditableTextInterface_ReplaceText_IsBase(bool value) const { qaccessibleeditabletextinterface_replacetext_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void deleteText(int startOffset, int endOffset) override {
		if (qaccessibleeditabletextinterface_deletetext_callback != nullptr) {
			int cbval1 = startOffset;
			int cbval2 = endOffset;
			qaccessibleeditabletextinterface_deletetext_callback(this, cbval1, cbval2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void insertText(int offset, const QString& text) override {
		if (qaccessibleeditabletextinterface_inserttext_callback != nullptr) {
			int cbval1 = offset;
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval2;
			cbval2.len = text_qb.length();
			cbval2.data = static_cast<const char*>(text_qb.constData());
			qaccessibleeditabletextinterface_inserttext_callback(this, cbval1, cbval2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void replaceText(int startOffset, int endOffset, const QString& text) override {
		if (qaccessibleeditabletextinterface_replacetext_callback != nullptr) {
			int cbval1 = startOffset;
			int cbval2 = endOffset;
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval3;
			cbval3.len = text_qb.length();
			cbval3.data = static_cast<const char*>(text_qb.constData());
			qaccessibleeditabletextinterface_replacetext_callback(this, cbval1, cbval2, cbval3);
		}
	}
};

// This class is a subclass of QAccessibleValueInterface so that we can call protected methods
class VirtualQAccessibleValueInterface : public QAccessibleValueInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleValueInterface= true;

	// Virtual class public types (including callbacks)
	using QAccessibleValueInterface_CurrentValue_Callback = QVariant* (*)();
	using QAccessibleValueInterface_SetCurrentValue_Callback = void (*)(QAccessibleValueInterface*, const QVariant*);
	using QAccessibleValueInterface_MaximumValue_Callback = QVariant* (*)();
	using QAccessibleValueInterface_MinimumValue_Callback = QVariant* (*)();
	using QAccessibleValueInterface_MinimumStepSize_Callback = QVariant* (*)();

protected:
	// Instance callback storage
	mutable QAccessibleValueInterface_CurrentValue_Callback qaccessiblevalueinterface_currentvalue_callback = nullptr;
	mutable QAccessibleValueInterface_SetCurrentValue_Callback qaccessiblevalueinterface_setcurrentvalue_callback = nullptr;
	mutable QAccessibleValueInterface_MaximumValue_Callback qaccessiblevalueinterface_maximumvalue_callback = nullptr;
	mutable QAccessibleValueInterface_MinimumValue_Callback qaccessiblevalueinterface_minimumvalue_callback = nullptr;
	mutable QAccessibleValueInterface_MinimumStepSize_Callback qaccessiblevalueinterface_minimumstepsize_callback = nullptr;

	// Instance base flags
    mutable bool qaccessiblevalueinterface_currentvalue_isbase = false;
    mutable bool qaccessiblevalueinterface_setcurrentvalue_isbase = false;
    mutable bool qaccessiblevalueinterface_maximumvalue_isbase = false;
    mutable bool qaccessiblevalueinterface_minimumvalue_isbase = false;
    mutable bool qaccessiblevalueinterface_minimumstepsize_isbase = false;

public:
	VirtualQAccessibleValueInterface(): QAccessibleValueInterface() {};
	VirtualQAccessibleValueInterface(const QAccessibleValueInterface& param1): QAccessibleValueInterface(param1) {};

	~VirtualQAccessibleValueInterface() {
		qaccessiblevalueinterface_currentvalue_callback = nullptr;
		qaccessiblevalueinterface_setcurrentvalue_callback = nullptr;
		qaccessiblevalueinterface_maximumvalue_callback = nullptr;
		qaccessiblevalueinterface_minimumvalue_callback = nullptr;
		qaccessiblevalueinterface_minimumstepsize_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleValueInterface_CurrentValue_Callback(QAccessibleValueInterface_CurrentValue_Callback cb) const { qaccessiblevalueinterface_currentvalue_callback = cb; }
	inline void setQAccessibleValueInterface_SetCurrentValue_Callback(QAccessibleValueInterface_SetCurrentValue_Callback cb) const { qaccessiblevalueinterface_setcurrentvalue_callback = cb; }
	inline void setQAccessibleValueInterface_MaximumValue_Callback(QAccessibleValueInterface_MaximumValue_Callback cb) const { qaccessiblevalueinterface_maximumvalue_callback = cb; }
	inline void setQAccessibleValueInterface_MinimumValue_Callback(QAccessibleValueInterface_MinimumValue_Callback cb) const { qaccessiblevalueinterface_minimumvalue_callback = cb; }
	inline void setQAccessibleValueInterface_MinimumStepSize_Callback(QAccessibleValueInterface_MinimumStepSize_Callback cb) const { qaccessiblevalueinterface_minimumstepsize_callback = cb; }

// Base flag setters
	inline void setQAccessibleValueInterface_CurrentValue_IsBase(bool value) const { qaccessiblevalueinterface_currentvalue_isbase = value; }
	inline void setQAccessibleValueInterface_SetCurrentValue_IsBase(bool value) const { qaccessiblevalueinterface_setcurrentvalue_isbase = value; }
	inline void setQAccessibleValueInterface_MaximumValue_IsBase(bool value) const { qaccessiblevalueinterface_maximumvalue_isbase = value; }
	inline void setQAccessibleValueInterface_MinimumValue_IsBase(bool value) const { qaccessiblevalueinterface_minimumvalue_isbase = value; }
	inline void setQAccessibleValueInterface_MinimumStepSize_IsBase(bool value) const { qaccessiblevalueinterface_minimumstepsize_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QVariant currentValue() const override {
		if (qaccessiblevalueinterface_currentvalue_callback != nullptr) {
			QVariant* callback_ret = qaccessiblevalueinterface_currentvalue_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setCurrentValue(const QVariant& value) override {
		if (qaccessiblevalueinterface_setcurrentvalue_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&value;
			qaccessiblevalueinterface_setcurrentvalue_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant maximumValue() const override {
		if (qaccessiblevalueinterface_maximumvalue_callback != nullptr) {
			QVariant* callback_ret = qaccessiblevalueinterface_maximumvalue_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant minimumValue() const override {
		if (qaccessiblevalueinterface_minimumvalue_callback != nullptr) {
			QVariant* callback_ret = qaccessiblevalueinterface_minimumvalue_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant minimumStepSize() const override {
		if (qaccessiblevalueinterface_minimumstepsize_callback != nullptr) {
			QVariant* callback_ret = qaccessiblevalueinterface_minimumstepsize_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}
};

// This class is a subclass of QAccessibleTableCellInterface so that we can call protected methods
class VirtualQAccessibleTableCellInterface : public QAccessibleTableCellInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleTableCellInterface= true;

	// Virtual class public types (including callbacks)
	using QAccessibleTableCellInterface_IsSelected_Callback = bool (*)();
	using QAccessibleTableCellInterface_ColumnHeaderCells_Callback = libqt_list (*)();
	using QAccessibleTableCellInterface_RowHeaderCells_Callback = libqt_list (*)();
	using QAccessibleTableCellInterface_ColumnIndex_Callback = int (*)();
	using QAccessibleTableCellInterface_RowIndex_Callback = int (*)();
	using QAccessibleTableCellInterface_ColumnExtent_Callback = int (*)();
	using QAccessibleTableCellInterface_RowExtent_Callback = int (*)();
	using QAccessibleTableCellInterface_Table_Callback = QAccessibleInterface* (*)();

protected:
	// Instance callback storage
	mutable QAccessibleTableCellInterface_IsSelected_Callback qaccessibletablecellinterface_isselected_callback = nullptr;
	mutable QAccessibleTableCellInterface_ColumnHeaderCells_Callback qaccessibletablecellinterface_columnheadercells_callback = nullptr;
	mutable QAccessibleTableCellInterface_RowHeaderCells_Callback qaccessibletablecellinterface_rowheadercells_callback = nullptr;
	mutable QAccessibleTableCellInterface_ColumnIndex_Callback qaccessibletablecellinterface_columnindex_callback = nullptr;
	mutable QAccessibleTableCellInterface_RowIndex_Callback qaccessibletablecellinterface_rowindex_callback = nullptr;
	mutable QAccessibleTableCellInterface_ColumnExtent_Callback qaccessibletablecellinterface_columnextent_callback = nullptr;
	mutable QAccessibleTableCellInterface_RowExtent_Callback qaccessibletablecellinterface_rowextent_callback = nullptr;
	mutable QAccessibleTableCellInterface_Table_Callback qaccessibletablecellinterface_table_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibletablecellinterface_isselected_isbase = false;
    mutable bool qaccessibletablecellinterface_columnheadercells_isbase = false;
    mutable bool qaccessibletablecellinterface_rowheadercells_isbase = false;
    mutable bool qaccessibletablecellinterface_columnindex_isbase = false;
    mutable bool qaccessibletablecellinterface_rowindex_isbase = false;
    mutable bool qaccessibletablecellinterface_columnextent_isbase = false;
    mutable bool qaccessibletablecellinterface_rowextent_isbase = false;
    mutable bool qaccessibletablecellinterface_table_isbase = false;

public:
	VirtualQAccessibleTableCellInterface(): QAccessibleTableCellInterface() {};
	VirtualQAccessibleTableCellInterface(const QAccessibleTableCellInterface& param1): QAccessibleTableCellInterface(param1) {};

	~VirtualQAccessibleTableCellInterface() {
		qaccessibletablecellinterface_isselected_callback = nullptr;
		qaccessibletablecellinterface_columnheadercells_callback = nullptr;
		qaccessibletablecellinterface_rowheadercells_callback = nullptr;
		qaccessibletablecellinterface_columnindex_callback = nullptr;
		qaccessibletablecellinterface_rowindex_callback = nullptr;
		qaccessibletablecellinterface_columnextent_callback = nullptr;
		qaccessibletablecellinterface_rowextent_callback = nullptr;
		qaccessibletablecellinterface_table_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleTableCellInterface_IsSelected_Callback(QAccessibleTableCellInterface_IsSelected_Callback cb) const { qaccessibletablecellinterface_isselected_callback = cb; }
	inline void setQAccessibleTableCellInterface_ColumnHeaderCells_Callback(QAccessibleTableCellInterface_ColumnHeaderCells_Callback cb) const { qaccessibletablecellinterface_columnheadercells_callback = cb; }
	inline void setQAccessibleTableCellInterface_RowHeaderCells_Callback(QAccessibleTableCellInterface_RowHeaderCells_Callback cb) const { qaccessibletablecellinterface_rowheadercells_callback = cb; }
	inline void setQAccessibleTableCellInterface_ColumnIndex_Callback(QAccessibleTableCellInterface_ColumnIndex_Callback cb) const { qaccessibletablecellinterface_columnindex_callback = cb; }
	inline void setQAccessibleTableCellInterface_RowIndex_Callback(QAccessibleTableCellInterface_RowIndex_Callback cb) const { qaccessibletablecellinterface_rowindex_callback = cb; }
	inline void setQAccessibleTableCellInterface_ColumnExtent_Callback(QAccessibleTableCellInterface_ColumnExtent_Callback cb) const { qaccessibletablecellinterface_columnextent_callback = cb; }
	inline void setQAccessibleTableCellInterface_RowExtent_Callback(QAccessibleTableCellInterface_RowExtent_Callback cb) const { qaccessibletablecellinterface_rowextent_callback = cb; }
	inline void setQAccessibleTableCellInterface_Table_Callback(QAccessibleTableCellInterface_Table_Callback cb) const { qaccessibletablecellinterface_table_callback = cb; }

// Base flag setters
	inline void setQAccessibleTableCellInterface_IsSelected_IsBase(bool value) const { qaccessibletablecellinterface_isselected_isbase = value; }
	inline void setQAccessibleTableCellInterface_ColumnHeaderCells_IsBase(bool value) const { qaccessibletablecellinterface_columnheadercells_isbase = value; }
	inline void setQAccessibleTableCellInterface_RowHeaderCells_IsBase(bool value) const { qaccessibletablecellinterface_rowheadercells_isbase = value; }
	inline void setQAccessibleTableCellInterface_ColumnIndex_IsBase(bool value) const { qaccessibletablecellinterface_columnindex_isbase = value; }
	inline void setQAccessibleTableCellInterface_RowIndex_IsBase(bool value) const { qaccessibletablecellinterface_rowindex_isbase = value; }
	inline void setQAccessibleTableCellInterface_ColumnExtent_IsBase(bool value) const { qaccessibletablecellinterface_columnextent_isbase = value; }
	inline void setQAccessibleTableCellInterface_RowExtent_IsBase(bool value) const { qaccessibletablecellinterface_rowextent_isbase = value; }
	inline void setQAccessibleTableCellInterface_Table_IsBase(bool value) const { qaccessibletablecellinterface_table_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool isSelected() const override {
		if (qaccessibletablecellinterface_isselected_callback != nullptr) {
			bool callback_ret = qaccessibletablecellinterface_isselected_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QAccessibleInterface *> columnHeaderCells() const override {
		if (qaccessibletablecellinterface_columnheadercells_callback != nullptr) {
			libqt_list callback_ret = qaccessibletablecellinterface_columnheadercells_callback();
			return QList<QAccessibleInterface *>();
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QAccessibleInterface *> rowHeaderCells() const override {
		if (qaccessibletablecellinterface_rowheadercells_callback != nullptr) {
			libqt_list callback_ret = qaccessibletablecellinterface_rowheadercells_callback();
			return QList<QAccessibleInterface *>();
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int columnIndex() const override {
		if (qaccessibletablecellinterface_columnindex_callback != nullptr) {
			int callback_ret = qaccessibletablecellinterface_columnindex_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int rowIndex() const override {
		if (qaccessibletablecellinterface_rowindex_callback != nullptr) {
			int callback_ret = qaccessibletablecellinterface_rowindex_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int columnExtent() const override {
		if (qaccessibletablecellinterface_columnextent_callback != nullptr) {
			int callback_ret = qaccessibletablecellinterface_columnextent_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int rowExtent() const override {
		if (qaccessibletablecellinterface_rowextent_callback != nullptr) {
			int callback_ret = qaccessibletablecellinterface_rowextent_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* table() const override {
		if (qaccessibletablecellinterface_table_callback != nullptr) {
			QAccessibleInterface* callback_ret = qaccessibletablecellinterface_table_callback();
			return callback_ret;
		} else {
			return {};
		}
	}
};

// This class is a subclass of QAccessibleTableInterface so that we can call protected methods
class VirtualQAccessibleTableInterface : public QAccessibleTableInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleTableInterface= true;

	// Virtual class public types (including callbacks)
	using QAccessibleTableInterface_Caption_Callback = QAccessibleInterface* (*)();
	using QAccessibleTableInterface_Summary_Callback = QAccessibleInterface* (*)();
	using QAccessibleTableInterface_CellAt_Callback = QAccessibleInterface* (*)(const QAccessibleTableInterface*, int, int);
	using QAccessibleTableInterface_SelectedCellCount_Callback = int (*)();
	using QAccessibleTableInterface_SelectedCells_Callback = libqt_list (*)();
	using QAccessibleTableInterface_ColumnDescription_Callback = const char* (*)(const QAccessibleTableInterface*, int);
	using QAccessibleTableInterface_RowDescription_Callback = const char* (*)(const QAccessibleTableInterface*, int);
	using QAccessibleTableInterface_SelectedColumnCount_Callback = int (*)();
	using QAccessibleTableInterface_SelectedRowCount_Callback = int (*)();
	using QAccessibleTableInterface_ColumnCount_Callback = int (*)();
	using QAccessibleTableInterface_RowCount_Callback = int (*)();
	using QAccessibleTableInterface_SelectedColumns_Callback = libqt_list (*)();
	using QAccessibleTableInterface_SelectedRows_Callback = libqt_list (*)();
	using QAccessibleTableInterface_IsColumnSelected_Callback = bool (*)(const QAccessibleTableInterface*, int);
	using QAccessibleTableInterface_IsRowSelected_Callback = bool (*)(const QAccessibleTableInterface*, int);
	using QAccessibleTableInterface_SelectRow_Callback = bool (*)(QAccessibleTableInterface*, int);
	using QAccessibleTableInterface_SelectColumn_Callback = bool (*)(QAccessibleTableInterface*, int);
	using QAccessibleTableInterface_UnselectRow_Callback = bool (*)(QAccessibleTableInterface*, int);
	using QAccessibleTableInterface_UnselectColumn_Callback = bool (*)(QAccessibleTableInterface*, int);
	using QAccessibleTableInterface_ModelChange_Callback = void (*)(QAccessibleTableInterface*, QAccessibleTableModelChangeEvent*);
	using QAccessibleTableInterface_OperatorAssign_Callback = void (*)(QAccessibleTableInterface*, const QAccessibleTableInterface*);

protected:
	// Instance callback storage
	mutable QAccessibleTableInterface_Caption_Callback qaccessibletableinterface_caption_callback = nullptr;
	mutable QAccessibleTableInterface_Summary_Callback qaccessibletableinterface_summary_callback = nullptr;
	mutable QAccessibleTableInterface_CellAt_Callback qaccessibletableinterface_cellat_callback = nullptr;
	mutable QAccessibleTableInterface_SelectedCellCount_Callback qaccessibletableinterface_selectedcellcount_callback = nullptr;
	mutable QAccessibleTableInterface_SelectedCells_Callback qaccessibletableinterface_selectedcells_callback = nullptr;
	mutable QAccessibleTableInterface_ColumnDescription_Callback qaccessibletableinterface_columndescription_callback = nullptr;
	mutable QAccessibleTableInterface_RowDescription_Callback qaccessibletableinterface_rowdescription_callback = nullptr;
	mutable QAccessibleTableInterface_SelectedColumnCount_Callback qaccessibletableinterface_selectedcolumncount_callback = nullptr;
	mutable QAccessibleTableInterface_SelectedRowCount_Callback qaccessibletableinterface_selectedrowcount_callback = nullptr;
	mutable QAccessibleTableInterface_ColumnCount_Callback qaccessibletableinterface_columncount_callback = nullptr;
	mutable QAccessibleTableInterface_RowCount_Callback qaccessibletableinterface_rowcount_callback = nullptr;
	mutable QAccessibleTableInterface_SelectedColumns_Callback qaccessibletableinterface_selectedcolumns_callback = nullptr;
	mutable QAccessibleTableInterface_SelectedRows_Callback qaccessibletableinterface_selectedrows_callback = nullptr;
	mutable QAccessibleTableInterface_IsColumnSelected_Callback qaccessibletableinterface_iscolumnselected_callback = nullptr;
	mutable QAccessibleTableInterface_IsRowSelected_Callback qaccessibletableinterface_isrowselected_callback = nullptr;
	mutable QAccessibleTableInterface_SelectRow_Callback qaccessibletableinterface_selectrow_callback = nullptr;
	mutable QAccessibleTableInterface_SelectColumn_Callback qaccessibletableinterface_selectcolumn_callback = nullptr;
	mutable QAccessibleTableInterface_UnselectRow_Callback qaccessibletableinterface_unselectrow_callback = nullptr;
	mutable QAccessibleTableInterface_UnselectColumn_Callback qaccessibletableinterface_unselectcolumn_callback = nullptr;
	mutable QAccessibleTableInterface_ModelChange_Callback qaccessibletableinterface_modelchange_callback = nullptr;
	mutable QAccessibleTableInterface_OperatorAssign_Callback qaccessibletableinterface_operatorassign_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibletableinterface_caption_isbase = false;
    mutable bool qaccessibletableinterface_summary_isbase = false;
    mutable bool qaccessibletableinterface_cellat_isbase = false;
    mutable bool qaccessibletableinterface_selectedcellcount_isbase = false;
    mutable bool qaccessibletableinterface_selectedcells_isbase = false;
    mutable bool qaccessibletableinterface_columndescription_isbase = false;
    mutable bool qaccessibletableinterface_rowdescription_isbase = false;
    mutable bool qaccessibletableinterface_selectedcolumncount_isbase = false;
    mutable bool qaccessibletableinterface_selectedrowcount_isbase = false;
    mutable bool qaccessibletableinterface_columncount_isbase = false;
    mutable bool qaccessibletableinterface_rowcount_isbase = false;
    mutable bool qaccessibletableinterface_selectedcolumns_isbase = false;
    mutable bool qaccessibletableinterface_selectedrows_isbase = false;
    mutable bool qaccessibletableinterface_iscolumnselected_isbase = false;
    mutable bool qaccessibletableinterface_isrowselected_isbase = false;
    mutable bool qaccessibletableinterface_selectrow_isbase = false;
    mutable bool qaccessibletableinterface_selectcolumn_isbase = false;
    mutable bool qaccessibletableinterface_unselectrow_isbase = false;
    mutable bool qaccessibletableinterface_unselectcolumn_isbase = false;
    mutable bool qaccessibletableinterface_modelchange_isbase = false;
    mutable bool qaccessibletableinterface_operatorassign_isbase = false;

public:
	VirtualQAccessibleTableInterface(): QAccessibleTableInterface() {};
	VirtualQAccessibleTableInterface(const QAccessibleTableInterface& param1): QAccessibleTableInterface(param1) {};

	~VirtualQAccessibleTableInterface() {
		qaccessibletableinterface_caption_callback = nullptr;
		qaccessibletableinterface_summary_callback = nullptr;
		qaccessibletableinterface_cellat_callback = nullptr;
		qaccessibletableinterface_selectedcellcount_callback = nullptr;
		qaccessibletableinterface_selectedcells_callback = nullptr;
		qaccessibletableinterface_columndescription_callback = nullptr;
		qaccessibletableinterface_rowdescription_callback = nullptr;
		qaccessibletableinterface_selectedcolumncount_callback = nullptr;
		qaccessibletableinterface_selectedrowcount_callback = nullptr;
		qaccessibletableinterface_columncount_callback = nullptr;
		qaccessibletableinterface_rowcount_callback = nullptr;
		qaccessibletableinterface_selectedcolumns_callback = nullptr;
		qaccessibletableinterface_selectedrows_callback = nullptr;
		qaccessibletableinterface_iscolumnselected_callback = nullptr;
		qaccessibletableinterface_isrowselected_callback = nullptr;
		qaccessibletableinterface_selectrow_callback = nullptr;
		qaccessibletableinterface_selectcolumn_callback = nullptr;
		qaccessibletableinterface_unselectrow_callback = nullptr;
		qaccessibletableinterface_unselectcolumn_callback = nullptr;
		qaccessibletableinterface_modelchange_callback = nullptr;
		qaccessibletableinterface_operatorassign_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleTableInterface_Caption_Callback(QAccessibleTableInterface_Caption_Callback cb) const { qaccessibletableinterface_caption_callback = cb; }
	inline void setQAccessibleTableInterface_Summary_Callback(QAccessibleTableInterface_Summary_Callback cb) const { qaccessibletableinterface_summary_callback = cb; }
	inline void setQAccessibleTableInterface_CellAt_Callback(QAccessibleTableInterface_CellAt_Callback cb) const { qaccessibletableinterface_cellat_callback = cb; }
	inline void setQAccessibleTableInterface_SelectedCellCount_Callback(QAccessibleTableInterface_SelectedCellCount_Callback cb) const { qaccessibletableinterface_selectedcellcount_callback = cb; }
	inline void setQAccessibleTableInterface_SelectedCells_Callback(QAccessibleTableInterface_SelectedCells_Callback cb) const { qaccessibletableinterface_selectedcells_callback = cb; }
	inline void setQAccessibleTableInterface_ColumnDescription_Callback(QAccessibleTableInterface_ColumnDescription_Callback cb) const { qaccessibletableinterface_columndescription_callback = cb; }
	inline void setQAccessibleTableInterface_RowDescription_Callback(QAccessibleTableInterface_RowDescription_Callback cb) const { qaccessibletableinterface_rowdescription_callback = cb; }
	inline void setQAccessibleTableInterface_SelectedColumnCount_Callback(QAccessibleTableInterface_SelectedColumnCount_Callback cb) const { qaccessibletableinterface_selectedcolumncount_callback = cb; }
	inline void setQAccessibleTableInterface_SelectedRowCount_Callback(QAccessibleTableInterface_SelectedRowCount_Callback cb) const { qaccessibletableinterface_selectedrowcount_callback = cb; }
	inline void setQAccessibleTableInterface_ColumnCount_Callback(QAccessibleTableInterface_ColumnCount_Callback cb) const { qaccessibletableinterface_columncount_callback = cb; }
	inline void setQAccessibleTableInterface_RowCount_Callback(QAccessibleTableInterface_RowCount_Callback cb) const { qaccessibletableinterface_rowcount_callback = cb; }
	inline void setQAccessibleTableInterface_SelectedColumns_Callback(QAccessibleTableInterface_SelectedColumns_Callback cb) const { qaccessibletableinterface_selectedcolumns_callback = cb; }
	inline void setQAccessibleTableInterface_SelectedRows_Callback(QAccessibleTableInterface_SelectedRows_Callback cb) const { qaccessibletableinterface_selectedrows_callback = cb; }
	inline void setQAccessibleTableInterface_IsColumnSelected_Callback(QAccessibleTableInterface_IsColumnSelected_Callback cb) const { qaccessibletableinterface_iscolumnselected_callback = cb; }
	inline void setQAccessibleTableInterface_IsRowSelected_Callback(QAccessibleTableInterface_IsRowSelected_Callback cb) const { qaccessibletableinterface_isrowselected_callback = cb; }
	inline void setQAccessibleTableInterface_SelectRow_Callback(QAccessibleTableInterface_SelectRow_Callback cb) const { qaccessibletableinterface_selectrow_callback = cb; }
	inline void setQAccessibleTableInterface_SelectColumn_Callback(QAccessibleTableInterface_SelectColumn_Callback cb) const { qaccessibletableinterface_selectcolumn_callback = cb; }
	inline void setQAccessibleTableInterface_UnselectRow_Callback(QAccessibleTableInterface_UnselectRow_Callback cb) const { qaccessibletableinterface_unselectrow_callback = cb; }
	inline void setQAccessibleTableInterface_UnselectColumn_Callback(QAccessibleTableInterface_UnselectColumn_Callback cb) const { qaccessibletableinterface_unselectcolumn_callback = cb; }
	inline void setQAccessibleTableInterface_ModelChange_Callback(QAccessibleTableInterface_ModelChange_Callback cb) const { qaccessibletableinterface_modelchange_callback = cb; }
	inline void setQAccessibleTableInterface_OperatorAssign_Callback(QAccessibleTableInterface_OperatorAssign_Callback cb) const { qaccessibletableinterface_operatorassign_callback = cb; }

// Base flag setters
	inline void setQAccessibleTableInterface_Caption_IsBase(bool value) const { qaccessibletableinterface_caption_isbase = value; }
	inline void setQAccessibleTableInterface_Summary_IsBase(bool value) const { qaccessibletableinterface_summary_isbase = value; }
	inline void setQAccessibleTableInterface_CellAt_IsBase(bool value) const { qaccessibletableinterface_cellat_isbase = value; }
	inline void setQAccessibleTableInterface_SelectedCellCount_IsBase(bool value) const { qaccessibletableinterface_selectedcellcount_isbase = value; }
	inline void setQAccessibleTableInterface_SelectedCells_IsBase(bool value) const { qaccessibletableinterface_selectedcells_isbase = value; }
	inline void setQAccessibleTableInterface_ColumnDescription_IsBase(bool value) const { qaccessibletableinterface_columndescription_isbase = value; }
	inline void setQAccessibleTableInterface_RowDescription_IsBase(bool value) const { qaccessibletableinterface_rowdescription_isbase = value; }
	inline void setQAccessibleTableInterface_SelectedColumnCount_IsBase(bool value) const { qaccessibletableinterface_selectedcolumncount_isbase = value; }
	inline void setQAccessibleTableInterface_SelectedRowCount_IsBase(bool value) const { qaccessibletableinterface_selectedrowcount_isbase = value; }
	inline void setQAccessibleTableInterface_ColumnCount_IsBase(bool value) const { qaccessibletableinterface_columncount_isbase = value; }
	inline void setQAccessibleTableInterface_RowCount_IsBase(bool value) const { qaccessibletableinterface_rowcount_isbase = value; }
	inline void setQAccessibleTableInterface_SelectedColumns_IsBase(bool value) const { qaccessibletableinterface_selectedcolumns_isbase = value; }
	inline void setQAccessibleTableInterface_SelectedRows_IsBase(bool value) const { qaccessibletableinterface_selectedrows_isbase = value; }
	inline void setQAccessibleTableInterface_IsColumnSelected_IsBase(bool value) const { qaccessibletableinterface_iscolumnselected_isbase = value; }
	inline void setQAccessibleTableInterface_IsRowSelected_IsBase(bool value) const { qaccessibletableinterface_isrowselected_isbase = value; }
	inline void setQAccessibleTableInterface_SelectRow_IsBase(bool value) const { qaccessibletableinterface_selectrow_isbase = value; }
	inline void setQAccessibleTableInterface_SelectColumn_IsBase(bool value) const { qaccessibletableinterface_selectcolumn_isbase = value; }
	inline void setQAccessibleTableInterface_UnselectRow_IsBase(bool value) const { qaccessibletableinterface_unselectrow_isbase = value; }
	inline void setQAccessibleTableInterface_UnselectColumn_IsBase(bool value) const { qaccessibletableinterface_unselectcolumn_isbase = value; }
	inline void setQAccessibleTableInterface_ModelChange_IsBase(bool value) const { qaccessibletableinterface_modelchange_isbase = value; }
	inline void setQAccessibleTableInterface_OperatorAssign_IsBase(bool value) const { qaccessibletableinterface_operatorassign_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* caption() const override {
		if (qaccessibletableinterface_caption_callback != nullptr) {
			QAccessibleInterface* callback_ret = qaccessibletableinterface_caption_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* summary() const override {
		if (qaccessibletableinterface_summary_callback != nullptr) {
			QAccessibleInterface* callback_ret = qaccessibletableinterface_summary_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* cellAt(int row, int column) const override {
		if (qaccessibletableinterface_cellat_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			QAccessibleInterface* callback_ret = qaccessibletableinterface_cellat_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int selectedCellCount() const override {
		if (qaccessibletableinterface_selectedcellcount_callback != nullptr) {
			int callback_ret = qaccessibletableinterface_selectedcellcount_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QAccessibleInterface *> selectedCells() const override {
		if (qaccessibletableinterface_selectedcells_callback != nullptr) {
			libqt_list callback_ret = qaccessibletableinterface_selectedcells_callback();
			return QList<QAccessibleInterface *>();
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString columnDescription(int column) const override {
		if (qaccessibletableinterface_columndescription_callback != nullptr) {
			int cbval1 = column;
			const char* callback_ret = qaccessibletableinterface_columndescription_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString rowDescription(int row) const override {
		if (qaccessibletableinterface_rowdescription_callback != nullptr) {
			int cbval1 = row;
			const char* callback_ret = qaccessibletableinterface_rowdescription_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int selectedColumnCount() const override {
		if (qaccessibletableinterface_selectedcolumncount_callback != nullptr) {
			int callback_ret = qaccessibletableinterface_selectedcolumncount_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int selectedRowCount() const override {
		if (qaccessibletableinterface_selectedrowcount_callback != nullptr) {
			int callback_ret = qaccessibletableinterface_selectedrowcount_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int columnCount() const override {
		if (qaccessibletableinterface_columncount_callback != nullptr) {
			int callback_ret = qaccessibletableinterface_columncount_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int rowCount() const override {
		if (qaccessibletableinterface_rowcount_callback != nullptr) {
			int callback_ret = qaccessibletableinterface_rowcount_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<int> selectedColumns() const override {
		if (qaccessibletableinterface_selectedcolumns_callback != nullptr) {
			libqt_list callback_ret = qaccessibletableinterface_selectedcolumns_callback();
			return QList<int>();
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<int> selectedRows() const override {
		if (qaccessibletableinterface_selectedrows_callback != nullptr) {
			libqt_list callback_ret = qaccessibletableinterface_selectedrows_callback();
			return QList<int>();
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isColumnSelected(int column) const override {
		if (qaccessibletableinterface_iscolumnselected_callback != nullptr) {
			int cbval1 = column;
			bool callback_ret = qaccessibletableinterface_iscolumnselected_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isRowSelected(int row) const override {
		if (qaccessibletableinterface_isrowselected_callback != nullptr) {
			int cbval1 = row;
			bool callback_ret = qaccessibletableinterface_isrowselected_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool selectRow(int row) override {
		if (qaccessibletableinterface_selectrow_callback != nullptr) {
			int cbval1 = row;
			bool callback_ret = qaccessibletableinterface_selectrow_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool selectColumn(int column) override {
		if (qaccessibletableinterface_selectcolumn_callback != nullptr) {
			int cbval1 = column;
			bool callback_ret = qaccessibletableinterface_selectcolumn_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool unselectRow(int row) override {
		if (qaccessibletableinterface_unselectrow_callback != nullptr) {
			int cbval1 = row;
			bool callback_ret = qaccessibletableinterface_unselectrow_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool unselectColumn(int column) override {
		if (qaccessibletableinterface_unselectcolumn_callback != nullptr) {
			int cbval1 = column;
			bool callback_ret = qaccessibletableinterface_unselectcolumn_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void modelChange(QAccessibleTableModelChangeEvent* event) override {
		if (qaccessibletableinterface_modelchange_callback != nullptr) {
			QAccessibleTableModelChangeEvent* cbval1 = event;
			qaccessibletableinterface_modelchange_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QAccessibleTableInterface& param1) {
		if (qaccessibletableinterface_operatorassign_isbase) {
			qaccessibletableinterface_operatorassign_isbase = false;
			QAccessibleTableInterface::operator=(param1);
		} else if (qaccessibletableinterface_operatorassign_callback != nullptr) {
			const QAccessibleTableInterface* cbval1 = (const QAccessibleTableInterface*)&param1;
			qaccessibletableinterface_operatorassign_callback(this, cbval1);
		} else {
			QAccessibleTableInterface::operator=(param1);
		}
	}

	// Friend functions
	friend void QAccessibleTableInterface_OperatorAssign(QAccessibleTableInterface* self, const QAccessibleTableInterface* param1);
	friend void QAccessibleTableInterface_QBaseOperatorAssign(QAccessibleTableInterface* self, const QAccessibleTableInterface* param1);
};

// This class is a subclass of QAccessibleActionInterface so that we can call protected methods
class VirtualQAccessibleActionInterface : public QAccessibleActionInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleActionInterface= true;

	// Virtual class public types (including callbacks)
	using QAccessibleActionInterface_ActionNames_Callback = libqt_list (*)();
	using QAccessibleActionInterface_LocalizedActionName_Callback = const char* (*)(const QAccessibleActionInterface*, libqt_string);
	using QAccessibleActionInterface_LocalizedActionDescription_Callback = const char* (*)(const QAccessibleActionInterface*, libqt_string);
	using QAccessibleActionInterface_DoAction_Callback = void (*)(QAccessibleActionInterface*, libqt_string);
	using QAccessibleActionInterface_KeyBindingsForAction_Callback = libqt_list (*)(const QAccessibleActionInterface*, libqt_string);

protected:
	// Instance callback storage
	mutable QAccessibleActionInterface_ActionNames_Callback qaccessibleactioninterface_actionnames_callback = nullptr;
	mutable QAccessibleActionInterface_LocalizedActionName_Callback qaccessibleactioninterface_localizedactionname_callback = nullptr;
	mutable QAccessibleActionInterface_LocalizedActionDescription_Callback qaccessibleactioninterface_localizedactiondescription_callback = nullptr;
	mutable QAccessibleActionInterface_DoAction_Callback qaccessibleactioninterface_doaction_callback = nullptr;
	mutable QAccessibleActionInterface_KeyBindingsForAction_Callback qaccessibleactioninterface_keybindingsforaction_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibleactioninterface_actionnames_isbase = false;
    mutable bool qaccessibleactioninterface_localizedactionname_isbase = false;
    mutable bool qaccessibleactioninterface_localizedactiondescription_isbase = false;
    mutable bool qaccessibleactioninterface_doaction_isbase = false;
    mutable bool qaccessibleactioninterface_keybindingsforaction_isbase = false;

public:
	VirtualQAccessibleActionInterface(): QAccessibleActionInterface() {};
	VirtualQAccessibleActionInterface(const QAccessibleActionInterface& param1): QAccessibleActionInterface(param1) {};

	~VirtualQAccessibleActionInterface() {
		qaccessibleactioninterface_actionnames_callback = nullptr;
		qaccessibleactioninterface_localizedactionname_callback = nullptr;
		qaccessibleactioninterface_localizedactiondescription_callback = nullptr;
		qaccessibleactioninterface_doaction_callback = nullptr;
		qaccessibleactioninterface_keybindingsforaction_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleActionInterface_ActionNames_Callback(QAccessibleActionInterface_ActionNames_Callback cb) const { qaccessibleactioninterface_actionnames_callback = cb; }
	inline void setQAccessibleActionInterface_LocalizedActionName_Callback(QAccessibleActionInterface_LocalizedActionName_Callback cb) const { qaccessibleactioninterface_localizedactionname_callback = cb; }
	inline void setQAccessibleActionInterface_LocalizedActionDescription_Callback(QAccessibleActionInterface_LocalizedActionDescription_Callback cb) const { qaccessibleactioninterface_localizedactiondescription_callback = cb; }
	inline void setQAccessibleActionInterface_DoAction_Callback(QAccessibleActionInterface_DoAction_Callback cb) const { qaccessibleactioninterface_doaction_callback = cb; }
	inline void setQAccessibleActionInterface_KeyBindingsForAction_Callback(QAccessibleActionInterface_KeyBindingsForAction_Callback cb) const { qaccessibleactioninterface_keybindingsforaction_callback = cb; }

// Base flag setters
	inline void setQAccessibleActionInterface_ActionNames_IsBase(bool value) const { qaccessibleactioninterface_actionnames_isbase = value; }
	inline void setQAccessibleActionInterface_LocalizedActionName_IsBase(bool value) const { qaccessibleactioninterface_localizedactionname_isbase = value; }
	inline void setQAccessibleActionInterface_LocalizedActionDescription_IsBase(bool value) const { qaccessibleactioninterface_localizedactiondescription_isbase = value; }
	inline void setQAccessibleActionInterface_DoAction_IsBase(bool value) const { qaccessibleactioninterface_doaction_isbase = value; }
	inline void setQAccessibleActionInterface_KeyBindingsForAction_IsBase(bool value) const { qaccessibleactioninterface_keybindingsforaction_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QList<QString> actionNames() const override {
		if (qaccessibleactioninterface_actionnames_callback != nullptr) {
			libqt_list callback_ret = qaccessibleactioninterface_actionnames_callback();
			return QList<QString>();
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString localizedActionName(const QString& name) const override {
		if (qaccessibleactioninterface_localizedactionname_isbase) {
			qaccessibleactioninterface_localizedactionname_isbase = false;
			return QAccessibleActionInterface::localizedActionName(name);
		} else if (qaccessibleactioninterface_localizedactionname_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			const char* callback_ret = qaccessibleactioninterface_localizedactionname_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QAccessibleActionInterface::localizedActionName(name);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString localizedActionDescription(const QString& name) const override {
		if (qaccessibleactioninterface_localizedactiondescription_isbase) {
			qaccessibleactioninterface_localizedactiondescription_isbase = false;
			return QAccessibleActionInterface::localizedActionDescription(name);
		} else if (qaccessibleactioninterface_localizedactiondescription_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			const char* callback_ret = qaccessibleactioninterface_localizedactiondescription_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QAccessibleActionInterface::localizedActionDescription(name);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void doAction(const QString& actionName) override {
		if (qaccessibleactioninterface_doaction_callback != nullptr) {
			QByteArray actionName_qb = actionName.toUtf8();
			libqt_string cbval1;
			cbval1.len = actionName_qb.length();
			cbval1.data = static_cast<const char*>(actionName_qb.constData());
			qaccessibleactioninterface_doaction_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> keyBindingsForAction(const QString& actionName) const override {
		if (qaccessibleactioninterface_keybindingsforaction_callback != nullptr) {
			QByteArray actionName_qb = actionName.toUtf8();
			libqt_string cbval1;
			cbval1.len = actionName_qb.length();
			cbval1.data = static_cast<const char*>(actionName_qb.constData());
			libqt_list callback_ret = qaccessibleactioninterface_keybindingsforaction_callback(this, cbval1);
			return QList<QString>();
		} else {
			return {};
		}
	}
};

// This class is a subclass of QAccessibleImageInterface so that we can call protected methods
class VirtualQAccessibleImageInterface : public QAccessibleImageInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleImageInterface= true;

	// Virtual class public types (including callbacks)
	using QAccessibleImageInterface_ImageDescription_Callback = const char* (*)();
	using QAccessibleImageInterface_ImageSize_Callback = QSize* (*)();
	using QAccessibleImageInterface_ImagePosition_Callback = QPoint* (*)();

protected:
	// Instance callback storage
	mutable QAccessibleImageInterface_ImageDescription_Callback qaccessibleimageinterface_imagedescription_callback = nullptr;
	mutable QAccessibleImageInterface_ImageSize_Callback qaccessibleimageinterface_imagesize_callback = nullptr;
	mutable QAccessibleImageInterface_ImagePosition_Callback qaccessibleimageinterface_imageposition_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibleimageinterface_imagedescription_isbase = false;
    mutable bool qaccessibleimageinterface_imagesize_isbase = false;
    mutable bool qaccessibleimageinterface_imageposition_isbase = false;

public:
	VirtualQAccessibleImageInterface(): QAccessibleImageInterface() {};
	VirtualQAccessibleImageInterface(const QAccessibleImageInterface& param1): QAccessibleImageInterface(param1) {};

	~VirtualQAccessibleImageInterface() {
		qaccessibleimageinterface_imagedescription_callback = nullptr;
		qaccessibleimageinterface_imagesize_callback = nullptr;
		qaccessibleimageinterface_imageposition_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleImageInterface_ImageDescription_Callback(QAccessibleImageInterface_ImageDescription_Callback cb) const { qaccessibleimageinterface_imagedescription_callback = cb; }
	inline void setQAccessibleImageInterface_ImageSize_Callback(QAccessibleImageInterface_ImageSize_Callback cb) const { qaccessibleimageinterface_imagesize_callback = cb; }
	inline void setQAccessibleImageInterface_ImagePosition_Callback(QAccessibleImageInterface_ImagePosition_Callback cb) const { qaccessibleimageinterface_imageposition_callback = cb; }

// Base flag setters
	inline void setQAccessibleImageInterface_ImageDescription_IsBase(bool value) const { qaccessibleimageinterface_imagedescription_isbase = value; }
	inline void setQAccessibleImageInterface_ImageSize_IsBase(bool value) const { qaccessibleimageinterface_imagesize_isbase = value; }
	inline void setQAccessibleImageInterface_ImagePosition_IsBase(bool value) const { qaccessibleimageinterface_imageposition_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QString imageDescription() const override {
		if (qaccessibleimageinterface_imagedescription_callback != nullptr) {
			const char* callback_ret = qaccessibleimageinterface_imagedescription_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize imageSize() const override {
		if (qaccessibleimageinterface_imagesize_callback != nullptr) {
			QSize* callback_ret = qaccessibleimageinterface_imagesize_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPoint imagePosition() const override {
		if (qaccessibleimageinterface_imageposition_callback != nullptr) {
			QPoint* callback_ret = qaccessibleimageinterface_imageposition_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}
};

// This class is a subclass of QAccessibleHyperlinkInterface so that we can call protected methods
class VirtualQAccessibleHyperlinkInterface : public QAccessibleHyperlinkInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleHyperlinkInterface= true;

	// Virtual class public types (including callbacks)
	using QAccessibleHyperlinkInterface_Anchor_Callback = const char* (*)();
	using QAccessibleHyperlinkInterface_AnchorTarget_Callback = const char* (*)();
	using QAccessibleHyperlinkInterface_StartIndex_Callback = int (*)();
	using QAccessibleHyperlinkInterface_EndIndex_Callback = int (*)();
	using QAccessibleHyperlinkInterface_IsValid_Callback = bool (*)();

protected:
	// Instance callback storage
	mutable QAccessibleHyperlinkInterface_Anchor_Callback qaccessiblehyperlinkinterface_anchor_callback = nullptr;
	mutable QAccessibleHyperlinkInterface_AnchorTarget_Callback qaccessiblehyperlinkinterface_anchortarget_callback = nullptr;
	mutable QAccessibleHyperlinkInterface_StartIndex_Callback qaccessiblehyperlinkinterface_startindex_callback = nullptr;
	mutable QAccessibleHyperlinkInterface_EndIndex_Callback qaccessiblehyperlinkinterface_endindex_callback = nullptr;
	mutable QAccessibleHyperlinkInterface_IsValid_Callback qaccessiblehyperlinkinterface_isvalid_callback = nullptr;

	// Instance base flags
    mutable bool qaccessiblehyperlinkinterface_anchor_isbase = false;
    mutable bool qaccessiblehyperlinkinterface_anchortarget_isbase = false;
    mutable bool qaccessiblehyperlinkinterface_startindex_isbase = false;
    mutable bool qaccessiblehyperlinkinterface_endindex_isbase = false;
    mutable bool qaccessiblehyperlinkinterface_isvalid_isbase = false;

public:
	VirtualQAccessibleHyperlinkInterface(): QAccessibleHyperlinkInterface() {};
	VirtualQAccessibleHyperlinkInterface(const QAccessibleHyperlinkInterface& param1): QAccessibleHyperlinkInterface(param1) {};

	~VirtualQAccessibleHyperlinkInterface() {
		qaccessiblehyperlinkinterface_anchor_callback = nullptr;
		qaccessiblehyperlinkinterface_anchortarget_callback = nullptr;
		qaccessiblehyperlinkinterface_startindex_callback = nullptr;
		qaccessiblehyperlinkinterface_endindex_callback = nullptr;
		qaccessiblehyperlinkinterface_isvalid_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleHyperlinkInterface_Anchor_Callback(QAccessibleHyperlinkInterface_Anchor_Callback cb) const { qaccessiblehyperlinkinterface_anchor_callback = cb; }
	inline void setQAccessibleHyperlinkInterface_AnchorTarget_Callback(QAccessibleHyperlinkInterface_AnchorTarget_Callback cb) const { qaccessiblehyperlinkinterface_anchortarget_callback = cb; }
	inline void setQAccessibleHyperlinkInterface_StartIndex_Callback(QAccessibleHyperlinkInterface_StartIndex_Callback cb) const { qaccessiblehyperlinkinterface_startindex_callback = cb; }
	inline void setQAccessibleHyperlinkInterface_EndIndex_Callback(QAccessibleHyperlinkInterface_EndIndex_Callback cb) const { qaccessiblehyperlinkinterface_endindex_callback = cb; }
	inline void setQAccessibleHyperlinkInterface_IsValid_Callback(QAccessibleHyperlinkInterface_IsValid_Callback cb) const { qaccessiblehyperlinkinterface_isvalid_callback = cb; }

// Base flag setters
	inline void setQAccessibleHyperlinkInterface_Anchor_IsBase(bool value) const { qaccessiblehyperlinkinterface_anchor_isbase = value; }
	inline void setQAccessibleHyperlinkInterface_AnchorTarget_IsBase(bool value) const { qaccessiblehyperlinkinterface_anchortarget_isbase = value; }
	inline void setQAccessibleHyperlinkInterface_StartIndex_IsBase(bool value) const { qaccessiblehyperlinkinterface_startindex_isbase = value; }
	inline void setQAccessibleHyperlinkInterface_EndIndex_IsBase(bool value) const { qaccessiblehyperlinkinterface_endindex_isbase = value; }
	inline void setQAccessibleHyperlinkInterface_IsValid_IsBase(bool value) const { qaccessiblehyperlinkinterface_isvalid_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QString anchor() const override {
		if (qaccessiblehyperlinkinterface_anchor_callback != nullptr) {
			const char* callback_ret = qaccessiblehyperlinkinterface_anchor_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString anchorTarget() const override {
		if (qaccessiblehyperlinkinterface_anchortarget_callback != nullptr) {
			const char* callback_ret = qaccessiblehyperlinkinterface_anchortarget_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int startIndex() const override {
		if (qaccessiblehyperlinkinterface_startindex_callback != nullptr) {
			int callback_ret = qaccessiblehyperlinkinterface_startindex_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int endIndex() const override {
		if (qaccessiblehyperlinkinterface_endindex_callback != nullptr) {
			int callback_ret = qaccessiblehyperlinkinterface_endindex_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isValid() const override {
		if (qaccessiblehyperlinkinterface_isvalid_callback != nullptr) {
			bool callback_ret = qaccessiblehyperlinkinterface_isvalid_callback();
			return callback_ret;
		} else {
			return {};
		}
	}
};

// This class is a subclass of QAccessibleSelectionInterface so that we can call protected methods
class VirtualQAccessibleSelectionInterface : public QAccessibleSelectionInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleSelectionInterface= true;

	// Virtual class public types (including callbacks)
	using QAccessibleSelectionInterface_SelectedItemCount_Callback = int (*)();
	using QAccessibleSelectionInterface_SelectedItems_Callback = libqt_list (*)();
	using QAccessibleSelectionInterface_SelectedItem_Callback = QAccessibleInterface* (*)(const QAccessibleSelectionInterface*, int);
	using QAccessibleSelectionInterface_IsSelected_Callback = bool (*)(const QAccessibleSelectionInterface*, QAccessibleInterface*);
	using QAccessibleSelectionInterface_Select_Callback = bool (*)(QAccessibleSelectionInterface*, QAccessibleInterface*);
	using QAccessibleSelectionInterface_Unselect_Callback = bool (*)(QAccessibleSelectionInterface*, QAccessibleInterface*);
	using QAccessibleSelectionInterface_SelectAll_Callback = bool (*)();
	using QAccessibleSelectionInterface_Clear_Callback = bool (*)();

protected:
	// Instance callback storage
	mutable QAccessibleSelectionInterface_SelectedItemCount_Callback qaccessibleselectioninterface_selecteditemcount_callback = nullptr;
	mutable QAccessibleSelectionInterface_SelectedItems_Callback qaccessibleselectioninterface_selecteditems_callback = nullptr;
	mutable QAccessibleSelectionInterface_SelectedItem_Callback qaccessibleselectioninterface_selecteditem_callback = nullptr;
	mutable QAccessibleSelectionInterface_IsSelected_Callback qaccessibleselectioninterface_isselected_callback = nullptr;
	mutable QAccessibleSelectionInterface_Select_Callback qaccessibleselectioninterface_select_callback = nullptr;
	mutable QAccessibleSelectionInterface_Unselect_Callback qaccessibleselectioninterface_unselect_callback = nullptr;
	mutable QAccessibleSelectionInterface_SelectAll_Callback qaccessibleselectioninterface_selectall_callback = nullptr;
	mutable QAccessibleSelectionInterface_Clear_Callback qaccessibleselectioninterface_clear_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibleselectioninterface_selecteditemcount_isbase = false;
    mutable bool qaccessibleselectioninterface_selecteditems_isbase = false;
    mutable bool qaccessibleselectioninterface_selecteditem_isbase = false;
    mutable bool qaccessibleselectioninterface_isselected_isbase = false;
    mutable bool qaccessibleselectioninterface_select_isbase = false;
    mutable bool qaccessibleselectioninterface_unselect_isbase = false;
    mutable bool qaccessibleselectioninterface_selectall_isbase = false;
    mutable bool qaccessibleselectioninterface_clear_isbase = false;

public:
	VirtualQAccessibleSelectionInterface(): QAccessibleSelectionInterface() {};
	VirtualQAccessibleSelectionInterface(const QAccessibleSelectionInterface& param1): QAccessibleSelectionInterface(param1) {};

	~VirtualQAccessibleSelectionInterface() {
		qaccessibleselectioninterface_selecteditemcount_callback = nullptr;
		qaccessibleselectioninterface_selecteditems_callback = nullptr;
		qaccessibleselectioninterface_selecteditem_callback = nullptr;
		qaccessibleselectioninterface_isselected_callback = nullptr;
		qaccessibleselectioninterface_select_callback = nullptr;
		qaccessibleselectioninterface_unselect_callback = nullptr;
		qaccessibleselectioninterface_selectall_callback = nullptr;
		qaccessibleselectioninterface_clear_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleSelectionInterface_SelectedItemCount_Callback(QAccessibleSelectionInterface_SelectedItemCount_Callback cb) const { qaccessibleselectioninterface_selecteditemcount_callback = cb; }
	inline void setQAccessibleSelectionInterface_SelectedItems_Callback(QAccessibleSelectionInterface_SelectedItems_Callback cb) const { qaccessibleselectioninterface_selecteditems_callback = cb; }
	inline void setQAccessibleSelectionInterface_SelectedItem_Callback(QAccessibleSelectionInterface_SelectedItem_Callback cb) const { qaccessibleselectioninterface_selecteditem_callback = cb; }
	inline void setQAccessibleSelectionInterface_IsSelected_Callback(QAccessibleSelectionInterface_IsSelected_Callback cb) const { qaccessibleselectioninterface_isselected_callback = cb; }
	inline void setQAccessibleSelectionInterface_Select_Callback(QAccessibleSelectionInterface_Select_Callback cb) const { qaccessibleselectioninterface_select_callback = cb; }
	inline void setQAccessibleSelectionInterface_Unselect_Callback(QAccessibleSelectionInterface_Unselect_Callback cb) const { qaccessibleselectioninterface_unselect_callback = cb; }
	inline void setQAccessibleSelectionInterface_SelectAll_Callback(QAccessibleSelectionInterface_SelectAll_Callback cb) const { qaccessibleselectioninterface_selectall_callback = cb; }
	inline void setQAccessibleSelectionInterface_Clear_Callback(QAccessibleSelectionInterface_Clear_Callback cb) const { qaccessibleselectioninterface_clear_callback = cb; }

// Base flag setters
	inline void setQAccessibleSelectionInterface_SelectedItemCount_IsBase(bool value) const { qaccessibleselectioninterface_selecteditemcount_isbase = value; }
	inline void setQAccessibleSelectionInterface_SelectedItems_IsBase(bool value) const { qaccessibleselectioninterface_selecteditems_isbase = value; }
	inline void setQAccessibleSelectionInterface_SelectedItem_IsBase(bool value) const { qaccessibleselectioninterface_selecteditem_isbase = value; }
	inline void setQAccessibleSelectionInterface_IsSelected_IsBase(bool value) const { qaccessibleselectioninterface_isselected_isbase = value; }
	inline void setQAccessibleSelectionInterface_Select_IsBase(bool value) const { qaccessibleselectioninterface_select_isbase = value; }
	inline void setQAccessibleSelectionInterface_Unselect_IsBase(bool value) const { qaccessibleselectioninterface_unselect_isbase = value; }
	inline void setQAccessibleSelectionInterface_SelectAll_IsBase(bool value) const { qaccessibleselectioninterface_selectall_isbase = value; }
	inline void setQAccessibleSelectionInterface_Clear_IsBase(bool value) const { qaccessibleselectioninterface_clear_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int selectedItemCount() const override {
		if (qaccessibleselectioninterface_selecteditemcount_callback != nullptr) {
			int callback_ret = qaccessibleselectioninterface_selecteditemcount_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QAccessibleInterface *> selectedItems() const override {
		if (qaccessibleselectioninterface_selecteditems_callback != nullptr) {
			libqt_list callback_ret = qaccessibleselectioninterface_selecteditems_callback();
			return QList<QAccessibleInterface *>();
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* selectedItem(int selectionIndex) const override {
		if (qaccessibleselectioninterface_selecteditem_isbase) {
			qaccessibleselectioninterface_selecteditem_isbase = false;
			return QAccessibleSelectionInterface::selectedItem(selectionIndex);
		} else if (qaccessibleselectioninterface_selecteditem_callback != nullptr) {
			int cbval1 = selectionIndex;
			QAccessibleInterface* callback_ret = qaccessibleselectioninterface_selecteditem_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAccessibleSelectionInterface::selectedItem(selectionIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isSelected(QAccessibleInterface* childItem) const override {
		if (qaccessibleselectioninterface_isselected_isbase) {
			qaccessibleselectioninterface_isselected_isbase = false;
			return QAccessibleSelectionInterface::isSelected(childItem);
		} else if (qaccessibleselectioninterface_isselected_callback != nullptr) {
			QAccessibleInterface* cbval1 = childItem;
			bool callback_ret = qaccessibleselectioninterface_isselected_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAccessibleSelectionInterface::isSelected(childItem);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool select(QAccessibleInterface* childItem) override {
		if (qaccessibleselectioninterface_select_callback != nullptr) {
			QAccessibleInterface* cbval1 = childItem;
			bool callback_ret = qaccessibleselectioninterface_select_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool unselect(QAccessibleInterface* childItem) override {
		if (qaccessibleselectioninterface_unselect_callback != nullptr) {
			QAccessibleInterface* cbval1 = childItem;
			bool callback_ret = qaccessibleselectioninterface_unselect_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool selectAll() override {
		if (qaccessibleselectioninterface_selectall_callback != nullptr) {
			bool callback_ret = qaccessibleselectioninterface_selectall_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool clear() override {
		if (qaccessibleselectioninterface_clear_callback != nullptr) {
			bool callback_ret = qaccessibleselectioninterface_clear_callback();
			return callback_ret;
		} else {
			return {};
		}
	}
};

// This class is a subclass of QAccessibleAttributesInterface so that we can call protected methods
class VirtualQAccessibleAttributesInterface : public QAccessibleAttributesInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleAttributesInterface= true;

	// Virtual class public types (including callbacks)
	using QAccessibleAttributesInterface_AttributeKeys_Callback = libqt_list (*)();
	using QAccessibleAttributesInterface_AttributeValue_Callback = QVariant* (*)(const QAccessibleAttributesInterface*, int);

protected:
	// Instance callback storage
	mutable QAccessibleAttributesInterface_AttributeKeys_Callback qaccessibleattributesinterface_attributekeys_callback = nullptr;
	mutable QAccessibleAttributesInterface_AttributeValue_Callback qaccessibleattributesinterface_attributevalue_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibleattributesinterface_attributekeys_isbase = false;
    mutable bool qaccessibleattributesinterface_attributevalue_isbase = false;

public:
	VirtualQAccessibleAttributesInterface(): QAccessibleAttributesInterface() {};
	VirtualQAccessibleAttributesInterface(const QAccessibleAttributesInterface& param1): QAccessibleAttributesInterface(param1) {};

	~VirtualQAccessibleAttributesInterface() {
		qaccessibleattributesinterface_attributekeys_callback = nullptr;
		qaccessibleattributesinterface_attributevalue_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleAttributesInterface_AttributeKeys_Callback(QAccessibleAttributesInterface_AttributeKeys_Callback cb) const { qaccessibleattributesinterface_attributekeys_callback = cb; }
	inline void setQAccessibleAttributesInterface_AttributeValue_Callback(QAccessibleAttributesInterface_AttributeValue_Callback cb) const { qaccessibleattributesinterface_attributevalue_callback = cb; }

// Base flag setters
	inline void setQAccessibleAttributesInterface_AttributeKeys_IsBase(bool value) const { qaccessibleattributesinterface_attributekeys_isbase = value; }
	inline void setQAccessibleAttributesInterface_AttributeValue_IsBase(bool value) const { qaccessibleattributesinterface_attributevalue_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QList<QAccessible::Attribute> attributeKeys() const override {
		if (qaccessibleattributesinterface_attributekeys_callback != nullptr) {
			libqt_list callback_ret = qaccessibleattributesinterface_attributekeys_callback();
			return QList<QAccessible::Attribute>();
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant attributeValue(QAccessible::Attribute key) const override {
		if (qaccessibleattributesinterface_attributevalue_callback != nullptr) {
			int cbval1 = static_cast<int>(key);
			QVariant* callback_ret = qaccessibleattributesinterface_attributevalue_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}
};

// This class is a subclass of QAccessibleEvent so that we can call protected methods
class VirtualQAccessibleEvent final : public QAccessibleEvent {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleEvent= true;

	// Virtual class public types (including callbacks)
	using QAccessibleEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

protected:
	// Instance callback storage
	mutable QAccessibleEvent_AccessibleInterface_Callback qaccessibleevent_accessibleinterface_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibleevent_accessibleinterface_isbase = false;

public:
	VirtualQAccessibleEvent(QObject* obj, QAccessible::Event typ): QAccessibleEvent(obj, typ) {};
	VirtualQAccessibleEvent(QAccessibleInterface* iface, QAccessible::Event typ): QAccessibleEvent(iface, typ) {};

	~VirtualQAccessibleEvent() {
		qaccessibleevent_accessibleinterface_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleEvent_AccessibleInterface_Callback(QAccessibleEvent_AccessibleInterface_Callback cb) const { qaccessibleevent_accessibleinterface_callback = cb; }

// Base flag setters
	inline void setQAccessibleEvent_AccessibleInterface_IsBase(bool value) const { qaccessibleevent_accessibleinterface_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* accessibleInterface() const override {
		if (qaccessibleevent_accessibleinterface_isbase) {
			qaccessibleevent_accessibleinterface_isbase = false;
			return QAccessibleEvent::accessibleInterface();
		} else if (qaccessibleevent_accessibleinterface_callback != nullptr) {
			QAccessibleInterface* callback_ret = qaccessibleevent_accessibleinterface_callback();
			return callback_ret;
		} else {
			return QAccessibleEvent::accessibleInterface();
		}
	}
};

#endif


