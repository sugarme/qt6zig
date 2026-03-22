#include <QByteArray>
#include <QIODevice>
#include <QObject>
#include <QProcess>
#define WORKAROUND_INNER_CLASS_DEFINITION_QProcess__CreateProcessArguments
#include <QProcessEnvironment>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qprocess.h>
#include "libqprocess.h"
#include "libqprocess.hxx"

QProcessEnvironment* QProcessEnvironment_new() {
	 return new QProcessEnvironment();
}

QProcessEnvironment* QProcessEnvironment_new2(int param1) {
	 return new QProcessEnvironment(static_cast<QProcessEnvironment::Initialization>(param1));
}

QProcessEnvironment* QProcessEnvironment_new3(const QProcessEnvironment* other) {
	 return new QProcessEnvironment(*other);
}

void QProcessEnvironment_OperatorAssign(QProcessEnvironment* self, const QProcessEnvironment* other) {
	self->operator=(*other);
}

void QProcessEnvironment_Swap(QProcessEnvironment* self, QProcessEnvironment* other) {
	self->swap(*other);
}

bool QProcessEnvironment_IsEmpty(const QProcessEnvironment* self) {
	return self->isEmpty();
}

bool QProcessEnvironment_InheritsFromParent(const QProcessEnvironment* self) {
	return self->inheritsFromParent();
}

void QProcessEnvironment_Clear(QProcessEnvironment* self) {
	self->clear();
}

bool QProcessEnvironment_Contains(const QProcessEnvironment* self, const libqt_string name) {
	return self->contains(QString::fromUtf8(name.data, name.len));
}

void QProcessEnvironment_Insert(QProcessEnvironment* self, const libqt_string name, const libqt_string value) {
	self->insert(QString::fromUtf8(name.data, name.len), QString::fromUtf8(value.data, value.len));
}

void QProcessEnvironment_Remove(QProcessEnvironment* self, const libqt_string name) {
	self->remove(QString::fromUtf8(name.data, name.len));
}

