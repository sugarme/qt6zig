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

// Derived class handler implementation
void QAbstractItemView_DataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->dataChanged(*topLeft, *bottomRight, QList<int>());
	} else {
	self->QAbstractItemView::dataChanged(*topLeft, *bottomRight, QList<int>());
}
}

// Base class handler implementation
void QAbstractItemView_QBaseDataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DataChanged_IsBase(true);
	vqabstractitemview->dataChanged(*topLeft, *bottomRight, QList<int>());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDataChanged(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DataChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DataChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_RowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->rowsInserted(*parent, start, end);
	} else {
	self->QAbstractItemView::rowsInserted(*parent, start, end);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseRowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_RowsInserted_IsBase(true);
	vqabstractitemview->rowsInserted(*parent, start, end);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnRowsInserted(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_RowsInserted_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_RowsInserted_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_RowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->rowsAboutToBeRemoved(*parent, start, end);
	} else {
	self->QAbstractItemView::rowsAboutToBeRemoved(*parent, start, end);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseRowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_RowsAboutToBeRemoved_IsBase(true);
	vqabstractitemview->rowsAboutToBeRemoved(*parent, start, end);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnRowsAboutToBeRemoved(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_RowsAboutToBeRemoved_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_SelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->selectionChanged(*selected, *deselected);
	} else {
	self->QAbstractItemView::selectionChanged(*selected, *deselected);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseSelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SelectionChanged_IsBase(true);
	vqabstractitemview->selectionChanged(*selected, *deselected);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectionChanged(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SelectionChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectionChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_CurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->currentChanged(*current, *previous);
	} else {
	self->QAbstractItemView::currentChanged(*current, *previous);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseCurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_CurrentChanged_IsBase(true);
	vqabstractitemview->currentChanged(*current, *previous);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCurrentChanged(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_CurrentChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CurrentChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_UpdateEditorData(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->updateEditorData();
	} else {
	self->QAbstractItemView::updateEditorData();
}
}

// Base class handler implementation
void QAbstractItemView_QBaseUpdateEditorData(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_UpdateEditorData_IsBase(true);
	vqabstractitemview->updateEditorData();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateEditorData(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_UpdateEditorData_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateEditorData_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_UpdateEditorGeometries(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->updateEditorGeometries();
	} else {
	self->QAbstractItemView::updateEditorGeometries();
}
}

// Base class handler implementation
void QAbstractItemView_QBaseUpdateEditorGeometries(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_UpdateEditorGeometries_IsBase(true);
	vqabstractitemview->updateEditorGeometries();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateEditorGeometries(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateEditorGeometries_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_UpdateGeometries(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->updateGeometries();
	} else {
	self->QAbstractItemView::updateGeometries();
}
}

// Base class handler implementation
void QAbstractItemView_QBaseUpdateGeometries(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_UpdateGeometries_IsBase(true);
	vqabstractitemview->updateGeometries();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateGeometries(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_UpdateGeometries_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateGeometries_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_VerticalScrollbarAction(QAbstractItemView* self, int action) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->verticalScrollbarAction(action);
	} else {
	self->QAbstractItemView::verticalScrollbarAction(action);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseVerticalScrollbarAction(QAbstractItemView* self, int action) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_VerticalScrollbarAction_IsBase(true);
	vqabstractitemview->verticalScrollbarAction(action);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalScrollbarAction(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalScrollbarAction_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_HorizontalScrollbarAction(QAbstractItemView* self, int action) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->horizontalScrollbarAction(action);
	} else {
	self->QAbstractItemView::horizontalScrollbarAction(action);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseHorizontalScrollbarAction(QAbstractItemView* self, int action) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_HorizontalScrollbarAction_IsBase(true);
	vqabstractitemview->horizontalScrollbarAction(action);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalScrollbarAction(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalScrollbarAction_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_VerticalScrollbarValueChanged(QAbstractItemView* self, int value) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->verticalScrollbarValueChanged(value);
	} else {
	self->QAbstractItemView::verticalScrollbarValueChanged(value);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseVerticalScrollbarValueChanged(QAbstractItemView* self, int value) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_VerticalScrollbarValueChanged_IsBase(true);
	vqabstractitemview->verticalScrollbarValueChanged(value);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalScrollbarValueChanged(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalScrollbarValueChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_HorizontalScrollbarValueChanged(QAbstractItemView* self, int value) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->horizontalScrollbarValueChanged(value);
	} else {
	self->QAbstractItemView::horizontalScrollbarValueChanged(value);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseHorizontalScrollbarValueChanged(QAbstractItemView* self, int value) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_HorizontalScrollbarValueChanged_IsBase(true);
	vqabstractitemview->horizontalScrollbarValueChanged(value);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalScrollbarValueChanged(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalScrollbarValueChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_CloseEditor(QAbstractItemView* self, QWidget* editor, int hint) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
	} else {
	self->QAbstractItemView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}
}

// Base class handler implementation
void QAbstractItemView_QBaseCloseEditor(QAbstractItemView* self, QWidget* editor, int hint) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_CloseEditor_IsBase(true);
	vqabstractitemview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCloseEditor(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_CloseEditor_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CloseEditor_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_CommitData(QAbstractItemView* self, QWidget* editor) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->commitData(editor);
	} else {
	self->QAbstractItemView::commitData(editor);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseCommitData(QAbstractItemView* self, QWidget* editor) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_CommitData_IsBase(true);
	vqabstractitemview->commitData(editor);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCommitData(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_CommitData_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CommitData_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_EditorDestroyed(QAbstractItemView* self, QObject* editor) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->editorDestroyed(editor);
	} else {
	self->QAbstractItemView::editorDestroyed(editor);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseEditorDestroyed(QAbstractItemView* self, QObject* editor) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_EditorDestroyed_IsBase(true);
	vqabstractitemview->editorDestroyed(editor);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEditorDestroyed(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_EditorDestroyed_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_EditorDestroyed_Callback>(slot));
}
}

// Derived class handler implementation
QModelIndex* QAbstractItemView_MoveCursor(QAbstractItemView* self, int cursorAction, int modifiers) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return new QModelIndex(vqabstractitemview->moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
	} else {
	return new QModelIndex(self->QAbstractItemView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
}
}

// Base class handler implementation
QModelIndex* QAbstractItemView_QBaseMoveCursor(QAbstractItemView* self, int cursorAction, int modifiers) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_MoveCursor_IsBase(true);
	return new QModelIndex(vqabstractitemview->moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers)));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMoveCursor(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_MoveCursor_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MoveCursor_Callback>(slot));
}
}

// Derived class handler implementation
int QAbstractItemView_HorizontalOffset(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return vqabstractitemview->horizontalOffset();
	} else {
	return self->QAbstractItemView::horizontalOffset();
}
}

// Base class handler implementation
int QAbstractItemView_QBaseHorizontalOffset(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_HorizontalOffset_IsBase(true);
	return vqabstractitemview->horizontalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalOffset(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_HorizontalOffset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalOffset_Callback>(slot));
}
}

// Derived class handler implementation
int QAbstractItemView_VerticalOffset(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return vqabstractitemview->verticalOffset();
	} else {
	return self->QAbstractItemView::verticalOffset();
}
}

// Base class handler implementation
int QAbstractItemView_QBaseVerticalOffset(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_VerticalOffset_IsBase(true);
	return vqabstractitemview->verticalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalOffset(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_VerticalOffset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalOffset_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractItemView_IsIndexHidden(const QAbstractItemView* self, const QModelIndex* index) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return vqabstractitemview->isIndexHidden(*index);
	} else {
	return self->QAbstractItemView::isIndexHidden(*index);
}
}

// Base class handler implementation
bool QAbstractItemView_QBaseIsIndexHidden(const QAbstractItemView* self, const QModelIndex* index) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_IsIndexHidden_IsBase(true);
	return vqabstractitemview->isIndexHidden(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnIsIndexHidden(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_IsIndexHidden_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_IsIndexHidden_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_SetSelection(QAbstractItemView* self, const QRect* rect, int command) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
	} else {
	self->QAbstractItemView::setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Base class handler implementation
void QAbstractItemView_QBaseSetSelection(QAbstractItemView* self, const QRect* rect, int command) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetSelection_IsBase(true);
	vqabstractitemview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetSelection(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetSelection_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetSelection_Callback>(slot));
}
}

// Derived class handler implementation
QRegion* QAbstractItemView_VisualRegionForSelection(const QAbstractItemView* self, const QItemSelection* selection) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return new QRegion(vqabstractitemview->visualRegionForSelection(*selection));
	} else {
	return new QRegion(self->QAbstractItemView::visualRegionForSelection(*selection));
}
}

// Base class handler implementation
QRegion* QAbstractItemView_QBaseVisualRegionForSelection(const QAbstractItemView* self, const QItemSelection* selection) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_VisualRegionForSelection_IsBase(true);
	return new QRegion(vqabstractitemview->visualRegionForSelection(*selection));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVisualRegionForSelection(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VisualRegionForSelection_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QAbstractItemView_SelectedIndexes(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	auto _ret = vqabstractitemview->selectedIndexes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
	} else {
	auto _ret = self->QAbstractItemView::selectedIndexes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Base class handler implementation
libqt_list QAbstractItemView_QBaseSelectedIndexes(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SelectedIndexes_IsBase(true);
	auto _ret = vqabstractitemview->selectedIndexes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectedIndexes(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SelectedIndexes_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectedIndexes_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractItemView_Edit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return vqabstractitemview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
	} else {
	return self->QAbstractItemView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
}
}

// Base class handler implementation
bool QAbstractItemView_QBaseEdit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_Edit2_IsBase(true);
	return vqabstractitemview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEdit2(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_Edit2_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Edit2_Callback>(slot));
}
}

// Derived class handler implementation
int QAbstractItemView_SelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return vqabstractitemview->selectionCommand(*index, event);
	} else {
	return self->QAbstractItemView::selectionCommand(*index, event);
}
}

