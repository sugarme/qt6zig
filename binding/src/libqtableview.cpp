#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QDropEvent>
#include <QHeaderView>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QModelIndex>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionViewItem>
#include <QTableView>
#include <QTimerEvent>
#include <QWidget>
#include <qtableview.h>
#include "libqtableview.h"
#include "libqtableview.hxx"

QTableView* QTableView_new(QWidget* parent) {
	 return new VirtualQTableView(parent);
}

QTableView* QTableView_new2() {
	 return new VirtualQTableView();
}

libqt_string QTableView_Tr(const char* s) {
	QString _ret = QTableView::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTableView_SetModel(QTableView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QTableView_SetRootIndex(QTableView* self, const QModelIndex* index) {
	self->setRootIndex(*index);
}

void QTableView_SetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QTableView_DoItemsLayout(QTableView* self) {
	self->doItemsLayout();
}

QHeaderView* QTableView_HorizontalHeader(const QTableView* self) {
	return self->horizontalHeader();
}

QHeaderView* QTableView_VerticalHeader(const QTableView* self) {
	return self->verticalHeader();
}

void QTableView_SetHorizontalHeader(QTableView* self, QHeaderView* header) {
	self->setHorizontalHeader(header);
}

void QTableView_SetVerticalHeader(QTableView* self, QHeaderView* header) {
	self->setVerticalHeader(header);
}

int QTableView_RowViewportPosition(const QTableView* self, int row) {
	return self->rowViewportPosition(row);
}

int QTableView_RowAt(const QTableView* self, int y) {
	return self->rowAt(y);
}

void QTableView_SetRowHeight(QTableView* self, int row, int height) {
	self->setRowHeight(row, height);
}

int QTableView_RowHeight(const QTableView* self, int row) {
	return self->rowHeight(row);
}

int QTableView_ColumnViewportPosition(const QTableView* self, int column) {
	return self->columnViewportPosition(column);
}

int QTableView_ColumnAt(const QTableView* self, int x) {
	return self->columnAt(x);
}

void QTableView_SetColumnWidth(QTableView* self, int column, int width) {
	self->setColumnWidth(column, width);
}

int QTableView_ColumnWidth(const QTableView* self, int column) {
	return self->columnWidth(column);
}

bool QTableView_IsRowHidden(const QTableView* self, int row) {
	return self->isRowHidden(row);
}

void QTableView_SetRowHidden(QTableView* self, int row, bool hide) {
	self->setRowHidden(row, hide);
}

bool QTableView_IsColumnHidden(const QTableView* self, int column) {
	return self->isColumnHidden(column);
}

void QTableView_SetColumnHidden(QTableView* self, int column, bool hide) {
	self->setColumnHidden(column, hide);
}

void QTableView_SetSortingEnabled(QTableView* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTableView_IsSortingEnabled(const QTableView* self) {
	return self->isSortingEnabled();
}

bool QTableView_ShowGrid(const QTableView* self) {
	return self->showGrid();
}

int QTableView_GridStyle(const QTableView* self) {
	return self->gridStyle();
}

void QTableView_SetGridStyle(QTableView* self, int style) {
	self->setGridStyle(static_cast<Qt::PenStyle>(style));
}

void QTableView_SetWordWrap(QTableView* self, bool on) {
	self->setWordWrap(on);
}

bool QTableView_WordWrap(const QTableView* self) {
	return self->wordWrap();
}

void QTableView_SetCornerButtonEnabled(QTableView* self, bool enable) {
	self->setCornerButtonEnabled(enable);
}

bool QTableView_IsCornerButtonEnabled(const QTableView* self) {
	return self->isCornerButtonEnabled();
}

QRect* QTableView_VisualRect(const QTableView* self, const QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QTableView_ScrollTo(QTableView* self, const QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QTableView_IndexAt(const QTableView* self, const QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

void QTableView_SetSpan(QTableView* self, int row, int column, int rowSpan, int columnSpan) {
	self->setSpan(row, column, rowSpan, columnSpan);
}

int QTableView_RowSpan(const QTableView* self, int row, int column) {
	return self->rowSpan(row, column);
}

int QTableView_ColumnSpan(const QTableView* self, int row, int column) {
	return self->columnSpan(row, column);
}

void QTableView_ClearSpans(QTableView* self) {
	self->clearSpans();
}

void QTableView_SelectRow(QTableView* self, int row) {
	self->selectRow(row);
}

void QTableView_SelectColumn(QTableView* self, int column) {
	self->selectColumn(column);
}

void QTableView_HideRow(QTableView* self, int row) {
	self->hideRow(row);
}

void QTableView_HideColumn(QTableView* self, int column) {
	self->hideColumn(column);
}

void QTableView_ShowRow(QTableView* self, int row) {
	self->showRow(row);
}

void QTableView_ShowColumn(QTableView* self, int column) {
	self->showColumn(column);
}

void QTableView_ResizeRowToContents(QTableView* self, int row) {
	self->resizeRowToContents(row);
}

void QTableView_ResizeRowsToContents(QTableView* self) {
	self->resizeRowsToContents();
}

void QTableView_ResizeColumnToContents(QTableView* self, int column) {
	self->resizeColumnToContents(column);
}

void QTableView_ResizeColumnsToContents(QTableView* self) {
	self->resizeColumnsToContents();
}

void QTableView_SortByColumn(QTableView* self, int column, int order) {
	self->sortByColumn(column, static_cast<Qt::SortOrder>(order));
}

void QTableView_SetShowGrid(QTableView* self, bool show) {
	self->setShowGrid(show);
}

libqt_string QTableView_Tr2(const char* s, const char* c) {
	QString _ret = QTableView::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTableView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTableView::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QTableView_QBaseSetModel(QTableView* self, QAbstractItemModel* model) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SetModel_IsBase(true);
	vqtableview->setModel(model);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetModel(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SetModel_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetModel_Callback>(slot));
}
}

// Base class handler implementation
void QTableView_QBaseSetRootIndex(QTableView* self, const QModelIndex* index) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SetRootIndex_IsBase(true);
	vqtableview->setRootIndex(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetRootIndex(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SetRootIndex_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetRootIndex_Callback>(slot));
}
}

// Base class handler implementation
void QTableView_QBaseSetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SetSelectionModel_IsBase(true);
	vqtableview->setSelectionModel(selectionModel);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetSelectionModel(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SetSelectionModel_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetSelectionModel_Callback>(slot));
}
}

// Base class handler implementation
void QTableView_QBaseDoItemsLayout(QTableView* self) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_DoItemsLayout_IsBase(true);
	vqtableview->doItemsLayout();
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDoItemsLayout(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_DoItemsLayout_Callback(reinterpret_cast<VirtualQTableView::QTableView_DoItemsLayout_Callback>(slot));
}
}

// Base class handler implementation
QRect* QTableView_QBaseVisualRect(const QTableView* self, const QModelIndex* index) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_VisualRect_IsBase(true);
	return new QRect(vqtableview->visualRect(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVisualRect(const QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_VisualRect_Callback(reinterpret_cast<VirtualQTableView::QTableView_VisualRect_Callback>(slot));
}
}

// Base class handler implementation
void QTableView_QBaseScrollTo(QTableView* self, const QModelIndex* index, int hint) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ScrollTo_IsBase(true);
	vqtableview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnScrollTo(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ScrollTo_Callback(reinterpret_cast<VirtualQTableView::QTableView_ScrollTo_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QTableView_QBaseIndexAt(const QTableView* self, const QPoint* p) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_IndexAt_IsBase(true);
	return new QModelIndex(vqtableview->indexAt(*p));
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnIndexAt(const QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_IndexAt_Callback(reinterpret_cast<VirtualQTableView::QTableView_IndexAt_Callback>(slot));
}
}

void QTableView_Delete(QTableView* self) {
    delete self;
}

