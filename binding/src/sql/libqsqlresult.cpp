#include <QSqlDriver>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
#include <qsqlresult.h>
#include "libqsqlresult.h"
#include "libqsqlresult.hxx"

QVariant* QSqlResult_Handle(const QSqlResult* self) {
	return new QVariant(self->handle());
}

// Base class handler implementation
QVariant* QSqlResult_QBaseHandle(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Handle_IsBase(true);
	return new QVariant(vqsqlresult->handle());
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnHandle(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Handle_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_Handle_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_SetAt(QSqlResult* self, int at) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->setAt(at);
	} else {
	self->QSqlResult::setAt(at);
}
}

// Base class handler implementation
void QSqlResult_QBaseSetAt(QSqlResult* self, int at) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetAt_IsBase(true);
	vqsqlresult->setAt(at);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnSetAt(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetAt_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_SetAt_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_SetActive(QSqlResult* self, bool a) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->setActive(a);
	} else {
	self->QSqlResult::setActive(a);
}
}

// Base class handler implementation
void QSqlResult_QBaseSetActive(QSqlResult* self, bool a) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetActive_IsBase(true);
	vqsqlresult->setActive(a);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnSetActive(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetActive_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_SetActive_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_SetLastError(QSqlResult* self, const QSqlError* e) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->setLastError(*e);
	} else {
	self->QSqlResult::setLastError(*e);
}
}

// Base class handler implementation
void QSqlResult_QBaseSetLastError(QSqlResult* self, const QSqlError* e) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetLastError_IsBase(true);
	vqsqlresult->setLastError(*e);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnSetLastError(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetLastError_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_SetLastError_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_SetQuery(QSqlResult* self, const libqt_string query) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->setQuery(QString::fromUtf8(query.data, query.len));
	} else {
	self->QSqlResult::setQuery(QString::fromUtf8(query.data, query.len));
}
}

// Base class handler implementation
void QSqlResult_QBaseSetQuery(QSqlResult* self, const libqt_string query) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetQuery_IsBase(true);
	vqsqlresult->setQuery(QString::fromUtf8(query.data, query.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnSetQuery(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetQuery_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_SetQuery_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_SetSelect(QSqlResult* self, bool s) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->setSelect(s);
	} else {
	self->QSqlResult::setSelect(s);
}
}

// Base class handler implementation
void QSqlResult_QBaseSetSelect(QSqlResult* self, bool s) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetSelect_IsBase(true);
	vqsqlresult->setSelect(s);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnSetSelect(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetSelect_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_SetSelect_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_SetForwardOnly(QSqlResult* self, bool forward) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->setForwardOnly(forward);
	} else {
	self->QSqlResult::setForwardOnly(forward);
}
}

// Base class handler implementation
void QSqlResult_QBaseSetForwardOnly(QSqlResult* self, bool forward) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetForwardOnly_IsBase(true);
	vqsqlresult->setForwardOnly(forward);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnSetForwardOnly(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetForwardOnly_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_SetForwardOnly_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_Exec(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->exec();
	} else {
	return self->QSqlResult::exec();
}
}

// Base class handler implementation
bool QSqlResult_QBaseExec(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Exec_IsBase(true);
	return vqsqlresult->exec();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnExec(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Exec_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_Exec_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_Prepare(QSqlResult* self, const libqt_string query) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->prepare(QString::fromUtf8(query.data, query.len));
	} else {
	return self->QSqlResult::prepare(QString::fromUtf8(query.data, query.len));
}
}

