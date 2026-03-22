#pragma once
#ifndef QIDENTITYPROXYMODEL_H_C_LIBVIRTUAL
#define QIDENTITYPROXYMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QIdentityProxyModel so that we can call protected methods
class VirtualQIdentityProxyModel final : public QIdentityProxyModel {

public:
	// Virtual class boolean flag
	bool isVirtualQIdentityProxyModel= true;

	// Virtual class public types (including callbacks)
	using QIdentityProxyModel_ColumnCount_Callback = int (*)(const QIdentityProxyModel*, const QModelIndex*);
	using QIdentityProxyModel_Index_Callback = QModelIndex* (*)(const QIdentityProxyModel*, int, int, const QModelIndex*);
	using QIdentityProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QIdentityProxyModel*, const QModelIndex*);
	using QIdentityProxyModel_MapToSource_Callback = QModelIndex* (*)(const QIdentityProxyModel*, const QModelIndex*);
	using QIdentityProxyModel_Parent_Callback = QModelIndex* (*)(const QIdentityProxyModel*, const QModelIndex*);
	using QIdentityProxyModel_RowCount_Callback = int (*)(const QIdentityProxyModel*, const QModelIndex*);
	using QIdentityProxyModel_HeaderData_Callback = QVariant* (*)(const QIdentityProxyModel*, int, int, int);
	using QIdentityProxyModel_DropMimeData_Callback = bool (*)(QIdentityProxyModel*, const QMimeData*, int, int, int, const QModelIndex*);
	using QIdentityProxyModel_Sibling_Callback = QModelIndex* (*)(const QIdentityProxyModel*, int, int, const QModelIndex*);
	using QIdentityProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const QIdentityProxyModel*, const QItemSelection*);
	using QIdentityProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const QIdentityProxyModel*, const QItemSelection*);
	using QIdentityProxyModel_Match_Callback = libqt_list (*)(const QIdentityProxyModel*, const QModelIndex*, int, const QVariant*, int, int);
	using QIdentityProxyModel_SetSourceModel_Callback = void (*)(QIdentityProxyModel*, QAbstractItemModel*);
	using QIdentityProxyModel_InsertColumns_Callback = bool (*)(QIdentityProxyModel*, int, int, const QModelIndex*);
	using QIdentityProxyModel_InsertRows_Callback = bool (*)(QIdentityProxyModel*, int, int, const QModelIndex*);
	using QIdentityProxyModel_RemoveColumns_Callback = bool (*)(QIdentityProxyModel*, int, int, const QModelIndex*);
	using QIdentityProxyModel_RemoveRows_Callback = bool (*)(QIdentityProxyModel*, int, int, const QModelIndex*);
	using QIdentityProxyModel_MoveRows_Callback = bool (*)(QIdentityProxyModel*, const QModelIndex*, int, int, const QModelIndex*, int);
	using QIdentityProxyModel_MoveColumns_Callback = bool (*)(QIdentityProxyModel*, const QModelIndex*, int, int, const QModelIndex*, int);
	using QIdentityProxyModel_SetHandleSourceLayoutChanges_Callback = void (*)(QIdentityProxyModel*, bool);
	using QIdentityProxyModel_SetHandleSourceDataChanges_Callback = void (*)(QIdentityProxyModel*, bool);

