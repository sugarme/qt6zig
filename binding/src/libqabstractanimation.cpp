#include <QAbstractAnimation>
#include <QAnimationDriver>
#include <QAnimationGroup>
#include <QEvent>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractanimation.h>
#include "libqabstractanimation.h"
#include "libqabstractanimation.hxx"

QAbstractAnimation* QAbstractAnimation_new() {
	 return new VirtualQAbstractAnimation();
}

QAbstractAnimation* QAbstractAnimation_new2(QObject* parent) {
	 return new VirtualQAbstractAnimation(parent);
}

libqt_string QAbstractAnimation_Tr(const char* s) {
	QString _ret = QAbstractAnimation::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAbstractAnimation_State(const QAbstractAnimation* self) {
	return self->state();
}

QBindable<QAbstractAnimation::State> QAbstractAnimation_BindableState(const QAbstractAnimation* self) {
	return self->bindableState();
}

QAnimationGroup* QAbstractAnimation_Group(const QAbstractAnimation* self) {
	return self->group();
}

int QAbstractAnimation_Direction(const QAbstractAnimation* self) {
	return self->direction();
}

void QAbstractAnimation_SetDirection(QAbstractAnimation* self, int direction) {
	self->setDirection(static_cast<QProgressBar::Direction>(direction));
}

QBindable<Direction> QAbstractAnimation_BindableDirection(QAbstractAnimation* self) {
	return self->bindableDirection();
}

int QAbstractAnimation_CurrentTime(const QAbstractAnimation* self) {
	return self->currentTime();
}

QBindable<int> QAbstractAnimation_BindableCurrentTime(QAbstractAnimation* self) {
	return self->bindableCurrentTime();
}

int QAbstractAnimation_CurrentLoopTime(const QAbstractAnimation* self) {
	return self->currentLoopTime();
}

int QAbstractAnimation_LoopCount(const QAbstractAnimation* self) {
	return self->loopCount();
}

void QAbstractAnimation_SetLoopCount(QAbstractAnimation* self, int loopCount) {
	self->setLoopCount(loopCount);
}

QBindable<int> QAbstractAnimation_BindableLoopCount(QAbstractAnimation* self) {
	return self->bindableLoopCount();
}

int QAbstractAnimation_CurrentLoop(const QAbstractAnimation* self) {
	return self->currentLoop();
}

QBindable<int> QAbstractAnimation_BindableCurrentLoop(const QAbstractAnimation* self) {
	return self->bindableCurrentLoop();
}

int QAbstractAnimation_Duration(const QAbstractAnimation* self) {
	return self->duration();
}

int QAbstractAnimation_TotalDuration(const QAbstractAnimation* self) {
	return self->totalDuration();
}

void QAbstractAnimation_Finished(QAbstractAnimation* self) {
	self->finished();
}

void QAbstractAnimation_Connect_Finished(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*) = reinterpret_cast<void (*)(QAbstractAnimation*)>(slot);
    QAbstractAnimation::connect(self, &QAbstractAnimation::finished, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractAnimation_StateChanged(QAbstractAnimation* self, int newState, int oldState) {
	self->stateChanged(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}

void QAbstractAnimation_Connect_StateChanged(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*, int, int) = reinterpret_cast<void (*)(QAbstractAnimation*, int, int)>(slot);
    QAbstractAnimation::connect(self, &QAbstractAnimation::stateChanged, [self, slotFunc](QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
	slotFunc(self, newState, oldState);
    });
}

void QAbstractAnimation_CurrentLoopChanged(QAbstractAnimation* self, int currentLoop) {
	self->currentLoopChanged(currentLoop);
}

void QAbstractAnimation_Connect_CurrentLoopChanged(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*, int) = reinterpret_cast<void (*)(QAbstractAnimation*, int)>(slot);
    QAbstractAnimation::connect(self, &QAbstractAnimation::currentLoopChanged, [self, slotFunc](int currentLoop) {
	slotFunc(self, currentLoop);
    });
}

void QAbstractAnimation_DirectionChanged(QAbstractAnimation* self, int param1) {
	self->directionChanged(static_cast<QAbstractAnimation::Direction>(param1));
}

void QAbstractAnimation_Connect_DirectionChanged(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*, int) = reinterpret_cast<void (*)(QAbstractAnimation*, int)>(slot);
    QAbstractAnimation::connect(self, &QAbstractAnimation::directionChanged, [self, slotFunc](QAbstractAnimation::Direction param1) {
	slotFunc(self, param1);
    });
}

