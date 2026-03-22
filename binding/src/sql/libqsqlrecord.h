#pragma once
#ifndef QSQLRECORD_H_C_LIB
#define QSQLRECORD_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSqlField QSqlField;
typedef struct QSqlRecord QSqlRecord;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSqlRecord* QSqlRecord_new();
QSqlRecord* QSqlRecord_new2(const QSqlRecord* other);
void QSqlRecord_OperatorAssign(QSqlRecord* self, const QSqlRecord* other);
void QSqlRecord_Swap(QSqlRecord* self, QSqlRecord* other);
bool QSqlRecord_OperatorEqual(const QSqlRecord* self, const QSqlRecord* other);
bool QSqlRecord_OperatorNotEqual(const QSqlRecord* self, const QSqlRecord* other);
QVariant* QSqlRecord_Value(const QSqlRecord* self, int i);
void QSqlRecord_SetValue(QSqlRecord* self, int i, const QVariant* val);
void QSqlRecord_SetNull(QSqlRecord* self, int i);
bool QSqlRecord_IsNull(const QSqlRecord* self, int i);
libqt_string QSqlRecord_FieldName(const QSqlRecord* self, int i);
QSqlField* QSqlRecord_Field(const QSqlRecord* self, int i);
bool QSqlRecord_IsGenerated(const QSqlRecord* self, int i);
void QSqlRecord_SetGenerated2(QSqlRecord* self, int i, bool generated);
void QSqlRecord_Append(QSqlRecord* self, const QSqlField* field);
void QSqlRecord_Replace(QSqlRecord* self, int pos, const QSqlField* field);
void QSqlRecord_Insert(QSqlRecord* self, int pos, const QSqlField* field);
void QSqlRecord_Remove(QSqlRecord* self, int pos);
bool QSqlRecord_IsEmpty(const QSqlRecord* self);
void QSqlRecord_Clear(QSqlRecord* self);
void QSqlRecord_ClearValues(QSqlRecord* self);
int QSqlRecord_Count(const QSqlRecord* self);
QSqlRecord* QSqlRecord_KeyValues(const QSqlRecord* self, const QSqlRecord* keyFields);
void QSqlRecord_Delete(QSqlRecord* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
