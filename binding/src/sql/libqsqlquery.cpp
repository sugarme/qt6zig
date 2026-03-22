#include <QAnyStringView>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsqlquery.h>
#include "libqsqlquery.h"
#include "libqsqlquery.hxx"

QSqlQuery* QSqlQuery_new(QSqlResult* r) {
	 return new QSqlQuery(r);
}

QSqlQuery* QSqlQuery_new2() {
	 return new QSqlQuery();
}

QSqlQuery* QSqlQuery_new3(const QSqlDatabase* db) {
	 return new QSqlQuery(*db);
}

QSqlQuery* QSqlQuery_new4(const QSqlQuery* other) {
	 return new QSqlQuery(*other);
}

QSqlQuery* QSqlQuery_new5(const libqt_string query) {
	 return new QSqlQuery(QString::fromUtf8(query.data, query.len));
}

QSqlQuery* QSqlQuery_new6(const libqt_string query, const QSqlDatabase* db) {
	 return new QSqlQuery(QString::fromUtf8(query.data, query.len), *db);
}

void QSqlQuery_OperatorAssign(QSqlQuery* self, const QSqlQuery* other) {
	self->operator=(*other);
}

void QSqlQuery_Swap(QSqlQuery* self, QSqlQuery* other) {
	self->swap(*other);
}

bool QSqlQuery_IsValid(const QSqlQuery* self) {
	return self->isValid();
}

bool QSqlQuery_IsActive(const QSqlQuery* self) {
	return self->isActive();
}

bool QSqlQuery_IsNull(const QSqlQuery* self, int field) {
	return self->isNull(field);
}

bool QSqlQuery_IsNull2(const QSqlQuery* self, libqt_string name) {
	return self->isNull(QAnyStringView(QString::fromUtf8(name.data, name.len)));
}

int QSqlQuery_At(const QSqlQuery* self) {
	return self->at();
}

libqt_string QSqlQuery_LastQuery(const QSqlQuery* self) {
	QString _ret = self->lastQuery();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QSqlQuery_NumRowsAffected(const QSqlQuery* self) {
	return self->numRowsAffected();
}

QSqlError* QSqlQuery_LastError(const QSqlQuery* self) {
	return new QSqlError(self->lastError());
}

bool QSqlQuery_IsSelect(const QSqlQuery* self) {
	return self->isSelect();
}

int QSqlQuery_Size(const QSqlQuery* self) {
	return self->size();
}

const QSqlDriver* QSqlQuery_Driver(const QSqlQuery* self) {
	return self->driver();
}

const QSqlResult* QSqlQuery_Result(const QSqlQuery* self) {
	return self->result();
}

bool QSqlQuery_IsForwardOnly(const QSqlQuery* self) {
	return self->isForwardOnly();
}

QSqlRecord* QSqlQuery_Record(const QSqlQuery* self) {
	return new QSqlRecord(self->record());
}

void QSqlQuery_SetForwardOnly(QSqlQuery* self, bool forward) {
	self->setForwardOnly(forward);
}

bool QSqlQuery_Exec(QSqlQuery* self, const libqt_string query) {
	return self->exec(QString::fromUtf8(query.data, query.len));
}

QVariant* QSqlQuery_Value(const QSqlQuery* self, int i) {
	return new QVariant(self->value(i));
}

QVariant* QSqlQuery_Value2(const QSqlQuery* self, libqt_string name) {
	return new QVariant(self->value(QAnyStringView(QString::fromUtf8(name.data, name.len))));
}

void QSqlQuery_SetNumericalPrecisionPolicy(QSqlQuery* self, int precisionPolicy) {
	self->setNumericalPrecisionPolicy(static_cast<QSql::NumericalPrecisionPolicy>(precisionPolicy));
}

int QSqlQuery_NumericalPrecisionPolicy(const QSqlQuery* self) {
	return self->numericalPrecisionPolicy();
}

void QSqlQuery_SetPositionalBindingEnabled(QSqlQuery* self, bool enable) {
	self->setPositionalBindingEnabled(enable);
}

bool QSqlQuery_IsPositionalBindingEnabled(const QSqlQuery* self) {
	return self->isPositionalBindingEnabled();
}

bool QSqlQuery_Seek(QSqlQuery* self, int i) {
	return self->seek(i);
}

bool QSqlQuery_Next(QSqlQuery* self) {
	return self->next();
}

bool QSqlQuery_Previous(QSqlQuery* self) {
	return self->previous();
}

bool QSqlQuery_First(QSqlQuery* self) {
	return self->first();
}

bool QSqlQuery_Last(QSqlQuery* self) {
	return self->last();
}

void QSqlQuery_Clear(QSqlQuery* self) {
	self->clear();
}

bool QSqlQuery_Exec2(QSqlQuery* self) {
	return self->exec();
}

bool QSqlQuery_ExecBatch(QSqlQuery* self) {
	return self->execBatch();
}

bool QSqlQuery_Prepare(QSqlQuery* self, const libqt_string query) {
	return self->prepare(QString::fromUtf8(query.data, query.len));
}

void QSqlQuery_BindValue(QSqlQuery* self, const libqt_string placeholder, const QVariant* val) {
	self->bindValue(QString::fromUtf8(placeholder.data, placeholder.len), *val);
}

void QSqlQuery_BindValue2(QSqlQuery* self, int pos, const QVariant* val) {
	self->bindValue(pos, *val);
}

void QSqlQuery_AddBindValue(QSqlQuery* self, const QVariant* val) {
	self->addBindValue(*val);
}

QVariant* QSqlQuery_BoundValue(const QSqlQuery* self, const libqt_string placeholder) {
	return new QVariant(self->boundValue(QString::fromUtf8(placeholder.data, placeholder.len)));
}

QVariant* QSqlQuery_BoundValue2(const QSqlQuery* self, int pos) {
	return new QVariant(self->boundValue(pos));
}

libqt_list QSqlQuery_BoundValues(const QSqlQuery* self) {
	return self->boundValues();
}

libqt_list QSqlQuery_BoundValueNames(const QSqlQuery* self) {
	return self->boundValueNames();
}

libqt_string QSqlQuery_BoundValueName(const QSqlQuery* self, int pos) {
	QString _ret = self->boundValueName(pos);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlQuery_ExecutedQuery(const QSqlQuery* self) {
	QString _ret = self->executedQuery();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QVariant* QSqlQuery_LastInsertId(const QSqlQuery* self) {
	return new QVariant(self->lastInsertId());
}

void QSqlQuery_Finish(QSqlQuery* self) {
	self->finish();
}

bool QSqlQuery_NextResult(QSqlQuery* self) {
	return self->nextResult();
}

bool QSqlQuery_Seek2(QSqlQuery* self, int i, bool relative) {
	return self->seek(i, relative);
}

bool QSqlQuery_ExecBatch1(QSqlQuery* self, int mode) {
	return self->execBatch(static_cast<QSqlQuery::BatchExecutionMode>(mode));
}

void QSqlQuery_BindValue3(QSqlQuery* self, const libqt_string placeholder, const QVariant* val, int typeVal) {
	self->bindValue(QString::fromUtf8(placeholder.data, placeholder.len), *val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
}

void QSqlQuery_BindValue32(QSqlQuery* self, int pos, const QVariant* val, int typeVal) {
	self->bindValue(pos, *val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
}

void QSqlQuery_AddBindValue2(QSqlQuery* self, const QVariant* val, int typeVal) {
	self->addBindValue(*val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
}

void QSqlQuery_Delete(QSqlQuery* self) {
    delete self;
}