void QAbstractAnimation_Start(QAbstractAnimation* self) {
	self->start();
}

void QAbstractAnimation_Pause(QAbstractAnimation* self) {
	self->pause();
}

void QAbstractAnimation_Resume(QAbstractAnimation* self) {
	self->resume();
}

void QAbstractAnimation_SetPaused(QAbstractAnimation* self, bool paused) {
	self->setPaused(paused);
}

void QAbstractAnimation_Stop(QAbstractAnimation* self) {
	self->stop();
}

void QAbstractAnimation_SetCurrentTime(QAbstractAnimation* self, int msecs) {
	self->setCurrentTime(msecs);
}

libqt_string QAbstractAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractAnimation::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractAnimation::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractAnimation_Start1(QAbstractAnimation* self, int policy) {
	self->start(static_cast<QAbstractAnimation::DeletionPolicy>(policy));
}

// Base class handler implementation
int QAbstractAnimation_QBaseDuration(const QAbstractAnimation* self) {
	auto* vqabstractanimation = dynamic_cast<const VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
vqabstractanimation->setQAbstractAnimation_Duration_IsBase(true);
	return vqabstractanimation->duration();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnDuration(const QAbstractAnimation* self, intptr_t slot) {
	auto* vqabstractanimation = dynamic_cast<const VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
vqabstractanimation->setQAbstractAnimation_Duration_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Duration_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractAnimation_Event(QAbstractAnimation* self, QEvent* event) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
	return vqabstractanimation->event(event);
	} else {
	return self->QAbstractAnimation::event(event);
}
}

// Base class handler implementation
bool QAbstractAnimation_QBaseEvent(QAbstractAnimation* self, QEvent* event) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
vqabstractanimation->setQAbstractAnimation_Event_IsBase(true);
	return vqabstractanimation->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnEvent(QAbstractAnimation* self, intptr_t slot) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
vqabstractanimation->setQAbstractAnimation_Event_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractAnimation_UpdateCurrentTime(QAbstractAnimation* self, int currentTime) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
	vqabstractanimation->updateCurrentTime(currentTime);
	} else {
	self->QAbstractAnimation::updateCurrentTime(currentTime);
}
}

// Base class handler implementation
void QAbstractAnimation_QBaseUpdateCurrentTime(QAbstractAnimation* self, int currentTime) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
vqabstractanimation->setQAbstractAnimation_UpdateCurrentTime_IsBase(true);
	vqabstractanimation->updateCurrentTime(currentTime);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateCurrentTime(QAbstractAnimation* self, intptr_t slot) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
vqabstractanimation->setQAbstractAnimation_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateCurrentTime_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractAnimation_UpdateState(QAbstractAnimation* self, int newState, int oldState) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
	vqabstractanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
	} else {
	self->QAbstractAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}
}

// Base class handler implementation
void QAbstractAnimation_QBaseUpdateState(QAbstractAnimation* self, int newState, int oldState) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
vqabstractanimation->setQAbstractAnimation_UpdateState_IsBase(true);
	vqabstractanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateState(QAbstractAnimation* self, intptr_t slot) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
vqabstractanimation->setQAbstractAnimation_UpdateState_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateState_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractAnimation_UpdateDirection(QAbstractAnimation* self, int direction) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
	vqabstractanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
	} else {
	self->QAbstractAnimation::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
}
}

// Base class handler implementation
void QAbstractAnimation_QBaseUpdateDirection(QAbstractAnimation* self, int direction) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
vqabstractanimation->setQAbstractAnimation_UpdateDirection_IsBase(true);
	vqabstractanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateDirection(QAbstractAnimation* self, intptr_t slot) {
	auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self);
	if (vqabstractanimation && vqabstractanimation->isVirtualQAbstractAnimation) {
vqabstractanimation->setQAbstractAnimation_UpdateDirection_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateDirection_Callback>(slot));
}
}

void QAbstractAnimation_Delete(QAbstractAnimation* self) {
    delete self;
}

QAnimationDriver* QAnimationDriver_new() {
	 return new VirtualQAnimationDriver();
}

QAnimationDriver* QAnimationDriver_new2(QObject* parent) {
	 return new VirtualQAnimationDriver(parent);
}

