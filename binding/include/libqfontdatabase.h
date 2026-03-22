#pragma once
#ifndef QFONTDATABASE_H_C_LIB
#define QFONTDATABASE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFont QFont;
typedef struct QFontDatabase QFontDatabase;
typedef struct QFontInfo QFontInfo;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QFontDatabase* QFontDatabase_new(const QFontDatabase* other);
QFontDatabase* QFontDatabase_new2(QFontDatabase* other);
QFontDatabase* QFontDatabase_new3();
QFontDatabase* QFontDatabase_new4(const QFontDatabase* param1);
void QFontDatabase_CopyAssign(QFontDatabase* self, QFontDatabase* other);
void QFontDatabase_MoveAssign(QFontDatabase* self, QFontDatabase* other);
libqt_list QFontDatabase_StandardSizes();
libqt_list QFontDatabase_WritingSystems();
libqt_list QFontDatabase_WritingSystems2(const libqt_string family);
libqt_list QFontDatabase_Families();
libqt_list QFontDatabase_Styles(const libqt_string family);
libqt_list QFontDatabase_PointSizes(const libqt_string family);
libqt_list QFontDatabase_SmoothSizes(const libqt_string family, const libqt_string style);
libqt_string QFontDatabase_StyleString(const QFont* font);
libqt_string QFontDatabase_StyleString2(const QFontInfo* fontInfo);
QFont* QFontDatabase_Font(const libqt_string family, const libqt_string style, int pointSize);
bool QFontDatabase_IsBitmapScalable(const libqt_string family);
bool QFontDatabase_IsSmoothlyScalable(const libqt_string family);
bool QFontDatabase_IsScalable(const libqt_string family);
bool QFontDatabase_IsFixedPitch(const libqt_string family);
bool QFontDatabase_Italic(const libqt_string family, const libqt_string style);
bool QFontDatabase_Bold(const libqt_string family, const libqt_string style);
int QFontDatabase_Weight(const libqt_string family, const libqt_string style);
bool QFontDatabase_HasFamily(const libqt_string family);
bool QFontDatabase_IsPrivateFamily(const libqt_string family);
libqt_string QFontDatabase_WritingSystemName(int writingSystem);
libqt_string QFontDatabase_WritingSystemSample(int writingSystem);
int QFontDatabase_AddApplicationFont(const libqt_string fileName);
int QFontDatabase_AddApplicationFontFromData(const libqt_string fontData);
libqt_list QFontDatabase_ApplicationFontFamilies(int id);
bool QFontDatabase_RemoveApplicationFont(int id);
bool QFontDatabase_RemoveAllApplicationFonts();
void QFontDatabase_AddApplicationFallbackFontFamily(int script, const libqt_string familyName);
bool QFontDatabase_RemoveApplicationFallbackFontFamily(int script, const libqt_string familyName);
void QFontDatabase_SetApplicationFallbackFontFamilies(int param1, const libqt_list familyNames);
libqt_list QFontDatabase_ApplicationFallbackFontFamilies(int script);
QFont* QFontDatabase_SystemFont(int typeVal);
void QFontDatabase_OperatorAssign(QFontDatabase* self, const QFontDatabase* param1);
libqt_list QFontDatabase_Families1(int writingSystem);
libqt_list QFontDatabase_PointSizes2(const libqt_string family, const libqt_string style);
bool QFontDatabase_IsBitmapScalable2(const libqt_string family, const libqt_string style);
bool QFontDatabase_IsSmoothlyScalable2(const libqt_string family, const libqt_string style);
bool QFontDatabase_IsScalable2(const libqt_string family, const libqt_string style);
bool QFontDatabase_IsFixedPitch2(const libqt_string family, const libqt_string style);
void QFontDatabase_Delete(QFontDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
