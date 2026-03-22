#include <QObject>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlField>
#include <QSqlIndex>
#include <QSqlRecord>
#include <QSqlResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsqldriver.h>
#include "libqsqldriver.h"
#include "libqsqldriver.hxx"

QSqlDriver* QSqlDriver_new() {
	 return new VirtualQSqlDriver();
}

QSqlDriver* QSqlDriver_new2(QObject* parent) {
	 return new VirtualQSqlDriver(parent);
}

libqt_string QSqlDriver_Tr(const char* s) {
	QString _ret = QSqlDriver::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QSqlDriver_IsOpen(const QSqlDriver* self) {
	return self->isOpen();
}

bool QSqlDriver_IsOpenError(const QSqlDriver* self) {
	return self->isOpenError();
}

bool QSqlDriver_BeginTransaction(QSqlDriver* self) {
	return self->beginTransaction();
}

bool QSqlDriver_CommitTransaction(QSqlDriver* self) {
	return self->commitTransaction();
}

bool QSqlDriver_RollbackTransaction(QSqlDriver* self) {
	return self->rollbackTransaction();
}

libqt_list QSqlDriver_Tables(const QSqlDriver* self, int tableType) {
	return self->tables(static_cast<QSql::TableType>(tableType));
}

QSqlIndex* QSqlDriver_PrimaryIndex(const QSqlDriver* self, const libqt_string tableName) {
	return new QSqlIndex(self->primaryIndex(QString::fromUtf8(tableName.data, tableName.len)));
}

QSqlRecord* QSqlDriver_Record(const QSqlDriver* self, const libqt_string tableName) {
	return new QSqlRecord(self->record(QString::fromUtf8(tableName.data, tableName.len)));
}

libqt_string QSqlDriver_FormatValue(const QSqlDriver* self, const QSqlField* field, bool trimStrings) {
	QString _ret = self->formatValue(*field, trimStrings);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlDriver_EscapeIdentifier(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
	QString _ret = self->escapeIdentifier(QString::fromUtf8(identifier.data, identifier.len), static_cast<QSqlDriver::IdentifierType>(typeVal));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlDriver_SqlStatement(const QSqlDriver* self, int typeVal, const libqt_string tableName, const QSqlRecord* rec, bool preparedStatement) {
	QString _ret = self->sqlStatement(static_cast<QSqlDriver::StatementType>(typeVal), QString::fromUtf8(tableName.data, tableName.len), *rec, preparedStatement);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSqlError* QSqlDriver_LastError(const QSqlDriver* self) {
	return new QSqlError(self->lastError());
}

QVariant* QSqlDriver_Handle(const QSqlDriver* self) {
	return new QVariant(self->handle());
}

bool QSqlDriver_HasFeature(const QSqlDriver* self, int f) {
	return self->hasFeature(static_cast<QSqlDriver::DriverFeature>(f));
}

void QSqlDriver_Close(QSqlDriver* self) {
	self->close();
}

QSqlResult* QSqlDriver_CreateResult(const QSqlDriver* self) {
	return self->createResult();
}

bool QSqlDriver_Open(QSqlDriver* self, const libqt_string db, const libqt_string user, const libqt_string password, const libqt_string host, int port, const libqt_string connOpts) {
	return self->open(QString::fromUtf8(db.data, db.len), QString::fromUtf8(user.data, user.len), QString::fromUtf8(password.data, password.len), QString::fromUtf8(host.data, host.len), port, QString::fromUtf8(connOpts.data, connOpts.len));
}

bool QSqlDriver_SubscribeToNotification(QSqlDriver* self, const libqt_string name) {
	return self->subscribeToNotification(QString::fromUtf8(name.data, name.len));
}

bool QSqlDriver_UnsubscribeFromNotification(QSqlDriver* self, const libqt_string name) {
	return self->unsubscribeFromNotification(QString::fromUtf8(name.data, name.len));
}

libqt_list QSqlDriver_SubscribedToNotifications(const QSqlDriver* self) {
	return self->subscribedToNotifications();
}

bool QSqlDriver_IsIdentifierEscaped(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
	return self->isIdentifierEscaped(QString::fromUtf8(identifier.data, identifier.len), static_cast<QSqlDriver::IdentifierType>(typeVal));
}

libqt_string QSqlDriver_StripDelimiters(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
	QString _ret = self->stripDelimiters(QString::fromUtf8(identifier.data, identifier.len), static_cast<QSqlDriver::IdentifierType>(typeVal));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSqlDriver_SetNumericalPrecisionPolicy(QSqlDriver* self, int precisionPolicy) {
	self->setNumericalPrecisionPolicy(static_cast<QSql::NumericalPrecisionPolicy>(precisionPolicy));
}

int QSqlDriver_NumericalPrecisionPolicy(const QSqlDriver* self) {
	return self->numericalPrecisionPolicy();
}

int QSqlDriver_DbmsType(const QSqlDriver* self) {
	return self->dbmsType();
}

int QSqlDriver_MaximumIdentifierLength(const QSqlDriver* self, int typeVal) {
	return self->maximumIdentifierLength(static_cast<QSqlDriver::IdentifierType>(typeVal));
}

bool QSqlDriver_CancelQuery(QSqlDriver* self) {
	return self->cancelQuery();
}

void QSqlDriver_Notification(QSqlDriver* self, const libqt_string name, int source, const QVariant* payload) {
	self->notification(QString::fromUtf8(name.data, name.len), static_cast<QSqlDriver::NotificationSource>(source), *payload);
}

void QSqlDriver_Connect_Notification(QSqlDriver* self, intptr_t slot) {
    void (*slotFunc)(QSqlDriver*, const char*, int, const QVariant*) = reinterpret_cast<void (*)(QSqlDriver*, const char*, int, const QVariant*)>(slot);
    QSqlDriver::connect(self, &QSqlDriver::notification, [self, slotFunc](const QString& name, QSqlDriver::NotificationSource source, const QVariant& payload) {
	slotFunc(self, name, source, payload);
    });
}

libqt_string QSqlDriver_Tr2(const char* s, const char* c) {
	QString _ret = QSqlDriver::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlDriver_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSqlDriver::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
bool QSqlDriver_QBaseIsOpen(const QSqlDriver* self) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_IsOpen_IsBase(true);
	return vqsqldriver->isOpen();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnIsOpen(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_IsOpen_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_IsOpen_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlDriver_QBaseBeginTransaction(QSqlDriver* self) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_BeginTransaction_IsBase(true);
	return vqsqldriver->beginTransaction();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnBeginTransaction(QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_BeginTransaction_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_BeginTransaction_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlDriver_QBaseCommitTransaction(QSqlDriver* self) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_CommitTransaction_IsBase(true);
	return vqsqldriver->commitTransaction();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnCommitTransaction(QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_CommitTransaction_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_CommitTransaction_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlDriver_QBaseRollbackTransaction(QSqlDriver* self) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_RollbackTransaction_IsBase(true);
	return vqsqldriver->rollbackTransaction();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnRollbackTransaction(QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_RollbackTransaction_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_RollbackTransaction_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QSqlDriver_QBaseTables(const QSqlDriver* self, int tableType) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_Tables_IsBase(true);
	return vqsqldriver->tables(static_cast<QSql::TableType>(tableType));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnTables(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_Tables_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Tables_Callback>(slot));
}
}

// Base class handler implementation
QSqlIndex* QSqlDriver_QBasePrimaryIndex(const QSqlDriver* self, const libqt_string tableName) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_PrimaryIndex_IsBase(true);
	return new QSqlIndex(vqsqldriver->primaryIndex(QString::fromUtf8(tableName.data, tableName.len)));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnPrimaryIndex(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_PrimaryIndex_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_PrimaryIndex_Callback>(slot));
}
}

// Base class handler implementation
QSqlRecord* QSqlDriver_QBaseRecord(const QSqlDriver* self, const libqt_string tableName) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_Record_IsBase(true);
	return new QSqlRecord(vqsqldriver->record(QString::fromUtf8(tableName.data, tableName.len)));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnRecord(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_Record_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Record_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QSqlDriver_QBaseFormatValue(const QSqlDriver* self, const QSqlField* field, bool trimStrings) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_FormatValue_IsBase(true);
	QString _ret = vqsqldriver->formatValue(*field, trimStrings);
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
void QSqlDriver_OnFormatValue(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_FormatValue_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_FormatValue_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QSqlDriver_QBaseEscapeIdentifier(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_EscapeIdentifier_IsBase(true);
	QString _ret = vqsqldriver->escapeIdentifier(QString::fromUtf8(identifier.data, identifier.len), static_cast<QSqlDriver::IdentifierType>(typeVal));
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
void QSqlDriver_OnEscapeIdentifier(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_EscapeIdentifier_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_EscapeIdentifier_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QSqlDriver_QBaseSqlStatement(const QSqlDriver* self, int typeVal, const libqt_string tableName, const QSqlRecord* rec, bool preparedStatement) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SqlStatement_IsBase(true);
	QString _ret = vqsqldriver->sqlStatement(static_cast<QSqlDriver::StatementType>(typeVal), QString::fromUtf8(tableName.data, tableName.len), *rec, preparedStatement);
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
void QSqlDriver_OnSqlStatement(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SqlStatement_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SqlStatement_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QSqlDriver_QBaseHandle(const QSqlDriver* self) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_Handle_IsBase(true);
	return new QVariant(vqsqldriver->handle());
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnHandle(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_Handle_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Handle_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlDriver_QBaseHasFeature(const QSqlDriver* self, int f) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_HasFeature_IsBase(true);
	return vqsqldriver->hasFeature(static_cast<QSqlDriver::DriverFeature>(f));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnHasFeature(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_HasFeature_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_HasFeature_Callback>(slot));
}
}

// Base class handler implementation
void QSqlDriver_QBaseClose(QSqlDriver* self) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_Close_IsBase(true);
	vqsqldriver->close();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnClose(QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_Close_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Close_Callback>(slot));
}
}

// Base class handler implementation
QSqlResult* QSqlDriver_QBaseCreateResult(const QSqlDriver* self) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_CreateResult_IsBase(true);
	return vqsqldriver->createResult();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnCreateResult(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_CreateResult_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_CreateResult_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlDriver_QBaseOpen(QSqlDriver* self, const libqt_string db, const libqt_string user, const libqt_string password, const libqt_string host, int port, const libqt_string connOpts) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_Open_IsBase(true);
	return vqsqldriver->open(QString::fromUtf8(db.data, db.len), QString::fromUtf8(user.data, user.len), QString::fromUtf8(password.data, password.len), QString::fromUtf8(host.data, host.len), port, QString::fromUtf8(connOpts.data, connOpts.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnOpen(QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_Open_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_Open_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlDriver_QBaseSubscribeToNotification(QSqlDriver* self, const libqt_string name) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SubscribeToNotification_IsBase(true);
	return vqsqldriver->subscribeToNotification(QString::fromUtf8(name.data, name.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnSubscribeToNotification(QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SubscribeToNotification_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SubscribeToNotification_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlDriver_QBaseUnsubscribeFromNotification(QSqlDriver* self, const libqt_string name) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_UnsubscribeFromNotification_IsBase(true);
	return vqsqldriver->unsubscribeFromNotification(QString::fromUtf8(name.data, name.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnUnsubscribeFromNotification(QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_UnsubscribeFromNotification_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_UnsubscribeFromNotification_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QSqlDriver_QBaseSubscribedToNotifications(const QSqlDriver* self) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SubscribedToNotifications_IsBase(true);
	return vqsqldriver->subscribedToNotifications();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnSubscribedToNotifications(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SubscribedToNotifications_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SubscribedToNotifications_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlDriver_QBaseIsIdentifierEscaped(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_IsIdentifierEscaped_IsBase(true);
	return vqsqldriver->isIdentifierEscaped(QString::fromUtf8(identifier.data, identifier.len), static_cast<QSqlDriver::IdentifierType>(typeVal));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnIsIdentifierEscaped(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_IsIdentifierEscaped_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_IsIdentifierEscaped_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QSqlDriver_QBaseStripDelimiters(const QSqlDriver* self, const libqt_string identifier, int typeVal) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_StripDelimiters_IsBase(true);
	QString _ret = vqsqldriver->stripDelimiters(QString::fromUtf8(identifier.data, identifier.len), static_cast<QSqlDriver::IdentifierType>(typeVal));
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
void QSqlDriver_OnStripDelimiters(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_StripDelimiters_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_StripDelimiters_Callback>(slot));
}
}

// Base class handler implementation
int QSqlDriver_QBaseMaximumIdentifierLength(const QSqlDriver* self, int typeVal) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_MaximumIdentifierLength_IsBase(true);
	return vqsqldriver->maximumIdentifierLength(static_cast<QSqlDriver::IdentifierType>(typeVal));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnMaximumIdentifierLength(const QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<const VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_MaximumIdentifierLength_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_MaximumIdentifierLength_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlDriver_QBaseCancelQuery(QSqlDriver* self) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_CancelQuery_IsBase(true);
	return vqsqldriver->cancelQuery();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnCancelQuery(QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_CancelQuery_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_CancelQuery_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlDriver_SetOpen(QSqlDriver* self, bool o) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
	vqsqldriver->setOpen(o);
	} else {
	self->QSqlDriver::setOpen(o);
}
}

// Base class handler implementation
void QSqlDriver_QBaseSetOpen(QSqlDriver* self, bool o) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SetOpen_IsBase(true);
	vqsqldriver->setOpen(o);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnSetOpen(QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SetOpen_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SetOpen_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlDriver_SetOpenError(QSqlDriver* self, bool e) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
	vqsqldriver->setOpenError(e);
	} else {
	self->QSqlDriver::setOpenError(e);
}
}

// Base class handler implementation
void QSqlDriver_QBaseSetOpenError(QSqlDriver* self, bool e) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SetOpenError_IsBase(true);
	vqsqldriver->setOpenError(e);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnSetOpenError(QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SetOpenError_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SetOpenError_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlDriver_SetLastError(QSqlDriver* self, const QSqlError* e) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
	vqsqldriver->setLastError(*e);
	} else {
	self->QSqlDriver::setLastError(*e);
}
}

// Base class handler implementation
void QSqlDriver_QBaseSetLastError(QSqlDriver* self, const QSqlError* e) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SetLastError_IsBase(true);
	vqsqldriver->setLastError(*e);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriver_OnSetLastError(QSqlDriver* self, intptr_t slot) {
	auto* vqsqldriver = dynamic_cast<VirtualQSqlDriver*>(self);
	if (vqsqldriver && vqsqldriver->isVirtualQSqlDriver) {
vqsqldriver->setQSqlDriver_SetLastError_Callback(reinterpret_cast<VirtualQSqlDriver::QSqlDriver_SetLastError_Callback>(slot));
}
}

void QSqlDriver_Delete(QSqlDriver* self) {
    delete self;
}

