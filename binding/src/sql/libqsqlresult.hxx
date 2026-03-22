#pragma once
#ifndef QSQLRESULT_H_C_LIBVIRTUAL
#define QSQLRESULT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSqlResult so that we can call protected methods
class VirtualQSqlResult : public QSqlResult {

public:
	// Virtual class boolean flag
	bool isVirtualQSqlResult= true;

	// Virtual class public types (including callbacks)
	using QSqlResult::BindingSyntax;
	using QSqlResult_Handle_Callback = QVariant* (*)();
	using QSqlResult_SetAt_Callback = void (*)(QSqlResult*, int);
	using QSqlResult_SetActive_Callback = void (*)(QSqlResult*, bool);
	using QSqlResult_SetLastError_Callback = void (*)(QSqlResult*, const QSqlError*);
	using QSqlResult_SetQuery_Callback = void (*)(QSqlResult*, libqt_string);
	using QSqlResult_SetSelect_Callback = void (*)(QSqlResult*, bool);
	using QSqlResult_SetForwardOnly_Callback = void (*)(QSqlResult*, bool);
	using QSqlResult_Exec_Callback = bool (*)();
	using QSqlResult_Prepare_Callback = bool (*)(QSqlResult*, libqt_string);
	using QSqlResult_SavePrepare_Callback = bool (*)(QSqlResult*, libqt_string);
	using QSqlResult_BindValue_Callback = void (*)(QSqlResult*, int, const QVariant*, int);
	using QSqlResult_BindValue2_Callback = void (*)(QSqlResult*, libqt_string, const QVariant*, int);
	using QSqlResult_Data_Callback = QVariant* (*)(QSqlResult*, int);
	using QSqlResult_IsNull_Callback = bool (*)(QSqlResult*, int);
	using QSqlResult_Reset_Callback = bool (*)(QSqlResult*, libqt_string);
	using QSqlResult_Fetch_Callback = bool (*)(QSqlResult*, int);
	using QSqlResult_FetchNext_Callback = bool (*)();
	using QSqlResult_FetchPrevious_Callback = bool (*)();
	using QSqlResult_FetchFirst_Callback = bool (*)();
	using QSqlResult_FetchLast_Callback = bool (*)();
	using QSqlResult_Size_Callback = int (*)();
	using QSqlResult_NumRowsAffected_Callback = int (*)();
	using QSqlResult_Record_Callback = QSqlRecord* (*)();
	using QSqlResult_LastInsertId_Callback = QVariant* (*)();
	using QSqlResult_VirtualHook_Callback = void (*)(QSqlResult*, int, void*);
	using QSqlResult_ExecBatch_Callback = bool (*)(QSqlResult*, bool);
	using QSqlResult_DetachFromResultSet_Callback = void (*)();
	using QSqlResult_SetNumericalPrecisionPolicy_Callback = void (*)(QSqlResult*, int);
	using QSqlResult_NextResult_Callback = bool (*)();
	using QSqlResult_At_Callback = int (*)();
	using QSqlResult_LastQuery_Callback = const char* (*)();
	using QSqlResult_LastError_Callback = QSqlError* (*)();
	using QSqlResult_IsValid_Callback = bool (*)();
	using QSqlResult_IsActive_Callback = bool (*)();
	using QSqlResult_IsSelect_Callback = bool (*)();
	using QSqlResult_IsForwardOnly_Callback = bool (*)();
	using QSqlResult_Driver_Callback = const QSqlDriver* (*)();
	using QSqlResult_AddBindValue_Callback = void (*)(QSqlResult*, const QVariant*, int);
	using QSqlResult_BoundValue_Callback = QVariant* (*)(const QSqlResult*, libqt_string);
	using QSqlResult_BoundValue2_Callback = QVariant* (*)(const QSqlResult*, int);
	using QSqlResult_BindValueType_Callback = int (*)(const QSqlResult*, libqt_string);
	using QSqlResult_BindValueType2_Callback = int (*)(const QSqlResult*, int);
	using QSqlResult_BoundValueCount_Callback = int (*)();
	using QSqlResult_BoundValues_Callback = libqt_list (*)();
	using QSqlResult_BoundValues2_Callback = libqt_list (*)();
	using QSqlResult_ExecutedQuery_Callback = const char* (*)();
	using QSqlResult_BoundValueNames_Callback = libqt_list (*)();
	using QSqlResult_BoundValueName_Callback = const char* (*)(const QSqlResult*, int);
	using QSqlResult_Clear_Callback = void (*)();
	using QSqlResult_HasOutValues_Callback = bool (*)();
	using QSqlResult_BindingSyntax_Callback = int (*)();
	using QSqlResult_NumericalPrecisionPolicy_Callback = int (*)();
	using QSqlResult_SetPositionalBindingEnabled_Callback = void (*)(QSqlResult*, bool);
	using QSqlResult_IsPositionalBindingEnabled_Callback = bool (*)();
	using QSqlResult_ResetBindCount_Callback = void (*)();
	using QSqlResult_BoundValues1_Callback = libqt_list (*)(QSqlResult*, Disambiguated_t*);
	using QSqlResult_BoundValues12_Callback = libqt_list (*)(const QSqlResult*, Disambiguated_t*);

protected:
	// Instance callback storage
	mutable QSqlResult_Handle_Callback qsqlresult_handle_callback = nullptr;
	mutable QSqlResult_SetAt_Callback qsqlresult_setat_callback = nullptr;
	mutable QSqlResult_SetActive_Callback qsqlresult_setactive_callback = nullptr;
	mutable QSqlResult_SetLastError_Callback qsqlresult_setlasterror_callback = nullptr;
	mutable QSqlResult_SetQuery_Callback qsqlresult_setquery_callback = nullptr;
	mutable QSqlResult_SetSelect_Callback qsqlresult_setselect_callback = nullptr;
	mutable QSqlResult_SetForwardOnly_Callback qsqlresult_setforwardonly_callback = nullptr;
	mutable QSqlResult_Exec_Callback qsqlresult_exec_callback = nullptr;
	mutable QSqlResult_Prepare_Callback qsqlresult_prepare_callback = nullptr;
	mutable QSqlResult_SavePrepare_Callback qsqlresult_saveprepare_callback = nullptr;
	mutable QSqlResult_BindValue_Callback qsqlresult_bindvalue_callback = nullptr;
	mutable QSqlResult_BindValue2_Callback qsqlresult_bindvalue2_callback = nullptr;
	mutable QSqlResult_Data_Callback qsqlresult_data_callback = nullptr;
	mutable QSqlResult_IsNull_Callback qsqlresult_isnull_callback = nullptr;
	mutable QSqlResult_Reset_Callback qsqlresult_reset_callback = nullptr;
	mutable QSqlResult_Fetch_Callback qsqlresult_fetch_callback = nullptr;
	mutable QSqlResult_FetchNext_Callback qsqlresult_fetchnext_callback = nullptr;
	mutable QSqlResult_FetchPrevious_Callback qsqlresult_fetchprevious_callback = nullptr;
	mutable QSqlResult_FetchFirst_Callback qsqlresult_fetchfirst_callback = nullptr;
	mutable QSqlResult_FetchLast_Callback qsqlresult_fetchlast_callback = nullptr;
	mutable QSqlResult_Size_Callback qsqlresult_size_callback = nullptr;
	mutable QSqlResult_NumRowsAffected_Callback qsqlresult_numrowsaffected_callback = nullptr;
	mutable QSqlResult_Record_Callback qsqlresult_record_callback = nullptr;
	mutable QSqlResult_LastInsertId_Callback qsqlresult_lastinsertid_callback = nullptr;
	mutable QSqlResult_VirtualHook_Callback qsqlresult_virtualhook_callback = nullptr;
	mutable QSqlResult_ExecBatch_Callback qsqlresult_execbatch_callback = nullptr;
	mutable QSqlResult_DetachFromResultSet_Callback qsqlresult_detachfromresultset_callback = nullptr;
	mutable QSqlResult_SetNumericalPrecisionPolicy_Callback qsqlresult_setnumericalprecisionpolicy_callback = nullptr;
	mutable QSqlResult_NextResult_Callback qsqlresult_nextresult_callback = nullptr;
	mutable QSqlResult_At_Callback qsqlresult_at_callback = nullptr;
	mutable QSqlResult_LastQuery_Callback qsqlresult_lastquery_callback = nullptr;
	mutable QSqlResult_LastError_Callback qsqlresult_lasterror_callback = nullptr;
	mutable QSqlResult_IsValid_Callback qsqlresult_isvalid_callback = nullptr;
	mutable QSqlResult_IsActive_Callback qsqlresult_isactive_callback = nullptr;
	mutable QSqlResult_IsSelect_Callback qsqlresult_isselect_callback = nullptr;
	mutable QSqlResult_IsForwardOnly_Callback qsqlresult_isforwardonly_callback = nullptr;
	mutable QSqlResult_Driver_Callback qsqlresult_driver_callback = nullptr;
	mutable QSqlResult_AddBindValue_Callback qsqlresult_addbindvalue_callback = nullptr;
	mutable QSqlResult_BoundValue_Callback qsqlresult_boundvalue_callback = nullptr;
	mutable QSqlResult_BoundValue2_Callback qsqlresult_boundvalue2_callback = nullptr;
	mutable QSqlResult_BindValueType_Callback qsqlresult_bindvaluetype_callback = nullptr;
	mutable QSqlResult_BindValueType2_Callback qsqlresult_bindvaluetype2_callback = nullptr;
	mutable QSqlResult_BoundValueCount_Callback qsqlresult_boundvaluecount_callback = nullptr;
	mutable QSqlResult_BoundValues_Callback qsqlresult_boundvalues_callback = nullptr;
	mutable QSqlResult_BoundValues2_Callback qsqlresult_boundvalues2_callback = nullptr;
	mutable QSqlResult_ExecutedQuery_Callback qsqlresult_executedquery_callback = nullptr;
	mutable QSqlResult_BoundValueNames_Callback qsqlresult_boundvaluenames_callback = nullptr;
	mutable QSqlResult_BoundValueName_Callback qsqlresult_boundvaluename_callback = nullptr;
	mutable QSqlResult_Clear_Callback qsqlresult_clear_callback = nullptr;
	mutable QSqlResult_HasOutValues_Callback qsqlresult_hasoutvalues_callback = nullptr;
	mutable QSqlResult_BindingSyntax_Callback qsqlresult_bindingsyntax_callback = nullptr;
	mutable QSqlResult_NumericalPrecisionPolicy_Callback qsqlresult_numericalprecisionpolicy_callback = nullptr;
	mutable QSqlResult_SetPositionalBindingEnabled_Callback qsqlresult_setpositionalbindingenabled_callback = nullptr;
	mutable QSqlResult_IsPositionalBindingEnabled_Callback qsqlresult_ispositionalbindingenabled_callback = nullptr;
	mutable QSqlResult_ResetBindCount_Callback qsqlresult_resetbindcount_callback = nullptr;
	mutable QSqlResult_BoundValues1_Callback qsqlresult_boundvalues1_callback = nullptr;
	mutable QSqlResult_BoundValues12_Callback qsqlresult_boundvalues12_callback = nullptr;

