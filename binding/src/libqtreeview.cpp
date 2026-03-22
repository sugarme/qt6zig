#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QDragMoveEvent>
#include <QEvent>
#include <QHeaderView>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QModelIndex>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QTreeView>
#include <QWidget>
#include <qtreeview.h>
#include "libqtreeview.h"
#include "libqtreeview.hxx"

QTreeView* QTreeView_new(QWidget* parent) {
	 return new VirtualQTreeView(parent);
}

QTreeView* QTreeView_new2() {
	 return new VirtualQTreeView();
}

libqt_string QTreeView_Tr(const char* s) {
	QString _ret = QTreeView::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTreeView_SetModel(QTreeView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QTreeView_SetRootIndex(QTreeView* self, const QModelIndex* index) {
	self->setRootIndex(*index);
}

void QTreeView_SetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QHeaderView* QTreeView_Header(const QTreeView* self) {
	return self->header();
}

void QTreeView_SetHeader(QTreeView* self, QHeaderView* header) {
	self->setHeader(header);
}

int QTreeView_AutoExpandDelay(const QTreeView* self) {
	return self->autoExpandDelay();
}

void QTreeView_SetAutoExpandDelay(QTreeView* self, int delay) {
	self->setAutoExpandDelay(delay);
}

int QTreeView_Indentation(const QTreeView* self) {
	return self->indentation();
}

void QTreeView_SetIndentation(QTreeView* self, int i) {
	self->setIndentation(i);
}

void QTreeView_ResetIndentation(QTreeView* self) {
	self->resetIndentation();
}

bool QTreeView_RootIsDecorated(const QTreeView* self) {
	return self->rootIsDecorated();
}

void QTreeView_SetRootIsDecorated(QTreeView* self, bool show) {
	self->setRootIsDecorated(show);
}

bool QTreeView_UniformRowHeights(const QTreeView* self) {
	return self->uniformRowHeights();
}

void QTreeView_SetUniformRowHeights(QTreeView* self, bool uniform) {
	self->setUniformRowHeights(uniform);
}

bool QTreeView_ItemsExpandable(const QTreeView* self) {
	return self->itemsExpandable();
}

void QTreeView_SetItemsExpandable(QTreeView* self, bool enable) {
	self->setItemsExpandable(enable);
}

bool QTreeView_ExpandsOnDoubleClick(const QTreeView* self) {
	return self->expandsOnDoubleClick();
}

void QTreeView_SetExpandsOnDoubleClick(QTreeView* self, bool enable) {
	self->setExpandsOnDoubleClick(enable);
}

int QTreeView_ColumnViewportPosition(const QTreeView* self, int column) {
	return self->columnViewportPosition(column);
}

int QTreeView_ColumnWidth(const QTreeView* self, int column) {
	return self->columnWidth(column);
}

void QTreeView_SetColumnWidth(QTreeView* self, int column, int width) {
	self->setColumnWidth(column, width);
}

int QTreeView_ColumnAt(const QTreeView* self, int x) {
	return self->columnAt(x);
}

bool QTreeView_IsColumnHidden(const QTreeView* self, int column) {
	return self->isColumnHidden(column);
}

void QTreeView_SetColumnHidden(QTreeView* self, int column, bool hide) {
	self->setColumnHidden(column, hide);
}

bool QTreeView_IsHeaderHidden(const QTreeView* self) {
	return self->isHeaderHidden();
}

void QTreeView_SetHeaderHidden(QTreeView* self, bool hide) {
	self->setHeaderHidden(hide);
}

bool QTreeView_IsRowHidden(const QTreeView* self, int row, const QModelIndex* parent) {
	return self->isRowHidden(row, *parent);
}

void QTreeView_SetRowHidden(QTreeView* self, int row, const QModelIndex* parent, bool hide) {
	self->setRowHidden(row, *parent, hide);
}

bool QTreeView_IsFirstColumnSpanned(const QTreeView* self, int row, const QModelIndex* parent) {
	return self->isFirstColumnSpanned(row, *parent);
}

void QTreeView_SetFirstColumnSpanned(QTreeView* self, int row, const QModelIndex* parent, bool span) {
	self->setFirstColumnSpanned(row, *parent, span);
}

bool QTreeView_IsExpanded(const QTreeView* self, const QModelIndex* index) {
	return self->isExpanded(*index);
}

void QTreeView_SetExpanded(QTreeView* self, const QModelIndex* index, bool expand) {
	self->setExpanded(*index, expand);
}

void QTreeView_SetSortingEnabled(QTreeView* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTreeView_IsSortingEnabled(const QTreeView* self) {
	return self->isSortingEnabled();
}

void QTreeView_SetAnimated(QTreeView* self, bool enable) {
	self->setAnimated(enable);
}

bool QTreeView_IsAnimated(const QTreeView* self) {
	return self->isAnimated();
}

void QTreeView_SetAllColumnsShowFocus(QTreeView* self, bool enable) {
	self->setAllColumnsShowFocus(enable);
}

bool QTreeView_AllColumnsShowFocus(const QTreeView* self) {
	return self->allColumnsShowFocus();
}

void QTreeView_SetWordWrap(QTreeView* self, bool on) {
	self->setWordWrap(on);
}

bool QTreeView_WordWrap(const QTreeView* self) {
	return self->wordWrap();
}

void QTreeView_SetTreePosition(QTreeView* self, int logicalIndex) {
	self->setTreePosition(logicalIndex);
}

int QTreeView_TreePosition(const QTreeView* self) {
	return self->treePosition();
}

void QTreeView_KeyboardSearch(QTreeView* self, const libqt_string search) {
	self->keyboardSearch(QString::fromUtf8(search.data, search.len));
}

QRect* QTreeView_VisualRect(const QTreeView* self, const QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QTreeView_ScrollTo(QTreeView* self, const QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QTreeView_IndexAt(const QTreeView* self, const QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

QModelIndex* QTreeView_IndexAbove(const QTreeView* self, const QModelIndex* index) {
	return new QModelIndex(self->indexAbove(*index));
}

QModelIndex* QTreeView_IndexBelow(const QTreeView* self, const QModelIndex* index) {
	return new QModelIndex(self->indexBelow(*index));
}

void QTreeView_DoItemsLayout(QTreeView* self) {
	self->doItemsLayout();
}

void QTreeView_Reset(QTreeView* self) {
	self->reset();
}

void QTreeView_DataChanged(QTreeView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles) {
	self->dataChanged(*topLeft, *bottomRight, *roles);
}

void QTreeView_SelectAll(QTreeView* self) {
	self->selectAll();
}

void QTreeView_Expanded(QTreeView* self, const QModelIndex* index) {
	self->expanded(*index);
}

void QTreeView_Connect_Expanded(QTreeView* self, intptr_t slot) {
    void (*slotFunc)(QTreeView*, const QModelIndex*) = reinterpret_cast<void (*)(QTreeView*, const QModelIndex*)>(slot);
    QTreeView::connect(self, &QTreeView::expanded, [self, slotFunc](const QModelIndex& index) {
	slotFunc(self, index);
    });
}

void QTreeView_Collapsed(QTreeView* self, const QModelIndex* index) {
	self->collapsed(*index);
}

void QTreeView_Connect_Collapsed(QTreeView* self, intptr_t slot) {
    void (*slotFunc)(QTreeView*, const QModelIndex*) = reinterpret_cast<void (*)(QTreeView*, const QModelIndex*)>(slot);
    QTreeView::connect(self, &QTreeView::collapsed, [self, slotFunc](const QModelIndex& index) {
	slotFunc(self, index);
    });
}

void QTreeView_HideColumn(QTreeView* self, int column) {
	self->hideColumn(column);
}

void QTreeView_ShowColumn(QTreeView* self, int column) {
	self->showColumn(column);
}

void QTreeView_Expand(QTreeView* self, const QModelIndex* index) {
	self->expand(*index);
}

void QTreeView_Collapse(QTreeView* self, const QModelIndex* index) {
	self->collapse(*index);
}

void QTreeView_ResizeColumnToContents(QTreeView* self, int column) {
	self->resizeColumnToContents(column);
}

void QTreeView_SortByColumn(QTreeView* self, int column, int order) {
	self->sortByColumn(column, static_cast<Qt::SortOrder>(order));
}

void QTreeView_ExpandAll(QTreeView* self) {
	self->expandAll();
}

void QTreeView_ExpandRecursively(QTreeView* self, const QModelIndex* index) {
	self->expandRecursively(*index);
}

void QTreeView_CollapseAll(QTreeView* self) {
	self->collapseAll();
}

void QTreeView_ExpandToDepth(QTreeView* self, int depth) {
	self->expandToDepth(depth);
}

libqt_string QTreeView_Tr2(const char* s, const char* c) {
	QString _ret = QTreeView::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTreeView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTreeView::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTreeView_ExpandRecursively2(QTreeView* self, const QModelIndex* index, int depth) {
	self->expandRecursively(*index, depth);
}

// Base class handler implementation
void QTreeView_QBaseSetModel(QTreeView* self, QAbstractItemModel* model) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SetModel_IsBase(true);
	vqtreeview->setModel(model);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetModel(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SetModel_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetModel_Callback>(slot));
}
}

// Base class handler implementation
void QTreeView_QBaseSetRootIndex(QTreeView* self, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SetRootIndex_IsBase(true);
	vqtreeview->setRootIndex(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetRootIndex(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SetRootIndex_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetRootIndex_Callback>(slot));
}
}

// Base class handler implementation
void QTreeView_QBaseSetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SetSelectionModel_IsBase(true);
	vqtreeview->setSelectionModel(selectionModel);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetSelectionModel(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SetSelectionModel_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetSelectionModel_Callback>(slot));
}
}

// Base class handler implementation
void QTreeView_QBaseKeyboardSearch(QTreeView* self, const libqt_string search) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_KeyboardSearch_IsBase(true);
	vqtreeview->keyboardSearch(QString::fromUtf8(search.data, search.len));
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnKeyboardSearch(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_KeyboardSearch_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_KeyboardSearch_Callback>(slot));
}
}

// Base class handler implementation
QRect* QTreeView_QBaseVisualRect(const QTreeView* self, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_VisualRect_IsBase(true);
	return new QRect(vqtreeview->visualRect(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVisualRect(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_VisualRect_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VisualRect_Callback>(slot));
}
}

// Base class handler implementation
void QTreeView_QBaseScrollTo(QTreeView* self, const QModelIndex* index, int hint) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ScrollTo_IsBase(true);
	vqtreeview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScrollTo(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ScrollTo_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ScrollTo_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QTreeView_QBaseIndexAt(const QTreeView* self, const QPoint* p) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_IndexAt_IsBase(true);
	return new QModelIndex(vqtreeview->indexAt(*p));
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIndexAt(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_IndexAt_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_IndexAt_Callback>(slot));
}
}

// Base class handler implementation
void QTreeView_QBaseDoItemsLayout(QTreeView* self) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DoItemsLayout_IsBase(true);
	vqtreeview->doItemsLayout();
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDoItemsLayout(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DoItemsLayout_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DoItemsLayout_Callback>(slot));
}
}

