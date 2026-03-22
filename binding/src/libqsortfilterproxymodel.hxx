#pragma once
#ifndef QSORTFILTERPROXYMODEL_H_C_LIBVIRTUAL
#define QSORTFILTERPROXYMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSortFilterProxyModel so that we can call protected methods
class VirtualQSortFilterProxyModel final : public QSortFilterProxyModel {

public:
	// Virtual class boolean flag
	bool isVirtualQSortFilterProxyModel= true;

	// Virtual class public types (including callbacks)
	using QSortFilterProxyModel_SetSourceModel_Callback = void (*)(QSortFilterProxyModel*, QAbstractItemModel*);
	using QSortFilterProxyModel_MapToSource_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, const QModelIndex*);
	using QSortFilterProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, const QModelIndex*);
	using QSortFilterProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const QSortFilterProxyModel*, const QItemSelection*);
	using QSortFilterProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const QSortFilterProxyModel*, const QItemSelection*);
	using QSortFilterProxyModel_FilterAcceptsRow_Callback = bool (*)(const QSortFilterProxyModel*, int, const QModelIndex*);
	using QSortFilterProxyModel_FilterAcceptsColumn_Callback = bool (*)(const QSortFilterProxyModel*, int, const QModelIndex*);
	using QSortFilterProxyModel_LessThan_Callback = bool (*)(const QSortFilterProxyModel*, const QModelIndex*, const QModelIndex*);
	using QSortFilterProxyModel_Index_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, int, int, const QModelIndex*);
	using QSortFilterProxyModel_Parent_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, const QModelIndex*);
	using QSortFilterProxyModel_Sibling_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, int, int, const QModelIndex*);
	using QSortFilterProxyModel_RowCount_Callback = int (*)(const QSortFilterProxyModel*, const QModelIndex*);
	using QSortFilterProxyModel_ColumnCount_Callback = int (*)(const QSortFilterProxyModel*, const QModelIndex*);
	using QSortFilterProxyModel_HasChildren_Callback = bool (*)(const QSortFilterProxyModel*, const QModelIndex*);
	using QSortFilterProxyModel_Data_Callback = QVariant* (*)(const QSortFilterProxyModel*, const QModelIndex*, int);
	using QSortFilterProxyModel_SetData_Callback = bool (*)(QSortFilterProxyModel*, const QModelIndex*, const QVariant*, int);
	using QSortFilterProxyModel_HeaderData_Callback = QVariant* (*)(const QSortFilterProxyModel*, int, int, int);
	using QSortFilterProxyModel_SetHeaderData_Callback = bool (*)(QSortFilterProxyModel*, int, int, const QVariant*, int);
	using QSortFilterProxyModel_MimeData_Callback = QMimeData* (*)(const QSortFilterProxyModel*, libqt_list);
	using QSortFilterProxyModel_DropMimeData_Callback = bool (*)(QSortFilterProxyModel*, const QMimeData*, int, int, int, const QModelIndex*);
	using QSortFilterProxyModel_InsertRows_Callback = bool (*)(QSortFilterProxyModel*, int, int, const QModelIndex*);
	using QSortFilterProxyModel_InsertColumns_Callback = bool (*)(QSortFilterProxyModel*, int, int, const QModelIndex*);
	using QSortFilterProxyModel_RemoveRows_Callback = bool (*)(QSortFilterProxyModel*, int, int, const QModelIndex*);
	using QSortFilterProxyModel_RemoveColumns_Callback = bool (*)(QSortFilterProxyModel*, int, int, const QModelIndex*);
	using QSortFilterProxyModel_FetchMore_Callback = void (*)(QSortFilterProxyModel*, const QModelIndex*);
	using QSortFilterProxyModel_CanFetchMore_Callback = bool (*)(const QSortFilterProxyModel*, const QModelIndex*);
	using QSortFilterProxyModel_Flags_Callback = int (*)(const QSortFilterProxyModel*, const QModelIndex*);
	using QSortFilterProxyModel_Buddy_Callback = QModelIndex* (*)(const QSortFilterProxyModel*, const QModelIndex*);
	using QSortFilterProxyModel_Match_Callback = libqt_list (*)(const QSortFilterProxyModel*, const QModelIndex*, int, const QVariant*, int, int);
	using QSortFilterProxyModel_Span_Callback = QSize* (*)(const QSortFilterProxyModel*, const QModelIndex*);
	using QSortFilterProxyModel_Sort_Callback = void (*)(QSortFilterProxyModel*, int, int);
	using QSortFilterProxyModel_MimeTypes_Callback = libqt_list (*)();
	using QSortFilterProxyModel_SupportedDropActions_Callback = int (*)();
	using QSortFilterProxyModel_InvalidateFilter_Callback = void (*)();
	using QSortFilterProxyModel_InvalidateRowsFilter_Callback = void (*)();
	using QSortFilterProxyModel_InvalidateColumnsFilter_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QSortFilterProxyModel_SetSourceModel_Callback qsortfilterproxymodel_setsourcemodel_callback = nullptr;
	mutable QSortFilterProxyModel_MapToSource_Callback qsortfilterproxymodel_maptosource_callback = nullptr;
	mutable QSortFilterProxyModel_MapFromSource_Callback qsortfilterproxymodel_mapfromsource_callback = nullptr;
	mutable QSortFilterProxyModel_MapSelectionToSource_Callback qsortfilterproxymodel_mapselectiontosource_callback = nullptr;
	mutable QSortFilterProxyModel_MapSelectionFromSource_Callback qsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
	mutable QSortFilterProxyModel_FilterAcceptsRow_Callback qsortfilterproxymodel_filteracceptsrow_callback = nullptr;
	mutable QSortFilterProxyModel_FilterAcceptsColumn_Callback qsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
	mutable QSortFilterProxyModel_LessThan_Callback qsortfilterproxymodel_lessthan_callback = nullptr;
	mutable QSortFilterProxyModel_Index_Callback qsortfilterproxymodel_index_callback = nullptr;
	mutable QSortFilterProxyModel_Parent_Callback qsortfilterproxymodel_parent_callback = nullptr;
	mutable QSortFilterProxyModel_Sibling_Callback qsortfilterproxymodel_sibling_callback = nullptr;
	mutable QSortFilterProxyModel_RowCount_Callback qsortfilterproxymodel_rowcount_callback = nullptr;
	mutable QSortFilterProxyModel_ColumnCount_Callback qsortfilterproxymodel_columncount_callback = nullptr;
	mutable QSortFilterProxyModel_HasChildren_Callback qsortfilterproxymodel_haschildren_callback = nullptr;
	mutable QSortFilterProxyModel_Data_Callback qsortfilterproxymodel_data_callback = nullptr;
	mutable QSortFilterProxyModel_SetData_Callback qsortfilterproxymodel_setdata_callback = nullptr;
	mutable QSortFilterProxyModel_HeaderData_Callback qsortfilterproxymodel_headerdata_callback = nullptr;
	mutable QSortFilterProxyModel_SetHeaderData_Callback qsortfilterproxymodel_setheaderdata_callback = nullptr;
	mutable QSortFilterProxyModel_MimeData_Callback qsortfilterproxymodel_mimedata_callback = nullptr;
	mutable QSortFilterProxyModel_DropMimeData_Callback qsortfilterproxymodel_dropmimedata_callback = nullptr;
	mutable QSortFilterProxyModel_InsertRows_Callback qsortfilterproxymodel_insertrows_callback = nullptr;
	mutable QSortFilterProxyModel_InsertColumns_Callback qsortfilterproxymodel_insertcolumns_callback = nullptr;
	mutable QSortFilterProxyModel_RemoveRows_Callback qsortfilterproxymodel_removerows_callback = nullptr;
	mutable QSortFilterProxyModel_RemoveColumns_Callback qsortfilterproxymodel_removecolumns_callback = nullptr;
	mutable QSortFilterProxyModel_FetchMore_Callback qsortfilterproxymodel_fetchmore_callback = nullptr;
	mutable QSortFilterProxyModel_CanFetchMore_Callback qsortfilterproxymodel_canfetchmore_callback = nullptr;
	mutable QSortFilterProxyModel_Flags_Callback qsortfilterproxymodel_flags_callback = nullptr;
	mutable QSortFilterProxyModel_Buddy_Callback qsortfilterproxymodel_buddy_callback = nullptr;
	mutable QSortFilterProxyModel_Match_Callback qsortfilterproxymodel_match_callback = nullptr;
	mutable QSortFilterProxyModel_Span_Callback qsortfilterproxymodel_span_callback = nullptr;
	mutable QSortFilterProxyModel_Sort_Callback qsortfilterproxymodel_sort_callback = nullptr;
	mutable QSortFilterProxyModel_MimeTypes_Callback qsortfilterproxymodel_mimetypes_callback = nullptr;
	mutable QSortFilterProxyModel_SupportedDropActions_Callback qsortfilterproxymodel_supporteddropactions_callback = nullptr;
	mutable QSortFilterProxyModel_InvalidateFilter_Callback qsortfilterproxymodel_invalidatefilter_callback = nullptr;
	mutable QSortFilterProxyModel_InvalidateRowsFilter_Callback qsortfilterproxymodel_invalidaterowsfilter_callback = nullptr;
	mutable QSortFilterProxyModel_InvalidateColumnsFilter_Callback qsortfilterproxymodel_invalidatecolumnsfilter_callback = nullptr;

	// Instance base flags
    mutable bool qsortfilterproxymodel_setsourcemodel_isbase = false;
    mutable bool qsortfilterproxymodel_maptosource_isbase = false;
    mutable bool qsortfilterproxymodel_mapfromsource_isbase = false;
    mutable bool qsortfilterproxymodel_mapselectiontosource_isbase = false;
    mutable bool qsortfilterproxymodel_mapselectionfromsource_isbase = false;
    mutable bool qsortfilterproxymodel_filteracceptsrow_isbase = false;
    mutable bool qsortfilterproxymodel_filteracceptscolumn_isbase = false;
    mutable bool qsortfilterproxymodel_lessthan_isbase = false;
    mutable bool qsortfilterproxymodel_index_isbase = false;
    mutable bool qsortfilterproxymodel_parent_isbase = false;
    mutable bool qsortfilterproxymodel_sibling_isbase = false;
    mutable bool qsortfilterproxymodel_rowcount_isbase = false;
    mutable bool qsortfilterproxymodel_columncount_isbase = false;
    mutable bool qsortfilterproxymodel_haschildren_isbase = false;
    mutable bool qsortfilterproxymodel_data_isbase = false;
    mutable bool qsortfilterproxymodel_setdata_isbase = false;
    mutable bool qsortfilterproxymodel_headerdata_isbase = false;
    mutable bool qsortfilterproxymodel_setheaderdata_isbase = false;
    mutable bool qsortfilterproxymodel_mimedata_isbase = false;
    mutable bool qsortfilterproxymodel_dropmimedata_isbase = false;
    mutable bool qsortfilterproxymodel_insertrows_isbase = false;
    mutable bool qsortfilterproxymodel_insertcolumns_isbase = false;
    mutable bool qsortfilterproxymodel_removerows_isbase = false;
    mutable bool qsortfilterproxymodel_removecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_fetchmore_isbase = false;
    mutable bool qsortfilterproxymodel_canfetchmore_isbase = false;
    mutable bool qsortfilterproxymodel_flags_isbase = false;
    mutable bool qsortfilterproxymodel_buddy_isbase = false;
    mutable bool qsortfilterproxymodel_match_isbase = false;
    mutable bool qsortfilterproxymodel_span_isbase = false;
    mutable bool qsortfilterproxymodel_sort_isbase = false;
    mutable bool qsortfilterproxymodel_mimetypes_isbase = false;
    mutable bool qsortfilterproxymodel_supporteddropactions_isbase = false;
    mutable bool qsortfilterproxymodel_invalidatefilter_isbase = false;
    mutable bool qsortfilterproxymodel_invalidaterowsfilter_isbase = false;
    mutable bool qsortfilterproxymodel_invalidatecolumnsfilter_isbase = false;

