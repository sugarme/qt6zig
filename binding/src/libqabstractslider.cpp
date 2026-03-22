#include <QAbstractSlider>
#include <QEvent>
#include <QKeyEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
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

void QAbstractSlider_Delete(QAbstractSlider* self) {
    delete self;
}

