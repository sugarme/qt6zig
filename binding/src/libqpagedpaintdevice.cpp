#include <QMarginsF>
#include <QPageLayout>
#include <QPageRanges>
#include <QPageSize>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <qpagedpaintdevice.h>
#include "libqpagedpaintdevice.h"
#include "libqpagedpaintdevice.hxx"

bool QPagedPaintDevice_NewPage(QPagedPaintDevice* self) {
	return self->newPage();
}

bool QPagedPaintDevice_SetPageLayout(QPagedPaintDevice* self, const QPageLayout* pageLayout) {
	return self->setPageLayout(*pageLayout);
}

bool QPagedPaintDevice_SetPageSize(QPagedPaintDevice* self, const QPageSize* pageSize) {
	return self->setPageSize(*pageSize);
}

bool QPagedPaintDevice_SetPageOrientation(QPagedPaintDevice* self, int orientation) {
	return self->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

bool QPagedPaintDevice_SetPageMargins(QPagedPaintDevice* self, const QMarginsF* margins, int units) {
	return self->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

QPageLayout* QPagedPaintDevice_PageLayout(const QPagedPaintDevice* self) {
	return new QPageLayout(self->pageLayout());
}

void QPagedPaintDevice_SetPageRanges(QPagedPaintDevice* self, const QPageRanges* ranges) {
	self->setPageRanges(*ranges);
}

QPageRanges* QPagedPaintDevice_PageRanges(const QPagedPaintDevice* self) {
	return new QPageRanges(self->pageRanges());
}

// Base class handler implementation
bool QPagedPaintDevice_QBaseNewPage(QPagedPaintDevice* self) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_NewPage_IsBase(true);
	return vqpagedpaintdevice->newPage();
}
}

// Auxiliary method to allow providing re-implementation
void QPagedPaintDevice_OnNewPage(QPagedPaintDevice* self, intptr_t slot) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_NewPage_Callback(reinterpret_cast<VirtualQPagedPaintDevice::QPagedPaintDevice_NewPage_Callback>(slot));
}
}

// Base class handler implementation
bool QPagedPaintDevice_QBaseSetPageLayout(QPagedPaintDevice* self, const QPageLayout* pageLayout) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_SetPageLayout_IsBase(true);
	return vqpagedpaintdevice->setPageLayout(*pageLayout);
}
}

// Auxiliary method to allow providing re-implementation
void QPagedPaintDevice_OnSetPageLayout(QPagedPaintDevice* self, intptr_t slot) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_SetPageLayout_Callback(reinterpret_cast<VirtualQPagedPaintDevice::QPagedPaintDevice_SetPageLayout_Callback>(slot));
}
}

// Base class handler implementation
bool QPagedPaintDevice_QBaseSetPageSize(QPagedPaintDevice* self, const QPageSize* pageSize) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_SetPageSize_IsBase(true);
	return vqpagedpaintdevice->setPageSize(*pageSize);
}
}

// Auxiliary method to allow providing re-implementation
void QPagedPaintDevice_OnSetPageSize(QPagedPaintDevice* self, intptr_t slot) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_SetPageSize_Callback(reinterpret_cast<VirtualQPagedPaintDevice::QPagedPaintDevice_SetPageSize_Callback>(slot));
}
}

// Base class handler implementation
bool QPagedPaintDevice_QBaseSetPageOrientation(QPagedPaintDevice* self, int orientation) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_SetPageOrientation_IsBase(true);
	return vqpagedpaintdevice->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}
}

// Auxiliary method to allow providing re-implementation
void QPagedPaintDevice_OnSetPageOrientation(QPagedPaintDevice* self, intptr_t slot) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_SetPageOrientation_Callback(reinterpret_cast<VirtualQPagedPaintDevice::QPagedPaintDevice_SetPageOrientation_Callback>(slot));
}
}

// Base class handler implementation
bool QPagedPaintDevice_QBaseSetPageMargins(QPagedPaintDevice* self, const QMarginsF* margins, int units) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_SetPageMargins_IsBase(true);
	return vqpagedpaintdevice->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}
}

// Auxiliary method to allow providing re-implementation
void QPagedPaintDevice_OnSetPageMargins(QPagedPaintDevice* self, intptr_t slot) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_SetPageMargins_Callback(reinterpret_cast<VirtualQPagedPaintDevice::QPagedPaintDevice_SetPageMargins_Callback>(slot));
}
}

// Base class handler implementation
void QPagedPaintDevice_QBaseSetPageRanges(QPagedPaintDevice* self, const QPageRanges* ranges) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_SetPageRanges_IsBase(true);
	vqpagedpaintdevice->setPageRanges(*ranges);
}
}

// Auxiliary method to allow providing re-implementation
void QPagedPaintDevice_OnSetPageRanges(QPagedPaintDevice* self, intptr_t slot) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_SetPageRanges_Callback(reinterpret_cast<VirtualQPagedPaintDevice::QPagedPaintDevice_SetPageRanges_Callback>(slot));
}
}

// Derived class handler implementation
QPagedPaintDevicePrivate* QPagedPaintDevice_Dd(QPagedPaintDevice* self) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
	return vqpagedpaintdevice->dd();
	} else {
	return self->QPagedPaintDevice::dd();
}
}

// Base class handler implementation
QPagedPaintDevicePrivate* QPagedPaintDevice_QBaseDd(QPagedPaintDevice* self) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_Dd_IsBase(true);
	return vqpagedpaintdevice->dd();
}
}

// Auxiliary method to allow providing re-implementation
void QPagedPaintDevice_OnDd(QPagedPaintDevice* self, intptr_t slot) {
	auto* vqpagedpaintdevice = dynamic_cast<VirtualQPagedPaintDevice*>(self);
	if (vqpagedpaintdevice && vqpagedpaintdevice->isVirtualQPagedPaintDevice) {
vqpagedpaintdevice->setQPagedPaintDevice_Dd_Callback(reinterpret_cast<VirtualQPagedPaintDevice::QPagedPaintDevice_Dd_Callback>(slot));
}
}

void QPagedPaintDevice_Delete(QPagedPaintDevice* self) {
    delete self;
}

