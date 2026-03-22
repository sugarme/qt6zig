#include <QJsonObject>
#include <QObject>
#include <QPluginLoader>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qpluginloader.h>
#include "libqpluginloader.h"
#include "libqpluginloader.hxx"

QPluginLoader* QPluginLoader_new() {
	 return new QPluginLoader();
}

QPluginLoader* QPluginLoader_new2(const libqt_string fileName) {
	 return new QPluginLoader(QString::fromUtf8(fileName.data, fileName.len));
}

QPluginLoader* QPluginLoader_new3(QObject* parent) {
	 return new QPluginLoader(parent);
}

QPluginLoader* QPluginLoader_new4(const libqt_string fileName, QObject* parent) {
	 return new QPluginLoader(QString::fromUtf8(fileName.data, fileName.len), parent);
}

libqt_string QPluginLoader_Tr(const char* s) {
	QString _ret = QPluginLoader::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QObject* QPluginLoader_Instance(QPluginLoader* self) {
	return self->instance();
}

QJsonObject* QPluginLoader_MetaData(const QPluginLoader* self) {
	return new QJsonObject(self->metaData());
}

libqt_list QPluginLoader_StaticInstances() {
	auto _ret = QPluginLoader::staticInstances();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QPluginLoader_StaticPlugins() {
	auto _ret = QPluginLoader::staticPlugins();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

bool QPluginLoader_Load(QPluginLoader* self) {
	return self->load();
}

bool QPluginLoader_Unload(QPluginLoader* self) {
	return self->unload();
}

bool QPluginLoader_IsLoaded(const QPluginLoader* self) {
	return self->isLoaded();
}

void QPluginLoader_SetFileName(QPluginLoader* self, const libqt_string fileName) {
	self->setFileName(QString::fromUtf8(fileName.data, fileName.len));
}

libqt_string QPluginLoader_FileName(const QPluginLoader* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPluginLoader_ErrorString(const QPluginLoader* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPluginLoader_SetLoadHints(QPluginLoader* self, int loadHints) {
	self->setLoadHints(static_cast<QFlags<QLibrary::LoadHint>>(loadHints));
}

int QPluginLoader_LoadHints(const QPluginLoader* self) {
	return self->loadHints();
}

libqt_string QPluginLoader_Tr2(const char* s, const char* c) {
	QString _ret = QPluginLoader::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPluginLoader_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPluginLoader::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPluginLoader_Delete(QPluginLoader* self) {
    delete self;
}

