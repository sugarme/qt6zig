#include <QAbstractButton>
#include <QCheckBox>
#include <QCloseEvent>
#include <QDialog>
#include <QEvent>
#include <QKeyEvent>
#include <QMessageBox>
#include <QObject>
#include <QPixmap>
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qmessagebox.h>
#include "libqmessagebox.h"
#include "libqmessagebox.hxx"

QMessageBox* QMessageBox_new(QWidget* parent) {
	 return new VirtualQMessageBox(parent);
}

QMessageBox* QMessageBox_new2() {
	 return new VirtualQMessageBox();
}

QMessageBox* QMessageBox_new3(int icon, const libqt_string title, const libqt_string text) {
	 return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len));
}

QMessageBox* QMessageBox_new4(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2) {
	 return new VirtualQMessageBox(QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QMessageBox::Icon>(icon), button0, button1, button2);
}

QMessageBox* QMessageBox_new5(int icon, const libqt_string title, const libqt_string text, int buttons) {
	 return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QFlags<QMessageBox::StandardButton>>(buttons));
}

QMessageBox* QMessageBox_new6(int icon, const libqt_string title, const libqt_string text, int buttons, QWidget* parent) {
	 return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QFlags<QMessageBox::StandardButton>>(buttons), parent);
}

QMessageBox* QMessageBox_new7(int icon, const libqt_string title, const libqt_string text, int buttons, QWidget* parent, int flags) {
	 return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QFlags<QMessageBox::StandardButton>>(buttons), parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

QMessageBox* QMessageBox_new8(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2, QWidget* parent) {
	 return new VirtualQMessageBox(QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QMessageBox::Icon>(icon), button0, button1, button2, parent);
}

QMessageBox* QMessageBox_new9(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2, QWidget* parent, int f) {
	 return new VirtualQMessageBox(QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QMessageBox::Icon>(icon), button0, button1, button2, parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QMessageBox_Tr(const char* s) {
	QString _ret = QMessageBox::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMessageBox_AddButton(QMessageBox* self, QAbstractButton* button, int role) {
	self->addButton(button, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_AddButton2(QMessageBox* self, const libqt_string text, int role) {
	return self->addButton(QString::fromUtf8(text.data, text.len), static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_AddButton3(QMessageBox* self, int button) {
	return self->addButton(static_cast<QMessageBox::StandardButton>(button));
}

void QMessageBox_RemoveButton(QMessageBox* self, QAbstractButton* button) {
	self->removeButton(button);
}

void QMessageBox_Open(QMessageBox* self, QObject* receiver, const char* member) {
	self->open(receiver, member);
}

libqt_list QMessageBox_Buttons(const QMessageBox* self) {
	return self->buttons();
}

int QMessageBox_ButtonRole(const QMessageBox* self, QAbstractButton* button) {
	return self->buttonRole(button);
}

void QMessageBox_SetStandardButtons(QMessageBox* self, int buttons) {
	self->setStandardButtons(static_cast<QFlags<QMessageBox::StandardButton>>(buttons));
}

int QMessageBox_StandardButtons(const QMessageBox* self) {
	return self->standardButtons();
}

int QMessageBox_StandardButton(const QMessageBox* self, QAbstractButton* button) {
	return self->standardButton(button);
}

QAbstractButton* QMessageBox_Button(const QMessageBox* self, int which) {
	return self->button(static_cast<QMessageBox::StandardButton>(which));
}

QPushButton* QMessageBox_DefaultButton(const QMessageBox* self) {
	return self->defaultButton();
}

void QMessageBox_SetDefaultButton(QMessageBox* self, QPushButton* button) {
	self->setDefaultButton(button);
}

void QMessageBox_SetDefaultButton2(QMessageBox* self, int button) {
	self->setDefaultButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_EscapeButton(const QMessageBox* self) {
	return self->escapeButton();
}

void QMessageBox_SetEscapeButton(QMessageBox* self, QAbstractButton* button) {
	self->setEscapeButton(button);
}

void QMessageBox_SetEscapeButton2(QMessageBox* self, int button) {
	self->setEscapeButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_ClickedButton(const QMessageBox* self) {
	return self->clickedButton();
}

libqt_string QMessageBox_Text(const QMessageBox* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMessageBox_SetText(QMessageBox* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

int QMessageBox_Icon(const QMessageBox* self) {
	return self->icon();
}

void QMessageBox_SetIcon(QMessageBox* self, int icon) {
	self->setIcon(static_cast<QMessageBox::Icon>(icon));
}

QPixmap* QMessageBox_IconPixmap(const QMessageBox* self) {
	return new QPixmap(self->iconPixmap());
}

void QMessageBox_SetIconPixmap(QMessageBox* self, const QPixmap* pixmap) {
	self->setIconPixmap(*pixmap);
}

int QMessageBox_TextFormat(const QMessageBox* self) {
	return self->textFormat();
}

void QMessageBox_SetTextFormat(QMessageBox* self, int format) {
	self->setTextFormat(static_cast<Qt::TextFormat>(format));
}

void QMessageBox_SetTextInteractionFlags(QMessageBox* self, int flags) {
	self->setTextInteractionFlags(static_cast<QFlags<Qt::TextInteractionFlag>>(flags));
}

int QMessageBox_TextInteractionFlags(const QMessageBox* self) {
	return self->textInteractionFlags();
}

void QMessageBox_SetCheckBox(QMessageBox* self, QCheckBox* cb) {
	self->setCheckBox(cb);
}

QCheckBox* QMessageBox_CheckBox(const QMessageBox* self) {
	return self->checkBox();
}

void QMessageBox_SetOption(QMessageBox* self, int option) {
	self->setOption(static_cast<QMessageBox::Option>(option));
}

bool QMessageBox_TestOption(const QMessageBox* self, int option) {
	return self->testOption(static_cast<QMessageBox::Option>(option));
}

void QMessageBox_SetOptions(QMessageBox* self, int options) {
	self->setOptions(static_cast<QFlags<QMessageBox::Option>>(options));
}

int QMessageBox_Options(const QMessageBox* self) {
	return self->options();
}

int QMessageBox_Information(QWidget* parent, const libqt_string title, const libqt_string text) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len));
}

int QMessageBox_Information2(QWidget* parent, const libqt_string title, const libqt_string text, int button0) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QMessageBox::StandardButton>(button0));
}

int QMessageBox_Question(QWidget* parent, const libqt_string title, const libqt_string text) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len));
}

int QMessageBox_Question2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_Warning(QWidget* parent, const libqt_string title, const libqt_string text) {
	return QMessageBox::warning(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len));
}

int QMessageBox_Warning2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
	return QMessageBox::warning(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_Critical(QWidget* parent, const libqt_string title, const libqt_string text) {
	return QMessageBox::critical(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len));
}

int QMessageBox_Critical2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
	return QMessageBox::critical(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

void QMessageBox_About(QWidget* parent, const libqt_string title, const libqt_string text) {
	QMessageBox::about(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len));
}

void QMessageBox_AboutQt(QWidget* parent) {
	QMessageBox::aboutQt(parent);
}

int QMessageBox_Information3(QWidget* parent, const libqt_string title, const libqt_string text, int button0) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), button0);
}

