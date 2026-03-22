#include <QAudioDevice>
#include <QAudioFormat>
#include <QByteArray>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiodevice.h>
#include "libqaudiodevice.h"
#include "libqaudiodevice.hxx"

QAudioDevice* QAudioDevice_new() {
	 return new QAudioDevice();
}

QAudioDevice* QAudioDevice_new2(const QAudioDevice* other) {
	 return new QAudioDevice(*other);
}

void QAudioDevice_Swap(QAudioDevice* self, QAudioDevice* other) {
	self->swap(*other);
}

void QAudioDevice_OperatorAssign(QAudioDevice* self, const QAudioDevice* other) {
	self->operator=(*other);
}

bool QAudioDevice_OperatorEqual(const QAudioDevice* self, const QAudioDevice* other) {
	return self->operator==(*other);
}

bool QAudioDevice_OperatorNotEqual(const QAudioDevice* self, const QAudioDevice* other) {
	return self->operator!=(*other);
}

bool QAudioDevice_IsNull(const QAudioDevice* self) {
	return self->isNull();
}

libqt_string QAudioDevice_Id(const QAudioDevice* self) {
	QByteArray _qb = self->id();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAudioDevice_Description(const QAudioDevice* self) {
	QString _ret = self->description();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QAudioDevice_IsDefault(const QAudioDevice* self) {
	return self->isDefault();
}

int QAudioDevice_Mode(const QAudioDevice* self) {
	return self->mode();
}

bool QAudioDevice_IsFormatSupported(const QAudioDevice* self, const QAudioFormat* format) {
	return self->isFormatSupported(*format);
}

QAudioFormat* QAudioDevice_PreferredFormat(const QAudioDevice* self) {
	return new QAudioFormat(self->preferredFormat());
}

int QAudioDevice_MinimumSampleRate(const QAudioDevice* self) {
	return self->minimumSampleRate();
}

int QAudioDevice_MaximumSampleRate(const QAudioDevice* self) {
	return self->maximumSampleRate();
}

int QAudioDevice_MinimumChannelCount(const QAudioDevice* self) {
	return self->minimumChannelCount();
}

int QAudioDevice_MaximumChannelCount(const QAudioDevice* self) {
	return self->maximumChannelCount();
}

libqt_list QAudioDevice_SupportedSampleFormats(const QAudioDevice* self) {
	return self->supportedSampleFormats();
}

quint32 QAudioDevice_ChannelConfiguration(const QAudioDevice* self) {
	return self->channelConfiguration();
}

const QAudioDevicePrivate* QAudioDevice_Handle(const QAudioDevice* self) {
	return self->handle();
}

void QAudioDevice_Delete(QAudioDevice* self) {
    delete self;
}

