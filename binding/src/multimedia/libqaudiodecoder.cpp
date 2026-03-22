#include <QAudioBuffer>
#include <QAudioDecoder>
#include <QAudioFormat>
#include <QIODevice>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <qaudiodecoder.h>
#include "libqaudiodecoder.h"
#include "libqaudiodecoder.hxx"

QAudioDecoder* QAudioDecoder_new() {
	 return new QAudioDecoder();
}

QAudioDecoder* QAudioDecoder_new2(QObject* parent) {
	 return new QAudioDecoder(parent);
}

libqt_string QAudioDecoder_Tr(const char* s) {
	QString _ret = QAudioDecoder::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QAudioDecoder_IsSupported(const QAudioDecoder* self) {
	return self->isSupported();
}

bool QAudioDecoder_IsDecoding(const QAudioDecoder* self) {
	return self->isDecoding();
}

QUrl* QAudioDecoder_Source(const QAudioDecoder* self) {
	return new QUrl(self->source());
}

void QAudioDecoder_SetSource(QAudioDecoder* self, const QUrl* fileName) {
	self->setSource(*fileName);
}

QIODevice* QAudioDecoder_SourceDevice(const QAudioDecoder* self) {
	return self->sourceDevice();
}

void QAudioDecoder_SetSourceDevice(QAudioDecoder* self, QIODevice* device) {
	self->setSourceDevice(device);
}

QAudioFormat* QAudioDecoder_AudioFormat(const QAudioDecoder* self) {
	return new QAudioFormat(self->audioFormat());
}

void QAudioDecoder_SetAudioFormat(QAudioDecoder* self, const QAudioFormat* format) {
	self->setAudioFormat(*format);
}

int QAudioDecoder_Error(const QAudioDecoder* self) {
	return self->error();
}

libqt_string QAudioDecoder_ErrorString(const QAudioDecoder* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAudioBuffer* QAudioDecoder_Read(const QAudioDecoder* self) {
	return new QAudioBuffer(self->read());
}

bool QAudioDecoder_BufferAvailable(const QAudioDecoder* self) {
	return self->bufferAvailable();
}

long long QAudioDecoder_Position(const QAudioDecoder* self) {
	return self->position();
}

long long QAudioDecoder_Duration(const QAudioDecoder* self) {
	return self->duration();
}

void QAudioDecoder_Start(QAudioDecoder* self) {
	self->start();
}

void QAudioDecoder_Stop(QAudioDecoder* self) {
	self->stop();
}

void QAudioDecoder_BufferAvailableChanged(QAudioDecoder* self, bool param1) {
	self->bufferAvailableChanged(param1);
}

void QAudioDecoder_BufferReady(QAudioDecoder* self) {
	self->bufferReady();
}

void QAudioDecoder_Finished(QAudioDecoder* self) {
	self->finished();
}

void QAudioDecoder_IsDecodingChanged(QAudioDecoder* self, bool param1) {
	self->isDecodingChanged(param1);
}

void QAudioDecoder_FormatChanged(QAudioDecoder* self, const QAudioFormat* format) {
	self->formatChanged(*format);
}

void QAudioDecoder_Error2(QAudioDecoder* self, int errorVal) {
	self->error(static_cast<QAudioDecoder::Error>(errorVal));
}

void QAudioDecoder_SourceChanged(QAudioDecoder* self) {
	self->sourceChanged();
}

void QAudioDecoder_PositionChanged(QAudioDecoder* self, long long position) {
	self->positionChanged(position);
}

void QAudioDecoder_DurationChanged(QAudioDecoder* self, long long duration) {
	self->durationChanged(duration);
}

libqt_string QAudioDecoder_Tr2(const char* s, const char* c) {
	QString _ret = QAudioDecoder::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAudioDecoder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioDecoder::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAudioDecoder_Delete(QAudioDecoder* self) {
    delete self;
}

