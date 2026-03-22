#include <QDateTime>
#include <QDirListing>
#define WORKAROUND_INNER_CLASS_DEFINITION_QDirListing__DirEntry
#define WORKAROUND_INNER_CLASS_DEFINITION_QDirListing__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QDirListing__sentinel
#include <QFileInfo>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTimeZone>
#include <qdirlisting.h>
#include "libqdirlisting.h"
#include "libqdirlisting.hxx"

QDirListing* QDirListing_new(const libqt_string path) {
	 return new QDirListing(QString::fromUtf8(path.data, path.len));
}

QDirListing* QDirListing_new2(const libqt_string path, const libqt_list nameFilters) {
	 return new QDirListing(QString::fromUtf8(path.data, path.len), QList<QString>());
}

QDirListing* QDirListing_new3(const libqt_string path, int flags) {
	 return new QDirListing(QString::fromUtf8(path.data, path.len), static_cast<QFlags<QDirListing::IteratorFlag>>(flags));
}

QDirListing* QDirListing_new4(const libqt_string path, const libqt_list nameFilters, int flags) {
	 return new QDirListing(QString::fromUtf8(path.data, path.len), QList<QString>(), static_cast<QFlags<QDirListing::IteratorFlag>>(flags));
}

void QDirListing_Swap(QDirListing* self, QDirListing* other) {
	self->swap(*other);
}

