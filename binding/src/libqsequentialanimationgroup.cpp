#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QEvent>
#include <QObject>
#include <QPauseAnimation>
#include <QSequentialAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsequentialanimationgroup.h>
#include "libqsequentialanimationgroup.h"
#include "libqsequentialanimationgroup.hxx"

QSequentialAnimationGroup* QSequentialAnimationGroup_new() {
	 return new VirtualQSequentialAnimationGroup();
}

QSequentialAnimationGroup* QSequentialAnimationGroup_new2(QObject* parent) {
	 return new VirtualQSequentialAnimationGroup(parent);
}

libqt_string QSequentialAnimationGroup_Tr(const char* s) {
	QString _ret = QSequentialAnimationGroup::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QPauseAnimation* QSequentialAnimationGroup_AddPause(QSequentialAnimationGroup* self, int msecs) {
	return self->addPause(msecs);
}

QPauseAnimation* QSequentialAnimationGroup_InsertPause(QSequentialAnimationGroup* self, int index, int msecs) {
	return self->insertPause(index, msecs);
}

QAbstractAnimation* QSequentialAnimationGroup_CurrentAnimation(const QSequentialAnimationGroup* self) {
	return self->currentAnimation();
}

QBindable<QAbstractAnimation *> QSequentialAnimationGroup_BindableCurrentAnimation(const QSequentialAnimationGroup* self) {
	return self->bindableCurrentAnimation();
}

int QSequentialAnimationGroup_Duration(const QSequentialAnimationGroup* self) {
	return self->duration();
}

void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current) {
	self->currentAnimationChanged(current);
}

void QSequentialAnimationGroup_Connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, intptr_t slot) {
    void (*slotFunc)(QSequentialAnimationGroup*, QAbstractAnimation*) = reinterpret_cast<void (*)(QSequentialAnimationGroup*, QAbstractAnimation*)>(slot);
    QSequentialAnimationGroup::connect(self, &QSequentialAnimationGroup::currentAnimationChanged, [self, slotFunc](QAbstractAnimation* current) {
	slotFunc(self, current);
    });
}

libqt_string QSequentialAnimationGroup_Tr2(const char* s, const char* c) {
	QString _ret = QSequentialAnimationGroup::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSequentialAnimationGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSequentialAnimationGroup::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QSequentialAnimationGroup_QBaseDuration(const QSequentialAnimationGroup* self) {
	auto* vqsequentialanimationgroup = dynamic_cast<const VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
vqsequentialanimationgroup->setQSequentialAnimationGroup_Duration_IsBase(true);
	return vqsequentialanimationgroup->duration();
}
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnDuration(const QSequentialAnimationGroup* self, intptr_t slot) {
	auto* vqsequentialanimationgroup = dynamic_cast<const VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
vqsequentialanimationgroup->setQSequentialAnimationGroup_Duration_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Duration_Callback>(slot));
}
}

// Derived class handler implementation
bool QSequentialAnimationGroup_Event(QSequentialAnimationGroup* self, QEvent* event) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
	return vqsequentialanimationgroup->event(event);
	} else {
	return self->QSequentialAnimationGroup::event(event);
}
}

// Base class handler implementation
bool QSequentialAnimationGroup_QBaseEvent(QSequentialAnimationGroup* self, QEvent* event) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
vqsequentialanimationgroup->setQSequentialAnimationGroup_Event_IsBase(true);
	return vqsequentialanimationgroup->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnEvent(QSequentialAnimationGroup* self, intptr_t slot) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
vqsequentialanimationgroup->setQSequentialAnimationGroup_Event_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QSequentialAnimationGroup_UpdateCurrentTime(QSequentialAnimationGroup* self, int param1) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
	vqsequentialanimationgroup->updateCurrentTime(param1);
	} else {
	self->QSequentialAnimationGroup::updateCurrentTime(param1);
}
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseUpdateCurrentTime(QSequentialAnimationGroup* self, int param1) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateCurrentTime_IsBase(true);
	vqsequentialanimationgroup->updateCurrentTime(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateCurrentTime(QSequentialAnimationGroup* self, intptr_t slot) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateCurrentTime_Callback>(slot));
}
}

// Derived class handler implementation
void QSequentialAnimationGroup_UpdateState(QSequentialAnimationGroup* self, int newState, int oldState) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
	vqsequentialanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
	} else {
	self->QSequentialAnimationGroup::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseUpdateState(QSequentialAnimationGroup* self, int newState, int oldState) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateState_IsBase(true);
	vqsequentialanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateState(QSequentialAnimationGroup* self, intptr_t slot) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateState_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateState_Callback>(slot));
}
}

// Derived class handler implementation
void QSequentialAnimationGroup_UpdateDirection(QSequentialAnimationGroup* self, int direction) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
	vqsequentialanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
	} else {
	self->QSequentialAnimationGroup::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
}
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseUpdateDirection(QSequentialAnimationGroup* self, int direction) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateDirection_IsBase(true);
	vqsequentialanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
}
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateDirection(QSequentialAnimationGroup* self, intptr_t slot) {
	auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self);
	if (vqsequentialanimationgroup && vqsequentialanimationgroup->isVirtualQSequentialAnimationGroup) {
vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateDirection_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateDirection_Callback>(slot));
}
}

void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self) {
    delete self;
}

