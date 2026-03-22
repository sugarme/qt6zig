#include <QSqlField>
#include <QSqlRecord>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <qsqlrecord.h>
#include "libqsqlrecord.h"
#include "libqsqlrecord.hxx"

QSqlRecord* QSqlRecord_new() {
	 return new QSqlRecord();
}

QSqlRecord* QSqlRecord_new2(const QSqlRecord* other) {
	 return new QSqlRecord(*other);
}

void QSqlRecord_OperatorAssign(QSqlRecord* self, const QSqlRecord* other) {
	self->operator=(*other);
}

void QSqlRecord_Swap(QSqlRecord* self, QSqlRecord* other) {
	self->swap(*other);
}

bool QSqlRecord_OperatorEqual(const QSqlRecord* self, const QSqlRecord* other) {
	return self->operator==(*other);
}

bool QSqlRecord_OperatorNotEqual(const QSqlRecord* self, const QSqlRecord* other) {
	return self->operator!=(*other);
}

QVariant* QSqlRecord_Value(const QSqlRecord* self, int i) {
	return new QVariant(self->value(i));
}

void QSqlRecord_SetValue(QSqlRecord* self, int i, const QVariant* val) {
	self->setValue(i, *val);
}

void QSqlRecord_SetNull(QSqlRecord* self, int i) {
	self->setNull(i);
}

bool QSqlRecord_IsNull(const QSqlRecord* self, int i) {
	return self->isNull(i);
}

libqt_string QSqlRecord_FieldName(const QSqlRecord* self, int i) {
	QString _ret = self->fieldName(i);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSqlField* QSqlRecord_Field(const QSqlRecord* self, int i) {
	return new QSqlField(self->field(i));
}

bool QSqlRecord_IsGenerated(const QSqlRecord* self, int i) {
	return self->isGenerated(i);
}

void QSqlRecord_SetGenerated2(QSqlRecord* self, int i, bool generated) {
	self->setGenerated(i, generated);
}

void QSqlRecord_Append(QSqlRecord* self, const QSqlField* field) {
	self->append(*field);
}

void QSqlRecord_Replace(QSqlRecord* self, int pos, const QSqlField* field) {
	self->replace(pos, *field);
}

void QSqlRecord_Insert(QSqlRecord* self, int pos, const QSqlField* field) {
	self->insert(pos, *field);
}

void QSqlRecord_Remove(QSqlRecord* self, int pos) {
	self->remove(pos);
}

bool QSqlRecord_IsEmpty(const QSqlRecord* self) {
	return self->isEmpty();
}

void QSqlRecord_Clear(QSqlRecord* self) {
	self->clear();
}

void QSqlRecord_ClearValues(QSqlRecord* self) {
	self->clearValues();
}

int QSqlRecord_Count(const QSqlRecord* self) {
	return self->count();
}

QSqlRecord* QSqlRecord_KeyValues(const QSqlRecord* self, const QSqlRecord* keyFields) {
	return new QSqlRecord(self->keyValues(*keyFields));
}

void QSqlRecord_Delete(QSqlRecord* self) {
    delete self;
}

