#include <QPoint>
#include <QPointingDevice>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventWidgetSequence
#include <QWidget>
#include <qtestsupport_widgets.h>
#include "libqtestsupport_widgets.h"
#include "libqtestsupport_widgets.hxx"

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_new(const QTest__QTouchEventWidgetSequence* param1) {
	 return new VirtualQTestQTouchEventWidgetSequence(*param1);
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Press(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt) {
	return new QTest::QTouchEventWidgetSequence(self->press(touchId, *pt));
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Move(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt) {
	return new QTest::QTouchEventWidgetSequence(self->move(touchId, *pt));
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Release(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt) {
	return new QTest::QTouchEventWidgetSequence(self->release(touchId, *pt));
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Stationary(QTest__QTouchEventWidgetSequence* self, int touchId) {
	return new QTest::QTouchEventWidgetSequence(self->stationary(touchId));
}

bool QTest__QTouchEventWidgetSequence_Commit(QTest__QTouchEventWidgetSequence* self, bool processEvents) {
	return self->commit(processEvents);
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Press3(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt, QWidget* widget) {
	return new QTest::QTouchEventWidgetSequence(self->press(touchId, *pt, widget));
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Move3(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt, QWidget* widget) {
	return new QTest::QTouchEventWidgetSequence(self->move(touchId, *pt, widget));
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Release3(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt, QWidget* widget) {
	return new QTest::QTouchEventWidgetSequence(self->release(touchId, *pt, widget));
}

// Base class handler implementation
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_QBaseStationary(QTest__QTouchEventWidgetSequence* self, int touchId) {
	auto* vqtest__qtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
	if (vqtest__qtoucheventwidgetsequence && vqtest__qtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
vqtest__qtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_Stationary_IsBase(true);
	return new QTest::QTouchEventWidgetSequence(vqtest__qtoucheventwidgetsequence->stationary(touchId));
}
}

// Auxiliary method to allow providing re-implementation
void QTest__QTouchEventWidgetSequence_OnStationary(QTest__QTouchEventWidgetSequence* self, intptr_t slot) {
	auto* vqtest__qtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
	if (vqtest__qtoucheventwidgetsequence && vqtest__qtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
vqtest__qtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_Stationary_Callback(reinterpret_cast<VirtualQTestQTouchEventWidgetSequence::QTest__QTouchEventWidgetSequence_Stationary_Callback>(slot));
}
}

// Base class handler implementation
bool QTest__QTouchEventWidgetSequence_QBaseCommit(QTest__QTouchEventWidgetSequence* self, bool processEvents) {
	auto* vqtest__qtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
	if (vqtest__qtoucheventwidgetsequence && vqtest__qtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
vqtest__qtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_Commit_IsBase(true);
	return vqtest__qtoucheventwidgetsequence->commit(processEvents);
}
}

// Auxiliary method to allow providing re-implementation
void QTest__QTouchEventWidgetSequence_OnCommit(QTest__QTouchEventWidgetSequence* self, intptr_t slot) {
	auto* vqtest__qtoucheventwidgetsequence = dynamic_cast<VirtualQTestQTouchEventWidgetSequence*>(self);
	if (vqtest__qtoucheventwidgetsequence && vqtest__qtoucheventwidgetsequence->isVirtualQTestQTouchEventWidgetSequence) {
vqtest__qtoucheventwidgetsequence->setQTest__QTouchEventWidgetSequence_Commit_Callback(reinterpret_cast<VirtualQTestQTouchEventWidgetSequence::QTest__QTouchEventWidgetSequence_Commit_Callback>(slot));
}
}

void QTest__QTouchEventWidgetSequence_Delete(QTest__QTouchEventWidgetSequence* self) {
    delete self;
}

