#include <QImage>
#include <QImageCapture>
#include <QMediaCaptureSession>
#include <QMediaMetaData>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVideoFrame>
#include <qimagecapture.h>
#include "libqimagecapture.h"
#include "libqimagecapture.hxx"

QImageCapture* QImageCapture_new() {
	 return new QImageCapture();
}

QImageCapture* QImageCapture_new2(QObject* parent) {
	 return new QImageCapture(parent);
}

libqt_string QImageCapture_Tr(const char* s) {
	QString _ret = QImageCapture::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QImageCapture_IsAvailable(const QImageCapture* self) {
	return self->isAvailable();
}

QMediaCaptureSession* QImageCapture_CaptureSession(const QImageCapture* self) {
	return self->captureSession();
}

int QImageCapture_Error(const QImageCapture* self) {
	return self->error();
}

libqt_string QImageCapture_ErrorString(const QImageCapture* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QImageCapture_IsReadyForCapture(const QImageCapture* self) {
	return self->isReadyForCapture();
}

int QImageCapture_FileFormat(const QImageCapture* self) {
	return self->fileFormat();
}

void QImageCapture_SetFileFormat(QImageCapture* self, int format) {
	self->setFileFormat(static_cast<QMediaFormat::FileFormat>(format));
}

libqt_list QImageCapture_SupportedFormats() {
	auto _ret = QImageCapture::supportedFormats();
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

libqt_string QImageCapture_FileFormatName(int c) {
	QString _ret = QImageCapture::fileFormatName(static_cast<QMediaFormat::FileFormat>(c));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QImageCapture_FileFormatDescription(int c) {
	QString _ret = QImageCapture::fileFormatDescription(static_cast<QMediaFormat::FileFormat>(c));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QImageCapture_Resolution(const QImageCapture* self) {
	return new QSize(self->resolution());
}

void QImageCapture_SetResolution(QImageCapture* self, const QSize* resolution) {
	self->setResolution(*resolution);
}

void QImageCapture_SetResolution2(QImageCapture* self, int width, int height) {
	self->setResolution(width, height);
}

int QImageCapture_Quality(const QImageCapture* self) {
	return self->quality();
}

void QImageCapture_SetQuality(QImageCapture* self, int quality) {
	self->setQuality(static_cast<QMediaRecorder::Quality>(quality));
}

QMediaMetaData* QImageCapture_MetaData(const QImageCapture* self) {
	return new QMediaMetaData(self->metaData());
}

void QImageCapture_SetMetaData(QImageCapture* self, const QMediaMetaData* metaData) {
	self->setMetaData(*metaData);
}

void QImageCapture_AddMetaData(QImageCapture* self, const QMediaMetaData* metaData) {
	self->addMetaData(*metaData);
}

int QImageCapture_CaptureToFile(QImageCapture* self) {
	return self->captureToFile();
}

int QImageCapture_Capture(QImageCapture* self) {
	return self->capture();
}

void QImageCapture_ErrorChanged(QImageCapture* self) {
	self->errorChanged();
}

void QImageCapture_Connect_ErrorChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::errorChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QImageCapture_ErrorOccurred(QImageCapture* self, int id, int errorVal, const libqt_string errorString) {
	self->errorOccurred(id, static_cast<QImageCapture::Error>(errorVal), QString::fromUtf8(errorString.data, errorString.len));
}

void QImageCapture_Connect_ErrorOccurred(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, int, const char*) = reinterpret_cast<void (*)(QImageCapture*, int, int, const char*)>(slot);
    QImageCapture::connect(self, &QImageCapture::errorOccurred, [self, slotFunc](int id, QImageCapture::Error errorVal, const QString& errorString) {
	slotFunc(self, id, errorVal, errorString);
    });
}

void QImageCapture_ReadyForCaptureChanged(QImageCapture* self, bool ready) {
	self->readyForCaptureChanged(ready);
}

void QImageCapture_Connect_ReadyForCaptureChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, bool) = reinterpret_cast<void (*)(QImageCapture*, bool)>(slot);
    QImageCapture::connect(self, &QImageCapture::readyForCaptureChanged, [self, slotFunc](bool ready) {
	slotFunc(self, ready);
    });
}

void QImageCapture_MetaDataChanged(QImageCapture* self) {
	self->metaDataChanged();
}

void QImageCapture_Connect_MetaDataChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::metaDataChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QImageCapture_FileFormatChanged(QImageCapture* self) {
	self->fileFormatChanged();
}

void QImageCapture_Connect_FileFormatChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::fileFormatChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QImageCapture_QualityChanged(QImageCapture* self) {
	self->qualityChanged();
}

void QImageCapture_Connect_QualityChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::qualityChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QImageCapture_ResolutionChanged(QImageCapture* self) {
	self->resolutionChanged();
}

void QImageCapture_Connect_ResolutionChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::resolutionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QImageCapture_ImageExposed(QImageCapture* self, int id) {
	self->imageExposed(id);
}

void QImageCapture_Connect_ImageExposed(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int) = reinterpret_cast<void (*)(QImageCapture*, int)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageExposed, [self, slotFunc](int id) {
	slotFunc(self, id);
    });
}

void QImageCapture_ImageCaptured(QImageCapture* self, int id, const QImage* preview) {
	self->imageCaptured(id, *preview);
}

void QImageCapture_Connect_ImageCaptured(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, const QImage*) = reinterpret_cast<void (*)(QImageCapture*, int, const QImage*)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageCaptured, [self, slotFunc](int id, const QImage& preview) {
	slotFunc(self, id, preview);
    });
}

void QImageCapture_ImageMetadataAvailable(QImageCapture* self, int id, const QMediaMetaData* metaData) {
	self->imageMetadataAvailable(id, *metaData);
}

void QImageCapture_Connect_ImageMetadataAvailable(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, const QMediaMetaData*) = reinterpret_cast<void (*)(QImageCapture*, int, const QMediaMetaData*)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageMetadataAvailable, [self, slotFunc](int id, const QMediaMetaData& metaData) {
	slotFunc(self, id, metaData);
    });
}

void QImageCapture_ImageAvailable(QImageCapture* self, int id, const QVideoFrame* frame) {
	self->imageAvailable(id, *frame);
}

void QImageCapture_Connect_ImageAvailable(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, const QVideoFrame*) = reinterpret_cast<void (*)(QImageCapture*, int, const QVideoFrame*)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageAvailable, [self, slotFunc](int id, const QVideoFrame& frame) {
	slotFunc(self, id, frame);
    });
}

void QImageCapture_ImageSaved(QImageCapture* self, int id, const libqt_string fileName) {
	self->imageSaved(id, QString::fromUtf8(fileName.data, fileName.len));
}

void QImageCapture_Connect_ImageSaved(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, const char*) = reinterpret_cast<void (*)(QImageCapture*, int, const char*)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageSaved, [self, slotFunc](int id, const QString& fileName) {
	slotFunc(self, id, fileName);
    });
}

libqt_string QImageCapture_Tr2(const char* s, const char* c) {
	QString _ret = QImageCapture::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QImageCapture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QImageCapture::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QImageCapture_CaptureToFile1(QImageCapture* self, const libqt_string location) {
	return self->captureToFile(QString::fromUtf8(location.data, location.len));
}

void QImageCapture_Delete(QImageCapture* self) {
    delete self;
}

