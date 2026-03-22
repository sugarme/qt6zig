#include <QSqlDriver>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
#include <qsqlresult.h>
#include "libqsqlresult.h"
#include "libqsqlresult.hxx"

QVariant* QSqlResult_Handle(const QSqlResult* self) {
	return new QVariant(self->handle());
}

// Base class handler implementation
QVariant* QSqlResult_QBaseHandle(const QSqlResult* self) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Handle_IsBase(true);
	return new QVariant(vqsqlresult->handle());
}
}

// Auxiliary method to allow providing re-implementation
void QSqlResult_OnHandle(const QSqlResult* self, intptr_t slot) {
	auto* vqsqlresult = dynamic_cast<const VirtualQSqlResult*>(self);
	if (vqsqlresult && vqsqlresult->isVirtualQSqlResult) {
vqsqlresult->setQSqlResult_Handle_Callback(reinterpret_cast<VirtualQSqlResult::QSqlResult_Handle_Callback>(slot));
}
}

void QSqlResult_Delete(QSqlResult* self) {
    delete self;
}

