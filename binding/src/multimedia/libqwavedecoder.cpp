#include <QAudioFormat>
#include <QIODevice>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWaveDecoder>
#include <qwavedecoder.h>
#include "libqwavedecoder.h"
#include "libqwavedecoder.hxx"

QWaveDecoder* QWaveDecoder_new(QIODevice* device) {
	 return new VirtualQWaveDecoder(device);
}

QWaveDecoder* QWaveDecoder_new2(QIODevice* device, const QAudioFormat* format) {
	 return new VirtualQWaveDecoder(device, *format);
}

QWaveDecoder* QWaveDecoder_new3(QIODevice* device, QObject* parent) {
	 return new VirtualQWaveDecoder(device, parent);
}

QWaveDecoder* QWaveDecoder_new4(QIODevice* device, const QAudioFormat* format, QObject* parent) {
	 return new VirtualQWaveDecoder(device, *format, parent);
}

libqt_string QWaveDecoder_Tr(const char* s) {
	QString _ret = QWaveDecoder::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAudioFormat* QWaveDecoder_AudioFormat(const QWaveDecoder* self) {
	return new QAudioFormat(self->audioFormat());
}

QIODevice* QWaveDecoder_GetDevice(QWaveDecoder* self) {
	return self->getDevice();
}

int QWaveDecoder_Duration(const QWaveDecoder* self) {
	return self->duration();
}

long long QWaveDecoder_HeaderLength() {
	return QWaveDecoder::headerLength();
}

bool QWaveDecoder_Open(QWaveDecoder* self, QIODevice::OpenMode mode) {
	return self->open(mode);
}

void QWaveDecoder_Close(QWaveDecoder* self) {
	self->close();
}

bool QWaveDecoder_Seek(QWaveDecoder* self, long long pos) {
	return self->seek(pos);
}

long long QWaveDecoder_Pos(const QWaveDecoder* self) {
	return self->pos();
}

void QWaveDecoder_SetIODevice(QWaveDecoder* self, QIODevice* device) {
	self->setIODevice(device);
}

long long QWaveDecoder_Size(const QWaveDecoder* self) {
	return self->size();
}

bool QWaveDecoder_IsSequential(const QWaveDecoder* self) {
	return self->isSequential();
}

long long QWaveDecoder_BytesAvailable(const QWaveDecoder* self) {
	return self->bytesAvailable();
}

void QWaveDecoder_FormatKnown(QWaveDecoder* self) {
	self->formatKnown();
}

void QWaveDecoder_Connect_FormatKnown(QWaveDecoder* self, intptr_t slot) {
    void (*slotFunc)(QWaveDecoder*) = reinterpret_cast<void (*)(QWaveDecoder*)>(slot);
    QWaveDecoder::connect(self, &QWaveDecoder::formatKnown, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QWaveDecoder_ParsingError(QWaveDecoder* self) {
	self->parsingError();
}

void QWaveDecoder_Connect_ParsingError(QWaveDecoder* self, intptr_t slot) {
    void (*slotFunc)(QWaveDecoder*) = reinterpret_cast<void (*)(QWaveDecoder*)>(slot);
    QWaveDecoder::connect(self, &QWaveDecoder::parsingError, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QWaveDecoder_Tr2(const char* s, const char* c) {
	QString _ret = QWaveDecoder::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWaveDecoder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWaveDecoder::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
bool QWaveDecoder_QBaseOpen(QWaveDecoder* self, QIODevice::OpenMode mode) {
	auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_Open_IsBase(true);
	return vqwavedecoder->open(mode);
}
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnOpen(QWaveDecoder* self, intptr_t slot) {
	auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_Open_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Open_Callback>(slot));
}
}

// Base class handler implementation
void QWaveDecoder_QBaseClose(QWaveDecoder* self) {
	auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_Close_IsBase(true);
	vqwavedecoder->close();
}
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnClose(QWaveDecoder* self, intptr_t slot) {
	auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_Close_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Close_Callback>(slot));
}
}

// Base class handler implementation
bool QWaveDecoder_QBaseSeek(QWaveDecoder* self, long long pos) {
	auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_Seek_IsBase(true);
	return vqwavedecoder->seek(pos);
}
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSeek(QWaveDecoder* self, intptr_t slot) {
	auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_Seek_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Seek_Callback>(slot));
}
}

// Base class handler implementation
long long QWaveDecoder_QBasePos(const QWaveDecoder* self) {
	auto* vqwavedecoder = dynamic_cast<const VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_Pos_IsBase(true);
	return vqwavedecoder->pos();
}
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnPos(const QWaveDecoder* self, intptr_t slot) {
	auto* vqwavedecoder = dynamic_cast<const VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_Pos_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Pos_Callback>(slot));
}
}

// Base class handler implementation
long long QWaveDecoder_QBaseSize(const QWaveDecoder* self) {
	auto* vqwavedecoder = dynamic_cast<const VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_Size_IsBase(true);
	return vqwavedecoder->size();
}
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSize(const QWaveDecoder* self, intptr_t slot) {
	auto* vqwavedecoder = dynamic_cast<const VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_Size_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Size_Callback>(slot));
}
}

// Base class handler implementation
bool QWaveDecoder_QBaseIsSequential(const QWaveDecoder* self) {
	auto* vqwavedecoder = dynamic_cast<const VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_IsSequential_IsBase(true);
	return vqwavedecoder->isSequential();
}
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnIsSequential(const QWaveDecoder* self, intptr_t slot) {
	auto* vqwavedecoder = dynamic_cast<const VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_IsSequential_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_IsSequential_Callback>(slot));
}
}

// Base class handler implementation
long long QWaveDecoder_QBaseBytesAvailable(const QWaveDecoder* self) {
	auto* vqwavedecoder = dynamic_cast<const VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_BytesAvailable_IsBase(true);
	return vqwavedecoder->bytesAvailable();
}
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnBytesAvailable(const QWaveDecoder* self, intptr_t slot) {
	auto* vqwavedecoder = dynamic_cast<const VirtualQWaveDecoder*>(self);
	if (vqwavedecoder && vqwavedecoder->isVirtualQWaveDecoder) {
vqwavedecoder->setQWaveDecoder_BytesAvailable_Callback(reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_BytesAvailable_Callback>(slot));
}
}

void QWaveDecoder_Delete(QWaveDecoder* self) {
    delete self;
}

