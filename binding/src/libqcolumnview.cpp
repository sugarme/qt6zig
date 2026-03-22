#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QColumnView>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qcolumnview.h>
#include "libqcolumnview.h"
#include "libqcolumnview.hxx"

QColumnView* QColumnView_new(QWidget* parent) {
	 return new VirtualQColumnView(parent);
}

QColumnView* QColumnView_new2() {
	 return new VirtualQColumnView();
}

libqt_string QColumnView_Tr(const char* s) {
	QString _ret = QColumnView::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QColumnView_UpdatePreviewWidget(QColumnView* self, const QModelIndex* index) {
	self->updatePreviewWidget(*index);
}

void QColumnView_Connect_UpdatePreviewWidget(QColumnView* self, intptr_t slot) {
    void (*slotFunc)(QColumnView*, const QModelIndex*) = reinterpret_cast<void (*)(QColumnView*, const QModelIndex*)>(slot);
    QColumnView::connect(self, &QColumnView::updatePreviewWidget, [self, slotFunc](const QModelIndex& index) {
	slotFunc(self, index);
    });
}

QModelIndex* QColumnView_IndexAt(const QColumnView* self, const QPoint* point) {
	return new QModelIndex(self->indexAt(*point));
}

void QColumnView_ScrollTo(QColumnView* self, const QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QSize* QColumnView_SizeHint(const QColumnView* self) {
	return new QSize(self->sizeHint());
}

QRect* QColumnView_VisualRect(const QColumnView* self, const QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QColumnView_SetRootIndex(QColumnView* self, const QModelIndex* index) {
	self->setRootIndex(*index);
}

void QColumnView_SelectAll(QColumnView* self) {
	self->selectAll();
}

void QColumnView_SetResizeGripsVisible(QColumnView* self, bool visible) {
	self->setResizeGripsVisible(visible);
}

bool QColumnView_ResizeGripsVisible(const QColumnView* self) {
	return self->resizeGripsVisible();
}

QWidget* QColumnView_PreviewWidget(const QColumnView* self) {
	return self->previewWidget();
}

void QColumnView_SetPreviewWidget(QColumnView* self, QWidget* widget) {
	self->setPreviewWidget(widget);
}

void QColumnView_SetColumnWidths(QColumnView* self, const libqt_list list) {
	self->setColumnWidths(*list);
}

libqt_list QColumnView_ColumnWidths(const QColumnView* self) {
	return self->columnWidths();
}

libqt_string QColumnView_Tr2(const char* s, const char* c) {
	QString _ret = QColumnView::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QColumnView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QColumnView::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QModelIndex* QColumnView_QBaseIndexAt(const QColumnView* self, const QPoint* point) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_IndexAt_IsBase(true);
	return new QModelIndex(vqcolumnview->indexAt(*point));
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnIndexAt(const QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_IndexAt_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_IndexAt_Callback>(slot));
}
}

// Base class handler implementation
void QColumnView_QBaseScrollTo(QColumnView* self, const QModelIndex* index, int hint) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_ScrollTo_IsBase(true);
	vqcolumnview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnScrollTo(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_ScrollTo_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ScrollTo_Callback>(slot));
}
}

// Base class handler implementation
QSize* QColumnView_QBaseSizeHint(const QColumnView* self) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SizeHint_IsBase(true);
	return new QSize(vqcolumnview->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSizeHint(const QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SizeHint_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QRect* QColumnView_QBaseVisualRect(const QColumnView* self, const QModelIndex* index) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_VisualRect_IsBase(true);
	return new QRect(vqcolumnview->visualRect(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVisualRect(const QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_VisualRect_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VisualRect_Callback>(slot));
}
}

// Base class handler implementation
void QColumnView_QBaseSetModel(QColumnView* self, QAbstractItemModel* model) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetModel_IsBase(true);
	vqcolumnview->setModel(model);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetModel(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetModel_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetModel_Callback>(slot));
}
}

// Base class handler implementation
void QColumnView_QBaseSetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetSelectionModel_IsBase(true);
	vqcolumnview->setSelectionModel(selectionModel);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetSelectionModel(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetSelectionModel_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetSelectionModel_Callback>(slot));
}
}

// Base class handler implementation
void QColumnView_QBaseSetRootIndex(QColumnView* self, const QModelIndex* index) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetRootIndex_IsBase(true);
	vqcolumnview->setRootIndex(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetRootIndex(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetRootIndex_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetRootIndex_Callback>(slot));
}
}

// Base class handler implementation
void QColumnView_QBaseSelectAll(QColumnView* self) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SelectAll_IsBase(true);
	vqcolumnview->selectAll();
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSelectAll(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SelectAll_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SelectAll_Callback>(slot));
}
}

// Derived class handler implementation
bool QColumnView_IsIndexHidden(const QColumnView* self, const QModelIndex* index) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	return vqcolumnview->isIndexHidden(*index);
	} else {
	return self->QColumnView::isIndexHidden(*index);
}
}

// Base class handler implementation
bool QColumnView_QBaseIsIndexHidden(const QColumnView* self, const QModelIndex* index) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_IsIndexHidden_IsBase(true);
	return vqcolumnview->isIndexHidden(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnIsIndexHidden(const QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_IsIndexHidden_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_IsIndexHidden_Callback>(slot));
}
}

// Derived class handler implementation
QModelIndex* QColumnView_MoveCursor(QColumnView* self, int cursorAction, int modifiers) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	return new QModelIndex(vqcolumnview->moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
	} else {
	return new QModelIndex(self->QColumnView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
}
}

