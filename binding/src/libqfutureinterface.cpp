#include <QFutureInterfaceBase>
#include <QMutex>
#include <QRunnable>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QThreadPool>
#include <qfutureinterface.h>
#include "libqfutureinterface.h"
#include "libqfutureinterface.hxx"

QFutureInterfaceBase* QFutureInterfaceBase_new() {
	 return new QFutureInterfaceBase();
}

QFutureInterfaceBase* QFutureInterfaceBase_new2(const QFutureInterfaceBase* other) {
	 return new QFutureInterfaceBase(*other);
}

QFutureInterfaceBase* QFutureInterfaceBase_new3(int initialState) {
	 return new QFutureInterfaceBase(static_cast<QFlags<QStyle::StateFlag>>(initialState));
}

void QFutureInterfaceBase_OperatorAssign(QFutureInterfaceBase* self, const QFutureInterfaceBase* other) {
	self->operator=(*other);
}

void QFutureInterfaceBase_ReportStarted(QFutureInterfaceBase* self) {
	self->reportStarted();
}

void QFutureInterfaceBase_ReportFinished(QFutureInterfaceBase* self) {
	self->reportFinished();
}

void QFutureInterfaceBase_ReportCanceled(QFutureInterfaceBase* self) {
	self->reportCanceled();
}

void QFutureInterfaceBase_ReportResultsReady(QFutureInterfaceBase* self, int beginIndex, int endIndex) {
	self->reportResultsReady(beginIndex, endIndex);
}

void QFutureInterfaceBase_SetRunnable(QFutureInterfaceBase* self, QRunnable* runnable) {
	self->setRunnable(runnable);
}

void QFutureInterfaceBase_SetThreadPool(QFutureInterfaceBase* self, QThreadPool* pool) {
	self->setThreadPool(pool);
}

QThreadPool* QFutureInterfaceBase_ThreadPool(const QFutureInterfaceBase* self) {
	return self->threadPool();
}

void QFutureInterfaceBase_SetFilterMode(QFutureInterfaceBase* self, bool enable) {
	self->setFilterMode(enable);
}

void QFutureInterfaceBase_SetProgressRange(QFutureInterfaceBase* self, int minimum, int maximum) {
	self->setProgressRange(minimum, maximum);
}

int QFutureInterfaceBase_ProgressMinimum(const QFutureInterfaceBase* self) {
	return self->progressMinimum();
}

int QFutureInterfaceBase_ProgressMaximum(const QFutureInterfaceBase* self) {
	return self->progressMaximum();
}

bool QFutureInterfaceBase_IsProgressUpdateNeeded(const QFutureInterfaceBase* self) {
	return self->isProgressUpdateNeeded();
}

void QFutureInterfaceBase_SetProgressValue(QFutureInterfaceBase* self, int progressValue) {
	self->setProgressValue(progressValue);
}

int QFutureInterfaceBase_ProgressValue(const QFutureInterfaceBase* self) {
	return self->progressValue();
}

void QFutureInterfaceBase_SetProgressValueAndText(QFutureInterfaceBase* self, int progressValue, const libqt_string progressText) {
	self->setProgressValueAndText(progressValue, QString::fromUtf8(progressText.data, progressText.len));
}

