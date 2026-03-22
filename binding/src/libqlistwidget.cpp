#include <QBrush>
#include <QDataStream>
#include <QDropEvent>
#include <QEvent>
#include <QFont>
#include <QIcon>
#include <QItemSelectionModel>
#include <QListView>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMimeData>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <qlistwidget.h>
#include "libqlistwidget.h"
#include "libqlistwidget.hxx"

QListWidgetItem* QListWidgetItem_new() {
	 return new VirtualQListWidgetItem();
}

QListWidgetItem* QListWidgetItem_new2(const libqt_string text) {
	 return new VirtualQListWidgetItem(QString::fromUtf8(text.data, text.len));
}

QListWidgetItem* QListWidgetItem_new3(const QIcon* icon, const libqt_string text) {
	 return new VirtualQListWidgetItem(*icon, QString::fromUtf8(text.data, text.len));
}

QListWidgetItem* QListWidgetItem_new4(const QListWidgetItem* other) {
	 return new VirtualQListWidgetItem(*other);
}

QListWidgetItem* QListWidgetItem_new5(QListWidget* listview) {
	 return new VirtualQListWidgetItem(listview);
}

QListWidgetItem* QListWidgetItem_new6(QListWidget* listview, int typeVal) {
	 return new VirtualQListWidgetItem(listview, typeVal);
}

QListWidgetItem* QListWidgetItem_new7(const libqt_string text, QListWidget* listview) {
	 return new VirtualQListWidgetItem(QString::fromUtf8(text.data, text.len), listview);
}

QListWidgetItem* QListWidgetItem_new8(const libqt_string text, QListWidget* listview, int typeVal) {
	 return new VirtualQListWidgetItem(QString::fromUtf8(text.data, text.len), listview, typeVal);
}

QListWidgetItem* QListWidgetItem_new9(const QIcon* icon, const libqt_string text, QListWidget* listview) {
	 return new VirtualQListWidgetItem(*icon, QString::fromUtf8(text.data, text.len), listview);
}

QListWidgetItem* QListWidgetItem_new10(const QIcon* icon, const libqt_string text, QListWidget* listview, int typeVal) {
	 return new VirtualQListWidgetItem(*icon, QString::fromUtf8(text.data, text.len), listview, typeVal);
}

QListWidget* QListWidgetItem_ListWidget(const QListWidgetItem* self) {
	return self->listWidget();
}