// Base class handler implementation
void QTreeView_QBaseReset(QTreeView* self) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_Reset_IsBase(true);
	vqtreeview->reset();
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnReset(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_Reset_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Reset_Callback>(slot));
}
}

// Base class handler implementation
void QTreeView_QBaseDataChanged(QTreeView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DataChanged_IsBase(true);
	vqtreeview->dataChanged(*topLeft, *bottomRight, *roles);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDataChanged(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DataChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DataChanged_Callback>(slot));
}
}

// Base class handler implementation
void QTreeView_QBaseSelectAll(QTreeView* self) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SelectAll_IsBase(true);
	vqtreeview->selectAll();
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectAll(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SelectAll_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SelectAll_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_VerticalScrollbarValueChanged(QTreeView* self, int value) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->verticalScrollbarValueChanged(value);
	} else {
	self->QTreeView::verticalScrollbarValueChanged(value);
}
}

// Base class handler implementation
void QTreeView_QBaseVerticalScrollbarValueChanged(QTreeView* self, int value) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_VerticalScrollbarValueChanged_IsBase(true);
	vqtreeview->verticalScrollbarValueChanged(value);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVerticalScrollbarValueChanged(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VerticalScrollbarValueChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_ScrollContentsBy(QTreeView* self, int dx, int dy) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->scrollContentsBy(dx, dy);
	} else {
	self->QTreeView::scrollContentsBy(dx, dy);
}
}

