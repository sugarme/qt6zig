#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPoint>
#include <QRasterWindow>
#include <QResizeEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWindow>
#include <qrasterwindow.h>
#include "libqrasterwindow.h"
#include "libqrasterwindow.hxx"

QRasterWindow* QRasterWindow_new() {
	 return new VirtualQRasterWindow();
}

QRasterWindow* QRasterWindow_new2(QWindow* parent) {
	 return new VirtualQRasterWindow(parent);
}

libqt_string QRasterWindow_Tr(const char* s) {
	QString _ret = QRasterWindow::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRasterWindow_Tr2(const char* s, const char* c) {
	QString _ret = QRasterWindow::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRasterWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRasterWindow::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QRasterWindow_Delete(QRasterWindow* self) {
    delete self;
}