libqt_string QProcessEnvironment_Value(const QProcessEnvironment* self, const libqt_string name) {
	QString _ret = self->value(QString::fromUtf8(name.data, name.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QProcessEnvironment_ToStringList(const QProcessEnvironment* self) {
	auto _ret = self->toStringList();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QProcessEnvironment_Keys(const QProcessEnvironment* self) {
	auto _ret = self->keys();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QProcessEnvironment_Insert2(QProcessEnvironment* self, const QProcessEnvironment* e) {
	self->insert(*e);
}

QProcessEnvironment* QProcessEnvironment_SystemEnvironment() {
	return new QProcessEnvironment(QProcessEnvironment::systemEnvironment());
}

libqt_string QProcessEnvironment_Value2(const QProcessEnvironment* self, const libqt_string name, const libqt_string defaultValue) {
	QString _ret = self->value(QString::fromUtf8(name.data, name.len), QString::fromUtf8(defaultValue.data, defaultValue.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QProcessEnvironment_Delete(QProcessEnvironment* self) {
    delete self;
}

QProcess* QProcess_new() {
	 return new VirtualQProcess();
}

QProcess* QProcess_new2(QObject* parent) {
	 return new VirtualQProcess(parent);
}

libqt_string QProcess_Tr(const char* s) {
	QString _ret = QProcess::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QProcess_Start(QProcess* self, const libqt_string program) {
	self->start(QString::fromUtf8(program.data, program.len));
}

void QProcess_Start2(QProcess* self) {
	self->start();
}

void QProcess_StartCommand(QProcess* self, const libqt_string command) {
	self->startCommand(QString::fromUtf8(command.data, command.len));
}

bool QProcess_StartDetached(QProcess* self) {
	return self->startDetached();
}

bool QProcess_Open(QProcess* self, int mode) {
	return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

libqt_string QProcess_Program(const QProcess* self) {
	QString _ret = self->program();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QProcess_SetProgram(QProcess* self, const libqt_string program) {
	self->setProgram(QString::fromUtf8(program.data, program.len));
}

libqt_list QProcess_Arguments(const QProcess* self) {
	auto _ret = self->arguments();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QProcess_SetArguments(QProcess* self, const libqt_list arguments) {
	self->setArguments(QList<QString>());
}

int QProcess_ProcessChannelMode(const QProcess* self) {
	return self->processChannelMode();
}

void QProcess_SetProcessChannelMode(QProcess* self, int mode) {
	self->setProcessChannelMode(static_cast<QProcess::ProcessChannelMode>(mode));
}

int QProcess_InputChannelMode(const QProcess* self) {
	return self->inputChannelMode();
}

void QProcess_SetInputChannelMode(QProcess* self, int mode) {
	self->setInputChannelMode(static_cast<QProcess::InputChannelMode>(mode));
}

int QProcess_ReadChannel(const QProcess* self) {
	return self->readChannel();
}

void QProcess_SetReadChannel(QProcess* self, int channel) {
	self->setReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_CloseReadChannel(QProcess* self, int channel) {
	self->closeReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_CloseWriteChannel(QProcess* self) {
	self->closeWriteChannel();
}

void QProcess_SetStandardInputFile(QProcess* self, const libqt_string fileName) {
	self->setStandardInputFile(QString::fromUtf8(fileName.data, fileName.len));
}

void QProcess_SetStandardOutputFile(QProcess* self, const libqt_string fileName) {
	self->setStandardOutputFile(QString::fromUtf8(fileName.data, fileName.len));
}

void QProcess_SetStandardErrorFile(QProcess* self, const libqt_string fileName) {
	self->setStandardErrorFile(QString::fromUtf8(fileName.data, fileName.len));
}

void QProcess_SetStandardOutputProcess(QProcess* self, QProcess* destination) {
	self->setStandardOutputProcess(destination);
}

libqt_string QProcess_NativeArguments(const QProcess* self) {
	QString _ret = self->nativeArguments();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QProcess_SetNativeArguments(QProcess* self, const libqt_string arguments) {
	self->setNativeArguments(QString::fromUtf8(arguments.data, arguments.len));
}

libqt_string QProcess_WorkingDirectory(const QProcess* self) {
	QString _ret = self->workingDirectory();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QProcess_SetWorkingDirectory(QProcess* self, const libqt_string dir) {
	self->setWorkingDirectory(QString::fromUtf8(dir.data, dir.len));
}

void QProcess_SetEnvironment(QProcess* self, const libqt_list environment) {
	self->setEnvironment(QList<QString>());
}

libqt_list QProcess_Environment(const QProcess* self) {
	auto _ret = self->environment();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QProcess_SetProcessEnvironment(QProcess* self, const QProcessEnvironment* environment) {
	self->setProcessEnvironment(*environment);
}

QProcessEnvironment* QProcess_ProcessEnvironment(const QProcess* self) {
	return new QProcessEnvironment(self->processEnvironment());
}

int QProcess_Error(const QProcess* self) {
	return self->error();
}

int QProcess_State(const QProcess* self) {
	return self->state();
}

long long QProcess_ProcessId(const QProcess* self) {
	return self->processId();
}

bool QProcess_WaitForStarted(QProcess* self) {
	return self->waitForStarted();
}

bool QProcess_WaitForReadyRead(QProcess* self, int msecs) {
	return self->waitForReadyRead(msecs);
}

bool QProcess_WaitForBytesWritten(QProcess* self, int msecs) {
	return self->waitForBytesWritten(msecs);
}

bool QProcess_WaitForFinished(QProcess* self) {
	return self->waitForFinished();
}

libqt_string QProcess_ReadAllStandardOutput(QProcess* self) {
	QByteArray _qb = self->readAllStandardOutput();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QProcess_ReadAllStandardError(QProcess* self) {
	QByteArray _qb = self->readAllStandardError();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QProcess_ExitCode(const QProcess* self) {
	return self->exitCode();
}

int QProcess_ExitStatus(const QProcess* self) {
	return self->exitStatus();
}

long long QProcess_BytesToWrite(const QProcess* self) {
	return self->bytesToWrite();
}

bool QProcess_IsSequential(const QProcess* self) {
	return self->isSequential();
}

void QProcess_Close(QProcess* self) {
	self->close();
}

int QProcess_Execute(const libqt_string program) {
	return QProcess::execute(QString::fromUtf8(program.data, program.len));
}

bool QProcess_StartDetached2(const libqt_string program) {
	return QProcess::startDetached(QString::fromUtf8(program.data, program.len));
}

libqt_list QProcess_SystemEnvironment() {
	auto _ret = QProcess::systemEnvironment();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_string QProcess_NullDevice() {
	QString _ret = QProcess::nullDevice();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QProcess_Terminate(QProcess* self) {
	self->terminate();
}

void QProcess_Kill(QProcess* self) {
	self->kill();
}

void QProcess_Finished(QProcess* self, int exitCode) {
	self->finished(exitCode);
}

void QProcess_Connect_Finished(QProcess* self, intptr_t slot) {
    void (*slotFunc)(QProcess*, int) = reinterpret_cast<void (*)(QProcess*, int)>(slot);
    QProcess::connect(self, &QProcess::finished, [self, slotFunc](int exitCode) {
	slotFunc(self, exitCode);
    });
}

void QProcess_ErrorOccurred(QProcess* self, int errorVal) {
	self->errorOccurred(static_cast<QProcess::ProcessError>(errorVal));
}

void QProcess_Connect_ErrorOccurred(QProcess* self, intptr_t slot) {
    void (*slotFunc)(QProcess*, int) = reinterpret_cast<void (*)(QProcess*, int)>(slot);
    QProcess::connect(self, &QProcess::errorOccurred, [self, slotFunc](QProcess::ProcessError errorVal) {
	slotFunc(self, errorVal);
    });
}

libqt_string QProcess_Tr2(const char* s, const char* c) {
	QString _ret = QProcess::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QProcess_Tr3(const char* s, const char* c, int n) {
	QString _ret = QProcess::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QProcess_Start22(QProcess* self, const libqt_string program, const libqt_list arguments) {
	self->start(QString::fromUtf8(program.data, program.len), QList<QString>());
}

void QProcess_Start3(QProcess* self, const libqt_string program, const libqt_list arguments, int mode) {
	self->start(QString::fromUtf8(program.data, program.len), QList<QString>(), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

void QProcess_Start1(QProcess* self, int mode) {
	self->start(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

void QProcess_StartCommand2(QProcess* self, const libqt_string command, int mode) {
	self->startCommand(QString::fromUtf8(command.data, command.len), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

bool QProcess_StartDetached1(QProcess* self, long long* pid) {
	return self->startDetached(pid);
}

void QProcess_SetStandardOutputFile2(QProcess* self, const libqt_string fileName, int mode) {
	self->setStandardOutputFile(QString::fromUtf8(fileName.data, fileName.len), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

void QProcess_SetStandardErrorFile2(QProcess* self, const libqt_string fileName, int mode) {
	self->setStandardErrorFile(QString::fromUtf8(fileName.data, fileName.len), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

bool QProcess_WaitForStarted1(QProcess* self, int msecs) {
	return self->waitForStarted(msecs);
}

bool QProcess_WaitForFinished1(QProcess* self, int msecs) {
	return self->waitForFinished(msecs);
}

int QProcess_Execute2(const libqt_string program, const libqt_list arguments) {
	return QProcess::execute(QString::fromUtf8(program.data, program.len), QList<QString>());
}

bool QProcess_StartDetached22(const libqt_string program, const libqt_list arguments) {
	return QProcess::startDetached(QString::fromUtf8(program.data, program.len), QList<QString>());
}

bool QProcess_StartDetached3(const libqt_string program, const libqt_list arguments, const libqt_string workingDirectory) {
	return QProcess::startDetached(QString::fromUtf8(program.data, program.len), QList<QString>(), QString::fromUtf8(workingDirectory.data, workingDirectory.len));
}

bool QProcess_StartDetached4(const libqt_string program, const libqt_list arguments, const libqt_string workingDirectory, long long* pid) {
	return QProcess::startDetached(QString::fromUtf8(program.data, program.len), QList<QString>(), QString::fromUtf8(workingDirectory.data, workingDirectory.len), pid);
}

void QProcess_Finished2(QProcess* self, int exitCode, int exitStatus) {
	self->finished(exitCode, static_cast<QProcess::ExitStatus>(exitStatus));
}

void QProcess_Connect_Finished2(QProcess* self, intptr_t slot) {
    void (*slotFunc)(QProcess*, int, int) = reinterpret_cast<void (*)(QProcess*, int, int)>(slot);
    QProcess::connect(self, &QProcess::finished, [self, slotFunc](int exitCode, QProcess::ExitStatus exitStatus) {
	slotFunc(self, exitCode, exitStatus);
    });
}

// Base class handler implementation
bool QProcess_QBaseOpen(QProcess* self, int mode) {
	auto* vqprocess = dynamic_cast<VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_Open_IsBase(true);
	return vqprocess->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnOpen(QProcess* self, intptr_t slot) {
	auto* vqprocess = dynamic_cast<VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_Open_Callback(reinterpret_cast<VirtualQProcess::QProcess_Open_Callback>(slot));
}
}

// Base class handler implementation
bool QProcess_QBaseWaitForReadyRead(QProcess* self, int msecs) {
	auto* vqprocess = dynamic_cast<VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_WaitForReadyRead_IsBase(true);
	return vqprocess->waitForReadyRead(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnWaitForReadyRead(QProcess* self, intptr_t slot) {
	auto* vqprocess = dynamic_cast<VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_WaitForReadyRead_Callback(reinterpret_cast<VirtualQProcess::QProcess_WaitForReadyRead_Callback>(slot));
}
}

// Base class handler implementation
bool QProcess_QBaseWaitForBytesWritten(QProcess* self, int msecs) {
	auto* vqprocess = dynamic_cast<VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_WaitForBytesWritten_IsBase(true);
	return vqprocess->waitForBytesWritten(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnWaitForBytesWritten(QProcess* self, intptr_t slot) {
	auto* vqprocess = dynamic_cast<VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQProcess::QProcess_WaitForBytesWritten_Callback>(slot));
}
}

// Base class handler implementation
long long QProcess_QBaseBytesToWrite(const QProcess* self) {
	auto* vqprocess = dynamic_cast<const VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_BytesToWrite_IsBase(true);
	return vqprocess->bytesToWrite();
}
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnBytesToWrite(const QProcess* self, intptr_t slot) {
	auto* vqprocess = dynamic_cast<const VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_BytesToWrite_Callback(reinterpret_cast<VirtualQProcess::QProcess_BytesToWrite_Callback>(slot));
}
}

// Base class handler implementation
bool QProcess_QBaseIsSequential(const QProcess* self) {
	auto* vqprocess = dynamic_cast<const VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_IsSequential_IsBase(true);
	return vqprocess->isSequential();
}
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnIsSequential(const QProcess* self, intptr_t slot) {
	auto* vqprocess = dynamic_cast<const VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_IsSequential_Callback(reinterpret_cast<VirtualQProcess::QProcess_IsSequential_Callback>(slot));
}
}

// Base class handler implementation
void QProcess_QBaseClose(QProcess* self) {
	auto* vqprocess = dynamic_cast<VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_Close_IsBase(true);
	vqprocess->close();
}
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnClose(QProcess* self, intptr_t slot) {
	auto* vqprocess = dynamic_cast<VirtualQProcess*>(self);
	if (vqprocess && vqprocess->isVirtualQProcess) {
vqprocess->setQProcess_Close_Callback(reinterpret_cast<VirtualQProcess::QProcess_Close_Callback>(slot));
}
}

void QProcess_Connect_started(QProcess* self, intptr_t slot) {
    void (*slotFunc)(QProcess*) = reinterpret_cast<void (*)(QProcess*)>(slot);
    QProcess::connect(self, &QProcess::started, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QProcess_Connect_stateChanged(QProcess* self, intptr_t slot) {
    void (*slotFunc)(QProcess*, int) = reinterpret_cast<void (*)(QProcess*, int)>(slot);
    QProcess::connect(self, &QProcess::stateChanged, [self, slotFunc](QProcess::ProcessState state) {
	slotFunc(self, state);
    });
}

void QProcess_Connect_readyReadStandardOutput(QProcess* self, intptr_t slot) {
    void (*slotFunc)(QProcess*) = reinterpret_cast<void (*)(QProcess*)>(slot);
    QProcess::connect(self, &QProcess::readyReadStandardOutput, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QProcess_Connect_readyReadStandardError(QProcess* self, intptr_t slot) {
    void (*slotFunc)(QProcess*) = reinterpret_cast<void (*)(QProcess*)>(slot);
    QProcess::connect(self, &QProcess::readyReadStandardError, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QProcess_Delete(QProcess* self) {
    delete self;
}

_SECURITY_ATTRIBUTES* QProcess__CreateProcessArguments_ProcessAttributes(const QProcess__CreateProcessArguments* self) {
	return self->processAttributes;
}

void QProcess__CreateProcessArguments_SetProcessAttributes(QProcess__CreateProcessArguments* self, _SECURITY_ATTRIBUTES* processAttributes) {
	self->processAttributes;
}

_SECURITY_ATTRIBUTES* QProcess__CreateProcessArguments_ThreadAttributes(const QProcess__CreateProcessArguments* self) {
	return self->threadAttributes;
}

void QProcess__CreateProcessArguments_SetThreadAttributes(QProcess__CreateProcessArguments* self, _SECURITY_ATTRIBUTES* threadAttributes) {
	self->threadAttributes;
}

bool QProcess__CreateProcessArguments_InheritHandles(const QProcess__CreateProcessArguments* self) {
	return self->inheritHandles;
}

void QProcess__CreateProcessArguments_SetInheritHandles(QProcess__CreateProcessArguments* self, bool inheritHandles) {
	self->inheritHandles;
}

unsigned long QProcess__CreateProcessArguments_Flags(const QProcess__CreateProcessArguments* self) {
	return self->flags;
}

void QProcess__CreateProcessArguments_SetFlags(QProcess__CreateProcessArguments* self, unsigned long flags) {
	self->flags;
}

_STARTUPINFOW* QProcess__CreateProcessArguments_StartupInfo(const QProcess__CreateProcessArguments* self) {
	return self->startupInfo;
}

void QProcess__CreateProcessArguments_SetStartupInfo(QProcess__CreateProcessArguments* self, _STARTUPINFOW* startupInfo) {
	self->startupInfo;
}

_PROCESS_INFORMATION* QProcess__CreateProcessArguments_ProcessInformation(const QProcess__CreateProcessArguments* self) {
	return self->processInformation;
}

void QProcess__CreateProcessArguments_SetProcessInformation(QProcess__CreateProcessArguments* self, _PROCESS_INFORMATION* processInformation) {
	self->processInformation;
}

void QProcess__CreateProcessArguments_Delete(QProcess__CreateProcessArguments* self) {
    delete self;
}

