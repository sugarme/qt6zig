#include <QAbstractNativeEventFilter>
#include <QByteArray>
#include <qabstractnativeeventfilter.h>
#include "libqabstractnativeeventfilter.h"
#include "libqabstractnativeeventfilter.hxx"

QAbstractNativeEventFilter* QAbstractNativeEventFilter_new() {
	 return new VirtualQAbstractNativeEventFilter();
}

bool QAbstractNativeEventFilter_NativeEventFilter(QAbstractNativeEventFilter* self, const libqt_string eventType, void* message, intptr_t* result) {
	return self->nativeEventFilter(QByteArray(eventType.data, eventType.len), message, result);
}

// Base class handler implementation
bool QAbstractNativeEventFilter_QBaseNativeEventFilter(QAbstractNativeEventFilter* self, const libqt_string eventType, void* message, intptr_t* result) {
	auto* vqabstractnativeeventfilter = dynamic_cast<VirtualQAbstractNativeEventFilter*>(self);
	if (vqabstractnativeeventfilter && vqabstractnativeeventfilter->isVirtualQAbstractNativeEventFilter) {
vqabstractnativeeventfilter->setQAbstractNativeEventFilter_NativeEventFilter_IsBase(true);
	return vqabstractnativeeventfilter->nativeEventFilter(QByteArray(eventType.data, eventType.len), message, result);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractNativeEventFilter_OnNativeEventFilter(QAbstractNativeEventFilter* self, intptr_t slot) {
	auto* vqabstractnativeeventfilter = dynamic_cast<VirtualQAbstractNativeEventFilter*>(self);
	if (vqabstractnativeeventfilter && vqabstractnativeeventfilter->isVirtualQAbstractNativeEventFilter) {
vqabstractnativeeventfilter->setQAbstractNativeEventFilter_NativeEventFilter_Callback(reinterpret_cast<VirtualQAbstractNativeEventFilter::QAbstractNativeEventFilter_NativeEventFilter_Callback>(slot));
}
}

void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self) {
    delete self;
}

