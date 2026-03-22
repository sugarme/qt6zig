#pragma once
#ifndef QSQLDRIVER_H_C_LIB
#define QSQLDRIVER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlError QSqlError;
typedef struct QSqlField QSqlField;
typedef struct QSqlIndex QSqlIndex;
typedef struct QSqlRecord QSqlRecord;
typedef struct QSqlResult QSqlResult;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSqlDriver* QSqlDriver_new();
QSqlDriver* QSqlDriver_new2(QObject* parent);
libqt_string QSqlDriver_Tr(const char* s);
bool QSqlDriver_IsOpen(const QSqlDriver* self);
bool QSqlDriver_IsOpenError(const QSqlDriver* self);
bool QSqlDriver_BeginTransaction(QSqlDriver* self);
bool QSqlDriver_CommitTransaction(QSqlDriver* self);
bool QSqlDriver_RollbackTransaction(QSqlDriver* self);
libqt_list QSqlDriver_Tables(const QSqlDriver* self, int tableType);
QSqlIndex* QSqlDriver_PrimaryIndex(const QSqlDriver* self, const libqt_string tableName);
QSqlRecord* QSqlDriver_Record(const QSqlDriver* self, const libqt_string tableName);
libqt_string QSqlDriver_FormatValue(const QSqlDriver* self, const QSqlField* field, bool trimStrings);
libqt_string QSqlDriver_EscapeIdentifier(const QSqlDriver* self, const libqt_string identifier, int typeVal);
libqt_string QSqlDriver_SqlStatement(const QSqlDriver* self, int typeVal, const libqt_string tableName, const QSqlRecord* rec, bool preparedStatement);
QSqlError* QSqlDriver_LastError(const QSqlDriver* self);
QVariant* QSqlDriver_Handle(const QSqlDriver* self);
bool QSqlDriver_HasFeature(const QSqlDriver* self, int f);
void QSqlDriver_Close(QSqlDriver* self);
QSqlResult* QSqlDriver_CreateResult(const QSqlDriver* self);
bool QSqlDriver_Open(QSqlDriver* self, const libqt_string db, const libqt_string user, const libqt_string password, const libqt_string host, int port, const libqt_string connOpts);
bool QSqlDriver_SubscribeToNotification(QSqlDriver* self, const libqt_string name);
bool QSqlDriver_UnsubscribeFromNotification(QSqlDriver* self, const libqt_string name);
libqt_list QSqlDriver_SubscribedToNotifications(const QSqlDriver* self);
bool QSqlDriver_IsIdentifierEscaped(const QSqlDriver* self, const libqt_string identifier, int typeVal);
libqt_string QSqlDriver_StripDelimiters(const QSqlDriver* self, const libqt_string identifier, int typeVal);
void QSqlDriver_SetNumericalPrecisionPolicy(QSqlDriver* self, int precisionPolicy);
int QSqlDriver_NumericalPrecisionPolicy(const QSqlDriver* self);
int QSqlDriver_DbmsType(const QSqlDriver* self);
int QSqlDriver_MaximumIdentifierLength(const QSqlDriver* self, int typeVal);
bool QSqlDriver_CancelQuery(QSqlDriver* self);
void QSqlDriver_Notification(QSqlDriver* self, const libqt_string name, int source, const QVariant* payload);
void QSqlDriver_Connect_Notification(QSqlDriver* self, intptr_t slot);
void QSqlDriver_SetOpen(QSqlDriver* self, bool o);
void QSqlDriver_SetOpenError(QSqlDriver* self, bool e);
void QSqlDriver_SetLastError(QSqlDriver* self, const QSqlError* e);
libqt_string QSqlDriver_Tr2(const char* s, const char* c);
libqt_string QSqlDriver_Tr3(const char* s, const char* c, int n);
void QSqlDriver_OnIsOpen(const QSqlDriver* self, intptr_t slot);
bool QSqlDriver_QBaseIsOpen(const QSqlDriver* self);
void QSqlDriver_OnBeginTransaction(QSqlDriver* self, intptr_t slot);
bool QSqlDriver_QBaseBeginTransaction(QSqlDriver* self);
void QSqlDriver_OnCommitTransaction(QSqlDriver* self, intptr_t slot);
bool QSqlDriver_QBaseCommitTransaction(QSqlDriver* self);
void QSqlDriver_OnRollbackTransaction(QSqlDriver* self, intptr_t slot);
bool QSqlDriver_QBaseRollbackTransaction(QSqlDriver* self);
void QSqlDriver_OnTables(const QSqlDriver* self, intptr_t slot);
libqt_list QSqlDriver_QBaseTables(const QSqlDriver* self, int tableType);
void QSqlDriver_OnPrimaryIndex(const QSqlDriver* self, intptr_t slot);
QSqlIndex* QSqlDriver_QBasePrimaryIndex(const QSqlDriver* self, const libqt_string tableName);
void QSqlDriver_OnRecord(const QSqlDriver* self, intptr_t slot);
QSqlRecord* QSqlDriver_QBaseRecord(const QSqlDriver* self, const libqt_string tableName);
void QSqlDriver_OnFormatValue(const QSqlDriver* self, intptr_t slot);
libqt_string QSqlDriver_QBaseFormatValue(const QSqlDriver* self, const QSqlField* field, bool trimStrings);
void QSqlDriver_OnEscapeIdentifier(const QSqlDriver* self, intptr_t slot);
libqt_string QSqlDriver_QBaseEscapeIdentifier(const QSqlDriver* self, const libqt_string identifier, int typeVal);
void QSqlDriver_OnSqlStatement(const QSqlDriver* self, intptr_t slot);
libqt_string QSqlDriver_QBaseSqlStatement(const QSqlDriver* self, int typeVal, const libqt_string tableName, const QSqlRecord* rec, bool preparedStatement);
void QSqlDriver_OnHandle(const QSqlDriver* self, intptr_t slot);
QVariant* QSqlDriver_QBaseHandle(const QSqlDriver* self);
void QSqlDriver_OnHasFeature(const QSqlDriver* self, intptr_t slot);
bool QSqlDriver_QBaseHasFeature(const QSqlDriver* self, int f);
void QSqlDriver_OnClose(QSqlDriver* self, intptr_t slot);
void QSqlDriver_QBaseClose(QSqlDriver* self);
void QSqlDriver_OnCreateResult(const QSqlDriver* self, intptr_t slot);
QSqlResult* QSqlDriver_QBaseCreateResult(const QSqlDriver* self);
void QSqlDriver_OnOpen(QSqlDriver* self, intptr_t slot);
bool QSqlDriver_QBaseOpen(QSqlDriver* self, const libqt_string db, const libqt_string user, const libqt_string password, const libqt_string host, int port, const libqt_string connOpts);
void QSqlDriver_OnSubscribeToNotification(QSqlDriver* self, intptr_t slot);
bool QSqlDriver_QBaseSubscribeToNotification(QSqlDriver* self, const libqt_string name);
void QSqlDriver_OnUnsubscribeFromNotification(QSqlDriver* self, intptr_t slot);
bool QSqlDriver_QBaseUnsubscribeFromNotification(QSqlDriver* self, const libqt_string name);
void QSqlDriver_OnSubscribedToNotifications(const QSqlDriver* self, intptr_t slot);
libqt_list QSqlDriver_QBaseSubscribedToNotifications(const QSqlDriver* self);
void QSqlDriver_OnIsIdentifierEscaped(const QSqlDriver* self, intptr_t slot);
bool QSqlDriver_QBaseIsIdentifierEscaped(const QSqlDriver* self, const libqt_string identifier, int typeVal);
void QSqlDriver_OnStripDelimiters(const QSqlDriver* self, intptr_t slot);
libqt_string QSqlDriver_QBaseStripDelimiters(const QSqlDriver* self, const libqt_string identifier, int typeVal);
void QSqlDriver_OnMaximumIdentifierLength(const QSqlDriver* self, intptr_t slot);
int QSqlDriver_QBaseMaximumIdentifierLength(const QSqlDriver* self, int typeVal);
void QSqlDriver_OnCancelQuery(QSqlDriver* self, intptr_t slot);
bool QSqlDriver_QBaseCancelQuery(QSqlDriver* self);
void QSqlDriver_OnSetOpen(QSqlDriver* self, intptr_t slot);
void QSqlDriver_QBaseSetOpen(QSqlDriver* self, bool o);
void QSqlDriver_OnSetOpenError(QSqlDriver* self, intptr_t slot);
void QSqlDriver_QBaseSetOpenError(QSqlDriver* self, bool e);
void QSqlDriver_OnSetLastError(QSqlDriver* self, intptr_t slot);
void QSqlDriver_QBaseSetLastError(QSqlDriver* self, const QSqlError* e);
void QSqlDriver_Delete(QSqlDriver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
