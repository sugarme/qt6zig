#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleApplication>
#include <QAccessibleInterface>
#include <QAccessibleObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWindow>
#include <qaccessibleobject.h>
#include "libqaccessibleobject.h"
#include "libqaccessibleobject.hxx"

QAccessibleObject* QAccessibleObject_new(QObject* object) {
	 return new VirtualQAccessibleObject(object);
}

bool QAccessibleObject_IsValid(const QAccessibleObject* self) {
	return self->isValid();
}

QObject* QAccessibleObject_Object(const QAccessibleObject* self) {
	return self->object();
}

QRect* QAccessibleObject_Rect(const QAccessibleObject* self) {
	return new QRect(self->rect());
}

void QAccessibleObject_SetText(QAccessibleObject* self, int t, const libqt_string text) {
	self->setText(static_cast<QAccessible::Text>(t), QString::fromUtf8(text.data, text.len));
}

QAccessibleInterface* QAccessibleObject_ChildAt(const QAccessibleObject* self, int x, int y) {
	return self->childAt(x, y);
}

// Base class handler implementation
bool QAccessibleObject_QBaseIsValid(const QAccessibleObject* self) {
	auto* vqaccessibleobject = dynamic_cast<const VirtualQAccessibleObject*>(self);
	if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
vqaccessibleobject->setQAccessibleObject_IsValid_IsBase(true);
	return vqaccessibleobject->isValid();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnIsValid(const QAccessibleObject* self, intptr_t slot) {
	auto* vqaccessibleobject = dynamic_cast<const VirtualQAccessibleObject*>(self);
	if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
vqaccessibleobject->setQAccessibleObject_IsValid_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_IsValid_Callback>(slot));
}
}

// Base class handler implementation
QObject* QAccessibleObject_QBaseObject(const QAccessibleObject* self) {
	auto* vqaccessibleobject = dynamic_cast<const VirtualQAccessibleObject*>(self);
	if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
vqaccessibleobject->setQAccessibleObject_Object_IsBase(true);
	return vqaccessibleobject->object();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnObject(const QAccessibleObject* self, intptr_t slot) {
	auto* vqaccessibleobject = dynamic_cast<const VirtualQAccessibleObject*>(self);
	if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
vqaccessibleobject->setQAccessibleObject_Object_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Object_Callback>(slot));
}
}

