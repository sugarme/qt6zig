#pragma once
#ifndef QLOGGING_H_C_LIB
#define QLOGGING_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDebug QDebug;
typedef struct QLoggingCategory QLoggingCategory;
typedef struct QMessageLogContext QMessageLogContext;
typedef struct QMessageLogger QMessageLogger;
typedef struct QNoDebug QNoDebug;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QMessageLogContext* QMessageLogContext_new();
QMessageLogContext* QMessageLogContext_new2(const char* fileName, int lineNumber, const char* functionName, const char* categoryName);
int QMessageLogContext_Version(const QMessageLogContext* self);
void QMessageLogContext_SetVersion(QMessageLogContext* self, int version);
int QMessageLogContext_Line(const QMessageLogContext* self);
void QMessageLogContext_SetLine(QMessageLogContext* self, int line);
const char* QMessageLogContext_File(const QMessageLogContext* self);
void QMessageLogContext_SetFile(QMessageLogContext* self, const char* file);
const char* QMessageLogContext_Function(const QMessageLogContext* self);
void QMessageLogContext_SetFunction(QMessageLogContext* self, const char* function);
const char* QMessageLogContext_Category(const QMessageLogContext* self);
void QMessageLogContext_SetCategory(QMessageLogContext* self, const char* category);
void QMessageLogContext_Delete(QMessageLogContext* self);

QMessageLogger* QMessageLogger_new();
QMessageLogger* QMessageLogger_new2(const char* file, int line, const char* function);
QMessageLogger* QMessageLogger_new3(const char* file, int line, const char* function, const char* category);
void QMessageLogger_Debug(const QMessageLogger* self, const char* msg, ... );
void QMessageLogger_NoDebug(const QMessageLogger* self, const char* param1, ... );
void QMessageLogger_Info(const QMessageLogger* self, const char* msg, ... );
void QMessageLogger_Warning(const QMessageLogger* self, const char* msg, ... );
void QMessageLogger_Critical(const QMessageLogger* self, const char* msg, ... );
void QMessageLogger_Fatal(const QMessageLogger* self, const char* msg, ... );
void QMessageLogger_Debug2(const QMessageLogger* self, const QLoggingCategory* cat, const char* msg, ... );
void QMessageLogger_Info2(const QMessageLogger* self, const QLoggingCategory* cat, const char* msg, ... );
void QMessageLogger_Warning2(const QMessageLogger* self, const QLoggingCategory* cat, const char* msg, ... );
void QMessageLogger_Critical2(const QMessageLogger* self, const QLoggingCategory* cat, const char* msg, ... );
void QMessageLogger_Fatal2(const QMessageLogger* self, const QLoggingCategory* cat, const char* msg, ... );
QDebug* QMessageLogger_Debug4(const QMessageLogger* self);
QDebug* QMessageLogger_Debug5(const QMessageLogger* self, const QLoggingCategory* cat);
QDebug* QMessageLogger_Info4(const QMessageLogger* self);
QDebug* QMessageLogger_Info5(const QMessageLogger* self, const QLoggingCategory* cat);
QDebug* QMessageLogger_Warning4(const QMessageLogger* self);
QDebug* QMessageLogger_Warning5(const QMessageLogger* self, const QLoggingCategory* cat);
QDebug* QMessageLogger_Critical4(const QMessageLogger* self);
QDebug* QMessageLogger_Critical5(const QMessageLogger* self, const QLoggingCategory* cat);
QDebug* QMessageLogger_Fatal4(const QMessageLogger* self);
QDebug* QMessageLogger_Fatal5(const QMessageLogger* self, const QLoggingCategory* cat);
QNoDebug* QMessageLogger_NoDebug2(const QMessageLogger* self);
void QMessageLogger_Delete(QMessageLogger* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
