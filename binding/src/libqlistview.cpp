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
	self->indexesMoved(*indexes);
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

// Derived class handler implementation
bool QListView_Event(QListView* self, QEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	return vqlistview->event(e);
	} else {
	return self->QListView::event(e);
}
}

// Base class handler implementation
bool QListView_QBaseEvent(QListView* self, QEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_Event_IsBase(true);
	return vqlistview->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnEvent(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_Event_Callback(reinterpret_cast<VirtualQListView::QListView_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_ScrollContentsBy(QListView* self, int dx, int dy) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->scrollContentsBy(dx, dy);
	} else {
	self->QListView::scrollContentsBy(dx, dy);
}
}

// Base class handler implementation
void QListView_QBaseScrollContentsBy(QListView* self, int dx, int dy) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ScrollContentsBy_IsBase(true);
	vqlistview->scrollContentsBy(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnScrollContentsBy(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQListView::QListView_ScrollContentsBy_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_DataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->dataChanged(*topLeft, *bottomRight, *roles);
	} else {
	self->QListView::dataChanged(*topLeft, *bottomRight, *roles);
}
}

// Base class handler implementation
void QListView_QBaseDataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_DataChanged_IsBase(true);
	vqlistview->dataChanged(*topLeft, *bottomRight, *roles);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDataChanged(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_DataChanged_Callback(reinterpret_cast<VirtualQListView::QListView_DataChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_RowsInserted(QListView* self, const QModelIndex* parent, int start, int end) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->rowsInserted(*parent, start, end);
	} else {
	self->QListView::rowsInserted(*parent, start, end);
}
}

// Base class handler implementation
void QListView_QBaseRowsInserted(QListView* self, const QModelIndex* parent, int start, int end) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_RowsInserted_IsBase(true);
	vqlistview->rowsInserted(*parent, start, end);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnRowsInserted(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_RowsInserted_Callback(reinterpret_cast<VirtualQListView::QListView_RowsInserted_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_RowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->rowsAboutToBeRemoved(*parent, start, end);
	} else {
	self->QListView::rowsAboutToBeRemoved(*parent, start, end);
}
}

// Base class handler implementation
void QListView_QBaseRowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_RowsAboutToBeRemoved_IsBase(true);
	vqlistview->rowsAboutToBeRemoved(*parent, start, end);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnRowsAboutToBeRemoved(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQListView::QListView_RowsAboutToBeRemoved_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_MouseMoveEvent(QListView* self, QMouseEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->mouseMoveEvent(e);
	} else {
	self->QListView::mouseMoveEvent(e);
}
}

// Base class handler implementation
void QListView_QBaseMouseMoveEvent(QListView* self, QMouseEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_MouseMoveEvent_IsBase(true);
	vqlistview->mouseMoveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMouseMoveEvent(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQListView::QListView_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_MouseReleaseEvent(QListView* self, QMouseEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->mouseReleaseEvent(e);
	} else {
	self->QListView::mouseReleaseEvent(e);
}
}

// Base class handler implementation
void QListView_QBaseMouseReleaseEvent(QListView* self, QMouseEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_MouseReleaseEvent_IsBase(true);
	vqlistview->mouseReleaseEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMouseReleaseEvent(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQListView::QListView_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_WheelEvent(QListView* self, QWheelEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->wheelEvent(e);
	} else {
	self->QListView::wheelEvent(e);
}
}

// Base class handler implementation
void QListView_QBaseWheelEvent(QListView* self, QWheelEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_WheelEvent_IsBase(true);
	vqlistview->wheelEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnWheelEvent(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_WheelEvent_Callback(reinterpret_cast<VirtualQListView::QListView_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_TimerEvent(QListView* self, QTimerEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->timerEvent(e);
	} else {
	self->QListView::timerEvent(e);
}
}

// Base class handler implementation
void QListView_QBaseTimerEvent(QListView* self, QTimerEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_TimerEvent_IsBase(true);
	vqlistview->timerEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnTimerEvent(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_TimerEvent_Callback(reinterpret_cast<VirtualQListView::QListView_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_ResizeEvent(QListView* self, QResizeEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->resizeEvent(e);
	} else {
	self->QListView::resizeEvent(e);
}
}

// Base class handler implementation
void QListView_QBaseResizeEvent(QListView* self, QResizeEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ResizeEvent_IsBase(true);
	vqlistview->resizeEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnResizeEvent(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ResizeEvent_Callback(reinterpret_cast<VirtualQListView::QListView_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_DragMoveEvent(QListView* self, QDragMoveEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->dragMoveEvent(e);
	} else {
	self->QListView::dragMoveEvent(e);
}
}

// Base class handler implementation
void QListView_QBaseDragMoveEvent(QListView* self, QDragMoveEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_DragMoveEvent_IsBase(true);
	vqlistview->dragMoveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDragMoveEvent(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_DragMoveEvent_Callback(reinterpret_cast<VirtualQListView::QListView_DragMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_DragLeaveEvent(QListView* self, QDragLeaveEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->dragLeaveEvent(e);
	} else {
	self->QListView::dragLeaveEvent(e);
}
}

// Base class handler implementation
void QListView_QBaseDragLeaveEvent(QListView* self, QDragLeaveEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_DragLeaveEvent_IsBase(true);
	vqlistview->dragLeaveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDragLeaveEvent(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQListView::QListView_DragLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_DropEvent(QListView* self, QDropEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->dropEvent(e);
	} else {
	self->QListView::dropEvent(e);
}
}

// Base class handler implementation
void QListView_QBaseDropEvent(QListView* self, QDropEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_DropEvent_IsBase(true);
	vqlistview->dropEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDropEvent(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_DropEvent_Callback(reinterpret_cast<VirtualQListView::QListView_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_StartDrag(QListView* self, int supportedActions) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->startDrag(static_cast<QFlags<Qt::DropAction>>(supportedActions));
	} else {
	self->QListView::startDrag(static_cast<QFlags<Qt::DropAction>>(supportedActions));
}
}

// Base class handler implementation
void QListView_QBaseStartDrag(QListView* self, int supportedActions) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_StartDrag_IsBase(true);
	vqlistview->startDrag(static_cast<QFlags<Qt::DropAction>>(supportedActions));
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnStartDrag(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_StartDrag_Callback(reinterpret_cast<VirtualQListView::QListView_StartDrag_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_InitViewItemOption(const QListView* self, QStyleOptionViewItem* option) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->initViewItemOption(option);
	} else {
	self->QListView::initViewItemOption(option);
}
}

// Base class handler implementation
void QListView_QBaseInitViewItemOption(const QListView* self, QStyleOptionViewItem* option) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_InitViewItemOption_IsBase(true);
	vqlistview->initViewItemOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnInitViewItemOption(const QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_InitViewItemOption_Callback(reinterpret_cast<VirtualQListView::QListView_InitViewItemOption_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_PaintEvent(QListView* self, QPaintEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->paintEvent(e);
	} else {
	self->QListView::paintEvent(e);
}
}

// Base class handler implementation
void QListView_QBasePaintEvent(QListView* self, QPaintEvent* e) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_PaintEvent_IsBase(true);
	vqlistview->paintEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnPaintEvent(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_PaintEvent_Callback(reinterpret_cast<VirtualQListView::QListView_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
int QListView_HorizontalOffset(const QListView* self) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	return vqlistview->horizontalOffset();
	} else {
	return self->QListView::horizontalOffset();
}
}

// Base class handler implementation
int QListView_QBaseHorizontalOffset(const QListView* self) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_HorizontalOffset_IsBase(true);
	return vqlistview->horizontalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHorizontalOffset(const QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_HorizontalOffset_Callback(reinterpret_cast<VirtualQListView::QListView_HorizontalOffset_Callback>(slot));
}
}

// Derived class handler implementation
int QListView_VerticalOffset(const QListView* self) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	return vqlistview->verticalOffset();
	} else {
	return self->QListView::verticalOffset();
}
}

// Base class handler implementation
int QListView_QBaseVerticalOffset(const QListView* self) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_VerticalOffset_IsBase(true);
	return vqlistview->verticalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVerticalOffset(const QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_VerticalOffset_Callback(reinterpret_cast<VirtualQListView::QListView_VerticalOffset_Callback>(slot));
}
}

// Derived class handler implementation
QModelIndex* QListView_MoveCursor(QListView* self, int cursorAction, int modifiers) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	return new QModelIndex(vqlistview->moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
	} else {
	return new QModelIndex(self->QListView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
}
}

// Base class handler implementation
QModelIndex* QListView_QBaseMoveCursor(QListView* self, int cursorAction, int modifiers) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_MoveCursor_IsBase(true);
	return new QModelIndex(vqlistview->moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMoveCursor(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_MoveCursor_Callback(reinterpret_cast<VirtualQListView::QListView_MoveCursor_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_SetSelection(QListView* self, const QRect* rect, int command) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
	} else {
	self->QListView::setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Base class handler implementation
void QListView_QBaseSetSelection(QListView* self, const QRect* rect, int command) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_SetSelection_IsBase(true);
	vqlistview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetSelection(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_SetSelection_Callback(reinterpret_cast<VirtualQListView::QListView_SetSelection_Callback>(slot));
}
}

// Derived class handler implementation
QRegion* QListView_VisualRegionForSelection(const QListView* self, const QItemSelection* selection) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	return new QRegion(vqlistview->visualRegionForSelection(*selection));
	} else {
	return new QRegion(self->QListView::visualRegionForSelection(*selection));
}
}

// Base class handler implementation
QRegion* QListView_QBaseVisualRegionForSelection(const QListView* self, const QItemSelection* selection) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_VisualRegionForSelection_IsBase(true);
	return new QRegion(vqlistview->visualRegionForSelection(*selection));
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVisualRegionForSelection(const QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQListView::QListView_VisualRegionForSelection_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QListView_SelectedIndexes(const QListView* self) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	return vqlistview->selectedIndexes();
	} else {
	return self->QListView::selectedIndexes();
}
}

// Base class handler implementation
libqt_list QListView_QBaseSelectedIndexes(const QListView* self) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_SelectedIndexes_IsBase(true);
	return vqlistview->selectedIndexes();
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSelectedIndexes(const QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_SelectedIndexes_Callback(reinterpret_cast<VirtualQListView::QListView_SelectedIndexes_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_UpdateGeometries(QListView* self) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->updateGeometries();
	} else {
	self->QListView::updateGeometries();
}
}

// Base class handler implementation
void QListView_QBaseUpdateGeometries(QListView* self) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_UpdateGeometries_IsBase(true);
	vqlistview->updateGeometries();
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnUpdateGeometries(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_UpdateGeometries_Callback(reinterpret_cast<VirtualQListView::QListView_UpdateGeometries_Callback>(slot));
}
}

// Derived class handler implementation
bool QListView_IsIndexHidden(const QListView* self, const QModelIndex* index) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	return vqlistview->isIndexHidden(*index);
	} else {
	return self->QListView::isIndexHidden(*index);
}
}

// Base class handler implementation
bool QListView_QBaseIsIndexHidden(const QListView* self, const QModelIndex* index) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_IsIndexHidden_IsBase(true);
	return vqlistview->isIndexHidden(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnIsIndexHidden(const QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_IsIndexHidden_Callback(reinterpret_cast<VirtualQListView::QListView_IsIndexHidden_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_SelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->selectionChanged(*selected, *deselected);
	} else {
	self->QListView::selectionChanged(*selected, *deselected);
}
}

// Base class handler implementation
void QListView_QBaseSelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_SelectionChanged_IsBase(true);
	vqlistview->selectionChanged(*selected, *deselected);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSelectionChanged(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_SelectionChanged_Callback(reinterpret_cast<VirtualQListView::QListView_SelectionChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_CurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->currentChanged(*current, *previous);
	} else {
	self->QListView::currentChanged(*current, *previous);
}
}

// Base class handler implementation
void QListView_QBaseCurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_CurrentChanged_IsBase(true);
	vqlistview->currentChanged(*current, *previous);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCurrentChanged(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_CurrentChanged_Callback(reinterpret_cast<VirtualQListView::QListView_CurrentChanged_Callback>(slot));
}
}

// Derived class handler implementation
QSize* QListView_ViewportSizeHint(const QListView* self) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	return new QSize(vqlistview->viewportSizeHint());
	} else {
	return new QSize(self->QListView::viewportSizeHint());
}
}

// Base class handler implementation
QSize* QListView_QBaseViewportSizeHint(const QListView* self) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ViewportSizeHint_IsBase(true);
	return new QSize(vqlistview->viewportSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnViewportSizeHint(const QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQListView::QListView_ViewportSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_ResizeContents(QListView* self, int width, int height) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->resizeContents(width, height);
	} else {
	self->QListView::resizeContents(width, height);
}
}

// Base class handler implementation
void QListView_QBaseResizeContents(QListView* self, int width, int height) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ResizeContents_IsBase(true);
	vqlistview->resizeContents(width, height);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnResizeContents(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ResizeContents_Callback(reinterpret_cast<VirtualQListView::QListView_ResizeContents_Callback>(slot));
}
}

// Derived class handler implementation
QSize* QListView_ContentsSize(const QListView* self) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	return new QSize(vqlistview->contentsSize());
	} else {
	return new QSize(self->QListView::contentsSize());
}
}

// Base class handler implementation
QSize* QListView_QBaseContentsSize(const QListView* self) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ContentsSize_IsBase(true);
	return new QSize(vqlistview->contentsSize());
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnContentsSize(const QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_ContentsSize_Callback(reinterpret_cast<VirtualQListView::QListView_ContentsSize_Callback>(slot));
}
}

