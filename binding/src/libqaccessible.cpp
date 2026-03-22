#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleActionInterface>
#include <QAccessibleAnnouncementEvent>
#include <QAccessibleAttributesInterface>
#include <QAccessibleEditableTextInterface>
#include <QAccessibleEvent>
#include <QAccessibleHyperlinkInterface>
#include <QAccessibleImageInterface>
#include <QAccessibleInterface>
#include <QAccessibleSelectionInterface>
#include <QAccessibleStateChangeEvent>
#include <QAccessibleTableCellInterface>
#include <QAccessibleTableInterface>
#include <QAccessibleTableModelChangeEvent>
#include <QAccessibleTextCursorEvent>
#include <QAccessibleTextInsertEvent>
#include <QAccessibleTextInterface>
#include <QAccessibleTextRemoveEvent>
#include <QAccessibleTextSelectionEvent>
#include <QAccessibleTextUpdateEvent>
#include <QAccessibleValueChangeEvent>
#include <QAccessibleValueInterface>
#include <QColor>
#include <QObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWindow>
#include <qaccessible.h>
#include "libqaccessible.h"
#include "libqaccessible.hxx"

QAccessibleInterface* QAccessibleInterface_new() {
	 return new VirtualQAccessibleInterface();
}

QAccessibleInterface* QAccessibleInterface_new2(const QAccessibleInterface* param1) {
	 return new VirtualQAccessibleInterface(*param1);
}

bool QAccessibleInterface_IsValid(const QAccessibleInterface* self) {
	return self->isValid();
}

QObject* QAccessibleInterface_Object(const QAccessibleInterface* self) {
	return self->object();
}

QWindow* QAccessibleInterface_Window(const QAccessibleInterface* self) {
	return self->window();
}

libqt_list QAccessibleInterface_Relations(const QAccessibleInterface* self, int match) {
	return self->relations(static_cast<QFlags<QAccessible::RelationFlag>>(match));
}

QAccessibleInterface* QAccessibleInterface_FocusChild(const QAccessibleInterface* self) {
	return self->focusChild();
}

QAccessibleInterface* QAccessibleInterface_ChildAt(const QAccessibleInterface* self, int x, int y) {
	return self->childAt(x, y);
}

QAccessibleInterface* QAccessibleInterface_Parent(const QAccessibleInterface* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleInterface_Child(const QAccessibleInterface* self, int index) {
	return self->child(index);
}

int QAccessibleInterface_ChildCount(const QAccessibleInterface* self) {
	return self->childCount();
}

int QAccessibleInterface_IndexOfChild(const QAccessibleInterface* self, const QAccessibleInterface* param1) {
	return self->indexOfChild(param1);
}

libqt_string QAccessibleInterface_Text(const QAccessibleInterface* self, int t) {
	QString _ret = self->text(static_cast<QAccessible::Text>(t));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAccessibleInterface_SetText(QAccessibleInterface* self, int t, const libqt_string text) {
	self->setText(static_cast<QAccessible::Text>(t), QString::fromUtf8(text.data, text.len));
}

QRect* QAccessibleInterface_Rect(const QAccessibleInterface* self) {
	return new QRect(self->rect());
}

int QAccessibleInterface_Role(const QAccessibleInterface* self) {
	return self->role();
}

QAccessible__State* QAccessibleInterface_State(const QAccessibleInterface* self) {
	return new QAccessible::State(self->state());
}

QColor* QAccessibleInterface_ForegroundColor(const QAccessibleInterface* self) {
	return new QColor(self->foregroundColor());
}

QColor* QAccessibleInterface_BackgroundColor(const QAccessibleInterface* self) {
	return new QColor(self->backgroundColor());
}

QAccessibleTextInterface* QAccessibleInterface_TextInterface(QAccessibleInterface* self) {
	return self->textInterface();
}

QAccessibleEditableTextInterface* QAccessibleInterface_EditableTextInterface(QAccessibleInterface* self) {
	return self->editableTextInterface();
}

QAccessibleValueInterface* QAccessibleInterface_ValueInterface(QAccessibleInterface* self) {
	return self->valueInterface();
}

QAccessibleActionInterface* QAccessibleInterface_ActionInterface(QAccessibleInterface* self) {
	return self->actionInterface();
}

QAccessibleImageInterface* QAccessibleInterface_ImageInterface(QAccessibleInterface* self) {
	return self->imageInterface();
}

QAccessibleTableInterface* QAccessibleInterface_TableInterface(QAccessibleInterface* self) {
	return self->tableInterface();
}

QAccessibleTableCellInterface* QAccessibleInterface_TableCellInterface(QAccessibleInterface* self) {
	return self->tableCellInterface();
}

QAccessibleHyperlinkInterface* QAccessibleInterface_HyperlinkInterface(QAccessibleInterface* self) {
	return self->hyperlinkInterface();
}

QAccessibleSelectionInterface* QAccessibleInterface_SelectionInterface(QAccessibleInterface* self) {
	return self->selectionInterface();
}

QAccessibleAttributesInterface* QAccessibleInterface_AttributesInterface(QAccessibleInterface* self) {
	return self->attributesInterface();
}

void QAccessibleInterface_VirtualHook(QAccessibleInterface* self, int id, void* data) {
	self->virtual_hook(id, data);
}

void* QAccessibleInterface_InterfaceCast(QAccessibleInterface* self, int param1) {
	return self->interface_cast(static_cast<QAccessible::InterfaceType>(param1));
}

// Base class handler implementation
bool QAccessibleInterface_QBaseIsValid(const QAccessibleInterface* self) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_IsValid_IsBase(true);
	return vqaccessibleinterface->isValid();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnIsValid(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_IsValid_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_IsValid_Callback>(slot));
}
}

// Base class handler implementation
QObject* QAccessibleInterface_QBaseObject(const QAccessibleInterface* self) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Object_IsBase(true);
	return vqaccessibleinterface->object();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnObject(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Object_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_Object_Callback>(slot));
}
}

