#include <QByteArray>
#include <QIODevice>
#include <QImage>
#include <QImageIOHandler>
#include <QImageIOPlugin>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qimageiohandler.h>
#include "libqimageiohandler.h"
#include "libqimageiohandler.hxx"

QImageIOHandler* QImageIOHandler_new() {
	 return new VirtualQImageIOHandler();
}

void QImageIOHandler_SetDevice(QImageIOHandler* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageIOHandler_Device(const QImageIOHandler* self) {
	return self->device();
}

void QImageIOHandler_SetFormat(QImageIOHandler* self, const libqt_string format) {
	self->setFormat(QByteArray(format.data, format.len));
}

void QImageIOHandler_SetFormat2(const QImageIOHandler* self, const libqt_string format) {
	self->setFormat(QByteArray(format.data, format.len));
}

libqt_string QImageIOHandler_Format(const QImageIOHandler* self) {
	QByteArray _qb = self->format();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QImageIOHandler_CanRead(const QImageIOHandler* self) {
	return self->canRead();
}

bool QImageIOHandler_Read(QImageIOHandler* self, QImage* image) {
	return self->read(image);
}

bool QImageIOHandler_Write(QImageIOHandler* self, const QImage* image) {
	return self->write(*image);
}

QVariant* QImageIOHandler_Option(const QImageIOHandler* self, int option) {
	return new QVariant(self->option(static_cast<QImageIOHandler::ImageOption>(option)));
}

void QImageIOHandler_SetOption(QImageIOHandler* self, int option, const QVariant* value) {
	self->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
}

bool QImageIOHandler_SupportsOption(const QImageIOHandler* self, int option) {
	return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

bool QImageIOHandler_JumpToNextImage(QImageIOHandler* self) {
	return self->jumpToNextImage();
}

bool QImageIOHandler_JumpToImage(QImageIOHandler* self, int imageNumber) {
	return self->jumpToImage(imageNumber);
}

int QImageIOHandler_LoopCount(const QImageIOHandler* self) {
	return self->loopCount();
}

int QImageIOHandler_ImageCount(const QImageIOHandler* self) {
	return self->imageCount();
}

int QImageIOHandler_NextImageDelay(const QImageIOHandler* self) {
	return self->nextImageDelay();
}

int QImageIOHandler_CurrentImageNumber(const QImageIOHandler* self) {
	return self->currentImageNumber();
}

QRect* QImageIOHandler_CurrentImageRect(const QImageIOHandler* self) {
	return new QRect(self->currentImageRect());
}

bool QImageIOHandler_AllocateImage(QSize* size, int format, QImage* image) {
	return QImageIOHandler::allocateImage(*size, static_cast<QImage::Format>(format), image);
}

// Base class handler implementation
bool QImageIOHandler_QBaseCanRead(const QImageIOHandler* self) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_CanRead_IsBase(true);
	return vqimageiohandler->canRead();
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCanRead(const QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_CanRead_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CanRead_Callback>(slot));
}
}

// Base class handler implementation
bool QImageIOHandler_QBaseRead(QImageIOHandler* self, QImage* image) {
	auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_Read_IsBase(true);
	return vqimageiohandler->read(image);
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnRead(QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_Read_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Read_Callback>(slot));
}
}

// Base class handler implementation
bool QImageIOHandler_QBaseWrite(QImageIOHandler* self, const QImage* image) {
	auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_Write_IsBase(true);
	return vqimageiohandler->write(*image);
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnWrite(QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_Write_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Write_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QImageIOHandler_QBaseOption(const QImageIOHandler* self, int option) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_Option_IsBase(true);
	return new QVariant(vqimageiohandler->option(static_cast<QImageIOHandler::ImageOption>(option)));
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnOption(const QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_Option_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Option_Callback>(slot));
}
}

// Base class handler implementation
void QImageIOHandler_QBaseSetOption(QImageIOHandler* self, int option, const QVariant* value) {
	auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_SetOption_IsBase(true);
	vqimageiohandler->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnSetOption(QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_SetOption_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_SetOption_Callback>(slot));
}
}

// Base class handler implementation
bool QImageIOHandler_QBaseSupportsOption(const QImageIOHandler* self, int option) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_SupportsOption_IsBase(true);
	return vqimageiohandler->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnSupportsOption(const QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_SupportsOption_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_SupportsOption_Callback>(slot));
}
}

// Base class handler implementation
bool QImageIOHandler_QBaseJumpToNextImage(QImageIOHandler* self) {
	auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_JumpToNextImage_IsBase(true);
	return vqimageiohandler->jumpToNextImage();
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnJumpToNextImage(QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_JumpToNextImage_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_JumpToNextImage_Callback>(slot));
}
}

