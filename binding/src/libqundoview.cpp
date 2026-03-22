#include <QIcon>
#include <QListView>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUndoGroup>
#include <QUndoStack>
#include <QUndoView>
#include <QWidget>
#include <qundoview.h>
#include "libqundoview.h"
#include "libqundoview.hxx"

QUndoView* QUndoView_new(QWidget* parent) {
	 return new QUndoView(parent);
}

QUndoView* QUndoView_new2() {
	 return new QUndoView();
}

QUndoView* QUndoView_new3(QUndoStack* stack) {
	 return new QUndoView(stack);
}

QUndoView* QUndoView_new4(QUndoGroup* group) {
	 return new QUndoView(group);
}

QUndoView* QUndoView_new5(QUndoStack* stack, QWidget* parent) {
	 return new QUndoView(stack, parent);
}

QUndoView* QUndoView_new6(QUndoGroup* group, QWidget* parent) {
	 return new QUndoView(group, parent);
}

libqt_string QUndoView_Tr(const char* s) {
	QString _ret = QUndoView::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUndoStack* QUndoView_Stack(const QUndoView* self) {
	return self->stack();
}

QUndoGroup* QUndoView_Group(const QUndoView* self) {
	return self->group();
}

void QUndoView_SetEmptyLabel(QUndoView* self, const libqt_string label) {
	self->setEmptyLabel(QString::fromUtf8(label.data, label.len));
}

libqt_string QUndoView_EmptyLabel(const QUndoView* self) {
	QString _ret = self->emptyLabel();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUndoView_SetCleanIcon(QUndoView* self, const QIcon* icon) {
	self->setCleanIcon(*icon);
}

QIcon* QUndoView_CleanIcon(const QUndoView* self) {
	return new QIcon(self->cleanIcon());
}

void QUndoView_SetStack(QUndoView* self, QUndoStack* stack) {
	self->setStack(stack);
}

void QUndoView_SetGroup(QUndoView* self, QUndoGroup* group) {
	self->setGroup(group);
}

libqt_string QUndoView_Tr2(const char* s, const char* c) {
	QString _ret = QUndoView::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUndoView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoView::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUndoView_Delete(QUndoView* self) {
    delete self;
}

