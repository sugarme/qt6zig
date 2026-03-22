#include <QAction>
#include <QActionGroup>
#include <QIcon>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qactiongroup.h>
#include "libqactiongroup.h"
#include "libqactiongroup.hxx"

QActionGroup* QActionGroup_new(QObject* parent) {
	 return new QActionGroup(parent);
}

libqt_string QActionGroup_Tr(const char* s) {
	QString _ret = QActionGroup::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAction* QActionGroup_AddAction(QActionGroup* self, QAction* a) {
	return self->addAction(a);
}

QAction* QActionGroup_AddAction2(QActionGroup* self, const libqt_string text) {
	return self->addAction(QString::fromUtf8(text.data, text.len));
}

QAction* QActionGroup_AddAction3(QActionGroup* self, const QIcon* icon, const libqt_string text) {
	return self->addAction(*icon, QString::fromUtf8(text.data, text.len));
}

void QActionGroup_RemoveAction(QActionGroup* self, QAction* a) {
	self->removeAction(a);
}

libqt_list QActionGroup_Actions(const QActionGroup* self) {
	auto _ret = self->actions();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QAction* QActionGroup_CheckedAction(const QActionGroup* self) {
	return self->checkedAction();
}

bool QActionGroup_IsExclusive(const QActionGroup* self) {
	return self->isExclusive();
}

bool QActionGroup_IsEnabled(const QActionGroup* self) {
	return self->isEnabled();
}

bool QActionGroup_IsVisible(const QActionGroup* self) {
	return self->isVisible();
}

int QActionGroup_ExclusionPolicy(const QActionGroup* self) {
	return self->exclusionPolicy();
}

void QActionGroup_SetEnabled(QActionGroup* self, bool enabled) {
	self->setEnabled(enabled);
}

void QActionGroup_SetDisabled(QActionGroup* self, bool b) {
	self->setDisabled(b);
}

void QActionGroup_SetVisible(QActionGroup* self, bool visible) {
	self->setVisible(visible);
}

void QActionGroup_SetExclusive(QActionGroup* self, bool exclusive) {
	self->setExclusive(exclusive);
}

void QActionGroup_SetExclusionPolicy(QActionGroup* self, int policy) {
	self->setExclusionPolicy(static_cast<QActionGroup::ExclusionPolicy>(policy));
}

void QActionGroup_Triggered(QActionGroup* self, QAction* param1) {
	self->triggered(param1);
}

void QActionGroup_Connect_Triggered(QActionGroup* self, intptr_t slot) {
    void (*slotFunc)(QActionGroup*, QAction*) = reinterpret_cast<void (*)(QActionGroup*, QAction*)>(slot);
    QActionGroup::connect(self, &QActionGroup::triggered, [self, slotFunc](QAction* param1) {
	slotFunc(self, param1);
    });
}

void QActionGroup_Hovered(QActionGroup* self, QAction* param1) {
	self->hovered(param1);
}

void QActionGroup_Connect_Hovered(QActionGroup* self, intptr_t slot) {
    void (*slotFunc)(QActionGroup*, QAction*) = reinterpret_cast<void (*)(QActionGroup*, QAction*)>(slot);
    QActionGroup::connect(self, &QActionGroup::hovered, [self, slotFunc](QAction* param1) {
	slotFunc(self, param1);
    });
}

libqt_string QActionGroup_Tr2(const char* s, const char* c) {
	QString _ret = QActionGroup::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QActionGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QActionGroup::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QActionGroup_Delete(QActionGroup* self) {
    delete self;
}

