#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmimetype.h>
#include "libqmimetype.h"
#include "libqmimetype.hxx"

QMimeType* QMimeType_new() {
	 return new QMimeType();
}

QMimeType* QMimeType_new2(const QMimeType* other) {
	 return new QMimeType(*other);
}

QMimeType* QMimeType_new3(const QMimeTypePrivate* dd) {
	 return new QMimeType(*dd);
}

void QMimeType_OperatorAssign(QMimeType* self, const QMimeType* other) {
	self->operator=(*other);
}

void QMimeType_Swap(QMimeType* self, QMimeType* other) {
	self->swap(*other);
}

bool QMimeType_IsValid(const QMimeType* self) {
	return self->isValid();
}

bool QMimeType_IsDefault(const QMimeType* self) {
	return self->isDefault();
}

libqt_string QMimeType_Name(const QMimeType* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMimeType_Comment(const QMimeType* self) {
	QString _ret = self->comment();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMimeType_GenericIconName(const QMimeType* self) {
	QString _ret = self->genericIconName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMimeType_IconName(const QMimeType* self) {
	QString _ret = self->iconName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QMimeType_GlobPatterns(const QMimeType* self) {
	return self->globPatterns();
}

libqt_list QMimeType_ParentMimeTypes(const QMimeType* self) {
	return self->parentMimeTypes();
}

libqt_list QMimeType_AllAncestors(const QMimeType* self) {
	return self->allAncestors();
}

libqt_list QMimeType_Aliases(const QMimeType* self) {
	return self->aliases();
}

libqt_list QMimeType_Suffixes(const QMimeType* self) {
	return self->suffixes();
}

libqt_string QMimeType_PreferredSuffix(const QMimeType* self) {
	QString _ret = self->preferredSuffix();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QMimeType_Inherits(const QMimeType* self, const libqt_string mimeTypeName) {
	return self->inherits(QString::fromUtf8(mimeTypeName.data, mimeTypeName.len));
}

libqt_string QMimeType_FilterString(const QMimeType* self) {
	QString _ret = self->filterString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMimeType_Delete(QMimeType* self) {
    delete self;
}

