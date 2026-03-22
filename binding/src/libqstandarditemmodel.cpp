#include <QAbstractItemModel>
#include <QBrush>
#include <QDataStream>
#include <QFont>
#include <QIcon>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QSize>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <qstandarditemmodel.h>
#include "libqstandarditemmodel.h"
#include "libqstandarditemmodel.hxx"

QStandardItem* QStandardItem_new() {
	 return new VirtualQStandardItem();
}

QStandardItem* QStandardItem_new2(const libqt_string text) {
	 return new VirtualQStandardItem(QString::fromUtf8(text.data, text.len));
}

QStandardItem* QStandardItem_new3(const QIcon* icon, const libqt_string text) {
	 return new VirtualQStandardItem(*icon, QString::fromUtf8(text.data, text.len));
}

QStandardItem* QStandardItem_new4(int rows) {
	 return new VirtualQStandardItem(rows);
}

QStandardItem* QStandardItem_new5(int rows, int columns) {
	 return new VirtualQStandardItem(rows, columns);
}

QVariant* QStandardItem_Data(const QStandardItem* self, int role) {
	return new QVariant(self->data(role));
}

void QStandardItem_MultiData(const QStandardItem* self, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*roleDataSpan);
}

void QStandardItem_SetData(QStandardItem* self, const QVariant* value, int role) {
	self->setData(*value, role);
}

void QStandardItem_ClearData(QStandardItem* self) {
	self->clearData();
}

