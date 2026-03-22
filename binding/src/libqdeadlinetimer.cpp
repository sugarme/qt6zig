#include <QDeadlineTimer>
#include <qdeadlinetimer.h>
#include "libqdeadlinetimer.h"
#include "libqdeadlinetimer.hxx"

QDeadlineTimer* QDeadlineTimer_new(const QDeadlineTimer* other) {
	 return new QDeadlineTimer(*other);
}

QDeadlineTimer* QDeadlineTimer_new2(QDeadlineTimer* other) {
	 return new QDeadlineTimer(*other);
}

QDeadlineTimer* QDeadlineTimer_new3() {
	 return new QDeadlineTimer();
}

QDeadlineTimer* QDeadlineTimer_new4(int type_) {
	 return new QDeadlineTimer(static_cast<Qt::TimerType>(type_));
}

QDeadlineTimer* QDeadlineTimer_new5(int param1) {
	 return new QDeadlineTimer(static_cast<QDeadlineTimer::ForeverConstant>(param1));
}

QDeadlineTimer* QDeadlineTimer_new6(long long msecs) {
	 return new QDeadlineTimer(msecs);
}

QDeadlineTimer* QDeadlineTimer_new7(const QDeadlineTimer* param1) {
	 return new QDeadlineTimer(*param1);
}

QDeadlineTimer* QDeadlineTimer_new8(int param1, int type_) {
	 return new QDeadlineTimer(static_cast<QDeadlineTimer::ForeverConstant>(param1), static_cast<Qt::TimerType>(type_));
}

QDeadlineTimer* QDeadlineTimer_new9(long long msecs, int typeVal) {
	 return new QDeadlineTimer(msecs, static_cast<Qt::TimerType>(typeVal));
}

void QDeadlineTimer_CopyAssign(QDeadlineTimer* self, QDeadlineTimer* other) {
    *self = *other;
}

void QDeadlineTimer_MoveAssign(QDeadlineTimer* self, QDeadlineTimer* other) {
    *self = std::move(*other);
}

void QDeadlineTimer_Swap(QDeadlineTimer* self, QDeadlineTimer* other) {
	self->swap(*other);
}

bool QDeadlineTimer_IsForever(const QDeadlineTimer* self) {
	return self->isForever();
}

bool QDeadlineTimer_HasExpired(const QDeadlineTimer* self) {
	return self->hasExpired();
}

int QDeadlineTimer_TimerType(const QDeadlineTimer* self) {
	return self->timerType();
}

void QDeadlineTimer_SetTimerType(QDeadlineTimer* self, int typeVal) {
	self->setTimerType(static_cast<Qt::TimerType>(typeVal));
}

long long QDeadlineTimer_RemainingTime(const QDeadlineTimer* self) {
	return self->remainingTime();
}

long long QDeadlineTimer_RemainingTimeNSecs(const QDeadlineTimer* self) {
	return self->remainingTimeNSecs();
}

void QDeadlineTimer_SetRemainingTime(QDeadlineTimer* self, long long msecs) {
	self->setRemainingTime(msecs);
}

void QDeadlineTimer_SetPreciseRemainingTime(QDeadlineTimer* self, long long secs) {
	self->setPreciseRemainingTime(secs);
}

long long QDeadlineTimer_Deadline(const QDeadlineTimer* self) {
	return self->deadline();
}

long long QDeadlineTimer_DeadlineNSecs(const QDeadlineTimer* self) {
	return self->deadlineNSecs();
}

void QDeadlineTimer_SetDeadline(QDeadlineTimer* self, long long msecs) {
	self->setDeadline(msecs);
}

void QDeadlineTimer_SetPreciseDeadline(QDeadlineTimer* self, long long secs) {
	self->setPreciseDeadline(secs);
}

QDeadlineTimer* QDeadlineTimer_AddNSecs(QDeadlineTimer* dt, long long nsecs) {
	return new QDeadlineTimer(QDeadlineTimer::addNSecs(*dt, nsecs));
}

QDeadlineTimer* QDeadlineTimer_Current() {
	return new QDeadlineTimer(QDeadlineTimer::current());
}

QDeadlineTimer* QDeadlineTimer_OperatorPlusAssign(QDeadlineTimer* self, long long msecs) {
	return new QDeadlineTimer(self->operator+=(msecs));
}

QDeadlineTimer* QDeadlineTimer_OperatorMinusAssign(QDeadlineTimer* self, long long msecs) {
	return new QDeadlineTimer(self->operator-=(msecs));
}

void QDeadlineTimer_SetRemainingTime2(QDeadlineTimer* self, long long msecs, int typeVal) {
	self->setRemainingTime(msecs, static_cast<Qt::TimerType>(typeVal));
}

void QDeadlineTimer_SetPreciseRemainingTime2(QDeadlineTimer* self, long long secs, long long nsecs) {
	self->setPreciseRemainingTime(secs, nsecs);
}

void QDeadlineTimer_SetPreciseRemainingTime3(QDeadlineTimer* self, long long secs, long long nsecs, int typeVal) {
	self->setPreciseRemainingTime(secs, nsecs, static_cast<Qt::TimerType>(typeVal));
}

void QDeadlineTimer_SetDeadline2(QDeadlineTimer* self, long long msecs, int timerType) {
	self->setDeadline(msecs, static_cast<Qt::TimerType>(timerType));
}

void QDeadlineTimer_SetPreciseDeadline2(QDeadlineTimer* self, long long secs, long long nsecs) {
	self->setPreciseDeadline(secs, nsecs);
}

void QDeadlineTimer_SetPreciseDeadline3(QDeadlineTimer* self, long long secs, long long nsecs, int typeVal) {
	self->setPreciseDeadline(secs, nsecs, static_cast<Qt::TimerType>(typeVal));
}

QDeadlineTimer* QDeadlineTimer_Current1(int timerType) {
	return new QDeadlineTimer(QDeadlineTimer::current(static_cast<Qt::TimerType>(timerType)));
}

void QDeadlineTimer_Delete(QDeadlineTimer* self) {
    delete self;
}

