#include <QThreadPool>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtConcurrent__TaskStartParameters
#include <qtconcurrentrunbase.h>
#include "libqtconcurrentrunbase.h"
#include "libqtconcurrentrunbase.hxx"

QtConcurrent__TaskStartParameters* QtConcurrent__TaskStartParameters_new(const QtConcurrent__TaskStartParameters* other) {
	 return new QtConcurrent::TaskStartParameters(*other);
}

QtConcurrent__TaskStartParameters* QtConcurrent__TaskStartParameters_new2(QtConcurrent__TaskStartParameters* other) {
	 return new QtConcurrent::TaskStartParameters(*other);
}

void QtConcurrent__TaskStartParameters_CopyAssign(QtConcurrent__TaskStartParameters* self, QtConcurrent__TaskStartParameters* other) {
    *self = *other;
}

void QtConcurrent__TaskStartParameters_MoveAssign(QtConcurrent__TaskStartParameters* self, QtConcurrent__TaskStartParameters* other) {
    *self = std::move(*other);
}

QThreadPool* QtConcurrent__TaskStartParameters_ThreadPool(const QtConcurrent__TaskStartParameters* self) {
	return self->threadPool;
}

void QtConcurrent__TaskStartParameters_SetThreadPool(QtConcurrent__TaskStartParameters* self, QThreadPool* threadPool) {
	self->threadPool;
}

int QtConcurrent__TaskStartParameters_Priority(const QtConcurrent__TaskStartParameters* self) {
	return self->priority;
}

void QtConcurrent__TaskStartParameters_SetPriority(QtConcurrent__TaskStartParameters* self, int priority) {
	self->priority;
}

void QtConcurrent__TaskStartParameters_Delete(QtConcurrent__TaskStartParameters* self) {
    delete self;
}

