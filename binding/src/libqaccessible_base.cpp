#include <QAccessible>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__ActivationObserver
#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleEvent>
#include <QAccessibleInterface>
#include <QObject>
#include <QTextCursor>
#include <qaccessible_base.h>
#include "libqaccessible_base.h"
#include "libqaccessible_base.hxx"

QAccessible* QAccessible_new(const QAccessible* other) {
	 return new QAccessible(*other);
}

QAccessible* QAccessible_new2(QAccessible* other) {
	 return new QAccessible(*other);
}

QAccessible* QAccessible_new3(const QAccessible* param1) {
	 return new QAccessible(*param1);
}

void QAccessible_CopyAssign(QAccessible* self, QAccessible* other) {
    *self = *other;
}

void QAccessible_MoveAssign(QAccessible* self, QAccessible* other) {
    *self = std::move(*other);
}

void QAccessible_InstallActivationObserver(QAccessible__ActivationObserver* param1) {
	QAccessible::installActivationObserver(param1);
}

void QAccessible_RemoveActivationObserver(QAccessible__ActivationObserver* param1) {
	QAccessible::removeActivationObserver(param1);
}

QAccessibleInterface* QAccessible_QueryAccessibleInterface(QObject* param1) {
	return QAccessible::queryAccessibleInterface(param1);
}

unsigned int QAccessible_UniqueId(QAccessibleInterface* iface) {
	return QAccessible::uniqueId(iface);
}

QAccessibleInterface* QAccessible_AccessibleInterface(unsigned int uniqueId) {
	return QAccessible::accessibleInterface(uniqueId);
}

unsigned int QAccessible_RegisterAccessibleInterface(QAccessibleInterface* iface) {
	return QAccessible::registerAccessibleInterface(iface);
}

void QAccessible_DeleteAccessibleInterface(unsigned int uniqueId) {
	QAccessible::deleteAccessibleInterface(uniqueId);
}

void QAccessible_UpdateAccessibility(QAccessibleEvent* event) {
	QAccessible::updateAccessibility(event);
}

bool QAccessible_IsActive() {
	return QAccessible::isActive();
}

void QAccessible_SetActive(bool active) {
	QAccessible::setActive(active);
}

void QAccessible_SetRootObject(QObject* object) {
	QAccessible::setRootObject(object);
}

void QAccessible_Cleanup() {
	QAccessible::cleanup();
}

libqt_pair QAccessible_QAccessibleTextBoundaryHelper(const QTextCursor* cursor, int boundaryType) {
	return QAccessible::qAccessibleTextBoundaryHelper(*cursor, static_cast<QAccessible::TextBoundaryType>(boundaryType));
}

void QAccessible_Delete(QAccessible* self) {
    delete self;
}

QAccessible__State* QAccessible__State_new(const QAccessible__State* other) {
	 return new QAccessible::State(*other);
}

QAccessible__State* QAccessible__State_new2(QAccessible__State* other) {
	 return new QAccessible::State(*other);
}

QAccessible__State* QAccessible__State_new3() {
	 return new QAccessible::State();
}

void QAccessible__State_CopyAssign(QAccessible__State* self, QAccessible__State* other) {
    *self = *other;
}

void QAccessible__State_MoveAssign(QAccessible__State* self, QAccessible__State* other) {
    *self = std::move(*other);
}

unsigned long long QAccessible__State_Disabled(const QAccessible__State* self) {
	return self->disabled;
}

void QAccessible__State_SetDisabled(QAccessible__State* self, unsigned long long disabled) {
	self->disabled;
}

unsigned long long QAccessible__State_Selected(const QAccessible__State* self) {
	return self->selected;
}

void QAccessible__State_SetSelected(QAccessible__State* self, unsigned long long selected) {
	self->selected;
}

unsigned long long QAccessible__State_Focusable(const QAccessible__State* self) {
	return self->focusable;
}

void QAccessible__State_SetFocusable(QAccessible__State* self, unsigned long long focusable) {
	self->focusable;
}

unsigned long long QAccessible__State_Focused(const QAccessible__State* self) {
	return self->focused;
}

void QAccessible__State_SetFocused(QAccessible__State* self, unsigned long long focused) {
	self->focused;
}

unsigned long long QAccessible__State_Pressed(const QAccessible__State* self) {
	return self->pressed;
}

void QAccessible__State_SetPressed(QAccessible__State* self, unsigned long long pressed) {
	self->pressed;
}

unsigned long long QAccessible__State_Checkable(const QAccessible__State* self) {
	return self->checkable;
}

void QAccessible__State_SetCheckable(QAccessible__State* self, unsigned long long checkable) {
	self->checkable;
}

unsigned long long QAccessible__State_Checked(const QAccessible__State* self) {
	return self->checked;
}