int QMessageBox_Information4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len));
}

int QMessageBox_Question3(QWidget* parent, const libqt_string title, const libqt_string text, int button0) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), button0);
}

int QMessageBox_Question4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len));
}

int QMessageBox_Warning3(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
	return QMessageBox::warning(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), button0, button1);
}

int QMessageBox_Warning4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text) {
	return QMessageBox::warning(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len));
}

int QMessageBox_Critical3(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
	return QMessageBox::critical(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), button0, button1);
}

int QMessageBox_Critical4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text) {
	return QMessageBox::critical(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len));
}

libqt_string QMessageBox_ButtonText(const QMessageBox* self, int button) {
	QString _ret = self->buttonText(button);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMessageBox_SetButtonText(QMessageBox* self, int button, const libqt_string text) {
	self->setButtonText(button, QString::fromUtf8(text.data, text.len));
}

libqt_string QMessageBox_InformativeText(const QMessageBox* self) {
	QString _ret = self->informativeText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMessageBox_SetInformativeText(QMessageBox* self, const libqt_string text) {
	self->setInformativeText(QString::fromUtf8(text.data, text.len));
}

libqt_string QMessageBox_DetailedText(const QMessageBox* self) {
	QString _ret = self->detailedText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMessageBox_SetDetailedText(QMessageBox* self, const libqt_string text) {
	self->setDetailedText(QString::fromUtf8(text.data, text.len));
}

void QMessageBox_SetWindowTitle(QMessageBox* self, const libqt_string title) {
	self->setWindowTitle(QString::fromUtf8(title.data, title.len));
}

void QMessageBox_SetWindowModality(QMessageBox* self, int windowModality) {
	self->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

QPixmap* QMessageBox_StandardIcon(int icon) {
	return new QPixmap(QMessageBox::standardIcon(static_cast<QMessageBox::Icon>(icon)));
}

void QMessageBox_ButtonClicked(QMessageBox* self, QAbstractButton* button) {
	self->buttonClicked(button);
}

void QMessageBox_Connect_ButtonClicked(QMessageBox* self, intptr_t slot) {
    void (*slotFunc)(QMessageBox*, QAbstractButton*) = reinterpret_cast<void (*)(QMessageBox*, QAbstractButton*)>(slot);
    QMessageBox::connect(self, &QMessageBox::buttonClicked, [self, slotFunc](QAbstractButton* button) {
	slotFunc(self, button);
    });
}

libqt_string QMessageBox_Tr2(const char* s, const char* c) {
	QString _ret = QMessageBox::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMessageBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMessageBox::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMessageBox_SetOption2(QMessageBox* self, int option, bool on) {
	self->setOption(static_cast<QMessageBox::Option>(option), on);
}

int QMessageBox_Information42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QFlags<QMessageBox::StandardButton>>(buttons));
}

int QMessageBox_Information5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QFlags<QMessageBox::StandardButton>>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
}

int QMessageBox_Information52(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_Question42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QFlags<QMessageBox::StandardButton>>(buttons));
}

int QMessageBox_Question5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QFlags<QMessageBox::StandardButton>>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
}

