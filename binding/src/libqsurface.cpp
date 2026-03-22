#include <QSize>
#include <QSurface>
#include <QSurfaceFormat>
#include <qsurface.h>
#include "libqsurface.h"
#include "libqsurface.hxx"

QSurface* QSurface_new(const QSurface* param1) {
	 return new VirtualQSurface(*param1);
}

int QSurface_SurfaceClass(const QSurface* self) {
	return self->surfaceClass();
}

QSurfaceFormat* QSurface_Format(const QSurface* self) {
	return new QSurfaceFormat(self->format());
}

int QSurface_SurfaceType(const QSurface* self) {
	return self->surfaceType();
}

bool QSurface_SupportsOpenGL(const QSurface* self) {
	return self->supportsOpenGL();
}

QSize* QSurface_Size(const QSurface* self) {
	return new QSize(self->size());
}

// Base class handler implementation
QSurfaceFormat* QSurface_QBaseFormat(const QSurface* self) {
	auto* vqsurface = dynamic_cast<const VirtualQSurface*>(self);
	if (vqsurface && vqsurface->isVirtualQSurface) {
vqsurface->setQSurface_Format_IsBase(true);
	return new QSurfaceFormat(vqsurface->format());
}
}

// Auxiliary method to allow providing re-implementation
void QSurface_OnFormat(const QSurface* self, intptr_t slot) {
	auto* vqsurface = dynamic_cast<const VirtualQSurface*>(self);
	if (vqsurface && vqsurface->isVirtualQSurface) {
vqsurface->setQSurface_Format_Callback(reinterpret_cast<VirtualQSurface::QSurface_Format_Callback>(slot));
}
}

// Base class handler implementation
int QSurface_QBaseSurfaceType(const QSurface* self) {
	auto* vqsurface = dynamic_cast<const VirtualQSurface*>(self);
	if (vqsurface && vqsurface->isVirtualQSurface) {
vqsurface->setQSurface_SurfaceType_IsBase(true);
	return vqsurface->surfaceType();
}
}

// Auxiliary method to allow providing re-implementation
void QSurface_OnSurfaceType(const QSurface* self, intptr_t slot) {
	auto* vqsurface = dynamic_cast<const VirtualQSurface*>(self);
	if (vqsurface && vqsurface->isVirtualQSurface) {
vqsurface->setQSurface_SurfaceType_Callback(reinterpret_cast<VirtualQSurface::QSurface_SurfaceType_Callback>(slot));
}
}

// Base class handler implementation
QSize* QSurface_QBaseSize(const QSurface* self) {
	auto* vqsurface = dynamic_cast<const VirtualQSurface*>(self);
	if (vqsurface && vqsurface->isVirtualQSurface) {
vqsurface->setQSurface_Size_IsBase(true);
	return new QSize(vqsurface->size());
}
}

// Auxiliary method to allow providing re-implementation
void QSurface_OnSize(const QSurface* self, intptr_t slot) {
	auto* vqsurface = dynamic_cast<const VirtualQSurface*>(self);
	if (vqsurface && vqsurface->isVirtualQSurface) {
vqsurface->setQSurface_Size_Callback(reinterpret_cast<VirtualQSurface::QSurface_Size_Callback>(slot));
}
}

// Derived class handler implementation
void QSurface_OperatorAssign(QSurface* self, const QSurface* param1) {
	auto* vqsurface = dynamic_cast<VirtualQSurface*>(self);
	if (vqsurface && vqsurface->isVirtualQSurface) {
	vqsurface->operator=(*param1);
	} else {
	self->QSurface::operator=(*param1);
}
}

// Base class handler implementation
void QSurface_QBaseOperatorAssign(QSurface* self, const QSurface* param1) {
	auto* vqsurface = dynamic_cast<VirtualQSurface*>(self);
	if (vqsurface && vqsurface->isVirtualQSurface) {
vqsurface->setQSurface_OperatorAssign_IsBase(true);
	vqsurface->operator=(*param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSurface_OnOperatorAssign(QSurface* self, intptr_t slot) {
	auto* vqsurface = dynamic_cast<VirtualQSurface*>(self);
	if (vqsurface && vqsurface->isVirtualQSurface) {
vqsurface->setQSurface_OperatorAssign_Callback(reinterpret_cast<VirtualQSurface::QSurface_OperatorAssign_Callback>(slot));
}
}

void QSurface_Delete(QSurface* self) {
    delete self;
}