protected:
	// Instance callback storage
	mutable QIdentityProxyModel_ColumnCount_Callback qidentityproxymodel_columncount_callback = nullptr;
	mutable QIdentityProxyModel_Index_Callback qidentityproxymodel_index_callback = nullptr;
	mutable QIdentityProxyModel_MapFromSource_Callback qidentityproxymodel_mapfromsource_callback = nullptr;
	mutable QIdentityProxyModel_MapToSource_Callback qidentityproxymodel_maptosource_callback = nullptr;
	mutable QIdentityProxyModel_Parent_Callback qidentityproxymodel_parent_callback = nullptr;
	mutable QIdentityProxyModel_RowCount_Callback qidentityproxymodel_rowcount_callback = nullptr;
	mutable QIdentityProxyModel_HeaderData_Callback qidentityproxymodel_headerdata_callback = nullptr;
	mutable QIdentityProxyModel_DropMimeData_Callback qidentityproxymodel_dropmimedata_callback = nullptr;
	mutable QIdentityProxyModel_Sibling_Callback qidentityproxymodel_sibling_callback = nullptr;
	mutable QIdentityProxyModel_MapSelectionFromSource_Callback qidentityproxymodel_mapselectionfromsource_callback = nullptr;
	mutable QIdentityProxyModel_MapSelectionToSource_Callback qidentityproxymodel_mapselectiontosource_callback = nullptr;
	mutable QIdentityProxyModel_Match_Callback qidentityproxymodel_match_callback = nullptr;
	mutable QIdentityProxyModel_SetSourceModel_Callback qidentityproxymodel_setsourcemodel_callback = nullptr;
	mutable QIdentityProxyModel_InsertColumns_Callback qidentityproxymodel_insertcolumns_callback = nullptr;
	mutable QIdentityProxyModel_InsertRows_Callback qidentityproxymodel_insertrows_callback = nullptr;
	mutable QIdentityProxyModel_RemoveColumns_Callback qidentityproxymodel_removecolumns_callback = nullptr;
	mutable QIdentityProxyModel_RemoveRows_Callback qidentityproxymodel_removerows_callback = nullptr;
	mutable QIdentityProxyModel_MoveRows_Callback qidentityproxymodel_moverows_callback = nullptr;
	mutable QIdentityProxyModel_MoveColumns_Callback qidentityproxymodel_movecolumns_callback = nullptr;
	mutable QIdentityProxyModel_SetHandleSourceLayoutChanges_Callback qidentityproxymodel_sethandlesourcelayoutchanges_callback = nullptr;
	mutable QIdentityProxyModel_SetHandleSourceDataChanges_Callback qidentityproxymodel_sethandlesourcedatachanges_callback = nullptr;

	// Instance base flags
    mutable bool qidentityproxymodel_columncount_isbase = false;
    mutable bool qidentityproxymodel_index_isbase = false;
    mutable bool qidentityproxymodel_mapfromsource_isbase = false;
    mutable bool qidentityproxymodel_maptosource_isbase = false;
    mutable bool qidentityproxymodel_parent_isbase = false;
    mutable bool qidentityproxymodel_rowcount_isbase = false;
    mutable bool qidentityproxymodel_headerdata_isbase = false;
    mutable bool qidentityproxymodel_dropmimedata_isbase = false;
    mutable bool qidentityproxymodel_sibling_isbase = false;
    mutable bool qidentityproxymodel_mapselectionfromsource_isbase = false;
    mutable bool qidentityproxymodel_mapselectiontosource_isbase = false;
    mutable bool qidentityproxymodel_match_isbase = false;
    mutable bool qidentityproxymodel_setsourcemodel_isbase = false;
    mutable bool qidentityproxymodel_insertcolumns_isbase = false;
    mutable bool qidentityproxymodel_insertrows_isbase = false;
    mutable bool qidentityproxymodel_removecolumns_isbase = false;
    mutable bool qidentityproxymodel_removerows_isbase = false;
    mutable bool qidentityproxymodel_moverows_isbase = false;
    mutable bool qidentityproxymodel_movecolumns_isbase = false;
    mutable bool qidentityproxymodel_sethandlesourcelayoutchanges_isbase = false;
    mutable bool qidentityproxymodel_sethandlesourcedatachanges_isbase = false;

public:
	VirtualQIdentityProxyModel(): QIdentityProxyModel() {};
	VirtualQIdentityProxyModel(QObject* parent): QIdentityProxyModel(parent) {};

	~VirtualQIdentityProxyModel() {
		qidentityproxymodel_columncount_callback = nullptr;
		qidentityproxymodel_index_callback = nullptr;
		qidentityproxymodel_mapfromsource_callback = nullptr;
		qidentityproxymodel_maptosource_callback = nullptr;
		qidentityproxymodel_parent_callback = nullptr;
		qidentityproxymodel_rowcount_callback = nullptr;
		qidentityproxymodel_headerdata_callback = nullptr;
		qidentityproxymodel_dropmimedata_callback = nullptr;
		qidentityproxymodel_sibling_callback = nullptr;
		qidentityproxymodel_mapselectionfromsource_callback = nullptr;
		qidentityproxymodel_mapselectiontosource_callback = nullptr;
		qidentityproxymodel_match_callback = nullptr;
		qidentityproxymodel_setsourcemodel_callback = nullptr;
		qidentityproxymodel_insertcolumns_callback = nullptr;
		qidentityproxymodel_insertrows_callback = nullptr;
		qidentityproxymodel_removecolumns_callback = nullptr;
		qidentityproxymodel_removerows_callback = nullptr;
		qidentityproxymodel_moverows_callback = nullptr;
		qidentityproxymodel_movecolumns_callback = nullptr;
		qidentityproxymodel_sethandlesourcelayoutchanges_callback = nullptr;
		qidentityproxymodel_sethandlesourcedatachanges_callback = nullptr;
	}

