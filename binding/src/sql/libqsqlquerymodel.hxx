#pragma once
#ifndef QSQLQUERYMODEL_H_C_LIBVIRTUAL
#define QSQLQUERYMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSqlQueryModel so that we can call protected methods
class VirtualQSqlQueryModel final : public QSqlQueryModel {

public:
	// Virtual class boolean flag
	bool isVirtualQSqlQueryModel= true;

	// Virtual class public types (including callbacks)
	using QSqlQueryModel_RowCount_Callback = int (*)(const QSqlQueryModel*, const QModelIndex*);
	using QSqlQueryModel_ColumnCount_Callback = int (*)(const QSqlQueryModel*, const QModelIndex*);
	using QSqlQueryModel_Data_Callback = QVariant* (*)(const QSqlQueryModel*, const QModelIndex*, int);
	using QSqlQueryModel_HeaderData_Callback = QVariant* (*)(const QSqlQueryModel*, int, int, int);
	using QSqlQueryModel_SetHeaderData_Callback = bool (*)(QSqlQueryModel*, int, int, const QVariant*, int);
	using QSqlQueryModel_InsertColumns_Callback = bool (*)(QSqlQueryModel*, int, int, const QModelIndex*);
	using QSqlQueryModel_RemoveColumns_Callback = bool (*)(QSqlQueryModel*, int, int, const QModelIndex*);
	using QSqlQueryModel_Clear_Callback = void (*)();
	using QSqlQueryModel_FetchMore_Callback = void (*)(QSqlQueryModel*, const QModelIndex*);
	using QSqlQueryModel_CanFetchMore_Callback = bool (*)(const QSqlQueryModel*, const QModelIndex*);
	using QSqlQueryModel_RoleNames_Callback = libqt_map (*)();
	using QSqlQueryModel_QueryChange_Callback = void (*)();
	using QSqlQueryModel_IndexInQuery_Callback = QModelIndex* (*)(const QSqlQueryModel*, const QModelIndex*);
	using QSqlQueryModel_BeginInsertRows_Callback = void (*)(QSqlQueryModel*, const QModelIndex*, int, int);
	using QSqlQueryModel_EndInsertRows_Callback = void (*)();
	using QSqlQueryModel_BeginRemoveRows_Callback = void (*)(QSqlQueryModel*, const QModelIndex*, int, int);
	using QSqlQueryModel_EndRemoveRows_Callback = void (*)();
	using QSqlQueryModel_BeginInsertColumns_Callback = void (*)(QSqlQueryModel*, const QModelIndex*, int, int);
	using QSqlQueryModel_EndInsertColumns_Callback = void (*)();
	using QSqlQueryModel_BeginRemoveColumns_Callback = void (*)(QSqlQueryModel*, const QModelIndex*, int, int);
	using QSqlQueryModel_EndRemoveColumns_Callback = void (*)();
	using QSqlQueryModel_BeginResetModel_Callback = void (*)();
	using QSqlQueryModel_EndResetModel_Callback = void (*)();
	using QSqlQueryModel_SetLastError_Callback = void (*)(QSqlQueryModel*, const QSqlError*);

protected:
	// Instance callback storage
	mutable QSqlQueryModel_RowCount_Callback qsqlquerymodel_rowcount_callback = nullptr;
	mutable QSqlQueryModel_ColumnCount_Callback qsqlquerymodel_columncount_callback = nullptr;
	mutable QSqlQueryModel_Data_Callback qsqlquerymodel_data_callback = nullptr;
	mutable QSqlQueryModel_HeaderData_Callback qsqlquerymodel_headerdata_callback = nullptr;
	mutable QSqlQueryModel_SetHeaderData_Callback qsqlquerymodel_setheaderdata_callback = nullptr;
	mutable QSqlQueryModel_InsertColumns_Callback qsqlquerymodel_insertcolumns_callback = nullptr;
	mutable QSqlQueryModel_RemoveColumns_Callback qsqlquerymodel_removecolumns_callback = nullptr;
	mutable QSqlQueryModel_Clear_Callback qsqlquerymodel_clear_callback = nullptr;
	mutable QSqlQueryModel_FetchMore_Callback qsqlquerymodel_fetchmore_callback = nullptr;
	mutable QSqlQueryModel_CanFetchMore_Callback qsqlquerymodel_canfetchmore_callback = nullptr;
	mutable QSqlQueryModel_RoleNames_Callback qsqlquerymodel_rolenames_callback = nullptr;
	mutable QSqlQueryModel_QueryChange_Callback qsqlquerymodel_querychange_callback = nullptr;
	mutable QSqlQueryModel_IndexInQuery_Callback qsqlquerymodel_indexinquery_callback = nullptr;
	mutable QSqlQueryModel_BeginInsertRows_Callback qsqlquerymodel_begininsertrows_callback = nullptr;
	mutable QSqlQueryModel_EndInsertRows_Callback qsqlquerymodel_endinsertrows_callback = nullptr;
	mutable QSqlQueryModel_BeginRemoveRows_Callback qsqlquerymodel_beginremoverows_callback = nullptr;
	mutable QSqlQueryModel_EndRemoveRows_Callback qsqlquerymodel_endremoverows_callback = nullptr;
	mutable QSqlQueryModel_BeginInsertColumns_Callback qsqlquerymodel_begininsertcolumns_callback = nullptr;
	mutable QSqlQueryModel_EndInsertColumns_Callback qsqlquerymodel_endinsertcolumns_callback = nullptr;
	mutable QSqlQueryModel_BeginRemoveColumns_Callback qsqlquerymodel_beginremovecolumns_callback = nullptr;
	mutable QSqlQueryModel_EndRemoveColumns_Callback qsqlquerymodel_endremovecolumns_callback = nullptr;
	mutable QSqlQueryModel_BeginResetModel_Callback qsqlquerymodel_beginresetmodel_callback = nullptr;
	mutable QSqlQueryModel_EndResetModel_Callback qsqlquerymodel_endresetmodel_callback = nullptr;
	mutable QSqlQueryModel_SetLastError_Callback qsqlquerymodel_setlasterror_callback = nullptr;

