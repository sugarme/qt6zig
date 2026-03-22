#include <QIconEngine>
#include <QIconEnginePlugin>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qiconengineplugin.h>
#include "libqiconengineplugin.h"
#include "libqiconengineplugin.hxx"

QIconEnginePlugin* QIconEnginePlugin_new() {
	 return new VirtualQIconEnginePlugin();
}

QIconEnginePlugin* QIconEnginePlugin_new2(QObject* parent) {
	 return new VirtualQIconEnginePlugin(parent);
}

libqt_string QIconEnginePlugin_Tr(const char* s) {
	QString _ret = QIconEnginePlugin::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QIconEngine* QIconEnginePlugin_Create(QIconEnginePlugin* self, const libqt_string filename) {
	return self->create(QString::fromUtf8(filename.data, filename.len));
}

libqt_string QIconEnginePlugin_Tr2(const char* s, const char* c) {
	QString _ret = QIconEnginePlugin::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QIconEnginePlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QIconEnginePlugin::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QIconEngine* QIconEnginePlugin_QBaseCreate(QIconEnginePlugin* self, const libqt_string filename) {
	auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
	if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
vqiconengineplugin->setQIconEnginePlugin_Create_IsBase(true);
	return vqiconengineplugin->create(QString::fromUtf8(filename.data, filename.len));
}
}

// Auxiliary method to allow providing re-implementation
void QIconEnginePlugin_OnCreate(QIconEnginePlugin* self, intptr_t slot) {
	auto* vqiconengineplugin = dynamic_cast<VirtualQIconEnginePlugin*>(self);
	if (vqiconengineplugin && vqiconengineplugin->isVirtualQIconEnginePlugin) {
vqiconengineplugin->setQIconEnginePlugin_Create_Callback(reinterpret_cast<VirtualQIconEnginePlugin::QIconEnginePlugin_Create_Callback>(slot));
}
}

void QIconEnginePlugin_Delete(QIconEnginePlugin* self) {
    delete self;
}

