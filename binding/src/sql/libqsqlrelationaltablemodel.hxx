#pragma once
#ifndef QSQLRELATIONALTABLEMODEL_H_C_LIBVIRTUAL
#define QSQLRELATIONALTABLEMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSqlRelationalTableModel so that we can call protected methods
class VirtualQSqlRelationalTableModel final : public QSqlRelationalTableModel {

public:
	// Virtual class boolean flag
	bool isVirtualQSqlRelationalTableModel= true;

	// Virtual class public types (including callbacks)
	using QSqlRelationalTableModel_Data_Callback = QVariant* (*)(const QSqlRelationalTableModel*, const QModelIndex*, int);
	using QSqlRelationalTableModel_SetData_Callback = bool (*)(QSqlRelationalTableModel*, const QModelIndex*, const QVariant*, int);
	using QSqlRelationalTableModel_RemoveColumns_Callback = bool (*)(QSqlRelationalTableModel*, int, int, const QModelIndex*);
	using QSqlRelationalTableModel_Clear_Callback = void (*)();
	using QSqlRelationalTableModel_Select_Callback = bool (*)();
	using QSqlRelationalTableModel_SetTable_Callback = void (*)(QSqlRelationalTableModel*, libqt_string);
	using QSqlRelationalTableModel_SetRelation_Callback = void (*)(QSqlRelationalTableModel*, int, const QSqlRelation*);
	using QSqlRelationalTableModel_RelationModel_Callback = QSqlTableModel* (*)(const QSqlRelationalTableModel*, int);
	using QSqlRelationalTableModel_RevertRow_Callback = void (*)(QSqlRelationalTableModel*, int);
	using QSqlRelationalTableModel_SelectStatement_Callback = const char* (*)();
	using QSqlRelationalTableModel_UpdateRowInTable_Callback = bool (*)(QSqlRelationalTableModel*, int, const QSqlRecord*);
	using QSqlRelationalTableModel_InsertRowIntoTable_Callback = bool (*)(QSqlRelationalTableModel*, const QSqlRecord*);
	using QSqlRelationalTableModel_OrderByClause_Callback = const char* (*)();

protected:
	// Instance callback storage
	mutable QSqlRelationalTableModel_Data_Callback qsqlrelationaltablemodel_data_callback = nullptr;
	mutable QSqlRelationalTableModel_SetData_Callback qsqlrelationaltablemodel_setdata_callback = nullptr;
	mutable QSqlRelationalTableModel_RemoveColumns_Callback qsqlrelationaltablemodel_removecolumns_callback = nullptr;
	mutable QSqlRelationalTableModel_Clear_Callback qsqlrelationaltablemodel_clear_callback = nullptr;
	mutable QSqlRelationalTableModel_Select_Callback qsqlrelationaltablemodel_select_callback = nullptr;
	mutable QSqlRelationalTableModel_SetTable_Callback qsqlrelationaltablemodel_settable_callback = nullptr;
	mutable QSqlRelationalTableModel_SetRelation_Callback qsqlrelationaltablemodel_setrelation_callback = nullptr;
	mutable QSqlRelationalTableModel_RelationModel_Callback qsqlrelationaltablemodel_relationmodel_callback = nullptr;
	mutable QSqlRelationalTableModel_RevertRow_Callback qsqlrelationaltablemodel_revertrow_callback = nullptr;
	mutable QSqlRelationalTableModel_SelectStatement_Callback qsqlrelationaltablemodel_selectstatement_callback = nullptr;
	mutable QSqlRelationalTableModel_UpdateRowInTable_Callback qsqlrelationaltablemodel_updaterowintable_callback = nullptr;
	mutable QSqlRelationalTableModel_InsertRowIntoTable_Callback qsqlrelationaltablemodel_insertrowintotable_callback = nullptr;
	mutable QSqlRelationalTableModel_OrderByClause_Callback qsqlrelationaltablemodel_orderbyclause_callback = nullptr;

