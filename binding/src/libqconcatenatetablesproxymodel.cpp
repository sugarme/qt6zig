#include <QAbstractItemModel>
#include <QConcatenateTablesProxyModel>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qconcatenatetablesproxymodel.h>
#include "libqconcatenatetablesproxymodel.h"
#include "libqconcatenatetablesproxymodel.hxx"

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new() {
	 return new VirtualQConcatenateTablesProxyModel();
}

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent) {
	 return new VirtualQConcatenateTablesProxyModel(parent);
}

libqt_string QConcatenateTablesProxyModel_Tr(const char* s) {
	QString _ret = QConcatenateTablesProxyModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QConcatenateTablesProxyModel_SourceModels(const QConcatenateTablesProxyModel* self) {
	return self->sourceModels();
}

void QConcatenateTablesProxyModel_AddSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
	self->addSourceModel(sourceModel);
}

void QConcatenateTablesProxyModel_RemoveSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
	self->removeSourceModel(sourceModel);
}

QModelIndex* QConcatenateTablesProxyModel_MapFromSource(const QConcatenateTablesProxyModel* self, const QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QConcatenateTablesProxyModel_MapToSource(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QVariant* QConcatenateTablesProxyModel_Data(const QConcatenateTablesProxyModel* self, const QModelIndex* index, int role) {
	return new QVariant(self->data(*index, role));
}

bool QConcatenateTablesProxyModel_SetData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
	return self->setData(*index, *value, role);
}

libqt_map QConcatenateTablesProxyModel_ItemData(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex) {
	return self->itemData(*proxyIndex);
}

bool QConcatenateTablesProxyModel_SetItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const libqt_map roles) {
	return self->setItemData(*index, *roles);
}

int QConcatenateTablesProxyModel_Flags(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
	return self->flags(*index);
}

QModelIndex* QConcatenateTablesProxyModel_Index(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent) {
	return new QModelIndex(self->index(row, column, *parent));
}

QModelIndex* QConcatenateTablesProxyModel_Parent(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
	return new QModelIndex(self->parent(*index));
}

int QConcatenateTablesProxyModel_RowCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
	return self->rowCount(*parent);
}

QVariant* QConcatenateTablesProxyModel_HeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

int QConcatenateTablesProxyModel_ColumnCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
	return self->columnCount(*parent);
}

libqt_list QConcatenateTablesProxyModel_MimeTypes(const QConcatenateTablesProxyModel* self) {
	return self->mimeTypes();
}

QMimeData* QConcatenateTablesProxyModel_MimeData(const QConcatenateTablesProxyModel* self, const libqt_list indexes) {
	return self->mimeData(*indexes);
}

bool QConcatenateTablesProxyModel_CanDropMimeData(const QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

bool QConcatenateTablesProxyModel_DropMimeData(QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

QSize* QConcatenateTablesProxyModel_Span(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
	return new QSize(self->span(*index));
}

libqt_string QConcatenateTablesProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QConcatenateTablesProxyModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QConcatenateTablesProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QConcatenateTablesProxyModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QVariant* QConcatenateTablesProxyModel_QBaseData(const QConcatenateTablesProxyModel* self, const QModelIndex* index, int role) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Data_IsBase(true);
	return new QVariant(vqconcatenatetablesproxymodel->data(*index, role));
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Data_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Data_Callback>(slot));
}
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseSetData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetData_IsBase(true);
	return vqconcatenatetablesproxymodel->setData(*index, *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSetData(QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SetData_Callback>(slot));
}
}

// Base class handler implementation
libqt_map QConcatenateTablesProxyModel_QBaseItemData(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ItemData_IsBase(true);
	return vqconcatenatetablesproxymodel->itemData(*proxyIndex);
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnItemData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ItemData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ItemData_Callback>(slot));
}
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseSetItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const libqt_map roles) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetItemData_IsBase(true);
	return vqconcatenatetablesproxymodel->setItemData(*index, *roles);
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSetItemData(QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetItemData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SetItemData_Callback>(slot));
}
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseFlags(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Flags_IsBase(true);
	return vqconcatenatetablesproxymodel->flags(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnFlags(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Flags_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Flags_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseIndex(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Index_IsBase(true);
	return new QModelIndex(vqconcatenatetablesproxymodel->index(row, column, *parent));
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnIndex(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Index_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Index_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseParent(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Parent_IsBase(true);
	return new QModelIndex(vqconcatenatetablesproxymodel->parent(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnParent(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Parent_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Parent_Callback>(slot));
}
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseRowCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RowCount_IsBase(true);
	return vqconcatenatetablesproxymodel->rowCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRowCount(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RowCount_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RowCount_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QConcatenateTablesProxyModel_QBaseHeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_HeaderData_IsBase(true);
	return new QVariant(vqconcatenatetablesproxymodel->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnHeaderData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_HeaderData_Callback>(slot));
}
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseColumnCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ColumnCount_IsBase(true);
	return vqconcatenatetablesproxymodel->columnCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnColumnCount(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ColumnCount_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QConcatenateTablesProxyModel_QBaseMimeTypes(const QConcatenateTablesProxyModel* self) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeTypes_IsBase(true);
	return vqconcatenatetablesproxymodel->mimeTypes();
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMimeTypes(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MimeTypes_Callback>(slot));
}
}

// Base class handler implementation
QMimeData* QConcatenateTablesProxyModel_QBaseMimeData(const QConcatenateTablesProxyModel* self, const libqt_list indexes) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeData_IsBase(true);
	return vqconcatenatetablesproxymodel->mimeData(*indexes);
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMimeData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MimeData_Callback>(slot));
}
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseCanDropMimeData(const QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CanDropMimeData_IsBase(true);
	return vqconcatenatetablesproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCanDropMimeData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CanDropMimeData_Callback>(slot));
}
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseDropMimeData(QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DropMimeData_IsBase(true);
	return vqconcatenatetablesproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnDropMimeData(QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_DropMimeData_Callback>(slot));
}
}

// Base class handler implementation
QSize* QConcatenateTablesProxyModel_QBaseSpan(const QConcatenateTablesProxyModel* self, const QModelIndex* index) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Span_IsBase(true);
	return new QSize(vqconcatenatetablesproxymodel->span(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSpan(const QConcatenateTablesProxyModel* self, intptr_t slot) {
	auto* vqconcatenatetablesproxymodel = dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self);
	if (vqconcatenatetablesproxymodel && vqconcatenatetablesproxymodel->isVirtualQConcatenateTablesProxyModel) {
vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Span_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Span_Callback>(slot));
}
}

void QConcatenateTablesProxyModel_Delete(QConcatenateTablesProxyModel* self) {
    delete self;
}

