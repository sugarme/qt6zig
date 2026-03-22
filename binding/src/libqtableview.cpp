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

// Derived class handler implementation
void QTableView_ScrollContentsBy(QTableView* self, int dx, int dy) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->scrollContentsBy(dx, dy);
	} else {
	self->QTableView::scrollContentsBy(dx, dy);
}
}

// Base class handler implementation
void QTableView_QBaseScrollContentsBy(QTableView* self, int dx, int dy) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ScrollContentsBy_IsBase(true);
	vqtableview->scrollContentsBy(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnScrollContentsBy(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTableView::QTableView_ScrollContentsBy_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_InitViewItemOption(const QTableView* self, QStyleOptionViewItem* option) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->initViewItemOption(option);
	} else {
	self->QTableView::initViewItemOption(option);
}
}

// Base class handler implementation
void QTableView_QBaseInitViewItemOption(const QTableView* self, QStyleOptionViewItem* option) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_InitViewItemOption_IsBase(true);
	vqtableview->initViewItemOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnInitViewItemOption(const QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_InitViewItemOption_Callback(reinterpret_cast<VirtualQTableView::QTableView_InitViewItemOption_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_PaintEvent(QTableView* self, QPaintEvent* e) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->paintEvent(e);
	} else {
	self->QTableView::paintEvent(e);
}
}

// Base class handler implementation
void QTableView_QBasePaintEvent(QTableView* self, QPaintEvent* e) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_PaintEvent_IsBase(true);
	vqtableview->paintEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnPaintEvent(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_PaintEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_TimerEvent(QTableView* self, QTimerEvent* event) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->timerEvent(event);
	} else {
	self->QTableView::timerEvent(event);
}
}

// Base class handler implementation
void QTableView_QBaseTimerEvent(QTableView* self, QTimerEvent* event) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_TimerEvent_IsBase(true);
	vqtableview->timerEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnTimerEvent(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_TimerEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_DropEvent(QTableView* self, QDropEvent* event) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->dropEvent(event);
	} else {
	self->QTableView::dropEvent(event);
}
}

// Base class handler implementation
void QTableView_QBaseDropEvent(QTableView* self, QDropEvent* event) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_DropEvent_IsBase(true);
	vqtableview->dropEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDropEvent(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_DropEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
int QTableView_HorizontalOffset(const QTableView* self) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	return vqtableview->horizontalOffset();
	} else {
	return self->QTableView::horizontalOffset();
}
}

// Base class handler implementation
int QTableView_QBaseHorizontalOffset(const QTableView* self) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_HorizontalOffset_IsBase(true);
	return vqtableview->horizontalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHorizontalOffset(const QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_HorizontalOffset_Callback(reinterpret_cast<VirtualQTableView::QTableView_HorizontalOffset_Callback>(slot));
}
}

// Derived class handler implementation
int QTableView_VerticalOffset(const QTableView* self) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	return vqtableview->verticalOffset();
	} else {
	return self->QTableView::verticalOffset();
}
}

// Base class handler implementation
int QTableView_QBaseVerticalOffset(const QTableView* self) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_VerticalOffset_IsBase(true);
	return vqtableview->verticalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVerticalOffset(const QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_VerticalOffset_Callback(reinterpret_cast<VirtualQTableView::QTableView_VerticalOffset_Callback>(slot));
}
}

// Derived class handler implementation
QModelIndex* QTableView_MoveCursor(QTableView* self, int cursorAction, int modifiers) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	return new QModelIndex(vqtableview->moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
	} else {
	return new QModelIndex(self->QTableView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
}
}

// Base class handler implementation
QModelIndex* QTableView_QBaseMoveCursor(QTableView* self, int cursorAction, int modifiers) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_MoveCursor_IsBase(true);
	return new QModelIndex(vqtableview->moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMoveCursor(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_MoveCursor_Callback(reinterpret_cast<VirtualQTableView::QTableView_MoveCursor_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_SetSelection(QTableView* self, const QRect* rect, int command) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
	} else {
	self->QTableView::setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Base class handler implementation
void QTableView_QBaseSetSelection(QTableView* self, const QRect* rect, int command) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SetSelection_IsBase(true);
	vqtableview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetSelection(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SetSelection_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetSelection_Callback>(slot));
}
}

// Derived class handler implementation
QRegion* QTableView_VisualRegionForSelection(const QTableView* self, const QItemSelection* selection) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	return new QRegion(vqtableview->visualRegionForSelection(*selection));
	} else {
	return new QRegion(self->QTableView::visualRegionForSelection(*selection));
}
}

