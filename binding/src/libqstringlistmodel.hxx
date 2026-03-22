#pragma once
#ifndef QSTRINGLISTMODEL_H_C_LIBVIRTUAL
#define QSTRINGLISTMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QStringListModel so that we can call protected methods
class VirtualQStringListModel final : public QStringListModel {

public:
	// Virtual class boolean flag
	bool isVirtualQStringListModel= true;

	// Virtual class public types (including callbacks)
	using QStringListModel_RowCount_Callback = int (*)(const QStringListModel*, const QModelIndex*);
	using QStringListModel_Sibling_Callback = QModelIndex* (*)(const QStringListModel*, int, int, const QModelIndex*);
	using QStringListModel_Data_Callback = QVariant* (*)(const QStringListModel*, const QModelIndex*, int);
	using QStringListModel_SetData_Callback = bool (*)(QStringListModel*, const QModelIndex*, const QVariant*, int);
	using QStringListModel_ClearItemData_Callback = bool (*)(QStringListModel*, const QModelIndex*);
	using QStringListModel_Flags_Callback = int (*)(const QStringListModel*, const QModelIndex*);
	using QStringListModel_InsertRows_Callback = bool (*)(QStringListModel*, int, int, const QModelIndex*);
	using QStringListModel_RemoveRows_Callback = bool (*)(QStringListModel*, int, int, const QModelIndex*);
	using QStringListModel_MoveRows_Callback = bool (*)(QStringListModel*, const QModelIndex*, int, int, const QModelIndex*, int);
	using QStringListModel_ItemData_Callback = libqt_map (*)(const QStringListModel*, const QModelIndex*);
	using QStringListModel_SetItemData_Callback = bool (*)(QStringListModel*, const QModelIndex*, libqt_map);
	using QStringListModel_Sort_Callback = void (*)(QStringListModel*, int, int);
	using QStringListModel_SupportedDropActions_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QStringListModel_RowCount_Callback qstringlistmodel_rowcount_callback = nullptr;
	mutable QStringListModel_Sibling_Callback qstringlistmodel_sibling_callback = nullptr;
	mutable QStringListModel_Data_Callback qstringlistmodel_data_callback = nullptr;
	mutable QStringListModel_SetData_Callback qstringlistmodel_setdata_callback = nullptr;
	mutable QStringListModel_ClearItemData_Callback qstringlistmodel_clearitemdata_callback = nullptr;
	mutable QStringListModel_Flags_Callback qstringlistmodel_flags_callback = nullptr;
	mutable QStringListModel_InsertRows_Callback qstringlistmodel_insertrows_callback = nullptr;
	mutable QStringListModel_RemoveRows_Callback qstringlistmodel_removerows_callback = nullptr;
	mutable QStringListModel_MoveRows_Callback qstringlistmodel_moverows_callback = nullptr;
	mutable QStringListModel_ItemData_Callback qstringlistmodel_itemdata_callback = nullptr;
	mutable QStringListModel_SetItemData_Callback qstringlistmodel_setitemdata_callback = nullptr;
	mutable QStringListModel_Sort_Callback qstringlistmodel_sort_callback = nullptr;
	mutable QStringListModel_SupportedDropActions_Callback qstringlistmodel_supporteddropactions_callback = nullptr;

	// Instance base flags
    mutable bool qstringlistmodel_rowcount_isbase = false;
    mutable bool qstringlistmodel_sibling_isbase = false;
    mutable bool qstringlistmodel_data_isbase = false;
    mutable bool qstringlistmodel_setdata_isbase = false;
    mutable bool qstringlistmodel_clearitemdata_isbase = false;
    mutable bool qstringlistmodel_flags_isbase = false;
    mutable bool qstringlistmodel_insertrows_isbase = false;
    mutable bool qstringlistmodel_removerows_isbase = false;
    mutable bool qstringlistmodel_moverows_isbase = false;
    mutable bool qstringlistmodel_itemdata_isbase = false;
    mutable bool qstringlistmodel_setitemdata_isbase = false;
    mutable bool qstringlistmodel_sort_isbase = false;
    mutable bool qstringlistmodel_supporteddropactions_isbase = false;

public:
	VirtualQStringListModel(): QStringListModel() {};
	VirtualQStringListModel(const QList<QString>& strings): QStringListModel(strings) {};
	VirtualQStringListModel(QObject* parent): QStringListModel(parent) {};
	VirtualQStringListModel(const QList<QString>& strings, QObject* parent): QStringListModel(strings, parent) {};

