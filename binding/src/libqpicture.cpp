#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPicture>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpicture.h>
#include "libqpicture.h"
#include "libqpicture.hxx"

QPicture* QPicture_new() {
	 return new VirtualQPicture();
}

QPicture* QPicture_new2(const QPicture* param1) {
	 return new VirtualQPicture(*param1);
}

QPicture* QPicture_new3(int formatVersion) {
	 return new VirtualQPicture(formatVersion);
}

bool QPicture_IsNull(const QPicture* self) {
	return self->isNull();
}

int QPicture_DevType(const QPicture* self) {
	return self->devType();
}

unsigned int QPicture_Size(const QPicture* self) {
	return self->size();
}

const char* QPicture_Data(const QPicture* self) {
	return self->data();
}

void QPicture_SetData(QPicture* self, const char* data, unsigned int size) {
	self->setData(data, size);
}

bool QPicture_Play(QPicture* self, QPainter* p) {
	return self->play(p);
}

bool QPicture_Load(QPicture* self, QIODevice* dev) {
	return self->load(dev);
}

bool QPicture_Load2(QPicture* self, const libqt_string fileName) {
	return self->load(QString::fromUtf8(fileName.data, fileName.len));
}

bool QPicture_Save(QPicture* self, QIODevice* dev) {
	return self->save(dev);
}

bool QPicture_Save2(QPicture* self, const libqt_string fileName) {
	return self->save(QString::fromUtf8(fileName.data, fileName.len));
}

QRect* QPicture_BoundingRect(const QPicture* self) {
	return new QRect(self->boundingRect());
}

void QPicture_SetBoundingRect(QPicture* self, const QRect* r) {
	self->setBoundingRect(*r);
}

void QPicture_OperatorAssign(QPicture* self, const QPicture* p) {
	self->operator=(*p);
}

void QPicture_Swap(QPicture* self, QPicture* other) {
	self->swap(*other);
}

void QPicture_Detach(QPicture* self) {
	self->detach();
}

bool QPicture_IsDetached(const QPicture* self) {
	return self->isDetached();
}

QPaintEngine* QPicture_PaintEngine(const QPicture* self) {
	return self->paintEngine();
}

QExplicitlySharedDataPointer<QPicturePrivate>* QPicture_DataPtr(QPicture* self) {
	return self->data_ptr();
}

// Base class handler implementation
int QPicture_QBaseDevType(const QPicture* self) {
	auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
	if (vqpicture && vqpicture->isVirtualQPicture) {
vqpicture->setQPicture_DevType_IsBase(true);
	return vqpicture->devType();
}
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnDevType(const QPicture* self, intptr_t slot) {
	auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
	if (vqpicture && vqpicture->isVirtualQPicture) {
vqpicture->setQPicture_DevType_Callback(reinterpret_cast<VirtualQPicture::QPicture_DevType_Callback>(slot));
}
}

// Base class handler implementation
void QPicture_QBaseSetData(QPicture* self, const char* data, unsigned int size) {
	auto* vqpicture = dynamic_cast<VirtualQPicture*>(self);
	if (vqpicture && vqpicture->isVirtualQPicture) {
vqpicture->setQPicture_SetData_IsBase(true);
	vqpicture->setData(data, size);
}
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnSetData(QPicture* self, intptr_t slot) {
	auto* vqpicture = dynamic_cast<VirtualQPicture*>(self);
	if (vqpicture && vqpicture->isVirtualQPicture) {
vqpicture->setQPicture_SetData_Callback(reinterpret_cast<VirtualQPicture::QPicture_SetData_Callback>(slot));
}
}

// Base class handler implementation
QPaintEngine* QPicture_QBasePaintEngine(const QPicture* self) {
	auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
	if (vqpicture && vqpicture->isVirtualQPicture) {
vqpicture->setQPicture_PaintEngine_IsBase(true);
	return vqpicture->paintEngine();
}
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnPaintEngine(const QPicture* self, intptr_t slot) {
	auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
	if (vqpicture && vqpicture->isVirtualQPicture) {
vqpicture->setQPicture_PaintEngine_Callback(reinterpret_cast<VirtualQPicture::QPicture_PaintEngine_Callback>(slot));
}
}

// Derived class handler implementation
int QPicture_Metric(const QPicture* self, int m) {
	auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
	if (vqpicture && vqpicture->isVirtualQPicture) {
	return vqpicture->metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
	} else {
	return self->QPicture::metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
}
}

// Base class handler implementation
int QPicture_QBaseMetric(const QPicture* self, int m) {
	auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
	if (vqpicture && vqpicture->isVirtualQPicture) {
vqpicture->setQPicture_Metric_IsBase(true);
	return vqpicture->metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
}
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnMetric(const QPicture* self, intptr_t slot) {
	auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
	if (vqpicture && vqpicture->isVirtualQPicture) {
vqpicture->setQPicture_Metric_Callback(reinterpret_cast<VirtualQPicture::QPicture_Metric_Callback>(slot));
}
}

void QPicture_Delete(QPicture* self) {
    delete self;
}