libqt_string QStandardItem_Text(const QStandardItem* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStandardItem_SetText(QStandardItem* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

QIcon* QStandardItem_Icon(const QStandardItem* self) {
	return new QIcon(self->icon());
}

void QStandardItem_SetIcon(QStandardItem* self, const QIcon* icon) {
	self->setIcon(*icon);
}

libqt_string QStandardItem_ToolTip(const QStandardItem* self) {
	QString _ret = self->toolTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStandardItem_SetToolTip(QStandardItem* self, const libqt_string toolTip) {
	self->setToolTip(QString::fromUtf8(toolTip.data, toolTip.len));
}

libqt_string QStandardItem_StatusTip(const QStandardItem* self) {
	QString _ret = self->statusTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStandardItem_SetStatusTip(QStandardItem* self, const libqt_string statusTip) {
	self->setStatusTip(QString::fromUtf8(statusTip.data, statusTip.len));
}

libqt_string QStandardItem_WhatsThis(const QStandardItem* self) {
	QString _ret = self->whatsThis();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStandardItem_SetWhatsThis(QStandardItem* self, const libqt_string whatsThis) {
	self->setWhatsThis(QString::fromUtf8(whatsThis.data, whatsThis.len));
}

QSize* QStandardItem_SizeHint(const QStandardItem* self) {
	return new QSize(self->sizeHint());
}

void QStandardItem_SetSizeHint(QStandardItem* self, const QSize* sizeHint) {
	self->setSizeHint(*sizeHint);
}

QFont* QStandardItem_Font(const QStandardItem* self) {
	return new QFont(self->font());
}

void QStandardItem_SetFont(QStandardItem* self, const QFont* font) {
	self->setFont(*font);
}

int QStandardItem_TextAlignment(const QStandardItem* self) {
	return self->textAlignment();
}

void QStandardItem_SetTextAlignment(QStandardItem* self, int textAlignment) {
	self->setTextAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(textAlignment));
}

QBrush* QStandardItem_Background(const QStandardItem* self) {
	return new QBrush(self->background());
}

void QStandardItem_SetBackground(QStandardItem* self, const QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QStandardItem_Foreground(const QStandardItem* self) {
	return new QBrush(self->foreground());
}

void QStandardItem_SetForeground(QStandardItem* self, const QBrush* brush) {
	self->setForeground(*brush);
}

int QStandardItem_CheckState(const QStandardItem* self) {
	return self->checkState();
}

void QStandardItem_SetCheckState(QStandardItem* self, int checkState) {
	self->setCheckState(static_cast<Qt::CheckState>(checkState));
}

libqt_string QStandardItem_AccessibleText(const QStandardItem* self) {
	QString _ret = self->accessibleText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStandardItem_SetAccessibleText(QStandardItem* self, const libqt_string accessibleText) {
	self->setAccessibleText(QString::fromUtf8(accessibleText.data, accessibleText.len));
}

libqt_string QStandardItem_AccessibleDescription(const QStandardItem* self) {
	QString _ret = self->accessibleDescription();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStandardItem_SetAccessibleDescription(QStandardItem* self, const libqt_string accessibleDescription) {
	self->setAccessibleDescription(QString::fromUtf8(accessibleDescription.data, accessibleDescription.len));
}

int QStandardItem_Flags(const QStandardItem* self) {
	return self->flags();
}

void QStandardItem_SetFlags(QStandardItem* self, int flags) {
	self->setFlags(static_cast<QFlags<Qt::ItemFlag>>(flags));
}

bool QStandardItem_IsEnabled(const QStandardItem* self) {
	return self->isEnabled();
}

void QStandardItem_SetEnabled(QStandardItem* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QStandardItem_IsEditable(const QStandardItem* self) {
	return self->isEditable();
}

void QStandardItem_SetEditable(QStandardItem* self, bool editable) {
	self->setEditable(editable);
}

bool QStandardItem_IsSelectable(const QStandardItem* self) {
	return self->isSelectable();
}

void QStandardItem_SetSelectable(QStandardItem* self, bool selectable) {
	self->setSelectable(selectable);
}

bool QStandardItem_IsCheckable(const QStandardItem* self) {
	return self->isCheckable();
}

void QStandardItem_SetCheckable(QStandardItem* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QStandardItem_IsAutoTristate(const QStandardItem* self) {
	return self->isAutoTristate();
}

void QStandardItem_SetAutoTristate(QStandardItem* self, bool tristate) {
	self->setAutoTristate(tristate);
}

bool QStandardItem_IsUserTristate(const QStandardItem* self) {
	return self->isUserTristate();
}

void QStandardItem_SetUserTristate(QStandardItem* self, bool tristate) {
	self->setUserTristate(tristate);
}

bool QStandardItem_IsDragEnabled(const QStandardItem* self) {
	return self->isDragEnabled();
}

void QStandardItem_SetDragEnabled(QStandardItem* self, bool dragEnabled) {
	self->setDragEnabled(dragEnabled);
}

bool QStandardItem_IsDropEnabled(const QStandardItem* self) {
	return self->isDropEnabled();
}

void QStandardItem_SetDropEnabled(QStandardItem* self, bool dropEnabled) {
	self->setDropEnabled(dropEnabled);
}

QStandardItem* QStandardItem_Parent(const QStandardItem* self) {
	return self->parent();
}

int QStandardItem_Row(const QStandardItem* self) {
	return self->row();
}

int QStandardItem_Column(const QStandardItem* self) {
	return self->column();
}

QModelIndex* QStandardItem_Index(const QStandardItem* self) {
	return new QModelIndex(self->index());
}

QStandardItemModel* QStandardItem_Model(const QStandardItem* self) {
	return self->model();
}

int QStandardItem_RowCount(const QStandardItem* self) {
	return self->rowCount();
}

void QStandardItem_SetRowCount(QStandardItem* self, int rows) {
	self->setRowCount(rows);
}

int QStandardItem_ColumnCount(const QStandardItem* self) {
	return self->columnCount();
}

void QStandardItem_SetColumnCount(QStandardItem* self, int columns) {
	self->setColumnCount(columns);
}

bool QStandardItem_HasChildren(const QStandardItem* self) {
	return self->hasChildren();
}

QStandardItem* QStandardItem_Child(const QStandardItem* self, int row) {
	return self->child(row);
}

void QStandardItem_SetChild(QStandardItem* self, int row, int column, QStandardItem* item) {
	self->setChild(row, column, item);
}

void QStandardItem_SetChild2(QStandardItem* self, int row, QStandardItem* item) {
	self->setChild(row, item);
}

void QStandardItem_InsertRow(QStandardItem* self, int row, const libqt_list items) {
	self->insertRow(row, QList<QStandardItem *>());
}

void QStandardItem_InsertColumn(QStandardItem* self, int column, const libqt_list items) {
	self->insertColumn(column, QList<QStandardItem *>());
}

void QStandardItem_InsertRows(QStandardItem* self, int row, const libqt_list items) {
	self->insertRows(row, QList<QStandardItem *>());
}

void QStandardItem_InsertRows2(QStandardItem* self, int row, int count) {
	self->insertRows(row, count);
}

void QStandardItem_InsertColumns(QStandardItem* self, int column, int count) {
	self->insertColumns(column, count);
}

void QStandardItem_RemoveRow(QStandardItem* self, int row) {
	self->removeRow(row);
}

void QStandardItem_RemoveColumn(QStandardItem* self, int column) {
	self->removeColumn(column);
}

void QStandardItem_RemoveRows(QStandardItem* self, int row, int count) {
	self->removeRows(row, count);
}

void QStandardItem_RemoveColumns(QStandardItem* self, int column, int count) {
	self->removeColumns(column, count);
}

void QStandardItem_AppendRow(QStandardItem* self, const libqt_list items) {
	self->appendRow(QList<QStandardItem *>());
}

void QStandardItem_AppendRows(QStandardItem* self, const libqt_list items) {
	self->appendRows(QList<QStandardItem *>());
}

void QStandardItem_AppendColumn(QStandardItem* self, const libqt_list items) {
	self->appendColumn(QList<QStandardItem *>());
}

void QStandardItem_InsertRow2(QStandardItem* self, int row, QStandardItem* item) {
	self->insertRow(row, item);
}

void QStandardItem_AppendRow2(QStandardItem* self, QStandardItem* item) {
	self->appendRow(item);
}

QStandardItem* QStandardItem_TakeChild(QStandardItem* self, int row) {
	return self->takeChild(row);
}

libqt_list QStandardItem_TakeRow(QStandardItem* self, int row) {
	auto _ret = self->takeRow(row);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QStandardItem_TakeColumn(QStandardItem* self, int column) {
	auto _ret = self->takeColumn(column);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

void QStandardItem_SortChildren(QStandardItem* self, int column) {
	self->sortChildren(column);
}

int QStandardItem_Type(const QStandardItem* self) {
	return self->type();
}

void QStandardItem_Read(QStandardItem* self, QDataStream* in) {
	self->read(*in);
}

void QStandardItem_Write(const QStandardItem* self, QDataStream* out) {
	self->write(*out);
}

bool QStandardItem_OperatorLesser(const QStandardItem* self, const QStandardItem* other) {
	return self->operator<(*other);
}

QStandardItem* QStandardItem_Child2(const QStandardItem* self, int row, int column) {
	return self->child(row, column);
}

QStandardItem* QStandardItem_TakeChild2(QStandardItem* self, int row, int column) {
	return self->takeChild(row, column);
}

void QStandardItem_SortChildren2(QStandardItem* self, int column, int order) {
	self->sortChildren(column, static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
QVariant* QStandardItem_QBaseData(const QStandardItem* self, int role) {
	auto* vqstandarditem = dynamic_cast<const VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_Data_IsBase(true);
	return new QVariant(vqstandarditem->data(role));
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnData(const QStandardItem* self, intptr_t slot) {
	auto* vqstandarditem = dynamic_cast<const VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_Data_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_Data_Callback>(slot));
}
}

// Base class handler implementation
void QStandardItem_QBaseMultiData(const QStandardItem* self, QModelRoleDataSpan* roleDataSpan) {
	auto* vqstandarditem = dynamic_cast<const VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_MultiData_IsBase(true);
	vqstandarditem->multiData(*roleDataSpan);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnMultiData(const QStandardItem* self, intptr_t slot) {
	auto* vqstandarditem = dynamic_cast<const VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_MultiData_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_MultiData_Callback>(slot));
}
}

// Base class handler implementation
void QStandardItem_QBaseSetData(QStandardItem* self, const QVariant* value, int role) {
	auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_SetData_IsBase(true);
	vqstandarditem->setData(*value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnSetData(QStandardItem* self, intptr_t slot) {
	auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_SetData_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_SetData_Callback>(slot));
}
}

// Base class handler implementation
int QStandardItem_QBaseType(const QStandardItem* self) {
	auto* vqstandarditem = dynamic_cast<const VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_Type_IsBase(true);
	return vqstandarditem->type();
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnType(const QStandardItem* self, intptr_t slot) {
	auto* vqstandarditem = dynamic_cast<const VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_Type_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_Type_Callback>(slot));
}
}

// Base class handler implementation
void QStandardItem_QBaseRead(QStandardItem* self, QDataStream* in) {
	auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_Read_IsBase(true);
	vqstandarditem->read(*in);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnRead(QStandardItem* self, intptr_t slot) {
	auto* vqstandarditem = dynamic_cast<VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_Read_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_Read_Callback>(slot));
}
}

// Base class handler implementation
void QStandardItem_QBaseWrite(const QStandardItem* self, QDataStream* out) {
	auto* vqstandarditem = dynamic_cast<const VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_Write_IsBase(true);
	vqstandarditem->write(*out);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnWrite(const QStandardItem* self, intptr_t slot) {
	auto* vqstandarditem = dynamic_cast<const VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_Write_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_Write_Callback>(slot));
}
}

// Base class handler implementation
bool QStandardItem_QBaseOperatorLesser(const QStandardItem* self, const QStandardItem* other) {
	auto* vqstandarditem = dynamic_cast<const VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_OperatorLesser_IsBase(true);
	return vqstandarditem->operator<(*other);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItem_OnOperatorLesser(const QStandardItem* self, intptr_t slot) {
	auto* vqstandarditem = dynamic_cast<const VirtualQStandardItem*>(self);
	if (vqstandarditem && vqstandarditem->isVirtualQStandardItem) {
vqstandarditem->setQStandardItem_OperatorLesser_Callback(reinterpret_cast<VirtualQStandardItem::QStandardItem_OperatorLesser_Callback>(slot));
}
}

void QStandardItem_Delete(QStandardItem* self) {
    delete self;
}

QStandardItemModel* QStandardItemModel_new() {
	 return new VirtualQStandardItemModel();
}

QStandardItemModel* QStandardItemModel_new2(int rows, int columns) {
	 return new VirtualQStandardItemModel(rows, columns);
}

QStandardItemModel* QStandardItemModel_new3(QObject* parent) {
	 return new VirtualQStandardItemModel(parent);
}

QStandardItemModel* QStandardItemModel_new4(int rows, int columns, QObject* parent) {
	 return new VirtualQStandardItemModel(rows, columns, parent);
}

libqt_string QStandardItemModel_Tr(const char* s) {
	QString _ret = QStandardItemModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStandardItemModel_SetItemRoleNames(QStandardItemModel* self, const libqt_map roleNames) {
	self->setItemRoleNames(QHash<int, QByteArray>());
}

libqt_map QStandardItemModel_RoleNames(const QStandardItemModel* self) {
	auto _ret = self->roleNames();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

QModelIndex* QStandardItemModel_Index(const QStandardItemModel* self, int row, int column, const QModelIndex* parent) {
	return new QModelIndex(self->index(row, column, *parent));
}

QModelIndex* QStandardItemModel_Parent(const QStandardItemModel* self, const QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

int QStandardItemModel_RowCount(const QStandardItemModel* self, const QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QStandardItemModel_ColumnCount(const QStandardItemModel* self, const QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QStandardItemModel_HasChildren(const QStandardItemModel* self, const QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QStandardItemModel_Data(const QStandardItemModel* self, const QModelIndex* index, int role) {
	return new QVariant(self->data(*index, role));
}

void QStandardItemModel_MultiData(const QStandardItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*index, *roleDataSpan);
}

bool QStandardItemModel_SetData(QStandardItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
	return self->setData(*index, *value, role);
}

bool QStandardItemModel_ClearItemData(QStandardItemModel* self, const QModelIndex* index) {
	return self->clearItemData(*index);
}

QVariant* QStandardItemModel_HeaderData(const QStandardItemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

bool QStandardItemModel_SetHeaderData(QStandardItemModel* self, int section, int orientation, const QVariant* value, int role) {
	return self->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}

bool QStandardItemModel_InsertRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
	return self->insertRows(row, count, *parent);
}

bool QStandardItemModel_InsertColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
	return self->insertColumns(column, count, *parent);
}

bool QStandardItemModel_RemoveRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
	return self->removeRows(row, count, *parent);
}

bool QStandardItemModel_RemoveColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
	return self->removeColumns(column, count, *parent);
}

int QStandardItemModel_Flags(const QStandardItemModel* self, const QModelIndex* index) {
	return self->flags(*index);
}

int QStandardItemModel_SupportedDropActions(const QStandardItemModel* self) {
	return self->supportedDropActions();
}

libqt_map QStandardItemModel_ItemData(const QStandardItemModel* self, const QModelIndex* index) {
	auto _ret = self->itemData(*index);
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

bool QStandardItemModel_SetItemData(QStandardItemModel* self, const QModelIndex* index, const libqt_map roles) {
	return self->setItemData(*index, QMap<int, QVariant>());
}

void QStandardItemModel_Clear(QStandardItemModel* self) {
	self->clear();
}

void QStandardItemModel_Sort(QStandardItemModel* self, int column, int order) {
	self->sort(column, static_cast<Qt::SortOrder>(order));
}

QStandardItem* QStandardItemModel_ItemFromIndex(const QStandardItemModel* self, const QModelIndex* index) {
	return self->itemFromIndex(*index);
}

QModelIndex* QStandardItemModel_IndexFromItem(const QStandardItemModel* self, const QStandardItem* item) {
	return new QModelIndex(self->indexFromItem(item));
}

QStandardItem* QStandardItemModel_Item(const QStandardItemModel* self, int row) {
	return self->item(row);
}

void QStandardItemModel_SetItem(QStandardItemModel* self, int row, int column, QStandardItem* item) {
	self->setItem(row, column, item);
}

void QStandardItemModel_SetItem2(QStandardItemModel* self, int row, QStandardItem* item) {
	self->setItem(row, item);
}

QStandardItem* QStandardItemModel_InvisibleRootItem(const QStandardItemModel* self) {
	return self->invisibleRootItem();
}

QStandardItem* QStandardItemModel_HorizontalHeaderItem(const QStandardItemModel* self, int column) {
	return self->horizontalHeaderItem(column);
}

void QStandardItemModel_SetHorizontalHeaderItem(QStandardItemModel* self, int column, QStandardItem* item) {
	self->setHorizontalHeaderItem(column, item);
}

QStandardItem* QStandardItemModel_VerticalHeaderItem(const QStandardItemModel* self, int row) {
	return self->verticalHeaderItem(row);
}

void QStandardItemModel_SetVerticalHeaderItem(QStandardItemModel* self, int row, QStandardItem* item) {
	self->setVerticalHeaderItem(row, item);
}

void QStandardItemModel_SetHorizontalHeaderLabels(QStandardItemModel* self, const libqt_list labels) {
	self->setHorizontalHeaderLabels(QList<QString>());
}

void QStandardItemModel_SetVerticalHeaderLabels(QStandardItemModel* self, const libqt_list labels) {
	self->setVerticalHeaderLabels(QList<QString>());
}

void QStandardItemModel_SetRowCount(QStandardItemModel* self, int rows) {
	self->setRowCount(rows);
}

void QStandardItemModel_SetColumnCount(QStandardItemModel* self, int columns) {
	self->setColumnCount(columns);
}

void QStandardItemModel_AppendRow(QStandardItemModel* self, const libqt_list items) {
	self->appendRow(QList<QStandardItem *>());
}

void QStandardItemModel_AppendColumn(QStandardItemModel* self, const libqt_list items) {
	self->appendColumn(QList<QStandardItem *>());
}

void QStandardItemModel_AppendRow2(QStandardItemModel* self, QStandardItem* item) {
	self->appendRow(item);
}

void QStandardItemModel_InsertRow(QStandardItemModel* self, int row, const libqt_list items) {
	self->insertRow(row, QList<QStandardItem *>());
}

void QStandardItemModel_InsertColumn(QStandardItemModel* self, int column, const libqt_list items) {
	self->insertColumn(column, QList<QStandardItem *>());
}

void QStandardItemModel_InsertRow2(QStandardItemModel* self, int row, QStandardItem* item) {
	self->insertRow(row, item);
}

bool QStandardItemModel_InsertRow3(QStandardItemModel* self, int row) {
	return self->insertRow(row);
}

bool QStandardItemModel_InsertColumn2(QStandardItemModel* self, int column) {
	return self->insertColumn(column);
}

QStandardItem* QStandardItemModel_TakeItem(QStandardItemModel* self, int row) {
	return self->takeItem(row);
}

libqt_list QStandardItemModel_TakeRow(QStandardItemModel* self, int row) {
	auto _ret = self->takeRow(row);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QStandardItemModel_TakeColumn(QStandardItemModel* self, int column) {
	auto _ret = self->takeColumn(column);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QStandardItem* QStandardItemModel_TakeHorizontalHeaderItem(QStandardItemModel* self, int column) {
	return self->takeHorizontalHeaderItem(column);
}

QStandardItem* QStandardItemModel_TakeVerticalHeaderItem(QStandardItemModel* self, int row) {
	return self->takeVerticalHeaderItem(row);
}

const QStandardItem* QStandardItemModel_ItemPrototype(const QStandardItemModel* self) {
	return self->itemPrototype();
}

void QStandardItemModel_SetItemPrototype(QStandardItemModel* self, const QStandardItem* item) {
	self->setItemPrototype(item);
}

libqt_list QStandardItemModel_FindItems(const QStandardItemModel* self, const libqt_string text) {
	auto _ret = self->findItems(QString::fromUtf8(text.data, text.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

int QStandardItemModel_SortRole(const QStandardItemModel* self) {
	return self->sortRole();
}

void QStandardItemModel_SetSortRole(QStandardItemModel* self, int role) {
	self->setSortRole(role);
}

libqt_list QStandardItemModel_MimeTypes(const QStandardItemModel* self) {
	auto _ret = self->mimeTypes();
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

QMimeData* QStandardItemModel_MimeData(const QStandardItemModel* self, const libqt_list indexes) {
	return self->mimeData(QList<QModelIndex>());
}

bool QStandardItemModel_DropMimeData(QStandardItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

void QStandardItemModel_ItemChanged(QStandardItemModel* self, QStandardItem* item) {
	self->itemChanged(item);
}

void QStandardItemModel_Connect_ItemChanged(QStandardItemModel* self, intptr_t slot) {
    void (*slotFunc)(QStandardItemModel*, QStandardItem*) = reinterpret_cast<void (*)(QStandardItemModel*, QStandardItem*)>(slot);
    QStandardItemModel::connect(self, &QStandardItemModel::itemChanged, [self, slotFunc](QStandardItem* item) {
	slotFunc(self, item);
    });
}

libqt_string QStandardItemModel_Tr2(const char* s, const char* c) {
	QString _ret = QStandardItemModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStandardItemModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStandardItemModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QStandardItem* QStandardItemModel_Item2(const QStandardItemModel* self, int row, int column) {
	return self->item(row, column);
}

bool QStandardItemModel_InsertRow22(QStandardItemModel* self, int row, const QModelIndex* parent) {
	return self->insertRow(row, *parent);
}

bool QStandardItemModel_InsertColumn22(QStandardItemModel* self, int column, const QModelIndex* parent) {
	return self->insertColumn(column, *parent);
}

QStandardItem* QStandardItemModel_TakeItem2(QStandardItemModel* self, int row, int column) {
	return self->takeItem(row, column);
}

libqt_list QStandardItemModel_FindItems2(const QStandardItemModel* self, const libqt_string text, int flags) {
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

libqt_list QStandardItemModel_FindItems3(const QStandardItemModel* self, const libqt_string text, int flags, int column) {
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

// Base class handler implementation
libqt_map QStandardItemModel_QBaseRoleNames(const QStandardItemModel* self) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_RoleNames_IsBase(true);
	auto _ret = vqstandarditemmodel->roleNames();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRoleNames(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_RoleNames_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RoleNames_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QStandardItemModel_QBaseIndex(const QStandardItemModel* self, int row, int column, const QModelIndex* parent) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_Index_IsBase(true);
	return new QModelIndex(vqstandarditemmodel->index(row, column, *parent));
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnIndex(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_Index_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Index_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QStandardItemModel_QBaseParent(const QStandardItemModel* self, const QModelIndex* child) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_Parent_IsBase(true);
	return new QModelIndex(vqstandarditemmodel->parent(*child));
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnParent(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_Parent_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Parent_Callback>(slot));
}
}

// Base class handler implementation
int QStandardItemModel_QBaseRowCount(const QStandardItemModel* self, const QModelIndex* parent) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_RowCount_IsBase(true);
	return vqstandarditemmodel->rowCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRowCount(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_RowCount_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RowCount_Callback>(slot));
}
}

// Base class handler implementation
int QStandardItemModel_QBaseColumnCount(const QStandardItemModel* self, const QModelIndex* parent) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_ColumnCount_IsBase(true);
	return vqstandarditemmodel->columnCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnColumnCount(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_ColumnCount_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ColumnCount_Callback>(slot));
}
}

// Base class handler implementation
bool QStandardItemModel_QBaseHasChildren(const QStandardItemModel* self, const QModelIndex* parent) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_HasChildren_IsBase(true);
	return vqstandarditemmodel->hasChildren(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnHasChildren(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_HasChildren_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_HasChildren_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QStandardItemModel_QBaseData(const QStandardItemModel* self, const QModelIndex* index, int role) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_Data_IsBase(true);
	return new QVariant(vqstandarditemmodel->data(*index, role));
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnData(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_Data_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Data_Callback>(slot));
}
}

// Base class handler implementation
void QStandardItemModel_QBaseMultiData(const QStandardItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_MultiData_IsBase(true);
	vqstandarditemmodel->multiData(*index, *roleDataSpan);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMultiData(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_MultiData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MultiData_Callback>(slot));
}
}

// Base class handler implementation
bool QStandardItemModel_QBaseSetData(QStandardItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_SetData_IsBase(true);
	return vqstandarditemmodel->setData(*index, *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSetData(QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_SetData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SetData_Callback>(slot));
}
}

// Base class handler implementation
bool QStandardItemModel_QBaseClearItemData(QStandardItemModel* self, const QModelIndex* index) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_ClearItemData_IsBase(true);
	return vqstandarditemmodel->clearItemData(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnClearItemData(QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_ClearItemData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ClearItemData_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QStandardItemModel_QBaseHeaderData(const QStandardItemModel* self, int section, int orientation, int role) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_HeaderData_IsBase(true);
	return new QVariant(vqstandarditemmodel->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnHeaderData(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_HeaderData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_HeaderData_Callback>(slot));
}
}

// Base class handler implementation
bool QStandardItemModel_QBaseSetHeaderData(QStandardItemModel* self, int section, int orientation, const QVariant* value, int role) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_SetHeaderData_IsBase(true);
	return vqstandarditemmodel->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSetHeaderData(QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_SetHeaderData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SetHeaderData_Callback>(slot));
}
}

// Base class handler implementation
bool QStandardItemModel_QBaseInsertRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_InsertRows_IsBase(true);
	return vqstandarditemmodel->insertRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnInsertRows(QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_InsertRows_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_InsertRows_Callback>(slot));
}
}

// Base class handler implementation
bool QStandardItemModel_QBaseInsertColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_InsertColumns_IsBase(true);
	return vqstandarditemmodel->insertColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnInsertColumns(QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_InsertColumns_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_InsertColumns_Callback>(slot));
}
}

// Base class handler implementation
bool QStandardItemModel_QBaseRemoveRows(QStandardItemModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_RemoveRows_IsBase(true);
	return vqstandarditemmodel->removeRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRemoveRows(QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_RemoveRows_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RemoveRows_Callback>(slot));
}
}

// Base class handler implementation
bool QStandardItemModel_QBaseRemoveColumns(QStandardItemModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_RemoveColumns_IsBase(true);
	return vqstandarditemmodel->removeColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnRemoveColumns(QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_RemoveColumns_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_RemoveColumns_Callback>(slot));
}
}

// Base class handler implementation
int QStandardItemModel_QBaseFlags(const QStandardItemModel* self, const QModelIndex* index) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_Flags_IsBase(true);
	return vqstandarditemmodel->flags(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnFlags(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_Flags_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Flags_Callback>(slot));
}
}

// Base class handler implementation
int QStandardItemModel_QBaseSupportedDropActions(const QStandardItemModel* self) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_SupportedDropActions_IsBase(true);
	return vqstandarditemmodel->supportedDropActions();
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSupportedDropActions(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SupportedDropActions_Callback>(slot));
}
}

// Base class handler implementation
libqt_map QStandardItemModel_QBaseItemData(const QStandardItemModel* self, const QModelIndex* index) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_ItemData_IsBase(true);
	auto _ret = vqstandarditemmodel->itemData(*index);
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnItemData(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_ItemData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_ItemData_Callback>(slot));
}
}

// Base class handler implementation
bool QStandardItemModel_QBaseSetItemData(QStandardItemModel* self, const QModelIndex* index, const libqt_map roles) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_SetItemData_IsBase(true);
	return vqstandarditemmodel->setItemData(*index, QMap<int, QVariant>());
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSetItemData(QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_SetItemData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_SetItemData_Callback>(slot));
}
}

// Base class handler implementation
void QStandardItemModel_QBaseSort(QStandardItemModel* self, int column, int order) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_Sort_IsBase(true);
	vqstandarditemmodel->sort(column, static_cast<Qt::SortOrder>(order));
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnSort(QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_Sort_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_Sort_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QStandardItemModel_QBaseMimeTypes(const QStandardItemModel* self) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_MimeTypes_IsBase(true);
	auto _ret = vqstandarditemmodel->mimeTypes();
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
void QStandardItemModel_OnMimeTypes(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_MimeTypes_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MimeTypes_Callback>(slot));
}
}

// Base class handler implementation
QMimeData* QStandardItemModel_QBaseMimeData(const QStandardItemModel* self, const libqt_list indexes) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_MimeData_IsBase(true);
	return vqstandarditemmodel->mimeData(QList<QModelIndex>());
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnMimeData(const QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<const VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_MimeData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_MimeData_Callback>(slot));
}
}

// Base class handler implementation
bool QStandardItemModel_QBaseDropMimeData(QStandardItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_DropMimeData_IsBase(true);
	return vqstandarditemmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QStandardItemModel_OnDropMimeData(QStandardItemModel* self, intptr_t slot) {
	auto* vqstandarditemmodel = dynamic_cast<VirtualQStandardItemModel*>(self);
	if (vqstandarditemmodel && vqstandarditemmodel->isVirtualQStandardItemModel) {
vqstandarditemmodel->setQStandardItemModel_DropMimeData_Callback(reinterpret_cast<VirtualQStandardItemModel::QStandardItemModel_DropMimeData_Callback>(slot));
}
}

void QStandardItemModel_Delete(QStandardItemModel* self) {
    delete self;
}

