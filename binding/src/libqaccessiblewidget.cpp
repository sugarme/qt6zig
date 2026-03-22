#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleActionInterface>
#include <QAccessibleInterface>
#include <QAccessibleObject>
#include <QAccessibleWidget>
#include <QColor>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <QWindow>
#include <qaccessiblewidget.h>
#include "libqaccessiblewidget.h"
#include "libqaccessiblewidget.hxx"

QAccessibleWidget* QAccessibleWidget_new(QWidget* o) {
	 return new VirtualQAccessibleWidget(o);
}

QAccessibleWidget* QAccessibleWidget_new2(QWidget* o, int r) {
	 return new VirtualQAccessibleWidget(o, static_cast<QAccessible::Role>(r));
}

QAccessibleWidget* QAccessibleWidget_new3(QWidget* o, int r, const libqt_string name) {
	 return new VirtualQAccessibleWidget(o, static_cast<QAccessible::Role>(r), QString::fromUtf8(name.data, name.len));
}

bool QAccessibleWidget_IsValid(const QAccessibleWidget* self) {
	return self->isValid();
}

QWindow* QAccessibleWidget_Window(const QAccessibleWidget* self) {
	return self->window();
}

int QAccessibleWidget_ChildCount(const QAccessibleWidget* self) {
	return self->childCount();
}

int QAccessibleWidget_IndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child) {
	return self->indexOfChild(child);
}

