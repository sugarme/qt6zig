#include <QByteArray>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTextDocument>
#include <QTextDocumentFragment>
#include <QTextDocumentWriter>
#include <qtextdocumentwriter.h>
#include "libqtextdocumentwriter.h"
#include "libqtextdocumentwriter.hxx"

QTextDocumentWriter* QTextDocumentWriter_new() {
	 return new QTextDocumentWriter();
}

QTextDocumentWriter* QTextDocumentWriter_new2(QIODevice* device, const libqt_string format) {
	 return new QTextDocumentWriter(device, QByteArray(format.data, format.len));
}

QTextDocumentWriter* QTextDocumentWriter_new3(const libqt_string fileName) {
	 return new QTextDocumentWriter(QString::fromUtf8(fileName.data, fileName.len));
}

QTextDocumentWriter* QTextDocumentWriter_new4(const libqt_string fileName, const libqt_string format) {
	 return new QTextDocumentWriter(QString::fromUtf8(fileName.data, fileName.len), QByteArray(format.data, format.len));
}

void QTextDocumentWriter_SetFormat(QTextDocumentWriter* self, const libqt_string format) {
	self->setFormat(QByteArray(format.data, format.len));
}

libqt_string QTextDocumentWriter_Format(const QTextDocumentWriter* self) {
	QByteArray _qb = self->format();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextDocumentWriter_SetDevice(QTextDocumentWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QTextDocumentWriter_Device(const QTextDocumentWriter* self) {
	return self->device();
}

void QTextDocumentWriter_SetFileName(QTextDocumentWriter* self, const libqt_string fileName) {
	self->setFileName(QString::fromUtf8(fileName.data, fileName.len));
}

libqt_string QTextDocumentWriter_FileName(const QTextDocumentWriter* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTextDocumentWriter_Write(QTextDocumentWriter* self, const QTextDocument* document) {
	return self->write(document);
}

bool QTextDocumentWriter_Write2(QTextDocumentWriter* self, const QTextDocumentFragment* fragment) {
	return self->write(*fragment);
}

libqt_list QTextDocumentWriter_SupportedDocumentFormats() {
	auto _ret = QTextDocumentWriter::supportedDocumentFormats();
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

void QTextDocumentWriter_Delete(QTextDocumentWriter* self) {
    delete self;
}

