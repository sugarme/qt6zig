#include <QAudioDevice>
#include <QObject>
#include <QSoundEffect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qsoundeffect.h>
#include "libqsoundeffect.h"
#include "libqsoundeffect.hxx"

QSoundEffect* QSoundEffect_new() {
	 return new QSoundEffect();
}

QSoundEffect* QSoundEffect_new2(const QAudioDevice* audioDevice) {
	 return new QSoundEffect(*audioDevice);
}

QSoundEffect* QSoundEffect_new3(QObject* parent) {
	 return new QSoundEffect(parent);
}

QSoundEffect* QSoundEffect_new4(const QAudioDevice* audioDevice, QObject* parent) {
	 return new QSoundEffect(*audioDevice, parent);
}

libqt_string QSoundEffect_Tr(const char* s) {
	QString _ret = QSoundEffect::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QSoundEffect_SupportedMimeTypes() {
	return QSoundEffect::supportedMimeTypes();
}

QUrl* QSoundEffect_Source(const QSoundEffect* self) {
	return new QUrl(self->source());
}

void QSoundEffect_SetSource(QSoundEffect* self, const QUrl* url) {
	self->setSource(*url);
}

int QSoundEffect_LoopCount(const QSoundEffect* self) {
	return self->loopCount();
}

int QSoundEffect_LoopsRemaining(const QSoundEffect* self) {
	return self->loopsRemaining();
}

void QSoundEffect_SetLoopCount(QSoundEffect* self, int loopCount) {
	self->setLoopCount(loopCount);
}

QAudioDevice* QSoundEffect_AudioDevice(QSoundEffect* self) {
	return new QAudioDevice(self->audioDevice());
}

void QSoundEffect_SetAudioDevice(QSoundEffect* self, const QAudioDevice* device) {
	self->setAudioDevice(*device);
}

float QSoundEffect_Volume(const QSoundEffect* self) {
	return self->volume();
}

void QSoundEffect_SetVolume(QSoundEffect* self, float volume) {
	self->setVolume(volume);
}

bool QSoundEffect_IsMuted(const QSoundEffect* self) {
	return self->isMuted();
}

void QSoundEffect_SetMuted(QSoundEffect* self, bool muted) {
	self->setMuted(muted);
}

bool QSoundEffect_IsLoaded(const QSoundEffect* self) {
	return self->isLoaded();
}

bool QSoundEffect_IsPlaying(const QSoundEffect* self) {
	return self->isPlaying();
}

int QSoundEffect_Status(const QSoundEffect* self) {
	return self->status();
}

void QSoundEffect_SourceChanged(QSoundEffect* self) {
	self->sourceChanged();
}

void QSoundEffect_Connect_SourceChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::sourceChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSoundEffect_LoopCountChanged(QSoundEffect* self) {
	self->loopCountChanged();
}

void QSoundEffect_Connect_LoopCountChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::loopCountChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSoundEffect_LoopsRemainingChanged(QSoundEffect* self) {
	self->loopsRemainingChanged();
}

void QSoundEffect_Connect_LoopsRemainingChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::loopsRemainingChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSoundEffect_VolumeChanged(QSoundEffect* self) {
	self->volumeChanged();
}

void QSoundEffect_Connect_VolumeChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::volumeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSoundEffect_MutedChanged(QSoundEffect* self) {
	self->mutedChanged();
}

void QSoundEffect_Connect_MutedChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::mutedChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSoundEffect_LoadedChanged(QSoundEffect* self) {
	self->loadedChanged();
}

void QSoundEffect_Connect_LoadedChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::loadedChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSoundEffect_PlayingChanged(QSoundEffect* self) {
	self->playingChanged();
}

void QSoundEffect_Connect_PlayingChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::playingChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSoundEffect_StatusChanged(QSoundEffect* self) {
	self->statusChanged();
}

void QSoundEffect_Connect_StatusChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::statusChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSoundEffect_AudioDeviceChanged(QSoundEffect* self) {
	self->audioDeviceChanged();
}

void QSoundEffect_Connect_AudioDeviceChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::audioDeviceChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSoundEffect_Play(QSoundEffect* self) {
	self->play();
}

void QSoundEffect_Stop(QSoundEffect* self) {
	self->stop();
}

libqt_string QSoundEffect_Tr2(const char* s, const char* c) {
	QString _ret = QSoundEffect::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSoundEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSoundEffect::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSoundEffect_Delete(QSoundEffect* self) {
    delete self;
}

