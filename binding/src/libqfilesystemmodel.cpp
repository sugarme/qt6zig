#include <QAbstractFileIconProvider>
#include <QAbstractItemModel>
#include <QDateTime>
#include <QDir>
#include <QEvent>
#include <QFileInfo>
#include <QFileSystemModel>
#include <QIcon>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTimeZone>
#include <QTimerEvent>
#include <QVariant>
#include <qfilesystemmodel.h>
#include "libqfilesystemmodel.h"
#include "libqfilesystemmodel.hxx"

QFileSystemModel* QFileSystemModel_new() {
	 return new VirtualQFileSystemModel();
}

QFileSystemModel* QFileSystemModel_new2(QObject* parent) {
	 return new VirtualQFileSystemModel(parent);
}

libqt_string QFileSystemModel_Tr(const char* s) {
	QString _ret = QFileSystemModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFileSystemModel_RootPathChanged(QFileSystemModel* self, const libqt_string newPath) {
	self->rootPathChanged(QString::fromUtf8(newPath.data, newPath.len));
}

void QFileSystemModel_Connect_RootPathChanged(QFileSystemModel* self, intptr_t slot) {
    void (*slotFunc)(QFileSystemModel*, const char*) = reinterpret_cast<void (*)(QFileSystemModel*, const char*)>(slot);
    QFileSystemModel::connect(self, &QFileSystemModel::rootPathChanged, [self, slotFunc](const QString& newPath) {
	slotFunc(self, newPath);
    });
}

void QFileSystemModel_FileRenamed(QFileSystemModel* self, const libqt_string path, const libqt_string oldName, const libqt_string newName) {
	self->fileRenamed(QString::fromUtf8(path.data, path.len), QString::fromUtf8(oldName.data, oldName.len), QString::fromUtf8(newName.data, newName.len));
}

void QFileSystemModel_Connect_FileRenamed(QFileSystemModel* self, intptr_t slot) {
    void (*slotFunc)(QFileSystemModel*, const char*, const char*, const char*) = reinterpret_cast<void (*)(QFileSystemModel*, const char*, const char*, const char*)>(slot);
    QFileSystemModel::connect(self, &QFileSystemModel::fileRenamed, [self, slotFunc](const QString& path, const QString& oldName, const QString& newName) {
	slotFunc(self, path, oldName, newName);
    });
}

void QFileSystemModel_DirectoryLoaded(QFileSystemModel* self, const libqt_string path) {
	self->directoryLoaded(QString::fromUtf8(path.data, path.len));
}

void QFileSystemModel_Connect_DirectoryLoaded(QFileSystemModel* self, intptr_t slot) {
    void (*slotFunc)(QFileSystemModel*, const char*) = reinterpret_cast<void (*)(QFileSystemModel*, const char*)>(slot);
    QFileSystemModel::connect(self, &QFileSystemModel::directoryLoaded, [self, slotFunc](const QString& path) {
	slotFunc(self, path);
    });
}

QModelIndex* QFileSystemModel_Index(const QFileSystemModel* self, int row, int column, const QModelIndex* parent) {
	return new QModelIndex(self->index(row, column, *parent));
}

QModelIndex* QFileSystemModel_Index2(const QFileSystemModel* self, const libqt_string path) {
	return new QModelIndex(self->index(QString::fromUtf8(path.data, path.len)));
}

QModelIndex* QFileSystemModel_Parent(const QFileSystemModel* self, const QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QFileSystemModel_Sibling(const QFileSystemModel* self, int row, int column, const QModelIndex* idx) {
	return new QModelIndex(self->sibling(row, column, *idx));
}

bool QFileSystemModel_HasChildren(const QFileSystemModel* self, const QModelIndex* parent) {
	return self->hasChildren(*parent);
}

bool QFileSystemModel_CanFetchMore(const QFileSystemModel* self, const QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

void QFileSystemModel_FetchMore(QFileSystemModel* self, const QModelIndex* parent) {
	self->fetchMore(*parent);
}

int QFileSystemModel_RowCount(const QFileSystemModel* self, const QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QFileSystemModel_ColumnCount(const QFileSystemModel* self, const QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QFileSystemModel_MyComputer(const QFileSystemModel* self) {
	return new QVariant(self->myComputer());
}

QVariant* QFileSystemModel_Data(const QFileSystemModel* self, const QModelIndex* index, int role) {
	return new QVariant(self->data(*index, role));
}

bool QFileSystemModel_SetData(QFileSystemModel* self, const QModelIndex* index, const QVariant* value, int role) {
	return self->setData(*index, *value, role);
}

QVariant* QFileSystemModel_HeaderData(const QFileSystemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

int QFileSystemModel_Flags(const QFileSystemModel* self, const QModelIndex* index) {
	return self->flags(*index);
}

void QFileSystemModel_Sort(QFileSystemModel* self, int column, int order) {
	self->sort(column, static_cast<Qt::SortOrder>(order));
}

libqt_list QFileSystemModel_MimeTypes(const QFileSystemModel* self) {
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

QMimeData* QFileSystemModel_MimeData(const QFileSystemModel* self, const libqt_list indexes) {
	return self->mimeData(QList<QModelIndex>());
}

bool QFileSystemModel_DropMimeData(QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

int QFileSystemModel_SupportedDropActions(const QFileSystemModel* self) {
	return self->supportedDropActions();
}

libqt_map QFileSystemModel_RoleNames(const QFileSystemModel* self) {
	auto _ret = self->roleNames();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

QModelIndex* QFileSystemModel_SetRootPath(QFileSystemModel* self, const libqt_string path) {
	return new QModelIndex(self->setRootPath(QString::fromUtf8(path.data, path.len)));
}

libqt_string QFileSystemModel_RootPath(const QFileSystemModel* self) {
	QString _ret = self->rootPath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QDir* QFileSystemModel_RootDirectory(const QFileSystemModel* self) {
	return new QDir(self->rootDirectory());
}

void QFileSystemModel_SetIconProvider(QFileSystemModel* self, QAbstractFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QAbstractFileIconProvider* QFileSystemModel_IconProvider(const QFileSystemModel* self) {
	return self->iconProvider();
}

void QFileSystemModel_SetFilter(QFileSystemModel* self, int filters) {
	self->setFilter(static_cast<QFlags<QDir::Filter>>(filters));
}

int QFileSystemModel_Filter(const QFileSystemModel* self) {
	return self->filter();
}

void QFileSystemModel_SetResolveSymlinks(QFileSystemModel* self, bool enable) {
	self->setResolveSymlinks(enable);
}

bool QFileSystemModel_ResolveSymlinks(const QFileSystemModel* self) {
	return self->resolveSymlinks();
}

void QFileSystemModel_SetReadOnly(QFileSystemModel* self, bool enable) {
	self->setReadOnly(enable);
}

bool QFileSystemModel_IsReadOnly(const QFileSystemModel* self) {
	return self->isReadOnly();
}

void QFileSystemModel_SetNameFilterDisables(QFileSystemModel* self, bool enable) {
	self->setNameFilterDisables(enable);
}

bool QFileSystemModel_NameFilterDisables(const QFileSystemModel* self) {
	return self->nameFilterDisables();
}

void QFileSystemModel_SetNameFilters(QFileSystemModel* self, const libqt_list filters) {
	self->setNameFilters(QList<QString>());
}

libqt_list QFileSystemModel_NameFilters(const QFileSystemModel* self) {
	auto _ret = self->nameFilters();
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

void QFileSystemModel_SetOption(QFileSystemModel* self, int option) {
	self->setOption(static_cast<QFileSystemModel::Option>(option));
}

bool QFileSystemModel_TestOption(const QFileSystemModel* self, int option) {
	return self->testOption(static_cast<QFileSystemModel::Option>(option));
}

void QFileSystemModel_SetOptions(QFileSystemModel* self, int options) {
	self->setOptions(static_cast<QFlags<QFileSystemModel::Option>>(options));
}

int QFileSystemModel_Options(const QFileSystemModel* self) {
	return self->options();
}

libqt_string QFileSystemModel_FilePath(const QFileSystemModel* self, const QModelIndex* index) {
	QString _ret = self->filePath(*index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QFileSystemModel_IsDir(const QFileSystemModel* self, const QModelIndex* index) {
	return self->isDir(*index);
}

long long QFileSystemModel_Size(const QFileSystemModel* self, const QModelIndex* index) {
	return self->size(*index);
}

libqt_string QFileSystemModel_Type(const QFileSystemModel* self, const QModelIndex* index) {
	QString _ret = self->type(*index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QDateTime* QFileSystemModel_LastModified(const QFileSystemModel* self, const QModelIndex* index) {
	return new QDateTime(self->lastModified(*index));
}

QDateTime* QFileSystemModel_LastModified2(const QFileSystemModel* self, const QModelIndex* index, const QTimeZone* tz) {
	return new QDateTime(self->lastModified(*index, *tz));
}

QModelIndex* QFileSystemModel_Mkdir(QFileSystemModel* self, const QModelIndex* parent, const libqt_string name) {
	return new QModelIndex(self->mkdir(*parent, QString::fromUtf8(name.data, name.len)));
}

bool QFileSystemModel_Rmdir(QFileSystemModel* self, const QModelIndex* index) {
	return self->rmdir(*index);
}

libqt_string QFileSystemModel_FileName(const QFileSystemModel* self, const QModelIndex* index) {
	QString _ret = self->fileName(*index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QIcon* QFileSystemModel_FileIcon(const QFileSystemModel* self, const QModelIndex* index) {
	return new QIcon(self->fileIcon(*index));
}

QFile::Permissions QFileSystemModel_Permissions(const QFileSystemModel* self, const QModelIndex* index) {
	return self->permissions(*index);
}

QFileInfo* QFileSystemModel_FileInfo(const QFileSystemModel* self, const QModelIndex* index) {
	return new QFileInfo(self->fileInfo(*index));
}

bool QFileSystemModel_Remove(QFileSystemModel* self, const QModelIndex* index) {
	return self->remove(*index);
}

libqt_string QFileSystemModel_Tr2(const char* s, const char* c) {
	QString _ret = QFileSystemModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileSystemModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFileSystemModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QModelIndex* QFileSystemModel_Index22(const QFileSystemModel* self, const libqt_string path, int column) {
	return new QModelIndex(self->index(QString::fromUtf8(path.data, path.len), column));
}

QVariant* QFileSystemModel_MyComputer1(const QFileSystemModel* self, int role) {
	return new QVariant(self->myComputer(role));
}

void QFileSystemModel_SetOption2(QFileSystemModel* self, int option, bool on) {
	self->setOption(static_cast<QFileSystemModel::Option>(option), on);
}

// Base class handler implementation
QModelIndex* QFileSystemModel_QBaseIndex(const QFileSystemModel* self, int row, int column, const QModelIndex* parent) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Index_IsBase(true);
	return new QModelIndex(vqfilesystemmodel->index(row, column, *parent));
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnIndex(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Index_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Index_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QFileSystemModel_QBaseParent(const QFileSystemModel* self, const QModelIndex* child) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Parent_IsBase(true);
	return new QModelIndex(vqfilesystemmodel->parent(*child));
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnParent(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Parent_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Parent_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QFileSystemModel_QBaseSibling(const QFileSystemModel* self, int row, int column, const QModelIndex* idx) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Sibling_IsBase(true);
	return new QModelIndex(vqfilesystemmodel->sibling(row, column, *idx));
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSibling(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Sibling_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Sibling_Callback>(slot));
}
}

// Base class handler implementation
bool QFileSystemModel_QBaseHasChildren(const QFileSystemModel* self, const QModelIndex* parent) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_HasChildren_IsBase(true);
	return vqfilesystemmodel->hasChildren(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnHasChildren(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_HasChildren_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_HasChildren_Callback>(slot));
}
}

// Base class handler implementation
bool QFileSystemModel_QBaseCanFetchMore(const QFileSystemModel* self, const QModelIndex* parent) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_CanFetchMore_IsBase(true);
	return vqfilesystemmodel->canFetchMore(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnCanFetchMore(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_CanFetchMore_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_CanFetchMore_Callback>(slot));
}
}

// Base class handler implementation
void QFileSystemModel_QBaseFetchMore(QFileSystemModel* self, const QModelIndex* parent) {
	auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_FetchMore_IsBase(true);
	vqfilesystemmodel->fetchMore(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnFetchMore(QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_FetchMore_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_FetchMore_Callback>(slot));
}
}

// Base class handler implementation
int QFileSystemModel_QBaseRowCount(const QFileSystemModel* self, const QModelIndex* parent) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_RowCount_IsBase(true);
	return vqfilesystemmodel->rowCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnRowCount(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_RowCount_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_RowCount_Callback>(slot));
}
}

// Base class handler implementation
int QFileSystemModel_QBaseColumnCount(const QFileSystemModel* self, const QModelIndex* parent) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_ColumnCount_IsBase(true);
	return vqfilesystemmodel->columnCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnColumnCount(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_ColumnCount_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_ColumnCount_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QFileSystemModel_QBaseData(const QFileSystemModel* self, const QModelIndex* index, int role) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Data_IsBase(true);
	return new QVariant(vqfilesystemmodel->data(*index, role));
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnData(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Data_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Data_Callback>(slot));
}
}

// Base class handler implementation
bool QFileSystemModel_QBaseSetData(QFileSystemModel* self, const QModelIndex* index, const QVariant* value, int role) {
	auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_SetData_IsBase(true);
	return vqfilesystemmodel->setData(*index, *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSetData(QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_SetData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SetData_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QFileSystemModel_QBaseHeaderData(const QFileSystemModel* self, int section, int orientation, int role) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_HeaderData_IsBase(true);
	return new QVariant(vqfilesystemmodel->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnHeaderData(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_HeaderData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_HeaderData_Callback>(slot));
}
}

// Base class handler implementation
int QFileSystemModel_QBaseFlags(const QFileSystemModel* self, const QModelIndex* index) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Flags_IsBase(true);
	return vqfilesystemmodel->flags(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnFlags(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Flags_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Flags_Callback>(slot));
}
}

// Base class handler implementation
void QFileSystemModel_QBaseSort(QFileSystemModel* self, int column, int order) {
	auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Sort_IsBase(true);
	vqfilesystemmodel->sort(column, static_cast<Qt::SortOrder>(order));
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSort(QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_Sort_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_Sort_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QFileSystemModel_QBaseMimeTypes(const QFileSystemModel* self) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_MimeTypes_IsBase(true);
	auto _ret = vqfilesystemmodel->mimeTypes();
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
void QFileSystemModel_OnMimeTypes(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_MimeTypes_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MimeTypes_Callback>(slot));
}
}

// Base class handler implementation
QMimeData* QFileSystemModel_QBaseMimeData(const QFileSystemModel* self, const libqt_list indexes) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_MimeData_IsBase(true);
	return vqfilesystemmodel->mimeData(QList<QModelIndex>());
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnMimeData(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_MimeData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_MimeData_Callback>(slot));
}
}

// Base class handler implementation
bool QFileSystemModel_QBaseDropMimeData(QFileSystemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_DropMimeData_IsBase(true);
	return vqfilesystemmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnDropMimeData(QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_DropMimeData_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_DropMimeData_Callback>(slot));
}
}

// Base class handler implementation
int QFileSystemModel_QBaseSupportedDropActions(const QFileSystemModel* self) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_SupportedDropActions_IsBase(true);
	return vqfilesystemmodel->supportedDropActions();
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnSupportedDropActions(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_SupportedDropActions_Callback>(slot));
}
}

// Base class handler implementation
libqt_map QFileSystemModel_QBaseRoleNames(const QFileSystemModel* self) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_RoleNames_IsBase(true);
	auto _ret = vqfilesystemmodel->roleNames();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}
}

// Auxiliary method to allow providing re-implementation
void QFileSystemModel_OnRoleNames(const QFileSystemModel* self, intptr_t slot) {
	auto* vqfilesystemmodel = dynamic_cast<const VirtualQFileSystemModel*>(self);
	if (vqfilesystemmodel && vqfilesystemmodel->isVirtualQFileSystemModel) {
vqfilesystemmodel->setQFileSystemModel_RoleNames_Callback(reinterpret_cast<VirtualQFileSystemModel::QFileSystemModel_RoleNames_Callback>(slot));
}
}

void QFileSystemModel_Delete(QFileSystemModel* self) {
    delete self;
}

