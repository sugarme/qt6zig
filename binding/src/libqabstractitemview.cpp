#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QModelIndex>
#include <QMouseEvent>
#include <QObject>
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
#include <QVariant>
#include <QWidget>
#include <qabstractitemview.h>
#include "libqabstractitemview.h"
#include "libqabstractitemview.hxx"

QAbstractItemView* QAbstractItemView_new(QWidget* parent) {
	 return new VirtualQAbstractItemView(parent);
}

QAbstractItemView* QAbstractItemView_new2() {
	 return new VirtualQAbstractItemView();
}

libqt_string QAbstractItemView_Tr(const char* s) {
	QString _ret = QAbstractItemView::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractItemView_SetModel(QAbstractItemView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractItemModel* QAbstractItemView_Model(const QAbstractItemView* self) {
	return self->model();
}

void QAbstractItemView_SetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QItemSelectionModel* QAbstractItemView_SelectionModel(const QAbstractItemView* self) {
	return self->selectionModel();
}

void QAbstractItemView_SetItemDelegate(QAbstractItemView* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegate(const QAbstractItemView* self) {
	return self->itemDelegate();
}

void QAbstractItemView_SetSelectionMode(QAbstractItemView* self, int mode) {
	self->setSelectionMode(static_cast<QAbstractItemView::SelectionMode>(mode));
}

int QAbstractItemView_SelectionMode(const QAbstractItemView* self) {
	return self->selectionMode();
}

void QAbstractItemView_SetSelectionBehavior(QAbstractItemView* self, int behavior) {
	self->setSelectionBehavior(static_cast<QAbstractItemView::SelectionBehavior>(behavior));
}

int QAbstractItemView_SelectionBehavior(const QAbstractItemView* self) {
	return self->selectionBehavior();
}

QModelIndex* QAbstractItemView_CurrentIndex(const QAbstractItemView* self) {
	return new QModelIndex(self->currentIndex());
}

QModelIndex* QAbstractItemView_RootIndex(const QAbstractItemView* self) {
	return new QModelIndex(self->rootIndex());
}

void QAbstractItemView_SetEditTriggers(QAbstractItemView* self, int triggers) {
	self->setEditTriggers(static_cast<QFlags<QAbstractItemView::EditTrigger>>(triggers));
}

int QAbstractItemView_EditTriggers(const QAbstractItemView* self) {
	return self->editTriggers();
}

void QAbstractItemView_SetVerticalScrollMode(QAbstractItemView* self, int mode) {
	self->setVerticalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_VerticalScrollMode(const QAbstractItemView* self) {
	return self->verticalScrollMode();
}

void QAbstractItemView_ResetVerticalScrollMode(QAbstractItemView* self) {
	self->resetVerticalScrollMode();
}

void QAbstractItemView_SetHorizontalScrollMode(QAbstractItemView* self, int mode) {
	self->setHorizontalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_HorizontalScrollMode(const QAbstractItemView* self) {
	return self->horizontalScrollMode();
}

void QAbstractItemView_ResetHorizontalScrollMode(QAbstractItemView* self) {
	self->resetHorizontalScrollMode();
}

void QAbstractItemView_SetAutoScroll(QAbstractItemView* self, bool enable) {
	self->setAutoScroll(enable);
}

bool QAbstractItemView_HasAutoScroll(const QAbstractItemView* self) {
	return self->hasAutoScroll();
}

void QAbstractItemView_SetAutoScrollMargin(QAbstractItemView* self, int margin) {
	self->setAutoScrollMargin(margin);
}

int QAbstractItemView_AutoScrollMargin(const QAbstractItemView* self) {
	return self->autoScrollMargin();
}

void QAbstractItemView_SetTabKeyNavigation(QAbstractItemView* self, bool enable) {
	self->setTabKeyNavigation(enable);
}

bool QAbstractItemView_TabKeyNavigation(const QAbstractItemView* self) {
	return self->tabKeyNavigation();
}

void QAbstractItemView_SetDropIndicatorShown(QAbstractItemView* self, bool enable) {
	self->setDropIndicatorShown(enable);
}

bool QAbstractItemView_ShowDropIndicator(const QAbstractItemView* self) {
	return self->showDropIndicator();
}

void QAbstractItemView_SetDragEnabled(QAbstractItemView* self, bool enable) {
	self->setDragEnabled(enable);
}

bool QAbstractItemView_DragEnabled(const QAbstractItemView* self) {
	return self->dragEnabled();
}

void QAbstractItemView_SetDragDropOverwriteMode(QAbstractItemView* self, bool overwrite) {
	self->setDragDropOverwriteMode(overwrite);
}

bool QAbstractItemView_DragDropOverwriteMode(const QAbstractItemView* self) {
	return self->dragDropOverwriteMode();
}

void QAbstractItemView_SetDragDropMode(QAbstractItemView* self, int behavior) {
	self->setDragDropMode(static_cast<QAbstractItemView::DragDropMode>(behavior));
}

int QAbstractItemView_DragDropMode(const QAbstractItemView* self) {
	return self->dragDropMode();
}

void QAbstractItemView_SetDefaultDropAction(QAbstractItemView* self, int dropAction) {
	self->setDefaultDropAction(static_cast<Qt::DropAction>(dropAction));
}

int QAbstractItemView_DefaultDropAction(const QAbstractItemView* self) {
	return self->defaultDropAction();
}

void QAbstractItemView_SetAlternatingRowColors(QAbstractItemView* self, bool enable) {
	self->setAlternatingRowColors(enable);
}

bool QAbstractItemView_AlternatingRowColors(const QAbstractItemView* self) {
	return self->alternatingRowColors();
}

void QAbstractItemView_SetIconSize(QAbstractItemView* self, const QSize* size) {
	self->setIconSize(*size);
}

QSize* QAbstractItemView_IconSize(const QAbstractItemView* self) {
	return new QSize(self->iconSize());
}

void QAbstractItemView_SetTextElideMode(QAbstractItemView* self, int mode) {
	self->setTextElideMode(static_cast<Qt::TextElideMode>(mode));
}

int QAbstractItemView_TextElideMode(const QAbstractItemView* self) {
	return self->textElideMode();
}

void QAbstractItemView_KeyboardSearch(QAbstractItemView* self, const libqt_string search) {
	self->keyboardSearch(QString::fromUtf8(search.data, search.len));
}

QRect* QAbstractItemView_VisualRect(const QAbstractItemView* self, const QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QAbstractItemView_ScrollTo(QAbstractItemView* self, const QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QAbstractItemView_IndexAt(const QAbstractItemView* self, const QPoint* point) {
	return new QModelIndex(self->indexAt(*point));
}

QSize* QAbstractItemView_SizeHintForIndex(const QAbstractItemView* self, const QModelIndex* index) {
	return new QSize(self->sizeHintForIndex(*index));
}

int QAbstractItemView_SizeHintForRow(const QAbstractItemView* self, int row) {
	return self->sizeHintForRow(row);
}

int QAbstractItemView_SizeHintForColumn(const QAbstractItemView* self, int column) {
	return self->sizeHintForColumn(column);
}

void QAbstractItemView_OpenPersistentEditor(QAbstractItemView* self, const QModelIndex* index) {
	self->openPersistentEditor(*index);
}

void QAbstractItemView_ClosePersistentEditor(QAbstractItemView* self, const QModelIndex* index) {
	self->closePersistentEditor(*index);
}

bool QAbstractItemView_IsPersistentEditorOpen(const QAbstractItemView* self, const QModelIndex* index) {
	return self->isPersistentEditorOpen(*index);
}

void QAbstractItemView_SetIndexWidget(QAbstractItemView* self, const QModelIndex* index, QWidget* widget) {
	self->setIndexWidget(*index, widget);
}

QWidget* QAbstractItemView_IndexWidget(const QAbstractItemView* self, const QModelIndex* index) {
	return self->indexWidget(*index);
}

void QAbstractItemView_SetItemDelegateForRow(QAbstractItemView* self, int row, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForRow(row, delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForRow(const QAbstractItemView* self, int row) {
	return self->itemDelegateForRow(row);
}

void QAbstractItemView_SetItemDelegateForColumn(QAbstractItemView* self, int column, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForColumn(column, delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForColumn(const QAbstractItemView* self, int column) {
	return self->itemDelegateForColumn(column);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegate2(const QAbstractItemView* self, const QModelIndex* index) {
	return self->itemDelegate(*index);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForIndex(const QAbstractItemView* self, const QModelIndex* index) {
	return self->itemDelegateForIndex(*index);
}

QVariant* QAbstractItemView_InputMethodQuery(const QAbstractItemView* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

void QAbstractItemView_Reset(QAbstractItemView* self) {
	self->reset();
}

void QAbstractItemView_SetRootIndex(QAbstractItemView* self, const QModelIndex* index) {
	self->setRootIndex(*index);
}

void QAbstractItemView_DoItemsLayout(QAbstractItemView* self) {
	self->doItemsLayout();
}

void QAbstractItemView_SelectAll(QAbstractItemView* self) {
	self->selectAll();
}

void QAbstractItemView_Edit(QAbstractItemView* self, const QModelIndex* index) {
	self->edit(*index);
}

void QAbstractItemView_ClearSelection(QAbstractItemView* self) {
	self->clearSelection();
}

void QAbstractItemView_SetCurrentIndex(QAbstractItemView* self, const QModelIndex* index) {
	self->setCurrentIndex(*index);
}

void QAbstractItemView_ScrollToTop(QAbstractItemView* self) {
	self->scrollToTop();
}

void QAbstractItemView_ScrollToBottom(QAbstractItemView* self) {
	self->scrollToBottom();
}

void QAbstractItemView_Update(QAbstractItemView* self, const QModelIndex* index) {
	self->update(*index);
}

void QAbstractItemView_Pressed(QAbstractItemView* self, const QModelIndex* index) {
	self->pressed(*index);
}

void QAbstractItemView_Connect_Pressed(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, const QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, const QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::pressed, [self, slotFunc](const QModelIndex& index) {
	slotFunc(self, index);
    });
}

void QAbstractItemView_Clicked(QAbstractItemView* self, const QModelIndex* index) {
	self->clicked(*index);
}

void QAbstractItemView_Connect_Clicked(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, const QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, const QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::clicked, [self, slotFunc](const QModelIndex& index) {
	slotFunc(self, index);
    });
}

void QAbstractItemView_DoubleClicked(QAbstractItemView* self, const QModelIndex* index) {
	self->doubleClicked(*index);
}

void QAbstractItemView_Connect_DoubleClicked(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, const QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, const QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::doubleClicked, [self, slotFunc](const QModelIndex& index) {
	slotFunc(self, index);
    });
}

void QAbstractItemView_Activated(QAbstractItemView* self, const QModelIndex* index) {
	self->activated(*index);
}

void QAbstractItemView_Connect_Activated(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, const QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, const QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::activated, [self, slotFunc](const QModelIndex& index) {
	slotFunc(self, index);
    });
}

void QAbstractItemView_Entered(QAbstractItemView* self, const QModelIndex* index) {
	self->entered(*index);
}

void QAbstractItemView_Connect_Entered(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, const QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, const QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::entered, [self, slotFunc](const QModelIndex& index) {
	slotFunc(self, index);
    });
}

void QAbstractItemView_ViewportEntered(QAbstractItemView* self) {
	self->viewportEntered();
}

void QAbstractItemView_Connect_ViewportEntered(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*) = reinterpret_cast<void (*)(QAbstractItemView*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::viewportEntered, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractItemView_IconSizeChanged(QAbstractItemView* self, const QSize* size) {
	self->iconSizeChanged(*size);
}

void QAbstractItemView_Connect_IconSizeChanged(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, const QSize*) = reinterpret_cast<void (*)(QAbstractItemView*, const QSize*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::iconSizeChanged, [self, slotFunc](const QSize& size) {
	slotFunc(self, size);
    });
}

libqt_string QAbstractItemView_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemView::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractItemView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemView::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QAbstractItemView_QBaseSetModel(QAbstractItemView* self, QAbstractItemModel* model) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetModel_IsBase(true);
	vqabstractitemview->setModel(model);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetModel(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetModel_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetModel_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemView_QBaseSetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetSelectionModel_IsBase(true);
	vqabstractitemview->setSelectionModel(selectionModel);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetSelectionModel(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetSelectionModel_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetSelectionModel_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemView_QBaseKeyboardSearch(QAbstractItemView* self, const libqt_string search) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_KeyboardSearch_IsBase(true);
	vqabstractitemview->keyboardSearch(QString::fromUtf8(search.data, search.len));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnKeyboardSearch(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_KeyboardSearch_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_KeyboardSearch_Callback>(slot));
}
}

// Base class handler implementation
QRect* QAbstractItemView_QBaseVisualRect(const QAbstractItemView* self, const QModelIndex* index) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_VisualRect_IsBase(true);
	return new QRect(vqabstractitemview->visualRect(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVisualRect(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_VisualRect_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VisualRect_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemView_QBaseScrollTo(QAbstractItemView* self, const QModelIndex* index, int hint) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ScrollTo_IsBase(true);
	vqabstractitemview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScrollTo(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ScrollTo_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScrollTo_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QAbstractItemView_QBaseIndexAt(const QAbstractItemView* self, const QPoint* point) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_IndexAt_IsBase(true);
	return new QModelIndex(vqabstractitemview->indexAt(*point));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnIndexAt(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_IndexAt_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_IndexAt_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractItemView_QBaseSizeHintForRow(const QAbstractItemView* self, int row) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SizeHintForRow_IsBase(true);
	return vqabstractitemview->sizeHintForRow(row);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSizeHintForRow(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SizeHintForRow_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SizeHintForRow_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractItemView_QBaseSizeHintForColumn(const QAbstractItemView* self, int column) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SizeHintForColumn_IsBase(true);
	return vqabstractitemview->sizeHintForColumn(column);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSizeHintForColumn(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SizeHintForColumn_Callback>(slot));
}
}

// Base class handler implementation
QAbstractItemDelegate* QAbstractItemView_QBaseItemDelegateForIndex(const QAbstractItemView* self, const QModelIndex* index) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ItemDelegateForIndex_IsBase(true);
	return vqabstractitemview->itemDelegateForIndex(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnItemDelegateForIndex(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ItemDelegateForIndex_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QAbstractItemView_QBaseInputMethodQuery(const QAbstractItemView* self, int query) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_InputMethodQuery_IsBase(true);
	return new QVariant(vqabstractitemview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInputMethodQuery(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InputMethodQuery_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemView_QBaseReset(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_Reset_IsBase(true);
	vqabstractitemview->reset();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnReset(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_Reset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Reset_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemView_QBaseSetRootIndex(QAbstractItemView* self, const QModelIndex* index) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetRootIndex_IsBase(true);
	vqabstractitemview->setRootIndex(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetRootIndex(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetRootIndex_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetRootIndex_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemView_QBaseDoItemsLayout(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DoItemsLayout_IsBase(true);
	vqabstractitemview->doItemsLayout();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDoItemsLayout(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DoItemsLayout_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DoItemsLayout_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemView_QBaseSelectAll(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SelectAll_IsBase(true);
	vqabstractitemview->selectAll();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectAll(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SelectAll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectAll_Callback>(slot));
}
}

void QAbstractItemView_Delete(QAbstractItemView* self) {
    delete self;
}

