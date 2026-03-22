#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QMovie>
#include <QObject>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qmovie.h>
#include "libqmovie.h"
#include "libqmovie.hxx"

QMovie* QMovie_new() {
	 return new QMovie();
}

QMovie* QMovie_new2(QIODevice* device) {
	 return new QMovie(device);
}

QMovie* QMovie_new3(const libqt_string fileName) {
	 return new QMovie(QString::fromUtf8(fileName.data, fileName.len));
}

QMovie* QMovie_new4(QObject* parent) {
	 return new QMovie(parent);
}

QMovie* QMovie_new5(QIODevice* device, const libqt_string format) {
	 return new QMovie(device, QByteArray(format.data, format.len));
}

QMovie* QMovie_new6(QIODevice* device, const libqt_string format, QObject* parent) {
	 return new QMovie(device, QByteArray(format.data, format.len), parent);
}

QMovie* QMovie_new7(const libqt_string fileName, const libqt_string format) {
	 return new QMovie(QString::fromUtf8(fileName.data, fileName.len), QByteArray(format.data, format.len));
}

QMovie* QMovie_new8(const libqt_string fileName, const libqt_string format, QObject* parent) {
	 return new QMovie(QString::fromUtf8(fileName.data, fileName.len), QByteArray(format.data, format.len), parent);
}

libqt_string QMovie_Tr(const char* s) {
	QString _ret = QMovie::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QMovie_SupportedFormats() {
	auto _ret = QMovie::supportedFormats();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QMovie_SetDevice(QMovie* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QMovie_Device(const QMovie* self) {
	return self->device();
}

void QMovie_SetFileName(QMovie* self, const libqt_string fileName) {
	self->setFileName(QString::fromUtf8(fileName.data, fileName.len));
}

libqt_string QMovie_FileName(const QMovie* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMovie_SetFormat(QMovie* self, const libqt_string format) {
	self->setFormat(QByteArray(format.data, format.len));
}

libqt_string QMovie_Format(const QMovie* self) {
	QByteArray _qb = self->format();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMovie_SetBackgroundColor(QMovie* self, const QColor* color) {
	self->setBackgroundColor(*color);
}

QColor* QMovie_BackgroundColor(const QMovie* self) {
	return new QColor(self->backgroundColor());
}

int QMovie_State(const QMovie* self) {
	return self->state();
}

QRect* QMovie_FrameRect(const QMovie* self) {
	return new QRect(self->frameRect());
}

QImage* QMovie_CurrentImage(const QMovie* self) {
	return new QImage(self->currentImage());
}

QPixmap* QMovie_CurrentPixmap(const QMovie* self) {
	return new QPixmap(self->currentPixmap());
}

bool QMovie_IsValid(const QMovie* self) {
	return self->isValid();
}

int QMovie_LastError(const QMovie* self) {
	return self->lastError();
}

libqt_string QMovie_LastErrorString(const QMovie* self) {
	QString _ret = self->lastErrorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QMovie_JumpToFrame(QMovie* self, int frameNumber) {
	return self->jumpToFrame(frameNumber);
}

int QMovie_LoopCount(const QMovie* self) {
	return self->loopCount();
}

int QMovie_FrameCount(const QMovie* self) {
	return self->frameCount();
}

int QMovie_NextFrameDelay(const QMovie* self) {
	return self->nextFrameDelay();
}

int QMovie_CurrentFrameNumber(const QMovie* self) {
	return self->currentFrameNumber();
}

int QMovie_Speed(const QMovie* self) {
	return self->speed();
}

QSize* QMovie_ScaledSize(QMovie* self) {
	return new QSize(self->scaledSize());
}

void QMovie_SetScaledSize(QMovie* self, const QSize* size) {
	self->setScaledSize(*size);
}

int QMovie_CacheMode(const QMovie* self) {
	return self->cacheMode();
}

void QMovie_SetCacheMode(QMovie* self, int mode) {
	self->setCacheMode(static_cast<QFlags<QGraphicsView::CacheModeFlag>>(mode));
}

void QMovie_Started(QMovie* self) {
	self->started();
}

void QMovie_Connect_Started(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*) = reinterpret_cast<void (*)(QMovie*)>(slot);
    QMovie::connect(self, &QMovie::started, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMovie_Resized(QMovie* self, const QSize* size) {
	self->resized(*size);
}

void QMovie_Connect_Resized(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*, const QSize*) = reinterpret_cast<void (*)(QMovie*, const QSize*)>(slot);
    QMovie::connect(self, &QMovie::resized, [self, slotFunc](const QSize& size) {
	slotFunc(self, size);
    });
}

void QMovie_Updated(QMovie* self, const QRect* rect) {
	self->updated(*rect);
}

void QMovie_Connect_Updated(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*, const QRect*) = reinterpret_cast<void (*)(QMovie*, const QRect*)>(slot);
    QMovie::connect(self, &QMovie::updated, [self, slotFunc](const QRect& rect) {
	slotFunc(self, rect);
    });
}

void QMovie_StateChanged(QMovie* self, int state) {
	self->stateChanged(static_cast<QMovie::MovieState>(state));
}

void QMovie_Connect_StateChanged(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*, int) = reinterpret_cast<void (*)(QMovie*, int)>(slot);
    QMovie::connect(self, &QMovie::stateChanged, [self, slotFunc](QMovie::MovieState state) {
	slotFunc(self, state);
    });
}

void QMovie_Error(QMovie* self, int errorVal) {
	self->error(static_cast<QImageReader::ImageReaderError>(errorVal));
}

void QMovie_Connect_Error(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*, int) = reinterpret_cast<void (*)(QMovie*, int)>(slot);
    QMovie::connect(self, &QMovie::error, [self, slotFunc](QImageReader::ImageReaderError errorVal) {
	slotFunc(self, errorVal);
    });
}

void QMovie_Finished(QMovie* self) {
	self->finished();
}

void QMovie_Connect_Finished(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*) = reinterpret_cast<void (*)(QMovie*)>(slot);
    QMovie::connect(self, &QMovie::finished, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMovie_FrameChanged(QMovie* self, int frameNumber) {
	self->frameChanged(frameNumber);
}

void QMovie_Connect_FrameChanged(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*, int) = reinterpret_cast<void (*)(QMovie*, int)>(slot);
    QMovie::connect(self, &QMovie::frameChanged, [self, slotFunc](int frameNumber) {
	slotFunc(self, frameNumber);
    });
}

void QMovie_Start(QMovie* self) {
	self->start();
}

bool QMovie_JumpToNextFrame(QMovie* self) {
	return self->jumpToNextFrame();
}

void QMovie_SetPaused(QMovie* self, bool paused) {
	self->setPaused(paused);
}

void QMovie_Stop(QMovie* self) {
	self->stop();
}

void QMovie_SetSpeed(QMovie* self, int percentSpeed) {
	self->setSpeed(percentSpeed);
}

libqt_string QMovie_Tr2(const char* s, const char* c) {
	QString _ret = QMovie::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMovie_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMovie::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMovie_Delete(QMovie* self) {
    delete self;
}

