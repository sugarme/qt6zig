#include <QAbstractVideoBuffer>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractVideoBuffer__MapData
#include <QVideoFrameFormat>
#include <qabstractvideobuffer.h>
#include "libqabstractvideobuffer.h"
#include "libqabstractvideobuffer.hxx"

QAbstractVideoBuffer* QAbstractVideoBuffer_new() {
	 return new VirtualQAbstractVideoBuffer();
}

QAbstractVideoBuffer__MapData* QAbstractVideoBuffer_Map(QAbstractVideoBuffer* self, int mode) {
	return new QAbstractVideoBuffer::MapData(self->map(static_cast<QVideoFrame::MapMode>(mode)));
}

void QAbstractVideoBuffer_Unmap(QAbstractVideoBuffer* self) {
	self->unmap();
}

QVideoFrameFormat* QAbstractVideoBuffer_Format(const QAbstractVideoBuffer* self) {
	return new QVideoFrameFormat(self->format());
}

// Base class handler implementation
QAbstractVideoBuffer__MapData* QAbstractVideoBuffer_QBaseMap(QAbstractVideoBuffer* self, int mode) {
	auto* vqabstractvideobuffer = dynamic_cast<VirtualQAbstractVideoBuffer*>(self);
	if (vqabstractvideobuffer && vqabstractvideobuffer->isVirtualQAbstractVideoBuffer) {
vqabstractvideobuffer->setQAbstractVideoBuffer_Map_IsBase(true);
	return new QAbstractVideoBuffer::MapData(vqabstractvideobuffer->map(static_cast<QVideoFrame::MapMode>(mode)));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractVideoBuffer_OnMap(QAbstractVideoBuffer* self, intptr_t slot) {
	auto* vqabstractvideobuffer = dynamic_cast<VirtualQAbstractVideoBuffer*>(self);
	if (vqabstractvideobuffer && vqabstractvideobuffer->isVirtualQAbstractVideoBuffer) {
vqabstractvideobuffer->setQAbstractVideoBuffer_Map_Callback(reinterpret_cast<VirtualQAbstractVideoBuffer::QAbstractVideoBuffer_Map_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractVideoBuffer_QBaseUnmap(QAbstractVideoBuffer* self) {
	auto* vqabstractvideobuffer = dynamic_cast<VirtualQAbstractVideoBuffer*>(self);
	if (vqabstractvideobuffer && vqabstractvideobuffer->isVirtualQAbstractVideoBuffer) {
vqabstractvideobuffer->setQAbstractVideoBuffer_Unmap_IsBase(true);
	vqabstractvideobuffer->unmap();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractVideoBuffer_OnUnmap(QAbstractVideoBuffer* self, intptr_t slot) {
	auto* vqabstractvideobuffer = dynamic_cast<VirtualQAbstractVideoBuffer*>(self);
	if (vqabstractvideobuffer && vqabstractvideobuffer->isVirtualQAbstractVideoBuffer) {
vqabstractvideobuffer->setQAbstractVideoBuffer_Unmap_Callback(reinterpret_cast<VirtualQAbstractVideoBuffer::QAbstractVideoBuffer_Unmap_Callback>(slot));
}
}

// Base class handler implementation
QVideoFrameFormat* QAbstractVideoBuffer_QBaseFormat(const QAbstractVideoBuffer* self) {
	auto* vqabstractvideobuffer = dynamic_cast<const VirtualQAbstractVideoBuffer*>(self);
	if (vqabstractvideobuffer && vqabstractvideobuffer->isVirtualQAbstractVideoBuffer) {
vqabstractvideobuffer->setQAbstractVideoBuffer_Format_IsBase(true);
	return new QVideoFrameFormat(vqabstractvideobuffer->format());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractVideoBuffer_OnFormat(const QAbstractVideoBuffer* self, intptr_t slot) {
	auto* vqabstractvideobuffer = dynamic_cast<const VirtualQAbstractVideoBuffer*>(self);
	if (vqabstractvideobuffer && vqabstractvideobuffer->isVirtualQAbstractVideoBuffer) {
vqabstractvideobuffer->setQAbstractVideoBuffer_Format_Callback(reinterpret_cast<VirtualQAbstractVideoBuffer::QAbstractVideoBuffer_Format_Callback>(slot));
}
}

void QAbstractVideoBuffer_Delete(QAbstractVideoBuffer* self) {
    delete self;
}

QAbstractVideoBuffer__MapData* QAbstractVideoBuffer__MapData_new(const QAbstractVideoBuffer__MapData* other) {
	 return new QAbstractVideoBuffer::MapData(*other);
}

QAbstractVideoBuffer__MapData* QAbstractVideoBuffer__MapData_new2(QAbstractVideoBuffer__MapData* other) {
	 return new QAbstractVideoBuffer::MapData(*other);
}

void QAbstractVideoBuffer__MapData_CopyAssign(QAbstractVideoBuffer__MapData* self, QAbstractVideoBuffer__MapData* other) {
    *self = *other;
}

void QAbstractVideoBuffer__MapData_MoveAssign(QAbstractVideoBuffer__MapData* self, QAbstractVideoBuffer__MapData* other) {
    *self = std::move(*other);
}

int QAbstractVideoBuffer__MapData_PlaneCount(const QAbstractVideoBuffer__MapData* self) {
	return self->planeCount;
}

void QAbstractVideoBuffer__MapData_SetPlaneCount(QAbstractVideoBuffer__MapData* self, int planeCount) {
	self->planeCount;
}

void QAbstractVideoBuffer__MapData_Delete(QAbstractVideoBuffer__MapData* self) {
    delete self;
}

