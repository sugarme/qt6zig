#include <QLoggingCategory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qloggingcategory.h>
#include "libqloggingcategory.h"
#include "libqloggingcategory.hxx"

QLoggingCategory* QLoggingCategory_new(const char* category) {
	 return new QLoggingCategory(category);
}

bool QLoggingCategory_IsDebugEnabled(const QLoggingCategory* self) {
	return self->isDebugEnabled();
}

bool QLoggingCategory_IsInfoEnabled(const QLoggingCategory* self) {
	return self->isInfoEnabled();
}

bool QLoggingCategory_IsWarningEnabled(const QLoggingCategory* self) {
	return self->isWarningEnabled();
}

bool QLoggingCategory_IsCriticalEnabled(const QLoggingCategory* self) {
	return self->isCriticalEnabled();
}

const char* QLoggingCategory_CategoryName(const QLoggingCategory* self) {
	return self->categoryName();
}

QLoggingCategory* QLoggingCategory_OperatorCall(QLoggingCategory* self) {
	return new QLoggingCategory(self->operator()());
}

const QLoggingCategory* QLoggingCategory_OperatorCall2(const QLoggingCategory* self) {
	const QLoggingCategory& _ret = self->operator()();
	// Cast returned reference into pointer
	return const_cast<QLoggingCategory*>(&_ret);
}

QLoggingCategory* QLoggingCategory_DefaultCategory() {
	return QLoggingCategory::defaultCategory();
}

void QLoggingCategory_SetFilterRules(const libqt_string rules) {
	QLoggingCategory::setFilterRules(QString::fromUtf8(rules.data, rules.len));
}

void QLoggingCategory_Delete(QLoggingCategory* self) {
    delete self;
}