int QMessageBox_Warning42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons) {
	return QMessageBox::warning(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QFlags<QMessageBox::StandardButton>>(buttons));
}

int QMessageBox_Warning5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton) {
	return QMessageBox::warning(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QFlags<QMessageBox::StandardButton>>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
}

int QMessageBox_Critical42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons) {
	return QMessageBox::critical(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QFlags<QMessageBox::StandardButton>>(buttons));
}

int QMessageBox_Critical5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton) {
	return QMessageBox::critical(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), static_cast<QFlags<QMessageBox::StandardButton>>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
}

void QMessageBox_AboutQt2(QWidget* parent, const libqt_string title) {
	QMessageBox::aboutQt(parent, QString::fromUtf8(title.data, title.len));
}

int QMessageBox_Information53(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), button0, button1);
}

int QMessageBox_Information6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), button0, button1, button2);
}

int QMessageBox_Information54(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len));
}

int QMessageBox_Information62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len));
}

int QMessageBox_Information7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len), defaultButtonNumber);
}

int QMessageBox_Information8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	return QMessageBox::information(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len), defaultButtonNumber, escapeButtonNumber);
}

int QMessageBox_Question52(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), button0, button1);
}

int QMessageBox_Question6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), button0, button1, button2);
}

int QMessageBox_Question53(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len));
}

int QMessageBox_Question62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len));
}

int QMessageBox_Question7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len), defaultButtonNumber);
}

int QMessageBox_Question8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	return QMessageBox::question(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len), defaultButtonNumber, escapeButtonNumber);
}

int QMessageBox_Warning6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2) {
	return QMessageBox::warning(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), button0, button1, button2);
}

int QMessageBox_Warning52(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text) {
	return QMessageBox::warning(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len));
}

int QMessageBox_Warning62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text) {
	return QMessageBox::warning(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len));
}

