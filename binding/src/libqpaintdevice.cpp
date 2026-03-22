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

// Derived class handler implementation
int QPaintDevice_Metric(const QPaintDevice* self, int metric) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
	return vqpaintdevice->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
	} else {
	return self->QPaintDevice::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Base class handler implementation
int QPaintDevice_QBaseMetric(const QPaintDevice* self, int metric) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_Metric_IsBase(true);
	return vqpaintdevice->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
}
}

// Auxiliary method to allow providing re-implementation
void QPaintDevice_OnMetric(const QPaintDevice* self, intptr_t slot) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_Metric_Callback(reinterpret_cast<VirtualQPaintDevice::QPaintDevice_Metric_Callback>(slot));
}
}

// Derived class handler implementation
void QPaintDevice_InitPainter(const QPaintDevice* self, QPainter* painter) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
	vqpaintdevice->initPainter(painter);
	} else {
	self->QPaintDevice::initPainter(painter);
}
}

// Base class handler implementation
void QPaintDevice_QBaseInitPainter(const QPaintDevice* self, QPainter* painter) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_InitPainter_IsBase(true);
	vqpaintdevice->initPainter(painter);
}
}

// Auxiliary method to allow providing re-implementation
void QPaintDevice_OnInitPainter(const QPaintDevice* self, intptr_t slot) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_InitPainter_Callback(reinterpret_cast<VirtualQPaintDevice::QPaintDevice_InitPainter_Callback>(slot));
}
}

// Derived class handler implementation
QPaintDevice* QPaintDevice_Redirected(const QPaintDevice* self, QPoint* offset) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
	return vqpaintdevice->redirected(offset);
	} else {
	return self->QPaintDevice::redirected(offset);
}
}

// Base class handler implementation
QPaintDevice* QPaintDevice_QBaseRedirected(const QPaintDevice* self, QPoint* offset) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_Redirected_IsBase(true);
	return vqpaintdevice->redirected(offset);
}
}

// Auxiliary method to allow providing re-implementation
void QPaintDevice_OnRedirected(const QPaintDevice* self, intptr_t slot) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_Redirected_Callback(reinterpret_cast<VirtualQPaintDevice::QPaintDevice_Redirected_Callback>(slot));
}
}

// Derived class handler implementation
QPainter* QPaintDevice_SharedPainter(const QPaintDevice* self) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
	return vqpaintdevice->sharedPainter();
	} else {
	return self->QPaintDevice::sharedPainter();
}
}

// Base class handler implementation
QPainter* QPaintDevice_QBaseSharedPainter(const QPaintDevice* self) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_SharedPainter_IsBase(true);
	return vqpaintdevice->sharedPainter();
}
}

// Auxiliary method to allow providing re-implementation
void QPaintDevice_OnSharedPainter(const QPaintDevice* self, intptr_t slot) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_SharedPainter_Callback(reinterpret_cast<VirtualQPaintDevice::QPaintDevice_SharedPainter_Callback>(slot));
}
}

// Derived class handler implementation
double QPaintDevice_GetDecodedMetricF(const QPaintDevice* self, int metricA, int metricB) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
	return vqpaintdevice->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
	} else {
	return self->QPaintDevice::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
}
}

// Base class handler implementation
double QPaintDevice_QBaseGetDecodedMetricF(const QPaintDevice* self, int metricA, int metricB) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_GetDecodedMetricF_IsBase(true);
	return vqpaintdevice->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
}
}

// Auxiliary method to allow providing re-implementation
void QPaintDevice_OnGetDecodedMetricF(const QPaintDevice* self, intptr_t slot) {
	auto* vqpaintdevice = dynamic_cast<const VirtualQPaintDevice*>(self);
	if (vqpaintdevice && vqpaintdevice->isVirtualQPaintDevice) {
vqpaintdevice->setQPaintDevice_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQPaintDevice::QPaintDevice_GetDecodedMetricF_Callback>(slot));
}
}

void QPaintDevice_Delete(QPaintDevice* self) {
    delete self;
}

