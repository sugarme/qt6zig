#include <QStandardPaths>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qstandardpaths.h>
#include "libqstandardpaths.h"
#include "libqstandardpaths.hxx"

QStandardPaths* QStandardPaths_new(const QStandardPaths* other) {
	 return new QStandardPaths(*other);
}

QStandardPaths* QStandardPaths_new2(const QStandardPaths* param1) {
	 return new QStandardPaths(*param1);
}

void QStandardPaths_CopyAssign(QStandardPaths* self, QStandardPaths* other) {
    *self = *other;
}

libqt_string QStandardPaths_WritableLocation(int typeVal) {
	QString _ret = QStandardPaths::writableLocation(static_cast<QStandardPaths::StandardLocation>(typeVal));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QStandardPaths_StandardLocations(int typeVal) {
	auto _ret = QStandardPaths::standardLocations(static_cast<QStandardPaths::StandardLocation>(typeVal));
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

libqt_string QStandardPaths_Locate(int typeVal, const libqt_string fileName) {
	QString _ret = QStandardPaths::locate(static_cast<QStandardPaths::StandardLocation>(typeVal), QString::fromUtf8(fileName.data, fileName.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QStandardPaths_LocateAll(int typeVal, const libqt_string fileName) {
	auto _ret = QStandardPaths::locateAll(static_cast<QStandardPaths::StandardLocation>(typeVal), QString::fromUtf8(fileName.data, fileName.len));
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

libqt_string QStandardPaths_DisplayName(int typeVal) {
	QString _ret = QStandardPaths::displayName(static_cast<QStandardPaths::StandardLocation>(typeVal));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStandardPaths_FindExecutable(const libqt_string executableName) {
	QString _ret = QStandardPaths::findExecutable(QString::fromUtf8(executableName.data, executableName.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStandardPaths_SetTestModeEnabled(bool testMode) {
	QStandardPaths::setTestModeEnabled(testMode);
}

bool QStandardPaths_IsTestModeEnabled() {
	return QStandardPaths::isTestModeEnabled();
}

libqt_string QStandardPaths_Locate3(int typeVal, const libqt_string fileName, int options) {
	QString _ret = QStandardPaths::locate(static_cast<QStandardPaths::StandardLocation>(typeVal), QString::fromUtf8(fileName.data, fileName.len), static_cast<QFlags<QStandardPaths::LocateOption>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QStandardPaths_LocateAll3(int typeVal, const libqt_string fileName, int options) {
	auto _ret = QStandardPaths::locateAll(static_cast<QStandardPaths::StandardLocation>(typeVal), QString::fromUtf8(fileName.data, fileName.len), static_cast<QFlags<QStandardPaths::LocateOption>>(options));
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

libqt_string QStandardPaths_FindExecutable2(const libqt_string executableName, const libqt_list paths) {
	QString _ret = QStandardPaths::findExecutable(QString::fromUtf8(executableName.data, executableName.len), QList<QString>());
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

