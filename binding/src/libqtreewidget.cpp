#include <QBrush>
#include <QDataStream>
#include <QDropEvent>
#include <QEvent>
#include <QFont>
#include <QIcon>
#include <QItemSelectionModel>
#include <QMimeData>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTreeView>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QVariant>
#include <QWidget>
#include <qtreewidget.h>
#include "libqtreewidget.h"
#include "libqtreewidget.hxx"

QTreeWidgetItem* QTreeWidgetItem_new() {
	 return new VirtualQTreeWidgetItem();
}

QTreeWidgetItem* QTreeWidgetItem_new2(const libqt_list strings) {
	 return new VirtualQTreeWidgetItem(QList<QString>());
}

QTreeWidgetItem* QTreeWidgetItem_new3(QTreeWidget* treeview) {
	 return new VirtualQTreeWidgetItem(treeview);
}

QTreeWidgetItem* QTreeWidgetItem_new4(QTreeWidget* treeview, const libqt_list strings) {
	 return new VirtualQTreeWidgetItem(treeview, QList<QString>());
}

QTreeWidgetItem* QTreeWidgetItem_new5(QTreeWidget* treeview, QTreeWidgetItem* after) {
	 return new VirtualQTreeWidgetItem(treeview, after);
}

QTreeWidgetItem* QTreeWidgetItem_new6(QTreeWidgetItem* parent) {
	 return new VirtualQTreeWidgetItem(parent);
}

QTreeWidgetItem* QTreeWidgetItem_new7(QTreeWidgetItem* parent, const libqt_list strings) {
	 return new VirtualQTreeWidgetItem(parent, QList<QString>());
}

QTreeWidgetItem* QTreeWidgetItem_new8(QTreeWidgetItem* parent, QTreeWidgetItem* after) {
	 return new VirtualQTreeWidgetItem(parent, after);
}

QTreeWidgetItem* QTreeWidgetItem_new9(const QTreeWidgetItem* other) {
	 return new VirtualQTreeWidgetItem(*other);
}

QTreeWidgetItem* QTreeWidgetItem_new10(int typeVal) {
	 return new VirtualQTreeWidgetItem(typeVal);
}

QTreeWidgetItem* QTreeWidgetItem_new11(const libqt_list strings, int typeVal) {
	 return new VirtualQTreeWidgetItem(QList<QString>(), typeVal);
}

QTreeWidgetItem* QTreeWidgetItem_new12(QTreeWidget* treeview, int typeVal) {
	 return new VirtualQTreeWidgetItem(treeview, typeVal);
}

QTreeWidgetItem* QTreeWidgetItem_new13(QTreeWidget* treeview, const libqt_list strings, int typeVal) {
	 return new VirtualQTreeWidgetItem(treeview, QList<QString>(), typeVal);
}

QTreeWidgetItem* QTreeWidgetItem_new14(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal) {
	 return new VirtualQTreeWidgetItem(treeview, after, typeVal);
}

QTreeWidgetItem* QTreeWidgetItem_new15(QTreeWidgetItem* parent, int typeVal) {
	 return new VirtualQTreeWidgetItem(parent, typeVal);
}

QTreeWidgetItem* QTreeWidgetItem_new16(QTreeWidgetItem* parent, const libqt_list strings, int typeVal) {
	 return new VirtualQTreeWidgetItem(parent, QList<QString>(), typeVal);
}

QTreeWidgetItem* QTreeWidgetItem_new17(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal) {
	 return new VirtualQTreeWidgetItem(parent, after, typeVal);
}

QTreeWidget* QTreeWidgetItem_TreeWidget(const QTreeWidgetItem* self) {
	return self->treeWidget();
}

