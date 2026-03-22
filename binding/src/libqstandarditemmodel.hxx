#pragma once
#ifndef QSTANDARDITEMMODEL_H_C_LIBVIRTUAL
#define QSTANDARDITEMMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QStandardItem so that we can call protected methods
class VirtualQStandardItem final : public QStandardItem {

public:
	// Virtual class boolean flag
	bool isVirtualQStandardItem= true;

	// Virtual class public types (including callbacks)
	using QStandardItem_Data_Callback = QVariant* (*)(const QStandardItem*, int);
	using QStandardItem_MultiData_Callback = void (*)(const QStandardItem*, QModelRoleDataSpan*);
	using QStandardItem_SetData_Callback = void (*)(QStandardItem*, const QVariant*, int);
	using QStandardItem_Type_Callback = int (*)();
	using QStandardItem_Read_Callback = void (*)(QStandardItem*, QDataStream*);
	using QStandardItem_Write_Callback = void (*)(const QStandardItem*, QDataStream*);
	using QStandardItem_OperatorLesser_Callback = bool (*)(const QStandardItem*, const QStandardItem*);
	using QStandardItem_OperatorAssign_Callback = void (*)(QStandardItem*, const QStandardItem*);
	using QStandardItem_EmitDataChanged_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QStandardItem_Data_Callback qstandarditem_data_callback = nullptr;
	mutable QStandardItem_MultiData_Callback qstandarditem_multidata_callback = nullptr;
	mutable QStandardItem_SetData_Callback qstandarditem_setdata_callback = nullptr;
	mutable QStandardItem_Type_Callback qstandarditem_type_callback = nullptr;
	mutable QStandardItem_Read_Callback qstandarditem_read_callback = nullptr;
	mutable QStandardItem_Write_Callback qstandarditem_write_callback = nullptr;
	mutable QStandardItem_OperatorLesser_Callback qstandarditem_operatorlesser_callback = nullptr;
	mutable QStandardItem_OperatorAssign_Callback qstandarditem_operatorassign_callback = nullptr;
	mutable QStandardItem_EmitDataChanged_Callback qstandarditem_emitdatachanged_callback = nullptr;

	// Instance base flags
    mutable bool qstandarditem_data_isbase = false;
    mutable bool qstandarditem_multidata_isbase = false;
    mutable bool qstandarditem_setdata_isbase = false;
    mutable bool qstandarditem_type_isbase = false;
    mutable bool qstandarditem_read_isbase = false;
    mutable bool qstandarditem_write_isbase = false;
    mutable bool qstandarditem_operatorlesser_isbase = false;
    mutable bool qstandarditem_operatorassign_isbase = false;
    mutable bool qstandarditem_emitdatachanged_isbase = false;

public:
	VirtualQStandardItem(): QStandardItem() {};
	VirtualQStandardItem(const QString& text): QStandardItem(text) {};
	VirtualQStandardItem(const QIcon& icon, const QString& text): QStandardItem(icon, text) {};
	VirtualQStandardItem(int rows): QStandardItem(rows) {};
	VirtualQStandardItem(int rows, int columns): QStandardItem(rows, columns) {};

