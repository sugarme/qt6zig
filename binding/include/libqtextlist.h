#pragma once
#ifndef QTEXTLIST_H_C_LIB
#define QTEXTLIST_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlockGroup QTextBlockGroup;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextList QTextList;
typedef struct QTextListFormat QTextListFormat;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QTextList* QTextList_new(QTextDocument* doc);
libqt_string QTextList_Tr(const char* s);
int QTextList_Count(const QTextList* self);
QTextBlock* QTextList_Item(const QTextList* self, int i);
int QTextList_ItemNumber(const QTextList* self, const QTextBlock* param1);
libqt_string QTextList_ItemText(const QTextList* self, const QTextBlock* param1);
void QTextList_RemoveItem(QTextList* self, int i);
void QTextList_Remove(QTextList* self, const QTextBlock* param1);
void QTextList_Add(QTextList* self, const QTextBlock* block);
void QTextList_SetFormat(QTextList* self, const QTextListFormat* format);
QTextListFormat* QTextList_Format(const QTextList* self);
libqt_string QTextList_Tr2(const char* s, const char* c);
libqt_string QTextList_Tr3(const char* s, const char* c, int n);
void QTextList_Delete(QTextList* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
