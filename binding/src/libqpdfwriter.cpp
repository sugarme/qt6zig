#include <QByteArray>
#include <QIODevice>
#include <QObject>
#include <QPagedPaintDevice>
#include <QPaintEngine>
#include <QPdfOutputIntent>
#include <QPdfWriter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUuid>
#include <qpdfwriter.h>
#include "libqpdfwriter.h"
#include "libqpdfwriter.hxx"

QPdfWriter* QPdfWriter_new(const libqt_string filename) {
	 return new VirtualQPdfWriter(QString::fromUtf8(filename.data, filename.len));
}

QPdfWriter* QPdfWriter_new2(QIODevice* device) {
	 return new VirtualQPdfWriter(device);
}

libqt_string QPdfWriter_Tr(const char* s) {
	QString _ret = QPdfWriter::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPdfWriter_SetPdfVersion(QPdfWriter* self, int version) {
	self->setPdfVersion(static_cast<QPagedPaintDevice::PdfVersion>(version));
}

int QPdfWriter_PdfVersion(const QPdfWriter* self) {
	return self->pdfVersion();
}

libqt_string QPdfWriter_Title(const QPdfWriter* self) {
	QString _ret = self->title();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPdfWriter_SetTitle(QPdfWriter* self, const libqt_string title) {
	self->setTitle(QString::fromUtf8(title.data, title.len));
}

libqt_string QPdfWriter_Creator(const QPdfWriter* self) {
	QString _ret = self->creator();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPdfWriter_SetCreator(QPdfWriter* self, const libqt_string creator) {
	self->setCreator(QString::fromUtf8(creator.data, creator.len));
}

QUuid* QPdfWriter_DocumentId(const QPdfWriter* self) {
	return new QUuid(self->documentId());
}

void QPdfWriter_SetDocumentId(QPdfWriter* self, QUuid* documentId) {
	self->setDocumentId(*documentId);
}

bool QPdfWriter_NewPage(QPdfWriter* self) {
	return self->newPage();
}

void QPdfWriter_SetResolution(QPdfWriter* self, int resolution) {
	self->setResolution(resolution);
}

int QPdfWriter_Resolution(const QPdfWriter* self) {
	return self->resolution();
}

void QPdfWriter_SetDocumentXmpMetadata(QPdfWriter* self, const libqt_string xmpMetadata) {
	self->setDocumentXmpMetadata(QByteArray(xmpMetadata.data, xmpMetadata.len));
}

libqt_string QPdfWriter_DocumentXmpMetadata(const QPdfWriter* self) {
	QByteArray _qb = self->documentXmpMetadata();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPdfWriter_AddFileAttachment(QPdfWriter* self, const libqt_string fileName, const libqt_string data) {
	self->addFileAttachment(QString::fromUtf8(fileName.data, fileName.len), QByteArray(data.data, data.len));
}

int QPdfWriter_ColorModel(const QPdfWriter* self) {
	return self->colorModel();
}

void QPdfWriter_SetColorModel(QPdfWriter* self, int model) {
	self->setColorModel(static_cast<QPixelFormat::ColorModel>(model));
}

QPdfOutputIntent* QPdfWriter_OutputIntent(const QPdfWriter* self) {
	return new QPdfOutputIntent(self->outputIntent());
}

void QPdfWriter_SetOutputIntent(QPdfWriter* self, const QPdfOutputIntent* intent) {
	self->setOutputIntent(*intent);
}

libqt_string QPdfWriter_Tr2(const char* s, const char* c) {
	QString _ret = QPdfWriter::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPdfWriter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPdfWriter::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPdfWriter_AddFileAttachment3(QPdfWriter* self, const libqt_string fileName, const libqt_string data, const libqt_string mimeType) {
	self->addFileAttachment(QString::fromUtf8(fileName.data, fileName.len), QByteArray(data.data, data.len), QString::fromUtf8(mimeType.data, mimeType.len));
}

// Base class handler implementation
bool QPdfWriter_QBaseNewPage(QPdfWriter* self) {
	auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self);
	if (vqpdfwriter && vqpdfwriter->isVirtualQPdfWriter) {
vqpdfwriter->setQPdfWriter_NewPage_IsBase(true);
	return vqpdfwriter->newPage();
}
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnNewPage(QPdfWriter* self, intptr_t slot) {
	auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self);
	if (vqpdfwriter && vqpdfwriter->isVirtualQPdfWriter) {
vqpdfwriter->setQPdfWriter_NewPage_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_NewPage_Callback>(slot));
}
}

void QPdfWriter_Delete(QPdfWriter* self) {
    delete self;
}

