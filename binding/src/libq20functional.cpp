#define WORKAROUND_INNER_CLASS_DEFINITION_q20__identity
#define WORKAROUND_INNER_CLASS_DEFINITION_q20__identity__is_transparent
#include <q20functional.h>
#include "libq20functional.h"
#include "libq20functional.hxx"

q20__identity* q20__identity_new(const q20__identity* other) {
	 return new q20::identity(*other);
}

q20__identity* q20__identity_new2(q20__identity* other) {
	 return new q20::identity(*other);
}

void q20__identity_CopyAssign(q20__identity* self, q20__identity* other) {
    *self = *other;
}

void q20__identity_MoveAssign(q20__identity* self, q20__identity* other) {
    *self = std::move(*other);
}

void q20__identity_Delete(q20__identity* self) {
    delete self;
}

q20__identity__is_transparent* q20__identity__is_transparent_new(const q20__identity__is_transparent* other) {
	 return new q20::identity::is_transparent(*other);
}

q20__identity__is_transparent* q20__identity__is_transparent_new2(q20__identity__is_transparent* other) {
	 return new q20::identity::is_transparent(*other);
}

void q20__identity__is_transparent_CopyAssign(q20__identity__is_transparent* self, q20__identity__is_transparent* other) {
    *self = *other;
}

void q20__identity__is_transparent_MoveAssign(q20__identity__is_transparent* self, q20__identity__is_transparent* other) {
    *self = std::move(*other);
}

void q20__identity__is_transparent_Delete(q20__identity__is_transparent* self) {
    delete self;
}

