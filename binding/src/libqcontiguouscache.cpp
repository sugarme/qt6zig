#include <QContiguousCacheData>
#include <qcontiguouscache.h>
#include "libqcontiguouscache.h"
#include "libqcontiguouscache.hxx"

QContiguousCacheData* QContiguousCacheData_new() {
	 return new QContiguousCacheData();
}

ptrdiff_t QContiguousCacheData_Alloc(const QContiguousCacheData* self) {
	return self->alloc;
}

void QContiguousCacheData_SetAlloc(QContiguousCacheData* self, ptrdiff_t alloc) {
	self->alloc;
}

ptrdiff_t QContiguousCacheData_Count(const QContiguousCacheData* self) {
	return self->count;
}

void QContiguousCacheData_SetCount(QContiguousCacheData* self, ptrdiff_t count) {
	self->count;
}

ptrdiff_t QContiguousCacheData_Start(const QContiguousCacheData* self) {
	return self->start;
}

void QContiguousCacheData_SetStart(QContiguousCacheData* self, ptrdiff_t start) {
	self->start;
}

ptrdiff_t QContiguousCacheData_Offset(const QContiguousCacheData* self) {
	return self->offset;
}

void QContiguousCacheData_SetOffset(QContiguousCacheData* self, ptrdiff_t offset) {
	self->offset;
}

QContiguousCacheData* QContiguousCacheData_AllocateData(ptrdiff_t size, ptrdiff_t alignment) {
	return QContiguousCacheData::allocateData(size, alignment);
}

void QContiguousCacheData_FreeData(QContiguousCacheData* data) {
	QContiguousCacheData::freeData(data);
}

void QContiguousCacheData_Delete(QContiguousCacheData* self) {
    delete self;
}