// Base class handler implementation
void QTreeView_QBaseScrollContentsBy(QTreeView* self, int dx, int dy) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ScrollContentsBy_IsBase(true);
	vqtreeview->scrollContentsBy(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScrollContentsBy(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ScrollContentsBy_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_RowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->rowsInserted(*parent, start, end);
	} else {
	self->QTreeView::rowsInserted(*parent, start, end);
}
}

// Base class handler implementation
void QTreeView_QBaseRowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_RowsInserted_IsBase(true);
	vqtreeview->rowsInserted(*parent, start, end);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowsInserted(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_RowsInserted_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowsInserted_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_RowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->rowsAboutToBeRemoved(*parent, start, end);
	} else {
	self->QTreeView::rowsAboutToBeRemoved(*parent, start, end);
}
}

// Base class handler implementation
void QTreeView_QBaseRowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_RowsAboutToBeRemoved_IsBase(true);
	vqtreeview->rowsAboutToBeRemoved(*parent, start, end);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowsAboutToBeRemoved(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowsAboutToBeRemoved_Callback>(slot));
}
}

// Derived class handler implementation
QModelIndex* QTreeView_MoveCursor(QTreeView* self, int cursorAction, int modifiers) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	return new QModelIndex(vqtreeview->moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
	} else {
	return new QModelIndex(self->QTreeView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
}
}

