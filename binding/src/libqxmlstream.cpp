#include <QByteArray>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QXmlStreamAttribute>
#include <QXmlStreamAttributes>
#include <QXmlStreamEntityDeclaration>
#include <QXmlStreamEntityResolver>
#include <QXmlStreamNamespaceDeclaration>
#include <QXmlStreamNotationDeclaration>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <qxmlstream.h>
#include "libqxmlstream.h"
#include "libqxmlstream.hxx"

QXmlStreamAttribute* QXmlStreamAttribute_new() {
	 return new QXmlStreamAttribute();
}

QXmlStreamAttribute* QXmlStreamAttribute_new2(const libqt_string qualifiedName, const libqt_string value) {
	 return new QXmlStreamAttribute(QString::fromUtf8(qualifiedName.data, qualifiedName.len), QString::fromUtf8(value.data, value.len));
}

QXmlStreamAttribute* QXmlStreamAttribute_new3(const libqt_string namespaceUri, const libqt_string name, const libqt_string value) {
	 return new QXmlStreamAttribute(QString::fromUtf8(namespaceUri.data, namespaceUri.len), QString::fromUtf8(name.data, name.len), QString::fromUtf8(value.data, value.len));
}

QXmlStreamAttribute* QXmlStreamAttribute_new4(const QXmlStreamAttribute* param1) {
	 return new QXmlStreamAttribute(*param1);
}

bool QXmlStreamAttribute_IsDefault(const QXmlStreamAttribute* self) {
	return self->isDefault();
}

void QXmlStreamAttribute_Delete(QXmlStreamAttribute* self) {
    delete self;
}

QXmlStreamAttributes* QXmlStreamAttributes_new() {
	 return new QXmlStreamAttributes();
}

void QXmlStreamAttributes_Append(QXmlStreamAttributes* self, const libqt_string namespaceUri, const libqt_string name, const libqt_string value) {
	self->append(QString::fromUtf8(namespaceUri.data, namespaceUri.len), QString::fromUtf8(name.data, name.len), QString::fromUtf8(value.data, value.len));
}

void QXmlStreamAttributes_Append2(QXmlStreamAttributes* self, const libqt_string qualifiedName, const libqt_string value) {
	self->append(QString::fromUtf8(qualifiedName.data, qualifiedName.len), QString::fromUtf8(value.data, value.len));
}

