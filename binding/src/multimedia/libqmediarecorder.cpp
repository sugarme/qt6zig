#include <QIODevice>
#include <QMediaCaptureSession>
#include <QMediaFormat>
#include <QMediaMetaData>
#include <QMediaRecorder>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qmediarecorder.h>
#include "libqmediarecorder.h"
#include "libqmediarecorder.hxx"

QMediaRecorder* QMediaRecorder_new() {
	 return new QMediaRecorder();
}

QMediaRecorder* QMediaRecorder_new2(QObject* parent) {
	 return new QMediaRecorder(parent);
}

libqt_string QMediaRecorder_Tr(const char* s) {
	QString _ret = QMediaRecorder::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QMediaRecorder_IsAvailable(const QMediaRecorder* self) {
	return self->isAvailable();
}

QUrl* QMediaRecorder_OutputLocation(const QMediaRecorder* self) {
	return new QUrl(self->outputLocation());
}

void QMediaRecorder_SetOutputLocation(QMediaRecorder* self, const QUrl* location) {
	self->setOutputLocation(*location);
}

void QMediaRecorder_SetOutputDevice(QMediaRecorder* self, QIODevice* device) {
	self->setOutputDevice(device);
}

QIODevice* QMediaRecorder_OutputDevice(const QMediaRecorder* self) {
	return self->outputDevice();
}

QUrl* QMediaRecorder_ActualLocation(const QMediaRecorder* self) {
	return new QUrl(self->actualLocation());
}

int QMediaRecorder_RecorderState(const QMediaRecorder* self) {
	return self->recorderState();
}

int QMediaRecorder_Error(const QMediaRecorder* self) {
	return self->error();
}

libqt_string QMediaRecorder_ErrorString(const QMediaRecorder* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

long long QMediaRecorder_Duration(const QMediaRecorder* self) {
	return self->duration();
}

QMediaFormat* QMediaRecorder_MediaFormat(const QMediaRecorder* self) {
	return new QMediaFormat(self->mediaFormat());
}

void QMediaRecorder_SetMediaFormat(QMediaRecorder* self, const QMediaFormat* format) {
	self->setMediaFormat(*format);
}

int QMediaRecorder_EncodingMode(const QMediaRecorder* self) {
	return self->encodingMode();
}

void QMediaRecorder_SetEncodingMode(QMediaRecorder* self, int encodingMode) {
	self->setEncodingMode(static_cast<QMediaRecorder::EncodingMode>(encodingMode));
}

int QMediaRecorder_Quality(const QMediaRecorder* self) {
	return self->quality();
}

void QMediaRecorder_SetQuality(QMediaRecorder* self, int quality) {
	self->setQuality(static_cast<QMediaRecorder::Quality>(quality));
}

QSize* QMediaRecorder_VideoResolution(const QMediaRecorder* self) {
	return new QSize(self->videoResolution());
}

void QMediaRecorder_SetVideoResolution(QMediaRecorder* self, const QSize* videoResolution) {
	self->setVideoResolution(*videoResolution);
}

void QMediaRecorder_SetVideoResolution2(QMediaRecorder* self, int width, int height) {
	self->setVideoResolution(width, height);
}

double QMediaRecorder_VideoFrameRate(const QMediaRecorder* self) {
	return self->videoFrameRate();
}

void QMediaRecorder_SetVideoFrameRate(QMediaRecorder* self, double frameRate) {
	self->setVideoFrameRate(frameRate);
}

int QMediaRecorder_VideoBitRate(const QMediaRecorder* self) {
	return self->videoBitRate();
}

void QMediaRecorder_SetVideoBitRate(QMediaRecorder* self, int bitRate) {
	self->setVideoBitRate(bitRate);
}

int QMediaRecorder_AudioBitRate(const QMediaRecorder* self) {
	return self->audioBitRate();
}

void QMediaRecorder_SetAudioBitRate(QMediaRecorder* self, int bitRate) {
	self->setAudioBitRate(bitRate);
}

int QMediaRecorder_AudioChannelCount(const QMediaRecorder* self) {
	return self->audioChannelCount();
}

void QMediaRecorder_SetAudioChannelCount(QMediaRecorder* self, int channels) {
	self->setAudioChannelCount(channels);
}

int QMediaRecorder_AudioSampleRate(const QMediaRecorder* self) {
	return self->audioSampleRate();
}

void QMediaRecorder_SetAudioSampleRate(QMediaRecorder* self, int sampleRate) {
	self->setAudioSampleRate(sampleRate);
}

QMediaMetaData* QMediaRecorder_MetaData(const QMediaRecorder* self) {
	return new QMediaMetaData(self->metaData());
}

void QMediaRecorder_SetMetaData(QMediaRecorder* self, const QMediaMetaData* metaData) {
	self->setMetaData(*metaData);
}

void QMediaRecorder_AddMetaData(QMediaRecorder* self, const QMediaMetaData* metaData) {
	self->addMetaData(*metaData);
}

bool QMediaRecorder_AutoStop(const QMediaRecorder* self) {
	return self->autoStop();
}

void QMediaRecorder_SetAutoStop(QMediaRecorder* self, bool autoStop) {
	self->setAutoStop(autoStop);
}

QMediaCaptureSession* QMediaRecorder_CaptureSession(const QMediaRecorder* self) {
	return self->captureSession();
}

QPlatformMediaRecorder* QMediaRecorder_PlatformRecoder(const QMediaRecorder* self) {
	return self->platformRecoder();
}

void QMediaRecorder_Record(QMediaRecorder* self) {
	self->record();
}

void QMediaRecorder_Pause(QMediaRecorder* self) {
	self->pause();
}

void QMediaRecorder_Stop(QMediaRecorder* self) {
	self->stop();
}

void QMediaRecorder_RecorderStateChanged(QMediaRecorder* self, int state) {
	self->recorderStateChanged(static_cast<QMediaRecorder::RecorderState>(state));
}

void QMediaRecorder_Connect_RecorderStateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*, int) = reinterpret_cast<void (*)(QMediaRecorder*, int)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::recorderStateChanged, [self, slotFunc](RecorderState state) {
	slotFunc(self, state);
    });
}

