#include <QObject>
#include <QOpenGLDebugLogger>
#include <QOpenGLDebugMessage>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qopengldebug.h>
#include "libqopengldebug.h"
#include "libqopengldebug.hxx"

QOpenGLDebugMessage* QOpenGLDebugMessage_new() {
	 return new QOpenGLDebugMessage();
}

QOpenGLDebugMessage* QOpenGLDebugMessage_new2(const QOpenGLDebugMessage* debugMessage) {
	 return new QOpenGLDebugMessage(*debugMessage);
}

void QOpenGLDebugMessage_OperatorAssign(QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage) {
	self->operator=(*debugMessage);
}

void QOpenGLDebugMessage_Swap(QOpenGLDebugMessage* self, QOpenGLDebugMessage* other) {
	self->swap(*other);
}

int QOpenGLDebugMessage_Source(const QOpenGLDebugMessage* self) {
	return self->source();
}

int QOpenGLDebugMessage_Type(const QOpenGLDebugMessage* self) {
	return self->type();
}

int QOpenGLDebugMessage_Severity(const QOpenGLDebugMessage* self) {
	return self->severity();
}

uint32_t QOpenGLDebugMessage_Id(const QOpenGLDebugMessage* self) {
	return self->id();
}

libqt_string QOpenGLDebugMessage_Message(const QOpenGLDebugMessage* self) {
	QString _ret = self->message();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage(const libqt_string text) {
	return new QOpenGLDebugMessage(QOpenGLDebugMessage::createApplicationMessage(QString::fromUtf8(text.data, text.len)));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage(const libqt_string text) {
	return new QOpenGLDebugMessage(QOpenGLDebugMessage::createThirdPartyMessage(QString::fromUtf8(text.data, text.len)));
}

bool QOpenGLDebugMessage_OperatorEqual(const QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage) {
	return self->operator==(*debugMessage);
}

bool QOpenGLDebugMessage_OperatorNotEqual(const QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage) {
	return self->operator!=(*debugMessage);
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage2(const libqt_string text, uint32_t id) {
	return new QOpenGLDebugMessage(QOpenGLDebugMessage::createApplicationMessage(QString::fromUtf8(text.data, text.len), id));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage3(const libqt_string text, uint32_t id, int severity) {
	return new QOpenGLDebugMessage(QOpenGLDebugMessage::createApplicationMessage(QString::fromUtf8(text.data, text.len), id, static_cast<QOpenGLDebugMessage::Severity>(severity)));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage4(const libqt_string text, uint32_t id, int severity, int typeVal) {
	return new QOpenGLDebugMessage(QOpenGLDebugMessage::createApplicationMessage(QString::fromUtf8(text.data, text.len), id, static_cast<QOpenGLDebugMessage::Severity>(severity), static_cast<QMetaType::Type>(typeVal)));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage2(const libqt_string text, uint32_t id) {
	return new QOpenGLDebugMessage(QOpenGLDebugMessage::createThirdPartyMessage(QString::fromUtf8(text.data, text.len), id));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage3(const libqt_string text, uint32_t id, int severity) {
	return new QOpenGLDebugMessage(QOpenGLDebugMessage::createThirdPartyMessage(QString::fromUtf8(text.data, text.len), id, static_cast<QOpenGLDebugMessage::Severity>(severity)));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage4(const libqt_string text, uint32_t id, int severity, int typeVal) {
	return new QOpenGLDebugMessage(QOpenGLDebugMessage::createThirdPartyMessage(QString::fromUtf8(text.data, text.len), id, static_cast<QOpenGLDebugMessage::Severity>(severity), static_cast<QMetaType::Type>(typeVal)));
}

void QOpenGLDebugMessage_Delete(QOpenGLDebugMessage* self) {
    delete self;
}

QOpenGLDebugLogger* QOpenGLDebugLogger_new() {
	 return new QOpenGLDebugLogger();
}

QOpenGLDebugLogger* QOpenGLDebugLogger_new2(QObject* parent) {
	 return new QOpenGLDebugLogger(parent);
}

libqt_string QOpenGLDebugLogger_Tr(const char* s) {
	QString _ret = QOpenGLDebugLogger::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QOpenGLDebugLogger_Initialize(QOpenGLDebugLogger* self) {
	return self->initialize();
}

bool QOpenGLDebugLogger_IsLogging(const QOpenGLDebugLogger* self) {
	return self->isLogging();
}

int QOpenGLDebugLogger_LoggingMode(const QOpenGLDebugLogger* self) {
	return self->loggingMode();
}

long long QOpenGLDebugLogger_MaximumMessageLength(const QOpenGLDebugLogger* self) {
	return self->maximumMessageLength();
}

void QOpenGLDebugLogger_PushGroup(QOpenGLDebugLogger* self, const libqt_string name) {
	self->pushGroup(QString::fromUtf8(name.data, name.len));
}

void QOpenGLDebugLogger_PopGroup(QOpenGLDebugLogger* self) {
	self->popGroup();
}

void QOpenGLDebugLogger_EnableMessages(QOpenGLDebugLogger* self) {
	self->enableMessages();
}

void QOpenGLDebugLogger_EnableMessages2(QOpenGLDebugLogger* self, const libqt_list ids) {
	self->enableMessages(*ids);
}

void QOpenGLDebugLogger_DisableMessages(QOpenGLDebugLogger* self) {
	self->disableMessages();
}

void QOpenGLDebugLogger_DisableMessages2(QOpenGLDebugLogger* self, const libqt_list ids) {
	self->disableMessages(*ids);
}

libqt_list QOpenGLDebugLogger_LoggedMessages(const QOpenGLDebugLogger* self) {
	return self->loggedMessages();
}

void QOpenGLDebugLogger_LogMessage(QOpenGLDebugLogger* self, const QOpenGLDebugMessage* debugMessage) {
	self->logMessage(*debugMessage);
}

void QOpenGLDebugLogger_StartLogging(QOpenGLDebugLogger* self) {
	self->startLogging();
}

void QOpenGLDebugLogger_StopLogging(QOpenGLDebugLogger* self) {
	self->stopLogging();
}

void QOpenGLDebugLogger_MessageLogged(QOpenGLDebugLogger* self, const QOpenGLDebugMessage* debugMessage) {
	self->messageLogged(*debugMessage);
}

void QOpenGLDebugLogger_Connect_MessageLogged(QOpenGLDebugLogger* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLDebugLogger*, const QOpenGLDebugMessage*) = reinterpret_cast<void (*)(QOpenGLDebugLogger*, const QOpenGLDebugMessage*)>(slot);
    QOpenGLDebugLogger::connect(self, &QOpenGLDebugLogger::messageLogged, [self, slotFunc](const QOpenGLDebugMessage& debugMessage) {
	slotFunc(self, debugMessage);
    });
}

libqt_string QOpenGLDebugLogger_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLDebugLogger::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLDebugLogger_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLDebugLogger::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLDebugLogger_PushGroup2(QOpenGLDebugLogger* self, const libqt_string name, uint32_t id) {
	self->pushGroup(QString::fromUtf8(name.data, name.len), id);
}

void QOpenGLDebugLogger_PushGroup3(QOpenGLDebugLogger* self, const libqt_string name, uint32_t id, int source) {
	self->pushGroup(QString::fromUtf8(name.data, name.len), id, static_cast<QOpenGLDebugMessage::Source>(source));
}

void QOpenGLDebugLogger_EnableMessages1(QOpenGLDebugLogger* self, int sources) {
	self->enableMessages(static_cast<QFlags<QOpenGLDebugMessage::Source>>(sources));
}

void QOpenGLDebugLogger_EnableMessages22(QOpenGLDebugLogger* self, int sources, int types) {
	self->enableMessages(static_cast<QFlags<QOpenGLDebugMessage::Source>>(sources), static_cast<QFlags<QOpenGLDebugMessage::Type>>(types));
}

void QOpenGLDebugLogger_EnableMessages3(QOpenGLDebugLogger* self, int sources, int types, int severities) {
	self->enableMessages(static_cast<QFlags<QOpenGLDebugMessage::Source>>(sources), static_cast<QFlags<QOpenGLDebugMessage::Type>>(types), static_cast<QFlags<QOpenGLDebugMessage::Severity>>(severities));
}

void QOpenGLDebugLogger_EnableMessages23(QOpenGLDebugLogger* self, const libqt_list ids, int sources) {
	self->enableMessages(*ids, static_cast<QFlags<QOpenGLDebugMessage::Source>>(sources));
}

void QOpenGLDebugLogger_EnableMessages32(QOpenGLDebugLogger* self, const libqt_list ids, int sources, int types) {
	self->enableMessages(*ids, static_cast<QFlags<QOpenGLDebugMessage::Source>>(sources), static_cast<QFlags<QOpenGLDebugMessage::Type>>(types));
}

void QOpenGLDebugLogger_DisableMessages1(QOpenGLDebugLogger* self, int sources) {
	self->disableMessages(static_cast<QFlags<QOpenGLDebugMessage::Source>>(sources));
}

void QOpenGLDebugLogger_DisableMessages22(QOpenGLDebugLogger* self, int sources, int types) {
	self->disableMessages(static_cast<QFlags<QOpenGLDebugMessage::Source>>(sources), static_cast<QFlags<QOpenGLDebugMessage::Type>>(types));
}

void QOpenGLDebugLogger_DisableMessages3(QOpenGLDebugLogger* self, int sources, int types, int severities) {
	self->disableMessages(static_cast<QFlags<QOpenGLDebugMessage::Source>>(sources), static_cast<QFlags<QOpenGLDebugMessage::Type>>(types), static_cast<QFlags<QOpenGLDebugMessage::Severity>>(severities));
}

void QOpenGLDebugLogger_DisableMessages23(QOpenGLDebugLogger* self, const libqt_list ids, int sources) {
	self->disableMessages(*ids, static_cast<QFlags<QOpenGLDebugMessage::Source>>(sources));
}

void QOpenGLDebugLogger_DisableMessages32(QOpenGLDebugLogger* self, const libqt_list ids, int sources, int types) {
	self->disableMessages(*ids, static_cast<QFlags<QOpenGLDebugMessage::Source>>(sources), static_cast<QFlags<QOpenGLDebugMessage::Type>>(types));
}

void QOpenGLDebugLogger_StartLogging1(QOpenGLDebugLogger* self, int loggingMode) {
	self->startLogging(static_cast<QOpenGLDebugLogger::LoggingMode>(loggingMode));
}

void QOpenGLDebugLogger_Delete(QOpenGLDebugLogger* self) {
    delete self;
}

