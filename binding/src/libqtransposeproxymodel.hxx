#pragma once
#ifndef QTRANSPOSEPROXYMODEL_H_C_LIBVIRTUAL
#define QTRANSPOSEPROXYMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTransposeProxyModel so that we can call protected methods
class VirtualQTransposeProxyModel final : public QTransposeProxyModel {

public:
	// Virtual class boolean flag
	bool isVirtualQTransposeProxyModel= true;

	// Virtual class public types (including callbacks)
	using QTransposeProxyModel_SetSourceModel_Callback = void (*)(QTransposeProxyModel*, QAbstractItemModel*);
	using QTransposeProxyModel_RowCount_Callback = int (*)(const QTransposeProxyModel*, const QModelIndex*);
	using QTransposeProxyModel_ColumnCount_Callback = int (*)(const QTransposeProxyModel*, const QModelIndex*);
	using QTransposeProxyModel_HeaderData_Callback = QVariant* (*)(const QTransposeProxyModel*, int, int, int);
	using QTransposeProxyModel_SetHeaderData_Callback = bool (*)(QTransposeProxyModel*, int, int, const QVariant*, int);
	using QTransposeProxyModel_SetItemData_Callback = bool (*)(QTransposeProxyModel*, const QModelIndex*, libqt_map);
	using QTransposeProxyModel_Span_Callback = QSize* (*)(const QTransposeProxyModel*, const QModelIndex*);
	using QTransposeProxyModel_ItemData_Callback = libqt_map (*)(const QTransposeProxyModel*, const QModelIndex*);
	using QTransposeProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QTransposeProxyModel*, const QModelIndex*);
	using QTransposeProxyModel_MapToSource_Callback = QModelIndex* (*)(const QTransposeProxyModel*, const QModelIndex*);
	using QTransposeProxyModel_Parent_Callback = QModelIndex* (*)(const QTransposeProxyModel*, const QModelIndex*);
	using QTransposeProxyModel_Index_Callback = QModelIndex* (*)(const QTransposeProxyModel*, int, int, const QModelIndex*);
	using QTransposeProxyModel_InsertRows_Callback = bool (*)(QTransposeProxyModel*, int, int, const QModelIndex*);
	using QTransposeProxyModel_RemoveRows_Callback = bool (*)(QTransposeProxyModel*, int, int, const QModelIndex*);
	using QTransposeProxyModel_MoveRows_Callback = bool (*)(QTransposeProxyModel*, const QModelIndex*, int, int, const QModelIndex*, int);
	using QTransposeProxyModel_InsertColumns_Callback = bool (*)(QTransposeProxyModel*, int, int, const QModelIndex*);
	using QTransposeProxyModel_RemoveColumns_Callback = bool (*)(QTransposeProxyModel*, int, int, const QModelIndex*);
	using QTransposeProxyModel_MoveColumns_Callback = bool (*)(QTransposeProxyModel*, const QModelIndex*, int, int, const QModelIndex*, int);
	using QTransposeProxyModel_Sort_Callback = void (*)(QTransposeProxyModel*, int, int);

