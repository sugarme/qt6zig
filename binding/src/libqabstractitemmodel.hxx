#pragma once
#ifndef QABSTRACTITEMMODEL_H_C_LIBVIRTUAL
#define QABSTRACTITEMMODEL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractItemModel so that we can call protected methods
class VirtualQAbstractItemModel : public QAbstractItemModel {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractItemModel= true;

	// Virtual class public types (including callbacks)
	using QAbstractItemModel_Index_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int, const QModelIndex*);
	using QAbstractItemModel_Parent_Callback = QModelIndex* (*)(const QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemModel_Sibling_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int, const QModelIndex*);
	using QAbstractItemModel_RowCount_Callback = int (*)(const QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemModel_ColumnCount_Callback = int (*)(const QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemModel_HasChildren_Callback = bool (*)(const QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemModel_Data_Callback = QVariant* (*)(const QAbstractItemModel*, const QModelIndex*, int);
	using QAbstractItemModel_SetData_Callback = bool (*)(QAbstractItemModel*, const QModelIndex*, const QVariant*, int);
	using QAbstractItemModel_HeaderData_Callback = QVariant* (*)(const QAbstractItemModel*, int, int, int);
	using QAbstractItemModel_SetHeaderData_Callback = bool (*)(QAbstractItemModel*, int, int, const QVariant*, int);
	using QAbstractItemModel_ItemData_Callback = libqt_map (*)(const QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemModel_SetItemData_Callback = bool (*)(QAbstractItemModel*, const QModelIndex*, libqt_map);
	using QAbstractItemModel_ClearItemData_Callback = bool (*)(QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemModel_MimeTypes_Callback = libqt_list (*)();
	using QAbstractItemModel_MimeData_Callback = QMimeData* (*)(const QAbstractItemModel*, libqt_list);
	using QAbstractItemModel_CanDropMimeData_Callback = bool (*)(const QAbstractItemModel*, const QMimeData*, int, int, int, const QModelIndex*);
	using QAbstractItemModel_DropMimeData_Callback = bool (*)(QAbstractItemModel*, const QMimeData*, int, int, int, const QModelIndex*);
	using QAbstractItemModel_SupportedDropActions_Callback = int (*)();
	using QAbstractItemModel_SupportedDragActions_Callback = int (*)();
	using QAbstractItemModel_InsertRows_Callback = bool (*)(QAbstractItemModel*, int, int, const QModelIndex*);
	using QAbstractItemModel_InsertColumns_Callback = bool (*)(QAbstractItemModel*, int, int, const QModelIndex*);
	using QAbstractItemModel_RemoveRows_Callback = bool (*)(QAbstractItemModel*, int, int, const QModelIndex*);
	using QAbstractItemModel_RemoveColumns_Callback = bool (*)(QAbstractItemModel*, int, int, const QModelIndex*);
	using QAbstractItemModel_MoveRows_Callback = bool (*)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int);
	using QAbstractItemModel_MoveColumns_Callback = bool (*)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int);
	using QAbstractItemModel_FetchMore_Callback = void (*)(QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemModel_CanFetchMore_Callback = bool (*)(const QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemModel_Flags_Callback = int (*)(const QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemModel_Sort_Callback = void (*)(QAbstractItemModel*, int, int);
	using QAbstractItemModel_Buddy_Callback = QModelIndex* (*)(const QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemModel_Match_Callback = libqt_list (*)(const QAbstractItemModel*, const QModelIndex*, int, const QVariant*, int, int);
	using QAbstractItemModel_Span_Callback = QSize* (*)(const QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemModel_RoleNames_Callback = libqt_map (*)();
	using QAbstractItemModel_MultiData_Callback = void (*)(const QAbstractItemModel*, const QModelIndex*, QModelRoleDataSpan*);
	using QAbstractItemModel_Submit_Callback = bool (*)();
	using QAbstractItemModel_Revert_Callback = void (*)();
	using QAbstractItemModel_ResetInternalData_Callback = void (*)();
	using QAbstractItemModel_CreateIndex_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int);
	using QAbstractItemModel_CreateIndex2_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int, uintptr_t);
	using QAbstractItemModel_EncodeData_Callback = void (*)(const QAbstractItemModel*, libqt_list, QDataStream*);
	using QAbstractItemModel_DecodeData_Callback = bool (*)(QAbstractItemModel*, int, int, const QModelIndex*, QDataStream*);
	using QAbstractItemModel_BeginInsertRows_Callback = void (*)(QAbstractItemModel*, const QModelIndex*, int, int);
	using QAbstractItemModel_EndInsertRows_Callback = void (*)();
	using QAbstractItemModel_BeginRemoveRows_Callback = void (*)(QAbstractItemModel*, const QModelIndex*, int, int);
	using QAbstractItemModel_EndRemoveRows_Callback = void (*)();
	using QAbstractItemModel_BeginMoveRows_Callback = bool (*)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int);
	using QAbstractItemModel_EndMoveRows_Callback = void (*)();
	using QAbstractItemModel_BeginInsertColumns_Callback = void (*)(QAbstractItemModel*, const QModelIndex*, int, int);
	using QAbstractItemModel_EndInsertColumns_Callback = void (*)();
	using QAbstractItemModel_BeginRemoveColumns_Callback = void (*)(QAbstractItemModel*, const QModelIndex*, int, int);
	using QAbstractItemModel_EndRemoveColumns_Callback = void (*)();
	using QAbstractItemModel_BeginMoveColumns_Callback = bool (*)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int);
	using QAbstractItemModel_EndMoveColumns_Callback = void (*)();
	using QAbstractItemModel_BeginResetModel_Callback = void (*)();
	using QAbstractItemModel_EndResetModel_Callback = void (*)();
	using QAbstractItemModel_ChangePersistentIndex_Callback = void (*)(QAbstractItemModel*, const QModelIndex*, const QModelIndex*);
	using QAbstractItemModel_ChangePersistentIndexList_Callback = void (*)(QAbstractItemModel*, libqt_list, libqt_list);
	using QAbstractItemModel_PersistentIndexList_Callback = libqt_list (*)();
	using QAbstractItemModel_CreateIndex3_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int, const void*);

protected:
	// Instance callback storage
	mutable QAbstractItemModel_Index_Callback qabstractitemmodel_index_callback = nullptr;
	mutable QAbstractItemModel_Parent_Callback qabstractitemmodel_parent_callback = nullptr;
	mutable QAbstractItemModel_Sibling_Callback qabstractitemmodel_sibling_callback = nullptr;
	mutable QAbstractItemModel_RowCount_Callback qabstractitemmodel_rowcount_callback = nullptr;
	mutable QAbstractItemModel_ColumnCount_Callback qabstractitemmodel_columncount_callback = nullptr;
	mutable QAbstractItemModel_HasChildren_Callback qabstractitemmodel_haschildren_callback = nullptr;
	mutable QAbstractItemModel_Data_Callback qabstractitemmodel_data_callback = nullptr;
	mutable QAbstractItemModel_SetData_Callback qabstractitemmodel_setdata_callback = nullptr;
	mutable QAbstractItemModel_HeaderData_Callback qabstractitemmodel_headerdata_callback = nullptr;
	mutable QAbstractItemModel_SetHeaderData_Callback qabstractitemmodel_setheaderdata_callback = nullptr;
	mutable QAbstractItemModel_ItemData_Callback qabstractitemmodel_itemdata_callback = nullptr;
	mutable QAbstractItemModel_SetItemData_Callback qabstractitemmodel_setitemdata_callback = nullptr;
	mutable QAbstractItemModel_ClearItemData_Callback qabstractitemmodel_clearitemdata_callback = nullptr;
	mutable QAbstractItemModel_MimeTypes_Callback qabstractitemmodel_mimetypes_callback = nullptr;
	mutable QAbstractItemModel_MimeData_Callback qabstractitemmodel_mimedata_callback = nullptr;
	mutable QAbstractItemModel_CanDropMimeData_Callback qabstractitemmodel_candropmimedata_callback = nullptr;
	mutable QAbstractItemModel_DropMimeData_Callback qabstractitemmodel_dropmimedata_callback = nullptr;
	mutable QAbstractItemModel_SupportedDropActions_Callback qabstractitemmodel_supporteddropactions_callback = nullptr;
	mutable QAbstractItemModel_SupportedDragActions_Callback qabstractitemmodel_supporteddragactions_callback = nullptr;
	mutable QAbstractItemModel_InsertRows_Callback qabstractitemmodel_insertrows_callback = nullptr;
	mutable QAbstractItemModel_InsertColumns_Callback qabstractitemmodel_insertcolumns_callback = nullptr;
	mutable QAbstractItemModel_RemoveRows_Callback qabstractitemmodel_removerows_callback = nullptr;
	mutable QAbstractItemModel_RemoveColumns_Callback qabstractitemmodel_removecolumns_callback = nullptr;
	mutable QAbstractItemModel_MoveRows_Callback qabstractitemmodel_moverows_callback = nullptr;
	mutable QAbstractItemModel_MoveColumns_Callback qabstractitemmodel_movecolumns_callback = nullptr;
	mutable QAbstractItemModel_FetchMore_Callback qabstractitemmodel_fetchmore_callback = nullptr;
	mutable QAbstractItemModel_CanFetchMore_Callback qabstractitemmodel_canfetchmore_callback = nullptr;
	mutable QAbstractItemModel_Flags_Callback qabstractitemmodel_flags_callback = nullptr;
	mutable QAbstractItemModel_Sort_Callback qabstractitemmodel_sort_callback = nullptr;
	mutable QAbstractItemModel_Buddy_Callback qabstractitemmodel_buddy_callback = nullptr;
	mutable QAbstractItemModel_Match_Callback qabstractitemmodel_match_callback = nullptr;
	mutable QAbstractItemModel_Span_Callback qabstractitemmodel_span_callback = nullptr;
	mutable QAbstractItemModel_RoleNames_Callback qabstractitemmodel_rolenames_callback = nullptr;
	mutable QAbstractItemModel_MultiData_Callback qabstractitemmodel_multidata_callback = nullptr;
	mutable QAbstractItemModel_Submit_Callback qabstractitemmodel_submit_callback = nullptr;
	mutable QAbstractItemModel_Revert_Callback qabstractitemmodel_revert_callback = nullptr;
	mutable QAbstractItemModel_ResetInternalData_Callback qabstractitemmodel_resetinternaldata_callback = nullptr;
	mutable QAbstractItemModel_CreateIndex_Callback qabstractitemmodel_createindex_callback = nullptr;
	mutable QAbstractItemModel_CreateIndex2_Callback qabstractitemmodel_createindex2_callback = nullptr;
	mutable QAbstractItemModel_EncodeData_Callback qabstractitemmodel_encodedata_callback = nullptr;
	mutable QAbstractItemModel_DecodeData_Callback qabstractitemmodel_decodedata_callback = nullptr;
	mutable QAbstractItemModel_BeginInsertRows_Callback qabstractitemmodel_begininsertrows_callback = nullptr;
	mutable QAbstractItemModel_EndInsertRows_Callback qabstractitemmodel_endinsertrows_callback = nullptr;
	mutable QAbstractItemModel_BeginRemoveRows_Callback qabstractitemmodel_beginremoverows_callback = nullptr;
	mutable QAbstractItemModel_EndRemoveRows_Callback qabstractitemmodel_endremoverows_callback = nullptr;
	mutable QAbstractItemModel_BeginMoveRows_Callback qabstractitemmodel_beginmoverows_callback = nullptr;
	mutable QAbstractItemModel_EndMoveRows_Callback qabstractitemmodel_endmoverows_callback = nullptr;
	mutable QAbstractItemModel_BeginInsertColumns_Callback qabstractitemmodel_begininsertcolumns_callback = nullptr;
	mutable QAbstractItemModel_EndInsertColumns_Callback qabstractitemmodel_endinsertcolumns_callback = nullptr;
	mutable QAbstractItemModel_BeginRemoveColumns_Callback qabstractitemmodel_beginremovecolumns_callback = nullptr;
	mutable QAbstractItemModel_EndRemoveColumns_Callback qabstractitemmodel_endremovecolumns_callback = nullptr;
	mutable QAbstractItemModel_BeginMoveColumns_Callback qabstractitemmodel_beginmovecolumns_callback = nullptr;
	mutable QAbstractItemModel_EndMoveColumns_Callback qabstractitemmodel_endmovecolumns_callback = nullptr;
	mutable QAbstractItemModel_BeginResetModel_Callback qabstractitemmodel_beginresetmodel_callback = nullptr;
	mutable QAbstractItemModel_EndResetModel_Callback qabstractitemmodel_endresetmodel_callback = nullptr;
	mutable QAbstractItemModel_ChangePersistentIndex_Callback qabstractitemmodel_changepersistentindex_callback = nullptr;
	mutable QAbstractItemModel_ChangePersistentIndexList_Callback qabstractitemmodel_changepersistentindexlist_callback = nullptr;
	mutable QAbstractItemModel_PersistentIndexList_Callback qabstractitemmodel_persistentindexlist_callback = nullptr;
	mutable QAbstractItemModel_CreateIndex3_Callback qabstractitemmodel_createindex3_callback = nullptr;

	// Instance base flags
    mutable bool qabstractitemmodel_index_isbase = false;
    mutable bool qabstractitemmodel_parent_isbase = false;
    mutable bool qabstractitemmodel_sibling_isbase = false;
    mutable bool qabstractitemmodel_rowcount_isbase = false;
    mutable bool qabstractitemmodel_columncount_isbase = false;
    mutable bool qabstractitemmodel_haschildren_isbase = false;
    mutable bool qabstractitemmodel_data_isbase = false;
    mutable bool qabstractitemmodel_setdata_isbase = false;
    mutable bool qabstractitemmodel_headerdata_isbase = false;
    mutable bool qabstractitemmodel_setheaderdata_isbase = false;
    mutable bool qabstractitemmodel_itemdata_isbase = false;
    mutable bool qabstractitemmodel_setitemdata_isbase = false;
    mutable bool qabstractitemmodel_clearitemdata_isbase = false;
    mutable bool qabstractitemmodel_mimetypes_isbase = false;
    mutable bool qabstractitemmodel_mimedata_isbase = false;
    mutable bool qabstractitemmodel_candropmimedata_isbase = false;
    mutable bool qabstractitemmodel_dropmimedata_isbase = false;
    mutable bool qabstractitemmodel_supporteddropactions_isbase = false;
    mutable bool qabstractitemmodel_supporteddragactions_isbase = false;
    mutable bool qabstractitemmodel_insertrows_isbase = false;
    mutable bool qabstractitemmodel_insertcolumns_isbase = false;
    mutable bool qabstractitemmodel_removerows_isbase = false;
    mutable bool qabstractitemmodel_removecolumns_isbase = false;
    mutable bool qabstractitemmodel_moverows_isbase = false;
    mutable bool qabstractitemmodel_movecolumns_isbase = false;
    mutable bool qabstractitemmodel_fetchmore_isbase = false;
    mutable bool qabstractitemmodel_canfetchmore_isbase = false;
    mutable bool qabstractitemmodel_flags_isbase = false;
    mutable bool qabstractitemmodel_sort_isbase = false;
    mutable bool qabstractitemmodel_buddy_isbase = false;
    mutable bool qabstractitemmodel_match_isbase = false;
    mutable bool qabstractitemmodel_span_isbase = false;
    mutable bool qabstractitemmodel_rolenames_isbase = false;
    mutable bool qabstractitemmodel_multidata_isbase = false;
    mutable bool qabstractitemmodel_submit_isbase = false;
    mutable bool qabstractitemmodel_revert_isbase = false;
    mutable bool qabstractitemmodel_resetinternaldata_isbase = false;
    mutable bool qabstractitemmodel_createindex_isbase = false;
    mutable bool qabstractitemmodel_createindex2_isbase = false;
    mutable bool qabstractitemmodel_encodedata_isbase = false;
    mutable bool qabstractitemmodel_decodedata_isbase = false;
    mutable bool qabstractitemmodel_begininsertrows_isbase = false;
    mutable bool qabstractitemmodel_endinsertrows_isbase = false;
    mutable bool qabstractitemmodel_beginremoverows_isbase = false;
    mutable bool qabstractitemmodel_endremoverows_isbase = false;
    mutable bool qabstractitemmodel_beginmoverows_isbase = false;
    mutable bool qabstractitemmodel_endmoverows_isbase = false;
    mutable bool qabstractitemmodel_begininsertcolumns_isbase = false;
    mutable bool qabstractitemmodel_endinsertcolumns_isbase = false;
    mutable bool qabstractitemmodel_beginremovecolumns_isbase = false;
    mutable bool qabstractitemmodel_endremovecolumns_isbase = false;
    mutable bool qabstractitemmodel_beginmovecolumns_isbase = false;
    mutable bool qabstractitemmodel_endmovecolumns_isbase = false;
    mutable bool qabstractitemmodel_beginresetmodel_isbase = false;
    mutable bool qabstractitemmodel_endresetmodel_isbase = false;
    mutable bool qabstractitemmodel_changepersistentindex_isbase = false;
    mutable bool qabstractitemmodel_changepersistentindexlist_isbase = false;
    mutable bool qabstractitemmodel_persistentindexlist_isbase = false;
    mutable bool qabstractitemmodel_createindex3_isbase = false;

public:
	VirtualQAbstractItemModel(): QAbstractItemModel() {};
	VirtualQAbstractItemModel(QObject* parent): QAbstractItemModel(parent) {};

	~VirtualQAbstractItemModel() {
		qabstractitemmodel_index_callback = nullptr;
		qabstractitemmodel_parent_callback = nullptr;
		qabstractitemmodel_sibling_callback = nullptr;
		qabstractitemmodel_rowcount_callback = nullptr;
		qabstractitemmodel_columncount_callback = nullptr;
		qabstractitemmodel_haschildren_callback = nullptr;
		qabstractitemmodel_data_callback = nullptr;
		qabstractitemmodel_setdata_callback = nullptr;
		qabstractitemmodel_headerdata_callback = nullptr;
		qabstractitemmodel_setheaderdata_callback = nullptr;
		qabstractitemmodel_itemdata_callback = nullptr;
		qabstractitemmodel_setitemdata_callback = nullptr;
		qabstractitemmodel_clearitemdata_callback = nullptr;
		qabstractitemmodel_mimetypes_callback = nullptr;
		qabstractitemmodel_mimedata_callback = nullptr;
		qabstractitemmodel_candropmimedata_callback = nullptr;
		qabstractitemmodel_dropmimedata_callback = nullptr;
		qabstractitemmodel_supporteddropactions_callback = nullptr;
		qabstractitemmodel_supporteddragactions_callback = nullptr;
		qabstractitemmodel_insertrows_callback = nullptr;
		qabstractitemmodel_insertcolumns_callback = nullptr;
		qabstractitemmodel_removerows_callback = nullptr;
		qabstractitemmodel_removecolumns_callback = nullptr;
		qabstractitemmodel_moverows_callback = nullptr;
		qabstractitemmodel_movecolumns_callback = nullptr;
		qabstractitemmodel_fetchmore_callback = nullptr;
		qabstractitemmodel_canfetchmore_callback = nullptr;
		qabstractitemmodel_flags_callback = nullptr;
		qabstractitemmodel_sort_callback = nullptr;
		qabstractitemmodel_buddy_callback = nullptr;
		qabstractitemmodel_match_callback = nullptr;
		qabstractitemmodel_span_callback = nullptr;
		qabstractitemmodel_rolenames_callback = nullptr;
		qabstractitemmodel_multidata_callback = nullptr;
		qabstractitemmodel_submit_callback = nullptr;
		qabstractitemmodel_revert_callback = nullptr;
		qabstractitemmodel_resetinternaldata_callback = nullptr;
		qabstractitemmodel_createindex_callback = nullptr;
		qabstractitemmodel_createindex2_callback = nullptr;
		qabstractitemmodel_encodedata_callback = nullptr;
		qabstractitemmodel_decodedata_callback = nullptr;
		qabstractitemmodel_begininsertrows_callback = nullptr;
		qabstractitemmodel_endinsertrows_callback = nullptr;
		qabstractitemmodel_beginremoverows_callback = nullptr;
		qabstractitemmodel_endremoverows_callback = nullptr;
		qabstractitemmodel_beginmoverows_callback = nullptr;
		qabstractitemmodel_endmoverows_callback = nullptr;
		qabstractitemmodel_begininsertcolumns_callback = nullptr;
		qabstractitemmodel_endinsertcolumns_callback = nullptr;
		qabstractitemmodel_beginremovecolumns_callback = nullptr;
		qabstractitemmodel_endremovecolumns_callback = nullptr;
		qabstractitemmodel_beginmovecolumns_callback = nullptr;
		qabstractitemmodel_endmovecolumns_callback = nullptr;
		qabstractitemmodel_beginresetmodel_callback = nullptr;
		qabstractitemmodel_endresetmodel_callback = nullptr;
		qabstractitemmodel_changepersistentindex_callback = nullptr;
		qabstractitemmodel_changepersistentindexlist_callback = nullptr;
		qabstractitemmodel_persistentindexlist_callback = nullptr;
		qabstractitemmodel_createindex3_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractItemModel_Index_Callback(QAbstractItemModel_Index_Callback cb) const { qabstractitemmodel_index_callback = cb; }
	inline void setQAbstractItemModel_Parent_Callback(QAbstractItemModel_Parent_Callback cb) const { qabstractitemmodel_parent_callback = cb; }
	inline void setQAbstractItemModel_Sibling_Callback(QAbstractItemModel_Sibling_Callback cb) const { qabstractitemmodel_sibling_callback = cb; }
	inline void setQAbstractItemModel_RowCount_Callback(QAbstractItemModel_RowCount_Callback cb) const { qabstractitemmodel_rowcount_callback = cb; }
	inline void setQAbstractItemModel_ColumnCount_Callback(QAbstractItemModel_ColumnCount_Callback cb) const { qabstractitemmodel_columncount_callback = cb; }
	inline void setQAbstractItemModel_HasChildren_Callback(QAbstractItemModel_HasChildren_Callback cb) const { qabstractitemmodel_haschildren_callback = cb; }
	inline void setQAbstractItemModel_Data_Callback(QAbstractItemModel_Data_Callback cb) const { qabstractitemmodel_data_callback = cb; }
	inline void setQAbstractItemModel_SetData_Callback(QAbstractItemModel_SetData_Callback cb) const { qabstractitemmodel_setdata_callback = cb; }
	inline void setQAbstractItemModel_HeaderData_Callback(QAbstractItemModel_HeaderData_Callback cb) const { qabstractitemmodel_headerdata_callback = cb; }
	inline void setQAbstractItemModel_SetHeaderData_Callback(QAbstractItemModel_SetHeaderData_Callback cb) const { qabstractitemmodel_setheaderdata_callback = cb; }
	inline void setQAbstractItemModel_ItemData_Callback(QAbstractItemModel_ItemData_Callback cb) const { qabstractitemmodel_itemdata_callback = cb; }
	inline void setQAbstractItemModel_SetItemData_Callback(QAbstractItemModel_SetItemData_Callback cb) const { qabstractitemmodel_setitemdata_callback = cb; }
	inline void setQAbstractItemModel_ClearItemData_Callback(QAbstractItemModel_ClearItemData_Callback cb) const { qabstractitemmodel_clearitemdata_callback = cb; }
	inline void setQAbstractItemModel_MimeTypes_Callback(QAbstractItemModel_MimeTypes_Callback cb) const { qabstractitemmodel_mimetypes_callback = cb; }
	inline void setQAbstractItemModel_MimeData_Callback(QAbstractItemModel_MimeData_Callback cb) const { qabstractitemmodel_mimedata_callback = cb; }
	inline void setQAbstractItemModel_CanDropMimeData_Callback(QAbstractItemModel_CanDropMimeData_Callback cb) const { qabstractitemmodel_candropmimedata_callback = cb; }
	inline void setQAbstractItemModel_DropMimeData_Callback(QAbstractItemModel_DropMimeData_Callback cb) const { qabstractitemmodel_dropmimedata_callback = cb; }
	inline void setQAbstractItemModel_SupportedDropActions_Callback(QAbstractItemModel_SupportedDropActions_Callback cb) const { qabstractitemmodel_supporteddropactions_callback = cb; }
	inline void setQAbstractItemModel_SupportedDragActions_Callback(QAbstractItemModel_SupportedDragActions_Callback cb) const { qabstractitemmodel_supporteddragactions_callback = cb; }
	inline void setQAbstractItemModel_InsertRows_Callback(QAbstractItemModel_InsertRows_Callback cb) const { qabstractitemmodel_insertrows_callback = cb; }
	inline void setQAbstractItemModel_InsertColumns_Callback(QAbstractItemModel_InsertColumns_Callback cb) const { qabstractitemmodel_insertcolumns_callback = cb; }
	inline void setQAbstractItemModel_RemoveRows_Callback(QAbstractItemModel_RemoveRows_Callback cb) const { qabstractitemmodel_removerows_callback = cb; }
	inline void setQAbstractItemModel_RemoveColumns_Callback(QAbstractItemModel_RemoveColumns_Callback cb) const { qabstractitemmodel_removecolumns_callback = cb; }
	inline void setQAbstractItemModel_MoveRows_Callback(QAbstractItemModel_MoveRows_Callback cb) const { qabstractitemmodel_moverows_callback = cb; }
	inline void setQAbstractItemModel_MoveColumns_Callback(QAbstractItemModel_MoveColumns_Callback cb) const { qabstractitemmodel_movecolumns_callback = cb; }
	inline void setQAbstractItemModel_FetchMore_Callback(QAbstractItemModel_FetchMore_Callback cb) const { qabstractitemmodel_fetchmore_callback = cb; }
	inline void setQAbstractItemModel_CanFetchMore_Callback(QAbstractItemModel_CanFetchMore_Callback cb) const { qabstractitemmodel_canfetchmore_callback = cb; }
	inline void setQAbstractItemModel_Flags_Callback(QAbstractItemModel_Flags_Callback cb) const { qabstractitemmodel_flags_callback = cb; }
	inline void setQAbstractItemModel_Sort_Callback(QAbstractItemModel_Sort_Callback cb) const { qabstractitemmodel_sort_callback = cb; }
	inline void setQAbstractItemModel_Buddy_Callback(QAbstractItemModel_Buddy_Callback cb) const { qabstractitemmodel_buddy_callback = cb; }
	inline void setQAbstractItemModel_Match_Callback(QAbstractItemModel_Match_Callback cb) const { qabstractitemmodel_match_callback = cb; }
	inline void setQAbstractItemModel_Span_Callback(QAbstractItemModel_Span_Callback cb) const { qabstractitemmodel_span_callback = cb; }
	inline void setQAbstractItemModel_RoleNames_Callback(QAbstractItemModel_RoleNames_Callback cb) const { qabstractitemmodel_rolenames_callback = cb; }
	inline void setQAbstractItemModel_MultiData_Callback(QAbstractItemModel_MultiData_Callback cb) const { qabstractitemmodel_multidata_callback = cb; }
	inline void setQAbstractItemModel_Submit_Callback(QAbstractItemModel_Submit_Callback cb) const { qabstractitemmodel_submit_callback = cb; }
	inline void setQAbstractItemModel_Revert_Callback(QAbstractItemModel_Revert_Callback cb) const { qabstractitemmodel_revert_callback = cb; }
	inline void setQAbstractItemModel_ResetInternalData_Callback(QAbstractItemModel_ResetInternalData_Callback cb) const { qabstractitemmodel_resetinternaldata_callback = cb; }
	inline void setQAbstractItemModel_CreateIndex_Callback(QAbstractItemModel_CreateIndex_Callback cb) const { qabstractitemmodel_createindex_callback = cb; }
	inline void setQAbstractItemModel_CreateIndex2_Callback(QAbstractItemModel_CreateIndex2_Callback cb) const { qabstractitemmodel_createindex2_callback = cb; }
	inline void setQAbstractItemModel_EncodeData_Callback(QAbstractItemModel_EncodeData_Callback cb) const { qabstractitemmodel_encodedata_callback = cb; }
	inline void setQAbstractItemModel_DecodeData_Callback(QAbstractItemModel_DecodeData_Callback cb) const { qabstractitemmodel_decodedata_callback = cb; }
	inline void setQAbstractItemModel_BeginInsertRows_Callback(QAbstractItemModel_BeginInsertRows_Callback cb) const { qabstractitemmodel_begininsertrows_callback = cb; }
	inline void setQAbstractItemModel_EndInsertRows_Callback(QAbstractItemModel_EndInsertRows_Callback cb) const { qabstractitemmodel_endinsertrows_callback = cb; }
	inline void setQAbstractItemModel_BeginRemoveRows_Callback(QAbstractItemModel_BeginRemoveRows_Callback cb) const { qabstractitemmodel_beginremoverows_callback = cb; }
	inline void setQAbstractItemModel_EndRemoveRows_Callback(QAbstractItemModel_EndRemoveRows_Callback cb) const { qabstractitemmodel_endremoverows_callback = cb; }
	inline void setQAbstractItemModel_BeginMoveRows_Callback(QAbstractItemModel_BeginMoveRows_Callback cb) const { qabstractitemmodel_beginmoverows_callback = cb; }
	inline void setQAbstractItemModel_EndMoveRows_Callback(QAbstractItemModel_EndMoveRows_Callback cb) const { qabstractitemmodel_endmoverows_callback = cb; }
	inline void setQAbstractItemModel_BeginInsertColumns_Callback(QAbstractItemModel_BeginInsertColumns_Callback cb) const { qabstractitemmodel_begininsertcolumns_callback = cb; }
	inline void setQAbstractItemModel_EndInsertColumns_Callback(QAbstractItemModel_EndInsertColumns_Callback cb) const { qabstractitemmodel_endinsertcolumns_callback = cb; }
	inline void setQAbstractItemModel_BeginRemoveColumns_Callback(QAbstractItemModel_BeginRemoveColumns_Callback cb) const { qabstractitemmodel_beginremovecolumns_callback = cb; }
	inline void setQAbstractItemModel_EndRemoveColumns_Callback(QAbstractItemModel_EndRemoveColumns_Callback cb) const { qabstractitemmodel_endremovecolumns_callback = cb; }
	inline void setQAbstractItemModel_BeginMoveColumns_Callback(QAbstractItemModel_BeginMoveColumns_Callback cb) const { qabstractitemmodel_beginmovecolumns_callback = cb; }
	inline void setQAbstractItemModel_EndMoveColumns_Callback(QAbstractItemModel_EndMoveColumns_Callback cb) const { qabstractitemmodel_endmovecolumns_callback = cb; }
	inline void setQAbstractItemModel_BeginResetModel_Callback(QAbstractItemModel_BeginResetModel_Callback cb) const { qabstractitemmodel_beginresetmodel_callback = cb; }
	inline void setQAbstractItemModel_EndResetModel_Callback(QAbstractItemModel_EndResetModel_Callback cb) const { qabstractitemmodel_endresetmodel_callback = cb; }
	inline void setQAbstractItemModel_ChangePersistentIndex_Callback(QAbstractItemModel_ChangePersistentIndex_Callback cb) const { qabstractitemmodel_changepersistentindex_callback = cb; }
	inline void setQAbstractItemModel_ChangePersistentIndexList_Callback(QAbstractItemModel_ChangePersistentIndexList_Callback cb) const { qabstractitemmodel_changepersistentindexlist_callback = cb; }
	inline void setQAbstractItemModel_PersistentIndexList_Callback(QAbstractItemModel_PersistentIndexList_Callback cb) const { qabstractitemmodel_persistentindexlist_callback = cb; }
	inline void setQAbstractItemModel_CreateIndex3_Callback(QAbstractItemModel_CreateIndex3_Callback cb) const { qabstractitemmodel_createindex3_callback = cb; }

// Base flag setters
	inline void setQAbstractItemModel_Index_IsBase(bool value) const { qabstractitemmodel_index_isbase = value; }
	inline void setQAbstractItemModel_Parent_IsBase(bool value) const { qabstractitemmodel_parent_isbase = value; }
	inline void setQAbstractItemModel_Sibling_IsBase(bool value) const { qabstractitemmodel_sibling_isbase = value; }
	inline void setQAbstractItemModel_RowCount_IsBase(bool value) const { qabstractitemmodel_rowcount_isbase = value; }
	inline void setQAbstractItemModel_ColumnCount_IsBase(bool value) const { qabstractitemmodel_columncount_isbase = value; }
	inline void setQAbstractItemModel_HasChildren_IsBase(bool value) const { qabstractitemmodel_haschildren_isbase = value; }
	inline void setQAbstractItemModel_Data_IsBase(bool value) const { qabstractitemmodel_data_isbase = value; }
	inline void setQAbstractItemModel_SetData_IsBase(bool value) const { qabstractitemmodel_setdata_isbase = value; }
	inline void setQAbstractItemModel_HeaderData_IsBase(bool value) const { qabstractitemmodel_headerdata_isbase = value; }
	inline void setQAbstractItemModel_SetHeaderData_IsBase(bool value) const { qabstractitemmodel_setheaderdata_isbase = value; }
	inline void setQAbstractItemModel_ItemData_IsBase(bool value) const { qabstractitemmodel_itemdata_isbase = value; }
	inline void setQAbstractItemModel_SetItemData_IsBase(bool value) const { qabstractitemmodel_setitemdata_isbase = value; }
	inline void setQAbstractItemModel_ClearItemData_IsBase(bool value) const { qabstractitemmodel_clearitemdata_isbase = value; }
	inline void setQAbstractItemModel_MimeTypes_IsBase(bool value) const { qabstractitemmodel_mimetypes_isbase = value; }
	inline void setQAbstractItemModel_MimeData_IsBase(bool value) const { qabstractitemmodel_mimedata_isbase = value; }
	inline void setQAbstractItemModel_CanDropMimeData_IsBase(bool value) const { qabstractitemmodel_candropmimedata_isbase = value; }
	inline void setQAbstractItemModel_DropMimeData_IsBase(bool value) const { qabstractitemmodel_dropmimedata_isbase = value; }
	inline void setQAbstractItemModel_SupportedDropActions_IsBase(bool value) const { qabstractitemmodel_supporteddropactions_isbase = value; }
	inline void setQAbstractItemModel_SupportedDragActions_IsBase(bool value) const { qabstractitemmodel_supporteddragactions_isbase = value; }
	inline void setQAbstractItemModel_InsertRows_IsBase(bool value) const { qabstractitemmodel_insertrows_isbase = value; }
	inline void setQAbstractItemModel_InsertColumns_IsBase(bool value) const { qabstractitemmodel_insertcolumns_isbase = value; }
	inline void setQAbstractItemModel_RemoveRows_IsBase(bool value) const { qabstractitemmodel_removerows_isbase = value; }
	inline void setQAbstractItemModel_RemoveColumns_IsBase(bool value) const { qabstractitemmodel_removecolumns_isbase = value; }
	inline void setQAbstractItemModel_MoveRows_IsBase(bool value) const { qabstractitemmodel_moverows_isbase = value; }
	inline void setQAbstractItemModel_MoveColumns_IsBase(bool value) const { qabstractitemmodel_movecolumns_isbase = value; }
	inline void setQAbstractItemModel_FetchMore_IsBase(bool value) const { qabstractitemmodel_fetchmore_isbase = value; }
	inline void setQAbstractItemModel_CanFetchMore_IsBase(bool value) const { qabstractitemmodel_canfetchmore_isbase = value; }
	inline void setQAbstractItemModel_Flags_IsBase(bool value) const { qabstractitemmodel_flags_isbase = value; }
	inline void setQAbstractItemModel_Sort_IsBase(bool value) const { qabstractitemmodel_sort_isbase = value; }
	inline void setQAbstractItemModel_Buddy_IsBase(bool value) const { qabstractitemmodel_buddy_isbase = value; }
	inline void setQAbstractItemModel_Match_IsBase(bool value) const { qabstractitemmodel_match_isbase = value; }
	inline void setQAbstractItemModel_Span_IsBase(bool value) const { qabstractitemmodel_span_isbase = value; }
	inline void setQAbstractItemModel_RoleNames_IsBase(bool value) const { qabstractitemmodel_rolenames_isbase = value; }
	inline void setQAbstractItemModel_MultiData_IsBase(bool value) const { qabstractitemmodel_multidata_isbase = value; }
	inline void setQAbstractItemModel_Submit_IsBase(bool value) const { qabstractitemmodel_submit_isbase = value; }
	inline void setQAbstractItemModel_Revert_IsBase(bool value) const { qabstractitemmodel_revert_isbase = value; }
	inline void setQAbstractItemModel_ResetInternalData_IsBase(bool value) const { qabstractitemmodel_resetinternaldata_isbase = value; }
	inline void setQAbstractItemModel_CreateIndex_IsBase(bool value) const { qabstractitemmodel_createindex_isbase = value; }
	inline void setQAbstractItemModel_CreateIndex2_IsBase(bool value) const { qabstractitemmodel_createindex2_isbase = value; }
	inline void setQAbstractItemModel_EncodeData_IsBase(bool value) const { qabstractitemmodel_encodedata_isbase = value; }
	inline void setQAbstractItemModel_DecodeData_IsBase(bool value) const { qabstractitemmodel_decodedata_isbase = value; }
	inline void setQAbstractItemModel_BeginInsertRows_IsBase(bool value) const { qabstractitemmodel_begininsertrows_isbase = value; }
	inline void setQAbstractItemModel_EndInsertRows_IsBase(bool value) const { qabstractitemmodel_endinsertrows_isbase = value; }
	inline void setQAbstractItemModel_BeginRemoveRows_IsBase(bool value) const { qabstractitemmodel_beginremoverows_isbase = value; }
	inline void setQAbstractItemModel_EndRemoveRows_IsBase(bool value) const { qabstractitemmodel_endremoverows_isbase = value; }
	inline void setQAbstractItemModel_BeginMoveRows_IsBase(bool value) const { qabstractitemmodel_beginmoverows_isbase = value; }
	inline void setQAbstractItemModel_EndMoveRows_IsBase(bool value) const { qabstractitemmodel_endmoverows_isbase = value; }
	inline void setQAbstractItemModel_BeginInsertColumns_IsBase(bool value) const { qabstractitemmodel_begininsertcolumns_isbase = value; }
	inline void setQAbstractItemModel_EndInsertColumns_IsBase(bool value) const { qabstractitemmodel_endinsertcolumns_isbase = value; }
	inline void setQAbstractItemModel_BeginRemoveColumns_IsBase(bool value) const { qabstractitemmodel_beginremovecolumns_isbase = value; }
	inline void setQAbstractItemModel_EndRemoveColumns_IsBase(bool value) const { qabstractitemmodel_endremovecolumns_isbase = value; }
	inline void setQAbstractItemModel_BeginMoveColumns_IsBase(bool value) const { qabstractitemmodel_beginmovecolumns_isbase = value; }
	inline void setQAbstractItemModel_EndMoveColumns_IsBase(bool value) const { qabstractitemmodel_endmovecolumns_isbase = value; }
	inline void setQAbstractItemModel_BeginResetModel_IsBase(bool value) const { qabstractitemmodel_beginresetmodel_isbase = value; }
	inline void setQAbstractItemModel_EndResetModel_IsBase(bool value) const { qabstractitemmodel_endresetmodel_isbase = value; }
	inline void setQAbstractItemModel_ChangePersistentIndex_IsBase(bool value) const { qabstractitemmodel_changepersistentindex_isbase = value; }
	inline void setQAbstractItemModel_ChangePersistentIndexList_IsBase(bool value) const { qabstractitemmodel_changepersistentindexlist_isbase = value; }
	inline void setQAbstractItemModel_PersistentIndexList_IsBase(bool value) const { qabstractitemmodel_persistentindexlist_isbase = value; }
	inline void setQAbstractItemModel_CreateIndex3_IsBase(bool value) const { qabstractitemmodel_createindex3_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (qabstractitemmodel_index_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			QModelIndex* callback_ret = qabstractitemmodel_index_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (qabstractitemmodel_parent_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&child;
			QModelIndex* callback_ret = qabstractitemmodel_parent_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (qabstractitemmodel_sibling_isbase) {
			qabstractitemmodel_sibling_isbase = false;
			return QAbstractItemModel::sibling(row, column, idx);
		} else if (qabstractitemmodel_sibling_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&idx;
			QModelIndex* callback_ret = qabstractitemmodel_sibling_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QAbstractItemModel::sibling(row, column, idx);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int rowCount(const QModelIndex& parent) const override {
		if (qabstractitemmodel_rowcount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qabstractitemmodel_rowcount_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int columnCount(const QModelIndex& parent) const override {
		if (qabstractitemmodel_columncount_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int callback_ret = qabstractitemmodel_columncount_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (qabstractitemmodel_haschildren_isbase) {
			qabstractitemmodel_haschildren_isbase = false;
			return QAbstractItemModel::hasChildren(parent);
		} else if (qabstractitemmodel_haschildren_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractitemmodel_haschildren_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractItemModel::hasChildren(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (qabstractitemmodel_data_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int cbval2 = role;
			QVariant* callback_ret = qabstractitemmodel_data_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (qabstractitemmodel_setdata_isbase) {
			qabstractitemmodel_setdata_isbase = false;
			return QAbstractItemModel::setData(index, value, role);
		} else if (qabstractitemmodel_setdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			const QVariant* cbval2 = (const QVariant*)&value;
			int cbval3 = role;
			bool callback_ret = qabstractitemmodel_setdata_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QAbstractItemModel::setData(index, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (qabstractitemmodel_headerdata_isbase) {
			qabstractitemmodel_headerdata_isbase = false;
			return QAbstractItemModel::headerData(section, orientation, role);
		} else if (qabstractitemmodel_headerdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			int cbval3 = role;
			QVariant* callback_ret = qabstractitemmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QAbstractItemModel::headerData(section, orientation, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (qabstractitemmodel_setheaderdata_isbase) {
			qabstractitemmodel_setheaderdata_isbase = false;
			return QAbstractItemModel::setHeaderData(section, orientation, value, role);
		} else if (qabstractitemmodel_setheaderdata_callback != nullptr) {
			int cbval1 = section;
			int cbval2 = static_cast<int>(orientation);
			const QVariant* cbval3 = (const QVariant*)&value;
			int cbval4 = role;
			bool callback_ret = qabstractitemmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QAbstractItemModel::setHeaderData(section, orientation, value, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (qabstractitemmodel_itemdata_isbase) {
			qabstractitemmodel_itemdata_isbase = false;
			return QAbstractItemModel::itemData(index);
		} else if (qabstractitemmodel_itemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			libqt_map callback_ret = qabstractitemmodel_itemdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractItemModel::itemData(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (qabstractitemmodel_setitemdata_isbase) {
			qabstractitemmodel_setitemdata_isbase = false;
			return QAbstractItemModel::setItemData(index, roles);
		} else if (qabstractitemmodel_setitemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			libqt_map cbval2 = roles;
			bool callback_ret = qabstractitemmodel_setitemdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QAbstractItemModel::setItemData(index, roles);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool clearItemData(const QModelIndex& index) override {
		if (qabstractitemmodel_clearitemdata_isbase) {
			qabstractitemmodel_clearitemdata_isbase = false;
			return QAbstractItemModel::clearItemData(index);
		} else if (qabstractitemmodel_clearitemdata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			bool callback_ret = qabstractitemmodel_clearitemdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractItemModel::clearItemData(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> mimeTypes() const override {
		if (qabstractitemmodel_mimetypes_isbase) {
			qabstractitemmodel_mimetypes_isbase = false;
			return QAbstractItemModel::mimeTypes();
		} else if (qabstractitemmodel_mimetypes_callback != nullptr) {
			libqt_list callback_ret = qabstractitemmodel_mimetypes_callback();
			return callback_ret;
		} else {
			return QAbstractItemModel::mimeTypes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
		if (qabstractitemmodel_mimedata_isbase) {
			qabstractitemmodel_mimedata_isbase = false;
			return QAbstractItemModel::mimeData(indexes);
		} else if (qabstractitemmodel_mimedata_callback != nullptr) {
			libqt_list cbval1 = indexes;
			QMimeData* callback_ret = qabstractitemmodel_mimedata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractItemModel::mimeData(indexes);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (qabstractitemmodel_candropmimedata_isbase) {
			qabstractitemmodel_candropmimedata_isbase = false;
			return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
		} else if (qabstractitemmodel_candropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractitemmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (qabstractitemmodel_dropmimedata_isbase) {
			qabstractitemmodel_dropmimedata_isbase = false;
			return QAbstractItemModel::dropMimeData(data, action, row, column, parent);
		} else if (qabstractitemmodel_dropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractitemmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QAbstractItemModel::dropMimeData(data, action, row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::DropAction> supportedDropActions() const override {
		if (qabstractitemmodel_supporteddropactions_isbase) {
			qabstractitemmodel_supporteddropactions_isbase = false;
			return QAbstractItemModel::supportedDropActions();
		} else if (qabstractitemmodel_supporteddropactions_callback != nullptr) {
			int callback_ret = qabstractitemmodel_supporteddropactions_callback();
			return static_cast<QFlags<Qt::DropAction>>(callback_ret);
		} else {
			return QAbstractItemModel::supportedDropActions();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::DropAction> supportedDragActions() const override {
		if (qabstractitemmodel_supporteddragactions_isbase) {
			qabstractitemmodel_supporteddragactions_isbase = false;
			return QAbstractItemModel::supportedDragActions();
		} else if (qabstractitemmodel_supporteddragactions_callback != nullptr) {
			int callback_ret = qabstractitemmodel_supporteddragactions_callback();
			return static_cast<QFlags<Qt::DropAction>>(callback_ret);
		} else {
			return QAbstractItemModel::supportedDragActions();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (qabstractitemmodel_insertrows_isbase) {
			qabstractitemmodel_insertrows_isbase = false;
			return QAbstractItemModel::insertRows(row, count, parent);
		} else if (qabstractitemmodel_insertrows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractitemmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QAbstractItemModel::insertRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (qabstractitemmodel_insertcolumns_isbase) {
			qabstractitemmodel_insertcolumns_isbase = false;
			return QAbstractItemModel::insertColumns(column, count, parent);
		} else if (qabstractitemmodel_insertcolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractitemmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QAbstractItemModel::insertColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (qabstractitemmodel_removerows_isbase) {
			qabstractitemmodel_removerows_isbase = false;
			return QAbstractItemModel::removeRows(row, count, parent);
		} else if (qabstractitemmodel_removerows_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractitemmodel_removerows_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QAbstractItemModel::removeRows(row, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (qabstractitemmodel_removecolumns_isbase) {
			qabstractitemmodel_removecolumns_isbase = false;
			return QAbstractItemModel::removeColumns(column, count, parent);
		} else if (qabstractitemmodel_removecolumns_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = count;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractitemmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QAbstractItemModel::removeColumns(column, count, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (qabstractitemmodel_moverows_isbase) {
			qabstractitemmodel_moverows_isbase = false;
			return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		} else if (qabstractitemmodel_moverows_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceParent;
			int cbval2 = sourceRow;
			int cbval3 = count;
			const QModelIndex* cbval4 = (const QModelIndex*)&destinationParent;
			int cbval5 = destinationChild;
			bool callback_ret = qabstractitemmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (qabstractitemmodel_movecolumns_isbase) {
			qabstractitemmodel_movecolumns_isbase = false;
			return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		} else if (qabstractitemmodel_movecolumns_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceParent;
			int cbval2 = sourceColumn;
			int cbval3 = count;
			const QModelIndex* cbval4 = (const QModelIndex*)&destinationParent;
			int cbval5 = destinationChild;
			bool callback_ret = qabstractitemmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fetchMore(const QModelIndex& parent) override {
		if (qabstractitemmodel_fetchmore_isbase) {
			qabstractitemmodel_fetchmore_isbase = false;
			QAbstractItemModel::fetchMore(parent);
		} else if (qabstractitemmodel_fetchmore_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			qabstractitemmodel_fetchmore_callback(this, cbval1);
		} else {
			QAbstractItemModel::fetchMore(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (qabstractitemmodel_canfetchmore_isbase) {
			qabstractitemmodel_canfetchmore_isbase = false;
			return QAbstractItemModel::canFetchMore(parent);
		} else if (qabstractitemmodel_canfetchmore_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractitemmodel_canfetchmore_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractItemModel::canFetchMore(parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::ItemFlag> flags(const QModelIndex& index) const override {
		if (qabstractitemmodel_flags_isbase) {
			qabstractitemmodel_flags_isbase = false;
			return QAbstractItemModel::flags(index);
		} else if (qabstractitemmodel_flags_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qabstractitemmodel_flags_callback(this, cbval1);
			return static_cast<QFlags<Qt::ItemFlag>>(callback_ret);
		} else {
			return QAbstractItemModel::flags(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sort(int column, Qt::SortOrder order) override {
		if (qabstractitemmodel_sort_isbase) {
			qabstractitemmodel_sort_isbase = false;
			QAbstractItemModel::sort(column, order);
		} else if (qabstractitemmodel_sort_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = static_cast<int>(order);
			qabstractitemmodel_sort_callback(this, cbval1, cbval2);
		} else {
			QAbstractItemModel::sort(column, order);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (qabstractitemmodel_buddy_isbase) {
			qabstractitemmodel_buddy_isbase = false;
			return QAbstractItemModel::buddy(index);
		} else if (qabstractitemmodel_buddy_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QModelIndex* callback_ret = qabstractitemmodel_buddy_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QAbstractItemModel::buddy(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (qabstractitemmodel_match_isbase) {
			qabstractitemmodel_match_isbase = false;
			return QAbstractItemModel::match(start, role, value, hits, flags);
		} else if (qabstractitemmodel_match_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&start;
			int cbval2 = role;
			const QVariant* cbval3 = (const QVariant*)&value;
			int cbval4 = hits;
			int cbval5 = static_cast<int>(flags);
			libqt_list callback_ret = qabstractitemmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QAbstractItemModel::match(start, role, value, hits, flags);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize span(const QModelIndex& index) const override {
		if (qabstractitemmodel_span_isbase) {
			qabstractitemmodel_span_isbase = false;
			return QAbstractItemModel::span(index);
		} else if (qabstractitemmodel_span_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QSize* callback_ret = qabstractitemmodel_span_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QAbstractItemModel::span(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QHash<int, QByteArray> roleNames() const override {
		if (qabstractitemmodel_rolenames_isbase) {
			qabstractitemmodel_rolenames_isbase = false;
			return QAbstractItemModel::roleNames();
		} else if (qabstractitemmodel_rolenames_callback != nullptr) {
			libqt_map callback_ret = qabstractitemmodel_rolenames_callback();
			return callback_ret;
		} else {
			return QAbstractItemModel::roleNames();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
		if (qabstractitemmodel_multidata_isbase) {
			qabstractitemmodel_multidata_isbase = false;
			QAbstractItemModel::multiData(index, roleDataSpan);
		} else if (qabstractitemmodel_multidata_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			QModelRoleDataSpan* cbval2 = &roleDataSpan;
			qabstractitemmodel_multidata_callback(this, cbval1, cbval2);
		} else {
			QAbstractItemModel::multiData(index, roleDataSpan);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool submit() override {
		if (qabstractitemmodel_submit_isbase) {
			qabstractitemmodel_submit_isbase = false;
			return QAbstractItemModel::submit();
		} else if (qabstractitemmodel_submit_callback != nullptr) {
			bool callback_ret = qabstractitemmodel_submit_callback();
			return callback_ret;
		} else {
			return QAbstractItemModel::submit();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void revert() override {
		if (qabstractitemmodel_revert_isbase) {
			qabstractitemmodel_revert_isbase = false;
			QAbstractItemModel::revert();
		} else if (qabstractitemmodel_revert_callback != nullptr) {
			qabstractitemmodel_revert_callback();
		} else {
			QAbstractItemModel::revert();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resetInternalData() override {
		if (qabstractitemmodel_resetinternaldata_isbase) {
			qabstractitemmodel_resetinternaldata_isbase = false;
			QAbstractItemModel::resetInternalData();
		} else if (qabstractitemmodel_resetinternaldata_callback != nullptr) {
			qabstractitemmodel_resetinternaldata_callback();
		} else {
			QAbstractItemModel::resetInternalData();
		}
	}

	// Virtual method for C ABI access and custom callback
	QModelIndex createIndex(int row, int column) const {
		if (qabstractitemmodel_createindex_isbase) {
			qabstractitemmodel_createindex_isbase = false;
			return QAbstractItemModel::createIndex(row, column);
		} else if (qabstractitemmodel_createindex_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			QModelIndex* callback_ret = qabstractitemmodel_createindex_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QAbstractItemModel::createIndex(row, column);
		}
	}

	// Virtual method for C ABI access and custom callback
	QModelIndex createIndex(int row, int column, quintptr id) const {
		if (qabstractitemmodel_createindex2_isbase) {
			qabstractitemmodel_createindex2_isbase = false;
			return QAbstractItemModel::createIndex(row, column, id);
		} else if (qabstractitemmodel_createindex2_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			uintptr_t cbval3 = id;
			QModelIndex* callback_ret = qabstractitemmodel_createindex2_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QAbstractItemModel::createIndex(row, column, id);
		}
	}

	// Virtual method for C ABI access and custom callback
	void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
		if (qabstractitemmodel_encodedata_isbase) {
			qabstractitemmodel_encodedata_isbase = false;
			QAbstractItemModel::encodeData(indexes, stream);
		} else if (qabstractitemmodel_encodedata_callback != nullptr) {
			libqt_list cbval1 = indexes;
			QDataStream* cbval2 = &stream;
			qabstractitemmodel_encodedata_callback(this, cbval1, cbval2);
		} else {
			QAbstractItemModel::encodeData(indexes, stream);
		}
	}

	// Virtual method for C ABI access and custom callback
	bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
		if (qabstractitemmodel_decodedata_isbase) {
			qabstractitemmodel_decodedata_isbase = false;
			return QAbstractItemModel::decodeData(row, column, parent, stream);
		} else if (qabstractitemmodel_decodedata_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			QDataStream* cbval4 = &stream;
			bool callback_ret = qabstractitemmodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QAbstractItemModel::decodeData(row, column, parent, stream);
		}
	}

	// Virtual method for C ABI access and custom callback
	void beginInsertRows(const QModelIndex& parent, int first, int last) {
		if (qabstractitemmodel_begininsertrows_isbase) {
			qabstractitemmodel_begininsertrows_isbase = false;
			QAbstractItemModel::beginInsertRows(parent, first, last);
		} else if (qabstractitemmodel_begininsertrows_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = first;
			int cbval3 = last;
			qabstractitemmodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractItemModel::beginInsertRows(parent, first, last);
		}
	}

	// Virtual method for C ABI access and custom callback
	void endInsertRows() {
		if (qabstractitemmodel_endinsertrows_isbase) {
			qabstractitemmodel_endinsertrows_isbase = false;
			QAbstractItemModel::endInsertRows();
		} else if (qabstractitemmodel_endinsertrows_callback != nullptr) {
			qabstractitemmodel_endinsertrows_callback();
		} else {
			QAbstractItemModel::endInsertRows();
		}
	}

	// Virtual method for C ABI access and custom callback
	void beginRemoveRows(const QModelIndex& parent, int first, int last) {
		if (qabstractitemmodel_beginremoverows_isbase) {
			qabstractitemmodel_beginremoverows_isbase = false;
			QAbstractItemModel::beginRemoveRows(parent, first, last);
		} else if (qabstractitemmodel_beginremoverows_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = first;
			int cbval3 = last;
			qabstractitemmodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractItemModel::beginRemoveRows(parent, first, last);
		}
	}

	// Virtual method for C ABI access and custom callback
	void endRemoveRows() {
		if (qabstractitemmodel_endremoverows_isbase) {
			qabstractitemmodel_endremoverows_isbase = false;
			QAbstractItemModel::endRemoveRows();
		} else if (qabstractitemmodel_endremoverows_callback != nullptr) {
			qabstractitemmodel_endremoverows_callback();
		} else {
			QAbstractItemModel::endRemoveRows();
		}
	}

	// Virtual method for C ABI access and custom callback
	bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
		if (qabstractitemmodel_beginmoverows_isbase) {
			qabstractitemmodel_beginmoverows_isbase = false;
			return QAbstractItemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
		} else if (qabstractitemmodel_beginmoverows_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceParent;
			int cbval2 = sourceFirst;
			int cbval3 = sourceLast;
			const QModelIndex* cbval4 = (const QModelIndex*)&destinationParent;
			int cbval5 = destinationRow;
			bool callback_ret = qabstractitemmodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QAbstractItemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
		}
	}

	// Virtual method for C ABI access and custom callback
	void endMoveRows() {
		if (qabstractitemmodel_endmoverows_isbase) {
			qabstractitemmodel_endmoverows_isbase = false;
			QAbstractItemModel::endMoveRows();
		} else if (qabstractitemmodel_endmoverows_callback != nullptr) {
			qabstractitemmodel_endmoverows_callback();
		} else {
			QAbstractItemModel::endMoveRows();
		}
	}

	// Virtual method for C ABI access and custom callback
	void beginInsertColumns(const QModelIndex& parent, int first, int last) {
		if (qabstractitemmodel_begininsertcolumns_isbase) {
			qabstractitemmodel_begininsertcolumns_isbase = false;
			QAbstractItemModel::beginInsertColumns(parent, first, last);
		} else if (qabstractitemmodel_begininsertcolumns_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = first;
			int cbval3 = last;
			qabstractitemmodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractItemModel::beginInsertColumns(parent, first, last);
		}
	}

	// Virtual method for C ABI access and custom callback
	void endInsertColumns() {
		if (qabstractitemmodel_endinsertcolumns_isbase) {
			qabstractitemmodel_endinsertcolumns_isbase = false;
			QAbstractItemModel::endInsertColumns();
		} else if (qabstractitemmodel_endinsertcolumns_callback != nullptr) {
			qabstractitemmodel_endinsertcolumns_callback();
		} else {
			QAbstractItemModel::endInsertColumns();
		}
	}

	// Virtual method for C ABI access and custom callback
	void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
		if (qabstractitemmodel_beginremovecolumns_isbase) {
			qabstractitemmodel_beginremovecolumns_isbase = false;
			QAbstractItemModel::beginRemoveColumns(parent, first, last);
		} else if (qabstractitemmodel_beginremovecolumns_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&parent;
			int cbval2 = first;
			int cbval3 = last;
			qabstractitemmodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractItemModel::beginRemoveColumns(parent, first, last);
		}
	}

	// Virtual method for C ABI access and custom callback
	void endRemoveColumns() {
		if (qabstractitemmodel_endremovecolumns_isbase) {
			qabstractitemmodel_endremovecolumns_isbase = false;
			QAbstractItemModel::endRemoveColumns();
		} else if (qabstractitemmodel_endremovecolumns_callback != nullptr) {
			qabstractitemmodel_endremovecolumns_callback();
		} else {
			QAbstractItemModel::endRemoveColumns();
		}
	}

	// Virtual method for C ABI access and custom callback
	bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
		if (qabstractitemmodel_beginmovecolumns_isbase) {
			qabstractitemmodel_beginmovecolumns_isbase = false;
			return QAbstractItemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
		} else if (qabstractitemmodel_beginmovecolumns_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&sourceParent;
			int cbval2 = sourceFirst;
			int cbval3 = sourceLast;
			const QModelIndex* cbval4 = (const QModelIndex*)&destinationParent;
			int cbval5 = destinationColumn;
			bool callback_ret = qabstractitemmodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QAbstractItemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
		}
	}

	// Virtual method for C ABI access and custom callback
	void endMoveColumns() {
		if (qabstractitemmodel_endmovecolumns_isbase) {
			qabstractitemmodel_endmovecolumns_isbase = false;
			QAbstractItemModel::endMoveColumns();
		} else if (qabstractitemmodel_endmovecolumns_callback != nullptr) {
			qabstractitemmodel_endmovecolumns_callback();
		} else {
			QAbstractItemModel::endMoveColumns();
		}
	}

	// Virtual method for C ABI access and custom callback
	void beginResetModel() {
		if (qabstractitemmodel_beginresetmodel_isbase) {
			qabstractitemmodel_beginresetmodel_isbase = false;
			QAbstractItemModel::beginResetModel();
		} else if (qabstractitemmodel_beginresetmodel_callback != nullptr) {
			qabstractitemmodel_beginresetmodel_callback();
		} else {
			QAbstractItemModel::beginResetModel();
		}
	}

	// Virtual method for C ABI access and custom callback
	void endResetModel() {
		if (qabstractitemmodel_endresetmodel_isbase) {
			qabstractitemmodel_endresetmodel_isbase = false;
			QAbstractItemModel::endResetModel();
		} else if (qabstractitemmodel_endresetmodel_callback != nullptr) {
			qabstractitemmodel_endresetmodel_callback();
		} else {
			QAbstractItemModel::endResetModel();
		}
	}

	// Virtual method for C ABI access and custom callback
	void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
		if (qabstractitemmodel_changepersistentindex_isbase) {
			qabstractitemmodel_changepersistentindex_isbase = false;
			QAbstractItemModel::changePersistentIndex(from, to);
		} else if (qabstractitemmodel_changepersistentindex_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&from;
			const QModelIndex* cbval2 = (const QModelIndex*)&to;
			qabstractitemmodel_changepersistentindex_callback(this, cbval1, cbval2);
		} else {
			QAbstractItemModel::changePersistentIndex(from, to);
		}
	}

	// Virtual method for C ABI access and custom callback
	void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
		if (qabstractitemmodel_changepersistentindexlist_isbase) {
			qabstractitemmodel_changepersistentindexlist_isbase = false;
			QAbstractItemModel::changePersistentIndexList(from, to);
		} else if (qabstractitemmodel_changepersistentindexlist_callback != nullptr) {
			libqt_list cbval1 = from;
			libqt_list cbval2 = to;
			qabstractitemmodel_changepersistentindexlist_callback(this, cbval1, cbval2);
		} else {
			QAbstractItemModel::changePersistentIndexList(from, to);
		}
	}

	// Virtual method for C ABI access and custom callback
	QList<QModelIndex> persistentIndexList() const {
		if (qabstractitemmodel_persistentindexlist_isbase) {
			qabstractitemmodel_persistentindexlist_isbase = false;
			return QAbstractItemModel::persistentIndexList();
		} else if (qabstractitemmodel_persistentindexlist_callback != nullptr) {
			libqt_list callback_ret = qabstractitemmodel_persistentindexlist_callback();
			return callback_ret;
		} else {
			return QAbstractItemModel::persistentIndexList();
		}
	}

	// Virtual method for C ABI access and custom callback
	QModelIndex createIndex(int row, int column, const void* data) const {
		if (qabstractitemmodel_createindex3_isbase) {
			qabstractitemmodel_createindex3_isbase = false;
			return QAbstractItemModel::createIndex(row, column, data);
		} else if (qabstractitemmodel_createindex3_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const void* cbval3 = data;
			QModelIndex* callback_ret = qabstractitemmodel_createindex3_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QAbstractItemModel::createIndex(row, column, data);
		}
	}

	// Friend functions
	friend void QAbstractItemModel_ResetInternalData(QAbstractItemModel* self);
	friend void QAbstractItemModel_QBaseResetInternalData(QAbstractItemModel* self);
	friend QModelIndex* QAbstractItemModel_CreateIndex(const QAbstractItemModel* self, int row, int column);
	friend QModelIndex* QAbstractItemModel_QBaseCreateIndex(const QAbstractItemModel* self, int row, int column);
	friend QModelIndex* QAbstractItemModel_CreateIndex2(const QAbstractItemModel* self, int row, int column, uintptr_t id);
	friend QModelIndex* QAbstractItemModel_QBaseCreateIndex2(const QAbstractItemModel* self, int row, int column, uintptr_t id);
	friend void QAbstractItemModel_EncodeData(const QAbstractItemModel* self, const libqt_list indexes, QDataStream* stream);
	friend void QAbstractItemModel_QBaseEncodeData(const QAbstractItemModel* self, const libqt_list indexes, QDataStream* stream);
	friend bool QAbstractItemModel_DecodeData(QAbstractItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
	friend bool QAbstractItemModel_QBaseDecodeData(QAbstractItemModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
	friend void QAbstractItemModel_BeginInsertRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_QBaseBeginInsertRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_EndInsertRows(QAbstractItemModel* self);
	friend void QAbstractItemModel_QBaseEndInsertRows(QAbstractItemModel* self);
	friend void QAbstractItemModel_BeginRemoveRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_QBaseBeginRemoveRows(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_EndRemoveRows(QAbstractItemModel* self);
	friend void QAbstractItemModel_QBaseEndRemoveRows(QAbstractItemModel* self);
	friend bool QAbstractItemModel_BeginMoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
	friend bool QAbstractItemModel_QBaseBeginMoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
	friend void QAbstractItemModel_EndMoveRows(QAbstractItemModel* self);
	friend void QAbstractItemModel_QBaseEndMoveRows(QAbstractItemModel* self);
	friend void QAbstractItemModel_BeginInsertColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_QBaseBeginInsertColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_EndInsertColumns(QAbstractItemModel* self);
	friend void QAbstractItemModel_QBaseEndInsertColumns(QAbstractItemModel* self);
	friend void QAbstractItemModel_BeginRemoveColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_QBaseBeginRemoveColumns(QAbstractItemModel* self, const QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_EndRemoveColumns(QAbstractItemModel* self);
	friend void QAbstractItemModel_QBaseEndRemoveColumns(QAbstractItemModel* self);
	friend bool QAbstractItemModel_BeginMoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
	friend bool QAbstractItemModel_QBaseBeginMoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
	friend void QAbstractItemModel_EndMoveColumns(QAbstractItemModel* self);
	friend void QAbstractItemModel_QBaseEndMoveColumns(QAbstractItemModel* self);
	friend void QAbstractItemModel_BeginResetModel(QAbstractItemModel* self);
	friend void QAbstractItemModel_QBaseBeginResetModel(QAbstractItemModel* self);
	friend void QAbstractItemModel_EndResetModel(QAbstractItemModel* self);
	friend void QAbstractItemModel_QBaseEndResetModel(QAbstractItemModel* self);
	friend void QAbstractItemModel_ChangePersistentIndex(QAbstractItemModel* self, const QModelIndex* from, const QModelIndex* to);
	friend void QAbstractItemModel_QBaseChangePersistentIndex(QAbstractItemModel* self, const QModelIndex* from, const QModelIndex* to);
	friend void QAbstractItemModel_ChangePersistentIndexList(QAbstractItemModel* self, const libqt_list from, const libqt_list to);
	friend void QAbstractItemModel_QBaseChangePersistentIndexList(QAbstractItemModel* self, const libqt_list from, const libqt_list to);
	friend libqt_list QAbstractItemModel_PersistentIndexList(const QAbstractItemModel* self);
	friend libqt_list QAbstractItemModel_QBasePersistentIndexList(const QAbstractItemModel* self);
	friend QModelIndex* QAbstractItemModel_CreateIndex3(const QAbstractItemModel* self, int row, int column, const void* data);
	friend QModelIndex* QAbstractItemModel_QBaseCreateIndex3(const QAbstractItemModel* self, int row, int column, const void* data);
};

// This class is a subclass of QAbstractTableModel so that we can call protected methods
class VirtualQAbstractTableModel : public QAbstractTableModel {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractTableModel= true;

	// Virtual class public types (including callbacks)
	using QAbstractTableModel_Index_Callback = QModelIndex* (*)(const QAbstractTableModel*, int, int, const QModelIndex*);
	using QAbstractTableModel_Sibling_Callback = QModelIndex* (*)(const QAbstractTableModel*, int, int, const QModelIndex*);
	using QAbstractTableModel_DropMimeData_Callback = bool (*)(QAbstractTableModel*, const QMimeData*, int, int, int, const QModelIndex*);
	using QAbstractTableModel_Flags_Callback = int (*)(const QAbstractTableModel*, const QModelIndex*);

protected:
	// Instance callback storage
	mutable QAbstractTableModel_Index_Callback qabstracttablemodel_index_callback = nullptr;
	mutable QAbstractTableModel_Sibling_Callback qabstracttablemodel_sibling_callback = nullptr;
	mutable QAbstractTableModel_DropMimeData_Callback qabstracttablemodel_dropmimedata_callback = nullptr;
	mutable QAbstractTableModel_Flags_Callback qabstracttablemodel_flags_callback = nullptr;

	// Instance base flags
    mutable bool qabstracttablemodel_index_isbase = false;
    mutable bool qabstracttablemodel_sibling_isbase = false;
    mutable bool qabstracttablemodel_dropmimedata_isbase = false;
    mutable bool qabstracttablemodel_flags_isbase = false;

public:
	VirtualQAbstractTableModel(): QAbstractTableModel() {};
	VirtualQAbstractTableModel(QObject* parent): QAbstractTableModel(parent) {};

	~VirtualQAbstractTableModel() {
		qabstracttablemodel_index_callback = nullptr;
		qabstracttablemodel_sibling_callback = nullptr;
		qabstracttablemodel_dropmimedata_callback = nullptr;
		qabstracttablemodel_flags_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractTableModel_Index_Callback(QAbstractTableModel_Index_Callback cb) const { qabstracttablemodel_index_callback = cb; }
	inline void setQAbstractTableModel_Sibling_Callback(QAbstractTableModel_Sibling_Callback cb) const { qabstracttablemodel_sibling_callback = cb; }
	inline void setQAbstractTableModel_DropMimeData_Callback(QAbstractTableModel_DropMimeData_Callback cb) const { qabstracttablemodel_dropmimedata_callback = cb; }
	inline void setQAbstractTableModel_Flags_Callback(QAbstractTableModel_Flags_Callback cb) const { qabstracttablemodel_flags_callback = cb; }

// Base flag setters
	inline void setQAbstractTableModel_Index_IsBase(bool value) const { qabstracttablemodel_index_isbase = value; }
	inline void setQAbstractTableModel_Sibling_IsBase(bool value) const { qabstracttablemodel_sibling_isbase = value; }
	inline void setQAbstractTableModel_DropMimeData_IsBase(bool value) const { qabstracttablemodel_dropmimedata_isbase = value; }
	inline void setQAbstractTableModel_Flags_IsBase(bool value) const { qabstracttablemodel_flags_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (qabstracttablemodel_index_isbase) {
			qabstracttablemodel_index_isbase = false;
			return QAbstractTableModel::index(row, column, parent);
		} else if (qabstracttablemodel_index_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			QModelIndex* callback_ret = qabstracttablemodel_index_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QAbstractTableModel::index(row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (qabstracttablemodel_sibling_isbase) {
			qabstracttablemodel_sibling_isbase = false;
			return QAbstractTableModel::sibling(row, column, idx);
		} else if (qabstracttablemodel_sibling_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&idx;
			QModelIndex* callback_ret = qabstracttablemodel_sibling_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QAbstractTableModel::sibling(row, column, idx);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (qabstracttablemodel_dropmimedata_isbase) {
			qabstracttablemodel_dropmimedata_isbase = false;
			return QAbstractTableModel::dropMimeData(data, action, row, column, parent);
		} else if (qabstracttablemodel_dropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qabstracttablemodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QAbstractTableModel::dropMimeData(data, action, row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::ItemFlag> flags(const QModelIndex& index) const override {
		if (qabstracttablemodel_flags_isbase) {
			qabstracttablemodel_flags_isbase = false;
			return QAbstractTableModel::flags(index);
		} else if (qabstracttablemodel_flags_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qabstracttablemodel_flags_callback(this, cbval1);
			return static_cast<QFlags<Qt::ItemFlag>>(callback_ret);
		} else {
			return QAbstractTableModel::flags(index);
		}
	}
};

// This class is a subclass of QAbstractListModel so that we can call protected methods
class VirtualQAbstractListModel : public QAbstractListModel {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractListModel= true;

	// Virtual class public types (including callbacks)
	using QAbstractListModel_Index_Callback = QModelIndex* (*)(const QAbstractListModel*, int, int, const QModelIndex*);
	using QAbstractListModel_Sibling_Callback = QModelIndex* (*)(const QAbstractListModel*, int, int, const QModelIndex*);
	using QAbstractListModel_DropMimeData_Callback = bool (*)(QAbstractListModel*, const QMimeData*, int, int, int, const QModelIndex*);
	using QAbstractListModel_Flags_Callback = int (*)(const QAbstractListModel*, const QModelIndex*);

protected:
	// Instance callback storage
	mutable QAbstractListModel_Index_Callback qabstractlistmodel_index_callback = nullptr;
	mutable QAbstractListModel_Sibling_Callback qabstractlistmodel_sibling_callback = nullptr;
	mutable QAbstractListModel_DropMimeData_Callback qabstractlistmodel_dropmimedata_callback = nullptr;
	mutable QAbstractListModel_Flags_Callback qabstractlistmodel_flags_callback = nullptr;

	// Instance base flags
    mutable bool qabstractlistmodel_index_isbase = false;
    mutable bool qabstractlistmodel_sibling_isbase = false;
    mutable bool qabstractlistmodel_dropmimedata_isbase = false;
    mutable bool qabstractlistmodel_flags_isbase = false;

public:
	VirtualQAbstractListModel(): QAbstractListModel() {};
	VirtualQAbstractListModel(QObject* parent): QAbstractListModel(parent) {};

	~VirtualQAbstractListModel() {
		qabstractlistmodel_index_callback = nullptr;
		qabstractlistmodel_sibling_callback = nullptr;
		qabstractlistmodel_dropmimedata_callback = nullptr;
		qabstractlistmodel_flags_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractListModel_Index_Callback(QAbstractListModel_Index_Callback cb) const { qabstractlistmodel_index_callback = cb; }
	inline void setQAbstractListModel_Sibling_Callback(QAbstractListModel_Sibling_Callback cb) const { qabstractlistmodel_sibling_callback = cb; }
	inline void setQAbstractListModel_DropMimeData_Callback(QAbstractListModel_DropMimeData_Callback cb) const { qabstractlistmodel_dropmimedata_callback = cb; }
	inline void setQAbstractListModel_Flags_Callback(QAbstractListModel_Flags_Callback cb) const { qabstractlistmodel_flags_callback = cb; }

// Base flag setters
	inline void setQAbstractListModel_Index_IsBase(bool value) const { qabstractlistmodel_index_isbase = value; }
	inline void setQAbstractListModel_Sibling_IsBase(bool value) const { qabstractlistmodel_sibling_isbase = value; }
	inline void setQAbstractListModel_DropMimeData_IsBase(bool value) const { qabstractlistmodel_dropmimedata_isbase = value; }
	inline void setQAbstractListModel_Flags_IsBase(bool value) const { qabstractlistmodel_flags_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (qabstractlistmodel_index_isbase) {
			qabstractlistmodel_index_isbase = false;
			return QAbstractListModel::index(row, column, parent);
		} else if (qabstractlistmodel_index_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&parent;
			QModelIndex* callback_ret = qabstractlistmodel_index_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QAbstractListModel::index(row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (qabstractlistmodel_sibling_isbase) {
			qabstractlistmodel_sibling_isbase = false;
			return QAbstractListModel::sibling(row, column, idx);
		} else if (qabstractlistmodel_sibling_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QModelIndex* cbval3 = (const QModelIndex*)&idx;
			QModelIndex* callback_ret = qabstractlistmodel_sibling_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QAbstractListModel::sibling(row, column, idx);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (qabstractlistmodel_dropmimedata_isbase) {
			qabstractlistmodel_dropmimedata_isbase = false;
			return QAbstractListModel::dropMimeData(data, action, row, column, parent);
		} else if (qabstractlistmodel_dropmimedata_callback != nullptr) {
			const QMimeData* cbval1 = data;
			int cbval2 = static_cast<int>(action);
			int cbval3 = row;
			int cbval4 = column;
			const QModelIndex* cbval5 = (const QModelIndex*)&parent;
			bool callback_ret = qabstractlistmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QAbstractListModel::dropMimeData(data, action, row, column, parent);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::ItemFlag> flags(const QModelIndex& index) const override {
		if (qabstractlistmodel_flags_isbase) {
			qabstractlistmodel_flags_isbase = false;
			return QAbstractListModel::flags(index);
		} else if (qabstractlistmodel_flags_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			int callback_ret = qabstractlistmodel_flags_callback(this, cbval1);
			return static_cast<QFlags<Qt::ItemFlag>>(callback_ret);
		} else {
			return QAbstractListModel::flags(index);
		}
	}
};

#endif