	// Instance base flags
    mutable bool qsqlresult_handle_isbase = false;
    mutable bool qsqlresult_setat_isbase = false;
    mutable bool qsqlresult_setactive_isbase = false;
    mutable bool qsqlresult_setlasterror_isbase = false;
    mutable bool qsqlresult_setquery_isbase = false;
    mutable bool qsqlresult_setselect_isbase = false;
    mutable bool qsqlresult_setforwardonly_isbase = false;
    mutable bool qsqlresult_exec_isbase = false;
    mutable bool qsqlresult_prepare_isbase = false;
    mutable bool qsqlresult_saveprepare_isbase = false;
    mutable bool qsqlresult_bindvalue_isbase = false;
    mutable bool qsqlresult_bindvalue2_isbase = false;
    mutable bool qsqlresult_data_isbase = false;
    mutable bool qsqlresult_isnull_isbase = false;
    mutable bool qsqlresult_reset_isbase = false;
    mutable bool qsqlresult_fetch_isbase = false;
    mutable bool qsqlresult_fetchnext_isbase = false;
    mutable bool qsqlresult_fetchprevious_isbase = false;
    mutable bool qsqlresult_fetchfirst_isbase = false;
    mutable bool qsqlresult_fetchlast_isbase = false;
    mutable bool qsqlresult_size_isbase = false;
    mutable bool qsqlresult_numrowsaffected_isbase = false;
    mutable bool qsqlresult_record_isbase = false;
    mutable bool qsqlresult_lastinsertid_isbase = false;
    mutable bool qsqlresult_virtualhook_isbase = false;
    mutable bool qsqlresult_execbatch_isbase = false;
    mutable bool qsqlresult_detachfromresultset_isbase = false;
    mutable bool qsqlresult_setnumericalprecisionpolicy_isbase = false;
    mutable bool qsqlresult_nextresult_isbase = false;
    mutable bool qsqlresult_at_isbase = false;
    mutable bool qsqlresult_lastquery_isbase = false;
    mutable bool qsqlresult_lasterror_isbase = false;
    mutable bool qsqlresult_isvalid_isbase = false;
    mutable bool qsqlresult_isactive_isbase = false;
    mutable bool qsqlresult_isselect_isbase = false;
    mutable bool qsqlresult_isforwardonly_isbase = false;
    mutable bool qsqlresult_driver_isbase = false;
    mutable bool qsqlresult_addbindvalue_isbase = false;
    mutable bool qsqlresult_boundvalue_isbase = false;
    mutable bool qsqlresult_boundvalue2_isbase = false;
    mutable bool qsqlresult_bindvaluetype_isbase = false;
    mutable bool qsqlresult_bindvaluetype2_isbase = false;
    mutable bool qsqlresult_boundvaluecount_isbase = false;
    mutable bool qsqlresult_boundvalues_isbase = false;
    mutable bool qsqlresult_boundvalues2_isbase = false;
    mutable bool qsqlresult_executedquery_isbase = false;
    mutable bool qsqlresult_boundvaluenames_isbase = false;
    mutable bool qsqlresult_boundvaluename_isbase = false;
    mutable bool qsqlresult_clear_isbase = false;
    mutable bool qsqlresult_hasoutvalues_isbase = false;
    mutable bool qsqlresult_bindingsyntax_isbase = false;
    mutable bool qsqlresult_numericalprecisionpolicy_isbase = false;
    mutable bool qsqlresult_setpositionalbindingenabled_isbase = false;
    mutable bool qsqlresult_ispositionalbindingenabled_isbase = false;
    mutable bool qsqlresult_resetbindcount_isbase = false;
    mutable bool qsqlresult_boundvalues1_isbase = false;
    mutable bool qsqlresult_boundvalues12_isbase = false;

public:

