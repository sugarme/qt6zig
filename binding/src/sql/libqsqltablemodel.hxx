#pragma once
#ifndef QSQLTABLEMODEL_H_C_LIBVIRTUAL
#define QSQLTABLEMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSqlTableModel so that we can call protected methods
class VirtualQSqlTableModel final : public QSqlTableModel {

public:
	// Virtual class boolean flag
	bool isVirtualQSqlTableModel= true;

	// Virtual class public types (including callbacks)
	using QSqlTableModel_SetTable_Callback = void (*)(QSqlTableModel*, libqt_string);
	using QSqlTableModel_Flags_Callback = int (*)(const QSqlTableModel*, const QModelIndex*);
	using QSqlTableModel_Data_Callback = QVariant* (*)(const QSqlTableModel*, const QModelIndex*, int);
	using QSqlTableModel_SetData_Callback = bool (*)(QSqlTableModel*, const QModelIndex*, const QVariant*, int);
	using QSqlTableModel_ClearItemData_Callback = bool (*)(QSqlTableModel*, const QModelIndex*);
	using QSqlTableModel_HeaderData_Callback = QVariant* (*)(const QSqlTableModel*, int, int, int);
	using QSqlTableModel_Clear_Callback = void (*)();
	using QSqlTableModel_SetEditStrategy_Callback = void (*)(QSqlTableModel*, int);
	using QSqlTableModel_Sort_Callback = void (*)(QSqlTableModel*, int, int);
	using QSqlTableModel_SetSort_Callback = void (*)(QSqlTableModel*, int, int);
	using QSqlTableModel_SetFilter_Callback = void (*)(QSqlTableModel*, libqt_string);
	using QSqlTableModel_RowCount_Callback = int (*)(const QSqlTableModel*, const QModelIndex*);
	using QSqlTableModel_RemoveColumns_Callback = bool (*)(QSqlTableModel*, int, int, const QModelIndex*);
	using QSqlTableModel_RemoveRows_Callback = bool (*)(QSqlTableModel*, int, int, const QModelIndex*);
	using QSqlTableModel_InsertRows_Callback = bool (*)(QSqlTableModel*, int, int, const QModelIndex*);
	using QSqlTableModel_RevertRow_Callback = void (*)(QSqlTableModel*, int);
	using QSqlTableModel_Select_Callback = bool (*)();
	using QSqlTableModel_SelectRow_Callback = bool (*)(QSqlTableModel*, int);
	using QSqlTableModel_Submit_Callback = bool (*)();
	using QSqlTableModel_Revert_Callback = void (*)();
	using QSqlTableModel_UpdateRowInTable_Callback = bool (*)(QSqlTableModel*, int, const QSqlRecord*);
	using QSqlTableModel_InsertRowIntoTable_Callback = bool (*)(QSqlTableModel*, const QSqlRecord*);
	using QSqlTableModel_DeleteRowFromTable_Callback = bool (*)(QSqlTableModel*, int);
	using QSqlTableModel_OrderByClause_Callback = const char* (*)();
	using QSqlTableModel_SelectStatement_Callback = const char* (*)();
	using QSqlTableModel_IndexInQuery_Callback = QModelIndex* (*)(const QSqlTableModel*, const QModelIndex*);
	using QSqlTableModel_SetPrimaryKey_Callback = void (*)(QSqlTableModel*, const QSqlIndex*);
	using QSqlTableModel_PrimaryValues_Callback = QSqlRecord* (*)(const QSqlTableModel*, int);

protected:
	// Instance callback storage
	mutable QSqlTableModel_SetTable_Callback qsqltablemodel_settable_callback = nullptr;
	mutable QSqlTableModel_Flags_Callback qsqltablemodel_flags_callback = nullptr;
	mutable QSqlTableModel_Data_Callback qsqltablemodel_data_callback = nullptr;
	mutable QSqlTableModel_SetData_Callback qsqltablemodel_setdata_callback = nullptr;
	mutable QSqlTableModel_ClearItemData_Callback qsqltablemodel_clearitemdata_callback = nullptr;
	mutable QSqlTableModel_HeaderData_Callback qsqltablemodel_headerdata_callback = nullptr;
	mutable QSqlTableModel_Clear_Callback qsqltablemodel_clear_callback = nullptr;
	mutable QSqlTableModel_SetEditStrategy_Callback qsqltablemodel_seteditstrategy_callback = nullptr;
	mutable QSqlTableModel_Sort_Callback qsqltablemodel_sort_callback = nullptr;
	mutable QSqlTableModel_SetSort_Callback qsqltablemodel_setsort_callback = nullptr;
	mutable QSqlTableModel_SetFilter_Callback qsqltablemodel_setfilter_callback = nullptr;
	mutable QSqlTableModel_RowCount_Callback qsqltablemodel_rowcount_callback = nullptr;
	mutable QSqlTableModel_RemoveColumns_Callback qsqltablemodel_removecolumns_callback = nullptr;
	mutable QSqlTableModel_RemoveRows_Callback qsqltablemodel_removerows_callback = nullptr;
	mutable QSqlTableModel_InsertRows_Callback qsqltablemodel_insertrows_callback = nullptr;
	mutable QSqlTableModel_RevertRow_Callback qsqltablemodel_revertrow_callback = nullptr;
	mutable QSqlTableModel_Select_Callback qsqltablemodel_select_callback = nullptr;
	mutable QSqlTableModel_SelectRow_Callback qsqltablemodel_selectrow_callback = nullptr;
	mutable QSqlTableModel_Submit_Callback qsqltablemodel_submit_callback = nullptr;
	mutable QSqlTableModel_Revert_Callback qsqltablemodel_revert_callback = nullptr;
	mutable QSqlTableModel_UpdateRowInTable_Callback qsqltablemodel_updaterowintable_callback = nullptr;
	mutable QSqlTableModel_InsertRowIntoTable_Callback qsqltablemodel_insertrowintotable_callback = nullptr;
	mutable QSqlTableModel_DeleteRowFromTable_Callback qsqltablemodel_deleterowfromtable_callback = nullptr;
	mutable QSqlTableModel_OrderByClause_Callback qsqltablemodel_orderbyclause_callback = nullptr;
	mutable QSqlTableModel_SelectStatement_Callback qsqltablemodel_selectstatement_callback = nullptr;
	mutable QSqlTableModel_IndexInQuery_Callback qsqltablemodel_indexinquery_callback = nullptr;
	mutable QSqlTableModel_SetPrimaryKey_Callback qsqltablemodel_setprimarykey_callback = nullptr;
	mutable QSqlTableModel_PrimaryValues_Callback qsqltablemodel_primaryvalues_callback = nullptr;

