#include <QByteArray>
#include <QDebug>
#include <QDir>
#include <QStorageInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qstorageinfo.h>
#include "libqstorageinfo.h"
#include "libqstorageinfo.hxx"

QStorageInfo* QStorageInfo_new() {
	 return new QStorageInfo();
}

QStorageInfo* QStorageInfo_new2(const libqt_string path) {
	 return new QStorageInfo(QString::fromUtf8(path.data, path.len));
}

QStorageInfo* QStorageInfo_new3(const QDir* dir) {
	 return new QStorageInfo(*dir);
}

QStorageInfo* QStorageInfo_new4(const QStorageInfo* other) {
	 return new QStorageInfo(*other);
}

void QStorageInfo_OperatorAssign(QStorageInfo* self, const QStorageInfo* other) {
	self->operator=(*other);
}

void QStorageInfo_Swap(QStorageInfo* self, QStorageInfo* other) {
	self->swap(*other);
}

void QStorageInfo_SetPath(QStorageInfo* self, const libqt_string path) {
	self->setPath(QString::fromUtf8(path.data, path.len));
}

libqt_string QStorageInfo_RootPath(const QStorageInfo* self) {
	QString _ret = self->rootPath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStorageInfo_Device(const QStorageInfo* self) {
	QByteArray _qb = self->device();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStorageInfo_Subvolume(const QStorageInfo* self) {
	QByteArray _qb = self->subvolume();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStorageInfo_FileSystemType(const QStorageInfo* self) {
	QByteArray _qb = self->fileSystemType();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStorageInfo_Name(const QStorageInfo* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStorageInfo_DisplayName(const QStorageInfo* self) {
	QString _ret = self->displayName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

long long QStorageInfo_BytesTotal(const QStorageInfo* self) {
	return self->bytesTotal();
}

long long QStorageInfo_BytesFree(const QStorageInfo* self) {
	return self->bytesFree();
}

long long QStorageInfo_BytesAvailable(const QStorageInfo* self) {
	return self->bytesAvailable();
}

int QStorageInfo_BlockSize(const QStorageInfo* self) {
	return self->blockSize();
}

bool QStorageInfo_IsRoot(const QStorageInfo* self) {
	return self->isRoot();
}

bool QStorageInfo_IsReadOnly(const QStorageInfo* self) {
	return self->isReadOnly();
}

bool QStorageInfo_IsReady(const QStorageInfo* self) {
	return self->isReady();
}

bool QStorageInfo_IsValid(const QStorageInfo* self) {
	return self->isValid();
}

void QStorageInfo_Refresh(QStorageInfo* self) {
	self->refresh();
}

libqt_list QStorageInfo_MountedVolumes() {
	auto _ret = QStorageInfo::mountedVolumes();
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

QStorageInfo* QStorageInfo_Root() {
	return new QStorageInfo(QStorageInfo::root());
}

void QStorageInfo_Delete(QStorageInfo* self) {
    delete self;
}

