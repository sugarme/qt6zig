#include <QHashDummyValue>
#include <qhash.h>
#include "libqhash.h"
#include "libqhash.hxx"

QHashDummyValue* QHashDummyValue_new(const QHashDummyValue* other) {
	 return new QHashDummyValue(*other);
}

QHashDummyValue* QHashDummyValue_new2(QHashDummyValue* other) {
	 return new QHashDummyValue(*other);
}

void QHashDummyValue_CopyAssign(QHashDummyValue* self, QHashDummyValue* other) {
    *self = *other;
}

void QHashDummyValue_MoveAssign(QHashDummyValue* self, QHashDummyValue* other) {
    *self = std::move(*other);
}

bool QHashDummyValue_OperatorEqual(const QHashDummyValue* self, const QHashDummyValue* param1) {
	return self->operator==(*param1);
}

void QHashDummyValue_Delete(QHashDummyValue* self) {
    delete self;
}

