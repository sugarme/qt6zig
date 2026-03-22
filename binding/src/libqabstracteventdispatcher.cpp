#include <QAbstractEventDispatcher>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfoV2
#include <QAbstractEventDispatcherV2>
#include <QAbstractNativeEventFilter>
#include <QByteArray>
#include <QDeadlineTimer>
#include <QObject>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <qabstracteventdispatcher.h>
#include "libqabstracteventdispatcher.h"
#include "libqabstracteventdispatcher.hxx"

QAbstractEventDispatcher* QAbstractEventDispatcher_new() {
	 return new QAbstractEventDispatcher();
}

QAbstractEventDispatcher* QAbstractEventDispatcher_new2(QObject* parent) {
	 return new QAbstractEventDispatcher(parent);
}

libqt_string QAbstractEventDispatcher_Tr(const char* s) {
	QString _ret = QAbstractEventDispatcher::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractEventDispatcher* QAbstractEventDispatcher_Instance() {
	return QAbstractEventDispatcher::instance();
}

bool QAbstractEventDispatcher_ProcessEvents(QAbstractEventDispatcher* self, int flags) {
	return self->processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags));
}

void QAbstractEventDispatcher_RegisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
	self->registerSocketNotifier(notifier);
}

void QAbstractEventDispatcher_UnregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
	self->unregisterSocketNotifier(notifier);
}

int QAbstractEventDispatcher_RegisterTimer2(QAbstractEventDispatcher* self, long long interval, int timerType, QObject* object) {
	return self->registerTimer(interval, static_cast<Qt::TimerType>(timerType), object);
}

void QAbstractEventDispatcher_RegisterTimer3(QAbstractEventDispatcher* self, int timerId, long long interval, int timerType, QObject* object) {
	self->registerTimer(timerId, interval, static_cast<Qt::TimerType>(timerType), object);
}

bool QAbstractEventDispatcher_UnregisterTimer(QAbstractEventDispatcher* self, int timerId) {
	return self->unregisterTimer(timerId);
}

bool QAbstractEventDispatcher_UnregisterTimers(QAbstractEventDispatcher* self, QObject* object) {
	return self->unregisterTimers(object);
}

libqt_list QAbstractEventDispatcher_RegisteredTimers(const QAbstractEventDispatcher* self, QObject* object) {
	return self->registeredTimers(object);
}

int QAbstractEventDispatcher_RemainingTime(QAbstractEventDispatcher* self, int timerId) {
	return self->remainingTime(timerId);
}

bool QAbstractEventDispatcher_UnregisterTimer2(QAbstractEventDispatcher* self, int timerId) {
	return self->unregisterTimer(static_cast<Qt::TimerId>(timerId));
}

libqt_list QAbstractEventDispatcher_TimersForObject(const QAbstractEventDispatcher* self, QObject* object) {
	return self->timersForObject(object);
}

void QAbstractEventDispatcher_WakeUp(QAbstractEventDispatcher* self) {
	self->wakeUp();
}

void QAbstractEventDispatcher_Interrupt(QAbstractEventDispatcher* self) {
	self->interrupt();
}

void QAbstractEventDispatcher_StartingUp(QAbstractEventDispatcher* self) {
	self->startingUp();
}

void QAbstractEventDispatcher_ClosingDown(QAbstractEventDispatcher* self) {
	self->closingDown();
}

void QAbstractEventDispatcher_InstallNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
	self->installNativeEventFilter(filterObj);
}

void QAbstractEventDispatcher_RemoveNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
	self->removeNativeEventFilter(filterObj);
}

bool QAbstractEventDispatcher_FilterNativeEvent(QAbstractEventDispatcher* self, const libqt_string eventType, void* message, intptr_t* result) {
	return self->filterNativeEvent(QByteArray(eventType.data, eventType.len), message, result);
}

void QAbstractEventDispatcher_AboutToBlock(QAbstractEventDispatcher* self) {
	self->aboutToBlock();
}

