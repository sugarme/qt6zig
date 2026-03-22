#pragma once
#ifndef QSQLDRIVER_H_C_LIBVIRTUAL
#define QSQLDRIVER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSqlDriver so that we can call protected methods
class VirtualQSqlDriver : public QSqlDriver {

public:
	// Virtual class boolean flag
	bool isVirtualQSqlDriver= true;

	// Virtual class public types (including callbacks)
	using QSqlDriver_IsOpen_Callback = bool (*)();
	using QSqlDriver_BeginTransaction_Callback = bool (*)();
	using QSqlDriver_CommitTransaction_Callback = bool (*)();
	using QSqlDriver_RollbackTransaction_Callback = bool (*)();
	using QSqlDriver_Tables_Callback = libqt_list (*)(const QSqlDriver*, int);
	using QSqlDriver_PrimaryIndex_Callback = QSqlIndex* (*)(const QSqlDriver*, libqt_string);
	using QSqlDriver_Record_Callback = QSqlRecord* (*)(const QSqlDriver*, libqt_string);
	using QSqlDriver_FormatValue_Callback = const char* (*)(const QSqlDriver*, const QSqlField*, bool);
	using QSqlDriver_EscapeIdentifier_Callback = const char* (*)(const QSqlDriver*, libqt_string, int);
	using QSqlDriver_SqlStatement_Callback = const char* (*)(const QSqlDriver*, int, libqt_string, const QSqlRecord*, bool);
	using QSqlDriver_Handle_Callback = QVariant* (*)();
	using QSqlDriver_HasFeature_Callback = bool (*)(const QSqlDriver*, int);
	using QSqlDriver_Close_Callback = void (*)();
	using QSqlDriver_CreateResult_Callback = QSqlResult* (*)();
	using QSqlDriver_Open_Callback = bool (*)(QSqlDriver*, libqt_string, libqt_string, libqt_string, libqt_string, int, libqt_string);
	using QSqlDriver_SubscribeToNotification_Callback = bool (*)(QSqlDriver*, libqt_string);
	using QSqlDriver_UnsubscribeFromNotification_Callback = bool (*)(QSqlDriver*, libqt_string);
	using QSqlDriver_SubscribedToNotifications_Callback = libqt_list (*)();
	using QSqlDriver_IsIdentifierEscaped_Callback = bool (*)(const QSqlDriver*, libqt_string, int);
	using QSqlDriver_StripDelimiters_Callback = const char* (*)(const QSqlDriver*, libqt_string, int);
	using QSqlDriver_MaximumIdentifierLength_Callback = int (*)(const QSqlDriver*, int);
	using QSqlDriver_CancelQuery_Callback = bool (*)();
	using QSqlDriver_SetOpen_Callback = void (*)(QSqlDriver*, bool);
	using QSqlDriver_SetOpenError_Callback = void (*)(QSqlDriver*, bool);
	using QSqlDriver_SetLastError_Callback = void (*)(QSqlDriver*, const QSqlError*);

protected:
	// Instance callback storage
	mutable QSqlDriver_IsOpen_Callback qsqldriver_isopen_callback = nullptr;
	mutable QSqlDriver_BeginTransaction_Callback qsqldriver_begintransaction_callback = nullptr;
	mutable QSqlDriver_CommitTransaction_Callback qsqldriver_committransaction_callback = nullptr;
	mutable QSqlDriver_RollbackTransaction_Callback qsqldriver_rollbacktransaction_callback = nullptr;
	mutable QSqlDriver_Tables_Callback qsqldriver_tables_callback = nullptr;
	mutable QSqlDriver_PrimaryIndex_Callback qsqldriver_primaryindex_callback = nullptr;
	mutable QSqlDriver_Record_Callback qsqldriver_record_callback = nullptr;
	mutable QSqlDriver_FormatValue_Callback qsqldriver_formatvalue_callback = nullptr;
	mutable QSqlDriver_EscapeIdentifier_Callback qsqldriver_escapeidentifier_callback = nullptr;
	mutable QSqlDriver_SqlStatement_Callback qsqldriver_sqlstatement_callback = nullptr;
	mutable QSqlDriver_Handle_Callback qsqldriver_handle_callback = nullptr;
	mutable QSqlDriver_HasFeature_Callback qsqldriver_hasfeature_callback = nullptr;
	mutable QSqlDriver_Close_Callback qsqldriver_close_callback = nullptr;
	mutable QSqlDriver_CreateResult_Callback qsqldriver_createresult_callback = nullptr;
	mutable QSqlDriver_Open_Callback qsqldriver_open_callback = nullptr;
	mutable QSqlDriver_SubscribeToNotification_Callback qsqldriver_subscribetonotification_callback = nullptr;
	mutable QSqlDriver_UnsubscribeFromNotification_Callback qsqldriver_unsubscribefromnotification_callback = nullptr;
	mutable QSqlDriver_SubscribedToNotifications_Callback qsqldriver_subscribedtonotifications_callback = nullptr;
	mutable QSqlDriver_IsIdentifierEscaped_Callback qsqldriver_isidentifierescaped_callback = nullptr;
	mutable QSqlDriver_StripDelimiters_Callback qsqldriver_stripdelimiters_callback = nullptr;
	mutable QSqlDriver_MaximumIdentifierLength_Callback qsqldriver_maximumidentifierlength_callback = nullptr;
	mutable QSqlDriver_CancelQuery_Callback qsqldriver_cancelquery_callback = nullptr;
	mutable QSqlDriver_SetOpen_Callback qsqldriver_setopen_callback = nullptr;
	mutable QSqlDriver_SetOpenError_Callback qsqldriver_setopenerror_callback = nullptr;
	mutable QSqlDriver_SetLastError_Callback qsqldriver_setlasterror_callback = nullptr;

