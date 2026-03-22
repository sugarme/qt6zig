#pragma once
#ifndef QABSTRACTPROXYMODEL_H_C_LIBVIRTUAL
#define QABSTRACTPROXYMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractProxyModel so that we can call protected methods
class VirtualQAbstractProxyModel : public QAbstractProxyModel {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractProxyModel= true;

	// Virtual class public types (including callbacks)
	using QAbstractProxyModel_SetSourceModel_Callback = void (*)(QAbstractProxyModel*, QAbstractItemModel*);
	using QAbstractProxyModel_MapToSource_Callback = QModelIndex* (*)(const QAbstractProxyModel*, const QModelIndex*);
	using QAbstractProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QAbstractProxyModel*, const QModelIndex*);
	using QAbstractProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const QAbstractProxyModel*, const QItemSelection*);
	using QAbstractProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const QAbstractProxyModel*, const QItemSelection*);
	using QAbstractProxyModel_Submit_Callback = bool (*)();
	using QAbstractProxyModel_Revert_Callback = void (*)();
	using QAbstractProxyModel_Data_Callback = QVariant* (*)(const QAbstractProxyModel*, const QModelIndex*, int);
	using QAbstractProxyModel_HeaderData_Callback = QVariant* (*)(const QAbstractProxyModel*, int, int, int);
	using QAbstractProxyModel_ItemData_Callback = libqt_map (*)(const QAbstractProxyModel*, const QModelIndex*);
	using QAbstractProxyModel_Flags_Callback = int (*)(const QAbstractProxyModel*, const QModelIndex*);
	using QAbstractProxyModel_SetData_Callback = bool (*)(QAbstractProxyModel*, const QModelIndex*, const QVariant*, int);
	using QAbstractProxyModel_SetItemData_Callback = bool (*)(QAbstractProxyModel*, const QModelIndex*, libqt_map);
	using QAbstractProxyModel_SetHeaderData_Callback = bool (*)(QAbstractProxyModel*, int, int, const QVariant*, int);
	using QAbstractProxyModel_ClearItemData_Callback = bool (*)(QAbstractProxyModel*, const QModelIndex*);
	using QAbstractProxyModel_Buddy_Callback = QModelIndex* (*)(const QAbstractProxyModel*, const QModelIndex*);
	using QAbstractProxyModel_CanFetchMore_Callback = bool (*)(const QAbstractProxyModel*, const QModelIndex*);
	using QAbstractProxyModel_FetchMore_Callback = void (*)(QAbstractProxyModel*, const QModelIndex*);
	using QAbstractProxyModel_Sort_Callback = void (*)(QAbstractProxyModel*, int, int);
	using QAbstractProxyModel_Span_Callback = QSize* (*)(const QAbstractProxyModel*, const QModelIndex*);
	using QAbstractProxyModel_HasChildren_Callback = bool (*)(const QAbstractProxyModel*, const QModelIndex*);
	using QAbstractProxyModel_Sibling_Callback = QModelIndex* (*)(const QAbstractProxyModel*, int, int, const QModelIndex*);
	using QAbstractProxyModel_MimeData_Callback = QMimeData* (*)(const QAbstractProxyModel*, libqt_list);
	using QAbstractProxyModel_CanDropMimeData_Callback = bool (*)(const QAbstractProxyModel*, const QMimeData*, int, int, int, const QModelIndex*);
	using QAbstractProxyModel_DropMimeData_Callback = bool (*)(QAbstractProxyModel*, const QMimeData*, int, int, int, const QModelIndex*);
	using QAbstractProxyModel_MimeTypes_Callback = libqt_list (*)();
	using QAbstractProxyModel_SupportedDragActions_Callback = int (*)();
	using QAbstractProxyModel_SupportedDropActions_Callback = int (*)();
	using QAbstractProxyModel_RoleNames_Callback = libqt_map (*)();
	using QAbstractProxyModel_CreateSourceIndex_Callback = QModelIndex* (*)(const QAbstractProxyModel*, int, int, void*);