// Base class handler implementation
QRegion* QTableView_QBaseVisualRegionForSelection(const QTableView* self, const QItemSelection* selection) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_VisualRegionForSelection_IsBase(true);
	return new QRegion(vqtableview->visualRegionForSelection(*selection));
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVisualRegionForSelection(const QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQTableView::QTableView_VisualRegionForSelection_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QTableView_SelectedIndexes(const QTableView* self) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	return vqtableview->selectedIndexes();
	} else {
	return self->QTableView::selectedIndexes();
}
}

// Base class handler implementation
libqt_list QTableView_QBaseSelectedIndexes(const QTableView* self) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SelectedIndexes_IsBase(true);
	return vqtableview->selectedIndexes();
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSelectedIndexes(const QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SelectedIndexes_Callback(reinterpret_cast<VirtualQTableView::QTableView_SelectedIndexes_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_UpdateGeometries(QTableView* self) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->updateGeometries();
	} else {
	self->QTableView::updateGeometries();
}
}

// Base class handler implementation
void QTableView_QBaseUpdateGeometries(QTableView* self) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_UpdateGeometries_IsBase(true);
	vqtableview->updateGeometries();
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnUpdateGeometries(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_UpdateGeometries_Callback(reinterpret_cast<VirtualQTableView::QTableView_UpdateGeometries_Callback>(slot));
}
}

// Derived class handler implementation
QSize* QTableView_ViewportSizeHint(const QTableView* self) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	return new QSize(vqtableview->viewportSizeHint());
	} else {
	return new QSize(self->QTableView::viewportSizeHint());
}
}

// Base class handler implementation
QSize* QTableView_QBaseViewportSizeHint(const QTableView* self) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ViewportSizeHint_IsBase(true);
	return new QSize(vqtableview->viewportSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnViewportSizeHint(const QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQTableView::QTableView_ViewportSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
int QTableView_SizeHintForRow(const QTableView* self, int row) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	return vqtableview->sizeHintForRow(row);
	} else {
	return self->QTableView::sizeHintForRow(row);
}
}

// Base class handler implementation
int QTableView_QBaseSizeHintForRow(const QTableView* self, int row) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SizeHintForRow_IsBase(true);
	return vqtableview->sizeHintForRow(row);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSizeHintForRow(const QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SizeHintForRow_Callback(reinterpret_cast<VirtualQTableView::QTableView_SizeHintForRow_Callback>(slot));
}
}

// Derived class handler implementation
int QTableView_SizeHintForColumn(const QTableView* self, int column) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	return vqtableview->sizeHintForColumn(column);
	} else {
	return self->QTableView::sizeHintForColumn(column);
}
}

// Base class handler implementation
int QTableView_QBaseSizeHintForColumn(const QTableView* self, int column) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SizeHintForColumn_IsBase(true);
	return vqtableview->sizeHintForColumn(column);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSizeHintForColumn(const QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQTableView::QTableView_SizeHintForColumn_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_VerticalScrollbarAction(QTableView* self, int action) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->verticalScrollbarAction(action);
	} else {
	self->QTableView::verticalScrollbarAction(action);
}
}

// Base class handler implementation
void QTableView_QBaseVerticalScrollbarAction(QTableView* self, int action) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_VerticalScrollbarAction_IsBase(true);
	vqtableview->verticalScrollbarAction(action);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVerticalScrollbarAction(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQTableView::QTableView_VerticalScrollbarAction_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_HorizontalScrollbarAction(QTableView* self, int action) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->horizontalScrollbarAction(action);
	} else {
	self->QTableView::horizontalScrollbarAction(action);
}
}

// Base class handler implementation
void QTableView_QBaseHorizontalScrollbarAction(QTableView* self, int action) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_HorizontalScrollbarAction_IsBase(true);
	vqtableview->horizontalScrollbarAction(action);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHorizontalScrollbarAction(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQTableView::QTableView_HorizontalScrollbarAction_Callback>(slot));
}
}

// Derived class handler implementation
bool QTableView_IsIndexHidden(const QTableView* self, const QModelIndex* index) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	return vqtableview->isIndexHidden(*index);
	} else {
	return self->QTableView::isIndexHidden(*index);
}
}

