#include <QChar>
#include <QDebug>
#include <QDir>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
#include <qdir.h>
#include "libqdir.h"
#include "libqdir.hxx"

QDir* QDir_new(const QDir* param1) {
	 return new QDir(*param1);
}

QDir* QDir_new2() {
	 return new QDir();
}

QDir* QDir_new3(const libqt_string path, const libqt_string nameFilter) {
	 return new QDir(QString::fromUtf8(path.data, path.len), QString::fromUtf8(nameFilter.data, nameFilter.len));
}

QDir* QDir_new4(const libqt_string path) {
	 return new QDir(QString::fromUtf8(path.data, path.len));
}

QDir* QDir_new5(const libqt_string path, const libqt_string nameFilter, int sort) {
	 return new QDir(QString::fromUtf8(path.data, path.len), QString::fromUtf8(nameFilter.data, nameFilter.len), static_cast<QFlags<QDir::SortFlag>>(sort));
}

QDir* QDir_new6(const libqt_string path, const libqt_string nameFilter, int sort, int filter) {
	 return new QDir(QString::fromUtf8(path.data, path.len), QString::fromUtf8(nameFilter.data, nameFilter.len), static_cast<QFlags<QDir::SortFlag>>(sort), static_cast<QFlags<QDir::Filter>>(filter));
}

void QDir_OperatorAssign(QDir* self, const QDir* param1) {
	self->operator=(*param1);
}

void QDir_Swap(QDir* self, QDir* other) {
	self->swap(*other);
}

void QDir_SetPath(QDir* self, const libqt_string path) {
	self->setPath(QString::fromUtf8(path.data, path.len));
}

