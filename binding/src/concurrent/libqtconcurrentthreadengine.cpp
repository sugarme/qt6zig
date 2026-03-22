#include <QRunnable>
#include <QThreadPool>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtConcurrent__ThreadEngineBarrier
#define WORKAROUND_INNER_CLASS_DEFINITION_QtConcurrent__ThreadEngineBase
#include <qtconcurrentthreadengine.h>
#include "libqtconcurrentthreadengine.h"
#include "libqtconcurrentthreadengine.hxx"

QtConcurrent__ThreadEngineBarrier* QtConcurrent__ThreadEngineBarrier_new() {
	 return new QtConcurrent::ThreadEngineBarrier();
}

void QtConcurrent__ThreadEngineBarrier_Acquire(QtConcurrent__ThreadEngineBarrier* self) {
	self->acquire();
}

int QtConcurrent__ThreadEngineBarrier_Release(QtConcurrent__ThreadEngineBarrier* self) {
	return self->release();
}

void QtConcurrent__ThreadEngineBarrier_Wait(QtConcurrent__ThreadEngineBarrier* self) {
	self->wait();
}

int QtConcurrent__ThreadEngineBarrier_CurrentCount(QtConcurrent__ThreadEngineBarrier* self) {
	return self->currentCount();
}

bool QtConcurrent__ThreadEngineBarrier_ReleaseUnlessLast(QtConcurrent__ThreadEngineBarrier* self) {
	return self->releaseUnlessLast();
}

void QtConcurrent__ThreadEngineBarrier_Delete(QtConcurrent__ThreadEngineBarrier* self) {
    delete self;
}

QtConcurrent__ThreadEngineBase* QtConcurrent__ThreadEngineBase_new(QThreadPool* pool) {
	 return new VirtualQtConcurrentThreadEngineBase(pool);
}

void QtConcurrent__ThreadEngineBase_StartSingleThreaded(QtConcurrent__ThreadEngineBase* self) {
	self->startSingleThreaded();
}

void QtConcurrent__ThreadEngineBase_StartThread(QtConcurrent__ThreadEngineBase* self) {
	self->startThread();
}

bool QtConcurrent__ThreadEngineBase_IsCanceled(QtConcurrent__ThreadEngineBase* self) {
	return self->isCanceled();
}

void QtConcurrent__ThreadEngineBase_WaitForResume(QtConcurrent__ThreadEngineBase* self) {
	self->waitForResume();
}

bool QtConcurrent__ThreadEngineBase_IsProgressReportingEnabled(QtConcurrent__ThreadEngineBase* self) {
	return self->isProgressReportingEnabled();
}

void QtConcurrent__ThreadEngineBase_SetProgressValue(QtConcurrent__ThreadEngineBase* self, int progress) {
	self->setProgressValue(progress);
}

void QtConcurrent__ThreadEngineBase_SetProgressRange(QtConcurrent__ThreadEngineBase* self, int minimum, int maximum) {
	self->setProgressRange(minimum, maximum);
}

void QtConcurrent__ThreadEngineBase_AcquireBarrierSemaphore(QtConcurrent__ThreadEngineBase* self) {
	self->acquireBarrierSemaphore();
}

void QtConcurrent__ThreadEngineBase_ReportIfSuspensionDone(const QtConcurrent__ThreadEngineBase* self) {
	self->reportIfSuspensionDone();
}

void QtConcurrent__ThreadEngineBase_Delete(QtConcurrent__ThreadEngineBase* self) {
    delete self;
}

