#pragma once
#ifndef QFILESYSTEMMODEL_H_C_LIBVIRTUAL
#define QFILESYSTEMMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFileSystemModel so that we can call protected methods
class VirtualQFileSystemModel final : public QFileSystemModel {

public:
	// Virtual class boolean flag
	bool isVirtualQFileSystemModel= true;

	// Virtual class public types (including callbacks)
	using QFileSystemModel_Index_Callback = QModelIndex* (*)(const QFileSystemModel*, int, int, const QModelIndex*);
	using QFileSystemModel_Parent_Callback = QModelIndex* (*)(const QFileSystemModel*, const QModelIndex*);
	using QFileSystemModel_Sibling_Callback = QModelIndex* (*)(const QFileSystemModel*, int, int, const QModelIndex*);
	using QFileSystemModel_HasChildren_Callback = bool (*)(const QFileSystemModel*, const QModelIndex*);
	using QFileSystemModel_CanFetchMore_Callback = bool (*)(const QFileSystemModel*, const QModelIndex*);
	using QFileSystemModel_FetchMore_Callback = void (*)(QFileSystemModel*, const QModelIndex*);
	using QFileSystemModel_RowCount_Callback = int (*)(const QFileSystemModel*, const QModelIndex*);
	using QFileSystemModel_ColumnCount_Callback = int (*)(const QFileSystemModel*, const QModelIndex*);
	using QFileSystemModel_Data_Callback = QVariant* (*)(const QFileSystemModel*, const QModelIndex*, int);
	using QFileSystemModel_SetData_Callback = bool (*)(QFileSystemModel*, const QModelIndex*, const QVariant*, int);
	using QFileSystemModel_HeaderData_Callback = QVariant* (*)(const QFileSystemModel*, int, int, int);
	using QFileSystemModel_Flags_Callback = int (*)(const QFileSystemModel*, const QModelIndex*);
	using QFileSystemModel_Sort_Callback = void (*)(QFileSystemModel*, int, int);
	using QFileSystemModel_MimeTypes_Callback = libqt_list (*)();
	using QFileSystemModel_MimeData_Callback = QMimeData* (*)(const QFileSystemModel*, libqt_list);
	using QFileSystemModel_DropMimeData_Callback = bool (*)(QFileSystemModel*, const QMimeData*, int, int, int, const QModelIndex*);
	using QFileSystemModel_SupportedDropActions_Callback = int (*)();
	using QFileSystemModel_RoleNames_Callback = libqt_map (*)();
	using QFileSystemModel_TimerEvent_Callback = void (*)(QFileSystemModel*, QTimerEvent*);
	using QFileSystemModel_Event_Callback = bool (*)(QFileSystemModel*, QEvent*);

protected:
	// Instance callback storage
	mutable QFileSystemModel_Index_Callback qfilesystemmodel_index_callback = nullptr;
	mutable QFileSystemModel_Parent_Callback qfilesystemmodel_parent_callback = nullptr;
	mutable QFileSystemModel_Sibling_Callback qfilesystemmodel_sibling_callback = nullptr;
	mutable QFileSystemModel_HasChildren_Callback qfilesystemmodel_haschildren_callback = nullptr;
	mutable QFileSystemModel_CanFetchMore_Callback qfilesystemmodel_canfetchmore_callback = nullptr;
	mutable QFileSystemModel_FetchMore_Callback qfilesystemmodel_fetchmore_callback = nullptr;
	mutable QFileSystemModel_RowCount_Callback qfilesystemmodel_rowcount_callback = nullptr;
	mutable QFileSystemModel_ColumnCount_Callback qfilesystemmodel_columncount_callback = nullptr;
	mutable QFileSystemModel_Data_Callback qfilesystemmodel_data_callback = nullptr;
	mutable QFileSystemModel_SetData_Callback qfilesystemmodel_setdata_callback = nullptr;
	mutable QFileSystemModel_HeaderData_Callback qfilesystemmodel_headerdata_callback = nullptr;
	mutable QFileSystemModel_Flags_Callback qfilesystemmodel_flags_callback = nullptr;
	mutable QFileSystemModel_Sort_Callback qfilesystemmodel_sort_callback = nullptr;
	mutable QFileSystemModel_MimeTypes_Callback qfilesystemmodel_mimetypes_callback = nullptr;
	mutable QFileSystemModel_MimeData_Callback qfilesystemmodel_mimedata_callback = nullptr;
	mutable QFileSystemModel_DropMimeData_Callback qfilesystemmodel_dropmimedata_callback = nullptr;
	mutable QFileSystemModel_SupportedDropActions_Callback qfilesystemmodel_supporteddropactions_callback = nullptr;
	mutable QFileSystemModel_RoleNames_Callback qfilesystemmodel_rolenames_callback = nullptr;
	mutable QFileSystemModel_TimerEvent_Callback qfilesystemmodel_timerevent_callback = nullptr;
	mutable QFileSystemModel_Event_Callback qfilesystemmodel_event_callback = nullptr;

