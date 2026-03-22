#include <QAccessibleInterface>
#include <QAccessiblePlugin>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaccessibleplugin.h>
#include "libqaccessibleplugin.h"
#include "libqaccessibleplugin.hxx"

QAccessiblePlugin* QAccessiblePlugin_new() {
	 return new VirtualQAccessiblePlugin();
}

QAccessiblePlugin* QAccessiblePlugin_new2(QObject* parent) {
	 return new VirtualQAccessiblePlugin(parent);
}

libqt_string QAccessiblePlugin_Tr(const char* s) {
	QString _ret = QAccessiblePlugin::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAccessibleInterface* QAccessiblePlugin_Create(QAccessiblePlugin* self, const libqt_string key, QObject* object) {
	return self->create(QString::fromUtf8(key.data, key.len), object);
}

libqt_string QAccessiblePlugin_Tr2(const char* s, const char* c) {
	QString _ret = QAccessiblePlugin::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAccessiblePlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAccessiblePlugin::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QAccessibleInterface* QAccessiblePlugin_QBaseCreate(QAccessiblePlugin* self, const libqt_string key, QObject* object) {
	auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self);
	if (vqaccessibleplugin && vqaccessibleplugin->isVirtualQAccessiblePlugin) {
vqaccessibleplugin->setQAccessiblePlugin_Create_IsBase(true);
	return vqaccessibleplugin->create(QString::fromUtf8(key.data, key.len), object);
}
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnCreate(QAccessiblePlugin* self, intptr_t slot) {
	auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self);
	if (vqaccessibleplugin && vqaccessibleplugin->isVirtualQAccessiblePlugin) {
vqaccessibleplugin->setQAccessiblePlugin_Create_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_Create_Callback>(slot));
}
}

void QAccessiblePlugin_Delete(QAccessiblePlugin* self) {
    delete self;
}