libqt_string QDir_Path(const QDir* self) {
	QString _ret = self->path();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDir_AbsolutePath(const QDir* self) {
	QString _ret = self->absolutePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDir_CanonicalPath(const QDir* self) {
	QString _ret = self->canonicalPath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDir_SetSearchPaths(const libqt_string prefix, const libqt_list searchPaths) {
	QDir::setSearchPaths(QString::fromUtf8(prefix.data, prefix.len), QList<QString>());
}

void QDir_AddSearchPath(const libqt_string prefix, const libqt_string path) {
	QDir::addSearchPath(QString::fromUtf8(prefix.data, prefix.len), QString::fromUtf8(path.data, path.len));
}

libqt_list QDir_SearchPaths(const libqt_string prefix) {
	auto _ret = QDir::searchPaths(QString::fromUtf8(prefix.data, prefix.len));
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

libqt_string QDir_DirName(const QDir* self) {
	QString _ret = self->dirName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDir_FilePath(const QDir* self, const libqt_string fileName) {
	QString _ret = self->filePath(QString::fromUtf8(fileName.data, fileName.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDir_AbsoluteFilePath(const QDir* self, const libqt_string fileName) {
	QString _ret = self->absoluteFilePath(QString::fromUtf8(fileName.data, fileName.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDir_RelativeFilePath(const QDir* self, const libqt_string fileName) {
	QString _ret = self->relativeFilePath(QString::fromUtf8(fileName.data, fileName.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDir_ToNativeSeparators(const libqt_string pathName) {
	QString _ret = QDir::toNativeSeparators(QString::fromUtf8(pathName.data, pathName.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDir_FromNativeSeparators(const libqt_string pathName) {
	QString _ret = QDir::fromNativeSeparators(QString::fromUtf8(pathName.data, pathName.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QDir_Cd(QDir* self, const libqt_string dirName) {
	return self->cd(QString::fromUtf8(dirName.data, dirName.len));
}

bool QDir_CdUp(QDir* self) {
	return self->cdUp();
}

libqt_list QDir_NameFilters(const QDir* self) {
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

void QDir_SetNameFilters(QDir* self, const libqt_list nameFilters) {
	self->setNameFilters(QList<QString>());
}

int QDir_Filter(const QDir* self) {
	return self->filter();
}

void QDir_SetFilter(QDir* self, int filter) {
	self->setFilter(static_cast<QFlags<QDir::Filter>>(filter));
}

int QDir_Sorting(const QDir* self) {
	return self->sorting();
}

void QDir_SetSorting(QDir* self, int sort) {
	self->setSorting(static_cast<QFlags<QDir::SortFlag>>(sort));
}

ptrdiff_t QDir_Count(const QDir* self) {
	return self->count();
}

bool QDir_IsEmpty(const QDir* self) {
	return self->isEmpty();
}

libqt_string QDir_OperatorSubscript(const QDir* self, long long param1) {
	QString _ret = self->operator[](param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QDir_NameFiltersFromString(const libqt_string nameFilter) {
	auto _ret = QDir::nameFiltersFromString(QString::fromUtf8(nameFilter.data, nameFilter.len));
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

libqt_list QDir_EntryList(const QDir* self) {
	auto _ret = self->entryList();
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

libqt_list QDir_EntryList2(const QDir* self, const libqt_list nameFilters) {
	auto _ret = self->entryList(QList<QString>());
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

libqt_list QDir_EntryInfoList(const QDir* self) {
	auto _ret = self->entryInfoList();
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

libqt_list QDir_EntryInfoList2(const QDir* self, const libqt_list nameFilters) {
	auto _ret = self->entryInfoList(QList<QString>());
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

bool QDir_Mkdir(const QDir* self, const libqt_string dirName) {
	return self->mkdir(QString::fromUtf8(dirName.data, dirName.len));
}

bool QDir_Mkdir2(const QDir* self, const libqt_string dirName, QFile::Permissions permissions) {
	return self->mkdir(QString::fromUtf8(dirName.data, dirName.len), permissions);
}

bool QDir_Rmdir(const QDir* self, const libqt_string dirName) {
	return self->rmdir(QString::fromUtf8(dirName.data, dirName.len));
}

bool QDir_Mkpath(const QDir* self, const libqt_string dirPath) {
	return self->mkpath(QString::fromUtf8(dirPath.data, dirPath.len));
}

bool QDir_Rmpath(const QDir* self, const libqt_string dirPath) {
	return self->rmpath(QString::fromUtf8(dirPath.data, dirPath.len));
}

bool QDir_RemoveRecursively(QDir* self) {
	return self->removeRecursively();
}

bool QDir_IsReadable(const QDir* self) {
	return self->isReadable();
}

bool QDir_Exists(const QDir* self) {
	return self->exists();
}

bool QDir_IsRoot(const QDir* self) {
	return self->isRoot();
}

bool QDir_IsRelativePath(const libqt_string path) {
	return QDir::isRelativePath(QString::fromUtf8(path.data, path.len));
}

bool QDir_IsAbsolutePath(const libqt_string path) {
	return QDir::isAbsolutePath(QString::fromUtf8(path.data, path.len));
}

bool QDir_IsRelative(const QDir* self) {
	return self->isRelative();
}

bool QDir_IsAbsolute(const QDir* self) {
	return self->isAbsolute();
}

bool QDir_MakeAbsolute(QDir* self) {
	return self->makeAbsolute();
}

bool QDir_Remove(QDir* self, const libqt_string fileName) {
	return self->remove(QString::fromUtf8(fileName.data, fileName.len));
}

bool QDir_Rename(QDir* self, const libqt_string oldName, const libqt_string newName) {
	return self->rename(QString::fromUtf8(oldName.data, oldName.len), QString::fromUtf8(newName.data, newName.len));
}

bool QDir_Exists2(const QDir* self, const libqt_string name) {
	return self->exists(QString::fromUtf8(name.data, name.len));
}

libqt_list QDir_Drives() {
	auto _ret = QDir::drives();
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

QChar* QDir_ListSeparator() {
	return new QChar(QDir::listSeparator());
}

QChar* QDir_Separator() {
	return new QChar(QDir::separator());
}

bool QDir_SetCurrent(const libqt_string path) {
	return QDir::setCurrent(QString::fromUtf8(path.data, path.len));
}

QDir* QDir_Current() {
	return new QDir(QDir::current());
}

libqt_string QDir_CurrentPath() {
	QString _ret = QDir::currentPath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QDir* QDir_Home() {
	return new QDir(QDir::home());
}

libqt_string QDir_HomePath() {
	QString _ret = QDir::homePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QDir* QDir_Root() {
	return new QDir(QDir::root());
}

libqt_string QDir_RootPath() {
	QString _ret = QDir::rootPath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QDir* QDir_Temp() {
	return new QDir(QDir::temp());
}

libqt_string QDir_TempPath() {
	QString _ret = QDir::tempPath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QDir_Match(const libqt_list filters, const libqt_string fileName) {
	return QDir::match(QList<QString>(), QString::fromUtf8(fileName.data, fileName.len));
}

bool QDir_Match2(const libqt_string filter, const libqt_string fileName) {
	return QDir::match(QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(fileName.data, fileName.len));
}

libqt_string QDir_CleanPath(const libqt_string path) {
	QString _ret = QDir::cleanPath(QString::fromUtf8(path.data, path.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDir_Refresh(const QDir* self) {
	self->refresh();
}

ptrdiff_t QDir_Count1(const QDir* self, Disambiguated_t* param1) {
	return self->count(*param1);
}

bool QDir_IsEmpty1(const QDir* self, int filters) {
	return self->isEmpty(static_cast<QFlags<QDir::Filter>>(filters));
}

libqt_list QDir_EntryList1(const QDir* self, int filters) {
	auto _ret = self->entryList(static_cast<QFlags<QDir::Filter>>(filters));
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

libqt_list QDir_EntryList22(const QDir* self, int filters, int sort) {
	auto _ret = self->entryList(static_cast<QFlags<QDir::Filter>>(filters), static_cast<QFlags<QDir::SortFlag>>(sort));
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

libqt_list QDir_EntryList23(const QDir* self, const libqt_list nameFilters, int filters) {
	auto _ret = self->entryList(QList<QString>(), static_cast<QFlags<QDir::Filter>>(filters));
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

libqt_list QDir_EntryList3(const QDir* self, const libqt_list nameFilters, int filters, int sort) {
	auto _ret = self->entryList(QList<QString>(), static_cast<QFlags<QDir::Filter>>(filters), static_cast<QFlags<QDir::SortFlag>>(sort));
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

libqt_list QDir_EntryInfoList1(const QDir* self, int filters) {
	auto _ret = self->entryInfoList(static_cast<QFlags<QDir::Filter>>(filters));
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

libqt_list QDir_EntryInfoList22(const QDir* self, int filters, int sort) {
	auto _ret = self->entryInfoList(static_cast<QFlags<QDir::Filter>>(filters), static_cast<QFlags<QDir::SortFlag>>(sort));
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

libqt_list QDir_EntryInfoList23(const QDir* self, const libqt_list nameFilters, int filters) {
	auto _ret = self->entryInfoList(QList<QString>(), static_cast<QFlags<QDir::Filter>>(filters));
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

libqt_list QDir_EntryInfoList3(const QDir* self, const libqt_list nameFilters, int filters, int sort) {
	auto _ret = self->entryInfoList(QList<QString>(), static_cast<QFlags<QDir::Filter>>(filters), static_cast<QFlags<QDir::SortFlag>>(sort));
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

void QDir_Delete(QDir* self) {
    delete self;
}