protected:
	// Instance callback storage
	mutable QTransposeProxyModel_SetSourceModel_Callback qtransposeproxymodel_setsourcemodel_callback = nullptr;
	mutable QTransposeProxyModel_RowCount_Callback qtransposeproxymodel_rowcount_callback = nullptr;
	mutable QTransposeProxyModel_ColumnCount_Callback qtransposeproxymodel_columncount_callback = nullptr;
	mutable QTransposeProxyModel_HeaderData_Callback qtransposeproxymodel_headerdata_callback = nullptr;
	mutable QTransposeProxyModel_SetHeaderData_Callback qtransposeproxymodel_setheaderdata_callback = nullptr;
	mutable QTransposeProxyModel_SetItemData_Callback qtransposeproxymodel_setitemdata_callback = nullptr;
	mutable QTransposeProxyModel_Span_Callback qtransposeproxymodel_span_callback = nullptr;
	mutable QTransposeProxyModel_ItemData_Callback qtransposeproxymodel_itemdata_callback = nullptr;
	mutable QTransposeProxyModel_MapFromSource_Callback qtransposeproxymodel_mapfromsource_callback = nullptr;
	mutable QTransposeProxyModel_MapToSource_Callback qtransposeproxymodel_maptosource_callback = nullptr;
	mutable QTransposeProxyModel_Parent_Callback qtransposeproxymodel_parent_callback = nullptr;
	mutable QTransposeProxyModel_Index_Callback qtransposeproxymodel_index_callback = nullptr;
	mutable QTransposeProxyModel_InsertRows_Callback qtransposeproxymodel_insertrows_callback = nullptr;
	mutable QTransposeProxyModel_RemoveRows_Callback qtransposeproxymodel_removerows_callback = nullptr;
	mutable QTransposeProxyModel_MoveRows_Callback qtransposeproxymodel_moverows_callback = nullptr;
	mutable QTransposeProxyModel_InsertColumns_Callback qtransposeproxymodel_insertcolumns_callback = nullptr;
	mutable QTransposeProxyModel_RemoveColumns_Callback qtransposeproxymodel_removecolumns_callback = nullptr;
	mutable QTransposeProxyModel_MoveColumns_Callback qtransposeproxymodel_movecolumns_callback = nullptr;
	mutable QTransposeProxyModel_Sort_Callback qtransposeproxymodel_sort_callback = nullptr;

	// Instance base flags
    mutable bool qtransposeproxymodel_setsourcemodel_isbase = false;
    mutable bool qtransposeproxymodel_rowcount_isbase = false;
    mutable bool qtransposeproxymodel_columncount_isbase = false;
    mutable bool qtransposeproxymodel_headerdata_isbase = false;
    mutable bool qtransposeproxymodel_setheaderdata_isbase = false;
    mutable bool qtransposeproxymodel_setitemdata_isbase = false;
    mutable bool qtransposeproxymodel_span_isbase = false;
    mutable bool qtransposeproxymodel_itemdata_isbase = false;
    mutable bool qtransposeproxymodel_mapfromsource_isbase = false;
    mutable bool qtransposeproxymodel_maptosource_isbase = false;
    mutable bool qtransposeproxymodel_parent_isbase = false;
    mutable bool qtransposeproxymodel_index_isbase = false;
    mutable bool qtransposeproxymodel_insertrows_isbase = false;
    mutable bool qtransposeproxymodel_removerows_isbase = false;
    mutable bool qtransposeproxymodel_moverows_isbase = false;
    mutable bool qtransposeproxymodel_insertcolumns_isbase = false;
    mutable bool qtransposeproxymodel_removecolumns_isbase = false;
    mutable bool qtransposeproxymodel_movecolumns_isbase = false;
    mutable bool qtransposeproxymodel_sort_isbase = false;

public:
	VirtualQTransposeProxyModel(): QTransposeProxyModel() {};
	VirtualQTransposeProxyModel(QObject* parent): QTransposeProxyModel(parent) {};

	~VirtualQTransposeProxyModel() {
		qtransposeproxymodel_setsourcemodel_callback = nullptr;
		qtransposeproxymodel_rowcount_callback = nullptr;
		qtransposeproxymodel_columncount_callback = nullptr;
		qtransposeproxymodel_headerdata_callback = nullptr;
		qtransposeproxymodel_setheaderdata_callback = nullptr;
		qtransposeproxymodel_setitemdata_callback = nullptr;
		qtransposeproxymodel_span_callback = nullptr;
		qtransposeproxymodel_itemdata_callback = nullptr;
		qtransposeproxymodel_mapfromsource_callback = nullptr;
		qtransposeproxymodel_maptosource_callback = nullptr;
		qtransposeproxymodel_parent_callback = nullptr;
		qtransposeproxymodel_index_callback = nullptr;
		qtransposeproxymodel_insertrows_callback = nullptr;
		qtransposeproxymodel_removerows_callback = nullptr;
		qtransposeproxymodel_moverows_callback = nullptr;
		qtransposeproxymodel_insertcolumns_callback = nullptr;
		qtransposeproxymodel_removecolumns_callback = nullptr;
		qtransposeproxymodel_movecolumns_callback = nullptr;
		qtransposeproxymodel_sort_callback = nullptr;
	}

