#define WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QWindowsScreen
#include <qscreen_platform.h>
#include "libqscreen_platform.h"
#include "libqscreen_platform.hxx"

QNativeInterface__QWindowsScreen* QNativeInterface__QWindowsScreen_new() {
	 return new VirtualQNativeInterfaceQWindowsScreen();
}

struct HMONITOR__* QNativeInterface__QWindowsScreen_Handle(const QNativeInterface__QWindowsScreen* self) {
	return self->handle();
}

void QNativeInterface__QWindowsScreen_Connect_Handle(QNativeInterface__QWindowsScreen* self, intptr_t slot) {
    void (*slotFunc)(QNativeInterface__QWindowsScreen*) = reinterpret_cast<void (*)(QNativeInterface__QWindowsScreen*)>(slot);
    QNativeInterface::QWindowsScreen::connect(self, &QNativeInterface::QWindowsScreen::handle, [self, slotFunc]() {
	slotFunc(self);
    });
}

// Base class handler implementation
struct HMONITOR__* QNativeInterface__QWindowsScreen_QBaseHandle(const QNativeInterface__QWindowsScreen* self) {
	auto* vqnativeinterface__qwindowsscreen = dynamic_cast<const VirtualQNativeInterfaceQWindowsScreen*>(self);
	if (vqnativeinterface__qwindowsscreen && vqnativeinterface__qwindowsscreen->isVirtualQNativeInterfaceQWindowsScreen) {
vqnativeinterface__qwindowsscreen->setQNativeInterface__QWindowsScreen_Handle_IsBase(true);
	return vqnativeinterface__qwindowsscreen->handle();
}
}

// Auxiliary method to allow providing re-implementation
void QNativeInterface__QWindowsScreen_OnHandle(const QNativeInterface__QWindowsScreen* self, intptr_t slot) {
	auto* vqnativeinterface__qwindowsscreen = dynamic_cast<const VirtualQNativeInterfaceQWindowsScreen*>(self);
	if (vqnativeinterface__qwindowsscreen && vqnativeinterface__qwindowsscreen->isVirtualQNativeInterfaceQWindowsScreen) {
vqnativeinterface__qwindowsscreen->setQNativeInterface__QWindowsScreen_Handle_Callback(reinterpret_cast<VirtualQNativeInterfaceQWindowsScreen::QNativeInterface__QWindowsScreen_Handle_Callback>(slot));
}
}

