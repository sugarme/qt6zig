#include <QSqlField>
#include <QSqlIndex>
#include <QSqlRecord>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qsqlindex.h>
#include "libqsqlindex.h"
#include "libqsqlindex.hxx"

QSqlIndex* QSqlIndex_new() {
	 return new QSqlIndex();
}

QSqlIndex* QSqlIndex_new2(const QSqlIndex* other) {
	 return new QSqlIndex(*other);
}

QSqlIndex* QSqlIndex_new3(const libqt_string cursorName) {
	 return new QSqlIndex(QString::fromUtf8(cursorName.data, cursorName.len));
}

QSqlIndex* QSqlIndex_new4(const libqt_string cursorName, const libqt_string name) {
	 return new QSqlIndex(QString::fromUtf8(cursorName.data, cursorName.len), QString::fromUtf8(name.data, name.len));
}

void QSqlIndex_OperatorAssign(QSqlIndex* self, const QSqlIndex* other) {
	self->operator=(*other);
}

void QSqlIndex_Swap(QSqlIndex* self, QSqlIndex* other) {
	self->swap(*other);
}

void QSqlIndex_SetCursorName(QSqlIndex* self, const libqt_string cursorName) {
	self->setCursorName(QString::fromUtf8(cursorName.data, cursorName.len));
}

libqt_string QSqlIndex_CursorName(const QSqlIndex* self) {
	QString _ret = self->cursorName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSqlIndex_SetName(QSqlIndex* self, const libqt_string name) {
	self->setName(QString::fromUtf8(name.data, name.len));
}

libqt_string QSqlIndex_Name(const QSqlIndex* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSqlIndex_Append(QSqlIndex* self, const QSqlField* field) {
	self->append(*field);
}

void QSqlIndex_Append2(QSqlIndex* self, const QSqlField* field, bool desc) {
	self->append(*field, desc);
}

bool QSqlIndex_IsDescending(const QSqlIndex* self, int i) {
	return self->isDescending(i);
}

void QSqlIndex_SetDescending(QSqlIndex* self, int i, bool desc) {
	self->setDescending(i, desc);
}

void QSqlIndex_Delete(QSqlIndex* self) {
    delete self;
}

