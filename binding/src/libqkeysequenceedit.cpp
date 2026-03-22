#include <QEvent>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QKeySequenceEdit>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTimerEvent>
#include <QWidget>
#include <qkeysequenceedit.h>
#include "libqkeysequenceedit.h"
#include "libqkeysequenceedit.hxx"

QKeySequenceEdit* QKeySequenceEdit_new(QWidget* parent) {
	 return new VirtualQKeySequenceEdit(parent);
}

QKeySequenceEdit* QKeySequenceEdit_new2() {
	 return new VirtualQKeySequenceEdit();
}

QKeySequenceEdit* QKeySequenceEdit_new3(const QKeySequence* keySequence) {
	 return new VirtualQKeySequenceEdit(*keySequence);
}

QKeySequenceEdit* QKeySequenceEdit_new4(const QKeySequence* keySequence, QWidget* parent) {
	 return new VirtualQKeySequenceEdit(*keySequence, parent);
}

libqt_string QKeySequenceEdit_Tr(const char* s) {
	QString _ret = QKeySequenceEdit::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QKeySequence* QKeySequenceEdit_KeySequence(const QKeySequenceEdit* self) {
	return new QKeySequence(self->keySequence());
}

ptrdiff_t QKeySequenceEdit_MaximumSequenceLength(const QKeySequenceEdit* self) {
	return self->maximumSequenceLength();
}

void QKeySequenceEdit_SetClearButtonEnabled(QKeySequenceEdit* self, bool enable) {
	self->setClearButtonEnabled(enable);
}

bool QKeySequenceEdit_IsClearButtonEnabled(const QKeySequenceEdit* self) {
	return self->isClearButtonEnabled();
}

void QKeySequenceEdit_SetFinishingKeyCombinations(QKeySequenceEdit* self, const libqt_list finishingKeyCombinations) {
	self->setFinishingKeyCombinations(QList<QKeyCombination>());
}

libqt_list QKeySequenceEdit_FinishingKeyCombinations(const QKeySequenceEdit* self) {
	auto _ret = self->finishingKeyCombinations();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, const QKeySequence* keySequence) {
	self->setKeySequence(*keySequence);
}

void QKeySequenceEdit_Clear(QKeySequenceEdit* self) {
	self->clear();
}

void QKeySequenceEdit_SetMaximumSequenceLength(QKeySequenceEdit* self, ptrdiff_t count) {
	self->setMaximumSequenceLength(count);
}

void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self) {
	self->editingFinished();
}

void QKeySequenceEdit_Connect_EditingFinished(QKeySequenceEdit* self, intptr_t slot) {
    void (*slotFunc)(QKeySequenceEdit*) = reinterpret_cast<void (*)(QKeySequenceEdit*)>(slot);
    QKeySequenceEdit::connect(self, &QKeySequenceEdit::editingFinished, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, const QKeySequence* keySequence) {
	self->keySequenceChanged(*keySequence);
}

void QKeySequenceEdit_Connect_KeySequenceChanged(QKeySequenceEdit* self, intptr_t slot) {
    void (*slotFunc)(QKeySequenceEdit*, const QKeySequence*) = reinterpret_cast<void (*)(QKeySequenceEdit*, const QKeySequence*)>(slot);
    QKeySequenceEdit::connect(self, &QKeySequenceEdit::keySequenceChanged, [self, slotFunc](const QKeySequence& keySequence) {
	slotFunc(self, keySequence);
    });
}

libqt_string QKeySequenceEdit_Tr2(const char* s, const char* c) {
	QString _ret = QKeySequenceEdit::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QKeySequenceEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QKeySequenceEdit::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QKeySequenceEdit_Delete(QKeySequenceEdit* self) {
    delete self;
}

