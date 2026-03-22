#include <QDebug>
#include <QLoggingCategory>
#include <QMessageLogContext>
#include <QMessageLogger>
#include <QNoDebug>
#include <qlogging.h>
#include "libqlogging.h"
#include "libqlogging.hxx"

QMessageLogContext* QMessageLogContext_new() {
	 return new QMessageLogContext();
}

QMessageLogContext* QMessageLogContext_new2(const char* fileName, int lineNumber, const char* functionName, const char* categoryName) {
	 return new QMessageLogContext(fileName, lineNumber, functionName, categoryName);
}

int QMessageLogContext_Version(const QMessageLogContext* self) {
	return self->version;
}

void QMessageLogContext_SetVersion(QMessageLogContext* self, int version) {
	self->version;
}

int QMessageLogContext_Line(const QMessageLogContext* self) {
	return self->line;
}

void QMessageLogContext_SetLine(QMessageLogContext* self, int line) {
	self->line;
}

const char* QMessageLogContext_File(const QMessageLogContext* self) {
	return self->file;
}

void QMessageLogContext_SetFile(QMessageLogContext* self, const char* file) {
	self->file;
}

const char* QMessageLogContext_Function(const QMessageLogContext* self) {
	return self->function;
}

void QMessageLogContext_SetFunction(QMessageLogContext* self, const char* function) {
	self->function;
}

const char* QMessageLogContext_Category(const QMessageLogContext* self) {
	return self->category;
}

void QMessageLogContext_SetCategory(QMessageLogContext* self, const char* category) {
	self->category;
}

void QMessageLogContext_Delete(QMessageLogContext* self) {
    delete self;
}

QMessageLogger* QMessageLogger_new() {
	 return new QMessageLogger();
}

QMessageLogger* QMessageLogger_new2(const char* file, int line, const char* function) {
	 return new QMessageLogger(file, line, function);
}

QMessageLogger* QMessageLogger_new3(const char* file, int line, const char* function, const char* category) {
	 return new QMessageLogger(file, line, function, category);
}

void QMessageLogger_Debug(const QMessageLogger* self, const char* msg, ... ) {
	self->debug(msg, );
}

void QMessageLogger_NoDebug(const QMessageLogger* self, const char* param1, ... ) {
	self->noDebug(param1, );
}

void QMessageLogger_Info(const QMessageLogger* self, const char* msg, ... ) {
	self->info(msg, );
}

void QMessageLogger_Warning(const QMessageLogger* self, const char* msg, ... ) {
	self->warning(msg, );
}

void QMessageLogger_Critical(const QMessageLogger* self, const char* msg, ... ) {
	self->critical(msg, );
}

void QMessageLogger_Fatal(const QMessageLogger* self, const char* msg, ... ) {
	self->fatal(msg, );
}

void QMessageLogger_Debug2(const QMessageLogger* self, const QLoggingCategory* cat, const char* msg, ... ) {
	self->debug(*cat, msg, );
}

void QMessageLogger_Info2(const QMessageLogger* self, const QLoggingCategory* cat, const char* msg, ... ) {
	self->info(*cat, msg, );
}

void QMessageLogger_Warning2(const QMessageLogger* self, const QLoggingCategory* cat, const char* msg, ... ) {
	self->warning(*cat, msg, );
}

void QMessageLogger_Critical2(const QMessageLogger* self, const QLoggingCategory* cat, const char* msg, ... ) {
	self->critical(*cat, msg, );
}

void QMessageLogger_Fatal2(const QMessageLogger* self, const QLoggingCategory* cat, const char* msg, ... ) {
	self->fatal(*cat, msg, );
}

QDebug* QMessageLogger_Debug4(const QMessageLogger* self) {
	return new QDebug(self->debug());
}

QDebug* QMessageLogger_Debug5(const QMessageLogger* self, const QLoggingCategory* cat) {
	return new QDebug(self->debug(*cat));
}

QDebug* QMessageLogger_Info4(const QMessageLogger* self) {
	return new QDebug(self->info());
}

QDebug* QMessageLogger_Info5(const QMessageLogger* self, const QLoggingCategory* cat) {
	return new QDebug(self->info(*cat));
}

QDebug* QMessageLogger_Warning4(const QMessageLogger* self) {
	return new QDebug(self->warning());
}

QDebug* QMessageLogger_Warning5(const QMessageLogger* self, const QLoggingCategory* cat) {
	return new QDebug(self->warning(*cat));
}

QDebug* QMessageLogger_Critical4(const QMessageLogger* self) {
	return new QDebug(self->critical());
}

QDebug* QMessageLogger_Critical5(const QMessageLogger* self, const QLoggingCategory* cat) {
	return new QDebug(self->critical(*cat));
}

QDebug* QMessageLogger_Fatal4(const QMessageLogger* self) {
	return new QDebug(self->fatal());
}

QDebug* QMessageLogger_Fatal5(const QMessageLogger* self, const QLoggingCategory* cat) {
	return new QDebug(self->fatal(*cat));
}

QNoDebug* QMessageLogger_NoDebug2(const QMessageLogger* self) {
	return new QNoDebug(self->noDebug());
}

void QMessageLogger_Delete(QMessageLogger* self) {
    delete self;
}

