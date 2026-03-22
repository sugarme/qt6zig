#pragma once
#ifndef QFONTCOMBOBOX_H_C_LIB
#define QFONTCOMBOBOX_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QComboBox QComboBox;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QFontComboBox QFontComboBox;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QFontComboBox* QFontComboBox_new(QWidget* parent);
QFontComboBox* QFontComboBox_new2();
libqt_string QFontComboBox_Tr(const char* s);
void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem);
int QFontComboBox_WritingSystem(const QFontComboBox* self);
void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters);
int QFontComboBox_FontFilters(const QFontComboBox* self);
QFont* QFontComboBox_CurrentFont(const QFontComboBox* self);
QSize* QFontComboBox_SizeHint(const QFontComboBox* self);
void QFontComboBox_SetSampleTextForSystem(QFontComboBox* self, int writingSystem, const libqt_string sampleText);
libqt_string QFontComboBox_SampleTextForSystem(const QFontComboBox* self, int writingSystem);
void QFontComboBox_SetSampleTextForFont(QFontComboBox* self, const libqt_string fontFamily, const libqt_string sampleText);
libqt_string QFontComboBox_SampleTextForFont(const QFontComboBox* self, const libqt_string fontFamily);
void QFontComboBox_SetDisplayFont(QFontComboBox* self, const libqt_string fontFamily, const QFont* font);
void QFontComboBox_SetCurrentFont(QFontComboBox* self, const QFont* f);
void QFontComboBox_CurrentFontChanged(QFontComboBox* self, const QFont* f);
void QFontComboBox_Connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_Event(QFontComboBox* self, QEvent* e);
libqt_string QFontComboBox_Tr2(const char* s, const char* c);
libqt_string QFontComboBox_Tr3(const char* s, const char* c, int n);
void QFontComboBox_OnSizeHint(const QFontComboBox* self, intptr_t slot);
QSize* QFontComboBox_QBaseSizeHint(const QFontComboBox* self);
void QFontComboBox_OnEvent(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_QBaseEvent(QFontComboBox* self, QEvent* e);
void QFontComboBox_Delete(QFontComboBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
