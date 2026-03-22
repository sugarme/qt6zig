#pragma once
#ifndef QTEXTTABLE_H_C_LIB
#define QTEXTTABLE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFrame QTextFrame;
typedef struct QTextTable QTextTable;
typedef struct QTextTableCell QTextTableCell;
typedef struct QTextTableFormat QTextTableFormat;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QTextTableCell* QTextTableCell_new();
QTextTableCell* QTextTableCell_new2(const QTextTableCell* o);
void QTextTableCell_OperatorAssign(QTextTableCell* self, const QTextTableCell* o);
void QTextTableCell_SetFormat(QTextTableCell* self, const QTextCharFormat* format);
QTextCharFormat* QTextTableCell_Format(const QTextTableCell* self);
int QTextTableCell_Row(const QTextTableCell* self);
int QTextTableCell_Column(const QTextTableCell* self);
int QTextTableCell_RowSpan(const QTextTableCell* self);
int QTextTableCell_ColumnSpan(const QTextTableCell* self);
bool QTextTableCell_IsValid(const QTextTableCell* self);
QTextCursor* QTextTableCell_FirstCursorPosition(const QTextTableCell* self);
QTextCursor* QTextTableCell_LastCursorPosition(const QTextTableCell* self);
int QTextTableCell_FirstPosition(const QTextTableCell* self);
int QTextTableCell_LastPosition(const QTextTableCell* self);
bool QTextTableCell_OperatorEqual(const QTextTableCell* self, const QTextTableCell* other);
bool QTextTableCell_OperatorNotEqual(const QTextTableCell* self, const QTextTableCell* other);
int QTextTableCell_TableCellFormatIndex(const QTextTableCell* self);
void QTextTableCell_Delete(QTextTableCell* self);

QTextTable* QTextTable_new(QTextDocument* doc);
libqt_string QTextTable_Tr(const char* s);
void QTextTable_Resize(QTextTable* self, int rows, int cols);
void QTextTable_InsertRows(QTextTable* self, int pos, int num);
void QTextTable_InsertColumns(QTextTable* self, int pos, int num);
void QTextTable_AppendRows(QTextTable* self, int count);
void QTextTable_AppendColumns(QTextTable* self, int count);
void QTextTable_RemoveRows(QTextTable* self, int pos, int num);
void QTextTable_RemoveColumns(QTextTable* self, int pos, int num);
void QTextTable_MergeCells(QTextTable* self, int row, int col, int numRows, int numCols);
void QTextTable_MergeCells2(QTextTable* self, const QTextCursor* cursor);
void QTextTable_SplitCell(QTextTable* self, int row, int col, int numRows, int numCols);
int QTextTable_Rows(const QTextTable* self);
int QTextTable_Columns(const QTextTable* self);
QTextTableCell* QTextTable_CellAt(const QTextTable* self, int row, int col);
QTextTableCell* QTextTable_CellAt2(const QTextTable* self, int position);
QTextTableCell* QTextTable_CellAt3(const QTextTable* self, const QTextCursor* c);
QTextCursor* QTextTable_RowStart(const QTextTable* self, const QTextCursor* c);
QTextCursor* QTextTable_RowEnd(const QTextTable* self, const QTextCursor* c);
void QTextTable_SetFormat(QTextTable* self, const QTextTableFormat* format);
QTextTableFormat* QTextTable_Format(const QTextTable* self);
libqt_string QTextTable_Tr2(const char* s, const char* c);
libqt_string QTextTable_Tr3(const char* s, const char* c, int n);
void QTextTable_Delete(QTextTable* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
