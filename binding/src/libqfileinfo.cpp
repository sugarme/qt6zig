#include <QDateTime>
#include <QDir>
#include <QFileDevice>
#include <QFileInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTimeZone>
#include <qfileinfo.h>
#include "libqfileinfo.h"
#include "libqfileinfo.hxx"

QFileInfo* QFileInfo_new() {
	 return new QFileInfo();
}

QFileInfo* QFileInfo_new2(const libqt_string file) {
	 return new QFileInfo(QString::fromUtf8(file.data, file.len));
}

QFileInfo* QFileInfo_new3(const QFileDevice* file) {
	 return new QFileInfo(*file);
}

QFileInfo* QFileInfo_new4(const QDir* dir, const libqt_string file) {
	 return new QFileInfo(*dir, QString::fromUtf8(file.data, file.len));
}

QFileInfo* QFileInfo_new5(const QFileInfo* fileinfo) {
	 return new QFileInfo(*fileinfo);
}

void QFileInfo_OperatorAssign(QFileInfo* self, const QFileInfo* fileinfo) {
	self->operator=(*fileinfo);
}

void QFileInfo_Swap(QFileInfo* self, QFileInfo* other) {
	self->swap(*other);
}

void QFileInfo_SetFile(QFileInfo* self, const libqt_string file) {
	self->setFile(QString::fromUtf8(file.data, file.len));
}

void QFileInfo_SetFile2(QFileInfo* self, const QFileDevice* file) {
	self->setFile(*file);
}

void QFileInfo_SetFile3(QFileInfo* self, const QDir* dir, const libqt_string file) {
	self->setFile(*dir, QString::fromUtf8(file.data, file.len));
}

bool QFileInfo_Exists(const QFileInfo* self) {
	return self->exists();
}

bool QFileInfo_Exists2(const libqt_string file) {
	return QFileInfo::exists(QString::fromUtf8(file.data, file.len));
}

void QFileInfo_Refresh(QFileInfo* self) {
	self->refresh();
}