	// Instance base flags
    mutable bool qsqlquerymodel_rowcount_isbase = false;
    mutable bool qsqlquerymodel_columncount_isbase = false;
    mutable bool qsqlquerymodel_data_isbase = false;
    mutable bool qsqlquerymodel_headerdata_isbase = false;
    mutable bool qsqlquerymodel_setheaderdata_isbase = false;
    mutable bool qsqlquerymodel_insertcolumns_isbase = false;
    mutable bool qsqlquerymodel_removecolumns_isbase = false;
    mutable bool qsqlquerymodel_clear_isbase = false;
    mutable bool qsqlquerymodel_fetchmore_isbase = false;
    mutable bool qsqlquerymodel_canfetchmore_isbase = false;
    mutable bool qsqlquerymodel_rolenames_isbase = false;
    mutable bool qsqlquerymodel_querychange_isbase = false;
    mutable bool qsqlquerymodel_indexinquery_isbase = false;
    mutable bool qsqlquerymodel_begininsertrows_isbase = false;
    mutable bool qsqlquerymodel_endinsertrows_isbase = false;
    mutable bool qsqlquerymodel_beginremoverows_isbase = false;
    mutable bool qsqlquerymodel_endremoverows_isbase = false;
    mutable bool qsqlquerymodel_begininsertcolumns_isbase = false;
    mutable bool qsqlquerymodel_endinsertcolumns_isbase = false;
    mutable bool qsqlquerymodel_beginremovecolumns_isbase = false;
    mutable bool qsqlquerymodel_endremovecolumns_isbase = false;
    mutable bool qsqlquerymodel_beginresetmodel_isbase = false;
    mutable bool qsqlquerymodel_endresetmodel_isbase = false;
    mutable bool qsqlquerymodel_setlasterror_isbase = false;

public:
	VirtualQSqlQueryModel(): QSqlQueryModel() {};
	VirtualQSqlQueryModel(QObject* parent): QSqlQueryModel(parent) {};

