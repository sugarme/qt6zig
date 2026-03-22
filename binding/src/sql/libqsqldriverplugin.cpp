#include <QObject>
#include <QSqlDriver>
#include <QSqlDriverPlugin>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsqldriverplugin.h>
#include "libqsqldriverplugin.h"
#include "libqsqldriverplugin.hxx"

QSqlDriverPlugin* QSqlDriverPlugin_new() {
	 return new VirtualQSqlDriverPlugin();
}

QSqlDriverPlugin* QSqlDriverPlugin_new2(QObject* parent) {
	 return new VirtualQSqlDriverPlugin(parent);
}

libqt_string QSqlDriverPlugin_Tr(const char* s) {
	QString _ret = QSqlDriverPlugin::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSqlDriver* QSqlDriverPlugin_Create(QSqlDriverPlugin* self, const libqt_string key) {
	return self->create(QString::fromUtf8(key.data, key.len));
}

libqt_string QSqlDriverPlugin_Tr2(const char* s, const char* c) {
	QString _ret = QSqlDriverPlugin::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlDriverPlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSqlDriverPlugin::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSqlDriver* QSqlDriverPlugin_QBaseCreate(QSqlDriverPlugin* self, const libqt_string key) {
	auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
	if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
vqsqldriverplugin->setQSqlDriverPlugin_Create_IsBase(true);
	return vqsqldriverplugin->create(QString::fromUtf8(key.data, key.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverPlugin_OnCreate(QSqlDriverPlugin* self, intptr_t slot) {
	auto* vqsqldriverplugin = dynamic_cast<VirtualQSqlDriverPlugin*>(self);
	if (vqsqldriverplugin && vqsqldriverplugin->isVirtualQSqlDriverPlugin) {
vqsqldriverplugin->setQSqlDriverPlugin_Create_Callback(reinterpret_cast<VirtualQSqlDriverPlugin::QSqlDriverPlugin_Create_Callback>(slot));
}
}

void QSqlDriverPlugin_Delete(QSqlDriverPlugin* self) {
    delete self;
}

