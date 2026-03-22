#pragma once
#ifndef QPROCESS_H_C_LIB
#define QPROCESS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QProcess__CreateProcessArguments)
typedef QProcess::CreateProcessArguments QProcess__CreateProcessArguments;
#endif
#else
typedef struct QIODevice QIODevice;
typedef struct QObject QObject;
typedef struct QProcess QProcess;
typedef struct QProcess__CreateProcessArguments QProcess__CreateProcessArguments;
typedef struct QProcessEnvironment QProcessEnvironment;
typedef struct QStringView QStringView;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QProcessEnvironment* QProcessEnvironment_new();
QProcessEnvironment* QProcessEnvironment_new2(int param1);
QProcessEnvironment* QProcessEnvironment_new3(const QProcessEnvironment* other);
void QProcessEnvironment_OperatorAssign(QProcessEnvironment* self, const QProcessEnvironment* other);
void QProcessEnvironment_Swap(QProcessEnvironment* self, QProcessEnvironment* other);
bool QProcessEnvironment_IsEmpty(const QProcessEnvironment* self);
bool QProcessEnvironment_InheritsFromParent(const QProcessEnvironment* self);
void QProcessEnvironment_Clear(QProcessEnvironment* self);
bool QProcessEnvironment_Contains(const QProcessEnvironment* self, const libqt_string name);
void QProcessEnvironment_Insert(QProcessEnvironment* self, const libqt_string name, const libqt_string value);
void QProcessEnvironment_Remove(QProcessEnvironment* self, const libqt_string name);
libqt_string QProcessEnvironment_Value(const QProcessEnvironment* self, const libqt_string name);
libqt_list QProcessEnvironment_ToStringList(const QProcessEnvironment* self);
libqt_list QProcessEnvironment_Keys(const QProcessEnvironment* self);
void QProcessEnvironment_Insert2(QProcessEnvironment* self, const QProcessEnvironment* e);
QProcessEnvironment* QProcessEnvironment_SystemEnvironment();
libqt_string QProcessEnvironment_Value2(const QProcessEnvironment* self, const libqt_string name, const libqt_string defaultValue);
void QProcessEnvironment_Delete(QProcessEnvironment* self);

