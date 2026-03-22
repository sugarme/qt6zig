#include <QOpenGLContext>
#include <QOpenGLPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QSize>
#include <qopenglpaintdevice.h>
#include "libqopenglpaintdevice.h"
#include "libqopenglpaintdevice.hxx"

QOpenGLPaintDevice* QOpenGLPaintDevice_new() {
	 return new VirtualQOpenGLPaintDevice();
}

QOpenGLPaintDevice* QOpenGLPaintDevice_new2(const QSize* size) {
	 return new VirtualQOpenGLPaintDevice(*size);
}

QOpenGLPaintDevice* QOpenGLPaintDevice_new3(int width, int height) {
	 return new VirtualQOpenGLPaintDevice(width, height);
}

int QOpenGLPaintDevice_DevType(const QOpenGLPaintDevice* self) {
	return self->devType();
}

QPaintEngine* QOpenGLPaintDevice_PaintEngine(const QOpenGLPaintDevice* self) {
	return self->paintEngine();
}

QOpenGLContext* QOpenGLPaintDevice_Context(const QOpenGLPaintDevice* self) {
	return self->context();
}

QSize* QOpenGLPaintDevice_Size(const QOpenGLPaintDevice* self) {
	return new QSize(self->size());
}

void QOpenGLPaintDevice_SetSize(QOpenGLPaintDevice* self, const QSize* size) {
	self->setSize(*size);
}

void QOpenGLPaintDevice_SetDevicePixelRatio(QOpenGLPaintDevice* self, double devicePixelRatio) {
	self->setDevicePixelRatio(devicePixelRatio);
}

double QOpenGLPaintDevice_DotsPerMeterX(const QOpenGLPaintDevice* self) {
	return self->dotsPerMeterX();
}

double QOpenGLPaintDevice_DotsPerMeterY(const QOpenGLPaintDevice* self) {
	return self->dotsPerMeterY();
}

void QOpenGLPaintDevice_SetDotsPerMeterX(QOpenGLPaintDevice* self, double dotsPerMeterX) {
	self->setDotsPerMeterX(dotsPerMeterX);
}

void QOpenGLPaintDevice_SetDotsPerMeterY(QOpenGLPaintDevice* self, double dotsPerMeterY) {
	self->setDotsPerMeterY(dotsPerMeterY);
}

void QOpenGLPaintDevice_SetPaintFlipped(QOpenGLPaintDevice* self, bool flipped) {
	self->setPaintFlipped(flipped);
}

bool QOpenGLPaintDevice_PaintFlipped(const QOpenGLPaintDevice* self) {
	return self->paintFlipped();
}

void QOpenGLPaintDevice_EnsureActiveTarget(QOpenGLPaintDevice* self) {
	self->ensureActiveTarget();
}

// Base class handler implementation
int QOpenGLPaintDevice_QBaseDevType(const QOpenGLPaintDevice* self) {
	auto* vqopenglpaintdevice = dynamic_cast<const VirtualQOpenGLPaintDevice*>(self);
	if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
vqopenglpaintdevice->setQOpenGLPaintDevice_DevType_IsBase(true);
	return vqopenglpaintdevice->devType();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnDevType(const QOpenGLPaintDevice* self, intptr_t slot) {
	auto* vqopenglpaintdevice = dynamic_cast<const VirtualQOpenGLPaintDevice*>(self);
	if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
vqopenglpaintdevice->setQOpenGLPaintDevice_DevType_Callback(reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_DevType_Callback>(slot));
}
}

// Base class handler implementation
QPaintEngine* QOpenGLPaintDevice_QBasePaintEngine(const QOpenGLPaintDevice* self) {
	auto* vqopenglpaintdevice = dynamic_cast<const VirtualQOpenGLPaintDevice*>(self);
	if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
vqopenglpaintdevice->setQOpenGLPaintDevice_PaintEngine_IsBase(true);
	return vqopenglpaintdevice->paintEngine();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnPaintEngine(const QOpenGLPaintDevice* self, intptr_t slot) {
	auto* vqopenglpaintdevice = dynamic_cast<const VirtualQOpenGLPaintDevice*>(self);
	if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
vqopenglpaintdevice->setQOpenGLPaintDevice_PaintEngine_Callback(reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_PaintEngine_Callback>(slot));
}
}

// Base class handler implementation
void QOpenGLPaintDevice_QBaseEnsureActiveTarget(QOpenGLPaintDevice* self) {
	auto* vqopenglpaintdevice = dynamic_cast<VirtualQOpenGLPaintDevice*>(self);
	if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
vqopenglpaintdevice->setQOpenGLPaintDevice_EnsureActiveTarget_IsBase(true);
	vqopenglpaintdevice->ensureActiveTarget();
}
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnEnsureActiveTarget(QOpenGLPaintDevice* self, intptr_t slot) {
	auto* vqopenglpaintdevice = dynamic_cast<VirtualQOpenGLPaintDevice*>(self);
	if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
vqopenglpaintdevice->setQOpenGLPaintDevice_EnsureActiveTarget_Callback(reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_EnsureActiveTarget_Callback>(slot));
}
}

void QOpenGLPaintDevice_Delete(QOpenGLPaintDevice* self) {
    delete self;
}