// Derived class handler implementation
QRect* QListView_RectForIndex(const QListView* self, const QModelIndex* index) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	return new QRect(vqlistview->rectForIndex(*index));
	} else {
	return new QRect(self->QListView::rectForIndex(*index));
}
}

// Base class handler implementation
QRect* QListView_QBaseRectForIndex(const QListView* self, const QModelIndex* index) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_RectForIndex_IsBase(true);
	return new QRect(vqlistview->rectForIndex(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnRectForIndex(const QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_RectForIndex_Callback(reinterpret_cast<VirtualQListView::QListView_RectForIndex_Callback>(slot));
}
}

// Derived class handler implementation
void QListView_SetPositionForIndex(QListView* self, const QPoint* position, const QModelIndex* index) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
	vqlistview->setPositionForIndex(*position, *index);
	} else {
	self->QListView::setPositionForIndex(*position, *index);
}
}

// Base class handler implementation
void QListView_QBaseSetPositionForIndex(QListView* self, const QPoint* position, const QModelIndex* index) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_SetPositionForIndex_IsBase(true);
	vqlistview->setPositionForIndex(*position, *index);
}
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetPositionForIndex(QListView* self, intptr_t slot) {
	auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
	if (vqlistview && vqlistview->isVirtualQListView) {
vqlistview->setQListView_SetPositionForIndex_Callback(reinterpret_cast<VirtualQListView::QListView_SetPositionForIndex_Callback>(slot));
}
}

void QListView_Delete(QListView* self) {
    delete self;
}