// Base class handler implementation
int QAbstractItemView_QBaseSelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SelectionCommand_IsBase(true);
	return vqabstractitemview->selectionCommand(*index, event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectionCommand(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SelectionCommand_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectionCommand_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_StartDrag(QAbstractItemView* self, int supportedActions) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->startDrag(static_cast<QFlags<Qt::DropAction>>(supportedActions));
	} else {
	self->QAbstractItemView::startDrag(static_cast<QFlags<Qt::DropAction>>(supportedActions));
}
}

// Base class handler implementation
void QAbstractItemView_QBaseStartDrag(QAbstractItemView* self, int supportedActions) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_StartDrag_IsBase(true);
	vqabstractitemview->startDrag(static_cast<QFlags<Qt::DropAction>>(supportedActions));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnStartDrag(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_StartDrag_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_StartDrag_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_InitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->initViewItemOption(option);
	} else {
	self->QAbstractItemView::initViewItemOption(option);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseInitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_InitViewItemOption_IsBase(true);
	vqabstractitemview->initViewItemOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInitViewItemOption(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_InitViewItemOption_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InitViewItemOption_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractItemView_FocusNextPrevChild(QAbstractItemView* self, bool next) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return vqabstractitemview->focusNextPrevChild(next);
	} else {
	return self->QAbstractItemView::focusNextPrevChild(next);
}
}