void QAccessible__State_SetChecked(QAccessible__State* self, unsigned long long checked) {
	self->checked;
}

unsigned long long QAccessible__State_CheckStateMixed(const QAccessible__State* self) {
	return self->checkStateMixed;
}

void QAccessible__State_SetCheckStateMixed(QAccessible__State* self, unsigned long long checkStateMixed) {
	self->checkStateMixed;
}

unsigned long long QAccessible__State_ReadOnly(const QAccessible__State* self) {
	return self->readOnly;
}

void QAccessible__State_SetReadOnly(QAccessible__State* self, unsigned long long readOnly) {
	self->readOnly;
}

unsigned long long QAccessible__State_HotTracked(const QAccessible__State* self) {
	return self->hotTracked;
}

void QAccessible__State_SetHotTracked(QAccessible__State* self, unsigned long long hotTracked) {
	self->hotTracked;
}

unsigned long long QAccessible__State_DefaultButton(const QAccessible__State* self) {
	return self->defaultButton;
}

void QAccessible__State_SetDefaultButton(QAccessible__State* self, unsigned long long defaultButton) {
	self->defaultButton;
}

unsigned long long QAccessible__State_Expanded(const QAccessible__State* self) {
	return self->expanded;
}

void QAccessible__State_SetExpanded(QAccessible__State* self, unsigned long long expanded) {
	self->expanded;
}

unsigned long long QAccessible__State_Collapsed(const QAccessible__State* self) {
	return self->collapsed;
}

void QAccessible__State_SetCollapsed(QAccessible__State* self, unsigned long long collapsed) {
	self->collapsed;
}

unsigned long long QAccessible__State_Busy(const QAccessible__State* self) {
	return self->busy;
}

void QAccessible__State_SetBusy(QAccessible__State* self, unsigned long long busy) {
	self->busy;
}

unsigned long long QAccessible__State_Expandable(const QAccessible__State* self) {
	return self->expandable;
}

void QAccessible__State_SetExpandable(QAccessible__State* self, unsigned long long expandable) {
	self->expandable;
}

unsigned long long QAccessible__State_Marqueed(const QAccessible__State* self) {
	return self->marqueed;
}

void QAccessible__State_SetMarqueed(QAccessible__State* self, unsigned long long marqueed) {
	self->marqueed;
}

unsigned long long QAccessible__State_Animated(const QAccessible__State* self) {
	return self->animated;
}

void QAccessible__State_SetAnimated(QAccessible__State* self, unsigned long long animated) {
	self->animated;
}

unsigned long long QAccessible__State_Invisible(const QAccessible__State* self) {
	return self->invisible;
}

void QAccessible__State_SetInvisible(QAccessible__State* self, unsigned long long invisible) {
	self->invisible;
}

unsigned long long QAccessible__State_Offscreen(const QAccessible__State* self) {
	return self->offscreen;
}

void QAccessible__State_SetOffscreen(QAccessible__State* self, unsigned long long offscreen) {
	self->offscreen;
}

unsigned long long QAccessible__State_Sizeable(const QAccessible__State* self) {
	return self->sizeable;
}

void QAccessible__State_SetSizeable(QAccessible__State* self, unsigned long long sizeable) {
	self->sizeable;
}

unsigned long long QAccessible__State_Movable(const QAccessible__State* self) {
	return self->movable;
}

void QAccessible__State_SetMovable(QAccessible__State* self, unsigned long long movable) {
	self->movable;
}

unsigned long long QAccessible__State_SelfVoicing(const QAccessible__State* self) {
	return self->selfVoicing;
}

void QAccessible__State_SetSelfVoicing(QAccessible__State* self, unsigned long long selfVoicing) {
	self->selfVoicing;
}

unsigned long long QAccessible__State_Selectable(const QAccessible__State* self) {
	return self->selectable;
}

void QAccessible__State_SetSelectable(QAccessible__State* self, unsigned long long selectable) {
	self->selectable;
}

unsigned long long QAccessible__State_Linked(const QAccessible__State* self) {
	return self->linked;
}

void QAccessible__State_SetLinked(QAccessible__State* self, unsigned long long linked) {
	self->linked;
}

unsigned long long QAccessible__State_Traversed(const QAccessible__State* self) {
	return self->traversed;
}

void QAccessible__State_SetTraversed(QAccessible__State* self, unsigned long long traversed) {
	self->traversed;
}

unsigned long long QAccessible__State_MultiSelectable(const QAccessible__State* self) {
	return self->multiSelectable;
}

void QAccessible__State_SetMultiSelectable(QAccessible__State* self, unsigned long long multiSelectable) {
	self->multiSelectable;
}