	~VirtualQSqlQueryModel() {
		qsqlquerymodel_rowcount_callback = nullptr;
		qsqlquerymodel_columncount_callback = nullptr;
		qsqlquerymodel_data_callback = nullptr;
		qsqlquerymodel_headerdata_callback = nullptr;
		qsqlquerymodel_setheaderdata_callback = nullptr;
		qsqlquerymodel_insertcolumns_callback = nullptr;
		qsqlquerymodel_removecolumns_callback = nullptr;
		qsqlquerymodel_clear_callback = nullptr;
		qsqlquerymodel_fetchmore_callback = nullptr;
		qsqlquerymodel_canfetchmore_callback = nullptr;
		qsqlquerymodel_rolenames_callback = nullptr;
		qsqlquerymodel_querychange_callback = nullptr;
		qsqlquerymodel_indexinquery_callback = nullptr;
		qsqlquerymodel_begininsertrows_callback = nullptr;
		qsqlquerymodel_endinsertrows_callback = nullptr;
		qsqlquerymodel_beginremoverows_callback = nullptr;
		qsqlquerymodel_endremoverows_callback = nullptr;
		qsqlquerymodel_begininsertcolumns_callback = nullptr;
		qsqlquerymodel_endinsertcolumns_callback = nullptr;
		qsqlquerymodel_beginremovecolumns_callback = nullptr;
		qsqlquerymodel_endremovecolumns_callback = nullptr;
		qsqlquerymodel_beginresetmodel_callback = nullptr;
		qsqlquerymodel_endresetmodel_callback = nullptr;
		qsqlquerymodel_setlasterror_callback = nullptr;
	}

// Callback setters
	inline void setQSqlQueryModel_RowCount_Callback(QSqlQueryModel_RowCount_Callback cb) const { qsqlquerymodel_rowcount_callback = cb; }
	inline void setQSqlQueryModel_ColumnCount_Callback(QSqlQueryModel_ColumnCount_Callback cb) const { qsqlquerymodel_columncount_callback = cb; }
	inline void setQSqlQueryModel_Data_Callback(QSqlQueryModel_Data_Callback cb) const { qsqlquerymodel_data_callback = cb; }
	inline void setQSqlQueryModel_HeaderData_Callback(QSqlQueryModel_HeaderData_Callback cb) const { qsqlquerymodel_headerdata_callback = cb; }
	inline void setQSqlQueryModel_SetHeaderData_Callback(QSqlQueryModel_SetHeaderData_Callback cb) const { qsqlquerymodel_setheaderdata_callback = cb; }
	inline void setQSqlQueryModel_InsertColumns_Callback(QSqlQueryModel_InsertColumns_Callback cb) const { qsqlquerymodel_insertcolumns_callback = cb; }
	inline void setQSqlQueryModel_RemoveColumns_Callback(QSqlQueryModel_RemoveColumns_Callback cb) const { qsqlquerymodel_removecolumns_callback = cb; }
	inline void setQSqlQueryModel_Clear_Callback(QSqlQueryModel_Clear_Callback cb) const { qsqlquerymodel_clear_callback = cb; }
	inline void setQSqlQueryModel_FetchMore_Callback(QSqlQueryModel_FetchMore_Callback cb) const { qsqlquerymodel_fetchmore_callback = cb; }
	inline void setQSqlQueryModel_CanFetchMore_Callback(QSqlQueryModel_CanFetchMore_Callback cb) const { qsqlquerymodel_canfetchmore_callback = cb; }
	inline void setQSqlQueryModel_RoleNames_Callback(QSqlQueryModel_RoleNames_Callback cb) const { qsqlquerymodel_rolenames_callback = cb; }
	inline void setQSqlQueryModel_QueryChange_Callback(QSqlQueryModel_QueryChange_Callback cb) const { qsqlquerymodel_querychange_callback = cb; }
	inline void setQSqlQueryModel_IndexInQuery_Callback(QSqlQueryModel_IndexInQuery_Callback cb) const { qsqlquerymodel_indexinquery_callback = cb; }
	inline void setQSqlQueryModel_BeginInsertRows_Callback(QSqlQueryModel_BeginInsertRows_Callback cb) const { qsqlquerymodel_begininsertrows_callback = cb; }
	inline void setQSqlQueryModel_EndInsertRows_Callback(QSqlQueryModel_EndInsertRows_Callback cb) const { qsqlquerymodel_endinsertrows_callback = cb; }
	inline void setQSqlQueryModel_BeginRemoveRows_Callback(QSqlQueryModel_BeginRemoveRows_Callback cb) const { qsqlquerymodel_beginremoverows_callback = cb; }
	inline void setQSqlQueryModel_EndRemoveRows_Callback(QSqlQueryModel_EndRemoveRows_Callback cb) const { qsqlquerymodel_endremoverows_callback = cb; }
	inline void setQSqlQueryModel_BeginInsertColumns_Callback(QSqlQueryModel_BeginInsertColumns_Callback cb) const { qsqlquerymodel_begininsertcolumns_callback = cb; }
	inline void setQSqlQueryModel_EndInsertColumns_Callback(QSqlQueryModel_EndInsertColumns_Callback cb) const { qsqlquerymodel_endinsertcolumns_callback = cb; }
	inline void setQSqlQueryModel_BeginRemoveColumns_Callback(QSqlQueryModel_BeginRemoveColumns_Callback cb) const { qsqlquerymodel_beginremovecolumns_callback = cb; }
	inline void setQSqlQueryModel_EndRemoveColumns_Callback(QSqlQueryModel_EndRemoveColumns_Callback cb) const { qsqlquerymodel_endremovecolumns_callback = cb; }
	inline void setQSqlQueryModel_BeginResetModel_Callback(QSqlQueryModel_BeginResetModel_Callback cb) const { qsqlquerymodel_beginresetmodel_callback = cb; }
	inline void setQSqlQueryModel_EndResetModel_Callback(QSqlQueryModel_EndResetModel_Callback cb) const { qsqlquerymodel_endresetmodel_callback = cb; }
	inline void setQSqlQueryModel_SetLastError_Callback(QSqlQueryModel_SetLastError_Callback cb) const { qsqlquerymodel_setlasterror_callback = cb; }

// Base flag setters
	inline void setQSqlQueryModel_RowCount_IsBase(bool value) const { qsqlquerymodel_rowcount_isbase = value; }
	inline void setQSqlQueryModel_ColumnCount_IsBase(bool value) const { qsqlquerymodel_columncount_isbase = value; }
	inline void setQSqlQueryModel_Data_IsBase(bool value) const { qsqlquerymodel_data_isbase = value; }
	inline void setQSqlQueryModel_HeaderData_IsBase(bool value) const { qsqlquerymodel_headerdata_isbase = value; }
	inline void setQSqlQueryModel_SetHeaderData_IsBase(bool value) const { qsqlquerymodel_setheaderdata_isbase = value; }
	inline void setQSqlQueryModel_InsertColumns_IsBase(bool value) const { qsqlquerymodel_insertcolumns_isbase = value; }
	inline void setQSqlQueryModel_RemoveColumns_IsBase(bool value) const { qsqlquerymodel_removecolumns_isbase = value; }
	inline void setQSqlQueryModel_Clear_IsBase(bool value) const { qsqlquerymodel_clear_isbase = value; }
	inline void setQSqlQueryModel_FetchMore_IsBase(bool value) const { qsqlquerymodel_fetchmore_isbase = value; }
	inline void setQSqlQueryModel_CanFetchMore_IsBase(bool value) const { qsqlquerymodel_canfetchmore_isbase = value; }
	inline void setQSqlQueryModel_RoleNames_IsBase(bool value) const { qsqlquerymodel_rolenames_isbase = value; }
	inline void setQSqlQueryModel_QueryChange_IsBase(bool value) const { qsqlquerymodel_querychange_isbase = value; }
	inline void setQSqlQueryModel_IndexInQuery_IsBase(bool value) const { qsqlquerymodel_indexinquery_isbase = value; }
	inline void setQSqlQueryModel_BeginInsertRows_IsBase(bool value) const { qsqlquerymodel_begininsertrows_isbase = value; }
	inline void setQSqlQueryModel_EndInsertRows_IsBase(bool value) const { qsqlquerymodel_endinsertrows_isbase = value; }
	inline void setQSqlQueryModel_BeginRemoveRows_IsBase(bool value) const { qsqlquerymodel_beginremoverows_isbase = value; }
	inline void setQSqlQueryModel_EndRemoveRows_IsBase(bool value) const { qsqlquerymodel_endremoverows_isbase = value; }
	inline void setQSqlQueryModel_BeginInsertColumns_IsBase(bool value) const { qsqlquerymodel_begininsertcolumns_isbase = value; }
	inline void setQSqlQueryModel_EndInsertColumns_IsBase(bool value) const { qsqlquerymodel_endinsertcolumns_isbase = value; }
	inline void setQSqlQueryModel_BeginRemoveColumns_IsBase(bool value) const { qsqlquerymodel_beginremovecolumns_isbase = value; }
	inline void setQSqlQueryModel_EndRemoveColumns_IsBase(bool value) const { qsqlquerymodel_endremovecolumns_isbase = value; }
	inline void setQSqlQueryModel_BeginResetModel_IsBase(bool value) const { qsqlquerymodel_beginresetmodel_isbase = value; }
	inline void setQSqlQueryModel_EndResetModel_IsBase(bool value) const { qsqlquerymodel_endresetmodel_isbase = value; }
	inline void setQSqlQueryModel_SetLastError_IsBase(bool value) const { qsqlquerymodel_setlasterror_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int rowCount(const QModelIndex& parent) const override {
		if (qsqlquerymodel_rowcount_isbase) {
			qsqlquerymodel_rowcount_isbase = false;
			return QSqlQueryModel::rowCount(parent);
		} else if (qsqlquerymodel_rowcount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qsqlquerymodel_rowcount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlQueryModel::rowCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int columnCount(const QModelIndex& parent) const override {
		if (qsqlquerymodel_columncount_isbase) {
			qsqlquerymodel_columncount_isbase = false;
			return QSqlQueryModel::columnCount(parent);
		} else if (qsqlquerymodel_columncount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qsqlquerymodel_columncount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlQueryModel::columnCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant data(const QModelIndex& item, int role) const override {
		if (qsqlquerymodel_data_isbase) {
			qsqlquerymodel_data_isbase = false;
			return QSqlQueryModel::data(item, role);
		} else if (qsqlquerymodel_data_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&item;
			int cbval2 = role;
			QVariant* callback_ret = qsqlquerymodel_data_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QSqlQueryModel::data(item, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (qsqlquerymodel_headerdata_isbase) {
			qsqlquerymodel_headerdata_isbase = false;
			return QSqlQueryModel::headerData(section, orientation, role);
		} else if (qsqlquerymodel_headerdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			int cbval3 = role;
			QVariant* callback_ret = qsqlquerymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QSqlQueryModel::headerData(section, orientation, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (qsqlquerymodel_setheaderdata_isbase) {
			qsqlquerymodel_setheaderdata_isbase = false;
			return QSqlQueryModel::setHeaderData(section, orientation, value, role);
		} else if (qsqlquerymodel_setheaderdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			const QVariant* cbval3 = (const QVariant*)&value;
			int cbval4 = role;
			bool callback_ret = qsqlquerymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QSqlQueryModel::setHeaderData(section, orientation, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (qsqlquerymodel_insertcolumns_isbase) {
			qsqlquerymodel_insertcolumns_isbase = false;
			return QSqlQueryModel::insertColumns(column, count, parent);
		} else if (qsqlquerymodel_insertcolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qsqlquerymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSqlQueryModel::insertColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (qsqlquerymodel_removecolumns_isbase) {
			qsqlquerymodel_removecolumns_isbase = false;
			return QSqlQueryModel::removeColumns(column, count, parent);
		} else if (qsqlquerymodel_removecolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qsqlquerymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSqlQueryModel::removeColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void clear() override {
		if (qsqlquerymodel_clear_isbase) {
			qsqlquerymodel_clear_isbase = false;
			QSqlQueryModel::clear();
		} else if (qsqlquerymodel_clear_callback != nullptr) {
			qsqlquerymodel_clear_callback();
		} else {
			QSqlQueryModel::clear();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fetchMore(const QModelIndex& parent) override {
		if (qsqlquerymodel_fetchmore_isbase) {
			qsqlquerymodel_fetchmore_isbase = false;
			QSqlQueryModel::fetchMore(parent);
		} else if (qsqlquerymodel_fetchmore_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			qsqlquerymodel_fetchmore_callback(this, cbval1);
		} else {
			QSqlQueryModel::fetchMore(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (qsqlquerymodel_canfetchmore_isbase) {
			qsqlquerymodel_canfetchmore_isbase = false;
			return QSqlQueryModel::canFetchMore(parent);
		} else if (qsqlquerymodel_canfetchmore_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			bool callback_ret = qsqlquerymodel_canfetchmore_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlQueryModel::canFetchMore(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QHash<int, QByteArray> roleNames() const override {
		if (qsqlquerymodel_rolenames_isbase) {
			qsqlquerymodel_rolenames_isbase = false;
			return QSqlQueryModel::roleNames();
		} else if (qsqlquerymodel_rolenames_callback != nullptr) {
			libqt_map callback_ret = qsqlquerymodel_rolenames_callback();
			return callback_ret;
		} else {
			return QSqlQueryModel::roleNames();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void queryChange() override {
		if (qsqlquerymodel_querychange_isbase) {
			qsqlquerymodel_querychange_isbase = false;
			QSqlQueryModel::queryChange();
		} else if (qsqlquerymodel_querychange_callback != nullptr) {
			qsqlquerymodel_querychange_callback();
		} else {
			QSqlQueryModel::queryChange();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex indexInQuery(const QModelIndex& item) const override {
		if (qsqlquerymodel_indexinquery_isbase) {
			qsqlquerymodel_indexinquery_isbase = false;
			return QSqlQueryModel::indexInQuery(item);
		} else if (qsqlquerymodel_indexinquery_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&item;
			QModelIndex* callback_ret = qsqlquerymodel_indexinquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSqlQueryModel::indexInQuery(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	void beginInsertRows(const QModelIndex& parent, int first, int last) {
		if (qsqlquerymodel_begininsertrows_isbase) {
			qsqlquerymodel_begininsertrows_isbase = false;
			QSqlQueryModel::beginInsertRows(parent, first, last);
		} else if (qsqlquerymodel_begininsertrows_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = first;
			int cbval3 = last;
			qsqlquerymodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
		} else {
			QSqlQueryModel::beginInsertRows(parent, first, last);
		}
	}

	// Virtual method for C ABI access and custom callback
	void endInsertRows() {
		if (qsqlquerymodel_endinsertrows_isbase) {
			qsqlquerymodel_endinsertrows_isbase = false;
			QSqlQueryModel::endInsertRows();
		} else if (qsqlquerymodel_endinsertrows_callback != nullptr) {
			qsqlquerymodel_endinsertrows_callback();
		} else {
			QSqlQueryModel::endInsertRows();
		}
	}

	// Virtual method for C ABI access and custom callback
	void beginRemoveRows(const QModelIndex& parent, int first, int last) {
		if (qsqlquerymodel_beginremoverows_isbase) {
			qsqlquerymodel_beginremoverows_isbase = false;
			QSqlQueryModel::beginRemoveRows(parent, first, last);
		} else if (qsqlquerymodel_beginremoverows_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = first;
			int cbval3 = last;
			qsqlquerymodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
		} else {
			QSqlQueryModel::beginRemoveRows(parent, first, last);
		}
	}

	// Virtual method for C ABI access and custom callback
	void endRemoveRows() {
		if (qsqlquerymodel_endremoverows_isbase) {
			qsqlquerymodel_endremoverows_isbase = false;
			QSqlQueryModel::endRemoveRows();
		} else if (qsqlquerymodel_endremoverows_callback != nullptr) {
			qsqlquerymodel_endremoverows_callback();
		} else {
			QSqlQueryModel::endRemoveRows();
		}
	}

	// Virtual method for C ABI access and custom callback
	void beginInsertColumns(const QModelIndex& parent, int first, int last) {
		if (qsqlquerymodel_begininsertcolumns_isbase) {
			qsqlquerymodel_begininsertcolumns_isbase = false;
			QSqlQueryModel::beginInsertColumns(parent, first, last);
		} else if (qsqlquerymodel_begininsertcolumns_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = first;
			int cbval3 = last;
			qsqlquerymodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
		} else {
			QSqlQueryModel::beginInsertColumns(parent, first, last);
		}
	}

	// Virtual method for C ABI access and custom callback
	void endInsertColumns() {
		if (qsqlquerymodel_endinsertcolumns_isbase) {
			qsqlquerymodel_endinsertcolumns_isbase = false;
			QSqlQueryModel::endInsertColumns();
		} else if (qsqlquerymodel_endinsertcolumns_callback != nullptr) {
			qsqlquerymodel_endinsertcolumns_callback();
		} else {
			QSqlQueryModel::endInsertColumns();
		}
	}

	// Virtual method for C ABI access and custom callback
	void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
		if (qsqlquerymodel_beginremovecolumns_isbase) {
			qsqlquerymodel_beginremovecolumns_isbase = false;
			QSqlQueryModel::beginRemoveColumns(parent, first, last);
		} else if (qsqlquerymodel_beginremovecolumns_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = first;
			int cbval3 = last;
			qsqlquerymodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
		} else {
			QSqlQueryModel::beginRemoveColumns(parent, first, last);
		}
	}

	// Virtual method for C ABI access and custom callback
	void endRemoveColumns() {
		if (qsqlquerymodel_endremovecolumns_isbase) {
			qsqlquerymodel_endremovecolumns_isbase = false;
			QSqlQueryModel::endRemoveColumns();
		} else if (qsqlquerymodel_endremovecolumns_callback != nullptr) {
			qsqlquerymodel_endremovecolumns_callback();
		} else {
			QSqlQueryModel::endRemoveColumns();
		}
	}

	// Virtual method for C ABI access and custom callback
	void beginResetModel() {
		if (qsqlquerymodel_beginresetmodel_isbase) {
			qsqlquerymodel_beginresetmodel_isbase = false;
			QSqlQueryModel::beginResetModel();
		} else if (qsqlquerymodel_beginresetmodel_callback != nullptr) {
			qsqlquerymodel_beginresetmodel_callback();
		} else {
			QSqlQueryModel::beginResetModel();
		}
	}

	// Virtual method for C ABI access and custom callback
	void endResetModel() {
		if (qsqlquerymodel_endresetmodel_isbase) {
			qsqlquerymodel_endresetmodel_isbase = false;
			QSqlQueryModel::endResetModel();
		} else if (qsqlquerymodel_endresetmodel_callback != nullptr) {
			qsqlquerymodel_endresetmodel_callback();
		} else {
			QSqlQueryModel::endResetModel();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setLastError(const QSqlError& errorVal) {
		if (qsqlquerymodel_setlasterror_isbase) {
			qsqlquerymodel_setlasterror_isbase = false;
			QSqlQueryModel::setLastError(errorVal);
		} else if (qsqlquerymodel_setlasterror_callback != nullptr) {
			const QSqlError* cbval1 = (const QSqlError*)&errorVal;
			qsqlquerymodel_setlasterror_callback(this, cbval1);
		} else {
			QSqlQueryModel::setLastError(errorVal);
		}
	}

	// Friend functions
	friend void QSqlQueryModel_QueryChange(QSqlQueryModel* self);
	friend void QSqlQueryModel_QBaseQueryChange(QSqlQueryModel* self);
	friend QModelIndex* QSqlQueryModel_IndexInQuery(const QSqlQueryModel* self, const QModelIndex* item);
	friend QModelIndex* QSqlQueryModel_QBaseIndexInQuery(const QSqlQueryModel* self, const QModelIndex* item);
	friend void QSqlQueryModel_BeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
	friend void QSqlQueryModel_QBaseBeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
	friend void QSqlQueryModel_EndInsertRows(QSqlQueryModel* self);
	friend void QSqlQueryModel_QBaseEndInsertRows(QSqlQueryModel* self);
	friend void QSqlQueryModel_BeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
	friend void QSqlQueryModel_QBaseBeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
	friend void QSqlQueryModel_EndRemoveRows(QSqlQueryModel* self);
	friend void QSqlQueryModel_QBaseEndRemoveRows(QSqlQueryModel* self);
	friend void QSqlQueryModel_BeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
	friend void QSqlQueryModel_QBaseBeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
	friend void QSqlQueryModel_EndInsertColumns(QSqlQueryModel* self);
	friend void QSqlQueryModel_QBaseEndInsertColumns(QSqlQueryModel* self);
	friend void QSqlQueryModel_BeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
	friend void QSqlQueryModel_QBaseBeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
	friend void QSqlQueryModel_EndRemoveColumns(QSqlQueryModel* self);
	friend void QSqlQueryModel_QBaseEndRemoveColumns(QSqlQueryModel* self);
	friend void QSqlQueryModel_BeginResetModel(QSqlQueryModel* self);
	friend void QSqlQueryModel_QBaseBeginResetModel(QSqlQueryModel* self);
	friend void QSqlQueryModel_EndResetModel(QSqlQueryModel* self);
	friend void QSqlQueryModel_QBaseEndResetModel(QSqlQueryModel* self);
	friend void QSqlQueryModel_SetLastError(QSqlQueryModel* self, const QSqlError* errorVal);
	friend void QSqlQueryModel_QBaseSetLastError(QSqlQueryModel* self, const QSqlError* errorVal);
};

#endif


