#include <QAbstractItemModel>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QItemSelectionRange>
#include <QModelIndex>
#include <QObject>
#include <QPersistentModelIndex>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qitemselectionmodel.h>
#include "libqitemselectionmodel.h"
#include "libqitemselectionmodel.hxx"

QItemSelectionRange* QItemSelectionRange_new() {
	 return new QItemSelectionRange();
}

QItemSelectionRange* QItemSelectionRange_new2(const QModelIndex* topL, const QModelIndex* bottomR) {
	 return new QItemSelectionRange(*topL, *bottomR);
}

QItemSelectionRange* QItemSelectionRange_new3(const QModelIndex* index) {
	 return new QItemSelectionRange(*index);
}

void QItemSelectionRange_Swap(QItemSelectionRange* self, QItemSelectionRange* other) {
	self->swap(*other);
}

int QItemSelectionRange_Top(const QItemSelectionRange* self) {
	return self->top();
}

int QItemSelectionRange_Left(const QItemSelectionRange* self) {
	return self->left();
}

int QItemSelectionRange_Bottom(const QItemSelectionRange* self) {
	return self->bottom();
}

int QItemSelectionRange_Right(const QItemSelectionRange* self) {
	return self->right();
}

int QItemSelectionRange_Width(const QItemSelectionRange* self) {
	return self->width();
}

int QItemSelectionRange_Height(const QItemSelectionRange* self) {
	return self->height();
}

const QPersistentModelIndex* QItemSelectionRange_TopLeft(const QItemSelectionRange* self) {
	const QPersistentModelIndex& _ret = self->topLeft();
	// Cast returned reference into pointer
	return const_cast<QPersistentModelIndex*>(&_ret);
}

const QPersistentModelIndex* QItemSelectionRange_BottomRight(const QItemSelectionRange* self) {
	const QPersistentModelIndex& _ret = self->bottomRight();
	// Cast returned reference into pointer
	return const_cast<QPersistentModelIndex*>(&_ret);
}

QModelIndex* QItemSelectionRange_Parent(const QItemSelectionRange* self) {
	return new QModelIndex(self->parent());
}

const QAbstractItemModel* QItemSelectionRange_Model(const QItemSelectionRange* self) {
	return self->model();
}

bool QItemSelectionRange_Contains(const QItemSelectionRange* self, const QModelIndex* index) {
	return self->contains(*index);
}

bool QItemSelectionRange_Contains2(const QItemSelectionRange* self, int row, int column, const QModelIndex* parentIndex) {
	return self->contains(row, column, *parentIndex);
}

bool QItemSelectionRange_Intersects(const QItemSelectionRange* self, const QItemSelectionRange* other) {
	return self->intersects(*other);
}

QItemSelectionRange* QItemSelectionRange_Intersected(const QItemSelectionRange* self, const QItemSelectionRange* other) {
	return new QItemSelectionRange(self->intersected(*other));
}

bool QItemSelectionRange_IsValid(const QItemSelectionRange* self) {
	return self->isValid();
}

bool QItemSelectionRange_IsEmpty(const QItemSelectionRange* self) {
	return self->isEmpty();
}

libqt_list QItemSelectionRange_Indexes(const QItemSelectionRange* self) {
	auto _ret = self->indexes();
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

void QItemSelectionRange_Delete(QItemSelectionRange* self) {
    delete self;
}

QItemSelectionModel* QItemSelectionModel_new() {
	 return new VirtualQItemSelectionModel();
}

QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent) {
	 return new VirtualQItemSelectionModel(model, parent);
}

QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model) {
	 return new VirtualQItemSelectionModel(model);
}

