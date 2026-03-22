#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QItemSelection>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QRegularExpression>
#include <QSize>
#include <QSortFilterProxyModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <qsortfilterproxymodel.h>
#include "libqsortfilterproxymodel.h"
#include "libqsortfilterproxymodel.hxx"

QSortFilterProxyModel* QSortFilterProxyModel_new() {
	 return new VirtualQSortFilterProxyModel();
}

QSortFilterProxyModel* QSortFilterProxyModel_new2(QObject* parent) {
	 return new VirtualQSortFilterProxyModel(parent);
}

libqt_string QSortFilterProxyModel_Tr(const char* s) {
	QString _ret = QSortFilterProxyModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSortFilterProxyModel_SetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

QModelIndex* QSortFilterProxyModel_MapToSource(const QSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QSortFilterProxyModel_MapFromSource(const QSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QItemSelection* QSortFilterProxyModel_MapSelectionToSource(const QSortFilterProxyModel* self, const QItemSelection* proxySelection) {
	return new QItemSelection(self->mapSelectionToSource(*proxySelection));
}

QItemSelection* QSortFilterProxyModel_MapSelectionFromSource(const QSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
	return new QItemSelection(self->mapSelectionFromSource(*sourceSelection));
}

QRegularExpression* QSortFilterProxyModel_FilterRegularExpression(const QSortFilterProxyModel* self) {
	return new QRegularExpression(self->filterRegularExpression());
}

int QSortFilterProxyModel_FilterKeyColumn(const QSortFilterProxyModel* self) {
	return self->filterKeyColumn();
}

void QSortFilterProxyModel_SetFilterKeyColumn(QSortFilterProxyModel* self, int column) {
	self->setFilterKeyColumn(column);
}

int QSortFilterProxyModel_FilterCaseSensitivity(const QSortFilterProxyModel* self) {
	return self->filterCaseSensitivity();
}

void QSortFilterProxyModel_SetFilterCaseSensitivity(QSortFilterProxyModel* self, int cs) {
	self->setFilterCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QSortFilterProxyModel_SortCaseSensitivity(const QSortFilterProxyModel* self) {
	return self->sortCaseSensitivity();
}

void QSortFilterProxyModel_SetSortCaseSensitivity(QSortFilterProxyModel* self, int cs) {
	self->setSortCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

bool QSortFilterProxyModel_IsSortLocaleAware(const QSortFilterProxyModel* self) {
	return self->isSortLocaleAware();
}

void QSortFilterProxyModel_SetSortLocaleAware(QSortFilterProxyModel* self, bool on) {
	self->setSortLocaleAware(on);
}

int QSortFilterProxyModel_SortColumn(const QSortFilterProxyModel* self) {
	return self->sortColumn();
}

int QSortFilterProxyModel_SortOrder(const QSortFilterProxyModel* self) {
	return self->sortOrder();
}

bool QSortFilterProxyModel_DynamicSortFilter(const QSortFilterProxyModel* self) {
	return self->dynamicSortFilter();
}

void QSortFilterProxyModel_SetDynamicSortFilter(QSortFilterProxyModel* self, bool enable) {
	self->setDynamicSortFilter(enable);
}

int QSortFilterProxyModel_SortRole(const QSortFilterProxyModel* self) {
	return self->sortRole();
}

void QSortFilterProxyModel_SetSortRole(QSortFilterProxyModel* self, int role) {
	self->setSortRole(role);
}

int QSortFilterProxyModel_FilterRole(const QSortFilterProxyModel* self) {
	return self->filterRole();
}

void QSortFilterProxyModel_SetFilterRole(QSortFilterProxyModel* self, int role) {
	self->setFilterRole(role);
}

bool QSortFilterProxyModel_IsRecursiveFilteringEnabled(const QSortFilterProxyModel* self) {
	return self->isRecursiveFilteringEnabled();
}

void QSortFilterProxyModel_SetRecursiveFilteringEnabled(QSortFilterProxyModel* self, bool recursive) {
	self->setRecursiveFilteringEnabled(recursive);
}

bool QSortFilterProxyModel_AutoAcceptChildRows(const QSortFilterProxyModel* self) {
	return self->autoAcceptChildRows();
}

void QSortFilterProxyModel_SetAutoAcceptChildRows(QSortFilterProxyModel* self, bool accept) {
	self->setAutoAcceptChildRows(accept);
}

void QSortFilterProxyModel_SetFilterRegularExpression(QSortFilterProxyModel* self, const libqt_string pattern) {
	self->setFilterRegularExpression(QString::fromUtf8(pattern.data, pattern.len));
}

void QSortFilterProxyModel_SetFilterRegularExpression2(QSortFilterProxyModel* self, const QRegularExpression* regularExpression) {
	self->setFilterRegularExpression(*regularExpression);
}

void QSortFilterProxyModel_SetFilterWildcard(QSortFilterProxyModel* self, const libqt_string pattern) {
	self->setFilterWildcard(QString::fromUtf8(pattern.data, pattern.len));
}

void QSortFilterProxyModel_SetFilterFixedString(QSortFilterProxyModel* self, const libqt_string pattern) {
	self->setFilterFixedString(QString::fromUtf8(pattern.data, pattern.len));
}

void QSortFilterProxyModel_Invalidate(QSortFilterProxyModel* self) {
	self->invalidate();
}

QModelIndex* QSortFilterProxyModel_Index(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
	return new QModelIndex(self->index(row, column, *parent));
}

QModelIndex* QSortFilterProxyModel_Parent(const QSortFilterProxyModel* self, const QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QSortFilterProxyModel_Sibling(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
	return new QModelIndex(self->sibling(row, column, *idx));
}

int QSortFilterProxyModel_RowCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QSortFilterProxyModel_ColumnCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QSortFilterProxyModel_HasChildren(const QSortFilterProxyModel* self, const QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QSortFilterProxyModel_Data(const QSortFilterProxyModel* self, const QModelIndex* index, int role) {
	return new QVariant(self->data(*index, role));
}

bool QSortFilterProxyModel_SetData(QSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
	return self->setData(*index, *value, role);
}

QVariant* QSortFilterProxyModel_HeaderData(const QSortFilterProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

bool QSortFilterProxyModel_SetHeaderData(QSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
	return self->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}

QMimeData* QSortFilterProxyModel_MimeData(const QSortFilterProxyModel* self, const libqt_list indexes) {
	return self->mimeData(QList<QModelIndex>());
}

bool QSortFilterProxyModel_DropMimeData(QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

bool QSortFilterProxyModel_InsertRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
	return self->insertRows(row, count, *parent);
}

bool QSortFilterProxyModel_InsertColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
	return self->insertColumns(column, count, *parent);
}

bool QSortFilterProxyModel_RemoveRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
	return self->removeRows(row, count, *parent);
}

bool QSortFilterProxyModel_RemoveColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
	return self->removeColumns(column, count, *parent);
}

void QSortFilterProxyModel_FetchMore(QSortFilterProxyModel* self, const QModelIndex* parent) {
	self->fetchMore(*parent);
}

bool QSortFilterProxyModel_CanFetchMore(const QSortFilterProxyModel* self, const QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

int QSortFilterProxyModel_Flags(const QSortFilterProxyModel* self, const QModelIndex* index) {
	return self->flags(*index);
}

QModelIndex* QSortFilterProxyModel_Buddy(const QSortFilterProxyModel* self, const QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

libqt_list QSortFilterProxyModel_Match(const QSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
	auto _ret = self->match(*start, role, *value, hits, static_cast<QFlags<Qt::MatchFlag>>(flags));
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

QSize* QSortFilterProxyModel_Span(const QSortFilterProxyModel* self, const QModelIndex* index) {
	return new QSize(self->span(*index));
}

void QSortFilterProxyModel_Sort(QSortFilterProxyModel* self, int column, int order) {
	self->sort(column, static_cast<Qt::SortOrder>(order));
}

libqt_list QSortFilterProxyModel_MimeTypes(const QSortFilterProxyModel* self) {
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

int QSortFilterProxyModel_SupportedDropActions(const QSortFilterProxyModel* self) {
	return self->supportedDropActions();
}

void QSortFilterProxyModel_DynamicSortFilterChanged(QSortFilterProxyModel* self, bool dynamicSortFilter) {
	self->dynamicSortFilterChanged(dynamicSortFilter);
}

void QSortFilterProxyModel_Connect_DynamicSortFilterChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::dynamicSortFilterChanged, [self, slotFunc](bool dynamicSortFilter) {
	slotFunc(self, dynamicSortFilter);
    });
}

void QSortFilterProxyModel_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, int filterCaseSensitivity) {
	self->filterCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(filterCaseSensitivity));
}

void QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::filterCaseSensitivityChanged, [self, slotFunc](Qt::CaseSensitivity filterCaseSensitivity) {
	slotFunc(self, filterCaseSensitivity);
    });
}

void QSortFilterProxyModel_SortCaseSensitivityChanged(QSortFilterProxyModel* self, int sortCaseSensitivity) {
	self->sortCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(sortCaseSensitivity));
}

void QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::sortCaseSensitivityChanged, [self, slotFunc](Qt::CaseSensitivity sortCaseSensitivity) {
	slotFunc(self, sortCaseSensitivity);
    });
}

