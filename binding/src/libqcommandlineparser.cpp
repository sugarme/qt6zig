#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QCoreApplication>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qcommandlineparser.h>
#include "libqcommandlineparser.h"
#include "libqcommandlineparser.hxx"

QCommandLineParser* QCommandLineParser_new() {
	 return new QCommandLineParser();
}

libqt_string QCommandLineParser_Tr(const char* sourceText) {
	QString _ret = QCommandLineParser::tr(sourceText);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCommandLineParser_SetSingleDashWordOptionMode(QCommandLineParser* self, int parsingMode) {
	self->setSingleDashWordOptionMode(static_cast<QCommandLineParser::SingleDashWordOptionMode>(parsingMode));
}

void QCommandLineParser_SetOptionsAfterPositionalArgumentsMode(QCommandLineParser* self, int mode) {
	self->setOptionsAfterPositionalArgumentsMode(static_cast<QCommandLineParser::OptionsAfterPositionalArgumentsMode>(mode));
}

bool QCommandLineParser_AddOption(QCommandLineParser* self, const QCommandLineOption* commandLineOption) {
	return self->addOption(*commandLineOption);
}

bool QCommandLineParser_AddOptions(QCommandLineParser* self, const libqt_list options) {
	return self->addOptions(QList<QCommandLineOption>());
}

QCommandLineOption* QCommandLineParser_AddVersionOption(QCommandLineParser* self) {
	return new QCommandLineOption(self->addVersionOption());
}

QCommandLineOption* QCommandLineParser_AddHelpOption(QCommandLineParser* self) {
	return new QCommandLineOption(self->addHelpOption());
}

void QCommandLineParser_SetApplicationDescription(QCommandLineParser* self, const libqt_string description) {
	self->setApplicationDescription(QString::fromUtf8(description.data, description.len));
}

libqt_string QCommandLineParser_ApplicationDescription(const QCommandLineParser* self) {
	QString _ret = self->applicationDescription();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCommandLineParser_AddPositionalArgument(QCommandLineParser* self, const libqt_string name, const libqt_string description) {
	self->addPositionalArgument(QString::fromUtf8(name.data, name.len), QString::fromUtf8(description.data, description.len));
}

void QCommandLineParser_ClearPositionalArguments(QCommandLineParser* self) {
	self->clearPositionalArguments();
}

void QCommandLineParser_Process(QCommandLineParser* self, const libqt_list arguments) {
	self->process(QList<QString>());
}

void QCommandLineParser_Process2(QCommandLineParser* self, const QCoreApplication* app) {
	self->process(*app);
}

bool QCommandLineParser_Parse(QCommandLineParser* self, const libqt_list arguments) {
	return self->parse(QList<QString>());
}

libqt_string QCommandLineParser_ErrorText(const QCommandLineParser* self) {
	QString _ret = self->errorText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QCommandLineParser_IsSet(const QCommandLineParser* self, const libqt_string name) {
	return self->isSet(QString::fromUtf8(name.data, name.len));
}

libqt_string QCommandLineParser_Value(const QCommandLineParser* self, const libqt_string name) {
	QString _ret = self->value(QString::fromUtf8(name.data, name.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QCommandLineParser_Values(const QCommandLineParser* self, const libqt_string name) {
	auto _ret = self->values(QString::fromUtf8(name.data, name.len));
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

bool QCommandLineParser_IsSet2(const QCommandLineParser* self, const QCommandLineOption* option) {
	return self->isSet(*option);
}

libqt_string QCommandLineParser_Value2(const QCommandLineParser* self, const QCommandLineOption* option) {
	QString _ret = self->value(*option);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QCommandLineParser_Values2(const QCommandLineParser* self, const QCommandLineOption* option) {
	auto _ret = self->values(*option);
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

libqt_list QCommandLineParser_PositionalArguments(const QCommandLineParser* self) {
	auto _ret = self->positionalArguments();
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

libqt_list QCommandLineParser_OptionNames(const QCommandLineParser* self) {
	auto _ret = self->optionNames();
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

libqt_list QCommandLineParser_UnknownOptionNames(const QCommandLineParser* self) {
	auto _ret = self->unknownOptionNames();
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

void QCommandLineParser_ShowVersion(QCommandLineParser* self) {
	self->showVersion();
}

void QCommandLineParser_ShowHelp(QCommandLineParser* self) {
	self->showHelp();
}

libqt_string QCommandLineParser_HelpText(const QCommandLineParser* self) {
	QString _ret = self->helpText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCommandLineParser_Tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QCommandLineParser::tr(sourceText, disambiguation);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCommandLineParser_Tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QCommandLineParser::tr(sourceText, disambiguation, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCommandLineParser_AddPositionalArgument3(QCommandLineParser* self, const libqt_string name, const libqt_string description, const libqt_string syntax) {
	self->addPositionalArgument(QString::fromUtf8(name.data, name.len), QString::fromUtf8(description.data, description.len), QString::fromUtf8(syntax.data, syntax.len));
}

void QCommandLineParser_ShowHelp1(QCommandLineParser* self, int exitCode) {
	self->showHelp(exitCode);
}

void QCommandLineParser_Delete(QCommandLineParser* self) {
    delete self;
}

