#include <QAudioEngine>
#include <QObject>
#include <QQuaternion>
#include <QSpatialSound>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVector3D>
#include <qspatialsound.h>
#include "libqspatialsound.h"
#include "libqspatialsound.hxx"

QSpatialSound* QSpatialSound_new(QAudioEngine* engine) {
	 return new QSpatialSound(engine);
}

libqt_string QSpatialSound_Tr(const char* s) {
	QString _ret = QSpatialSound::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSpatialSound_SetSource(QSpatialSound* self, const QUrl* url) {
	self->setSource(*url);
}

QUrl* QSpatialSound_Source(const QSpatialSound* self) {
	return new QUrl(self->source());
}

int QSpatialSound_Loops(const QSpatialSound* self) {
	return self->loops();
}

void QSpatialSound_SetLoops(QSpatialSound* self, int loops) {
	self->setLoops(loops);
}

bool QSpatialSound_AutoPlay(const QSpatialSound* self) {
	return self->autoPlay();
}

void QSpatialSound_SetAutoPlay(QSpatialSound* self, bool autoPlay) {
	self->setAutoPlay(autoPlay);
}

void QSpatialSound_SetPosition(QSpatialSound* self, QVector3D* pos) {
	self->setPosition(*pos);
}

QVector3D* QSpatialSound_Position(const QSpatialSound* self) {
	return new QVector3D(self->position());
}

void QSpatialSound_SetRotation(QSpatialSound* self, const QQuaternion* q) {
	self->setRotation(*q);
}

QQuaternion* QSpatialSound_Rotation(const QSpatialSound* self) {
	return new QQuaternion(self->rotation());
}

void QSpatialSound_SetVolume(QSpatialSound* self, float volume) {
	self->setVolume(volume);
}

float QSpatialSound_Volume(const QSpatialSound* self) {
	return self->volume();
}

void QSpatialSound_SetDistanceModel(QSpatialSound* self, int model) {
	self->setDistanceModel(static_cast<QSpatialSound::DistanceModel>(model));
}

int QSpatialSound_DistanceModel(const QSpatialSound* self) {
	return self->distanceModel();
}

void QSpatialSound_SetSize(QSpatialSound* self, float size) {
	self->setSize(size);
}

float QSpatialSound_Size(const QSpatialSound* self) {
	return self->size();
}

void QSpatialSound_SetDistanceCutoff(QSpatialSound* self, float cutoff) {
	self->setDistanceCutoff(cutoff);
}

float QSpatialSound_DistanceCutoff(const QSpatialSound* self) {
	return self->distanceCutoff();
}

void QSpatialSound_SetManualAttenuation(QSpatialSound* self, float attenuation) {
	self->setManualAttenuation(attenuation);
}

float QSpatialSound_ManualAttenuation(const QSpatialSound* self) {
	return self->manualAttenuation();
}

void QSpatialSound_SetOcclusionIntensity(QSpatialSound* self, float occlusion) {
	self->setOcclusionIntensity(occlusion);
}

float QSpatialSound_OcclusionIntensity(const QSpatialSound* self) {
	return self->occlusionIntensity();
}

void QSpatialSound_SetDirectivity(QSpatialSound* self, float alpha) {
	self->setDirectivity(alpha);
}

float QSpatialSound_Directivity(const QSpatialSound* self) {
	return self->directivity();
}

void QSpatialSound_SetDirectivityOrder(QSpatialSound* self, float alpha) {
	self->setDirectivityOrder(alpha);
}

float QSpatialSound_DirectivityOrder(const QSpatialSound* self) {
	return self->directivityOrder();
}

void QSpatialSound_SetNearFieldGain(QSpatialSound* self, float gain) {
	self->setNearFieldGain(gain);
}

float QSpatialSound_NearFieldGain(const QSpatialSound* self) {
	return self->nearFieldGain();
}

QAudioEngine* QSpatialSound_Engine(const QSpatialSound* self) {
	return self->engine();
}

void QSpatialSound_SourceChanged(QSpatialSound* self) {
	self->sourceChanged();
}

void QSpatialSound_Connect_SourceChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::sourceChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_LoopsChanged(QSpatialSound* self) {
	self->loopsChanged();
}

void QSpatialSound_Connect_LoopsChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::loopsChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_AutoPlayChanged(QSpatialSound* self) {
	self->autoPlayChanged();
}

void QSpatialSound_Connect_AutoPlayChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::autoPlayChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_PositionChanged(QSpatialSound* self) {
	self->positionChanged();
}

void QSpatialSound_Connect_PositionChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::positionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_RotationChanged(QSpatialSound* self) {
	self->rotationChanged();
}

void QSpatialSound_Connect_RotationChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::rotationChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_VolumeChanged(QSpatialSound* self) {
	self->volumeChanged();
}

void QSpatialSound_Connect_VolumeChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::volumeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_DistanceModelChanged(QSpatialSound* self) {
	self->distanceModelChanged();
}

void QSpatialSound_Connect_DistanceModelChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::distanceModelChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_SizeChanged(QSpatialSound* self) {
	self->sizeChanged();
}

void QSpatialSound_Connect_SizeChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::sizeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_DistanceCutoffChanged(QSpatialSound* self) {
	self->distanceCutoffChanged();
}

void QSpatialSound_Connect_DistanceCutoffChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::distanceCutoffChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_ManualAttenuationChanged(QSpatialSound* self) {
	self->manualAttenuationChanged();
}

void QSpatialSound_Connect_ManualAttenuationChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::manualAttenuationChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_OcclusionIntensityChanged(QSpatialSound* self) {
	self->occlusionIntensityChanged();
}

void QSpatialSound_Connect_OcclusionIntensityChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::occlusionIntensityChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_DirectivityChanged(QSpatialSound* self) {
	self->directivityChanged();
}

void QSpatialSound_Connect_DirectivityChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::directivityChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_DirectivityOrderChanged(QSpatialSound* self) {
	self->directivityOrderChanged();
}

void QSpatialSound_Connect_DirectivityOrderChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::directivityOrderChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_NearFieldGainChanged(QSpatialSound* self) {
	self->nearFieldGainChanged();
}

void QSpatialSound_Connect_NearFieldGainChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::nearFieldGainChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QSpatialSound_Play(QSpatialSound* self) {
	self->play();
}

void QSpatialSound_Pause(QSpatialSound* self) {
	self->pause();
}

void QSpatialSound_Stop(QSpatialSound* self) {
	self->stop();
}

libqt_string QSpatialSound_Tr2(const char* s, const char* c) {
	QString _ret = QSpatialSound::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSpatialSound_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSpatialSound::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSpatialSound_Delete(QSpatialSound* self) {
    delete self;
}

