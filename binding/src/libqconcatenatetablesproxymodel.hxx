#pragma once
#ifndef QCONCATENATETABLESPROXYMODEL_H_C_LIBVIRTUAL
#define QCONCATENATETABLESPROXYMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QConcatenateTablesProxyModel so that we can call protected methods
class VirtualQConcatenateTablesProxyModel final : public QConcatenateTablesProxyModel {

public:
	// Virtual class boolean flag
	bool isVirtualQConcatenateTablesProxyModel= true;

	// Virtual class public types (including callbacks)
	using QConcatenateTablesProxyModel_Data_Callback = QVariant* (*)(const QConcatenateTablesProxyModel*, const QModelIndex*, int);
	using QConcatenateTablesProxyModel_SetData_Callback = bool (*)(QConcatenateTablesProxyModel*, const QModelIndex*, const QVariant*, int);
	using QConcatenateTablesProxyModel_ItemData_Callback = libqt_map (*)(const QConcatenateTablesProxyModel*, const QModelIndex*);
	using QConcatenateTablesProxyModel_SetItemData_Callback = bool (*)(QConcatenateTablesProxyModel*, const QModelIndex*, libqt_map);
	using QConcatenateTablesProxyModel_Flags_Callback = int (*)(const QConcatenateTablesProxyModel*, const QModelIndex*);
	using QConcatenateTablesProxyModel_Index_Callback = QModelIndex* (*)(const QConcatenateTablesProxyModel*, int, int, const QModelIndex*);
	using QConcatenateTablesProxyModel_Parent_Callback = QModelIndex* (*)(const QConcatenateTablesProxyModel*, const QModelIndex*);
	using QConcatenateTablesProxyModel_RowCount_Callback = int (*)(const QConcatenateTablesProxyModel*, const QModelIndex*);
	using QConcatenateTablesProxyModel_HeaderData_Callback = QVariant* (*)(const QConcatenateTablesProxyModel*, int, int, int);
	using QConcatenateTablesProxyModel_ColumnCount_Callback = int (*)(const QConcatenateTablesProxyModel*, const QModelIndex*);
	using QConcatenateTablesProxyModel_MimeTypes_Callback = libqt_list (*)();
	using QConcatenateTablesProxyModel_MimeData_Callback = QMimeData* (*)(const QConcatenateTablesProxyModel*, libqt_list);
	using QConcatenateTablesProxyModel_CanDropMimeData_Callback = bool (*)(const QConcatenateTablesProxyModel*, const QMimeData*, int, int, int, const QModelIndex*);
	using QConcatenateTablesProxyModel_DropMimeData_Callback = bool (*)(QConcatenateTablesProxyModel*, const QMimeData*, int, int, int, const QModelIndex*);
	using QConcatenateTablesProxyModel_Span_Callback = QSize* (*)(const QConcatenateTablesProxyModel*, const QModelIndex*);

protected:
	// Instance callback storage
	mutable QConcatenateTablesProxyModel_Data_Callback qconcatenatetablesproxymodel_data_callback = nullptr;
	mutable QConcatenateTablesProxyModel_SetData_Callback qconcatenatetablesproxymodel_setdata_callback = nullptr;
	mutable QConcatenateTablesProxyModel_ItemData_Callback qconcatenatetablesproxymodel_itemdata_callback = nullptr;
	mutable QConcatenateTablesProxyModel_SetItemData_Callback qconcatenatetablesproxymodel_setitemdata_callback = nullptr;
	mutable QConcatenateTablesProxyModel_Flags_Callback qconcatenatetablesproxymodel_flags_callback = nullptr;
	mutable QConcatenateTablesProxyModel_Index_Callback qconcatenatetablesproxymodel_index_callback = nullptr;
	mutable QConcatenateTablesProxyModel_Parent_Callback qconcatenatetablesproxymodel_parent_callback = nullptr;
	mutable QConcatenateTablesProxyModel_RowCount_Callback qconcatenatetablesproxymodel_rowcount_callback = nullptr;
	mutable QConcatenateTablesProxyModel_HeaderData_Callback qconcatenatetablesproxymodel_headerdata_callback = nullptr;
	mutable QConcatenateTablesProxyModel_ColumnCount_Callback qconcatenatetablesproxymodel_columncount_callback = nullptr;
	mutable QConcatenateTablesProxyModel_MimeTypes_Callback qconcatenatetablesproxymodel_mimetypes_callback = nullptr;
	mutable QConcatenateTablesProxyModel_MimeData_Callback qconcatenatetablesproxymodel_mimedata_callback = nullptr;
	mutable QConcatenateTablesProxyModel_CanDropMimeData_Callback qconcatenatetablesproxymodel_candropmimedata_callback = nullptr;
	mutable QConcatenateTablesProxyModel_DropMimeData_Callback qconcatenatetablesproxymodel_dropmimedata_callback = nullptr;
	mutable QConcatenateTablesProxyModel_Span_Callback qconcatenatetablesproxymodel_span_callback = nullptr;

