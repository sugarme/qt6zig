#include <QAbstractSlider>
#include <QEvent>
#include <QKeyEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractslider.h>
#include "libqabstractslider.h"
#include "libqabstractslider.hxx"

QAbstractSlider* QAbstractSlider_new(QWidget* parent) {
	 return new VirtualQAbstractSlider(parent);
}

QAbstractSlider* QAbstractSlider_new2() {
	 return new VirtualQAbstractSlider();
}

libqt_string QAbstractSlider_Tr(const char* s) {
	QString _ret = QAbstractSlider::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAbstractSlider_Orientation(const QAbstractSlider* self) {
	return self->orientation();
}

void QAbstractSlider_SetMinimum(QAbstractSlider* self, int minimum) {
	self->setMinimum(minimum);
}

int QAbstractSlider_Minimum(const QAbstractSlider* self) {
	return self->minimum();
}

void QAbstractSlider_SetMaximum(QAbstractSlider* self, int maximum) {
	self->setMaximum(maximum);
}

int QAbstractSlider_Maximum(const QAbstractSlider* self) {
	return self->maximum();
}

void QAbstractSlider_SetSingleStep(QAbstractSlider* self, int singleStep) {
	self->setSingleStep(singleStep);
}

int QAbstractSlider_SingleStep(const QAbstractSlider* self) {
	return self->singleStep();
}

void QAbstractSlider_SetPageStep(QAbstractSlider* self, int pageStep) {
	self->setPageStep(pageStep);
}

int QAbstractSlider_PageStep(const QAbstractSlider* self) {
	return self->pageStep();
}

void QAbstractSlider_SetTracking(QAbstractSlider* self, bool enable) {
	self->setTracking(enable);
}

bool QAbstractSlider_HasTracking(const QAbstractSlider* self) {
	return self->hasTracking();
}

void QAbstractSlider_SetSliderDown(QAbstractSlider* self, bool sliderDown) {
	self->setSliderDown(sliderDown);
}

bool QAbstractSlider_IsSliderDown(const QAbstractSlider* self) {
	return self->isSliderDown();
}

void QAbstractSlider_SetSliderPosition(QAbstractSlider* self, int sliderPosition) {
	self->setSliderPosition(sliderPosition);
}

int QAbstractSlider_SliderPosition(const QAbstractSlider* self) {
	return self->sliderPosition();
}

void QAbstractSlider_SetInvertedAppearance(QAbstractSlider* self, bool invertedAppearance) {
	self->setInvertedAppearance(invertedAppearance);
}

bool QAbstractSlider_InvertedAppearance(const QAbstractSlider* self) {
	return self->invertedAppearance();
}

void QAbstractSlider_SetInvertedControls(QAbstractSlider* self, bool invertedControls) {
	self->setInvertedControls(invertedControls);
}

bool QAbstractSlider_InvertedControls(const QAbstractSlider* self) {
	return self->invertedControls();
}

int QAbstractSlider_Value(const QAbstractSlider* self) {
	return self->value();
}

void QAbstractSlider_TriggerAction(QAbstractSlider* self, int action) {
	self->triggerAction(static_cast<QAbstractSlider::SliderAction>(action));
}

void QAbstractSlider_SetValue(QAbstractSlider* self, int value) {
	self->setValue(value);
}

void QAbstractSlider_SetOrientation(QAbstractSlider* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QAbstractSlider_SetRange(QAbstractSlider* self, int min, int max) {
	self->setRange(min, max);
}

void QAbstractSlider_ValueChanged(QAbstractSlider* self, int value) {
	self->valueChanged(value);
}

void QAbstractSlider_Connect_ValueChanged(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int) = reinterpret_cast<void (*)(QAbstractSlider*, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::valueChanged, [self, slotFunc](int value) {
	slotFunc(self, value);
    });
}

void QAbstractSlider_SliderPressed(QAbstractSlider* self) {
	self->sliderPressed();
}

void QAbstractSlider_Connect_SliderPressed(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*) = reinterpret_cast<void (*)(QAbstractSlider*)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::sliderPressed, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractSlider_SliderMoved(QAbstractSlider* self, int position) {
	self->sliderMoved(position);
}

void QAbstractSlider_Connect_SliderMoved(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int) = reinterpret_cast<void (*)(QAbstractSlider*, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::sliderMoved, [self, slotFunc](int position) {
	slotFunc(self, position);
    });
}

void QAbstractSlider_SliderReleased(QAbstractSlider* self) {
	self->sliderReleased();
}

void QAbstractSlider_Connect_SliderReleased(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*) = reinterpret_cast<void (*)(QAbstractSlider*)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::sliderReleased, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractSlider_RangeChanged(QAbstractSlider* self, int min, int max) {
	self->rangeChanged(min, max);
}

void QAbstractSlider_Connect_RangeChanged(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int, int) = reinterpret_cast<void (*)(QAbstractSlider*, int, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::rangeChanged, [self, slotFunc](int min, int max) {
	slotFunc(self, min, max);
    });
}

void QAbstractSlider_ActionTriggered(QAbstractSlider* self, int action) {
	self->actionTriggered(action);
}

void QAbstractSlider_Connect_ActionTriggered(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int) = reinterpret_cast<void (*)(QAbstractSlider*, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::actionTriggered, [self, slotFunc](int action) {
	slotFunc(self, action);
    });
}

