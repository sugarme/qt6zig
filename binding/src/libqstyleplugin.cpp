#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyle>
#include <QStylePlugin>
#include <qstyleplugin.h>
#include "libqstyleplugin.h"
#include "libqstyleplugin.hxx"

QStylePlugin* QStylePlugin_new() {
	 return new VirtualQStylePlugin();
}

QStylePlugin* QStylePlugin_new2(QObject* parent) {
	 return new VirtualQStylePlugin(parent);
}

libqt_string QStylePlugin_Tr(const char* s) {
	QString _ret = QStylePlugin::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QStyle* QStylePlugin_Create(QStylePlugin* self, const libqt_string key) {
	return self->create(QString::fromUtf8(key.data, key.len));
}

libqt_string QStylePlugin_Tr2(const char* s, const char* c) {
	QString _ret = QStylePlugin::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStylePlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStylePlugin::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QStyle* QStylePlugin_QBaseCreate(QStylePlugin* self, const libqt_string key) {
	auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
	if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
vqstyleplugin->setQStylePlugin_Create_IsBase(true);
	return vqstyleplugin->create(QString::fromUtf8(key.data, key.len));
}
}

// Auxiliary method to allow providing re-implementation
void QStylePlugin_OnCreate(QStylePlugin* self, intptr_t slot) {
	auto* vqstyleplugin = dynamic_cast<VirtualQStylePlugin*>(self);
	if (vqstyleplugin && vqstyleplugin->isVirtualQStylePlugin) {
vqstyleplugin->setQStylePlugin_Create_Callback(reinterpret_cast<VirtualQStylePlugin::QStylePlugin_Create_Callback>(slot));
}
}

void QStylePlugin_Delete(QStylePlugin* self) {
    delete self;
}

