#include <QEvent>
#include <QGesture>
#include <QGestureRecognizer>
#include <QObject>
#include <qgesturerecognizer.h>
#include "libqgesturerecognizer.h"
#include "libqgesturerecognizer.hxx"

QGestureRecognizer* QGestureRecognizer_new() {
	 return new VirtualQGestureRecognizer();
}

QGestureRecognizer* QGestureRecognizer_new2(const QGestureRecognizer* param1) {
	 return new VirtualQGestureRecognizer(*param1);
}

QGesture* QGestureRecognizer_Create(QGestureRecognizer* self, QObject* target) {
	return self->create(target);
}

int QGestureRecognizer_Recognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event) {
	return self->recognize(state, watched, event);
}

void QGestureRecognizer_Reset(QGestureRecognizer* self, QGesture* state) {
	self->reset(state);
}

int QGestureRecognizer_RegisterRecognizer(QGestureRecognizer* recognizer) {
	return QGestureRecognizer::registerRecognizer(recognizer);
}

void QGestureRecognizer_UnregisterRecognizer(int typeVal) {
	QGestureRecognizer::unregisterRecognizer(static_cast<Qt::GestureType>(typeVal));
}

void QGestureRecognizer_OperatorAssign(QGestureRecognizer* self, const QGestureRecognizer* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
QGesture* QGestureRecognizer_QBaseCreate(QGestureRecognizer* self, QObject* target) {
	auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self);
	if (vqgesturerecognizer && vqgesturerecognizer->isVirtualQGestureRecognizer) {
vqgesturerecognizer->setQGestureRecognizer_Create_IsBase(true);
	return vqgesturerecognizer->create(target);
}
}

// Auxiliary method to allow providing re-implementation
void QGestureRecognizer_OnCreate(QGestureRecognizer* self, intptr_t slot) {
	auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self);
	if (vqgesturerecognizer && vqgesturerecognizer->isVirtualQGestureRecognizer) {
vqgesturerecognizer->setQGestureRecognizer_Create_Callback(reinterpret_cast<VirtualQGestureRecognizer::QGestureRecognizer_Create_Callback>(slot));
}
}

// Base class handler implementation
int QGestureRecognizer_QBaseRecognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event) {
	auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self);
	if (vqgesturerecognizer && vqgesturerecognizer->isVirtualQGestureRecognizer) {
vqgesturerecognizer->setQGestureRecognizer_Recognize_IsBase(true);
	return vqgesturerecognizer->recognize(state, watched, event);
}
}

// Auxiliary method to allow providing re-implementation
void QGestureRecognizer_OnRecognize(QGestureRecognizer* self, intptr_t slot) {
	auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self);
	if (vqgesturerecognizer && vqgesturerecognizer->isVirtualQGestureRecognizer) {
vqgesturerecognizer->setQGestureRecognizer_Recognize_Callback(reinterpret_cast<VirtualQGestureRecognizer::QGestureRecognizer_Recognize_Callback>(slot));
}
}

// Base class handler implementation
void QGestureRecognizer_QBaseReset(QGestureRecognizer* self, QGesture* state) {
	auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self);
	if (vqgesturerecognizer && vqgesturerecognizer->isVirtualQGestureRecognizer) {
vqgesturerecognizer->setQGestureRecognizer_Reset_IsBase(true);
	vqgesturerecognizer->reset(state);
}
}

// Auxiliary method to allow providing re-implementation
void QGestureRecognizer_OnReset(QGestureRecognizer* self, intptr_t slot) {
	auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self);
	if (vqgesturerecognizer && vqgesturerecognizer->isVirtualQGestureRecognizer) {
vqgesturerecognizer->setQGestureRecognizer_Reset_Callback(reinterpret_cast<VirtualQGestureRecognizer::QGestureRecognizer_Reset_Callback>(slot));
}
}

void QGestureRecognizer_Delete(QGestureRecognizer* self) {
    delete self;
}