void QTreeWidgetItem_SetSelected(QTreeWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QTreeWidgetItem_IsSelected(const QTreeWidgetItem* self) {
	return self->isSelected();
}

void QTreeWidgetItem_SetHidden(QTreeWidgetItem* self, bool hide) {
	self->setHidden(hide);
}

bool QTreeWidgetItem_IsHidden(const QTreeWidgetItem* self) {
	return self->isHidden();
}

void QTreeWidgetItem_SetExpanded(QTreeWidgetItem* self, bool expand) {
	self->setExpanded(expand);
}

bool QTreeWidgetItem_IsExpanded(const QTreeWidgetItem* self) {
	return self->isExpanded();
}

void QTreeWidgetItem_SetFirstColumnSpanned(QTreeWidgetItem* self, bool span) {
	self->setFirstColumnSpanned(span);
}

bool QTreeWidgetItem_IsFirstColumnSpanned(const QTreeWidgetItem* self) {
	return self->isFirstColumnSpanned();
}

void QTreeWidgetItem_SetDisabled(QTreeWidgetItem* self, bool disabled) {
	self->setDisabled(disabled);
}

bool QTreeWidgetItem_IsDisabled(const QTreeWidgetItem* self) {
	return self->isDisabled();
}

void QTreeWidgetItem_SetChildIndicatorPolicy(QTreeWidgetItem* self, int policy) {
	self->setChildIndicatorPolicy(static_cast<QTreeWidgetItem::ChildIndicatorPolicy>(policy));
}

int QTreeWidgetItem_ChildIndicatorPolicy(const QTreeWidgetItem* self) {
	return self->childIndicatorPolicy();
}

int QTreeWidgetItem_Flags(const QTreeWidgetItem* self) {
	return self->flags();
}

void QTreeWidgetItem_SetFlags(QTreeWidgetItem* self, int flags) {
	self->setFlags(static_cast<QFlags<Qt::ItemFlag>>(flags));
}

libqt_string QTreeWidgetItem_Text(const QTreeWidgetItem* self, int column) {
	QString _ret = self->text(column);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTreeWidgetItem_SetText(QTreeWidgetItem* self, int column, const libqt_string text) {
	self->setText(column, QString::fromUtf8(text.data, text.len));
}

QIcon* QTreeWidgetItem_Icon(const QTreeWidgetItem* self, int column) {
	return new QIcon(self->icon(column));
}

void QTreeWidgetItem_SetIcon(QTreeWidgetItem* self, int column, const QIcon* icon) {
	self->setIcon(column, *icon);
}

libqt_string QTreeWidgetItem_StatusTip(const QTreeWidgetItem* self, int column) {
	QString _ret = self->statusTip(column);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTreeWidgetItem_SetStatusTip(QTreeWidgetItem* self, int column, const libqt_string statusTip) {
	self->setStatusTip(column, QString::fromUtf8(statusTip.data, statusTip.len));
}

libqt_string QTreeWidgetItem_ToolTip(const QTreeWidgetItem* self, int column) {
	QString _ret = self->toolTip(column);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTreeWidgetItem_SetToolTip(QTreeWidgetItem* self, int column, const libqt_string toolTip) {
	self->setToolTip(column, QString::fromUtf8(toolTip.data, toolTip.len));
}

libqt_string QTreeWidgetItem_WhatsThis(const QTreeWidgetItem* self, int column) {
	QString _ret = self->whatsThis(column);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTreeWidgetItem_SetWhatsThis(QTreeWidgetItem* self, int column, const libqt_string whatsThis) {
	self->setWhatsThis(column, QString::fromUtf8(whatsThis.data, whatsThis.len));
}

QFont* QTreeWidgetItem_Font(const QTreeWidgetItem* self, int column) {
	return new QFont(self->font(column));
}

void QTreeWidgetItem_SetFont(QTreeWidgetItem* self, int column, const QFont* font) {
	self->setFont(column, *font);
}

int QTreeWidgetItem_TextAlignment(const QTreeWidgetItem* self, int column) {
	return self->textAlignment(column);
}

void QTreeWidgetItem_SetTextAlignment(QTreeWidgetItem* self, int column, int alignment) {
	self->setTextAlignment(column, alignment);
}

void QTreeWidgetItem_SetTextAlignment2(QTreeWidgetItem* self, int column, int alignment) {
	self->setTextAlignment(column, static_cast<Qt::AlignmentFlag>(alignment));
}

void QTreeWidgetItem_SetTextAlignment3(QTreeWidgetItem* self, int column, int alignment) {
	self->setTextAlignment(column, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

QBrush* QTreeWidgetItem_Background(const QTreeWidgetItem* self, int column) {
	return new QBrush(self->background(column));
}

void QTreeWidgetItem_SetBackground(QTreeWidgetItem* self, int column, const QBrush* brush) {
	self->setBackground(column, *brush);
}

QBrush* QTreeWidgetItem_Foreground(const QTreeWidgetItem* self, int column) {
	return new QBrush(self->foreground(column));
}

void QTreeWidgetItem_SetForeground(QTreeWidgetItem* self, int column, const QBrush* brush) {
	self->setForeground(column, *brush);
}

int QTreeWidgetItem_CheckState(const QTreeWidgetItem* self, int column) {
	return self->checkState(column);
}

void QTreeWidgetItem_SetCheckState(QTreeWidgetItem* self, int column, int state) {
	self->setCheckState(column, static_cast<Qt::CheckState>(state));
}

QSize* QTreeWidgetItem_SizeHint(const QTreeWidgetItem* self, int column) {
	return new QSize(self->sizeHint(column));
}

void QTreeWidgetItem_SetSizeHint(QTreeWidgetItem* self, int column, const QSize* size) {
	self->setSizeHint(column, *size);
}

QVariant* QTreeWidgetItem_Data(const QTreeWidgetItem* self, int column, int role) {
	return new QVariant(self->data(column, role));
}

void QTreeWidgetItem_SetData(QTreeWidgetItem* self, int column, int role, const QVariant* value) {
	self->setData(column, role, *value);
}

bool QTreeWidgetItem_OperatorLesser(const QTreeWidgetItem* self, const QTreeWidgetItem* other) {
	return self->operator<(*other);
}

void QTreeWidgetItem_Read(QTreeWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QTreeWidgetItem_Write(const QTreeWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QTreeWidgetItem_OperatorAssign(QTreeWidgetItem* self, const QTreeWidgetItem* other) {
	self->operator=(*other);
}

QTreeWidgetItem* QTreeWidgetItem_Parent(const QTreeWidgetItem* self) {
	return self->parent();
}

QTreeWidgetItem* QTreeWidgetItem_Child(const QTreeWidgetItem* self, int index) {
	return self->child(index);
}

int QTreeWidgetItem_ChildCount(const QTreeWidgetItem* self) {
	return self->childCount();
}

int QTreeWidgetItem_ColumnCount(const QTreeWidgetItem* self) {
	return self->columnCount();
}

int QTreeWidgetItem_IndexOfChild(const QTreeWidgetItem* self, QTreeWidgetItem* child) {
	return self->indexOfChild(child);
}

void QTreeWidgetItem_AddChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
	self->addChild(child);
}

void QTreeWidgetItem_InsertChild(QTreeWidgetItem* self, int index, QTreeWidgetItem* child) {
	self->insertChild(index, child);
}

void QTreeWidgetItem_RemoveChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
	self->removeChild(child);
}

QTreeWidgetItem* QTreeWidgetItem_TakeChild(QTreeWidgetItem* self, int index) {
	return self->takeChild(index);
}

void QTreeWidgetItem_AddChildren(QTreeWidgetItem* self, const libqt_list children) {
	self->addChildren(QList<QTreeWidgetItem *>());
}

void QTreeWidgetItem_InsertChildren(QTreeWidgetItem* self, int index, const libqt_list children) {
	self->insertChildren(index, QList<QTreeWidgetItem *>());
}

libqt_list QTreeWidgetItem_TakeChildren(QTreeWidgetItem* self) {
	auto _ret = self->takeChildren();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

int QTreeWidgetItem_Type(const QTreeWidgetItem* self) {
	return self->type();
}

void QTreeWidgetItem_SortChildren(QTreeWidgetItem* self, int column, int order) {
	self->sortChildren(column, static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
QVariant* QTreeWidgetItem_QBaseData(const QTreeWidgetItem* self, int column, int role) {
	auto* vqtreewidgetitem = dynamic_cast<const VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_Data_IsBase(true);
	return new QVariant(vqtreewidgetitem->data(column, role));
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnData(const QTreeWidgetItem* self, intptr_t slot) {
	auto* vqtreewidgetitem = dynamic_cast<const VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_Data_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Data_Callback>(slot));
}
}

// Base class handler implementation
void QTreeWidgetItem_QBaseSetData(QTreeWidgetItem* self, int column, int role, const QVariant* value) {
	auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_SetData_IsBase(true);
	vqtreewidgetitem->setData(column, role, *value);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnSetData(QTreeWidgetItem* self, intptr_t slot) {
	auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_SetData_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_SetData_Callback>(slot));
}
}

// Base class handler implementation
bool QTreeWidgetItem_QBaseOperatorLesser(const QTreeWidgetItem* self, const QTreeWidgetItem* other) {
	auto* vqtreewidgetitem = dynamic_cast<const VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_OperatorLesser_IsBase(true);
	return vqtreewidgetitem->operator<(*other);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnOperatorLesser(const QTreeWidgetItem* self, intptr_t slot) {
	auto* vqtreewidgetitem = dynamic_cast<const VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_OperatorLesser_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_OperatorLesser_Callback>(slot));
}
}

// Base class handler implementation
void QTreeWidgetItem_QBaseRead(QTreeWidgetItem* self, QDataStream* in) {
	auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_Read_IsBase(true);
	vqtreewidgetitem->read(*in);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnRead(QTreeWidgetItem* self, intptr_t slot) {
	auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_Read_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Read_Callback>(slot));
}
}

// Base class handler implementation
void QTreeWidgetItem_QBaseWrite(const QTreeWidgetItem* self, QDataStream* out) {
	auto* vqtreewidgetitem = dynamic_cast<const VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_Write_IsBase(true);
	vqtreewidgetitem->write(*out);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnWrite(const QTreeWidgetItem* self, intptr_t slot) {
	auto* vqtreewidgetitem = dynamic_cast<const VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_Write_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Write_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeWidgetItem_EmitDataChanged(QTreeWidgetItem* self) {
	auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
	vqtreewidgetitem->emitDataChanged();
	} else {
	self->QTreeWidgetItem::emitDataChanged();
}
}

// Base class handler implementation
void QTreeWidgetItem_QBaseEmitDataChanged(QTreeWidgetItem* self) {
	auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_EmitDataChanged_IsBase(true);
	vqtreewidgetitem->emitDataChanged();
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnEmitDataChanged(QTreeWidgetItem* self, intptr_t slot) {
	auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
	if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
vqtreewidgetitem->setQTreeWidgetItem_EmitDataChanged_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_EmitDataChanged_Callback>(slot));
}
}

void QTreeWidgetItem_Delete(QTreeWidgetItem* self) {
    delete self;
}

QTreeWidget* QTreeWidget_new(QWidget* parent) {
	 return new VirtualQTreeWidget(parent);
}

QTreeWidget* QTreeWidget_new2() {
	 return new VirtualQTreeWidget();
}

libqt_string QTreeWidget_Tr(const char* s) {
	QString _ret = QTreeWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QTreeWidget_ColumnCount(const QTreeWidget* self) {
	return self->columnCount();
}

void QTreeWidget_SetColumnCount(QTreeWidget* self, int columns) {
	self->setColumnCount(columns);
}

QTreeWidgetItem* QTreeWidget_InvisibleRootItem(const QTreeWidget* self) {
	return self->invisibleRootItem();
}

QTreeWidgetItem* QTreeWidget_TopLevelItem(const QTreeWidget* self, int index) {
	return self->topLevelItem(index);
}

int QTreeWidget_TopLevelItemCount(const QTreeWidget* self) {
	return self->topLevelItemCount();
}

void QTreeWidget_InsertTopLevelItem(QTreeWidget* self, int index, QTreeWidgetItem* item) {
	self->insertTopLevelItem(index, item);
}

void QTreeWidget_AddTopLevelItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->addTopLevelItem(item);
}

QTreeWidgetItem* QTreeWidget_TakeTopLevelItem(QTreeWidget* self, int index) {
	return self->takeTopLevelItem(index);
}

int QTreeWidget_IndexOfTopLevelItem(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->indexOfTopLevelItem(item);
}

void QTreeWidget_InsertTopLevelItems(QTreeWidget* self, int index, const libqt_list items) {
	self->insertTopLevelItems(index, QList<QTreeWidgetItem *>());
}

void QTreeWidget_AddTopLevelItems(QTreeWidget* self, const libqt_list items) {
	self->addTopLevelItems(QList<QTreeWidgetItem *>());
}

QTreeWidgetItem* QTreeWidget_HeaderItem(const QTreeWidget* self) {
	return self->headerItem();
}

void QTreeWidget_SetHeaderItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->setHeaderItem(item);
}

void QTreeWidget_SetHeaderLabels(QTreeWidget* self, const libqt_list labels) {
	self->setHeaderLabels(QList<QString>());
}

void QTreeWidget_SetHeaderLabel(QTreeWidget* self, const libqt_string label) {
	self->setHeaderLabel(QString::fromUtf8(label.data, label.len));
}

QTreeWidgetItem* QTreeWidget_CurrentItem(const QTreeWidget* self) {
	return self->currentItem();
}

int QTreeWidget_CurrentColumn(const QTreeWidget* self) {
	return self->currentColumn();
}

void QTreeWidget_SetCurrentItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->setCurrentItem(item);
}

void QTreeWidget_SetCurrentItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->setCurrentItem(item, column);
}

void QTreeWidget_SetCurrentItem3(QTreeWidget* self, QTreeWidgetItem* item, int column, int command) {
	self->setCurrentItem(item, column, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

QTreeWidgetItem* QTreeWidget_ItemAt(const QTreeWidget* self, const QPoint* p) {
	return self->itemAt(*p);
}

QTreeWidgetItem* QTreeWidget_ItemAt2(const QTreeWidget* self, int x, int y) {
	return self->itemAt(x, y);
}

QRect* QTreeWidget_VisualItemRect(const QTreeWidget* self, const QTreeWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

int QTreeWidget_SortColumn(const QTreeWidget* self) {
	return self->sortColumn();
}

void QTreeWidget_SortItems(QTreeWidget* self, int column, int order) {
	self->sortItems(column, static_cast<Qt::SortOrder>(order));
}

void QTreeWidget_EditItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->editItem(item);
}

void QTreeWidget_OpenPersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QTreeWidget_ClosePersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QTreeWidget_IsPersistentEditorOpen(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QTreeWidget_ItemWidget(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
	return self->itemWidget(item, column);
}

void QTreeWidget_SetItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column, QWidget* widget) {
	self->setItemWidget(item, column, widget);
}

void QTreeWidget_RemoveItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->removeItemWidget(item, column);
}

libqt_list QTreeWidget_SelectedItems(const QTreeWidget* self) {
	auto _ret = self->selectedItems();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QTreeWidget_FindItems(const QTreeWidget* self, const libqt_string text, int flags) {
	auto _ret = self->findItems(QString::fromUtf8(text.data, text.len), static_cast<QFlags<Qt::MatchFlag>>(flags));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QTreeWidgetItem* QTreeWidget_ItemAbove(const QTreeWidget* self, const QTreeWidgetItem* item) {
	return self->itemAbove(item);
}

QTreeWidgetItem* QTreeWidget_ItemBelow(const QTreeWidget* self, const QTreeWidgetItem* item) {
	return self->itemBelow(item);
}

QModelIndex* QTreeWidget_IndexFromItem(const QTreeWidget* self, const QTreeWidgetItem* item) {
	return new QModelIndex(self->indexFromItem(item));
}

QTreeWidgetItem* QTreeWidget_ItemFromIndex(const QTreeWidget* self, const QModelIndex* index) {
	return self->itemFromIndex(*index);
}

void QTreeWidget_SetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QTreeWidget_ScrollToItem(QTreeWidget* self, const QTreeWidgetItem* item) {
	self->scrollToItem(item);
}

void QTreeWidget_ExpandItem(QTreeWidget* self, const QTreeWidgetItem* item) {
	self->expandItem(item);
}

void QTreeWidget_CollapseItem(QTreeWidget* self, const QTreeWidgetItem* item) {
	self->collapseItem(item);
}

void QTreeWidget_Clear(QTreeWidget* self) {
	self->clear();
}

void QTreeWidget_ItemPressed(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemPressed(item, column);
}

void QTreeWidget_Connect_ItemPressed(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemPressed, [self, slotFunc](QTreeWidgetItem* item, int column) {
	slotFunc(self, item, column);
    });
}

void QTreeWidget_ItemClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemClicked(item, column);
}

void QTreeWidget_Connect_ItemClicked(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemClicked, [self, slotFunc](QTreeWidgetItem* item, int column) {
	slotFunc(self, item, column);
    });
}

void QTreeWidget_ItemDoubleClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemDoubleClicked(item, column);
}

void QTreeWidget_Connect_ItemDoubleClicked(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemDoubleClicked, [self, slotFunc](QTreeWidgetItem* item, int column) {
	slotFunc(self, item, column);
    });
}

void QTreeWidget_ItemActivated(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemActivated(item, column);
}

void QTreeWidget_Connect_ItemActivated(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemActivated, [self, slotFunc](QTreeWidgetItem* item, int column) {
	slotFunc(self, item, column);
    });
}

