#include <QEventPoint>
#include <QPoint>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence
#include <QWindow>
#include <qtestsupport_gui.h>
#include "libqtestsupport_gui.h"
#include "libqtestsupport_gui.hxx"

QTest__QTouchEventSequence* QTest__QTouchEventSequence_new(const QTest__QTouchEventSequence* param1) {
	 return new VirtualQTestQTouchEventSequence(*param1);
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Press(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt) {
	return new QTest::QTouchEventSequence(self->press(touchId, *pt));
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Move(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt) {
	return new QTest::QTouchEventSequence(self->move(touchId, *pt));
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Release(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt) {
	return new QTest::QTouchEventSequence(self->release(touchId, *pt));
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Stationary(QTest__QTouchEventSequence* self, int touchId) {
	return new QTest::QTouchEventSequence(self->stationary(touchId));
}

bool QTest__QTouchEventSequence_Commit(QTest__QTouchEventSequence* self, bool processEvents) {
	return self->commit(processEvents);
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Press3(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt, QWindow* window) {
	return new QTest::QTouchEventSequence(self->press(touchId, *pt, window));
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Move3(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt, QWindow* window) {
	return new QTest::QTouchEventSequence(self->move(touchId, *pt, window));
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Release3(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt, QWindow* window) {
	return new QTest::QTouchEventSequence(self->release(touchId, *pt, window));
}

// Base class handler implementation
QTest__QTouchEventSequence* QTest__QTouchEventSequence_QBaseStationary(QTest__QTouchEventSequence* self, int touchId) {
	auto* vqtest__qtoucheventsequence = dynamic_cast<VirtualQTestQTouchEventSequence*>(self);
	if (vqtest__qtoucheventsequence && vqtest__qtoucheventsequence->isVirtualQTestQTouchEventSequence) {
vqtest__qtoucheventsequence->setQTest__QTouchEventSequence_Stationary_IsBase(true);
	return new QTest::QTouchEventSequence(vqtest__qtoucheventsequence->stationary(touchId));
}
}

// Auxiliary method to allow providing re-implementation
void QTest__QTouchEventSequence_OnStationary(QTest__QTouchEventSequence* self, intptr_t slot) {
	auto* vqtest__qtoucheventsequence = dynamic_cast<VirtualQTestQTouchEventSequence*>(self);
	if (vqtest__qtoucheventsequence && vqtest__qtoucheventsequence->isVirtualQTestQTouchEventSequence) {
vqtest__qtoucheventsequence->setQTest__QTouchEventSequence_Stationary_Callback(reinterpret_cast<VirtualQTestQTouchEventSequence::QTest__QTouchEventSequence_Stationary_Callback>(slot));
}
}

// Base class handler implementation
bool QTest__QTouchEventSequence_QBaseCommit(QTest__QTouchEventSequence* self, bool processEvents) {
	auto* vqtest__qtoucheventsequence = dynamic_cast<VirtualQTestQTouchEventSequence*>(self);
	if (vqtest__qtoucheventsequence && vqtest__qtoucheventsequence->isVirtualQTestQTouchEventSequence) {
vqtest__qtoucheventsequence->setQTest__QTouchEventSequence_Commit_IsBase(true);
	return vqtest__qtoucheventsequence->commit(processEvents);
}
}

// Auxiliary method to allow providing re-implementation
void QTest__QTouchEventSequence_OnCommit(QTest__QTouchEventSequence* self, intptr_t slot) {
	auto* vqtest__qtoucheventsequence = dynamic_cast<VirtualQTestQTouchEventSequence*>(self);
	if (vqtest__qtoucheventsequence && vqtest__qtoucheventsequence->isVirtualQTestQTouchEventSequence) {
vqtest__qtoucheventsequence->setQTest__QTouchEventSequence_Commit_Callback(reinterpret_cast<VirtualQTestQTouchEventSequence::QTest__QTouchEventSequence_Commit_Callback>(slot));
}
}

void QTest__QTouchEventSequence_Delete(QTest__QTouchEventSequence* self) {
    delete self;
}