libqt_string QItemSelectionModel_Tr(const char* s) {
	QString _ret = QItemSelectionModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QModelIndex* QItemSelectionModel_CurrentIndex(const QItemSelectionModel* self) {
	return new QModelIndex(self->currentIndex());
}

bool QItemSelectionModel_IsSelected(const QItemSelectionModel* self, const QModelIndex* index) {
	return self->isSelected(*index);
}

bool QItemSelectionModel_IsRowSelected(const QItemSelectionModel* self, int row) {
	return self->isRowSelected(row);
}

bool QItemSelectionModel_IsColumnSelected(const QItemSelectionModel* self, int column) {
	return self->isColumnSelected(column);
}

bool QItemSelectionModel_RowIntersectsSelection(const QItemSelectionModel* self, int row) {
	return self->rowIntersectsSelection(row);
}

bool QItemSelectionModel_ColumnIntersectsSelection(const QItemSelectionModel* self, int column) {
	return self->columnIntersectsSelection(column);
}

bool QItemSelectionModel_HasSelection(const QItemSelectionModel* self) {
	return self->hasSelection();
}

libqt_list QItemSelectionModel_SelectedIndexes(const QItemSelectionModel* self) {
	auto _ret = self->selectedIndexes();
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

libqt_list QItemSelectionModel_SelectedRows(const QItemSelectionModel* self) {
	auto _ret = self->selectedRows();
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

libqt_list QItemSelectionModel_SelectedColumns(const QItemSelectionModel* self) {
	auto _ret = self->selectedColumns();
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

QItemSelection* QItemSelectionModel_Selection(const QItemSelectionModel* self) {
	return new QItemSelection(self->selection());
}

const QAbstractItemModel* QItemSelectionModel_Model(const QItemSelectionModel* self) {
	return self->model();
}

QAbstractItemModel* QItemSelectionModel_Model2(QItemSelectionModel* self) {
	return self->model();
}

void QItemSelectionModel_SetModel(QItemSelectionModel* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QItemSelectionModel_SetCurrentIndex(QItemSelectionModel* self, const QModelIndex* index, int command) {
	self->setCurrentIndex(*index, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

void QItemSelectionModel_Select(QItemSelectionModel* self, const QModelIndex* index, int command) {
	self->select(*index, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

void QItemSelectionModel_Select2(QItemSelectionModel* self, const QItemSelection* selection, int command) {
	self->select(*selection, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

void QItemSelectionModel_Clear(QItemSelectionModel* self) {
	self->clear();
}

void QItemSelectionModel_Reset(QItemSelectionModel* self) {
	self->reset();
}

void QItemSelectionModel_ClearSelection(QItemSelectionModel* self) {
	self->clearSelection();
}

void QItemSelectionModel_ClearCurrentIndex(QItemSelectionModel* self) {
	self->clearCurrentIndex();
}

void QItemSelectionModel_SelectionChanged(QItemSelectionModel* self, const QItemSelection* selected, const QItemSelection* deselected) {
	self->selectionChanged(*selected, *deselected);
}

void QItemSelectionModel_Connect_SelectionChanged(QItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(QItemSelectionModel*, const QItemSelection*, const QItemSelection*) = reinterpret_cast<void (*)(QItemSelectionModel*, const QItemSelection*, const QItemSelection*)>(slot);
    QItemSelectionModel::connect(self, &QItemSelectionModel::selectionChanged, [self, slotFunc](const QItemSelection& selected, const QItemSelection& deselected) {
	slotFunc(self, selected, deselected);
    });
}

void QItemSelectionModel_CurrentChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous) {
	self->currentChanged(*current, *previous);
}

void QItemSelectionModel_Connect_CurrentChanged(QItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(QItemSelectionModel*, const QModelIndex*, const QModelIndex*) = reinterpret_cast<void (*)(QItemSelectionModel*, const QModelIndex*, const QModelIndex*)>(slot);
    QItemSelectionModel::connect(self, &QItemSelectionModel::currentChanged, [self, slotFunc](const QModelIndex& current, const QModelIndex& previous) {
	slotFunc(self, current, previous);
    });
}

void QItemSelectionModel_CurrentRowChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous) {
	self->currentRowChanged(*current, *previous);
}

void QItemSelectionModel_Connect_CurrentRowChanged(QItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(QItemSelectionModel*, const QModelIndex*, const QModelIndex*) = reinterpret_cast<void (*)(QItemSelectionModel*, const QModelIndex*, const QModelIndex*)>(slot);
    QItemSelectionModel::connect(self, &QItemSelectionModel::currentRowChanged, [self, slotFunc](const QModelIndex& current, const QModelIndex& previous) {
	slotFunc(self, current, previous);
    });
}

void QItemSelectionModel_CurrentColumnChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous) {
	self->currentColumnChanged(*current, *previous);
}

void QItemSelectionModel_Connect_CurrentColumnChanged(QItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(QItemSelectionModel*, const QModelIndex*, const QModelIndex*) = reinterpret_cast<void (*)(QItemSelectionModel*, const QModelIndex*, const QModelIndex*)>(slot);
    QItemSelectionModel::connect(self, &QItemSelectionModel::currentColumnChanged, [self, slotFunc](const QModelIndex& current, const QModelIndex& previous) {
	slotFunc(self, current, previous);
    });
}

void QItemSelectionModel_ModelChanged(QItemSelectionModel* self, QAbstractItemModel* model) {
	self->modelChanged(model);
}

void QItemSelectionModel_Connect_ModelChanged(QItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(QItemSelectionModel*, QAbstractItemModel*) = reinterpret_cast<void (*)(QItemSelectionModel*, QAbstractItemModel*)>(slot);
    QItemSelectionModel::connect(self, &QItemSelectionModel::modelChanged, [self, slotFunc](QAbstractItemModel* model) {
	slotFunc(self, model);
    });
}

libqt_string QItemSelectionModel_Tr2(const char* s, const char* c) {
	QString _ret = QItemSelectionModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QItemSelectionModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QItemSelectionModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QItemSelectionModel_IsRowSelected2(const QItemSelectionModel* self, int row, const QModelIndex* parent) {
	return self->isRowSelected(row, *parent);
}

bool QItemSelectionModel_IsColumnSelected2(const QItemSelectionModel* self, int column, const QModelIndex* parent) {
	return self->isColumnSelected(column, *parent);
}

bool QItemSelectionModel_RowIntersectsSelection2(const QItemSelectionModel* self, int row, const QModelIndex* parent) {
	return self->rowIntersectsSelection(row, *parent);
}

bool QItemSelectionModel_ColumnIntersectsSelection2(const QItemSelectionModel* self, int column, const QModelIndex* parent) {
	return self->columnIntersectsSelection(column, *parent);
}

libqt_list QItemSelectionModel_SelectedRows1(const QItemSelectionModel* self, int column) {
	auto _ret = self->selectedRows(column);
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

libqt_list QItemSelectionModel_SelectedColumns1(const QItemSelectionModel* self, int row) {
	auto _ret = self->selectedColumns(row);
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

// Base class handler implementation
void QItemSelectionModel_QBaseSetCurrentIndex(QItemSelectionModel* self, const QModelIndex* index, int command) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_SetCurrentIndex_IsBase(true);
	vqitemselectionmodel->setCurrentIndex(*index, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnSetCurrentIndex(QItemSelectionModel* self, intptr_t slot) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_SetCurrentIndex_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_SetCurrentIndex_Callback>(slot));
}
}

// Base class handler implementation
void QItemSelectionModel_QBaseSelect(QItemSelectionModel* self, const QModelIndex* index, int command) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_Select_IsBase(true);
	vqitemselectionmodel->select(*index, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnSelect(QItemSelectionModel* self, intptr_t slot) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_Select_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Select_Callback>(slot));
}
}

// Base class handler implementation
void QItemSelectionModel_QBaseSelect2(QItemSelectionModel* self, const QItemSelection* selection, int command) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_Select2_IsBase(true);
	vqitemselectionmodel->select(*selection, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnSelect2(QItemSelectionModel* self, intptr_t slot) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_Select2_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Select2_Callback>(slot));
}
}

// Base class handler implementation
void QItemSelectionModel_QBaseClear(QItemSelectionModel* self) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_Clear_IsBase(true);
	vqitemselectionmodel->clear();
}
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnClear(QItemSelectionModel* self, intptr_t slot) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_Clear_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Clear_Callback>(slot));
}
}

// Base class handler implementation
void QItemSelectionModel_QBaseReset(QItemSelectionModel* self) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_Reset_IsBase(true);
	vqitemselectionmodel->reset();
}
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnReset(QItemSelectionModel* self, intptr_t slot) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_Reset_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_Reset_Callback>(slot));
}
}

