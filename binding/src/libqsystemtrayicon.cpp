#include <QEvent>
#include <QIcon>
#include <QMenu>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSystemTrayIcon>
#include <qsystemtrayicon.h>
#include "libqsystemtrayicon.h"
#include "libqsystemtrayicon.hxx"

QSystemTrayIcon* QSystemTrayIcon_new() {
	 return new VirtualQSystemTrayIcon();
}

QSystemTrayIcon* QSystemTrayIcon_new2(const QIcon* icon) {
	 return new VirtualQSystemTrayIcon(*icon);
}

QSystemTrayIcon* QSystemTrayIcon_new3(QObject* parent) {
	 return new VirtualQSystemTrayIcon(parent);
}

QSystemTrayIcon* QSystemTrayIcon_new4(const QIcon* icon, QObject* parent) {
	 return new VirtualQSystemTrayIcon(*icon, parent);
}

libqt_string QSystemTrayIcon_Tr(const char* s) {
	QString _ret = QSystemTrayIcon::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSystemTrayIcon_SetContextMenu(QSystemTrayIcon* self, QMenu* menu) {
	self->setContextMenu(menu);
}

QMenu* QSystemTrayIcon_ContextMenu(const QSystemTrayIcon* self) {
	return self->contextMenu();
}

QIcon* QSystemTrayIcon_Icon(const QSystemTrayIcon* self) {
	return new QIcon(self->icon());
}

void QSystemTrayIcon_SetIcon(QSystemTrayIcon* self, const QIcon* icon) {
	self->setIcon(*icon);
}

libqt_string QSystemTrayIcon_ToolTip(const QSystemTrayIcon* self) {
	QString _ret = self->toolTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSystemTrayIcon_SetToolTip(QSystemTrayIcon* self, const libqt_string tip) {
	self->setToolTip(QString::fromUtf8(tip.data, tip.len));
}

bool QSystemTrayIcon_IsSystemTrayAvailable() {
	return QSystemTrayIcon::isSystemTrayAvailable();
}

bool QSystemTrayIcon_SupportsMessages() {
	return QSystemTrayIcon::supportsMessages();
}

QRect* QSystemTrayIcon_Geometry(const QSystemTrayIcon* self) {
	return new QRect(self->geometry());
}

bool QSystemTrayIcon_IsVisible(const QSystemTrayIcon* self) {
	return self->isVisible();
}

void QSystemTrayIcon_SetVisible(QSystemTrayIcon* self, bool visible) {
	self->setVisible(visible);
}

void QSystemTrayIcon_Show(QSystemTrayIcon* self) {
	self->show();
}

void QSystemTrayIcon_Hide(QSystemTrayIcon* self) {
	self->hide();
}

void QSystemTrayIcon_ShowMessage(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, const QIcon* icon) {
	self->showMessage(QString::fromUtf8(title.data, title.len), QString::fromUtf8(msg.data, msg.len), *icon);
}

void QSystemTrayIcon_ShowMessage2(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg) {
	self->showMessage(QString::fromUtf8(title.data, title.len), QString::fromUtf8(msg.data, msg.len));
}

void QSystemTrayIcon_Activated(QSystemTrayIcon* self, int reason) {
	self->activated(static_cast<QSystemTrayIcon::ActivationReason>(reason));
}

void QSystemTrayIcon_Connect_Activated(QSystemTrayIcon* self, intptr_t slot) {
    void (*slotFunc)(QSystemTrayIcon*, int) = reinterpret_cast<void (*)(QSystemTrayIcon*, int)>(slot);
    QSystemTrayIcon::connect(self, &QSystemTrayIcon::activated, [self, slotFunc](QSystemTrayIcon::ActivationReason reason) {
	slotFunc(self, reason);
    });
}

void QSystemTrayIcon_MessageClicked(QSystemTrayIcon* self) {
	self->messageClicked();
}

void QSystemTrayIcon_Connect_MessageClicked(QSystemTrayIcon* self, intptr_t slot) {
    void (*slotFunc)(QSystemTrayIcon*) = reinterpret_cast<void (*)(QSystemTrayIcon*)>(slot);
    QSystemTrayIcon::connect(self, &QSystemTrayIcon::messageClicked, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QSystemTrayIcon_Tr2(const char* s, const char* c) {
	QString _ret = QSystemTrayIcon::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSystemTrayIcon_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSystemTrayIcon::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSystemTrayIcon_ShowMessage4(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, const QIcon* icon, int msecs) {
	self->showMessage(QString::fromUtf8(title.data, title.len), QString::fromUtf8(msg.data, msg.len), *icon, msecs);
}

void QSystemTrayIcon_ShowMessage3(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, int icon) {
	self->showMessage(QString::fromUtf8(title.data, title.len), QString::fromUtf8(msg.data, msg.len), static_cast<QSystemTrayIcon::MessageIcon>(icon));
}

void QSystemTrayIcon_ShowMessage42(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, int icon, int msecs) {
	self->showMessage(QString::fromUtf8(title.data, title.len), QString::fromUtf8(msg.data, msg.len), static_cast<QSystemTrayIcon::MessageIcon>(icon), msecs);
}

// Derived class handler implementation
bool QSystemTrayIcon_Event(QSystemTrayIcon* self, QEvent* event) {
	auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
	if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
	return vqsystemtrayicon->event(event);
	} else {
	return self->QSystemTrayIcon::event(event);
}
}

// Base class handler implementation
bool QSystemTrayIcon_QBaseEvent(QSystemTrayIcon* self, QEvent* event) {
	auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
	if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
vqsystemtrayicon->setQSystemTrayIcon_Event_IsBase(true);
	return vqsystemtrayicon->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QSystemTrayIcon_OnEvent(QSystemTrayIcon* self, intptr_t slot) {
	auto* vqsystemtrayicon = dynamic_cast<VirtualQSystemTrayIcon*>(self);
	if (vqsystemtrayicon && vqsystemtrayicon->isVirtualQSystemTrayIcon) {
vqsystemtrayicon->setQSystemTrayIcon_Event_Callback(reinterpret_cast<VirtualQSystemTrayIcon::QSystemTrayIcon_Event_Callback>(slot));
}
}

void QSystemTrayIcon_Delete(QSystemTrayIcon* self) {
    delete self;
}

