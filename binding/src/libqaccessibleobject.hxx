#pragma once
#ifndef QACCESSIBLEOBJECT_H_C_LIBVIRTUAL
#define QACCESSIBLEOBJECT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAccessibleObject so that we can call protected methods
class VirtualQAccessibleObject : public QAccessibleObject {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleObject= true;

	// Virtual class public types (including callbacks)
	using QAccessibleObject_IsValid_Callback = bool (*)();
	using QAccessibleObject_Object_Callback = QObject* (*)();
	using QAccessibleObject_Rect_Callback = QRect* (*)();
	using QAccessibleObject_SetText_Callback = void (*)(QAccessibleObject*, int, libqt_string);
	using QAccessibleObject_ChildAt_Callback = QAccessibleInterface* (*)(const QAccessibleObject*, int, int);

protected:
	// Instance callback storage
	mutable QAccessibleObject_IsValid_Callback qaccessibleobject_isvalid_callback = nullptr;
	mutable QAccessibleObject_Object_Callback qaccessibleobject_object_callback = nullptr;
	mutable QAccessibleObject_Rect_Callback qaccessibleobject_rect_callback = nullptr;
	mutable QAccessibleObject_SetText_Callback qaccessibleobject_settext_callback = nullptr;
	mutable QAccessibleObject_ChildAt_Callback qaccessibleobject_childat_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibleobject_isvalid_isbase = false;
    mutable bool qaccessibleobject_object_isbase = false;
    mutable bool qaccessibleobject_rect_isbase = false;
    mutable bool qaccessibleobject_settext_isbase = false;
    mutable bool qaccessibleobject_childat_isbase = false;

public:
	VirtualQAccessibleObject(QObject* object): QAccessibleObject(object) {};

