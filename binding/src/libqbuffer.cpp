#include <QBuffer>
#include <QByteArray>
#include <QIODevice>
#include <QMetaMethod>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qbuffer.h>
#include "libqbuffer.h"
#include "libqbuffer.hxx"

QBuffer* QBuffer_new() {
	 return new VirtualQBuffer();
}

QBuffer* QBuffer_new2(libqt_string buf) {
	 return new VirtualQBuffer(QByteArray(buf.data, buf.len));
}

QBuffer* QBuffer_new3(QObject* parent) {
	 return new VirtualQBuffer(parent);
}

QBuffer* QBuffer_new4(libqt_string buf, QObject* parent) {
	 return new VirtualQBuffer(QByteArray(buf.data, buf.len), parent);
}

libqt_string QBuffer_Tr(const char* s) {
	QString _ret = QBuffer::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QBuffer_Buffer(QBuffer* self) {
	QByteArray _qb = self->buffer();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QBuffer_Buffer2(const QBuffer* self) {
	QByteArray _qb = self->buffer();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QBuffer_SetBuffer(QBuffer* self, libqt_string a) {
	self->setBuffer(QByteArray(a.data, a.len));
}

void QBuffer_SetData(QBuffer* self, const libqt_string data) {
	self->setData(QByteArray(data.data, data.len));
}

void QBuffer_SetData2(QBuffer* self, const char* data, ptrdiff_t lenVal) {
	self->setData(data, lenVal);
}

libqt_string QBuffer_Data(const QBuffer* self) {
	QByteArray _qb = self->data();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QBuffer_Open(QBuffer* self, int openMode) {
	return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QBuffer_Close(QBuffer* self) {
	self->close();
}

long long QBuffer_Size(const QBuffer* self) {
	return self->size();
}

long long QBuffer_Pos(const QBuffer* self) {
	return self->pos();
}

bool QBuffer_Seek(QBuffer* self, long long off) {
	return self->seek(off);
}

bool QBuffer_AtEnd(const QBuffer* self) {
	return self->atEnd();
}

bool QBuffer_CanReadLine(const QBuffer* self) {
	return self->canReadLine();
}

libqt_string QBuffer_Tr2(const char* s, const char* c) {
	QString _ret = QBuffer::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QBuffer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBuffer::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
bool QBuffer_QBaseOpen(QBuffer* self, int openMode) {
	auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_Open_IsBase(true);
	return vqbuffer->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnOpen(QBuffer* self, intptr_t slot) {
	auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_Open_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Open_Callback>(slot));
}
}

// Base class handler implementation
void QBuffer_QBaseClose(QBuffer* self) {
	auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_Close_IsBase(true);
	vqbuffer->close();
}
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnClose(QBuffer* self, intptr_t slot) {
	auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_Close_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Close_Callback>(slot));
}
}

// Base class handler implementation
long long QBuffer_QBaseSize(const QBuffer* self) {
	auto* vqbuffer = dynamic_cast<const VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_Size_IsBase(true);
	return vqbuffer->size();
}
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSize(const QBuffer* self, intptr_t slot) {
	auto* vqbuffer = dynamic_cast<const VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_Size_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Size_Callback>(slot));
}
}

// Base class handler implementation
long long QBuffer_QBasePos(const QBuffer* self) {
	auto* vqbuffer = dynamic_cast<const VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_Pos_IsBase(true);
	return vqbuffer->pos();
}
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnPos(const QBuffer* self, intptr_t slot) {
	auto* vqbuffer = dynamic_cast<const VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_Pos_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Pos_Callback>(slot));
}
}

// Base class handler implementation
bool QBuffer_QBaseSeek(QBuffer* self, long long off) {
	auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_Seek_IsBase(true);
	return vqbuffer->seek(off);
}
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSeek(QBuffer* self, intptr_t slot) {
	auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_Seek_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Seek_Callback>(slot));
}
}

// Base class handler implementation
bool QBuffer_QBaseAtEnd(const QBuffer* self) {
	auto* vqbuffer = dynamic_cast<const VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_AtEnd_IsBase(true);
	return vqbuffer->atEnd();
}
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnAtEnd(const QBuffer* self, intptr_t slot) {
	auto* vqbuffer = dynamic_cast<const VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_AtEnd_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_AtEnd_Callback>(slot));
}
}

// Base class handler implementation
bool QBuffer_QBaseCanReadLine(const QBuffer* self) {
	auto* vqbuffer = dynamic_cast<const VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_CanReadLine_IsBase(true);
	return vqbuffer->canReadLine();
}
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnCanReadLine(const QBuffer* self, intptr_t slot) {
	auto* vqbuffer = dynamic_cast<const VirtualQBuffer*>(self);
	if (vqbuffer && vqbuffer->isVirtualQBuffer) {
vqbuffer->setQBuffer_CanReadLine_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_CanReadLine_Callback>(slot));
}
}

void QBuffer_Delete(QBuffer* self) {
    delete self;
}

