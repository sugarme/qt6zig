#include <QAccessibleBridge>
#include <QAccessibleBridgePlugin>
#include <QAccessibleEvent>
#include <QAccessibleInterface>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaccessiblebridge.h>
#include "libqaccessiblebridge.h"
#include "libqaccessiblebridge.hxx"

QAccessibleBridge* QAccessibleBridge_new() {
	 return new VirtualQAccessibleBridge();
}

QAccessibleBridge* QAccessibleBridge_new2(const QAccessibleBridge* param1) {
	 return new VirtualQAccessibleBridge(*param1);
}

void QAccessibleBridge_SetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject) {
	self->setRootObject(rootObject);
}

void QAccessibleBridge_NotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event) {
	self->notifyAccessibilityUpdate(event);
}

void QAccessibleBridge_OperatorAssign(QAccessibleBridge* self, const QAccessibleBridge* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
void QAccessibleBridge_QBaseSetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject) {
	auto* vqaccessiblebridge = dynamic_cast<VirtualQAccessibleBridge*>(self);
	if (vqaccessiblebridge && vqaccessiblebridge->isVirtualQAccessibleBridge) {
vqaccessiblebridge->setQAccessibleBridge_SetRootObject_IsBase(true);
	vqaccessiblebridge->setRootObject(rootObject);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridge_OnSetRootObject(QAccessibleBridge* self, intptr_t slot) {
	auto* vqaccessiblebridge = dynamic_cast<VirtualQAccessibleBridge*>(self);
	if (vqaccessiblebridge && vqaccessiblebridge->isVirtualQAccessibleBridge) {
vqaccessiblebridge->setQAccessibleBridge_SetRootObject_Callback(reinterpret_cast<VirtualQAccessibleBridge::QAccessibleBridge_SetRootObject_Callback>(slot));
}
}

// Base class handler implementation
void QAccessibleBridge_QBaseNotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event) {
	auto* vqaccessiblebridge = dynamic_cast<VirtualQAccessibleBridge*>(self);
	if (vqaccessiblebridge && vqaccessiblebridge->isVirtualQAccessibleBridge) {
vqaccessiblebridge->setQAccessibleBridge_NotifyAccessibilityUpdate_IsBase(true);
	vqaccessiblebridge->notifyAccessibilityUpdate(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridge_OnNotifyAccessibilityUpdate(QAccessibleBridge* self, intptr_t slot) {
	auto* vqaccessiblebridge = dynamic_cast<VirtualQAccessibleBridge*>(self);
	if (vqaccessiblebridge && vqaccessiblebridge->isVirtualQAccessibleBridge) {
vqaccessiblebridge->setQAccessibleBridge_NotifyAccessibilityUpdate_Callback(reinterpret_cast<VirtualQAccessibleBridge::QAccessibleBridge_NotifyAccessibilityUpdate_Callback>(slot));
}
}

void QAccessibleBridge_Delete(QAccessibleBridge* self) {
    delete self;
}

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new() {
	 return new VirtualQAccessibleBridgePlugin();
}

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new2(QObject* parent) {
	 return new VirtualQAccessibleBridgePlugin(parent);
}

libqt_string QAccessibleBridgePlugin_Tr(const char* s) {
	QString _ret = QAccessibleBridgePlugin::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, const libqt_string key) {
	return self->create(QString::fromUtf8(key.data, key.len));
}

libqt_string QAccessibleBridgePlugin_Tr2(const char* s, const char* c) {
	QString _ret = QAccessibleBridgePlugin::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAccessibleBridgePlugin::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QAccessibleBridge* QAccessibleBridgePlugin_QBaseCreate(QAccessibleBridgePlugin* self, const libqt_string key) {
	auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
	if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Create_IsBase(true);
	return vqaccessiblebridgeplugin->create(QString::fromUtf8(key.data, key.len));
}
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnCreate(QAccessibleBridgePlugin* self, intptr_t slot) {
	auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
	if (vqaccessiblebridgeplugin && vqaccessiblebridgeplugin->isVirtualQAccessibleBridgePlugin) {
vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Create_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Create_Callback>(slot));
}
}

void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self) {
    delete self;
}