	~VirtualQAccessibleObject() {
		qaccessibleobject_isvalid_callback = nullptr;
		qaccessibleobject_object_callback = nullptr;
		qaccessibleobject_rect_callback = nullptr;
		qaccessibleobject_settext_callback = nullptr;
		qaccessibleobject_childat_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleObject_IsValid_Callback(QAccessibleObject_IsValid_Callback cb) const { qaccessibleobject_isvalid_callback = cb; }
	inline void setQAccessibleObject_Object_Callback(QAccessibleObject_Object_Callback cb) const { qaccessibleobject_object_callback = cb; }
	inline void setQAccessibleObject_Rect_Callback(QAccessibleObject_Rect_Callback cb) const { qaccessibleobject_rect_callback = cb; }
	inline void setQAccessibleObject_SetText_Callback(QAccessibleObject_SetText_Callback cb) const { qaccessibleobject_settext_callback = cb; }
	inline void setQAccessibleObject_ChildAt_Callback(QAccessibleObject_ChildAt_Callback cb) const { qaccessibleobject_childat_callback = cb; }

// Base flag setters
	inline void setQAccessibleObject_IsValid_IsBase(bool value) const { qaccessibleobject_isvalid_isbase = value; }
	inline void setQAccessibleObject_Object_IsBase(bool value) const { qaccessibleobject_object_isbase = value; }
	inline void setQAccessibleObject_Rect_IsBase(bool value) const { qaccessibleobject_rect_isbase = value; }
	inline void setQAccessibleObject_SetText_IsBase(bool value) const { qaccessibleobject_settext_isbase = value; }
	inline void setQAccessibleObject_ChildAt_IsBase(bool value) const { qaccessibleobject_childat_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool isValid() const override {
		if (qaccessibleobject_isvalid_isbase) {
			qaccessibleobject_isvalid_isbase = false;
			return QAccessibleObject::isValid();
		} else if (qaccessibleobject_isvalid_callback != nullptr) {
			bool callback_ret = qaccessibleobject_isvalid_callback();
			return callback_ret;
		} else {
			return QAccessibleObject::isValid();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QObject* object() const override {
		if (qaccessibleobject_object_isbase) {
			qaccessibleobject_object_isbase = false;
			return QAccessibleObject::object();
		} else if (qaccessibleobject_object_callback != nullptr) {
			QObject* callback_ret = qaccessibleobject_object_callback();
			return callback_ret;
		} else {
			return QAccessibleObject::object();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect rect() const override {
		if (qaccessibleobject_rect_isbase) {
			qaccessibleobject_rect_isbase = false;
			return QAccessibleObject::rect();
		} else if (qaccessibleobject_rect_callback != nullptr) {
			QRect* callback_ret = qaccessibleobject_rect_callback();
			return *callback_ret;
		} else {
			return QAccessibleObject::rect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setText(QAccessible::Text t, const QString& text) override {
		if (qaccessibleobject_settext_isbase) {
			qaccessibleobject_settext_isbase = false;
			QAccessibleObject::setText(t, text);
		} else if (qaccessibleobject_settext_callback != nullptr) {
			int cbval1 = static_cast<int>(t);
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval2;
			cbval2.len = text_qb.length();
			cbval2.data = static_cast<const char*>(text_qb.constData());
			qaccessibleobject_settext_callback(this, cbval1, cbval2);
		} else {
			QAccessibleObject::setText(t, text);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* childAt(int x, int y) const override {
		if (qaccessibleobject_childat_isbase) {
			qaccessibleobject_childat_isbase = false;
			return QAccessibleObject::childAt(x, y);
		} else if (qaccessibleobject_childat_callback != nullptr) {
			int cbval1 = x;
			int cbval2 = y;
			QAccessibleInterface* callback_ret = qaccessibleobject_childat_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QAccessibleObject::childAt(x, y);
		}
	}
};

// This class is a subclass of QAccessibleApplication so that we can call protected methods
class VirtualQAccessibleApplication final : public QAccessibleApplication {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleApplication= true;

	// Virtual class public types (including callbacks)
	using QAccessibleApplication_Window_Callback = QWindow* (*)();
	using QAccessibleApplication_ChildCount_Callback = int (*)();
	using QAccessibleApplication_IndexOfChild_Callback = int (*)(const QAccessibleApplication*, const QAccessibleInterface*);
	using QAccessibleApplication_FocusChild_Callback = QAccessibleInterface* (*)();
	using QAccessibleApplication_Parent_Callback = QAccessibleInterface* (*)();
	using QAccessibleApplication_Child_Callback = QAccessibleInterface* (*)(const QAccessibleApplication*, int);
	using QAccessibleApplication_Text_Callback = const char* (*)(const QAccessibleApplication*, int);
	using QAccessibleApplication_Role_Callback = int (*)();
	using QAccessibleApplication_State_Callback = QAccessible__State* (*)();

protected:
	// Instance callback storage
	mutable QAccessibleApplication_Window_Callback qaccessibleapplication_window_callback = nullptr;
	mutable QAccessibleApplication_ChildCount_Callback qaccessibleapplication_childcount_callback = nullptr;
	mutable QAccessibleApplication_IndexOfChild_Callback qaccessibleapplication_indexofchild_callback = nullptr;
	mutable QAccessibleApplication_FocusChild_Callback qaccessibleapplication_focuschild_callback = nullptr;
	mutable QAccessibleApplication_Parent_Callback qaccessibleapplication_parent_callback = nullptr;
	mutable QAccessibleApplication_Child_Callback qaccessibleapplication_child_callback = nullptr;
	mutable QAccessibleApplication_Text_Callback qaccessibleapplication_text_callback = nullptr;
	mutable QAccessibleApplication_Role_Callback qaccessibleapplication_role_callback = nullptr;
	mutable QAccessibleApplication_State_Callback qaccessibleapplication_state_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibleapplication_window_isbase = false;
    mutable bool qaccessibleapplication_childcount_isbase = false;
    mutable bool qaccessibleapplication_indexofchild_isbase = false;
    mutable bool qaccessibleapplication_focuschild_isbase = false;
    mutable bool qaccessibleapplication_parent_isbase = false;
    mutable bool qaccessibleapplication_child_isbase = false;
    mutable bool qaccessibleapplication_text_isbase = false;
    mutable bool qaccessibleapplication_role_isbase = false;
    mutable bool qaccessibleapplication_state_isbase = false;

public:
	VirtualQAccessibleApplication(): QAccessibleApplication() {};

	~VirtualQAccessibleApplication() {
		qaccessibleapplication_window_callback = nullptr;
		qaccessibleapplication_childcount_callback = nullptr;
		qaccessibleapplication_indexofchild_callback = nullptr;
		qaccessibleapplication_focuschild_callback = nullptr;
		qaccessibleapplication_parent_callback = nullptr;
		qaccessibleapplication_child_callback = nullptr;
		qaccessibleapplication_text_callback = nullptr;
		qaccessibleapplication_role_callback = nullptr;
		qaccessibleapplication_state_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleApplication_Window_Callback(QAccessibleApplication_Window_Callback cb) const { qaccessibleapplication_window_callback = cb; }
	inline void setQAccessibleApplication_ChildCount_Callback(QAccessibleApplication_ChildCount_Callback cb) const { qaccessibleapplication_childcount_callback = cb; }
	inline void setQAccessibleApplication_IndexOfChild_Callback(QAccessibleApplication_IndexOfChild_Callback cb) const { qaccessibleapplication_indexofchild_callback = cb; }
	inline void setQAccessibleApplication_FocusChild_Callback(QAccessibleApplication_FocusChild_Callback cb) const { qaccessibleapplication_focuschild_callback = cb; }
	inline void setQAccessibleApplication_Parent_Callback(QAccessibleApplication_Parent_Callback cb) const { qaccessibleapplication_parent_callback = cb; }
	inline void setQAccessibleApplication_Child_Callback(QAccessibleApplication_Child_Callback cb) const { qaccessibleapplication_child_callback = cb; }
	inline void setQAccessibleApplication_Text_Callback(QAccessibleApplication_Text_Callback cb) const { qaccessibleapplication_text_callback = cb; }
	inline void setQAccessibleApplication_Role_Callback(QAccessibleApplication_Role_Callback cb) const { qaccessibleapplication_role_callback = cb; }
	inline void setQAccessibleApplication_State_Callback(QAccessibleApplication_State_Callback cb) const { qaccessibleapplication_state_callback = cb; }

// Base flag setters
	inline void setQAccessibleApplication_Window_IsBase(bool value) const { qaccessibleapplication_window_isbase = value; }
	inline void setQAccessibleApplication_ChildCount_IsBase(bool value) const { qaccessibleapplication_childcount_isbase = value; }
	inline void setQAccessibleApplication_IndexOfChild_IsBase(bool value) const { qaccessibleapplication_indexofchild_isbase = value; }
	inline void setQAccessibleApplication_FocusChild_IsBase(bool value) const { qaccessibleapplication_focuschild_isbase = value; }
	inline void setQAccessibleApplication_Parent_IsBase(bool value) const { qaccessibleapplication_parent_isbase = value; }
	inline void setQAccessibleApplication_Child_IsBase(bool value) const { qaccessibleapplication_child_isbase = value; }
	inline void setQAccessibleApplication_Text_IsBase(bool value) const { qaccessibleapplication_text_isbase = value; }
	inline void setQAccessibleApplication_Role_IsBase(bool value) const { qaccessibleapplication_role_isbase = value; }
	inline void setQAccessibleApplication_State_IsBase(bool value) const { qaccessibleapplication_state_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QWindow* window() const override {
		if (qaccessibleapplication_window_isbase) {
			qaccessibleapplication_window_isbase = false;
			return QAccessibleApplication::window();
		} else if (qaccessibleapplication_window_callback != nullptr) {
			QWindow* callback_ret = qaccessibleapplication_window_callback();
			return callback_ret;
		} else {
			return QAccessibleApplication::window();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int childCount() const override {
		if (qaccessibleapplication_childcount_isbase) {
			qaccessibleapplication_childcount_isbase = false;
			return QAccessibleApplication::childCount();
		} else if (qaccessibleapplication_childcount_callback != nullptr) {
			int callback_ret = qaccessibleapplication_childcount_callback();
			return callback_ret;
		} else {
			return QAccessibleApplication::childCount();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int indexOfChild(const QAccessibleInterface* param1) const override {
		if (qaccessibleapplication_indexofchild_isbase) {
			qaccessibleapplication_indexofchild_isbase = false;
			return QAccessibleApplication::indexOfChild(param1);
		} else if (qaccessibleapplication_indexofchild_callback != nullptr) {
			const QAccessibleInterface* cbval1 = param1;
			int callback_ret = qaccessibleapplication_indexofchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAccessibleApplication::indexOfChild(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* focusChild() const override {
		if (qaccessibleapplication_focuschild_isbase) {
			qaccessibleapplication_focuschild_isbase = false;
			return QAccessibleApplication::focusChild();
		} else if (qaccessibleapplication_focuschild_callback != nullptr) {
			QAccessibleInterface* callback_ret = qaccessibleapplication_focuschild_callback();
			return callback_ret;
		} else {
			return QAccessibleApplication::focusChild();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* parent() const override {
		if (qaccessibleapplication_parent_isbase) {
			qaccessibleapplication_parent_isbase = false;
			return QAccessibleApplication::parent();
		} else if (qaccessibleapplication_parent_callback != nullptr) {
			QAccessibleInterface* callback_ret = qaccessibleapplication_parent_callback();
			return callback_ret;
		} else {
			return QAccessibleApplication::parent();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* child(int index) const override {
		if (qaccessibleapplication_child_isbase) {
			qaccessibleapplication_child_isbase = false;
			return QAccessibleApplication::child(index);
		} else if (qaccessibleapplication_child_callback != nullptr) {
			int cbval1 = index;
			QAccessibleInterface* callback_ret = qaccessibleapplication_child_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAccessibleApplication::child(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString text(QAccessible::Text t) const override {
		if (qaccessibleapplication_text_isbase) {
			qaccessibleapplication_text_isbase = false;
			return QAccessibleApplication::text(t);
		} else if (qaccessibleapplication_text_callback != nullptr) {
			int cbval1 = static_cast<int>(t);
			const char* callback_ret = qaccessibleapplication_text_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QAccessibleApplication::text(t);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessible::Role role() const override {
		if (qaccessibleapplication_role_isbase) {
			qaccessibleapplication_role_isbase = false;
			return QAccessibleApplication::role();
		} else if (qaccessibleapplication_role_callback != nullptr) {
			int callback_ret = qaccessibleapplication_role_callback();
			return static_cast<QAccessible::Role>(callback_ret);
		} else {
			return QAccessibleApplication::role();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QAccessible::State state() const override {
		if (qaccessibleapplication_state_isbase) {
			qaccessibleapplication_state_isbase = false;
			return QAccessibleApplication::state();
		} else if (qaccessibleapplication_state_callback != nullptr) {
			QAccessible__State* callback_ret = qaccessibleapplication_state_callback();
			return *callback_ret;
		} else {
			return QAccessibleApplication::state();
		}
	}
};

#endif