libqt_string QFutureInterfaceBase_ProgressText(const QFutureInterfaceBase* self) {
	QString _ret = self->progressText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFutureInterfaceBase_SetExpectedResultCount(QFutureInterfaceBase* self, int resultCount) {
	self->setExpectedResultCount(resultCount);
}

int QFutureInterfaceBase_ExpectedResultCount(QFutureInterfaceBase* self) {
	return self->expectedResultCount();
}

int QFutureInterfaceBase_ResultCount(const QFutureInterfaceBase* self) {
	return self->resultCount();
}

bool QFutureInterfaceBase_QueryState(const QFutureInterfaceBase* self, int state) {
	return self->queryState(static_cast<QFlags<QStyle::StateFlag>>(state));
}

bool QFutureInterfaceBase_IsRunning(const QFutureInterfaceBase* self) {
	return self->isRunning();
}

bool QFutureInterfaceBase_IsStarted(const QFutureInterfaceBase* self) {
	return self->isStarted();
}

bool QFutureInterfaceBase_IsCanceled(const QFutureInterfaceBase* self) {
	return self->isCanceled();
}

bool QFutureInterfaceBase_IsFinished(const QFutureInterfaceBase* self) {
	return self->isFinished();
}

bool QFutureInterfaceBase_IsPaused(const QFutureInterfaceBase* self) {
	return self->isPaused();
}

void QFutureInterfaceBase_SetPaused(QFutureInterfaceBase* self, bool paused) {
	self->setPaused(paused);
}

void QFutureInterfaceBase_TogglePaused(QFutureInterfaceBase* self) {
	self->togglePaused();
}

bool QFutureInterfaceBase_IsSuspending(const QFutureInterfaceBase* self) {
	return self->isSuspending();
}

bool QFutureInterfaceBase_IsSuspended(const QFutureInterfaceBase* self) {
	return self->isSuspended();
}

bool QFutureInterfaceBase_IsThrottled(const QFutureInterfaceBase* self) {
	return self->isThrottled();
}

bool QFutureInterfaceBase_IsResultReadyAt(const QFutureInterfaceBase* self, int index) {
	return self->isResultReadyAt(index);
}

bool QFutureInterfaceBase_IsValid(const QFutureInterfaceBase* self) {
	return self->isValid();
}

int QFutureInterfaceBase_LoadState(const QFutureInterfaceBase* self) {
	return self->loadState();
}

void QFutureInterfaceBase_Cancel(QFutureInterfaceBase* self) {
	self->cancel();
}

void QFutureInterfaceBase_CancelAndFinish(QFutureInterfaceBase* self) {
	self->cancelAndFinish();
}

void QFutureInterfaceBase_SetSuspended(QFutureInterfaceBase* self, bool suspendVal) {
	self->setSuspended(suspendVal);
}

void QFutureInterfaceBase_ToggleSuspended(QFutureInterfaceBase* self) {
	self->toggleSuspended();
}

void QFutureInterfaceBase_ReportSuspended(const QFutureInterfaceBase* self) {
	self->reportSuspended();
}

void QFutureInterfaceBase_SetThrottled(QFutureInterfaceBase* self, bool enable) {
	self->setThrottled(enable);
}

void QFutureInterfaceBase_WaitForFinished(QFutureInterfaceBase* self) {
	self->waitForFinished();
}

bool QFutureInterfaceBase_WaitForNextResult(QFutureInterfaceBase* self) {
	return self->waitForNextResult();
}

void QFutureInterfaceBase_WaitForResult(QFutureInterfaceBase* self, int resultIndex) {
	self->waitForResult(resultIndex);
}

void QFutureInterfaceBase_WaitForResume(QFutureInterfaceBase* self) {
	self->waitForResume();
}

void QFutureInterfaceBase_SuspendIfRequested(QFutureInterfaceBase* self) {
	self->suspendIfRequested();
}

QMutex* QFutureInterfaceBase_Mutex(const QFutureInterfaceBase* self) {
	return new QMutex(self->mutex());
}

bool QFutureInterfaceBase_HasException(const QFutureInterfaceBase* self) {
	return self->hasException();
}

bool QFutureInterfaceBase_OperatorEqual(const QFutureInterfaceBase* self, const QFutureInterfaceBase* other) {
	return self->operator==(*other);
}

bool QFutureInterfaceBase_OperatorNotEqual(const QFutureInterfaceBase* self, const QFutureInterfaceBase* other) {
	return self->operator!=(*other);
}

void QFutureInterfaceBase_Swap(QFutureInterfaceBase* self, QFutureInterfaceBase* other) {
	self->swap(*other);
}

bool QFutureInterfaceBase_IsChainCanceled(const QFutureInterfaceBase* self) {
	return self->isChainCanceled();
}

void QFutureInterfaceBase_Delete(QFutureInterfaceBase* self) {
    delete self;
}

