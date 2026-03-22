#include <QColor>
#include <QEvent>
#include <QMouseEvent>
#include <QPainter>
#include <QPixmap>
#include <QScreen>
#include <QSplashScreen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qsplashscreen.h>
#include "libqsplashscreen.h"
#include "libqsplashscreen.hxx"

QSplashScreen* QSplashScreen_new() {
	 return new VirtualQSplashScreen();
}

QSplashScreen* QSplashScreen_new2(QScreen* screen) {
	 return new VirtualQSplashScreen(screen);
}

QSplashScreen* QSplashScreen_new3(const QPixmap* pixmap) {
	 return new VirtualQSplashScreen(*pixmap);
}

QSplashScreen* QSplashScreen_new4(const QPixmap* pixmap, int f) {
	 return new VirtualQSplashScreen(*pixmap, static_cast<QFlags<Qt::WindowType>>(f));
}

QSplashScreen* QSplashScreen_new5(QScreen* screen, const QPixmap* pixmap) {
	 return new VirtualQSplashScreen(screen, *pixmap);
}

QSplashScreen* QSplashScreen_new6(QScreen* screen, const QPixmap* pixmap, int f) {
	 return new VirtualQSplashScreen(screen, *pixmap, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QSplashScreen_Tr(const char* s) {
	QString _ret = QSplashScreen::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSplashScreen_SetPixmap(QSplashScreen* self, const QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QSplashScreen_Pixmap(const QSplashScreen* self) {
	return new QPixmap(self->pixmap());
}

void QSplashScreen_Finish(QSplashScreen* self, QWidget* w) {
	self->finish(w);
}

void QSplashScreen_Repaint(QSplashScreen* self) {
	self->repaint();
}

libqt_string QSplashScreen_Message(const QSplashScreen* self) {
	QString _ret = self->message();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSplashScreen_ShowMessage(QSplashScreen* self, const libqt_string message) {
	self->showMessage(QString::fromUtf8(message.data, message.len));
}

void QSplashScreen_ClearMessage(QSplashScreen* self) {
	self->clearMessage();
}

void QSplashScreen_MessageChanged(QSplashScreen* self, const libqt_string message) {
	self->messageChanged(QString::fromUtf8(message.data, message.len));
}

void QSplashScreen_Connect_MessageChanged(QSplashScreen* self, intptr_t slot) {
    void (*slotFunc)(QSplashScreen*, const char*) = reinterpret_cast<void (*)(QSplashScreen*, const char*)>(slot);
    QSplashScreen::connect(self, &QSplashScreen::messageChanged, [self, slotFunc](const QString& message) {
	slotFunc(self, message);
    });
}

libqt_string QSplashScreen_Tr2(const char* s, const char* c) {
	QString _ret = QSplashScreen::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSplashScreen_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSplashScreen::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSplashScreen_ShowMessage2(QSplashScreen* self, const libqt_string message, int alignment) {
	self->showMessage(QString::fromUtf8(message.data, message.len), alignment);
}

void QSplashScreen_ShowMessage3(QSplashScreen* self, const libqt_string message, int alignment, const QColor* color) {
	self->showMessage(QString::fromUtf8(message.data, message.len), alignment, *color);
}

void QSplashScreen_Delete(QSplashScreen* self) {
    delete self;
}