int QMessageBox_Warning7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber) {
	return QMessageBox::warning(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len), defaultButtonNumber);
}

int QMessageBox_Warning8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	return QMessageBox::warning(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len), defaultButtonNumber, escapeButtonNumber);
}

int QMessageBox_Critical6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2) {
	return QMessageBox::critical(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), button0, button1, button2);
}

int QMessageBox_Critical52(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text) {
	return QMessageBox::critical(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len));
}

int QMessageBox_Critical62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text) {
	return QMessageBox::critical(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len));
}

int QMessageBox_Critical7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber) {
	return QMessageBox::critical(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len), defaultButtonNumber);
}

int QMessageBox_Critical8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	return QMessageBox::critical(parent, QString::fromUtf8(title.data, title.len), QString::fromUtf8(text.data, text.len), QString::fromUtf8(button0Text.data, button0Text.len), QString::fromUtf8(button1Text.data, button1Text.len), QString::fromUtf8(button2Text.data, button2Text.len), defaultButtonNumber, escapeButtonNumber);
}

// Derived class handler implementation
bool QMessageBox_Event(QMessageBox* self, QEvent* e) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
	return vqmessagebox->event(e);
	} else {
	return self->QMessageBox::event(e);
}
}

// Base class handler implementation
bool QMessageBox_QBaseEvent(QMessageBox* self, QEvent* e) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_Event_IsBase(true);
	return vqmessagebox->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnEvent(QMessageBox* self, intptr_t slot) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_Event_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QMessageBox_ResizeEvent(QMessageBox* self, QResizeEvent* event) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
	vqmessagebox->resizeEvent(event);
	} else {
	self->QMessageBox::resizeEvent(event);
}
}

// Base class handler implementation
void QMessageBox_QBaseResizeEvent(QMessageBox* self, QResizeEvent* event) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_ResizeEvent_IsBase(true);
	vqmessagebox->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnResizeEvent(QMessageBox* self, intptr_t slot) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_ResizeEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMessageBox_ShowEvent(QMessageBox* self, QShowEvent* event) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
	vqmessagebox->showEvent(event);
	} else {
	self->QMessageBox::showEvent(event);
}
}

// Base class handler implementation
void QMessageBox_QBaseShowEvent(QMessageBox* self, QShowEvent* event) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_ShowEvent_IsBase(true);
	vqmessagebox->showEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnShowEvent(QMessageBox* self, intptr_t slot) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_ShowEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMessageBox_CloseEvent(QMessageBox* self, QCloseEvent* event) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
	vqmessagebox->closeEvent(event);
	} else {
	self->QMessageBox::closeEvent(event);
}
}

// Base class handler implementation
void QMessageBox_QBaseCloseEvent(QMessageBox* self, QCloseEvent* event) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_CloseEvent_IsBase(true);
	vqmessagebox->closeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnCloseEvent(QMessageBox* self, intptr_t slot) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_CloseEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_CloseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMessageBox_KeyPressEvent(QMessageBox* self, QKeyEvent* event) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
	vqmessagebox->keyPressEvent(event);
	} else {
	self->QMessageBox::keyPressEvent(event);
}
}

// Base class handler implementation
void QMessageBox_QBaseKeyPressEvent(QMessageBox* self, QKeyEvent* event) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_KeyPressEvent_IsBase(true);
	vqmessagebox->keyPressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnKeyPressEvent(QMessageBox* self, intptr_t slot) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMessageBox_ChangeEvent(QMessageBox* self, QEvent* event) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
	vqmessagebox->changeEvent(event);
	} else {
	self->QMessageBox::changeEvent(event);
}
}

// Base class handler implementation
void QMessageBox_QBaseChangeEvent(QMessageBox* self, QEvent* event) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_ChangeEvent_IsBase(true);
	vqmessagebox->changeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnChangeEvent(QMessageBox* self, intptr_t slot) {
	auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
	if (vqmessagebox && vqmessagebox->isVirtualQMessageBox) {
vqmessagebox->setQMessageBox_ChangeEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_ChangeEvent_Callback>(slot));
}
}

void QMessageBox_Delete(QMessageBox* self) {
    delete self;
}

