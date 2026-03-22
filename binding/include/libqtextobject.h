#pragma once
#ifndef QTEXTOBJECT_H_C_LIB
#define QTEXTOBJECT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextBlock__iterator)
typedef QTextBlock::iterator QTextBlock__iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextFrame__iterator)
typedef QTextFrame::iterator QTextFrame__iterator;
#endif
#else
typedef struct QObject QObject;
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlock__iterator QTextBlock__iterator;
typedef struct QTextBlockFormat QTextBlockFormat;
typedef struct QTextBlockGroup QTextBlockGroup;
typedef struct QTextBlockUserData QTextBlockUserData;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFragment QTextFragment;
typedef struct QTextFrame QTextFrame;
typedef struct QTextFrame__iterator QTextFrame__iterator;
typedef struct QTextFrameFormat QTextFrameFormat;
typedef struct QTextFrameLayoutData QTextFrameLayoutData;
typedef struct QTextLayout QTextLayout;
typedef struct QTextList QTextList;
typedef struct QTextObject QTextObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif





libqt_string QTextObject_Tr(const char* s);
QTextFormat* QTextObject_Format(const QTextObject* self);
int QTextObject_FormatIndex(const QTextObject* self);
QTextDocument* QTextObject_Document(const QTextObject* self);
int QTextObject_ObjectIndex(const QTextObject* self);
libqt_string QTextObject_Tr2(const char* s, const char* c);
libqt_string QTextObject_Tr3(const char* s, const char* c, int n);

libqt_string QTextBlockGroup_Tr(const char* s);
void QTextBlockGroup_BlockInserted(QTextBlockGroup* self, const QTextBlock* block);
void QTextBlockGroup_BlockRemoved(QTextBlockGroup* self, const QTextBlock* block);
void QTextBlockGroup_BlockFormatChanged(QTextBlockGroup* self, const QTextBlock* block);
libqt_string QTextBlockGroup_Tr2(const char* s, const char* c);
libqt_string QTextBlockGroup_Tr3(const char* s, const char* c, int n);
void QTextBlockGroup_OnBlockInserted(QTextBlockGroup* self, intptr_t slot);
void QTextBlockGroup_QBaseBlockInserted(QTextBlockGroup* self, const QTextBlock* block);
void QTextBlockGroup_OnBlockRemoved(QTextBlockGroup* self, intptr_t slot);
void QTextBlockGroup_QBaseBlockRemoved(QTextBlockGroup* self, const QTextBlock* block);
void QTextBlockGroup_OnBlockFormatChanged(QTextBlockGroup* self, intptr_t slot);
void QTextBlockGroup_QBaseBlockFormatChanged(QTextBlockGroup* self, const QTextBlock* block);
libqt_list QTextBlockGroup_BlockList(const QTextBlockGroup* self);
void QTextBlockGroup_OnBlockList(const QTextBlockGroup* self, intptr_t slot);
libqt_list QTextBlockGroup_QBaseBlockList(const QTextBlockGroup* self);

QTextFrameLayoutData* QTextFrameLayoutData_new();
QTextFrameLayoutData* QTextFrameLayoutData_new2(const QTextFrameLayoutData* param1);
void QTextFrameLayoutData_OperatorAssign(QTextFrameLayoutData* self, const QTextFrameLayoutData* param1);
void QTextFrameLayoutData_Delete(QTextFrameLayoutData* self);

QTextFrame* QTextFrame_new(QTextDocument* doc);
libqt_string QTextFrame_Tr(const char* s);
void QTextFrame_SetFrameFormat(QTextFrame* self, const QTextFrameFormat* format);
QTextFrameFormat* QTextFrame_FrameFormat(const QTextFrame* self);
QTextCursor* QTextFrame_FirstCursorPosition(const QTextFrame* self);
QTextCursor* QTextFrame_LastCursorPosition(const QTextFrame* self);
int QTextFrame_FirstPosition(const QTextFrame* self);
int QTextFrame_LastPosition(const QTextFrame* self);
QTextFrameLayoutData* QTextFrame_LayoutData(const QTextFrame* self);
void QTextFrame_SetLayoutData(QTextFrame* self, QTextFrameLayoutData* data);
libqt_list QTextFrame_ChildFrames(const QTextFrame* self);
QTextFrame* QTextFrame_ParentFrame(const QTextFrame* self);
It::value_type* QTextFrame_Begin(const QTextFrame* self);
It::value_type* QTextFrame_End(const QTextFrame* self);
libqt_string QTextFrame_Tr2(const char* s, const char* c);
libqt_string QTextFrame_Tr3(const char* s, const char* c, int n);
void QTextFrame_Delete(QTextFrame* self);