// Base class handler implementation
QModelIndex* QTreeView_QBaseMoveCursor(QTreeView* self, int cursorAction, int modifiers) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_MoveCursor_IsBase(true);
	return new QModelIndex(vqtreeview->moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMoveCursor(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_MoveCursor_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MoveCursor_Callback>(slot));
}
}

// Derived class handler implementation
int QTreeView_HorizontalOffset(const QTreeView* self) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	return vqtreeview->horizontalOffset();
	} else {
	return self->QTreeView::horizontalOffset();
}
}

// Base class handler implementation
int QTreeView_QBaseHorizontalOffset(const QTreeView* self) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_HorizontalOffset_IsBase(true);
	return vqtreeview->horizontalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHorizontalOffset(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_HorizontalOffset_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HorizontalOffset_Callback>(slot));
}
}

// Derived class handler implementation
int QTreeView_VerticalOffset(const QTreeView* self) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	return vqtreeview->verticalOffset();
	} else {
	return self->QTreeView::verticalOffset();
}
}

// Base class handler implementation
int QTreeView_QBaseVerticalOffset(const QTreeView* self) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_VerticalOffset_IsBase(true);
	return vqtreeview->verticalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVerticalOffset(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_VerticalOffset_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VerticalOffset_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_SetSelection(QTreeView* self, const QRect* rect, int command) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
	} else {
	self->QTreeView::setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Base class handler implementation
void QTreeView_QBaseSetSelection(QTreeView* self, const QRect* rect, int command) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SetSelection_IsBase(true);
	vqtreeview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetSelection(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SetSelection_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetSelection_Callback>(slot));
}
}

// Derived class handler implementation
QRegion* QTreeView_VisualRegionForSelection(const QTreeView* self, const QItemSelection* selection) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	return new QRegion(vqtreeview->visualRegionForSelection(*selection));
	} else {
	return new QRegion(self->QTreeView::visualRegionForSelection(*selection));
}
}

// Base class handler implementation
QRegion* QTreeView_QBaseVisualRegionForSelection(const QTreeView* self, const QItemSelection* selection) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_VisualRegionForSelection_IsBase(true);
	return new QRegion(vqtreeview->visualRegionForSelection(*selection));
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVisualRegionForSelection(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VisualRegionForSelection_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QTreeView_SelectedIndexes(const QTreeView* self) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	return vqtreeview->selectedIndexes();
	} else {
	return self->QTreeView::selectedIndexes();
}
}