protected:
	// Instance callback storage
	mutable QAbstractProxyModel_SetSourceModel_Callback qabstractproxymodel_setsourcemodel_callback = nullptr;
	mutable QAbstractProxyModel_MapToSource_Callback qabstractproxymodel_maptosource_callback = nullptr;
	mutable QAbstractProxyModel_MapFromSource_Callback qabstractproxymodel_mapfromsource_callback = nullptr;
	mutable QAbstractProxyModel_MapSelectionToSource_Callback qabstractproxymodel_mapselectiontosource_callback = nullptr;
	mutable QAbstractProxyModel_MapSelectionFromSource_Callback qabstractproxymodel_mapselectionfromsource_callback = nullptr;
	mutable QAbstractProxyModel_Submit_Callback qabstractproxymodel_submit_callback = nullptr;
	mutable QAbstractProxyModel_Revert_Callback qabstractproxymodel_revert_callback = nullptr;
	mutable QAbstractProxyModel_Data_Callback qabstractproxymodel_data_callback = nullptr;
	mutable QAbstractProxyModel_HeaderData_Callback qabstractproxymodel_headerdata_callback = nullptr;
	mutable QAbstractProxyModel_ItemData_Callback qabstractproxymodel_itemdata_callback = nullptr;
	mutable QAbstractProxyModel_Flags_Callback qabstractproxymodel_flags_callback = nullptr;
	mutable QAbstractProxyModel_SetData_Callback qabstractproxymodel_setdata_callback = nullptr;
	mutable QAbstractProxyModel_SetItemData_Callback qabstractproxymodel_setitemdata_callback = nullptr;
	mutable QAbstractProxyModel_SetHeaderData_Callback qabstractproxymodel_setheaderdata_callback = nullptr;
	mutable QAbstractProxyModel_ClearItemData_Callback qabstractproxymodel_clearitemdata_callback = nullptr;
	mutable QAbstractProxyModel_Buddy_Callback qabstractproxymodel_buddy_callback = nullptr;
	mutable QAbstractProxyModel_CanFetchMore_Callback qabstractproxymodel_canfetchmore_callback = nullptr;
	mutable QAbstractProxyModel_FetchMore_Callback qabstractproxymodel_fetchmore_callback = nullptr;
	mutable QAbstractProxyModel_Sort_Callback qabstractproxymodel_sort_callback = nullptr;
	mutable QAbstractProxyModel_Span_Callback qabstractproxymodel_span_callback = nullptr;
	mutable QAbstractProxyModel_HasChildren_Callback qabstractproxymodel_haschildren_callback = nullptr;
	mutable QAbstractProxyModel_Sibling_Callback qabstractproxymodel_sibling_callback = nullptr;
	mutable QAbstractProxyModel_MimeData_Callback qabstractproxymodel_mimedata_callback = nullptr;
	mutable QAbstractProxyModel_CanDropMimeData_Callback qabstractproxymodel_candropmimedata_callback = nullptr;
	mutable QAbstractProxyModel_DropMimeData_Callback qabstractproxymodel_dropmimedata_callback = nullptr;
	mutable QAbstractProxyModel_MimeTypes_Callback qabstractproxymodel_mimetypes_callback = nullptr;
	mutable QAbstractProxyModel_SupportedDragActions_Callback qabstractproxymodel_supporteddragactions_callback = nullptr;
	mutable QAbstractProxyModel_SupportedDropActions_Callback qabstractproxymodel_supporteddropactions_callback = nullptr;
	mutable QAbstractProxyModel_RoleNames_Callback qabstractproxymodel_rolenames_callback = nullptr;
	mutable QAbstractProxyModel_CreateSourceIndex_Callback qabstractproxymodel_createsourceindex_callback = nullptr;

	// Instance base flags
    mutable bool qabstractproxymodel_setsourcemodel_isbase = false;
    mutable bool qabstractproxymodel_maptosource_isbase = false;
    mutable bool qabstractproxymodel_mapfromsource_isbase = false;
    mutable bool qabstractproxymodel_mapselectiontosource_isbase = false;
    mutable bool qabstractproxymodel_mapselectionfromsource_isbase = false;
    mutable bool qabstractproxymodel_submit_isbase = false;
    mutable bool qabstractproxymodel_revert_isbase = false;
    mutable bool qabstractproxymodel_data_isbase = false;
    mutable bool qabstractproxymodel_headerdata_isbase = false;
    mutable bool qabstractproxymodel_itemdata_isbase = false;
    mutable bool qabstractproxymodel_flags_isbase = false;
    mutable bool qabstractproxymodel_setdata_isbase = false;
    mutable bool qabstractproxymodel_setitemdata_isbase = false;
    mutable bool qabstractproxymodel_setheaderdata_isbase = false;
    mutable bool qabstractproxymodel_clearitemdata_isbase = false;
    mutable bool qabstractproxymodel_buddy_isbase = false;
    mutable bool qabstractproxymodel_canfetchmore_isbase = false;
    mutable bool qabstractproxymodel_fetchmore_isbase = false;
    mutable bool qabstractproxymodel_sort_isbase = false;
    mutable bool qabstractproxymodel_span_isbase = false;
    mutable bool qabstractproxymodel_haschildren_isbase = false;
    mutable bool qabstractproxymodel_sibling_isbase = false;
    mutable bool qabstractproxymodel_mimedata_isbase = false;
    mutable bool qabstractproxymodel_candropmimedata_isbase = false;
    mutable bool qabstractproxymodel_dropmimedata_isbase = false;
    mutable bool qabstractproxymodel_mimetypes_isbase = false;
    mutable bool qabstractproxymodel_supporteddragactions_isbase = false;
    mutable bool qabstractproxymodel_supporteddropactions_isbase = false;
    mutable bool qabstractproxymodel_rolenames_isbase = false;
    mutable bool qabstractproxymodel_createsourceindex_isbase = false;