	// Instance base flags
    mutable bool qsqltablemodel_settable_isbase = false;
    mutable bool qsqltablemodel_flags_isbase = false;
    mutable bool qsqltablemodel_data_isbase = false;
    mutable bool qsqltablemodel_setdata_isbase = false;
    mutable bool qsqltablemodel_clearitemdata_isbase = false;
    mutable bool qsqltablemodel_headerdata_isbase = false;
    mutable bool qsqltablemodel_clear_isbase = false;
    mutable bool qsqltablemodel_seteditstrategy_isbase = false;
    mutable bool qsqltablemodel_sort_isbase = false;
    mutable bool qsqltablemodel_setsort_isbase = false;
    mutable bool qsqltablemodel_setfilter_isbase = false;
    mutable bool qsqltablemodel_rowcount_isbase = false;
    mutable bool qsqltablemodel_removecolumns_isbase = false;
    mutable bool qsqltablemodel_removerows_isbase = false;
    mutable bool qsqltablemodel_insertrows_isbase = false;
    mutable bool qsqltablemodel_revertrow_isbase = false;
    mutable bool qsqltablemodel_select_isbase = false;
    mutable bool qsqltablemodel_selectrow_isbase = false;
    mutable bool qsqltablemodel_submit_isbase = false;
    mutable bool qsqltablemodel_revert_isbase = false;
    mutable bool qsqltablemodel_updaterowintable_isbase = false;
    mutable bool qsqltablemodel_insertrowintotable_isbase = false;
    mutable bool qsqltablemodel_deleterowfromtable_isbase = false;
    mutable bool qsqltablemodel_orderbyclause_isbase = false;
    mutable bool qsqltablemodel_selectstatement_isbase = false;
    mutable bool qsqltablemodel_indexinquery_isbase = false;
    mutable bool qsqltablemodel_setprimarykey_isbase = false;
    mutable bool qsqltablemodel_primaryvalues_isbase = false;

public:
	VirtualQSqlTableModel(): QSqlTableModel() {};
	VirtualQSqlTableModel(QObject* parent): QSqlTableModel(parent) {};
	VirtualQSqlTableModel(QObject* parent, const QSqlDatabase& db): QSqlTableModel(parent, db) {};

