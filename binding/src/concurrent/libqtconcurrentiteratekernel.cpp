#include <QThreadPool>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtConcurrent__BlockSizeManager
#include <qtconcurrentiteratekernel.h>
#include "libqtconcurrentiteratekernel.h"
#include "libqtconcurrentiteratekernel.hxx"

QtConcurrent__BlockSizeManager* QtConcurrent__BlockSizeManager_new(QThreadPool* pool, int iterationCount) {
	 return new QtConcurrent::BlockSizeManager(pool, iterationCount);
}

void QtConcurrent__BlockSizeManager_TimeBeforeUser(QtConcurrent__BlockSizeManager* self) {
	self->timeBeforeUser();
}

void QtConcurrent__BlockSizeManager_TimeAfterUser(QtConcurrent__BlockSizeManager* self) {
	self->timeAfterUser();
}

int QtConcurrent__BlockSizeManager_BlockSize(QtConcurrent__BlockSizeManager* self) {
	return self->blockSize();
}

void QtConcurrent__BlockSizeManager_Delete(QtConcurrent__BlockSizeManager* self) {
    delete self;
}

