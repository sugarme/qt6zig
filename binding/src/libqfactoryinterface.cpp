#include <QFactoryInterface>
#include <qfactoryinterface.h>
#include "libqfactoryinterface.h"
#include "libqfactoryinterface.hxx"

QFactoryInterface* QFactoryInterface_new() {
	 return new VirtualQFactoryInterface();
}

QFactoryInterface* QFactoryInterface_new2(const QFactoryInterface* param1) {
	 return new VirtualQFactoryInterface(*param1);
}

libqt_list QFactoryInterface_Keys(const QFactoryInterface* self) {
	return self->keys();
}

void QFactoryInterface_OperatorAssign(QFactoryInterface* self, const QFactoryInterface* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
libqt_list QFactoryInterface_QBaseKeys(const QFactoryInterface* self) {
	auto* vqfactoryinterface = dynamic_cast<const VirtualQFactoryInterface*>(self);
	if (vqfactoryinterface && vqfactoryinterface->isVirtualQFactoryInterface) {
vqfactoryinterface->setQFactoryInterface_Keys_IsBase(true);
	return vqfactoryinterface->keys();
}
}

// Auxiliary method to allow providing re-implementation
void QFactoryInterface_OnKeys(const QFactoryInterface* self, intptr_t slot) {
	auto* vqfactoryinterface = dynamic_cast<const VirtualQFactoryInterface*>(self);
	if (vqfactoryinterface && vqfactoryinterface->isVirtualQFactoryInterface) {
vqfactoryinterface->setQFactoryInterface_Keys_Callback(reinterpret_cast<VirtualQFactoryInterface::QFactoryInterface_Keys_Callback>(slot));
}
}

void QFactoryInterface_Delete(QFactoryInterface* self) {
    delete self;
}

