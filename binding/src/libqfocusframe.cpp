#include <QEvent>
#include <QFocusFrame>
#include <QObject>
#include <QPaintEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOption>
#include <QWidget>
#include <qfocusframe.h>
#include "libqfocusframe.h"
#include "libqfocusframe.hxx"

QFocusFrame* QFocusFrame_new(QWidget* parent) {
	 return new VirtualQFocusFrame(parent);
}

QFocusFrame* QFocusFrame_new2() {
	 return new VirtualQFocusFrame();
}

libqt_string QFocusFrame_Tr(const char* s) {
	QString _ret = QFocusFrame::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QFocusFrame_Widget(const QFocusFrame* self) {
	return self->widget();
}

libqt_string QFocusFrame_Tr2(const char* s, const char* c) {
	QString _ret = QFocusFrame::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFocusFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFocusFrame::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFocusFrame_Delete(QFocusFrame* self) {
    delete self;
}

