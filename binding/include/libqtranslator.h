#pragma once
#ifndef QTRANSLATOR_H_C_LIB
#define QTRANSLATOR_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLocale QLocale;
typedef struct QObject QObject;
typedef struct QTranslator QTranslator;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTranslator* QTranslator_new();
QTranslator* QTranslator_new2(QObject* parent);
libqt_string QTranslator_Tr(const char* s);
libqt_string QTranslator_Translate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n);
bool QTranslator_IsEmpty(const QTranslator* self);
libqt_string QTranslator_Language(const QTranslator* self);
libqt_string QTranslator_FilePath(const QTranslator* self);
bool QTranslator_Load(QTranslator* self, const libqt_string filename);
bool QTranslator_Load2(QTranslator* self, const QLocale* locale, const libqt_string filename);
bool QTranslator_Load3(QTranslator* self, const unsigned char* data, int lenVal);
libqt_string QTranslator_Tr2(const char* s, const char* c);
libqt_string QTranslator_Tr3(const char* s, const char* c, int n);
bool QTranslator_Load22(QTranslator* self, const libqt_string filename, const libqt_string directory);
bool QTranslator_Load32(QTranslator* self, const libqt_string filename, const libqt_string directory, const libqt_string search_delimiters);
bool QTranslator_Load4(QTranslator* self, const libqt_string filename, const libqt_string directory, const libqt_string search_delimiters, const libqt_string suffix);
bool QTranslator_Load33(QTranslator* self, const QLocale* locale, const libqt_string filename, const libqt_string prefix);
bool QTranslator_Load42(QTranslator* self, const QLocale* locale, const libqt_string filename, const libqt_string prefix, const libqt_string directory);
bool QTranslator_Load5(QTranslator* self, const QLocale* locale, const libqt_string filename, const libqt_string prefix, const libqt_string directory, const libqt_string suffix);
bool QTranslator_Load34(QTranslator* self, const unsigned char* data, int lenVal, const libqt_string directory);
void QTranslator_OnTranslate(const QTranslator* self, intptr_t slot);
libqt_string QTranslator_QBaseTranslate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n);
void QTranslator_OnIsEmpty(const QTranslator* self, intptr_t slot);
bool QTranslator_QBaseIsEmpty(const QTranslator* self);
void QTranslator_Delete(QTranslator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