public:
	VirtualQSortFilterProxyModel(): QSortFilterProxyModel() {};
	VirtualQSortFilterProxyModel(QObject* parent): QSortFilterProxyModel(parent) {};

	~VirtualQSortFilterProxyModel() {
		qsortfilterproxymodel_setsourcemodel_callback = nullptr;
		qsortfilterproxymodel_maptosource_callback = nullptr;
		qsortfilterproxymodel_mapfromsource_callback = nullptr;
		qsortfilterproxymodel_mapselectiontosource_callback = nullptr;
		qsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
		qsortfilterproxymodel_filteracceptsrow_callback = nullptr;
		qsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
		qsortfilterproxymodel_lessthan_callback = nullptr;
		qsortfilterproxymodel_index_callback = nullptr;
		qsortfilterproxymodel_parent_callback = nullptr;
		qsortfilterproxymodel_sibling_callback = nullptr;
		qsortfilterproxymodel_rowcount_callback = nullptr;
		qsortfilterproxymodel_columncount_callback = nullptr;
		qsortfilterproxymodel_haschildren_callback = nullptr;
		qsortfilterproxymodel_data_callback = nullptr;
		qsortfilterproxymodel_setdata_callback = nullptr;
		qsortfilterproxymodel_headerdata_callback = nullptr;
		qsortfilterproxymodel_setheaderdata_callback = nullptr;
		qsortfilterproxymodel_mimedata_callback = nullptr;
		qsortfilterproxymodel_dropmimedata_callback = nullptr;
		qsortfilterproxymodel_insertrows_callback = nullptr;
		qsortfilterproxymodel_insertcolumns_callback = nullptr;
		qsortfilterproxymodel_removerows_callback = nullptr;
		qsortfilterproxymodel_removecolumns_callback = nullptr;
		qsortfilterproxymodel_fetchmore_callback = nullptr;
		qsortfilterproxymodel_canfetchmore_callback = nullptr;
		qsortfilterproxymodel_flags_callback = nullptr;
		qsortfilterproxymodel_buddy_callback = nullptr;
		qsortfilterproxymodel_match_callback = nullptr;
		qsortfilterproxymodel_span_callback = nullptr;
		qsortfilterproxymodel_sort_callback = nullptr;
		qsortfilterproxymodel_mimetypes_callback = nullptr;
		qsortfilterproxymodel_supporteddropactions_callback = nullptr;
		qsortfilterproxymodel_invalidatefilter_callback = nullptr;
		qsortfilterproxymodel_invalidaterowsfilter_callback = nullptr;
		qsortfilterproxymodel_invalidatecolumnsfilter_callback = nullptr;
	}

