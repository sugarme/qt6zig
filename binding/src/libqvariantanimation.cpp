#include <QAbstractAnimation>
#include <QEasingCurve>
#include <QEvent>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QVariantAnimation>
#include <qvariantanimation.h>
#include "libqvariantanimation.h"
#include "libqvariantanimation.hxx"

QVariantAnimation* QVariantAnimation_new() {
	 return new VirtualQVariantAnimation();
}

QVariantAnimation* QVariantAnimation_new2(QObject* parent) {
	 return new VirtualQVariantAnimation(parent);
}

libqt_string QVariantAnimation_Tr(const char* s) {
	QString _ret = QVariantAnimation::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QVariant* QVariantAnimation_StartValue(const QVariantAnimation* self) {
	return new QVariant(self->startValue());
}

void QVariantAnimation_SetStartValue(QVariantAnimation* self, const QVariant* value) {
	self->setStartValue(*value);
}

QVariant* QVariantAnimation_EndValue(const QVariantAnimation* self) {
	return new QVariant(self->endValue());
}

void QVariantAnimation_SetEndValue(QVariantAnimation* self, const QVariant* value) {
	self->setEndValue(*value);
}

QVariant* QVariantAnimation_KeyValueAt(const QVariantAnimation* self, double step) {
	return new QVariant(self->keyValueAt(step));
}

void QVariantAnimation_SetKeyValueAt(QVariantAnimation* self, double step, const QVariant* value) {
	self->setKeyValueAt(step, *value);
}

libqt_list QVariantAnimation_KeyValues(const QVariantAnimation* self) {
	return self->keyValues();
}

void QVariantAnimation_SetKeyValues(QVariantAnimation* self, const libqt_list values) {
	self->setKeyValues(*values);
}

QVariant* QVariantAnimation_CurrentValue(const QVariantAnimation* self) {
	return new QVariant(self->currentValue());
}

int QVariantAnimation_Duration(const QVariantAnimation* self) {
	return self->duration();
}

void QVariantAnimation_SetDuration(QVariantAnimation* self, int msecs) {
	self->setDuration(msecs);
}

QBindable<int> QVariantAnimation_BindableDuration(QVariantAnimation* self) {
	return self->bindableDuration();
}

QEasingCurve* QVariantAnimation_EasingCurve(const QVariantAnimation* self) {
	return new QEasingCurve(self->easingCurve());
}

void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, const QEasingCurve* easing) {
	self->setEasingCurve(*easing);
}

QBindable<QEasingCurve> QVariantAnimation_BindableEasingCurve(QVariantAnimation* self) {
	return self->bindableEasingCurve();
}

void QVariantAnimation_ValueChanged(QVariantAnimation* self, const QVariant* value) {
	self->valueChanged(*value);
}

void QVariantAnimation_Connect_ValueChanged(QVariantAnimation* self, intptr_t slot) {
    void (*slotFunc)(QVariantAnimation*, const QVariant*) = reinterpret_cast<void (*)(QVariantAnimation*, const QVariant*)>(slot);
    QVariantAnimation::connect(self, &QVariantAnimation::valueChanged, [self, slotFunc](const QVariant& value) {
	slotFunc(self, value);
    });
}

libqt_string QVariantAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QVariantAnimation::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QVariantAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVariantAnimation::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QVariantAnimation_QBaseDuration(const QVariantAnimation* self) {
	auto* vqvariantanimation = dynamic_cast<const VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_Duration_IsBase(true);
	return vqvariantanimation->duration();
}
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnDuration(const QVariantAnimation* self, intptr_t slot) {
	auto* vqvariantanimation = dynamic_cast<const VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_Duration_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Duration_Callback>(slot));
}
}

// Derived class handler implementation
bool QVariantAnimation_Event(QVariantAnimation* self, QEvent* event) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
	return vqvariantanimation->event(event);
	} else {
	return self->QVariantAnimation::event(event);
}
}

// Base class handler implementation
bool QVariantAnimation_QBaseEvent(QVariantAnimation* self, QEvent* event) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_Event_IsBase(true);
	return vqvariantanimation->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnEvent(QVariantAnimation* self, intptr_t slot) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_Event_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QVariantAnimation_UpdateCurrentTime(QVariantAnimation* self, int param1) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
	vqvariantanimation->updateCurrentTime(param1);
	} else {
	self->QVariantAnimation::updateCurrentTime(param1);
}
}

// Base class handler implementation
void QVariantAnimation_QBaseUpdateCurrentTime(QVariantAnimation* self, int param1) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_UpdateCurrentTime_IsBase(true);
	vqvariantanimation->updateCurrentTime(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnUpdateCurrentTime(QVariantAnimation* self, intptr_t slot) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_UpdateCurrentTime_Callback>(slot));
}
}

// Derived class handler implementation
void QVariantAnimation_UpdateState(QVariantAnimation* self, int newState, int oldState) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
	vqvariantanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
	} else {
	self->QVariantAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}
}

// Base class handler implementation
void QVariantAnimation_QBaseUpdateState(QVariantAnimation* self, int newState, int oldState) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_UpdateState_IsBase(true);
	vqvariantanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnUpdateState(QVariantAnimation* self, intptr_t slot) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_UpdateState_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_UpdateState_Callback>(slot));
}
}

// Derived class handler implementation
void QVariantAnimation_UpdateCurrentValue(QVariantAnimation* self, const QVariant* value) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
	vqvariantanimation->updateCurrentValue(*value);
	} else {
	self->QVariantAnimation::updateCurrentValue(*value);
}
}

// Base class handler implementation
void QVariantAnimation_QBaseUpdateCurrentValue(QVariantAnimation* self, const QVariant* value) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_UpdateCurrentValue_IsBase(true);
	vqvariantanimation->updateCurrentValue(*value);
}
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnUpdateCurrentValue(QVariantAnimation* self, intptr_t slot) {
	auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_UpdateCurrentValue_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_UpdateCurrentValue_Callback>(slot));
}
}

// Derived class handler implementation
QVariant* QVariantAnimation_Interpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress) {
	auto* vqvariantanimation = dynamic_cast<const VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
	return new QVariant(vqvariantanimation->interpolated(*from, *to, progress));
	} else {
	return new QVariant(self->QVariantAnimation::interpolated(*from, *to, progress));
}
}

// Base class handler implementation
QVariant* QVariantAnimation_QBaseInterpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress) {
	auto* vqvariantanimation = dynamic_cast<const VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_Interpolated_IsBase(true);
	return new QVariant(vqvariantanimation->interpolated(*from, *to, progress));
}
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnInterpolated(const QVariantAnimation* self, intptr_t slot) {
	auto* vqvariantanimation = dynamic_cast<const VirtualQVariantAnimation*>(self);
	if (vqvariantanimation && vqvariantanimation->isVirtualQVariantAnimation) {
vqvariantanimation->setQVariantAnimation_Interpolated_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Interpolated_Callback>(slot));
}
}

void QVariantAnimation_Delete(QVariantAnimation* self) {
    delete self;
}

