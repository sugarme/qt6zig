#include <QBrush>
#include <QDataStream>
#include <QDropEvent>
#include <QEvent>
#include <QFont>
#include <QIcon>
#include <QMimeData>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTableView>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTableWidgetSelectionRange>
#include <QVariant>
#include <QWidget>
#include <qtablewidget.h>
#include "libqtablewidget.h"
#include "libqtablewidget.hxx"

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new(const QTableWidgetSelectionRange* other) {
	 return new QTableWidgetSelectionRange(*other);
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new2(QTableWidgetSelectionRange* other) {
	 return new QTableWidgetSelectionRange(*other);
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new3() {
	 return new QTableWidgetSelectionRange();
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new4(int top, int left, int bottom, int right) {
	 return new QTableWidgetSelectionRange(top, left, bottom, right);
}

void QTableWidgetSelectionRange_CopyAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other) {
    *self = *other;
}

void QTableWidgetSelectionRange_MoveAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other) {
    *self = std::move(*other);
}

int QTableWidgetSelectionRange_TopRow(const QTableWidgetSelectionRange* self) {
	return self->topRow();
}

int QTableWidgetSelectionRange_BottomRow(const QTableWidgetSelectionRange* self) {
	return self->bottomRow();
}

int QTableWidgetSelectionRange_LeftColumn(const QTableWidgetSelectionRange* self) {
	return self->leftColumn();
}

int QTableWidgetSelectionRange_RightColumn(const QTableWidgetSelectionRange* self) {
	return self->rightColumn();
}

int QTableWidgetSelectionRange_RowCount(const QTableWidgetSelectionRange* self) {
	return self->rowCount();
}

int QTableWidgetSelectionRange_ColumnCount(const QTableWidgetSelectionRange* self) {
	return self->columnCount();
}

void QTableWidgetSelectionRange_Delete(QTableWidgetSelectionRange* self) {
    delete self;
}

QTableWidgetItem* QTableWidgetItem_new() {
	 return new VirtualQTableWidgetItem();
}

QTableWidgetItem* QTableWidgetItem_new2(const libqt_string text) {
	 return new VirtualQTableWidgetItem(QString::fromUtf8(text.data, text.len));
}

QTableWidgetItem* QTableWidgetItem_new3(const QIcon* icon, const libqt_string text) {
	 return new VirtualQTableWidgetItem(*icon, QString::fromUtf8(text.data, text.len));
}

QTableWidgetItem* QTableWidgetItem_new4(const QTableWidgetItem* other) {
	 return new VirtualQTableWidgetItem(*other);
}

QTableWidgetItem* QTableWidgetItem_new5(int typeVal) {
	 return new VirtualQTableWidgetItem(typeVal);
}

QTableWidgetItem* QTableWidgetItem_new6(const libqt_string text, int typeVal) {
	 return new VirtualQTableWidgetItem(QString::fromUtf8(text.data, text.len), typeVal);
}

QTableWidgetItem* QTableWidgetItem_new7(const QIcon* icon, const libqt_string text, int typeVal) {
	 return new VirtualQTableWidgetItem(*icon, QString::fromUtf8(text.data, text.len), typeVal);
}

QTableWidget* QTableWidgetItem_TableWidget(const QTableWidgetItem* self) {
	return self->tableWidget();
}

int QTableWidgetItem_Row(const QTableWidgetItem* self) {
	return self->row();
}

int QTableWidgetItem_Column(const QTableWidgetItem* self) {
	return self->column();
}

void QTableWidgetItem_SetSelected(QTableWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QTableWidgetItem_IsSelected(const QTableWidgetItem* self) {
	return self->isSelected();
}

int QTableWidgetItem_Flags(const QTableWidgetItem* self) {
	return self->flags();
}

void QTableWidgetItem_SetFlags(QTableWidgetItem* self, int flags) {
	self->setFlags(static_cast<QFlags<Qt::ItemFlag>>(flags));
}

libqt_string QTableWidgetItem_Text(const QTableWidgetItem* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTableWidgetItem_SetText(QTableWidgetItem* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

QIcon* QTableWidgetItem_Icon(const QTableWidgetItem* self) {
	return new QIcon(self->icon());
}

void QTableWidgetItem_SetIcon(QTableWidgetItem* self, const QIcon* icon) {
	self->setIcon(*icon);
}

libqt_string QTableWidgetItem_StatusTip(const QTableWidgetItem* self) {
	QString _ret = self->statusTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTableWidgetItem_SetStatusTip(QTableWidgetItem* self, const libqt_string statusTip) {
	self->setStatusTip(QString::fromUtf8(statusTip.data, statusTip.len));
}

libqt_string QTableWidgetItem_ToolTip(const QTableWidgetItem* self) {
	QString _ret = self->toolTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTableWidgetItem_SetToolTip(QTableWidgetItem* self, const libqt_string toolTip) {
	self->setToolTip(QString::fromUtf8(toolTip.data, toolTip.len));
}

libqt_string QTableWidgetItem_WhatsThis(const QTableWidgetItem* self) {
	QString _ret = self->whatsThis();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTableWidgetItem_SetWhatsThis(QTableWidgetItem* self, const libqt_string whatsThis) {
	self->setWhatsThis(QString::fromUtf8(whatsThis.data, whatsThis.len));
}

QFont* QTableWidgetItem_Font(const QTableWidgetItem* self) {
	return new QFont(self->font());
}

void QTableWidgetItem_SetFont(QTableWidgetItem* self, const QFont* font) {
	self->setFont(*font);
}

int QTableWidgetItem_TextAlignment(const QTableWidgetItem* self) {
	return self->textAlignment();
}

void QTableWidgetItem_SetTextAlignment(QTableWidgetItem* self, int alignment) {
	self->setTextAlignment(alignment);
}

void QTableWidgetItem_SetTextAlignment2(QTableWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QTableWidgetItem_SetTextAlignment3(QTableWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

QBrush* QTableWidgetItem_Background(const QTableWidgetItem* self) {
	return new QBrush(self->background());
}

void QTableWidgetItem_SetBackground(QTableWidgetItem* self, const QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QTableWidgetItem_Foreground(const QTableWidgetItem* self) {
	return new QBrush(self->foreground());
}

void QTableWidgetItem_SetForeground(QTableWidgetItem* self, const QBrush* brush) {
	self->setForeground(*brush);
}

int QTableWidgetItem_CheckState(const QTableWidgetItem* self) {
	return self->checkState();
}

void QTableWidgetItem_SetCheckState(QTableWidgetItem* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QTableWidgetItem_SizeHint(const QTableWidgetItem* self) {
	return new QSize(self->sizeHint());
}

void QTableWidgetItem_SetSizeHint(QTableWidgetItem* self, const QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QTableWidgetItem_Data(const QTableWidgetItem* self, int role) {
	return new QVariant(self->data(role));
}

void QTableWidgetItem_SetData(QTableWidgetItem* self, int role, const QVariant* value) {
	self->setData(role, *value);
}

bool QTableWidgetItem_OperatorLesser(const QTableWidgetItem* self, const QTableWidgetItem* other) {
	return self->operator<(*other);
}

void QTableWidgetItem_Read(QTableWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QTableWidgetItem_Write(const QTableWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QTableWidgetItem_OperatorAssign(QTableWidgetItem* self, const QTableWidgetItem* other) {
	self->operator=(*other);
}

int QTableWidgetItem_Type(const QTableWidgetItem* self) {
	return self->type();
}

// Base class handler implementation
QVariant* QTableWidgetItem_QBaseData(const QTableWidgetItem* self, int role) {
	auto* vqtablewidgetitem = dynamic_cast<const VirtualQTableWidgetItem*>(self);
	if (vqtablewidgetitem && vqtablewidgetitem->isVirtualQTableWidgetItem) {
vqtablewidgetitem->setQTableWidgetItem_Data_IsBase(true);
	return new QVariant(vqtablewidgetitem->data(role));
}
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnData(const QTableWidgetItem* self, intptr_t slot) {
	auto* vqtablewidgetitem = dynamic_cast<const VirtualQTableWidgetItem*>(self);
	if (vqtablewidgetitem && vqtablewidgetitem->isVirtualQTableWidgetItem) {
vqtablewidgetitem->setQTableWidgetItem_Data_Callback(reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_Data_Callback>(slot));
}
}

// Base class handler implementation
void QTableWidgetItem_QBaseSetData(QTableWidgetItem* self, int role, const QVariant* value) {
	auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self);
	if (vqtablewidgetitem && vqtablewidgetitem->isVirtualQTableWidgetItem) {
vqtablewidgetitem->setQTableWidgetItem_SetData_IsBase(true);
	vqtablewidgetitem->setData(role, *value);
}
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnSetData(QTableWidgetItem* self, intptr_t slot) {
	auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self);
	if (vqtablewidgetitem && vqtablewidgetitem->isVirtualQTableWidgetItem) {
vqtablewidgetitem->setQTableWidgetItem_SetData_Callback(reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_SetData_Callback>(slot));
}
}

// Base class handler implementation
bool QTableWidgetItem_QBaseOperatorLesser(const QTableWidgetItem* self, const QTableWidgetItem* other) {
	auto* vqtablewidgetitem = dynamic_cast<const VirtualQTableWidgetItem*>(self);
	if (vqtablewidgetitem && vqtablewidgetitem->isVirtualQTableWidgetItem) {
vqtablewidgetitem->setQTableWidgetItem_OperatorLesser_IsBase(true);
	return vqtablewidgetitem->operator<(*other);
}
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnOperatorLesser(const QTableWidgetItem* self, intptr_t slot) {
	auto* vqtablewidgetitem = dynamic_cast<const VirtualQTableWidgetItem*>(self);
	if (vqtablewidgetitem && vqtablewidgetitem->isVirtualQTableWidgetItem) {
vqtablewidgetitem->setQTableWidgetItem_OperatorLesser_Callback(reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_OperatorLesser_Callback>(slot));
}
}

// Base class handler implementation
void QTableWidgetItem_QBaseRead(QTableWidgetItem* self, QDataStream* in) {
	auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self);
	if (vqtablewidgetitem && vqtablewidgetitem->isVirtualQTableWidgetItem) {
vqtablewidgetitem->setQTableWidgetItem_Read_IsBase(true);
	vqtablewidgetitem->read(*in);
}
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnRead(QTableWidgetItem* self, intptr_t slot) {
	auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self);
	if (vqtablewidgetitem && vqtablewidgetitem->isVirtualQTableWidgetItem) {
vqtablewidgetitem->setQTableWidgetItem_Read_Callback(reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_Read_Callback>(slot));
}
}

// Base class handler implementation
void QTableWidgetItem_QBaseWrite(const QTableWidgetItem* self, QDataStream* out) {
	auto* vqtablewidgetitem = dynamic_cast<const VirtualQTableWidgetItem*>(self);
	if (vqtablewidgetitem && vqtablewidgetitem->isVirtualQTableWidgetItem) {
vqtablewidgetitem->setQTableWidgetItem_Write_IsBase(true);
	vqtablewidgetitem->write(*out);
}
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnWrite(const QTableWidgetItem* self, intptr_t slot) {
	auto* vqtablewidgetitem = dynamic_cast<const VirtualQTableWidgetItem*>(self);
	if (vqtablewidgetitem && vqtablewidgetitem->isVirtualQTableWidgetItem) {
vqtablewidgetitem->setQTableWidgetItem_Write_Callback(reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_Write_Callback>(slot));
}
}

void QTableWidgetItem_Delete(QTableWidgetItem* self) {
    delete self;
}

QTableWidget* QTableWidget_new(QWidget* parent) {
	 return new VirtualQTableWidget(parent);
}

QTableWidget* QTableWidget_new2() {
	 return new VirtualQTableWidget();
}

QTableWidget* QTableWidget_new3(int rows, int columns) {
	 return new VirtualQTableWidget(rows, columns);
}

QTableWidget* QTableWidget_new4(int rows, int columns, QWidget* parent) {
	 return new VirtualQTableWidget(rows, columns, parent);
}

libqt_string QTableWidget_Tr(const char* s) {
	QString _ret = QTableWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTableWidget_SetRowCount(QTableWidget* self, int rows) {
	self->setRowCount(rows);
}

int QTableWidget_RowCount(const QTableWidget* self) {
	return self->rowCount();
}

void QTableWidget_SetColumnCount(QTableWidget* self, int columns) {
	self->setColumnCount(columns);
}

int QTableWidget_ColumnCount(const QTableWidget* self) {
	return self->columnCount();
}

int QTableWidget_Row(const QTableWidget* self, const QTableWidgetItem* item) {
	return self->row(item);
}

int QTableWidget_Column(const QTableWidget* self, const QTableWidgetItem* item) {
	return self->column(item);
}

QTableWidgetItem* QTableWidget_Item(const QTableWidget* self, int row, int column) {
	return self->item(row, column);
}

void QTableWidget_SetItem(QTableWidget* self, int row, int column, QTableWidgetItem* item) {
	self->setItem(row, column, item);
}

QTableWidgetItem* QTableWidget_TakeItem(QTableWidget* self, int row, int column) {
	return self->takeItem(row, column);
}

libqt_list QTableWidget_Items(const QTableWidget* self, const QMimeData* data) {
	auto _ret = self->items(data);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QModelIndex* QTableWidget_IndexFromItem(const QTableWidget* self, const QTableWidgetItem* item) {
	return new QModelIndex(self->indexFromItem(item));
}

QTableWidgetItem* QTableWidget_ItemFromIndex(const QTableWidget* self, const QModelIndex* index) {
	return self->itemFromIndex(*index);
}

QTableWidgetItem* QTableWidget_VerticalHeaderItem(const QTableWidget* self, int row) {
	return self->verticalHeaderItem(row);
}

void QTableWidget_SetVerticalHeaderItem(QTableWidget* self, int row, QTableWidgetItem* item) {
	self->setVerticalHeaderItem(row, item);
}

QTableWidgetItem* QTableWidget_TakeVerticalHeaderItem(QTableWidget* self, int row) {
	return self->takeVerticalHeaderItem(row);
}

QTableWidgetItem* QTableWidget_HorizontalHeaderItem(const QTableWidget* self, int column) {
	return self->horizontalHeaderItem(column);
}

void QTableWidget_SetHorizontalHeaderItem(QTableWidget* self, int column, QTableWidgetItem* item) {
	self->setHorizontalHeaderItem(column, item);
}

QTableWidgetItem* QTableWidget_TakeHorizontalHeaderItem(QTableWidget* self, int column) {
	return self->takeHorizontalHeaderItem(column);
}

void QTableWidget_SetVerticalHeaderLabels(QTableWidget* self, const libqt_list labels) {
	self->setVerticalHeaderLabels(QList<QString>());
}

void QTableWidget_SetHorizontalHeaderLabels(QTableWidget* self, const libqt_list labels) {
	self->setHorizontalHeaderLabels(QList<QString>());
}

int QTableWidget_CurrentRow(const QTableWidget* self) {
	return self->currentRow();
}

int QTableWidget_CurrentColumn(const QTableWidget* self) {
	return self->currentColumn();
}

QTableWidgetItem* QTableWidget_CurrentItem(const QTableWidget* self) {
	return self->currentItem();
}

void QTableWidget_SetCurrentItem(QTableWidget* self, QTableWidgetItem* item) {
	self->setCurrentItem(item);
}

void QTableWidget_SetCurrentItem2(QTableWidget* self, QTableWidgetItem* item, int command) {
	self->setCurrentItem(item, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

void QTableWidget_SetCurrentCell(QTableWidget* self, int row, int column) {
	self->setCurrentCell(row, column);
}

void QTableWidget_SetCurrentCell2(QTableWidget* self, int row, int column, int command) {
	self->setCurrentCell(row, column, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

void QTableWidget_SortItems(QTableWidget* self, int column) {
	self->sortItems(column);
}

void QTableWidget_SetSortingEnabled(QTableWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTableWidget_IsSortingEnabled(const QTableWidget* self) {
	return self->isSortingEnabled();
}

void QTableWidget_EditItem(QTableWidget* self, QTableWidgetItem* item) {
	self->editItem(item);
}

void QTableWidget_OpenPersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QTableWidget_ClosePersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QTableWidget_IsPersistentEditorOpen(const QTableWidget* self, QTableWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QTableWidget_CellWidget(const QTableWidget* self, int row, int column) {
	return self->cellWidget(row, column);
}

void QTableWidget_SetCellWidget(QTableWidget* self, int row, int column, QWidget* widget) {
	self->setCellWidget(row, column, widget);
}

void QTableWidget_RemoveCellWidget(QTableWidget* self, int row, int column) {
	self->removeCellWidget(row, column);
}

void QTableWidget_SetRangeSelected(QTableWidget* self, const QTableWidgetSelectionRange* range, bool selectVal) {
	self->setRangeSelected(*range, selectVal);
}

libqt_list QTableWidget_SelectedRanges(const QTableWidget* self) {
	auto _ret = self->selectedRanges();
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

libqt_list QTableWidget_SelectedItems(const QTableWidget* self) {
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

libqt_list QTableWidget_FindItems(const QTableWidget* self, const libqt_string text, int flags) {
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

int QTableWidget_VisualRow(const QTableWidget* self, int logicalRow) {
	return self->visualRow(logicalRow);
}

int QTableWidget_VisualColumn(const QTableWidget* self, int logicalColumn) {
	return self->visualColumn(logicalColumn);
}

QTableWidgetItem* QTableWidget_ItemAt(const QTableWidget* self, const QPoint* p) {
	return self->itemAt(*p);
}

QTableWidgetItem* QTableWidget_ItemAt2(const QTableWidget* self, int x, int y) {
	return self->itemAt(x, y);
}

QRect* QTableWidget_VisualItemRect(const QTableWidget* self, const QTableWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

const QTableWidgetItem* QTableWidget_ItemPrototype(const QTableWidget* self) {
	return self->itemPrototype();
}

void QTableWidget_SetItemPrototype(QTableWidget* self, const QTableWidgetItem* item) {
	self->setItemPrototype(item);
}

void QTableWidget_ScrollToItem(QTableWidget* self, const QTableWidgetItem* item) {
	self->scrollToItem(item);
}

void QTableWidget_InsertRow(QTableWidget* self, int row) {
	self->insertRow(row);
}

void QTableWidget_InsertColumn(QTableWidget* self, int column) {
	self->insertColumn(column);
}

void QTableWidget_RemoveRow(QTableWidget* self, int row) {
	self->removeRow(row);
}

void QTableWidget_RemoveColumn(QTableWidget* self, int column) {
	self->removeColumn(column);
}

void QTableWidget_Clear(QTableWidget* self) {
	self->clear();
}

void QTableWidget_ClearContents(QTableWidget* self) {
	self->clearContents();
}

void QTableWidget_ItemPressed(QTableWidget* self, QTableWidgetItem* item) {
	self->itemPressed(item);
}

void QTableWidget_Connect_ItemPressed(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemPressed, [self, slotFunc](QTableWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QTableWidget_ItemClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemClicked(item);
}

void QTableWidget_Connect_ItemClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemClicked, [self, slotFunc](QTableWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QTableWidget_ItemDoubleClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QTableWidget_Connect_ItemDoubleClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemDoubleClicked, [self, slotFunc](QTableWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QTableWidget_ItemActivated(QTableWidget* self, QTableWidgetItem* item) {
	self->itemActivated(item);
}

void QTableWidget_Connect_ItemActivated(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemActivated, [self, slotFunc](QTableWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QTableWidget_ItemEntered(QTableWidget* self, QTableWidgetItem* item) {
	self->itemEntered(item);
}

void QTableWidget_Connect_ItemEntered(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemEntered, [self, slotFunc](QTableWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QTableWidget_ItemChanged(QTableWidget* self, QTableWidgetItem* item) {
	self->itemChanged(item);
}

void QTableWidget_Connect_ItemChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemChanged, [self, slotFunc](QTableWidgetItem* item) {
	slotFunc(self, item);
    });
}

void QTableWidget_CurrentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QTableWidget_Connect_CurrentItemChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::currentItemChanged, [self, slotFunc](QTableWidgetItem* current, QTableWidgetItem* previous) {
	slotFunc(self, current, previous);
    });
}

void QTableWidget_ItemSelectionChanged(QTableWidget* self) {
	self->itemSelectionChanged();
}

void QTableWidget_Connect_ItemSelectionChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*) = reinterpret_cast<void (*)(QTableWidget*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemSelectionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QTableWidget_CellPressed(QTableWidget* self, int row, int column) {
	self->cellPressed(row, column);
}

void QTableWidget_Connect_CellPressed(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellPressed, [self, slotFunc](int row, int column) {
	slotFunc(self, row, column);
    });
}

void QTableWidget_CellClicked(QTableWidget* self, int row, int column) {
	self->cellClicked(row, column);
}

void QTableWidget_Connect_CellClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellClicked, [self, slotFunc](int row, int column) {
	slotFunc(self, row, column);
    });
}

void QTableWidget_CellDoubleClicked(QTableWidget* self, int row, int column) {
	self->cellDoubleClicked(row, column);
}

void QTableWidget_Connect_CellDoubleClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellDoubleClicked, [self, slotFunc](int row, int column) {
	slotFunc(self, row, column);
    });
}

void QTableWidget_CellActivated(QTableWidget* self, int row, int column) {
	self->cellActivated(row, column);
}

void QTableWidget_Connect_CellActivated(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellActivated, [self, slotFunc](int row, int column) {
	slotFunc(self, row, column);
    });
}

void QTableWidget_CellEntered(QTableWidget* self, int row, int column) {
	self->cellEntered(row, column);
}

void QTableWidget_Connect_CellEntered(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellEntered, [self, slotFunc](int row, int column) {
	slotFunc(self, row, column);
    });
}

void QTableWidget_CellChanged(QTableWidget* self, int row, int column) {
	self->cellChanged(row, column);
}

void QTableWidget_Connect_CellChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellChanged, [self, slotFunc](int row, int column) {
	slotFunc(self, row, column);
    });
}

void QTableWidget_CurrentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn) {
	self->currentCellChanged(currentRow, currentColumn, previousRow, previousColumn);
}

void QTableWidget_Connect_CurrentCellChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::currentCellChanged, [self, slotFunc](int currentRow, int currentColumn, int previousRow, int previousColumn) {
	slotFunc(self, currentRow, currentColumn, previousRow, previousColumn);
    });
}

libqt_string QTableWidget_Tr2(const char* s, const char* c) {
	QString _ret = QTableWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTableWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTableWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTableWidget_SortItems2(QTableWidget* self, int column, int order) {
	self->sortItems(column, static_cast<Qt::SortOrder>(order));
}

void QTableWidget_ScrollToItem2(QTableWidget* self, const QTableWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Derived class handler implementation
bool QTableWidget_Event(QTableWidget* self, QEvent* e) {
	auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
	return vqtablewidget->event(e);
	} else {
	return self->QTableWidget::event(e);
}
}

// Base class handler implementation
bool QTableWidget_QBaseEvent(QTableWidget* self, QEvent* e) {
	auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_Event_IsBase(true);
	return vqtablewidget->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnEvent(QTableWidget* self, intptr_t slot) {
	auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_Event_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_Event_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QTableWidget_MimeTypes(const QTableWidget* self) {
	auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
	auto _ret = vqtablewidget->mimeTypes();
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
	auto _ret = self->QTableWidget::mimeTypes();
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
libqt_list QTableWidget_QBaseMimeTypes(const QTableWidget* self) {
	auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_MimeTypes_IsBase(true);
	auto _ret = vqtablewidget->mimeTypes();
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
void QTableWidget_OnMimeTypes(const QTableWidget* self, intptr_t slot) {
	auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_MimeTypes_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_MimeTypes_Callback>(slot));
}
}

// Derived class handler implementation
QMimeData* QTableWidget_MimeData(const QTableWidget* self, const libqt_list items) {
	auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
	return vqtablewidget->mimeData(QList<QTableWidgetItem *>());
	} else {
	return self->QTableWidget::mimeData(QList<QTableWidgetItem *>());
}
}

// Base class handler implementation
QMimeData* QTableWidget_QBaseMimeData(const QTableWidget* self, const libqt_list items) {
	auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_MimeData_IsBase(true);
	return vqtablewidget->mimeData(QList<QTableWidgetItem *>());
}
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMimeData(const QTableWidget* self, intptr_t slot) {
	auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_MimeData_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_MimeData_Callback>(slot));
}
}

// Derived class handler implementation
bool QTableWidget_DropMimeData(QTableWidget* self, int row, int column, const QMimeData* data, int action) {
	auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
	return vqtablewidget->dropMimeData(row, column, data, static_cast<Qt::DropAction>(action));
	} else {
	return self->QTableWidget::dropMimeData(row, column, data, static_cast<Qt::DropAction>(action));
}
}

// Base class handler implementation
bool QTableWidget_QBaseDropMimeData(QTableWidget* self, int row, int column, const QMimeData* data, int action) {
	auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_DropMimeData_IsBase(true);
	return vqtablewidget->dropMimeData(row, column, data, static_cast<Qt::DropAction>(action));
}
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDropMimeData(QTableWidget* self, intptr_t slot) {
	auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_DropMimeData_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DropMimeData_Callback>(slot));
}
}

// Derived class handler implementation
int QTableWidget_SupportedDropActions(const QTableWidget* self) {
	auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
	return vqtablewidget->supportedDropActions();
	} else {
	return self->QTableWidget::supportedDropActions();
}
}

// Base class handler implementation
int QTableWidget_QBaseSupportedDropActions(const QTableWidget* self) {
	auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_SupportedDropActions_IsBase(true);
	return vqtablewidget->supportedDropActions();
}
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSupportedDropActions(const QTableWidget* self, intptr_t slot) {
	auto* vqtablewidget = dynamic_cast<const VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_SupportedDropActions_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SupportedDropActions_Callback>(slot));
}
}

// Derived class handler implementation
void QTableWidget_DropEvent(QTableWidget* self, QDropEvent* event) {
	auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
	vqtablewidget->dropEvent(event);
	} else {
	self->QTableWidget::dropEvent(event);
}
}

// Base class handler implementation
void QTableWidget_QBaseDropEvent(QTableWidget* self, QDropEvent* event) {
	auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_DropEvent_IsBase(true);
	vqtablewidget->dropEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDropEvent(QTableWidget* self, intptr_t slot) {
	auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self);
	if (vqtablewidget && vqtablewidget->isVirtualQTableWidget) {
vqtablewidget->setQTableWidget_DropEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DropEvent_Callback>(slot));
}
}

void QTableWidget_Delete(QTableWidget* self) {
    delete self;
}