void QTreeWidget_ItemEntered(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemEntered(item, column);
}

void QTreeWidget_Connect_ItemEntered(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemEntered, [self, slotFunc](QTreeWidgetItem* item, int column) {
	slotFunc(self, item, column);
    });
}

void QTreeWidget_ItemChanged(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemChanged(item, column);
}

void QTreeWidget_Connect_ItemChanged(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemChanged, [self, slotFunc](QTreeWidgetItem* item, int column) {
	slotFunc(self, item, column);
    });
}

void QTreeWidget_ItemExpanded(QTreeWidget* self, QTreeWidgetItem* item) {
	self->itemExpanded(item);
}

void QTreeWidget_Connect_ItemExpanded(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemExpanded, [self, slotFunc](QTreeWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QTreeWidget_ItemCollapsed(QTreeWidget* self, QTreeWidgetItem* item) {
	self->itemCollapsed(item);
}

void QTreeWidget_Connect_ItemCollapsed(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemCollapsed, [self, slotFunc](QTreeWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QTreeWidget_CurrentItemChanged(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QTreeWidget_Connect_CurrentItemChanged(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, QTreeWidgetItem*) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, QTreeWidgetItem*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::currentItemChanged, [self, slotFunc](QTreeWidgetItem* current, QTreeWidgetItem* previous) {
	slotFunc(self, current, previous);
    });
}

void QTreeWidget_ItemSelectionChanged(QTreeWidget* self) {
	self->itemSelectionChanged();
}

void QTreeWidget_Connect_ItemSelectionChanged(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*) = reinterpret_cast<void (*)(QTreeWidget*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemSelectionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QTreeWidget_Tr2(const char* s, const char* c) {
	QString _ret = QTreeWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTreeWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTreeWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTreeWidget_EditItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->editItem(item, column);
}

void QTreeWidget_OpenPersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->openPersistentEditor(item, column);
}

void QTreeWidget_ClosePersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->closePersistentEditor(item, column);
}

bool QTreeWidget_IsPersistentEditorOpen2(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
	return self->isPersistentEditorOpen(item, column);
}

libqt_list QTreeWidget_FindItems3(const QTreeWidget* self, const libqt_string text, int flags, int column) {
	auto _ret = self->findItems(QString::fromUtf8(text.data, text.len), static_cast<QFlags<Qt::MatchFlag>>(flags), column);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QModelIndex* QTreeWidget_IndexFromItem2(const QTreeWidget* self, const QTreeWidgetItem* item, int column) {
	return new QModelIndex(self->indexFromItem(item, column));
}

void QTreeWidget_ScrollToItem2(QTreeWidget* self, const QTreeWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Base class handler implementation
void QTreeWidget_QBaseSetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel) {
	auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_SetSelectionModel_IsBase(true);
	vqtreewidget->setSelectionModel(selectionModel);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetSelectionModel(QTreeWidget* self, intptr_t slot) {
	auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_SetSelectionModel_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetSelectionModel_Callback>(slot));
}
}

// Derived class handler implementation
bool QTreeWidget_Event(QTreeWidget* self, QEvent* e) {
	auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
	return vqtreewidget->event(e);
	} else {
	return self->QTreeWidget::event(e);
}
}

// Base class handler implementation
bool QTreeWidget_QBaseEvent(QTreeWidget* self, QEvent* e) {
	auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_Event_IsBase(true);
	return vqtreewidget->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEvent(QTreeWidget* self, intptr_t slot) {
	auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_Event_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Event_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QTreeWidget_MimeTypes(const QTreeWidget* self) {
	auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
	auto _ret = vqtreewidget->mimeTypes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
	} else {
	auto _ret = self->QTreeWidget::mimeTypes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}
}

// Base class handler implementation
libqt_list QTreeWidget_QBaseMimeTypes(const QTreeWidget* self) {
	auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_MimeTypes_IsBase(true);
	auto _ret = vqtreewidget->mimeTypes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMimeTypes(const QTreeWidget* self, intptr_t slot) {
	auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_MimeTypes_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MimeTypes_Callback>(slot));
}
}

// Derived class handler implementation
QMimeData* QTreeWidget_MimeData(const QTreeWidget* self, const libqt_list items) {
	auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
	return vqtreewidget->mimeData(QList<QTreeWidgetItem *>());
	} else {
	return self->QTreeWidget::mimeData(QList<QTreeWidgetItem *>());
}
}