	~VirtualQSqlResult() {
		qsqlresult_handle_callback = nullptr;
		qsqlresult_setat_callback = nullptr;
		qsqlresult_setactive_callback = nullptr;
		qsqlresult_setlasterror_callback = nullptr;
		qsqlresult_setquery_callback = nullptr;
		qsqlresult_setselect_callback = nullptr;
		qsqlresult_setforwardonly_callback = nullptr;
		qsqlresult_exec_callback = nullptr;
		qsqlresult_prepare_callback = nullptr;
		qsqlresult_saveprepare_callback = nullptr;
		qsqlresult_bindvalue_callback = nullptr;
		qsqlresult_bindvalue2_callback = nullptr;
		qsqlresult_data_callback = nullptr;
		qsqlresult_isnull_callback = nullptr;
		qsqlresult_reset_callback = nullptr;
		qsqlresult_fetch_callback = nullptr;
		qsqlresult_fetchnext_callback = nullptr;
		qsqlresult_fetchprevious_callback = nullptr;
		qsqlresult_fetchfirst_callback = nullptr;
		qsqlresult_fetchlast_callback = nullptr;
		qsqlresult_size_callback = nullptr;
		qsqlresult_numrowsaffected_callback = nullptr;
		qsqlresult_record_callback = nullptr;
		qsqlresult_lastinsertid_callback = nullptr;
		qsqlresult_virtualhook_callback = nullptr;
		qsqlresult_execbatch_callback = nullptr;
		qsqlresult_detachfromresultset_callback = nullptr;
		qsqlresult_setnumericalprecisionpolicy_callback = nullptr;
		qsqlresult_nextresult_callback = nullptr;
		qsqlresult_at_callback = nullptr;
		qsqlresult_lastquery_callback = nullptr;
		qsqlresult_lasterror_callback = nullptr;
		qsqlresult_isvalid_callback = nullptr;
		qsqlresult_isactive_callback = nullptr;
		qsqlresult_isselect_callback = nullptr;
		qsqlresult_isforwardonly_callback = nullptr;
		qsqlresult_driver_callback = nullptr;
		qsqlresult_addbindvalue_callback = nullptr;
		qsqlresult_boundvalue_callback = nullptr;
		qsqlresult_boundvalue2_callback = nullptr;
		qsqlresult_bindvaluetype_callback = nullptr;
		qsqlresult_bindvaluetype2_callback = nullptr;
		qsqlresult_boundvaluecount_callback = nullptr;
		qsqlresult_boundvalues_callback = nullptr;
		qsqlresult_boundvalues2_callback = nullptr;
		qsqlresult_executedquery_callback = nullptr;
		qsqlresult_boundvaluenames_callback = nullptr;
		qsqlresult_boundvaluename_callback = nullptr;
		qsqlresult_clear_callback = nullptr;
		qsqlresult_hasoutvalues_callback = nullptr;
		qsqlresult_bindingsyntax_callback = nullptr;
		qsqlresult_numericalprecisionpolicy_callback = nullptr;
		qsqlresult_setpositionalbindingenabled_callback = nullptr;
		qsqlresult_ispositionalbindingenabled_callback = nullptr;
		qsqlresult_resetbindcount_callback = nullptr;
		qsqlresult_boundvalues1_callback = nullptr;
		qsqlresult_boundvalues12_callback = nullptr;
	}

// Callback setters
	inline void setQSqlResult_Handle_Callback(QSqlResult_Handle_Callback cb) const { qsqlresult_handle_callback = cb; }
	inline void setQSqlResult_SetAt_Callback(QSqlResult_SetAt_Callback cb) const { qsqlresult_setat_callback = cb; }
	inline void setQSqlResult_SetActive_Callback(QSqlResult_SetActive_Callback cb) const { qsqlresult_setactive_callback = cb; }
	inline void setQSqlResult_SetLastError_Callback(QSqlResult_SetLastError_Callback cb) const { qsqlresult_setlasterror_callback = cb; }
	inline void setQSqlResult_SetQuery_Callback(QSqlResult_SetQuery_Callback cb) const { qsqlresult_setquery_callback = cb; }
	inline void setQSqlResult_SetSelect_Callback(QSqlResult_SetSelect_Callback cb) const { qsqlresult_setselect_callback = cb; }
	inline void setQSqlResult_SetForwardOnly_Callback(QSqlResult_SetForwardOnly_Callback cb) const { qsqlresult_setforwardonly_callback = cb; }
	inline void setQSqlResult_Exec_Callback(QSqlResult_Exec_Callback cb) const { qsqlresult_exec_callback = cb; }
	inline void setQSqlResult_Prepare_Callback(QSqlResult_Prepare_Callback cb) const { qsqlresult_prepare_callback = cb; }
	inline void setQSqlResult_SavePrepare_Callback(QSqlResult_SavePrepare_Callback cb) const { qsqlresult_saveprepare_callback = cb; }
	inline void setQSqlResult_BindValue_Callback(QSqlResult_BindValue_Callback cb) const { qsqlresult_bindvalue_callback = cb; }
	inline void setQSqlResult_BindValue2_Callback(QSqlResult_BindValue2_Callback cb) const { qsqlresult_bindvalue2_callback = cb; }
	inline void setQSqlResult_Data_Callback(QSqlResult_Data_Callback cb) const { qsqlresult_data_callback = cb; }
	inline void setQSqlResult_IsNull_Callback(QSqlResult_IsNull_Callback cb) const { qsqlresult_isnull_callback = cb; }
	inline void setQSqlResult_Reset_Callback(QSqlResult_Reset_Callback cb) const { qsqlresult_reset_callback = cb; }
	inline void setQSqlResult_Fetch_Callback(QSqlResult_Fetch_Callback cb) const { qsqlresult_fetch_callback = cb; }
	inline void setQSqlResult_FetchNext_Callback(QSqlResult_FetchNext_Callback cb) const { qsqlresult_fetchnext_callback = cb; }
	inline void setQSqlResult_FetchPrevious_Callback(QSqlResult_FetchPrevious_Callback cb) const { qsqlresult_fetchprevious_callback = cb; }
	inline void setQSqlResult_FetchFirst_Callback(QSqlResult_FetchFirst_Callback cb) const { qsqlresult_fetchfirst_callback = cb; }
	inline void setQSqlResult_FetchLast_Callback(QSqlResult_FetchLast_Callback cb) const { qsqlresult_fetchlast_callback = cb; }
	inline void setQSqlResult_Size_Callback(QSqlResult_Size_Callback cb) const { qsqlresult_size_callback = cb; }
	inline void setQSqlResult_NumRowsAffected_Callback(QSqlResult_NumRowsAffected_Callback cb) const { qsqlresult_numrowsaffected_callback = cb; }
	inline void setQSqlResult_Record_Callback(QSqlResult_Record_Callback cb) const { qsqlresult_record_callback = cb; }
	inline void setQSqlResult_LastInsertId_Callback(QSqlResult_LastInsertId_Callback cb) const { qsqlresult_lastinsertid_callback = cb; }
	inline void setQSqlResult_VirtualHook_Callback(QSqlResult_VirtualHook_Callback cb) const { qsqlresult_virtualhook_callback = cb; }
	inline void setQSqlResult_ExecBatch_Callback(QSqlResult_ExecBatch_Callback cb) const { qsqlresult_execbatch_callback = cb; }
	inline void setQSqlResult_DetachFromResultSet_Callback(QSqlResult_DetachFromResultSet_Callback cb) const { qsqlresult_detachfromresultset_callback = cb; }
	inline void setQSqlResult_SetNumericalPrecisionPolicy_Callback(QSqlResult_SetNumericalPrecisionPolicy_Callback cb) const { qsqlresult_setnumericalprecisionpolicy_callback = cb; }
	inline void setQSqlResult_NextResult_Callback(QSqlResult_NextResult_Callback cb) const { qsqlresult_nextresult_callback = cb; }
	inline void setQSqlResult_At_Callback(QSqlResult_At_Callback cb) const { qsqlresult_at_callback = cb; }
	inline void setQSqlResult_LastQuery_Callback(QSqlResult_LastQuery_Callback cb) const { qsqlresult_lastquery_callback = cb; }
	inline void setQSqlResult_LastError_Callback(QSqlResult_LastError_Callback cb) const { qsqlresult_lasterror_callback = cb; }
	inline void setQSqlResult_IsValid_Callback(QSqlResult_IsValid_Callback cb) const { qsqlresult_isvalid_callback = cb; }
	inline void setQSqlResult_IsActive_Callback(QSqlResult_IsActive_Callback cb) const { qsqlresult_isactive_callback = cb; }
	inline void setQSqlResult_IsSelect_Callback(QSqlResult_IsSelect_Callback cb) const { qsqlresult_isselect_callback = cb; }
	inline void setQSqlResult_IsForwardOnly_Callback(QSqlResult_IsForwardOnly_Callback cb) const { qsqlresult_isforwardonly_callback = cb; }
	inline void setQSqlResult_Driver_Callback(QSqlResult_Driver_Callback cb) const { qsqlresult_driver_callback = cb; }
	inline void setQSqlResult_AddBindValue_Callback(QSqlResult_AddBindValue_Callback cb) const { qsqlresult_addbindvalue_callback = cb; }
	inline void setQSqlResult_BoundValue_Callback(QSqlResult_BoundValue_Callback cb) const { qsqlresult_boundvalue_callback = cb; }
	inline void setQSqlResult_BoundValue2_Callback(QSqlResult_BoundValue2_Callback cb) const { qsqlresult_boundvalue2_callback = cb; }
	inline void setQSqlResult_BindValueType_Callback(QSqlResult_BindValueType_Callback cb) const { qsqlresult_bindvaluetype_callback = cb; }
	inline void setQSqlResult_BindValueType2_Callback(QSqlResult_BindValueType2_Callback cb) const { qsqlresult_bindvaluetype2_callback = cb; }
	inline void setQSqlResult_BoundValueCount_Callback(QSqlResult_BoundValueCount_Callback cb) const { qsqlresult_boundvaluecount_callback = cb; }
	inline void setQSqlResult_BoundValues_Callback(QSqlResult_BoundValues_Callback cb) const { qsqlresult_boundvalues_callback = cb; }
	inline void setQSqlResult_BoundValues2_Callback(QSqlResult_BoundValues2_Callback cb) const { qsqlresult_boundvalues2_callback = cb; }
	inline void setQSqlResult_ExecutedQuery_Callback(QSqlResult_ExecutedQuery_Callback cb) const { qsqlresult_executedquery_callback = cb; }
	inline void setQSqlResult_BoundValueNames_Callback(QSqlResult_BoundValueNames_Callback cb) const { qsqlresult_boundvaluenames_callback = cb; }
	inline void setQSqlResult_BoundValueName_Callback(QSqlResult_BoundValueName_Callback cb) const { qsqlresult_boundvaluename_callback = cb; }
	inline void setQSqlResult_Clear_Callback(QSqlResult_Clear_Callback cb) const { qsqlresult_clear_callback = cb; }
	inline void setQSqlResult_HasOutValues_Callback(QSqlResult_HasOutValues_Callback cb) const { qsqlresult_hasoutvalues_callback = cb; }
	inline void setQSqlResult_BindingSyntax_Callback(QSqlResult_BindingSyntax_Callback cb) const { qsqlresult_bindingsyntax_callback = cb; }
	inline void setQSqlResult_NumericalPrecisionPolicy_Callback(QSqlResult_NumericalPrecisionPolicy_Callback cb) const { qsqlresult_numericalprecisionpolicy_callback = cb; }
	inline void setQSqlResult_SetPositionalBindingEnabled_Callback(QSqlResult_SetPositionalBindingEnabled_Callback cb) const { qsqlresult_setpositionalbindingenabled_callback = cb; }
	inline void setQSqlResult_IsPositionalBindingEnabled_Callback(QSqlResult_IsPositionalBindingEnabled_Callback cb) const { qsqlresult_ispositionalbindingenabled_callback = cb; }
	inline void setQSqlResult_ResetBindCount_Callback(QSqlResult_ResetBindCount_Callback cb) const { qsqlresult_resetbindcount_callback = cb; }
	inline void setQSqlResult_BoundValues1_Callback(QSqlResult_BoundValues1_Callback cb) const { qsqlresult_boundvalues1_callback = cb; }
	inline void setQSqlResult_BoundValues12_Callback(QSqlResult_BoundValues12_Callback cb) const { qsqlresult_boundvalues12_callback = cb; }

// Base flag setters
	inline void setQSqlResult_Handle_IsBase(bool value) const { qsqlresult_handle_isbase = value; }
	inline void setQSqlResult_SetAt_IsBase(bool value) const { qsqlresult_setat_isbase = value; }
	inline void setQSqlResult_SetActive_IsBase(bool value) const { qsqlresult_setactive_isbase = value; }
	inline void setQSqlResult_SetLastError_IsBase(bool value) const { qsqlresult_setlasterror_isbase = value; }
	inline void setQSqlResult_SetQuery_IsBase(bool value) const { qsqlresult_setquery_isbase = value; }
	inline void setQSqlResult_SetSelect_IsBase(bool value) const { qsqlresult_setselect_isbase = value; }
	inline void setQSqlResult_SetForwardOnly_IsBase(bool value) const { qsqlresult_setforwardonly_isbase = value; }
	inline void setQSqlResult_Exec_IsBase(bool value) const { qsqlresult_exec_isbase = value; }
	inline void setQSqlResult_Prepare_IsBase(bool value) const { qsqlresult_prepare_isbase = value; }
	inline void setQSqlResult_SavePrepare_IsBase(bool value) const { qsqlresult_saveprepare_isbase = value; }
	inline void setQSqlResult_BindValue_IsBase(bool value) const { qsqlresult_bindvalue_isbase = value; }
	inline void setQSqlResult_BindValue2_IsBase(bool value) const { qsqlresult_bindvalue2_isbase = value; }
	inline void setQSqlResult_Data_IsBase(bool value) const { qsqlresult_data_isbase = value; }
	inline void setQSqlResult_IsNull_IsBase(bool value) const { qsqlresult_isnull_isbase = value; }
	inline void setQSqlResult_Reset_IsBase(bool value) const { qsqlresult_reset_isbase = value; }
	inline void setQSqlResult_Fetch_IsBase(bool value) const { qsqlresult_fetch_isbase = value; }
	inline void setQSqlResult_FetchNext_IsBase(bool value) const { qsqlresult_fetchnext_isbase = value; }
	inline void setQSqlResult_FetchPrevious_IsBase(bool value) const { qsqlresult_fetchprevious_isbase = value; }
	inline void setQSqlResult_FetchFirst_IsBase(bool value) const { qsqlresult_fetchfirst_isbase = value; }
	inline void setQSqlResult_FetchLast_IsBase(bool value) const { qsqlresult_fetchlast_isbase = value; }
	inline void setQSqlResult_Size_IsBase(bool value) const { qsqlresult_size_isbase = value; }
	inline void setQSqlResult_NumRowsAffected_IsBase(bool value) const { qsqlresult_numrowsaffected_isbase = value; }
	inline void setQSqlResult_Record_IsBase(bool value) const { qsqlresult_record_isbase = value; }
	inline void setQSqlResult_LastInsertId_IsBase(bool value) const { qsqlresult_lastinsertid_isbase = value; }
	inline void setQSqlResult_VirtualHook_IsBase(bool value) const { qsqlresult_virtualhook_isbase = value; }
	inline void setQSqlResult_ExecBatch_IsBase(bool value) const { qsqlresult_execbatch_isbase = value; }
	inline void setQSqlResult_DetachFromResultSet_IsBase(bool value) const { qsqlresult_detachfromresultset_isbase = value; }
	inline void setQSqlResult_SetNumericalPrecisionPolicy_IsBase(bool value) const { qsqlresult_setnumericalprecisionpolicy_isbase = value; }
	inline void setQSqlResult_NextResult_IsBase(bool value) const { qsqlresult_nextresult_isbase = value; }
	inline void setQSqlResult_At_IsBase(bool value) const { qsqlresult_at_isbase = value; }
	inline void setQSqlResult_LastQuery_IsBase(bool value) const { qsqlresult_lastquery_isbase = value; }
	inline void setQSqlResult_LastError_IsBase(bool value) const { qsqlresult_lasterror_isbase = value; }
	inline void setQSqlResult_IsValid_IsBase(bool value) const { qsqlresult_isvalid_isbase = value; }
	inline void setQSqlResult_IsActive_IsBase(bool value) const { qsqlresult_isactive_isbase = value; }
	inline void setQSqlResult_IsSelect_IsBase(bool value) const { qsqlresult_isselect_isbase = value; }
	inline void setQSqlResult_IsForwardOnly_IsBase(bool value) const { qsqlresult_isforwardonly_isbase = value; }
	inline void setQSqlResult_Driver_IsBase(bool value) const { qsqlresult_driver_isbase = value; }
	inline void setQSqlResult_AddBindValue_IsBase(bool value) const { qsqlresult_addbindvalue_isbase = value; }
	inline void setQSqlResult_BoundValue_IsBase(bool value) const { qsqlresult_boundvalue_isbase = value; }
	inline void setQSqlResult_BoundValue2_IsBase(bool value) const { qsqlresult_boundvalue2_isbase = value; }
	inline void setQSqlResult_BindValueType_IsBase(bool value) const { qsqlresult_bindvaluetype_isbase = value; }
	inline void setQSqlResult_BindValueType2_IsBase(bool value) const { qsqlresult_bindvaluetype2_isbase = value; }
	inline void setQSqlResult_BoundValueCount_IsBase(bool value) const { qsqlresult_boundvaluecount_isbase = value; }
	inline void setQSqlResult_BoundValues_IsBase(bool value) const { qsqlresult_boundvalues_isbase = value; }
	inline void setQSqlResult_BoundValues2_IsBase(bool value) const { qsqlresult_boundvalues2_isbase = value; }
	inline void setQSqlResult_ExecutedQuery_IsBase(bool value) const { qsqlresult_executedquery_isbase = value; }
	inline void setQSqlResult_BoundValueNames_IsBase(bool value) const { qsqlresult_boundvaluenames_isbase = value; }
	inline void setQSqlResult_BoundValueName_IsBase(bool value) const { qsqlresult_boundvaluename_isbase = value; }
	inline void setQSqlResult_Clear_IsBase(bool value) const { qsqlresult_clear_isbase = value; }
	inline void setQSqlResult_HasOutValues_IsBase(bool value) const { qsqlresult_hasoutvalues_isbase = value; }
	inline void setQSqlResult_BindingSyntax_IsBase(bool value) const { qsqlresult_bindingsyntax_isbase = value; }
	inline void setQSqlResult_NumericalPrecisionPolicy_IsBase(bool value) const { qsqlresult_numericalprecisionpolicy_isbase = value; }
	inline void setQSqlResult_SetPositionalBindingEnabled_IsBase(bool value) const { qsqlresult_setpositionalbindingenabled_isbase = value; }
	inline void setQSqlResult_IsPositionalBindingEnabled_IsBase(bool value) const { qsqlresult_ispositionalbindingenabled_isbase = value; }
	inline void setQSqlResult_ResetBindCount_IsBase(bool value) const { qsqlresult_resetbindcount_isbase = value; }
	inline void setQSqlResult_BoundValues1_IsBase(bool value) const { qsqlresult_boundvalues1_isbase = value; }
	inline void setQSqlResult_BoundValues12_IsBase(bool value) const { qsqlresult_boundvalues12_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QVariant handle() const override {
		if (qsqlresult_handle_isbase) {
			qsqlresult_handle_isbase = false;
			return QSqlResult::handle();
		} else if (qsqlresult_handle_callback != nullptr) {
			QVariant* callback_ret = qsqlresult_handle_callback();
			return *callback_ret;
		} else {
			return QSqlResult::handle();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setAt(int at) override {
		if (qsqlresult_setat_isbase) {
			qsqlresult_setat_isbase = false;
			QSqlResult::setAt(at);
		} else if (qsqlresult_setat_callback != nullptr) {
			int cbval1 = at;
			qsqlresult_setat_callback(this, cbval1);
		} else {
			QSqlResult::setAt(at);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setActive(bool a) override {
		if (qsqlresult_setactive_isbase) {
			qsqlresult_setactive_isbase = false;
			QSqlResult::setActive(a);
		} else if (qsqlresult_setactive_callback != nullptr) {
			bool cbval1 = a;
			qsqlresult_setactive_callback(this, cbval1);
		} else {
			QSqlResult::setActive(a);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setLastError(const QSqlError& e) override {
		if (qsqlresult_setlasterror_isbase) {
			qsqlresult_setlasterror_isbase = false;
			QSqlResult::setLastError(e);
		} else if (qsqlresult_setlasterror_callback != nullptr) {
			const QSqlError* cbval1 = (const QSqlError*)&e;
			qsqlresult_setlasterror_callback(this, cbval1);
		} else {
			QSqlResult::setLastError(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setQuery(const QString& query) override {
		if (qsqlresult_setquery_isbase) {
			qsqlresult_setquery_isbase = false;
			QSqlResult::setQuery(query);
		} else if (qsqlresult_setquery_callback != nullptr) {
			QByteArray query_qb = query.toUtf8();
			libqt_string cbval1;
			cbval1.len = query_qb.length();
			cbval1.data = static_cast<const char*>(query_qb.constData());
			qsqlresult_setquery_callback(this, cbval1);
		} else {
			QSqlResult::setQuery(query);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSelect(bool s) override {
		if (qsqlresult_setselect_isbase) {
			qsqlresult_setselect_isbase = false;
			QSqlResult::setSelect(s);
		} else if (qsqlresult_setselect_callback != nullptr) {
			bool cbval1 = s;
			qsqlresult_setselect_callback(this, cbval1);
		} else {
			QSqlResult::setSelect(s);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setForwardOnly(bool forward) override {
		if (qsqlresult_setforwardonly_isbase) {
			qsqlresult_setforwardonly_isbase = false;
			QSqlResult::setForwardOnly(forward);
		} else if (qsqlresult_setforwardonly_callback != nullptr) {
			bool cbval1 = forward;
			qsqlresult_setforwardonly_callback(this, cbval1);
		} else {
			QSqlResult::setForwardOnly(forward);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool exec() override {
		if (qsqlresult_exec_isbase) {
			qsqlresult_exec_isbase = false;
			return QSqlResult::exec();
		} else if (qsqlresult_exec_callback != nullptr) {
			bool callback_ret = qsqlresult_exec_callback();
			return callback_ret;
		} else {
			return QSqlResult::exec();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool prepare(const QString& query) override {
		if (qsqlresult_prepare_isbase) {
			qsqlresult_prepare_isbase = false;
			return QSqlResult::prepare(query);
		} else if (qsqlresult_prepare_callback != nullptr) {
			QByteArray query_qb = query.toUtf8();
			libqt_string cbval1;
			cbval1.len = query_qb.length();
			cbval1.data = static_cast<const char*>(query_qb.constData());
			bool callback_ret = qsqlresult_prepare_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlResult::prepare(query);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool savePrepare(const QString& sqlquery) override {
		if (qsqlresult_saveprepare_isbase) {
			qsqlresult_saveprepare_isbase = false;
			return QSqlResult::savePrepare(sqlquery);
		} else if (qsqlresult_saveprepare_callback != nullptr) {
			QByteArray sqlquery_qb = sqlquery.toUtf8();
			libqt_string cbval1;
			cbval1.len = sqlquery_qb.length();
			cbval1.data = static_cast<const char*>(sqlquery_qb.constData());
			bool callback_ret = qsqlresult_saveprepare_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlResult::savePrepare(sqlquery);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void bindValue(int pos, const QVariant& val, QSql::ParamType typeVal) override {
		if (qsqlresult_bindvalue_isbase) {
			qsqlresult_bindvalue_isbase = false;
			QSqlResult::bindValue(pos, val, typeVal);
		} else if (qsqlresult_bindvalue_callback != nullptr) {
			int cbval1 = pos;
			const QVariant* cbval2 = (const QVariant*)&val;
			int cbval3 = static_cast<int>(typeVal);
			qsqlresult_bindvalue_callback(this, cbval1, cbval2, cbval3);
		} else {
			QSqlResult::bindValue(pos, val, typeVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void bindValue(const QString& placeholder, const QVariant& val, QSql::ParamType typeVal) override {
		if (qsqlresult_bindvalue2_isbase) {
			qsqlresult_bindvalue2_isbase = false;
			QSqlResult::bindValue(placeholder, val, typeVal);
		} else if (qsqlresult_bindvalue2_callback != nullptr) {
			QByteArray placeholder_qb = placeholder.toUtf8();
			libqt_string cbval1;
			cbval1.len = placeholder_qb.length();
			cbval1.data = static_cast<const char*>(placeholder_qb.constData());
			const QVariant* cbval2 = (const QVariant*)&val;
			int cbval3 = static_cast<int>(typeVal);
			qsqlresult_bindvalue2_callback(this, cbval1, cbval2, cbval3);
		} else {
			QSqlResult::bindValue(placeholder, val, typeVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant data(int i) override {
		if (qsqlresult_data_callback != nullptr) {
			int cbval1 = i;
			QVariant* callback_ret = qsqlresult_data_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isNull(int i) override {
		if (qsqlresult_isnull_callback != nullptr) {
			int cbval1 = i;
			bool callback_ret = qsqlresult_isnull_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool reset(const QString& sqlquery) override {
		if (qsqlresult_reset_callback != nullptr) {
			QByteArray sqlquery_qb = sqlquery.toUtf8();
			libqt_string cbval1;
			cbval1.len = sqlquery_qb.length();
			cbval1.data = static_cast<const char*>(sqlquery_qb.constData());
			bool callback_ret = qsqlresult_reset_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool fetch(int i) override {
		if (qsqlresult_fetch_callback != nullptr) {
			int cbval1 = i;
			bool callback_ret = qsqlresult_fetch_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool fetchNext() override {
		if (qsqlresult_fetchnext_isbase) {
			qsqlresult_fetchnext_isbase = false;
			return QSqlResult::fetchNext();
		} else if (qsqlresult_fetchnext_callback != nullptr) {
			bool callback_ret = qsqlresult_fetchnext_callback();
			return callback_ret;
		} else {
			return QSqlResult::fetchNext();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool fetchPrevious() override {
		if (qsqlresult_fetchprevious_isbase) {
			qsqlresult_fetchprevious_isbase = false;
			return QSqlResult::fetchPrevious();
		} else if (qsqlresult_fetchprevious_callback != nullptr) {
			bool callback_ret = qsqlresult_fetchprevious_callback();
			return callback_ret;
		} else {
			return QSqlResult::fetchPrevious();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool fetchFirst() override {
		if (qsqlresult_fetchfirst_callback != nullptr) {
			bool callback_ret = qsqlresult_fetchfirst_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool fetchLast() override {
		if (qsqlresult_fetchlast_callback != nullptr) {
			bool callback_ret = qsqlresult_fetchlast_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int size() override {
		if (qsqlresult_size_callback != nullptr) {
			int callback_ret = qsqlresult_size_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int numRowsAffected() override {
		if (qsqlresult_numrowsaffected_callback != nullptr) {
			int callback_ret = qsqlresult_numrowsaffected_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSqlRecord record() const override {
		if (qsqlresult_record_isbase) {
			qsqlresult_record_isbase = false;
			return QSqlResult::record();
		} else if (qsqlresult_record_callback != nullptr) {
			QSqlRecord* callback_ret = qsqlresult_record_callback();
			return *callback_ret;
		} else {
			return QSqlResult::record();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant lastInsertId() const override {
		if (qsqlresult_lastinsertid_isbase) {
			qsqlresult_lastinsertid_isbase = false;
			return QSqlResult::lastInsertId();
		} else if (qsqlresult_lastinsertid_callback != nullptr) {
			QVariant* callback_ret = qsqlresult_lastinsertid_callback();
			return *callback_ret;
		} else {
			return QSqlResult::lastInsertId();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void virtual_hook(int id, void* data) override {
		if (qsqlresult_virtualhook_isbase) {
			qsqlresult_virtualhook_isbase = false;
			QSqlResult::virtual_hook(id, data);
		} else if (qsqlresult_virtualhook_callback != nullptr) {
			int cbval1 = id;
			void* cbval2 = data;
			qsqlresult_virtualhook_callback(this, cbval1, cbval2);
		} else {
			QSqlResult::virtual_hook(id, data);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool execBatch(bool arrayBind) override {
		if (qsqlresult_execbatch_isbase) {
			qsqlresult_execbatch_isbase = false;
			return QSqlResult::execBatch(arrayBind);
		} else if (qsqlresult_execbatch_callback != nullptr) {
			bool cbval1 = arrayBind;
			bool callback_ret = qsqlresult_execbatch_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSqlResult::execBatch(arrayBind);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void detachFromResultSet() override {
		if (qsqlresult_detachfromresultset_isbase) {
			qsqlresult_detachfromresultset_isbase = false;
			QSqlResult::detachFromResultSet();
		} else if (qsqlresult_detachfromresultset_callback != nullptr) {
			qsqlresult_detachfromresultset_callback();
		} else {
			QSqlResult::detachFromResultSet();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy policy) override {
		if (qsqlresult_setnumericalprecisionpolicy_isbase) {
			qsqlresult_setnumericalprecisionpolicy_isbase = false;
			QSqlResult::setNumericalPrecisionPolicy(policy);
		} else if (qsqlresult_setnumericalprecisionpolicy_callback != nullptr) {
			int cbval1 = static_cast<int>(policy);
			qsqlresult_setnumericalprecisionpolicy_callback(this, cbval1);
		} else {
			QSqlResult::setNumericalPrecisionPolicy(policy);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool nextResult() override {
		if (qsqlresult_nextresult_isbase) {
			qsqlresult_nextresult_isbase = false;
			return QSqlResult::nextResult();
		} else if (qsqlresult_nextresult_callback != nullptr) {
			bool callback_ret = qsqlresult_nextresult_callback();
			return callback_ret;
		} else {
			return QSqlResult::nextResult();
		}
	}

	// Virtual method for C ABI access and custom callback
	int at() const {
		if (qsqlresult_at_isbase) {
			qsqlresult_at_isbase = false;
			return QSqlResult::at();
		} else if (qsqlresult_at_callback != nullptr) {
			int callback_ret = qsqlresult_at_callback();
			return callback_ret;
		} else {
			return QSqlResult::at();
		}
	}

	// Virtual method for C ABI access and custom callback
	QString lastQuery() const {
		if (qsqlresult_lastquery_isbase) {
			qsqlresult_lastquery_isbase = false;
			return QSqlResult::lastQuery();
		} else if (qsqlresult_lastquery_callback != nullptr) {
			const char* callback_ret = qsqlresult_lastquery_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSqlResult::lastQuery();
		}
	}

	// Virtual method for C ABI access and custom callback
	QSqlError lastError() const {
		if (qsqlresult_lasterror_isbase) {
			qsqlresult_lasterror_isbase = false;
			return QSqlResult::lastError();
		} else if (qsqlresult_lasterror_callback != nullptr) {
			QSqlError* callback_ret = qsqlresult_lasterror_callback();
			return *callback_ret;
		} else {
			return QSqlResult::lastError();
		}
	}

	// Virtual method for C ABI access and custom callback
	bool isValid() const {
		if (qsqlresult_isvalid_isbase) {
			qsqlresult_isvalid_isbase = false;
			return QSqlResult::isValid();
		} else if (qsqlresult_isvalid_callback != nullptr) {
			bool callback_ret = qsqlresult_isvalid_callback();
			return callback_ret;
		} else {
			return QSqlResult::isValid();
		}
	}

	// Virtual method for C ABI access and custom callback
	bool isActive() const {
		if (qsqlresult_isactive_isbase) {
			qsqlresult_isactive_isbase = false;
			return QSqlResult::isActive();
		} else if (qsqlresult_isactive_callback != nullptr) {
			bool callback_ret = qsqlresult_isactive_callback();
			return callback_ret;
		} else {
			return QSqlResult::isActive();
		}
	}

	// Virtual method for C ABI access and custom callback
	bool isSelect() const {
		if (qsqlresult_isselect_isbase) {
			qsqlresult_isselect_isbase = false;
			return QSqlResult::isSelect();
		} else if (qsqlresult_isselect_callback != nullptr) {
			bool callback_ret = qsqlresult_isselect_callback();
			return callback_ret;
		} else {
			return QSqlResult::isSelect();
		}
	}

	// Virtual method for C ABI access and custom callback
	bool isForwardOnly() const {
		if (qsqlresult_isforwardonly_isbase) {
			qsqlresult_isforwardonly_isbase = false;
			return QSqlResult::isForwardOnly();
		} else if (qsqlresult_isforwardonly_callback != nullptr) {
			bool callback_ret = qsqlresult_isforwardonly_callback();
			return callback_ret;
		} else {
			return QSqlResult::isForwardOnly();
		}
	}

	// Virtual method for C ABI access and custom callback
	const QSqlDriver* driver() const {
		if (qsqlresult_driver_isbase) {
			qsqlresult_driver_isbase = false;
			return QSqlResult::driver();
		} else if (qsqlresult_driver_callback != nullptr) {
			const QSqlDriver* callback_ret = qsqlresult_driver_callback();
			return callback_ret;
		} else {
			return QSqlResult::driver();
		}
	}

	// Virtual method for C ABI access and custom callback
	void addBindValue(const QVariant& val, QSql::ParamType typeVal) {
		if (qsqlresult_addbindvalue_isbase) {
			qsqlresult_addbindvalue_isbase = false;
			QSqlResult::addBindValue(val, typeVal);
		} else if (qsqlresult_addbindvalue_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&val;
			int cbval2 = static_cast<int>(typeVal);
			qsqlresult_addbindvalue_callback(this, cbval1, cbval2);
		} else {
			QSqlResult::addBindValue(val, typeVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	QVariant boundValue(const QString& placeholder) const {
		if (qsqlresult_boundvalue_isbase) {
			qsqlresult_boundvalue_isbase = false;
			return QSqlResult::boundValue(placeholder);
		} else if (qsqlresult_boundvalue_callback != nullptr) {
			QByteArray placeholder_qb = placeholder.toUtf8();
			libqt_string cbval1;
			cbval1.len = placeholder_qb.length();
			cbval1.data = static_cast<const char*>(placeholder_qb.constData());
			QVariant* callback_ret = qsqlresult_boundvalue_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSqlResult::boundValue(placeholder);
		}
	}

	// Virtual method for C ABI access and custom callback
	QVariant boundValue(int pos) const {
		if (qsqlresult_boundvalue2_isbase) {
			qsqlresult_boundvalue2_isbase = false;
			return QSqlResult::boundValue(pos);
		} else if (qsqlresult_boundvalue2_callback != nullptr) {
			int cbval1 = pos;
			QVariant* callback_ret = qsqlresult_boundvalue2_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSqlResult::boundValue(pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	QFlags<QSql::ParamTypeFlag> bindValueType(const QString& placeholder) const {
		if (qsqlresult_bindvaluetype_isbase) {
			qsqlresult_bindvaluetype_isbase = false;
			return QSqlResult::bindValueType(placeholder);
		} else if (qsqlresult_bindvaluetype_callback != nullptr) {
			QByteArray placeholder_qb = placeholder.toUtf8();
			libqt_string cbval1;
			cbval1.len = placeholder_qb.length();
			cbval1.data = static_cast<const char*>(placeholder_qb.constData());
			int callback_ret = qsqlresult_bindvaluetype_callback(this, cbval1);
			return static_cast<QFlags<QSql::ParamTypeFlag>>(callback_ret);
		} else {
			return QSqlResult::bindValueType(placeholder);
		}
	}

	// Virtual method for C ABI access and custom callback
	QFlags<QSql::ParamTypeFlag> bindValueType(int pos) const {
		if (qsqlresult_bindvaluetype2_isbase) {
			qsqlresult_bindvaluetype2_isbase = false;
			return QSqlResult::bindValueType(pos);
		} else if (qsqlresult_bindvaluetype2_callback != nullptr) {
			int cbval1 = pos;
			int callback_ret = qsqlresult_bindvaluetype2_callback(this, cbval1);
			return static_cast<QFlags<QSql::ParamTypeFlag>>(callback_ret);
		} else {
			return QSqlResult::bindValueType(pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	int boundValueCount() const {
		if (qsqlresult_boundvaluecount_isbase) {
			qsqlresult_boundvaluecount_isbase = false;
			return QSqlResult::boundValueCount();
		} else if (qsqlresult_boundvaluecount_callback != nullptr) {
			int callback_ret = qsqlresult_boundvaluecount_callback();
			return callback_ret;
		} else {
			return QSqlResult::boundValueCount();
		}
	}

	// Virtual method for C ABI access and custom callback
	QList<QVariant>& boundValues() {
		if (qsqlresult_boundvalues_isbase) {
			qsqlresult_boundvalues_isbase = false;
			return QSqlResult::boundValues();
		} else if (qsqlresult_boundvalues_callback != nullptr) {
			libqt_list callback_ret = qsqlresult_boundvalues_callback();
			return QList<QVariant>();
		} else {
			return QSqlResult::boundValues();
		}
	}

	// Virtual method for C ABI access and custom callback
	QList<QVariant> boundValues() const {
		if (qsqlresult_boundvalues2_isbase) {
			qsqlresult_boundvalues2_isbase = false;
			return QSqlResult::boundValues();
		} else if (qsqlresult_boundvalues2_callback != nullptr) {
			libqt_list callback_ret = qsqlresult_boundvalues2_callback();
			return QList<QVariant>();
		} else {
			return QSqlResult::boundValues();
		}
	}

	// Virtual method for C ABI access and custom callback
	QString executedQuery() const {
		if (qsqlresult_executedquery_isbase) {
			qsqlresult_executedquery_isbase = false;
			return QSqlResult::executedQuery();
		} else if (qsqlresult_executedquery_callback != nullptr) {
			const char* callback_ret = qsqlresult_executedquery_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSqlResult::executedQuery();
		}
	}

	// Virtual method for C ABI access and custom callback
	QList<QString> boundValueNames() const {
		if (qsqlresult_boundvaluenames_isbase) {
			qsqlresult_boundvaluenames_isbase = false;
			return QSqlResult::boundValueNames();
		} else if (qsqlresult_boundvaluenames_callback != nullptr) {
			libqt_list callback_ret = qsqlresult_boundvaluenames_callback();
			return QList<QString>();
		} else {
			return QSqlResult::boundValueNames();
		}
	}

	// Virtual method for C ABI access and custom callback
	QString boundValueName(int pos) const {
		if (qsqlresult_boundvaluename_isbase) {
			qsqlresult_boundvaluename_isbase = false;
			return QSqlResult::boundValueName(pos);
		} else if (qsqlresult_boundvaluename_callback != nullptr) {
			int cbval1 = pos;
			const char* callback_ret = qsqlresult_boundvaluename_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSqlResult::boundValueName(pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	void clear() {
		if (qsqlresult_clear_isbase) {
			qsqlresult_clear_isbase = false;
			QSqlResult::clear();
		} else if (qsqlresult_clear_callback != nullptr) {
			qsqlresult_clear_callback();
		} else {
			QSqlResult::clear();
		}
	}

	// Virtual method for C ABI access and custom callback
	bool hasOutValues() const {
		if (qsqlresult_hasoutvalues_isbase) {
			qsqlresult_hasoutvalues_isbase = false;
			return QSqlResult::hasOutValues();
		} else if (qsqlresult_hasoutvalues_callback != nullptr) {
			bool callback_ret = qsqlresult_hasoutvalues_callback();
			return callback_ret;
		} else {
			return QSqlResult::hasOutValues();
		}
	}

	// Virtual method for C ABI access and custom callback
	BindingSyntax bindingSyntax() const {
		if (qsqlresult_bindingsyntax_isbase) {
			qsqlresult_bindingsyntax_isbase = false;
			return QSqlResult::bindingSyntax();
		} else if (qsqlresult_bindingsyntax_callback != nullptr) {
			int callback_ret = qsqlresult_bindingsyntax_callback();
			return static_cast<QSqlResult::BindingSyntax>(callback_ret);
		} else {
			return QSqlResult::bindingSyntax();
		}
	}

	// Virtual method for C ABI access and custom callback
	QSql::NumericalPrecisionPolicy numericalPrecisionPolicy() const {
		if (qsqlresult_numericalprecisionpolicy_isbase) {
			qsqlresult_numericalprecisionpolicy_isbase = false;
			return QSqlResult::numericalPrecisionPolicy();
		} else if (qsqlresult_numericalprecisionpolicy_callback != nullptr) {
			int callback_ret = qsqlresult_numericalprecisionpolicy_callback();
			return static_cast<QSql::NumericalPrecisionPolicy>(callback_ret);
		} else {
			return QSqlResult::numericalPrecisionPolicy();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setPositionalBindingEnabled(bool enable) {
		if (qsqlresult_setpositionalbindingenabled_isbase) {
			qsqlresult_setpositionalbindingenabled_isbase = false;
			QSqlResult::setPositionalBindingEnabled(enable);
		} else if (qsqlresult_setpositionalbindingenabled_callback != nullptr) {
			bool cbval1 = enable;
			qsqlresult_setpositionalbindingenabled_callback(this, cbval1);
		} else {
			QSqlResult::setPositionalBindingEnabled(enable);
		}
	}

	// Virtual method for C ABI access and custom callback
	bool isPositionalBindingEnabled() const {
		if (qsqlresult_ispositionalbindingenabled_isbase) {
			qsqlresult_ispositionalbindingenabled_isbase = false;
			return QSqlResult::isPositionalBindingEnabled();
		} else if (qsqlresult_ispositionalbindingenabled_callback != nullptr) {
			bool callback_ret = qsqlresult_ispositionalbindingenabled_callback();
			return callback_ret;
		} else {
			return QSqlResult::isPositionalBindingEnabled();
		}
	}

	// Virtual method for C ABI access and custom callback
	void resetBindCount() {
		if (qsqlresult_resetbindcount_isbase) {
			qsqlresult_resetbindcount_isbase = false;
			QSqlResult::resetBindCount();
		} else if (qsqlresult_resetbindcount_callback != nullptr) {
			qsqlresult_resetbindcount_callback();
		} else {
			QSqlResult::resetBindCount();
		}
	}

	// Virtual method for C ABI access and custom callback
	QList<QVariant>& boundValues(Qt::Disambiguated_t param1) {
		if (qsqlresult_boundvalues1_isbase) {
			qsqlresult_boundvalues1_isbase = false;
			return QSqlResult::boundValues(param1);
		} else if (qsqlresult_boundvalues1_callback != nullptr) {
			Disambiguated_t* cbval1 = &param1;
			libqt_list callback_ret = qsqlresult_boundvalues1_callback(this, cbval1);
			return QList<QVariant>();
		} else {
			return QSqlResult::boundValues(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	QList<QVariant> boundValues(Qt::Disambiguated_t param1) const {
		if (qsqlresult_boundvalues12_isbase) {
			qsqlresult_boundvalues12_isbase = false;
			return QSqlResult::boundValues(param1);
		} else if (qsqlresult_boundvalues12_callback != nullptr) {
			Disambiguated_t* cbval1 = &param1;
			libqt_list callback_ret = qsqlresult_boundvalues12_callback(this, cbval1);
			return QList<QVariant>();
		} else {
			return QSqlResult::boundValues(param1);
		}
	}

	// Friend functions
	friend void QSqlResult_SetAt(QSqlResult* self, int at);
	friend void QSqlResult_QBaseSetAt(QSqlResult* self, int at);
	friend void QSqlResult_SetActive(QSqlResult* self, bool a);
	friend void QSqlResult_QBaseSetActive(QSqlResult* self, bool a);
	friend void QSqlResult_SetLastError(QSqlResult* self, const QSqlError* e);
	friend void QSqlResult_QBaseSetLastError(QSqlResult* self, const QSqlError* e);
	friend void QSqlResult_SetQuery(QSqlResult* self, const libqt_string query);
	friend void QSqlResult_QBaseSetQuery(QSqlResult* self, const libqt_string query);
	friend void QSqlResult_SetSelect(QSqlResult* self, bool s);
	friend void QSqlResult_QBaseSetSelect(QSqlResult* self, bool s);
	friend void QSqlResult_SetForwardOnly(QSqlResult* self, bool forward);
	friend void QSqlResult_QBaseSetForwardOnly(QSqlResult* self, bool forward);
	friend bool QSqlResult_Exec(QSqlResult* self);
	friend bool QSqlResult_QBaseExec(QSqlResult* self);
	friend bool QSqlResult_Prepare(QSqlResult* self, const libqt_string query);
	friend bool QSqlResult_QBasePrepare(QSqlResult* self, const libqt_string query);
	friend bool QSqlResult_SavePrepare(QSqlResult* self, const libqt_string sqlquery);
	friend bool QSqlResult_QBaseSavePrepare(QSqlResult* self, const libqt_string sqlquery);
	friend void QSqlResult_BindValue(QSqlResult* self, int pos, const QVariant* val, int typeVal);
	friend void QSqlResult_QBaseBindValue(QSqlResult* self, int pos, const QVariant* val, int typeVal);
	friend void QSqlResult_BindValue2(QSqlResult* self, const libqt_string placeholder, const QVariant* val, int typeVal);
	friend void QSqlResult_QBaseBindValue2(QSqlResult* self, const libqt_string placeholder, const QVariant* val, int typeVal);
	friend QVariant* QSqlResult_Data(QSqlResult* self, int i);
	friend QVariant* QSqlResult_QBaseData(QSqlResult* self, int i);
	friend bool QSqlResult_IsNull(QSqlResult* self, int i);
	friend bool QSqlResult_QBaseIsNull(QSqlResult* self, int i);
	friend bool QSqlResult_Reset(QSqlResult* self, const libqt_string sqlquery);
	friend bool QSqlResult_QBaseReset(QSqlResult* self, const libqt_string sqlquery);
	friend bool QSqlResult_Fetch(QSqlResult* self, int i);
	friend bool QSqlResult_QBaseFetch(QSqlResult* self, int i);
	friend bool QSqlResult_FetchNext(QSqlResult* self);
	friend bool QSqlResult_QBaseFetchNext(QSqlResult* self);
	friend bool QSqlResult_FetchPrevious(QSqlResult* self);
	friend bool QSqlResult_QBaseFetchPrevious(QSqlResult* self);
	friend bool QSqlResult_FetchFirst(QSqlResult* self);
	friend bool QSqlResult_QBaseFetchFirst(QSqlResult* self);
	friend bool QSqlResult_FetchLast(QSqlResult* self);
	friend bool QSqlResult_QBaseFetchLast(QSqlResult* self);
	friend int QSqlResult_Size(QSqlResult* self);
	friend int QSqlResult_QBaseSize(QSqlResult* self);
	friend int QSqlResult_NumRowsAffected(QSqlResult* self);
	friend int QSqlResult_QBaseNumRowsAffected(QSqlResult* self);
	friend QSqlRecord* QSqlResult_Record(const QSqlResult* self);
	friend QSqlRecord* QSqlResult_QBaseRecord(const QSqlResult* self);
	friend QVariant* QSqlResult_LastInsertId(const QSqlResult* self);
	friend QVariant* QSqlResult_QBaseLastInsertId(const QSqlResult* self);
	friend void QSqlResult_VirtualHook(QSqlResult* self, int id, void* data);
	friend void QSqlResult_QBaseVirtualHook(QSqlResult* self, int id, void* data);
	friend bool QSqlResult_ExecBatch(QSqlResult* self, bool arrayBind);
	friend bool QSqlResult_QBaseExecBatch(QSqlResult* self, bool arrayBind);
	friend void QSqlResult_DetachFromResultSet(QSqlResult* self);
	friend void QSqlResult_QBaseDetachFromResultSet(QSqlResult* self);
	friend void QSqlResult_SetNumericalPrecisionPolicy(QSqlResult* self, int policy);
	friend void QSqlResult_QBaseSetNumericalPrecisionPolicy(QSqlResult* self, int policy);
	friend bool QSqlResult_NextResult(QSqlResult* self);
	friend bool QSqlResult_QBaseNextResult(QSqlResult* self);
	friend int QSqlResult_At(const QSqlResult* self);
	friend int QSqlResult_QBaseAt(const QSqlResult* self);
	friend libqt_string QSqlResult_LastQuery(const QSqlResult* self);
	friend libqt_string QSqlResult_QBaseLastQuery(const QSqlResult* self);
	friend QSqlError* QSqlResult_LastError(const QSqlResult* self);
	friend QSqlError* QSqlResult_QBaseLastError(const QSqlResult* self);
	friend bool QSqlResult_IsValid(const QSqlResult* self);
	friend bool QSqlResult_QBaseIsValid(const QSqlResult* self);
	friend bool QSqlResult_IsActive(const QSqlResult* self);
	friend bool QSqlResult_QBaseIsActive(const QSqlResult* self);
	friend bool QSqlResult_IsSelect(const QSqlResult* self);
	friend bool QSqlResult_QBaseIsSelect(const QSqlResult* self);
	friend bool QSqlResult_IsForwardOnly(const QSqlResult* self);
	friend bool QSqlResult_QBaseIsForwardOnly(const QSqlResult* self);
	friend const QSqlDriver* QSqlResult_Driver(const QSqlResult* self);
	friend const QSqlDriver* QSqlResult_QBaseDriver(const QSqlResult* self);
	friend void QSqlResult_AddBindValue(QSqlResult* self, const QVariant* val, int typeVal);
	friend void QSqlResult_QBaseAddBindValue(QSqlResult* self, const QVariant* val, int typeVal);
	friend QVariant* QSqlResult_BoundValue(const QSqlResult* self, const libqt_string placeholder);
	friend QVariant* QSqlResult_QBaseBoundValue(const QSqlResult* self, const libqt_string placeholder);
	friend QVariant* QSqlResult_BoundValue2(const QSqlResult* self, int pos);
	friend QVariant* QSqlResult_QBaseBoundValue2(const QSqlResult* self, int pos);
	friend int QSqlResult_BindValueType(const QSqlResult* self, const libqt_string placeholder);
	friend int QSqlResult_QBaseBindValueType(const QSqlResult* self, const libqt_string placeholder);
	friend int QSqlResult_BindValueType2(const QSqlResult* self, int pos);
	friend int QSqlResult_QBaseBindValueType2(const QSqlResult* self, int pos);
	friend int QSqlResult_BoundValueCount(const QSqlResult* self);
	friend int QSqlResult_QBaseBoundValueCount(const QSqlResult* self);
	friend libqt_list QSqlResult_BoundValues(QSqlResult* self);
	friend libqt_list QSqlResult_QBaseBoundValues(QSqlResult* self);
	friend libqt_list QSqlResult_BoundValues2(const QSqlResult* self);
	friend libqt_list QSqlResult_QBaseBoundValues2(const QSqlResult* self);
	friend libqt_string QSqlResult_ExecutedQuery(const QSqlResult* self);
	friend libqt_string QSqlResult_QBaseExecutedQuery(const QSqlResult* self);
	friend libqt_list QSqlResult_BoundValueNames(const QSqlResult* self);
	friend libqt_list QSqlResult_QBaseBoundValueNames(const QSqlResult* self);
	friend libqt_string QSqlResult_BoundValueName(const QSqlResult* self, int pos);
	friend libqt_string QSqlResult_QBaseBoundValueName(const QSqlResult* self, int pos);
	friend void QSqlResult_Clear(QSqlResult* self);
	friend void QSqlResult_QBaseClear(QSqlResult* self);
	friend bool QSqlResult_HasOutValues(const QSqlResult* self);
	friend bool QSqlResult_QBaseHasOutValues(const QSqlResult* self);
	friend int QSqlResult_BindingSyntax(const QSqlResult* self);
	friend int QSqlResult_QBaseBindingSyntax(const QSqlResult* self);
	friend int QSqlResult_NumericalPrecisionPolicy(const QSqlResult* self);
	friend int QSqlResult_QBaseNumericalPrecisionPolicy(const QSqlResult* self);
	friend void QSqlResult_SetPositionalBindingEnabled(QSqlResult* self, bool enable);
	friend void QSqlResult_QBaseSetPositionalBindingEnabled(QSqlResult* self, bool enable);
	friend bool QSqlResult_IsPositionalBindingEnabled(const QSqlResult* self);
	friend bool QSqlResult_QBaseIsPositionalBindingEnabled(const QSqlResult* self);
	friend void QSqlResult_ResetBindCount(QSqlResult* self);
	friend void QSqlResult_QBaseResetBindCount(QSqlResult* self);
	friend libqt_list QSqlResult_BoundValues1(QSqlResult* self, Disambiguated_t* param1);
	friend libqt_list QSqlResult_QBaseBoundValues1(QSqlResult* self, Disambiguated_t* param1);
	friend libqt_list QSqlResult_BoundValues12(const QSqlResult* self, Disambiguated_t* param1);
	friend libqt_list QSqlResult_QBaseBoundValues12(const QSqlResult* self, Disambiguated_t* param1);
};

#endif


