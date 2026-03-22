#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <QUrlQuery>
#include <qurlquery.h>
#include "libqurlquery.h"
#include "libqurlquery.hxx"

QUrlQuery* QUrlQuery_new() {
	 return new QUrlQuery();
}

QUrlQuery* QUrlQuery_new2(const QUrl* url) {
	 return new QUrlQuery(*url);
}

QUrlQuery* QUrlQuery_new3(const libqt_string queryString) {
	 return new QUrlQuery(QString::fromUtf8(queryString.data, queryString.len));
}

QUrlQuery* QUrlQuery_new4(const QUrlQuery* other) {
	 return new QUrlQuery(*other);
}

void QUrlQuery_OperatorAssign(QUrlQuery* self, const QUrlQuery* other) {
	self->operator=(*other);
}

void QUrlQuery_Swap(QUrlQuery* self, QUrlQuery* other) {
	self->swap(*other);
}

bool QUrlQuery_IsEmpty(const QUrlQuery* self) {
	return self->isEmpty();
}

bool QUrlQuery_IsDetached(const QUrlQuery* self) {
	return self->isDetached();
}

void QUrlQuery_Clear(QUrlQuery* self) {
	self->clear();
}

libqt_string QUrlQuery_Query(const QUrlQuery* self) {
	QString _ret = self->query();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrlQuery_SetQuery(QUrlQuery* self, const libqt_string queryString) {
	self->setQuery(QString::fromUtf8(queryString.data, queryString.len));
}

libqt_string QUrlQuery_ToString(const QUrlQuery* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrlQuery_SetQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter) {
	self->setQueryDelimiters(*valueDelimiter, *pairDelimiter);
}

QChar* QUrlQuery_QueryValueDelimiter(const QUrlQuery* self) {
	return new QChar(self->queryValueDelimiter());
}

QChar* QUrlQuery_QueryPairDelimiter(const QUrlQuery* self) {
	return new QChar(self->queryPairDelimiter());
}

void QUrlQuery_SetQueryItems(QUrlQuery* self, const libqt_list query) {
	self->setQueryItems(QList<QPair<QString, QString>>());
}

libqt_list QUrlQuery_QueryItems(const QUrlQuery* self) {
	auto _ret = self->queryItems();
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

bool QUrlQuery_HasQueryItem(const QUrlQuery* self, const libqt_string key) {
	return self->hasQueryItem(QString::fromUtf8(key.data, key.len));
}

void QUrlQuery_AddQueryItem(QUrlQuery* self, const libqt_string key, const libqt_string value) {
	self->addQueryItem(QString::fromUtf8(key.data, key.len), QString::fromUtf8(value.data, value.len));
}

void QUrlQuery_RemoveQueryItem(QUrlQuery* self, const libqt_string key) {
	self->removeQueryItem(QString::fromUtf8(key.data, key.len));
}

libqt_string QUrlQuery_QueryItemValue(const QUrlQuery* self, const libqt_string key) {
	QString _ret = self->queryItemValue(QString::fromUtf8(key.data, key.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QUrlQuery_AllQueryItemValues(const QUrlQuery* self, const libqt_string key) {
	auto _ret = self->allQueryItemValues(QString::fromUtf8(key.data, key.len));
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

void QUrlQuery_RemoveAllQueryItems(QUrlQuery* self, const libqt_string key) {
	self->removeAllQueryItems(QString::fromUtf8(key.data, key.len));
}

libqt_string QUrlQuery_Query1(const QUrlQuery* self, unsigned int encoding) {
	QString _ret = self->query(static_cast<QFlags<QUrl::ComponentFormattingOption>>(encoding));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrlQuery_ToString1(const QUrlQuery* self, unsigned int encoding) {
	QString _ret = self->toString(static_cast<QFlags<QUrl::ComponentFormattingOption>>(encoding));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QUrlQuery_QueryItems1(const QUrlQuery* self, unsigned int encoding) {
	auto _ret = self->queryItems(static_cast<QFlags<QUrl::ComponentFormattingOption>>(encoding));
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

libqt_string QUrlQuery_QueryItemValue2(const QUrlQuery* self, const libqt_string key, unsigned int encoding) {
	QString _ret = self->queryItemValue(QString::fromUtf8(key.data, key.len), static_cast<QFlags<QUrl::ComponentFormattingOption>>(encoding));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QUrlQuery_AllQueryItemValues2(const QUrlQuery* self, const libqt_string key, unsigned int encoding) {
	auto _ret = self->allQueryItemValues(QString::fromUtf8(key.data, key.len), static_cast<QFlags<QUrl::ComponentFormattingOption>>(encoding));
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

void QUrlQuery_Delete(QUrlQuery* self) {
    delete self;
}

