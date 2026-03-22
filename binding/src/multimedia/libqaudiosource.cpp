#include <QAudioDevice>
#include <QAudioFormat>
#include <QAudioSource>
#include <QIODevice>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qaudiosource.h>
#include "libqaudiosource.h"
#include "libqaudiosource.hxx"

QAudioSource* QAudioSource_new() {
	 return new QAudioSource();
}

QAudioSource* QAudioSource_new2(const QAudioDevice* audioDeviceInfo) {
	 return new QAudioSource(*audioDeviceInfo);
}

QAudioSource* QAudioSource_new3(const QAudioFormat* format) {
	 return new QAudioSource(*format);
}

QAudioSource* QAudioSource_new4(const QAudioFormat* format, QObject* parent) {
	 return new QAudioSource(*format, parent);
}

QAudioSource* QAudioSource_new5(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format) {
	 return new QAudioSource(*audioDeviceInfo, *format);
}

QAudioSource* QAudioSource_new6(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format, QObject* parent) {
	 return new QAudioSource(*audioDeviceInfo, *format, parent);
}

libqt_string QAudioSource_Tr(const char* s) {
	QString _ret = QAudioSource::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QAudioSource_IsNull(const QAudioSource* self) {
	return self->isNull();
}

QAudioFormat* QAudioSource_Format(const QAudioSource* self) {
	return new QAudioFormat(self->format());
}

void QAudioSource_Start(QAudioSource* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioSource_Start2(QAudioSource* self) {
	return self->start();
}

void QAudioSource_Stop(QAudioSource* self) {
	self->stop();
}

void QAudioSource_Reset(QAudioSource* self) {
	self->reset();
}

void QAudioSource_Suspend(QAudioSource* self) {
	self->suspend();
}

void QAudioSource_Resume(QAudioSource* self) {
	self->resume();
}

void QAudioSource_SetBufferSize(QAudioSource* self, ptrdiff_t bytes) {
	self->setBufferSize(bytes);
}

ptrdiff_t QAudioSource_BufferSize(const QAudioSource* self) {
	return self->bufferSize();
}

ptrdiff_t QAudioSource_BytesAvailable(const QAudioSource* self) {
	return self->bytesAvailable();
}

void QAudioSource_SetVolume(QAudioSource* self, double volume) {
	self->setVolume(volume);
}

double QAudioSource_Volume(const QAudioSource* self) {
	return self->volume();
}

long long QAudioSource_ProcessedUSecs(const QAudioSource* self) {
	return self->processedUSecs();
}

long long QAudioSource_ElapsedUSecs(const QAudioSource* self) {
	return self->elapsedUSecs();
}

int QAudioSource_Error(const QAudioSource* self) {
	return self->error();
}

int QAudioSource_State(const QAudioSource* self) {
	return self->state();
}

void QAudioSource_StateChanged(QAudioSource* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioSource_Connect_StateChanged(QAudioSource* self, intptr_t slot) {
    void (*slotFunc)(QAudioSource*, int) = reinterpret_cast<void (*)(QAudioSource*, int)>(slot);
    QAudioSource::connect(self, &QAudioSource::stateChanged, [self, slotFunc](QAudio::State state) {
	slotFunc(self, state);
    });
}

libqt_string QAudioSource_Tr2(const char* s, const char* c) {
	QString _ret = QAudioSource::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAudioSource_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioSource::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAudioSource_Delete(QAudioSource* self) {
    delete self;
}