unsigned long long QAccessible__State_ExtSelectable(const QAccessible__State* self) {
	return self->extSelectable;
}

void QAccessible__State_SetExtSelectable(QAccessible__State* self, unsigned long long extSelectable) {
	self->extSelectable;
}

unsigned long long QAccessible__State_PasswordEdit(const QAccessible__State* self) {
	return self->passwordEdit;
}

void QAccessible__State_SetPasswordEdit(QAccessible__State* self, unsigned long long passwordEdit) {
	self->passwordEdit;
}

unsigned long long QAccessible__State_HasPopup(const QAccessible__State* self) {
	return self->hasPopup;
}

void QAccessible__State_SetHasPopup(QAccessible__State* self, unsigned long long hasPopup) {
	self->hasPopup;
}

unsigned long long QAccessible__State_Modal(const QAccessible__State* self) {
	return self->modal;
}

void QAccessible__State_SetModal(QAccessible__State* self, unsigned long long modal) {
	self->modal;
}

unsigned long long QAccessible__State_Active(const QAccessible__State* self) {
	return self->active;
}

void QAccessible__State_SetActive(QAccessible__State* self, unsigned long long active) {
	self->active;
}

unsigned long long QAccessible__State_Invalid(const QAccessible__State* self) {
	return self->invalid;
}

void QAccessible__State_SetInvalid(QAccessible__State* self, unsigned long long invalid) {
	self->invalid;
}

unsigned long long QAccessible__State_Editable(const QAccessible__State* self) {
	return self->editable;
}

void QAccessible__State_SetEditable(QAccessible__State* self, unsigned long long editable) {
	self->editable;
}

unsigned long long QAccessible__State_MultiLine(const QAccessible__State* self) {
	return self->multiLine;
}

void QAccessible__State_SetMultiLine(QAccessible__State* self, unsigned long long multiLine) {
	self->multiLine;
}

unsigned long long QAccessible__State_SelectableText(const QAccessible__State* self) {
	return self->selectableText;
}

void QAccessible__State_SetSelectableText(QAccessible__State* self, unsigned long long selectableText) {
	self->selectableText;
}

unsigned long long QAccessible__State_SupportsAutoCompletion(const QAccessible__State* self) {
	return self->supportsAutoCompletion;
}

void QAccessible__State_SetSupportsAutoCompletion(QAccessible__State* self, unsigned long long supportsAutoCompletion) {
	self->supportsAutoCompletion;
}

unsigned long long QAccessible__State_SearchEdit(const QAccessible__State* self) {
	return self->searchEdit;
}

void QAccessible__State_SetSearchEdit(QAccessible__State* self, unsigned long long searchEdit) {
	self->searchEdit;
}

void QAccessible__State_Delete(QAccessible__State* self) {
    delete self;
}

QAccessible__ActivationObserver* QAccessible__ActivationObserver_new() {
	 return new VirtualQAccessibleActivationObserver();
}

QAccessible__ActivationObserver* QAccessible__ActivationObserver_new2(const QAccessible__ActivationObserver* param1) {
	 return new VirtualQAccessibleActivationObserver(*param1);
}

void QAccessible__ActivationObserver_AccessibilityActiveChanged(QAccessible__ActivationObserver* self, bool active) {
	self->accessibilityActiveChanged(active);
}

void QAccessible__ActivationObserver_OperatorAssign(QAccessible__ActivationObserver* self, const QAccessible__ActivationObserver* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
void QAccessible__ActivationObserver_QBaseAccessibilityActiveChanged(QAccessible__ActivationObserver* self, bool active) {
	auto* vqaccessible__activationobserver = dynamic_cast<VirtualQAccessibleActivationObserver*>(self);
	if (vqaccessible__activationobserver && vqaccessible__activationobserver->isVirtualQAccessibleActivationObserver) {
vqaccessible__activationobserver->setQAccessible__ActivationObserver_AccessibilityActiveChanged_IsBase(true);
	vqaccessible__activationobserver->accessibilityActiveChanged(active);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessible__ActivationObserver_OnAccessibilityActiveChanged(QAccessible__ActivationObserver* self, intptr_t slot) {
	auto* vqaccessible__activationobserver = dynamic_cast<VirtualQAccessibleActivationObserver*>(self);
	if (vqaccessible__activationobserver && vqaccessible__activationobserver->isVirtualQAccessibleActivationObserver) {
vqaccessible__activationobserver->setQAccessible__ActivationObserver_AccessibilityActiveChanged_Callback(reinterpret_cast<VirtualQAccessibleActivationObserver::QAccessible__ActivationObserver_AccessibilityActiveChanged_Callback>(slot));
}
}

void QAccessible__ActivationObserver_Delete(QAccessible__ActivationObserver* self) {
    delete self;
}