// Base class handler implementation
QWindow* QAccessibleInterface_QBaseWindow(const QAccessibleInterface* self) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Window_IsBase(true);
	return vqaccessibleinterface->window();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnWindow(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Window_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_Window_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAccessibleInterface_QBaseRelations(const QAccessibleInterface* self, int match) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Relations_IsBase(true);
	return vqaccessibleinterface->relations(static_cast<QFlags<QAccessible::RelationFlag>>(match));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnRelations(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Relations_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_Relations_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleInterface_QBaseFocusChild(const QAccessibleInterface* self) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_FocusChild_IsBase(true);
	return vqaccessibleinterface->focusChild();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnFocusChild(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_FocusChild_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_FocusChild_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleInterface_QBaseChildAt(const QAccessibleInterface* self, int x, int y) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_ChildAt_IsBase(true);
	return vqaccessibleinterface->childAt(x, y);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnChildAt(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_ChildAt_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_ChildAt_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleInterface_QBaseParent(const QAccessibleInterface* self) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Parent_IsBase(true);
	return vqaccessibleinterface->parent();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnParent(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Parent_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_Parent_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleInterface_QBaseChild(const QAccessibleInterface* self, int index) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Child_IsBase(true);
	return vqaccessibleinterface->child(index);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnChild(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Child_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_Child_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleInterface_QBaseChildCount(const QAccessibleInterface* self) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_ChildCount_IsBase(true);
	return vqaccessibleinterface->childCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnChildCount(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_ChildCount_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_ChildCount_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleInterface_QBaseIndexOfChild(const QAccessibleInterface* self, const QAccessibleInterface* param1) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_IndexOfChild_IsBase(true);
	return vqaccessibleinterface->indexOfChild(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnIndexOfChild(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_IndexOfChild_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_IndexOfChild_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleInterface_QBaseText(const QAccessibleInterface* self, int t) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Text_IsBase(true);
	QString _ret = vqaccessibleinterface->text(static_cast<QAccessible::Text>(t));
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
void QAccessibleInterface_OnText(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Text_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_Text_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleInterface_QBaseSetText(QAccessibleInterface* self, int t, const libqt_string text) {
	auto* vqaccessibleinterface = dynamic_cast<VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_SetText_IsBase(true);
	vqaccessibleinterface->setText(static_cast<QAccessible::Text>(t), QString::fromUtf8(text.data, text.len));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnSetText(QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_SetText_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_SetText_Callback>(slot));
}
}

// Base class handler implementation
QRect* QAccessibleInterface_QBaseRect(const QAccessibleInterface* self) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Rect_IsBase(true);
	return new QRect(vqaccessibleinterface->rect());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnRect(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Rect_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_Rect_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleInterface_QBaseRole(const QAccessibleInterface* self) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Role_IsBase(true);
	return vqaccessibleinterface->role();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnRole(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_Role_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_Role_Callback>(slot));
}
}

// Base class handler implementation
QAccessible__State* QAccessibleInterface_QBaseState(const QAccessibleInterface* self) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_State_IsBase(true);
	return new QAccessible::State(vqaccessibleinterface->state());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnState(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_State_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_State_Callback>(slot));
}
}

// Base class handler implementation
QColor* QAccessibleInterface_QBaseForegroundColor(const QAccessibleInterface* self) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_ForegroundColor_IsBase(true);
	return new QColor(vqaccessibleinterface->foregroundColor());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnForegroundColor(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_ForegroundColor_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_ForegroundColor_Callback>(slot));
}
}

// Base class handler implementation
QColor* QAccessibleInterface_QBaseBackgroundColor(const QAccessibleInterface* self) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_BackgroundColor_IsBase(true);
	return new QColor(vqaccessibleinterface->backgroundColor());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnBackgroundColor(const QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<const VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_BackgroundColor_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_BackgroundColor_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleInterface_QBaseVirtualHook(QAccessibleInterface* self, int id, void* data) {
	auto* vqaccessibleinterface = dynamic_cast<VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_VirtualHook_IsBase(true);
	vqaccessibleinterface->virtual_hook(id, data);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnVirtualHook(QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_VirtualHook_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_VirtualHook_Callback>(slot));
}
}

// Base class handler implementation
void* QAccessibleInterface_QBaseInterfaceCast(QAccessibleInterface* self, int param1) {
	auto* vqaccessibleinterface = dynamic_cast<VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_InterfaceCast_IsBase(true);
	return vqaccessibleinterface->interface_cast(static_cast<QAccessible::InterfaceType>(param1));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnInterfaceCast(QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_InterfaceCast_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_InterfaceCast_Callback>(slot));
}
}

// Derived class handler implementation
void QAccessibleInterface_OperatorAssign(QAccessibleInterface* self, const QAccessibleInterface* param1) {
	auto* vqaccessibleinterface = dynamic_cast<VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
	vqaccessibleinterface->operator=(*param1);
	} else {
	self->QAccessibleInterface::operator=(*param1);
}
}

// Base class handler implementation
void QAccessibleInterface_QBaseOperatorAssign(QAccessibleInterface* self, const QAccessibleInterface* param1) {
	auto* vqaccessibleinterface = dynamic_cast<VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_OperatorAssign_IsBase(true);
	vqaccessibleinterface->operator=(*param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleInterface_OnOperatorAssign(QAccessibleInterface* self, intptr_t slot) {
	auto* vqaccessibleinterface = dynamic_cast<VirtualQAccessibleInterface*>(self);
	if (vqaccessibleinterface && vqaccessibleinterface->isVirtualQAccessibleInterface) {
vqaccessibleinterface->setQAccessibleInterface_OperatorAssign_Callback(reinterpret_cast<VirtualQAccessibleInterface::QAccessibleInterface_OperatorAssign_Callback>(slot));
}
}

QAccessibleTextInterface* QAccessibleTextInterface_new() {
	 return new VirtualQAccessibleTextInterface();
}

QAccessibleTextInterface* QAccessibleTextInterface_new2(const QAccessibleTextInterface* param1) {
	 return new VirtualQAccessibleTextInterface(*param1);
}

void QAccessibleTextInterface_Selection(const QAccessibleTextInterface* self, int selectionIndex, int* startOffset, int* endOffset) {
	self->selection(selectionIndex, startOffset, endOffset);
}

int QAccessibleTextInterface_SelectionCount(const QAccessibleTextInterface* self) {
	return self->selectionCount();
}

void QAccessibleTextInterface_AddSelection(QAccessibleTextInterface* self, int startOffset, int endOffset) {
	self->addSelection(startOffset, endOffset);
}

void QAccessibleTextInterface_RemoveSelection(QAccessibleTextInterface* self, int selectionIndex) {
	self->removeSelection(selectionIndex);
}

void QAccessibleTextInterface_SetSelection(QAccessibleTextInterface* self, int selectionIndex, int startOffset, int endOffset) {
	self->setSelection(selectionIndex, startOffset, endOffset);
}

int QAccessibleTextInterface_CursorPosition(const QAccessibleTextInterface* self) {
	return self->cursorPosition();
}

void QAccessibleTextInterface_SetCursorPosition(QAccessibleTextInterface* self, int position) {
	self->setCursorPosition(position);
}

libqt_string QAccessibleTextInterface_Text(const QAccessibleTextInterface* self, int startOffset, int endOffset) {
	QString _ret = self->text(startOffset, endOffset);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleTextInterface_TextBeforeOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	QString _ret = self->textBeforeOffset(offset, static_cast<QAccessible::TextBoundaryType>(boundaryType), startOffset, endOffset);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleTextInterface_TextAfterOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	QString _ret = self->textAfterOffset(offset, static_cast<QAccessible::TextBoundaryType>(boundaryType), startOffset, endOffset);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleTextInterface_TextAtOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	QString _ret = self->textAtOffset(offset, static_cast<QAccessible::TextBoundaryType>(boundaryType), startOffset, endOffset);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAccessibleTextInterface_CharacterCount(const QAccessibleTextInterface* self) {
	return self->characterCount();
}

QRect* QAccessibleTextInterface_CharacterRect(const QAccessibleTextInterface* self, int offset) {
	return new QRect(self->characterRect(offset));
}

int QAccessibleTextInterface_OffsetAtPoint(const QAccessibleTextInterface* self, const QPoint* point) {
	return self->offsetAtPoint(*point);
}

void QAccessibleTextInterface_ScrollToSubstring(QAccessibleTextInterface* self, int startIndex, int endIndex) {
	self->scrollToSubstring(startIndex, endIndex);
}

libqt_string QAccessibleTextInterface_Attributes(const QAccessibleTextInterface* self, int offset, int* startOffset, int* endOffset) {
	QString _ret = self->attributes(offset, startOffset, endOffset);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAccessibleTextInterface_OperatorAssign(QAccessibleTextInterface* self, const QAccessibleTextInterface* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
void QAccessibleTextInterface_QBaseSelection(const QAccessibleTextInterface* self, int selectionIndex, int* startOffset, int* endOffset) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_Selection_IsBase(true);
	vqaccessibletextinterface->selection(selectionIndex, startOffset, endOffset);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInterface_OnSelection(const QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_Selection_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_Selection_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTextInterface_QBaseSelectionCount(const QAccessibleTextInterface* self) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_SelectionCount_IsBase(true);
	return vqaccessibletextinterface->selectionCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInterface_OnSelectionCount(const QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_SelectionCount_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_SelectionCount_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleTextInterface_QBaseAddSelection(QAccessibleTextInterface* self, int startOffset, int endOffset) {
	auto* vqaccessibletextinterface = dynamic_cast<VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_AddSelection_IsBase(true);
	vqaccessibletextinterface->addSelection(startOffset, endOffset);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInterface_OnAddSelection(QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_AddSelection_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_AddSelection_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleTextInterface_QBaseRemoveSelection(QAccessibleTextInterface* self, int selectionIndex) {
	auto* vqaccessibletextinterface = dynamic_cast<VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_RemoveSelection_IsBase(true);
	vqaccessibletextinterface->removeSelection(selectionIndex);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInterface_OnRemoveSelection(QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_RemoveSelection_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_RemoveSelection_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleTextInterface_QBaseSetSelection(QAccessibleTextInterface* self, int selectionIndex, int startOffset, int endOffset) {
	auto* vqaccessibletextinterface = dynamic_cast<VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_SetSelection_IsBase(true);
	vqaccessibletextinterface->setSelection(selectionIndex, startOffset, endOffset);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInterface_OnSetSelection(QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_SetSelection_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_SetSelection_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTextInterface_QBaseCursorPosition(const QAccessibleTextInterface* self) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_CursorPosition_IsBase(true);
	return vqaccessibletextinterface->cursorPosition();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInterface_OnCursorPosition(const QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_CursorPosition_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_CursorPosition_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleTextInterface_QBaseSetCursorPosition(QAccessibleTextInterface* self, int position) {
	auto* vqaccessibletextinterface = dynamic_cast<VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_SetCursorPosition_IsBase(true);
	vqaccessibletextinterface->setCursorPosition(position);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInterface_OnSetCursorPosition(QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_SetCursorPosition_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_SetCursorPosition_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleTextInterface_QBaseText(const QAccessibleTextInterface* self, int startOffset, int endOffset) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_Text_IsBase(true);
	QString _ret = vqaccessibletextinterface->text(startOffset, endOffset);
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
void QAccessibleTextInterface_OnText(const QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_Text_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_Text_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleTextInterface_QBaseTextBeforeOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_TextBeforeOffset_IsBase(true);
	QString _ret = vqaccessibletextinterface->textBeforeOffset(offset, static_cast<QAccessible::TextBoundaryType>(boundaryType), startOffset, endOffset);
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
void QAccessibleTextInterface_OnTextBeforeOffset(const QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_TextBeforeOffset_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_TextBeforeOffset_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleTextInterface_QBaseTextAfterOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_TextAfterOffset_IsBase(true);
	QString _ret = vqaccessibletextinterface->textAfterOffset(offset, static_cast<QAccessible::TextBoundaryType>(boundaryType), startOffset, endOffset);
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
void QAccessibleTextInterface_OnTextAfterOffset(const QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_TextAfterOffset_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_TextAfterOffset_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleTextInterface_QBaseTextAtOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_TextAtOffset_IsBase(true);
	QString _ret = vqaccessibletextinterface->textAtOffset(offset, static_cast<QAccessible::TextBoundaryType>(boundaryType), startOffset, endOffset);
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
void QAccessibleTextInterface_OnTextAtOffset(const QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_TextAtOffset_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_TextAtOffset_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTextInterface_QBaseCharacterCount(const QAccessibleTextInterface* self) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_CharacterCount_IsBase(true);
	return vqaccessibletextinterface->characterCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInterface_OnCharacterCount(const QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_CharacterCount_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_CharacterCount_Callback>(slot));
}
}

// Base class handler implementation
QRect* QAccessibleTextInterface_QBaseCharacterRect(const QAccessibleTextInterface* self, int offset) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_CharacterRect_IsBase(true);
	return new QRect(vqaccessibletextinterface->characterRect(offset));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInterface_OnCharacterRect(const QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_CharacterRect_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_CharacterRect_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTextInterface_QBaseOffsetAtPoint(const QAccessibleTextInterface* self, const QPoint* point) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_OffsetAtPoint_IsBase(true);
	return vqaccessibletextinterface->offsetAtPoint(*point);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInterface_OnOffsetAtPoint(const QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_OffsetAtPoint_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_OffsetAtPoint_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleTextInterface_QBaseScrollToSubstring(QAccessibleTextInterface* self, int startIndex, int endIndex) {
	auto* vqaccessibletextinterface = dynamic_cast<VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_ScrollToSubstring_IsBase(true);
	vqaccessibletextinterface->scrollToSubstring(startIndex, endIndex);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInterface_OnScrollToSubstring(QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_ScrollToSubstring_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_ScrollToSubstring_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleTextInterface_QBaseAttributes(const QAccessibleTextInterface* self, int offset, int* startOffset, int* endOffset) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_Attributes_IsBase(true);
	QString _ret = vqaccessibletextinterface->attributes(offset, startOffset, endOffset);
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
void QAccessibleTextInterface_OnAttributes(const QAccessibleTextInterface* self, intptr_t slot) {
	auto* vqaccessibletextinterface = dynamic_cast<const VirtualQAccessibleTextInterface*>(self);
	if (vqaccessibletextinterface && vqaccessibletextinterface->isVirtualQAccessibleTextInterface) {
vqaccessibletextinterface->setQAccessibleTextInterface_Attributes_Callback(reinterpret_cast<VirtualQAccessibleTextInterface::QAccessibleTextInterface_Attributes_Callback>(slot));
}
}

void QAccessibleTextInterface_Delete(QAccessibleTextInterface* self) {
    delete self;
}

QAccessibleEditableTextInterface* QAccessibleEditableTextInterface_new() {
	 return new VirtualQAccessibleEditableTextInterface();
}

QAccessibleEditableTextInterface* QAccessibleEditableTextInterface_new2(const QAccessibleEditableTextInterface* param1) {
	 return new VirtualQAccessibleEditableTextInterface(*param1);
}

void QAccessibleEditableTextInterface_DeleteText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset) {
	self->deleteText(startOffset, endOffset);
}

void QAccessibleEditableTextInterface_InsertText(QAccessibleEditableTextInterface* self, int offset, const libqt_string text) {
	self->insertText(offset, QString::fromUtf8(text.data, text.len));
}

void QAccessibleEditableTextInterface_ReplaceText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset, const libqt_string text) {
	self->replaceText(startOffset, endOffset, QString::fromUtf8(text.data, text.len));
}

void QAccessibleEditableTextInterface_OperatorAssign(QAccessibleEditableTextInterface* self, const QAccessibleEditableTextInterface* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
void QAccessibleEditableTextInterface_QBaseDeleteText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset) {
	auto* vqaccessibleeditabletextinterface = dynamic_cast<VirtualQAccessibleEditableTextInterface*>(self);
	if (vqaccessibleeditabletextinterface && vqaccessibleeditabletextinterface->isVirtualQAccessibleEditableTextInterface) {
vqaccessibleeditabletextinterface->setQAccessibleEditableTextInterface_DeleteText_IsBase(true);
	vqaccessibleeditabletextinterface->deleteText(startOffset, endOffset);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleEditableTextInterface_OnDeleteText(QAccessibleEditableTextInterface* self, intptr_t slot) {
	auto* vqaccessibleeditabletextinterface = dynamic_cast<VirtualQAccessibleEditableTextInterface*>(self);
	if (vqaccessibleeditabletextinterface && vqaccessibleeditabletextinterface->isVirtualQAccessibleEditableTextInterface) {
vqaccessibleeditabletextinterface->setQAccessibleEditableTextInterface_DeleteText_Callback(reinterpret_cast<VirtualQAccessibleEditableTextInterface::QAccessibleEditableTextInterface_DeleteText_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleEditableTextInterface_QBaseInsertText(QAccessibleEditableTextInterface* self, int offset, const libqt_string text) {
	auto* vqaccessibleeditabletextinterface = dynamic_cast<VirtualQAccessibleEditableTextInterface*>(self);
	if (vqaccessibleeditabletextinterface && vqaccessibleeditabletextinterface->isVirtualQAccessibleEditableTextInterface) {
vqaccessibleeditabletextinterface->setQAccessibleEditableTextInterface_InsertText_IsBase(true);
	vqaccessibleeditabletextinterface->insertText(offset, QString::fromUtf8(text.data, text.len));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleEditableTextInterface_OnInsertText(QAccessibleEditableTextInterface* self, intptr_t slot) {
	auto* vqaccessibleeditabletextinterface = dynamic_cast<VirtualQAccessibleEditableTextInterface*>(self);
	if (vqaccessibleeditabletextinterface && vqaccessibleeditabletextinterface->isVirtualQAccessibleEditableTextInterface) {
vqaccessibleeditabletextinterface->setQAccessibleEditableTextInterface_InsertText_Callback(reinterpret_cast<VirtualQAccessibleEditableTextInterface::QAccessibleEditableTextInterface_InsertText_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleEditableTextInterface_QBaseReplaceText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset, const libqt_string text) {
	auto* vqaccessibleeditabletextinterface = dynamic_cast<VirtualQAccessibleEditableTextInterface*>(self);
	if (vqaccessibleeditabletextinterface && vqaccessibleeditabletextinterface->isVirtualQAccessibleEditableTextInterface) {
vqaccessibleeditabletextinterface->setQAccessibleEditableTextInterface_ReplaceText_IsBase(true);
	vqaccessibleeditabletextinterface->replaceText(startOffset, endOffset, QString::fromUtf8(text.data, text.len));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleEditableTextInterface_OnReplaceText(QAccessibleEditableTextInterface* self, intptr_t slot) {
	auto* vqaccessibleeditabletextinterface = dynamic_cast<VirtualQAccessibleEditableTextInterface*>(self);
	if (vqaccessibleeditabletextinterface && vqaccessibleeditabletextinterface->isVirtualQAccessibleEditableTextInterface) {
vqaccessibleeditabletextinterface->setQAccessibleEditableTextInterface_ReplaceText_Callback(reinterpret_cast<VirtualQAccessibleEditableTextInterface::QAccessibleEditableTextInterface_ReplaceText_Callback>(slot));
}
}

void QAccessibleEditableTextInterface_Delete(QAccessibleEditableTextInterface* self) {
    delete self;
}

QAccessibleValueInterface* QAccessibleValueInterface_new() {
	 return new VirtualQAccessibleValueInterface();
}

QAccessibleValueInterface* QAccessibleValueInterface_new2(const QAccessibleValueInterface* param1) {
	 return new VirtualQAccessibleValueInterface(*param1);
}

QVariant* QAccessibleValueInterface_CurrentValue(const QAccessibleValueInterface* self) {
	return new QVariant(self->currentValue());
}

void QAccessibleValueInterface_SetCurrentValue(QAccessibleValueInterface* self, const QVariant* value) {
	self->setCurrentValue(*value);
}

QVariant* QAccessibleValueInterface_MaximumValue(const QAccessibleValueInterface* self) {
	return new QVariant(self->maximumValue());
}

QVariant* QAccessibleValueInterface_MinimumValue(const QAccessibleValueInterface* self) {
	return new QVariant(self->minimumValue());
}

QVariant* QAccessibleValueInterface_MinimumStepSize(const QAccessibleValueInterface* self) {
	return new QVariant(self->minimumStepSize());
}

void QAccessibleValueInterface_OperatorAssign(QAccessibleValueInterface* self, const QAccessibleValueInterface* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
QVariant* QAccessibleValueInterface_QBaseCurrentValue(const QAccessibleValueInterface* self) {
	auto* vqaccessiblevalueinterface = dynamic_cast<const VirtualQAccessibleValueInterface*>(self);
	if (vqaccessiblevalueinterface && vqaccessiblevalueinterface->isVirtualQAccessibleValueInterface) {
vqaccessiblevalueinterface->setQAccessibleValueInterface_CurrentValue_IsBase(true);
	return new QVariant(vqaccessiblevalueinterface->currentValue());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleValueInterface_OnCurrentValue(const QAccessibleValueInterface* self, intptr_t slot) {
	auto* vqaccessiblevalueinterface = dynamic_cast<const VirtualQAccessibleValueInterface*>(self);
	if (vqaccessiblevalueinterface && vqaccessiblevalueinterface->isVirtualQAccessibleValueInterface) {
vqaccessiblevalueinterface->setQAccessibleValueInterface_CurrentValue_Callback(reinterpret_cast<VirtualQAccessibleValueInterface::QAccessibleValueInterface_CurrentValue_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleValueInterface_QBaseSetCurrentValue(QAccessibleValueInterface* self, const QVariant* value) {
	auto* vqaccessiblevalueinterface = dynamic_cast<VirtualQAccessibleValueInterface*>(self);
	if (vqaccessiblevalueinterface && vqaccessiblevalueinterface->isVirtualQAccessibleValueInterface) {
vqaccessiblevalueinterface->setQAccessibleValueInterface_SetCurrentValue_IsBase(true);
	vqaccessiblevalueinterface->setCurrentValue(*value);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleValueInterface_OnSetCurrentValue(QAccessibleValueInterface* self, intptr_t slot) {
	auto* vqaccessiblevalueinterface = dynamic_cast<VirtualQAccessibleValueInterface*>(self);
	if (vqaccessiblevalueinterface && vqaccessiblevalueinterface->isVirtualQAccessibleValueInterface) {
vqaccessiblevalueinterface->setQAccessibleValueInterface_SetCurrentValue_Callback(reinterpret_cast<VirtualQAccessibleValueInterface::QAccessibleValueInterface_SetCurrentValue_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QAccessibleValueInterface_QBaseMaximumValue(const QAccessibleValueInterface* self) {
	auto* vqaccessiblevalueinterface = dynamic_cast<const VirtualQAccessibleValueInterface*>(self);
	if (vqaccessiblevalueinterface && vqaccessiblevalueinterface->isVirtualQAccessibleValueInterface) {
vqaccessiblevalueinterface->setQAccessibleValueInterface_MaximumValue_IsBase(true);
	return new QVariant(vqaccessiblevalueinterface->maximumValue());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleValueInterface_OnMaximumValue(const QAccessibleValueInterface* self, intptr_t slot) {
	auto* vqaccessiblevalueinterface = dynamic_cast<const VirtualQAccessibleValueInterface*>(self);
	if (vqaccessiblevalueinterface && vqaccessiblevalueinterface->isVirtualQAccessibleValueInterface) {
vqaccessiblevalueinterface->setQAccessibleValueInterface_MaximumValue_Callback(reinterpret_cast<VirtualQAccessibleValueInterface::QAccessibleValueInterface_MaximumValue_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QAccessibleValueInterface_QBaseMinimumValue(const QAccessibleValueInterface* self) {
	auto* vqaccessiblevalueinterface = dynamic_cast<const VirtualQAccessibleValueInterface*>(self);
	if (vqaccessiblevalueinterface && vqaccessiblevalueinterface->isVirtualQAccessibleValueInterface) {
vqaccessiblevalueinterface->setQAccessibleValueInterface_MinimumValue_IsBase(true);
	return new QVariant(vqaccessiblevalueinterface->minimumValue());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleValueInterface_OnMinimumValue(const QAccessibleValueInterface* self, intptr_t slot) {
	auto* vqaccessiblevalueinterface = dynamic_cast<const VirtualQAccessibleValueInterface*>(self);
	if (vqaccessiblevalueinterface && vqaccessiblevalueinterface->isVirtualQAccessibleValueInterface) {
vqaccessiblevalueinterface->setQAccessibleValueInterface_MinimumValue_Callback(reinterpret_cast<VirtualQAccessibleValueInterface::QAccessibleValueInterface_MinimumValue_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QAccessibleValueInterface_QBaseMinimumStepSize(const QAccessibleValueInterface* self) {
	auto* vqaccessiblevalueinterface = dynamic_cast<const VirtualQAccessibleValueInterface*>(self);
	if (vqaccessiblevalueinterface && vqaccessiblevalueinterface->isVirtualQAccessibleValueInterface) {
vqaccessiblevalueinterface->setQAccessibleValueInterface_MinimumStepSize_IsBase(true);
	return new QVariant(vqaccessiblevalueinterface->minimumStepSize());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleValueInterface_OnMinimumStepSize(const QAccessibleValueInterface* self, intptr_t slot) {
	auto* vqaccessiblevalueinterface = dynamic_cast<const VirtualQAccessibleValueInterface*>(self);
	if (vqaccessiblevalueinterface && vqaccessiblevalueinterface->isVirtualQAccessibleValueInterface) {
vqaccessiblevalueinterface->setQAccessibleValueInterface_MinimumStepSize_Callback(reinterpret_cast<VirtualQAccessibleValueInterface::QAccessibleValueInterface_MinimumStepSize_Callback>(slot));
}
}

void QAccessibleValueInterface_Delete(QAccessibleValueInterface* self) {
    delete self;
}

QAccessibleTableCellInterface* QAccessibleTableCellInterface_new() {
	 return new VirtualQAccessibleTableCellInterface();
}

QAccessibleTableCellInterface* QAccessibleTableCellInterface_new2(const QAccessibleTableCellInterface* param1) {
	 return new VirtualQAccessibleTableCellInterface(*param1);
}

bool QAccessibleTableCellInterface_IsSelected(const QAccessibleTableCellInterface* self) {
	return self->isSelected();
}

libqt_list QAccessibleTableCellInterface_ColumnHeaderCells(const QAccessibleTableCellInterface* self) {
	return self->columnHeaderCells();
}

libqt_list QAccessibleTableCellInterface_RowHeaderCells(const QAccessibleTableCellInterface* self) {
	return self->rowHeaderCells();
}

int QAccessibleTableCellInterface_ColumnIndex(const QAccessibleTableCellInterface* self) {
	return self->columnIndex();
}

int QAccessibleTableCellInterface_RowIndex(const QAccessibleTableCellInterface* self) {
	return self->rowIndex();
}

int QAccessibleTableCellInterface_ColumnExtent(const QAccessibleTableCellInterface* self) {
	return self->columnExtent();
}

int QAccessibleTableCellInterface_RowExtent(const QAccessibleTableCellInterface* self) {
	return self->rowExtent();
}

QAccessibleInterface* QAccessibleTableCellInterface_Table(const QAccessibleTableCellInterface* self) {
	return self->table();
}

void QAccessibleTableCellInterface_OperatorAssign(QAccessibleTableCellInterface* self, const QAccessibleTableCellInterface* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
bool QAccessibleTableCellInterface_QBaseIsSelected(const QAccessibleTableCellInterface* self) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_IsSelected_IsBase(true);
	return vqaccessibletablecellinterface->isSelected();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableCellInterface_OnIsSelected(const QAccessibleTableCellInterface* self, intptr_t slot) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_IsSelected_Callback(reinterpret_cast<VirtualQAccessibleTableCellInterface::QAccessibleTableCellInterface_IsSelected_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAccessibleTableCellInterface_QBaseColumnHeaderCells(const QAccessibleTableCellInterface* self) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_ColumnHeaderCells_IsBase(true);
	return vqaccessibletablecellinterface->columnHeaderCells();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableCellInterface_OnColumnHeaderCells(const QAccessibleTableCellInterface* self, intptr_t slot) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_ColumnHeaderCells_Callback(reinterpret_cast<VirtualQAccessibleTableCellInterface::QAccessibleTableCellInterface_ColumnHeaderCells_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAccessibleTableCellInterface_QBaseRowHeaderCells(const QAccessibleTableCellInterface* self) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_RowHeaderCells_IsBase(true);
	return vqaccessibletablecellinterface->rowHeaderCells();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableCellInterface_OnRowHeaderCells(const QAccessibleTableCellInterface* self, intptr_t slot) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_RowHeaderCells_Callback(reinterpret_cast<VirtualQAccessibleTableCellInterface::QAccessibleTableCellInterface_RowHeaderCells_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTableCellInterface_QBaseColumnIndex(const QAccessibleTableCellInterface* self) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_ColumnIndex_IsBase(true);
	return vqaccessibletablecellinterface->columnIndex();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableCellInterface_OnColumnIndex(const QAccessibleTableCellInterface* self, intptr_t slot) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_ColumnIndex_Callback(reinterpret_cast<VirtualQAccessibleTableCellInterface::QAccessibleTableCellInterface_ColumnIndex_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTableCellInterface_QBaseRowIndex(const QAccessibleTableCellInterface* self) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_RowIndex_IsBase(true);
	return vqaccessibletablecellinterface->rowIndex();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableCellInterface_OnRowIndex(const QAccessibleTableCellInterface* self, intptr_t slot) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_RowIndex_Callback(reinterpret_cast<VirtualQAccessibleTableCellInterface::QAccessibleTableCellInterface_RowIndex_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTableCellInterface_QBaseColumnExtent(const QAccessibleTableCellInterface* self) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_ColumnExtent_IsBase(true);
	return vqaccessibletablecellinterface->columnExtent();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableCellInterface_OnColumnExtent(const QAccessibleTableCellInterface* self, intptr_t slot) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_ColumnExtent_Callback(reinterpret_cast<VirtualQAccessibleTableCellInterface::QAccessibleTableCellInterface_ColumnExtent_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTableCellInterface_QBaseRowExtent(const QAccessibleTableCellInterface* self) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_RowExtent_IsBase(true);
	return vqaccessibletablecellinterface->rowExtent();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableCellInterface_OnRowExtent(const QAccessibleTableCellInterface* self, intptr_t slot) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_RowExtent_Callback(reinterpret_cast<VirtualQAccessibleTableCellInterface::QAccessibleTableCellInterface_RowExtent_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleTableCellInterface_QBaseTable(const QAccessibleTableCellInterface* self) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_Table_IsBase(true);
	return vqaccessibletablecellinterface->table();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableCellInterface_OnTable(const QAccessibleTableCellInterface* self, intptr_t slot) {
	auto* vqaccessibletablecellinterface = dynamic_cast<const VirtualQAccessibleTableCellInterface*>(self);
	if (vqaccessibletablecellinterface && vqaccessibletablecellinterface->isVirtualQAccessibleTableCellInterface) {
vqaccessibletablecellinterface->setQAccessibleTableCellInterface_Table_Callback(reinterpret_cast<VirtualQAccessibleTableCellInterface::QAccessibleTableCellInterface_Table_Callback>(slot));
}
}

void QAccessibleTableCellInterface_Delete(QAccessibleTableCellInterface* self) {
    delete self;
}

QAccessibleTableInterface* QAccessibleTableInterface_new() {
	 return new VirtualQAccessibleTableInterface();
}

QAccessibleTableInterface* QAccessibleTableInterface_new2(const QAccessibleTableInterface* param1) {
	 return new VirtualQAccessibleTableInterface(*param1);
}

QAccessibleInterface* QAccessibleTableInterface_Caption(const QAccessibleTableInterface* self) {
	return self->caption();
}

QAccessibleInterface* QAccessibleTableInterface_Summary(const QAccessibleTableInterface* self) {
	return self->summary();
}

QAccessibleInterface* QAccessibleTableInterface_CellAt(const QAccessibleTableInterface* self, int row, int column) {
	return self->cellAt(row, column);
}

int QAccessibleTableInterface_SelectedCellCount(const QAccessibleTableInterface* self) {
	return self->selectedCellCount();
}

libqt_list QAccessibleTableInterface_SelectedCells(const QAccessibleTableInterface* self) {
	return self->selectedCells();
}

libqt_string QAccessibleTableInterface_ColumnDescription(const QAccessibleTableInterface* self, int column) {
	QString _ret = self->columnDescription(column);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleTableInterface_RowDescription(const QAccessibleTableInterface* self, int row) {
	QString _ret = self->rowDescription(row);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAccessibleTableInterface_SelectedColumnCount(const QAccessibleTableInterface* self) {
	return self->selectedColumnCount();
}

int QAccessibleTableInterface_SelectedRowCount(const QAccessibleTableInterface* self) {
	return self->selectedRowCount();
}

int QAccessibleTableInterface_ColumnCount(const QAccessibleTableInterface* self) {
	return self->columnCount();
}

int QAccessibleTableInterface_RowCount(const QAccessibleTableInterface* self) {
	return self->rowCount();
}

libqt_list QAccessibleTableInterface_SelectedColumns(const QAccessibleTableInterface* self) {
	return self->selectedColumns();
}

libqt_list QAccessibleTableInterface_SelectedRows(const QAccessibleTableInterface* self) {
	return self->selectedRows();
}

bool QAccessibleTableInterface_IsColumnSelected(const QAccessibleTableInterface* self, int column) {
	return self->isColumnSelected(column);
}

bool QAccessibleTableInterface_IsRowSelected(const QAccessibleTableInterface* self, int row) {
	return self->isRowSelected(row);
}

bool QAccessibleTableInterface_SelectRow(QAccessibleTableInterface* self, int row) {
	return self->selectRow(row);
}

bool QAccessibleTableInterface_SelectColumn(QAccessibleTableInterface* self, int column) {
	return self->selectColumn(column);
}

bool QAccessibleTableInterface_UnselectRow(QAccessibleTableInterface* self, int row) {
	return self->unselectRow(row);
}

bool QAccessibleTableInterface_UnselectColumn(QAccessibleTableInterface* self, int column) {
	return self->unselectColumn(column);
}

void QAccessibleTableInterface_ModelChange(QAccessibleTableInterface* self, QAccessibleTableModelChangeEvent* event) {
	self->modelChange(event);
}

// Base class handler implementation
QAccessibleInterface* QAccessibleTableInterface_QBaseCaption(const QAccessibleTableInterface* self) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_Caption_IsBase(true);
	return vqaccessibletableinterface->caption();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnCaption(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_Caption_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_Caption_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleTableInterface_QBaseSummary(const QAccessibleTableInterface* self) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_Summary_IsBase(true);
	return vqaccessibletableinterface->summary();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnSummary(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_Summary_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_Summary_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleTableInterface_QBaseCellAt(const QAccessibleTableInterface* self, int row, int column) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_CellAt_IsBase(true);
	return vqaccessibletableinterface->cellAt(row, column);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnCellAt(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_CellAt_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_CellAt_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTableInterface_QBaseSelectedCellCount(const QAccessibleTableInterface* self) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedCellCount_IsBase(true);
	return vqaccessibletableinterface->selectedCellCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnSelectedCellCount(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedCellCount_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_SelectedCellCount_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAccessibleTableInterface_QBaseSelectedCells(const QAccessibleTableInterface* self) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedCells_IsBase(true);
	return vqaccessibletableinterface->selectedCells();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnSelectedCells(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedCells_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_SelectedCells_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleTableInterface_QBaseColumnDescription(const QAccessibleTableInterface* self, int column) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_ColumnDescription_IsBase(true);
	QString _ret = vqaccessibletableinterface->columnDescription(column);
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
void QAccessibleTableInterface_OnColumnDescription(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_ColumnDescription_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_ColumnDescription_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleTableInterface_QBaseRowDescription(const QAccessibleTableInterface* self, int row) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_RowDescription_IsBase(true);
	QString _ret = vqaccessibletableinterface->rowDescription(row);
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
void QAccessibleTableInterface_OnRowDescription(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_RowDescription_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_RowDescription_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTableInterface_QBaseSelectedColumnCount(const QAccessibleTableInterface* self) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedColumnCount_IsBase(true);
	return vqaccessibletableinterface->selectedColumnCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnSelectedColumnCount(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedColumnCount_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_SelectedColumnCount_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTableInterface_QBaseSelectedRowCount(const QAccessibleTableInterface* self) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedRowCount_IsBase(true);
	return vqaccessibletableinterface->selectedRowCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnSelectedRowCount(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedRowCount_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_SelectedRowCount_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTableInterface_QBaseColumnCount(const QAccessibleTableInterface* self) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_ColumnCount_IsBase(true);
	return vqaccessibletableinterface->columnCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnColumnCount(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_ColumnCount_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_ColumnCount_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleTableInterface_QBaseRowCount(const QAccessibleTableInterface* self) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_RowCount_IsBase(true);
	return vqaccessibletableinterface->rowCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnRowCount(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_RowCount_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_RowCount_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAccessibleTableInterface_QBaseSelectedColumns(const QAccessibleTableInterface* self) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedColumns_IsBase(true);
	return vqaccessibletableinterface->selectedColumns();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnSelectedColumns(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedColumns_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_SelectedColumns_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAccessibleTableInterface_QBaseSelectedRows(const QAccessibleTableInterface* self) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedRows_IsBase(true);
	return vqaccessibletableinterface->selectedRows();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnSelectedRows(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectedRows_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_SelectedRows_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleTableInterface_QBaseIsColumnSelected(const QAccessibleTableInterface* self, int column) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_IsColumnSelected_IsBase(true);
	return vqaccessibletableinterface->isColumnSelected(column);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnIsColumnSelected(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_IsColumnSelected_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_IsColumnSelected_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleTableInterface_QBaseIsRowSelected(const QAccessibleTableInterface* self, int row) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_IsRowSelected_IsBase(true);
	return vqaccessibletableinterface->isRowSelected(row);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnIsRowSelected(const QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<const VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_IsRowSelected_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_IsRowSelected_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleTableInterface_QBaseSelectRow(QAccessibleTableInterface* self, int row) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectRow_IsBase(true);
	return vqaccessibletableinterface->selectRow(row);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnSelectRow(QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectRow_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_SelectRow_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleTableInterface_QBaseSelectColumn(QAccessibleTableInterface* self, int column) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectColumn_IsBase(true);
	return vqaccessibletableinterface->selectColumn(column);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnSelectColumn(QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_SelectColumn_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_SelectColumn_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleTableInterface_QBaseUnselectRow(QAccessibleTableInterface* self, int row) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_UnselectRow_IsBase(true);
	return vqaccessibletableinterface->unselectRow(row);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnUnselectRow(QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_UnselectRow_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_UnselectRow_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleTableInterface_QBaseUnselectColumn(QAccessibleTableInterface* self, int column) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_UnselectColumn_IsBase(true);
	return vqaccessibletableinterface->unselectColumn(column);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnUnselectColumn(QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_UnselectColumn_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_UnselectColumn_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleTableInterface_QBaseModelChange(QAccessibleTableInterface* self, QAccessibleTableModelChangeEvent* event) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_ModelChange_IsBase(true);
	vqaccessibletableinterface->modelChange(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnModelChange(QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_ModelChange_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_ModelChange_Callback>(slot));
}
}

// Derived class handler implementation
void QAccessibleTableInterface_OperatorAssign(QAccessibleTableInterface* self, const QAccessibleTableInterface* param1) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
	vqaccessibletableinterface->operator=(*param1);
	} else {
	self->QAccessibleTableInterface::operator=(*param1);
}
}

// Base class handler implementation
void QAccessibleTableInterface_QBaseOperatorAssign(QAccessibleTableInterface* self, const QAccessibleTableInterface* param1) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_OperatorAssign_IsBase(true);
	vqaccessibletableinterface->operator=(*param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableInterface_OnOperatorAssign(QAccessibleTableInterface* self, intptr_t slot) {
	auto* vqaccessibletableinterface = dynamic_cast<VirtualQAccessibleTableInterface*>(self);
	if (vqaccessibletableinterface && vqaccessibletableinterface->isVirtualQAccessibleTableInterface) {
vqaccessibletableinterface->setQAccessibleTableInterface_OperatorAssign_Callback(reinterpret_cast<VirtualQAccessibleTableInterface::QAccessibleTableInterface_OperatorAssign_Callback>(slot));
}
}

void QAccessibleTableInterface_Delete(QAccessibleTableInterface* self) {
    delete self;
}

QAccessibleActionInterface* QAccessibleActionInterface_new() {
	 return new VirtualQAccessibleActionInterface();
}

QAccessibleActionInterface* QAccessibleActionInterface_new2(const QAccessibleActionInterface* param1) {
	 return new VirtualQAccessibleActionInterface(*param1);
}

libqt_string QAccessibleActionInterface_Tr(const char* sourceText) {
	QString _ret = QAccessibleActionInterface::tr(sourceText);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QAccessibleActionInterface_ActionNames(const QAccessibleActionInterface* self) {
	return self->actionNames();
}

libqt_string QAccessibleActionInterface_LocalizedActionName(const QAccessibleActionInterface* self, const libqt_string name) {
	QString _ret = self->localizedActionName(QString::fromUtf8(name.data, name.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_LocalizedActionDescription(const QAccessibleActionInterface* self, const libqt_string name) {
	QString _ret = self->localizedActionDescription(QString::fromUtf8(name.data, name.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAccessibleActionInterface_DoAction(QAccessibleActionInterface* self, const libqt_string actionName) {
	self->doAction(QString::fromUtf8(actionName.data, actionName.len));
}

libqt_list QAccessibleActionInterface_KeyBindingsForAction(const QAccessibleActionInterface* self, const libqt_string actionName) {
	return self->keyBindingsForAction(QString::fromUtf8(actionName.data, actionName.len));
}

libqt_string QAccessibleActionInterface_PressAction() {
	QString _ret = QAccessibleActionInterface::pressAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_IncreaseAction() {
	QString _ret = QAccessibleActionInterface::increaseAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_DecreaseAction() {
	QString _ret = QAccessibleActionInterface::decreaseAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_ShowMenuAction() {
	QString _ret = QAccessibleActionInterface::showMenuAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_SetFocusAction() {
	QString _ret = QAccessibleActionInterface::setFocusAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_ToggleAction() {
	QString _ret = QAccessibleActionInterface::toggleAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_ScrollLeftAction() {
	QString _ret = QAccessibleActionInterface::scrollLeftAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_ScrollRightAction() {
	QString _ret = QAccessibleActionInterface::scrollRightAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_ScrollUpAction() {
	QString _ret = QAccessibleActionInterface::scrollUpAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_ScrollDownAction() {
	QString _ret = QAccessibleActionInterface::scrollDownAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_NextPageAction() {
	QString _ret = QAccessibleActionInterface::nextPageAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_PreviousPageAction() {
	QString _ret = QAccessibleActionInterface::previousPageAction();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAccessibleActionInterface_OperatorAssign(QAccessibleActionInterface* self, const QAccessibleActionInterface* param1) {
	self->operator=(*param1);
}

libqt_string QAccessibleActionInterface_Tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QAccessibleActionInterface::tr(sourceText, disambiguation);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleActionInterface_Tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QAccessibleActionInterface::tr(sourceText, disambiguation, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
libqt_list QAccessibleActionInterface_QBaseActionNames(const QAccessibleActionInterface* self) {
	auto* vqaccessibleactioninterface = dynamic_cast<const VirtualQAccessibleActionInterface*>(self);
	if (vqaccessibleactioninterface && vqaccessibleactioninterface->isVirtualQAccessibleActionInterface) {
vqaccessibleactioninterface->setQAccessibleActionInterface_ActionNames_IsBase(true);
	return vqaccessibleactioninterface->actionNames();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleActionInterface_OnActionNames(const QAccessibleActionInterface* self, intptr_t slot) {
	auto* vqaccessibleactioninterface = dynamic_cast<const VirtualQAccessibleActionInterface*>(self);
	if (vqaccessibleactioninterface && vqaccessibleactioninterface->isVirtualQAccessibleActionInterface) {
vqaccessibleactioninterface->setQAccessibleActionInterface_ActionNames_Callback(reinterpret_cast<VirtualQAccessibleActionInterface::QAccessibleActionInterface_ActionNames_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleActionInterface_QBaseLocalizedActionName(const QAccessibleActionInterface* self, const libqt_string name) {
	auto* vqaccessibleactioninterface = dynamic_cast<const VirtualQAccessibleActionInterface*>(self);
	if (vqaccessibleactioninterface && vqaccessibleactioninterface->isVirtualQAccessibleActionInterface) {
vqaccessibleactioninterface->setQAccessibleActionInterface_LocalizedActionName_IsBase(true);
	QString _ret = vqaccessibleactioninterface->localizedActionName(QString::fromUtf8(name.data, name.len));
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
void QAccessibleActionInterface_OnLocalizedActionName(const QAccessibleActionInterface* self, intptr_t slot) {
	auto* vqaccessibleactioninterface = dynamic_cast<const VirtualQAccessibleActionInterface*>(self);
	if (vqaccessibleactioninterface && vqaccessibleactioninterface->isVirtualQAccessibleActionInterface) {
vqaccessibleactioninterface->setQAccessibleActionInterface_LocalizedActionName_Callback(reinterpret_cast<VirtualQAccessibleActionInterface::QAccessibleActionInterface_LocalizedActionName_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleActionInterface_QBaseLocalizedActionDescription(const QAccessibleActionInterface* self, const libqt_string name) {
	auto* vqaccessibleactioninterface = dynamic_cast<const VirtualQAccessibleActionInterface*>(self);
	if (vqaccessibleactioninterface && vqaccessibleactioninterface->isVirtualQAccessibleActionInterface) {
vqaccessibleactioninterface->setQAccessibleActionInterface_LocalizedActionDescription_IsBase(true);
	QString _ret = vqaccessibleactioninterface->localizedActionDescription(QString::fromUtf8(name.data, name.len));
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
void QAccessibleActionInterface_OnLocalizedActionDescription(const QAccessibleActionInterface* self, intptr_t slot) {
	auto* vqaccessibleactioninterface = dynamic_cast<const VirtualQAccessibleActionInterface*>(self);
	if (vqaccessibleactioninterface && vqaccessibleactioninterface->isVirtualQAccessibleActionInterface) {
vqaccessibleactioninterface->setQAccessibleActionInterface_LocalizedActionDescription_Callback(reinterpret_cast<VirtualQAccessibleActionInterface::QAccessibleActionInterface_LocalizedActionDescription_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleActionInterface_QBaseDoAction(QAccessibleActionInterface* self, const libqt_string actionName) {
	auto* vqaccessibleactioninterface = dynamic_cast<VirtualQAccessibleActionInterface*>(self);
	if (vqaccessibleactioninterface && vqaccessibleactioninterface->isVirtualQAccessibleActionInterface) {
vqaccessibleactioninterface->setQAccessibleActionInterface_DoAction_IsBase(true);
	vqaccessibleactioninterface->doAction(QString::fromUtf8(actionName.data, actionName.len));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleActionInterface_OnDoAction(QAccessibleActionInterface* self, intptr_t slot) {
	auto* vqaccessibleactioninterface = dynamic_cast<VirtualQAccessibleActionInterface*>(self);
	if (vqaccessibleactioninterface && vqaccessibleactioninterface->isVirtualQAccessibleActionInterface) {
vqaccessibleactioninterface->setQAccessibleActionInterface_DoAction_Callback(reinterpret_cast<VirtualQAccessibleActionInterface::QAccessibleActionInterface_DoAction_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAccessibleActionInterface_QBaseKeyBindingsForAction(const QAccessibleActionInterface* self, const libqt_string actionName) {
	auto* vqaccessibleactioninterface = dynamic_cast<const VirtualQAccessibleActionInterface*>(self);
	if (vqaccessibleactioninterface && vqaccessibleactioninterface->isVirtualQAccessibleActionInterface) {
vqaccessibleactioninterface->setQAccessibleActionInterface_KeyBindingsForAction_IsBase(true);
	return vqaccessibleactioninterface->keyBindingsForAction(QString::fromUtf8(actionName.data, actionName.len));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleActionInterface_OnKeyBindingsForAction(const QAccessibleActionInterface* self, intptr_t slot) {
	auto* vqaccessibleactioninterface = dynamic_cast<const VirtualQAccessibleActionInterface*>(self);
	if (vqaccessibleactioninterface && vqaccessibleactioninterface->isVirtualQAccessibleActionInterface) {
vqaccessibleactioninterface->setQAccessibleActionInterface_KeyBindingsForAction_Callback(reinterpret_cast<VirtualQAccessibleActionInterface::QAccessibleActionInterface_KeyBindingsForAction_Callback>(slot));
}
}

void QAccessibleActionInterface_Delete(QAccessibleActionInterface* self) {
    delete self;
}

QAccessibleImageInterface* QAccessibleImageInterface_new() {
	 return new VirtualQAccessibleImageInterface();
}

QAccessibleImageInterface* QAccessibleImageInterface_new2(const QAccessibleImageInterface* param1) {
	 return new VirtualQAccessibleImageInterface(*param1);
}

libqt_string QAccessibleImageInterface_ImageDescription(const QAccessibleImageInterface* self) {
	QString _ret = self->imageDescription();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QAccessibleImageInterface_ImageSize(const QAccessibleImageInterface* self) {
	return new QSize(self->imageSize());
}

QPoint* QAccessibleImageInterface_ImagePosition(const QAccessibleImageInterface* self) {
	return new QPoint(self->imagePosition());
}

void QAccessibleImageInterface_OperatorAssign(QAccessibleImageInterface* self, const QAccessibleImageInterface* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
libqt_string QAccessibleImageInterface_QBaseImageDescription(const QAccessibleImageInterface* self) {
	auto* vqaccessibleimageinterface = dynamic_cast<const VirtualQAccessibleImageInterface*>(self);
	if (vqaccessibleimageinterface && vqaccessibleimageinterface->isVirtualQAccessibleImageInterface) {
vqaccessibleimageinterface->setQAccessibleImageInterface_ImageDescription_IsBase(true);
	QString _ret = vqaccessibleimageinterface->imageDescription();
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
void QAccessibleImageInterface_OnImageDescription(const QAccessibleImageInterface* self, intptr_t slot) {
	auto* vqaccessibleimageinterface = dynamic_cast<const VirtualQAccessibleImageInterface*>(self);
	if (vqaccessibleimageinterface && vqaccessibleimageinterface->isVirtualQAccessibleImageInterface) {
vqaccessibleimageinterface->setQAccessibleImageInterface_ImageDescription_Callback(reinterpret_cast<VirtualQAccessibleImageInterface::QAccessibleImageInterface_ImageDescription_Callback>(slot));
}
}

// Base class handler implementation
QSize* QAccessibleImageInterface_QBaseImageSize(const QAccessibleImageInterface* self) {
	auto* vqaccessibleimageinterface = dynamic_cast<const VirtualQAccessibleImageInterface*>(self);
	if (vqaccessibleimageinterface && vqaccessibleimageinterface->isVirtualQAccessibleImageInterface) {
vqaccessibleimageinterface->setQAccessibleImageInterface_ImageSize_IsBase(true);
	return new QSize(vqaccessibleimageinterface->imageSize());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleImageInterface_OnImageSize(const QAccessibleImageInterface* self, intptr_t slot) {
	auto* vqaccessibleimageinterface = dynamic_cast<const VirtualQAccessibleImageInterface*>(self);
	if (vqaccessibleimageinterface && vqaccessibleimageinterface->isVirtualQAccessibleImageInterface) {
vqaccessibleimageinterface->setQAccessibleImageInterface_ImageSize_Callback(reinterpret_cast<VirtualQAccessibleImageInterface::QAccessibleImageInterface_ImageSize_Callback>(slot));
}
}

// Base class handler implementation
QPoint* QAccessibleImageInterface_QBaseImagePosition(const QAccessibleImageInterface* self) {
	auto* vqaccessibleimageinterface = dynamic_cast<const VirtualQAccessibleImageInterface*>(self);
	if (vqaccessibleimageinterface && vqaccessibleimageinterface->isVirtualQAccessibleImageInterface) {
vqaccessibleimageinterface->setQAccessibleImageInterface_ImagePosition_IsBase(true);
	return new QPoint(vqaccessibleimageinterface->imagePosition());
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleImageInterface_OnImagePosition(const QAccessibleImageInterface* self, intptr_t slot) {
	auto* vqaccessibleimageinterface = dynamic_cast<const VirtualQAccessibleImageInterface*>(self);
	if (vqaccessibleimageinterface && vqaccessibleimageinterface->isVirtualQAccessibleImageInterface) {
vqaccessibleimageinterface->setQAccessibleImageInterface_ImagePosition_Callback(reinterpret_cast<VirtualQAccessibleImageInterface::QAccessibleImageInterface_ImagePosition_Callback>(slot));
}
}

void QAccessibleImageInterface_Delete(QAccessibleImageInterface* self) {
    delete self;
}

QAccessibleHyperlinkInterface* QAccessibleHyperlinkInterface_new() {
	 return new VirtualQAccessibleHyperlinkInterface();
}

QAccessibleHyperlinkInterface* QAccessibleHyperlinkInterface_new2(const QAccessibleHyperlinkInterface* param1) {
	 return new VirtualQAccessibleHyperlinkInterface(*param1);
}

libqt_string QAccessibleHyperlinkInterface_Anchor(const QAccessibleHyperlinkInterface* self) {
	QString _ret = self->anchor();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleHyperlinkInterface_AnchorTarget(const QAccessibleHyperlinkInterface* self) {
	QString _ret = self->anchorTarget();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAccessibleHyperlinkInterface_StartIndex(const QAccessibleHyperlinkInterface* self) {
	return self->startIndex();
}

int QAccessibleHyperlinkInterface_EndIndex(const QAccessibleHyperlinkInterface* self) {
	return self->endIndex();
}

bool QAccessibleHyperlinkInterface_IsValid(const QAccessibleHyperlinkInterface* self) {
	return self->isValid();
}

void QAccessibleHyperlinkInterface_OperatorAssign(QAccessibleHyperlinkInterface* self, const QAccessibleHyperlinkInterface* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
libqt_string QAccessibleHyperlinkInterface_QBaseAnchor(const QAccessibleHyperlinkInterface* self) {
	auto* vqaccessiblehyperlinkinterface = dynamic_cast<const VirtualQAccessibleHyperlinkInterface*>(self);
	if (vqaccessiblehyperlinkinterface && vqaccessiblehyperlinkinterface->isVirtualQAccessibleHyperlinkInterface) {
vqaccessiblehyperlinkinterface->setQAccessibleHyperlinkInterface_Anchor_IsBase(true);
	QString _ret = vqaccessiblehyperlinkinterface->anchor();
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
void QAccessibleHyperlinkInterface_OnAnchor(const QAccessibleHyperlinkInterface* self, intptr_t slot) {
	auto* vqaccessiblehyperlinkinterface = dynamic_cast<const VirtualQAccessibleHyperlinkInterface*>(self);
	if (vqaccessiblehyperlinkinterface && vqaccessiblehyperlinkinterface->isVirtualQAccessibleHyperlinkInterface) {
vqaccessiblehyperlinkinterface->setQAccessibleHyperlinkInterface_Anchor_Callback(reinterpret_cast<VirtualQAccessibleHyperlinkInterface::QAccessibleHyperlinkInterface_Anchor_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QAccessibleHyperlinkInterface_QBaseAnchorTarget(const QAccessibleHyperlinkInterface* self) {
	auto* vqaccessiblehyperlinkinterface = dynamic_cast<const VirtualQAccessibleHyperlinkInterface*>(self);
	if (vqaccessiblehyperlinkinterface && vqaccessiblehyperlinkinterface->isVirtualQAccessibleHyperlinkInterface) {
vqaccessiblehyperlinkinterface->setQAccessibleHyperlinkInterface_AnchorTarget_IsBase(true);
	QString _ret = vqaccessiblehyperlinkinterface->anchorTarget();
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
void QAccessibleHyperlinkInterface_OnAnchorTarget(const QAccessibleHyperlinkInterface* self, intptr_t slot) {
	auto* vqaccessiblehyperlinkinterface = dynamic_cast<const VirtualQAccessibleHyperlinkInterface*>(self);
	if (vqaccessiblehyperlinkinterface && vqaccessiblehyperlinkinterface->isVirtualQAccessibleHyperlinkInterface) {
vqaccessiblehyperlinkinterface->setQAccessibleHyperlinkInterface_AnchorTarget_Callback(reinterpret_cast<VirtualQAccessibleHyperlinkInterface::QAccessibleHyperlinkInterface_AnchorTarget_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleHyperlinkInterface_QBaseStartIndex(const QAccessibleHyperlinkInterface* self) {
	auto* vqaccessiblehyperlinkinterface = dynamic_cast<const VirtualQAccessibleHyperlinkInterface*>(self);
	if (vqaccessiblehyperlinkinterface && vqaccessiblehyperlinkinterface->isVirtualQAccessibleHyperlinkInterface) {
vqaccessiblehyperlinkinterface->setQAccessibleHyperlinkInterface_StartIndex_IsBase(true);
	return vqaccessiblehyperlinkinterface->startIndex();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleHyperlinkInterface_OnStartIndex(const QAccessibleHyperlinkInterface* self, intptr_t slot) {
	auto* vqaccessiblehyperlinkinterface = dynamic_cast<const VirtualQAccessibleHyperlinkInterface*>(self);
	if (vqaccessiblehyperlinkinterface && vqaccessiblehyperlinkinterface->isVirtualQAccessibleHyperlinkInterface) {
vqaccessiblehyperlinkinterface->setQAccessibleHyperlinkInterface_StartIndex_Callback(reinterpret_cast<VirtualQAccessibleHyperlinkInterface::QAccessibleHyperlinkInterface_StartIndex_Callback>(slot));
}
}

// Base class handler implementation
int QAccessibleHyperlinkInterface_QBaseEndIndex(const QAccessibleHyperlinkInterface* self) {
	auto* vqaccessiblehyperlinkinterface = dynamic_cast<const VirtualQAccessibleHyperlinkInterface*>(self);
	if (vqaccessiblehyperlinkinterface && vqaccessiblehyperlinkinterface->isVirtualQAccessibleHyperlinkInterface) {
vqaccessiblehyperlinkinterface->setQAccessibleHyperlinkInterface_EndIndex_IsBase(true);
	return vqaccessiblehyperlinkinterface->endIndex();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleHyperlinkInterface_OnEndIndex(const QAccessibleHyperlinkInterface* self, intptr_t slot) {
	auto* vqaccessiblehyperlinkinterface = dynamic_cast<const VirtualQAccessibleHyperlinkInterface*>(self);
	if (vqaccessiblehyperlinkinterface && vqaccessiblehyperlinkinterface->isVirtualQAccessibleHyperlinkInterface) {
vqaccessiblehyperlinkinterface->setQAccessibleHyperlinkInterface_EndIndex_Callback(reinterpret_cast<VirtualQAccessibleHyperlinkInterface::QAccessibleHyperlinkInterface_EndIndex_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleHyperlinkInterface_QBaseIsValid(const QAccessibleHyperlinkInterface* self) {
	auto* vqaccessiblehyperlinkinterface = dynamic_cast<const VirtualQAccessibleHyperlinkInterface*>(self);
	if (vqaccessiblehyperlinkinterface && vqaccessiblehyperlinkinterface->isVirtualQAccessibleHyperlinkInterface) {
vqaccessiblehyperlinkinterface->setQAccessibleHyperlinkInterface_IsValid_IsBase(true);
	return vqaccessiblehyperlinkinterface->isValid();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleHyperlinkInterface_OnIsValid(const QAccessibleHyperlinkInterface* self, intptr_t slot) {
	auto* vqaccessiblehyperlinkinterface = dynamic_cast<const VirtualQAccessibleHyperlinkInterface*>(self);
	if (vqaccessiblehyperlinkinterface && vqaccessiblehyperlinkinterface->isVirtualQAccessibleHyperlinkInterface) {
vqaccessiblehyperlinkinterface->setQAccessibleHyperlinkInterface_IsValid_Callback(reinterpret_cast<VirtualQAccessibleHyperlinkInterface::QAccessibleHyperlinkInterface_IsValid_Callback>(slot));
}
}

void QAccessibleHyperlinkInterface_Delete(QAccessibleHyperlinkInterface* self) {
    delete self;
}

QAccessibleSelectionInterface* QAccessibleSelectionInterface_new() {
	 return new VirtualQAccessibleSelectionInterface();
}

QAccessibleSelectionInterface* QAccessibleSelectionInterface_new2(const QAccessibleSelectionInterface* param1) {
	 return new VirtualQAccessibleSelectionInterface(*param1);
}

int QAccessibleSelectionInterface_SelectedItemCount(const QAccessibleSelectionInterface* self) {
	return self->selectedItemCount();
}

libqt_list QAccessibleSelectionInterface_SelectedItems(const QAccessibleSelectionInterface* self) {
	return self->selectedItems();
}

QAccessibleInterface* QAccessibleSelectionInterface_SelectedItem(const QAccessibleSelectionInterface* self, int selectionIndex) {
	return self->selectedItem(selectionIndex);
}

bool QAccessibleSelectionInterface_IsSelected(const QAccessibleSelectionInterface* self, QAccessibleInterface* childItem) {
	return self->isSelected(childItem);
}

bool QAccessibleSelectionInterface_Select(QAccessibleSelectionInterface* self, QAccessibleInterface* childItem) {
	return self->select(childItem);
}

bool QAccessibleSelectionInterface_Unselect(QAccessibleSelectionInterface* self, QAccessibleInterface* childItem) {
	return self->unselect(childItem);
}

bool QAccessibleSelectionInterface_SelectAll(QAccessibleSelectionInterface* self) {
	return self->selectAll();
}

bool QAccessibleSelectionInterface_Clear(QAccessibleSelectionInterface* self) {
	return self->clear();
}

void QAccessibleSelectionInterface_OperatorAssign(QAccessibleSelectionInterface* self, const QAccessibleSelectionInterface* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
int QAccessibleSelectionInterface_QBaseSelectedItemCount(const QAccessibleSelectionInterface* self) {
	auto* vqaccessibleselectioninterface = dynamic_cast<const VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_SelectedItemCount_IsBase(true);
	return vqaccessibleselectioninterface->selectedItemCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleSelectionInterface_OnSelectedItemCount(const QAccessibleSelectionInterface* self, intptr_t slot) {
	auto* vqaccessibleselectioninterface = dynamic_cast<const VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_SelectedItemCount_Callback(reinterpret_cast<VirtualQAccessibleSelectionInterface::QAccessibleSelectionInterface_SelectedItemCount_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAccessibleSelectionInterface_QBaseSelectedItems(const QAccessibleSelectionInterface* self) {
	auto* vqaccessibleselectioninterface = dynamic_cast<const VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_SelectedItems_IsBase(true);
	return vqaccessibleselectioninterface->selectedItems();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleSelectionInterface_OnSelectedItems(const QAccessibleSelectionInterface* self, intptr_t slot) {
	auto* vqaccessibleselectioninterface = dynamic_cast<const VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_SelectedItems_Callback(reinterpret_cast<VirtualQAccessibleSelectionInterface::QAccessibleSelectionInterface_SelectedItems_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QAccessibleSelectionInterface_QBaseSelectedItem(const QAccessibleSelectionInterface* self, int selectionIndex) {
	auto* vqaccessibleselectioninterface = dynamic_cast<const VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_SelectedItem_IsBase(true);
	return vqaccessibleselectioninterface->selectedItem(selectionIndex);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleSelectionInterface_OnSelectedItem(const QAccessibleSelectionInterface* self, intptr_t slot) {
	auto* vqaccessibleselectioninterface = dynamic_cast<const VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_SelectedItem_Callback(reinterpret_cast<VirtualQAccessibleSelectionInterface::QAccessibleSelectionInterface_SelectedItem_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleSelectionInterface_QBaseIsSelected(const QAccessibleSelectionInterface* self, QAccessibleInterface* childItem) {
	auto* vqaccessibleselectioninterface = dynamic_cast<const VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_IsSelected_IsBase(true);
	return vqaccessibleselectioninterface->isSelected(childItem);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleSelectionInterface_OnIsSelected(const QAccessibleSelectionInterface* self, intptr_t slot) {
	auto* vqaccessibleselectioninterface = dynamic_cast<const VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_IsSelected_Callback(reinterpret_cast<VirtualQAccessibleSelectionInterface::QAccessibleSelectionInterface_IsSelected_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleSelectionInterface_QBaseSelect(QAccessibleSelectionInterface* self, QAccessibleInterface* childItem) {
	auto* vqaccessibleselectioninterface = dynamic_cast<VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_Select_IsBase(true);
	return vqaccessibleselectioninterface->select(childItem);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleSelectionInterface_OnSelect(QAccessibleSelectionInterface* self, intptr_t slot) {
	auto* vqaccessibleselectioninterface = dynamic_cast<VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_Select_Callback(reinterpret_cast<VirtualQAccessibleSelectionInterface::QAccessibleSelectionInterface_Select_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleSelectionInterface_QBaseUnselect(QAccessibleSelectionInterface* self, QAccessibleInterface* childItem) {
	auto* vqaccessibleselectioninterface = dynamic_cast<VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_Unselect_IsBase(true);
	return vqaccessibleselectioninterface->unselect(childItem);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleSelectionInterface_OnUnselect(QAccessibleSelectionInterface* self, intptr_t slot) {
	auto* vqaccessibleselectioninterface = dynamic_cast<VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_Unselect_Callback(reinterpret_cast<VirtualQAccessibleSelectionInterface::QAccessibleSelectionInterface_Unselect_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleSelectionInterface_QBaseSelectAll(QAccessibleSelectionInterface* self) {
	auto* vqaccessibleselectioninterface = dynamic_cast<VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_SelectAll_IsBase(true);
	return vqaccessibleselectioninterface->selectAll();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleSelectionInterface_OnSelectAll(QAccessibleSelectionInterface* self, intptr_t slot) {
	auto* vqaccessibleselectioninterface = dynamic_cast<VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_SelectAll_Callback(reinterpret_cast<VirtualQAccessibleSelectionInterface::QAccessibleSelectionInterface_SelectAll_Callback>(slot));
}
}

// Base class handler implementation
bool QAccessibleSelectionInterface_QBaseClear(QAccessibleSelectionInterface* self) {
	auto* vqaccessibleselectioninterface = dynamic_cast<VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_Clear_IsBase(true);
	return vqaccessibleselectioninterface->clear();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleSelectionInterface_OnClear(QAccessibleSelectionInterface* self, intptr_t slot) {
	auto* vqaccessibleselectioninterface = dynamic_cast<VirtualQAccessibleSelectionInterface*>(self);
	if (vqaccessibleselectioninterface && vqaccessibleselectioninterface->isVirtualQAccessibleSelectionInterface) {
vqaccessibleselectioninterface->setQAccessibleSelectionInterface_Clear_Callback(reinterpret_cast<VirtualQAccessibleSelectionInterface::QAccessibleSelectionInterface_Clear_Callback>(slot));
}
}

void QAccessibleSelectionInterface_Delete(QAccessibleSelectionInterface* self) {
    delete self;
}

QAccessibleAttributesInterface* QAccessibleAttributesInterface_new() {
	 return new VirtualQAccessibleAttributesInterface();
}

QAccessibleAttributesInterface* QAccessibleAttributesInterface_new2(const QAccessibleAttributesInterface* param1) {
	 return new VirtualQAccessibleAttributesInterface(*param1);
}

libqt_list QAccessibleAttributesInterface_AttributeKeys(const QAccessibleAttributesInterface* self) {
	return self->attributeKeys();
}

QVariant* QAccessibleAttributesInterface_AttributeValue(const QAccessibleAttributesInterface* self, int key) {
	return new QVariant(self->attributeValue(static_cast<QAccessible::Attribute>(key)));
}

void QAccessibleAttributesInterface_OperatorAssign(QAccessibleAttributesInterface* self, const QAccessibleAttributesInterface* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
libqt_list QAccessibleAttributesInterface_QBaseAttributeKeys(const QAccessibleAttributesInterface* self) {
	auto* vqaccessibleattributesinterface = dynamic_cast<const VirtualQAccessibleAttributesInterface*>(self);
	if (vqaccessibleattributesinterface && vqaccessibleattributesinterface->isVirtualQAccessibleAttributesInterface) {
vqaccessibleattributesinterface->setQAccessibleAttributesInterface_AttributeKeys_IsBase(true);
	return vqaccessibleattributesinterface->attributeKeys();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleAttributesInterface_OnAttributeKeys(const QAccessibleAttributesInterface* self, intptr_t slot) {
	auto* vqaccessibleattributesinterface = dynamic_cast<const VirtualQAccessibleAttributesInterface*>(self);
	if (vqaccessibleattributesinterface && vqaccessibleattributesinterface->isVirtualQAccessibleAttributesInterface) {
vqaccessibleattributesinterface->setQAccessibleAttributesInterface_AttributeKeys_Callback(reinterpret_cast<VirtualQAccessibleAttributesInterface::QAccessibleAttributesInterface_AttributeKeys_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QAccessibleAttributesInterface_QBaseAttributeValue(const QAccessibleAttributesInterface* self, int key) {
	auto* vqaccessibleattributesinterface = dynamic_cast<const VirtualQAccessibleAttributesInterface*>(self);
	if (vqaccessibleattributesinterface && vqaccessibleattributesinterface->isVirtualQAccessibleAttributesInterface) {
vqaccessibleattributesinterface->setQAccessibleAttributesInterface_AttributeValue_IsBase(true);
	return new QVariant(vqaccessibleattributesinterface->attributeValue(static_cast<QAccessible::Attribute>(key)));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleAttributesInterface_OnAttributeValue(const QAccessibleAttributesInterface* self, intptr_t slot) {
	auto* vqaccessibleattributesinterface = dynamic_cast<const VirtualQAccessibleAttributesInterface*>(self);
	if (vqaccessibleattributesinterface && vqaccessibleattributesinterface->isVirtualQAccessibleAttributesInterface) {
vqaccessibleattributesinterface->setQAccessibleAttributesInterface_AttributeValue_Callback(reinterpret_cast<VirtualQAccessibleAttributesInterface::QAccessibleAttributesInterface_AttributeValue_Callback>(slot));
}
}

void QAccessibleAttributesInterface_Delete(QAccessibleAttributesInterface* self) {
    delete self;
}

QAccessibleEvent* QAccessibleEvent_new(QObject* obj, int typ) {
	 return new VirtualQAccessibleEvent(obj, static_cast<QAccessible::Event>(typ));
}

QAccessibleEvent* QAccessibleEvent_new2(QAccessibleInterface* iface, int typ) {
	 return new VirtualQAccessibleEvent(iface, static_cast<QAccessible::Event>(typ));
}

int QAccessibleEvent_Type(const QAccessibleEvent* self) {
	return self->type();
}

QObject* QAccessibleEvent_Object(const QAccessibleEvent* self) {
	return self->object();
}

unsigned int QAccessibleEvent_UniqueId(const QAccessibleEvent* self) {
	return self->uniqueId();
}

void QAccessibleEvent_SetChild(QAccessibleEvent* self, int chld) {
	self->setChild(chld);
}

int QAccessibleEvent_Child(const QAccessibleEvent* self) {
	return self->child();
}

QAccessibleInterface* QAccessibleEvent_AccessibleInterface(const QAccessibleEvent* self) {
	return self->accessibleInterface();
}

// Base class handler implementation
QAccessibleInterface* QAccessibleEvent_QBaseAccessibleInterface(const QAccessibleEvent* self) {
	auto* vqaccessibleevent = dynamic_cast<const VirtualQAccessibleEvent*>(self);
	if (vqaccessibleevent && vqaccessibleevent->isVirtualQAccessibleEvent) {
vqaccessibleevent->setQAccessibleEvent_AccessibleInterface_IsBase(true);
	return vqaccessibleevent->accessibleInterface();
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleEvent_OnAccessibleInterface(const QAccessibleEvent* self, intptr_t slot) {
	auto* vqaccessibleevent = dynamic_cast<const VirtualQAccessibleEvent*>(self);
	if (vqaccessibleevent && vqaccessibleevent->isVirtualQAccessibleEvent) {
vqaccessibleevent->setQAccessibleEvent_AccessibleInterface_Callback(reinterpret_cast<VirtualQAccessibleEvent::QAccessibleEvent_AccessibleInterface_Callback>(slot));
}
}

void QAccessibleEvent_Delete(QAccessibleEvent* self) {
    delete self;
}

QAccessibleStateChangeEvent* QAccessibleStateChangeEvent_new(QObject* obj, QAccessible__State* state) {
	 return new QAccessibleStateChangeEvent(obj, *state);
}

QAccessibleStateChangeEvent* QAccessibleStateChangeEvent_new2(QAccessibleInterface* iface, QAccessible__State* state) {
	 return new QAccessibleStateChangeEvent(iface, *state);
}

QAccessible__State* QAccessibleStateChangeEvent_ChangedStates(const QAccessibleStateChangeEvent* self) {
	return new QAccessible::State(self->changedStates());
}

void QAccessibleStateChangeEvent_Delete(QAccessibleStateChangeEvent* self) {
    delete self;
}

QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new(QObject* obj, int cursorPos) {
	 return new QAccessibleTextCursorEvent(obj, cursorPos);
}

QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new2(QAccessibleInterface* iface, int cursorPos) {
	 return new QAccessibleTextCursorEvent(iface, cursorPos);
}

void QAccessibleTextCursorEvent_SetCursorPosition(QAccessibleTextCursorEvent* self, int position) {
	self->setCursorPosition(position);
}

int QAccessibleTextCursorEvent_CursorPosition(const QAccessibleTextCursorEvent* self) {
	return self->cursorPosition();
}

void QAccessibleTextCursorEvent_Delete(QAccessibleTextCursorEvent* self) {
    delete self;
}

QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new(QObject* obj, int start, int end) {
	 return new QAccessibleTextSelectionEvent(obj, start, end);
}

QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new2(QAccessibleInterface* iface, int start, int end) {
	 return new QAccessibleTextSelectionEvent(iface, start, end);
}

void QAccessibleTextSelectionEvent_SetSelection(QAccessibleTextSelectionEvent* self, int start, int end) {
	self->setSelection(start, end);
}

int QAccessibleTextSelectionEvent_SelectionStart(const QAccessibleTextSelectionEvent* self) {
	return self->selectionStart();
}

int QAccessibleTextSelectionEvent_SelectionEnd(const QAccessibleTextSelectionEvent* self) {
	return self->selectionEnd();
}

void QAccessibleTextSelectionEvent_Delete(QAccessibleTextSelectionEvent* self) {
    delete self;
}

QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new(QObject* obj, int position, const libqt_string text) {
	 return new QAccessibleTextInsertEvent(obj, position, QString::fromUtf8(text.data, text.len));
}

QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new2(QAccessibleInterface* iface, int position, const libqt_string text) {
	 return new QAccessibleTextInsertEvent(iface, position, QString::fromUtf8(text.data, text.len));
}

libqt_string QAccessibleTextInsertEvent_TextInserted(const QAccessibleTextInsertEvent* self) {
	QString _ret = self->textInserted();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAccessibleTextInsertEvent_ChangePosition(const QAccessibleTextInsertEvent* self) {
	return self->changePosition();
}

void QAccessibleTextInsertEvent_Delete(QAccessibleTextInsertEvent* self) {
    delete self;
}

QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new(QObject* obj, int position, const libqt_string text) {
	 return new QAccessibleTextRemoveEvent(obj, position, QString::fromUtf8(text.data, text.len));
}

QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new2(QAccessibleInterface* iface, int position, const libqt_string text) {
	 return new QAccessibleTextRemoveEvent(iface, position, QString::fromUtf8(text.data, text.len));
}

libqt_string QAccessibleTextRemoveEvent_TextRemoved(const QAccessibleTextRemoveEvent* self) {
	QString _ret = self->textRemoved();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAccessibleTextRemoveEvent_ChangePosition(const QAccessibleTextRemoveEvent* self) {
	return self->changePosition();
}

void QAccessibleTextRemoveEvent_Delete(QAccessibleTextRemoveEvent* self) {
    delete self;
}

QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new(QObject* obj, int position, const libqt_string oldText, const libqt_string text) {
	 return new QAccessibleTextUpdateEvent(obj, position, QString::fromUtf8(oldText.data, oldText.len), QString::fromUtf8(text.data, text.len));
}

QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new2(QAccessibleInterface* iface, int position, const libqt_string oldText, const libqt_string text) {
	 return new QAccessibleTextUpdateEvent(iface, position, QString::fromUtf8(oldText.data, oldText.len), QString::fromUtf8(text.data, text.len));
}

libqt_string QAccessibleTextUpdateEvent_TextRemoved(const QAccessibleTextUpdateEvent* self) {
	QString _ret = self->textRemoved();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleTextUpdateEvent_TextInserted(const QAccessibleTextUpdateEvent* self) {
	QString _ret = self->textInserted();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAccessibleTextUpdateEvent_ChangePosition(const QAccessibleTextUpdateEvent* self) {
	return self->changePosition();
}

void QAccessibleTextUpdateEvent_Delete(QAccessibleTextUpdateEvent* self) {
    delete self;
}

QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new(QObject* obj, const QVariant* val) {
	 return new QAccessibleValueChangeEvent(obj, *val);
}

QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new2(QAccessibleInterface* iface, const QVariant* val) {
	 return new QAccessibleValueChangeEvent(iface, *val);
}

void QAccessibleValueChangeEvent_SetValue(QAccessibleValueChangeEvent* self, const QVariant* val) {
	self->setValue(*val);
}

QVariant* QAccessibleValueChangeEvent_Value(const QAccessibleValueChangeEvent* self) {
	return new QVariant(self->value());
}

void QAccessibleValueChangeEvent_Delete(QAccessibleValueChangeEvent* self) {
    delete self;
}

QAccessibleTableModelChangeEvent* QAccessibleTableModelChangeEvent_new(QObject* obj, int changeType) {
	 return new QAccessibleTableModelChangeEvent(obj, static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

QAccessibleTableModelChangeEvent* QAccessibleTableModelChangeEvent_new2(QAccessibleInterface* iface, int changeType) {
	 return new QAccessibleTableModelChangeEvent(iface, static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

void QAccessibleTableModelChangeEvent_SetModelChangeType(QAccessibleTableModelChangeEvent* self, int changeType) {
	self->setModelChangeType(static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

int QAccessibleTableModelChangeEvent_ModelChangeType(const QAccessibleTableModelChangeEvent* self) {
	return self->modelChangeType();
}

void QAccessibleTableModelChangeEvent_SetFirstRow(QAccessibleTableModelChangeEvent* self, int row) {
	self->setFirstRow(row);
}

void QAccessibleTableModelChangeEvent_SetFirstColumn(QAccessibleTableModelChangeEvent* self, int col) {
	self->setFirstColumn(col);
}

void QAccessibleTableModelChangeEvent_SetLastRow(QAccessibleTableModelChangeEvent* self, int row) {
	self->setLastRow(row);
}

void QAccessibleTableModelChangeEvent_SetLastColumn(QAccessibleTableModelChangeEvent* self, int col) {
	self->setLastColumn(col);
}

int QAccessibleTableModelChangeEvent_FirstRow(const QAccessibleTableModelChangeEvent* self) {
	return self->firstRow();
}

int QAccessibleTableModelChangeEvent_FirstColumn(const QAccessibleTableModelChangeEvent* self) {
	return self->firstColumn();
}

int QAccessibleTableModelChangeEvent_LastRow(const QAccessibleTableModelChangeEvent* self) {
	return self->lastRow();
}

int QAccessibleTableModelChangeEvent_LastColumn(const QAccessibleTableModelChangeEvent* self) {
	return self->lastColumn();
}

void QAccessibleTableModelChangeEvent_Delete(QAccessibleTableModelChangeEvent* self) {
    delete self;
}

QAccessibleAnnouncementEvent* QAccessibleAnnouncementEvent_new(QObject* object, const libqt_string message) {
	 return new QAccessibleAnnouncementEvent(object, QString::fromUtf8(message.data, message.len));
}

QAccessibleAnnouncementEvent* QAccessibleAnnouncementEvent_new2(QAccessibleInterface* iface, const libqt_string message) {
	 return new QAccessibleAnnouncementEvent(iface, QString::fromUtf8(message.data, message.len));
}

libqt_string QAccessibleAnnouncementEvent_Message(const QAccessibleAnnouncementEvent* self) {
	QString _ret = self->message();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAccessibleAnnouncementEvent_Politeness(const QAccessibleAnnouncementEvent* self) {
	return self->politeness();
}

void QAccessibleAnnouncementEvent_SetPoliteness(QAccessibleAnnouncementEvent* self, int politeness) {
	self->setPoliteness(static_cast<QAccessible::AnnouncementPoliteness>(politeness));
}

void QAccessibleAnnouncementEvent_Delete(QAccessibleAnnouncementEvent* self) {
    delete self;
}