libqt_string QFileInfo_FilePath(const QFileInfo* self) {
	QString _ret = self->filePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_AbsoluteFilePath(const QFileInfo* self) {
	QString _ret = self->absoluteFilePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_CanonicalFilePath(const QFileInfo* self) {
	QString _ret = self->canonicalFilePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_FileName(const QFileInfo* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_BaseName(const QFileInfo* self) {
	QString _ret = self->baseName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_CompleteBaseName(const QFileInfo* self) {
	QString _ret = self->completeBaseName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_Suffix(const QFileInfo* self) {
	QString _ret = self->suffix();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_BundleName(const QFileInfo* self) {
	QString _ret = self->bundleName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_CompleteSuffix(const QFileInfo* self) {
	QString _ret = self->completeSuffix();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_Path(const QFileInfo* self) {
	QString _ret = self->path();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_AbsolutePath(const QFileInfo* self) {
	QString _ret = self->absolutePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_CanonicalPath(const QFileInfo* self) {
	QString _ret = self->canonicalPath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QDir* QFileInfo_Dir(const QFileInfo* self) {
	return new QDir(self->dir());
}

QDir* QFileInfo_AbsoluteDir(const QFileInfo* self) {
	return new QDir(self->absoluteDir());
}

bool QFileInfo_IsReadable(const QFileInfo* self) {
	return self->isReadable();
}

bool QFileInfo_IsWritable(const QFileInfo* self) {
	return self->isWritable();
}

bool QFileInfo_IsExecutable(const QFileInfo* self) {
	return self->isExecutable();
}

bool QFileInfo_IsHidden(const QFileInfo* self) {
	return self->isHidden();
}

bool QFileInfo_IsNativePath(const QFileInfo* self) {
	return self->isNativePath();
}

bool QFileInfo_IsRelative(const QFileInfo* self) {
	return self->isRelative();
}

bool QFileInfo_IsAbsolute(const QFileInfo* self) {
	return self->isAbsolute();
}

bool QFileInfo_MakeAbsolute(QFileInfo* self) {
	return self->makeAbsolute();
}

bool QFileInfo_IsFile(const QFileInfo* self) {
	return self->isFile();
}

bool QFileInfo_IsDir(const QFileInfo* self) {
	return self->isDir();
}

bool QFileInfo_IsSymLink(const QFileInfo* self) {
	return self->isSymLink();
}

bool QFileInfo_IsSymbolicLink(const QFileInfo* self) {
	return self->isSymbolicLink();
}

bool QFileInfo_IsShortcut(const QFileInfo* self) {
	return self->isShortcut();
}

bool QFileInfo_IsAlias(const QFileInfo* self) {
	return self->isAlias();
}

bool QFileInfo_IsJunction(const QFileInfo* self) {
	return self->isJunction();
}

bool QFileInfo_IsRoot(const QFileInfo* self) {
	return self->isRoot();
}

bool QFileInfo_IsBundle(const QFileInfo* self) {
	return self->isBundle();
}

libqt_string QFileInfo_SymLinkTarget(const QFileInfo* self) {
	QString _ret = self->symLinkTarget();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_ReadSymLink(const QFileInfo* self) {
	QString _ret = self->readSymLink();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_JunctionTarget(const QFileInfo* self) {
	QString _ret = self->junctionTarget();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileInfo_Owner(const QFileInfo* self) {
	QString _ret = self->owner();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

unsigned int QFileInfo_OwnerId(const QFileInfo* self) {
	return self->ownerId();
}

libqt_string QFileInfo_Group(const QFileInfo* self) {
	QString _ret = self->group();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

unsigned int QFileInfo_GroupId(const QFileInfo* self) {
	return self->groupId();
}

bool QFileInfo_Permission(const QFileInfo* self, QFile::Permissions permissions) {
	return self->permission(permissions);
}

QFile::Permissions QFileInfo_Permissions(const QFileInfo* self) {
	return self->permissions();
}

long long QFileInfo_Size(const QFileInfo* self) {
	return self->size();
}

QDateTime* QFileInfo_BirthTime(const QFileInfo* self) {
	return new QDateTime(self->birthTime());
}

QDateTime* QFileInfo_MetadataChangeTime(const QFileInfo* self) {
	return new QDateTime(self->metadataChangeTime());
}

QDateTime* QFileInfo_LastModified(const QFileInfo* self) {
	return new QDateTime(self->lastModified());
}

QDateTime* QFileInfo_LastRead(const QFileInfo* self) {
	return new QDateTime(self->lastRead());
}

QDateTime* QFileInfo_FileTime(const QFileInfo* self, QFile::FileTime time) {
	return new QDateTime(self->fileTime(time));
}

QDateTime* QFileInfo_BirthTime2(const QFileInfo* self, const QTimeZone* tz) {
	return new QDateTime(self->birthTime(*tz));
}

QDateTime* QFileInfo_MetadataChangeTime2(const QFileInfo* self, const QTimeZone* tz) {
	return new QDateTime(self->metadataChangeTime(*tz));
}

QDateTime* QFileInfo_LastModified2(const QFileInfo* self, const QTimeZone* tz) {
	return new QDateTime(self->lastModified(*tz));
}

QDateTime* QFileInfo_LastRead2(const QFileInfo* self, const QTimeZone* tz) {
	return new QDateTime(self->lastRead(*tz));
}

QDateTime* QFileInfo_FileTime2(const QFileInfo* self, QFile::FileTime time, const QTimeZone* tz) {
	return new QDateTime(self->fileTime(time, *tz));
}

bool QFileInfo_Caching(const QFileInfo* self) {
	return self->caching();
}

void QFileInfo_SetCaching(QFileInfo* self, bool on) {
	self->setCaching(on);
}

void QFileInfo_Stat(QFileInfo* self) {
	self->stat();
}

void QFileInfo_Delete(QFileInfo* self) {
    delete self;
}