QTextBlockUserData* QTextBlockUserData_new();
QTextBlockUserData* QTextBlockUserData_new2(const QTextBlockUserData* param1);
void QTextBlockUserData_OperatorAssign(QTextBlockUserData* self, const QTextBlockUserData* param1);
void QTextBlockUserData_Delete(QTextBlockUserData* self);

QTextBlock* QTextBlock_new(QTextDocumentPrivate* priv, int b);
QTextBlock* QTextBlock_new2();
QTextBlock* QTextBlock_new3(const QTextBlock* o);
void QTextBlock_OperatorAssign(QTextBlock* self, const QTextBlock* o);
bool QTextBlock_IsValid(const QTextBlock* self);
bool QTextBlock_OperatorEqual(const QTextBlock* self, const QTextBlock* o);
bool QTextBlock_OperatorNotEqual(const QTextBlock* self, const QTextBlock* o);
bool QTextBlock_OperatorLesser(const QTextBlock* self, const QTextBlock* o);
int QTextBlock_Position(const QTextBlock* self);
int QTextBlock_Length(const QTextBlock* self);
bool QTextBlock_Contains(const QTextBlock* self, int position);
QTextLayout* QTextBlock_Layout(const QTextBlock* self);
void QTextBlock_ClearLayout(QTextBlock* self);
QTextBlockFormat* QTextBlock_BlockFormat(const QTextBlock* self);
int QTextBlock_BlockFormatIndex(const QTextBlock* self);
QTextCharFormat* QTextBlock_CharFormat(const QTextBlock* self);
int QTextBlock_CharFormatIndex(const QTextBlock* self);
int QTextBlock_TextDirection(const QTextBlock* self);
libqt_string QTextBlock_Text(const QTextBlock* self);
libqt_list QTextBlock_TextFormats(const QTextBlock* self);
const QTextDocument* QTextBlock_Document(const QTextBlock* self);
QTextList* QTextBlock_TextList(const QTextBlock* self);
QTextBlockUserData* QTextBlock_UserData(const QTextBlock* self);
void QTextBlock_SetUserData(QTextBlock* self, QTextBlockUserData* data);
int QTextBlock_UserState(const QTextBlock* self);
void QTextBlock_SetUserState(QTextBlock* self, int state);
int QTextBlock_Revision(const QTextBlock* self);
void QTextBlock_SetRevision(QTextBlock* self, int rev);
bool QTextBlock_IsVisible(const QTextBlock* self);
void QTextBlock_SetVisible(QTextBlock* self, bool visible);
int QTextBlock_BlockNumber(const QTextBlock* self);
int QTextBlock_FirstLineNumber(const QTextBlock* self);
void QTextBlock_SetLineCount(QTextBlock* self, int count);
int QTextBlock_LineCount(const QTextBlock* self);
It::value_type* QTextBlock_Begin(const QTextBlock* self);
It::value_type* QTextBlock_End(const QTextBlock* self);
QTextBlock* QTextBlock_Next(const QTextBlock* self);
QTextBlock* QTextBlock_Previous(const QTextBlock* self);
int QTextBlock_FragmentIndex(const QTextBlock* self);
void QTextBlock_Delete(QTextBlock* self);