	// Instance base flags
    mutable bool qsqlrelationaltablemodel_data_isbase = false;
    mutable bool qsqlrelationaltablemodel_setdata_isbase = false;
    mutable bool qsqlrelationaltablemodel_removecolumns_isbase = false;
    mutable bool qsqlrelationaltablemodel_clear_isbase = false;
    mutable bool qsqlrelationaltablemodel_select_isbase = false;
    mutable bool qsqlrelationaltablemodel_settable_isbase = false;
    mutable bool qsqlrelationaltablemodel_setrelation_isbase = false;
    mutable bool qsqlrelationaltablemodel_relationmodel_isbase = false;
    mutable bool qsqlrelationaltablemodel_revertrow_isbase = false;
    mutable bool qsqlrelationaltablemodel_selectstatement_isbase = false;
    mutable bool qsqlrelationaltablemodel_updaterowintable_isbase = false;
    mutable bool qsqlrelationaltablemodel_insertrowintotable_isbase = false;
    mutable bool qsqlrelationaltablemodel_orderbyclause_isbase = false;

public:
	VirtualQSqlRelationalTableModel(): QSqlRelationalTableModel() {};
	VirtualQSqlRelationalTableModel(QObject* parent): QSqlRelationalTableModel(parent) {};
	VirtualQSqlRelationalTableModel(QObject* parent, const QSqlDatabase& db): QSqlRelationalTableModel(parent, db) {};