// Base class handler implementation
bool QSqlResult_QBasePrepare(QSqlResult* self, const libqt_string query) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Prepare_IsBase(true);
	return vqsqlresult->prepare(QString::fromUtf8(query.data, query.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnPrepare(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Prepare_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_Prepare_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_SavePrepare(QSqlResult* self, const libqt_string sqlquery) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->savePrepare(QString::fromUtf8(sqlquery.data, sqlquery.len));
	} else {
	return self->QSqlResult::savePrepare(QString::fromUtf8(sqlquery.data, sqlquery.len));
}
}

// Base class handler implementation
bool QSqlResult_QBaseSavePrepare(QSqlResult* self, const libqt_string sqlquery) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SavePrepare_IsBase(true);
	return vqsqlresult->savePrepare(QString::fromUtf8(sqlquery.data, sqlquery.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnSavePrepare(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SavePrepare_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_SavePrepare_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_BindValue(QSqlResult* self, int pos, const QVariant* val, int typeVal) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->bindValue(pos, *val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
	} else {
	self->QSqlResult::bindValue(pos, *val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
}
}

// Base class handler implementation
void QSqlResult_QBaseBindValue(QSqlResult* self, int pos, const QVariant* val, int typeVal) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BindValue_IsBase(true);
	vqsqlresult->bindValue(pos, *val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBindValue(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BindValue_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BindValue_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_BindValue2(QSqlResult* self, const libqt_string placeholder, const QVariant* val, int typeVal) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->bindValue(QString::fromUtf8(placeholder.data, placeholder.len), *val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
	} else {
	self->QSqlResult::bindValue(QString::fromUtf8(placeholder.data, placeholder.len), *val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
}
}

// Base class handler implementation
void QSqlResult_QBaseBindValue2(QSqlResult* self, const libqt_string placeholder, const QVariant* val, int typeVal) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BindValue2_IsBase(true);
	vqsqlresult->bindValue(QString::fromUtf8(placeholder.data, placeholder.len), *val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBindValue2(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BindValue2_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BindValue2_Callback>(slot));
}
}

// Derived class handler implementation
QVariant* QSqlResult_Data(QSqlResult* self, int i) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return new QVariant(vqsqlresult->data(i));
	} else {
	return new QVariant(self->QSqlResult::data(i));
}
}

// Base class handler implementation
QVariant* QSqlResult_QBaseData(QSqlResult* self, int i) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Data_IsBase(true);
	return new QVariant(vqsqlresult->data(i));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnData(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Data_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_Data_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_IsNull(QSqlResult* self, int i) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->isNull(i);
	} else {
	return self->QSqlResult::isNull(i);
}
}

// Base class handler implementation
bool QSqlResult_QBaseIsNull(QSqlResult* self, int i) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsNull_IsBase(true);
	return vqsqlresult->isNull(i);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnIsNull(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsNull_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_IsNull_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_Reset(QSqlResult* self, const libqt_string sqlquery) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->reset(QString::fromUtf8(sqlquery.data, sqlquery.len));
	} else {
	return self->QSqlResult::reset(QString::fromUtf8(sqlquery.data, sqlquery.len));
}
}

// Base class handler implementation
bool QSqlResult_QBaseReset(QSqlResult* self, const libqt_string sqlquery) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Reset_IsBase(true);
	return vqsqlresult->reset(QString::fromUtf8(sqlquery.data, sqlquery.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnReset(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Reset_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_Reset_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_Fetch(QSqlResult* self, int i) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->fetch(i);
	} else {
	return self->QSqlResult::fetch(i);
}
}

// Base class handler implementation
bool QSqlResult_QBaseFetch(QSqlResult* self, int i) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Fetch_IsBase(true);
	return vqsqlresult->fetch(i);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnFetch(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Fetch_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_Fetch_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_FetchNext(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->fetchNext();
	} else {
	return self->QSqlResult::fetchNext();
}
}

// Base class handler implementation
bool QSqlResult_QBaseFetchNext(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_FetchNext_IsBase(true);
	return vqsqlresult->fetchNext();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnFetchNext(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_FetchNext_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_FetchNext_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_FetchPrevious(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->fetchPrevious();
	} else {
	return self->QSqlResult::fetchPrevious();
}
}

// Base class handler implementation
bool QSqlResult_QBaseFetchPrevious(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_FetchPrevious_IsBase(true);
	return vqsqlresult->fetchPrevious();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnFetchPrevious(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_FetchPrevious_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_FetchPrevious_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_FetchFirst(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->fetchFirst();
	} else {
	return self->QSqlResult::fetchFirst();
}
}

// Base class handler implementation
bool QSqlResult_QBaseFetchFirst(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_FetchFirst_IsBase(true);
	return vqsqlresult->fetchFirst();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnFetchFirst(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_FetchFirst_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_FetchFirst_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_FetchLast(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->fetchLast();
	} else {
	return self->QSqlResult::fetchLast();
}
}

// Base class handler implementation
bool QSqlResult_QBaseFetchLast(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_FetchLast_IsBase(true);
	return vqsqlresult->fetchLast();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnFetchLast(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_FetchLast_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_FetchLast_Callback>(slot));
}
}

// Derived class handler implementation
int QSqlResult_Size(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->size();
	} else {
	return self->QSqlResult::size();
}
}

// Base class handler implementation
int QSqlResult_QBaseSize(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Size_IsBase(true);
	return vqsqlresult->size();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnSize(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Size_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_Size_Callback>(slot));
}
}

// Derived class handler implementation
int QSqlResult_NumRowsAffected(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->numRowsAffected();
	} else {
	return self->QSqlResult::numRowsAffected();
}
}

// Base class handler implementation
int QSqlResult_QBaseNumRowsAffected(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_NumRowsAffected_IsBase(true);
	return vqsqlresult->numRowsAffected();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnNumRowsAffected(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_NumRowsAffected_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_NumRowsAffected_Callback>(slot));
}
}