libqt_string QAbstractSlider_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractSlider::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractSlider_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSlider::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
bool QAbstractSlider_Event(QAbstractSlider* self, QEvent* e) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
	return vqabstractslider->event(e);
	} else {
	return self->QAbstractSlider::event(e);
}
}

// Base class handler implementation
bool QAbstractSlider_QBaseEvent(QAbstractSlider* self, QEvent* e) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_Event_IsBase(true);
	return vqabstractslider->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnEvent(QAbstractSlider* self, intptr_t slot) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_Event_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSlider_SliderChange(QAbstractSlider* self, int change) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
	vqabstractslider->sliderChange(static_cast<QAbstractSlider::SliderChange>(change));
	} else {
	self->QAbstractSlider::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));
}
}

// Base class handler implementation
void QAbstractSlider_QBaseSliderChange(QAbstractSlider* self, int change) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_SliderChange_IsBase(true);
	vqabstractslider->sliderChange(static_cast<QAbstractSlider::SliderChange>(change));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSliderChange(QAbstractSlider* self, intptr_t slot) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_SliderChange_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SliderChange_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSlider_KeyPressEvent(QAbstractSlider* self, QKeyEvent* ev) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
	vqabstractslider->keyPressEvent(ev);
	} else {
	self->QAbstractSlider::keyPressEvent(ev);
}
}

// Base class handler implementation
void QAbstractSlider_QBaseKeyPressEvent(QAbstractSlider* self, QKeyEvent* ev) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_KeyPressEvent_IsBase(true);
	vqabstractslider->keyPressEvent(ev);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnKeyPressEvent(QAbstractSlider* self, intptr_t slot) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSlider_TimerEvent(QAbstractSlider* self, QTimerEvent* param1) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
	vqabstractslider->timerEvent(param1);
	} else {
	self->QAbstractSlider::timerEvent(param1);
}
}

// Base class handler implementation
void QAbstractSlider_QBaseTimerEvent(QAbstractSlider* self, QTimerEvent* param1) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_TimerEvent_IsBase(true);
	vqabstractslider->timerEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnTimerEvent(QAbstractSlider* self, intptr_t slot) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSlider_WheelEvent(QAbstractSlider* self, QWheelEvent* e) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
	vqabstractslider->wheelEvent(e);
	} else {
	self->QAbstractSlider::wheelEvent(e);
}
}

// Base class handler implementation
void QAbstractSlider_QBaseWheelEvent(QAbstractSlider* self, QWheelEvent* e) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_WheelEvent_IsBase(true);
	vqabstractslider->wheelEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnWheelEvent(QAbstractSlider* self, intptr_t slot) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSlider_ChangeEvent(QAbstractSlider* self, QEvent* e) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
	vqabstractslider->changeEvent(e);
	} else {
	self->QAbstractSlider::changeEvent(e);
}
}

// Base class handler implementation
void QAbstractSlider_QBaseChangeEvent(QAbstractSlider* self, QEvent* e) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_ChangeEvent_IsBase(true);
	vqabstractslider->changeEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnChangeEvent(QAbstractSlider* self, intptr_t slot) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSlider_SetRepeatAction(QAbstractSlider* self, int action) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
	vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
	} else {
	self->QAbstractSlider::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
}
}

// Base class handler implementation
void QAbstractSlider_QBaseSetRepeatAction(QAbstractSlider* self, int action) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_SetRepeatAction_IsBase(true);
	vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetRepeatAction(QAbstractSlider* self, intptr_t slot) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_SetRepeatAction_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetRepeatAction_Callback>(slot));
}
}

// Derived class handler implementation
int QAbstractSlider_RepeatAction(const QAbstractSlider* self) {
	auto* vqabstractslider = dynamic_cast<const VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
	return vqabstractslider->repeatAction();
	} else {
	return self->QAbstractSlider::repeatAction();
}
}

// Base class handler implementation
int QAbstractSlider_QBaseRepeatAction(const QAbstractSlider* self) {
	auto* vqabstractslider = dynamic_cast<const VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_RepeatAction_IsBase(true);
	return vqabstractslider->repeatAction();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnRepeatAction(const QAbstractSlider* self, intptr_t slot) {
	auto* vqabstractslider = dynamic_cast<const VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_RepeatAction_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_RepeatAction_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSlider_SetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
	vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), thresholdTime);
	} else {
	self->QAbstractSlider::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), thresholdTime);
}
}

// Base class handler implementation
void QAbstractSlider_QBaseSetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_SetRepeatAction2_IsBase(true);
	vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), thresholdTime);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetRepeatAction2(QAbstractSlider* self, intptr_t slot) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_SetRepeatAction2_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetRepeatAction2_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractSlider_SetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
	vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), thresholdTime, repeatTime);
	} else {
	self->QAbstractSlider::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), thresholdTime, repeatTime);
}
}

// Base class handler implementation
void QAbstractSlider_QBaseSetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_SetRepeatAction3_IsBase(true);
	vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), thresholdTime, repeatTime);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetRepeatAction3(QAbstractSlider* self, intptr_t slot) {
	auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
	if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
vqabstractslider->setQAbstractSlider_SetRepeatAction3_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetRepeatAction3_Callback>(slot));
}
}

void QAbstractSlider_Delete(QAbstractSlider* self) {
    delete self;
}