	~VirtualQSqlRelationalTableModel() {
		qsqlrelationaltablemodel_data_callback = nullptr;
		qsqlrelationaltablemodel_setdata_callback = nullptr;
		qsqlrelationaltablemodel_removecolumns_callback = nullptr;
		qsqlrelationaltablemodel_clear_callback = nullptr;
		qsqlrelationaltablemodel_select_callback = nullptr;
		qsqlrelationaltablemodel_settable_callback = nullptr;
		qsqlrelationaltablemodel_setrelation_callback = nullptr;
		qsqlrelationaltablemodel_relationmodel_callback = nullptr;
		qsqlrelationaltablemodel_revertrow_callback = nullptr;
		qsqlrelationaltablemodel_selectstatement_callback = nullptr;
		qsqlrelationaltablemodel_updaterowintable_callback = nullptr;
		qsqlrelationaltablemodel_insertrowintotable_callback = nullptr;
		qsqlrelationaltablemodel_orderbyclause_callback = nullptr;
	}

// Callback setters
	inline void setQSqlRelationalTableModel_Data_Callback(QSqlRelationalTableModel_Data_Callback cb) const { qsqlrelationaltablemodel_data_callback = cb; }
	inline void setQSqlRelationalTableModel_SetData_Callback(QSqlRelationalTableModel_SetData_Callback cb) const { qsqlrelationaltablemodel_setdata_callback = cb; }
	inline void setQSqlRelationalTableModel_RemoveColumns_Callback(QSqlRelationalTableModel_RemoveColumns_Callback cb) const { qsqlrelationaltablemodel_removecolumns_callback = cb; }
	inline void setQSqlRelationalTableModel_Clear_Callback(QSqlRelationalTableModel_Clear_Callback cb) const { qsqlrelationaltablemodel_clear_callback = cb; }
	inline void setQSqlRelationalTableModel_Select_Callback(QSqlRelationalTableModel_Select_Callback cb) const { qsqlrelationaltablemodel_select_callback = cb; }
	inline void setQSqlRelationalTableModel_SetTable_Callback(QSqlRelationalTableModel_SetTable_Callback cb) const { qsqlrelationaltablemodel_settable_callback = cb; }
	inline void setQSqlRelationalTableModel_SetRelation_Callback(QSqlRelationalTableModel_SetRelation_Callback cb) const { qsqlrelationaltablemodel_setrelation_callback = cb; }
	inline void setQSqlRelationalTableModel_RelationModel_Callback(QSqlRelationalTableModel_RelationModel_Callback cb) const { qsqlrelationaltablemodel_relationmodel_callback = cb; }
	inline void setQSqlRelationalTableModel_RevertRow_Callback(QSqlRelationalTableModel_RevertRow_Callback cb) const { qsqlrelationaltablemodel_revertrow_callback = cb; }
	inline void setQSqlRelationalTableModel_SelectStatement_Callback(QSqlRelationalTableModel_SelectStatement_Callback cb) const { qsqlrelationaltablemodel_selectstatement_callback = cb; }
	inline void setQSqlRelationalTableModel_UpdateRowInTable_Callback(QSqlRelationalTableModel_UpdateRowInTable_Callback cb) const { qsqlrelationaltablemodel_updaterowintable_callback = cb; }
	inline void setQSqlRelationalTableModel_InsertRowIntoTable_Callback(QSqlRelationalTableModel_InsertRowIntoTable_Callback cb) const { qsqlrelationaltablemodel_insertrowintotable_callback = cb; }
	inline void setQSqlRelationalTableModel_OrderByClause_Callback(QSqlRelationalTableModel_OrderByClause_Callback cb) const { qsqlrelationaltablemodel_orderbyclause_callback = cb; }

// Base flag setters
	inline void setQSqlRelationalTableModel_Data_IsBase(bool value) const { qsqlrelationaltablemodel_data_isbase = value; }
	inline void setQSqlRelationalTableModel_SetData_IsBase(bool value) const { qsqlrelationaltablemodel_setdata_isbase = value; }
	inline void setQSqlRelationalTableModel_RemoveColumns_IsBase(bool value) const { qsqlrelationaltablemodel_removecolumns_isbase = value; }
	inline void setQSqlRelationalTableModel_Clear_IsBase(bool value) const { qsqlrelationaltablemodel_clear_isbase = value; }
	inline void setQSqlRelationalTableModel_Select_IsBase(bool value) const { qsqlrelationaltablemodel_select_isbase = value; }
	inline void setQSqlRelationalTableModel_SetTable_IsBase(bool value) const { qsqlrelationaltablemodel_settable_isbase = value; }
	inline void setQSqlRelationalTableModel_SetRelation_IsBase(bool value) const { qsqlrelationaltablemodel_setrelation_isbase = value; }
	inline void setQSqlRelationalTableModel_RelationModel_IsBase(bool value) const { qsqlrelationaltablemodel_relationmodel_isbase = value; }
	inline void setQSqlRelationalTableModel_RevertRow_IsBase(bool value) const { qsqlrelationaltablemodel_revertrow_isbase = value; }
	inline void setQSqlRelationalTableModel_SelectStatement_IsBase(bool value) const { qsqlrelationaltablemodel_selectstatement_isbase = value; }
	inline void setQSqlRelationalTableModel_UpdateRowInTable_IsBase(bool value) const { qsqlrelationaltablemodel_updaterowintable_isbase = value; }
	inline void setQSqlRelationalTableModel_InsertRowIntoTable_IsBase(bool value) const { qsqlrelationaltablemodel_insertrowintotable_isbase = value; }
	inline void setQSqlRelationalTableModel_OrderByClause_IsBase(bool value) const { qsqlrelationaltablemodel_orderbyclause_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QVariant data(const QModelIndex& item, int role) const override {
		if (qsqlrelationaltablemodel_data_isbase) {
			qsqlrelationaltablemodel_data_isbase = false;
			return QSqlRelationalTableModel::data(item, role);
		} else if (qsqlrelationaltablemodel_data_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&item;
			int cbval2 = role;
			QVariant* callback_ret = qsqlrelationaltablemodel_data_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QSqlRelationalTableModel::data(item, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setData(const QModelIndex& item, const QVariant& value, int role) override {
		if (qsqlrelationaltablemodel_setdata_isbase) {
			qsqlrelationaltablemodel_setdata_isbase = false;
			return QSqlRelationalTableModel::setData(item, value, role);
		} else if (qsqlrelationaltablemodel_setdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&item;
			const QVariant* cbval2 = (const QVariant*)&value;
			int cbval3 = role;
			bool callback_ret = qsqlrelationaltablemodel_setdata_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSqlRelationalTableModel::setData(item, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (qsqlrelationaltablemodel_removecolumns_isbase) {
			qsqlrelationaltablemodel_removecolumns_isbase = false;
			return QSqlRelationalTableModel::removeColumns(column, count, parent);
		} else if (qsqlrelationaltablemodel_removecolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qsqlrelationaltablemodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSqlRelationalTableModel::removeColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void clear() override {
		if (qsqlrelationaltablemodel_clear_isbase) {
			qsqlrelationaltablemodel_clear_isbase = false;
			QSqlRelationalTableModel::clear();
		} else if (qsqlrelationaltablemodel_clear_callback != nullptr) {
			qsqlrelationaltablemodel_clear_callback();
		} else {
			QSqlRelationalTableModel::clear();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool select() override {
		if (qsqlrelationaltablemodel_select_isbase) {
			qsqlrelationaltablemodel_select_isbase = false;
			return QSqlRelationalTableModel::select();
		} else if (qsqlrelationaltablemodel_select_callback != nullptr) {
			bool callback_ret = qsqlrelationaltablemodel_select_callback();
			return callback_ret;
		} else {
			return QSqlRelationalTableModel::select();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setTable(const QString& tableName) override {
		if (qsqlrelationaltablemodel_settable_isbase) {
			qsqlrelationaltablemodel_settable_isbase = false;
			QSqlRelationalTableModel::setTable(tableName);
		} else if (qsqlrelationaltablemodel_settable_callback != nullptr) {
			QByteArray tableName_qb = tableName.toUtf8();
			libqt_string cbval1;
			cbval1.len = tableName_qb.length();
			cbval1.data = static_cast<const char*>(tableName_qb.constData());
			qsqlrelationaltablemodel_settable_callback(this, cbval1);
		} else {
			QSqlRelationalTableModel::setTable(tableName);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setRelation(int column, const QSqlRelation& relation) override {
		if (qsqlrelationaltablemodel_setrelation_isbase) {
			qsqlrelationaltablemodel_setrelation_isbase = false;
			QSqlRelationalTableModel::setRelation(column, relation);
		} else if (qsqlrelationaltablemodel_setrelation_callback != nullptr) {
			int cbval1 = column;
			const QSqlRelation* cbval2 = (const QSqlRelation*)&relation;
			qsqlrelationaltablemodel_setrelation_callback(this, cbval1, cbval2);
		} else {
			QSqlRelationalTableModel::setRelation(column, relation);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSqlTableModel* relationModel(int column) const override {
		if (qsqlrelationaltablemodel_relationmodel_isbase) {
			qsqlrelationaltablemodel_relationmodel_isbase = false;
			return QSqlRelationalTableModel::relationModel(column);
		} else if (qsqlrelationaltablemodel_relationmodel_callback != nullptr) {
			int cbval1 = column;
			QSqlTableModel* callback_ret = qsqlrelationaltablemodel_relationmodel_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlRelationalTableModel::relationModel(column);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void revertRow(int row) override {
		if (qsqlrelationaltablemodel_revertrow_isbase) {
			qsqlrelationaltablemodel_revertrow_isbase = false;
			QSqlRelationalTableModel::revertRow(row);
		} else if (qsqlrelationaltablemodel_revertrow_callback != nullptr) {
			int cbval1 = row;
			qsqlrelationaltablemodel_revertrow_callback(this, cbval1);
		} else {
			QSqlRelationalTableModel::revertRow(row);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString selectStatement() const override {
		if (qsqlrelationaltablemodel_selectstatement_isbase) {
			qsqlrelationaltablemodel_selectstatement_isbase = false;
			return QSqlRelationalTableModel::selectStatement();
		} else if (qsqlrelationaltablemodel_selectstatement_callback != nullptr) {
			const char* callback_ret = qsqlrelationaltablemodel_selectstatement_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSqlRelationalTableModel::selectStatement();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool updateRowInTable(int row, const QSqlRecord& values) override {
		if (qsqlrelationaltablemodel_updaterowintable_isbase) {
			qsqlrelationaltablemodel_updaterowintable_isbase = false;
			return QSqlRelationalTableModel::updateRowInTable(row, values);
		} else if (qsqlrelationaltablemodel_updaterowintable_callback != nullptr) {
			int cbval1 = row;
			const QSqlRecord* cbval2 = (const QSqlRecord*)&values;
			bool callback_ret = qsqlrelationaltablemodel_updaterowintable_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QSqlRelationalTableModel::updateRowInTable(row, values);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertRowIntoTable(const QSqlRecord& values) override {
		if (qsqlrelationaltablemodel_insertrowintotable_isbase) {
			qsqlrelationaltablemodel_insertrowintotable_isbase = false;
			return QSqlRelationalTableModel::insertRowIntoTable(values);
		} else if (qsqlrelationaltablemodel_insertrowintotable_callback != nullptr) {
			const QSqlRecord* cbval1 = (const QSqlRecord*)&values;
			bool callback_ret = qsqlrelationaltablemodel_insertrowintotable_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlRelationalTableModel::insertRowIntoTable(values);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString orderByClause() const override {
		if (qsqlrelationaltablemodel_orderbyclause_isbase) {
			qsqlrelationaltablemodel_orderbyclause_isbase = false;
			return QSqlRelationalTableModel::orderByClause();
		} else if (qsqlrelationaltablemodel_orderbyclause_callback != nullptr) {
			const char* callback_ret = qsqlrelationaltablemodel_orderbyclause_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSqlRelationalTableModel::orderByClause();
		}
	}

	// Friend functions
	friend libqt_string QSqlRelationalTableModel_SelectStatement(const QSqlRelationalTableModel* self);
	friend libqt_string QSqlRelationalTableModel_QBaseSelectStatement(const QSqlRelationalTableModel* self);
	friend bool QSqlRelationalTableModel_UpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values);
	friend bool QSqlRelationalTableModel_QBaseUpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values);
	friend bool QSqlRelationalTableModel_InsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values);
	friend bool QSqlRelationalTableModel_QBaseInsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values);
	friend libqt_string QSqlRelationalTableModel_OrderByClause(const QSqlRelationalTableModel* self);
	friend libqt_string QSqlRelationalTableModel_QBaseOrderByClause(const QSqlRelationalTableModel* self);
};

#endif


