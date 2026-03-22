#include <qvarlengtharray.h>
#include "libqvarlengtharray.h"
#include "libqvarlengtharray.hxx"

ptrdiff_t QVLABaseBase_Capacity(const QVLABaseBase* self) {
	return self->capacity();
}

ptrdiff_t QVLABaseBase_Size(const QVLABaseBase* self) {
	return self->size();
}

bool QVLABaseBase_Empty(const QVLABaseBase* self) {
	return self->empty();
}

