#include <QFileSelector>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <qfileselector.h>
#include "libqfileselector.h"
#include "libqfileselector.hxx"

QFileSelector* QFileSelector_new() {
	 return new QFileSelector();
}

QFileSelector* QFileSelector_new2(QObject* parent) {
	 return new QFileSelector(parent);
}

libqt_string QFileSelector_Tr(const char* s) {
	QString _ret = QFileSelector::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileSelector_Select(const QFileSelector* self, const libqt_string filePath) {
	QString _ret = self->select(QString::fromUtf8(filePath.data, filePath.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QFileSelector_Select2(const QFileSelector* self, const QUrl* filePath) {
	return new QUrl(self->select(*filePath));
}

libqt_list QFileSelector_ExtraSelectors(const QFileSelector* self) {
	auto _ret = self->extraSelectors();
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

void QFileSelector_SetExtraSelectors(QFileSelector* self, const libqt_list list) {
	self->setExtraSelectors(QList<QString>());
}

libqt_list QFileSelector_AllSelectors(const QFileSelector* self) {
	auto _ret = self->allSelectors();
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

libqt_string QFileSelector_Tr2(const char* s, const char* c) {
	QString _ret = QFileSelector::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileSelector_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFileSelector::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFileSelector_Delete(QFileSelector* self) {
    delete self;
}