	~VirtualQStringListModel() {
		qstringlistmodel_rowcount_callback = nullptr;
		qstringlistmodel_sibling_callback = nullptr;
		qstringlistmodel_data_callback = nullptr;
		qstringlistmodel_setdata_callback = nullptr;
		qstringlistmodel_clearitemdata_callback = nullptr;
		qstringlistmodel_flags_callback = nullptr;
		qstringlistmodel_insertrows_callback = nullptr;
		qstringlistmodel_removerows_callback = nullptr;
		qstringlistmodel_moverows_callback = nullptr;
		qstringlistmodel_itemdata_callback = nullptr;
		qstringlistmodel_setitemdata_callback = nullptr;
		qstringlistmodel_sort_callback = nullptr;
		qstringlistmodel_supporteddropactions_callback = nullptr;
	}

// Callback setters
	inline void setQStringListModel_RowCount_Callback(QStringListModel_RowCount_Callback cb) const { qstringlistmodel_rowcount_callback = cb; }
	inline void setQStringListModel_Sibling_Callback(QStringListModel_Sibling_Callback cb) const { qstringlistmodel_sibling_callback = cb; }
	inline void setQStringListModel_Data_Callback(QStringListModel_Data_Callback cb) const { qstringlistmodel_data_callback = cb; }
	inline void setQStringListModel_SetData_Callback(QStringListModel_SetData_Callback cb) const { qstringlistmodel_setdata_callback = cb; }
	inline void setQStringListModel_ClearItemData_Callback(QStringListModel_ClearItemData_Callback cb) const { qstringlistmodel_clearitemdata_callback = cb; }
	inline void setQStringListModel_Flags_Callback(QStringListModel_Flags_Callback cb) const { qstringlistmodel_flags_callback = cb; }
	inline void setQStringListModel_InsertRows_Callback(QStringListModel_InsertRows_Callback cb) const { qstringlistmodel_insertrows_callback = cb; }
	inline void setQStringListModel_RemoveRows_Callback(QStringListModel_RemoveRows_Callback cb) const { qstringlistmodel_removerows_callback = cb; }
	inline void setQStringListModel_MoveRows_Callback(QStringListModel_MoveRows_Callback cb) const { qstringlistmodel_moverows_callback = cb; }
	inline void setQStringListModel_ItemData_Callback(QStringListModel_ItemData_Callback cb) const { qstringlistmodel_itemdata_callback = cb; }
	inline void setQStringListModel_SetItemData_Callback(QStringListModel_SetItemData_Callback cb) const { qstringlistmodel_setitemdata_callback = cb; }
	inline void setQStringListModel_Sort_Callback(QStringListModel_Sort_Callback cb) const { qstringlistmodel_sort_callback = cb; }
	inline void setQStringListModel_SupportedDropActions_Callback(QStringListModel_SupportedDropActions_Callback cb) const { qstringlistmodel_supporteddropactions_callback = cb; }

// Base flag setters
	inline void setQStringListModel_RowCount_IsBase(bool value) const { qstringlistmodel_rowcount_isbase = value; }
	inline void setQStringListModel_Sibling_IsBase(bool value) const { qstringlistmodel_sibling_isbase = value; }
	inline void setQStringListModel_Data_IsBase(bool value) const { qstringlistmodel_data_isbase = value; }
	inline void setQStringListModel_SetData_IsBase(bool value) const { qstringlistmodel_setdata_isbase = value; }
	inline void setQStringListModel_ClearItemData_IsBase(bool value) const { qstringlistmodel_clearitemdata_isbase = value; }
	inline void setQStringListModel_Flags_IsBase(bool value) const { qstringlistmodel_flags_isbase = value; }
	inline void setQStringListModel_InsertRows_IsBase(bool value) const { qstringlistmodel_insertrows_isbase = value; }
	inline void setQStringListModel_RemoveRows_IsBase(bool value) const { qstringlistmodel_removerows_isbase = value; }
	inline void setQStringListModel_MoveRows_IsBase(bool value) const { qstringlistmodel_moverows_isbase = value; }
	inline void setQStringListModel_ItemData_IsBase(bool value) const { qstringlistmodel_itemdata_isbase = value; }
	inline void setQStringListModel_SetItemData_IsBase(bool value) const { qstringlistmodel_setitemdata_isbase = value; }
	inline void setQStringListModel_Sort_IsBase(bool value) const { qstringlistmodel_sort_isbase = value; }
	inline void setQStringListModel_SupportedDropActions_IsBase(bool value) const { qstringlistmodel_supporteddropactions_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int rowCount(const QModelIndex& parent) const override {
		if (qstringlistmodel_rowcount_isbase) {
			qstringlistmodel_rowcount_isbase = false;
			return QStringListModel::rowCount(parent);
		} else if (qstringlistmodel_rowcount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qstringlistmodel_rowcount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStringListModel::rowCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (qstringlistmodel_sibling_isbase) {
			qstringlistmodel_sibling_isbase = false;
			return QStringListModel::sibling(row, column, idx);
		} else if (qstringlistmodel_sibling_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&idx;
			QModelIndex* callback_ret = qstringlistmodel_sibling_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QStringListModel::sibling(row, column, idx);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (qstringlistmodel_data_isbase) {
			qstringlistmodel_data_isbase = false;
			return QStringListModel::data(index, role);
		} else if (qstringlistmodel_data_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = role;
			QVariant* callback_ret = qstringlistmodel_data_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QStringListModel::data(index, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (qstringlistmodel_setdata_isbase) {
			qstringlistmodel_setdata_isbase = false;
			return QStringListModel::setData(index, value, role);
		} else if (qstringlistmodel_setdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			const QVariant* cbval2 = (const QVariant*)&value;
			int cbval3 = role;
			bool callback_ret = qstringlistmodel_setdata_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QStringListModel::setData(index, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool clearItemData(const QModelIndex& index) override {
		if (qstringlistmodel_clearitemdata_isbase) {
			qstringlistmodel_clearitemdata_isbase = false;
			return QStringListModel::clearItemData(index);
		} else if (qstringlistmodel_clearitemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			bool callback_ret = qstringlistmodel_clearitemdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStringListModel::clearItemData(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::ItemFlag> flags(const QModelIndex& index) const override {
		if (qstringlistmodel_flags_isbase) {
			qstringlistmodel_flags_isbase = false;
			return QStringListModel::flags(index);
		} else if (qstringlistmodel_flags_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qstringlistmodel_flags_callback(this, cbval1);
			return static_cast<QFlags<Qt::ItemFlag>>(callback_ret);
		} else {
			return QStringListModel::flags(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (qstringlistmodel_insertrows_isbase) {
			qstringlistmodel_insertrows_isbase = false;
			return QStringListModel::insertRows(row, count, parent);
		} else if (qstringlistmodel_insertrows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qstringlistmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QStringListModel::insertRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (qstringlistmodel_removerows_isbase) {
			qstringlistmodel_removerows_isbase = false;
			return QStringListModel::removeRows(row, count, parent);
		} else if (qstringlistmodel_removerows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qstringlistmodel_removerows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QStringListModel::removeRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (qstringlistmodel_moverows_isbase) {
			qstringlistmodel_moverows_isbase = false;
			return QStringListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		} else if (qstringlistmodel_moverows_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceParent;
			int cbval2 = sourceRow;
			int cbval3 = count;
			const QModelIndex* cbval4 = (const QModelIndex*)&destinationParent;
			int cbval5 = destinationChild;
			bool callback_ret = qstringlistmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QStringListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (qstringlistmodel_itemdata_isbase) {
			qstringlistmodel_itemdata_isbase = false;
			return QStringListModel::itemData(index);
		} else if (qstringlistmodel_itemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			libqt_map callback_ret = qstringlistmodel_itemdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStringListModel::itemData(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (qstringlistmodel_setitemdata_isbase) {
			qstringlistmodel_setitemdata_isbase = false;
			return QStringListModel::setItemData(index, roles);
		} else if (qstringlistmodel_setitemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			libqt_map cbval2 = roles;
			bool callback_ret = qstringlistmodel_setitemdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QStringListModel::setItemData(index, roles);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sort(int column, Qt::SortOrder order) override {
		if (qstringlistmodel_sort_isbase) {
			qstringlistmodel_sort_isbase = false;
			QStringListModel::sort(column, order);
		} else if (qstringlistmodel_sort_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = static_cast<int>(order);
			qstringlistmodel_sort_callback(this, cbval1, cbval2);
		} else {
			QStringListModel::sort(column, order);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::DropAction> supportedDropActions() const override {
		if (qstringlistmodel_supporteddropactions_isbase) {
			qstringlistmodel_supporteddropactions_isbase = false;
			return QStringListModel::supportedDropActions();
		} else if (qstringlistmodel_supporteddropactions_callback != nullptr) {
			int callback_ret = qstringlistmodel_supporteddropactions_callback();
			return static_cast<QFlags<Qt::DropAction>>(callback_ret);
		} else {
			return QStringListModel::supportedDropActions();
		}
	}
};

#endif


