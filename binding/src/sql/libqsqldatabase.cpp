#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlDriverCreatorBase>
#include <QSqlError>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QThread>
#include <qsqldatabase.h>
#include "libqsqldatabase.h"
#include "libqsqldatabase.hxx"

QSqlDriverCreatorBase* QSqlDriverCreatorBase_new() {
	 return new VirtualQSqlDriverCreatorBase();
}

QSqlDriverCreatorBase* QSqlDriverCreatorBase_new2(const QSqlDriverCreatorBase* param1) {
	 return new VirtualQSqlDriverCreatorBase(*param1);
}

QSqlDriver* QSqlDriverCreatorBase_CreateObject(const QSqlDriverCreatorBase* self) {
	return self->createObject();
}

void QSqlDriverCreatorBase_OperatorAssign(QSqlDriverCreatorBase* self, const QSqlDriverCreatorBase* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
QSqlDriver* QSqlDriverCreatorBase_QBaseCreateObject(const QSqlDriverCreatorBase* self) {
	auto* vqsqldrivercreatorbase = dynamic_cast<const VirtualQSqlDriverCreatorBase*>(self);
	if (vqsqldrivercreatorbase && vqsqldrivercreatorbase->isVirtualQSqlDriverCreatorBase) {
vqsqldrivercreatorbase->setQSqlDriverCreatorBase_CreateObject_IsBase(true);
	return vqsqldrivercreatorbase->createObject();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlDriverCreatorBase_OnCreateObject(const QSqlDriverCreatorBase* self, intptr_t slot) {
	auto* vqsqldrivercreatorbase = dynamic_cast<const VirtualQSqlDriverCreatorBase*>(self);
	if (vqsqldrivercreatorbase && vqsqldrivercreatorbase->isVirtualQSqlDriverCreatorBase) {
vqsqldrivercreatorbase->setQSqlDriverCreatorBase_CreateObject_Callback(reinterpret_cast<VirtualQSqlDriverCreatorBase::QSqlDriverCreatorBase_CreateObject_Callback>(slot));
}
}

void QSqlDriverCreatorBase_Delete(QSqlDriverCreatorBase* self) {
    delete self;
}

QSqlDatabase* QSqlDatabase_new() {
	 return new QSqlDatabase();
}

QSqlDatabase* QSqlDatabase_new2(const QSqlDatabase* other) {
	 return new QSqlDatabase(*other);
}

void QSqlDatabase_OperatorAssign(QSqlDatabase* self, const QSqlDatabase* other) {
	self->operator=(*other);
}

bool QSqlDatabase_Open(QSqlDatabase* self) {
	return self->open();
}

bool QSqlDatabase_Open2(QSqlDatabase* self, const libqt_string user, const libqt_string password) {
	return self->open(QString::fromUtf8(user.data, user.len), QString::fromUtf8(password.data, password.len));
}

void QSqlDatabase_Close(QSqlDatabase* self) {
	self->close();
}

bool QSqlDatabase_IsOpen(const QSqlDatabase* self) {
	return self->isOpen();
}

bool QSqlDatabase_IsOpenError(const QSqlDatabase* self) {
	return self->isOpenError();
}

libqt_list QSqlDatabase_Tables(const QSqlDatabase* self) {
	auto _ret = self->tables();
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

QSqlIndex* QSqlDatabase_PrimaryIndex(const QSqlDatabase* self, const libqt_string tablename) {
	return new QSqlIndex(self->primaryIndex(QString::fromUtf8(tablename.data, tablename.len)));
}

QSqlRecord* QSqlDatabase_Record(const QSqlDatabase* self, const libqt_string tablename) {
	return new QSqlRecord(self->record(QString::fromUtf8(tablename.data, tablename.len)));
}

QSqlQuery* QSqlDatabase_Exec(const QSqlDatabase* self) {
	return new QSqlQuery(self->exec());
}

QSqlError* QSqlDatabase_LastError(const QSqlDatabase* self) {
	return new QSqlError(self->lastError());
}

bool QSqlDatabase_IsValid(const QSqlDatabase* self) {
	return self->isValid();
}

bool QSqlDatabase_Transaction(QSqlDatabase* self) {
	return self->transaction();
}

bool QSqlDatabase_Commit(QSqlDatabase* self) {
	return self->commit();
}

bool QSqlDatabase_Rollback(QSqlDatabase* self) {
	return self->rollback();
}

void QSqlDatabase_SetDatabaseName(QSqlDatabase* self, const libqt_string name) {
	self->setDatabaseName(QString::fromUtf8(name.data, name.len));
}

void QSqlDatabase_SetUserName(QSqlDatabase* self, const libqt_string name) {
	self->setUserName(QString::fromUtf8(name.data, name.len));
}

void QSqlDatabase_SetPassword(QSqlDatabase* self, const libqt_string password) {
	self->setPassword(QString::fromUtf8(password.data, password.len));
}

void QSqlDatabase_SetHostName(QSqlDatabase* self, const libqt_string host) {
	self->setHostName(QString::fromUtf8(host.data, host.len));
}

void QSqlDatabase_SetPort(QSqlDatabase* self, int p) {
	self->setPort(p);
}

void QSqlDatabase_SetConnectOptions(QSqlDatabase* self) {
	self->setConnectOptions();
}

libqt_string QSqlDatabase_DatabaseName(const QSqlDatabase* self) {
	QString _ret = self->databaseName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlDatabase_UserName(const QSqlDatabase* self) {
	QString _ret = self->userName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlDatabase_Password(const QSqlDatabase* self) {
	QString _ret = self->password();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlDatabase_HostName(const QSqlDatabase* self) {
	QString _ret = self->hostName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlDatabase_DriverName(const QSqlDatabase* self) {
	QString _ret = self->driverName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QSqlDatabase_Port(const QSqlDatabase* self) {
	return self->port();
}

libqt_string QSqlDatabase_ConnectOptions(const QSqlDatabase* self) {
	QString _ret = self->connectOptions();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlDatabase_ConnectionName(const QSqlDatabase* self) {
	QString _ret = self->connectionName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSqlDatabase_SetNumericalPrecisionPolicy(QSqlDatabase* self, int precisionPolicy) {
	self->setNumericalPrecisionPolicy(static_cast<QSql::NumericalPrecisionPolicy>(precisionPolicy));
}

int QSqlDatabase_NumericalPrecisionPolicy(const QSqlDatabase* self) {
	return self->numericalPrecisionPolicy();
}

bool QSqlDatabase_MoveToThread(QSqlDatabase* self, QThread* targetThread) {
	return self->moveToThread(targetThread);
}

QThread* QSqlDatabase_Thread(const QSqlDatabase* self) {
	return self->thread();
}

QSqlDriver* QSqlDatabase_Driver(const QSqlDatabase* self) {
	return self->driver();
}

QSqlDatabase* QSqlDatabase_AddDatabase(const libqt_string typeVal) {
	return new QSqlDatabase(QSqlDatabase::addDatabase(QString::fromUtf8(typeVal.data, typeVal.len)));
}

QSqlDatabase* QSqlDatabase_AddDatabase2(QSqlDriver* driver) {
	return new QSqlDatabase(QSqlDatabase::addDatabase(driver));
}

QSqlDatabase* QSqlDatabase_CloneDatabase(const QSqlDatabase* other, const libqt_string connectionName) {
	return new QSqlDatabase(QSqlDatabase::cloneDatabase(*other, QString::fromUtf8(connectionName.data, connectionName.len)));
}

QSqlDatabase* QSqlDatabase_CloneDatabase2(const libqt_string other, const libqt_string connectionName) {
	return new QSqlDatabase(QSqlDatabase::cloneDatabase(QString::fromUtf8(other.data, other.len), QString::fromUtf8(connectionName.data, connectionName.len)));
}

QSqlDatabase* QSqlDatabase_Database() {
	return new QSqlDatabase(QSqlDatabase::database());
}

void QSqlDatabase_RemoveDatabase(const libqt_string connectionName) {
	QSqlDatabase::removeDatabase(QString::fromUtf8(connectionName.data, connectionName.len));
}

bool QSqlDatabase_Contains() {
	return QSqlDatabase::contains();
}

libqt_list QSqlDatabase_Drivers() {
	auto _ret = QSqlDatabase::drivers();
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

libqt_list QSqlDatabase_ConnectionNames() {
	auto _ret = QSqlDatabase::connectionNames();
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

void QSqlDatabase_RegisterSqlDriver(const libqt_string name, QSqlDriverCreatorBase* creator) {
	QSqlDatabase::registerSqlDriver(QString::fromUtf8(name.data, name.len), creator);
}

bool QSqlDatabase_IsDriverAvailable(const libqt_string name) {
	return QSqlDatabase::isDriverAvailable(QString::fromUtf8(name.data, name.len));
}

libqt_list QSqlDatabase_Tables1(const QSqlDatabase* self, int typeVal) {
	auto _ret = self->tables(static_cast<QSql::TableType>(typeVal));
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

QSqlQuery* QSqlDatabase_Exec1(const QSqlDatabase* self, const libqt_string query) {
	return new QSqlQuery(self->exec(QString::fromUtf8(query.data, query.len)));
}

void QSqlDatabase_SetConnectOptions1(QSqlDatabase* self, const libqt_string options) {
	self->setConnectOptions(QString::fromUtf8(options.data, options.len));
}

QSqlDatabase* QSqlDatabase_AddDatabase22(const libqt_string typeVal, const libqt_string connectionName) {
	return new QSqlDatabase(QSqlDatabase::addDatabase(QString::fromUtf8(typeVal.data, typeVal.len), QString::fromUtf8(connectionName.data, connectionName.len)));
}

QSqlDatabase* QSqlDatabase_AddDatabase23(QSqlDriver* driver, const libqt_string connectionName) {
	return new QSqlDatabase(QSqlDatabase::addDatabase(driver, QString::fromUtf8(connectionName.data, connectionName.len)));
}

QSqlDatabase* QSqlDatabase_Database1(const libqt_string connectionName) {
	return new QSqlDatabase(QSqlDatabase::database(QString::fromUtf8(connectionName.data, connectionName.len)));
}

QSqlDatabase* QSqlDatabase_Database2(const libqt_string connectionName, bool open) {
	return new QSqlDatabase(QSqlDatabase::database(QString::fromUtf8(connectionName.data, connectionName.len), open));
}

bool QSqlDatabase_Contains1(const libqt_string connectionName) {
	return QSqlDatabase::contains(QString::fromUtf8(connectionName.data, connectionName.len));
}

void QSqlDatabase_Delete(QSqlDatabase* self) {
    delete self;
}

