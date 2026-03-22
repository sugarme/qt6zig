#include <QAbstractFileIconProvider>
#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <qfileiconprovider.h>
#include "libqfileiconprovider.h"
#include "libqfileiconprovider.hxx"

QFileIconProvider* QFileIconProvider_new() {
	 return new VirtualQFileIconProvider();
}

QIcon* QFileIconProvider_Icon(const QFileIconProvider* self, int typeVal) {
	return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(typeVal)));
}

QIcon* QFileIconProvider_Icon2(const QFileIconProvider* self, const QFileInfo* info) {
	return new QIcon(self->icon(*info));
}

// Base class handler implementation
QIcon* QFileIconProvider_QBaseIcon(const QFileIconProvider* self, int typeVal) {
	auto* vqfileiconprovider = dynamic_cast<const VirtualQFileIconProvider*>(self);
	if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
vqfileiconprovider->setQFileIconProvider_Icon_IsBase(true);
	return new QIcon(vqfileiconprovider->icon(static_cast<QAbstractFileIconProvider::IconType>(typeVal)));
}
}

// Auxiliary method to allow providing re-implementation
void QFileIconProvider_OnIcon(const QFileIconProvider* self, intptr_t slot) {
	auto* vqfileiconprovider = dynamic_cast<const VirtualQFileIconProvider*>(self);
	if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
vqfileiconprovider->setQFileIconProvider_Icon_Callback(reinterpret_cast<VirtualQFileIconProvider::QFileIconProvider_Icon_Callback>(slot));
}
}

// Base class handler implementation
QIcon* QFileIconProvider_QBaseIcon2(const QFileIconProvider* self, const QFileInfo* info) {
	auto* vqfileiconprovider = dynamic_cast<const VirtualQFileIconProvider*>(self);
	if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
vqfileiconprovider->setQFileIconProvider_Icon2_IsBase(true);
	return new QIcon(vqfileiconprovider->icon(*info));
}
}

// Auxiliary method to allow providing re-implementation
void QFileIconProvider_OnIcon2(const QFileIconProvider* self, intptr_t slot) {
	auto* vqfileiconprovider = dynamic_cast<const VirtualQFileIconProvider*>(self);
	if (vqfileiconprovider && vqfileiconprovider->isVirtualQFileIconProvider) {
vqfileiconprovider->setQFileIconProvider_Icon2_Callback(reinterpret_cast<VirtualQFileIconProvider::QFileIconProvider_Icon2_Callback>(slot));
}
}

void QFileIconProvider_Delete(QFileIconProvider* self) {
    delete self;
}

