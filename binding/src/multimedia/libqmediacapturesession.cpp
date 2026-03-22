#include <QAudioBufferInput>
#include <QAudioInput>
#include <QAudioOutput>
#include <QCamera>
#include <QImageCapture>
#include <QMediaCaptureSession>
#include <QMediaRecorder>
#include <QObject>
#include <QScreenCapture>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVideoFrameInput>
#include <QVideoSink>
#include <QWindowCapture>
#include <qmediacapturesession.h>
#include "libqmediacapturesession.h"
#include "libqmediacapturesession.hxx"

QMediaCaptureSession* QMediaCaptureSession_new() {
	 return new QMediaCaptureSession();
}

QMediaCaptureSession* QMediaCaptureSession_new2(QObject* parent) {
	 return new QMediaCaptureSession(parent);
}

libqt_string QMediaCaptureSession_Tr(const char* s) {
	QString _ret = QMediaCaptureSession::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAudioInput* QMediaCaptureSession_AudioInput(const QMediaCaptureSession* self) {
	return self->audioInput();
}

void QMediaCaptureSession_SetAudioInput(QMediaCaptureSession* self, QAudioInput* input) {
	self->setAudioInput(input);
}

QAudioBufferInput* QMediaCaptureSession_AudioBufferInput(const QMediaCaptureSession* self) {
	return self->audioBufferInput();
}

void QMediaCaptureSession_SetAudioBufferInput(QMediaCaptureSession* self, QAudioBufferInput* input) {
	self->setAudioBufferInput(input);
}

QCamera* QMediaCaptureSession_Camera(const QMediaCaptureSession* self) {
	return self->camera();
}

void QMediaCaptureSession_SetCamera(QMediaCaptureSession* self, QCamera* camera) {
	self->setCamera(camera);
}

QImageCapture* QMediaCaptureSession_ImageCapture(QMediaCaptureSession* self) {
	return self->imageCapture();
}

void QMediaCaptureSession_SetImageCapture(QMediaCaptureSession* self, QImageCapture* imageCapture) {
	self->setImageCapture(imageCapture);
}

QScreenCapture* QMediaCaptureSession_ScreenCapture(QMediaCaptureSession* self) {
	return self->screenCapture();
}

void QMediaCaptureSession_SetScreenCapture(QMediaCaptureSession* self, QScreenCapture* screenCapture) {
	self->setScreenCapture(screenCapture);
}

QWindowCapture* QMediaCaptureSession_WindowCapture(QMediaCaptureSession* self) {
	return self->windowCapture();
}

void QMediaCaptureSession_SetWindowCapture(QMediaCaptureSession* self, QWindowCapture* windowCapture) {
	self->setWindowCapture(windowCapture);
}

QVideoFrameInput* QMediaCaptureSession_VideoFrameInput(const QMediaCaptureSession* self) {
	return self->videoFrameInput();
}

void QMediaCaptureSession_SetVideoFrameInput(QMediaCaptureSession* self, QVideoFrameInput* input) {
	self->setVideoFrameInput(input);
}

QMediaRecorder* QMediaCaptureSession_Recorder(QMediaCaptureSession* self) {
	return self->recorder();
}

void QMediaCaptureSession_SetRecorder(QMediaCaptureSession* self, QMediaRecorder* recorder) {
	self->setRecorder(recorder);
}

void QMediaCaptureSession_SetVideoOutput(QMediaCaptureSession* self, QObject* output) {
	self->setVideoOutput(output);
}

QObject* QMediaCaptureSession_VideoOutput(const QMediaCaptureSession* self) {
	return self->videoOutput();
}

void QMediaCaptureSession_SetVideoSink(QMediaCaptureSession* self, QVideoSink* sink) {
	self->setVideoSink(sink);
}

QVideoSink* QMediaCaptureSession_VideoSink(const QMediaCaptureSession* self) {
	return self->videoSink();
}

void QMediaCaptureSession_SetAudioOutput(QMediaCaptureSession* self, QAudioOutput* output) {
	self->setAudioOutput(output);
}

QAudioOutput* QMediaCaptureSession_AudioOutput(const QMediaCaptureSession* self) {
	return self->audioOutput();
}

void QMediaCaptureSession_AudioInputChanged(QMediaCaptureSession* self) {
	self->audioInputChanged();
}

void QMediaCaptureSession_Connect_AudioInputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::audioInputChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaCaptureSession_AudioBufferInputChanged(QMediaCaptureSession* self) {
	self->audioBufferInputChanged();
}

void QMediaCaptureSession_Connect_AudioBufferInputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::audioBufferInputChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaCaptureSession_CameraChanged(QMediaCaptureSession* self) {
	self->cameraChanged();
}

void QMediaCaptureSession_Connect_CameraChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::cameraChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaCaptureSession_ScreenCaptureChanged(QMediaCaptureSession* self) {
	self->screenCaptureChanged();
}

void QMediaCaptureSession_Connect_ScreenCaptureChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::screenCaptureChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaCaptureSession_WindowCaptureChanged(QMediaCaptureSession* self) {
	self->windowCaptureChanged();
}

void QMediaCaptureSession_Connect_WindowCaptureChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::windowCaptureChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaCaptureSession_VideoFrameInputChanged(QMediaCaptureSession* self) {
	self->videoFrameInputChanged();
}

void QMediaCaptureSession_Connect_VideoFrameInputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::videoFrameInputChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaCaptureSession_ImageCaptureChanged(QMediaCaptureSession* self) {
	self->imageCaptureChanged();
}

void QMediaCaptureSession_Connect_ImageCaptureChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::imageCaptureChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaCaptureSession_RecorderChanged(QMediaCaptureSession* self) {
	self->recorderChanged();
}

void QMediaCaptureSession_Connect_RecorderChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::recorderChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaCaptureSession_VideoOutputChanged(QMediaCaptureSession* self) {
	self->videoOutputChanged();
}

void QMediaCaptureSession_Connect_VideoOutputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::videoOutputChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaCaptureSession_AudioOutputChanged(QMediaCaptureSession* self) {
	self->audioOutputChanged();
}

void QMediaCaptureSession_Connect_AudioOutputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::audioOutputChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QMediaCaptureSession_Tr2(const char* s, const char* c) {
	QString _ret = QMediaCaptureSession::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMediaCaptureSession_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaCaptureSession::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMediaCaptureSession_Delete(QMediaCaptureSession* self) {
    delete self;
}

