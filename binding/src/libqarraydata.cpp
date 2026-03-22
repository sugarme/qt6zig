#include <QArrayData>
#include <qarraydata.h>
#include "libqarraydata.h"
#include "libqarraydata.hxx"

QBasicAtomicInteger<int> QArrayData_Ref_(const QArrayData* self) {
	return self->ref_;
}

void QArrayData_SetRef_(QArrayData* self, QBasicAtomicInteger<int> ref_) {
	self->ref_;
}

int QArrayData_Flags(const QArrayData* self) {
	return self->flags;
}

void QArrayData_SetFlags(QArrayData* self, int flags) {
	self->flags;
}

ptrdiff_t QArrayData_Alloc(const QArrayData* self) {
	return self->alloc;
}

void QArrayData_SetAlloc(QArrayData* self, ptrdiff_t alloc) {
	self->alloc;
}

ptrdiff_t QArrayData_AllocatedCapacity(QArrayData* self) {
	return self->allocatedCapacity();
}

ptrdiff_t QArrayData_ConstAllocatedCapacity(const QArrayData* self) {
	return self->constAllocatedCapacity();
}

bool QArrayData_Ref(QArrayData* self) {
	return self->ref();
}

bool QArrayData_Deref(QArrayData* self) {
	return self->deref();
}

bool QArrayData_IsShared(const QArrayData* self) {
	return self->isShared();
}

bool QArrayData_NeedsDetach(QArrayData* self) {
	return self->needsDetach();
}

ptrdiff_t QArrayData_DetachCapacity(const QArrayData* self, ptrdiff_t newSize) {
	return self->detachCapacity(newSize);
}

void* QArrayData_Allocate(QArrayData** pdata, ptrdiff_t objectSize, ptrdiff_t alignment, ptrdiff_t capacity) {
	return QArrayData::allocate(pdata, objectSize, alignment, capacity);
}

void* QArrayData_Allocate1(QArrayData** pdata, ptrdiff_t capacity) {
	return QArrayData::allocate1(pdata, capacity);
}

void* QArrayData_Allocate2(QArrayData** pdata, ptrdiff_t capacity) {
	return QArrayData::allocate2(pdata, capacity);
}

libqt_pair QArrayData_ReallocateUnaligned(QArrayData* data, void* dataPointer, ptrdiff_t objectSize, ptrdiff_t newCapacity, int option) {
	return QArrayData::reallocateUnaligned(data, dataPointer, objectSize, newCapacity, static_cast<QArrayData::AllocationOption>(option));
}

void QArrayData_Deallocate(QArrayData* data, ptrdiff_t objectSize, ptrdiff_t alignment) {
	QArrayData::deallocate(data, objectSize, alignment);
}

void* QArrayData_Allocate5(QArrayData** pdata, ptrdiff_t objectSize, ptrdiff_t alignment, ptrdiff_t capacity, int option) {
	return QArrayData::allocate(pdata, objectSize, alignment, capacity, static_cast<QArrayData::AllocationOption>(option));
}

void* QArrayData_Allocate13(QArrayData** pdata, ptrdiff_t capacity, int option) {
	return QArrayData::allocate1(pdata, capacity, static_cast<QArrayData::AllocationOption>(option));
}

void* QArrayData_Allocate23(QArrayData** pdata, ptrdiff_t capacity, int option) {
	return QArrayData::allocate2(pdata, capacity, static_cast<QArrayData::AllocationOption>(option));
}

void QArrayData_Delete(QArrayData* self) {
    delete self;
}

