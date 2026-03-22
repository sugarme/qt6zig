#include <QCamera>
#include <QCameraDevice>
#include <QCameraFormat>
#include <QMediaCaptureSession>
#include <QObject>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qcamera.h>
#include "libqcamera.h"
#include "libqcamera.hxx"

QCamera* QCamera_new() {
	 return new QCamera();
}

QCamera* QCamera_new2(const QCameraDevice* cameraDevice) {
	 return new QCamera(*cameraDevice);
}

QCamera* QCamera_new3(int position) {
	 return new QCamera(static_cast<QCameraDevice::Position>(position));
}

QCamera* QCamera_new4(QObject* parent) {
	 return new QCamera(parent);
}

QCamera* QCamera_new5(const QCameraDevice* cameraDevice, QObject* parent) {
	 return new QCamera(*cameraDevice, parent);
}

QCamera* QCamera_new6(int position, QObject* parent) {
	 return new QCamera(static_cast<QCameraDevice::Position>(position), parent);
}

libqt_string QCamera_Tr(const char* s) {
	QString _ret = QCamera::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QCamera_IsAvailable(const QCamera* self) {
	return self->isAvailable();
}

bool QCamera_IsActive(const QCamera* self) {
	return self->isActive();
}

QMediaCaptureSession* QCamera_CaptureSession(const QCamera* self) {
	return self->captureSession();
}

QCameraDevice* QCamera_CameraDevice(const QCamera* self) {
	return new QCameraDevice(self->cameraDevice());
}

void QCamera_SetCameraDevice(QCamera* self, const QCameraDevice* cameraDevice) {
	self->setCameraDevice(*cameraDevice);
}

QCameraFormat* QCamera_CameraFormat(const QCamera* self) {
	return new QCameraFormat(self->cameraFormat());
}

void QCamera_SetCameraFormat(QCamera* self, const QCameraFormat* format) {
	self->setCameraFormat(*format);
}

int QCamera_Error(const QCamera* self) {
	return self->error();
}

libqt_string QCamera_ErrorString(const QCamera* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QCamera_SupportedFeatures(const QCamera* self) {
	return self->supportedFeatures();
}

int QCamera_FocusMode(const QCamera* self) {
	return self->focusMode();
}

void QCamera_SetFocusMode(QCamera* self, int mode) {
	self->setFocusMode(static_cast<QCamera::FocusMode>(mode));
}

bool QCamera_IsFocusModeSupported(const QCamera* self, int mode) {
	return self->isFocusModeSupported(static_cast<QCamera::FocusMode>(mode));
}

QPointF* QCamera_FocusPoint(const QCamera* self) {
	return new QPointF(self->focusPoint());
}

QPointF* QCamera_CustomFocusPoint(const QCamera* self) {
	return new QPointF(self->customFocusPoint());
}

void QCamera_SetCustomFocusPoint(QCamera* self, const QPointF* point) {
	self->setCustomFocusPoint(*point);
}

void QCamera_SetFocusDistance(QCamera* self, float d) {
	self->setFocusDistance(d);
}

float QCamera_FocusDistance(const QCamera* self) {
	return self->focusDistance();
}

float QCamera_MinimumZoomFactor(const QCamera* self) {
	return self->minimumZoomFactor();
}

float QCamera_MaximumZoomFactor(const QCamera* self) {
	return self->maximumZoomFactor();
}

float QCamera_ZoomFactor(const QCamera* self) {
	return self->zoomFactor();
}

void QCamera_SetZoomFactor(QCamera* self, float factor) {
	self->setZoomFactor(factor);
}

int QCamera_FlashMode(const QCamera* self) {
	return self->flashMode();
}

bool QCamera_IsFlashModeSupported(const QCamera* self, int mode) {
	return self->isFlashModeSupported(static_cast<QCamera::FlashMode>(mode));
}

bool QCamera_IsFlashReady(const QCamera* self) {
	return self->isFlashReady();
}

int QCamera_TorchMode(const QCamera* self) {
	return self->torchMode();
}

bool QCamera_IsTorchModeSupported(const QCamera* self, int mode) {
	return self->isTorchModeSupported(static_cast<QCamera::TorchMode>(mode));
}

int QCamera_ExposureMode(const QCamera* self) {
	return self->exposureMode();
}

bool QCamera_IsExposureModeSupported(const QCamera* self, int mode) {
	return self->isExposureModeSupported(static_cast<QCamera::ExposureMode>(mode));
}

float QCamera_ExposureCompensation(const QCamera* self) {
	return self->exposureCompensation();
}

int QCamera_IsoSensitivity(const QCamera* self) {
	return self->isoSensitivity();
}

int QCamera_ManualIsoSensitivity(const QCamera* self) {
	return self->manualIsoSensitivity();
}

float QCamera_ExposureTime(const QCamera* self) {
	return self->exposureTime();
}

float QCamera_ManualExposureTime(const QCamera* self) {
	return self->manualExposureTime();
}

int QCamera_MinimumIsoSensitivity(const QCamera* self) {
	return self->minimumIsoSensitivity();
}

int QCamera_MaximumIsoSensitivity(const QCamera* self) {
	return self->maximumIsoSensitivity();
}

float QCamera_MinimumExposureTime(const QCamera* self) {
	return self->minimumExposureTime();
}

float QCamera_MaximumExposureTime(const QCamera* self) {
	return self->maximumExposureTime();
}

int QCamera_WhiteBalanceMode(const QCamera* self) {
	return self->whiteBalanceMode();
}

bool QCamera_IsWhiteBalanceModeSupported(const QCamera* self, int mode) {
	return self->isWhiteBalanceModeSupported(static_cast<QCamera::WhiteBalanceMode>(mode));
}

int QCamera_ColorTemperature(const QCamera* self) {
	return self->colorTemperature();
}

void QCamera_SetActive(QCamera* self, bool active) {
	self->setActive(active);
}

void QCamera_Start(QCamera* self) {
	self->start();
}

void QCamera_Stop(QCamera* self) {
	self->stop();
}

void QCamera_ZoomTo(QCamera* self, float zoom, float rate) {
	self->zoomTo(zoom, rate);
}

void QCamera_SetFlashMode(QCamera* self, int mode) {
	self->setFlashMode(static_cast<QCamera::FlashMode>(mode));
}

void QCamera_SetTorchMode(QCamera* self, int mode) {
	self->setTorchMode(static_cast<QCamera::TorchMode>(mode));
}

void QCamera_SetExposureMode(QCamera* self, int mode) {
	self->setExposureMode(static_cast<QCamera::ExposureMode>(mode));
}

void QCamera_SetExposureCompensation(QCamera* self, float ev) {
	self->setExposureCompensation(ev);
}

void QCamera_SetManualIsoSensitivity(QCamera* self, int iso) {
	self->setManualIsoSensitivity(iso);
}

void QCamera_SetAutoIsoSensitivity(QCamera* self) {
	self->setAutoIsoSensitivity();
}

void QCamera_SetManualExposureTime(QCamera* self, float seconds) {
	self->setManualExposureTime(seconds);
}

void QCamera_SetAutoExposureTime(QCamera* self) {
	self->setAutoExposureTime();
}

void QCamera_SetWhiteBalanceMode(QCamera* self, int mode) {
	self->setWhiteBalanceMode(static_cast<QCamera::WhiteBalanceMode>(mode));
}

void QCamera_SetColorTemperature(QCamera* self, int colorTemperature) {
	self->setColorTemperature(colorTemperature);
}

void QCamera_ActiveChanged(QCamera* self, bool param1) {
	self->activeChanged(param1);
}

void QCamera_Connect_ActiveChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, bool) = reinterpret_cast<void (*)(QCamera*, bool)>(slot);
    QCamera::connect(self, &QCamera::activeChanged, [self, slotFunc](bool param1) {
	slotFunc(self, param1);
    });
}

