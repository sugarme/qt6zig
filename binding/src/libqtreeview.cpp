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
#include <type_traits>
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
	self->dataChanged(*topLeft, *bottomRight, QList<int>());
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
	vqtreeview->dataChanged(*topLeft, *bottomRight, QList<int>());
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

void QTreeView_Delete(QTreeView* self) {
    delete self;
}

