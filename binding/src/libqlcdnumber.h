#pragma once
#ifndef QLCDNUMBER_H_C_LIB
#define QLCDNUMBER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QFrame QFrame;
typedef struct QLCDNumber QLCDNumber;
typedef struct QPaintEvent QPaintEvent;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QLCDNumber* QLCDNumber_new(QWidget* parent);
QLCDNumber* QLCDNumber_new2();
QLCDNumber* QLCDNumber_new3(unsigned int numDigits);
QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent);
libqt_string QLCDNumber_Tr(const char* s);
bool QLCDNumber_SmallDecimalPoint(const QLCDNumber* self);
int QLCDNumber_DigitCount(const QLCDNumber* self);
void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits);
bool QLCDNumber_CheckOverflow(const QLCDNumber* self, double num);
bool QLCDNumber_CheckOverflow2(const QLCDNumber* self, int num);
int QLCDNumber_Mode(const QLCDNumber* self);
void QLCDNumber_SetMode(QLCDNumber* self, int mode);
int QLCDNumber_SegmentStyle(const QLCDNumber* self);
void QLCDNumber_SetSegmentStyle(QLCDNumber* self, int segmentStyle);
double QLCDNumber_Value(const QLCDNumber* self);
int QLCDNumber_IntValue(const QLCDNumber* self);
QSize* QLCDNumber_SizeHint(const QLCDNumber* self);
void QLCDNumber_Display(QLCDNumber* self, const libqt_string str);
void QLCDNumber_Display2(QLCDNumber* self, int num);
void QLCDNumber_Display3(QLCDNumber* self, double num);
void QLCDNumber_SetHexMode(QLCDNumber* self);
void QLCDNumber_SetDecMode(QLCDNumber* self);
void QLCDNumber_SetOctMode(QLCDNumber* self);
void QLCDNumber_SetBinMode(QLCDNumber* self);
void QLCDNumber_SetSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint);
void QLCDNumber_Overflow(QLCDNumber* self);
void QLCDNumber_Connect_Overflow(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_Event(QLCDNumber* self, QEvent* e);
void QLCDNumber_PaintEvent(QLCDNumber* self, QPaintEvent* param1);
libqt_string QLCDNumber_Tr2(const char* s, const char* c);
libqt_string QLCDNumber_Tr3(const char* s, const char* c, int n);
void QLCDNumber_OnSizeHint(const QLCDNumber* self, intptr_t slot);
QSize* QLCDNumber_QBaseSizeHint(const QLCDNumber* self);
void QLCDNumber_OnEvent(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_QBaseEvent(QLCDNumber* self, QEvent* e);
void QLCDNumber_OnPaintEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBasePaintEvent(QLCDNumber* self, QPaintEvent* param1);
void QLCDNumber_Delete(QLCDNumber* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