// Base class handler implementation
bool QImageIOHandler_QBaseJumpToImage(QImageIOHandler* self, int imageNumber) {
	auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_JumpToImage_IsBase(true);
	return vqimageiohandler->jumpToImage(imageNumber);
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnJumpToImage(QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_JumpToImage_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_JumpToImage_Callback>(slot));
}
}

// Base class handler implementation
int QImageIOHandler_QBaseLoopCount(const QImageIOHandler* self) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_LoopCount_IsBase(true);
	return vqimageiohandler->loopCount();
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnLoopCount(const QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_LoopCount_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_LoopCount_Callback>(slot));
}
}

// Base class handler implementation
int QImageIOHandler_QBaseImageCount(const QImageIOHandler* self) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_ImageCount_IsBase(true);
	return vqimageiohandler->imageCount();
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnImageCount(const QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_ImageCount_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_ImageCount_Callback>(slot));
}
}

// Base class handler implementation
int QImageIOHandler_QBaseNextImageDelay(const QImageIOHandler* self) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_NextImageDelay_IsBase(true);
	return vqimageiohandler->nextImageDelay();
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnNextImageDelay(const QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_NextImageDelay_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_NextImageDelay_Callback>(slot));
}
}

// Base class handler implementation
int QImageIOHandler_QBaseCurrentImageNumber(const QImageIOHandler* self) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_CurrentImageNumber_IsBase(true);
	return vqimageiohandler->currentImageNumber();
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCurrentImageNumber(const QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_CurrentImageNumber_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CurrentImageNumber_Callback>(slot));
}
}

// Base class handler implementation
QRect* QImageIOHandler_QBaseCurrentImageRect(const QImageIOHandler* self) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_CurrentImageRect_IsBase(true);
	return new QRect(vqimageiohandler->currentImageRect());
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCurrentImageRect(const QImageIOHandler* self, intptr_t slot) {
	auto* vqimageiohandler = dynamic_cast<const VirtualQImageIOHandler*>(self);
	if (vqimageiohandler && vqimageiohandler->isVirtualQImageIOHandler) {
vqimageiohandler->setQImageIOHandler_CurrentImageRect_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CurrentImageRect_Callback>(slot));
}
}

void QImageIOHandler_Delete(QImageIOHandler* self) {
    delete self;
}

QImageIOPlugin* QImageIOPlugin_new() {
	 return new VirtualQImageIOPlugin();
}

QImageIOPlugin* QImageIOPlugin_new2(QObject* parent) {
	 return new VirtualQImageIOPlugin(parent);
}

libqt_string QImageIOPlugin_Tr(const char* s) {
	QString _ret = QImageIOPlugin::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QImageIOPlugin_Capabilities(const QImageIOPlugin* self, QIODevice* device, const libqt_string format) {
	return self->capabilities(device, QByteArray(format.data, format.len));
}

QImageIOHandler* QImageIOPlugin_Create(const QImageIOPlugin* self, QIODevice* device, const libqt_string format) {
	return self->create(device, QByteArray(format.data, format.len));
}

libqt_string QImageIOPlugin_Tr2(const char* s, const char* c) {
	QString _ret = QImageIOPlugin::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QImageIOPlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QImageIOPlugin::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QImageIOPlugin_QBaseCapabilities(const QImageIOPlugin* self, QIODevice* device, const libqt_string format) {
	auto* vqimageioplugin = dynamic_cast<const VirtualQImageIOPlugin*>(self);
	if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
vqimageioplugin->setQImageIOPlugin_Capabilities_IsBase(true);
	return vqimageioplugin->capabilities(device, QByteArray(format.data, format.len));
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnCapabilities(const QImageIOPlugin* self, intptr_t slot) {
	auto* vqimageioplugin = dynamic_cast<const VirtualQImageIOPlugin*>(self);
	if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
vqimageioplugin->setQImageIOPlugin_Capabilities_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Capabilities_Callback>(slot));
}
}

// Base class handler implementation
QImageIOHandler* QImageIOPlugin_QBaseCreate(const QImageIOPlugin* self, QIODevice* device, const libqt_string format) {
	auto* vqimageioplugin = dynamic_cast<const VirtualQImageIOPlugin*>(self);
	if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
vqimageioplugin->setQImageIOPlugin_Create_IsBase(true);
	return vqimageioplugin->create(device, QByteArray(format.data, format.len));
}
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnCreate(const QImageIOPlugin* self, intptr_t slot) {
	auto* vqimageioplugin = dynamic_cast<const VirtualQImageIOPlugin*>(self);
	if (vqimageioplugin && vqimageioplugin->isVirtualQImageIOPlugin) {
vqimageioplugin->setQImageIOPlugin_Create_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Create_Callback>(slot));
}
}

void QImageIOPlugin_Delete(QImageIOPlugin* self) {
    delete self;
}