libqt_string QDirListing_IteratorPath(const QDirListing* self) {
	QString _ret = self->iteratorPath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QDirListing_IteratorFlags(const QDirListing* self) {
	return self->iteratorFlags();
}

libqt_list QDirListing_NameFilters(const QDirListing* self) {
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

const QRect* QDirListing_Begin(const QDirListing* self) {
	return self->begin();
}

const QRect* QDirListing_Cbegin(const QDirListing* self) {
	return self->cbegin();
}

QDirListing__sentinel* QDirListing_End(const QDirListing* self) {
	return new QDirListing::sentinel(self->end());
}

QDirListing__sentinel* QDirListing_Cend(const QDirListing* self) {
	return new QDirListing::sentinel(self->cend());
}

const QRect* QDirListing_ConstBegin(const QDirListing* self) {
	return self->constBegin();
}

QDirListing__sentinel* QDirListing_ConstEnd(const QDirListing* self) {
	return new QDirListing::sentinel(self->constEnd());
}

void QDirListing_Delete(QDirListing* self) {
    delete self;
}

QDirListing__DirEntry* QDirListing__DirEntry_new(const QDirListing__DirEntry* other) {
	 return new QDirListing::DirEntry(*other);
}

QDirListing__DirEntry* QDirListing__DirEntry_new2(QDirListing__DirEntry* other) {
	 return new QDirListing::DirEntry(*other);
}

QDirListing__DirEntry* QDirListing__DirEntry_new3(const QDirListing__DirEntry* param1) {
	 return new QDirListing::DirEntry(*param1);
}

QDirListing__DirEntry* QDirListing__DirEntry_new4() {
	 return new QDirListing::DirEntry();
}

void QDirListing__DirEntry_CopyAssign(QDirListing__DirEntry* self, QDirListing__DirEntry* other) {
    *self = *other;
}

void QDirListing__DirEntry_MoveAssign(QDirListing__DirEntry* self, QDirListing__DirEntry* other) {
    *self = std::move(*other);
}

libqt_string QDirListing__DirEntry_FileName(const QDirListing__DirEntry* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDirListing__DirEntry_BaseName(const QDirListing__DirEntry* self) {
	QString _ret = self->baseName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDirListing__DirEntry_CompleteBaseName(const QDirListing__DirEntry* self) {
	QString _ret = self->completeBaseName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDirListing__DirEntry_Suffix(const QDirListing__DirEntry* self) {
	QString _ret = self->suffix();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDirListing__DirEntry_BundleName(const QDirListing__DirEntry* self) {
	QString _ret = self->bundleName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDirListing__DirEntry_CompleteSuffix(const QDirListing__DirEntry* self) {
	QString _ret = self->completeSuffix();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDirListing__DirEntry_FilePath(const QDirListing__DirEntry* self) {
	QString _ret = self->filePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QDirListing__DirEntry_IsDir(const QDirListing__DirEntry* self) {
	return self->isDir();
}

bool QDirListing__DirEntry_IsFile(const QDirListing__DirEntry* self) {
	return self->isFile();
}

bool QDirListing__DirEntry_IsSymLink(const QDirListing__DirEntry* self) {
	return self->isSymLink();
}

bool QDirListing__DirEntry_Exists(const QDirListing__DirEntry* self) {
	return self->exists();
}

bool QDirListing__DirEntry_IsHidden(const QDirListing__DirEntry* self) {
	return self->isHidden();
}

bool QDirListing__DirEntry_IsReadable(const QDirListing__DirEntry* self) {
	return self->isReadable();
}

bool QDirListing__DirEntry_IsWritable(const QDirListing__DirEntry* self) {
	return self->isWritable();
}

bool QDirListing__DirEntry_IsExecutable(const QDirListing__DirEntry* self) {
	return self->isExecutable();
}

QFileInfo* QDirListing__DirEntry_FileInfo(const QDirListing__DirEntry* self) {
	return new QFileInfo(self->fileInfo());
}

libqt_string QDirListing__DirEntry_CanonicalFilePath(const QDirListing__DirEntry* self) {
	QString _ret = self->canonicalFilePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDirListing__DirEntry_AbsoluteFilePath(const QDirListing__DirEntry* self) {
	QString _ret = self->absoluteFilePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDirListing__DirEntry_AbsolutePath(const QDirListing__DirEntry* self) {
	QString _ret = self->absolutePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

long long QDirListing__DirEntry_Size(const QDirListing__DirEntry* self) {
	return self->size();
}

QDateTime* QDirListing__DirEntry_BirthTime(const QDirListing__DirEntry* self, const QTimeZone* tz) {
	return new QDateTime(self->birthTime(*tz));
}

QDateTime* QDirListing__DirEntry_MetadataChangeTime(const QDirListing__DirEntry* self, const QTimeZone* tz) {
	return new QDateTime(self->metadataChangeTime(*tz));
}

QDateTime* QDirListing__DirEntry_LastModified(const QDirListing__DirEntry* self, const QTimeZone* tz) {
	return new QDateTime(self->lastModified(*tz));
}

QDateTime* QDirListing__DirEntry_LastRead(const QDirListing__DirEntry* self, const QTimeZone* tz) {
	return new QDateTime(self->lastRead(*tz));
}

QDateTime* QDirListing__DirEntry_FileTime(const QDirListing__DirEntry* self, int typeVal, const QTimeZone* tz) {
	return new QDateTime(self->fileTime(static_cast<QFileDevice::FileTime>(typeVal), *tz));
}

void QDirListing__DirEntry_OperatorAssign(QDirListing__DirEntry* self, const QDirListing__DirEntry* param1) {
	self->operator=(*param1);
}

void QDirListing__DirEntry_Delete(QDirListing__DirEntry* self) {
    delete self;
}

QDirListing__sentinel* QDirListing__sentinel_new(const QDirListing__sentinel* other) {
	 return new QDirListing::sentinel(*other);
}

QDirListing__sentinel* QDirListing__sentinel_new2(QDirListing__sentinel* other) {
	 return new QDirListing::sentinel(*other);
}

QDirListing__sentinel* QDirListing__sentinel_new3() {
	 return new QDirListing::sentinel();
}

QDirListing__sentinel* QDirListing__sentinel_new4(const QDirListing__sentinel* param1) {
	 return new QDirListing::sentinel(*param1);
}

void QDirListing__sentinel_CopyAssign(QDirListing__sentinel* self, QDirListing__sentinel* other) {
    *self = *other;
}

void QDirListing__sentinel_MoveAssign(QDirListing__sentinel* self, QDirListing__sentinel* other) {
    *self = std::move(*other);
}

void QDirListing__sentinel_Delete(QDirListing__sentinel* self) {
    delete self;
}

QDirListing__const_iterator* QDirListing__const_iterator_new() {
	 return new QDirListing::const_iterator();
}

const It::value_type* QDirListing__const_iterator_OperatorMultiply(const QDirListing__const_iterator* self) {
	return self->operator*();
}

const It::value_type** QDirListing__const_iterator_OperatorMinusGreater(const QDirListing__const_iterator* self) {
	return self->operator->();
}

const QRect* QDirListing__const_iterator_OperatorPlusPlus(QDirListing__const_iterator* self) {
	const_iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

void QDirListing__const_iterator_OperatorPlusPlus2(QDirListing__const_iterator* self, int param1) {
	self->operator++(param1);
}

void QDirListing__const_iterator_Delete(QDirListing__const_iterator* self) {
    delete self;
}

