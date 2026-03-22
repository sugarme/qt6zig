#define WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QWGLContext
#include <QOpenGLContext>
#include <qopenglcontext_platform.h>
#include "libqopenglcontext_platform.h"
#include "libqopenglcontext_platform.hxx"

QNativeInterface__QWGLContext* QNativeInterface__QWGLContext_new() {
	 return new VirtualQNativeInterfaceQWGLContext();
}

struct HINSTANCE__* QNativeInterface__QWGLContext_OpenGLModuleHandle() {
	return QNativeInterface::QWGLContext::openGLModuleHandle();
}

QOpenGLContext* QNativeInterface__QWGLContext_FromNative(struct HGLRC__* context, struct HWND__* window) {
	return QNativeInterface::QWGLContext::fromNative(context, window);
}

struct HGLRC__* QNativeInterface__QWGLContext_NativeContext(const QNativeInterface__QWGLContext* self) {
	return self->nativeContext();
}

void QNativeInterface__QWGLContext_Connect_NativeContext(QNativeInterface__QWGLContext* self, intptr_t slot) {
    void (*slotFunc)(QNativeInterface__QWGLContext*) = reinterpret_cast<void (*)(QNativeInterface__QWGLContext*)>(slot);
    QNativeInterface::QWGLContext::connect(self, &QNativeInterface::QWGLContext::nativeContext, [self, slotFunc]() {
	slotFunc(self);
    });
}

QOpenGLContext* QNativeInterface__QWGLContext_FromNative3(struct HGLRC__* context, struct HWND__* window, QOpenGLContext* shareContext) {
	return QNativeInterface::QWGLContext::fromNative(context, window, shareContext);
}

// Base class handler implementation
struct HGLRC__* QNativeInterface__QWGLContext_QBaseNativeContext(const QNativeInterface__QWGLContext* self) {
	auto* vqnativeinterface__qwglcontext = dynamic_cast<const VirtualQNativeInterfaceQWGLContext*>(self);
	if (vqnativeinterface__qwglcontext && vqnativeinterface__qwglcontext->isVirtualQNativeInterfaceQWGLContext) {
vqnativeinterface__qwglcontext->setQNativeInterface__QWGLContext_NativeContext_IsBase(true);
	return vqnativeinterface__qwglcontext->nativeContext();
}
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWGLContext_OnNativeContext(const QNativeInterface__QWGLContext* self, intptr_t slot) {
	auto* vqnativeinterface__qwglcontext = dynamic_cast<const VirtualQNativeInterfaceQWGLContext*>(self);
	if (vqnativeinterface__qwglcontext && vqnativeinterface__qwglcontext->isVirtualQNativeInterfaceQWGLContext) {
vqnativeinterface__qwglcontext->setQNativeInterface__QWGLContext_NativeContext_Callback(reinterpret_cast<VirtualQNativeInterfaceQWGLContext::QNativeInterface__QWGLContext_NativeContext_Callback>(slot));
}
}

