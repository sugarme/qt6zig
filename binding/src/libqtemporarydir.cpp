#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTemporaryDir>
#include <qtemporarydir.h>
#include "libqtemporarydir.h"
#include "libqtemporarydir.hxx"

QTemporaryDir* QTemporaryDir_new() {
	 return new QTemporaryDir();
}

QTemporaryDir* QTemporaryDir_new2(const libqt_string templateName) {
	 return new QTemporaryDir(QString::fromUtf8(templateName.data, templateName.len));
}

void QTemporaryDir_Swap(QTemporaryDir* self, QTemporaryDir* other) {
	self->swap(*other);
}

bool QTemporaryDir_IsValid(const QTemporaryDir* self) {
	return self->isValid();
}

libqt_string QTemporaryDir_ErrorString(const QTemporaryDir* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTemporaryDir_AutoRemove(const QTemporaryDir* self) {
	return self->autoRemove();
}

void QTemporaryDir_SetAutoRemove(QTemporaryDir* self, bool b) {
	self->setAutoRemove(b);
}

bool QTemporaryDir_Remove(QTemporaryDir* self) {
	return self->remove();
}

libqt_string QTemporaryDir_Path(const QTemporaryDir* self) {
	QString _ret = self->path();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTemporaryDir_FilePath(const QTemporaryDir* self, const libqt_string fileName) {
	QString _ret = self->filePath(QString::fromUtf8(fileName.data, fileName.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTemporaryDir_Delete(QTemporaryDir* self) {
    delete self;
}