// Derived class handler implementation
QSqlRecord* QSqlResult_Record(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return new QSqlRecord(vqsqlresult->record());
	} else {
	return new QSqlRecord(self->QSqlResult::record());
}
}

// Base class handler implementation
QSqlRecord* QSqlResult_QBaseRecord(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Record_IsBase(true);
	return new QSqlRecord(vqsqlresult->record());
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnRecord(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Record_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_Record_Callback>(slot));
}
}

// Derived class handler implementation
QVariant* QSqlResult_LastInsertId(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return new QVariant(vqsqlresult->lastInsertId());
	} else {
	return new QVariant(self->QSqlResult::lastInsertId());
}
}

// Base class handler implementation
QVariant* QSqlResult_QBaseLastInsertId(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_LastInsertId_IsBase(true);
	return new QVariant(vqsqlresult->lastInsertId());
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnLastInsertId(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_LastInsertId_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_LastInsertId_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_VirtualHook(QSqlResult* self, int id, void* data) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->virtual_hook(id, data);
	} else {
	self->QSqlResult::virtual_hook(id, data);
}
}

// Base class handler implementation
void QSqlResult_QBaseVirtualHook(QSqlResult* self, int id, void* data) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_VirtualHook_IsBase(true);
	vqsqlresult->virtual_hook(id, data);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnVirtualHook(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_VirtualHook_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_VirtualHook_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_ExecBatch(QSqlResult* self, bool arrayBind) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->execBatch(arrayBind);
	} else {
	return self->QSqlResult::execBatch(arrayBind);
}
}

// Base class handler implementation
bool QSqlResult_QBaseExecBatch(QSqlResult* self, bool arrayBind) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_ExecBatch_IsBase(true);
	return vqsqlresult->execBatch(arrayBind);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnExecBatch(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_ExecBatch_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_ExecBatch_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_DetachFromResultSet(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->detachFromResultSet();
	} else {
	self->QSqlResult::detachFromResultSet();
}
}

// Base class handler implementation
void QSqlResult_QBaseDetachFromResultSet(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_DetachFromResultSet_IsBase(true);
	vqsqlresult->detachFromResultSet();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnDetachFromResultSet(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_DetachFromResultSet_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_DetachFromResultSet_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_SetNumericalPrecisionPolicy(QSqlResult* self, int policy) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->setNumericalPrecisionPolicy(static_cast<QSql::NumericalPrecisionPolicy>(policy));
	} else {
	self->QSqlResult::setNumericalPrecisionPolicy(static_cast<QSql::NumericalPrecisionPolicy>(policy));
}
}

// Base class handler implementation
void QSqlResult_QBaseSetNumericalPrecisionPolicy(QSqlResult* self, int policy) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetNumericalPrecisionPolicy_IsBase(true);
	vqsqlresult->setNumericalPrecisionPolicy(static_cast<QSql::NumericalPrecisionPolicy>(policy));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnSetNumericalPrecisionPolicy(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetNumericalPrecisionPolicy_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_SetNumericalPrecisionPolicy_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_NextResult(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->nextResult();
	} else {
	return self->QSqlResult::nextResult();
}
}

// Base class handler implementation
bool QSqlResult_QBaseNextResult(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_NextResult_IsBase(true);
	return vqsqlresult->nextResult();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnNextResult(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_NextResult_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_NextResult_Callback>(slot));
}
}