libqt_list QAccessibleWidget_Relations(const QAccessibleWidget* self, int match) {
	auto _ret = self->relations(static_cast<QFlags<QAccessible::RelationFlag>>(match));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QAccessibleInterface* QAccessibleWidget_FocusChild(const QAccessibleWidget* self) {
	return self->focusChild();
}

QRect* QAccessibleWidget_Rect(const QAccessibleWidget* self) {
	return new QRect(self->rect());
}

QAccessibleInterface* QAccessibleWidget_Parent(const QAccessibleWidget* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleWidget_Child(const QAccessibleWidget* self, int index) {
	return self->child(index);
}

libqt_string QAccessibleWidget_Text(const QAccessibleWidget* self, int t) {
	QString _ret = self->text(static_cast<QAccessible::Text>(t));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAccessibleWidget_Role(const QAccessibleWidget* self) {
	return self->role();
}

QAccessible__State* QAccessibleWidget_State(const QAccessibleWidget* self) {
	return new QAccessible::State(self->state());
}

QColor* QAccessibleWidget_ForegroundColor(const QAccessibleWidget* self) {
	return new QColor(self->foregroundColor());
}

QColor* QAccessibleWidget_BackgroundColor(const QAccessibleWidget* self) {
	return new QColor(self->backgroundColor());
}

void* QAccessibleWidget_InterfaceCast(QAccessibleWidget* self, int t) {
	return self->interface_cast(static_cast<QAccessible::InterfaceType>(t));
}

libqt_list QAccessibleWidget_ActionNames(const QAccessibleWidget* self) {
	auto _ret = self->actionNames();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QAccessibleWidget_DoAction(QAccessibleWidget* self, const libqt_string actionName) {
	self->doAction(QString::fromUtf8(actionName.data, actionName.len));
}

libqt_list QAccessibleWidget_KeyBindingsForAction(const QAccessibleWidget* self, const libqt_string actionName) {
	auto _ret = self->keyBindingsForAction(QString::fromUtf8(actionName.data, actionName.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

// Base class handler implementation
bool QAccessibleWidget_QBaseIsValid(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_IsValid_IsBase(true);
	return vqaccessiblewidget->isValid();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnIsValid(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_IsValid_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_IsValid_Callback>(slot));
}
}

// Base class handler implementation
QWindow* QAccessibleWidget_QBaseWindow(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Window_IsBase(true);
	return vqaccessiblewidget->window();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnWindow(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Window_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Window_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleWidget_QBaseChildCount(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_ChildCount_IsBase(true);
	return vqaccessiblewidget->childCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnChildCount(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_ChildCount_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ChildCount_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleWidget_QBaseIndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_IndexOfChild_IsBase(true);
	return vqaccessiblewidget->indexOfChild(child);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnIndexOfChild(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_IndexOfChild_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_IndexOfChild_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAccessibleWidget_QBaseRelations(const QAccessibleWidget* self, int match) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Relations_IsBase(true);
	auto _ret = vqaccessiblewidget->relations(static_cast<QFlags<QAccessible::RelationFlag>>(match));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnRelations(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Relations_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Relations_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleWidget_QBaseFocusChild(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_FocusChild_IsBase(true);
	return vqaccessiblewidget->focusChild();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnFocusChild(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_FocusChild_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_FocusChild_Callback>(slot));
}
}

// Base class handler implementation
QRect* QAccessibleWidget_QBaseRect(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Rect_IsBase(true);
	return new QRect(vqaccessiblewidget->rect());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnRect(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Rect_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Rect_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleWidget_QBaseParent(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Parent_IsBase(true);
	return vqaccessiblewidget->parent();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnParent(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Parent_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Parent_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleWidget_QBaseChild(const QAccessibleWidget* self, int index) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Child_IsBase(true);
	return vqaccessiblewidget->child(index);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnChild(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Child_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Child_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleWidget_QBaseText(const QAccessibleWidget* self, int t) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Text_IsBase(true);
	QString _ret = vqaccessiblewidget->text(static_cast<QAccessible::Text>(t));
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
void QAccessibleWidget_OnText(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Text_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Text_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleWidget_QBaseRole(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Role_IsBase(true);
	return vqaccessiblewidget->role();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnRole(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Role_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Role_Callback>(slot));
}
}

// Base class handler implementation
QAccessible__State* QAccessibleWidget_QBaseState(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_State_IsBase(true);
	return new QAccessible::State(vqaccessiblewidget->state());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnState(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_State_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_State_Callback>(slot));
}
}

// Base class handler implementation
QColor* QAccessibleWidget_QBaseForegroundColor(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_ForegroundColor_IsBase(true);
	return new QColor(vqaccessiblewidget->foregroundColor());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnForegroundColor(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_ForegroundColor_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ForegroundColor_Callback>(slot));
}
}

// Base class handler implementation
QColor* QAccessibleWidget_QBaseBackgroundColor(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_BackgroundColor_IsBase(true);
	return new QColor(vqaccessiblewidget->backgroundColor());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnBackgroundColor(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_BackgroundColor_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_BackgroundColor_Callback>(slot));
}
}

// Base class handler implementation
void* QAccessibleWidget_QBaseInterfaceCast(QAccessibleWidget* self, int t) {
	auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_InterfaceCast_IsBase(true);
	return vqaccessiblewidget->interface_cast(static_cast<QAccessible::InterfaceType>(t));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnInterfaceCast(QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_InterfaceCast_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_InterfaceCast_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAccessibleWidget_QBaseActionNames(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_ActionNames_IsBase(true);
	auto _ret = vqaccessiblewidget->actionNames();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnActionNames(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_ActionNames_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ActionNames_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleWidget_QBaseDoAction(QAccessibleWidget* self, const libqt_string actionName) {
	auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_DoAction_IsBase(true);
	vqaccessiblewidget->doAction(QString::fromUtf8(actionName.data, actionName.len));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnDoAction(QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_DoAction_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_DoAction_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAccessibleWidget_QBaseKeyBindingsForAction(const QAccessibleWidget* self, const libqt_string actionName) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_KeyBindingsForAction_IsBase(true);
	auto _ret = vqaccessiblewidget->keyBindingsForAction(QString::fromUtf8(actionName.data, actionName.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnKeyBindingsForAction(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_KeyBindingsForAction_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_KeyBindingsForAction_Callback>(slot));
}
}

// Derived class handler implementation
QWidget* QAccessibleWidget_Widget(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
	return vqaccessiblewidget->widget();
	} else {
	return self->QAccessibleWidget::widget();
}
}

// Base class handler implementation
QWidget* QAccessibleWidget_QBaseWidget(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Widget_IsBase(true);
	return vqaccessiblewidget->widget();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnWidget(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_Widget_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Widget_Callback>(slot));
}
}

// Derived class handler implementation
QObject* QAccessibleWidget_ParentObject(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
	return vqaccessiblewidget->parentObject();
	} else {
	return self->QAccessibleWidget::parentObject();
}
}

// Base class handler implementation
QObject* QAccessibleWidget_QBaseParentObject(const QAccessibleWidget* self) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_ParentObject_IsBase(true);
	return vqaccessiblewidget->parentObject();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnParentObject(const QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<const VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_ParentObject_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ParentObject_Callback>(slot));
}
}

// Derived class handler implementation
void QAccessibleWidget_AddControllingSignal(QAccessibleWidget* self, const libqt_string signal) {
	auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
	vqaccessiblewidget->addControllingSignal(QString::fromUtf8(signal.data, signal.len));
	} else {
	self->QAccessibleWidget::addControllingSignal(QString::fromUtf8(signal.data, signal.len));
}
}

// Base class handler implementation
void QAccessibleWidget_QBaseAddControllingSignal(QAccessibleWidget* self, const libqt_string signal) {
	auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_AddControllingSignal_IsBase(true);
	vqaccessiblewidget->addControllingSignal(QString::fromUtf8(signal.data, signal.len));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnAddControllingSignal(QAccessibleWidget* self, intptr_t slot) {
	auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
	if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
vqaccessiblewidget->setQAccessibleWidget_AddControllingSignal_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_AddControllingSignal_Callback>(slot));
}
}