void QSortFilterProxyModel_SortLocaleAwareChanged(QSortFilterProxyModel* self, bool sortLocaleAware) {
	self->sortLocaleAwareChanged(sortLocaleAware);
}

void QSortFilterProxyModel_Connect_SortLocaleAwareChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::sortLocaleAwareChanged, [self, slotFunc](bool sortLocaleAware) {
	slotFunc(self, sortLocaleAware);
    });
}

void QSortFilterProxyModel_SortRoleChanged(QSortFilterProxyModel* self, int sortRole) {
	self->sortRoleChanged(sortRole);
}

void QSortFilterProxyModel_Connect_SortRoleChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::sortRoleChanged, [self, slotFunc](int sortRole) {
	slotFunc(self, sortRole);
    });
}

void QSortFilterProxyModel_FilterRoleChanged(QSortFilterProxyModel* self, int filterRole) {
	self->filterRoleChanged(filterRole);
}

void QSortFilterProxyModel_Connect_FilterRoleChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, int) = reinterpret_cast<void (*)(QSortFilterProxyModel*, int)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::filterRoleChanged, [self, slotFunc](int filterRole) {
	slotFunc(self, filterRole);
    });
}

void QSortFilterProxyModel_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, bool recursiveFilteringEnabled) {
	self->recursiveFilteringEnabledChanged(recursiveFilteringEnabled);
}

void QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::recursiveFilteringEnabledChanged, [self, slotFunc](bool recursiveFilteringEnabled) {
	slotFunc(self, recursiveFilteringEnabled);
    });
}

void QSortFilterProxyModel_AutoAcceptChildRowsChanged(QSortFilterProxyModel* self, bool autoAcceptChildRows) {
	self->autoAcceptChildRowsChanged(autoAcceptChildRows);
}

void QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(QSortFilterProxyModel* self, intptr_t slot) {
    void (*slotFunc)(QSortFilterProxyModel*, bool) = reinterpret_cast<void (*)(QSortFilterProxyModel*, bool)>(slot);
    QSortFilterProxyModel::connect(self, &QSortFilterProxyModel::autoAcceptChildRowsChanged, [self, slotFunc](bool autoAcceptChildRows) {
	slotFunc(self, autoAcceptChildRows);
    });
}

libqt_string QSortFilterProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QSortFilterProxyModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSortFilterProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSortFilterProxyModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseSetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_SetSourceModel_IsBase(true);
	vqsortfilterproxymodel->setSourceModel(sourceModel);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSetSourceModel(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SetSourceModel_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseMapToSource(const QSortFilterProxyModel* self, const QModelIndex* proxyIndex) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MapToSource_IsBase(true);
	return new QModelIndex(vqsortfilterproxymodel->mapToSource(*proxyIndex));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapToSource(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MapToSource_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapToSource_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseMapFromSource(const QSortFilterProxyModel* self, const QModelIndex* sourceIndex) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MapFromSource_IsBase(true);
	return new QModelIndex(vqsortfilterproxymodel->mapFromSource(*sourceIndex));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapFromSource(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapFromSource_Callback>(slot));
}
}