// Base class handler implementation
libqt_list QTreeView_QBaseSelectedIndexes(const QTreeView* self) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SelectedIndexes_IsBase(true);
	return vqtreeview->selectedIndexes();
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectedIndexes(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SelectedIndexes_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SelectedIndexes_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_ChangeEvent(QTreeView* self, QEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->changeEvent(event);
	} else {
	self->QTreeView::changeEvent(event);
}
}

// Base class handler implementation
void QTreeView_QBaseChangeEvent(QTreeView* self, QEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ChangeEvent_IsBase(true);
	vqtreeview->changeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnChangeEvent(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ChangeEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_TimerEvent(QTreeView* self, QTimerEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->timerEvent(event);
	} else {
	self->QTreeView::timerEvent(event);
}
}

// Base class handler implementation
void QTreeView_QBaseTimerEvent(QTreeView* self, QTimerEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_TimerEvent_IsBase(true);
	vqtreeview->timerEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnTimerEvent(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_TimerEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_PaintEvent(QTreeView* self, QPaintEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->paintEvent(event);
	} else {
	self->QTreeView::paintEvent(event);
}
}

// Base class handler implementation
void QTreeView_QBasePaintEvent(QTreeView* self, QPaintEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_PaintEvent_IsBase(true);
	vqtreeview->paintEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnPaintEvent(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_PaintEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_DrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->drawRow(painter, *options, *index);
	} else {
	self->QTreeView::drawRow(painter, *options, *index);
}
}

// Base class handler implementation
void QTreeView_QBaseDrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DrawRow_IsBase(true);
	vqtreeview->drawRow(painter, *options, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawRow(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DrawRow_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DrawRow_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_DrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->drawBranches(painter, *rect, *index);
	} else {
	self->QTreeView::drawBranches(painter, *rect, *index);
}
}

// Base class handler implementation
void QTreeView_QBaseDrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DrawBranches_IsBase(true);
	vqtreeview->drawBranches(painter, *rect, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawBranches(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DrawBranches_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DrawBranches_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_MousePressEvent(QTreeView* self, QMouseEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->mousePressEvent(event);
	} else {
	self->QTreeView::mousePressEvent(event);
}
}

// Base class handler implementation
void QTreeView_QBaseMousePressEvent(QTreeView* self, QMouseEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_MousePressEvent_IsBase(true);
	vqtreeview->mousePressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMousePressEvent(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_MousePressEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_MouseReleaseEvent(QTreeView* self, QMouseEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->mouseReleaseEvent(event);
	} else {
	self->QTreeView::mouseReleaseEvent(event);
}
}

// Base class handler implementation
void QTreeView_QBaseMouseReleaseEvent(QTreeView* self, QMouseEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_MouseReleaseEvent_IsBase(true);
	vqtreeview->mouseReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseReleaseEvent(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_MouseDoubleClickEvent(QTreeView* self, QMouseEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->mouseDoubleClickEvent(event);
	} else {
	self->QTreeView::mouseDoubleClickEvent(event);
}
}

// Base class handler implementation
void QTreeView_QBaseMouseDoubleClickEvent(QTreeView* self, QMouseEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_MouseDoubleClickEvent_IsBase(true);
	vqtreeview->mouseDoubleClickEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseDoubleClickEvent(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_MouseMoveEvent(QTreeView* self, QMouseEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->mouseMoveEvent(event);
	} else {
	self->QTreeView::mouseMoveEvent(event);
}
}

// Base class handler implementation
void QTreeView_QBaseMouseMoveEvent(QTreeView* self, QMouseEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_MouseMoveEvent_IsBase(true);
	vqtreeview->mouseMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseMoveEvent(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_KeyPressEvent(QTreeView* self, QKeyEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->keyPressEvent(event);
	} else {
	self->QTreeView::keyPressEvent(event);
}
}

// Base class handler implementation
void QTreeView_QBaseKeyPressEvent(QTreeView* self, QKeyEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_KeyPressEvent_IsBase(true);
	vqtreeview->keyPressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnKeyPressEvent(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_KeyPressEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_DragMoveEvent(QTreeView* self, QDragMoveEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->dragMoveEvent(event);
	} else {
	self->QTreeView::dragMoveEvent(event);
}
}

// Base class handler implementation
void QTreeView_QBaseDragMoveEvent(QTreeView* self, QDragMoveEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DragMoveEvent_IsBase(true);
	vqtreeview->dragMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDragMoveEvent(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DragMoveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DragMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QTreeView_ViewportEvent(QTreeView* self, QEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	return vqtreeview->viewportEvent(event);
	} else {
	return self->QTreeView::viewportEvent(event);
}
}

// Base class handler implementation
bool QTreeView_QBaseViewportEvent(QTreeView* self, QEvent* event) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ViewportEvent_IsBase(true);
	return vqtreeview->viewportEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnViewportEvent(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ViewportEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ViewportEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_UpdateGeometries(QTreeView* self) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->updateGeometries();
	} else {
	self->QTreeView::updateGeometries();
}
}

// Base class handler implementation
void QTreeView_QBaseUpdateGeometries(QTreeView* self) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_UpdateGeometries_IsBase(true);
	vqtreeview->updateGeometries();
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateGeometries(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_UpdateGeometries_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_UpdateGeometries_Callback>(slot));
}
}

// Derived class handler implementation
QSize* QTreeView_ViewportSizeHint(const QTreeView* self) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	return new QSize(vqtreeview->viewportSizeHint());
	} else {
	return new QSize(self->QTreeView::viewportSizeHint());
}
}

// Base class handler implementation
QSize* QTreeView_QBaseViewportSizeHint(const QTreeView* self) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ViewportSizeHint_IsBase(true);
	return new QSize(vqtreeview->viewportSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnViewportSizeHint(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ViewportSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
int QTreeView_SizeHintForColumn(const QTreeView* self, int column) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	return vqtreeview->sizeHintForColumn(column);
	} else {
	return self->QTreeView::sizeHintForColumn(column);
}
}

// Base class handler implementation
int QTreeView_QBaseSizeHintForColumn(const QTreeView* self, int column) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SizeHintForColumn_IsBase(true);
	return vqtreeview->sizeHintForColumn(column);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSizeHintForColumn(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SizeHintForColumn_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_HorizontalScrollbarAction(QTreeView* self, int action) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->horizontalScrollbarAction(action);
	} else {
	self->QTreeView::horizontalScrollbarAction(action);
}
}

// Base class handler implementation
void QTreeView_QBaseHorizontalScrollbarAction(QTreeView* self, int action) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_HorizontalScrollbarAction_IsBase(true);
	vqtreeview->horizontalScrollbarAction(action);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHorizontalScrollbarAction(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HorizontalScrollbarAction_Callback>(slot));
}
}

// Derived class handler implementation
bool QTreeView_IsIndexHidden(const QTreeView* self, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	return vqtreeview->isIndexHidden(*index);
	} else {
	return self->QTreeView::isIndexHidden(*index);
}
}