void QCamera_ErrorChanged(QCamera* self) {
	self->errorChanged();
}

void QCamera_Connect_ErrorChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::errorChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_ErrorOccurred(QCamera* self, int errorVal, const libqt_string errorString) {
	self->errorOccurred(static_cast<QCamera::Error>(errorVal), QString::fromUtf8(errorString.data, errorString.len));
}

void QCamera_Connect_ErrorOccurred(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, int, const char*) = reinterpret_cast<void (*)(QCamera*, int, const char*)>(slot);
    QCamera::connect(self, &QCamera::errorOccurred, [self, slotFunc](QCamera::Error errorVal, const QString& errorString) {
	slotFunc(self, errorVal, errorString);
    });
}

void QCamera_CameraDeviceChanged(QCamera* self) {
	self->cameraDeviceChanged();
}

void QCamera_Connect_CameraDeviceChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::cameraDeviceChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_CameraFormatChanged(QCamera* self) {
	self->cameraFormatChanged();
}

void QCamera_Connect_CameraFormatChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::cameraFormatChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_SupportedFeaturesChanged(QCamera* self) {
	self->supportedFeaturesChanged();
}

void QCamera_Connect_SupportedFeaturesChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::supportedFeaturesChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_FocusModeChanged(QCamera* self) {
	self->focusModeChanged();
}

void QCamera_Connect_FocusModeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::focusModeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_ZoomFactorChanged(QCamera* self, float param1) {
	self->zoomFactorChanged(param1);
}

void QCamera_Connect_ZoomFactorChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::zoomFactorChanged, [self, slotFunc](float param1) {
	slotFunc(self, param1);
    });
}

