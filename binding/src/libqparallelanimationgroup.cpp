#include <QAnimationGroup>
#include <QEvent>
#include <QObject>
#include <QParallelAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qparallelanimationgroup.h>
#include "libqparallelanimationgroup.h"
#include "libqparallelanimationgroup.hxx"

QParallelAnimationGroup* QParallelAnimationGroup_new() {
	 return new VirtualQParallelAnimationGroup();
}

QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent) {
	 return new VirtualQParallelAnimationGroup(parent);
}

libqt_string QParallelAnimationGroup_Tr(const char* s) {
	QString _ret = QParallelAnimationGroup::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QParallelAnimationGroup_Duration(const QParallelAnimationGroup* self) {
	return self->duration();
}

libqt_string QParallelAnimationGroup_Tr2(const char* s, const char* c) {
	QString _ret = QParallelAnimationGroup::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QParallelAnimationGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QParallelAnimationGroup::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QParallelAnimationGroup_QBaseDuration(const QParallelAnimationGroup* self) {
	auto* vqparallelanimationgroup = dynamic_cast<const VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_Duration_IsBase(true);
	return vqparallelanimationgroup->duration();
}
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnDuration(const QParallelAnimationGroup* self, intptr_t slot) {
	auto* vqparallelanimationgroup = dynamic_cast<const VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_Duration_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Duration_Callback>(slot));
}
}

// Derived class handler implementation
bool QParallelAnimationGroup_Event(QParallelAnimationGroup* self, QEvent* event) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
	return vqparallelanimationgroup->event(event);
	} else {
	return self->QParallelAnimationGroup::event(event);
}
}

// Base class handler implementation
bool QParallelAnimationGroup_QBaseEvent(QParallelAnimationGroup* self, QEvent* event) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_Event_IsBase(true);
	return vqparallelanimationgroup->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnEvent(QParallelAnimationGroup* self, intptr_t slot) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_Event_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QParallelAnimationGroup_UpdateCurrentTime(QParallelAnimationGroup* self, int currentTime) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
	vqparallelanimationgroup->updateCurrentTime(currentTime);
	} else {
	self->QParallelAnimationGroup::updateCurrentTime(currentTime);
}
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseUpdateCurrentTime(QParallelAnimationGroup* self, int currentTime) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_UpdateCurrentTime_IsBase(true);
	vqparallelanimationgroup->updateCurrentTime(currentTime);
}
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateCurrentTime(QParallelAnimationGroup* self, intptr_t slot) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateCurrentTime_Callback>(slot));
}
}

// Derived class handler implementation
void QParallelAnimationGroup_UpdateState(QParallelAnimationGroup* self, int newState, int oldState) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
	vqparallelanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
	} else {
	self->QParallelAnimationGroup::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseUpdateState(QParallelAnimationGroup* self, int newState, int oldState) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_UpdateState_IsBase(true);
	vqparallelanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateState(QParallelAnimationGroup* self, intptr_t slot) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_UpdateState_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateState_Callback>(slot));
}
}

// Derived class handler implementation
void QParallelAnimationGroup_UpdateDirection(QParallelAnimationGroup* self, int direction) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
	vqparallelanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
	} else {
	self->QParallelAnimationGroup::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
}
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseUpdateDirection(QParallelAnimationGroup* self, int direction) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_UpdateDirection_IsBase(true);
	vqparallelanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
}
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateDirection(QParallelAnimationGroup* self, intptr_t slot) {
	auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_UpdateDirection_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateDirection_Callback>(slot));
}
}

void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self) {
    delete self;
}

