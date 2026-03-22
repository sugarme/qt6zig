#include <QAtomicInt>
#include <qatomic.h>
#include "libqatomic.h"
#include "libqatomic.hxx"

QAtomicInt* QAtomicInt_new() {
	 return new QAtomicInt();
}

QAtomicInt* QAtomicInt_new2(int value) {
	 return new QAtomicInt(value);
}

void QAtomicInt_Delete(QAtomicInt* self) {
    delete self;
}

