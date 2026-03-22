#include <QAbstractSlider>
#include <QEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QSize>
#include <QSlider>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionSlider>
#include <QWidget>
#include <qslider.h>
#include "libqslider.h"
#include "libqslider.hxx"

QSlider* QSlider_new(QWidget* parent) {
	 return new VirtualQSlider(parent);
}

QSlider* QSlider_new2() {
	 return new VirtualQSlider();
}

QSlider* QSlider_new3(int orientation) {
	 return new VirtualQSlider(static_cast<Qt::Orientation>(orientation));
}

QSlider* QSlider_new4(int orientation, QWidget* parent) {
	 return new VirtualQSlider(static_cast<Qt::Orientation>(orientation), parent);
}

libqt_string QSlider_Tr(const char* s) {
	QString _ret = QSlider::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QSlider_SizeHint(const QSlider* self) {
	return new QSize(self->sizeHint());
}

QSize* QSlider_MinimumSizeHint(const QSlider* self) {
	return new QSize(self->minimumSizeHint());
}

void QSlider_SetTickPosition(QSlider* self, int position) {
	self->setTickPosition(static_cast<QSlider::TickPosition>(position));
}

int QSlider_TickPosition(const QSlider* self) {
	return self->tickPosition();
}

void QSlider_SetTickInterval(QSlider* self, int ti) {
	self->setTickInterval(ti);
}

int QSlider_TickInterval(const QSlider* self) {
	return self->tickInterval();
}

bool QSlider_Event(QSlider* self, QEvent* event) {
	return self->event(event);
}

libqt_string QSlider_Tr2(const char* s, const char* c) {
	QString _ret = QSlider::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSlider_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSlider::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QSlider_QBaseSizeHint(const QSlider* self) {
	auto* vqslider = dynamic_cast<const VirtualQSlider*>(self);
	if (vqslider && vqslider->isVirtualQSlider) {
vqslider->setQSlider_SizeHint_IsBase(true);
	return new QSize(vqslider->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSizeHint(const QSlider* self, intptr_t slot) {
	auto* vqslider = dynamic_cast<const VirtualQSlider*>(self);
	if (vqslider && vqslider->isVirtualQSlider) {
vqslider->setQSlider_SizeHint_Callback(reinterpret_cast<VirtualQSlider::QSlider_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QSlider_QBaseMinimumSizeHint(const QSlider* self) {
	auto* vqslider = dynamic_cast<const VirtualQSlider*>(self);
	if (vqslider && vqslider->isVirtualQSlider) {
vqslider->setQSlider_MinimumSizeHint_IsBase(true);
	return new QSize(vqslider->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMinimumSizeHint(const QSlider* self, intptr_t slot) {
	auto* vqslider = dynamic_cast<const VirtualQSlider*>(self);
	if (vqslider && vqslider->isVirtualQSlider) {
vqslider->setQSlider_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSlider::QSlider_MinimumSizeHint_Callback>(slot));
}
}

// Base class handler implementation
bool QSlider_QBaseEvent(QSlider* self, QEvent* event) {
	auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
	if (vqslider && vqslider->isVirtualQSlider) {
vqslider->setQSlider_Event_IsBase(true);
	return vqslider->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnEvent(QSlider* self, intptr_t slot) {
	auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
	if (vqslider && vqslider->isVirtualQSlider) {
vqslider->setQSlider_Event_Callback(reinterpret_cast<VirtualQSlider::QSlider_Event_Callback>(slot));
}
}

void QSlider_Delete(QSlider* self) {
    delete self;
}