// Callback setters
	inline void setQIdentityProxyModel_ColumnCount_Callback(QIdentityProxyModel_ColumnCount_Callback cb) const { qidentityproxymodel_columncount_callback = cb; }
	inline void setQIdentityProxyModel_Index_Callback(QIdentityProxyModel_Index_Callback cb) const { qidentityproxymodel_index_callback = cb; }
	inline void setQIdentityProxyModel_MapFromSource_Callback(QIdentityProxyModel_MapFromSource_Callback cb) const { qidentityproxymodel_mapfromsource_callback = cb; }
	inline void setQIdentityProxyModel_MapToSource_Callback(QIdentityProxyModel_MapToSource_Callback cb) const { qidentityproxymodel_maptosource_callback = cb; }
	inline void setQIdentityProxyModel_Parent_Callback(QIdentityProxyModel_Parent_Callback cb) const { qidentityproxymodel_parent_callback = cb; }
	inline void setQIdentityProxyModel_RowCount_Callback(QIdentityProxyModel_RowCount_Callback cb) const { qidentityproxymodel_rowcount_callback = cb; }
	inline void setQIdentityProxyModel_HeaderData_Callback(QIdentityProxyModel_HeaderData_Callback cb) const { qidentityproxymodel_headerdata_callback = cb; }
	inline void setQIdentityProxyModel_DropMimeData_Callback(QIdentityProxyModel_DropMimeData_Callback cb) const { qidentityproxymodel_dropmimedata_callback = cb; }
	inline void setQIdentityProxyModel_Sibling_Callback(QIdentityProxyModel_Sibling_Callback cb) const { qidentityproxymodel_sibling_callback = cb; }
	inline void setQIdentityProxyModel_MapSelectionFromSource_Callback(QIdentityProxyModel_MapSelectionFromSource_Callback cb) const { qidentityproxymodel_mapselectionfromsource_callback = cb; }
	inline void setQIdentityProxyModel_MapSelectionToSource_Callback(QIdentityProxyModel_MapSelectionToSource_Callback cb) const { qidentityproxymodel_mapselectiontosource_callback = cb; }
	inline void setQIdentityProxyModel_Match_Callback(QIdentityProxyModel_Match_Callback cb) const { qidentityproxymodel_match_callback = cb; }
	inline void setQIdentityProxyModel_SetSourceModel_Callback(QIdentityProxyModel_SetSourceModel_Callback cb) const { qidentityproxymodel_setsourcemodel_callback = cb; }
	inline void setQIdentityProxyModel_InsertColumns_Callback(QIdentityProxyModel_InsertColumns_Callback cb) const { qidentityproxymodel_insertcolumns_callback = cb; }
	inline void setQIdentityProxyModel_InsertRows_Callback(QIdentityProxyModel_InsertRows_Callback cb) const { qidentityproxymodel_insertrows_callback = cb; }
	inline void setQIdentityProxyModel_RemoveColumns_Callback(QIdentityProxyModel_RemoveColumns_Callback cb) const { qidentityproxymodel_removecolumns_callback = cb; }
	inline void setQIdentityProxyModel_RemoveRows_Callback(QIdentityProxyModel_RemoveRows_Callback cb) const { qidentityproxymodel_removerows_callback = cb; }
	inline void setQIdentityProxyModel_MoveRows_Callback(QIdentityProxyModel_MoveRows_Callback cb) const { qidentityproxymodel_moverows_callback = cb; }
	inline void setQIdentityProxyModel_MoveColumns_Callback(QIdentityProxyModel_MoveColumns_Callback cb) const { qidentityproxymodel_movecolumns_callback = cb; }
	inline void setQIdentityProxyModel_SetHandleSourceLayoutChanges_Callback(QIdentityProxyModel_SetHandleSourceLayoutChanges_Callback cb) const { qidentityproxymodel_sethandlesourcelayoutchanges_callback = cb; }
	inline void setQIdentityProxyModel_SetHandleSourceDataChanges_Callback(QIdentityProxyModel_SetHandleSourceDataChanges_Callback cb) const { qidentityproxymodel_sethandlesourcedatachanges_callback = cb; }