	~VirtualQSqlTableModel() {
		qsqltablemodel_settable_callback = nullptr;
		qsqltablemodel_flags_callback = nullptr;
		qsqltablemodel_data_callback = nullptr;
		qsqltablemodel_setdata_callback = nullptr;
		qsqltablemodel_clearitemdata_callback = nullptr;
		qsqltablemodel_headerdata_callback = nullptr;
		qsqltablemodel_clear_callback = nullptr;
		qsqltablemodel_seteditstrategy_callback = nullptr;
		qsqltablemodel_sort_callback = nullptr;
		qsqltablemodel_setsort_callback = nullptr;
		qsqltablemodel_setfilter_callback = nullptr;
		qsqltablemodel_rowcount_callback = nullptr;
		qsqltablemodel_removecolumns_callback = nullptr;
		qsqltablemodel_removerows_callback = nullptr;
		qsqltablemodel_insertrows_callback = nullptr;
		qsqltablemodel_revertrow_callback = nullptr;
		qsqltablemodel_select_callback = nullptr;
		qsqltablemodel_selectrow_callback = nullptr;
		qsqltablemodel_submit_callback = nullptr;
		qsqltablemodel_revert_callback = nullptr;
		qsqltablemodel_updaterowintable_callback = nullptr;
		qsqltablemodel_insertrowintotable_callback = nullptr;
		qsqltablemodel_deleterowfromtable_callback = nullptr;
		qsqltablemodel_orderbyclause_callback = nullptr;
		qsqltablemodel_selectstatement_callback = nullptr;
		qsqltablemodel_indexinquery_callback = nullptr;
		qsqltablemodel_setprimarykey_callback = nullptr;
		qsqltablemodel_primaryvalues_callback = nullptr;
	}

// Callback setters
	inline void setQSqlTableModel_SetTable_Callback(QSqlTableModel_SetTable_Callback cb) const { qsqltablemodel_settable_callback = cb; }
	inline void setQSqlTableModel_Flags_Callback(QSqlTableModel_Flags_Callback cb) const { qsqltablemodel_flags_callback = cb; }
	inline void setQSqlTableModel_Data_Callback(QSqlTableModel_Data_Callback cb) const { qsqltablemodel_data_callback = cb; }
	inline void setQSqlTableModel_SetData_Callback(QSqlTableModel_SetData_Callback cb) const { qsqltablemodel_setdata_callback = cb; }
	inline void setQSqlTableModel_ClearItemData_Callback(QSqlTableModel_ClearItemData_Callback cb) const { qsqltablemodel_clearitemdata_callback = cb; }
	inline void setQSqlTableModel_HeaderData_Callback(QSqlTableModel_HeaderData_Callback cb) const { qsqltablemodel_headerdata_callback = cb; }
	inline void setQSqlTableModel_Clear_Callback(QSqlTableModel_Clear_Callback cb) const { qsqltablemodel_clear_callback = cb; }
	inline void setQSqlTableModel_SetEditStrategy_Callback(QSqlTableModel_SetEditStrategy_Callback cb) const { qsqltablemodel_seteditstrategy_callback = cb; }
	inline void setQSqlTableModel_Sort_Callback(QSqlTableModel_Sort_Callback cb) const { qsqltablemodel_sort_callback = cb; }
	inline void setQSqlTableModel_SetSort_Callback(QSqlTableModel_SetSort_Callback cb) const { qsqltablemodel_setsort_callback = cb; }
	inline void setQSqlTableModel_SetFilter_Callback(QSqlTableModel_SetFilter_Callback cb) const { qsqltablemodel_setfilter_callback = cb; }
	inline void setQSqlTableModel_RowCount_Callback(QSqlTableModel_RowCount_Callback cb) const { qsqltablemodel_rowcount_callback = cb; }
	inline void setQSqlTableModel_RemoveColumns_Callback(QSqlTableModel_RemoveColumns_Callback cb) const { qsqltablemodel_removecolumns_callback = cb; }
	inline void setQSqlTableModel_RemoveRows_Callback(QSqlTableModel_RemoveRows_Callback cb) const { qsqltablemodel_removerows_callback = cb; }
	inline void setQSqlTableModel_InsertRows_Callback(QSqlTableModel_InsertRows_Callback cb) const { qsqltablemodel_insertrows_callback = cb; }
	inline void setQSqlTableModel_RevertRow_Callback(QSqlTableModel_RevertRow_Callback cb) const { qsqltablemodel_revertrow_callback = cb; }
	inline void setQSqlTableModel_Select_Callback(QSqlTableModel_Select_Callback cb) const { qsqltablemodel_select_callback = cb; }
	inline void setQSqlTableModel_SelectRow_Callback(QSqlTableModel_SelectRow_Callback cb) const { qsqltablemodel_selectrow_callback = cb; }
	inline void setQSqlTableModel_Submit_Callback(QSqlTableModel_Submit_Callback cb) const { qsqltablemodel_submit_callback = cb; }
	inline void setQSqlTableModel_Revert_Callback(QSqlTableModel_Revert_Callback cb) const { qsqltablemodel_revert_callback = cb; }
	inline void setQSqlTableModel_UpdateRowInTable_Callback(QSqlTableModel_UpdateRowInTable_Callback cb) const { qsqltablemodel_updaterowintable_callback = cb; }
	inline void setQSqlTableModel_InsertRowIntoTable_Callback(QSqlTableModel_InsertRowIntoTable_Callback cb) const { qsqltablemodel_insertrowintotable_callback = cb; }
	inline void setQSqlTableModel_DeleteRowFromTable_Callback(QSqlTableModel_DeleteRowFromTable_Callback cb) const { qsqltablemodel_deleterowfromtable_callback = cb; }
	inline void setQSqlTableModel_OrderByClause_Callback(QSqlTableModel_OrderByClause_Callback cb) const { qsqltablemodel_orderbyclause_callback = cb; }
	inline void setQSqlTableModel_SelectStatement_Callback(QSqlTableModel_SelectStatement_Callback cb) const { qsqltablemodel_selectstatement_callback = cb; }
	inline void setQSqlTableModel_IndexInQuery_Callback(QSqlTableModel_IndexInQuery_Callback cb) const { qsqltablemodel_indexinquery_callback = cb; }
	inline void setQSqlTableModel_SetPrimaryKey_Callback(QSqlTableModel_SetPrimaryKey_Callback cb) const { qsqltablemodel_setprimarykey_callback = cb; }
	inline void setQSqlTableModel_PrimaryValues_Callback(QSqlTableModel_PrimaryValues_Callback cb) const { qsqltablemodel_primaryvalues_callback = cb; }

// Base flag setters
	inline void setQSqlTableModel_SetTable_IsBase(bool value) const { qsqltablemodel_settable_isbase = value; }
	inline void setQSqlTableModel_Flags_IsBase(bool value) const { qsqltablemodel_flags_isbase = value; }
	inline void setQSqlTableModel_Data_IsBase(bool value) const { qsqltablemodel_data_isbase = value; }
	inline void setQSqlTableModel_SetData_IsBase(bool value) const { qsqltablemodel_setdata_isbase = value; }
	inline void setQSqlTableModel_ClearItemData_IsBase(bool value) const { qsqltablemodel_clearitemdata_isbase = value; }
	inline void setQSqlTableModel_HeaderData_IsBase(bool value) const { qsqltablemodel_headerdata_isbase = value; }
	inline void setQSqlTableModel_Clear_IsBase(bool value) const { qsqltablemodel_clear_isbase = value; }
	inline void setQSqlTableModel_SetEditStrategy_IsBase(bool value) const { qsqltablemodel_seteditstrategy_isbase = value; }
	inline void setQSqlTableModel_Sort_IsBase(bool value) const { qsqltablemodel_sort_isbase = value; }
	inline void setQSqlTableModel_SetSort_IsBase(bool value) const { qsqltablemodel_setsort_isbase = value; }
	inline void setQSqlTableModel_SetFilter_IsBase(bool value) const { qsqltablemodel_setfilter_isbase = value; }
	inline void setQSqlTableModel_RowCount_IsBase(bool value) const { qsqltablemodel_rowcount_isbase = value; }
	inline void setQSqlTableModel_RemoveColumns_IsBase(bool value) const { qsqltablemodel_removecolumns_isbase = value; }
	inline void setQSqlTableModel_RemoveRows_IsBase(bool value) const { qsqltablemodel_removerows_isbase = value; }
	inline void setQSqlTableModel_InsertRows_IsBase(bool value) const { qsqltablemodel_insertrows_isbase = value; }
	inline void setQSqlTableModel_RevertRow_IsBase(bool value) const { qsqltablemodel_revertrow_isbase = value; }
	inline void setQSqlTableModel_Select_IsBase(bool value) const { qsqltablemodel_select_isbase = value; }
	inline void setQSqlTableModel_SelectRow_IsBase(bool value) const { qsqltablemodel_selectrow_isbase = value; }
	inline void setQSqlTableModel_Submit_IsBase(bool value) const { qsqltablemodel_submit_isbase = value; }
	inline void setQSqlTableModel_Revert_IsBase(bool value) const { qsqltablemodel_revert_isbase = value; }
	inline void setQSqlTableModel_UpdateRowInTable_IsBase(bool value) const { qsqltablemodel_updaterowintable_isbase = value; }
	inline void setQSqlTableModel_InsertRowIntoTable_IsBase(bool value) const { qsqltablemodel_insertrowintotable_isbase = value; }
	inline void setQSqlTableModel_DeleteRowFromTable_IsBase(bool value) const { qsqltablemodel_deleterowfromtable_isbase = value; }
	inline void setQSqlTableModel_OrderByClause_IsBase(bool value) const { qsqltablemodel_orderbyclause_isbase = value; }
	inline void setQSqlTableModel_SelectStatement_IsBase(bool value) const { qsqltablemodel_selectstatement_isbase = value; }
	inline void setQSqlTableModel_IndexInQuery_IsBase(bool value) const { qsqltablemodel_indexinquery_isbase = value; }
	inline void setQSqlTableModel_SetPrimaryKey_IsBase(bool value) const { qsqltablemodel_setprimarykey_isbase = value; }
	inline void setQSqlTableModel_PrimaryValues_IsBase(bool value) const { qsqltablemodel_primaryvalues_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setTable(const QString& tableName) override {
		if (qsqltablemodel_settable_isbase) {
			qsqltablemodel_settable_isbase = false;
			QSqlTableModel::setTable(tableName);
		} else if (qsqltablemodel_settable_callback != nullptr) {
			QByteArray tableName_qb = tableName.toUtf8();
			libqt_string cbval1;
			cbval1.len = tableName_qb.length();
			cbval1.data = static_cast<const char*>(tableName_qb.constData());
			qsqltablemodel_settable_callback(this, cbval1);
		} else {
			QSqlTableModel::setTable(tableName);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::ItemFlag> flags(const QModelIndex& index) const override {
		if (qsqltablemodel_flags_isbase) {
			qsqltablemodel_flags_isbase = false;
			return QSqlTableModel::flags(index);
		} else if (qsqltablemodel_flags_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qsqltablemodel_flags_callback(this, cbval1);
			return static_cast<QFlags<Qt::ItemFlag>>(callback_ret);
		} else {
			return QSqlTableModel::flags(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant data(const QModelIndex& idx, int role) const override {
		if (qsqltablemodel_data_isbase) {
			qsqltablemodel_data_isbase = false;
			return QSqlTableModel::data(idx, role);
		} else if (qsqltablemodel_data_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&idx;
			int cbval2 = role;
			QVariant* callback_ret = qsqltablemodel_data_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QSqlTableModel::data(idx, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (qsqltablemodel_setdata_isbase) {
			qsqltablemodel_setdata_isbase = false;
			return QSqlTableModel::setData(index, value, role);
		} else if (qsqltablemodel_setdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			const QVariant* cbval2 = (const QVariant*)&value;
			int cbval3 = role;
			bool callback_ret = qsqltablemodel_setdata_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSqlTableModel::setData(index, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool clearItemData(const QModelIndex& index) override {
		if (qsqltablemodel_clearitemdata_isbase) {
			qsqltablemodel_clearitemdata_isbase = false;
			return QSqlTableModel::clearItemData(index);
		} else if (qsqltablemodel_clearitemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			bool callback_ret = qsqltablemodel_clearitemdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlTableModel::clearItemData(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (qsqltablemodel_headerdata_isbase) {
			qsqltablemodel_headerdata_isbase = false;
			return QSqlTableModel::headerData(section, orientation, role);
		} else if (qsqltablemodel_headerdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			int cbval3 = role;
			QVariant* callback_ret = qsqltablemodel_headerdata_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QSqlTableModel::headerData(section, orientation, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void clear() override {
		if (qsqltablemodel_clear_isbase) {
			qsqltablemodel_clear_isbase = false;
			QSqlTableModel::clear();
		} else if (qsqltablemodel_clear_callback != nullptr) {
			qsqltablemodel_clear_callback();
		} else {
			QSqlTableModel::clear();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setEditStrategy(EditStrategy strategy) override {
		if (qsqltablemodel_seteditstrategy_isbase) {
			qsqltablemodel_seteditstrategy_isbase = false;
			QSqlTableModel::setEditStrategy(strategy);
		} else if (qsqltablemodel_seteditstrategy_callback != nullptr) {
			int cbval1 = static_cast<int>(strategy);
			qsqltablemodel_seteditstrategy_callback(this, cbval1);
		} else {
			QSqlTableModel::setEditStrategy(strategy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sort(int column, Qt::SortOrder order) override {
		if (qsqltablemodel_sort_isbase) {
			qsqltablemodel_sort_isbase = false;
			QSqlTableModel::sort(column, order);
		} else if (qsqltablemodel_sort_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = static_cast<int>(order);
			qsqltablemodel_sort_callback(this, cbval1, cbval2);
		} else {
			QSqlTableModel::sort(column, order);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSort(int column, Qt::SortOrder order) override {
		if (qsqltablemodel_setsort_isbase) {
			qsqltablemodel_setsort_isbase = false;
			QSqlTableModel::setSort(column, order);
		} else if (qsqltablemodel_setsort_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = static_cast<int>(order);
			qsqltablemodel_setsort_callback(this, cbval1, cbval2);
		} else {
			QSqlTableModel::setSort(column, order);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setFilter(const QString& filter) override {
		if (qsqltablemodel_setfilter_isbase) {
			qsqltablemodel_setfilter_isbase = false;
			QSqlTableModel::setFilter(filter);
		} else if (qsqltablemodel_setfilter_callback != nullptr) {
			QByteArray filter_qb = filter.toUtf8();
			libqt_string cbval1;
			cbval1.len = filter_qb.length();
			cbval1.data = static_cast<const char*>(filter_qb.constData());
			qsqltablemodel_setfilter_callback(this, cbval1);
		} else {
			QSqlTableModel::setFilter(filter);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int rowCount(const QModelIndex& parent) const override {
		if (qsqltablemodel_rowcount_isbase) {
			qsqltablemodel_rowcount_isbase = false;
			return QSqlTableModel::rowCount(parent);
		} else if (qsqltablemodel_rowcount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qsqltablemodel_rowcount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlTableModel::rowCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (qsqltablemodel_removecolumns_isbase) {
			qsqltablemodel_removecolumns_isbase = false;
			return QSqlTableModel::removeColumns(column, count, parent);
		} else if (qsqltablemodel_removecolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qsqltablemodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSqlTableModel::removeColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (qsqltablemodel_removerows_isbase) {
			qsqltablemodel_removerows_isbase = false;
			return QSqlTableModel::removeRows(row, count, parent);
		} else if (qsqltablemodel_removerows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qsqltablemodel_removerows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSqlTableModel::removeRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (qsqltablemodel_insertrows_isbase) {
			qsqltablemodel_insertrows_isbase = false;
			return QSqlTableModel::insertRows(row, count, parent);
		} else if (qsqltablemodel_insertrows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qsqltablemodel_insertrows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSqlTableModel::insertRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void revertRow(int row) override {
		if (qsqltablemodel_revertrow_isbase) {
			qsqltablemodel_revertrow_isbase = false;
			QSqlTableModel::revertRow(row);
		} else if (qsqltablemodel_revertrow_callback != nullptr) {
			int cbval1 = row;
			qsqltablemodel_revertrow_callback(this, cbval1);
		} else {
			QSqlTableModel::revertRow(row);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool select() override {
		if (qsqltablemodel_select_isbase) {
			qsqltablemodel_select_isbase = false;
			return QSqlTableModel::select();
		} else if (qsqltablemodel_select_callback != nullptr) {
			bool callback_ret = qsqltablemodel_select_callback();
			return callback_ret;
		} else {
			return QSqlTableModel::select();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool selectRow(int row) override {
		if (qsqltablemodel_selectrow_isbase) {
			qsqltablemodel_selectrow_isbase = false;
			return QSqlTableModel::selectRow(row);
		} else if (qsqltablemodel_selectrow_callback != nullptr) {
			int cbval1 = row;
			bool callback_ret = qsqltablemodel_selectrow_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlTableModel::selectRow(row);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool submit() override {
		if (qsqltablemodel_submit_isbase) {
			qsqltablemodel_submit_isbase = false;
			return QSqlTableModel::submit();
		} else if (qsqltablemodel_submit_callback != nullptr) {
			bool callback_ret = qsqltablemodel_submit_callback();
			return callback_ret;
		} else {
			return QSqlTableModel::submit();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void revert() override {
		if (qsqltablemodel_revert_isbase) {
			qsqltablemodel_revert_isbase = false;
			QSqlTableModel::revert();
		} else if (qsqltablemodel_revert_callback != nullptr) {
			qsqltablemodel_revert_callback();
		} else {
			QSqlTableModel::revert();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool updateRowInTable(int row, const QSqlRecord& values) override {
		if (qsqltablemodel_updaterowintable_isbase) {
			qsqltablemodel_updaterowintable_isbase = false;
			return QSqlTableModel::updateRowInTable(row, values);
		} else if (qsqltablemodel_updaterowintable_callback != nullptr) {
			int cbval1 = row;
			const QSqlRecord* cbval2 = (const QSqlRecord*)&values;
			bool callback_ret = qsqltablemodel_updaterowintable_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QSqlTableModel::updateRowInTable(row, values);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertRowIntoTable(const QSqlRecord& values) override {
		if (qsqltablemodel_insertrowintotable_isbase) {
			qsqltablemodel_insertrowintotable_isbase = false;
			return QSqlTableModel::insertRowIntoTable(values);
		} else if (qsqltablemodel_insertrowintotable_callback != nullptr) {
			const QSqlRecord* cbval1 = (const QSqlRecord*)&values;
			bool callback_ret = qsqltablemodel_insertrowintotable_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlTableModel::insertRowIntoTable(values);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool deleteRowFromTable(int row) override {
		if (qsqltablemodel_deleterowfromtable_isbase) {
			qsqltablemodel_deleterowfromtable_isbase = false;
			return QSqlTableModel::deleteRowFromTable(row);
		} else if (qsqltablemodel_deleterowfromtable_callback != nullptr) {
			int cbval1 = row;
			bool callback_ret = qsqltablemodel_deleterowfromtable_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlTableModel::deleteRowFromTable(row);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString orderByClause() const override {
		if (qsqltablemodel_orderbyclause_isbase) {
			qsqltablemodel_orderbyclause_isbase = false;
			return QSqlTableModel::orderByClause();
		} else if (qsqltablemodel_orderbyclause_callback != nullptr) {
			const char* callback_ret = qsqltablemodel_orderbyclause_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSqlTableModel::orderByClause();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString selectStatement() const override {
		if (qsqltablemodel_selectstatement_isbase) {
			qsqltablemodel_selectstatement_isbase = false;
			return QSqlTableModel::selectStatement();
		} else if (qsqltablemodel_selectstatement_callback != nullptr) {
			const char* callback_ret = qsqltablemodel_selectstatement_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSqlTableModel::selectStatement();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex indexInQuery(const QModelIndex& item) const override {
		if (qsqltablemodel_indexinquery_isbase) {
			qsqltablemodel_indexinquery_isbase = false;
			return QSqlTableModel::indexInQuery(item);
		} else if (qsqltablemodel_indexinquery_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&item;
			QModelIndex* callback_ret = qsqltablemodel_indexinquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSqlTableModel::indexInQuery(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setPrimaryKey(const QSqlIndex& key) {
		if (qsqltablemodel_setprimarykey_isbase) {
			qsqltablemodel_setprimarykey_isbase = false;
			QSqlTableModel::setPrimaryKey(key);
		} else if (qsqltablemodel_setprimarykey_callback != nullptr) {
			const QSqlIndex* cbval1 = (const QSqlIndex*)&key;
			qsqltablemodel_setprimarykey_callback(this, cbval1);
		} else {
			QSqlTableModel::setPrimaryKey(key);
		}
	}

	// Virtual method for C ABI access and custom callback
	QSqlRecord primaryValues(int row) const {
		if (qsqltablemodel_primaryvalues_isbase) {
			qsqltablemodel_primaryvalues_isbase = false;
			return QSqlTableModel::primaryValues(row);
		} else if (qsqltablemodel_primaryvalues_callback != nullptr) {
			int cbval1 = row;
			QSqlRecord* callback_ret = qsqltablemodel_primaryvalues_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSqlTableModel::primaryValues(row);
		}
	}

	// Friend functions
	friend bool QSqlTableModel_UpdateRowInTable(QSqlTableModel* self, int row, const QSqlRecord* values);
	friend bool QSqlTableModel_QBaseUpdateRowInTable(QSqlTableModel* self, int row, const QSqlRecord* values);
	friend bool QSqlTableModel_InsertRowIntoTable(QSqlTableModel* self, const QSqlRecord* values);
	friend bool QSqlTableModel_QBaseInsertRowIntoTable(QSqlTableModel* self, const QSqlRecord* values);
	friend bool QSqlTableModel_DeleteRowFromTable(QSqlTableModel* self, int row);
	friend bool QSqlTableModel_QBaseDeleteRowFromTable(QSqlTableModel* self, int row);
	friend libqt_string QSqlTableModel_OrderByClause(const QSqlTableModel* self);
	friend libqt_string QSqlTableModel_QBaseOrderByClause(const QSqlTableModel* self);
	friend libqt_string QSqlTableModel_SelectStatement(const QSqlTableModel* self);
	friend libqt_string QSqlTableModel_QBaseSelectStatement(const QSqlTableModel* self);
	friend QModelIndex* QSqlTableModel_IndexInQuery(const QSqlTableModel* self, const QModelIndex* item);
	friend QModelIndex* QSqlTableModel_QBaseIndexInQuery(const QSqlTableModel* self, const QModelIndex* item);
	friend void QSqlTableModel_SetPrimaryKey(QSqlTableModel* self, const QSqlIndex* key);
	friend void QSqlTableModel_QBaseSetPrimaryKey(QSqlTableModel* self, const QSqlIndex* key);
	friend QSqlRecord* QSqlTableModel_PrimaryValues(const QSqlTableModel* self, int row);
	friend QSqlRecord* QSqlTableModel_QBasePrimaryValues(const QSqlTableModel* self, int row);
};

#endif


