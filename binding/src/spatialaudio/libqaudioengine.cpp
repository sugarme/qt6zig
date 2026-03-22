#include <QAudioDevice>
#include <QAudioEngine>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudioengine.h>
#include "libqaudioengine.h"
#include "libqaudioengine.hxx"

QAudioEngine* QAudioEngine_new() {
	 return new QAudioEngine();
}

QAudioEngine* QAudioEngine_new2(QObject* parent) {
	 return new QAudioEngine(parent);
}

QAudioEngine* QAudioEngine_new3(int sampleRate) {
	 return new QAudioEngine(sampleRate);
}

QAudioEngine* QAudioEngine_new4(int sampleRate, QObject* parent) {
	 return new QAudioEngine(sampleRate, parent);
}

libqt_string QAudioEngine_Tr(const char* s) {
	QString _ret = QAudioEngine::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAudioEngine_SetOutputMode(QAudioEngine* self, int mode) {
	self->setOutputMode(static_cast<QAudioEngine::OutputMode>(mode));
}

int QAudioEngine_OutputMode(const QAudioEngine* self) {
	return self->outputMode();
}

int QAudioEngine_SampleRate(const QAudioEngine* self) {
	return self->sampleRate();
}

void QAudioEngine_SetOutputDevice(QAudioEngine* self, const QAudioDevice* device) {
	self->setOutputDevice(*device);
}

QAudioDevice* QAudioEngine_OutputDevice(const QAudioEngine* self) {
	return new QAudioDevice(self->outputDevice());
}

void QAudioEngine_SetMasterVolume(QAudioEngine* self, float volume) {
	self->setMasterVolume(volume);
}

float QAudioEngine_MasterVolume(const QAudioEngine* self) {
	return self->masterVolume();
}

void QAudioEngine_SetPaused(QAudioEngine* self, bool paused) {
	self->setPaused(paused);
}

bool QAudioEngine_Paused(const QAudioEngine* self) {
	return self->paused();
}

void QAudioEngine_SetRoomEffectsEnabled(QAudioEngine* self, bool enabled) {
	self->setRoomEffectsEnabled(enabled);
}

bool QAudioEngine_RoomEffectsEnabled(const QAudioEngine* self) {
	return self->roomEffectsEnabled();
}

void QAudioEngine_SetDistanceScale(QAudioEngine* self, float scale) {
	self->setDistanceScale(scale);
}

float QAudioEngine_DistanceScale(const QAudioEngine* self) {
	return self->distanceScale();
}

void QAudioEngine_OutputModeChanged(QAudioEngine* self) {
	self->outputModeChanged();
}

void QAudioEngine_Connect_OutputModeChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self, &QAudioEngine::outputModeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioEngine_OutputDeviceChanged(QAudioEngine* self) {
	self->outputDeviceChanged();
}

void QAudioEngine_Connect_OutputDeviceChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self, &QAudioEngine::outputDeviceChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioEngine_MasterVolumeChanged(QAudioEngine* self) {
	self->masterVolumeChanged();
}

void QAudioEngine_Connect_MasterVolumeChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self, &QAudioEngine::masterVolumeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioEngine_PausedChanged(QAudioEngine* self) {
	self->pausedChanged();
}

void QAudioEngine_Connect_PausedChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self, &QAudioEngine::pausedChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioEngine_DistanceScaleChanged(QAudioEngine* self) {
	self->distanceScaleChanged();
}

void QAudioEngine_Connect_DistanceScaleChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self, &QAudioEngine::distanceScaleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioEngine_Start(QAudioEngine* self) {
	self->start();
}

void QAudioEngine_Stop(QAudioEngine* self) {
	self->stop();
}

void QAudioEngine_Pause(QAudioEngine* self) {
	self->pause();
}

void QAudioEngine_Resume(QAudioEngine* self) {
	self->resume();
}

libqt_string QAudioEngine_Tr2(const char* s, const char* c) {
	QString _ret = QAudioEngine::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAudioEngine_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioEngine::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAudioEngine_Delete(QAudioEngine* self) {
    delete self;
}