	// Instance base flags
    mutable bool qsqldriver_isopen_isbase = false;
    mutable bool qsqldriver_begintransaction_isbase = false;
    mutable bool qsqldriver_committransaction_isbase = false;
    mutable bool qsqldriver_rollbacktransaction_isbase = false;
    mutable bool qsqldriver_tables_isbase = false;
    mutable bool qsqldriver_primaryindex_isbase = false;
    mutable bool qsqldriver_record_isbase = false;
    mutable bool qsqldriver_formatvalue_isbase = false;
    mutable bool qsqldriver_escapeidentifier_isbase = false;
    mutable bool qsqldriver_sqlstatement_isbase = false;
    mutable bool qsqldriver_handle_isbase = false;
    mutable bool qsqldriver_hasfeature_isbase = false;
    mutable bool qsqldriver_close_isbase = false;
    mutable bool qsqldriver_createresult_isbase = false;
    mutable bool qsqldriver_open_isbase = false;
    mutable bool qsqldriver_subscribetonotification_isbase = false;
    mutable bool qsqldriver_unsubscribefromnotification_isbase = false;
    mutable bool qsqldriver_subscribedtonotifications_isbase = false;
    mutable bool qsqldriver_isidentifierescaped_isbase = false;
    mutable bool qsqldriver_stripdelimiters_isbase = false;
    mutable bool qsqldriver_maximumidentifierlength_isbase = false;
    mutable bool qsqldriver_cancelquery_isbase = false;
    mutable bool qsqldriver_setopen_isbase = false;
    mutable bool qsqldriver_setopenerror_isbase = false;
    mutable bool qsqldriver_setlasterror_isbase = false;

public:
	VirtualQSqlDriver(): QSqlDriver() {};
	VirtualQSqlDriver(QObject* parent): QSqlDriver(parent) {};