// Callback setters
	inline void setQTransposeProxyModel_SetSourceModel_Callback(QTransposeProxyModel_SetSourceModel_Callback cb) const { qtransposeproxymodel_setsourcemodel_callback = cb; }
	inline void setQTransposeProxyModel_RowCount_Callback(QTransposeProxyModel_RowCount_Callback cb) const { qtransposeproxymodel_rowcount_callback = cb; }
	inline void setQTransposeProxyModel_ColumnCount_Callback(QTransposeProxyModel_ColumnCount_Callback cb) const { qtransposeproxymodel_columncount_callback = cb; }
	inline void setQTransposeProxyModel_HeaderData_Callback(QTransposeProxyModel_HeaderData_Callback cb) const { qtransposeproxymodel_headerdata_callback = cb; }
	inline void setQTransposeProxyModel_SetHeaderData_Callback(QTransposeProxyModel_SetHeaderData_Callback cb) const { qtransposeproxymodel_setheaderdata_callback = cb; }
	inline void setQTransposeProxyModel_SetItemData_Callback(QTransposeProxyModel_SetItemData_Callback cb) const { qtransposeproxymodel_setitemdata_callback = cb; }
	inline void setQTransposeProxyModel_Span_Callback(QTransposeProxyModel_Span_Callback cb) const { qtransposeproxymodel_span_callback = cb; }
	inline void setQTransposeProxyModel_ItemData_Callback(QTransposeProxyModel_ItemData_Callback cb) const { qtransposeproxymodel_itemdata_callback = cb; }
	inline void setQTransposeProxyModel_MapFromSource_Callback(QTransposeProxyModel_MapFromSource_Callback cb) const { qtransposeproxymodel_mapfromsource_callback = cb; }
	inline void setQTransposeProxyModel_MapToSource_Callback(QTransposeProxyModel_MapToSource_Callback cb) const { qtransposeproxymodel_maptosource_callback = cb; }
	inline void setQTransposeProxyModel_Parent_Callback(QTransposeProxyModel_Parent_Callback cb) const { qtransposeproxymodel_parent_callback = cb; }
	inline void setQTransposeProxyModel_Index_Callback(QTransposeProxyModel_Index_Callback cb) const { qtransposeproxymodel_index_callback = cb; }
	inline void setQTransposeProxyModel_InsertRows_Callback(QTransposeProxyModel_InsertRows_Callback cb) const { qtransposeproxymodel_insertrows_callback = cb; }
	inline void setQTransposeProxyModel_RemoveRows_Callback(QTransposeProxyModel_RemoveRows_Callback cb) const { qtransposeproxymodel_removerows_callback = cb; }
	inline void setQTransposeProxyModel_MoveRows_Callback(QTransposeProxyModel_MoveRows_Callback cb) const { qtransposeproxymodel_moverows_callback = cb; }
	inline void setQTransposeProxyModel_InsertColumns_Callback(QTransposeProxyModel_InsertColumns_Callback cb) const { qtransposeproxymodel_insertcolumns_callback = cb; }
	inline void setQTransposeProxyModel_RemoveColumns_Callback(QTransposeProxyModel_RemoveColumns_Callback cb) const { qtransposeproxymodel_removecolumns_callback = cb; }
	inline void setQTransposeProxyModel_MoveColumns_Callback(QTransposeProxyModel_MoveColumns_Callback cb) const { qtransposeproxymodel_movecolumns_callback = cb; }
	inline void setQTransposeProxyModel_Sort_Callback(QTransposeProxyModel_Sort_Callback cb) const { qtransposeproxymodel_sort_callback = cb; }

