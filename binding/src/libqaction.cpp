#include <QAction>
#include <QActionGroup>
#include <QEvent>
#include <QFont>
#include <QIcon>
#include <QKeySequence>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qaction.h>
#include "libqaction.h"
#include "libqaction.hxx"

QAction* QAction_new() {
	 return new VirtualQAction();
}

QAction* QAction_new2(const libqt_string text) {
	 return new VirtualQAction(QString::fromUtf8(text.data, text.len));
}

QAction* QAction_new3(const QIcon* icon, const libqt_string text) {
	 return new VirtualQAction(*icon, QString::fromUtf8(text.data, text.len));
}

QAction* QAction_new4(QObject* parent) {
	 return new VirtualQAction(parent);
}

QAction* QAction_new5(const libqt_string text, QObject* parent) {
	 return new VirtualQAction(QString::fromUtf8(text.data, text.len), parent);
}

QAction* QAction_new6(const QIcon* icon, const libqt_string text, QObject* parent) {
	 return new VirtualQAction(*icon, QString::fromUtf8(text.data, text.len), parent);
}

libqt_string QAction_Tr(const char* s) {
	QString _ret = QAction::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QAction_AssociatedObjects(const QAction* self) {
	return self->associatedObjects();
}

void QAction_SetActionGroup(QAction* self, QActionGroup* group) {
	self->setActionGroup(group);
}

QActionGroup* QAction_ActionGroup(const QAction* self) {
	return self->actionGroup();
}

void QAction_SetIcon(QAction* self, const QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QAction_Icon(const QAction* self) {
	return new QIcon(self->icon());
}

void QAction_SetText(QAction* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

libqt_string QAction_Text(const QAction* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAction_SetIconText(QAction* self, const libqt_string text) {
	self->setIconText(QString::fromUtf8(text.data, text.len));
}

libqt_string QAction_IconText(const QAction* self) {
	QString _ret = self->iconText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAction_SetToolTip(QAction* self, const libqt_string tip) {
	self->setToolTip(QString::fromUtf8(tip.data, tip.len));
}

libqt_string QAction_ToolTip(const QAction* self) {
	QString _ret = self->toolTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAction_SetStatusTip(QAction* self, const libqt_string statusTip) {
	self->setStatusTip(QString::fromUtf8(statusTip.data, statusTip.len));
}

libqt_string QAction_StatusTip(const QAction* self) {
	QString _ret = self->statusTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAction_SetWhatsThis(QAction* self, const libqt_string what) {
	self->setWhatsThis(QString::fromUtf8(what.data, what.len));
}

libqt_string QAction_WhatsThis(const QAction* self) {
	QString _ret = self->whatsThis();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAction_SetPriority(QAction* self, int priority) {
	self->setPriority(static_cast<QAction::Priority>(priority));
}

int QAction_Priority(const QAction* self) {
	return self->priority();
}

void QAction_SetSeparator(QAction* self, bool b) {
	self->setSeparator(b);
}

bool QAction_IsSeparator(const QAction* self) {
	return self->isSeparator();
}

void QAction_SetShortcut(QAction* self, const QKeySequence* shortcut) {
	self->setShortcut(*shortcut);
}

QKeySequence* QAction_Shortcut(const QAction* self) {
	return new QKeySequence(self->shortcut());
}

void QAction_SetShortcuts(QAction* self, const libqt_list shortcuts) {
	self->setShortcuts(*shortcuts);
}

void QAction_SetShortcuts2(QAction* self, int shortcuts) {
	self->setShortcuts(static_cast<QKeySequence::StandardKey>(shortcuts));
}

libqt_list QAction_Shortcuts(const QAction* self) {
	return self->shortcuts();
}

void QAction_SetShortcutContext(QAction* self, int context) {
	self->setShortcutContext(static_cast<Qt::ShortcutContext>(context));
}

int QAction_ShortcutContext(const QAction* self) {
	return self->shortcutContext();
}

void QAction_SetAutoRepeat(QAction* self, bool autoRepeat) {
	self->setAutoRepeat(autoRepeat);
}

bool QAction_AutoRepeat(const QAction* self) {
	return self->autoRepeat();
}

void QAction_SetFont(QAction* self, const QFont* font) {
	self->setFont(*font);
}

QFont* QAction_Font(const QAction* self) {
	return new QFont(self->font());
}

void QAction_SetCheckable(QAction* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QAction_IsCheckable(const QAction* self) {
	return self->isCheckable();
}

QVariant* QAction_Data(const QAction* self) {
	return new QVariant(self->data());
}

void QAction_SetData(QAction* self, const QVariant* varVal) {
	self->setData(*varVal);
}

bool QAction_IsChecked(const QAction* self) {
	return self->isChecked();
}

bool QAction_IsEnabled(const QAction* self) {
	return self->isEnabled();
}

bool QAction_IsVisible(const QAction* self) {
	return self->isVisible();
}

void QAction_Activate(QAction* self, int event) {
	self->activate(static_cast<QAction::ActionEvent>(event));
}

void QAction_SetMenuRole(QAction* self, int menuRole) {
	self->setMenuRole(static_cast<QAction::MenuRole>(menuRole));
}

int QAction_MenuRole(const QAction* self) {
	return self->menuRole();
}

void QAction_SetIconVisibleInMenu(QAction* self, bool visible) {
	self->setIconVisibleInMenu(visible);
}

bool QAction_IsIconVisibleInMenu(const QAction* self) {
	return self->isIconVisibleInMenu();
}

void QAction_SetShortcutVisibleInContextMenu(QAction* self, bool show) {
	self->setShortcutVisibleInContextMenu(show);
}

bool QAction_IsShortcutVisibleInContextMenu(const QAction* self) {
	return self->isShortcutVisibleInContextMenu();
}

bool QAction_ShowStatusText(QAction* self) {
	return self->showStatusText();
}

void QAction_Trigger(QAction* self) {
	self->trigger();
}

void QAction_Hover(QAction* self) {
	self->hover();
}

void QAction_SetChecked(QAction* self, bool checked) {
	self->setChecked(checked);
}

void QAction_Toggle(QAction* self) {
	self->toggle();
}

void QAction_SetEnabled(QAction* self, bool enabled) {
	self->setEnabled(enabled);
}

void QAction_ResetEnabled(QAction* self) {
	self->resetEnabled();
}

void QAction_SetDisabled(QAction* self, bool b) {
	self->setDisabled(b);
}

void QAction_SetVisible(QAction* self, bool visible) {
	self->setVisible(visible);
}

void QAction_Changed(QAction* self) {
	self->changed();
}

void QAction_Connect_Changed(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*) = reinterpret_cast<void (*)(QAction*)>(slot);
    QAction::connect(self, &QAction::changed, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAction_EnabledChanged(QAction* self, bool enabled) {
	self->enabledChanged(enabled);
}

void QAction_Connect_EnabledChanged(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*, bool) = reinterpret_cast<void (*)(QAction*, bool)>(slot);
    QAction::connect(self, &QAction::enabledChanged, [self, slotFunc](bool enabled) {
	slotFunc(self, enabled);
    });
}

void QAction_CheckableChanged(QAction* self, bool checkable) {
	self->checkableChanged(checkable);
}

void QAction_Connect_CheckableChanged(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*, bool) = reinterpret_cast<void (*)(QAction*, bool)>(slot);
    QAction::connect(self, &QAction::checkableChanged, [self, slotFunc](bool checkable) {
	slotFunc(self, checkable);
    });
}

void QAction_VisibleChanged(QAction* self) {
	self->visibleChanged();
}

void QAction_Connect_VisibleChanged(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*) = reinterpret_cast<void (*)(QAction*)>(slot);
    QAction::connect(self, &QAction::visibleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAction_Triggered(QAction* self) {
	self->triggered();
}

void QAction_Connect_Triggered(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*) = reinterpret_cast<void (*)(QAction*)>(slot);
    QAction::connect(self, &QAction::triggered, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAction_Hovered(QAction* self) {
	self->hovered();
}

void QAction_Connect_Hovered(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*) = reinterpret_cast<void (*)(QAction*)>(slot);
    QAction::connect(self, &QAction::hovered, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAction_Toggled(QAction* self, bool param1) {
	self->toggled(param1);
}

void QAction_Connect_Toggled(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*, bool) = reinterpret_cast<void (*)(QAction*, bool)>(slot);
    QAction::connect(self, &QAction::toggled, [self, slotFunc](bool param1) {
	slotFunc(self, param1);
    });
}

libqt_string QAction_Tr2(const char* s, const char* c) {
	QString _ret = QAction::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAction_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAction::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QAction_ShowStatusText1(QAction* self, QObject* object) {
	return self->showStatusText(object);
}

void QAction_Triggered1(QAction* self, bool checked) {
	self->triggered(checked);
}

void QAction_Connect_Triggered1(QAction* self, intptr_t slot) {
    void (*slotFunc)(QAction*, bool) = reinterpret_cast<void (*)(QAction*, bool)>(slot);
    QAction::connect(self, &QAction::triggered, [self, slotFunc](bool checked) {
	slotFunc(self, checked);
    });
}

// Derived class handler implementation
bool QAction_Event(QAction* self, QEvent* param1) {
	auto* vqaction = dynamic_cast<VirtualQAction*>(self);
	if (vqaction && vqaction->isVirtualQAction) {
	return vqaction->event(param1);
	} else {
	return self->QAction::event(param1);
}
}

// Base class handler implementation
bool QAction_QBaseEvent(QAction* self, QEvent* param1) {
	auto* vqaction = dynamic_cast<VirtualQAction*>(self);
	if (vqaction && vqaction->isVirtualQAction) {
vqaction->setQAction_Event_IsBase(true);
	return vqaction->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAction_OnEvent(QAction* self, intptr_t slot) {
	auto* vqaction = dynamic_cast<VirtualQAction*>(self);
	if (vqaction && vqaction->isVirtualQAction) {
vqaction->setQAction_Event_Callback(reinterpret_cast<VirtualQAction::QAction_Event_Callback>(slot));
}
}

void QAction_Delete(QAction* self) {
    delete self;
}