// Base class handler implementation
void QItemSelectionModel_QBaseClearCurrentIndex(QItemSelectionModel* self) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_ClearCurrentIndex_IsBase(true);
	vqitemselectionmodel->clearCurrentIndex();
}
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnClearCurrentIndex(QItemSelectionModel* self, intptr_t slot) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_ClearCurrentIndex_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_ClearCurrentIndex_Callback>(slot));
}
}

// Derived class handler implementation
void QItemSelectionModel_EmitSelectionChanged(QItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
	vqitemselectionmodel->emitSelectionChanged(*newSelection, *oldSelection);
	} else {
	self->QItemSelectionModel::emitSelectionChanged(*newSelection, *oldSelection);
}
}

// Base class handler implementation
void QItemSelectionModel_QBaseEmitSelectionChanged(QItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_EmitSelectionChanged_IsBase(true);
	vqitemselectionmodel->emitSelectionChanged(*newSelection, *oldSelection);
}
}

// Auxiliary method to allow providing re-implementation
void QItemSelectionModel_OnEmitSelectionChanged(QItemSelectionModel* self, intptr_t slot) {
	auto* vqitemselectionmodel = dynamic_cast<VirtualQItemSelectionModel*>(self);
	if (vqitemselectionmodel && vqitemselectionmodel->isVirtualQItemSelectionModel) {
vqitemselectionmodel->setQItemSelectionModel_EmitSelectionChanged_Callback(reinterpret_cast<VirtualQItemSelectionModel::QItemSelectionModel_EmitSelectionChanged_Callback>(slot));
}
}

void QItemSelectionModel_Delete(QItemSelectionModel* self) {
    delete self;
}

QItemSelection* QItemSelection_new(const QModelIndex* topLeft, const QModelIndex* bottomRight) {
	 return new QItemSelection(*topLeft, *bottomRight);
}

QItemSelection* QItemSelection_new2() {
	 return new QItemSelection();
}

QItemSelection* QItemSelection_new3(const QItemSelection* param1) {
	 return new QItemSelection(*param1);
}

void QItemSelection_Select(QItemSelection* self, const QModelIndex* topLeft, const QModelIndex* bottomRight) {
	self->select(*topLeft, *bottomRight);
}

bool QItemSelection_Contains(const QItemSelection* self, const QModelIndex* index) {
	return self->contains(*index);
}

libqt_list QItemSelection_Indexes(const QItemSelection* self) {
	auto _ret = self->indexes();
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

void QItemSelection_Merge(QItemSelection* self, const QItemSelection* other, int command) {
	self->merge(*other, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

void QItemSelection_Split(const QItemSelectionRange* range, const QItemSelectionRange* other, QItemSelection* result) {
	QItemSelection::split(*range, *other, result);
}

void QItemSelection_Delete(QItemSelection* self) {
    delete self;
}