// Base flag setters
	inline void setQIdentityProxyModel_ColumnCount_IsBase(bool value) const { qidentityproxymodel_columncount_isbase = value; }
	inline void setQIdentityProxyModel_Index_IsBase(bool value) const { qidentityproxymodel_index_isbase = value; }
	inline void setQIdentityProxyModel_MapFromSource_IsBase(bool value) const { qidentityproxymodel_mapfromsource_isbase = value; }
	inline void setQIdentityProxyModel_MapToSource_IsBase(bool value) const { qidentityproxymodel_maptosource_isbase = value; }
	inline void setQIdentityProxyModel_Parent_IsBase(bool value) const { qidentityproxymodel_parent_isbase = value; }
	inline void setQIdentityProxyModel_RowCount_IsBase(bool value) const { qidentityproxymodel_rowcount_isbase = value; }
	inline void setQIdentityProxyModel_HeaderData_IsBase(bool value) const { qidentityproxymodel_headerdata_isbase = value; }
	inline void setQIdentityProxyModel_DropMimeData_IsBase(bool value) const { qidentityproxymodel_dropmimedata_isbase = value; }
	inline void setQIdentityProxyModel_Sibling_IsBase(bool value) const { qidentityproxymodel_sibling_isbase = value; }
	inline void setQIdentityProxyModel_MapSelectionFromSource_IsBase(bool value) const { qidentityproxymodel_mapselectionfromsource_isbase = value; }
	inline void setQIdentityProxyModel_MapSelectionToSource_IsBase(bool value) const { qidentityproxymodel_mapselectiontosource_isbase = value; }
	inline void setQIdentityProxyModel_Match_IsBase(bool value) const { qidentityproxymodel_match_isbase = value; }
	inline void setQIdentityProxyModel_SetSourceModel_IsBase(bool value) const { qidentityproxymodel_setsourcemodel_isbase = value; }
	inline void setQIdentityProxyModel_InsertColumns_IsBase(bool value) const { qidentityproxymodel_insertcolumns_isbase = value; }
	inline void setQIdentityProxyModel_InsertRows_IsBase(bool value) const { qidentityproxymodel_insertrows_isbase = value; }
	inline void setQIdentityProxyModel_RemoveColumns_IsBase(bool value) const { qidentityproxymodel_removecolumns_isbase = value; }
	inline void setQIdentityProxyModel_RemoveRows_IsBase(bool value) const { qidentityproxymodel_removerows_isbase = value; }
	inline void setQIdentityProxyModel_MoveRows_IsBase(bool value) const { qidentityproxymodel_moverows_isbase = value; }
	inline void setQIdentityProxyModel_MoveColumns_IsBase(bool value) const { qidentityproxymodel_movecolumns_isbase = value; }
	inline void setQIdentityProxyModel_SetHandleSourceLayoutChanges_IsBase(bool value) const { qidentityproxymodel_sethandlesourcelayoutchanges_isbase = value; }
	inline void setQIdentityProxyModel_SetHandleSourceDataChanges_IsBase(bool value) const { qidentityproxymodel_sethandlesourcedatachanges_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int columnCount(const QModelIndex& parent) const override {
		if (qidentityproxymodel_columncount_isbase) {
			qidentityproxymodel_columncount_isbase = false;
			return QIdentityProxyModel::columnCount(parent);
		} else if (qidentityproxymodel_columncount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qidentityproxymodel_columncount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QIdentityProxyModel::columnCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (qidentityproxymodel_index_isbase) {
			qidentityproxymodel_index_isbase = false;
			return QIdentityProxyModel::index(row, column, parent);
		} else if (qidentityproxymodel_index_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			QModelIndex* callback_ret = qidentityproxymodel_index_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QIdentityProxyModel::index(row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (qidentityproxymodel_mapfromsource_isbase) {
			qidentityproxymodel_mapfromsource_isbase = false;
			return QIdentityProxyModel::mapFromSource(sourceIndex);
		} else if (qidentityproxymodel_mapfromsource_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceIndex;
			QModelIndex* callback_ret = qidentityproxymodel_mapfromsource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QIdentityProxyModel::mapFromSource(sourceIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (qidentityproxymodel_maptosource_isbase) {
			qidentityproxymodel_maptosource_isbase = false;
			return QIdentityProxyModel::mapToSource(proxyIndex);
		} else if (qidentityproxymodel_maptosource_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&proxyIndex;
			QModelIndex* callback_ret = qidentityproxymodel_maptosource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QIdentityProxyModel::mapToSource(proxyIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (qidentityproxymodel_parent_isbase) {
			qidentityproxymodel_parent_isbase = false;
			return QIdentityProxyModel::parent(child);
		} else if (qidentityproxymodel_parent_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&child;
			QModelIndex* callback_ret = qidentityproxymodel_parent_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QIdentityProxyModel::parent(child);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int rowCount(const QModelIndex& parent) const override {
		if (qidentityproxymodel_rowcount_isbase) {
			qidentityproxymodel_rowcount_isbase = false;
			return QIdentityProxyModel::rowCount(parent);
		} else if (qidentityproxymodel_rowcount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qidentityproxymodel_rowcount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QIdentityProxyModel::rowCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (qidentityproxymodel_headerdata_isbase) {
			qidentityproxymodel_headerdata_isbase = false;
			return QIdentityProxyModel::headerData(section, orientation, role);
		} else if (qidentityproxymodel_headerdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			int cbval3 = role;
			QVariant* callback_ret = qidentityproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QIdentityProxyModel::headerData(section, orientation, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (qidentityproxymodel_dropmimedata_isbase) {
			qidentityproxymodel_dropmimedata_isbase = false;
			return QIdentityProxyModel::dropMimeData(data, action, row, column, parent);
		} else if (qidentityproxymodel_dropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qidentityproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QIdentityProxyModel::dropMimeData(data, action, row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (qidentityproxymodel_sibling_isbase) {
			qidentityproxymodel_sibling_isbase = false;
			return QIdentityProxyModel::sibling(row, column, idx);
		} else if (qidentityproxymodel_sibling_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&idx;
			QModelIndex* callback_ret = qidentityproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QIdentityProxyModel::sibling(row, column, idx);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
		if (qidentityproxymodel_mapselectionfromsource_isbase) {
			qidentityproxymodel_mapselectionfromsource_isbase = false;
			return QIdentityProxyModel::mapSelectionFromSource(selection);
		} else if (qidentityproxymodel_mapselectionfromsource_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selection;
			QItemSelection* callback_ret = qidentityproxymodel_mapselectionfromsource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QIdentityProxyModel::mapSelectionFromSource(selection);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
		if (qidentityproxymodel_mapselectiontosource_isbase) {
			qidentityproxymodel_mapselectiontosource_isbase = false;
			return QIdentityProxyModel::mapSelectionToSource(selection);
		} else if (qidentityproxymodel_mapselectiontosource_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selection;
			QItemSelection* callback_ret = qidentityproxymodel_mapselectiontosource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QIdentityProxyModel::mapSelectionToSource(selection);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (qidentityproxymodel_match_isbase) {
			qidentityproxymodel_match_isbase = false;
			return QIdentityProxyModel::match(start, role, value, hits, flags);
		} else if (qidentityproxymodel_match_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&start;
			int cbval2 = role;
			const QVariant* cbval3 = (const QVariant*)&value;
			int cbval4 = hits;
			int cbval5 = static_cast<int>(flags);
			libqt_list callback_ret = qidentityproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QIdentityProxyModel::match(start, role, value, hits, flags);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
		if (qidentityproxymodel_setsourcemodel_isbase) {
			qidentityproxymodel_setsourcemodel_isbase = false;
			QIdentityProxyModel::setSourceModel(sourceModel);
		} else if (qidentityproxymodel_setsourcemodel_callback != nullptr) {
			QAbstractItemModel* cbval1 = sourceModel;
			qidentityproxymodel_setsourcemodel_callback(this, cbval1);
		} else {
			QIdentityProxyModel::setSourceModel(sourceModel);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (qidentityproxymodel_insertcolumns_isbase) {
			qidentityproxymodel_insertcolumns_isbase = false;
			return QIdentityProxyModel::insertColumns(column, count, parent);
		} else if (qidentityproxymodel_insertcolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qidentityproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QIdentityProxyModel::insertColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (qidentityproxymodel_insertrows_isbase) {
			qidentityproxymodel_insertrows_isbase = false;
			return QIdentityProxyModel::insertRows(row, count, parent);
		} else if (qidentityproxymodel_insertrows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qidentityproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QIdentityProxyModel::insertRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (qidentityproxymodel_removecolumns_isbase) {
			qidentityproxymodel_removecolumns_isbase = false;
			return QIdentityProxyModel::removeColumns(column, count, parent);
		} else if (qidentityproxymodel_removecolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qidentityproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QIdentityProxyModel::removeColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (qidentityproxymodel_removerows_isbase) {
			qidentityproxymodel_removerows_isbase = false;
			return QIdentityProxyModel::removeRows(row, count, parent);
		} else if (qidentityproxymodel_removerows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qidentityproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QIdentityProxyModel::removeRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (qidentityproxymodel_moverows_isbase) {
			qidentityproxymodel_moverows_isbase = false;
			return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		} else if (qidentityproxymodel_moverows_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceParent;
			int cbval2 = sourceRow;
			int cbval3 = count;
			const QModelIndex* cbval4 = (const QModelIndex*)&destinationParent;
			int cbval5 = destinationChild;
			bool callback_ret = qidentityproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (qidentityproxymodel_movecolumns_isbase) {
			qidentityproxymodel_movecolumns_isbase = false;
			return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		} else if (qidentityproxymodel_movecolumns_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceParent;
			int cbval2 = sourceColumn;
			int cbval3 = count;
			const QModelIndex* cbval4 = (const QModelIndex*)&destinationParent;
			int cbval5 = destinationChild;
			bool callback_ret = qidentityproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setHandleSourceLayoutChanges(bool handleSourceLayoutChanges) {
		if (qidentityproxymodel_sethandlesourcelayoutchanges_isbase) {
			qidentityproxymodel_sethandlesourcelayoutchanges_isbase = false;
			QIdentityProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
		} else if (qidentityproxymodel_sethandlesourcelayoutchanges_callback != nullptr) {
			bool cbval1 = handleSourceLayoutChanges;
			qidentityproxymodel_sethandlesourcelayoutchanges_callback(this, cbval1);
		} else {
			QIdentityProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setHandleSourceDataChanges(bool handleSourceDataChanges) {
		if (qidentityproxymodel_sethandlesourcedatachanges_isbase) {
			qidentityproxymodel_sethandlesourcedatachanges_isbase = false;
			QIdentityProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
		} else if (qidentityproxymodel_sethandlesourcedatachanges_callback != nullptr) {
			bool cbval1 = handleSourceDataChanges;
			qidentityproxymodel_sethandlesourcedatachanges_callback(this, cbval1);
		} else {
			QIdentityProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
		}
	}

	// Friend functions
	friend void QIdentityProxyModel_SetHandleSourceLayoutChanges(QIdentityProxyModel* self, bool handleSourceLayoutChanges);
	friend void QIdentityProxyModel_QBaseSetHandleSourceLayoutChanges(QIdentityProxyModel* self, bool handleSourceLayoutChanges);
	friend void QIdentityProxyModel_SetHandleSourceDataChanges(QIdentityProxyModel* self, bool handleSourceDataChanges);
	friend void QIdentityProxyModel_QBaseSetHandleSourceDataChanges(QIdentityProxyModel* self, bool handleSourceDataChanges);
};

#endif


