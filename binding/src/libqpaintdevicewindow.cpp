#include <QEvent>
#include <QExposeEvent>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEvent>
#include <QRect>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWindow>
#include <qpaintdevicewindow.h>
#include "libqpaintdevicewindow.h"
#include "libqpaintdevicewindow.hxx"

libqt_string QPaintDeviceWindow_Tr(const char* s) {
	QString _ret = QPaintDeviceWindow::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, const QRect* rect) {
	self->update(*rect);
}

void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self, const QRegion* region) {
	self->update(*region);
}

void QPaintDeviceWindow_Update3(QPaintDeviceWindow* self) {
	self->update();
}

libqt_string QPaintDeviceWindow_Tr2(const char* s, const char* c) {
	QString _ret = QPaintDeviceWindow::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPaintDeviceWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPaintDeviceWindow::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self) {
    delete self;
}

