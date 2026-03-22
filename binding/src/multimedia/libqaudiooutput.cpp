#include <QAudioDevice>
#include <QAudioOutput>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiooutput.h>
#include "libqaudiooutput.h"
#include "libqaudiooutput.hxx"

QAudioOutput* QAudioOutput_new() {
	 return new QAudioOutput();
}

QAudioOutput* QAudioOutput_new2(const QAudioDevice* device) {
	 return new QAudioOutput(*device);
}

QAudioOutput* QAudioOutput_new3(QObject* parent) {
	 return new QAudioOutput(parent);
}

QAudioOutput* QAudioOutput_new4(const QAudioDevice* device, QObject* parent) {
	 return new QAudioOutput(*device, parent);
}

libqt_string QAudioOutput_Tr(const char* s) {
	QString _ret = QAudioOutput::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAudioDevice* QAudioOutput_Device(const QAudioOutput* self) {
	return new QAudioDevice(self->device());
}

float QAudioOutput_Volume(const QAudioOutput* self) {
	return self->volume();
}

bool QAudioOutput_IsMuted(const QAudioOutput* self) {
	return self->isMuted();
}

void QAudioOutput_SetDevice(QAudioOutput* self, const QAudioDevice* device) {
	self->setDevice(*device);
}

void QAudioOutput_SetVolume(QAudioOutput* self, float volume) {
	self->setVolume(volume);
}

void QAudioOutput_SetMuted(QAudioOutput* self, bool muted) {
	self->setMuted(muted);
}

void QAudioOutput_DeviceChanged(QAudioOutput* self) {
	self->deviceChanged();
}

void QAudioOutput_Connect_DeviceChanged(QAudioOutput* self, intptr_t slot) {
    void (*slotFunc)(QAudioOutput*) = reinterpret_cast<void (*)(QAudioOutput*)>(slot);
    QAudioOutput::connect(self, &QAudioOutput::deviceChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioOutput_VolumeChanged(QAudioOutput* self, float volume) {
	self->volumeChanged(volume);
}

void QAudioOutput_Connect_VolumeChanged(QAudioOutput* self, intptr_t slot) {
    void (*slotFunc)(QAudioOutput*, float) = reinterpret_cast<void (*)(QAudioOutput*, float)>(slot);
    QAudioOutput::connect(self, &QAudioOutput::volumeChanged, [self, slotFunc](float volume) {
	slotFunc(self, volume);
    });
}

void QAudioOutput_MutedChanged(QAudioOutput* self, bool muted) {
	self->mutedChanged(muted);
}

void QAudioOutput_Connect_MutedChanged(QAudioOutput* self, intptr_t slot) {
    void (*slotFunc)(QAudioOutput*, bool) = reinterpret_cast<void (*)(QAudioOutput*, bool)>(slot);
    QAudioOutput::connect(self, &QAudioOutput::mutedChanged, [self, slotFunc](bool muted) {
	slotFunc(self, muted);
    });
}

libqt_string QAudioOutput_Tr2(const char* s, const char* c) {
	QString _ret = QAudioOutput::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAudioOutput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioOutput::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAudioOutput_Delete(QAudioOutput* self) {
    delete self;
}

