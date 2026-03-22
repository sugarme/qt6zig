#include <QAudioBuffer>
#include <QAudioFormat>
#include <QByteArray>
#include <qaudiobuffer.h>
#include "libqaudiobuffer.h"
#include "libqaudiobuffer.hxx"

QAudioBuffer* QAudioBuffer_new() {
	 return new QAudioBuffer();
}

QAudioBuffer* QAudioBuffer_new2(const QAudioBuffer* other) {
	 return new QAudioBuffer(*other);
}

QAudioBuffer* QAudioBuffer_new3(const libqt_string data, const QAudioFormat* format) {
	 return new QAudioBuffer(QByteArray(data.data, data.len), *format);
}

QAudioBuffer* QAudioBuffer_new4(int numFrames, const QAudioFormat* format) {
	 return new QAudioBuffer(numFrames, *format);
}

QAudioBuffer* QAudioBuffer_new5(const libqt_string data, const QAudioFormat* format, long long startTime) {
	 return new QAudioBuffer(QByteArray(data.data, data.len), *format, startTime);
}

QAudioBuffer* QAudioBuffer_new6(int numFrames, const QAudioFormat* format, long long startTime) {
	 return new QAudioBuffer(numFrames, *format, startTime);
}

void QAudioBuffer_OperatorAssign(QAudioBuffer* self, const QAudioBuffer* other) {
	self->operator=(*other);
}

void QAudioBuffer_Swap(QAudioBuffer* self, QAudioBuffer* other) {
	self->swap(*other);
}

bool QAudioBuffer_IsValid(const QAudioBuffer* self) {
	return self->isValid();
}

void QAudioBuffer_Detach(QAudioBuffer* self) {
	self->detach();
}

QAudioFormat* QAudioBuffer_Format(const QAudioBuffer* self) {
	return new QAudioFormat(self->format());
}

ptrdiff_t QAudioBuffer_FrameCount(const QAudioBuffer* self) {
	return self->frameCount();
}

ptrdiff_t QAudioBuffer_SampleCount(const QAudioBuffer* self) {
	return self->sampleCount();
}

ptrdiff_t QAudioBuffer_ByteCount(const QAudioBuffer* self) {
	return self->byteCount();
}

long long QAudioBuffer_Duration(const QAudioBuffer* self) {
	return self->duration();
}

long long QAudioBuffer_StartTime(const QAudioBuffer* self) {
	return self->startTime();
}

void QAudioBuffer_Delete(QAudioBuffer* self) {
    delete self;
}

