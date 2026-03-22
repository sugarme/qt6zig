#include <QAmbientSound>
#include <QAudioEngine>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <qambientsound.h>
#include "libqambientsound.h"
#include "libqambientsound.hxx"

QAmbientSound* QAmbientSound_new(QAudioEngine* engine) {
	 return new QAmbientSound(engine);
}

libqt_string QAmbientSound_Tr(const char* s) {
	QString _ret = QAmbientSound::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAmbientSound_SetSource(QAmbientSound* self, const QUrl* url) {
	self->setSource(*url);
}

QUrl* QAmbientSound_Source(const QAmbientSound* self) {
	return new QUrl(self->source());
}

int QAmbientSound_Loops(const QAmbientSound* self) {
	return self->loops();
}

void QAmbientSound_SetLoops(QAmbientSound* self, int loops) {
	self->setLoops(loops);
}

bool QAmbientSound_AutoPlay(const QAmbientSound* self) {
	return self->autoPlay();
}

void QAmbientSound_SetAutoPlay(QAmbientSound* self, bool autoPlay) {
	self->setAutoPlay(autoPlay);
}

void QAmbientSound_SetVolume(QAmbientSound* self, float volume) {
	self->setVolume(volume);
}

float QAmbientSound_Volume(const QAmbientSound* self) {
	return self->volume();
}

QAudioEngine* QAmbientSound_Engine(const QAmbientSound* self) {
	return self->engine();
}

void QAmbientSound_SourceChanged(QAmbientSound* self) {
	self->sourceChanged();
}

void QAmbientSound_Connect_SourceChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self, &QAmbientSound::sourceChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAmbientSound_LoopsChanged(QAmbientSound* self) {
	self->loopsChanged();
}

void QAmbientSound_Connect_LoopsChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self, &QAmbientSound::loopsChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAmbientSound_AutoPlayChanged(QAmbientSound* self) {
	self->autoPlayChanged();
}

void QAmbientSound_Connect_AutoPlayChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self, &QAmbientSound::autoPlayChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAmbientSound_VolumeChanged(QAmbientSound* self) {
	self->volumeChanged();
}

void QAmbientSound_Connect_VolumeChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self, &QAmbientSound::volumeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAmbientSound_Play(QAmbientSound* self) {
	self->play();
}

void QAmbientSound_Pause(QAmbientSound* self) {
	self->pause();
}

void QAmbientSound_Stop(QAmbientSound* self) {
	self->stop();
}

libqt_string QAmbientSound_Tr2(const char* s, const char* c) {
	QString _ret = QAmbientSound::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAmbientSound_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAmbientSound::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAmbientSound_Delete(QAmbientSound* self) {
    delete self;
}

