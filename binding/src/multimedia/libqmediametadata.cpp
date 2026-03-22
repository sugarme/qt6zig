#include <QMediaMetaData>
#include <QMetaType>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPixmapCache__Key
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qmediametadata.h>
#include "libqmediametadata.h"
#include "libqmediametadata.hxx"

QMediaMetaData* QMediaMetaData_new(const QMediaMetaData* param1) {
	 return new QMediaMetaData(*param1);
}

QMediaMetaData* QMediaMetaData_new2() {
	 return new QMediaMetaData();
}

QVariant* QMediaMetaData_Value(const QMediaMetaData* self, QPixmapCache__Key* k) {
	return new QVariant(self->value(*k));
}

void QMediaMetaData_Insert(QMediaMetaData* self, QPixmapCache__Key* k, const QVariant* value) {
	self->insert(*k, *value);
}

void QMediaMetaData_Remove(QMediaMetaData* self, QPixmapCache__Key* k) {
	self->remove(*k);
}

libqt_list QMediaMetaData_Keys(const QMediaMetaData* self) {
	return self->keys();
}

QVariant* QMediaMetaData_OperatorSubscript(QMediaMetaData* self, QPixmapCache__Key* k) {
	return new QVariant(self->operator[](*k));
}

void QMediaMetaData_Clear(QMediaMetaData* self) {
	self->clear();
}

bool QMediaMetaData_IsEmpty(const QMediaMetaData* self) {
	return self->isEmpty();
}

libqt_string QMediaMetaData_StringValue(const QMediaMetaData* self, QPixmapCache__Key* k) {
	QString _ret = self->stringValue(*k);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMediaMetaData_MetaDataKeyToString(QPixmapCache__Key* k) {
	QString _ret = QMediaMetaData::metaDataKeyToString(*k);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMediaMetaData_Delete(QMediaMetaData* self) {
    delete self;
}

