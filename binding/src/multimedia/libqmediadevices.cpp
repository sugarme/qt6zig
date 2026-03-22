#include <QAudioDevice>
#include <QCameraDevice>
#include <QMediaDevices>
#include <QMetaMethod>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qmediadevices.h>
#include "libqmediadevices.h"
#include "libqmediadevices.hxx"

QMediaDevices* QMediaDevices_new() {
	 return new VirtualQMediaDevices();
}

QMediaDevices* QMediaDevices_new2(QObject* parent) {
	 return new VirtualQMediaDevices(parent);
}

libqt_string QMediaDevices_Tr(const char* s) {
	QString _ret = QMediaDevices::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QMediaDevices_AudioInputs() {
	auto _ret = QMediaDevices::audioInputs();
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

libqt_list QMediaDevices_AudioOutputs() {
	auto _ret = QMediaDevices::audioOutputs();
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

libqt_list QMediaDevices_VideoInputs() {
	auto _ret = QMediaDevices::videoInputs();
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

QAudioDevice* QMediaDevices_DefaultAudioInput() {
	return new QAudioDevice(QMediaDevices::defaultAudioInput());
}

QAudioDevice* QMediaDevices_DefaultAudioOutput() {
	return new QAudioDevice(QMediaDevices::defaultAudioOutput());
}

QCameraDevice* QMediaDevices_DefaultVideoInput() {
	return new QCameraDevice(QMediaDevices::defaultVideoInput());
}

void QMediaDevices_AudioInputsChanged(QMediaDevices* self) {
	self->audioInputsChanged();
}

void QMediaDevices_Connect_AudioInputsChanged(QMediaDevices* self, intptr_t slot) {
    void (*slotFunc)(QMediaDevices*) = reinterpret_cast<void (*)(QMediaDevices*)>(slot);
    QMediaDevices::connect(self, &QMediaDevices::audioInputsChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaDevices_AudioOutputsChanged(QMediaDevices* self) {
	self->audioOutputsChanged();
}

void QMediaDevices_Connect_AudioOutputsChanged(QMediaDevices* self, intptr_t slot) {
    void (*slotFunc)(QMediaDevices*) = reinterpret_cast<void (*)(QMediaDevices*)>(slot);
    QMediaDevices::connect(self, &QMediaDevices::audioOutputsChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaDevices_VideoInputsChanged(QMediaDevices* self) {
	self->videoInputsChanged();
}

void QMediaDevices_Connect_VideoInputsChanged(QMediaDevices* self, intptr_t slot) {
    void (*slotFunc)(QMediaDevices*) = reinterpret_cast<void (*)(QMediaDevices*)>(slot);
    QMediaDevices::connect(self, &QMediaDevices::videoInputsChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QMediaDevices_Tr2(const char* s, const char* c) {
	QString _ret = QMediaDevices::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMediaDevices_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaDevices::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QMediaDevices_ConnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
	auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
	if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
	vqmediadevices->connectNotify(*signal);
	} else {
	self->QMediaDevices::connectNotify(*signal);
}
}

// Base class handler implementation
void QMediaDevices_QBaseConnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
	auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
	if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
vqmediadevices->setQMediaDevices_ConnectNotify_IsBase(true);
	vqmediadevices->connectNotify(*signal);
}
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnConnectNotify(QMediaDevices* self, intptr_t slot) {
	auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
	if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
vqmediadevices->setQMediaDevices_ConnectNotify_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_ConnectNotify_Callback>(slot));
}
}

void QMediaDevices_Delete(QMediaDevices* self) {
    delete self;
}

