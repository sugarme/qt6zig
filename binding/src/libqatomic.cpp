#include <QAtomicInt>
#include <qatomic.h>
#include "libqatomic.h"
#include "libqatomic.hxx"

QAtomicInt* QAtomicInt_new() {
	 return new QAtomicInt();
}

QAtomicInt* QAtomicInt_new2(const QAtomicInt* param1) {
	 return new QAtomicInt(*param1);
}

QAtomicInt* QAtomicInt_new3(int value) {
	 return new QAtomicInt(value);
}

void QAtomicInt_OperatorAssign(QAtomicInt* self, const QAtomicInt* param1) {
	self->operator=(*param1);
}

void QAtomicInt_Delete(QAtomicInt* self) {
    delete self;
}