// Base class handler implementation
QItemSelection* QSortFilterProxyModel_QBaseMapSelectionToSource(const QSortFilterProxyModel* self, const QItemSelection* proxySelection) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MapSelectionToSource_IsBase(true);
	return new QItemSelection(vqsortfilterproxymodel->mapSelectionToSource(*proxySelection));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapSelectionToSource(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapSelectionToSource_Callback>(slot));
}
}

// Base class handler implementation
QItemSelection* QSortFilterProxyModel_QBaseMapSelectionFromSource(const QSortFilterProxyModel* self, const QItemSelection* sourceSelection) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MapSelectionFromSource_IsBase(true);
	return new QItemSelection(vqsortfilterproxymodel->mapSelectionFromSource(*sourceSelection));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMapSelectionFromSource(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MapSelectionFromSource_Callback>(slot));
}
}

// Derived class handler implementation
bool QSortFilterProxyModel_FilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
	return vqsortfilterproxymodel->filterAcceptsRow(source_row, *source_parent);
	} else {
	return self->QSortFilterProxyModel::filterAcceptsRow(source_row, *source_parent);
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseFilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_FilterAcceptsRow_IsBase(true);
	return vqsortfilterproxymodel->filterAcceptsRow(source_row, *source_parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFilterAcceptsRow(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_FilterAcceptsRow_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_FilterAcceptsRow_Callback>(slot));
}
}

// Derived class handler implementation
bool QSortFilterProxyModel_FilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
	return vqsortfilterproxymodel->filterAcceptsColumn(source_column, *source_parent);
	} else {
	return self->QSortFilterProxyModel::filterAcceptsColumn(source_column, *source_parent);
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseFilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_FilterAcceptsColumn_IsBase(true);
	return vqsortfilterproxymodel->filterAcceptsColumn(source_column, *source_parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFilterAcceptsColumn(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_FilterAcceptsColumn_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_FilterAcceptsColumn_Callback>(slot));
}
}