// Derived class handler implementation
int QSqlResult_At(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->at();
	} else {
	return self->QSqlResult::at();
}
}

// Base class handler implementation
int QSqlResult_QBaseAt(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_At_IsBase(true);
	return vqsqlresult->at();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnAt(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_At_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_At_Callback>(slot));
}
}

// Derived class handler implementation
libqt_string QSqlResult_LastQuery(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	QString _ret = vqsqlresult->lastQuery();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
	} else {
	QString _ret = self->QSqlResult::lastQuery();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Base class handler implementation
libqt_string QSqlResult_QBaseLastQuery(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_LastQuery_IsBase(true);
	QString _ret = vqsqlresult->lastQuery();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnLastQuery(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_LastQuery_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_LastQuery_Callback>(slot));
}
}

// Derived class handler implementation
QSqlError* QSqlResult_LastError(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return new QSqlError(vqsqlresult->lastError());
	} else {
	return new QSqlError(self->QSqlResult::lastError());
}
}

// Base class handler implementation
QSqlError* QSqlResult_QBaseLastError(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_LastError_IsBase(true);
	return new QSqlError(vqsqlresult->lastError());
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnLastError(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_LastError_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_LastError_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_IsValid(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->isValid();
	} else {
	return self->QSqlResult::isValid();
}
}

// Base class handler implementation
bool QSqlResult_QBaseIsValid(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsValid_IsBase(true);
	return vqsqlresult->isValid();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnIsValid(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsValid_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_IsValid_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_IsActive(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->isActive();
	} else {
	return self->QSqlResult::isActive();
}
}

// Base class handler implementation
bool QSqlResult_QBaseIsActive(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsActive_IsBase(true);
	return vqsqlresult->isActive();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnIsActive(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsActive_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_IsActive_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_IsSelect(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->isSelect();
	} else {
	return self->QSqlResult::isSelect();
}
}

// Base class handler implementation
bool QSqlResult_QBaseIsSelect(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsSelect_IsBase(true);
	return vqsqlresult->isSelect();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnIsSelect(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsSelect_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_IsSelect_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_IsForwardOnly(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->isForwardOnly();
	} else {
	return self->QSqlResult::isForwardOnly();
}
}

// Base class handler implementation
bool QSqlResult_QBaseIsForwardOnly(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsForwardOnly_IsBase(true);
	return vqsqlresult->isForwardOnly();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnIsForwardOnly(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsForwardOnly_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_IsForwardOnly_Callback>(slot));
}
}

// Derived class handler implementation
const QSqlDriver* QSqlResult_Driver(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->driver();
	} else {
	return self->QSqlResult::driver();
}
}

// Base class handler implementation
const QSqlDriver* QSqlResult_QBaseDriver(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Driver_IsBase(true);
	return vqsqlresult->driver();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnDriver(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Driver_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_Driver_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_AddBindValue(QSqlResult* self, const QVariant* val, int typeVal) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->addBindValue(*val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
	} else {
	self->QSqlResult::addBindValue(*val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
}
}

// Base class handler implementation
void QSqlResult_QBaseAddBindValue(QSqlResult* self, const QVariant* val, int typeVal) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_AddBindValue_IsBase(true);
	vqsqlresult->addBindValue(*val, static_cast<QFlags<QSql::ParamTypeFlag>>(typeVal));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnAddBindValue(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_AddBindValue_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_AddBindValue_Callback>(slot));
}
}

// Derived class handler implementation
QVariant* QSqlResult_BoundValue(const QSqlResult* self, const libqt_string placeholder) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return new QVariant(vqsqlresult->boundValue(QString::fromUtf8(placeholder.data, placeholder.len)));
	} else {
	return new QVariant(self->QSqlResult::boundValue(QString::fromUtf8(placeholder.data, placeholder.len)));
}
}

// Base class handler implementation
QVariant* QSqlResult_QBaseBoundValue(const QSqlResult* self, const libqt_string placeholder) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValue_IsBase(true);
	return new QVariant(vqsqlresult->boundValue(QString::fromUtf8(placeholder.data, placeholder.len)));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBoundValue(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValue_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BoundValue_Callback>(slot));
}
}

