#pragma once
#ifndef QSQLRESULT_H_C_LIB
#define QSQLRESULT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t)
typedef Qt::Disambiguated_t Disambiguated_t;
#endif
#else
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlError QSqlError;
typedef struct QSqlRecord QSqlRecord;
typedef struct QSqlResult QSqlResult;
typedef struct QVariant QVariant;
typedef struct Disambiguated_t Disambiguated_t;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif





QVariant* QSqlResult_Handle(const QSqlResult* self);
void QSqlResult_SetAt(QSqlResult* self, int at);
void QSqlResult_SetActive(QSqlResult* self, bool a);
void QSqlResult_SetLastError(QSqlResult* self, const QSqlError* e);
void QSqlResult_SetQuery(QSqlResult* self, const libqt_string query);
void QSqlResult_SetSelect(QSqlResult* self, bool s);
void QSqlResult_SetForwardOnly(QSqlResult* self, bool forward);
bool QSqlResult_Exec(QSqlResult* self);
bool QSqlResult_Prepare(QSqlResult* self, const libqt_string query);
bool QSqlResult_SavePrepare(QSqlResult* self, const libqt_string sqlquery);
void QSqlResult_BindValue(QSqlResult* self, int pos, const QVariant* val, int typeVal);
void QSqlResult_BindValue2(QSqlResult* self, const libqt_string placeholder, const QVariant* val, int typeVal);
QVariant* QSqlResult_Data(QSqlResult* self, int i);
bool QSqlResult_IsNull(QSqlResult* self, int i);
bool QSqlResult_Reset(QSqlResult* self, const libqt_string sqlquery);
bool QSqlResult_Fetch(QSqlResult* self, int i);
bool QSqlResult_FetchNext(QSqlResult* self);
bool QSqlResult_FetchPrevious(QSqlResult* self);
bool QSqlResult_FetchFirst(QSqlResult* self);
bool QSqlResult_FetchLast(QSqlResult* self);
int QSqlResult_Size(QSqlResult* self);
int QSqlResult_NumRowsAffected(QSqlResult* self);
QSqlRecord* QSqlResult_Record(const QSqlResult* self);
QVariant* QSqlResult_LastInsertId(const QSqlResult* self);
void QSqlResult_VirtualHook(QSqlResult* self, int id, void* data);
bool QSqlResult_ExecBatch(QSqlResult* self, bool arrayBind);
void QSqlResult_DetachFromResultSet(QSqlResult* self);
void QSqlResult_SetNumericalPrecisionPolicy(QSqlResult* self, int policy);
bool QSqlResult_NextResult(QSqlResult* self);
void QSqlResult_OnHandle(const QSqlResult* self, intptr_t slot);
QVariant* QSqlResult_QBaseHandle(const QSqlResult* self);
void QSqlResult_OnSetAt(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseSetAt(QSqlResult* self, int at);
void QSqlResult_OnSetActive(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseSetActive(QSqlResult* self, bool a);
void QSqlResult_OnSetLastError(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseSetLastError(QSqlResult* self, const QSqlError* e);
void QSqlResult_OnSetQuery(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseSetQuery(QSqlResult* self, const libqt_string query);
void QSqlResult_OnSetSelect(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseSetSelect(QSqlResult* self, bool s);
void QSqlResult_OnSetForwardOnly(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseSetForwardOnly(QSqlResult* self, bool forward);
void QSqlResult_OnExec(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseExec(QSqlResult* self);
void QSqlResult_OnPrepare(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBasePrepare(QSqlResult* self, const libqt_string query);
void QSqlResult_OnSavePrepare(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseSavePrepare(QSqlResult* self, const libqt_string sqlquery);
void QSqlResult_OnBindValue(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseBindValue(QSqlResult* self, int pos, const QVariant* val, int typeVal);
void QSqlResult_OnBindValue2(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseBindValue2(QSqlResult* self, const libqt_string placeholder, const QVariant* val, int typeVal);
void QSqlResult_OnData(QSqlResult* self, intptr_t slot);
QVariant* QSqlResult_QBaseData(QSqlResult* self, int i);
void QSqlResult_OnIsNull(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseIsNull(QSqlResult* self, int i);
void QSqlResult_OnReset(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseReset(QSqlResult* self, const libqt_string sqlquery);
void QSqlResult_OnFetch(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseFetch(QSqlResult* self, int i);
void QSqlResult_OnFetchNext(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseFetchNext(QSqlResult* self);
void QSqlResult_OnFetchPrevious(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseFetchPrevious(QSqlResult* self);
void QSqlResult_OnFetchFirst(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseFetchFirst(QSqlResult* self);
void QSqlResult_OnFetchLast(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseFetchLast(QSqlResult* self);
void QSqlResult_OnSize(QSqlResult* self, intptr_t slot);
int QSqlResult_QBaseSize(QSqlResult* self);
void QSqlResult_OnNumRowsAffected(QSqlResult* self, intptr_t slot);
int QSqlResult_QBaseNumRowsAffected(QSqlResult* self);
void QSqlResult_OnRecord(const QSqlResult* self, intptr_t slot);
QSqlRecord* QSqlResult_QBaseRecord(const QSqlResult* self);
void QSqlResult_OnLastInsertId(const QSqlResult* self, intptr_t slot);
QVariant* QSqlResult_QBaseLastInsertId(const QSqlResult* self);
void QSqlResult_OnVirtualHook(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseVirtualHook(QSqlResult* self, int id, void* data);
void QSqlResult_OnExecBatch(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseExecBatch(QSqlResult* self, bool arrayBind);
void QSqlResult_OnDetachFromResultSet(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseDetachFromResultSet(QSqlResult* self);
void QSqlResult_OnSetNumericalPrecisionPolicy(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseSetNumericalPrecisionPolicy(QSqlResult* self, int policy);
void QSqlResult_OnNextResult(QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseNextResult(QSqlResult* self);
int QSqlResult_At(const QSqlResult* self);
void QSqlResult_OnAt(const QSqlResult* self, intptr_t slot);
int QSqlResult_QBaseAt(const QSqlResult* self);
libqt_string QSqlResult_LastQuery(const QSqlResult* self);
void QSqlResult_OnLastQuery(const QSqlResult* self, intptr_t slot);
libqt_string QSqlResult_QBaseLastQuery(const QSqlResult* self);
QSqlError* QSqlResult_LastError(const QSqlResult* self);
void QSqlResult_OnLastError(const QSqlResult* self, intptr_t slot);
QSqlError* QSqlResult_QBaseLastError(const QSqlResult* self);
bool QSqlResult_IsValid(const QSqlResult* self);
void QSqlResult_OnIsValid(const QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseIsValid(const QSqlResult* self);
bool QSqlResult_IsActive(const QSqlResult* self);
void QSqlResult_OnIsActive(const QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseIsActive(const QSqlResult* self);
bool QSqlResult_IsSelect(const QSqlResult* self);
void QSqlResult_OnIsSelect(const QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseIsSelect(const QSqlResult* self);
bool QSqlResult_IsForwardOnly(const QSqlResult* self);
void QSqlResult_OnIsForwardOnly(const QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseIsForwardOnly(const QSqlResult* self);
const QSqlDriver* QSqlResult_Driver(const QSqlResult* self);
void QSqlResult_OnDriver(const QSqlResult* self, intptr_t slot);
const QSqlDriver* QSqlResult_QBaseDriver(const QSqlResult* self);
void QSqlResult_AddBindValue(QSqlResult* self, const QVariant* val, int typeVal);
void QSqlResult_OnAddBindValue(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseAddBindValue(QSqlResult* self, const QVariant* val, int typeVal);
QVariant* QSqlResult_BoundValue(const QSqlResult* self, const libqt_string placeholder);
void QSqlResult_OnBoundValue(const QSqlResult* self, intptr_t slot);
QVariant* QSqlResult_QBaseBoundValue(const QSqlResult* self, const libqt_string placeholder);
QVariant* QSqlResult_BoundValue2(const QSqlResult* self, int pos);
void QSqlResult_OnBoundValue2(const QSqlResult* self, intptr_t slot);
QVariant* QSqlResult_QBaseBoundValue2(const QSqlResult* self, int pos);
int QSqlResult_BindValueType(const QSqlResult* self, const libqt_string placeholder);
void QSqlResult_OnBindValueType(const QSqlResult* self, intptr_t slot);
int QSqlResult_QBaseBindValueType(const QSqlResult* self, const libqt_string placeholder);
int QSqlResult_BindValueType2(const QSqlResult* self, int pos);
void QSqlResult_OnBindValueType2(const QSqlResult* self, intptr_t slot);
int QSqlResult_QBaseBindValueType2(const QSqlResult* self, int pos);
int QSqlResult_BoundValueCount(const QSqlResult* self);
void QSqlResult_OnBoundValueCount(const QSqlResult* self, intptr_t slot);
int QSqlResult_QBaseBoundValueCount(const QSqlResult* self);
libqt_list QSqlResult_BoundValues(QSqlResult* self);
void QSqlResult_OnBoundValues(QSqlResult* self, intptr_t slot);
libqt_list QSqlResult_QBaseBoundValues(QSqlResult* self);
libqt_list QSqlResult_BoundValues2(const QSqlResult* self);
void QSqlResult_OnBoundValues2(const QSqlResult* self, intptr_t slot);
libqt_list QSqlResult_QBaseBoundValues2(const QSqlResult* self);
libqt_string QSqlResult_ExecutedQuery(const QSqlResult* self);
void QSqlResult_OnExecutedQuery(const QSqlResult* self, intptr_t slot);
libqt_string QSqlResult_QBaseExecutedQuery(const QSqlResult* self);
libqt_list QSqlResult_BoundValueNames(const QSqlResult* self);
void QSqlResult_OnBoundValueNames(const QSqlResult* self, intptr_t slot);
libqt_list QSqlResult_QBaseBoundValueNames(const QSqlResult* self);
libqt_string QSqlResult_BoundValueName(const QSqlResult* self, int pos);
void QSqlResult_OnBoundValueName(const QSqlResult* self, intptr_t slot);
libqt_string QSqlResult_QBaseBoundValueName(const QSqlResult* self, int pos);
void QSqlResult_Clear(QSqlResult* self);
void QSqlResult_OnClear(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseClear(QSqlResult* self);
bool QSqlResult_HasOutValues(const QSqlResult* self);
void QSqlResult_OnHasOutValues(const QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseHasOutValues(const QSqlResult* self);
int QSqlResult_BindingSyntax(const QSqlResult* self);
void QSqlResult_OnBindingSyntax(const QSqlResult* self, intptr_t slot);
int QSqlResult_QBaseBindingSyntax(const QSqlResult* self);
int QSqlResult_NumericalPrecisionPolicy(const QSqlResult* self);
void QSqlResult_OnNumericalPrecisionPolicy(const QSqlResult* self, intptr_t slot);
int QSqlResult_QBaseNumericalPrecisionPolicy(const QSqlResult* self);
void QSqlResult_SetPositionalBindingEnabled(QSqlResult* self, bool enable);
void QSqlResult_OnSetPositionalBindingEnabled(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseSetPositionalBindingEnabled(QSqlResult* self, bool enable);
bool QSqlResult_IsPositionalBindingEnabled(const QSqlResult* self);
void QSqlResult_OnIsPositionalBindingEnabled(const QSqlResult* self, intptr_t slot);
bool QSqlResult_QBaseIsPositionalBindingEnabled(const QSqlResult* self);
void QSqlResult_ResetBindCount(QSqlResult* self);
void QSqlResult_OnResetBindCount(QSqlResult* self, intptr_t slot);
void QSqlResult_QBaseResetBindCount(QSqlResult* self);
libqt_list QSqlResult_BoundValues1(QSqlResult* self, Disambiguated_t* param1);
void QSqlResult_OnBoundValues1(QSqlResult* self, intptr_t slot);
libqt_list QSqlResult_QBaseBoundValues1(QSqlResult* self, Disambiguated_t* param1);
libqt_list QSqlResult_BoundValues12(const QSqlResult* self, Disambiguated_t* param1);
void QSqlResult_OnBoundValues12(const QSqlResult* self, intptr_t slot);
libqt_list QSqlResult_QBaseBoundValues12(const QSqlResult* self, Disambiguated_t* param1);
void QSqlResult_Delete(QSqlResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