// Derived class handler implementation
bool QSortFilterProxyModel_LessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
	return vqsortfilterproxymodel->lessThan(*source_left, *source_right);
	} else {
	return self->QSortFilterProxyModel::lessThan(*source_left, *source_right);
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseLessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_LessThan_IsBase(true);
	return vqsortfilterproxymodel->lessThan(*source_left, *source_right);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnLessThan(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_LessThan_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_LessThan_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseIndex(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Index_IsBase(true);
	return new QModelIndex(vqsortfilterproxymodel->index(row, column, *parent));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnIndex(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Index_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Index_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseParent(const QSortFilterProxyModel* self, const QModelIndex* child) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Parent_IsBase(true);
	return new QModelIndex(vqsortfilterproxymodel->parent(*child));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnParent(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Parent_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Parent_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseSibling(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* idx) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Sibling_IsBase(true);
	return new QModelIndex(vqsortfilterproxymodel->sibling(row, column, *idx));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSibling(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Sibling_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Sibling_Callback>(slot));
}
}

// Base class handler implementation
int QSortFilterProxyModel_QBaseRowCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_RowCount_IsBase(true);
	return vqsortfilterproxymodel->rowCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnRowCount(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_RowCount_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_RowCount_Callback>(slot));
}
}

// Base class handler implementation
int QSortFilterProxyModel_QBaseColumnCount(const QSortFilterProxyModel* self, const QModelIndex* parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_ColumnCount_IsBase(true);
	return vqsortfilterproxymodel->columnCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnColumnCount(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_ColumnCount_Callback>(slot));
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseHasChildren(const QSortFilterProxyModel* self, const QModelIndex* parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_HasChildren_IsBase(true);
	return vqsortfilterproxymodel->hasChildren(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnHasChildren(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_HasChildren_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_HasChildren_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QSortFilterProxyModel_QBaseData(const QSortFilterProxyModel* self, const QModelIndex* index, int role) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Data_IsBase(true);
	return new QVariant(vqsortfilterproxymodel->data(*index, role));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnData(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Data_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Data_Callback>(slot));
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseSetData(QSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_SetData_IsBase(true);
	return vqsortfilterproxymodel->setData(*index, *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSetData(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_SetData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SetData_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QSortFilterProxyModel_QBaseHeaderData(const QSortFilterProxyModel* self, int section, int orientation, int role) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_HeaderData_IsBase(true);
	return new QVariant(vqsortfilterproxymodel->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnHeaderData(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_HeaderData_Callback>(slot));
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseSetHeaderData(QSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_SetHeaderData_IsBase(true);
	return vqsortfilterproxymodel->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSetHeaderData(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SetHeaderData_Callback>(slot));
}
}

// Base class handler implementation
QMimeData* QSortFilterProxyModel_QBaseMimeData(const QSortFilterProxyModel* self, const libqt_list indexes) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MimeData_IsBase(true);
	return vqsortfilterproxymodel->mimeData(QList<QModelIndex>());
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnMimeData(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MimeData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MimeData_Callback>(slot));
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseDropMimeData(QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_DropMimeData_IsBase(true);
	return vqsortfilterproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnDropMimeData(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_DropMimeData_Callback>(slot));
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseInsertRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_InsertRows_IsBase(true);
	return vqsortfilterproxymodel->insertRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInsertRows(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_InsertRows_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InsertRows_Callback>(slot));
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseInsertColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_InsertColumns_IsBase(true);
	return vqsortfilterproxymodel->insertColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInsertColumns(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InsertColumns_Callback>(slot));
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseRemoveRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_RemoveRows_IsBase(true);
	return vqsortfilterproxymodel->removeRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnRemoveRows(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_RemoveRows_Callback>(slot));
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseRemoveColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_RemoveColumns_IsBase(true);
	return vqsortfilterproxymodel->removeColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnRemoveColumns(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_RemoveColumns_Callback>(slot));
}
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseFetchMore(QSortFilterProxyModel* self, const QModelIndex* parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_FetchMore_IsBase(true);
	vqsortfilterproxymodel->fetchMore(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFetchMore(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_FetchMore_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_FetchMore_Callback>(slot));
}
}

// Base class handler implementation
bool QSortFilterProxyModel_QBaseCanFetchMore(const QSortFilterProxyModel* self, const QModelIndex* parent) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_CanFetchMore_IsBase(true);
	return vqsortfilterproxymodel->canFetchMore(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnCanFetchMore(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_CanFetchMore_Callback>(slot));
}
}

// Base class handler implementation
int QSortFilterProxyModel_QBaseFlags(const QSortFilterProxyModel* self, const QModelIndex* index) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Flags_IsBase(true);
	return vqsortfilterproxymodel->flags(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnFlags(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Flags_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Flags_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QSortFilterProxyModel_QBaseBuddy(const QSortFilterProxyModel* self, const QModelIndex* index) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Buddy_IsBase(true);
	return new QModelIndex(vqsortfilterproxymodel->buddy(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnBuddy(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Buddy_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Buddy_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QSortFilterProxyModel_QBaseMatch(const QSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Match_IsBase(true);
	auto _ret = vqsortfilterproxymodel->match(*start, role, *value, hits, static_cast<QFlags<Qt::MatchFlag>>(flags));
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
void QSortFilterProxyModel_OnMatch(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Match_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Match_Callback>(slot));
}
}

// Base class handler implementation
QSize* QSortFilterProxyModel_QBaseSpan(const QSortFilterProxyModel* self, const QModelIndex* index) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Span_IsBase(true);
	return new QSize(vqsortfilterproxymodel->span(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSpan(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Span_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Span_Callback>(slot));
}
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseSort(QSortFilterProxyModel* self, int column, int order) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Sort_IsBase(true);
	vqsortfilterproxymodel->sort(column, static_cast<Qt::SortOrder>(order));
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSort(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_Sort_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_Sort_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QSortFilterProxyModel_QBaseMimeTypes(const QSortFilterProxyModel* self) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MimeTypes_IsBase(true);
	auto _ret = vqsortfilterproxymodel->mimeTypes();
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
void QSortFilterProxyModel_OnMimeTypes(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_MimeTypes_Callback>(slot));
}
}

// Base class handler implementation
int QSortFilterProxyModel_QBaseSupportedDropActions(const QSortFilterProxyModel* self) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_SupportedDropActions_IsBase(true);
	return vqsortfilterproxymodel->supportedDropActions();
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnSupportedDropActions(const QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<const VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_SupportedDropActions_Callback>(slot));
}
}

// Derived class handler implementation
void QSortFilterProxyModel_InvalidateFilter(QSortFilterProxyModel* self) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
	vqsortfilterproxymodel->invalidateFilter();
	} else {
	self->QSortFilterProxyModel::invalidateFilter();
}
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseInvalidateFilter(QSortFilterProxyModel* self) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateFilter_IsBase(true);
	vqsortfilterproxymodel->invalidateFilter();
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInvalidateFilter(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateFilter_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InvalidateFilter_Callback>(slot));
}
}

// Derived class handler implementation
void QSortFilterProxyModel_InvalidateRowsFilter(QSortFilterProxyModel* self) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
	vqsortfilterproxymodel->invalidateRowsFilter();
	} else {
	self->QSortFilterProxyModel::invalidateRowsFilter();
}
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseInvalidateRowsFilter(QSortFilterProxyModel* self) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateRowsFilter_IsBase(true);
	vqsortfilterproxymodel->invalidateRowsFilter();
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInvalidateRowsFilter(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateRowsFilter_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InvalidateRowsFilter_Callback>(slot));
}
}

// Derived class handler implementation
void QSortFilterProxyModel_InvalidateColumnsFilter(QSortFilterProxyModel* self) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
	vqsortfilterproxymodel->invalidateColumnsFilter();
	} else {
	self->QSortFilterProxyModel::invalidateColumnsFilter();
}
}

// Base class handler implementation
void QSortFilterProxyModel_QBaseInvalidateColumnsFilter(QSortFilterProxyModel* self) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateColumnsFilter_IsBase(true);
	vqsortfilterproxymodel->invalidateColumnsFilter();
}
}

// Auxiliary method to allow providing re-implementation
void QSortFilterProxyModel_OnInvalidateColumnsFilter(QSortFilterProxyModel* self, intptr_t slot) {
	auto* vqsortfilterproxymodel = dynamic_cast<VirtualQSortFilterProxyModel*>(self);
	if (vqsortfilterproxymodel && vqsortfilterproxymodel->isVirtualQSortFilterProxyModel) {
vqsortfilterproxymodel->setQSortFilterProxyModel_InvalidateColumnsFilter_Callback(reinterpret_cast<VirtualQSortFilterProxyModel::QSortFilterProxyModel_InvalidateColumnsFilter_Callback>(slot));
}
}

void QSortFilterProxyModel_Delete(QSortFilterProxyModel* self) {
    delete self;
}

