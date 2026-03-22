#pragma once
#ifndef QPALETTE_H_C_LIB
#define QPALETTE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPalette QPalette;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPalette* QPalette_new();
QPalette* QPalette_new2(const QColor* button);
QPalette* QPalette_new3(int button);
QPalette* QPalette_new4(const QColor* button, const QColor* window);
QPalette* QPalette_new5(const QBrush* windowText, const QBrush* button, const QBrush* light, const QBrush* dark, const QBrush* mid, const QBrush* text, const QBrush* bright_text, const QBrush* base, const QBrush* window);
QPalette* QPalette_new6(const QColor* windowText, const QColor* window, const QColor* light, const QColor* dark, const QColor* mid, const QColor* text, const QColor* base);
QPalette* QPalette_new7(const QPalette* palette);
void QPalette_OperatorAssign(QPalette* self, const QPalette* palette);
void QPalette_Swap(QPalette* self, QPalette* other);
QVariant* QPalette_OperatorQVariant(const QPalette* self);
int QPalette_CurrentColorGroup(const QPalette* self);
void QPalette_SetCurrentColorGroup(QPalette* self, int cg);
const QColor* QPalette_Color(const QPalette* self, int cg, int cr);
const QBrush* QPalette_Brush(const QPalette* self, int cg, int cr);
void QPalette_SetColor(QPalette* self, int cg, int cr, const QColor* color);
void QPalette_SetColor2(QPalette* self, int cr, const QColor* color);
void QPalette_SetBrush(QPalette* self, int cr, const QBrush* brush);
bool QPalette_IsBrushSet(const QPalette* self, int cg, int cr);
void QPalette_SetBrush2(QPalette* self, int cg, int cr, const QBrush* brush);
void QPalette_SetColorGroup(QPalette* self, int cr, const QBrush* windowText, const QBrush* button, const QBrush* light, const QBrush* dark, const QBrush* mid, const QBrush* text, const QBrush* bright_text, const QBrush* base, const QBrush* window);
bool QPalette_IsEqual(const QPalette* self, int cr1, int cr2);
const QColor* QPalette_Color2(const QPalette* self, int cr);
const QBrush* QPalette_Brush2(const QPalette* self, int cr);
const QBrush* QPalette_WindowText(const QPalette* self);
const QBrush* QPalette_Button(const QPalette* self);
const QBrush* QPalette_Light(const QPalette* self);
const QBrush* QPalette_Dark(const QPalette* self);
const QBrush* QPalette_Mid(const QPalette* self);
const QBrush* QPalette_Text(const QPalette* self);
const QBrush* QPalette_Base(const QPalette* self);
const QBrush* QPalette_AlternateBase(const QPalette* self);
const QBrush* QPalette_ToolTipBase(const QPalette* self);
const QBrush* QPalette_ToolTipText(const QPalette* self);
const QBrush* QPalette_Window(const QPalette* self);
const QBrush* QPalette_Midlight(const QPalette* self);
const QBrush* QPalette_BrightText(const QPalette* self);
const QBrush* QPalette_ButtonText(const QPalette* self);
const QBrush* QPalette_Shadow(const QPalette* self);
const QBrush* QPalette_Highlight(const QPalette* self);
const QBrush* QPalette_HighlightedText(const QPalette* self);
const QBrush* QPalette_Link(const QPalette* self);
const QBrush* QPalette_LinkVisited(const QPalette* self);
const QBrush* QPalette_PlaceholderText(const QPalette* self);
const QBrush* QPalette_Accent(const QPalette* self);
bool QPalette_OperatorEqual(const QPalette* self, const QPalette* p);
bool QPalette_OperatorNotEqual(const QPalette* self, const QPalette* p);
bool QPalette_IsCopyOf(const QPalette* self, const QPalette* p);
long long QPalette_CacheKey(const QPalette* self);
QPalette* QPalette_Resolve(const QPalette* self, const QPalette* other);
unsigned long long QPalette_ResolveMask(const QPalette* self);
void QPalette_SetResolveMask(QPalette* self, unsigned long long mask);
void QPalette_Delete(QPalette* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