// Callback setters
	inline void setQSortFilterProxyModel_SetSourceModel_Callback(QSortFilterProxyModel_SetSourceModel_Callback cb) const { qsortfilterproxymodel_setsourcemodel_callback = cb; }
	inline void setQSortFilterProxyModel_MapToSource_Callback(QSortFilterProxyModel_MapToSource_Callback cb) const { qsortfilterproxymodel_maptosource_callback = cb; }
	inline void setQSortFilterProxyModel_MapFromSource_Callback(QSortFilterProxyModel_MapFromSource_Callback cb) const { qsortfilterproxymodel_mapfromsource_callback = cb; }
	inline void setQSortFilterProxyModel_MapSelectionToSource_Callback(QSortFilterProxyModel_MapSelectionToSource_Callback cb) const { qsortfilterproxymodel_mapselectiontosource_callback = cb; }
	inline void setQSortFilterProxyModel_MapSelectionFromSource_Callback(QSortFilterProxyModel_MapSelectionFromSource_Callback cb) const { qsortfilterproxymodel_mapselectionfromsource_callback = cb; }
	inline void setQSortFilterProxyModel_FilterAcceptsRow_Callback(QSortFilterProxyModel_FilterAcceptsRow_Callback cb) const { qsortfilterproxymodel_filteracceptsrow_callback = cb; }
	inline void setQSortFilterProxyModel_FilterAcceptsColumn_Callback(QSortFilterProxyModel_FilterAcceptsColumn_Callback cb) const { qsortfilterproxymodel_filteracceptscolumn_callback = cb; }
	inline void setQSortFilterProxyModel_LessThan_Callback(QSortFilterProxyModel_LessThan_Callback cb) const { qsortfilterproxymodel_lessthan_callback = cb; }
	inline void setQSortFilterProxyModel_Index_Callback(QSortFilterProxyModel_Index_Callback cb) const { qsortfilterproxymodel_index_callback = cb; }
	inline void setQSortFilterProxyModel_Parent_Callback(QSortFilterProxyModel_Parent_Callback cb) const { qsortfilterproxymodel_parent_callback = cb; }
	inline void setQSortFilterProxyModel_Sibling_Callback(QSortFilterProxyModel_Sibling_Callback cb) const { qsortfilterproxymodel_sibling_callback = cb; }
	inline void setQSortFilterProxyModel_RowCount_Callback(QSortFilterProxyModel_RowCount_Callback cb) const { qsortfilterproxymodel_rowcount_callback = cb; }
	inline void setQSortFilterProxyModel_ColumnCount_Callback(QSortFilterProxyModel_ColumnCount_Callback cb) const { qsortfilterproxymodel_columncount_callback = cb; }
	inline void setQSortFilterProxyModel_HasChildren_Callback(QSortFilterProxyModel_HasChildren_Callback cb) const { qsortfilterproxymodel_haschildren_callback = cb; }
	inline void setQSortFilterProxyModel_Data_Callback(QSortFilterProxyModel_Data_Callback cb) const { qsortfilterproxymodel_data_callback = cb; }
	inline void setQSortFilterProxyModel_SetData_Callback(QSortFilterProxyModel_SetData_Callback cb) const { qsortfilterproxymodel_setdata_callback = cb; }
	inline void setQSortFilterProxyModel_HeaderData_Callback(QSortFilterProxyModel_HeaderData_Callback cb) const { qsortfilterproxymodel_headerdata_callback = cb; }
	inline void setQSortFilterProxyModel_SetHeaderData_Callback(QSortFilterProxyModel_SetHeaderData_Callback cb) const { qsortfilterproxymodel_setheaderdata_callback = cb; }
	inline void setQSortFilterProxyModel_MimeData_Callback(QSortFilterProxyModel_MimeData_Callback cb) const { qsortfilterproxymodel_mimedata_callback = cb; }
	inline void setQSortFilterProxyModel_DropMimeData_Callback(QSortFilterProxyModel_DropMimeData_Callback cb) const { qsortfilterproxymodel_dropmimedata_callback = cb; }
	inline void setQSortFilterProxyModel_InsertRows_Callback(QSortFilterProxyModel_InsertRows_Callback cb) const { qsortfilterproxymodel_insertrows_callback = cb; }
	inline void setQSortFilterProxyModel_InsertColumns_Callback(QSortFilterProxyModel_InsertColumns_Callback cb) const { qsortfilterproxymodel_insertcolumns_callback = cb; }
	inline void setQSortFilterProxyModel_RemoveRows_Callback(QSortFilterProxyModel_RemoveRows_Callback cb) const { qsortfilterproxymodel_removerows_callback = cb; }
	inline void setQSortFilterProxyModel_RemoveColumns_Callback(QSortFilterProxyModel_RemoveColumns_Callback cb) const { qsortfilterproxymodel_removecolumns_callback = cb; }
	inline void setQSortFilterProxyModel_FetchMore_Callback(QSortFilterProxyModel_FetchMore_Callback cb) const { qsortfilterproxymodel_fetchmore_callback = cb; }
	inline void setQSortFilterProxyModel_CanFetchMore_Callback(QSortFilterProxyModel_CanFetchMore_Callback cb) const { qsortfilterproxymodel_canfetchmore_callback = cb; }
	inline void setQSortFilterProxyModel_Flags_Callback(QSortFilterProxyModel_Flags_Callback cb) const { qsortfilterproxymodel_flags_callback = cb; }
	inline void setQSortFilterProxyModel_Buddy_Callback(QSortFilterProxyModel_Buddy_Callback cb) const { qsortfilterproxymodel_buddy_callback = cb; }
	inline void setQSortFilterProxyModel_Match_Callback(QSortFilterProxyModel_Match_Callback cb) const { qsortfilterproxymodel_match_callback = cb; }
	inline void setQSortFilterProxyModel_Span_Callback(QSortFilterProxyModel_Span_Callback cb) const { qsortfilterproxymodel_span_callback = cb; }
	inline void setQSortFilterProxyModel_Sort_Callback(QSortFilterProxyModel_Sort_Callback cb) const { qsortfilterproxymodel_sort_callback = cb; }
	inline void setQSortFilterProxyModel_MimeTypes_Callback(QSortFilterProxyModel_MimeTypes_Callback cb) const { qsortfilterproxymodel_mimetypes_callback = cb; }
	inline void setQSortFilterProxyModel_SupportedDropActions_Callback(QSortFilterProxyModel_SupportedDropActions_Callback cb) const { qsortfilterproxymodel_supporteddropactions_callback = cb; }
	inline void setQSortFilterProxyModel_InvalidateFilter_Callback(QSortFilterProxyModel_InvalidateFilter_Callback cb) const { qsortfilterproxymodel_invalidatefilter_callback = cb; }
	inline void setQSortFilterProxyModel_InvalidateRowsFilter_Callback(QSortFilterProxyModel_InvalidateRowsFilter_Callback cb) const { qsortfilterproxymodel_invalidaterowsfilter_callback = cb; }
	inline void setQSortFilterProxyModel_InvalidateColumnsFilter_Callback(QSortFilterProxyModel_InvalidateColumnsFilter_Callback cb) const { qsortfilterproxymodel_invalidatecolumnsfilter_callback = cb; }

