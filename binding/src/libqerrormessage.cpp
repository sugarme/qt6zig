#include <QDialog>
#include <QErrorMessage>
#include <QEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qerrormessage.h>
#include "libqerrormessage.h"
#include "libqerrormessage.hxx"

QErrorMessage* QErrorMessage_new(QWidget* parent) {
	 return new VirtualQErrorMessage(parent);
}

QErrorMessage* QErrorMessage_new2() {
	 return new VirtualQErrorMessage();
}

libqt_string QErrorMessage_Tr(const char* s) {
	QString _ret = QErrorMessage::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QErrorMessage* QErrorMessage_QtHandler() {
	return QErrorMessage::qtHandler();
}

void QErrorMessage_ShowMessage(QErrorMessage* self, const libqt_string message) {
	self->showMessage(QString::fromUtf8(message.data, message.len));
}

void QErrorMessage_ShowMessage2(QErrorMessage* self, const libqt_string message, const libqt_string typeVal) {
	self->showMessage(QString::fromUtf8(message.data, message.len), QString::fromUtf8(typeVal.data, typeVal.len));
}

libqt_string QErrorMessage_Tr2(const char* s, const char* c) {
	QString _ret = QErrorMessage::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QErrorMessage_Tr3(const char* s, const char* c, int n) {
	QString _ret = QErrorMessage::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QErrorMessage_Delete(QErrorMessage* self) {
    delete self;
}

