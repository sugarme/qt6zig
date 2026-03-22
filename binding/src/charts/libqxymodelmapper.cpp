#include <QAbstractItemModel>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXYModelMapper>
#include <QXYSeries>
#include <qxymodelmapper.h>
#include "libqxymodelmapper.h"
#include "libqxymodelmapper.hxx"

libqt_string QXYModelMapper_Tr(const char* s) {
	QString _ret = QXYModelMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QXYModelMapper_Tr2(const char* s, const char* c) {
	QString _ret = QXYModelMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QXYModelMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QXYModelMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QXYModelMapper_Delete(QXYModelMapper* self) {
    delete self;
}

