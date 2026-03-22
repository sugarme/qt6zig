#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QItemSelection>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qabstractproxymodel.h>
#include "libqabstractproxymodel.h"
#include "libqabstractproxymodel.hxx"

QAbstractProxyModel* QAbstractProxyModel_new() {
	 return new VirtualQAbstractProxyModel();
}

QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent) {
	 return new VirtualQAbstractProxyModel(parent);
}

libqt_string QAbstractProxyModel_Tr(const char* s) {
	QString _ret = QAbstractProxyModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

QAbstractItemModel* QAbstractProxyModel_SourceModel(const QAbstractProxyModel* self) {
	return self->sourceModel();
}

QBindable<QAbstractItemModel *> QAbstractProxyModel_BindableSourceModel(QAbstractProxyModel* self) {
	return self->bindableSourceModel();
}

QModelIndex* QAbstractProxyModel_MapToSource(const QAbstractProxyModel* self, const QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QAbstractProxyModel_MapFromSource(const QAbstractProxyModel* self, const QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QItemSelection* QAbstractProxyModel_MapSelectionToSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionToSource(*selection));
}

QItemSelection* QAbstractProxyModel_MapSelectionFromSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionFromSource(*selection));
}

bool QAbstractProxyModel_Submit(QAbstractProxyModel* self) {
	return self->submit();
}

void QAbstractProxyModel_Revert(QAbstractProxyModel* self) {
	self->revert();
}

QVariant* QAbstractProxyModel_Data(const QAbstractProxyModel* self, const QModelIndex* proxyIndex, int role) {
	return new QVariant(self->data(*proxyIndex, role));
}

QVariant* QAbstractProxyModel_HeaderData(const QAbstractProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

libqt_map QAbstractProxyModel_ItemData(const QAbstractProxyModel* self, const QModelIndex* index) {
	return self->itemData(*index);
}

int QAbstractProxyModel_Flags(const QAbstractProxyModel* self, const QModelIndex* index) {
	return self->flags(*index);
}

bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
	return self->setData(*index, *value, role);
}

bool QAbstractProxyModel_SetItemData(QAbstractProxyModel* self, const QModelIndex* index, const libqt_map roles) {
	return self->setItemData(*index, *roles);
}

bool QAbstractProxyModel_SetHeaderData(QAbstractProxyModel* self, int section, int orientation, const QVariant* value, int role) {
	return self->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}

bool QAbstractProxyModel_ClearItemData(QAbstractProxyModel* self, const QModelIndex* index) {
	return self->clearItemData(*index);
}

