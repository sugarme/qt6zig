#include <QAudioEngine>
#include <QAudioRoom>
#include <QObject>
#include <QQuaternion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVector3D>
#include <qaudioroom.h>
#include "libqaudioroom.h"
#include "libqaudioroom.hxx"

QAudioRoom* QAudioRoom_new(QAudioEngine* engine) {
	 return new QAudioRoom(engine);
}

libqt_string QAudioRoom_Tr(const char* s) {
	QString _ret = QAudioRoom::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAudioRoom_SetPosition(QAudioRoom* self, QVector3D* pos) {
	self->setPosition(*pos);
}

QVector3D* QAudioRoom_Position(const QAudioRoom* self) {
	return new QVector3D(self->position());
}

void QAudioRoom_SetDimensions(QAudioRoom* self, QVector3D* dim) {
	self->setDimensions(*dim);
}

QVector3D* QAudioRoom_Dimensions(const QAudioRoom* self) {
	return new QVector3D(self->dimensions());
}

void QAudioRoom_SetRotation(QAudioRoom* self, const QQuaternion* q) {
	self->setRotation(*q);
}

QQuaternion* QAudioRoom_Rotation(const QAudioRoom* self) {
	return new QQuaternion(self->rotation());
}

void QAudioRoom_SetWallMaterial(QAudioRoom* self, int wall, int material) {
	self->setWallMaterial(static_cast<QAudioRoom::Wall>(wall), static_cast<QAudioRoom::Material>(material));
}

int QAudioRoom_WallMaterial(const QAudioRoom* self, int wall) {
	return self->wallMaterial(static_cast<QAudioRoom::Wall>(wall));
}

void QAudioRoom_SetReflectionGain(QAudioRoom* self, float factor) {
	self->setReflectionGain(factor);
}

float QAudioRoom_ReflectionGain(const QAudioRoom* self) {
	return self->reflectionGain();
}

void QAudioRoom_SetReverbGain(QAudioRoom* self, float factor) {
	self->setReverbGain(factor);
}

float QAudioRoom_ReverbGain(const QAudioRoom* self) {
	return self->reverbGain();
}

void QAudioRoom_SetReverbTime(QAudioRoom* self, float factor) {
	self->setReverbTime(factor);
}

float QAudioRoom_ReverbTime(const QAudioRoom* self) {
	return self->reverbTime();
}

void QAudioRoom_SetReverbBrightness(QAudioRoom* self, float factor) {
	self->setReverbBrightness(factor);
}

float QAudioRoom_ReverbBrightness(const QAudioRoom* self) {
	return self->reverbBrightness();
}

void QAudioRoom_PositionChanged(QAudioRoom* self) {
	self->positionChanged();
}

void QAudioRoom_Connect_PositionChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::positionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioRoom_DimensionsChanged(QAudioRoom* self) {
	self->dimensionsChanged();
}

void QAudioRoom_Connect_DimensionsChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::dimensionsChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioRoom_RotationChanged(QAudioRoom* self) {
	self->rotationChanged();
}

void QAudioRoom_Connect_RotationChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::rotationChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioRoom_WallsChanged(QAudioRoom* self) {
	self->wallsChanged();
}

void QAudioRoom_Connect_WallsChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::wallsChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioRoom_ReflectionGainChanged(QAudioRoom* self) {
	self->reflectionGainChanged();
}

void QAudioRoom_Connect_ReflectionGainChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::reflectionGainChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioRoom_ReverbGainChanged(QAudioRoom* self) {
	self->reverbGainChanged();
}

void QAudioRoom_Connect_ReverbGainChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::reverbGainChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioRoom_ReverbTimeChanged(QAudioRoom* self) {
	self->reverbTimeChanged();
}

void QAudioRoom_Connect_ReverbTimeChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::reverbTimeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioRoom_ReverbBrightnessChanged(QAudioRoom* self) {
	self->reverbBrightnessChanged();
}

void QAudioRoom_Connect_ReverbBrightnessChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::reverbBrightnessChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QAudioRoom_Tr2(const char* s, const char* c) {
	QString _ret = QAudioRoom::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAudioRoom_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioRoom::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAudioRoom_Delete(QAudioRoom* self) {
    delete self;
}