	~VirtualQStandardItem() {
		qstandarditem_data_callback = nullptr;
		qstandarditem_multidata_callback = nullptr;
		qstandarditem_setdata_callback = nullptr;
		qstandarditem_type_callback = nullptr;
		qstandarditem_read_callback = nullptr;
		qstandarditem_write_callback = nullptr;
		qstandarditem_operatorlesser_callback = nullptr;
		qstandarditem_operatorassign_callback = nullptr;
		qstandarditem_emitdatachanged_callback = nullptr;
	}

// Callback setters
	inline void setQStandardItem_Data_Callback(QStandardItem_Data_Callback cb) const { qstandarditem_data_callback = cb; }
	inline void setQStandardItem_MultiData_Callback(QStandardItem_MultiData_Callback cb) const { qstandarditem_multidata_callback = cb; }
	inline void setQStandardItem_SetData_Callback(QStandardItem_SetData_Callback cb) const { qstandarditem_setdata_callback = cb; }
	inline void setQStandardItem_Type_Callback(QStandardItem_Type_Callback cb) const { qstandarditem_type_callback = cb; }
	inline void setQStandardItem_Read_Callback(QStandardItem_Read_Callback cb) const { qstandarditem_read_callback = cb; }
	inline void setQStandardItem_Write_Callback(QStandardItem_Write_Callback cb) const { qstandarditem_write_callback = cb; }
	inline void setQStandardItem_OperatorLesser_Callback(QStandardItem_OperatorLesser_Callback cb) const { qstandarditem_operatorlesser_callback = cb; }
	inline void setQStandardItem_OperatorAssign_Callback(QStandardItem_OperatorAssign_Callback cb) const { qstandarditem_operatorassign_callback = cb; }
	inline void setQStandardItem_EmitDataChanged_Callback(QStandardItem_EmitDataChanged_Callback cb) const { qstandarditem_emitdatachanged_callback = cb; }

// Base flag setters
	inline void setQStandardItem_Data_IsBase(bool value) const { qstandarditem_data_isbase = value; }
	inline void setQStandardItem_MultiData_IsBase(bool value) const { qstandarditem_multidata_isbase = value; }
	inline void setQStandardItem_SetData_IsBase(bool value) const { qstandarditem_setdata_isbase = value; }
	inline void setQStandardItem_Type_IsBase(bool value) const { qstandarditem_type_isbase = value; }
	inline void setQStandardItem_Read_IsBase(bool value) const { qstandarditem_read_isbase = value; }
	inline void setQStandardItem_Write_IsBase(bool value) const { qstandarditem_write_isbase = value; }
	inline void setQStandardItem_OperatorLesser_IsBase(bool value) const { qstandarditem_operatorlesser_isbase = value; }
	inline void setQStandardItem_OperatorAssign_IsBase(bool value) const { qstandarditem_operatorassign_isbase = value; }
	inline void setQStandardItem_EmitDataChanged_IsBase(bool value) const { qstandarditem_emitdatachanged_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QVariant data(int role) const override {
		if (qstandarditem_data_isbase) {
			qstandarditem_data_isbase = false;
			return QStandardItem::data(role);
		} else if (qstandarditem_data_callback != nullptr) {
			int cbval1 = role;
			QVariant* callback_ret = qstandarditem_data_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QStandardItem::data(role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void multiData(QModelRoleDataSpan roleDataSpan) const override {
		if (qstandarditem_multidata_isbase) {
			qstandarditem_multidata_isbase = false;
			QStandardItem::multiData(roleDataSpan);
		} else if (qstandarditem_multidata_callback != nullptr) {
			QModelRoleDataSpan* cbval1 = &roleDataSpan;
			qstandarditem_multidata_callback(this, cbval1);
		} else {
			QStandardItem::multiData(roleDataSpan);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setData(const QVariant& value, int role) override {
		if (qstandarditem_setdata_isbase) {
			qstandarditem_setdata_isbase = false;
			QStandardItem::setData(value, role);
		} else if (qstandarditem_setdata_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&value;
			int cbval2 = role;
			qstandarditem_setdata_callback(this, cbval1, cbval2);
		} else {
			QStandardItem::setData(value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qstandarditem_type_isbase) {
			qstandarditem_type_isbase = false;
			return QStandardItem::type();
		} else if (qstandarditem_type_callback != nullptr) {
			int callback_ret = qstandarditem_type_callback();
			return callback_ret;
		} else {
			return QStandardItem::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void read(QDataStream& in) override {
		if (qstandarditem_read_isbase) {
			qstandarditem_read_isbase = false;
			QStandardItem::read(in);
		} else if (qstandarditem_read_callback != nullptr) {
			QDataStream* cbval1 = &in;
			qstandarditem_read_callback(this, cbval1);
		} else {
			QStandardItem::read(in);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void write(QDataStream& out) const override {
		if (qstandarditem_write_isbase) {
			qstandarditem_write_isbase = false;
			QStandardItem::write(out);
		} else if (qstandarditem_write_callback != nullptr) {
			QDataStream* cbval1 = &out;
			qstandarditem_write_callback(this, cbval1);
		} else {
			QStandardItem::write(out);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool operator<(const QStandardItem& other) const override {
		if (qstandarditem_operatorlesser_isbase) {
			qstandarditem_operatorlesser_isbase = false;
			return QStandardItem::operator<(other);
		} else if (qstandarditem_operatorlesser_callback != nullptr) {
			const QStandardItem* cbval1 = (const QStandardItem*)&other;
			bool callback_ret = qstandarditem_operatorlesser_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStandardItem::operator<(other);
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QStandardItem& other) {
		if (qstandarditem_operatorassign_isbase) {
			qstandarditem_operatorassign_isbase = false;
			QStandardItem::operator=(other);
		} else if (qstandarditem_operatorassign_callback != nullptr) {
			const QStandardItem* cbval1 = (const QStandardItem*)&other;
			qstandarditem_operatorassign_callback(this, cbval1);
		} else {
			QStandardItem::operator=(other);
		}
	}

	// Virtual method for C ABI access and custom callback
	void emitDataChanged() {
		if (qstandarditem_emitdatachanged_isbase) {
			qstandarditem_emitdatachanged_isbase = false;
			QStandardItem::emitDataChanged();
		} else if (qstandarditem_emitdatachanged_callback != nullptr) {
			qstandarditem_emitdatachanged_callback();
		} else {
			QStandardItem::emitDataChanged();
		}
	}

	// Friend functions
	friend void QStandardItem_OperatorAssign(QStandardItem* self, const QStandardItem* other);
	friend void QStandardItem_QBaseOperatorAssign(QStandardItem* self, const QStandardItem* other);
	friend void QStandardItem_EmitDataChanged(QStandardItem* self);
	friend void QStandardItem_QBaseEmitDataChanged(QStandardItem* self);
};

// This class is a subclass of QStandardItemModel so that we can call protected methods
class VirtualQStandardItemModel final : public QStandardItemModel {

public:
	// Virtual class boolean flag
	bool isVirtualQStandardItemModel= true;

	// Virtual class public types (including callbacks)
	using QStandardItemModel_RoleNames_Callback = libqt_map (*)();
	using QStandardItemModel_Index_Callback = QModelIndex* (*)(const QStandardItemModel*, int, int, const QModelIndex*);
	using QStandardItemModel_Parent_Callback = QModelIndex* (*)(const QStandardItemModel*, const QModelIndex*);
	using QStandardItemModel_RowCount_Callback = int (*)(const QStandardItemModel*, const QModelIndex*);
	using QStandardItemModel_ColumnCount_Callback = int (*)(const QStandardItemModel*, const QModelIndex*);
	using QStandardItemModel_HasChildren_Callback = bool (*)(const QStandardItemModel*, const QModelIndex*);
	using QStandardItemModel_Data_Callback = QVariant* (*)(const QStandardItemModel*, const QModelIndex*, int);
	using QStandardItemModel_MultiData_Callback = void (*)(const QStandardItemModel*, const QModelIndex*, QModelRoleDataSpan*);
	using QStandardItemModel_SetData_Callback = bool (*)(QStandardItemModel*, const QModelIndex*, const QVariant*, int);
	using QStandardItemModel_ClearItemData_Callback = bool (*)(QStandardItemModel*, const QModelIndex*);
	using QStandardItemModel_HeaderData_Callback = QVariant* (*)(const QStandardItemModel*, int, int, int);
	using QStandardItemModel_SetHeaderData_Callback = bool (*)(QStandardItemModel*, int, int, const QVariant*, int);
	using QStandardItemModel_InsertRows_Callback = bool (*)(QStandardItemModel*, int, int, const QModelIndex*);
	using QStandardItemModel_InsertColumns_Callback = bool (*)(QStandardItemModel*, int, int, const QModelIndex*);
	using QStandardItemModel_RemoveRows_Callback = bool (*)(QStandardItemModel*, int, int, const QModelIndex*);
	using QStandardItemModel_RemoveColumns_Callback = bool (*)(QStandardItemModel*, int, int, const QModelIndex*);
	using QStandardItemModel_Flags_Callback = int (*)(const QStandardItemModel*, const QModelIndex*);
	using QStandardItemModel_SupportedDropActions_Callback = int (*)();
	using QStandardItemModel_ItemData_Callback = libqt_map (*)(const QStandardItemModel*, const QModelIndex*);
	using QStandardItemModel_SetItemData_Callback = bool (*)(QStandardItemModel*, const QModelIndex*, libqt_map);
	using QStandardItemModel_Sort_Callback = void (*)(QStandardItemModel*, int, int);
	using QStandardItemModel_MimeTypes_Callback = libqt_list (*)();
	using QStandardItemModel_MimeData_Callback = QMimeData* (*)(const QStandardItemModel*, libqt_list);
	using QStandardItemModel_DropMimeData_Callback = bool (*)(QStandardItemModel*, const QMimeData*, int, int, int, const QModelIndex*);

protected:
	// Instance callback storage
	mutable QStandardItemModel_RoleNames_Callback qstandarditemmodel_rolenames_callback = nullptr;
	mutable QStandardItemModel_Index_Callback qstandarditemmodel_index_callback = nullptr;
	mutable QStandardItemModel_Parent_Callback qstandarditemmodel_parent_callback = nullptr;
	mutable QStandardItemModel_RowCount_Callback qstandarditemmodel_rowcount_callback = nullptr;
	mutable QStandardItemModel_ColumnCount_Callback qstandarditemmodel_columncount_callback = nullptr;
	mutable QStandardItemModel_HasChildren_Callback qstandarditemmodel_haschildren_callback = nullptr;
	mutable QStandardItemModel_Data_Callback qstandarditemmodel_data_callback = nullptr;
	mutable QStandardItemModel_MultiData_Callback qstandarditemmodel_multidata_callback = nullptr;
	mutable QStandardItemModel_SetData_Callback qstandarditemmodel_setdata_callback = nullptr;
	mutable QStandardItemModel_ClearItemData_Callback qstandarditemmodel_clearitemdata_callback = nullptr;
	mutable QStandardItemModel_HeaderData_Callback qstandarditemmodel_headerdata_callback = nullptr;
	mutable QStandardItemModel_SetHeaderData_Callback qstandarditemmodel_setheaderdata_callback = nullptr;
	mutable QStandardItemModel_InsertRows_Callback qstandarditemmodel_insertrows_callback = nullptr;
	mutable QStandardItemModel_InsertColumns_Callback qstandarditemmodel_insertcolumns_callback = nullptr;
	mutable QStandardItemModel_RemoveRows_Callback qstandarditemmodel_removerows_callback = nullptr;
	mutable QStandardItemModel_RemoveColumns_Callback qstandarditemmodel_removecolumns_callback = nullptr;
	mutable QStandardItemModel_Flags_Callback qstandarditemmodel_flags_callback = nullptr;
	mutable QStandardItemModel_SupportedDropActions_Callback qstandarditemmodel_supporteddropactions_callback = nullptr;
	mutable QStandardItemModel_ItemData_Callback qstandarditemmodel_itemdata_callback = nullptr;
	mutable QStandardItemModel_SetItemData_Callback qstandarditemmodel_setitemdata_callback = nullptr;
	mutable QStandardItemModel_Sort_Callback qstandarditemmodel_sort_callback = nullptr;
	mutable QStandardItemModel_MimeTypes_Callback qstandarditemmodel_mimetypes_callback = nullptr;
	mutable QStandardItemModel_MimeData_Callback qstandarditemmodel_mimedata_callback = nullptr;
	mutable QStandardItemModel_DropMimeData_Callback qstandarditemmodel_dropmimedata_callback = nullptr;

	// Instance base flags
    mutable bool qstandarditemmodel_rolenames_isbase = false;
    mutable bool qstandarditemmodel_index_isbase = false;
    mutable bool qstandarditemmodel_parent_isbase = false;
    mutable bool qstandarditemmodel_rowcount_isbase = false;
    mutable bool qstandarditemmodel_columncount_isbase = false;
    mutable bool qstandarditemmodel_haschildren_isbase = false;
    mutable bool qstandarditemmodel_data_isbase = false;
    mutable bool qstandarditemmodel_multidata_isbase = false;
    mutable bool qstandarditemmodel_setdata_isbase = false;
    mutable bool qstandarditemmodel_clearitemdata_isbase = false;
    mutable bool qstandarditemmodel_headerdata_isbase = false;
    mutable bool qstandarditemmodel_setheaderdata_isbase = false;
    mutable bool qstandarditemmodel_insertrows_isbase = false;
    mutable bool qstandarditemmodel_insertcolumns_isbase = false;
    mutable bool qstandarditemmodel_removerows_isbase = false;
    mutable bool qstandarditemmodel_removecolumns_isbase = false;
    mutable bool qstandarditemmodel_flags_isbase = false;
    mutable bool qstandarditemmodel_supporteddropactions_isbase = false;
    mutable bool qstandarditemmodel_itemdata_isbase = false;
    mutable bool qstandarditemmodel_setitemdata_isbase = false;
    mutable bool qstandarditemmodel_sort_isbase = false;
    mutable bool qstandarditemmodel_mimetypes_isbase = false;
    mutable bool qstandarditemmodel_mimedata_isbase = false;
    mutable bool qstandarditemmodel_dropmimedata_isbase = false;

public:
	VirtualQStandardItemModel(): QStandardItemModel() {};
	VirtualQStandardItemModel(int rows, int columns): QStandardItemModel(rows, columns) {};
	VirtualQStandardItemModel(QObject* parent): QStandardItemModel(parent) {};
	VirtualQStandardItemModel(int rows, int columns, QObject* parent): QStandardItemModel(rows, columns, parent) {};

	~VirtualQStandardItemModel() {
		qstandarditemmodel_rolenames_callback = nullptr;
		qstandarditemmodel_index_callback = nullptr;
		qstandarditemmodel_parent_callback = nullptr;
		qstandarditemmodel_rowcount_callback = nullptr;
		qstandarditemmodel_columncount_callback = nullptr;
		qstandarditemmodel_haschildren_callback = nullptr;
		qstandarditemmodel_data_callback = nullptr;
		qstandarditemmodel_multidata_callback = nullptr;
		qstandarditemmodel_setdata_callback = nullptr;
		qstandarditemmodel_clearitemdata_callback = nullptr;
		qstandarditemmodel_headerdata_callback = nullptr;
		qstandarditemmodel_setheaderdata_callback = nullptr;
		qstandarditemmodel_insertrows_callback = nullptr;
		qstandarditemmodel_insertcolumns_callback = nullptr;
		qstandarditemmodel_removerows_callback = nullptr;
		qstandarditemmodel_removecolumns_callback = nullptr;
		qstandarditemmodel_flags_callback = nullptr;
		qstandarditemmodel_supporteddropactions_callback = nullptr;
		qstandarditemmodel_itemdata_callback = nullptr;
		qstandarditemmodel_setitemdata_callback = nullptr;
		qstandarditemmodel_sort_callback = nullptr;
		qstandarditemmodel_mimetypes_callback = nullptr;
		qstandarditemmodel_mimedata_callback = nullptr;
		qstandarditemmodel_dropmimedata_callback = nullptr;
	}

// Callback setters
	inline void setQStandardItemModel_RoleNames_Callback(QStandardItemModel_RoleNames_Callback cb) const { qstandarditemmodel_rolenames_callback = cb; }
	inline void setQStandardItemModel_Index_Callback(QStandardItemModel_Index_Callback cb) const { qstandarditemmodel_index_callback = cb; }
	inline void setQStandardItemModel_Parent_Callback(QStandardItemModel_Parent_Callback cb) const { qstandarditemmodel_parent_callback = cb; }
	inline void setQStandardItemModel_RowCount_Callback(QStandardItemModel_RowCount_Callback cb) const { qstandarditemmodel_rowcount_callback = cb; }
	inline void setQStandardItemModel_ColumnCount_Callback(QStandardItemModel_ColumnCount_Callback cb) const { qstandarditemmodel_columncount_callback = cb; }
	inline void setQStandardItemModel_HasChildren_Callback(QStandardItemModel_HasChildren_Callback cb) const { qstandarditemmodel_haschildren_callback = cb; }
	inline void setQStandardItemModel_Data_Callback(QStandardItemModel_Data_Callback cb) const { qstandarditemmodel_data_callback = cb; }
	inline void setQStandardItemModel_MultiData_Callback(QStandardItemModel_MultiData_Callback cb) const { qstandarditemmodel_multidata_callback = cb; }
	inline void setQStandardItemModel_SetData_Callback(QStandardItemModel_SetData_Callback cb) const { qstandarditemmodel_setdata_callback = cb; }
	inline void setQStandardItemModel_ClearItemData_Callback(QStandardItemModel_ClearItemData_Callback cb) const { qstandarditemmodel_clearitemdata_callback = cb; }
	inline void setQStandardItemModel_HeaderData_Callback(QStandardItemModel_HeaderData_Callback cb) const { qstandarditemmodel_headerdata_callback = cb; }
	inline void setQStandardItemModel_SetHeaderData_Callback(QStandardItemModel_SetHeaderData_Callback cb) const { qstandarditemmodel_setheaderdata_callback = cb; }
	inline void setQStandardItemModel_InsertRows_Callback(QStandardItemModel_InsertRows_Callback cb) const { qstandarditemmodel_insertrows_callback = cb; }
	inline void setQStandardItemModel_InsertColumns_Callback(QStandardItemModel_InsertColumns_Callback cb) const { qstandarditemmodel_insertcolumns_callback = cb; }
	inline void setQStandardItemModel_RemoveRows_Callback(QStandardItemModel_RemoveRows_Callback cb) const { qstandarditemmodel_removerows_callback = cb; }
	inline void setQStandardItemModel_RemoveColumns_Callback(QStandardItemModel_RemoveColumns_Callback cb) const { qstandarditemmodel_removecolumns_callback = cb; }
	inline void setQStandardItemModel_Flags_Callback(QStandardItemModel_Flags_Callback cb) const { qstandarditemmodel_flags_callback = cb; }
	inline void setQStandardItemModel_SupportedDropActions_Callback(QStandardItemModel_SupportedDropActions_Callback cb) const { qstandarditemmodel_supporteddropactions_callback = cb; }
	inline void setQStandardItemModel_ItemData_Callback(QStandardItemModel_ItemData_Callback cb) const { qstandarditemmodel_itemdata_callback = cb; }
	inline void setQStandardItemModel_SetItemData_Callback(QStandardItemModel_SetItemData_Callback cb) const { qstandarditemmodel_setitemdata_callback = cb; }
	inline void setQStandardItemModel_Sort_Callback(QStandardItemModel_Sort_Callback cb) const { qstandarditemmodel_sort_callback = cb; }
	inline void setQStandardItemModel_MimeTypes_Callback(QStandardItemModel_MimeTypes_Callback cb) const { qstandarditemmodel_mimetypes_callback = cb; }
	inline void setQStandardItemModel_MimeData_Callback(QStandardItemModel_MimeData_Callback cb) const { qstandarditemmodel_mimedata_callback = cb; }
	inline void setQStandardItemModel_DropMimeData_Callback(QStandardItemModel_DropMimeData_Callback cb) const { qstandarditemmodel_dropmimedata_callback = cb; }

// Base flag setters
	inline void setQStandardItemModel_RoleNames_IsBase(bool value) const { qstandarditemmodel_rolenames_isbase = value; }
	inline void setQStandardItemModel_Index_IsBase(bool value) const { qstandarditemmodel_index_isbase = value; }
	inline void setQStandardItemModel_Parent_IsBase(bool value) const { qstandarditemmodel_parent_isbase = value; }
	inline void setQStandardItemModel_RowCount_IsBase(bool value) const { qstandarditemmodel_rowcount_isbase = value; }
	inline void setQStandardItemModel_ColumnCount_IsBase(bool value) const { qstandarditemmodel_columncount_isbase = value; }
	inline void setQStandardItemModel_HasChildren_IsBase(bool value) const { qstandarditemmodel_haschildren_isbase = value; }
	inline void setQStandardItemModel_Data_IsBase(bool value) const { qstandarditemmodel_data_isbase = value; }
	inline void setQStandardItemModel_MultiData_IsBase(bool value) const { qstandarditemmodel_multidata_isbase = value; }
	inline void setQStandardItemModel_SetData_IsBase(bool value) const { qstandarditemmodel_setdata_isbase = value; }
	inline void setQStandardItemModel_ClearItemData_IsBase(bool value) const { qstandarditemmodel_clearitemdata_isbase = value; }
	inline void setQStandardItemModel_HeaderData_IsBase(bool value) const { qstandarditemmodel_headerdata_isbase = value; }
	inline void setQStandardItemModel_SetHeaderData_IsBase(bool value) const { qstandarditemmodel_setheaderdata_isbase = value; }
	inline void setQStandardItemModel_InsertRows_IsBase(bool value) const { qstandarditemmodel_insertrows_isbase = value; }
	inline void setQStandardItemModel_InsertColumns_IsBase(bool value) const { qstandarditemmodel_insertcolumns_isbase = value; }
	inline void setQStandardItemModel_RemoveRows_IsBase(bool value) const { qstandarditemmodel_removerows_isbase = value; }
	inline void setQStandardItemModel_RemoveColumns_IsBase(bool value) const { qstandarditemmodel_removecolumns_isbase = value; }
	inline void setQStandardItemModel_Flags_IsBase(bool value) const { qstandarditemmodel_flags_isbase = value; }
	inline void setQStandardItemModel_SupportedDropActions_IsBase(bool value) const { qstandarditemmodel_supporteddropactions_isbase = value; }
	inline void setQStandardItemModel_ItemData_IsBase(bool value) const { qstandarditemmodel_itemdata_isbase = value; }
	inline void setQStandardItemModel_SetItemData_IsBase(bool value) const { qstandarditemmodel_setitemdata_isbase = value; }
	inline void setQStandardItemModel_Sort_IsBase(bool value) const { qstandarditemmodel_sort_isbase = value; }
	inline void setQStandardItemModel_MimeTypes_IsBase(bool value) const { qstandarditemmodel_mimetypes_isbase = value; }
	inline void setQStandardItemModel_MimeData_IsBase(bool value) const { qstandarditemmodel_mimedata_isbase = value; }
	inline void setQStandardItemModel_DropMimeData_IsBase(bool value) const { qstandarditemmodel_dropmimedata_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QHash<int, QByteArray> roleNames() const override {
		if (qstandarditemmodel_rolenames_isbase) {
			qstandarditemmodel_rolenames_isbase = false;
			return QStandardItemModel::roleNames();
		} else if (qstandarditemmodel_rolenames_callback != nullptr) {
			libqt_map callback_ret = qstandarditemmodel_rolenames_callback();
			return callback_ret;
		} else {
			return QStandardItemModel::roleNames();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (qstandarditemmodel_index_isbase) {
			qstandarditemmodel_index_isbase = false;
			return QStandardItemModel::index(row, column, parent);
		} else if (qstandarditemmodel_index_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			QModelIndex* callback_ret = qstandarditemmodel_index_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QStandardItemModel::index(row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (qstandarditemmodel_parent_isbase) {
			qstandarditemmodel_parent_isbase = false;
			return QStandardItemModel::parent(child);
		} else if (qstandarditemmodel_parent_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&child;
			QModelIndex* callback_ret = qstandarditemmodel_parent_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QStandardItemModel::parent(child);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int rowCount(const QModelIndex& parent) const override {
		if (qstandarditemmodel_rowcount_isbase) {
			qstandarditemmodel_rowcount_isbase = false;
			return QStandardItemModel::rowCount(parent);
		} else if (qstandarditemmodel_rowcount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qstandarditemmodel_rowcount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStandardItemModel::rowCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int columnCount(const QModelIndex& parent) const override {
		if (qstandarditemmodel_columncount_isbase) {
			qstandarditemmodel_columncount_isbase = false;
			return QStandardItemModel::columnCount(parent);
		} else if (qstandarditemmodel_columncount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qstandarditemmodel_columncount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStandardItemModel::columnCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (qstandarditemmodel_haschildren_isbase) {
			qstandarditemmodel_haschildren_isbase = false;
			return QStandardItemModel::hasChildren(parent);
		} else if (qstandarditemmodel_haschildren_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			bool callback_ret = qstandarditemmodel_haschildren_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStandardItemModel::hasChildren(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (qstandarditemmodel_data_isbase) {
			qstandarditemmodel_data_isbase = false;
			return QStandardItemModel::data(index, role);
		} else if (qstandarditemmodel_data_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = role;
			QVariant* callback_ret = qstandarditemmodel_data_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QStandardItemModel::data(index, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
		if (qstandarditemmodel_multidata_isbase) {
			qstandarditemmodel_multidata_isbase = false;
			QStandardItemModel::multiData(index, roleDataSpan);
		} else if (qstandarditemmodel_multidata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QModelRoleDataSpan* cbval2 = &roleDataSpan;
			qstandarditemmodel_multidata_callback(this, cbval1, cbval2);
		} else {
			QStandardItemModel::multiData(index, roleDataSpan);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (qstandarditemmodel_setdata_isbase) {
			qstandarditemmodel_setdata_isbase = false;
			return QStandardItemModel::setData(index, value, role);
		} else if (qstandarditemmodel_setdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			const QVariant* cbval2 = (const QVariant*)&value;
			int cbval3 = role;
			bool callback_ret = qstandarditemmodel_setdata_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QStandardItemModel::setData(index, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool clearItemData(const QModelIndex& index) override {
		if (qstandarditemmodel_clearitemdata_isbase) {
			qstandarditemmodel_clearitemdata_isbase = false;
			return QStandardItemModel::clearItemData(index);
		} else if (qstandarditemmodel_clearitemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			bool callback_ret = qstandarditemmodel_clearitemdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStandardItemModel::clearItemData(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (qstandarditemmodel_headerdata_isbase) {
			qstandarditemmodel_headerdata_isbase = false;
			return QStandardItemModel::headerData(section, orientation, role);
		} else if (qstandarditemmodel_headerdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			int cbval3 = role;
			QVariant* callback_ret = qstandarditemmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QStandardItemModel::headerData(section, orientation, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (qstandarditemmodel_setheaderdata_isbase) {
			qstandarditemmodel_setheaderdata_isbase = false;
			return QStandardItemModel::setHeaderData(section, orientation, value, role);
		} else if (qstandarditemmodel_setheaderdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			const QVariant* cbval3 = (const QVariant*)&value;
			int cbval4 = role;
			bool callback_ret = qstandarditemmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QStandardItemModel::setHeaderData(section, orientation, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (qstandarditemmodel_insertrows_isbase) {
			qstandarditemmodel_insertrows_isbase = false;
			return QStandardItemModel::insertRows(row, count, parent);
		} else if (qstandarditemmodel_insertrows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qstandarditemmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QStandardItemModel::insertRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (qstandarditemmodel_insertcolumns_isbase) {
			qstandarditemmodel_insertcolumns_isbase = false;
			return QStandardItemModel::insertColumns(column, count, parent);
		} else if (qstandarditemmodel_insertcolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qstandarditemmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QStandardItemModel::insertColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (qstandarditemmodel_removerows_isbase) {
			qstandarditemmodel_removerows_isbase = false;
			return QStandardItemModel::removeRows(row, count, parent);
		} else if (qstandarditemmodel_removerows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qstandarditemmodel_removerows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QStandardItemModel::removeRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (qstandarditemmodel_removecolumns_isbase) {
			qstandarditemmodel_removecolumns_isbase = false;
			return QStandardItemModel::removeColumns(column, count, parent);
		} else if (qstandarditemmodel_removecolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qstandarditemmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QStandardItemModel::removeColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::ItemFlag> flags(const QModelIndex& index) const override {
		if (qstandarditemmodel_flags_isbase) {
			qstandarditemmodel_flags_isbase = false;
			return QStandardItemModel::flags(index);
		} else if (qstandarditemmodel_flags_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qstandarditemmodel_flags_callback(this, cbval1);
			return static_cast<QFlags<Qt::ItemFlag>>(callback_ret);
		} else {
			return QStandardItemModel::flags(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::DropAction> supportedDropActions() const override {
		if (qstandarditemmodel_supporteddropactions_isbase) {
			qstandarditemmodel_supporteddropactions_isbase = false;
			return QStandardItemModel::supportedDropActions();
		} else if (qstandarditemmodel_supporteddropactions_callback != nullptr) {
			int callback_ret = qstandarditemmodel_supporteddropactions_callback();
			return static_cast<QFlags<Qt::DropAction>>(callback_ret);
		} else {
			return QStandardItemModel::supportedDropActions();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (qstandarditemmodel_itemdata_isbase) {
			qstandarditemmodel_itemdata_isbase = false;
			return QStandardItemModel::itemData(index);
		} else if (qstandarditemmodel_itemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			libqt_map callback_ret = qstandarditemmodel_itemdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStandardItemModel::itemData(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (qstandarditemmodel_setitemdata_isbase) {
			qstandarditemmodel_setitemdata_isbase = false;
			return QStandardItemModel::setItemData(index, roles);
		} else if (qstandarditemmodel_setitemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			libqt_map cbval2 = roles;
			bool callback_ret = qstandarditemmodel_setitemdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QStandardItemModel::setItemData(index, roles);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sort(int column, Qt::SortOrder order) override {
		if (qstandarditemmodel_sort_isbase) {
			qstandarditemmodel_sort_isbase = false;
			QStandardItemModel::sort(column, order);
		} else if (qstandarditemmodel_sort_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = static_cast<int>(order);
			qstandarditemmodel_sort_callback(this, cbval1, cbval2);
		} else {
			QStandardItemModel::sort(column, order);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> mimeTypes() const override {
		if (qstandarditemmodel_mimetypes_isbase) {
			qstandarditemmodel_mimetypes_isbase = false;
			return QStandardItemModel::mimeTypes();
		} else if (qstandarditemmodel_mimetypes_callback != nullptr) {
			libqt_list callback_ret = qstandarditemmodel_mimetypes_callback();
			return callback_ret;
		} else {
			return QStandardItemModel::mimeTypes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
		if (qstandarditemmodel_mimedata_isbase) {
			qstandarditemmodel_mimedata_isbase = false;
			return QStandardItemModel::mimeData(indexes);
		} else if (qstandarditemmodel_mimedata_callback != nullptr) {
			libqt_list cbval1 = indexes;
			QMimeData* callback_ret = qstandarditemmodel_mimedata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStandardItemModel::mimeData(indexes);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (qstandarditemmodel_dropmimedata_isbase) {
			qstandarditemmodel_dropmimedata_isbase = false;
			return QStandardItemModel::dropMimeData(data, action, row, column, parent);
		} else if (qstandarditemmodel_dropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qstandarditemmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QStandardItemModel::dropMimeData(data, action, row, column, parent);
		}
	}
};

#endif