void QCamera_MinimumZoomFactorChanged(QCamera* self, float param1) {
	self->minimumZoomFactorChanged(param1);
}

void QCamera_Connect_MinimumZoomFactorChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::minimumZoomFactorChanged, [self, slotFunc](float param1) {
	slotFunc(self, param1);
    });
}

void QCamera_MaximumZoomFactorChanged(QCamera* self, float param1) {
	self->maximumZoomFactorChanged(param1);
}

void QCamera_Connect_MaximumZoomFactorChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::maximumZoomFactorChanged, [self, slotFunc](float param1) {
	slotFunc(self, param1);
    });
}

void QCamera_FocusDistanceChanged(QCamera* self, float param1) {
	self->focusDistanceChanged(param1);
}

void QCamera_Connect_FocusDistanceChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::focusDistanceChanged, [self, slotFunc](float param1) {
	slotFunc(self, param1);
    });
}

void QCamera_FocusPointChanged(QCamera* self) {
	self->focusPointChanged();
}

void QCamera_Connect_FocusPointChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::focusPointChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_CustomFocusPointChanged(QCamera* self) {
	self->customFocusPointChanged();
}

void QCamera_Connect_CustomFocusPointChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::customFocusPointChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_FlashReady(QCamera* self, bool param1) {
	self->flashReady(param1);
}

void QCamera_Connect_FlashReady(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, bool) = reinterpret_cast<void (*)(QCamera*, bool)>(slot);
    QCamera::connect(self, &QCamera::flashReady, [self, slotFunc](bool param1) {
	slotFunc(self, param1);
    });
}

void QCamera_FlashModeChanged(QCamera* self) {
	self->flashModeChanged();
}

void QCamera_Connect_FlashModeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::flashModeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_TorchModeChanged(QCamera* self) {
	self->torchModeChanged();
}

void QCamera_Connect_TorchModeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::torchModeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_ExposureTimeChanged(QCamera* self, float speed) {
	self->exposureTimeChanged(speed);
}

void QCamera_Connect_ExposureTimeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::exposureTimeChanged, [self, slotFunc](float speed) {
	slotFunc(self, speed);
    });
}

void QCamera_ManualExposureTimeChanged(QCamera* self, float speed) {
	self->manualExposureTimeChanged(speed);
}

void QCamera_Connect_ManualExposureTimeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::manualExposureTimeChanged, [self, slotFunc](float speed) {
	slotFunc(self, speed);
    });
}

void QCamera_IsoSensitivityChanged(QCamera* self, int param1) {
	self->isoSensitivityChanged(param1);
}

void QCamera_Connect_IsoSensitivityChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, int) = reinterpret_cast<void (*)(QCamera*, int)>(slot);
    QCamera::connect(self, &QCamera::isoSensitivityChanged, [self, slotFunc](int param1) {
	slotFunc(self, param1);
    });
}

void QCamera_ManualIsoSensitivityChanged(QCamera* self, int param1) {
	self->manualIsoSensitivityChanged(param1);
}

void QCamera_Connect_ManualIsoSensitivityChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, int) = reinterpret_cast<void (*)(QCamera*, int)>(slot);
    QCamera::connect(self, &QCamera::manualIsoSensitivityChanged, [self, slotFunc](int param1) {
	slotFunc(self, param1);
    });
}

void QCamera_ExposureCompensationChanged(QCamera* self, float param1) {
	self->exposureCompensationChanged(param1);
}

void QCamera_Connect_ExposureCompensationChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::exposureCompensationChanged, [self, slotFunc](float param1) {
	slotFunc(self, param1);
    });
}

void QCamera_ExposureModeChanged(QCamera* self) {
	self->exposureModeChanged();
}

void QCamera_Connect_ExposureModeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::exposureModeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_WhiteBalanceModeChanged(const QCamera* self) {
	self->whiteBalanceModeChanged();
}

void QCamera_Connect_WhiteBalanceModeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::whiteBalanceModeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_ColorTemperatureChanged(const QCamera* self) {
	self->colorTemperatureChanged();
}

void QCamera_Connect_ColorTemperatureChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::colorTemperatureChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_BrightnessChanged(QCamera* self) {
	self->brightnessChanged();
}

void QCamera_Connect_BrightnessChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::brightnessChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_ContrastChanged(QCamera* self) {
	self->contrastChanged();
}

void QCamera_Connect_ContrastChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::contrastChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_SaturationChanged(QCamera* self) {
	self->saturationChanged();
}

void QCamera_Connect_SaturationChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::saturationChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCamera_HueChanged(QCamera* self) {
	self->hueChanged();
}

void QCamera_Connect_HueChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::hueChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QCamera_Tr2(const char* s, const char* c) {
	QString _ret = QCamera::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCamera_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCamera::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCamera_Delete(QCamera* self) {
    delete self;
}