// Base class handler implementation
QModelIndex* QColumnView_QBaseMoveCursor(QColumnView* self, int cursorAction, int modifiers) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_MoveCursor_IsBase(true);
	return new QModelIndex(vqcolumnview->moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMoveCursor(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_MoveCursor_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MoveCursor_Callback>(slot));
}
}

// Derived class handler implementation
void QColumnView_ResizeEvent(QColumnView* self, QResizeEvent* event) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	vqcolumnview->resizeEvent(event);
	} else {
	self->QColumnView::resizeEvent(event);
}
}

// Base class handler implementation
void QColumnView_QBaseResizeEvent(QColumnView* self, QResizeEvent* event) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_ResizeEvent_IsBase(true);
	vqcolumnview->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnResizeEvent(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_ResizeEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QColumnView_SetSelection(QColumnView* self, const QRect* rect, int command) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	vqcolumnview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
	} else {
	self->QColumnView::setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Base class handler implementation
void QColumnView_QBaseSetSelection(QColumnView* self, const QRect* rect, int command) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetSelection_IsBase(true);
	vqcolumnview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetSelection(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetSelection_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetSelection_Callback>(slot));
}
}

// Derived class handler implementation
QRegion* QColumnView_VisualRegionForSelection(const QColumnView* self, const QItemSelection* selection) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	return new QRegion(vqcolumnview->visualRegionForSelection(*selection));
	} else {
	return new QRegion(self->QColumnView::visualRegionForSelection(*selection));
}
}

// Base class handler implementation
QRegion* QColumnView_QBaseVisualRegionForSelection(const QColumnView* self, const QItemSelection* selection) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_VisualRegionForSelection_IsBase(true);
	return new QRegion(vqcolumnview->visualRegionForSelection(*selection));
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVisualRegionForSelection(const QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VisualRegionForSelection_Callback>(slot));
}
}

// Derived class handler implementation
int QColumnView_HorizontalOffset(const QColumnView* self) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	return vqcolumnview->horizontalOffset();
	} else {
	return self->QColumnView::horizontalOffset();
}
}

// Base class handler implementation
int QColumnView_QBaseHorizontalOffset(const QColumnView* self) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_HorizontalOffset_IsBase(true);
	return vqcolumnview->horizontalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHorizontalOffset(const QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_HorizontalOffset_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HorizontalOffset_Callback>(slot));
}
}

// Derived class handler implementation
int QColumnView_VerticalOffset(const QColumnView* self) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	return vqcolumnview->verticalOffset();
	} else {
	return self->QColumnView::verticalOffset();
}
}

// Base class handler implementation
int QColumnView_QBaseVerticalOffset(const QColumnView* self) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_VerticalOffset_IsBase(true);
	return vqcolumnview->verticalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVerticalOffset(const QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_VerticalOffset_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VerticalOffset_Callback>(slot));
}
}

// Derived class handler implementation
void QColumnView_RowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	vqcolumnview->rowsInserted(*parent, start, end);
	} else {
	self->QColumnView::rowsInserted(*parent, start, end);
}
}

// Base class handler implementation
void QColumnView_QBaseRowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_RowsInserted_IsBase(true);
	vqcolumnview->rowsInserted(*parent, start, end);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnRowsInserted(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_RowsInserted_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_RowsInserted_Callback>(slot));
}
}

// Derived class handler implementation
void QColumnView_CurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	vqcolumnview->currentChanged(*current, *previous);
	} else {
	self->QColumnView::currentChanged(*current, *previous);
}
}

// Base class handler implementation
void QColumnView_QBaseCurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_CurrentChanged_IsBase(true);
	vqcolumnview->currentChanged(*current, *previous);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCurrentChanged(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_CurrentChanged_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CurrentChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QColumnView_ScrollContentsBy(QColumnView* self, int dx, int dy) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	vqcolumnview->scrollContentsBy(dx, dy);
	} else {
	self->QColumnView::scrollContentsBy(dx, dy);
}
}

// Base class handler implementation
void QColumnView_QBaseScrollContentsBy(QColumnView* self, int dx, int dy) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_ScrollContentsBy_IsBase(true);
	vqcolumnview->scrollContentsBy(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnScrollContentsBy(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ScrollContentsBy_Callback>(slot));
}
}

// Derived class handler implementation
QAbstractItemView* QColumnView_CreateColumn(QColumnView* self, const QModelIndex* rootIndex) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	return vqcolumnview->createColumn(*rootIndex);
	} else {
	return self->QColumnView::createColumn(*rootIndex);
}
}

// Base class handler implementation
QAbstractItemView* QColumnView_QBaseCreateColumn(QColumnView* self, const QModelIndex* rootIndex) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_CreateColumn_IsBase(true);
	return vqcolumnview->createColumn(*rootIndex);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCreateColumn(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_CreateColumn_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CreateColumn_Callback>(slot));
}
}

// Derived class handler implementation
void QColumnView_InitializeColumn(const QColumnView* self, QAbstractItemView* column) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
	vqcolumnview->initializeColumn(column);
	} else {
	self->QColumnView::initializeColumn(column);
}
}

// Base class handler implementation
void QColumnView_QBaseInitializeColumn(const QColumnView* self, QAbstractItemView* column) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_InitializeColumn_IsBase(true);
	vqcolumnview->initializeColumn(column);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitializeColumn(const QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_InitializeColumn_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InitializeColumn_Callback>(slot));
}
}

void QColumnView_Delete(QColumnView* self) {
    delete self;
}