	// Instance base flags
    mutable bool qfilesystemmodel_index_isbase = false;
    mutable bool qfilesystemmodel_parent_isbase = false;
    mutable bool qfilesystemmodel_sibling_isbase = false;
    mutable bool qfilesystemmodel_haschildren_isbase = false;
    mutable bool qfilesystemmodel_canfetchmore_isbase = false;
    mutable bool qfilesystemmodel_fetchmore_isbase = false;
    mutable bool qfilesystemmodel_rowcount_isbase = false;
    mutable bool qfilesystemmodel_columncount_isbase = false;
    mutable bool qfilesystemmodel_data_isbase = false;
    mutable bool qfilesystemmodel_setdata_isbase = false;
    mutable bool qfilesystemmodel_headerdata_isbase = false;
    mutable bool qfilesystemmodel_flags_isbase = false;
    mutable bool qfilesystemmodel_sort_isbase = false;
    mutable bool qfilesystemmodel_mimetypes_isbase = false;
    mutable bool qfilesystemmodel_mimedata_isbase = false;
    mutable bool qfilesystemmodel_dropmimedata_isbase = false;
    mutable bool qfilesystemmodel_supporteddropactions_isbase = false;
    mutable bool qfilesystemmodel_rolenames_isbase = false;
    mutable bool qfilesystemmodel_timerevent_isbase = false;
    mutable bool qfilesystemmodel_event_isbase = false;

public:
	VirtualQFileSystemModel(): QFileSystemModel() {};
	VirtualQFileSystemModel(QObject* parent): QFileSystemModel(parent) {};

