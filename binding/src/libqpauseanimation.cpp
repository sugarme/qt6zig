#include <QAbstractAnimation>
#include <QEvent>
#include <QObject>
#include <QPauseAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpauseanimation.h>
#include "libqpauseanimation.h"
#include "libqpauseanimation.hxx"

QPauseAnimation* QPauseAnimation_new() {
	 return new VirtualQPauseAnimation();
}

QPauseAnimation* QPauseAnimation_new2(int msecs) {
	 return new VirtualQPauseAnimation(msecs);
}

QPauseAnimation* QPauseAnimation_new3(QObject* parent) {
	 return new VirtualQPauseAnimation(parent);
}

QPauseAnimation* QPauseAnimation_new4(int msecs, QObject* parent) {
	 return new VirtualQPauseAnimation(msecs, parent);
}

libqt_string QPauseAnimation_Tr(const char* s) {
	QString _ret = QPauseAnimation::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QPauseAnimation_Duration(const QPauseAnimation* self) {
	return self->duration();
}

void QPauseAnimation_SetDuration(QPauseAnimation* self, int msecs) {
	self->setDuration(msecs);
}

QBindable<int> QPauseAnimation_BindableDuration(QPauseAnimation* self) {
	return self->bindableDuration();
}

libqt_string QPauseAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QPauseAnimation::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPauseAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPauseAnimation::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QPauseAnimation_QBaseDuration(const QPauseAnimation* self) {
	auto* vqpauseanimation = dynamic_cast<const VirtualQPauseAnimation*>(self);
	if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
vqpauseanimation->setQPauseAnimation_Duration_IsBase(true);
	return vqpauseanimation->duration();
}
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnDuration(const QPauseAnimation* self, intptr_t slot) {
	auto* vqpauseanimation = dynamic_cast<const VirtualQPauseAnimation*>(self);
	if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
vqpauseanimation->setQPauseAnimation_Duration_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_Duration_Callback>(slot));
}
}

// Derived class handler implementation
bool QPauseAnimation_Event(QPauseAnimation* self, QEvent* e) {
	auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
	if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
	return vqpauseanimation->event(e);
	} else {
	return self->QPauseAnimation::event(e);
}
}

// Base class handler implementation
bool QPauseAnimation_QBaseEvent(QPauseAnimation* self, QEvent* e) {
	auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
	if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
vqpauseanimation->setQPauseAnimation_Event_IsBase(true);
	return vqpauseanimation->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnEvent(QPauseAnimation* self, intptr_t slot) {
	auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
	if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
vqpauseanimation->setQPauseAnimation_Event_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QPauseAnimation_UpdateCurrentTime(QPauseAnimation* self, int param1) {
	auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
	if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
	vqpauseanimation->updateCurrentTime(param1);
	} else {
	self->QPauseAnimation::updateCurrentTime(param1);
}
}

// Base class handler implementation
void QPauseAnimation_QBaseUpdateCurrentTime(QPauseAnimation* self, int param1) {
	auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
	if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
vqpauseanimation->setQPauseAnimation_UpdateCurrentTime_IsBase(true);
	vqpauseanimation->updateCurrentTime(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QPauseAnimation_OnUpdateCurrentTime(QPauseAnimation* self, intptr_t slot) {
	auto* vqpauseanimation = dynamic_cast<VirtualQPauseAnimation*>(self);
	if (vqpauseanimation && vqpauseanimation->isVirtualQPauseAnimation) {
vqpauseanimation->setQPauseAnimation_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQPauseAnimation::QPauseAnimation_UpdateCurrentTime_Callback>(slot));
}
}

void QPauseAnimation_Delete(QPauseAnimation* self) {
    delete self;
}

