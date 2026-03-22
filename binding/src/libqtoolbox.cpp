#include <QEvent>
#include <QFrame>
#include <QIcon>
#include <QShowEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QToolBox>
#include <QWidget>
#include <qtoolbox.h>
#include "libqtoolbox.h"
#include "libqtoolbox.hxx"

QToolBox* QToolBox_new(QWidget* parent) {
	 return new VirtualQToolBox(parent);
}

QToolBox* QToolBox_new2() {
	 return new VirtualQToolBox();
}

QToolBox* QToolBox_new3(QWidget* parent, int f) {
	 return new VirtualQToolBox(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QToolBox_Tr(const char* s) {
	QString _ret = QToolBox::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QToolBox_AddItem(QToolBox* self, QWidget* widget, const libqt_string text) {
	return self->addItem(widget, QString::fromUtf8(text.data, text.len));
}

int QToolBox_AddItem2(QToolBox* self, QWidget* widget, const QIcon* icon, const libqt_string text) {
	return self->addItem(widget, *icon, QString::fromUtf8(text.data, text.len));
}

int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, const libqt_string text) {
	return self->insertItem(index, widget, QString::fromUtf8(text.data, text.len));
}

int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, const QIcon* icon, const libqt_string text) {
	return self->insertItem(index, widget, *icon, QString::fromUtf8(text.data, text.len));
}

void QToolBox_RemoveItem(QToolBox* self, int index) {
	self->removeItem(index);
}

void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled) {
	self->setItemEnabled(index, enabled);
}

bool QToolBox_IsItemEnabled(const QToolBox* self, int index) {
	return self->isItemEnabled(index);
}

void QToolBox_SetItemText(QToolBox* self, int index, const libqt_string text) {
	self->setItemText(index, QString::fromUtf8(text.data, text.len));
}

libqt_string QToolBox_ItemText(const QToolBox* self, int index) {
	QString _ret = self->itemText(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QToolBox_SetItemIcon(QToolBox* self, int index, const QIcon* icon) {
	self->setItemIcon(index, *icon);
}

QIcon* QToolBox_ItemIcon(const QToolBox* self, int index) {
	return new QIcon(self->itemIcon(index));
}

void QToolBox_SetItemToolTip(QToolBox* self, int index, const libqt_string toolTip) {
	self->setItemToolTip(index, QString::fromUtf8(toolTip.data, toolTip.len));
}

libqt_string QToolBox_ItemToolTip(const QToolBox* self, int index) {
	QString _ret = self->itemToolTip(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QToolBox_CurrentIndex(const QToolBox* self) {
	return self->currentIndex();
}

QWidget* QToolBox_CurrentWidget(const QToolBox* self) {
	return self->currentWidget();
}

QWidget* QToolBox_Widget(const QToolBox* self, int index) {
	return self->widget(index);
}

int QToolBox_IndexOf(const QToolBox* self, const QWidget* widget) {
	return self->indexOf(widget);
}

int QToolBox_Count(const QToolBox* self) {
	return self->count();
}

void QToolBox_SetCurrentIndex(QToolBox* self, int index) {
	self->setCurrentIndex(index);
}

void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget) {
	self->setCurrentWidget(widget);
}

void QToolBox_CurrentChanged(QToolBox* self, int index) {
	self->currentChanged(index);
}

void QToolBox_Connect_CurrentChanged(QToolBox* self, intptr_t slot) {
    void (*slotFunc)(QToolBox*, int) = reinterpret_cast<void (*)(QToolBox*, int)>(slot);
    QToolBox::connect(self, &QToolBox::currentChanged, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

libqt_string QToolBox_Tr2(const char* s, const char* c) {
	QString _ret = QToolBox::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QToolBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QToolBox::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QToolBox_Delete(QToolBox* self) {
    delete self;
}