// Base class handler implementation
bool QTreeView_QBaseIsIndexHidden(const QTreeView* self, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_IsIndexHidden_IsBase(true);
	return vqtreeview->isIndexHidden(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIsIndexHidden(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_IsIndexHidden_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_IsIndexHidden_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_SelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->selectionChanged(*selected, *deselected);
	} else {
	self->QTreeView::selectionChanged(*selected, *deselected);
}
}

// Base class handler implementation
void QTreeView_QBaseSelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SelectionChanged_IsBase(true);
	vqtreeview->selectionChanged(*selected, *deselected);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectionChanged(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_SelectionChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SelectionChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_CurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->currentChanged(*current, *previous);
	} else {
	self->QTreeView::currentChanged(*current, *previous);
}
}

// Base class handler implementation
void QTreeView_QBaseCurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_CurrentChanged_IsBase(true);
	vqtreeview->currentChanged(*current, *previous);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCurrentChanged(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_CurrentChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_CurrentChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_ColumnResized(QTreeView* self, int column, int oldSize, int newSize) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->columnResized(column, oldSize, newSize);
	} else {
	self->QTreeView::columnResized(column, oldSize, newSize);
}
}

// Base class handler implementation
void QTreeView_QBaseColumnResized(QTreeView* self, int column, int oldSize, int newSize) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ColumnResized_IsBase(true);
	vqtreeview->columnResized(column, oldSize, newSize);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnColumnResized(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ColumnResized_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ColumnResized_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_ColumnCountChanged(QTreeView* self, int oldCount, int newCount) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->columnCountChanged(oldCount, newCount);
	} else {
	self->QTreeView::columnCountChanged(oldCount, newCount);
}
}