QTextFragment* QTextFragment_new(const QTextDocumentPrivate* priv, int f, int fe);
QTextFragment* QTextFragment_new2();
QTextFragment* QTextFragment_new3(const QTextFragment* o);
void QTextFragment_OperatorAssign(QTextFragment* self, const QTextFragment* o);
bool QTextFragment_IsValid(const QTextFragment* self);
bool QTextFragment_OperatorEqual(const QTextFragment* self, const QTextFragment* o);
bool QTextFragment_OperatorNotEqual(const QTextFragment* self, const QTextFragment* o);
bool QTextFragment_OperatorLesser(const QTextFragment* self, const QTextFragment* o);
int QTextFragment_Position(const QTextFragment* self);
int QTextFragment_Length(const QTextFragment* self);
bool QTextFragment_Contains(const QTextFragment* self, int position);
QTextCharFormat* QTextFragment_CharFormat(const QTextFragment* self);
int QTextFragment_CharFormatIndex(const QTextFragment* self);
libqt_string QTextFragment_Text(const QTextFragment* self);
libqt_list QTextFragment_GlyphRuns(const QTextFragment* self);
libqt_list QTextFragment_GlyphRuns1(const QTextFragment* self, int from);
libqt_list QTextFragment_GlyphRuns2(const QTextFragment* self, int from, int length);
void QTextFragment_Delete(QTextFragment* self);

QTextFrame__iterator* QTextFrame__iterator_new(const QTextFrame__iterator* other);
QTextFrame__iterator* QTextFrame__iterator_new2(QTextFrame__iterator* other);
QTextFrame__iterator* QTextFrame__iterator_new3();
QTextFrame__iterator* QTextFrame__iterator_new4(const QTextFrame__iterator* param1);
void QTextFrame__iterator_CopyAssign(QTextFrame__iterator* self, QTextFrame__iterator* other);
void QTextFrame__iterator_MoveAssign(QTextFrame__iterator* self, QTextFrame__iterator* other);
QTextFrame* QTextFrame__iterator_ParentFrame(const QTextFrame__iterator* self);
QTextFrame* QTextFrame__iterator_CurrentFrame(const QTextFrame__iterator* self);
QTextBlock* QTextFrame__iterator_CurrentBlock(const QTextFrame__iterator* self);
bool QTextFrame__iterator_AtEnd(const QTextFrame__iterator* self);
bool QTextFrame__iterator_OperatorEqual(const QTextFrame__iterator* self, const QTextFrame__iterator* o);
bool QTextFrame__iterator_OperatorNotEqual(const QTextFrame__iterator* self, const QTextFrame__iterator* o);
It::value_type* QTextFrame__iterator_OperatorPlusPlus(QTextFrame__iterator* self);
It::value_type* QTextFrame__iterator_OperatorPlusPlus2(QTextFrame__iterator* self, int param1);
It::value_type* QTextFrame__iterator_OperatorMinusMinus(QTextFrame__iterator* self);
It::value_type* QTextFrame__iterator_OperatorMinusMinus2(QTextFrame__iterator* self, int param1);
void QTextFrame__iterator_Delete(QTextFrame__iterator* self);

QTextBlock__iterator* QTextBlock__iterator_new(const QTextBlock__iterator* other);
QTextBlock__iterator* QTextBlock__iterator_new2(QTextBlock__iterator* other);
QTextBlock__iterator* QTextBlock__iterator_new3();
QTextBlock__iterator* QTextBlock__iterator_new4(const QTextBlock__iterator* param1);
void QTextBlock__iterator_CopyAssign(QTextBlock__iterator* self, QTextBlock__iterator* other);
void QTextBlock__iterator_MoveAssign(QTextBlock__iterator* self, QTextBlock__iterator* other);
QTextFragment* QTextBlock__iterator_Fragment(const QTextBlock__iterator* self);
bool QTextBlock__iterator_AtEnd(const QTextBlock__iterator* self);
bool QTextBlock__iterator_OperatorEqual(const QTextBlock__iterator* self, const QTextBlock__iterator* o);
bool QTextBlock__iterator_OperatorNotEqual(const QTextBlock__iterator* self, const QTextBlock__iterator* o);
It::value_type* QTextBlock__iterator_OperatorPlusPlus(QTextBlock__iterator* self);
It::value_type* QTextBlock__iterator_OperatorPlusPlus2(QTextBlock__iterator* self, int param1);
It::value_type* QTextBlock__iterator_OperatorMinusMinus(QTextBlock__iterator* self);
It::value_type* QTextBlock__iterator_OperatorMinusMinus2(QTextBlock__iterator* self, int param1);
void QTextBlock__iterator_Delete(QTextBlock__iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
