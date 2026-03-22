#include <QAction>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWhatsThis>
#include <QWidget>
#include <qwhatsthis.h>
#include "libqwhatsthis.h"
#include "libqwhatsthis.hxx"

QWhatsThis* QWhatsThis_new(const QWhatsThis* other) {
	 return new QWhatsThis(*other);
}

QWhatsThis* QWhatsThis_new2(QWhatsThis* other) {
	 return new QWhatsThis(*other);
}

QWhatsThis* QWhatsThis_new3(const QWhatsThis* param1) {
	 return new QWhatsThis(*param1);
}

void QWhatsThis_CopyAssign(QWhatsThis* self, QWhatsThis* other) {
    *self = *other;
}

void QWhatsThis_MoveAssign(QWhatsThis* self, QWhatsThis* other) {
    *self = std::move(*other);
}

void QWhatsThis_EnterWhatsThisMode() {
	QWhatsThis::enterWhatsThisMode();
}

bool QWhatsThis_InWhatsThisMode() {
	return QWhatsThis::inWhatsThisMode();
}

void QWhatsThis_LeaveWhatsThisMode() {
	QWhatsThis::leaveWhatsThisMode();
}

void QWhatsThis_ShowText(const QPoint* pos, const libqt_string text) {
	QWhatsThis::showText(*pos, QString::fromUtf8(text.data, text.len));
}

void QWhatsThis_HideText() {
	QWhatsThis::hideText();
}

QAction* QWhatsThis_CreateAction() {
	return QWhatsThis::createAction();
}

void QWhatsThis_OperatorAssign(QWhatsThis* self, const QWhatsThis* param1) {
	self->operator=(*param1);
}

void QWhatsThis_ShowText3(const QPoint* pos, const libqt_string text, QWidget* w) {
	QWhatsThis::showText(*pos, QString::fromUtf8(text.data, text.len), w);
}

QAction* QWhatsThis_CreateAction1(QObject* parent) {
	return QWhatsThis::createAction(parent);
}

void QWhatsThis_Delete(QWhatsThis* self) {
    delete self;
}

