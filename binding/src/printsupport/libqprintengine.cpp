#include <QPrintEngine>
#include <QVariant>
#include <qprintengine.h>
#include "libqprintengine.h"
#include "libqprintengine.hxx"

QPrintEngine* QPrintEngine_new() {
	 return new VirtualQPrintEngine();
}

QPrintEngine* QPrintEngine_new2(const QPrintEngine* param1) {
	 return new VirtualQPrintEngine(*param1);
}

void QPrintEngine_SetProperty(QPrintEngine* self, int key, const QVariant* value) {
	self->setProperty(static_cast<QPrintEngine::PrintEnginePropertyKey>(key), *value);
}

QVariant* QPrintEngine_Property(const QPrintEngine* self, int key) {
	return new QVariant(self->property(static_cast<QPrintEngine::PrintEnginePropertyKey>(key)));
}

bool QPrintEngine_NewPage(QPrintEngine* self) {
	return self->newPage();
}

bool QPrintEngine_Abort(QPrintEngine* self) {
	return self->abort();
}

int QPrintEngine_Metric(const QPrintEngine* self, int param1) {
	return self->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
}

int QPrintEngine_PrinterState(const QPrintEngine* self) {
	return self->printerState();
}

void QPrintEngine_OperatorAssign(QPrintEngine* self, const QPrintEngine* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
void QPrintEngine_QBaseSetProperty(QPrintEngine* self, int key, const QVariant* value) {
	auto* vqprintengine = dynamic_cast<VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_SetProperty_IsBase(true);
	vqprintengine->setProperty(static_cast<QPrintEngine::PrintEnginePropertyKey>(key), *value);
}
}

// Auxiliary method to allow providing re-implementation
void QPrintEngine_OnSetProperty(QPrintEngine* self, intptr_t slot) {
	auto* vqprintengine = dynamic_cast<VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_SetProperty_Callback(reinterpret_cast<VirtualQPrintEngine::QPrintEngine_SetProperty_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QPrintEngine_QBaseProperty(const QPrintEngine* self, int key) {
	auto* vqprintengine = dynamic_cast<const VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_Property_IsBase(true);
	return new QVariant(vqprintengine->property(static_cast<QPrintEngine::PrintEnginePropertyKey>(key)));
}
}

// Auxiliary method to allow providing re-implementation
void QPrintEngine_OnProperty(const QPrintEngine* self, intptr_t slot) {
	auto* vqprintengine = dynamic_cast<const VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_Property_Callback(reinterpret_cast<VirtualQPrintEngine::QPrintEngine_Property_Callback>(slot));
}
}

// Base class handler implementation
bool QPrintEngine_QBaseNewPage(QPrintEngine* self) {
	auto* vqprintengine = dynamic_cast<VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_NewPage_IsBase(true);
	return vqprintengine->newPage();
}
}

// Auxiliary method to allow providing re-implementation
void QPrintEngine_OnNewPage(QPrintEngine* self, intptr_t slot) {
	auto* vqprintengine = dynamic_cast<VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_NewPage_Callback(reinterpret_cast<VirtualQPrintEngine::QPrintEngine_NewPage_Callback>(slot));
}
}

// Base class handler implementation
bool QPrintEngine_QBaseAbort(QPrintEngine* self) {
	auto* vqprintengine = dynamic_cast<VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_Abort_IsBase(true);
	return vqprintengine->abort();
}
}

// Auxiliary method to allow providing re-implementation
void QPrintEngine_OnAbort(QPrintEngine* self, intptr_t slot) {
	auto* vqprintengine = dynamic_cast<VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_Abort_Callback(reinterpret_cast<VirtualQPrintEngine::QPrintEngine_Abort_Callback>(slot));
}
}

// Base class handler implementation
int QPrintEngine_QBaseMetric(const QPrintEngine* self, int param1) {
	auto* vqprintengine = dynamic_cast<const VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_Metric_IsBase(true);
	return vqprintengine->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
}
}

// Auxiliary method to allow providing re-implementation
void QPrintEngine_OnMetric(const QPrintEngine* self, intptr_t slot) {
	auto* vqprintengine = dynamic_cast<const VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_Metric_Callback(reinterpret_cast<VirtualQPrintEngine::QPrintEngine_Metric_Callback>(slot));
}
}

// Base class handler implementation
int QPrintEngine_QBasePrinterState(const QPrintEngine* self) {
	auto* vqprintengine = dynamic_cast<const VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_PrinterState_IsBase(true);
	return vqprintengine->printerState();
}
}

// Auxiliary method to allow providing re-implementation
void QPrintEngine_OnPrinterState(const QPrintEngine* self, intptr_t slot) {
	auto* vqprintengine = dynamic_cast<const VirtualQPrintEngine*>(self);
	if (vqprintengine && vqprintengine->isVirtualQPrintEngine) {
vqprintengine->setQPrintEngine_PrinterState_Callback(reinterpret_cast<VirtualQPrintEngine::QPrintEngine_PrinterState_Callback>(slot));
}
}

void QPrintEngine_Delete(QPrintEngine* self) {
    delete self;
}