// Base class handler implementation
QMimeData* QTreeWidget_QBaseMimeData(const QTreeWidget* self, const libqt_list items) {
	auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_MimeData_IsBase(true);
	return vqtreewidget->mimeData(QList<QTreeWidgetItem *>());
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMimeData(const QTreeWidget* self, intptr_t slot) {
	auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_MimeData_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MimeData_Callback>(slot));
}
}

// Derived class handler implementation
bool QTreeWidget_DropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, const QMimeData* data, int action) {
	auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
	return vqtreewidget->dropMimeData(parent, index, data, static_cast<Qt::DropAction>(action));
	} else {
	return self->QTreeWidget::dropMimeData(parent, index, data, static_cast<Qt::DropAction>(action));
}
}

// Base class handler implementation
bool QTreeWidget_QBaseDropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, const QMimeData* data, int action) {
	auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_DropMimeData_IsBase(true);
	return vqtreewidget->dropMimeData(parent, index, data, static_cast<Qt::DropAction>(action));
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDropMimeData(QTreeWidget* self, intptr_t slot) {
	auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_DropMimeData_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DropMimeData_Callback>(slot));
}
}

// Derived class handler implementation
int QTreeWidget_SupportedDropActions(const QTreeWidget* self) {
	auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
	return vqtreewidget->supportedDropActions();
	} else {
	return self->QTreeWidget::supportedDropActions();
}
}

// Base class handler implementation
int QTreeWidget_QBaseSupportedDropActions(const QTreeWidget* self) {
	auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_SupportedDropActions_IsBase(true);
	return vqtreewidget->supportedDropActions();
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSupportedDropActions(const QTreeWidget* self, intptr_t slot) {
	auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_SupportedDropActions_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SupportedDropActions_Callback>(slot));
}
}

// Derived class handler implementation
void QTreeWidget_DropEvent(QTreeWidget* self, QDropEvent* event) {
	auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
	vqtreewidget->dropEvent(event);
	} else {
	self->QTreeWidget::dropEvent(event);
}
}

// Base class handler implementation
void QTreeWidget_QBaseDropEvent(QTreeWidget* self, QDropEvent* event) {
	auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_DropEvent_IsBase(true);
	vqtreewidget->dropEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDropEvent(QTreeWidget* self, intptr_t slot) {
	auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
	if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
vqtreewidget->setQTreeWidget_DropEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DropEvent_Callback>(slot));
}
}

void QTreeWidget_Delete(QTreeWidget* self) {
    delete self;
}

