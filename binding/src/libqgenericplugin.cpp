#include <QGenericPlugin>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgenericplugin.h>
#include "libqgenericplugin.h"
#include "libqgenericplugin.hxx"

QGenericPlugin* QGenericPlugin_new() {
	 return new VirtualQGenericPlugin();
}

QGenericPlugin* QGenericPlugin_new2(QObject* parent) {
	 return new VirtualQGenericPlugin(parent);
}

libqt_string QGenericPlugin_Tr(const char* s) {
	QString _ret = QGenericPlugin::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QObject* QGenericPlugin_Create(QGenericPlugin* self, const libqt_string name, const libqt_string spec) {
	return self->create(QString::fromUtf8(name.data, name.len), QString::fromUtf8(spec.data, spec.len));
}

libqt_string QGenericPlugin_Tr2(const char* s, const char* c) {
	QString _ret = QGenericPlugin::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGenericPlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGenericPlugin::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QObject* QGenericPlugin_QBaseCreate(QGenericPlugin* self, const libqt_string name, const libqt_string spec) {
	auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self);
	if (vqgenericplugin && vqgenericplugin->isVirtualQGenericPlugin) {
vqgenericplugin->setQGenericPlugin_Create_IsBase(true);
	return vqgenericplugin->create(QString::fromUtf8(name.data, name.len), QString::fromUtf8(spec.data, spec.len));
}
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnCreate(QGenericPlugin* self, intptr_t slot) {
	auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self);
	if (vqgenericplugin && vqgenericplugin->isVirtualQGenericPlugin) {
vqgenericplugin->setQGenericPlugin_Create_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_Create_Callback>(slot));
}
}

void QGenericPlugin_Delete(QGenericPlugin* self) {
    delete self;
}

