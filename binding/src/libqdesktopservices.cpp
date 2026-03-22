#include <QDesktopServices>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <qdesktopservices.h>
#include "libqdesktopservices.h"
#include "libqdesktopservices.hxx"

QDesktopServices* QDesktopServices_new(const QDesktopServices* other) {
	 return new QDesktopServices(*other);
}

QDesktopServices* QDesktopServices_new2(QDesktopServices* other) {
	 return new QDesktopServices(*other);
}

QDesktopServices* QDesktopServices_new3() {
	 return new QDesktopServices();
}

QDesktopServices* QDesktopServices_new4(const QDesktopServices* param1) {
	 return new QDesktopServices(*param1);
}

void QDesktopServices_CopyAssign(QDesktopServices* self, QDesktopServices* other) {
    *self = *other;
}

void QDesktopServices_MoveAssign(QDesktopServices* self, QDesktopServices* other) {
    *self = std::move(*other);
}

bool QDesktopServices_OpenUrl(const QUrl* url) {
	return QDesktopServices::openUrl(*url);
}

void QDesktopServices_SetUrlHandler(const libqt_string scheme, QObject* receiver, const char* method) {
	QDesktopServices::setUrlHandler(QString::fromUtf8(scheme.data, scheme.len), receiver, method);
}

void QDesktopServices_UnsetUrlHandler(const libqt_string scheme) {
	QDesktopServices::unsetUrlHandler(QString::fromUtf8(scheme.data, scheme.len));
}

void QDesktopServices_OperatorAssign(QDesktopServices* self, const QDesktopServices* param1) {
	self->operator=(*param1);
}

void QDesktopServices_Delete(QDesktopServices* self) {
    delete self;
}