void QAbstractEventDispatcher_Connect_AboutToBlock(QAbstractEventDispatcher* self, intptr_t slot) {
    void (*slotFunc)(QAbstractEventDispatcher*) = reinterpret_cast<void (*)(QAbstractEventDispatcher*)>(slot);
    QAbstractEventDispatcher::connect(self, &QAbstractEventDispatcher::aboutToBlock, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractEventDispatcher_Awake(QAbstractEventDispatcher* self) {
	self->awake();
}

void QAbstractEventDispatcher_Connect_Awake(QAbstractEventDispatcher* self, intptr_t slot) {
    void (*slotFunc)(QAbstractEventDispatcher*) = reinterpret_cast<void (*)(QAbstractEventDispatcher*)>(slot);
    QAbstractEventDispatcher::connect(self, &QAbstractEventDispatcher::awake, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QAbstractEventDispatcher_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractEventDispatcher::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractEventDispatcher_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractEventDispatcher::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractEventDispatcher* QAbstractEventDispatcher_Instance1(QThread* thread) {
	return QAbstractEventDispatcher::instance(thread);
}

void QAbstractEventDispatcher_Delete(QAbstractEventDispatcher* self) {
    delete self;
}

QAbstractEventDispatcherV2* QAbstractEventDispatcherV2_new() {
	 return new QAbstractEventDispatcherV2();
}

QAbstractEventDispatcherV2* QAbstractEventDispatcherV2_new2(QObject* parent) {
	 return new QAbstractEventDispatcherV2(parent);
}

libqt_string QAbstractEventDispatcherV2_Tr(const char* s) {
	QString _ret = QAbstractEventDispatcherV2::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QAbstractEventDispatcherV2_UnregisterTimer(QAbstractEventDispatcherV2* self, int timerId) {
	return self->unregisterTimer(static_cast<Qt::TimerId>(timerId));
}

libqt_list QAbstractEventDispatcherV2_TimersForObject(const QAbstractEventDispatcherV2* self, QObject* object) {
	return self->timersForObject(object);
}

bool QAbstractEventDispatcherV2_ProcessEventsWithDeadline(QAbstractEventDispatcherV2* self, int flags, QDeadlineTimer* deadline) {
	return self->processEventsWithDeadline(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags), *deadline);
}

libqt_string QAbstractEventDispatcherV2_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractEventDispatcherV2::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractEventDispatcherV2_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractEventDispatcherV2::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractEventDispatcherV2_Delete(QAbstractEventDispatcherV2* self) {
    delete self;
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new(const QAbstractEventDispatcher__TimerInfo* other) {
	 return new QAbstractEventDispatcher::TimerInfo(*other);
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new2(QAbstractEventDispatcher__TimerInfo* other) {
	 return new QAbstractEventDispatcher::TimerInfo(*other);
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new3(int id, int i, int t) {
	 return new QAbstractEventDispatcher::TimerInfo(id, i, static_cast<Qt::TimerType>(t));
}

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new4(const QAbstractEventDispatcher__TimerInfo* param1) {
	 return new QAbstractEventDispatcher::TimerInfo(*param1);
}

void QAbstractEventDispatcher__TimerInfo_CopyAssign(QAbstractEventDispatcher__TimerInfo* self, QAbstractEventDispatcher__TimerInfo* other) {
    *self = *other;
}

void QAbstractEventDispatcher__TimerInfo_MoveAssign(QAbstractEventDispatcher__TimerInfo* self, QAbstractEventDispatcher__TimerInfo* other) {
    *self = std::move(*other);
}

int QAbstractEventDispatcher__TimerInfo_TimerId(const QAbstractEventDispatcher__TimerInfo* self) {
	return self->timerId;
}

void QAbstractEventDispatcher__TimerInfo_SetTimerId(QAbstractEventDispatcher__TimerInfo* self, int timerId) {
	self->timerId;
}

int QAbstractEventDispatcher__TimerInfo_Interval(const QAbstractEventDispatcher__TimerInfo* self) {
	return self->interval;
}

void QAbstractEventDispatcher__TimerInfo_SetInterval(QAbstractEventDispatcher__TimerInfo* self, int interval) {
	self->interval;
}

int QAbstractEventDispatcher__TimerInfo_TimerType(const QAbstractEventDispatcher__TimerInfo* self) {
	return self->timerType;
}

void QAbstractEventDispatcher__TimerInfo_SetTimerType(QAbstractEventDispatcher__TimerInfo* self, int timerType) {
	self->timerType;
}

void QAbstractEventDispatcher__TimerInfo_Delete(QAbstractEventDispatcher__TimerInfo* self) {
    delete self;
}

QAbstractEventDispatcher__TimerInfoV2* QAbstractEventDispatcher__TimerInfoV2_new() {
	 return new QAbstractEventDispatcher::TimerInfoV2();
}

QAbstractEventDispatcher__TimerInfoV2* QAbstractEventDispatcher__TimerInfoV2_new2(const QAbstractEventDispatcher__TimerInfoV2* param1) {
	 return new QAbstractEventDispatcher::TimerInfoV2(*param1);
}

int QAbstractEventDispatcher__TimerInfoV2_TimerId(const QAbstractEventDispatcher__TimerInfoV2* self) {
	return self->timerId;
}

void QAbstractEventDispatcher__TimerInfoV2_SetTimerId(QAbstractEventDispatcher__TimerInfoV2* self, int timerId) {
	self->timerId;
}

int QAbstractEventDispatcher__TimerInfoV2_TimerType(const QAbstractEventDispatcher__TimerInfoV2* self) {
	return self->timerType;
}

void QAbstractEventDispatcher__TimerInfoV2_SetTimerType(QAbstractEventDispatcher__TimerInfoV2* self, int timerType) {
	self->timerType;
}

void QAbstractEventDispatcher__TimerInfoV2_Delete(QAbstractEventDispatcher__TimerInfoV2* self) {
    delete self;
}