// Base class handler implementation
bool QAbstractItemView_QBaseFocusNextPrevChild(QAbstractItemView* self, bool next) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_FocusNextPrevChild_IsBase(true);
	return vqabstractitemview->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusNextPrevChild(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusNextPrevChild_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractItemView_Event(QAbstractItemView* self, QEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return vqabstractitemview->event(event);
	} else {
	return self->QAbstractItemView::event(event);
}
}

// Base class handler implementation
bool QAbstractItemView_QBaseEvent(QAbstractItemView* self, QEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_Event_IsBase(true);
	return vqabstractitemview->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_Event_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractItemView_ViewportEvent(QAbstractItemView* self, QEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return vqabstractitemview->viewportEvent(event);
	} else {
	return self->QAbstractItemView::viewportEvent(event);
}
}

// Base class handler implementation
bool QAbstractItemView_QBaseViewportEvent(QAbstractItemView* self, QEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ViewportEvent_IsBase(true);
	return vqabstractitemview->viewportEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnViewportEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ViewportEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ViewportEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_MousePressEvent(QAbstractItemView* self, QMouseEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->mousePressEvent(event);
	} else {
	self->QAbstractItemView::mousePressEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseMousePressEvent(QAbstractItemView* self, QMouseEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_MousePressEvent_IsBase(true);
	vqabstractitemview->mousePressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMousePressEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_MouseMoveEvent(QAbstractItemView* self, QMouseEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->mouseMoveEvent(event);
	} else {
	self->QAbstractItemView::mouseMoveEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseMouseMoveEvent(QAbstractItemView* self, QMouseEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_MouseMoveEvent_IsBase(true);
	vqabstractitemview->mouseMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseMoveEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_MouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->mouseReleaseEvent(event);
	} else {
	self->QAbstractItemView::mouseReleaseEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseMouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_MouseReleaseEvent_IsBase(true);
	vqabstractitemview->mouseReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseReleaseEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_MouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->mouseDoubleClickEvent(event);
	} else {
	self->QAbstractItemView::mouseDoubleClickEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseMouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_MouseDoubleClickEvent_IsBase(true);
	vqabstractitemview->mouseDoubleClickEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseDoubleClickEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_DragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->dragEnterEvent(event);
	} else {
	self->QAbstractItemView::dragEnterEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseDragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DragEnterEvent_IsBase(true);
	vqabstractitemview->dragEnterEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragEnterEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragEnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_DragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->dragMoveEvent(event);
	} else {
	self->QAbstractItemView::dragMoveEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseDragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DragMoveEvent_IsBase(true);
	vqabstractitemview->dragMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragMoveEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_DragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->dragLeaveEvent(event);
	} else {
	self->QAbstractItemView::dragLeaveEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseDragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DragLeaveEvent_IsBase(true);
	vqabstractitemview->dragLeaveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragLeaveEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_DropEvent(QAbstractItemView* self, QDropEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->dropEvent(event);
	} else {
	self->QAbstractItemView::dropEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseDropEvent(QAbstractItemView* self, QDropEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DropEvent_IsBase(true);
	vqabstractitemview->dropEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDropEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DropEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_FocusInEvent(QAbstractItemView* self, QFocusEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->focusInEvent(event);
	} else {
	self->QAbstractItemView::focusInEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseFocusInEvent(QAbstractItemView* self, QFocusEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_FocusInEvent_IsBase(true);
	vqabstractitemview->focusInEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusInEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_FocusOutEvent(QAbstractItemView* self, QFocusEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->focusOutEvent(event);
	} else {
	self->QAbstractItemView::focusOutEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseFocusOutEvent(QAbstractItemView* self, QFocusEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_FocusOutEvent_IsBase(true);
	vqabstractitemview->focusOutEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusOutEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_KeyPressEvent(QAbstractItemView* self, QKeyEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->keyPressEvent(event);
	} else {
	self->QAbstractItemView::keyPressEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseKeyPressEvent(QAbstractItemView* self, QKeyEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_KeyPressEvent_IsBase(true);
	vqabstractitemview->keyPressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnKeyPressEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_ResizeEvent(QAbstractItemView* self, QResizeEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->resizeEvent(event);
	} else {
	self->QAbstractItemView::resizeEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseResizeEvent(QAbstractItemView* self, QResizeEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ResizeEvent_IsBase(true);
	vqabstractitemview->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnResizeEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_TimerEvent(QAbstractItemView* self, QTimerEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->timerEvent(event);
	} else {
	self->QAbstractItemView::timerEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseTimerEvent(QAbstractItemView* self, QTimerEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_TimerEvent_IsBase(true);
	vqabstractitemview->timerEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnTimerEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_InputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->inputMethodEvent(event);
	} else {
	self->QAbstractItemView::inputMethodEvent(event);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseInputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_InputMethodEvent_IsBase(true);
	vqabstractitemview->inputMethodEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInputMethodEvent(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InputMethodEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractItemView_EventFilter(QAbstractItemView* self, QObject* object, QEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return vqabstractitemview->eventFilter(object, event);
	} else {
	return self->QAbstractItemView::eventFilter(object, event);
}
}

// Base class handler implementation
bool QAbstractItemView_QBaseEventFilter(QAbstractItemView* self, QObject* object, QEvent* event) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_EventFilter_IsBase(true);
	return vqabstractitemview->eventFilter(object, event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEventFilter(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_EventFilter_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
QSize* QAbstractItemView_ViewportSizeHint(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return new QSize(vqabstractitemview->viewportSizeHint());
	} else {
	return new QSize(self->QAbstractItemView::viewportSizeHint());
}
}

// Base class handler implementation
QSize* QAbstractItemView_QBaseViewportSizeHint(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ViewportSizeHint_IsBase(true);
	return new QSize(vqabstractitemview->viewportSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnViewportSizeHint(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ViewportSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
int QAbstractItemView_State(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return vqabstractitemview->state();
	} else {
	return self->QAbstractItemView::state();
}
}

// Base class handler implementation
int QAbstractItemView_QBaseState(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_State_IsBase(true);
	return vqabstractitemview->state();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnState(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_State_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_State_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_SetState(QAbstractItemView* self, int state) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->setState(static_cast<QFlags<QStyle::StateFlag>>(state));
	} else {
	self->QAbstractItemView::setState(static_cast<QFlags<QStyle::StateFlag>>(state));
}
}

// Base class handler implementation
void QAbstractItemView_QBaseSetState(QAbstractItemView* self, int state) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetState_IsBase(true);
	vqabstractitemview->setState(static_cast<QFlags<QStyle::StateFlag>>(state));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetState(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetState_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetState_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_ScheduleDelayedItemsLayout(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->scheduleDelayedItemsLayout();
	} else {
	self->QAbstractItemView::scheduleDelayedItemsLayout();
}
}

// Base class handler implementation
void QAbstractItemView_QBaseScheduleDelayedItemsLayout(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ScheduleDelayedItemsLayout_IsBase(true);
	vqabstractitemview->scheduleDelayedItemsLayout();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScheduleDelayedItemsLayout(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScheduleDelayedItemsLayout_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_ExecuteDelayedItemsLayout(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->executeDelayedItemsLayout();
	} else {
	self->QAbstractItemView::executeDelayedItemsLayout();
}
}

// Base class handler implementation
void QAbstractItemView_QBaseExecuteDelayedItemsLayout(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ExecuteDelayedItemsLayout_IsBase(true);
	vqabstractitemview->executeDelayedItemsLayout();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnExecuteDelayedItemsLayout(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ExecuteDelayedItemsLayout_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_SetDirtyRegion(QAbstractItemView* self, const QRegion* region) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->setDirtyRegion(*region);
	} else {
	self->QAbstractItemView::setDirtyRegion(*region);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseSetDirtyRegion(QAbstractItemView* self, const QRegion* region) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetDirtyRegion_IsBase(true);
	vqabstractitemview->setDirtyRegion(*region);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetDirtyRegion(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetDirtyRegion_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_ScrollDirtyRegion(QAbstractItemView* self, int dx, int dy) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->scrollDirtyRegion(dx, dy);
	} else {
	self->QAbstractItemView::scrollDirtyRegion(dx, dy);
}
}

// Base class handler implementation
void QAbstractItemView_QBaseScrollDirtyRegion(QAbstractItemView* self, int dx, int dy) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ScrollDirtyRegion_IsBase(true);
	vqabstractitemview->scrollDirtyRegion(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScrollDirtyRegion(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScrollDirtyRegion_Callback>(slot));
}
}

// Derived class handler implementation
QPoint* QAbstractItemView_DirtyRegionOffset(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return new QPoint(vqabstractitemview->dirtyRegionOffset());
	} else {
	return new QPoint(self->QAbstractItemView::dirtyRegionOffset());
}
}

// Base class handler implementation
QPoint* QAbstractItemView_QBaseDirtyRegionOffset(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DirtyRegionOffset_IsBase(true);
	return new QPoint(vqabstractitemview->dirtyRegionOffset());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDirtyRegionOffset(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DirtyRegionOffset_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_StartAutoScroll(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->startAutoScroll();
	} else {
	self->QAbstractItemView::startAutoScroll();
}
}

// Base class handler implementation
void QAbstractItemView_QBaseStartAutoScroll(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_StartAutoScroll_IsBase(true);
	vqabstractitemview->startAutoScroll();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnStartAutoScroll(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_StartAutoScroll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_StartAutoScroll_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_StopAutoScroll(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->stopAutoScroll();
	} else {
	self->QAbstractItemView::stopAutoScroll();
}
}

// Base class handler implementation
void QAbstractItemView_QBaseStopAutoScroll(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_StopAutoScroll_IsBase(true);
	vqabstractitemview->stopAutoScroll();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnStopAutoScroll(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_StopAutoScroll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_StopAutoScroll_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractItemView_DoAutoScroll(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	vqabstractitemview->doAutoScroll();
	} else {
	self->QAbstractItemView::doAutoScroll();
}
}

// Base class handler implementation
void QAbstractItemView_QBaseDoAutoScroll(QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DoAutoScroll_IsBase(true);
	vqabstractitemview->doAutoScroll();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDoAutoScroll(QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DoAutoScroll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DoAutoScroll_Callback>(slot));
}
}

// Derived class handler implementation
int QAbstractItemView_DropIndicatorPosition(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
	return vqabstractitemview->dropIndicatorPosition();
	} else {
	return self->QAbstractItemView::dropIndicatorPosition();
}
}

// Base class handler implementation
int QAbstractItemView_QBaseDropIndicatorPosition(const QAbstractItemView* self) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DropIndicatorPosition_IsBase(true);
	return vqabstractitemview->dropIndicatorPosition();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDropIndicatorPosition(const QAbstractItemView* self, intptr_t slot) {
	auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
	if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
vqabstractitemview->setQAbstractItemView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DropIndicatorPosition_Callback>(slot));
}
}

void QAbstractItemView_Delete(QAbstractItemView* self) {
    delete self;
}

