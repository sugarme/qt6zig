#define WORKAROUND_INNER_CLASS_DEFINITION_QtConcurrent__Median
#include <qtconcurrentmedian.h>
#include "libqtconcurrentmedian.h"
#include "libqtconcurrentmedian.hxx"

QtConcurrent__Median* QtConcurrent__Median_new(const QtConcurrent__Median* other) {
	 return new QtConcurrent::Median(*other);
}

QtConcurrent__Median* QtConcurrent__Median_new2(QtConcurrent__Median* other) {
	 return new QtConcurrent::Median(*other);
}

QtConcurrent__Median* QtConcurrent__Median_new3() {
	 return new QtConcurrent::Median();
}

void QtConcurrent__Median_CopyAssign(QtConcurrent__Median* self, QtConcurrent__Median* other) {
    *self = *other;
}

void QtConcurrent__Median_MoveAssign(QtConcurrent__Median* self, QtConcurrent__Median* other) {
    *self = std::move(*other);
}

void QtConcurrent__Median_Reset(QtConcurrent__Median* self) {
	self->reset();
}

void QtConcurrent__Median_AddValue(QtConcurrent__Median* self, double value) {
	self->addValue(value);
}

bool QtConcurrent__Median_IsMedianValid(const QtConcurrent__Median* self) {
	return self->isMedianValid();
}

double QtConcurrent__Median_Median(QtConcurrent__Median* self) {
	return self->median();
}

void QtConcurrent__Median_Delete(QtConcurrent__Median* self) {
    delete self;
}

