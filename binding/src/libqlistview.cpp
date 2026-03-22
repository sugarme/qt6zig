#include <QAbstractItemView>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QItemSelection>
#include <QListView>
#include <QModelIndex>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QWheelEvent>
#include <QWidget>
#include <qlistview.h>
#include "libqlistview.h"
#include "libqlistview.hxx"

QListView* QListView_new(QWidget* parent) {
	 return new VirtualQListView(parent);
}

QListView* QListView_new2() {
	 return new VirtualQListView();
}

libqt_string QListView_Tr(const char* s) {
	QString _ret = QListView::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QListView_SetMovement(QListView* self, int movement) {
	self->setMovement(static_cast<QListView::Movement>(movement));
}

int QListView_Movement(const QListView* self) {
	return self->movement();
}

void QListView_SetFlow(QListView* self, int flow) {
	self->setFlow(static_cast<QListView::Flow>(flow));
}

int QListView_Flow(const QListView* self) {
	return self->flow();
}

void QListView_SetWrapping(QListView* self, bool enable) {
	self->setWrapping(enable);
}

bool QListView_IsWrapping(const QListView* self) {
	return self->isWrapping();
}

void QListView_SetResizeMode(QListView* self, int mode) {
	self->setResizeMode(static_cast<QListView::ResizeMode>(mode));
}

int QListView_ResizeMode(const QListView* self) {
	return self->resizeMode();
}

void QListView_SetLayoutMode(QListView* self, int mode) {
	self->setLayoutMode(static_cast<QListView::LayoutMode>(mode));
}

int QListView_LayoutMode(const QListView* self) {
	return self->layoutMode();
}

void QListView_SetSpacing(QListView* self, int space) {
	self->setSpacing(space);
}

int QListView_Spacing(const QListView* self) {
	return self->spacing();
}

void QListView_SetBatchSize(QListView* self, int batchSize) {
	self->setBatchSize(batchSize);
}

int QListView_BatchSize(const QListView* self) {
	return self->batchSize();
}

void QListView_SetGridSize(QListView* self, const QSize* size) {
	self->setGridSize(*size);
}

QSize* QListView_GridSize(const QListView* self) {
	return new QSize(self->gridSize());
}

void QListView_SetViewMode(QListView* self, int mode) {
	self->setViewMode(static_cast<QMdiArea::ViewMode>(mode));
}

int QListView_ViewMode(const QListView* self) {
	return self->viewMode();
}

void QListView_ClearPropertyFlags(QListView* self) {
	self->clearPropertyFlags();
}

bool QListView_IsRowHidden(const QListView* self, int row) {
	return self->isRowHidden(row);
}

void QListView_SetRowHidden(QListView* self, int row, bool hide) {
	self->setRowHidden(row, hide);
}

void QListView_SetModelColumn(QListView* self, int column) {
	self->setModelColumn(column);
}

int QListView_ModelColumn(const QListView* self) {
	return self->modelColumn();
}

void QListView_SetUniformItemSizes(QListView* self, bool enable) {
	self->setUniformItemSizes(enable);
}

bool QListView_UniformItemSizes(const QListView* self) {
	return self->uniformItemSizes();
}

void QListView_SetWordWrap(QListView* self, bool on) {
	self->setWordWrap(on);
}

bool QListView_WordWrap(const QListView* self) {
	return self->wordWrap();
}

void QListView_SetSelectionRectVisible(QListView* self, bool show) {
	self->setSelectionRectVisible(show);
}

bool QListView_IsSelectionRectVisible(const QListView* self) {
	return self->isSelectionRectVisible();
}

void QListView_SetItemAlignment(QListView* self, int alignment) {
	self->setItemAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QListView_ItemAlignment(const QListView* self) {
	return self->itemAlignment();
}

QRect* QListView_VisualRect(const QListView* self, const QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QListView_ScrollTo(QListView* self, const QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QListView_IndexAt(const QListView* self, const QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

void QListView_DoItemsLayout(QListView* self) {
	self->doItemsLayout();
}

void QListView_Reset(QListView* self) {
	self->reset();
}

void QListView_SetRootIndex(QListView* self, const QModelIndex* index) {
	self->setRootIndex(*index);
}

void QListView_IndexesMoved(QListView* self, const libqt_list indexes) {
	self->indexesMoved(QList<QModelIndex>());
}

void QListView_Connect_IndexesMoved(QListView* self, intptr_t slot) {
    void (*slotFunc)(QListView*, libqt_list) = reinterpret_cast<void (*)(QListView*, libqt_list)>(slot);
    QListView::connect(self, &QListView::indexesMoved, [self, slotFunc](const QList<QModelIndex>& indexes) {
	slotFunc(self, indexes);
    });
}

libqt_string QListView_Tr2(const char* s, const char* c) {
	QString _ret = QListView::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QListView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QListView::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QRect* QListView_QBaseVisualRect(const QListView* self, const QModelIndex* index) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_VisualRect_IsBase(true);
	return new QRect(vqlistview->visualRect(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVisualRect(const QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_VisualRect_Callback(reinterpret_cast<VirtualQListView::QListView_VisualRect_Callback>(slot));
}
}

// Base class handler implementation
void QListView_QBaseScrollTo(QListView* self, const QModelIndex* index, int hint) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ScrollTo_IsBase(true);
	vqlistview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnScrollTo(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ScrollTo_Callback(reinterpret_cast<VirtualQListView::QListView_ScrollTo_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QListView_QBaseIndexAt(const QListView* self, const QPoint* p) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_IndexAt_IsBase(true);
	return new QModelIndex(vqlistview->indexAt(*p));
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnIndexAt(const QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_IndexAt_Callback(reinterpret_cast<VirtualQListView::QListView_IndexAt_Callback>(slot));
}
}

// Base class handler implementation
void QListView_QBaseDoItemsLayout(QListView* self) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_DoItemsLayout_IsBase(true);
	vqlistview->doItemsLayout();
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDoItemsLayout(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_DoItemsLayout_Callback(reinterpret_cast<VirtualQListView::QListView_DoItemsLayout_Callback>(slot));
}
}

// Base class handler implementation
void QListView_QBaseReset(QListView* self) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_Reset_IsBase(true);
	vqlistview->reset();
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnReset(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_Reset_Callback(reinterpret_cast<VirtualQListView::QListView_Reset_Callback>(slot));
}
}

// Base class handler implementation
void QListView_QBaseSetRootIndex(QListView* self, const QModelIndex* index) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_SetRootIndex_IsBase(true);
	vqlistview->setRootIndex(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetRootIndex(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_SetRootIndex_Callback(reinterpret_cast<VirtualQListView::QListView_SetRootIndex_Callback>(slot));
}
}

void QListView_Delete(QListView* self) {
    delete self;
}

