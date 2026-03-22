#include <QFileSystemWatcher>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qfilesystemwatcher.h>
#include "libqfilesystemwatcher.h"
#include "libqfilesystemwatcher.hxx"

QFileSystemWatcher* QFileSystemWatcher_new() {
	 return new QFileSystemWatcher();
}

QFileSystemWatcher* QFileSystemWatcher_new2(const libqt_list paths) {
	 return new QFileSystemWatcher(QList<QString>());
}

QFileSystemWatcher* QFileSystemWatcher_new3(QObject* parent) {
	 return new QFileSystemWatcher(parent);
}

QFileSystemWatcher* QFileSystemWatcher_new4(const libqt_list paths, QObject* parent) {
	 return new QFileSystemWatcher(QList<QString>(), parent);
}

libqt_string QFileSystemWatcher_Tr(const char* s) {
	QString _ret = QFileSystemWatcher::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QFileSystemWatcher_AddPath(QFileSystemWatcher* self, const libqt_string file) {
	return self->addPath(QString::fromUtf8(file.data, file.len));
}

libqt_list QFileSystemWatcher_AddPaths(QFileSystemWatcher* self, const libqt_list files) {
	auto _ret = self->addPaths(QList<QString>());
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

bool QFileSystemWatcher_RemovePath(QFileSystemWatcher* self, const libqt_string file) {
	return self->removePath(QString::fromUtf8(file.data, file.len));
}

libqt_list QFileSystemWatcher_RemovePaths(QFileSystemWatcher* self, const libqt_list files) {
	auto _ret = self->removePaths(QList<QString>());
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QFileSystemWatcher_Files(const QFileSystemWatcher* self) {
	auto _ret = self->files();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QFileSystemWatcher_Directories(const QFileSystemWatcher* self) {
	auto _ret = self->directories();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_string QFileSystemWatcher_Tr2(const char* s, const char* c) {
	QString _ret = QFileSystemWatcher::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileSystemWatcher_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFileSystemWatcher::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFileSystemWatcher_Connect_fileChanged(QFileSystemWatcher* self, intptr_t slot) {
    void (*slotFunc)(QFileSystemWatcher*, const char*) = reinterpret_cast<void (*)(QFileSystemWatcher*, const char*)>(slot);
    QFileSystemWatcher::connect(self, &QFileSystemWatcher::fileChanged, [self, slotFunc](const QString& path) {
	slotFunc(self, path);
    });
}

void QFileSystemWatcher_Connect_directoryChanged(QFileSystemWatcher* self, intptr_t slot) {
    void (*slotFunc)(QFileSystemWatcher*, const char*) = reinterpret_cast<void (*)(QFileSystemWatcher*, const char*)>(slot);
    QFileSystemWatcher::connect(self, &QFileSystemWatcher::directoryChanged, [self, slotFunc](const QString& path) {
	slotFunc(self, path);
    });
}

void QFileSystemWatcher_Delete(QFileSystemWatcher* self) {
    delete self;
}