void QXmlStreamAttributes_Delete(QXmlStreamAttributes* self) {
    delete self;
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new() {
	 return new QXmlStreamNamespaceDeclaration();
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new2(const libqt_string prefix, const libqt_string namespaceUri) {
	 return new QXmlStreamNamespaceDeclaration(QString::fromUtf8(prefix.data, prefix.len), QString::fromUtf8(namespaceUri.data, namespaceUri.len));
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new3(const QXmlStreamNamespaceDeclaration* param1) {
	 return new QXmlStreamNamespaceDeclaration(*param1);
}

void QXmlStreamNamespaceDeclaration_Delete(QXmlStreamNamespaceDeclaration* self) {
    delete self;
}

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new() {
	 return new QXmlStreamNotationDeclaration();
}

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new2(const QXmlStreamNotationDeclaration* param1) {
	 return new QXmlStreamNotationDeclaration(*param1);
}

void QXmlStreamNotationDeclaration_Delete(QXmlStreamNotationDeclaration* self) {
    delete self;
}

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new() {
	 return new QXmlStreamEntityDeclaration();
}

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new2(const QXmlStreamEntityDeclaration* param1) {
	 return new QXmlStreamEntityDeclaration(*param1);
}

void QXmlStreamEntityDeclaration_Delete(QXmlStreamEntityDeclaration* self) {
    delete self;
}

QXmlStreamEntityResolver* QXmlStreamEntityResolver_new() {
	 return new VirtualQXmlStreamEntityResolver();
}

libqt_string QXmlStreamEntityResolver_ResolveEntity(QXmlStreamEntityResolver* self, const libqt_string publicId, const libqt_string systemId) {
	QString _ret = self->resolveEntity(QString::fromUtf8(publicId.data, publicId.len), QString::fromUtf8(systemId.data, systemId.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QXmlStreamEntityResolver_ResolveUndeclaredEntity(QXmlStreamEntityResolver* self, const libqt_string name) {
	QString _ret = self->resolveUndeclaredEntity(QString::fromUtf8(name.data, name.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
libqt_string QXmlStreamEntityResolver_QBaseResolveEntity(QXmlStreamEntityResolver* self, const libqt_string publicId, const libqt_string systemId) {
	auto* vqxmlstreamentityresolver = dynamic_cast<VirtualQXmlStreamEntityResolver*>(self);
	if (vqxmlstreamentityresolver && vqxmlstreamentityresolver->isVirtualQXmlStreamEntityResolver) {
vqxmlstreamentityresolver->setQXmlStreamEntityResolver_ResolveEntity_IsBase(true);
	QString _ret = vqxmlstreamentityresolver->resolveEntity(QString::fromUtf8(publicId.data, publicId.len), QString::fromUtf8(systemId.data, systemId.len));
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
void QXmlStreamEntityResolver_OnResolveEntity(QXmlStreamEntityResolver* self, intptr_t slot) {
	auto* vqxmlstreamentityresolver = dynamic_cast<VirtualQXmlStreamEntityResolver*>(self);
	if (vqxmlstreamentityresolver && vqxmlstreamentityresolver->isVirtualQXmlStreamEntityResolver) {
vqxmlstreamentityresolver->setQXmlStreamEntityResolver_ResolveEntity_Callback(reinterpret_cast<VirtualQXmlStreamEntityResolver::QXmlStreamEntityResolver_ResolveEntity_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QXmlStreamEntityResolver_QBaseResolveUndeclaredEntity(QXmlStreamEntityResolver* self, const libqt_string name) {
	auto* vqxmlstreamentityresolver = dynamic_cast<VirtualQXmlStreamEntityResolver*>(self);
	if (vqxmlstreamentityresolver && vqxmlstreamentityresolver->isVirtualQXmlStreamEntityResolver) {
vqxmlstreamentityresolver->setQXmlStreamEntityResolver_ResolveUndeclaredEntity_IsBase(true);
	QString _ret = vqxmlstreamentityresolver->resolveUndeclaredEntity(QString::fromUtf8(name.data, name.len));
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
void QXmlStreamEntityResolver_OnResolveUndeclaredEntity(QXmlStreamEntityResolver* self, intptr_t slot) {
	auto* vqxmlstreamentityresolver = dynamic_cast<VirtualQXmlStreamEntityResolver*>(self);
	if (vqxmlstreamentityresolver && vqxmlstreamentityresolver->isVirtualQXmlStreamEntityResolver) {
vqxmlstreamentityresolver->setQXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback(reinterpret_cast<VirtualQXmlStreamEntityResolver::QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback>(slot));
}
}

void QXmlStreamEntityResolver_Delete(QXmlStreamEntityResolver* self) {
    delete self;
}

QXmlStreamReader* QXmlStreamReader_new() {
	 return new QXmlStreamReader();
}

QXmlStreamReader* QXmlStreamReader_new2(QIODevice* device) {
	 return new QXmlStreamReader(device);
}

void QXmlStreamReader_SetDevice(QXmlStreamReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QXmlStreamReader_Device(const QXmlStreamReader* self) {
	return self->device();
}

void QXmlStreamReader_Clear(QXmlStreamReader* self) {
	self->clear();
}

bool QXmlStreamReader_AtEnd(const QXmlStreamReader* self) {
	return self->atEnd();
}

int QXmlStreamReader_ReadNext(QXmlStreamReader* self) {
	return self->readNext();
}

bool QXmlStreamReader_ReadNextStartElement(QXmlStreamReader* self) {
	return self->readNextStartElement();
}

void QXmlStreamReader_SkipCurrentElement(QXmlStreamReader* self) {
	self->skipCurrentElement();
}

int QXmlStreamReader_TokenType(const QXmlStreamReader* self) {
	return self->tokenType();
}

libqt_string QXmlStreamReader_TokenString(const QXmlStreamReader* self) {
	QString _ret = self->tokenString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QXmlStreamReader_SetNamespaceProcessing(QXmlStreamReader* self, bool namespaceProcessing) {
	self->setNamespaceProcessing(namespaceProcessing);
}

bool QXmlStreamReader_NamespaceProcessing(const QXmlStreamReader* self) {
	return self->namespaceProcessing();
}

bool QXmlStreamReader_IsStartDocument(const QXmlStreamReader* self) {
	return self->isStartDocument();
}

bool QXmlStreamReader_IsEndDocument(const QXmlStreamReader* self) {
	return self->isEndDocument();
}

bool QXmlStreamReader_IsStartElement(const QXmlStreamReader* self) {
	return self->isStartElement();
}

bool QXmlStreamReader_IsEndElement(const QXmlStreamReader* self) {
	return self->isEndElement();
}

bool QXmlStreamReader_IsCharacters(const QXmlStreamReader* self) {
	return self->isCharacters();
}

bool QXmlStreamReader_IsWhitespace(const QXmlStreamReader* self) {
	return self->isWhitespace();
}

bool QXmlStreamReader_IsCDATA(const QXmlStreamReader* self) {
	return self->isCDATA();
}

bool QXmlStreamReader_IsComment(const QXmlStreamReader* self) {
	return self->isComment();
}

bool QXmlStreamReader_IsDTD(const QXmlStreamReader* self) {
	return self->isDTD();
}

bool QXmlStreamReader_IsEntityReference(const QXmlStreamReader* self) {
	return self->isEntityReference();
}

bool QXmlStreamReader_IsProcessingInstruction(const QXmlStreamReader* self) {
	return self->isProcessingInstruction();
}

bool QXmlStreamReader_IsStandaloneDocument(const QXmlStreamReader* self) {
	return self->isStandaloneDocument();
}

bool QXmlStreamReader_HasStandaloneDeclaration(const QXmlStreamReader* self) {
	return self->hasStandaloneDeclaration();
}

long long QXmlStreamReader_LineNumber(const QXmlStreamReader* self) {
	return self->lineNumber();
}

long long QXmlStreamReader_ColumnNumber(const QXmlStreamReader* self) {
	return self->columnNumber();
}

long long QXmlStreamReader_CharacterOffset(const QXmlStreamReader* self) {
	return self->characterOffset();
}

QXmlStreamAttributes* QXmlStreamReader_Attributes(const QXmlStreamReader* self) {
	return new QXmlStreamAttributes(self->attributes());
}

libqt_string QXmlStreamReader_ReadElementText(QXmlStreamReader* self) {
	QString _ret = self->readElementText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QXmlStreamReader_NamespaceDeclarations(const QXmlStreamReader* self) {
	auto _ret = self->namespaceDeclarations();
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

void QXmlStreamReader_AddExtraNamespaceDeclaration(QXmlStreamReader* self, const QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction) {
	self->addExtraNamespaceDeclaration(*extraNamespaceDeclaraction);
}

void QXmlStreamReader_AddExtraNamespaceDeclarations(QXmlStreamReader* self, const libqt_list extraNamespaceDeclaractions) {
	self->addExtraNamespaceDeclarations(QList<QXmlStreamNamespaceDeclaration>());
}

libqt_list QXmlStreamReader_NotationDeclarations(const QXmlStreamReader* self) {
	auto _ret = self->notationDeclarations();
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

libqt_list QXmlStreamReader_EntityDeclarations(const QXmlStreamReader* self) {
	auto _ret = self->entityDeclarations();
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

int QXmlStreamReader_EntityExpansionLimit(const QXmlStreamReader* self) {
	return self->entityExpansionLimit();
}

void QXmlStreamReader_SetEntityExpansionLimit(QXmlStreamReader* self, int limit) {
	self->setEntityExpansionLimit(limit);
}

void QXmlStreamReader_RaiseError(QXmlStreamReader* self) {
	self->raiseError();
}

libqt_string QXmlStreamReader_ErrorString(const QXmlStreamReader* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QXmlStreamReader_Error(const QXmlStreamReader* self) {
	return self->error();
}

bool QXmlStreamReader_HasError(const QXmlStreamReader* self) {
	return self->hasError();
}

void QXmlStreamReader_SetEntityResolver(QXmlStreamReader* self, QXmlStreamEntityResolver* resolver) {
	self->setEntityResolver(resolver);
}

QXmlStreamEntityResolver* QXmlStreamReader_EntityResolver(const QXmlStreamReader* self) {
	return self->entityResolver();
}

libqt_string QXmlStreamReader_ReadElementText1(QXmlStreamReader* self, int behaviour) {
	QString _ret = self->readElementText(static_cast<QXmlStreamReader::ReadElementTextBehaviour>(behaviour));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QXmlStreamReader_RaiseError1(QXmlStreamReader* self, const libqt_string message) {
	self->raiseError(QString::fromUtf8(message.data, message.len));
}

void QXmlStreamReader_Delete(QXmlStreamReader* self) {
    delete self;
}

QXmlStreamWriter* QXmlStreamWriter_new() {
	 return new QXmlStreamWriter();
}

QXmlStreamWriter* QXmlStreamWriter_new2(QIODevice* device) {
	 return new QXmlStreamWriter(device);
}

QXmlStreamWriter* QXmlStreamWriter_new3(libqt_string array) {
	 return new QXmlStreamWriter(QByteArray(array.data, array.len));
}

QXmlStreamWriter* QXmlStreamWriter_new4(libqt_string stringVal) {
	 return new QXmlStreamWriter(QString::fromUtf8(stringVal.data, stringVal.len));
}

void QXmlStreamWriter_SetDevice(QXmlStreamWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QXmlStreamWriter_Device(const QXmlStreamWriter* self) {
	return self->device();
}

void QXmlStreamWriter_SetAutoFormatting(QXmlStreamWriter* self, bool autoFormatting) {
	self->setAutoFormatting(autoFormatting);
}

bool QXmlStreamWriter_AutoFormatting(const QXmlStreamWriter* self) {
	return self->autoFormatting();
}

void QXmlStreamWriter_SetAutoFormattingIndent(QXmlStreamWriter* self, int spacesOrTabs) {
	self->setAutoFormattingIndent(spacesOrTabs);
}

int QXmlStreamWriter_AutoFormattingIndent(const QXmlStreamWriter* self) {
	return self->autoFormattingIndent();
}

void QXmlStreamWriter_WriteAttribute3(QXmlStreamWriter* self, const QXmlStreamAttribute* attribute) {
	self->writeAttribute(*attribute);
}

void QXmlStreamWriter_WriteAttributes(QXmlStreamWriter* self, const QXmlStreamAttributes* attributes) {
	self->writeAttributes(*attributes);
}

void QXmlStreamWriter_WriteEndDocument(QXmlStreamWriter* self) {
	self->writeEndDocument();
}

void QXmlStreamWriter_WriteEndElement(QXmlStreamWriter* self) {
	self->writeEndElement();
}

void QXmlStreamWriter_WriteStartDocument(QXmlStreamWriter* self) {
	self->writeStartDocument();
}

void QXmlStreamWriter_WriteCurrentToken(QXmlStreamWriter* self, const QXmlStreamReader* reader) {
	self->writeCurrentToken(*reader);
}

bool QXmlStreamWriter_HasError(const QXmlStreamWriter* self) {
	return self->hasError();
}

void QXmlStreamWriter_Delete(QXmlStreamWriter* self) {
    delete self;
}