void QMediaRecorder_DurationChanged(QMediaRecorder* self, long long duration) {
	self->durationChanged(duration);
}

void QMediaRecorder_Connect_DurationChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*, long long) = reinterpret_cast<void (*)(QMediaRecorder*, long long)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::durationChanged, [self, slotFunc](qint64 duration) {
	slotFunc(self, duration);
    });
}

void QMediaRecorder_ActualLocationChanged(QMediaRecorder* self, const QUrl* location) {
	self->actualLocationChanged(*location);
}

void QMediaRecorder_Connect_ActualLocationChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*, const QUrl*) = reinterpret_cast<void (*)(QMediaRecorder*, const QUrl*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::actualLocationChanged, [self, slotFunc](const QUrl& location) {
	slotFunc(self, location);
    });
}

void QMediaRecorder_EncoderSettingsChanged(QMediaRecorder* self) {
	self->encoderSettingsChanged();
}

void QMediaRecorder_Connect_EncoderSettingsChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::encoderSettingsChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_ErrorOccurred(QMediaRecorder* self, int errorVal, const libqt_string errorString) {
	self->errorOccurred(static_cast<QWindowCapture::Error>(errorVal), QString::fromUtf8(errorString.data, errorString.len));
}

void QMediaRecorder_Connect_ErrorOccurred(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*, int, const char*) = reinterpret_cast<void (*)(QMediaRecorder*, int, const char*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::errorOccurred, [self, slotFunc](Error errorVal, const QString& errorString) {
	slotFunc(self, errorVal, errorString);
    });
}

void QMediaRecorder_ErrorChanged(QMediaRecorder* self) {
	self->errorChanged();
}

void QMediaRecorder_Connect_ErrorChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::errorChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_MetaDataChanged(QMediaRecorder* self) {
	self->metaDataChanged();
}

void QMediaRecorder_Connect_MetaDataChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::metaDataChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_MediaFormatChanged(QMediaRecorder* self) {
	self->mediaFormatChanged();
}

void QMediaRecorder_Connect_MediaFormatChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::mediaFormatChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_EncodingModeChanged(QMediaRecorder* self) {
	self->encodingModeChanged();
}

void QMediaRecorder_Connect_EncodingModeChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::encodingModeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_QualityChanged(QMediaRecorder* self) {
	self->qualityChanged();
}

void QMediaRecorder_Connect_QualityChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::qualityChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_VideoResolutionChanged(QMediaRecorder* self) {
	self->videoResolutionChanged();
}

void QMediaRecorder_Connect_VideoResolutionChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::videoResolutionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_VideoFrameRateChanged(QMediaRecorder* self) {
	self->videoFrameRateChanged();
}

void QMediaRecorder_Connect_VideoFrameRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::videoFrameRateChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_VideoBitRateChanged(QMediaRecorder* self) {
	self->videoBitRateChanged();
}

void QMediaRecorder_Connect_VideoBitRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::videoBitRateChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_AudioBitRateChanged(QMediaRecorder* self) {
	self->audioBitRateChanged();
}

void QMediaRecorder_Connect_AudioBitRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::audioBitRateChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_AudioChannelCountChanged(QMediaRecorder* self) {
	self->audioChannelCountChanged();
}

void QMediaRecorder_Connect_AudioChannelCountChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::audioChannelCountChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_AudioSampleRateChanged(QMediaRecorder* self) {
	self->audioSampleRateChanged();
}

void QMediaRecorder_Connect_AudioSampleRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::audioSampleRateChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaRecorder_AutoStopChanged(QMediaRecorder* self) {
	self->autoStopChanged();
}

void QMediaRecorder_Connect_AutoStopChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::autoStopChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QMediaRecorder_Tr2(const char* s, const char* c) {
	QString _ret = QMediaRecorder::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMediaRecorder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaRecorder::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMediaRecorder_Delete(QMediaRecorder* self) {
    delete self;
}