public:
	VirtualQAbstractProxyModel(): QAbstractProxyModel() {};
	VirtualQAbstractProxyModel(QObject* parent): QAbstractProxyModel(parent) {};

	~VirtualQAbstractProxyModel() {
		qabstractproxymodel_setsourcemodel_callback = nullptr;
		qabstractproxymodel_maptosource_callback = nullptr;
		qabstractproxymodel_mapfromsource_callback = nullptr;
		qabstractproxymodel_mapselectiontosource_callback = nullptr;
		qabstractproxymodel_mapselectionfromsource_callback = nullptr;
		qabstractproxymodel_submit_callback = nullptr;
		qabstractproxymodel_revert_callback = nullptr;
		qabstractproxymodel_data_callback = nullptr;
		qabstractproxymodel_headerdata_callback = nullptr;
		qabstractproxymodel_itemdata_callback = nullptr;
		qabstractproxymodel_flags_callback = nullptr;
		qabstractproxymodel_setdata_callback = nullptr;
		qabstractproxymodel_setitemdata_callback = nullptr;
		qabstractproxymodel_setheaderdata_callback = nullptr;
		qabstractproxymodel_clearitemdata_callback = nullptr;
		qabstractproxymodel_buddy_callback = nullptr;
		qabstractproxymodel_canfetchmore_callback = nullptr;
		qabstractproxymodel_fetchmore_callback = nullptr;
		qabstractproxymodel_sort_callback = nullptr;
		qabstractproxymodel_span_callback = nullptr;
		qabstractproxymodel_haschildren_callback = nullptr;
		qabstractproxymodel_sibling_callback = nullptr;
		qabstractproxymodel_mimedata_callback = nullptr;
		qabstractproxymodel_candropmimedata_callback = nullptr;
		qabstractproxymodel_dropmimedata_callback = nullptr;
		qabstractproxymodel_mimetypes_callback = nullptr;
		qabstractproxymodel_supporteddragactions_callback = nullptr;
		qabstractproxymodel_supporteddropactions_callback = nullptr;
		qabstractproxymodel_rolenames_callback = nullptr;
		qabstractproxymodel_createsourceindex_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractProxyModel_SetSourceModel_Callback(QAbstractProxyModel_SetSourceModel_Callback cb) const { qabstractproxymodel_setsourcemodel_callback = cb; }
	inline void setQAbstractProxyModel_MapToSource_Callback(QAbstractProxyModel_MapToSource_Callback cb) const { qabstractproxymodel_maptosource_callback = cb; }
	inline void setQAbstractProxyModel_MapFromSource_Callback(QAbstractProxyModel_MapFromSource_Callback cb) const { qabstractproxymodel_mapfromsource_callback = cb; }
	inline void setQAbstractProxyModel_MapSelectionToSource_Callback(QAbstractProxyModel_MapSelectionToSource_Callback cb) const { qabstractproxymodel_mapselectiontosource_callback = cb; }
	inline void setQAbstractProxyModel_MapSelectionFromSource_Callback(QAbstractProxyModel_MapSelectionFromSource_Callback cb) const { qabstractproxymodel_mapselectionfromsource_callback = cb; }
	inline void setQAbstractProxyModel_Submit_Callback(QAbstractProxyModel_Submit_Callback cb) const { qabstractproxymodel_submit_callback = cb; }
	inline void setQAbstractProxyModel_Revert_Callback(QAbstractProxyModel_Revert_Callback cb) const { qabstractproxymodel_revert_callback = cb; }
	inline void setQAbstractProxyModel_Data_Callback(QAbstractProxyModel_Data_Callback cb) const { qabstractproxymodel_data_callback = cb; }
	inline void setQAbstractProxyModel_HeaderData_Callback(QAbstractProxyModel_HeaderData_Callback cb) const { qabstractproxymodel_headerdata_callback = cb; }
	inline void setQAbstractProxyModel_ItemData_Callback(QAbstractProxyModel_ItemData_Callback cb) const { qabstractproxymodel_itemdata_callback = cb; }
	inline void setQAbstractProxyModel_Flags_Callback(QAbstractProxyModel_Flags_Callback cb) const { qabstractproxymodel_flags_callback = cb; }
	inline void setQAbstractProxyModel_SetData_Callback(QAbstractProxyModel_SetData_Callback cb) const { qabstractproxymodel_setdata_callback = cb; }
	inline void setQAbstractProxyModel_SetItemData_Callback(QAbstractProxyModel_SetItemData_Callback cb) const { qabstractproxymodel_setitemdata_callback = cb; }
	inline void setQAbstractProxyModel_SetHeaderData_Callback(QAbstractProxyModel_SetHeaderData_Callback cb) const { qabstractproxymodel_setheaderdata_callback = cb; }
	inline void setQAbstractProxyModel_ClearItemData_Callback(QAbstractProxyModel_ClearItemData_Callback cb) const { qabstractproxymodel_clearitemdata_callback = cb; }
	inline void setQAbstractProxyModel_Buddy_Callback(QAbstractProxyModel_Buddy_Callback cb) const { qabstractproxymodel_buddy_callback = cb; }
	inline void setQAbstractProxyModel_CanFetchMore_Callback(QAbstractProxyModel_CanFetchMore_Callback cb) const { qabstractproxymodel_canfetchmore_callback = cb; }
	inline void setQAbstractProxyModel_FetchMore_Callback(QAbstractProxyModel_FetchMore_Callback cb) const { qabstractproxymodel_fetchmore_callback = cb; }
	inline void setQAbstractProxyModel_Sort_Callback(QAbstractProxyModel_Sort_Callback cb) const { qabstractproxymodel_sort_callback = cb; }
	inline void setQAbstractProxyModel_Span_Callback(QAbstractProxyModel_Span_Callback cb) const { qabstractproxymodel_span_callback = cb; }
	inline void setQAbstractProxyModel_HasChildren_Callback(QAbstractProxyModel_HasChildren_Callback cb) const { qabstractproxymodel_haschildren_callback = cb; }
	inline void setQAbstractProxyModel_Sibling_Callback(QAbstractProxyModel_Sibling_Callback cb) const { qabstractproxymodel_sibling_callback = cb; }
	inline void setQAbstractProxyModel_MimeData_Callback(QAbstractProxyModel_MimeData_Callback cb) const { qabstractproxymodel_mimedata_callback = cb; }
	inline void setQAbstractProxyModel_CanDropMimeData_Callback(QAbstractProxyModel_CanDropMimeData_Callback cb) const { qabstractproxymodel_candropmimedata_callback = cb; }
	inline void setQAbstractProxyModel_DropMimeData_Callback(QAbstractProxyModel_DropMimeData_Callback cb) const { qabstractproxymodel_dropmimedata_callback = cb; }
	inline void setQAbstractProxyModel_MimeTypes_Callback(QAbstractProxyModel_MimeTypes_Callback cb) const { qabstractproxymodel_mimetypes_callback = cb; }
	inline void setQAbstractProxyModel_SupportedDragActions_Callback(QAbstractProxyModel_SupportedDragActions_Callback cb) const { qabstractproxymodel_supporteddragactions_callback = cb; }
	inline void setQAbstractProxyModel_SupportedDropActions_Callback(QAbstractProxyModel_SupportedDropActions_Callback cb) const { qabstractproxymodel_supporteddropactions_callback = cb; }
	inline void setQAbstractProxyModel_RoleNames_Callback(QAbstractProxyModel_RoleNames_Callback cb) const { qabstractproxymodel_rolenames_callback = cb; }
	inline void setQAbstractProxyModel_CreateSourceIndex_Callback(QAbstractProxyModel_CreateSourceIndex_Callback cb) const { qabstractproxymodel_createsourceindex_callback = cb; }

// Base flag setters
	inline void setQAbstractProxyModel_SetSourceModel_IsBase(bool value) const { qabstractproxymodel_setsourcemodel_isbase = value; }
	inline void setQAbstractProxyModel_MapToSource_IsBase(bool value) const { qabstractproxymodel_maptosource_isbase = value; }
	inline void setQAbstractProxyModel_MapFromSource_IsBase(bool value) const { qabstractproxymodel_mapfromsource_isbase = value; }
	inline void setQAbstractProxyModel_MapSelectionToSource_IsBase(bool value) const { qabstractproxymodel_mapselectiontosource_isbase = value; }
	inline void setQAbstractProxyModel_MapSelectionFromSource_IsBase(bool value) const { qabstractproxymodel_mapselectionfromsource_isbase = value; }
	inline void setQAbstractProxyModel_Submit_IsBase(bool value) const { qabstractproxymodel_submit_isbase = value; }
	inline void setQAbstractProxyModel_Revert_IsBase(bool value) const { qabstractproxymodel_revert_isbase = value; }
	inline void setQAbstractProxyModel_Data_IsBase(bool value) const { qabstractproxymodel_data_isbase = value; }
	inline void setQAbstractProxyModel_HeaderData_IsBase(bool value) const { qabstractproxymodel_headerdata_isbase = value; }
	inline void setQAbstractProxyModel_ItemData_IsBase(bool value) const { qabstractproxymodel_itemdata_isbase = value; }
	inline void setQAbstractProxyModel_Flags_IsBase(bool value) const { qabstractproxymodel_flags_isbase = value; }
	inline void setQAbstractProxyModel_SetData_IsBase(bool value) const { qabstractproxymodel_setdata_isbase = value; }
	inline void setQAbstractProxyModel_SetItemData_IsBase(bool value) const { qabstractproxymodel_setitemdata_isbase = value; }
	inline void setQAbstractProxyModel_SetHeaderData_IsBase(bool value) const { qabstractproxymodel_setheaderdata_isbase = value; }
	inline void setQAbstractProxyModel_ClearItemData_IsBase(bool value) const { qabstractproxymodel_clearitemdata_isbase = value; }
	inline void setQAbstractProxyModel_Buddy_IsBase(bool value) const { qabstractproxymodel_buddy_isbase = value; }
	inline void setQAbstractProxyModel_CanFetchMore_IsBase(bool value) const { qabstractproxymodel_canfetchmore_isbase = value; }
	inline void setQAbstractProxyModel_FetchMore_IsBase(bool value) const { qabstractproxymodel_fetchmore_isbase = value; }
	inline void setQAbstractProxyModel_Sort_IsBase(bool value) const { qabstractproxymodel_sort_isbase = value; }
	inline void setQAbstractProxyModel_Span_IsBase(bool value) const { qabstractproxymodel_span_isbase = value; }
	inline void setQAbstractProxyModel_HasChildren_IsBase(bool value) const { qabstractproxymodel_haschildren_isbase = value; }
	inline void setQAbstractProxyModel_Sibling_IsBase(bool value) const { qabstractproxymodel_sibling_isbase = value; }
	inline void setQAbstractProxyModel_MimeData_IsBase(bool value) const { qabstractproxymodel_mimedata_isbase = value; }
	inline void setQAbstractProxyModel_CanDropMimeData_IsBase(bool value) const { qabstractproxymodel_candropmimedata_isbase = value; }
	inline void setQAbstractProxyModel_DropMimeData_IsBase(bool value) const { qabstractproxymodel_dropmimedata_isbase = value; }
	inline void setQAbstractProxyModel_MimeTypes_IsBase(bool value) const { qabstractproxymodel_mimetypes_isbase = value; }
	inline void setQAbstractProxyModel_SupportedDragActions_IsBase(bool value) const { qabstractproxymodel_supporteddragactions_isbase = value; }
	inline void setQAbstractProxyModel_SupportedDropActions_IsBase(bool value) const { qabstractproxymodel_supporteddropactions_isbase = value; }
	inline void setQAbstractProxyModel_RoleNames_IsBase(bool value) const { qabstractproxymodel_rolenames_isbase = value; }
	inline void setQAbstractProxyModel_CreateSourceIndex_IsBase(bool value) const { qabstractproxymodel_createsourceindex_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
		if (qabstractproxymodel_setsourcemodel_isbase) {
			qabstractproxymodel_setsourcemodel_isbase = false;
			QAbstractProxyModel::setSourceModel(sourceModel);
		} else if (qabstractproxymodel_setsourcemodel_callback != nullptr) {
			QAbstractItemModel* cbval1 = sourceModel;
			qabstractproxymodel_setsourcemodel_callback(this, cbval1);
		} else {
			QAbstractProxyModel::setSourceModel(sourceModel);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (qabstractproxymodel_maptosource_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&proxyIndex;
			QModelIndex* callback_ret = qabstractproxymodel_maptosource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (qabstractproxymodel_mapfromsource_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceIndex;
			QModelIndex* callback_ret = qabstractproxymodel_mapfromsource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
		if (qabstractproxymodel_mapselectiontosource_isbase) {
			qabstractproxymodel_mapselectiontosource_isbase = false;
			return QAbstractProxyModel::mapSelectionToSource(selection);
		} else if (qabstractproxymodel_mapselectiontosource_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selection;
			QItemSelection* callback_ret = qabstractproxymodel_mapselectiontosource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QAbstractProxyModel::mapSelectionToSource(selection);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
		if (qabstractproxymodel_mapselectionfromsource_isbase) {
			qabstractproxymodel_mapselectionfromsource_isbase = false;
			return QAbstractProxyModel::mapSelectionFromSource(selection);
		} else if (qabstractproxymodel_mapselectionfromsource_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&selection;
			QItemSelection* callback_ret = qabstractproxymodel_mapselectionfromsource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QAbstractProxyModel::mapSelectionFromSource(selection);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool submit() override {
		if (qabstractproxymodel_submit_isbase) {
			qabstractproxymodel_submit_isbase = false;
			return QAbstractProxyModel::submit();
		} else if (qabstractproxymodel_submit_callback != nullptr) {
			bool callback_ret = qabstractproxymodel_submit_callback();
			return callback_ret;
		} else {
			return QAbstractProxyModel::submit();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void revert() override {
		if (qabstractproxymodel_revert_isbase) {
			qabstractproxymodel_revert_isbase = false;
			QAbstractProxyModel::revert();
		} else if (qabstractproxymodel_revert_callback != nullptr) {
			qabstractproxymodel_revert_callback();
		} else {
			QAbstractProxyModel::revert();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
		if (qabstractproxymodel_data_isbase) {
			qabstractproxymodel_data_isbase = false;
			return QAbstractProxyModel::data(proxyIndex, role);
		} else if (qabstractproxymodel_data_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&proxyIndex;
			int cbval2 = role;
			QVariant* callback_ret = qabstractproxymodel_data_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QAbstractProxyModel::data(proxyIndex, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (qabstractproxymodel_headerdata_isbase) {
			qabstractproxymodel_headerdata_isbase = false;
			return QAbstractProxyModel::headerData(section, orientation, role);
		} else if (qabstractproxymodel_headerdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			int cbval3 = role;
			QVariant* callback_ret = qabstractproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QAbstractProxyModel::headerData(section, orientation, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (qabstractproxymodel_itemdata_isbase) {
			qabstractproxymodel_itemdata_isbase = false;
			return QAbstractProxyModel::itemData(index);
		} else if (qabstractproxymodel_itemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			libqt_map callback_ret = qabstractproxymodel_itemdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractProxyModel::itemData(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::ItemFlag> flags(const QModelIndex& index) const override {
		if (qabstractproxymodel_flags_isbase) {
			qabstractproxymodel_flags_isbase = false;
			return QAbstractProxyModel::flags(index);
		} else if (qabstractproxymodel_flags_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qabstractproxymodel_flags_callback(this, cbval1);
			return static_cast<QFlags<Qt::ItemFlag>>(callback_ret);
		} else {
			return QAbstractProxyModel::flags(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (qabstractproxymodel_setdata_isbase) {
			qabstractproxymodel_setdata_isbase = false;
			return QAbstractProxyModel::setData(index, value, role);
		} else if (qabstractproxymodel_setdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			const QVariant* cbval2 = (const QVariant*)&value;
			int cbval3 = role;
			bool callback_ret = qabstractproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QAbstractProxyModel::setData(index, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (qabstractproxymodel_setitemdata_isbase) {
			qabstractproxymodel_setitemdata_isbase = false;
			return QAbstractProxyModel::setItemData(index, roles);
		} else if (qabstractproxymodel_setitemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			libqt_map cbval2 = roles;
			bool callback_ret = qabstractproxymodel_setitemdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QAbstractProxyModel::setItemData(index, roles);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (qabstractproxymodel_setheaderdata_isbase) {
			qabstractproxymodel_setheaderdata_isbase = false;
			return QAbstractProxyModel::setHeaderData(section, orientation, value, role);
		} else if (qabstractproxymodel_setheaderdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			const QVariant* cbval3 = (const QVariant*)&value;
			int cbval4 = role;
			bool callback_ret = qabstractproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QAbstractProxyModel::setHeaderData(section, orientation, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool clearItemData(const QModelIndex& index) override {
		if (qabstractproxymodel_clearitemdata_isbase) {
			qabstractproxymodel_clearitemdata_isbase = false;
			return QAbstractProxyModel::clearItemData(index);
		} else if (qabstractproxymodel_clearitemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			bool callback_ret = qabstractproxymodel_clearitemdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractProxyModel::clearItemData(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (qabstractproxymodel_buddy_isbase) {
			qabstractproxymodel_buddy_isbase = false;
			return QAbstractProxyModel::buddy(index);
		} else if (qabstractproxymodel_buddy_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QModelIndex* callback_ret = qabstractproxymodel_buddy_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QAbstractProxyModel::buddy(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (qabstractproxymodel_canfetchmore_isbase) {
			qabstractproxymodel_canfetchmore_isbase = false;
			return QAbstractProxyModel::canFetchMore(parent);
		} else if (qabstractproxymodel_canfetchmore_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractproxymodel_canfetchmore_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractProxyModel::canFetchMore(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fetchMore(const QModelIndex& parent) override {
		if (qabstractproxymodel_fetchmore_isbase) {
			qabstractproxymodel_fetchmore_isbase = false;
			QAbstractProxyModel::fetchMore(parent);
		} else if (qabstractproxymodel_fetchmore_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			qabstractproxymodel_fetchmore_callback(this, cbval1);
		} else {
			QAbstractProxyModel::fetchMore(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sort(int column, Qt::SortOrder order) override {
		if (qabstractproxymodel_sort_isbase) {
			qabstractproxymodel_sort_isbase = false;
			QAbstractProxyModel::sort(column, order);
		} else if (qabstractproxymodel_sort_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = static_cast<int>(order);
			qabstractproxymodel_sort_callback(this, cbval1, cbval2);
		} else {
			QAbstractProxyModel::sort(column, order);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize span(const QModelIndex& index) const override {
		if (qabstractproxymodel_span_isbase) {
			qabstractproxymodel_span_isbase = false;
			return QAbstractProxyModel::span(index);
		} else if (qabstractproxymodel_span_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QSize* callback_ret = qabstractproxymodel_span_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QAbstractProxyModel::span(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (qabstractproxymodel_haschildren_isbase) {
			qabstractproxymodel_haschildren_isbase = false;
			return QAbstractProxyModel::hasChildren(parent);
		} else if (qabstractproxymodel_haschildren_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractproxymodel_haschildren_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractProxyModel::hasChildren(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (qabstractproxymodel_sibling_isbase) {
			qabstractproxymodel_sibling_isbase = false;
			return QAbstractProxyModel::sibling(row, column, idx);
		} else if (qabstractproxymodel_sibling_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&idx;
			QModelIndex* callback_ret = qabstractproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QAbstractProxyModel::sibling(row, column, idx);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
		if (qabstractproxymodel_mimedata_isbase) {
			qabstractproxymodel_mimedata_isbase = false;
			return QAbstractProxyModel::mimeData(indexes);
		} else if (qabstractproxymodel_mimedata_callback != nullptr) {
			libqt_list cbval1 = indexes;
			QMimeData* callback_ret = qabstractproxymodel_mimedata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractProxyModel::mimeData(indexes);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (qabstractproxymodel_candropmimedata_isbase) {
			qabstractproxymodel_candropmimedata_isbase = false;
			return QAbstractProxyModel::canDropMimeData(data, action, row, column, parent);
		} else if (qabstractproxymodel_candropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QAbstractProxyModel::canDropMimeData(data, action, row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (qabstractproxymodel_dropmimedata_isbase) {
			qabstractproxymodel_dropmimedata_isbase = false;
			return QAbstractProxyModel::dropMimeData(data, action, row, column, parent);
		} else if (qabstractproxymodel_dropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QAbstractProxyModel::dropMimeData(data, action, row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> mimeTypes() const override {
		if (qabstractproxymodel_mimetypes_isbase) {
			qabstractproxymodel_mimetypes_isbase = false;
			return QAbstractProxyModel::mimeTypes();
		} else if (qabstractproxymodel_mimetypes_callback != nullptr) {
			libqt_list callback_ret = qabstractproxymodel_mimetypes_callback();
			return callback_ret;
		} else {
			return QAbstractProxyModel::mimeTypes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::DropAction> supportedDragActions() const override {
		if (qabstractproxymodel_supporteddragactions_isbase) {
			qabstractproxymodel_supporteddragactions_isbase = false;
			return QAbstractProxyModel::supportedDragActions();
		} else if (qabstractproxymodel_supporteddragactions_callback != nullptr) {
			int callback_ret = qabstractproxymodel_supporteddragactions_callback();
			return static_cast<QFlags<Qt::DropAction>>(callback_ret);
		} else {
			return QAbstractProxyModel::supportedDragActions();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::DropAction> supportedDropActions() const override {
		if (qabstractproxymodel_supporteddropactions_isbase) {
			qabstractproxymodel_supporteddropactions_isbase = false;
			return QAbstractProxyModel::supportedDropActions();
		} else if (qabstractproxymodel_supporteddropactions_callback != nullptr) {
			int callback_ret = qabstractproxymodel_supporteddropactions_callback();
			return static_cast<QFlags<Qt::DropAction>>(callback_ret);
		} else {
			return QAbstractProxyModel::supportedDropActions();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QHash<int, QByteArray> roleNames() const override {
		if (qabstractproxymodel_rolenames_isbase) {
			qabstractproxymodel_rolenames_isbase = false;
			return QAbstractProxyModel::roleNames();
		} else if (qabstractproxymodel_rolenames_callback != nullptr) {
			libqt_map callback_ret = qabstractproxymodel_rolenames_callback();
			return callback_ret;
		} else {
			return QAbstractProxyModel::roleNames();
		}
	}

	// Virtual method for C ABI access and custom callback
	QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
		if (qabstractproxymodel_createsourceindex_isbase) {
			qabstractproxymodel_createsourceindex_isbase = false;
			return QAbstractProxyModel::createSourceIndex(row, col, internalPtr);
		} else if (qabstractproxymodel_createsourceindex_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = col;
			void* cbval3 = internalPtr;
			QModelIndex* callback_ret = qabstractproxymodel_createsourceindex_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QAbstractProxyModel::createSourceIndex(row, col, internalPtr);
		}
	}

	// Friend functions
	friend QModelIndex* QAbstractProxyModel_CreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr);
	friend QModelIndex* QAbstractProxyModel_QBaseCreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr);
};

#endif


