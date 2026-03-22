#include <QEvent>
#include <QKeySequence>
#include <QObject>
#include <QShortcut>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qshortcut.h>
#include "libqshortcut.h"
#include "libqshortcut.hxx"

QShortcut* QShortcut_new(QObject* parent) {
	 return new VirtualQShortcut(parent);
}

QShortcut* QShortcut_new2(const QKeySequence* key, QObject* parent) {
	 return new VirtualQShortcut(*key, parent);
}

QShortcut* QShortcut_new3(int key, QObject* parent) {
	 return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent);
}

QShortcut* QShortcut_new4(const QKeySequence* key, QObject* parent, const char* member) {
	 return new VirtualQShortcut(*key, parent, member);
}

QShortcut* QShortcut_new5(const QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember) {
	 return new VirtualQShortcut(*key, parent, member, ambiguousMember);
}

QShortcut* QShortcut_new6(const QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember, int context) {
	 return new VirtualQShortcut(*key, parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(context));
}

QShortcut* QShortcut_new7(int key, QObject* parent, const char* member) {
	 return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member);
}

QShortcut* QShortcut_new8(int key, QObject* parent, const char* member, const char* ambiguousMember) {
	 return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member, ambiguousMember);
}

QShortcut* QShortcut_new9(int key, QObject* parent, const char* member, const char* ambiguousMember, int context) {
	 return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(context));
}

libqt_string QShortcut_Tr(const char* s) {
	QString _ret = QShortcut::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QShortcut_SetKey(QShortcut* self, const QKeySequence* key) {
	self->setKey(*key);
}

QKeySequence* QShortcut_Key(const QShortcut* self) {
	return new QKeySequence(self->key());
}

void QShortcut_SetKeys(QShortcut* self, int key) {
	self->setKeys(static_cast<QKeySequence::StandardKey>(key));
}

void QShortcut_SetKeys2(QShortcut* self, const libqt_list keys) {
	self->setKeys(*keys);
}

libqt_list QShortcut_Keys(const QShortcut* self) {
	return self->keys();
}

void QShortcut_SetEnabled(QShortcut* self, bool enable) {
	self->setEnabled(enable);
}

bool QShortcut_IsEnabled(const QShortcut* self) {
	return self->isEnabled();
}

void QShortcut_SetContext(QShortcut* self, int context) {
	self->setContext(static_cast<Qt::ShortcutContext>(context));
}

int QShortcut_Context(const QShortcut* self) {
	return self->context();
}

void QShortcut_SetAutoRepeat(QShortcut* self, bool on) {
	self->setAutoRepeat(on);
}

bool QShortcut_AutoRepeat(const QShortcut* self) {
	return self->autoRepeat();
}

int QShortcut_Id(const QShortcut* self) {
	return self->id();
}

void QShortcut_SetWhatsThis(QShortcut* self, const libqt_string text) {
	self->setWhatsThis(QString::fromUtf8(text.data, text.len));
}

libqt_string QShortcut_WhatsThis(const QShortcut* self) {
	QString _ret = self->whatsThis();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QShortcut_Activated(QShortcut* self) {
	self->activated();
}

void QShortcut_Connect_Activated(QShortcut* self, intptr_t slot) {
    void (*slotFunc)(QShortcut*) = reinterpret_cast<void (*)(QShortcut*)>(slot);
    QShortcut::connect(self, &QShortcut::activated, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QShortcut_ActivatedAmbiguously(QShortcut* self) {
	self->activatedAmbiguously();
}

void QShortcut_Connect_ActivatedAmbiguously(QShortcut* self, intptr_t slot) {
    void (*slotFunc)(QShortcut*) = reinterpret_cast<void (*)(QShortcut*)>(slot);
    QShortcut::connect(self, &QShortcut::activatedAmbiguously, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QShortcut_Tr2(const char* s, const char* c) {
	QString _ret = QShortcut::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QShortcut_Tr3(const char* s, const char* c, int n) {
	QString _ret = QShortcut::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
bool QShortcut_Event(QShortcut* self, QEvent* e) {
	auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self);
	if (vqshortcut && vqshortcut->isVirtualQShortcut) {
	return vqshortcut->event(e);
	} else {
	return self->QShortcut::event(e);
}
}

// Base class handler implementation
bool QShortcut_QBaseEvent(QShortcut* self, QEvent* e) {
	auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self);
	if (vqshortcut && vqshortcut->isVirtualQShortcut) {
vqshortcut->setQShortcut_Event_IsBase(true);
	return vqshortcut->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnEvent(QShortcut* self, intptr_t slot) {
	auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self);
	if (vqshortcut && vqshortcut->isVirtualQShortcut) {
vqshortcut->setQShortcut_Event_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_Event_Callback>(slot));
}
}

void QShortcut_Delete(QShortcut* self) {
    delete self;
}

