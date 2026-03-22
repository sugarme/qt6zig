#include <QLibraryInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVersionNumber>
#include <qlibraryinfo.h>
#include "libqlibraryinfo.h"
#include "libqlibraryinfo.hxx"

QLibraryInfo* QLibraryInfo_new(const QLibraryInfo* other) {
	 return new QLibraryInfo(*other);
}

QLibraryInfo* QLibraryInfo_new2(QLibraryInfo* other) {
	 return new QLibraryInfo(*other);
}

QLibraryInfo* QLibraryInfo_new3(const QLibraryInfo* param1) {
	 return new QLibraryInfo(*param1);
}

void QLibraryInfo_CopyAssign(QLibraryInfo* self, QLibraryInfo* other) {
    *self = *other;
}

void QLibraryInfo_MoveAssign(QLibraryInfo* self, QLibraryInfo* other) {
    *self = std::move(*other);
}

const char* QLibraryInfo_Build() {
	return QLibraryInfo::build();
}

bool QLibraryInfo_IsDebugBuild() {
	return QLibraryInfo::isDebugBuild();
}

bool QLibraryInfo_IsSharedBuild() {
	return QLibraryInfo::isSharedBuild();
}

QVersionNumber* QLibraryInfo_Version() {
	return new QVersionNumber(QLibraryInfo::version());
}

libqt_string QLibraryInfo_Path(int p) {
	QString _ret = QLibraryInfo::path(static_cast<QLibraryInfo::LibraryPath>(p));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QLibraryInfo_Paths(int p) {
	auto _ret = QLibraryInfo::paths(static_cast<QLibraryInfo::LibraryPath>(p));
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

libqt_string QLibraryInfo_Location(int location) {
	QString _ret = QLibraryInfo::location(static_cast<QLibraryInfo::LibraryPath>(location));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QLibraryInfo_PlatformPluginArguments(const libqt_string platformName) {
	auto _ret = QLibraryInfo::platformPluginArguments(QString::fromUtf8(platformName.data, platformName.len));
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

void QLibraryInfo_Delete(QLibraryInfo* self) {
    delete self;
}