	~VirtualQFileSystemModel() {
		qfilesystemmodel_index_callback = nullptr;
		qfilesystemmodel_parent_callback = nullptr;
		qfilesystemmodel_sibling_callback = nullptr;
		qfilesystemmodel_haschildren_callback = nullptr;
		qfilesystemmodel_canfetchmore_callback = nullptr;
		qfilesystemmodel_fetchmore_callback = nullptr;
		qfilesystemmodel_rowcount_callback = nullptr;
		qfilesystemmodel_columncount_callback = nullptr;
		qfilesystemmodel_data_callback = nullptr;
		qfilesystemmodel_setdata_callback = nullptr;
		qfilesystemmodel_headerdata_callback = nullptr;
		qfilesystemmodel_flags_callback = nullptr;
		qfilesystemmodel_sort_callback = nullptr;
		qfilesystemmodel_mimetypes_callback = nullptr;
		qfilesystemmodel_mimedata_callback = nullptr;
		qfilesystemmodel_dropmimedata_callback = nullptr;
		qfilesystemmodel_supporteddropactions_callback = nullptr;
		qfilesystemmodel_rolenames_callback = nullptr;
		qfilesystemmodel_timerevent_callback = nullptr;
		qfilesystemmodel_event_callback = nullptr;
	}

// Callback setters
	inline void setQFileSystemModel_Index_Callback(QFileSystemModel_Index_Callback cb) const { qfilesystemmodel_index_callback = cb; }
	inline void setQFileSystemModel_Parent_Callback(QFileSystemModel_Parent_Callback cb) const { qfilesystemmodel_parent_callback = cb; }
	inline void setQFileSystemModel_Sibling_Callback(QFileSystemModel_Sibling_Callback cb) const { qfilesystemmodel_sibling_callback = cb; }
	inline void setQFileSystemModel_HasChildren_Callback(QFileSystemModel_HasChildren_Callback cb) const { qfilesystemmodel_haschildren_callback = cb; }
	inline void setQFileSystemModel_CanFetchMore_Callback(QFileSystemModel_CanFetchMore_Callback cb) const { qfilesystemmodel_canfetchmore_callback = cb; }
	inline void setQFileSystemModel_FetchMore_Callback(QFileSystemModel_FetchMore_Callback cb) const { qfilesystemmodel_fetchmore_callback = cb; }
	inline void setQFileSystemModel_RowCount_Callback(QFileSystemModel_RowCount_Callback cb) const { qfilesystemmodel_rowcount_callback = cb; }
	inline void setQFileSystemModel_ColumnCount_Callback(QFileSystemModel_ColumnCount_Callback cb) const { qfilesystemmodel_columncount_callback = cb; }
	inline void setQFileSystemModel_Data_Callback(QFileSystemModel_Data_Callback cb) const { qfilesystemmodel_data_callback = cb; }
	inline void setQFileSystemModel_SetData_Callback(QFileSystemModel_SetData_Callback cb) const { qfilesystemmodel_setdata_callback = cb; }
	inline void setQFileSystemModel_HeaderData_Callback(QFileSystemModel_HeaderData_Callback cb) const { qfilesystemmodel_headerdata_callback = cb; }
	inline void setQFileSystemModel_Flags_Callback(QFileSystemModel_Flags_Callback cb) const { qfilesystemmodel_flags_callback = cb; }
	inline void setQFileSystemModel_Sort_Callback(QFileSystemModel_Sort_Callback cb) const { qfilesystemmodel_sort_callback = cb; }
	inline void setQFileSystemModel_MimeTypes_Callback(QFileSystemModel_MimeTypes_Callback cb) const { qfilesystemmodel_mimetypes_callback = cb; }
	inline void setQFileSystemModel_MimeData_Callback(QFileSystemModel_MimeData_Callback cb) const { qfilesystemmodel_mimedata_callback = cb; }
	inline void setQFileSystemModel_DropMimeData_Callback(QFileSystemModel_DropMimeData_Callback cb) const { qfilesystemmodel_dropmimedata_callback = cb; }
	inline void setQFileSystemModel_SupportedDropActions_Callback(QFileSystemModel_SupportedDropActions_Callback cb) const { qfilesystemmodel_supporteddropactions_callback = cb; }
	inline void setQFileSystemModel_RoleNames_Callback(QFileSystemModel_RoleNames_Callback cb) const { qfilesystemmodel_rolenames_callback = cb; }
	inline void setQFileSystemModel_TimerEvent_Callback(QFileSystemModel_TimerEvent_Callback cb) const { qfilesystemmodel_timerevent_callback = cb; }
	inline void setQFileSystemModel_Event_Callback(QFileSystemModel_Event_Callback cb) const { qfilesystemmodel_event_callback = cb; }

// Base flag setters
	inline void setQFileSystemModel_Index_IsBase(bool value) const { qfilesystemmodel_index_isbase = value; }
	inline void setQFileSystemModel_Parent_IsBase(bool value) const { qfilesystemmodel_parent_isbase = value; }
	inline void setQFileSystemModel_Sibling_IsBase(bool value) const { qfilesystemmodel_sibling_isbase = value; }
	inline void setQFileSystemModel_HasChildren_IsBase(bool value) const { qfilesystemmodel_haschildren_isbase = value; }
	inline void setQFileSystemModel_CanFetchMore_IsBase(bool value) const { qfilesystemmodel_canfetchmore_isbase = value; }
	inline void setQFileSystemModel_FetchMore_IsBase(bool value) const { qfilesystemmodel_fetchmore_isbase = value; }
	inline void setQFileSystemModel_RowCount_IsBase(bool value) const { qfilesystemmodel_rowcount_isbase = value; }
	inline void setQFileSystemModel_ColumnCount_IsBase(bool value) const { qfilesystemmodel_columncount_isbase = value; }
	inline void setQFileSystemModel_Data_IsBase(bool value) const { qfilesystemmodel_data_isbase = value; }
	inline void setQFileSystemModel_SetData_IsBase(bool value) const { qfilesystemmodel_setdata_isbase = value; }
	inline void setQFileSystemModel_HeaderData_IsBase(bool value) const { qfilesystemmodel_headerdata_isbase = value; }
	inline void setQFileSystemModel_Flags_IsBase(bool value) const { qfilesystemmodel_flags_isbase = value; }
	inline void setQFileSystemModel_Sort_IsBase(bool value) const { qfilesystemmodel_sort_isbase = value; }
	inline void setQFileSystemModel_MimeTypes_IsBase(bool value) const { qfilesystemmodel_mimetypes_isbase = value; }
	inline void setQFileSystemModel_MimeData_IsBase(bool value) const { qfilesystemmodel_mimedata_isbase = value; }
	inline void setQFileSystemModel_DropMimeData_IsBase(bool value) const { qfilesystemmodel_dropmimedata_isbase = value; }
	inline void setQFileSystemModel_SupportedDropActions_IsBase(bool value) const { qfilesystemmodel_supporteddropactions_isbase = value; }
	inline void setQFileSystemModel_RoleNames_IsBase(bool value) const { qfilesystemmodel_rolenames_isbase = value; }
	inline void setQFileSystemModel_TimerEvent_IsBase(bool value) const { qfilesystemmodel_timerevent_isbase = value; }
	inline void setQFileSystemModel_Event_IsBase(bool value) const { qfilesystemmodel_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (qfilesystemmodel_index_isbase) {
			qfilesystemmodel_index_isbase = false;
			return QFileSystemModel::index(row, column, parent);
		} else if (qfilesystemmodel_index_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			QModelIndex* callback_ret = qfilesystemmodel_index_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QFileSystemModel::index(row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (qfilesystemmodel_parent_isbase) {
			qfilesystemmodel_parent_isbase = false;
			return QFileSystemModel::parent(child);
		} else if (qfilesystemmodel_parent_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&child;
			QModelIndex* callback_ret = qfilesystemmodel_parent_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QFileSystemModel::parent(child);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (qfilesystemmodel_sibling_isbase) {
			qfilesystemmodel_sibling_isbase = false;
			return QFileSystemModel::sibling(row, column, idx);
		} else if (qfilesystemmodel_sibling_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&idx;
			QModelIndex* callback_ret = qfilesystemmodel_sibling_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QFileSystemModel::sibling(row, column, idx);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (qfilesystemmodel_haschildren_isbase) {
			qfilesystemmodel_haschildren_isbase = false;
			return QFileSystemModel::hasChildren(parent);
		} else if (qfilesystemmodel_haschildren_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			bool callback_ret = qfilesystemmodel_haschildren_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFileSystemModel::hasChildren(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (qfilesystemmodel_canfetchmore_isbase) {
			qfilesystemmodel_canfetchmore_isbase = false;
			return QFileSystemModel::canFetchMore(parent);
		} else if (qfilesystemmodel_canfetchmore_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			bool callback_ret = qfilesystemmodel_canfetchmore_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFileSystemModel::canFetchMore(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fetchMore(const QModelIndex& parent) override {
		if (qfilesystemmodel_fetchmore_isbase) {
			qfilesystemmodel_fetchmore_isbase = false;
			QFileSystemModel::fetchMore(parent);
		} else if (qfilesystemmodel_fetchmore_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			qfilesystemmodel_fetchmore_callback(this, cbval1);
		} else {
			QFileSystemModel::fetchMore(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int rowCount(const QModelIndex& parent) const override {
		if (qfilesystemmodel_rowcount_isbase) {
			qfilesystemmodel_rowcount_isbase = false;
			return QFileSystemModel::rowCount(parent);
		} else if (qfilesystemmodel_rowcount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qfilesystemmodel_rowcount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFileSystemModel::rowCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int columnCount(const QModelIndex& parent) const override {
		if (qfilesystemmodel_columncount_isbase) {
			qfilesystemmodel_columncount_isbase = false;
			return QFileSystemModel::columnCount(parent);
		} else if (qfilesystemmodel_columncount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qfilesystemmodel_columncount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFileSystemModel::columnCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (qfilesystemmodel_data_isbase) {
			qfilesystemmodel_data_isbase = false;
			return QFileSystemModel::data(index, role);
		} else if (qfilesystemmodel_data_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = role;
			QVariant* callback_ret = qfilesystemmodel_data_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QFileSystemModel::data(index, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (qfilesystemmodel_setdata_isbase) {
			qfilesystemmodel_setdata_isbase = false;
			return QFileSystemModel::setData(index, value, role);
		} else if (qfilesystemmodel_setdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			const QVariant* cbval2 = (const QVariant*)&value;
			int cbval3 = role;
			bool callback_ret = qfilesystemmodel_setdata_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QFileSystemModel::setData(index, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (qfilesystemmodel_headerdata_isbase) {
			qfilesystemmodel_headerdata_isbase = false;
			return QFileSystemModel::headerData(section, orientation, role);
		} else if (qfilesystemmodel_headerdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			int cbval3 = role;
			QVariant* callback_ret = qfilesystemmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QFileSystemModel::headerData(section, orientation, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::ItemFlag> flags(const QModelIndex& index) const override {
		if (qfilesystemmodel_flags_isbase) {
			qfilesystemmodel_flags_isbase = false;
			return QFileSystemModel::flags(index);
		} else if (qfilesystemmodel_flags_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qfilesystemmodel_flags_callback(this, cbval1);
			return static_cast<QFlags<Qt::ItemFlag>>(callback_ret);
		} else {
			return QFileSystemModel::flags(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sort(int column, Qt::SortOrder order) override {
		if (qfilesystemmodel_sort_isbase) {
			qfilesystemmodel_sort_isbase = false;
			QFileSystemModel::sort(column, order);
		} else if (qfilesystemmodel_sort_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = static_cast<int>(order);
			qfilesystemmodel_sort_callback(this, cbval1, cbval2);
		} else {
			QFileSystemModel::sort(column, order);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> mimeTypes() const override {
		if (qfilesystemmodel_mimetypes_isbase) {
			qfilesystemmodel_mimetypes_isbase = false;
			return QFileSystemModel::mimeTypes();
		} else if (qfilesystemmodel_mimetypes_callback != nullptr) {
			libqt_list callback_ret = qfilesystemmodel_mimetypes_callback();
			return callback_ret;
		} else {
			return QFileSystemModel::mimeTypes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
		if (qfilesystemmodel_mimedata_isbase) {
			qfilesystemmodel_mimedata_isbase = false;
			return QFileSystemModel::mimeData(indexes);
		} else if (qfilesystemmodel_mimedata_callback != nullptr) {
			libqt_list cbval1 = indexes;
			QMimeData* callback_ret = qfilesystemmodel_mimedata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFileSystemModel::mimeData(indexes);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (qfilesystemmodel_dropmimedata_isbase) {
			qfilesystemmodel_dropmimedata_isbase = false;
			return QFileSystemModel::dropMimeData(data, action, row, column, parent);
		} else if (qfilesystemmodel_dropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qfilesystemmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QFileSystemModel::dropMimeData(data, action, row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::DropAction> supportedDropActions() const override {
		if (qfilesystemmodel_supporteddropactions_isbase) {
			qfilesystemmodel_supporteddropactions_isbase = false;
			return QFileSystemModel::supportedDropActions();
		} else if (qfilesystemmodel_supporteddropactions_callback != nullptr) {
			int callback_ret = qfilesystemmodel_supporteddropactions_callback();
			return static_cast<QFlags<Qt::DropAction>>(callback_ret);
		} else {
			return QFileSystemModel::supportedDropActions();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QHash<int, QByteArray> roleNames() const override {
		if (qfilesystemmodel_rolenames_isbase) {
			qfilesystemmodel_rolenames_isbase = false;
			return QFileSystemModel::roleNames();
		} else if (qfilesystemmodel_rolenames_callback != nullptr) {
			libqt_map callback_ret = qfilesystemmodel_rolenames_callback();
			return callback_ret;
		} else {
			return QFileSystemModel::roleNames();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* event) override {
		if (qfilesystemmodel_timerevent_isbase) {
			qfilesystemmodel_timerevent_isbase = false;
			QFileSystemModel::timerEvent(event);
		} else if (qfilesystemmodel_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = event;
			qfilesystemmodel_timerevent_callback(this, cbval1);
		} else {
			QFileSystemModel::timerEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qfilesystemmodel_event_isbase) {
			qfilesystemmodel_event_isbase = false;
			return QFileSystemModel::event(event);
		} else if (qfilesystemmodel_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qfilesystemmodel_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFileSystemModel::event(event);
		}
	}

	// Friend functions
	friend void QFileSystemModel_TimerEvent(QFileSystemModel* self, QTimerEvent* event);
	friend void QFileSystemModel_QBaseTimerEvent(QFileSystemModel* self, QTimerEvent* event);
	friend bool QFileSystemModel_Event(QFileSystemModel* self, QEvent* event);
	friend bool QFileSystemModel_QBaseEvent(QFileSystemModel* self, QEvent* event);
};

#endif