	~VirtualQSqlDriver() {
		qsqldriver_isopen_callback = nullptr;
		qsqldriver_begintransaction_callback = nullptr;
		qsqldriver_committransaction_callback = nullptr;
		qsqldriver_rollbacktransaction_callback = nullptr;
		qsqldriver_tables_callback = nullptr;
		qsqldriver_primaryindex_callback = nullptr;
		qsqldriver_record_callback = nullptr;
		qsqldriver_formatvalue_callback = nullptr;
		qsqldriver_escapeidentifier_callback = nullptr;
		qsqldriver_sqlstatement_callback = nullptr;
		qsqldriver_handle_callback = nullptr;
		qsqldriver_hasfeature_callback = nullptr;
		qsqldriver_close_callback = nullptr;
		qsqldriver_createresult_callback = nullptr;
		qsqldriver_open_callback = nullptr;
		qsqldriver_subscribetonotification_callback = nullptr;
		qsqldriver_unsubscribefromnotification_callback = nullptr;
		qsqldriver_subscribedtonotifications_callback = nullptr;
		qsqldriver_isidentifierescaped_callback = nullptr;
		qsqldriver_stripdelimiters_callback = nullptr;
		qsqldriver_maximumidentifierlength_callback = nullptr;
		qsqldriver_cancelquery_callback = nullptr;
		qsqldriver_setopen_callback = nullptr;
		qsqldriver_setopenerror_callback = nullptr;
		qsqldriver_setlasterror_callback = nullptr;
	}

// Callback setters
	inline void setQSqlDriver_IsOpen_Callback(QSqlDriver_IsOpen_Callback cb) const { qsqldriver_isopen_callback = cb; }
	inline void setQSqlDriver_BeginTransaction_Callback(QSqlDriver_BeginTransaction_Callback cb) const { qsqldriver_begintransaction_callback = cb; }
	inline void setQSqlDriver_CommitTransaction_Callback(QSqlDriver_CommitTransaction_Callback cb) const { qsqldriver_committransaction_callback = cb; }
	inline void setQSqlDriver_RollbackTransaction_Callback(QSqlDriver_RollbackTransaction_Callback cb) const { qsqldriver_rollbacktransaction_callback = cb; }
	inline void setQSqlDriver_Tables_Callback(QSqlDriver_Tables_Callback cb) const { qsqldriver_tables_callback = cb; }
	inline void setQSqlDriver_PrimaryIndex_Callback(QSqlDriver_PrimaryIndex_Callback cb) const { qsqldriver_primaryindex_callback = cb; }
	inline void setQSqlDriver_Record_Callback(QSqlDriver_Record_Callback cb) const { qsqldriver_record_callback = cb; }
	inline void setQSqlDriver_FormatValue_Callback(QSqlDriver_FormatValue_Callback cb) const { qsqldriver_formatvalue_callback = cb; }
	inline void setQSqlDriver_EscapeIdentifier_Callback(QSqlDriver_EscapeIdentifier_Callback cb) const { qsqldriver_escapeidentifier_callback = cb; }
	inline void setQSqlDriver_SqlStatement_Callback(QSqlDriver_SqlStatement_Callback cb) const { qsqldriver_sqlstatement_callback = cb; }
	inline void setQSqlDriver_Handle_Callback(QSqlDriver_Handle_Callback cb) const { qsqldriver_handle_callback = cb; }
	inline void setQSqlDriver_HasFeature_Callback(QSqlDriver_HasFeature_Callback cb) const { qsqldriver_hasfeature_callback = cb; }
	inline void setQSqlDriver_Close_Callback(QSqlDriver_Close_Callback cb) const { qsqldriver_close_callback = cb; }
	inline void setQSqlDriver_CreateResult_Callback(QSqlDriver_CreateResult_Callback cb) const { qsqldriver_createresult_callback = cb; }
	inline void setQSqlDriver_Open_Callback(QSqlDriver_Open_Callback cb) const { qsqldriver_open_callback = cb; }
	inline void setQSqlDriver_SubscribeToNotification_Callback(QSqlDriver_SubscribeToNotification_Callback cb) const { qsqldriver_subscribetonotification_callback = cb; }
	inline void setQSqlDriver_UnsubscribeFromNotification_Callback(QSqlDriver_UnsubscribeFromNotification_Callback cb) const { qsqldriver_unsubscribefromnotification_callback = cb; }
	inline void setQSqlDriver_SubscribedToNotifications_Callback(QSqlDriver_SubscribedToNotifications_Callback cb) const { qsqldriver_subscribedtonotifications_callback = cb; }
	inline void setQSqlDriver_IsIdentifierEscaped_Callback(QSqlDriver_IsIdentifierEscaped_Callback cb) const { qsqldriver_isidentifierescaped_callback = cb; }
	inline void setQSqlDriver_StripDelimiters_Callback(QSqlDriver_StripDelimiters_Callback cb) const { qsqldriver_stripdelimiters_callback = cb; }
	inline void setQSqlDriver_MaximumIdentifierLength_Callback(QSqlDriver_MaximumIdentifierLength_Callback cb) const { qsqldriver_maximumidentifierlength_callback = cb; }
	inline void setQSqlDriver_CancelQuery_Callback(QSqlDriver_CancelQuery_Callback cb) const { qsqldriver_cancelquery_callback = cb; }
	inline void setQSqlDriver_SetOpen_Callback(QSqlDriver_SetOpen_Callback cb) const { qsqldriver_setopen_callback = cb; }
	inline void setQSqlDriver_SetOpenError_Callback(QSqlDriver_SetOpenError_Callback cb) const { qsqldriver_setopenerror_callback = cb; }
	inline void setQSqlDriver_SetLastError_Callback(QSqlDriver_SetLastError_Callback cb) const { qsqldriver_setlasterror_callback = cb; }

// Base flag setters
	inline void setQSqlDriver_IsOpen_IsBase(bool value) const { qsqldriver_isopen_isbase = value; }
	inline void setQSqlDriver_BeginTransaction_IsBase(bool value) const { qsqldriver_begintransaction_isbase = value; }
	inline void setQSqlDriver_CommitTransaction_IsBase(bool value) const { qsqldriver_committransaction_isbase = value; }
	inline void setQSqlDriver_RollbackTransaction_IsBase(bool value) const { qsqldriver_rollbacktransaction_isbase = value; }
	inline void setQSqlDriver_Tables_IsBase(bool value) const { qsqldriver_tables_isbase = value; }
	inline void setQSqlDriver_PrimaryIndex_IsBase(bool value) const { qsqldriver_primaryindex_isbase = value; }
	inline void setQSqlDriver_Record_IsBase(bool value) const { qsqldriver_record_isbase = value; }
	inline void setQSqlDriver_FormatValue_IsBase(bool value) const { qsqldriver_formatvalue_isbase = value; }
	inline void setQSqlDriver_EscapeIdentifier_IsBase(bool value) const { qsqldriver_escapeidentifier_isbase = value; }
	inline void setQSqlDriver_SqlStatement_IsBase(bool value) const { qsqldriver_sqlstatement_isbase = value; }
	inline void setQSqlDriver_Handle_IsBase(bool value) const { qsqldriver_handle_isbase = value; }
	inline void setQSqlDriver_HasFeature_IsBase(bool value) const { qsqldriver_hasfeature_isbase = value; }
	inline void setQSqlDriver_Close_IsBase(bool value) const { qsqldriver_close_isbase = value; }
	inline void setQSqlDriver_CreateResult_IsBase(bool value) const { qsqldriver_createresult_isbase = value; }
	inline void setQSqlDriver_Open_IsBase(bool value) const { qsqldriver_open_isbase = value; }
	inline void setQSqlDriver_SubscribeToNotification_IsBase(bool value) const { qsqldriver_subscribetonotification_isbase = value; }
	inline void setQSqlDriver_UnsubscribeFromNotification_IsBase(bool value) const { qsqldriver_unsubscribefromnotification_isbase = value; }
	inline void setQSqlDriver_SubscribedToNotifications_IsBase(bool value) const { qsqldriver_subscribedtonotifications_isbase = value; }
	inline void setQSqlDriver_IsIdentifierEscaped_IsBase(bool value) const { qsqldriver_isidentifierescaped_isbase = value; }
	inline void setQSqlDriver_StripDelimiters_IsBase(bool value) const { qsqldriver_stripdelimiters_isbase = value; }
	inline void setQSqlDriver_MaximumIdentifierLength_IsBase(bool value) const { qsqldriver_maximumidentifierlength_isbase = value; }
	inline void setQSqlDriver_CancelQuery_IsBase(bool value) const { qsqldriver_cancelquery_isbase = value; }
	inline void setQSqlDriver_SetOpen_IsBase(bool value) const { qsqldriver_setopen_isbase = value; }
	inline void setQSqlDriver_SetOpenError_IsBase(bool value) const { qsqldriver_setopenerror_isbase = value; }
	inline void setQSqlDriver_SetLastError_IsBase(bool value) const { qsqldriver_setlasterror_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool isOpen() const override {
		if (qsqldriver_isopen_isbase) {
			qsqldriver_isopen_isbase = false;
			return QSqlDriver::isOpen();
		} else if (qsqldriver_isopen_callback != nullptr) {
			bool callback_ret = qsqldriver_isopen_callback();
			return callback_ret;
		} else {
			return QSqlDriver::isOpen();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool beginTransaction() override {
		if (qsqldriver_begintransaction_isbase) {
			qsqldriver_begintransaction_isbase = false;
			return QSqlDriver::beginTransaction();
		} else if (qsqldriver_begintransaction_callback != nullptr) {
			bool callback_ret = qsqldriver_begintransaction_callback();
			return callback_ret;
		} else {
			return QSqlDriver::beginTransaction();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool commitTransaction() override {
		if (qsqldriver_committransaction_isbase) {
			qsqldriver_committransaction_isbase = false;
			return QSqlDriver::commitTransaction();
		} else if (qsqldriver_committransaction_callback != nullptr) {
			bool callback_ret = qsqldriver_committransaction_callback();
			return callback_ret;
		} else {
			return QSqlDriver::commitTransaction();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool rollbackTransaction() override {
		if (qsqldriver_rollbacktransaction_isbase) {
			qsqldriver_rollbacktransaction_isbase = false;
			return QSqlDriver::rollbackTransaction();
		} else if (qsqldriver_rollbacktransaction_callback != nullptr) {
			bool callback_ret = qsqldriver_rollbacktransaction_callback();
			return callback_ret;
		} else {
			return QSqlDriver::rollbackTransaction();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> tables(QSql::TableType tableType) const override {
		if (qsqldriver_tables_isbase) {
			qsqldriver_tables_isbase = false;
			return QSqlDriver::tables(tableType);
		} else if (qsqldriver_tables_callback != nullptr) {
			int cbval1 = static_cast<int>(tableType);
			libqt_list callback_ret = qsqldriver_tables_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlDriver::tables(tableType);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSqlIndex primaryIndex(const QString& tableName) const override {
		if (qsqldriver_primaryindex_isbase) {
			qsqldriver_primaryindex_isbase = false;
			return QSqlDriver::primaryIndex(tableName);
		} else if (qsqldriver_primaryindex_callback != nullptr) {
			QByteArray tableName_qb = tableName.toUtf8();
			libqt_string cbval1;
			cbval1.len = tableName_qb.length();
			cbval1.data = static_cast<const char*>(tableName_qb.constData());
			QSqlIndex* callback_ret = qsqldriver_primaryindex_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSqlDriver::primaryIndex(tableName);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSqlRecord record(const QString& tableName) const override {
		if (qsqldriver_record_isbase) {
			qsqldriver_record_isbase = false;
			return QSqlDriver::record(tableName);
		} else if (qsqldriver_record_callback != nullptr) {
			QByteArray tableName_qb = tableName.toUtf8();
			libqt_string cbval1;
			cbval1.len = tableName_qb.length();
			cbval1.data = static_cast<const char*>(tableName_qb.constData());
			QSqlRecord* callback_ret = qsqldriver_record_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSqlDriver::record(tableName);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString formatValue(const QSqlField& field, bool trimStrings) const override {
		if (qsqldriver_formatvalue_isbase) {
			qsqldriver_formatvalue_isbase = false;
			return QSqlDriver::formatValue(field, trimStrings);
		} else if (qsqldriver_formatvalue_callback != nullptr) {
			const QSqlField* cbval1 = (const QSqlField*)&field;
			bool cbval2 = trimStrings;
			const char* callback_ret = qsqldriver_formatvalue_callback(this, cbval1, cbval2);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSqlDriver::formatValue(field, trimStrings);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString escapeIdentifier(const QString& identifier, IdentifierType typeVal) const override {
		if (qsqldriver_escapeidentifier_isbase) {
			qsqldriver_escapeidentifier_isbase = false;
			return QSqlDriver::escapeIdentifier(identifier, typeVal);
		} else if (qsqldriver_escapeidentifier_callback != nullptr) {
			QByteArray identifier_qb = identifier.toUtf8();
			libqt_string cbval1;
			cbval1.len = identifier_qb.length();
			cbval1.data = static_cast<const char*>(identifier_qb.constData());
			int cbval2 = static_cast<int>(typeVal);
			const char* callback_ret = qsqldriver_escapeidentifier_callback(this, cbval1, cbval2);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSqlDriver::escapeIdentifier(identifier, typeVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString sqlStatement(StatementType typeVal, const QString& tableName, const QSqlRecord& rec, bool preparedStatement) const override {
		if (qsqldriver_sqlstatement_isbase) {
			qsqldriver_sqlstatement_isbase = false;
			return QSqlDriver::sqlStatement(typeVal, tableName, rec, preparedStatement);
		} else if (qsqldriver_sqlstatement_callback != nullptr) {
			int cbval1 = static_cast<int>(typeVal);
			QByteArray tableName_qb = tableName.toUtf8();
			libqt_string cbval2;
			cbval2.len = tableName_qb.length();
			cbval2.data = static_cast<const char*>(tableName_qb.constData());
			const QSqlRecord* cbval3 = (const QSqlRecord*)&rec;
			bool cbval4 = preparedStatement;
			const char* callback_ret = qsqldriver_sqlstatement_callback(this, cbval1, cbval2, cbval3, cbval4);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSqlDriver::sqlStatement(typeVal, tableName, rec, preparedStatement);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant handle() const override {
		if (qsqldriver_handle_isbase) {
			qsqldriver_handle_isbase = false;
			return QSqlDriver::handle();
		} else if (qsqldriver_handle_callback != nullptr) {
			QVariant* callback_ret = qsqldriver_handle_callback();
			return *callback_ret;
		} else {
			return QSqlDriver::handle();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hasFeature(DriverFeature f) const override {
		if (qsqldriver_hasfeature_callback != nullptr) {
			int cbval1 = static_cast<int>(f);
			bool callback_ret = qsqldriver_hasfeature_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void close() override {
		if (qsqldriver_close_callback != nullptr) {
			qsqldriver_close_callback();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSqlResult* createResult() const override {
		if (qsqldriver_createresult_callback != nullptr) {
			QSqlResult* callback_ret = qsqldriver_createresult_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool open(const QString& db, const QString& user, const QString& password, const QString& host, int port, const QString& connOpts) override {
		if (qsqldriver_open_callback != nullptr) {
			QByteArray db_qb = db.toUtf8();
			libqt_string cbval1;
			cbval1.len = db_qb.length();
			cbval1.data = static_cast<const char*>(db_qb.constData());
			QByteArray user_qb = user.toUtf8();
			libqt_string cbval2;
			cbval2.len = user_qb.length();
			cbval2.data = static_cast<const char*>(user_qb.constData());
			QByteArray password_qb = password.toUtf8();
			libqt_string cbval3;
			cbval3.len = password_qb.length();
			cbval3.data = static_cast<const char*>(password_qb.constData());
			QByteArray host_qb = host.toUtf8();
			libqt_string cbval4;
			cbval4.len = host_qb.length();
			cbval4.data = static_cast<const char*>(host_qb.constData());
			int cbval5 = port;
			QByteArray connOpts_qb = connOpts.toUtf8();
			libqt_string cbval6;
			cbval6.len = connOpts_qb.length();
			cbval6.data = static_cast<const char*>(connOpts_qb.constData());
			bool callback_ret = qsqldriver_open_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool subscribeToNotification(const QString& name) override {
		if (qsqldriver_subscribetonotification_isbase) {
			qsqldriver_subscribetonotification_isbase = false;
			return QSqlDriver::subscribeToNotification(name);
		} else if (qsqldriver_subscribetonotification_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			bool callback_ret = qsqldriver_subscribetonotification_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlDriver::subscribeToNotification(name);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool unsubscribeFromNotification(const QString& name) override {
		if (qsqldriver_unsubscribefromnotification_isbase) {
			qsqldriver_unsubscribefromnotification_isbase = false;
			return QSqlDriver::unsubscribeFromNotification(name);
		} else if (qsqldriver_unsubscribefromnotification_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			bool callback_ret = qsqldriver_unsubscribefromnotification_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlDriver::unsubscribeFromNotification(name);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> subscribedToNotifications() const override {
		if (qsqldriver_subscribedtonotifications_isbase) {
			qsqldriver_subscribedtonotifications_isbase = false;
			return QSqlDriver::subscribedToNotifications();
		} else if (qsqldriver_subscribedtonotifications_callback != nullptr) {
			libqt_list callback_ret = qsqldriver_subscribedtonotifications_callback();
			return callback_ret;
		} else {
			return QSqlDriver::subscribedToNotifications();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isIdentifierEscaped(const QString& identifier, IdentifierType typeVal) const override {
		if (qsqldriver_isidentifierescaped_isbase) {
			qsqldriver_isidentifierescaped_isbase = false;
			return QSqlDriver::isIdentifierEscaped(identifier, typeVal);
		} else if (qsqldriver_isidentifierescaped_callback != nullptr) {
			QByteArray identifier_qb = identifier.toUtf8();
			libqt_string cbval1;
			cbval1.len = identifier_qb.length();
			cbval1.data = static_cast<const char*>(identifier_qb.constData());
			int cbval2 = static_cast<int>(typeVal);
			bool callback_ret = qsqldriver_isidentifierescaped_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QSqlDriver::isIdentifierEscaped(identifier, typeVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString stripDelimiters(const QString& identifier, IdentifierType typeVal) const override {
		if (qsqldriver_stripdelimiters_isbase) {
			qsqldriver_stripdelimiters_isbase = false;
			return QSqlDriver::stripDelimiters(identifier, typeVal);
		} else if (qsqldriver_stripdelimiters_callback != nullptr) {
			QByteArray identifier_qb = identifier.toUtf8();
			libqt_string cbval1;
			cbval1.len = identifier_qb.length();
			cbval1.data = static_cast<const char*>(identifier_qb.constData());
			int cbval2 = static_cast<int>(typeVal);
			const char* callback_ret = qsqldriver_stripdelimiters_callback(this, cbval1, cbval2);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSqlDriver::stripDelimiters(identifier, typeVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int maximumIdentifierLength(IdentifierType typeVal) const override {
		if (qsqldriver_maximumidentifierlength_isbase) {
			qsqldriver_maximumidentifierlength_isbase = false;
			return QSqlDriver::maximumIdentifierLength(typeVal);
		} else if (qsqldriver_maximumidentifierlength_callback != nullptr) {
			int cbval1 = static_cast<int>(typeVal);
			int callback_ret = qsqldriver_maximumidentifierlength_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlDriver::maximumIdentifierLength(typeVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool cancelQuery() override {
		if (qsqldriver_cancelquery_isbase) {
			qsqldriver_cancelquery_isbase = false;
			return QSqlDriver::cancelQuery();
		} else if (qsqldriver_cancelquery_callback != nullptr) {
			bool callback_ret = qsqldriver_cancelquery_callback();
			return callback_ret;
		} else {
			return QSqlDriver::cancelQuery();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setOpen(bool o) override {
		if (qsqldriver_setopen_isbase) {
			qsqldriver_setopen_isbase = false;
			QSqlDriver::setOpen(o);
		} else if (qsqldriver_setopen_callback != nullptr) {
			bool cbval1 = o;
			qsqldriver_setopen_callback(this, cbval1);
		} else {
			QSqlDriver::setOpen(o);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setOpenError(bool e) override {
		if (qsqldriver_setopenerror_isbase) {
			qsqldriver_setopenerror_isbase = false;
			QSqlDriver::setOpenError(e);
		} else if (qsqldriver_setopenerror_callback != nullptr) {
			bool cbval1 = e;
			qsqldriver_setopenerror_callback(this, cbval1);
		} else {
			QSqlDriver::setOpenError(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setLastError(const QSqlError& e) override {
		if (qsqldriver_setlasterror_isbase) {
			qsqldriver_setlasterror_isbase = false;
			QSqlDriver::setLastError(e);
		} else if (qsqldriver_setlasterror_callback != nullptr) {
			const QSqlError* cbval1 = (const QSqlError*)&e;
			qsqldriver_setlasterror_callback(this, cbval1);
		} else {
			QSqlDriver::setLastError(e);
		}
	}

	// Friend functions
	friend void QSqlDriver_SetOpen(QSqlDriver* self, bool o);
	friend void QSqlDriver_QBaseSetOpen(QSqlDriver* self, bool o);
	friend void QSqlDriver_SetOpenError(QSqlDriver* self, bool e);
	friend void QSqlDriver_QBaseSetOpenError(QSqlDriver* self, bool e);
	friend void QSqlDriver_SetLastError(QSqlDriver* self, const QSqlError* e);
	friend void QSqlDriver_QBaseSetLastError(QSqlDriver* self, const QSqlError* e);
};

#endif