void QListWidgetItem_SetSelected(QListWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QListWidgetItem_IsSelected(const QListWidgetItem* self) {
	return self->isSelected();
}

void QListWidgetItem_SetHidden(QListWidgetItem* self, bool hide) {
	self->setHidden(hide);
}

bool QListWidgetItem_IsHidden(const QListWidgetItem* self) {
	return self->isHidden();
}

int QListWidgetItem_Flags(const QListWidgetItem* self) {
	return self->flags();
}

void QListWidgetItem_SetFlags(QListWidgetItem* self, int flags) {
	self->setFlags(static_cast<QFlags<Qt::ItemFlag>>(flags));
}

libqt_string QListWidgetItem_Text(const QListWidgetItem* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QListWidgetItem_SetText(QListWidgetItem* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

QIcon* QListWidgetItem_Icon(const QListWidgetItem* self) {
	return new QIcon(self->icon());
}

void QListWidgetItem_SetIcon(QListWidgetItem* self, const QIcon* icon) {
	self->setIcon(*icon);
}

libqt_string QListWidgetItem_StatusTip(const QListWidgetItem* self) {
	QString _ret = self->statusTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QListWidgetItem_SetStatusTip(QListWidgetItem* self, const libqt_string statusTip) {
	self->setStatusTip(QString::fromUtf8(statusTip.data, statusTip.len));
}

libqt_string QListWidgetItem_ToolTip(const QListWidgetItem* self) {
	QString _ret = self->toolTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QListWidgetItem_SetToolTip(QListWidgetItem* self, const libqt_string toolTip) {
	self->setToolTip(QString::fromUtf8(toolTip.data, toolTip.len));
}

libqt_string QListWidgetItem_WhatsThis(const QListWidgetItem* self) {
	QString _ret = self->whatsThis();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QListWidgetItem_SetWhatsThis(QListWidgetItem* self, const libqt_string whatsThis) {
	self->setWhatsThis(QString::fromUtf8(whatsThis.data, whatsThis.len));
}

QFont* QListWidgetItem_Font(const QListWidgetItem* self) {
	return new QFont(self->font());
}

void QListWidgetItem_SetFont(QListWidgetItem* self, const QFont* font) {
	self->setFont(*font);
}

int QListWidgetItem_TextAlignment(const QListWidgetItem* self) {
	return self->textAlignment();
}

void QListWidgetItem_SetTextAlignment(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(alignment);
}

void QListWidgetItem_SetTextAlignment2(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QListWidgetItem_SetTextAlignment3(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

QBrush* QListWidgetItem_Background(const QListWidgetItem* self) {
	return new QBrush(self->background());
}

void QListWidgetItem_SetBackground(QListWidgetItem* self, const QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QListWidgetItem_Foreground(const QListWidgetItem* self) {
	return new QBrush(self->foreground());
}

void QListWidgetItem_SetForeground(QListWidgetItem* self, const QBrush* brush) {
	self->setForeground(*brush);
}

int QListWidgetItem_CheckState(const QListWidgetItem* self) {
	return self->checkState();
}

void QListWidgetItem_SetCheckState(QListWidgetItem* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QListWidgetItem_SizeHint(const QListWidgetItem* self) {
	return new QSize(self->sizeHint());
}

void QListWidgetItem_SetSizeHint(QListWidgetItem* self, const QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QListWidgetItem_Data(const QListWidgetItem* self, int role) {
	return new QVariant(self->data(role));
}

void QListWidgetItem_SetData(QListWidgetItem* self, int role, const QVariant* value) {
	self->setData(role, *value);
}

bool QListWidgetItem_OperatorLesser(const QListWidgetItem* self, const QListWidgetItem* other) {
	return self->operator<(*other);
}

void QListWidgetItem_Read(QListWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QListWidgetItem_Write(const QListWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QListWidgetItem_OperatorAssign(QListWidgetItem* self, const QListWidgetItem* other) {
	self->operator=(*other);
}

int QListWidgetItem_Type(const QListWidgetItem* self) {
	return self->type();
}

// Base class handler implementation
QVariant* QListWidgetItem_QBaseData(const QListWidgetItem* self, int role) {
	auto* vqlistwidgetitem = dynamic_cast<const VirtualQListWidgetItem*>(self);
	if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
vqlistwidgetitem->setQListWidgetItem_Data_IsBase(true);
	return new QVariant(vqlistwidgetitem->data(role));
}
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnData(const QListWidgetItem* self, intptr_t slot) {
	auto* vqlistwidgetitem = dynamic_cast<const VirtualQListWidgetItem*>(self);
	if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
vqlistwidgetitem->setQListWidgetItem_Data_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Data_Callback>(slot));
}
}

// Base class handler implementation
void QListWidgetItem_QBaseSetData(QListWidgetItem* self, int role, const QVariant* value) {
	auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self);
	if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
vqlistwidgetitem->setQListWidgetItem_SetData_IsBase(true);
	vqlistwidgetitem->setData(role, *value);
}
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnSetData(QListWidgetItem* self, intptr_t slot) {
	auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self);
	if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
vqlistwidgetitem->setQListWidgetItem_SetData_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_SetData_Callback>(slot));
}
}

// Base class handler implementation
bool QListWidgetItem_QBaseOperatorLesser(const QListWidgetItem* self, const QListWidgetItem* other) {
	auto* vqlistwidgetitem = dynamic_cast<const VirtualQListWidgetItem*>(self);
	if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
vqlistwidgetitem->setQListWidgetItem_OperatorLesser_IsBase(true);
	return vqlistwidgetitem->operator<(*other);
}
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnOperatorLesser(const QListWidgetItem* self, intptr_t slot) {
	auto* vqlistwidgetitem = dynamic_cast<const VirtualQListWidgetItem*>(self);
	if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
vqlistwidgetitem->setQListWidgetItem_OperatorLesser_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_OperatorLesser_Callback>(slot));
}
}

// Base class handler implementation
void QListWidgetItem_QBaseRead(QListWidgetItem* self, QDataStream* in) {
	auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self);
	if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
vqlistwidgetitem->setQListWidgetItem_Read_IsBase(true);
	vqlistwidgetitem->read(*in);
}
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnRead(QListWidgetItem* self, intptr_t slot) {
	auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self);
	if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
vqlistwidgetitem->setQListWidgetItem_Read_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Read_Callback>(slot));
}
}

// Base class handler implementation
void QListWidgetItem_QBaseWrite(const QListWidgetItem* self, QDataStream* out) {
	auto* vqlistwidgetitem = dynamic_cast<const VirtualQListWidgetItem*>(self);
	if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
vqlistwidgetitem->setQListWidgetItem_Write_IsBase(true);
	vqlistwidgetitem->write(*out);
}
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnWrite(const QListWidgetItem* self, intptr_t slot) {
	auto* vqlistwidgetitem = dynamic_cast<const VirtualQListWidgetItem*>(self);
	if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
vqlistwidgetitem->setQListWidgetItem_Write_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Write_Callback>(slot));
}
}