QModelIndex* QAbstractProxyModel_Buddy(const QAbstractProxyModel* self, const QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

bool QAbstractProxyModel_CanFetchMore(const QAbstractProxyModel* self, const QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, const QModelIndex* parent) {
	self->fetchMore(*parent);
}

void QAbstractProxyModel_Sort(QAbstractProxyModel* self, int column, int order) {
	self->sort(column, static_cast<Qt::SortOrder>(order));
}

QSize* QAbstractProxyModel_Span(const QAbstractProxyModel* self, const QModelIndex* index) {
	return new QSize(self->span(*index));
}

bool QAbstractProxyModel_HasChildren(const QAbstractProxyModel* self, const QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QModelIndex* QAbstractProxyModel_Sibling(const QAbstractProxyModel* self, int row, int column, const QModelIndex* idx) {
	return new QModelIndex(self->sibling(row, column, *idx));
}

QMimeData* QAbstractProxyModel_MimeData(const QAbstractProxyModel* self, const libqt_list indexes) {
	return self->mimeData(*indexes);
}

bool QAbstractProxyModel_CanDropMimeData(const QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

bool QAbstractProxyModel_DropMimeData(QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

libqt_list QAbstractProxyModel_MimeTypes(const QAbstractProxyModel* self) {
	return self->mimeTypes();
}

int QAbstractProxyModel_SupportedDragActions(const QAbstractProxyModel* self) {
	return self->supportedDragActions();
}

int QAbstractProxyModel_SupportedDropActions(const QAbstractProxyModel* self) {
	return self->supportedDropActions();
}

libqt_map QAbstractProxyModel_RoleNames(const QAbstractProxyModel* self) {
	return self->roleNames();
}

libqt_string QAbstractProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractProxyModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractProxyModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QAbstractProxyModel_QBaseSetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SetSourceModel_IsBase(true);
	vqabstractproxymodel->setSourceModel(sourceModel);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetSourceModel(QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetSourceModel_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseMapToSource(const QAbstractProxyModel* self, const QModelIndex* proxyIndex) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MapToSource_IsBase(true);
	return new QModelIndex(vqabstractproxymodel->mapToSource(*proxyIndex));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapToSource(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MapToSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapToSource_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseMapFromSource(const QAbstractProxyModel* self, const QModelIndex* sourceIndex) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MapFromSource_IsBase(true);
	return new QModelIndex(vqabstractproxymodel->mapFromSource(*sourceIndex));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapFromSource(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapFromSource_Callback>(slot));
}
}

// Base class handler implementation
QItemSelection* QAbstractProxyModel_QBaseMapSelectionToSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MapSelectionToSource_IsBase(true);
	return new QItemSelection(vqabstractproxymodel->mapSelectionToSource(*selection));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapSelectionToSource(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapSelectionToSource_Callback>(slot));
}
}

// Base class handler implementation
QItemSelection* QAbstractProxyModel_QBaseMapSelectionFromSource(const QAbstractProxyModel* self, const QItemSelection* selection) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MapSelectionFromSource_IsBase(true);
	return new QItemSelection(vqabstractproxymodel->mapSelectionFromSource(*selection));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapSelectionFromSource(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapSelectionFromSource_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseSubmit(QAbstractProxyModel* self) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Submit_IsBase(true);
	return vqabstractproxymodel->submit();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSubmit(QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Submit_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Submit_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractProxyModel_QBaseRevert(QAbstractProxyModel* self) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Revert_IsBase(true);
	vqabstractproxymodel->revert();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRevert(QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Revert_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Revert_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QAbstractProxyModel_QBaseData(const QAbstractProxyModel* self, const QModelIndex* proxyIndex, int role) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Data_IsBase(true);
	return new QVariant(vqabstractproxymodel->data(*proxyIndex, role));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnData(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Data_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Data_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QAbstractProxyModel_QBaseHeaderData(const QAbstractProxyModel* self, int section, int orientation, int role) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_HeaderData_IsBase(true);
	return new QVariant(vqabstractproxymodel->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnHeaderData(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_HeaderData_Callback>(slot));
}
}

// Base class handler implementation
libqt_map QAbstractProxyModel_QBaseItemData(const QAbstractProxyModel* self, const QModelIndex* index) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_ItemData_IsBase(true);
	return vqabstractproxymodel->itemData(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnItemData(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_ItemData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ItemData_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractProxyModel_QBaseFlags(const QAbstractProxyModel* self, const QModelIndex* index) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Flags_IsBase(true);
	return vqabstractproxymodel->flags(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnFlags(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Flags_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Flags_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseSetData(QAbstractProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SetData_IsBase(true);
	return vqabstractproxymodel->setData(*index, *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetData(QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SetData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetData_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseSetItemData(QAbstractProxyModel* self, const QModelIndex* index, const libqt_map roles) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SetItemData_IsBase(true);
	return vqabstractproxymodel->setItemData(*index, *roles);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetItemData(QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SetItemData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetItemData_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseSetHeaderData(QAbstractProxyModel* self, int section, int orientation, const QVariant* value, int role) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SetHeaderData_IsBase(true);
	return vqabstractproxymodel->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetHeaderData(QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetHeaderData_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseClearItemData(QAbstractProxyModel* self, const QModelIndex* index) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_ClearItemData_IsBase(true);
	return vqabstractproxymodel->clearItemData(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnClearItemData(QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ClearItemData_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseBuddy(const QAbstractProxyModel* self, const QModelIndex* index) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Buddy_IsBase(true);
	return new QModelIndex(vqabstractproxymodel->buddy(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBuddy(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Buddy_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Buddy_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseCanFetchMore(const QAbstractProxyModel* self, const QModelIndex* parent) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_CanFetchMore_IsBase(true);
	return vqabstractproxymodel->canFetchMore(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCanFetchMore(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CanFetchMore_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractProxyModel_QBaseFetchMore(QAbstractProxyModel* self, const QModelIndex* parent) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_FetchMore_IsBase(true);
	vqabstractproxymodel->fetchMore(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnFetchMore(QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_FetchMore_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_FetchMore_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractProxyModel_QBaseSort(QAbstractProxyModel* self, int column, int order) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Sort_IsBase(true);
	vqabstractproxymodel->sort(column, static_cast<Qt::SortOrder>(order));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSort(QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Sort_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Sort_Callback>(slot));
}
}

// Base class handler implementation
QSize* QAbstractProxyModel_QBaseSpan(const QAbstractProxyModel* self, const QModelIndex* index) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Span_IsBase(true);
	return new QSize(vqabstractproxymodel->span(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSpan(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Span_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Span_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseHasChildren(const QAbstractProxyModel* self, const QModelIndex* parent) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_HasChildren_IsBase(true);
	return vqabstractproxymodel->hasChildren(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnHasChildren(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_HasChildren_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_HasChildren_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseSibling(const QAbstractProxyModel* self, int row, int column, const QModelIndex* idx) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Sibling_IsBase(true);
	return new QModelIndex(vqabstractproxymodel->sibling(row, column, *idx));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSibling(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_Sibling_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Sibling_Callback>(slot));
}
}

// Base class handler implementation
QMimeData* QAbstractProxyModel_QBaseMimeData(const QAbstractProxyModel* self, const libqt_list indexes) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MimeData_IsBase(true);
	return vqabstractproxymodel->mimeData(*indexes);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMimeData(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MimeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MimeData_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseCanDropMimeData(const QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_CanDropMimeData_IsBase(true);
	return vqabstractproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCanDropMimeData(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CanDropMimeData_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseDropMimeData(QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_DropMimeData_IsBase(true);
	return vqabstractproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnDropMimeData(QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_DropMimeData_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAbstractProxyModel_QBaseMimeTypes(const QAbstractProxyModel* self) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MimeTypes_IsBase(true);
	return vqabstractproxymodel->mimeTypes();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMimeTypes(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MimeTypes_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractProxyModel_QBaseSupportedDragActions(const QAbstractProxyModel* self) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SupportedDragActions_IsBase(true);
	return vqabstractproxymodel->supportedDragActions();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSupportedDragActions(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SupportedDragActions_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractProxyModel_QBaseSupportedDropActions(const QAbstractProxyModel* self) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SupportedDropActions_IsBase(true);
	return vqabstractproxymodel->supportedDropActions();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSupportedDropActions(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SupportedDropActions_Callback>(slot));
}
}

// Base class handler implementation
libqt_map QAbstractProxyModel_QBaseRoleNames(const QAbstractProxyModel* self) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_RoleNames_IsBase(true);
	return vqabstractproxymodel->roleNames();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRoleNames(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_RoleNames_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RoleNames_Callback>(slot));
}
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_CreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
	return new QModelIndex(vqabstractproxymodel->createSourceIndex(row, col, internalPtr));
	} else {
	return new QModelIndex(self->QAbstractProxyModel::createSourceIndex(row, col, internalPtr));
}
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseCreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_CreateSourceIndex_IsBase(true);
	return new QModelIndex(vqabstractproxymodel->createSourceIndex(row, col, internalPtr));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCreateSourceIndex(const QAbstractProxyModel* self, intptr_t slot) {
	auto* vqabstractproxymodel = dynamic_cast<const VirtualQAbstractProxyModel*>(self);
	if (vqabstractproxymodel && vqabstractproxymodel->isVirtualQAbstractProxyModel) {
vqabstractproxymodel->setQAbstractProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CreateSourceIndex_Callback>(slot));
}
}

void QAbstractProxyModel_Connect_sourceModelChanged(QAbstractProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractProxyModel*) = reinterpret_cast<void (*)(QAbstractProxyModel*)>(slot);
    QAbstractProxyModel::connect(self, &QAbstractProxyModel::sourceModelChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractProxyModel_Delete(QAbstractProxyModel* self) {
    delete self;
}

