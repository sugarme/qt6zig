#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <qpaintdevice.h>
#include "libqpaintdevice.h"
#include "libqpaintdevice.hxx"

int QPaintDevice_DevType(const QPaintDevice* self) {
	return self->devType();
}

bool QPaintDevice_PaintingActive(const QPaintDevice* self) {
	return self->paintingActive();
}

QPaintEngine* QPaintDevice_PaintEngine(const QPaintDevice* self) {
	return self->paintEngine();
}

int QPaintDevice_Width(const QPaintDevice* self) {
	return self->width();
}

int QPaintDevice_Height(const QPaintDevice* self) {
	return self->height();
}

int QPaintDevice_WidthMM(const QPaintDevice* self) {
	return self->widthMM();
}

int QPaintDevice_HeightMM(const QPaintDevice* self) {
	return self->heightMM();
}

int QPaintDevice_LogicalDpiX(const QPaintDevice* self) {
	return self->logicalDpiX();
}

int QPaintDevice_LogicalDpiY(const QPaintDevice* self) {
	return self->logicalDpiY();
}

int QPaintDevice_PhysicalDpiX(const QPaintDevice* self) {
	return self->physicalDpiX();
}

int QPaintDevice_PhysicalDpiY(const QPaintDevice* self) {
	return self->physicalDpiY();
}

double QPaintDevice_DevicePixelRatio(const QPaintDevice* self) {
	return self->devicePixelRatio();
}

double QPaintDevice_DevicePixelRatioF(const QPaintDevice* self) {
	return self->devicePixelRatioF();
}

int QPaintDevice_ColorCount(const QPaintDevice* self) {
	return self->colorCount();
}

int QPaintDevice_Depth(const QPaintDevice* self) {
	return self->depth();
}

double QPaintDevice_DevicePixelRatioFScale() {
	return QPaintDevice::devicePixelRatioFScale();
}

int QPaintDevice_EncodeMetricF(int metric, double value) {
	return QPaintDevice::encodeMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metric), value);
}

// Base class handler implementation
int QPaintDevice_QBaseDevType(const QPaintDevice* self) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_DevType_IsBase(true);
	return vqpaintdevice->devType();
}
}

// Auxiliary method to allow providing re-implementation
void QPaintDevice_OnDevType(const QPaintDevice* self, intptr_t slot) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_DevType_Callback(reinterpret_cast<VirtualQPaintDevice::QPaintDevice_DevType_Callback>(slot));
}
}

// Base class handler implementation
QPaintEngine* QPaintDevice_QBasePaintEngine(const QPaintDevice* self) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_PaintEngine_IsBase(true);
	return vqpaintdevice->paintEngine();
}
}

// Auxiliary method to allow providing re-implementation
void QPaintDevice_OnPaintEngine(const QPaintDevice* self, intptr_t slot) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_PaintEngine_Callback(reinterpret_cast<VirtualQPaintDevice::QPaintDevice_PaintEngine_Callback>(slot));
}
}

void QPaintDevice_Delete(QPaintDevice* self) {
    delete self;
}

