#include <qexception.h>
#include "libqexception.h"
#include "libqexception.hxx"

QException* QException_new() {
	 return new VirtualQException();
}

void QException_Raise(const QException* self) {
	self->raise();
}

// Base class handler implementation
void QException_QBaseRaise(const QException* self) {
	auto* vqexception = dynamic_cast<const VirtualQException*>(self);
	if (vqexception && vqexception->isVirtualQException) {
vqexception->setQException_Raise_IsBase(true);
	vqexception->raise();
}
}

// Auxiliary method to allow providing re-implementation
void QException_OnRaise(const QException* self, intptr_t slot) {
	auto* vqexception = dynamic_cast<const VirtualQException*>(self);
	if (vqexception && vqexception->isVirtualQException) {
vqexception->setQException_Raise_Callback(reinterpret_cast<VirtualQException::QException_Raise_Callback>(slot));
}
}

void QException_Delete(QException* self) {
    delete self;
}

QUnhandledException* QUnhandledException_new() {
	 return new VirtualQUnhandledException();
}

void QUnhandledException_Raise(const QUnhandledException* self) {
	self->raise();
}

// Base class handler implementation
void QUnhandledException_QBaseRaise(const QUnhandledException* self) {
	auto* vqunhandledexception = dynamic_cast<const VirtualQUnhandledException*>(self);
	if (vqunhandledexception && vqunhandledexception->isVirtualQUnhandledException) {
vqunhandledexception->setQUnhandledException_Raise_IsBase(true);
	vqunhandledexception->raise();
}
}

// Auxiliary method to allow providing re-implementation
void QUnhandledException_OnRaise(const QUnhandledException* self, intptr_t slot) {
	auto* vqunhandledexception = dynamic_cast<const VirtualQUnhandledException*>(self);
	if (vqunhandledexception && vqunhandledexception->isVirtualQUnhandledException) {
vqunhandledexception->setQUnhandledException_Raise_Callback(reinterpret_cast<VirtualQUnhandledException::QUnhandledException_Raise_Callback>(slot));
}
}

void QUnhandledException_Delete(QUnhandledException* self) {
    delete self;
}