// Base class handler implementation
void QTreeView_QBaseColumnCountChanged(QTreeView* self, int oldCount, int newCount) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ColumnCountChanged_IsBase(true);
	vqtreeview->columnCountChanged(oldCount, newCount);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnColumnCountChanged(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ColumnCountChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ColumnCountChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_ColumnMoved(QTreeView* self) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->columnMoved();
	} else {
	self->QTreeView::columnMoved();
}
}

// Base class handler implementation
void QTreeView_QBaseColumnMoved(QTreeView* self) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ColumnMoved_IsBase(true);
	vqtreeview->columnMoved();
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnColumnMoved(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_ColumnMoved_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ColumnMoved_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_Reexpand(QTreeView* self) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->reexpand();
	} else {
	self->QTreeView::reexpand();
}
}

// Base class handler implementation
void QTreeView_QBaseReexpand(QTreeView* self) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_Reexpand_IsBase(true);
	vqtreeview->reexpand();
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnReexpand(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_Reexpand_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Reexpand_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_RowsRemoved(QTreeView* self, const QModelIndex* parent, int first, int last) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->rowsRemoved(*parent, first, last);
	} else {
	self->QTreeView::rowsRemoved(*parent, first, last);
}
}

// Base class handler implementation
void QTreeView_QBaseRowsRemoved(QTreeView* self, const QModelIndex* parent, int first, int last) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_RowsRemoved_IsBase(true);
	vqtreeview->rowsRemoved(*parent, first, last);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowsRemoved(QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_RowsRemoved_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowsRemoved_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeView_DrawTree(const QTreeView* self, QPainter* painter, const QRegion* region) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	vqtreeview->drawTree(painter, *region);
	} else {
	self->QTreeView::drawTree(painter, *region);
}
}

// Base class handler implementation
void QTreeView_QBaseDrawTree(const QTreeView* self, QPainter* painter, const QRegion* region) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DrawTree_IsBase(true);
	vqtreeview->drawTree(painter, *region);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawTree(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_DrawTree_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DrawTree_Callback>(slot));
}
}

// Derived class handler implementation
int QTreeView_IndexRowSizeHint(const QTreeView* self, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	return vqtreeview->indexRowSizeHint(*index);
	} else {
	return self->QTreeView::indexRowSizeHint(*index);
}
}

// Base class handler implementation
int QTreeView_QBaseIndexRowSizeHint(const QTreeView* self, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_IndexRowSizeHint_IsBase(true);
	return vqtreeview->indexRowSizeHint(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIndexRowSizeHint(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_IndexRowSizeHint_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_IndexRowSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
int QTreeView_RowHeight(const QTreeView* self, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
	return vqtreeview->rowHeight(*index);
	} else {
	return self->QTreeView::rowHeight(*index);
}
}

// Base class handler implementation
int QTreeView_QBaseRowHeight(const QTreeView* self, const QModelIndex* index) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_RowHeight_IsBase(true);
	return vqtreeview->rowHeight(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowHeight(const QTreeView* self, intptr_t slot) {
	auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
	if (vqtreeview && vqtreeview->isVirtualQTreeView) {
vqtreeview->setQTreeView_RowHeight_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowHeight_Callback>(slot));
}
}

void QTreeView_Delete(QTreeView* self) {
    delete self;
}

