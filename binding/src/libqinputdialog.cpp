#include <QDialog>
#include <QInputDialog>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qinputdialog.h>
#include "libqinputdialog.h"
#include "libqinputdialog.hxx"

QInputDialog* QInputDialog_new(QWidget* parent) {
	 return new VirtualQInputDialog(parent);
}

QInputDialog* QInputDialog_new2() {
	 return new VirtualQInputDialog();
}

QInputDialog* QInputDialog_new3(QWidget* parent, int flags) {
	 return new VirtualQInputDialog(parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

libqt_string QInputDialog_Tr(const char* s) {
	QString _ret = QInputDialog::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QInputDialog_SetInputMode(QInputDialog* self, int mode) {
	self->setInputMode(static_cast<QInputDialog::InputMode>(mode));
}

int QInputDialog_InputMode(const QInputDialog* self) {
	return self->inputMode();
}

void QInputDialog_SetLabelText(QInputDialog* self, const libqt_string text) {
	self->setLabelText(QString::fromUtf8(text.data, text.len));
}

libqt_string QInputDialog_LabelText(const QInputDialog* self) {
	QString _ret = self->labelText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QInputDialog_SetOption(QInputDialog* self, int option) {
	self->setOption(static_cast<QInputDialog::InputDialogOption>(option));
}

bool QInputDialog_TestOption(const QInputDialog* self, int option) {
	return self->testOption(static_cast<QInputDialog::InputDialogOption>(option));
}

void QInputDialog_SetOptions(QInputDialog* self, int options) {
	self->setOptions(static_cast<QFlags<QInputDialog::InputDialogOption>>(options));
}

int QInputDialog_Options(const QInputDialog* self) {
	return self->options();
}

void QInputDialog_SetTextValue(QInputDialog* self, const libqt_string text) {
	self->setTextValue(QString::fromUtf8(text.data, text.len));
}

libqt_string QInputDialog_TextValue(const QInputDialog* self) {
	QString _ret = self->textValue();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QInputDialog_SetTextEchoMode(QInputDialog* self, int mode) {
	self->setTextEchoMode(static_cast<QLineEdit::EchoMode>(mode));
}

int QInputDialog_TextEchoMode(const QInputDialog* self) {
	return self->textEchoMode();
}

void QInputDialog_SetComboBoxEditable(QInputDialog* self, bool editable) {
	self->setComboBoxEditable(editable);
}

bool QInputDialog_IsComboBoxEditable(const QInputDialog* self) {
	return self->isComboBoxEditable();
}

void QInputDialog_SetComboBoxItems(QInputDialog* self, const libqt_list items) {
	self->setComboBoxItems(*items);
}

libqt_list QInputDialog_ComboBoxItems(const QInputDialog* self) {
	return self->comboBoxItems();
}

void QInputDialog_SetIntValue(QInputDialog* self, int value) {
	self->setIntValue(value);
}

int QInputDialog_IntValue(const QInputDialog* self) {
	return self->intValue();
}

void QInputDialog_SetIntMinimum(QInputDialog* self, int min) {
	self->setIntMinimum(min);
}

int QInputDialog_IntMinimum(const QInputDialog* self) {
	return self->intMinimum();
}

void QInputDialog_SetIntMaximum(QInputDialog* self, int max) {
	self->setIntMaximum(max);
}

int QInputDialog_IntMaximum(const QInputDialog* self) {
	return self->intMaximum();
}

void QInputDialog_SetIntRange(QInputDialog* self, int min, int max) {
	self->setIntRange(min, max);
}

void QInputDialog_SetIntStep(QInputDialog* self, int step) {
	self->setIntStep(step);
}

int QInputDialog_IntStep(const QInputDialog* self) {
	return self->intStep();
}

void QInputDialog_SetDoubleValue(QInputDialog* self, double value) {
	self->setDoubleValue(value);
}

double QInputDialog_DoubleValue(const QInputDialog* self) {
	return self->doubleValue();
}

void QInputDialog_SetDoubleMinimum(QInputDialog* self, double min) {
	self->setDoubleMinimum(min);
}

double QInputDialog_DoubleMinimum(const QInputDialog* self) {
	return self->doubleMinimum();
}

void QInputDialog_SetDoubleMaximum(QInputDialog* self, double max) {
	self->setDoubleMaximum(max);
}

double QInputDialog_DoubleMaximum(const QInputDialog* self) {
	return self->doubleMaximum();
}

void QInputDialog_SetDoubleRange(QInputDialog* self, double min, double max) {
	self->setDoubleRange(min, max);
}

void QInputDialog_SetDoubleDecimals(QInputDialog* self, int decimals) {
	self->setDoubleDecimals(decimals);
}

int QInputDialog_DoubleDecimals(const QInputDialog* self) {
	return self->doubleDecimals();
}

void QInputDialog_SetOkButtonText(QInputDialog* self, const libqt_string text) {
	self->setOkButtonText(QString::fromUtf8(text.data, text.len));
}

libqt_string QInputDialog_OkButtonText(const QInputDialog* self) {
	QString _ret = self->okButtonText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QInputDialog_SetCancelButtonText(QInputDialog* self, const libqt_string text) {
	self->setCancelButtonText(QString::fromUtf8(text.data, text.len));
}

libqt_string QInputDialog_CancelButtonText(const QInputDialog* self) {
	QString _ret = self->cancelButtonText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QInputDialog_Open(QInputDialog* self, QObject* receiver, const char* member) {
	self->open(receiver, member);
}

QSize* QInputDialog_MinimumSizeHint(const QInputDialog* self) {
	return new QSize(self->minimumSizeHint());
}

QSize* QInputDialog_SizeHint(const QInputDialog* self) {
	return new QSize(self->sizeHint());
}

void QInputDialog_SetVisible(QInputDialog* self, bool visible) {
	self->setVisible(visible);
}

libqt_string QInputDialog_GetText(QWidget* parent, const libqt_string title, const libqt_string label) {
	QString _ret = QInputDialog::getText(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetMultiLineText(QWidget* parent, const libqt_string title, const libqt_string label) {
	QString _ret = QInputDialog::getMultiLineText(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetItem(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items) {
	QString _ret = QInputDialog::getItem(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), *items);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QInputDialog_GetInt(QWidget* parent, const libqt_string title, const libqt_string label) {
	return QInputDialog::getInt(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len));
}

double QInputDialog_GetDouble(QWidget* parent, const libqt_string title, const libqt_string label) {
	return QInputDialog::getDouble(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len));
}

void QInputDialog_SetDoubleStep(QInputDialog* self, double step) {
	self->setDoubleStep(step);
}

double QInputDialog_DoubleStep(const QInputDialog* self) {
	return self->doubleStep();
}

void QInputDialog_TextValueChanged(QInputDialog* self, const libqt_string text) {
	self->textValueChanged(QString::fromUtf8(text.data, text.len));
}

void QInputDialog_Connect_TextValueChanged(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, const char*) = reinterpret_cast<void (*)(QInputDialog*, const char*)>(slot);
    QInputDialog::connect(self, &QInputDialog::textValueChanged, [self, slotFunc](const QString& text) {
	slotFunc(self, text);
    });
}

void QInputDialog_TextValueSelected(QInputDialog* self, const libqt_string text) {
	self->textValueSelected(QString::fromUtf8(text.data, text.len));
}

void QInputDialog_Connect_TextValueSelected(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, const char*) = reinterpret_cast<void (*)(QInputDialog*, const char*)>(slot);
    QInputDialog::connect(self, &QInputDialog::textValueSelected, [self, slotFunc](const QString& text) {
	slotFunc(self, text);
    });
}

void QInputDialog_IntValueChanged(QInputDialog* self, int value) {
	self->intValueChanged(value);
}

void QInputDialog_Connect_IntValueChanged(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, int) = reinterpret_cast<void (*)(QInputDialog*, int)>(slot);
    QInputDialog::connect(self, &QInputDialog::intValueChanged, [self, slotFunc](int value) {
	slotFunc(self, value);
    });
}

void QInputDialog_IntValueSelected(QInputDialog* self, int value) {
	self->intValueSelected(value);
}

void QInputDialog_Connect_IntValueSelected(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, int) = reinterpret_cast<void (*)(QInputDialog*, int)>(slot);
    QInputDialog::connect(self, &QInputDialog::intValueSelected, [self, slotFunc](int value) {
	slotFunc(self, value);
    });
}

void QInputDialog_DoubleValueChanged(QInputDialog* self, double value) {
	self->doubleValueChanged(value);
}

void QInputDialog_Connect_DoubleValueChanged(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, double) = reinterpret_cast<void (*)(QInputDialog*, double)>(slot);
    QInputDialog::connect(self, &QInputDialog::doubleValueChanged, [self, slotFunc](double value) {
	slotFunc(self, value);
    });
}

void QInputDialog_DoubleValueSelected(QInputDialog* self, double value) {
	self->doubleValueSelected(value);
}

void QInputDialog_Connect_DoubleValueSelected(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, double) = reinterpret_cast<void (*)(QInputDialog*, double)>(slot);
    QInputDialog::connect(self, &QInputDialog::doubleValueSelected, [self, slotFunc](double value) {
	slotFunc(self, value);
    });
}

void QInputDialog_Done(QInputDialog* self, int result) {
	self->done(result);
}

libqt_string QInputDialog_Tr2(const char* s, const char* c) {
	QString _ret = QInputDialog::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QInputDialog::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QInputDialog_SetOption2(QInputDialog* self, int option, bool on) {
	self->setOption(static_cast<QInputDialog::InputDialogOption>(option), on);
}

libqt_string QInputDialog_GetText4(QWidget* parent, const libqt_string title, const libqt_string label, int echo) {
	QString _ret = QInputDialog::getText(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), static_cast<QLineEdit::EchoMode>(echo));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetText5(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text) {
	QString _ret = QInputDialog::getText(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), static_cast<QLineEdit::EchoMode>(echo), QString::fromUtf8(text.data, text.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetText6(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok) {
	QString _ret = QInputDialog::getText(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), static_cast<QLineEdit::EchoMode>(echo), QString::fromUtf8(text.data, text.len), ok);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetText7(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok, int flags) {
	QString _ret = QInputDialog::getText(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), static_cast<QLineEdit::EchoMode>(echo), QString::fromUtf8(text.data, text.len), ok, static_cast<QFlags<Qt::WindowType>>(flags));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetText8(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok, int flags, int inputMethodHints) {
	QString _ret = QInputDialog::getText(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), static_cast<QLineEdit::EchoMode>(echo), QString::fromUtf8(text.data, text.len), ok, static_cast<QFlags<Qt::WindowType>>(flags), static_cast<QFlags<Qt::InputMethodHint>>(inputMethodHints));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetMultiLineText4(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text) {
	QString _ret = QInputDialog::getMultiLineText(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), QString::fromUtf8(text.data, text.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetMultiLineText5(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok) {
	QString _ret = QInputDialog::getMultiLineText(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), QString::fromUtf8(text.data, text.len), ok);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetMultiLineText6(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok, int flags) {
	QString _ret = QInputDialog::getMultiLineText(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), QString::fromUtf8(text.data, text.len), ok, static_cast<QFlags<Qt::WindowType>>(flags));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetMultiLineText7(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok, int flags, int inputMethodHints) {
	QString _ret = QInputDialog::getMultiLineText(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), QString::fromUtf8(text.data, text.len), ok, static_cast<QFlags<Qt::WindowType>>(flags), static_cast<QFlags<Qt::InputMethodHint>>(inputMethodHints));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetItem5(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items, int current) {
	QString _ret = QInputDialog::getItem(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), *items, current);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetItem6(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items, int current, bool editable) {
	QString _ret = QInputDialog::getItem(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), *items, current, editable);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetItem7(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items, int current, bool editable, bool* ok) {
	QString _ret = QInputDialog::getItem(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), *items, current, editable, ok);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetItem8(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items, int current, bool editable, bool* ok, int flags) {
	QString _ret = QInputDialog::getItem(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), *items, current, editable, ok, static_cast<QFlags<Qt::WindowType>>(flags));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputDialog_GetItem9(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list items, int current, bool editable, bool* ok, int flags, int inputMethodHints) {
	QString _ret = QInputDialog::getItem(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), *items, current, editable, ok, static_cast<QFlags<Qt::WindowType>>(flags), static_cast<QFlags<Qt::InputMethodHint>>(inputMethodHints));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QInputDialog_GetInt4(QWidget* parent, const libqt_string title, const libqt_string label, int value) {
	return QInputDialog::getInt(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value);
}

int QInputDialog_GetInt5(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue) {
	return QInputDialog::getInt(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value, minValue);
}

int QInputDialog_GetInt6(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue) {
	return QInputDialog::getInt(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value, minValue, maxValue);
}

int QInputDialog_GetInt7(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue, int step) {
	return QInputDialog::getInt(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value, minValue, maxValue, step);
}

int QInputDialog_GetInt8(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue, int step, bool* ok) {
	return QInputDialog::getInt(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value, minValue, maxValue, step, ok);
}

int QInputDialog_GetInt9(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue, int step, bool* ok, int flags) {
	return QInputDialog::getInt(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value, minValue, maxValue, step, ok, static_cast<QFlags<Qt::WindowType>>(flags));
}

double QInputDialog_GetDouble4(QWidget* parent, const libqt_string title, const libqt_string label, double value) {
	return QInputDialog::getDouble(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value);
}

double QInputDialog_GetDouble5(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue) {
	return QInputDialog::getDouble(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value, minValue);
}

double QInputDialog_GetDouble6(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue) {
	return QInputDialog::getDouble(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value, minValue, maxValue);
}

double QInputDialog_GetDouble7(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals) {
	return QInputDialog::getDouble(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value, minValue, maxValue, decimals);
}

double QInputDialog_GetDouble8(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok) {
	return QInputDialog::getDouble(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value, minValue, maxValue, decimals, ok);
}

double QInputDialog_GetDouble9(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags) {
	return QInputDialog::getDouble(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value, minValue, maxValue, decimals, ok, static_cast<QFlags<Qt::WindowType>>(flags));
}

double QInputDialog_GetDouble10(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step) {
	return QInputDialog::getDouble(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(label.data, label.len), value, minValue, maxValue, decimals, ok, static_cast<QFlags<Qt::WindowType>>(flags), step);
}

// Base class handler implementation
QSize* QInputDialog_QBaseMinimumSizeHint(const QInputDialog* self) {
	auto* vqinputdialog = dynamic_cast<const VirtualQInputDialog*>(self);
	if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
vqinputdialog->setQInputDialog_MinimumSizeHint_IsBase(true);
	return new QSize(vqinputdialog->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMinimumSizeHint(const QInputDialog* self, intptr_t slot) {
	auto* vqinputdialog = dynamic_cast<const VirtualQInputDialog*>(self);
	if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
vqinputdialog->setQInputDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_MinimumSizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QInputDialog_QBaseSizeHint(const QInputDialog* self) {
	auto* vqinputdialog = dynamic_cast<const VirtualQInputDialog*>(self);
	if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
vqinputdialog->setQInputDialog_SizeHint_IsBase(true);
	return new QSize(vqinputdialog->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnSizeHint(const QInputDialog* self, intptr_t slot) {
	auto* vqinputdialog = dynamic_cast<const VirtualQInputDialog*>(self);
	if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
vqinputdialog->setQInputDialog_SizeHint_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
void QInputDialog_QBaseSetVisible(QInputDialog* self, bool visible) {
	auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
	if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
vqinputdialog->setQInputDialog_SetVisible_IsBase(true);
	vqinputdialog->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnSetVisible(QInputDialog* self, intptr_t slot) {
	auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
	if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
vqinputdialog->setQInputDialog_SetVisible_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_SetVisible_Callback>(slot));
}
}

// Base class handler implementation
void QInputDialog_QBaseDone(QInputDialog* self, int result) {
	auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
	if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
vqinputdialog->setQInputDialog_Done_IsBase(true);
	vqinputdialog->done(result);
}
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDone(QInputDialog* self, intptr_t slot) {
	auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
	if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
vqinputdialog->setQInputDialog_Done_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Done_Callback>(slot));
}
}

void QInputDialog_Delete(QInputDialog* self) {
    delete self;
}