// Base flag setters
	inline void setQSortFilterProxyModel_SetSourceModel_IsBase(bool value) const { qsortfilterproxymodel_setsourcemodel_isbase = value; }
	inline void setQSortFilterProxyModel_MapToSource_IsBase(bool value) const { qsortfilterproxymodel_maptosource_isbase = value; }
	inline void setQSortFilterProxyModel_MapFromSource_IsBase(bool value) const { qsortfilterproxymodel_mapfromsource_isbase = value; }
	inline void setQSortFilterProxyModel_MapSelectionToSource_IsBase(bool value) const { qsortfilterproxymodel_mapselectiontosource_isbase = value; }
	inline void setQSortFilterProxyModel_MapSelectionFromSource_IsBase(bool value) const { qsortfilterproxymodel_mapselectionfromsource_isbase = value; }
	inline void setQSortFilterProxyModel_FilterAcceptsRow_IsBase(bool value) const { qsortfilterproxymodel_filteracceptsrow_isbase = value; }
	inline void setQSortFilterProxyModel_FilterAcceptsColumn_IsBase(bool value) const { qsortfilterproxymodel_filteracceptscolumn_isbase = value; }
	inline void setQSortFilterProxyModel_LessThan_IsBase(bool value) const { qsortfilterproxymodel_lessthan_isbase = value; }
	inline void setQSortFilterProxyModel_Index_IsBase(bool value) const { qsortfilterproxymodel_index_isbase = value; }
	inline void setQSortFilterProxyModel_Parent_IsBase(bool value) const { qsortfilterproxymodel_parent_isbase = value; }
	inline void setQSortFilterProxyModel_Sibling_IsBase(bool value) const { qsortfilterproxymodel_sibling_isbase = value; }
	inline void setQSortFilterProxyModel_RowCount_IsBase(bool value) const { qsortfilterproxymodel_rowcount_isbase = value; }
	inline void setQSortFilterProxyModel_ColumnCount_IsBase(bool value) const { qsortfilterproxymodel_columncount_isbase = value; }
	inline void setQSortFilterProxyModel_HasChildren_IsBase(bool value) const { qsortfilterproxymodel_haschildren_isbase = value; }
	inline void setQSortFilterProxyModel_Data_IsBase(bool value) const { qsortfilterproxymodel_data_isbase = value; }
	inline void setQSortFilterProxyModel_SetData_IsBase(bool value) const { qsortfilterproxymodel_setdata_isbase = value; }
	inline void setQSortFilterProxyModel_HeaderData_IsBase(bool value) const { qsortfilterproxymodel_headerdata_isbase = value; }
	inline void setQSortFilterProxyModel_SetHeaderData_IsBase(bool value) const { qsortfilterproxymodel_setheaderdata_isbase = value; }
	inline void setQSortFilterProxyModel_MimeData_IsBase(bool value) const { qsortfilterproxymodel_mimedata_isbase = value; }
	inline void setQSortFilterProxyModel_DropMimeData_IsBase(bool value) const { qsortfilterproxymodel_dropmimedata_isbase = value; }
	inline void setQSortFilterProxyModel_InsertRows_IsBase(bool value) const { qsortfilterproxymodel_insertrows_isbase = value; }
	inline void setQSortFilterProxyModel_InsertColumns_IsBase(bool value) const { qsortfilterproxymodel_insertcolumns_isbase = value; }
	inline void setQSortFilterProxyModel_RemoveRows_IsBase(bool value) const { qsortfilterproxymodel_removerows_isbase = value; }
	inline void setQSortFilterProxyModel_RemoveColumns_IsBase(bool value) const { qsortfilterproxymodel_removecolumns_isbase = value; }
	inline void setQSortFilterProxyModel_FetchMore_IsBase(bool value) const { qsortfilterproxymodel_fetchmore_isbase = value; }
	inline void setQSortFilterProxyModel_CanFetchMore_IsBase(bool value) const { qsortfilterproxymodel_canfetchmore_isbase = value; }
	inline void setQSortFilterProxyModel_Flags_IsBase(bool value) const { qsortfilterproxymodel_flags_isbase = value; }
	inline void setQSortFilterProxyModel_Buddy_IsBase(bool value) const { qsortfilterproxymodel_buddy_isbase = value; }
	inline void setQSortFilterProxyModel_Match_IsBase(bool value) const { qsortfilterproxymodel_match_isbase = value; }
	inline void setQSortFilterProxyModel_Span_IsBase(bool value) const { qsortfilterproxymodel_span_isbase = value; }
	inline void setQSortFilterProxyModel_Sort_IsBase(bool value) const { qsortfilterproxymodel_sort_isbase = value; }
	inline void setQSortFilterProxyModel_MimeTypes_IsBase(bool value) const { qsortfilterproxymodel_mimetypes_isbase = value; }
	inline void setQSortFilterProxyModel_SupportedDropActions_IsBase(bool value) const { qsortfilterproxymodel_supporteddropactions_isbase = value; }
	inline void setQSortFilterProxyModel_InvalidateFilter_IsBase(bool value) const { qsortfilterproxymodel_invalidatefilter_isbase = value; }
	inline void setQSortFilterProxyModel_InvalidateRowsFilter_IsBase(bool value) const { qsortfilterproxymodel_invalidaterowsfilter_isbase = value; }
	inline void setQSortFilterProxyModel_InvalidateColumnsFilter_IsBase(bool value) const { qsortfilterproxymodel_invalidatecolumnsfilter_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
		if (qsortfilterproxymodel_setsourcemodel_isbase) {
			qsortfilterproxymodel_setsourcemodel_isbase = false;
			QSortFilterProxyModel::setSourceModel(sourceModel);
		} else if (qsortfilterproxymodel_setsourcemodel_callback != nullptr) {
			QAbstractItemModel* cbval1 = sourceModel;
			qsortfilterproxymodel_setsourcemodel_callback(this, cbval1);
		} else {
			QSortFilterProxyModel::setSourceModel(sourceModel);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (qsortfilterproxymodel_maptosource_isbase) {
			qsortfilterproxymodel_maptosource_isbase = false;
			return QSortFilterProxyModel::mapToSource(proxyIndex);
		} else if (qsortfilterproxymodel_maptosource_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&proxyIndex;
			QModelIndex* callback_ret = qsortfilterproxymodel_maptosource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSortFilterProxyModel::mapToSource(proxyIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (qsortfilterproxymodel_mapfromsource_isbase) {
			qsortfilterproxymodel_mapfromsource_isbase = false;
			return QSortFilterProxyModel::mapFromSource(sourceIndex);
		} else if (qsortfilterproxymodel_mapfromsource_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceIndex;
			QModelIndex* callback_ret = qsortfilterproxymodel_mapfromsource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSortFilterProxyModel::mapFromSource(sourceIndex);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
		if (qsortfilterproxymodel_mapselectiontosource_isbase) {
			qsortfilterproxymodel_mapselectiontosource_isbase = false;
			return QSortFilterProxyModel::mapSelectionToSource(proxySelection);
		} else if (qsortfilterproxymodel_mapselectiontosource_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&proxySelection;
			QItemSelection* callback_ret = qsortfilterproxymodel_mapselectiontosource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSortFilterProxyModel::mapSelectionToSource(proxySelection);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
		if (qsortfilterproxymodel_mapselectionfromsource_isbase) {
			qsortfilterproxymodel_mapselectionfromsource_isbase = false;
			return QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
		} else if (qsortfilterproxymodel_mapselectionfromsource_callback != nullptr) {
			const QItemSelection* cbval1 = (const QItemSelection*)&sourceSelection;
			QItemSelection* callback_ret = qsortfilterproxymodel_mapselectionfromsource_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
		if (qsortfilterproxymodel_filteracceptsrow_isbase) {
			qsortfilterproxymodel_filteracceptsrow_isbase = false;
			return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
		} else if (qsortfilterproxymodel_filteracceptsrow_callback != nullptr) {
			int cbval1 = source_row;
			const QModelIndex* cbval2 = (const QModelIndex*)&source_parent;
			bool callback_ret = qsortfilterproxymodel_filteracceptsrow_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
		if (qsortfilterproxymodel_filteracceptscolumn_isbase) {
			qsortfilterproxymodel_filteracceptscolumn_isbase = false;
			return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
		} else if (qsortfilterproxymodel_filteracceptscolumn_callback != nullptr) {
			int cbval1 = source_column;
			const QModelIndex* cbval2 = (const QModelIndex*)&source_parent;
			bool callback_ret = qsortfilterproxymodel_filteracceptscolumn_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool lessThan(const QModelIndex& source_left, const QModelIndex& source_right) const override {
		if (qsortfilterproxymodel_lessthan_isbase) {
			qsortfilterproxymodel_lessthan_isbase = false;
			return QSortFilterProxyModel::lessThan(source_left, source_right);
		} else if (qsortfilterproxymodel_lessthan_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&source_left;
			const QModelIndex* cbval2 = (const QModelIndex*)&source_right;
			bool callback_ret = qsortfilterproxymodel_lessthan_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::lessThan(source_left, source_right);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (qsortfilterproxymodel_index_isbase) {
			qsortfilterproxymodel_index_isbase = false;
			return QSortFilterProxyModel::index(row, column, parent);
		} else if (qsortfilterproxymodel_index_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			QModelIndex* callback_ret = qsortfilterproxymodel_index_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QSortFilterProxyModel::index(row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (qsortfilterproxymodel_parent_isbase) {
			qsortfilterproxymodel_parent_isbase = false;
			return QSortFilterProxyModel::parent(child);
		} else if (qsortfilterproxymodel_parent_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&child;
			QModelIndex* callback_ret = qsortfilterproxymodel_parent_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSortFilterProxyModel::parent(child);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (qsortfilterproxymodel_sibling_isbase) {
			qsortfilterproxymodel_sibling_isbase = false;
			return QSortFilterProxyModel::sibling(row, column, idx);
		} else if (qsortfilterproxymodel_sibling_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&idx;
			QModelIndex* callback_ret = qsortfilterproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QSortFilterProxyModel::sibling(row, column, idx);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int rowCount(const QModelIndex& parent) const override {
		if (qsortfilterproxymodel_rowcount_isbase) {
			qsortfilterproxymodel_rowcount_isbase = false;
			return QSortFilterProxyModel::rowCount(parent);
		} else if (qsortfilterproxymodel_rowcount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qsortfilterproxymodel_rowcount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::rowCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int columnCount(const QModelIndex& parent) const override {
		if (qsortfilterproxymodel_columncount_isbase) {
			qsortfilterproxymodel_columncount_isbase = false;
			return QSortFilterProxyModel::columnCount(parent);
		} else if (qsortfilterproxymodel_columncount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qsortfilterproxymodel_columncount_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::columnCount(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (qsortfilterproxymodel_haschildren_isbase) {
			qsortfilterproxymodel_haschildren_isbase = false;
			return QSortFilterProxyModel::hasChildren(parent);
		} else if (qsortfilterproxymodel_haschildren_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			bool callback_ret = qsortfilterproxymodel_haschildren_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::hasChildren(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (qsortfilterproxymodel_data_isbase) {
			qsortfilterproxymodel_data_isbase = false;
			return QSortFilterProxyModel::data(index, role);
		} else if (qsortfilterproxymodel_data_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = role;
			QVariant* callback_ret = qsortfilterproxymodel_data_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QSortFilterProxyModel::data(index, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (qsortfilterproxymodel_setdata_isbase) {
			qsortfilterproxymodel_setdata_isbase = false;
			return QSortFilterProxyModel::setData(index, value, role);
		} else if (qsortfilterproxymodel_setdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			const QVariant* cbval2 = (const QVariant*)&value;
			int cbval3 = role;
			bool callback_ret = qsortfilterproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::setData(index, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (qsortfilterproxymodel_headerdata_isbase) {
			qsortfilterproxymodel_headerdata_isbase = false;
			return QSortFilterProxyModel::headerData(section, orientation, role);
		} else if (qsortfilterproxymodel_headerdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			int cbval3 = role;
			QVariant* callback_ret = qsortfilterproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QSortFilterProxyModel::headerData(section, orientation, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (qsortfilterproxymodel_setheaderdata_isbase) {
			qsortfilterproxymodel_setheaderdata_isbase = false;
			return QSortFilterProxyModel::setHeaderData(section, orientation, value, role);
		} else if (qsortfilterproxymodel_setheaderdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			const QVariant* cbval3 = (const QVariant*)&value;
			int cbval4 = role;
			bool callback_ret = qsortfilterproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::setHeaderData(section, orientation, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
		if (qsortfilterproxymodel_mimedata_isbase) {
			qsortfilterproxymodel_mimedata_isbase = false;
			return QSortFilterProxyModel::mimeData(indexes);
		} else if (qsortfilterproxymodel_mimedata_callback != nullptr) {
			libqt_list cbval1 = indexes;
			QMimeData* callback_ret = qsortfilterproxymodel_mimedata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::mimeData(indexes);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (qsortfilterproxymodel_dropmimedata_isbase) {
			qsortfilterproxymodel_dropmimedata_isbase = false;
			return QSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
		} else if (qsortfilterproxymodel_dropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qsortfilterproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (qsortfilterproxymodel_insertrows_isbase) {
			qsortfilterproxymodel_insertrows_isbase = false;
			return QSortFilterProxyModel::insertRows(row, count, parent);
		} else if (qsortfilterproxymodel_insertrows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qsortfilterproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::insertRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (qsortfilterproxymodel_insertcolumns_isbase) {
			qsortfilterproxymodel_insertcolumns_isbase = false;
			return QSortFilterProxyModel::insertColumns(column, count, parent);
		} else if (qsortfilterproxymodel_insertcolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qsortfilterproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::insertColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (qsortfilterproxymodel_removerows_isbase) {
			qsortfilterproxymodel_removerows_isbase = false;
			return QSortFilterProxyModel::removeRows(row, count, parent);
		} else if (qsortfilterproxymodel_removerows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qsortfilterproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::removeRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (qsortfilterproxymodel_removecolumns_isbase) {
			qsortfilterproxymodel_removecolumns_isbase = false;
			return QSortFilterProxyModel::removeColumns(column, count, parent);
		} else if (qsortfilterproxymodel_removecolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qsortfilterproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::removeColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fetchMore(const QModelIndex& parent) override {
		if (qsortfilterproxymodel_fetchmore_isbase) {
			qsortfilterproxymodel_fetchmore_isbase = false;
			QSortFilterProxyModel::fetchMore(parent);
		} else if (qsortfilterproxymodel_fetchmore_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			qsortfilterproxymodel_fetchmore_callback(this, cbval1);
		} else {
			QSortFilterProxyModel::fetchMore(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (qsortfilterproxymodel_canfetchmore_isbase) {
			qsortfilterproxymodel_canfetchmore_isbase = false;
			return QSortFilterProxyModel::canFetchMore(parent);
		} else if (qsortfilterproxymodel_canfetchmore_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			bool callback_ret = qsortfilterproxymodel_canfetchmore_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::canFetchMore(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::ItemFlag> flags(const QModelIndex& index) const override {
		if (qsortfilterproxymodel_flags_isbase) {
			qsortfilterproxymodel_flags_isbase = false;
			return QSortFilterProxyModel::flags(index);
		} else if (qsortfilterproxymodel_flags_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qsortfilterproxymodel_flags_callback(this, cbval1);
			return static_cast<QFlags<Qt::ItemFlag>>(callback_ret);
		} else {
			return QSortFilterProxyModel::flags(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (qsortfilterproxymodel_buddy_isbase) {
			qsortfilterproxymodel_buddy_isbase = false;
			return QSortFilterProxyModel::buddy(index);
		} else if (qsortfilterproxymodel_buddy_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QModelIndex* callback_ret = qsortfilterproxymodel_buddy_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSortFilterProxyModel::buddy(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (qsortfilterproxymodel_match_isbase) {
			qsortfilterproxymodel_match_isbase = false;
			return QSortFilterProxyModel::match(start, role, value, hits, flags);
		} else if (qsortfilterproxymodel_match_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&start;
			int cbval2 = role;
			const QVariant* cbval3 = (const QVariant*)&value;
			int cbval4 = hits;
			int cbval5 = static_cast<int>(flags);
			libqt_list callback_ret = qsortfilterproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QSortFilterProxyModel::match(start, role, value, hits, flags);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize span(const QModelIndex& index) const override {
		if (qsortfilterproxymodel_span_isbase) {
			qsortfilterproxymodel_span_isbase = false;
			return QSortFilterProxyModel::span(index);
		} else if (qsortfilterproxymodel_span_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QSize* callback_ret = qsortfilterproxymodel_span_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSortFilterProxyModel::span(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sort(int column, Qt::SortOrder order) override {
		if (qsortfilterproxymodel_sort_isbase) {
			qsortfilterproxymodel_sort_isbase = false;
			QSortFilterProxyModel::sort(column, order);
		} else if (qsortfilterproxymodel_sort_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = static_cast<int>(order);
			qsortfilterproxymodel_sort_callback(this, cbval1, cbval2);
		} else {
			QSortFilterProxyModel::sort(column, order);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> mimeTypes() const override {
		if (qsortfilterproxymodel_mimetypes_isbase) {
			qsortfilterproxymodel_mimetypes_isbase = false;
			return QSortFilterProxyModel::mimeTypes();
		} else if (qsortfilterproxymodel_mimetypes_callback != nullptr) {
			libqt_list callback_ret = qsortfilterproxymodel_mimetypes_callback();
			return callback_ret;
		} else {
			return QSortFilterProxyModel::mimeTypes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::DropAction> supportedDropActions() const override {
		if (qsortfilterproxymodel_supporteddropactions_isbase) {
			qsortfilterproxymodel_supporteddropactions_isbase = false;
			return QSortFilterProxyModel::supportedDropActions();
		} else if (qsortfilterproxymodel_supporteddropactions_callback != nullptr) {
			int callback_ret = qsortfilterproxymodel_supporteddropactions_callback();
			return static_cast<QFlags<Qt::DropAction>>(callback_ret);
		} else {
			return QSortFilterProxyModel::supportedDropActions();
		}
	}

	// Virtual method for C ABI access and custom callback
	void invalidateFilter() {
		if (qsortfilterproxymodel_invalidatefilter_isbase) {
			qsortfilterproxymodel_invalidatefilter_isbase = false;
			QSortFilterProxyModel::invalidateFilter();
		} else if (qsortfilterproxymodel_invalidatefilter_callback != nullptr) {
			qsortfilterproxymodel_invalidatefilter_callback();
		} else {
			QSortFilterProxyModel::invalidateFilter();
		}
	}

	// Virtual method for C ABI access and custom callback
	void invalidateRowsFilter() {
		if (qsortfilterproxymodel_invalidaterowsfilter_isbase) {
			qsortfilterproxymodel_invalidaterowsfilter_isbase = false;
			QSortFilterProxyModel::invalidateRowsFilter();
		} else if (qsortfilterproxymodel_invalidaterowsfilter_callback != nullptr) {
			qsortfilterproxymodel_invalidaterowsfilter_callback();
		} else {
			QSortFilterProxyModel::invalidateRowsFilter();
		}
	}

	// Virtual method for C ABI access and custom callback
	void invalidateColumnsFilter() {
		if (qsortfilterproxymodel_invalidatecolumnsfilter_isbase) {
			qsortfilterproxymodel_invalidatecolumnsfilter_isbase = false;
			QSortFilterProxyModel::invalidateColumnsFilter();
		} else if (qsortfilterproxymodel_invalidatecolumnsfilter_callback != nullptr) {
			qsortfilterproxymodel_invalidatecolumnsfilter_callback();
		} else {
			QSortFilterProxyModel::invalidateColumnsFilter();
		}
	}

	// Friend functions
	friend bool QSortFilterProxyModel_FilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
	friend bool QSortFilterProxyModel_QBaseFilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
	friend bool QSortFilterProxyModel_FilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
	friend bool QSortFilterProxyModel_QBaseFilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
	friend bool QSortFilterProxyModel_LessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right);
	friend bool QSortFilterProxyModel_QBaseLessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right);
	friend void QSortFilterProxyModel_InvalidateFilter(QSortFilterProxyModel* self);
	friend void QSortFilterProxyModel_QBaseInvalidateFilter(QSortFilterProxyModel* self);
	friend void QSortFilterProxyModel_InvalidateRowsFilter(QSortFilterProxyModel* self);
	friend void QSortFilterProxyModel_QBaseInvalidateRowsFilter(QSortFilterProxyModel* self);
	friend void QSortFilterProxyModel_InvalidateColumnsFilter(QSortFilterProxyModel* self);
	friend void QSortFilterProxyModel_QBaseInvalidateColumnsFilter(QSortFilterProxyModel* self);
};

#endif


