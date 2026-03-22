#include <QObject>
#include <QOffscreenSurface>
#include <QScreen>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QSurfaceFormat>
#include <qoffscreensurface.h>
#include "libqoffscreensurface.h"
#include "libqoffscreensurface.hxx"

QOffscreenSurface* QOffscreenSurface_new() {
	 return new VirtualQOffscreenSurface();
}

QOffscreenSurface* QOffscreenSurface_new2(QScreen* screen) {
	 return new VirtualQOffscreenSurface(screen);
}

QOffscreenSurface* QOffscreenSurface_new3(QScreen* screen, QObject* parent) {
	 return new VirtualQOffscreenSurface(screen, parent);
}

libqt_string QOffscreenSurface_Tr(const char* s) {
	QString _ret = QOffscreenSurface::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QOffscreenSurface_SurfaceType(const QOffscreenSurface* self) {
	return self->surfaceType();
}

void QOffscreenSurface_Create(QOffscreenSurface* self) {
	self->create();
}

void QOffscreenSurface_Destroy(QOffscreenSurface* self) {
	self->destroy();
}

bool QOffscreenSurface_IsValid(const QOffscreenSurface* self) {
	return self->isValid();
}

void QOffscreenSurface_SetFormat(QOffscreenSurface* self, const QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QOffscreenSurface_Format(const QOffscreenSurface* self) {
	return new QSurfaceFormat(self->format());
}

QSurfaceFormat* QOffscreenSurface_RequestedFormat(const QOffscreenSurface* self) {
	return new QSurfaceFormat(self->requestedFormat());
}

QSize* QOffscreenSurface_Size(const QOffscreenSurface* self) {
	return new QSize(self->size());
}

QScreen* QOffscreenSurface_Screen(const QOffscreenSurface* self) {
	return self->screen();
}

void QOffscreenSurface_SetScreen(QOffscreenSurface* self, QScreen* screen) {
	self->setScreen(screen);
}

QPlatformOffscreenSurface* QOffscreenSurface_Handle(const QOffscreenSurface* self) {
	return self->handle();
}

void QOffscreenSurface_ScreenChanged(QOffscreenSurface* self, QScreen* screen) {
	self->screenChanged(screen);
}

void QOffscreenSurface_Connect_ScreenChanged(QOffscreenSurface* self, intptr_t slot) {
    void (*slotFunc)(QOffscreenSurface*, QScreen*) = reinterpret_cast<void (*)(QOffscreenSurface*, QScreen*)>(slot);
    QOffscreenSurface::connect(self, &QOffscreenSurface::screenChanged, [self, slotFunc](QScreen* screen) {
	slotFunc(self, screen);
    });
}

libqt_string QOffscreenSurface_Tr2(const char* s, const char* c) {
	QString _ret = QOffscreenSurface::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOffscreenSurface_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOffscreenSurface::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QOffscreenSurface_QBaseSurfaceType(const QOffscreenSurface* self) {
	auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
	if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
vqoffscreensurface->setQOffscreenSurface_SurfaceType_IsBase(true);
	return vqoffscreensurface->surfaceType();
}
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSurfaceType(const QOffscreenSurface* self, intptr_t slot) {
	auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
	if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
vqoffscreensurface->setQOffscreenSurface_SurfaceType_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_SurfaceType_Callback>(slot));
}
}

// Base class handler implementation
QSurfaceFormat* QOffscreenSurface_QBaseFormat(const QOffscreenSurface* self) {
	auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
	if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
vqoffscreensurface->setQOffscreenSurface_Format_IsBase(true);
	return new QSurfaceFormat(vqoffscreensurface->format());
}
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnFormat(const QOffscreenSurface* self, intptr_t slot) {
	auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
	if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
vqoffscreensurface->setQOffscreenSurface_Format_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Format_Callback>(slot));
}
}

// Base class handler implementation
QSize* QOffscreenSurface_QBaseSize(const QOffscreenSurface* self) {
	auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
	if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
vqoffscreensurface->setQOffscreenSurface_Size_IsBase(true);
	return new QSize(vqoffscreensurface->size());
}
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSize(const QOffscreenSurface* self, intptr_t slot) {
	auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
	if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
vqoffscreensurface->setQOffscreenSurface_Size_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Size_Callback>(slot));
}
}

// Derived class handler implementation
void* QOffscreenSurface_ResolveInterface(const QOffscreenSurface* self, const char* name, int revision) {
	auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
	if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
	return vqoffscreensurface->resolveInterface(name, revision);
	} else {
	return self->QOffscreenSurface::resolveInterface(name, revision);
}
}

// Base class handler implementation
void* QOffscreenSurface_QBaseResolveInterface(const QOffscreenSurface* self, const char* name, int revision) {
	auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
	if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
vqoffscreensurface->setQOffscreenSurface_ResolveInterface_IsBase(true);
	return vqoffscreensurface->resolveInterface(name, revision);
}
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnResolveInterface(const QOffscreenSurface* self, intptr_t slot) {
	auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
	if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
vqoffscreensurface->setQOffscreenSurface_ResolveInterface_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_ResolveInterface_Callback>(slot));
}
}

void QOffscreenSurface_Delete(QOffscreenSurface* self) {
    delete self;
}

