#include <QCommandLineOption>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qcommandlineoption.h>
#include "libqcommandlineoption.h"
#include "libqcommandlineoption.hxx"

QCommandLineOption* QCommandLineOption_new(const libqt_string name) {
	 return new QCommandLineOption(QString::fromUtf8(name.data, name.len));
}

QCommandLineOption* QCommandLineOption_new2(const libqt_list names) {
	 return new QCommandLineOption(QList<QString>());
}

QCommandLineOption* QCommandLineOption_new3(const libqt_string name, const libqt_string description) {
	 return new QCommandLineOption(QString::fromUtf8(name.data, name.len), QString::fromUtf8(description.data, description.len));
}

QCommandLineOption* QCommandLineOption_new4(const libqt_list names, const libqt_string description) {
	 return new QCommandLineOption(QList<QString>(), QString::fromUtf8(description.data, description.len));
}

QCommandLineOption* QCommandLineOption_new5(const QCommandLineOption* other) {
	 return new QCommandLineOption(*other);
}

QCommandLineOption* QCommandLineOption_new6(const libqt_string name, const libqt_string description, const libqt_string valueName) {
	 return new QCommandLineOption(QString::fromUtf8(name.data, name.len), QString::fromUtf8(description.data, description.len), QString::fromUtf8(valueName.data, valueName.len));
}

QCommandLineOption* QCommandLineOption_new7(const libqt_string name, const libqt_string description, const libqt_string valueName, const libqt_string defaultValue) {
	 return new QCommandLineOption(QString::fromUtf8(name.data, name.len), QString::fromUtf8(description.data, description.len), QString::fromUtf8(valueName.data, valueName.len), QString::fromUtf8(defaultValue.data, defaultValue.len));
}

QCommandLineOption* QCommandLineOption_new8(const libqt_list names, const libqt_string description, const libqt_string valueName) {
	 return new QCommandLineOption(QList<QString>(), QString::fromUtf8(description.data, description.len), QString::fromUtf8(valueName.data, valueName.len));
}

QCommandLineOption* QCommandLineOption_new9(const libqt_list names, const libqt_string description, const libqt_string valueName, const libqt_string defaultValue) {
	 return new QCommandLineOption(QList<QString>(), QString::fromUtf8(description.data, description.len), QString::fromUtf8(valueName.data, valueName.len), QString::fromUtf8(defaultValue.data, defaultValue.len));
}

void QCommandLineOption_OperatorAssign(QCommandLineOption* self, const QCommandLineOption* other) {
	self->operator=(*other);
}

void QCommandLineOption_Swap(QCommandLineOption* self, QCommandLineOption* other) {
	self->swap(*other);
}

libqt_list QCommandLineOption_Names(const QCommandLineOption* self) {
	auto _ret = self->names();
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

void QCommandLineOption_SetValueName(QCommandLineOption* self, const libqt_string name) {
	self->setValueName(QString::fromUtf8(name.data, name.len));
}

libqt_string QCommandLineOption_ValueName(const QCommandLineOption* self) {
	QString _ret = self->valueName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCommandLineOption_SetDescription(QCommandLineOption* self, const libqt_string description) {
	self->setDescription(QString::fromUtf8(description.data, description.len));
}

libqt_string QCommandLineOption_Description(const QCommandLineOption* self) {
	QString _ret = self->description();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCommandLineOption_SetDefaultValue(QCommandLineOption* self, const libqt_string defaultValue) {
	self->setDefaultValue(QString::fromUtf8(defaultValue.data, defaultValue.len));
}

void QCommandLineOption_SetDefaultValues(QCommandLineOption* self, const libqt_list defaultValues) {
	self->setDefaultValues(QList<QString>());
}

libqt_list QCommandLineOption_DefaultValues(const QCommandLineOption* self) {
	auto _ret = self->defaultValues();
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

int QCommandLineOption_Flags(const QCommandLineOption* self) {
	return self->flags();
}

void QCommandLineOption_SetFlags(QCommandLineOption* self, int aflags) {
	self->setFlags(static_cast<QFlags<QCommandLineOption::Flag>>(aflags));
}

void QCommandLineOption_Delete(QCommandLineOption* self) {
    delete self;
}