void QListWidgetItem_Delete(QListWidgetItem* self) {
    delete self;
}

QListWidget* QListWidget_new(QWidget* parent) {
	 return new VirtualQListWidget(parent);
}

QListWidget* QListWidget_new2() {
	 return new VirtualQListWidget();
}

libqt_string QListWidget_Tr(const char* s) {
	QString _ret = QListWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QListWidget_SetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QListWidgetItem* QListWidget_Item(const QListWidget* self, int row) {
	return self->item(row);
}

int QListWidget_Row(const QListWidget* self, const QListWidgetItem* item) {
	return self->row(item);
}

void QListWidget_InsertItem(QListWidget* self, int row, QListWidgetItem* item) {
	self->insertItem(row, item);
}

void QListWidget_InsertItem2(QListWidget* self, int row, const libqt_string label) {
	self->insertItem(row, QString::fromUtf8(label.data, label.len));
}

void QListWidget_InsertItems(QListWidget* self, int row, const libqt_list labels) {
	self->insertItems(row, *labels);
}

void QListWidget_AddItem(QListWidget* self, const libqt_string label) {
	self->addItem(QString::fromUtf8(label.data, label.len));
}

void QListWidget_AddItem2(QListWidget* self, QListWidgetItem* item) {
	self->addItem(item);
}

void QListWidget_AddItems(QListWidget* self, const libqt_list labels) {
	self->addItems(*labels);
}

QListWidgetItem* QListWidget_TakeItem(QListWidget* self, int row) {
	return self->takeItem(row);
}

int QListWidget_Count(const QListWidget* self) {
	return self->count();
}

QListWidgetItem* QListWidget_CurrentItem(const QListWidget* self) {
	return self->currentItem();
}

void QListWidget_SetCurrentItem(QListWidget* self, QListWidgetItem* item) {
	self->setCurrentItem(item);
}

void QListWidget_SetCurrentItem2(QListWidget* self, QListWidgetItem* item, int command) {
	self->setCurrentItem(item, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

int QListWidget_CurrentRow(const QListWidget* self) {
	return self->currentRow();
}

void QListWidget_SetCurrentRow(QListWidget* self, int row) {
	self->setCurrentRow(row);
}

void QListWidget_SetCurrentRow2(QListWidget* self, int row, int command) {
	self->setCurrentRow(row, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

QListWidgetItem* QListWidget_ItemAt(const QListWidget* self, const QPoint* p) {
	return self->itemAt(*p);
}

QListWidgetItem* QListWidget_ItemAt2(const QListWidget* self, int x, int y) {
	return self->itemAt(x, y);
}

QRect* QListWidget_VisualItemRect(const QListWidget* self, const QListWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

void QListWidget_SortItems(QListWidget* self) {
	self->sortItems();
}

void QListWidget_SetSortingEnabled(QListWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QListWidget_IsSortingEnabled(const QListWidget* self) {
	return self->isSortingEnabled();
}

void QListWidget_EditItem(QListWidget* self, QListWidgetItem* item) {
	self->editItem(item);
}

void QListWidget_OpenPersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QListWidget_ClosePersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QListWidget_IsPersistentEditorOpen(const QListWidget* self, QListWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QListWidget_ItemWidget(const QListWidget* self, QListWidgetItem* item) {
	return self->itemWidget(item);
}

void QListWidget_SetItemWidget(QListWidget* self, QListWidgetItem* item, QWidget* widget) {
	self->setItemWidget(item, widget);
}

void QListWidget_RemoveItemWidget(QListWidget* self, QListWidgetItem* item) {
	self->removeItemWidget(item);
}

libqt_list QListWidget_SelectedItems(const QListWidget* self) {
	return self->selectedItems();
}

libqt_list QListWidget_FindItems(const QListWidget* self, const libqt_string text, int flags) {
	return self->findItems(QString::fromUtf8(text.data, text.len), static_cast<QFlags<Qt::MatchFlag>>(flags));
}

libqt_list QListWidget_Items(const QListWidget* self, const QMimeData* data) {
	return self->items(data);
}

QModelIndex* QListWidget_IndexFromItem(const QListWidget* self, const QListWidgetItem* item) {
	return new QModelIndex(self->indexFromItem(item));
}

QListWidgetItem* QListWidget_ItemFromIndex(const QListWidget* self, const QModelIndex* index) {
	return self->itemFromIndex(*index);
}

void QListWidget_ScrollToItem(QListWidget* self, const QListWidgetItem* item) {
	self->scrollToItem(item);
}

void QListWidget_Clear(QListWidget* self) {
	self->clear();
}

void QListWidget_ItemPressed(QListWidget* self, QListWidgetItem* item) {
	self->itemPressed(item);
}

void QListWidget_Connect_ItemPressed(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemPressed, [self, slotFunc](QListWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QListWidget_ItemClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemClicked(item);
}

void QListWidget_Connect_ItemClicked(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemClicked, [self, slotFunc](QListWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QListWidget_ItemDoubleClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QListWidget_Connect_ItemDoubleClicked(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemDoubleClicked, [self, slotFunc](QListWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QListWidget_ItemActivated(QListWidget* self, QListWidgetItem* item) {
	self->itemActivated(item);
}

void QListWidget_Connect_ItemActivated(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemActivated, [self, slotFunc](QListWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QListWidget_ItemEntered(QListWidget* self, QListWidgetItem* item) {
	self->itemEntered(item);
}

void QListWidget_Connect_ItemEntered(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemEntered, [self, slotFunc](QListWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QListWidget_ItemChanged(QListWidget* self, QListWidgetItem* item) {
	self->itemChanged(item);
}

void QListWidget_Connect_ItemChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemChanged, [self, slotFunc](QListWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QListWidget_CurrentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QListWidget_Connect_CurrentItemChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::currentItemChanged, [self, slotFunc](QListWidgetItem* current, QListWidgetItem* previous) {
	slotFunc(self, current, previous);
    });
}

void QListWidget_CurrentTextChanged(QListWidget* self, const libqt_string currentText) {
	self->currentTextChanged(QString::fromUtf8(currentText.data, currentText.len));
}

void QListWidget_Connect_CurrentTextChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, const char*) = reinterpret_cast<void (*)(QListWidget*, const char*)>(slot);
    QListWidget::connect(self, &QListWidget::currentTextChanged, [self, slotFunc](const QString& currentText) {
	slotFunc(self, currentText);
    });
}

void QListWidget_CurrentRowChanged(QListWidget* self, int currentRow) {
	self->currentRowChanged(currentRow);
}

void QListWidget_Connect_CurrentRowChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, int) = reinterpret_cast<void (*)(QListWidget*, int)>(slot);
    QListWidget::connect(self, &QListWidget::currentRowChanged, [self, slotFunc](int currentRow) {
	slotFunc(self, currentRow);
    });
}

void QListWidget_ItemSelectionChanged(QListWidget* self) {
	self->itemSelectionChanged();
}

void QListWidget_Connect_ItemSelectionChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*) = reinterpret_cast<void (*)(QListWidget*)>(slot);
    QListWidget::connect(self, &QListWidget::itemSelectionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QListWidget_Tr2(const char* s, const char* c) {
	QString _ret = QListWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QListWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QListWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QListWidget_SortItems1(QListWidget* self, int order) {
	self->sortItems(static_cast<Qt::SortOrder>(order));
}

void QListWidget_ScrollToItem2(QListWidget* self, const QListWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Base class handler implementation
void QListWidget_QBaseSetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
	auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_SetSelectionModel_IsBase(true);
	vqlistwidget->setSelectionModel(selectionModel);
}
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetSelectionModel(QListWidget* self, intptr_t slot) {
	auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_SetSelectionModel_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetSelectionModel_Callback>(slot));
}
}

// Derived class handler implementation
void QListWidget_DropEvent(QListWidget* self, QDropEvent* event) {
	auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
	vqlistwidget->dropEvent(event);
	} else {
	self->QListWidget::dropEvent(event);
}
}

// Base class handler implementation
void QListWidget_QBaseDropEvent(QListWidget* self, QDropEvent* event) {
	auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_DropEvent_IsBase(true);
	vqlistwidget->dropEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDropEvent(QListWidget* self, intptr_t slot) {
	auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_DropEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QListWidget_Event(QListWidget* self, QEvent* e) {
	auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
	return vqlistwidget->event(e);
	} else {
	return self->QListWidget::event(e);
}
}

// Base class handler implementation
bool QListWidget_QBaseEvent(QListWidget* self, QEvent* e) {
	auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_Event_IsBase(true);
	return vqlistwidget->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEvent(QListWidget* self, intptr_t slot) {
	auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_Event_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Event_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QListWidget_MimeTypes(const QListWidget* self) {
	auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
	return vqlistwidget->mimeTypes();
	} else {
	return self->QListWidget::mimeTypes();
}
}

// Base class handler implementation
libqt_list QListWidget_QBaseMimeTypes(const QListWidget* self) {
	auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_MimeTypes_IsBase(true);
	return vqlistwidget->mimeTypes();
}
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMimeTypes(const QListWidget* self, intptr_t slot) {
	auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_MimeTypes_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MimeTypes_Callback>(slot));
}
}

// Derived class handler implementation
QMimeData* QListWidget_MimeData(const QListWidget* self, const libqt_list items) {
	auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
	return vqlistwidget->mimeData(*items);
	} else {
	return self->QListWidget::mimeData(*items);
}
}

// Base class handler implementation
QMimeData* QListWidget_QBaseMimeData(const QListWidget* self, const libqt_list items) {
	auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_MimeData_IsBase(true);
	return vqlistwidget->mimeData(*items);
}
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMimeData(const QListWidget* self, intptr_t slot) {
	auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_MimeData_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MimeData_Callback>(slot));
}
}

// Derived class handler implementation
bool QListWidget_DropMimeData(QListWidget* self, int index, const QMimeData* data, int action) {
	auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
	return vqlistwidget->dropMimeData(index, data, static_cast<Qt::DropAction>(action));
	} else {
	return self->QListWidget::dropMimeData(index, data, static_cast<Qt::DropAction>(action));
}
}

// Base class handler implementation
bool QListWidget_QBaseDropMimeData(QListWidget* self, int index, const QMimeData* data, int action) {
	auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_DropMimeData_IsBase(true);
	return vqlistwidget->dropMimeData(index, data, static_cast<Qt::DropAction>(action));
}
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDropMimeData(QListWidget* self, intptr_t slot) {
	auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_DropMimeData_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DropMimeData_Callback>(slot));
}
}

// Derived class handler implementation
int QListWidget_SupportedDropActions(const QListWidget* self) {
	auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
	return vqlistwidget->supportedDropActions();
	} else {
	return self->QListWidget::supportedDropActions();
}
}

// Base class handler implementation
int QListWidget_QBaseSupportedDropActions(const QListWidget* self) {
	auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_SupportedDropActions_IsBase(true);
	return vqlistwidget->supportedDropActions();
}
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSupportedDropActions(const QListWidget* self, intptr_t slot) {
	auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
	if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
vqlistwidget->setQListWidget_SupportedDropActions_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SupportedDropActions_Callback>(slot));
}
}

void QListWidget_Delete(QListWidget* self) {
    delete self;
}

