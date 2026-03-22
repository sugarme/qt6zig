#include <QAbstractSlider>
#include <QContextMenuEvent>
#include <QEvent>
#include <QHideEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QScrollBar>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionSlider>
#include <QWheelEvent>
#include <QWidget>
#include <qscrollbar.h>
#include "libqscrollbar.h"
#include "libqscrollbar.hxx"

QScrollBar* QScrollBar_new(QWidget* parent) {
	 return new VirtualQScrollBar(parent);
}

QScrollBar* QScrollBar_new2() {
	 return new VirtualQScrollBar();
}

QScrollBar* QScrollBar_new3(int param1) {
	 return new VirtualQScrollBar(static_cast<Qt::Orientation>(param1));
}

QScrollBar* QScrollBar_new4(int param1, QWidget* parent) {
	 return new VirtualQScrollBar(static_cast<Qt::Orientation>(param1), parent);
}

libqt_string QScrollBar_Tr(const char* s) {
	QString _ret = QScrollBar::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QScrollBar_SizeHint(const QScrollBar* self) {
	return new QSize(self->sizeHint());
}

bool QScrollBar_Event(QScrollBar* self, QEvent* event) {
	return self->event(event);
}

libqt_string QScrollBar_Tr2(const char* s, const char* c) {
	QString _ret = QScrollBar::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QScrollBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScrollBar::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QScrollBar_QBaseSizeHint(const QScrollBar* self) {
	auto* vqscrollbar = dynamic_cast<const VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_SizeHint_IsBase(true);
	return new QSize(vqscrollbar->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSizeHint(const QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<const VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_SizeHint_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
bool QScrollBar_QBaseEvent(QScrollBar* self, QEvent* event) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_Event_IsBase(true);
	return vqscrollbar->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnEvent(QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_Event_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Event_Callback>(slot));
}
}

void QScrollBar_Delete(QScrollBar* self) {
    delete self;
}

