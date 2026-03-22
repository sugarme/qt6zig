#include <QEasingCurve>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeLine>
#include <QTimerEvent>
#include <qtimeline.h>
#include "libqtimeline.h"
#include "libqtimeline.hxx"

QTimeLine* QTimeLine_new() {
	 return new VirtualQTimeLine();
}

QTimeLine* QTimeLine_new2(int duration) {
	 return new VirtualQTimeLine(duration);
}

QTimeLine* QTimeLine_new3(int duration, QObject* parent) {
	 return new VirtualQTimeLine(duration, parent);
}

libqt_string QTimeLine_Tr(const char* s) {
	QString _ret = QTimeLine::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QTimeLine_State(const QTimeLine* self) {
	return self->state();
}

int QTimeLine_LoopCount(const QTimeLine* self) {
	return self->loopCount();
}

void QTimeLine_SetLoopCount(QTimeLine* self, int count) {
	self->setLoopCount(count);
}

QBindable<int> QTimeLine_BindableLoopCount(QTimeLine* self) {
	return self->bindableLoopCount();
}

int QTimeLine_Direction(const QTimeLine* self) {
	return self->direction();
}

void QTimeLine_SetDirection(QTimeLine* self, int direction) {
	self->setDirection(static_cast<QProgressBar::Direction>(direction));
}

QBindable<Direction> QTimeLine_BindableDirection(QTimeLine* self) {
	return self->bindableDirection();
}

int QTimeLine_Duration(const QTimeLine* self) {
	return self->duration();
}

void QTimeLine_SetDuration(QTimeLine* self, int duration) {
	self->setDuration(duration);
}

QBindable<int> QTimeLine_BindableDuration(QTimeLine* self) {
	return self->bindableDuration();
}

int QTimeLine_StartFrame(const QTimeLine* self) {
	return self->startFrame();
}

void QTimeLine_SetStartFrame(QTimeLine* self, int frame) {
	self->setStartFrame(frame);
}

int QTimeLine_EndFrame(const QTimeLine* self) {
	return self->endFrame();
}

void QTimeLine_SetEndFrame(QTimeLine* self, int frame) {
	self->setEndFrame(frame);
}

void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame) {
	self->setFrameRange(startFrame, endFrame);
}

int QTimeLine_UpdateInterval(const QTimeLine* self) {
	return self->updateInterval();
}

void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval) {
	self->setUpdateInterval(interval);
}

QBindable<int> QTimeLine_BindableUpdateInterval(QTimeLine* self) {
	return self->bindableUpdateInterval();
}

QEasingCurve* QTimeLine_EasingCurve(const QTimeLine* self) {
	return new QEasingCurve(self->easingCurve());
}

void QTimeLine_SetEasingCurve(QTimeLine* self, const QEasingCurve* curve) {
	self->setEasingCurve(*curve);
}

QBindable<QEasingCurve> QTimeLine_BindableEasingCurve(QTimeLine* self) {
	return self->bindableEasingCurve();
}

int QTimeLine_CurrentTime(const QTimeLine* self) {
	return self->currentTime();
}

QBindable<int> QTimeLine_BindableCurrentTime(QTimeLine* self) {
	return self->bindableCurrentTime();
}

int QTimeLine_CurrentFrame(const QTimeLine* self) {
	return self->currentFrame();
}

double QTimeLine_CurrentValue(const QTimeLine* self) {
	return self->currentValue();
}

int QTimeLine_FrameForTime(const QTimeLine* self, int msec) {
	return self->frameForTime(msec);
}

double QTimeLine_ValueForTime(const QTimeLine* self, int msec) {
	return self->valueForTime(msec);
}

void QTimeLine_Start(QTimeLine* self) {
	self->start();
}

void QTimeLine_Resume(QTimeLine* self) {
	self->resume();
}

void QTimeLine_Stop(QTimeLine* self) {
	self->stop();
}

void QTimeLine_SetPaused(QTimeLine* self, bool paused) {
	self->setPaused(paused);
}

void QTimeLine_SetCurrentTime(QTimeLine* self, int msec) {
	self->setCurrentTime(msec);
}

void QTimeLine_ToggleDirection(QTimeLine* self) {
	self->toggleDirection();
}

libqt_string QTimeLine_Tr2(const char* s, const char* c) {
	QString _ret = QTimeLine::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTimeLine_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTimeLine::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
double QTimeLine_QBaseValueForTime(const QTimeLine* self, int msec) {
	auto* vqtimeline = dynamic_cast<const VirtualQTimeLine*>(self);
	if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
vqtimeline->setQTimeLine_ValueForTime_IsBase(true);
	return vqtimeline->valueForTime(msec);
}
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnValueForTime(const QTimeLine* self, intptr_t slot) {
	auto* vqtimeline = dynamic_cast<const VirtualQTimeLine*>(self);
	if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
vqtimeline->setQTimeLine_ValueForTime_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_ValueForTime_Callback>(slot));
}
}

// Derived class handler implementation
void QTimeLine_TimerEvent(QTimeLine* self, QTimerEvent* event) {
	auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
	if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
	vqtimeline->timerEvent(event);
	} else {
	self->QTimeLine::timerEvent(event);
}
}

// Base class handler implementation
void QTimeLine_QBaseTimerEvent(QTimeLine* self, QTimerEvent* event) {
	auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
	if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
vqtimeline->setQTimeLine_TimerEvent_IsBase(true);
	vqtimeline->timerEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnTimerEvent(QTimeLine* self, intptr_t slot) {
	auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
	if (vqtimeline && vqtimeline->isVirtualQTimeLine) {
vqtimeline->setQTimeLine_TimerEvent_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_TimerEvent_Callback>(slot));
}
}

void QTimeLine_Connect_valueChanged(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*, double) = reinterpret_cast<void (*)(QTimeLine*, double)>(slot);
    QTimeLine::connect(self, &QTimeLine::valueChanged, [self, slotFunc](qreal x) {
	slotFunc(self, x);
    });
}

void QTimeLine_Connect_frameChanged(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*, int) = reinterpret_cast<void (*)(QTimeLine*, int)>(slot);
    QTimeLine::connect(self, &QTimeLine::frameChanged, [self, slotFunc](int param1) {
	slotFunc(self, param1);
    });
}

void QTimeLine_Connect_stateChanged(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*, int) = reinterpret_cast<void (*)(QTimeLine*, int)>(slot);
    QTimeLine::connect(self, &QTimeLine::stateChanged, [self, slotFunc](QTimeLine::State newState) {
	slotFunc(self, newState);
    });
}

void QTimeLine_Connect_finished(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*) = reinterpret_cast<void (*)(QTimeLine*)>(slot);
    QTimeLine::connect(self, &QTimeLine::finished, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QTimeLine_Delete(QTimeLine* self) {
    delete self;
}

