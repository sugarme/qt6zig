#include <QAudioDevice>
#include <QAudioInput>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qaudioinput.h>
#include "libqaudioinput.h"
#include "libqaudioinput.hxx"

QAudioInput* QAudioInput_new() {
	 return new QAudioInput();
}

QAudioInput* QAudioInput_new2(const QAudioDevice* deviceInfo) {
	 return new QAudioInput(*deviceInfo);
}

QAudioInput* QAudioInput_new3(QObject* parent) {
	 return new QAudioInput(parent);
}

QAudioInput* QAudioInput_new4(const QAudioDevice* deviceInfo, QObject* parent) {
	 return new QAudioInput(*deviceInfo, parent);
}

libqt_string QAudioInput_Tr(const char* s) {
	QString _ret = QAudioInput::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAudioDevice* QAudioInput_Device(const QAudioInput* self) {
	return new QAudioDevice(self->device());
}

float QAudioInput_Volume(const QAudioInput* self) {
	return self->volume();
}

bool QAudioInput_IsMuted(const QAudioInput* self) {
	return self->isMuted();
}

void QAudioInput_SetDevice(QAudioInput* self, const QAudioDevice* device) {
	self->setDevice(*device);
}

void QAudioInput_SetVolume(QAudioInput* self, float volume) {
	self->setVolume(volume);
}

void QAudioInput_SetMuted(QAudioInput* self, bool muted) {
	self->setMuted(muted);
}

void QAudioInput_DeviceChanged(QAudioInput* self) {
	self->deviceChanged();
}

void QAudioInput_Connect_DeviceChanged(QAudioInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioInput*) = reinterpret_cast<void (*)(QAudioInput*)>(slot);
    QAudioInput::connect(self, &QAudioInput::deviceChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAudioInput_VolumeChanged(QAudioInput* self, float volume) {
	self->volumeChanged(volume);
}

void QAudioInput_Connect_VolumeChanged(QAudioInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioInput*, float) = reinterpret_cast<void (*)(QAudioInput*, float)>(slot);
    QAudioInput::connect(self, &QAudioInput::volumeChanged, [self, slotFunc](float volume) {
	slotFunc(self, volume);
    });
}

void QAudioInput_MutedChanged(QAudioInput* self, bool muted) {
	self->mutedChanged(muted);
}

void QAudioInput_Connect_MutedChanged(QAudioInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioInput*, bool) = reinterpret_cast<void (*)(QAudioInput*, bool)>(slot);
    QAudioInput::connect(self, &QAudioInput::mutedChanged, [self, slotFunc](bool muted) {
	slotFunc(self, muted);
    });
}

libqt_string QAudioInput_Tr2(const char* s, const char* c) {
	QString _ret = QAudioInput::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAudioInput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioInput::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAudioInput_Delete(QAudioInput* self) {
    delete self;
}