// Base flag setters
	inline void setQTransposeProxyModel_SetSourceModel_IsBase(bool value) const { qtransposeproxymodel_setsourcemodel_isbase = value; }
	inline void setQTransposeProxyModel_RowCount_IsBase(bool value) const { qtransposeproxymodel_rowcount_isbase = value; }
	inline void setQTransposeProxyModel_ColumnCount_IsBase(bool value) const { qtransposeproxymodel_columncount_isbase = value; }
	inline void setQTransposeProxyModel_HeaderData_IsBase(bool value) const { qtransposeproxymodel_headerdata_isbase = value; }
	inline void setQTransposeProxyModel_SetHeaderData_IsBase(bool value) const { qtransposeproxymodel_setheaderdata_isbase = value; }
	inline void setQTransposeProxyModel_SetItemData_IsBase(bool value) const { qtransposeproxymodel_setitemdata_isbase = value; }
	inline void setQTransposeProxyModel_Span_IsBase(bool value) const { qtransposeproxymodel_span_isbase = value; }
	inline void setQTransposeProxyModel_ItemData_IsBase(bool value) const { qtransposeproxymodel_itemdata_isbase = value; }
	inline void setQTransposeProxyModel_MapFromSource_IsBase(bool value) const { qtransposeproxymodel_mapfromsource_isbase = value; }
	inline void setQTransposeProxyModel_MapToSource_IsBase(bool value) const { qtransposeproxymodel_maptosource_isbase = value; }
	inline void setQTransposeProxyModel_Parent_IsBase(bool value) const { qtransposeproxymodel_parent_isbase = value; }
	inline void setQTransposeProxyModel_Index_IsBase(bool value) const { qtransposeproxymodel_index_isbase = value; }
	inline void setQTransposeProxyModel_InsertRows_IsBase(bool value) const { qtransposeproxymodel_insertrows_isbase = value; }
	inline void setQTransposeProxyModel_RemoveRows_IsBase(bool value) const { qtransposeproxymodel_removerows_isbase = value; }
	inline void setQTransposeProxyModel_MoveRows_IsBase(bool value) const { qtransposeproxymodel_moverows_isbase = value; }
	inline void setQTransposeProxyModel_InsertColumns_IsBase(bool value) const { qtransposeproxymodel_insertcolumns_isbase = value; }
	inline void setQTransposeProxyModel_RemoveColumns_IsBase(bool value) const { qtransposeproxymodel_removecolumns_isbase = value; }
	inline void setQTransposeProxyModel_MoveColumns_IsBase(bool value) const { qtransposeproxymodel_movecolumns_isbase = value; }
	inline void setQTransposeProxyModel_Sort_IsBase(bool value) const { qtransposeproxymodel_sort_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setSourceModel(QAbstractItemModel* newSourceModel) override {
		if (qtransposeproxymodel_setsourcemodel_isbase) {
			qtransposeproxymodel_setsourcemodel_isbase = false;
			QTransposeProxyModel::setSourceModel(newSourceModel);
		} else if (qtransposeproxymodel_setsourcemodel_callback != nullptr) {
			QAbstractItemModel* cbval1 = newSourceModel;
			qtransposeproxymodel_setsourcemodel_callback(this, cbval1);
		} else {
			QTransposeProxyModel::setSourceModel(newSourceModel);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int rowCount(const QModelIndex& parent) const override {
		if (qtransposeproxymodel_rowcount_isbase) {
			qtransposeproxymodel_rowcount_isbase = false;
			return QTransposeProxyModel::rowCount(parent);
		} else if (qtransposeproxymodel_rowcount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qtransposeproxymodel_rowcount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTransposeProxyModel::rowCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int columnCount(const QModelIndex& parent) const override {
		if (qtransposeproxymodel_columncount_isbase) {
			qtransposeproxymodel_columncount_isbase = false;
			return QTransposeProxyModel::columnCount(parent);
		} else if (qtransposeproxymodel_columncount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qtransposeproxymodel_columncount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTransposeProxyModel::columnCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (qtransposeproxymodel_headerdata_isbase) {
			qtransposeproxymodel_headerdata_isbase = false;
			return QTransposeProxyModel::headerData(section, orientation, role);
		} else if (qtransposeproxymodel_headerdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			int cbval3 = role;
			QVariant* callback_ret = qtransposeproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QTransposeProxyModel::headerData(section, orientation, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (qtransposeproxymodel_setheaderdata_isbase) {
			qtransposeproxymodel_setheaderdata_isbase = false;
			return QTransposeProxyModel::setHeaderData(section, orientation, value, role);
		} else if (qtransposeproxymodel_setheaderdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			const QVariant* cbval3 = (const QVariant*)&value;
			int cbval4 = role;
			bool callback_ret = qtransposeproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QTransposeProxyModel::setHeaderData(section, orientation, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (qtransposeproxymodel_setitemdata_isbase) {
			qtransposeproxymodel_setitemdata_isbase = false;
			return QTransposeProxyModel::setItemData(index, roles);
		} else if (qtransposeproxymodel_setitemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			libqt_map cbval2 = roles;
			bool callback_ret = qtransposeproxymodel_setitemdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QTransposeProxyModel::setItemData(index, roles);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize span(const QModelIndex& index) const override {
		if (qtransposeproxymodel_span_isbase) {
			qtransposeproxymodel_span_isbase = false;
			return QTransposeProxyModel::span(index);
		} else if (qtransposeproxymodel_span_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QSize* callback_ret = qtransposeproxymodel_span_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTransposeProxyModel::span(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (qtransposeproxymodel_itemdata_isbase) {
			qtransposeproxymodel_itemdata_isbase = false;
			return QTransposeProxyModel::itemData(index);
		} else if (qtransposeproxymodel_itemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			libqt_map callback_ret = qtransposeproxymodel_itemdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTransposeProxyModel::itemData(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (qtransposeproxymodel_mapfromsource_isbase) {
			qtransposeproxymodel_mapfromsource_isbase = false;
			return QTransposeProxyModel::mapFromSource(sourceIndex);
		} else if (qtransposeproxymodel_mapfromsource_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceIndex;
			QModelIndex* callback_ret = qtransposeproxymodel_mapfromsource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTransposeProxyModel::mapFromSource(sourceIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (qtransposeproxymodel_maptosource_isbase) {
			qtransposeproxymodel_maptosource_isbase = false;
			return QTransposeProxyModel::mapToSource(proxyIndex);
		} else if (qtransposeproxymodel_maptosource_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&proxyIndex;
			QModelIndex* callback_ret = qtransposeproxymodel_maptosource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTransposeProxyModel::mapToSource(proxyIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex parent(const QModelIndex& index) const override {
		if (qtransposeproxymodel_parent_isbase) {
			qtransposeproxymodel_parent_isbase = false;
			return QTransposeProxyModel::parent(index);
		} else if (qtransposeproxymodel_parent_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QModelIndex* callback_ret = qtransposeproxymodel_parent_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTransposeProxyModel::parent(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (qtransposeproxymodel_index_isbase) {
			qtransposeproxymodel_index_isbase = false;
			return QTransposeProxyModel::index(row, column, parent);
		} else if (qtransposeproxymodel_index_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			QModelIndex* callback_ret = qtransposeproxymodel_index_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QTransposeProxyModel::index(row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (qtransposeproxymodel_insertrows_isbase) {
			qtransposeproxymodel_insertrows_isbase = false;
			return QTransposeProxyModel::insertRows(row, count, parent);
		} else if (qtransposeproxymodel_insertrows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qtransposeproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QTransposeProxyModel::insertRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (qtransposeproxymodel_removerows_isbase) {
			qtransposeproxymodel_removerows_isbase = false;
			return QTransposeProxyModel::removeRows(row, count, parent);
		} else if (qtransposeproxymodel_removerows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qtransposeproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QTransposeProxyModel::removeRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (qtransposeproxymodel_moverows_isbase) {
			qtransposeproxymodel_moverows_isbase = false;
			return QTransposeProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		} else if (qtransposeproxymodel_moverows_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceParent;
			int cbval2 = sourceRow;
			int cbval3 = count;
			const QModelIndex* cbval4 = (const QModelIndex*)&destinationParent;
			int cbval5 = destinationChild;
			bool callback_ret = qtransposeproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QTransposeProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (qtransposeproxymodel_insertcolumns_isbase) {
			qtransposeproxymodel_insertcolumns_isbase = false;
			return QTransposeProxyModel::insertColumns(column, count, parent);
		} else if (qtransposeproxymodel_insertcolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qtransposeproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QTransposeProxyModel::insertColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (qtransposeproxymodel_removecolumns_isbase) {
			qtransposeproxymodel_removecolumns_isbase = false;
			return QTransposeProxyModel::removeColumns(column, count, parent);
		} else if (qtransposeproxymodel_removecolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qtransposeproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QTransposeProxyModel::removeColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (qtransposeproxymodel_movecolumns_isbase) {
			qtransposeproxymodel_movecolumns_isbase = false;
			return QTransposeProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		} else if (qtransposeproxymodel_movecolumns_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceParent;
			int cbval2 = sourceColumn;
			int cbval3 = count;
			const QModelIndex* cbval4 = (const QModelIndex*)&destinationParent;
			int cbval5 = destinationChild;
			bool callback_ret = qtransposeproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QTransposeProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sort(int column, Qt::SortOrder order) override {
		if (qtransposeproxymodel_sort_isbase) {
			qtransposeproxymodel_sort_isbase = false;
			QTransposeProxyModel::sort(column, order);
		} else if (qtransposeproxymodel_sort_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = static_cast<int>(order);
			qtransposeproxymodel_sort_callback(this, cbval1, cbval2);
		} else {
			QTransposeProxyModel::sort(column, order);
		}
	}
};

#endif


