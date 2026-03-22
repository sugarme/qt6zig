#include <QAudioEngine>
#include <QAudioListener>
#include <QObject>
#include <QQuaternion>
#include <QVector3D>
#include <qaudiolistener.h>
#include "libqaudiolistener.h"
#include "libqaudiolistener.hxx"

QAudioListener* QAudioListener_new(QAudioEngine* engine) {
	 return new QAudioListener(engine);
}

void QAudioListener_SetPosition(QAudioListener* self, QVector3D* pos) {
	self->setPosition(*pos);
}

QVector3D* QAudioListener_Position(const QAudioListener* self) {
	return new QVector3D(self->position());
}

void QAudioListener_SetRotation(QAudioListener* self, const QQuaternion* q) {
	self->setRotation(*q);
}

QQuaternion* QAudioListener_Rotation(const QAudioListener* self) {
	return new QQuaternion(self->rotation());
}

QAudioEngine* QAudioListener_Engine(const QAudioListener* self) {
	return self->engine();
}

void QAudioListener_Delete(QAudioListener* self) {
    delete self;
}

