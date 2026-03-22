#include <QDir>
#include <QDirIterator>
#include <QFileInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdiriterator.h>
#include "libqdiriterator.h"
#include "libqdiriterator.hxx"

QDirIterator* QDirIterator_new(const QDir* dir) {
	 return new QDirIterator(*dir);
}

QDirIterator* QDirIterator_new2(const libqt_string path) {
	 return new QDirIterator(QString::fromUtf8(path.data, path.len));
}

QDirIterator* QDirIterator_new3(const libqt_string path, int filter) {
	 return new QDirIterator(QString::fromUtf8(path.data, path.len), static_cast<QFlags<QDir::Filter>>(filter));
}

QDirIterator* QDirIterator_new4(const libqt_string path, const libqt_list nameFilters) {
	 return new QDirIterator(QString::fromUtf8(path.data, path.len), *nameFilters);
}

QDirIterator* QDirIterator_new5(const QDir* dir, int flags) {
	 return new QDirIterator(*dir, static_cast<QFlags<QDirIterator::IteratorFlag>>(flags));
}

QDirIterator* QDirIterator_new6(const libqt_string path, int flags) {
	 return new QDirIterator(QString::fromUtf8(path.data, path.len), static_cast<QFlags<QDirIterator::IteratorFlag>>(flags));
}

QDirIterator* QDirIterator_new7(const libqt_string path, int filter, int flags) {
	 return new QDirIterator(QString::fromUtf8(path.data, path.len), static_cast<QFlags<QDir::Filter>>(filter), static_cast<QFlags<QDirIterator::IteratorFlag>>(flags));
}

QDirIterator* QDirIterator_new8(const libqt_string path, const libqt_list nameFilters, int filters) {
	 return new QDirIterator(QString::fromUtf8(path.data, path.len), *nameFilters, static_cast<QFlags<QDir::Filter>>(filters));
}

QDirIterator* QDirIterator_new9(const libqt_string path, const libqt_list nameFilters, int filters, int flags) {
	 return new QDirIterator(QString::fromUtf8(path.data, path.len), *nameFilters, static_cast<QFlags<QDir::Filter>>(filters), static_cast<QFlags<QDirIterator::IteratorFlag>>(flags));
}

libqt_string QDirIterator_Next(QDirIterator* self) {
	QString _ret = self->next();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QFileInfo* QDirIterator_NextFileInfo(QDirIterator* self) {
	return new QFileInfo(self->nextFileInfo());
}

bool QDirIterator_HasNext(const QDirIterator* self) {
	return self->hasNext();
}

libqt_string QDirIterator_FileName(const QDirIterator* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDirIterator_FilePath(const QDirIterator* self) {
	QString _ret = self->filePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QFileInfo* QDirIterator_FileInfo(const QDirIterator* self) {
	return new QFileInfo(self->fileInfo());
}

libqt_string QDirIterator_Path(const QDirIterator* self) {
	QString _ret = self->path();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDirIterator_Delete(QDirIterator* self) {
    delete self;
}

