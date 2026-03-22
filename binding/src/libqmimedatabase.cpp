#include <QByteArray>
#include <QFileInfo>
#include <QIODevice>
#include <QMimeDatabase>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <qmimedatabase.h>
#include "libqmimedatabase.h"
#include "libqmimedatabase.hxx"

QMimeDatabase* QMimeDatabase_new() {
	 return new QMimeDatabase();
}

QMimeType* QMimeDatabase_MimeTypeForName(const QMimeDatabase* self, const libqt_string nameOrAlias) {
	return new QMimeType(self->mimeTypeForName(QString::fromUtf8(nameOrAlias.data, nameOrAlias.len)));
}

QMimeType* QMimeDatabase_MimeTypeForFile(const QMimeDatabase* self, const libqt_string fileName) {
	return new QMimeType(self->mimeTypeForFile(QString::fromUtf8(fileName.data, fileName.len)));
}

QMimeType* QMimeDatabase_MimeTypeForFile2(const QMimeDatabase* self, const QFileInfo* fileInfo) {
	return new QMimeType(self->mimeTypeForFile(*fileInfo));
}

libqt_list QMimeDatabase_MimeTypesForFileName(const QMimeDatabase* self, const libqt_string fileName) {
	auto _ret = self->mimeTypesForFileName(QString::fromUtf8(fileName.data, fileName.len));
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

QMimeType* QMimeDatabase_MimeTypeForData(const QMimeDatabase* self, const libqt_string data) {
	return new QMimeType(self->mimeTypeForData(QByteArray(data.data, data.len)));
}

QMimeType* QMimeDatabase_MimeTypeForData2(const QMimeDatabase* self, QIODevice* device) {
	return new QMimeType(self->mimeTypeForData(device));
}

QMimeType* QMimeDatabase_MimeTypeForUrl(const QMimeDatabase* self, const QUrl* url) {
	return new QMimeType(self->mimeTypeForUrl(*url));
}

QMimeType* QMimeDatabase_MimeTypeForFileNameAndData(const QMimeDatabase* self, const libqt_string fileName, QIODevice* device) {
	return new QMimeType(self->mimeTypeForFileNameAndData(QString::fromUtf8(fileName.data, fileName.len), device));
}

QMimeType* QMimeDatabase_MimeTypeForFileNameAndData2(const QMimeDatabase* self, const libqt_string fileName, const libqt_string data) {
	return new QMimeType(self->mimeTypeForFileNameAndData(QString::fromUtf8(fileName.data, fileName.len), QByteArray(data.data, data.len)));
}

libqt_string QMimeDatabase_SuffixForFileName(const QMimeDatabase* self, const libqt_string fileName) {
	QString _ret = self->suffixForFileName(QString::fromUtf8(fileName.data, fileName.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QMimeDatabase_AllMimeTypes(const QMimeDatabase* self) {
	auto _ret = self->allMimeTypes();
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

QMimeType* QMimeDatabase_MimeTypeForFile22(const QMimeDatabase* self, const libqt_string fileName, int mode) {
	return new QMimeType(self->mimeTypeForFile(QString::fromUtf8(fileName.data, fileName.len), static_cast<QMimeDatabase::MatchMode>(mode)));
}

QMimeType* QMimeDatabase_MimeTypeForFile23(const QMimeDatabase* self, const QFileInfo* fileInfo, int mode) {
	return new QMimeType(self->mimeTypeForFile(*fileInfo, static_cast<QMimeDatabase::MatchMode>(mode)));
}

void QMimeDatabase_Delete(QMimeDatabase* self) {
    delete self;
}