// Derived class handler implementation
QVariant* QSqlResult_BoundValue2(const QSqlResult* self, int pos) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return new QVariant(vqsqlresult->boundValue(pos));
	} else {
	return new QVariant(self->QSqlResult::boundValue(pos));
}
}

// Base class handler implementation
QVariant* QSqlResult_QBaseBoundValue2(const QSqlResult* self, int pos) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValue2_IsBase(true);
	return new QVariant(vqsqlresult->boundValue(pos));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBoundValue2(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValue2_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BoundValue2_Callback>(slot));
}
}

// Derived class handler implementation
int QSqlResult_BindValueType(const QSqlResult* self, const libqt_string placeholder) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->bindValueType(QString::fromUtf8(placeholder.data, placeholder.len));
	} else {
	return self->QSqlResult::bindValueType(QString::fromUtf8(placeholder.data, placeholder.len));
}
}

// Base class handler implementation
int QSqlResult_QBaseBindValueType(const QSqlResult* self, const libqt_string placeholder) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BindValueType_IsBase(true);
	return vqsqlresult->bindValueType(QString::fromUtf8(placeholder.data, placeholder.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBindValueType(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BindValueType_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BindValueType_Callback>(slot));
}
}

// Derived class handler implementation
int QSqlResult_BindValueType2(const QSqlResult* self, int pos) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->bindValueType(pos);
	} else {
	return self->QSqlResult::bindValueType(pos);
}
}

// Base class handler implementation
int QSqlResult_QBaseBindValueType2(const QSqlResult* self, int pos) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BindValueType2_IsBase(true);
	return vqsqlresult->bindValueType(pos);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBindValueType2(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BindValueType2_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BindValueType2_Callback>(slot));
}
}

// Derived class handler implementation
int QSqlResult_BoundValueCount(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->boundValueCount();
	} else {
	return self->QSqlResult::boundValueCount();
}
}

