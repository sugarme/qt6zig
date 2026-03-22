#include <QMetaType>
#include <QSqlField>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <qsqlfield.h>
#include "libqsqlfield.h"
#include "libqsqlfield.hxx"

QSqlField* QSqlField_new() {
	 return new QSqlField();
}

QSqlField* QSqlField_new2(const QSqlField* other) {
	 return new QSqlField(*other);
}

QSqlField* QSqlField_new3(const libqt_string fieldName, int typeVal) {
	 return new QSqlField(QString::fromUtf8(fieldName.data, fieldName.len), static_cast<QVariant::Type>(typeVal));
}

QSqlField* QSqlField_new4(const libqt_string fieldName) {
	 return new QSqlField(QString::fromUtf8(fieldName.data, fieldName.len));
}

QSqlField* QSqlField_new5(const libqt_string fieldName, QMetaType* typeVal) {
	 return new QSqlField(QString::fromUtf8(fieldName.data, fieldName.len), *typeVal);
}

QSqlField* QSqlField_new6(const libqt_string fieldName, QMetaType* typeVal, const libqt_string tableName) {
	 return new QSqlField(QString::fromUtf8(fieldName.data, fieldName.len), *typeVal, QString::fromUtf8(tableName.data, tableName.len));
}

QSqlField* QSqlField_new7(const libqt_string fieldName, int typeVal, const libqt_string tableName) {
	 return new QSqlField(QString::fromUtf8(fieldName.data, fieldName.len), static_cast<QVariant::Type>(typeVal), QString::fromUtf8(tableName.data, tableName.len));
}

void QSqlField_OperatorAssign(QSqlField* self, const QSqlField* other) {
	self->operator=(*other);
}

void QSqlField_Swap(QSqlField* self, QSqlField* other) {
	self->swap(*other);
}

bool QSqlField_OperatorEqual(const QSqlField* self, const QSqlField* other) {
	return self->operator==(*other);
}

bool QSqlField_OperatorNotEqual(const QSqlField* self, const QSqlField* other) {
	return self->operator!=(*other);
}

void QSqlField_SetValue(QSqlField* self, const QVariant* value) {
	self->setValue(*value);
}

QVariant* QSqlField_Value(const QSqlField* self) {
	return new QVariant(self->value());
}

void QSqlField_SetName(QSqlField* self, const libqt_string name) {
	self->setName(QString::fromUtf8(name.data, name.len));
}

libqt_string QSqlField_Name(const QSqlField* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSqlField_SetTableName(QSqlField* self, const libqt_string tableName) {
	self->setTableName(QString::fromUtf8(tableName.data, tableName.len));
}

libqt_string QSqlField_TableName(const QSqlField* self) {
	QString _ret = self->tableName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QSqlField_IsNull(const QSqlField* self) {
	return self->isNull();
}

void QSqlField_SetReadOnly(QSqlField* self, bool readOnly) {
	self->setReadOnly(readOnly);
}

bool QSqlField_IsReadOnly(const QSqlField* self) {
	return self->isReadOnly();
}

void QSqlField_Clear(QSqlField* self) {
	self->clear();
}

bool QSqlField_IsAutoValue(const QSqlField* self) {
	return self->isAutoValue();
}

QMetaType* QSqlField_MetaType(const QSqlField* self) {
	return new QMetaType(self->metaType());
}

void QSqlField_SetMetaType(QSqlField* self, QMetaType* typeVal) {
	self->setMetaType(*typeVal);
}

int QSqlField_Type(const QSqlField* self) {
	return self->type();
}

void QSqlField_SetType(QSqlField* self, int typeVal) {
	self->setType(static_cast<QVariant::Type>(typeVal));
}

void QSqlField_SetRequiredStatus(QSqlField* self, int status) {
	self->setRequiredStatus(static_cast<QSqlField::RequiredStatus>(status));
}

void QSqlField_SetRequired(QSqlField* self, bool required) {
	self->setRequired(required);
}

void QSqlField_SetLength(QSqlField* self, int fieldLength) {
	self->setLength(fieldLength);
}

void QSqlField_SetPrecision(QSqlField* self, int precision) {
	self->setPrecision(precision);
}

void QSqlField_SetDefaultValue(QSqlField* self, const QVariant* value) {
	self->setDefaultValue(*value);
}

void QSqlField_SetSqlType(QSqlField* self, int typeVal) {
	self->setSqlType(typeVal);
}

void QSqlField_SetGenerated(QSqlField* self, bool gen) {
	self->setGenerated(gen);
}

void QSqlField_SetAutoValue(QSqlField* self, bool autoVal) {
	self->setAutoValue(autoVal);
}

int QSqlField_RequiredStatus(const QSqlField* self) {
	return self->requiredStatus();
}

int QSqlField_Length(const QSqlField* self) {
	return self->length();
}

int QSqlField_Precision(const QSqlField* self) {
	return self->precision();
}

QVariant* QSqlField_DefaultValue(const QSqlField* self) {
	return new QVariant(self->defaultValue());
}

int QSqlField_TypeID(const QSqlField* self) {
	return self->typeID();
}

bool QSqlField_IsGenerated(const QSqlField* self) {
	return self->isGenerated();
}

bool QSqlField_IsValid(const QSqlField* self) {
	return self->isValid();
}

void QSqlField_Delete(QSqlField* self) {
    delete self;
}

