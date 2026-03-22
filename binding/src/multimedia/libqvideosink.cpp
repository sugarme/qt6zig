#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoFrame>
#include <QVideoSink>
#include <qvideosink.h>
#include "libqvideosink.h"
#include "libqvideosink.hxx"

QVideoSink* QVideoSink_new() {
	 return new QVideoSink();
}

QVideoSink* QVideoSink_new2(QObject* parent) {
	 return new QVideoSink(parent);
}

libqt_string QVideoSink_Tr(const char* s) {
	QString _ret = QVideoSink::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QRhi* QVideoSink_Rhi(const QVideoSink* self) {
	return self->rhi();
}

void QVideoSink_SetRhi(QVideoSink* self, QRhi* rhi) {
	self->setRhi(rhi);
}

QSize* QVideoSink_VideoSize(const QVideoSink* self) {
	return new QSize(self->videoSize());
}

libqt_string QVideoSink_SubtitleText(const QVideoSink* self) {
	QString _ret = self->subtitleText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QVideoSink_SetSubtitleText(QVideoSink* self, const libqt_string subtitle) {
	self->setSubtitleText(QString::fromUtf8(subtitle.data, subtitle.len));
}

void QVideoSink_SetVideoFrame(QVideoSink* self, const QVideoFrame* frame) {
	self->setVideoFrame(*frame);
}

QVideoFrame* QVideoSink_VideoFrame(const QVideoSink* self) {
	return new QVideoFrame(self->videoFrame());
}

QPlatformVideoSink* QVideoSink_PlatformVideoSink(const QVideoSink* self) {
	return self->platformVideoSink();
}

void QVideoSink_VideoFrameChanged(const QVideoSink* self, const QVideoFrame* frame) {
	self->videoFrameChanged(*frame);
}

void QVideoSink_Connect_VideoFrameChanged(QVideoSink* self, intptr_t slot) {
    void (*slotFunc)(QVideoSink*, const QVideoFrame*) = reinterpret_cast<void (*)(QVideoSink*, const QVideoFrame*)>(slot);
    QVideoSink::connect(self, &QVideoSink::videoFrameChanged, [self, slotFunc](const QVideoFrame& frame) {
	slotFunc(self, frame);
    });
}

void QVideoSink_SubtitleTextChanged(const QVideoSink* self, const libqt_string subtitleText) {
	self->subtitleTextChanged(QString::fromUtf8(subtitleText.data, subtitleText.len));
}

void QVideoSink_Connect_SubtitleTextChanged(QVideoSink* self, intptr_t slot) {
    void (*slotFunc)(QVideoSink*, const char*) = reinterpret_cast<void (*)(QVideoSink*, const char*)>(slot);
    QVideoSink::connect(self, &QVideoSink::subtitleTextChanged, [self, slotFunc](const QString& subtitleText) {
	slotFunc(self, subtitleText);
    });
}

void QVideoSink_VideoSizeChanged(QVideoSink* self) {
	self->videoSizeChanged();
}

void QVideoSink_Connect_VideoSizeChanged(QVideoSink* self, intptr_t slot) {
    void (*slotFunc)(QVideoSink*) = reinterpret_cast<void (*)(QVideoSink*)>(slot);
    QVideoSink::connect(self, &QVideoSink::videoSizeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QVideoSink_Tr2(const char* s, const char* c) {
	QString _ret = QVideoSink::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QVideoSink_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoSink::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QVideoSink_Delete(QVideoSink* self) {
    delete self;
}