	// Instance base flags
    mutable bool qconcatenatetablesproxymodel_data_isbase = false;
    mutable bool qconcatenatetablesproxymodel_setdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_itemdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_setitemdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_flags_isbase = false;
    mutable bool qconcatenatetablesproxymodel_index_isbase = false;
    mutable bool qconcatenatetablesproxymodel_parent_isbase = false;
    mutable bool qconcatenatetablesproxymodel_rowcount_isbase = false;
    mutable bool qconcatenatetablesproxymodel_headerdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_columncount_isbase = false;
    mutable bool qconcatenatetablesproxymodel_mimetypes_isbase = false;
    mutable bool qconcatenatetablesproxymodel_mimedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_candropmimedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_dropmimedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_span_isbase = false;

public:
	VirtualQConcatenateTablesProxyModel(): QConcatenateTablesProxyModel() {};
	VirtualQConcatenateTablesProxyModel(QObject* parent): QConcatenateTablesProxyModel(parent) {};

	~VirtualQConcatenateTablesProxyModel() {
		qconcatenatetablesproxymodel_data_callback = nullptr;
		qconcatenatetablesproxymodel_setdata_callback = nullptr;
		qconcatenatetablesproxymodel_itemdata_callback = nullptr;
		qconcatenatetablesproxymodel_setitemdata_callback = nullptr;
		qconcatenatetablesproxymodel_flags_callback = nullptr;
		qconcatenatetablesproxymodel_index_callback = nullptr;
		qconcatenatetablesproxymodel_parent_callback = nullptr;
		qconcatenatetablesproxymodel_rowcount_callback = nullptr;
		qconcatenatetablesproxymodel_headerdata_callback = nullptr;
		qconcatenatetablesproxymodel_columncount_callback = nullptr;
		qconcatenatetablesproxymodel_mimetypes_callback = nullptr;
		qconcatenatetablesproxymodel_mimedata_callback = nullptr;
		qconcatenatetablesproxymodel_candropmimedata_callback = nullptr;
		qconcatenatetablesproxymodel_dropmimedata_callback = nullptr;
		qconcatenatetablesproxymodel_span_callback = nullptr;
	}

// Callback setters
	inline void setQConcatenateTablesProxyModel_Data_Callback(QConcatenateTablesProxyModel_Data_Callback cb) const { qconcatenatetablesproxymodel_data_callback = cb; }
	inline void setQConcatenateTablesProxyModel_SetData_Callback(QConcatenateTablesProxyModel_SetData_Callback cb) const { qconcatenatetablesproxymodel_setdata_callback = cb; }
	inline void setQConcatenateTablesProxyModel_ItemData_Callback(QConcatenateTablesProxyModel_ItemData_Callback cb) const { qconcatenatetablesproxymodel_itemdata_callback = cb; }
	inline void setQConcatenateTablesProxyModel_SetItemData_Callback(QConcatenateTablesProxyModel_SetItemData_Callback cb) const { qconcatenatetablesproxymodel_setitemdata_callback = cb; }
	inline void setQConcatenateTablesProxyModel_Flags_Callback(QConcatenateTablesProxyModel_Flags_Callback cb) const { qconcatenatetablesproxymodel_flags_callback = cb; }
	inline void setQConcatenateTablesProxyModel_Index_Callback(QConcatenateTablesProxyModel_Index_Callback cb) const { qconcatenatetablesproxymodel_index_callback = cb; }
	inline void setQConcatenateTablesProxyModel_Parent_Callback(QConcatenateTablesProxyModel_Parent_Callback cb) const { qconcatenatetablesproxymodel_parent_callback = cb; }
	inline void setQConcatenateTablesProxyModel_RowCount_Callback(QConcatenateTablesProxyModel_RowCount_Callback cb) const { qconcatenatetablesproxymodel_rowcount_callback = cb; }
	inline void setQConcatenateTablesProxyModel_HeaderData_Callback(QConcatenateTablesProxyModel_HeaderData_Callback cb) const { qconcatenatetablesproxymodel_headerdata_callback = cb; }
	inline void setQConcatenateTablesProxyModel_ColumnCount_Callback(QConcatenateTablesProxyModel_ColumnCount_Callback cb) const { qconcatenatetablesproxymodel_columncount_callback = cb; }
	inline void setQConcatenateTablesProxyModel_MimeTypes_Callback(QConcatenateTablesProxyModel_MimeTypes_Callback cb) const { qconcatenatetablesproxymodel_mimetypes_callback = cb; }
	inline void setQConcatenateTablesProxyModel_MimeData_Callback(QConcatenateTablesProxyModel_MimeData_Callback cb) const { qconcatenatetablesproxymodel_mimedata_callback = cb; }
	inline void setQConcatenateTablesProxyModel_CanDropMimeData_Callback(QConcatenateTablesProxyModel_CanDropMimeData_Callback cb) const { qconcatenatetablesproxymodel_candropmimedata_callback = cb; }
	inline void setQConcatenateTablesProxyModel_DropMimeData_Callback(QConcatenateTablesProxyModel_DropMimeData_Callback cb) const { qconcatenatetablesproxymodel_dropmimedata_callback = cb; }
	inline void setQConcatenateTablesProxyModel_Span_Callback(QConcatenateTablesProxyModel_Span_Callback cb) const { qconcatenatetablesproxymodel_span_callback = cb; }

// Base flag setters
	inline void setQConcatenateTablesProxyModel_Data_IsBase(bool value) const { qconcatenatetablesproxymodel_data_isbase = value; }
	inline void setQConcatenateTablesProxyModel_SetData_IsBase(bool value) const { qconcatenatetablesproxymodel_setdata_isbase = value; }
	inline void setQConcatenateTablesProxyModel_ItemData_IsBase(bool value) const { qconcatenatetablesproxymodel_itemdata_isbase = value; }
	inline void setQConcatenateTablesProxyModel_SetItemData_IsBase(bool value) const { qconcatenatetablesproxymodel_setitemdata_isbase = value; }
	inline void setQConcatenateTablesProxyModel_Flags_IsBase(bool value) const { qconcatenatetablesproxymodel_flags_isbase = value; }
	inline void setQConcatenateTablesProxyModel_Index_IsBase(bool value) const { qconcatenatetablesproxymodel_index_isbase = value; }
	inline void setQConcatenateTablesProxyModel_Parent_IsBase(bool value) const { qconcatenatetablesproxymodel_parent_isbase = value; }
	inline void setQConcatenateTablesProxyModel_RowCount_IsBase(bool value) const { qconcatenatetablesproxymodel_rowcount_isbase = value; }
	inline void setQConcatenateTablesProxyModel_HeaderData_IsBase(bool value) const { qconcatenatetablesproxymodel_headerdata_isbase = value; }
	inline void setQConcatenateTablesProxyModel_ColumnCount_IsBase(bool value) const { qconcatenatetablesproxymodel_columncount_isbase = value; }
	inline void setQConcatenateTablesProxyModel_MimeTypes_IsBase(bool value) const { qconcatenatetablesproxymodel_mimetypes_isbase = value; }
	inline void setQConcatenateTablesProxyModel_MimeData_IsBase(bool value) const { qconcatenatetablesproxymodel_mimedata_isbase = value; }
	inline void setQConcatenateTablesProxyModel_CanDropMimeData_IsBase(bool value) const { qconcatenatetablesproxymodel_candropmimedata_isbase = value; }
	inline void setQConcatenateTablesProxyModel_DropMimeData_IsBase(bool value) const { qconcatenatetablesproxymodel_dropmimedata_isbase = value; }
	inline void setQConcatenateTablesProxyModel_Span_IsBase(bool value) const { qconcatenatetablesproxymodel_span_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (qconcatenatetablesproxymodel_data_isbase) {
			qconcatenatetablesproxymodel_data_isbase = false;
			return QConcatenateTablesProxyModel::data(index, role);
		} else if (qconcatenatetablesproxymodel_data_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = role;
			QVariant* callback_ret = qconcatenatetablesproxymodel_data_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QConcatenateTablesProxyModel::data(index, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (qconcatenatetablesproxymodel_setdata_isbase) {
			qconcatenatetablesproxymodel_setdata_isbase = false;
			return QConcatenateTablesProxyModel::setData(index, value, role);
		} else if (qconcatenatetablesproxymodel_setdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			const QVariant* cbval2 = (const QVariant*)&value;
			int cbval3 = role;
			bool callback_ret = qconcatenatetablesproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QConcatenateTablesProxyModel::setData(index, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMap<int, QVariant> itemData(const QModelIndex& proxyIndex) const override {
		if (qconcatenatetablesproxymodel_itemdata_isbase) {
			qconcatenatetablesproxymodel_itemdata_isbase = false;
			return QConcatenateTablesProxyModel::itemData(proxyIndex);
		} else if (qconcatenatetablesproxymodel_itemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&proxyIndex;
			libqt_map callback_ret = qconcatenatetablesproxymodel_itemdata_callback(this, cbval1);
			return QMap<int, QVariant>();
		} else {
			return QConcatenateTablesProxyModel::itemData(proxyIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (qconcatenatetablesproxymodel_setitemdata_isbase) {
			qconcatenatetablesproxymodel_setitemdata_isbase = false;
			return QConcatenateTablesProxyModel::setItemData(index, roles);
		} else if (qconcatenatetablesproxymodel_setitemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			libqt_map cbval2;
			cbval2.len = roles.size();
			cbval2.keys = nullptr;
			cbval2.values = nullptr;
			bool callback_ret = qconcatenatetablesproxymodel_setitemdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QConcatenateTablesProxyModel::setItemData(index, roles);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::ItemFlag> flags(const QModelIndex& index) const override {
		if (qconcatenatetablesproxymodel_flags_isbase) {
			qconcatenatetablesproxymodel_flags_isbase = false;
			return QConcatenateTablesProxyModel::flags(index);
		} else if (qconcatenatetablesproxymodel_flags_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qconcatenatetablesproxymodel_flags_callback(this, cbval1);
			return static_cast<QFlags<Qt::ItemFlag>>(callback_ret);
		} else {
			return QConcatenateTablesProxyModel::flags(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (qconcatenatetablesproxymodel_index_isbase) {
			qconcatenatetablesproxymodel_index_isbase = false;
			return QConcatenateTablesProxyModel::index(row, column, parent);
		} else if (qconcatenatetablesproxymodel_index_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			QModelIndex* callback_ret = qconcatenatetablesproxymodel_index_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QConcatenateTablesProxyModel::index(row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex parent(const QModelIndex& index) const override {
		if (qconcatenatetablesproxymodel_parent_isbase) {
			qconcatenatetablesproxymodel_parent_isbase = false;
			return QConcatenateTablesProxyModel::parent(index);
		} else if (qconcatenatetablesproxymodel_parent_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QModelIndex* callback_ret = qconcatenatetablesproxymodel_parent_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QConcatenateTablesProxyModel::parent(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int rowCount(const QModelIndex& parent) const override {
		if (qconcatenatetablesproxymodel_rowcount_isbase) {
			qconcatenatetablesproxymodel_rowcount_isbase = false;
			return QConcatenateTablesProxyModel::rowCount(parent);
		} else if (qconcatenatetablesproxymodel_rowcount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qconcatenatetablesproxymodel_rowcount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QConcatenateTablesProxyModel::rowCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (qconcatenatetablesproxymodel_headerdata_isbase) {
			qconcatenatetablesproxymodel_headerdata_isbase = false;
			return QConcatenateTablesProxyModel::headerData(section, orientation, role);
		} else if (qconcatenatetablesproxymodel_headerdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			int cbval3 = role;
			QVariant* callback_ret = qconcatenatetablesproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QConcatenateTablesProxyModel::headerData(section, orientation, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int columnCount(const QModelIndex& parent) const override {
		if (qconcatenatetablesproxymodel_columncount_isbase) {
			qconcatenatetablesproxymodel_columncount_isbase = false;
			return QConcatenateTablesProxyModel::columnCount(parent);
		} else if (qconcatenatetablesproxymodel_columncount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qconcatenatetablesproxymodel_columncount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QConcatenateTablesProxyModel::columnCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> mimeTypes() const override {
		if (qconcatenatetablesproxymodel_mimetypes_isbase) {
			qconcatenatetablesproxymodel_mimetypes_isbase = false;
			return QConcatenateTablesProxyModel::mimeTypes();
		} else if (qconcatenatetablesproxymodel_mimetypes_callback != nullptr) {
			libqt_list callback_ret = qconcatenatetablesproxymodel_mimetypes_callback();
			return QList<QString>();
		} else {
			return QConcatenateTablesProxyModel::mimeTypes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
		if (qconcatenatetablesproxymodel_mimedata_isbase) {
			qconcatenatetablesproxymodel_mimedata_isbase = false;
			return QConcatenateTablesProxyModel::mimeData(indexes);
		} else if (qconcatenatetablesproxymodel_mimedata_callback != nullptr) {
			libqt_list cbval1;
			cbval1.len = indexes.size();
			cbval1.data = nullptr;
			QMimeData* callback_ret = qconcatenatetablesproxymodel_mimedata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QConcatenateTablesProxyModel::mimeData(indexes);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (qconcatenatetablesproxymodel_candropmimedata_isbase) {
			qconcatenatetablesproxymodel_candropmimedata_isbase = false;
			return QConcatenateTablesProxyModel::canDropMimeData(data, action, row, column, parent);
		} else if (qconcatenatetablesproxymodel_candropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qconcatenatetablesproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QConcatenateTablesProxyModel::canDropMimeData(data, action, row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (qconcatenatetablesproxymodel_dropmimedata_isbase) {
			qconcatenatetablesproxymodel_dropmimedata_isbase = false;
			return QConcatenateTablesProxyModel::dropMimeData(data, action, row, column, parent);
		} else if (qconcatenatetablesproxymodel_dropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qconcatenatetablesproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QConcatenateTablesProxyModel::dropMimeData(data, action, row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize span(const QModelIndex& index) const override {
		if (qconcatenatetablesproxymodel_span_isbase) {
			qconcatenatetablesproxymodel_span_isbase = false;
			return QConcatenateTablesProxyModel::span(index);
		} else if (qconcatenatetablesproxymodel_span_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QSize* callback_ret = qconcatenatetablesproxymodel_span_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QConcatenateTablesProxyModel::span(index);
		}
	}
};

#endif


