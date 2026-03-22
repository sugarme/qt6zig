#include <QAudioFormat>
#include <qaudioformat.h>
#include "libqaudioformat.h"
#include "libqaudioformat.hxx"

QAudioFormat* QAudioFormat_new(const QAudioFormat* other) {
	 return new QAudioFormat(*other);
}

QAudioFormat* QAudioFormat_new2(QAudioFormat* other) {
	 return new QAudioFormat(*other);
}

QAudioFormat* QAudioFormat_new3() {
	 return new QAudioFormat();
}

QAudioFormat* QAudioFormat_new4(const QAudioFormat* param1) {
	 return new QAudioFormat(*param1);
}

void QAudioFormat_CopyAssign(QAudioFormat* self, QAudioFormat* other) {
    *self = *other;
}

void QAudioFormat_MoveAssign(QAudioFormat* self, QAudioFormat* other) {
    *self = std::move(*other);
}

bool QAudioFormat_IsValid(const QAudioFormat* self) {
	return self->isValid();
}

void QAudioFormat_SetSampleRate(QAudioFormat* self, int sampleRate) {
	self->setSampleRate(sampleRate);
}

int QAudioFormat_SampleRate(const QAudioFormat* self) {
	return self->sampleRate();
}

void QAudioFormat_SetChannelConfig(QAudioFormat* self, quint32 config) {
	self->setChannelConfig(static_cast<QAudioFormat::ChannelConfig>(config));
}

quint32 QAudioFormat_ChannelConfig(const QAudioFormat* self) {
	return self->channelConfig();
}

void QAudioFormat_SetChannelCount(QAudioFormat* self, int channelCount) {
	self->setChannelCount(channelCount);
}

int QAudioFormat_ChannelCount(const QAudioFormat* self) {
	return self->channelCount();
}

int QAudioFormat_ChannelOffset(const QAudioFormat* self, int channel) {
	return self->channelOffset(static_cast<QAudioFormat::AudioChannelPosition>(channel));
}

void QAudioFormat_SetSampleFormat(QAudioFormat* self, quint16 f) {
	self->setSampleFormat(static_cast<QAudioFormat::SampleFormat>(f));
}

quint16 QAudioFormat_SampleFormat(const QAudioFormat* self) {
	return self->sampleFormat();
}

int QAudioFormat_BytesForDuration(const QAudioFormat* self, long long microseconds) {
	return self->bytesForDuration(microseconds);
}

long long QAudioFormat_DurationForBytes(const QAudioFormat* self, int byteCount) {
	return self->durationForBytes(byteCount);
}

int QAudioFormat_BytesForFrames(const QAudioFormat* self, int frameCount) {
	return self->bytesForFrames(frameCount);
}

int QAudioFormat_FramesForBytes(const QAudioFormat* self, int byteCount) {
	return self->framesForBytes(byteCount);
}

int QAudioFormat_FramesForDuration(const QAudioFormat* self, long long microseconds) {
	return self->framesForDuration(microseconds);
}

long long QAudioFormat_DurationForFrames(const QAudioFormat* self, int frameCount) {
	return self->durationForFrames(frameCount);
}

int QAudioFormat_BytesPerFrame(const QAudioFormat* self) {
	return self->bytesPerFrame();
}

int QAudioFormat_BytesPerSample(const QAudioFormat* self) {
	return self->bytesPerSample();
}

float QAudioFormat_NormalizedSampleValue(const QAudioFormat* self, const void* sample) {
	return self->normalizedSampleValue(sample);
}

quint32 QAudioFormat_DefaultChannelConfigForChannelCount(int channelCount) {
	return QAudioFormat::defaultChannelConfigForChannelCount(channelCount);
}

void QAudioFormat_Delete(QAudioFormat* self) {
    delete self;
}