// Base class handler implementation
int QSqlResult_QBaseBoundValueCount(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValueCount_IsBase(true);
	return vqsqlresult->boundValueCount();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBoundValueCount(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValueCount_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BoundValueCount_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QSqlResult_BoundValues(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	auto _ret = vqsqlresult->boundValues();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
	} else {
	auto _ret = self->QSqlResult::boundValues();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Base class handler implementation
libqt_list QSqlResult_QBaseBoundValues(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValues_IsBase(true);
	auto _ret = vqsqlresult->boundValues();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBoundValues(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValues_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BoundValues_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QSqlResult_BoundValues2(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	auto _ret = vqsqlresult->boundValues();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
	} else {
	auto _ret = self->QSqlResult::boundValues();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Base class handler implementation
libqt_list QSqlResult_QBaseBoundValues2(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValues2_IsBase(true);
	auto _ret = vqsqlresult->boundValues();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBoundValues2(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValues2_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BoundValues2_Callback>(slot));
}
}

// Derived class handler implementation
libqt_string QSqlResult_ExecutedQuery(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	QString _ret = vqsqlresult->executedQuery();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
	} else {
	QString _ret = self->QSqlResult::executedQuery();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Base class handler implementation
libqt_string QSqlResult_QBaseExecutedQuery(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_ExecutedQuery_IsBase(true);
	QString _ret = vqsqlresult->executedQuery();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnExecutedQuery(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_ExecutedQuery_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_ExecutedQuery_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QSqlResult_BoundValueNames(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	auto _ret = vqsqlresult->boundValueNames();
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
	} else {
	auto _ret = self->QSqlResult::boundValueNames();
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
}

// Base class handler implementation
libqt_list QSqlResult_QBaseBoundValueNames(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValueNames_IsBase(true);
	auto _ret = vqsqlresult->boundValueNames();
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
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBoundValueNames(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValueNames_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BoundValueNames_Callback>(slot));
}
}

// Derived class handler implementation
libqt_string QSqlResult_BoundValueName(const QSqlResult* self, int pos) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	QString _ret = vqsqlresult->boundValueName(pos);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
	} else {
	QString _ret = self->QSqlResult::boundValueName(pos);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Base class handler implementation
libqt_string QSqlResult_QBaseBoundValueName(const QSqlResult* self, int pos) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValueName_IsBase(true);
	QString _ret = vqsqlresult->boundValueName(pos);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBoundValueName(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValueName_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BoundValueName_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_Clear(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->clear();
	} else {
	self->QSqlResult::clear();
}
}

// Base class handler implementation
void QSqlResult_QBaseClear(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Clear_IsBase(true);
	vqsqlresult->clear();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnClear(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Clear_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_Clear_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_HasOutValues(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->hasOutValues();
	} else {
	return self->QSqlResult::hasOutValues();
}
}

// Base class handler implementation
bool QSqlResult_QBaseHasOutValues(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_HasOutValues_IsBase(true);
	return vqsqlresult->hasOutValues();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnHasOutValues(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_HasOutValues_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_HasOutValues_Callback>(slot));
}
}

// Derived class handler implementation
int QSqlResult_BindingSyntax(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->bindingSyntax();
	} else {
	return self->QSqlResult::bindingSyntax();
}
}

// Base class handler implementation
int QSqlResult_QBaseBindingSyntax(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BindingSyntax_IsBase(true);
	return vqsqlresult->bindingSyntax();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBindingSyntax(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BindingSyntax_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BindingSyntax_Callback>(slot));
}
}

// Derived class handler implementation
int QSqlResult_NumericalPrecisionPolicy(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->numericalPrecisionPolicy();
	} else {
	return self->QSqlResult::numericalPrecisionPolicy();
}
}

// Base class handler implementation
int QSqlResult_QBaseNumericalPrecisionPolicy(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_NumericalPrecisionPolicy_IsBase(true);
	return vqsqlresult->numericalPrecisionPolicy();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnNumericalPrecisionPolicy(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_NumericalPrecisionPolicy_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_NumericalPrecisionPolicy_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_SetPositionalBindingEnabled(QSqlResult* self, bool enable) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->setPositionalBindingEnabled(enable);
	} else {
	self->QSqlResult::setPositionalBindingEnabled(enable);
}
}

// Base class handler implementation
void QSqlResult_QBaseSetPositionalBindingEnabled(QSqlResult* self, bool enable) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetPositionalBindingEnabled_IsBase(true);
	vqsqlresult->setPositionalBindingEnabled(enable);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnSetPositionalBindingEnabled(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_SetPositionalBindingEnabled_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_SetPositionalBindingEnabled_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlResult_IsPositionalBindingEnabled(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	return vqsqlresult->isPositionalBindingEnabled();
	} else {
	return self->QSqlResult::isPositionalBindingEnabled();
}
}

// Base class handler implementation
bool QSqlResult_QBaseIsPositionalBindingEnabled(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsPositionalBindingEnabled_IsBase(true);
	return vqsqlresult->isPositionalBindingEnabled();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnIsPositionalBindingEnabled(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_IsPositionalBindingEnabled_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_IsPositionalBindingEnabled_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlResult_ResetBindCount(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	vqsqlresult->resetBindCount();
	} else {
	self->QSqlResult::resetBindCount();
}
}

// Base class handler implementation
void QSqlResult_QBaseResetBindCount(QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_ResetBindCount_IsBase(true);
	vqsqlresult->resetBindCount();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnResetBindCount(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_ResetBindCount_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_ResetBindCount_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QSqlResult_BoundValues1(QSqlResult* self, Disambiguated_t* param1) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	auto _ret = vqsqlresult->boundValues(*param1);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
	} else {
	auto _ret = self->QSqlResult::boundValues(*param1);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Base class handler implementation
libqt_list QSqlResult_QBaseBoundValues1(QSqlResult* self, Disambiguated_t* param1) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValues1_IsBase(true);
	auto _ret = vqsqlresult->boundValues(*param1);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBoundValues1(QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValues1_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BoundValues1_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QSqlResult_BoundValues12(const QSqlResult* self, Disambiguated_t* param1) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
	auto _ret = vqsqlresult->boundValues(*param1);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
	} else {
	auto _ret = self->QSqlResult::boundValues(*param1);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Base class handler implementation
libqt_list QSqlResult_QBaseBoundValues12(const QSqlResult* self, Disambiguated_t* param1) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValues12_IsBase(true);
	auto _ret = vqsqlresult->boundValues(*param1);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnBoundValues12(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_BoundValues12_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_BoundValues12_Callback>(slot));
}
}

void QSqlResult_Delete(QSqlResult* self) {
    delete self;
}

