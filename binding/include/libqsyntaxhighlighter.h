#pragma once
#ifndef QSYNTAXHIGHLIGHTER_H_C_LIB
#define QSYNTAXHIGHLIGHTER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QObject QObject;
typedef struct QSyntaxHighlighter QSyntaxHighlighter;
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlockUserData QTextBlockUserData;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextDocument QTextDocument;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif








QSyntaxHighlighter* QSyntaxHighlighter_new(QObject* parent);
QSyntaxHighlighter* QSyntaxHighlighter_new2(QTextDocument* parent);
libqt_string QSyntaxHighlighter_Tr(const char* s);
void QSyntaxHighlighter_SetDocument(QSyntaxHighlighter* self, QTextDocument* doc);
QTextDocument* QSyntaxHighlighter_Document(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_Rehighlight(QSyntaxHighlighter* self);
void QSyntaxHighlighter_RehighlightBlock(QSyntaxHighlighter* self, const QTextBlock* block);
void QSyntaxHighlighter_HighlightBlock(QSyntaxHighlighter* self, const libqt_string text);
libqt_string QSyntaxHighlighter_Tr2(const char* s, const char* c);
libqt_string QSyntaxHighlighter_Tr3(const char* s, const char* c, int n);
void QSyntaxHighlighter_OnHighlightBlock(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseHighlightBlock(QSyntaxHighlighter* self, const libqt_string text);
void QSyntaxHighlighter_SetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format);
void QSyntaxHighlighter_OnSetFormat(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseSetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format);
void QSyntaxHighlighter_SetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color);
void QSyntaxHighlighter_OnSetFormat2(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseSetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color);
void QSyntaxHighlighter_SetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font);
void QSyntaxHighlighter_OnSetFormat3(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseSetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font);
QTextCharFormat* QSyntaxHighlighter_Format(const QSyntaxHighlighter* self, int pos);
void QSyntaxHighlighter_OnFormat(const QSyntaxHighlighter* self, intptr_t slot);
QTextCharFormat* QSyntaxHighlighter_QBaseFormat(const QSyntaxHighlighter* self, int pos);
int QSyntaxHighlighter_PreviousBlockState(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_OnPreviousBlockState(const QSyntaxHighlighter* self, intptr_t slot);
int QSyntaxHighlighter_QBasePreviousBlockState(const QSyntaxHighlighter* self);
int QSyntaxHighlighter_CurrentBlockState(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_OnCurrentBlockState(const QSyntaxHighlighter* self, intptr_t slot);
int QSyntaxHighlighter_QBaseCurrentBlockState(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_SetCurrentBlockState(QSyntaxHighlighter* self, int newState);
void QSyntaxHighlighter_OnSetCurrentBlockState(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseSetCurrentBlockState(QSyntaxHighlighter* self, int newState);
void QSyntaxHighlighter_SetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data);
void QSyntaxHighlighter_OnSetCurrentBlockUserData(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseSetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data);
QTextBlockUserData* QSyntaxHighlighter_CurrentBlockUserData(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_OnCurrentBlockUserData(const QSyntaxHighlighter* self, intptr_t slot);
QTextBlockUserData* QSyntaxHighlighter_QBaseCurrentBlockUserData(const QSyntaxHighlighter* self);
QTextBlock* QSyntaxHighlighter_CurrentBlock(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_OnCurrentBlock(const QSyntaxHighlighter* self, intptr_t slot);
QTextBlock* QSyntaxHighlighter_QBaseCurrentBlock(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
