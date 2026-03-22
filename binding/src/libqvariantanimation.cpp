#include <QAbstractAnimation>
#include <QEasingCurve>
#include <QEvent>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
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
	auto _ret = self->keyValues();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QVariantAnimation_SetKeyValues(QVariantAnimation* self, const libqt_list values) {
	self->setKeyValues(QList<QPair<double, QVariant>>());
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

QEasingCurve* QVariantAnimation_EasingCurve(const QVariantAnimation* self) {
	return new QEasingCurve(self->easingCurve());
}

void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, const QEasingCurve* easing) {
	self->setEasingCurve(*easing);
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

void QVariantAnimation_Delete(QVariantAnimation* self) {
    delete self;
}

