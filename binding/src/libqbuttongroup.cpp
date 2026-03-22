#include <QAbstractButton>
#include <QButtonGroup>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qbuttongroup.h>
#include "libqbuttongroup.h"
#include "libqbuttongroup.hxx"

QButtonGroup* QButtonGroup_new() {
	 return new QButtonGroup();
}

QButtonGroup* QButtonGroup_new2(QObject* parent) {
	 return new QButtonGroup(parent);
}

libqt_string QButtonGroup_Tr(const char* s) {
	QString _ret = QButtonGroup::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QButtonGroup_SetExclusive(QButtonGroup* self, bool exclusive) {
	self->setExclusive(exclusive);
}

bool QButtonGroup_Exclusive(const QButtonGroup* self) {
	return self->exclusive();
}

void QButtonGroup_AddButton(QButtonGroup* self, QAbstractButton* param1) {
	self->addButton(param1);
}

void QButtonGroup_RemoveButton(QButtonGroup* self, QAbstractButton* param1) {
	self->removeButton(param1);
}

libqt_list QButtonGroup_Buttons(const QButtonGroup* self) {
	auto _ret = self->buttons();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QAbstractButton* QButtonGroup_CheckedButton(const QButtonGroup* self) {
	return self->checkedButton();
}

QAbstractButton* QButtonGroup_Button(const QButtonGroup* self, int id) {
	return self->button(id);
}

void QButtonGroup_SetId(QButtonGroup* self, QAbstractButton* button, int id) {
	self->setId(button, id);
}

int QButtonGroup_Id(const QButtonGroup* self, QAbstractButton* button) {
	return self->id(button);
}

int QButtonGroup_CheckedId(const QButtonGroup* self) {
	return self->checkedId();
}

void QButtonGroup_ButtonClicked(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonClicked(param1);
}

void QButtonGroup_Connect_ButtonClicked(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::buttonClicked, [self, slotFunc](QAbstractButton* param1) {
	slotFunc(self, param1);
    });
}

void QButtonGroup_ButtonPressed(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonPressed(param1);
}

void QButtonGroup_Connect_ButtonPressed(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::buttonPressed, [self, slotFunc](QAbstractButton* param1) {
	slotFunc(self, param1);
    });
}

void QButtonGroup_ButtonReleased(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonReleased(param1);
}

void QButtonGroup_Connect_ButtonReleased(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::buttonReleased, [self, slotFunc](QAbstractButton* param1) {
	slotFunc(self, param1);
    });
}

void QButtonGroup_ButtonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2) {
	self->buttonToggled(param1, param2);
}

void QButtonGroup_Connect_ButtonToggled(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*, bool) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*, bool)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::buttonToggled, [self, slotFunc](QAbstractButton* param1, bool param2) {
	slotFunc(self, param1, param2);
    });
}

void QButtonGroup_IdClicked(QButtonGroup* self, int param1) {
	self->idClicked(param1);
}

void QButtonGroup_Connect_IdClicked(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int) = reinterpret_cast<void (*)(QButtonGroup*, int)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::idClicked, [self, slotFunc](int param1) {
	slotFunc(self, param1);
    });
}

void QButtonGroup_IdPressed(QButtonGroup* self, int param1) {
	self->idPressed(param1);
}

void QButtonGroup_Connect_IdPressed(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int) = reinterpret_cast<void (*)(QButtonGroup*, int)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::idPressed, [self, slotFunc](int param1) {
	slotFunc(self, param1);
    });
}

void QButtonGroup_IdReleased(QButtonGroup* self, int param1) {
	self->idReleased(param1);
}

void QButtonGroup_Connect_IdReleased(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int) = reinterpret_cast<void (*)(QButtonGroup*, int)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::idReleased, [self, slotFunc](int param1) {
	slotFunc(self, param1);
    });
}

void QButtonGroup_IdToggled(QButtonGroup* self, int param1, bool param2) {
	self->idToggled(param1, param2);
}

void QButtonGroup_Connect_IdToggled(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int, bool) = reinterpret_cast<void (*)(QButtonGroup*, int, bool)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::idToggled, [self, slotFunc](int param1, bool param2) {
	slotFunc(self, param1, param2);
    });
}

libqt_string QButtonGroup_Tr2(const char* s, const char* c) {
	QString _ret = QButtonGroup::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QButtonGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QButtonGroup::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QButtonGroup_AddButton2(QButtonGroup* self, QAbstractButton* param1, int id) {
	self->addButton(param1, id);
}

void QButtonGroup_Delete(QButtonGroup* self) {
    delete self;
}

