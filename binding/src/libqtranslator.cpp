#include <QLocale>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTranslator>
#include <qtranslator.h>
#include "libqtranslator.h"
#include "libqtranslator.hxx"

QTranslator* QTranslator_new() {
	 return new VirtualQTranslator();
}

QTranslator* QTranslator_new2(QObject* parent) {
	 return new VirtualQTranslator(parent);
}

libqt_string QTranslator_Tr(const char* s) {
	QString _ret = QTranslator::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTranslator_Translate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
	QString _ret = self->translate(context, sourceText, disambiguation, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTranslator_IsEmpty(const QTranslator* self) {
	return self->isEmpty();
}

libqt_string QTranslator_Language(const QTranslator* self) {
	QString _ret = self->language();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTranslator_FilePath(const QTranslator* self) {
	QString _ret = self->filePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTranslator_Load(QTranslator* self, const libqt_string filename) {
	return self->load(QString::fromUtf8(filename.data, filename.len));
}

bool QTranslator_Load2(QTranslator* self, const QLocale* locale, const libqt_string filename) {
	return self->load(*locale, QString::fromUtf8(filename.data, filename.len));
}

bool QTranslator_Load3(QTranslator* self, const unsigned char* data, int lenVal) {
	return self->load(data, lenVal);
}

libqt_string QTranslator_Tr2(const char* s, const char* c) {
	QString _ret = QTranslator::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTranslator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTranslator::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTranslator_Load22(QTranslator* self, const libqt_string filename, const libqt_string directory) {
	return self->load(QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(directory.data, directory.len));
}

bool QTranslator_Load32(QTranslator* self, const libqt_string filename, const libqt_string directory, const libqt_string search_delimiters) {
	return self->load(QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(directory.data, directory.len), QString::fromUtf8(search_delimiters.data, search_delimiters.len));
}

bool QTranslator_Load4(QTranslator* self, const libqt_string filename, const libqt_string directory, const libqt_string search_delimiters, const libqt_string suffix) {
	return self->load(QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(directory.data, directory.len), QString::fromUtf8(search_delimiters.data, search_delimiters.len), QString::fromUtf8(suffix.data, suffix.len));
}

bool QTranslator_Load33(QTranslator* self, const QLocale* locale, const libqt_string filename, const libqt_string prefix) {
	return self->load(*locale, QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(prefix.data, prefix.len));
}

bool QTranslator_Load42(QTranslator* self, const QLocale* locale, const libqt_string filename, const libqt_string prefix, const libqt_string directory) {
	return self->load(*locale, QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(prefix.data, prefix.len), QString::fromUtf8(directory.data, directory.len));
}

bool QTranslator_Load5(QTranslator* self, const QLocale* locale, const libqt_string filename, const libqt_string prefix, const libqt_string directory, const libqt_string suffix) {
	return self->load(*locale, QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(prefix.data, prefix.len), QString::fromUtf8(directory.data, directory.len), QString::fromUtf8(suffix.data, suffix.len));
}

bool QTranslator_Load34(QTranslator* self, const unsigned char* data, int lenVal, const libqt_string directory) {
	return self->load(data, lenVal, QString::fromUtf8(directory.data, directory.len));
}

// Base class handler implementation
libqt_string QTranslator_QBaseTranslate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
	auto* vqtranslator = dynamic_cast<const VirtualQTranslator*>(self);
	if (vqtranslator && vqtranslator->isVirtualQTranslator) {
vqtranslator->setQTranslator_Translate_IsBase(true);
	QString _ret = vqtranslator->translate(context, sourceText, disambiguation, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnTranslate(const QTranslator* self, intptr_t slot) {
	auto* vqtranslator = dynamic_cast<const VirtualQTranslator*>(self);
	if (vqtranslator && vqtranslator->isVirtualQTranslator) {
vqtranslator->setQTranslator_Translate_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_Translate_Callback>(slot));
}
}

// Base class handler implementation
bool QTranslator_QBaseIsEmpty(const QTranslator* self) {
	auto* vqtranslator = dynamic_cast<const VirtualQTranslator*>(self);
	if (vqtranslator && vqtranslator->isVirtualQTranslator) {
vqtranslator->setQTranslator_IsEmpty_IsBase(true);
	return vqtranslator->isEmpty();
}
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnIsEmpty(const QTranslator* self, intptr_t slot) {
	auto* vqtranslator = dynamic_cast<const VirtualQTranslator*>(self);
	if (vqtranslator && vqtranslator->isVirtualQTranslator) {
vqtranslator->setQTranslator_IsEmpty_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_IsEmpty_Callback>(slot));
}
}

void QTranslator_Delete(QTranslator* self) {
    delete self;
}

