#include <QAudioDevice>
#include <QAudioFormat>
#include <QAudioSink>
#include <QIODevice>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiosink.h>
#include "libqaudiosink.h"
#include "libqaudiosink.hxx"

QAudioSink* QAudioSink_new() {
	 return new QAudioSink();
}

QAudioSink* QAudioSink_new2(const QAudioDevice* audioDeviceInfo) {
	 return new QAudioSink(*audioDeviceInfo);
}

QAudioSink* QAudioSink_new3(const QAudioFormat* format) {
	 return new QAudioSink(*format);
}

QAudioSink* QAudioSink_new4(const QAudioFormat* format, QObject* parent) {
	 return new QAudioSink(*format, parent);
}

QAudioSink* QAudioSink_new5(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format) {
	 return new QAudioSink(*audioDeviceInfo, *format);
}

QAudioSink* QAudioSink_new6(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format, QObject* parent) {
	 return new QAudioSink(*audioDeviceInfo, *format, parent);
}

libqt_string QAudioSink_Tr(const char* s) {
	QString _ret = QAudioSink::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QAudioSink_IsNull(const QAudioSink* self) {
	return self->isNull();
}

QAudioFormat* QAudioSink_Format(const QAudioSink* self) {
	return new QAudioFormat(self->format());
}

void QAudioSink_Start(QAudioSink* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioSink_Start2(QAudioSink* self) {
	return self->start();
}

void QAudioSink_Stop(QAudioSink* self) {
	self->stop();
}

void QAudioSink_Reset(QAudioSink* self) {
	self->reset();
}

void QAudioSink_Suspend(QAudioSink* self) {
	self->suspend();
}

void QAudioSink_Resume(QAudioSink* self) {
	self->resume();
}

void QAudioSink_SetBufferSize(QAudioSink* self, ptrdiff_t bytes) {
	self->setBufferSize(bytes);
}

ptrdiff_t QAudioSink_BufferSize(const QAudioSink* self) {
	return self->bufferSize();
}

ptrdiff_t QAudioSink_BytesFree(const QAudioSink* self) {
	return self->bytesFree();
}

long long QAudioSink_ProcessedUSecs(const QAudioSink* self) {
	return self->processedUSecs();
}

long long QAudioSink_ElapsedUSecs(const QAudioSink* self) {
	return self->elapsedUSecs();
}

int QAudioSink_Error(const QAudioSink* self) {
	return self->error();
}

int QAudioSink_State(const QAudioSink* self) {
	return self->state();
}

void QAudioSink_SetVolume(QAudioSink* self, double volume) {
	self->setVolume(volume);
}

double QAudioSink_Volume(const QAudioSink* self) {
	return self->volume();
}

void QAudioSink_StateChanged(QAudioSink* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioSink_Connect_StateChanged(QAudioSink* self, intptr_t slot) {
    void (*slotFunc)(QAudioSink*, int) = reinterpret_cast<void (*)(QAudioSink*, int)>(slot);
    QAudioSink::connect(self, &QAudioSink::stateChanged, [self, slotFunc](QAudio::State state) {
	slotFunc(self, state);
    });
}

libqt_string QAudioSink_Tr2(const char* s, const char* c) {
	QString _ret = QAudioSink::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAudioSink_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioSink::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAudioSink_Delete(QAudioSink* self) {
    delete self;
}