libqt_string QAnimationDriver_Tr(const char* s) {
	QString _ret = QAnimationDriver::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAnimationDriver_Advance(QAnimationDriver* self) {
	self->advance();
}

void QAnimationDriver_Install(QAnimationDriver* self) {
	self->install();
}

void QAnimationDriver_Uninstall(QAnimationDriver* self) {
	self->uninstall();
}

bool QAnimationDriver_IsRunning(const QAnimationDriver* self) {
	return self->isRunning();
}

long long QAnimationDriver_Elapsed(const QAnimationDriver* self) {
	return self->elapsed();
}

void QAnimationDriver_Started(QAnimationDriver* self) {
	self->started();
}

void QAnimationDriver_Connect_Started(QAnimationDriver* self, intptr_t slot) {
    void (*slotFunc)(QAnimationDriver*) = reinterpret_cast<void (*)(QAnimationDriver*)>(slot);
    QAnimationDriver::connect(self, &QAnimationDriver::started, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAnimationDriver_Stopped(QAnimationDriver* self) {
	self->stopped();
}

void QAnimationDriver_Connect_Stopped(QAnimationDriver* self, intptr_t slot) {
    void (*slotFunc)(QAnimationDriver*) = reinterpret_cast<void (*)(QAnimationDriver*)>(slot);
    QAnimationDriver::connect(self, &QAnimationDriver::stopped, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QAnimationDriver_Tr2(const char* s, const char* c) {
	QString _ret = QAnimationDriver::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAnimationDriver_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAnimationDriver::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QAnimationDriver_QBaseAdvance(QAnimationDriver* self) {
	auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
vqanimationdriver->setQAnimationDriver_Advance_IsBase(true);
	vqanimationdriver->advance();
}
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnAdvance(QAnimationDriver* self, intptr_t slot) {
	auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
vqanimationdriver->setQAnimationDriver_Advance_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Advance_Callback>(slot));
}
}

// Base class handler implementation
long long QAnimationDriver_QBaseElapsed(const QAnimationDriver* self) {
	auto* vqanimationdriver = dynamic_cast<const VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
vqanimationdriver->setQAnimationDriver_Elapsed_IsBase(true);
	return vqanimationdriver->elapsed();
}
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnElapsed(const QAnimationDriver* self, intptr_t slot) {
	auto* vqanimationdriver = dynamic_cast<const VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
vqanimationdriver->setQAnimationDriver_Elapsed_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Elapsed_Callback>(slot));
}
}

// Derived class handler implementation
void QAnimationDriver_Start(QAnimationDriver* self) {
	auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
	vqanimationdriver->start();
	} else {
	self->QAnimationDriver::start();
}
}

// Base class handler implementation
void QAnimationDriver_QBaseStart(QAnimationDriver* self) {
	auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
vqanimationdriver->setQAnimationDriver_Start_IsBase(true);
	vqanimationdriver->start();
}
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnStart(QAnimationDriver* self, intptr_t slot) {
	auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
vqanimationdriver->setQAnimationDriver_Start_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Start_Callback>(slot));
}
}

// Derived class handler implementation
void QAnimationDriver_Stop(QAnimationDriver* self) {
	auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
	vqanimationdriver->stop();
	} else {
	self->QAnimationDriver::stop();
}
}

// Base class handler implementation
void QAnimationDriver_QBaseStop(QAnimationDriver* self) {
	auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
vqanimationdriver->setQAnimationDriver_Stop_IsBase(true);
	vqanimationdriver->stop();
}
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnStop(QAnimationDriver* self, intptr_t slot) {
	auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
vqanimationdriver->setQAnimationDriver_Stop_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Stop_Callback>(slot));
}
}

// Derived class handler implementation
void QAnimationDriver_AdvanceAnimation(QAnimationDriver* self) {
	auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
	vqanimationdriver->advanceAnimation();
	} else {
	self->QAnimationDriver::advanceAnimation();
}
}

// Base class handler implementation
void QAnimationDriver_QBaseAdvanceAnimation(QAnimationDriver* self) {
	auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
vqanimationdriver->setQAnimationDriver_AdvanceAnimation_IsBase(true);
	vqanimationdriver->advanceAnimation();
}
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnAdvanceAnimation(QAnimationDriver* self, intptr_t slot) {
	auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self);
	if (vqanimationdriver && vqanimationdriver->isVirtualQAnimationDriver) {
vqanimationdriver->setQAnimationDriver_AdvanceAnimation_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_AdvanceAnimation_Callback>(slot));
}
}

void QAnimationDriver_Delete(QAnimationDriver* self) {
    delete self;
}

