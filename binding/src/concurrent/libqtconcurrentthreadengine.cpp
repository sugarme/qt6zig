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

// Derived class handler implementation
void QtConcurrent__ThreadEngineBase_Start(QtConcurrent__ThreadEngineBase* self) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
	vqtconcurrent__threadenginebase->start();
	} else {
	self->QtConcurrent::ThreadEngineBase::start();
}
}

// Base class handler implementation
void QtConcurrent__ThreadEngineBase_QBaseStart(QtConcurrent__ThreadEngineBase* self) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
vqtconcurrent__threadenginebase->setQtConcurrent__ThreadEngineBase_Start_IsBase(true);
	vqtconcurrent__threadenginebase->start();
}
}

// Auxiliary method to allow providing re-implementation
void QtConcurrent__ThreadEngineBase_OnStart(QtConcurrent__ThreadEngineBase* self, intptr_t slot) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
vqtconcurrent__threadenginebase->setQtConcurrent__ThreadEngineBase_Start_Callback(reinterpret_cast<VirtualQtConcurrentThreadEngineBase::QtConcurrent__ThreadEngineBase_Start_Callback>(slot));
}
}

// Derived class handler implementation
void QtConcurrent__ThreadEngineBase_Finish(QtConcurrent__ThreadEngineBase* self) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
	vqtconcurrent__threadenginebase->finish();
	} else {
	self->QtConcurrent::ThreadEngineBase::finish();
}
}

// Base class handler implementation
void QtConcurrent__ThreadEngineBase_QBaseFinish(QtConcurrent__ThreadEngineBase* self) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
vqtconcurrent__threadenginebase->setQtConcurrent__ThreadEngineBase_Finish_IsBase(true);
	vqtconcurrent__threadenginebase->finish();
}
}

// Auxiliary method to allow providing re-implementation
void QtConcurrent__ThreadEngineBase_OnFinish(QtConcurrent__ThreadEngineBase* self, intptr_t slot) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
vqtconcurrent__threadenginebase->setQtConcurrent__ThreadEngineBase_Finish_Callback(reinterpret_cast<VirtualQtConcurrentThreadEngineBase::QtConcurrent__ThreadEngineBase_Finish_Callback>(slot));
}
}

// Derived class handler implementation
int QtConcurrent__ThreadEngineBase_ThreadFunction(QtConcurrent__ThreadEngineBase* self) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
	return vqtconcurrent__threadenginebase->threadFunction();
	} else {
	return self->QtConcurrent::ThreadEngineBase::threadFunction();
}
}

// Base class handler implementation
int QtConcurrent__ThreadEngineBase_QBaseThreadFunction(QtConcurrent__ThreadEngineBase* self) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
vqtconcurrent__threadenginebase->setQtConcurrent__ThreadEngineBase_ThreadFunction_IsBase(true);
	return vqtconcurrent__threadenginebase->threadFunction();
}
}

// Auxiliary method to allow providing re-implementation
void QtConcurrent__ThreadEngineBase_OnThreadFunction(QtConcurrent__ThreadEngineBase* self, intptr_t slot) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
vqtconcurrent__threadenginebase->setQtConcurrent__ThreadEngineBase_ThreadFunction_Callback(reinterpret_cast<VirtualQtConcurrentThreadEngineBase::QtConcurrent__ThreadEngineBase_ThreadFunction_Callback>(slot));
}
}

// Derived class handler implementation
bool QtConcurrent__ThreadEngineBase_ShouldStartThread(QtConcurrent__ThreadEngineBase* self) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
	return vqtconcurrent__threadenginebase->shouldStartThread();
	} else {
	return self->QtConcurrent::ThreadEngineBase::shouldStartThread();
}
}

// Base class handler implementation
bool QtConcurrent__ThreadEngineBase_QBaseShouldStartThread(QtConcurrent__ThreadEngineBase* self) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
vqtconcurrent__threadenginebase->setQtConcurrent__ThreadEngineBase_ShouldStartThread_IsBase(true);
	return vqtconcurrent__threadenginebase->shouldStartThread();
}
}

// Auxiliary method to allow providing re-implementation
void QtConcurrent__ThreadEngineBase_OnShouldStartThread(QtConcurrent__ThreadEngineBase* self, intptr_t slot) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
vqtconcurrent__threadenginebase->setQtConcurrent__ThreadEngineBase_ShouldStartThread_Callback(reinterpret_cast<VirtualQtConcurrentThreadEngineBase::QtConcurrent__ThreadEngineBase_ShouldStartThread_Callback>(slot));
}
}

// Derived class handler implementation
bool QtConcurrent__ThreadEngineBase_ShouldThrottleThread(QtConcurrent__ThreadEngineBase* self) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
	return vqtconcurrent__threadenginebase->shouldThrottleThread();
	} else {
	return self->QtConcurrent::ThreadEngineBase::shouldThrottleThread();
}
}

// Base class handler implementation
bool QtConcurrent__ThreadEngineBase_QBaseShouldThrottleThread(QtConcurrent__ThreadEngineBase* self) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
vqtconcurrent__threadenginebase->setQtConcurrent__ThreadEngineBase_ShouldThrottleThread_IsBase(true);
	return vqtconcurrent__threadenginebase->shouldThrottleThread();
}
}

// Auxiliary method to allow providing re-implementation
void QtConcurrent__ThreadEngineBase_OnShouldThrottleThread(QtConcurrent__ThreadEngineBase* self, intptr_t slot) {
	auto* vqtconcurrent__threadenginebase = dynamic_cast<VirtualQtConcurrentThreadEngineBase*>(self);
	if (vqtconcurrent__threadenginebase && vqtconcurrent__threadenginebase->isVirtualQtConcurrentThreadEngineBase) {
vqtconcurrent__threadenginebase->setQtConcurrent__ThreadEngineBase_ShouldThrottleThread_Callback(reinterpret_cast<VirtualQtConcurrentThreadEngineBase::QtConcurrent__ThreadEngineBase_ShouldThrottleThread_Callback>(slot));
}
}

void QtConcurrent__ThreadEngineBase_Delete(QtConcurrent__ThreadEngineBase* self) {
    delete self;
}