// Base class handler implementation
QRect* QAccessibleObject_QBaseRect(const QAccessibleObject* self) {
	auto* vqaccessibleobject = dynamic_cast<const VirtualQAccessibleObject*>(self);
	if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
vqaccessibleobject->setQAccessibleObject_Rect_IsBase(true);
	return new QRect(vqaccessibleobject->rect());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnRect(const QAccessibleObject* self, intptr_t slot) {
	auto* vqaccessibleobject = dynamic_cast<const VirtualQAccessibleObject*>(self);
	if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
vqaccessibleobject->setQAccessibleObject_Rect_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Rect_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleObject_QBaseSetText(QAccessibleObject* self, int t, const libqt_string text) {
	auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self);
	if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
vqaccessibleobject->setQAccessibleObject_SetText_IsBase(true);
	vqaccessibleobject->setText(static_cast<QAccessible::Text>(t), QString::fromUtf8(text.data, text.len));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnSetText(QAccessibleObject* self, intptr_t slot) {
	auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self);
	if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
vqaccessibleobject->setQAccessibleObject_SetText_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_SetText_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleObject_QBaseChildAt(const QAccessibleObject* self, int x, int y) {
	auto* vqaccessibleobject = dynamic_cast<const VirtualQAccessibleObject*>(self);
	if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
vqaccessibleobject->setQAccessibleObject_ChildAt_IsBase(true);
	return vqaccessibleobject->childAt(x, y);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnChildAt(const QAccessibleObject* self, intptr_t slot) {
	auto* vqaccessibleobject = dynamic_cast<const VirtualQAccessibleObject*>(self);
	if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
vqaccessibleobject->setQAccessibleObject_ChildAt_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_ChildAt_Callback>(slot));
}
}

QAccessibleApplication* QAccessibleApplication_new() {
	 return new VirtualQAccessibleApplication();
}

QWindow* QAccessibleApplication_Window(const QAccessibleApplication* self) {
	return self->window();
}

int QAccessibleApplication_ChildCount(const QAccessibleApplication* self) {
	return self->childCount();
}

int QAccessibleApplication_IndexOfChild(const QAccessibleApplication* self, const QAccessibleInterface* param1) {
	return self->indexOfChild(param1);
}

QAccessibleInterface* QAccessibleApplication_FocusChild(const QAccessibleApplication* self) {
	return self->focusChild();
}

QAccessibleInterface* QAccessibleApplication_Parent(const QAccessibleApplication* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleApplication_Child(const QAccessibleApplication* self, int index) {
	return self->child(index);
}

libqt_string QAccessibleApplication_Text(const QAccessibleApplication* self, int t) {
	QString _ret = self->text(static_cast<QAccessible::Text>(t));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAccessibleApplication_Role(const QAccessibleApplication* self) {
	return self->role();
}

QAccessible__State* QAccessibleApplication_State(const QAccessibleApplication* self) {
	return new QAccessible::State(self->state());
}

// Base class handler implementation
QWindow* QAccessibleApplication_QBaseWindow(const QAccessibleApplication* self) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_Window_IsBase(true);
	return vqaccessibleapplication->window();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnWindow(const QAccessibleApplication* self, intptr_t slot) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_Window_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Window_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleApplication_QBaseChildCount(const QAccessibleApplication* self) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_ChildCount_IsBase(true);
	return vqaccessibleapplication->childCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnChildCount(const QAccessibleApplication* self, intptr_t slot) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_ChildCount_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_ChildCount_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleApplication_QBaseIndexOfChild(const QAccessibleApplication* self, const QAccessibleInterface* param1) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_IndexOfChild_IsBase(true);
	return vqaccessibleapplication->indexOfChild(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnIndexOfChild(const QAccessibleApplication* self, intptr_t slot) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_IndexOfChild_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_IndexOfChild_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleApplication_QBaseFocusChild(const QAccessibleApplication* self) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_FocusChild_IsBase(true);
	return vqaccessibleapplication->focusChild();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnFocusChild(const QAccessibleApplication* self, intptr_t slot) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_FocusChild_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_FocusChild_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleApplication_QBaseParent(const QAccessibleApplication* self) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_Parent_IsBase(true);
	return vqaccessibleapplication->parent();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnParent(const QAccessibleApplication* self, intptr_t slot) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_Parent_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Parent_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleApplication_QBaseChild(const QAccessibleApplication* self, int index) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_Child_IsBase(true);
	return vqaccessibleapplication->child(index);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnChild(const QAccessibleApplication* self, intptr_t slot) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_Child_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Child_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleApplication_QBaseText(const QAccessibleApplication* self, int t) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_Text_IsBase(true);
	QString _ret = vqaccessibleapplication->text(static_cast<QAccessible::Text>(t));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnText(const QAccessibleApplication* self, intptr_t slot) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_Text_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Text_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleApplication_QBaseRole(const QAccessibleApplication* self) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_Role_IsBase(true);
	return vqaccessibleapplication->role();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnRole(const QAccessibleApplication* self, intptr_t slot) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_Role_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Role_Callback>(slot));
}
}

// Base class handler implementation
QAccessible__State* QAccessibleApplication_QBaseState(const QAccessibleApplication* self) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_State_IsBase(true);
	return new QAccessible::State(vqaccessibleapplication->state());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnState(const QAccessibleApplication* self, intptr_t slot) {
	auto* vqaccessibleapplication = dynamic_cast<const VirtualQAccessibleApplication*>(self);
	if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
vqaccessibleapplication->setQAccessibleApplication_State_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_State_Callback>(slot));
}
}

void QAccessibleApplication_Delete(QAccessibleApplication* self) {
    delete self;
}