// Base class handler implementation
bool QTableView_QBaseIsIndexHidden(const QTableView* self, const QModelIndex* index) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_IsIndexHidden_IsBase(true);
	return vqtableview->isIndexHidden(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnIsIndexHidden(const QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_IsIndexHidden_Callback(reinterpret_cast<VirtualQTableView::QTableView_IsIndexHidden_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_SelectionChanged(QTableView* self, const QItemSelection* selected, const QItemSelection* deselected) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->selectionChanged(*selected, *deselected);
	} else {
	self->QTableView::selectionChanged(*selected, *deselected);
}
}

// Base class handler implementation
void QTableView_QBaseSelectionChanged(QTableView* self, const QItemSelection* selected, const QItemSelection* deselected) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SelectionChanged_IsBase(true);
	vqtableview->selectionChanged(*selected, *deselected);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSelectionChanged(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_SelectionChanged_Callback(reinterpret_cast<VirtualQTableView::QTableView_SelectionChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_CurrentChanged(QTableView* self, const QModelIndex* current, const QModelIndex* previous) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->currentChanged(*current, *previous);
	} else {
	self->QTableView::currentChanged(*current, *previous);
}
}

// Base class handler implementation
void QTableView_QBaseCurrentChanged(QTableView* self, const QModelIndex* current, const QModelIndex* previous) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_CurrentChanged_IsBase(true);
	vqtableview->currentChanged(*current, *previous);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCurrentChanged(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_CurrentChanged_Callback(reinterpret_cast<VirtualQTableView::QTableView_CurrentChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_RowMoved(QTableView* self, int row, int oldIndex, int newIndex) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->rowMoved(row, oldIndex, newIndex);
	} else {
	self->QTableView::rowMoved(row, oldIndex, newIndex);
}
}

// Base class handler implementation
void QTableView_QBaseRowMoved(QTableView* self, int row, int oldIndex, int newIndex) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_RowMoved_IsBase(true);
	vqtableview->rowMoved(row, oldIndex, newIndex);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRowMoved(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_RowMoved_Callback(reinterpret_cast<VirtualQTableView::QTableView_RowMoved_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_ColumnMoved(QTableView* self, int column, int oldIndex, int newIndex) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->columnMoved(column, oldIndex, newIndex);
	} else {
	self->QTableView::columnMoved(column, oldIndex, newIndex);
}
}

// Base class handler implementation
void QTableView_QBaseColumnMoved(QTableView* self, int column, int oldIndex, int newIndex) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ColumnMoved_IsBase(true);
	vqtableview->columnMoved(column, oldIndex, newIndex);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnColumnMoved(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ColumnMoved_Callback(reinterpret_cast<VirtualQTableView::QTableView_ColumnMoved_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_RowResized(QTableView* self, int row, int oldHeight, int newHeight) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->rowResized(row, oldHeight, newHeight);
	} else {
	self->QTableView::rowResized(row, oldHeight, newHeight);
}
}

// Base class handler implementation
void QTableView_QBaseRowResized(QTableView* self, int row, int oldHeight, int newHeight) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_RowResized_IsBase(true);
	vqtableview->rowResized(row, oldHeight, newHeight);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRowResized(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_RowResized_Callback(reinterpret_cast<VirtualQTableView::QTableView_RowResized_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_ColumnResized(QTableView* self, int column, int oldWidth, int newWidth) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->columnResized(column, oldWidth, newWidth);
	} else {
	self->QTableView::columnResized(column, oldWidth, newWidth);
}
}

// Base class handler implementation
void QTableView_QBaseColumnResized(QTableView* self, int column, int oldWidth, int newWidth) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ColumnResized_IsBase(true);
	vqtableview->columnResized(column, oldWidth, newWidth);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnColumnResized(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ColumnResized_Callback(reinterpret_cast<VirtualQTableView::QTableView_ColumnResized_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_RowCountChanged(QTableView* self, int oldCount, int newCount) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->rowCountChanged(oldCount, newCount);
	} else {
	self->QTableView::rowCountChanged(oldCount, newCount);
}
}

// Base class handler implementation
void QTableView_QBaseRowCountChanged(QTableView* self, int oldCount, int newCount) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_RowCountChanged_IsBase(true);
	vqtableview->rowCountChanged(oldCount, newCount);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRowCountChanged(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_RowCountChanged_Callback(reinterpret_cast<VirtualQTableView::QTableView_RowCountChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QTableView_ColumnCountChanged(QTableView* self, int oldCount, int newCount) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
	vqtableview->columnCountChanged(oldCount, newCount);
	} else {
	self->QTableView::columnCountChanged(oldCount, newCount);
}
}

// Base class handler implementation
void QTableView_QBaseColumnCountChanged(QTableView* self, int oldCount, int newCount) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ColumnCountChanged_IsBase(true);
	vqtableview->columnCountChanged(oldCount, newCount);
}
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnColumnCountChanged(QTableView* self, intptr_t slot) {
	auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
	if (vqtableview && vqtableview->isVirtualQTableView) {
vqtableview->setQTableView_ColumnCountChanged_Callback(reinterpret_cast<VirtualQTableView::QTableView_ColumnCountChanged_Callback>(slot));
}
}

void QTableView_Delete(QTableView* self) {
    delete self;
}

