#include <QEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QStatusBar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qstatusbar.h>
#include "libqstatusbar.h"
#include "libqstatusbar.hxx"

QStatusBar* QStatusBar_new(QWidget* parent) {
	 return new VirtualQStatusBar(parent);
}

QStatusBar* QStatusBar_new2() {
	 return new VirtualQStatusBar();
}

libqt_string QStatusBar_Tr(const char* s) {
	QString _ret = QStatusBar::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStatusBar_AddWidget(QStatusBar* self, QWidget* widget) {
	self->addWidget(widget);
}

int QStatusBar_InsertWidget(QStatusBar* self, int index, QWidget* widget) {
	return self->insertWidget(index, widget);
}

void QStatusBar_AddPermanentWidget(QStatusBar* self, QWidget* widget) {
	self->addPermanentWidget(widget);
}

int QStatusBar_InsertPermanentWidget(QStatusBar* self, int index, QWidget* widget) {
	return self->insertPermanentWidget(index, widget);
}

void QStatusBar_RemoveWidget(QStatusBar* self, QWidget* widget) {
	self->removeWidget(widget);
}

void QStatusBar_SetSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled) {
	self->setSizeGripEnabled(sizeGripEnabled);
}

bool QStatusBar_IsSizeGripEnabled(const QStatusBar* self) {
	return self->isSizeGripEnabled();
}

libqt_string QStatusBar_CurrentMessage(const QStatusBar* self) {
	QString _ret = self->currentMessage();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStatusBar_ShowMessage(QStatusBar* self, const libqt_string text) {
	self->showMessage(QString::fromUtf8(text.data, text.len));
}

void QStatusBar_ClearMessage(QStatusBar* self) {
	self->clearMessage();
}

void QStatusBar_MessageChanged(QStatusBar* self, const libqt_string text) {
	self->messageChanged(QString::fromUtf8(text.data, text.len));
}

void QStatusBar_Connect_MessageChanged(QStatusBar* self, intptr_t slot) {
    void (*slotFunc)(QStatusBar*, const char*) = reinterpret_cast<void (*)(QStatusBar*, const char*)>(slot);
    QStatusBar::connect(self, &QStatusBar::messageChanged, [self, slotFunc](const QString& text) {
	slotFunc(self, text);
    });
}

libqt_string QStatusBar_Tr2(const char* s, const char* c) {
	QString _ret = QStatusBar::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStatusBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStatusBar::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStatusBar_AddWidget2(QStatusBar* self, QWidget* widget, int stretch) {
	self->addWidget(widget, stretch);
}

int QStatusBar_InsertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
	return self->insertWidget(index, widget, stretch);
}

void QStatusBar_AddPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch) {
	self->addPermanentWidget(widget, stretch);
}

int QStatusBar_InsertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
	return self->insertPermanentWidget(index, widget, stretch);
}

void QStatusBar_ShowMessage2(QStatusBar* self, const libqt_string text, int timeout) {
	self->showMessage(QString::fromUtf8(text.data, text.len), timeout);
}

void QStatusBar_Delete(QStatusBar* self) {
    delete self;
}