QProcess* QProcess_new();
QProcess* QProcess_new2(QObject* parent);
libqt_string QProcess_Tr(const char* s);
void QProcess_Start(QProcess* self, const libqt_string program);
void QProcess_Start2(QProcess* self);
void QProcess_StartCommand(QProcess* self, const libqt_string command);
bool QProcess_StartDetached(QProcess* self);
bool QProcess_Open(QProcess* self, int mode);
libqt_string QProcess_Program(const QProcess* self);
void QProcess_SetProgram(QProcess* self, const libqt_string program);
libqt_list QProcess_Arguments(const QProcess* self);
void QProcess_SetArguments(QProcess* self, const libqt_list arguments);
int QProcess_ProcessChannelMode(const QProcess* self);
void QProcess_SetProcessChannelMode(QProcess* self, int mode);
int QProcess_InputChannelMode(const QProcess* self);
void QProcess_SetInputChannelMode(QProcess* self, int mode);
int QProcess_ReadChannel(const QProcess* self);
void QProcess_SetReadChannel(QProcess* self, int channel);
void QProcess_CloseReadChannel(QProcess* self, int channel);
void QProcess_CloseWriteChannel(QProcess* self);
void QProcess_SetStandardInputFile(QProcess* self, const libqt_string fileName);
void QProcess_SetStandardOutputFile(QProcess* self, const libqt_string fileName);
void QProcess_SetStandardErrorFile(QProcess* self, const libqt_string fileName);
void QProcess_SetStandardOutputProcess(QProcess* self, QProcess* destination);
libqt_string QProcess_NativeArguments(const QProcess* self);
void QProcess_SetNativeArguments(QProcess* self, const libqt_string arguments);
libqt_string QProcess_WorkingDirectory(const QProcess* self);
void QProcess_SetWorkingDirectory(QProcess* self, const libqt_string dir);
void QProcess_SetEnvironment(QProcess* self, const libqt_list environment);
libqt_list QProcess_Environment(const QProcess* self);
void QProcess_SetProcessEnvironment(QProcess* self, const QProcessEnvironment* environment);
QProcessEnvironment* QProcess_ProcessEnvironment(const QProcess* self);
int QProcess_Error(const QProcess* self);
int QProcess_State(const QProcess* self);
long long QProcess_ProcessId(const QProcess* self);
bool QProcess_WaitForStarted(QProcess* self);
bool QProcess_WaitForReadyRead(QProcess* self, int msecs);
bool QProcess_WaitForBytesWritten(QProcess* self, int msecs);
bool QProcess_WaitForFinished(QProcess* self);
libqt_string QProcess_ReadAllStandardOutput(QProcess* self);
libqt_string QProcess_ReadAllStandardError(QProcess* self);
int QProcess_ExitCode(const QProcess* self);
int QProcess_ExitStatus(const QProcess* self);
long long QProcess_BytesToWrite(const QProcess* self);
bool QProcess_IsSequential(const QProcess* self);
void QProcess_Close(QProcess* self);
int QProcess_Execute(const libqt_string program);
bool QProcess_StartDetached2(const libqt_string program);
libqt_list QProcess_SystemEnvironment();
libqt_string QProcess_NullDevice();
libqt_list QProcess_SplitCommand(QStringView* command);
void QProcess_Terminate(QProcess* self);
void QProcess_Kill(QProcess* self);
void QProcess_Finished(QProcess* self, int exitCode);
void QProcess_Connect_Finished(QProcess* self, intptr_t slot);
void QProcess_ErrorOccurred(QProcess* self, int errorVal);
void QProcess_Connect_ErrorOccurred(QProcess* self, intptr_t slot);
long long QProcess_ReadData(QProcess* self, char* data, long long maxlen);
long long QProcess_WriteData(QProcess* self, const char* data, long long lenVal);
libqt_string QProcess_Tr2(const char* s, const char* c);
libqt_string QProcess_Tr3(const char* s, const char* c, int n);
void QProcess_Start22(QProcess* self, const libqt_string program, const libqt_list arguments);
void QProcess_Start3(QProcess* self, const libqt_string program, const libqt_list arguments, int mode);
void QProcess_Start1(QProcess* self, int mode);
void QProcess_StartCommand2(QProcess* self, const libqt_string command, int mode);
bool QProcess_StartDetached1(QProcess* self, long long* pid);
void QProcess_SetStandardOutputFile2(QProcess* self, const libqt_string fileName, int mode);
void QProcess_SetStandardErrorFile2(QProcess* self, const libqt_string fileName, int mode);
bool QProcess_WaitForStarted1(QProcess* self, int msecs);
bool QProcess_WaitForFinished1(QProcess* self, int msecs);
int QProcess_Execute2(const libqt_string program, const libqt_list arguments);
bool QProcess_StartDetached22(const libqt_string program, const libqt_list arguments);
bool QProcess_StartDetached3(const libqt_string program, const libqt_list arguments, const libqt_string workingDirectory);
bool QProcess_StartDetached4(const libqt_string program, const libqt_list arguments, const libqt_string workingDirectory, long long* pid);
void QProcess_Finished2(QProcess* self, int exitCode, int exitStatus);
void QProcess_Connect_Finished2(QProcess* self, intptr_t slot);
void QProcess_OnOpen(QProcess* self, intptr_t slot);
bool QProcess_QBaseOpen(QProcess* self, int mode);
void QProcess_OnWaitForReadyRead(QProcess* self, intptr_t slot);
bool QProcess_QBaseWaitForReadyRead(QProcess* self, int msecs);
void QProcess_OnWaitForBytesWritten(QProcess* self, intptr_t slot);
bool QProcess_QBaseWaitForBytesWritten(QProcess* self, int msecs);
void QProcess_OnBytesToWrite(const QProcess* self, intptr_t slot);
long long QProcess_QBaseBytesToWrite(const QProcess* self);
void QProcess_OnIsSequential(const QProcess* self, intptr_t slot);
bool QProcess_QBaseIsSequential(const QProcess* self);
void QProcess_OnClose(QProcess* self, intptr_t slot);
void QProcess_QBaseClose(QProcess* self);
void QProcess_OnReadData(QProcess* self, intptr_t slot);
long long QProcess_QBaseReadData(QProcess* self, char* data, long long maxlen);
void QProcess_OnWriteData(QProcess* self, intptr_t slot);
long long QProcess_QBaseWriteData(QProcess* self, const char* data, long long lenVal);
void QProcess_SetProcessState(QProcess* self, int state);
void QProcess_OnSetProcessState(QProcess* self, intptr_t slot);
void QProcess_QBaseSetProcessState(QProcess* self, int state);
void QProcess_Connect_started(QProcess* self, intptr_t slot);
void QProcess_Connect_stateChanged(QProcess* self, intptr_t slot);
void QProcess_Connect_readyReadStandardOutput(QProcess* self, intptr_t slot);
void QProcess_Connect_readyReadStandardError(QProcess* self, intptr_t slot);
void QProcess_Delete(QProcess* self);

_SECURITY_ATTRIBUTES* QProcess__CreateProcessArguments_ProcessAttributes(const QProcess__CreateProcessArguments* self);
void QProcess__CreateProcessArguments_SetProcessAttributes(QProcess__CreateProcessArguments* self, _SECURITY_ATTRIBUTES* processAttributes);
_SECURITY_ATTRIBUTES* QProcess__CreateProcessArguments_ThreadAttributes(const QProcess__CreateProcessArguments* self);
void QProcess__CreateProcessArguments_SetThreadAttributes(QProcess__CreateProcessArguments* self, _SECURITY_ATTRIBUTES* threadAttributes);
bool QProcess__CreateProcessArguments_InheritHandles(const QProcess__CreateProcessArguments* self);
void QProcess__CreateProcessArguments_SetInheritHandles(QProcess__CreateProcessArguments* self, bool inheritHandles);
unsigned long QProcess__CreateProcessArguments_Flags(const QProcess__CreateProcessArguments* self);
void QProcess__CreateProcessArguments_SetFlags(QProcess__CreateProcessArguments* self, unsigned long flags);
_STARTUPINFOW* QProcess__CreateProcessArguments_StartupInfo(const QProcess__CreateProcessArguments* self);
void QProcess__CreateProcessArguments_SetStartupInfo(QProcess__CreateProcessArguments* self, _STARTUPINFOW* startupInfo);
_PROCESS_INFORMATION* QProcess__CreateProcessArguments_ProcessInformation(const QProcess__CreateProcessArguments* self);
void QProcess__CreateProcessArguments_SetProcessInformation(QProcess__CreateProcessArguments* self, _PROCESS_INFORMATION* processInformation);
void QProcess__CreateProcessArguments_Delete(QProcess__CreateProcessArguments* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
