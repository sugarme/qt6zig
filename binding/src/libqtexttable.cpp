#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFrame>
#include <QTextTable>
#include <QTextTableCell>
#include <QTextTableFormat>
#include <qtexttable.h>
#include "libqtexttable.h"
#include "libqtexttable.hxx"

QTextTableCell* QTextTableCell_new() {
	 return new QTextTableCell();
}

QTextTableCell* QTextTableCell_new2(const QTextTableCell* o) {
	 return new QTextTableCell(*o);
}

void QTextTableCell_OperatorAssign(QTextTableCell* self, const QTextTableCell* o) {
	self->operator=(*o);
}

void QTextTableCell_SetFormat(QTextTableCell* self, const QTextCharFormat* format) {
	self->setFormat(*format);
}

QTextCharFormat* QTextTableCell_Format(const QTextTableCell* self) {
	return new QTextCharFormat(self->format());
}

int QTextTableCell_Row(const QTextTableCell* self) {
	return self->row();
}

int QTextTableCell_Column(const QTextTableCell* self) {
	return self->column();
}

int QTextTableCell_RowSpan(const QTextTableCell* self) {
	return self->rowSpan();
}

int QTextTableCell_ColumnSpan(const QTextTableCell* self) {
	return self->columnSpan();
}

bool QTextTableCell_IsValid(const QTextTableCell* self) {
	return self->isValid();
}

QTextCursor* QTextTableCell_FirstCursorPosition(const QTextTableCell* self) {
	return new QTextCursor(self->firstCursorPosition());
}

QTextCursor* QTextTableCell_LastCursorPosition(const QTextTableCell* self) {
	return new QTextCursor(self->lastCursorPosition());
}

int QTextTableCell_FirstPosition(const QTextTableCell* self) {
	return self->firstPosition();
}

int QTextTableCell_LastPosition(const QTextTableCell* self) {
	return self->lastPosition();
}

bool QTextTableCell_OperatorEqual(const QTextTableCell* self, const QTextTableCell* other) {
	return self->operator==(*other);
}

bool QTextTableCell_OperatorNotEqual(const QTextTableCell* self, const QTextTableCell* other) {
	return self->operator!=(*other);
}

int QTextTableCell_TableCellFormatIndex(const QTextTableCell* self) {
	return self->tableCellFormatIndex();
}

void QTextTableCell_Delete(QTextTableCell* self) {
    delete self;
}

QTextTable* QTextTable_new(QTextDocument* doc) {
	 return new QTextTable(doc);
}

libqt_string QTextTable_Tr(const char* s) {
	QString _ret = QTextTable::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextTable_Resize(QTextTable* self, int rows, int cols) {
	self->resize(rows, cols);
}

void QTextTable_InsertRows(QTextTable* self, int pos, int num) {
	self->insertRows(pos, num);
}

void QTextTable_InsertColumns(QTextTable* self, int pos, int num) {
	self->insertColumns(pos, num);
}

void QTextTable_AppendRows(QTextTable* self, int count) {
	self->appendRows(count);
}

void QTextTable_AppendColumns(QTextTable* self, int count) {
	self->appendColumns(count);
}

void QTextTable_RemoveRows(QTextTable* self, int pos, int num) {
	self->removeRows(pos, num);
}

void QTextTable_RemoveColumns(QTextTable* self, int pos, int num) {
	self->removeColumns(pos, num);
}

void QTextTable_MergeCells(QTextTable* self, int row, int col, int numRows, int numCols) {
	self->mergeCells(row, col, numRows, numCols);
}

void QTextTable_MergeCells2(QTextTable* self, const QTextCursor* cursor) {
	self->mergeCells(*cursor);
}

void QTextTable_SplitCell(QTextTable* self, int row, int col, int numRows, int numCols) {
	self->splitCell(row, col, numRows, numCols);
}

int QTextTable_Rows(const QTextTable* self) {
	return self->rows();
}

int QTextTable_Columns(const QTextTable* self) {
	return self->columns();
}

QTextTableCell* QTextTable_CellAt(const QTextTable* self, int row, int col) {
	return new QTextTableCell(self->cellAt(row, col));
}

QTextTableCell* QTextTable_CellAt2(const QTextTable* self, int position) {
	return new QTextTableCell(self->cellAt(position));
}

QTextTableCell* QTextTable_CellAt3(const QTextTable* self, const QTextCursor* c) {
	return new QTextTableCell(self->cellAt(*c));
}

QTextCursor* QTextTable_RowStart(const QTextTable* self, const QTextCursor* c) {
	return new QTextCursor(self->rowStart(*c));
}

QTextCursor* QTextTable_RowEnd(const QTextTable* self, const QTextCursor* c) {
	return new QTextCursor(self->rowEnd(*c));
}

void QTextTable_SetFormat(QTextTable* self, const QTextTableFormat* format) {
	self->setFormat(*format);
}

QTextTableFormat* QTextTable_Format(const QTextTable* self) {
	return new QTextTableFormat(self->format());
}

libqt_string QTextTable_Tr2(const char* s, const char* c) {
	QString _ret = QTextTable::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextTable_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextTable::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextTable_Delete(QTextTable* self) {
    delete self;
}

