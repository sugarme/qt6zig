#include <QByteArray>
#include <QIODevice>
#include <QIODeviceBase>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qiodevice.h>
#include "libqiodevice.h"
#include "libqiodevice.hxx"

QIODevice* QIODevice_new() {
	 return new VirtualQIODevice();
}

QIODevice* QIODevice_new2(QObject* parent) {
	 return new VirtualQIODevice(parent);
}

libqt_string QIODevice_Tr(const char* s) {
	QString _ret = QIODevice::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QIODevice_OpenMode(const QIODevice* self) {
	return self->openMode();
}

void QIODevice_SetTextModeEnabled(QIODevice* self, bool enabled) {
	self->setTextModeEnabled(enabled);
}

bool QIODevice_IsTextModeEnabled(const QIODevice* self) {
	return self->isTextModeEnabled();
}

bool QIODevice_IsOpen(const QIODevice* self) {
	return self->isOpen();
}

bool QIODevice_IsReadable(const QIODevice* self) {
	return self->isReadable();
}

bool QIODevice_IsWritable(const QIODevice* self) {
	return self->isWritable();
}

bool QIODevice_IsSequential(const QIODevice* self) {
	return self->isSequential();
}

int QIODevice_ReadChannelCount(const QIODevice* self) {
	return self->readChannelCount();
}

int QIODevice_WriteChannelCount(const QIODevice* self) {
	return self->writeChannelCount();
}

int QIODevice_CurrentReadChannel(const QIODevice* self) {
	return self->currentReadChannel();
}

void QIODevice_SetCurrentReadChannel(QIODevice* self, int channel) {
	self->setCurrentReadChannel(channel);
}

int QIODevice_CurrentWriteChannel(const QIODevice* self) {
	return self->currentWriteChannel();
}

void QIODevice_SetCurrentWriteChannel(QIODevice* self, int channel) {
	self->setCurrentWriteChannel(channel);
}

bool QIODevice_Open(QIODevice* self, int mode) {
	return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

void QIODevice_Close(QIODevice* self) {
	self->close();
}

long long QIODevice_Pos(const QIODevice* self) {
	return self->pos();
}

long long QIODevice_Size(const QIODevice* self) {
	return self->size();
}

bool QIODevice_Seek(QIODevice* self, long long pos) {
	return self->seek(pos);
}

bool QIODevice_AtEnd(const QIODevice* self) {
	return self->atEnd();
}

bool QIODevice_Reset(QIODevice* self) {
	return self->reset();
}

long long QIODevice_BytesAvailable(const QIODevice* self) {
	return self->bytesAvailable();
}

long long QIODevice_BytesToWrite(const QIODevice* self) {
	return self->bytesToWrite();
}

long long QIODevice_Read(QIODevice* self, char* data, long long maxlen) {
	return self->read(data, maxlen);
}

libqt_string QIODevice_Read2(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->read(maxlen);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QIODevice_ReadAll(QIODevice* self) {
	QByteArray _qb = self->readAll();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

long long QIODevice_ReadLine(QIODevice* self, char* data, long long maxlen) {
	return self->readLine(data, maxlen);
}

libqt_string QIODevice_ReadLine2(QIODevice* self) {
	QByteArray _qb = self->readLine();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QIODevice_CanReadLine(const QIODevice* self) {
	return self->canReadLine();
}

void QIODevice_StartTransaction(QIODevice* self) {
	self->startTransaction();
}

void QIODevice_CommitTransaction(QIODevice* self) {
	self->commitTransaction();
}

void QIODevice_RollbackTransaction(QIODevice* self) {
	self->rollbackTransaction();
}

bool QIODevice_IsTransactionStarted(const QIODevice* self) {
	return self->isTransactionStarted();
}

long long QIODevice_Write(QIODevice* self, const char* data, long long lenVal) {
	return self->write(data, lenVal);
}

long long QIODevice_Write2(QIODevice* self, const char* data) {
	return self->write(data);
}

long long QIODevice_Write3(QIODevice* self, const libqt_string data) {
	return self->write(QByteArray(data.data, data.len));
}

long long QIODevice_Peek(QIODevice* self, char* data, long long maxlen) {
	return self->peek(data, maxlen);
}

libqt_string QIODevice_Peek2(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->peek(maxlen);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

long long QIODevice_Skip(QIODevice* self, long long maxSize) {
	return self->skip(maxSize);
}

bool QIODevice_WaitForReadyRead(QIODevice* self, int msecs) {
	return self->waitForReadyRead(msecs);
}

bool QIODevice_WaitForBytesWritten(QIODevice* self, int msecs) {
	return self->waitForBytesWritten(msecs);
}

void QIODevice_UngetChar(QIODevice* self, char c) {
	self->ungetChar(c);
}

bool QIODevice_PutChar(QIODevice* self, char c) {
	return self->putChar(c);
}

bool QIODevice_GetChar(QIODevice* self, char* c) {
	return self->getChar(c);
}

libqt_string QIODevice_ErrorString(const QIODevice* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QIODevice_ReadyRead(QIODevice* self) {
	self->readyRead();
}

void QIODevice_Connect_ReadyRead(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*) = reinterpret_cast<void (*)(QIODevice*)>(slot);
    QIODevice::connect(self, &QIODevice::readyRead, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QIODevice_ChannelReadyRead(QIODevice* self, int channel) {
	self->channelReadyRead(channel);
}

void QIODevice_Connect_ChannelReadyRead(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*, int) = reinterpret_cast<void (*)(QIODevice*, int)>(slot);
    QIODevice::connect(self, &QIODevice::channelReadyRead, [self, slotFunc](int channel) {
	slotFunc(self, channel);
    });
}

void QIODevice_BytesWritten(QIODevice* self, long long bytes) {
	self->bytesWritten(bytes);
}

void QIODevice_Connect_BytesWritten(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*, long long) = reinterpret_cast<void (*)(QIODevice*, long long)>(slot);
    QIODevice::connect(self, &QIODevice::bytesWritten, [self, slotFunc](qint64 bytes) {
	slotFunc(self, bytes);
    });
}

void QIODevice_ChannelBytesWritten(QIODevice* self, int channel, long long bytes) {
	self->channelBytesWritten(channel, bytes);
}

void QIODevice_Connect_ChannelBytesWritten(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*, int, long long) = reinterpret_cast<void (*)(QIODevice*, int, long long)>(slot);
    QIODevice::connect(self, &QIODevice::channelBytesWritten, [self, slotFunc](int channel, qint64 bytes) {
	slotFunc(self, channel, bytes);
    });
}

void QIODevice_AboutToClose(QIODevice* self) {
	self->aboutToClose();
}

void QIODevice_Connect_AboutToClose(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*) = reinterpret_cast<void (*)(QIODevice*)>(slot);
    QIODevice::connect(self, &QIODevice::aboutToClose, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QIODevice_ReadChannelFinished(QIODevice* self) {
	self->readChannelFinished();
}

void QIODevice_Connect_ReadChannelFinished(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*) = reinterpret_cast<void (*)(QIODevice*)>(slot);
    QIODevice::connect(self, &QIODevice::readChannelFinished, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QIODevice_Tr2(const char* s, const char* c) {
	QString _ret = QIODevice::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QIODevice_Tr3(const char* s, const char* c, int n) {
	QString _ret = QIODevice::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QIODevice_ReadLine1(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->readLine(maxlen);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
bool QIODevice_QBaseIsSequential(const QIODevice* self) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_IsSequential_IsBase(true);
	return vqiodevice->isSequential();
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnIsSequential(const QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_IsSequential_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_IsSequential_Callback>(slot));
}
}

// Base class handler implementation
bool QIODevice_QBaseOpen(QIODevice* self, int mode) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Open_IsBase(true);
	return vqiodevice->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnOpen(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Open_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Open_Callback>(slot));
}
}

// Base class handler implementation
void QIODevice_QBaseClose(QIODevice* self) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Close_IsBase(true);
	vqiodevice->close();
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnClose(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Close_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Close_Callback>(slot));
}
}

// Base class handler implementation
long long QIODevice_QBasePos(const QIODevice* self) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Pos_IsBase(true);
	return vqiodevice->pos();
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnPos(const QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Pos_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Pos_Callback>(slot));
}
}

// Base class handler implementation
long long QIODevice_QBaseSize(const QIODevice* self) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Size_IsBase(true);
	return vqiodevice->size();
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSize(const QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Size_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Size_Callback>(slot));
}
}

// Base class handler implementation
bool QIODevice_QBaseSeek(QIODevice* self, long long pos) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Seek_IsBase(true);
	return vqiodevice->seek(pos);
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSeek(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Seek_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Seek_Callback>(slot));
}
}

// Base class handler implementation
bool QIODevice_QBaseAtEnd(const QIODevice* self) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_AtEnd_IsBase(true);
	return vqiodevice->atEnd();
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnAtEnd(const QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_AtEnd_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_AtEnd_Callback>(slot));
}
}

// Base class handler implementation
bool QIODevice_QBaseReset(QIODevice* self) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Reset_IsBase(true);
	return vqiodevice->reset();
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnReset(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_Reset_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Reset_Callback>(slot));
}
}

// Base class handler implementation
long long QIODevice_QBaseBytesAvailable(const QIODevice* self) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_BytesAvailable_IsBase(true);
	return vqiodevice->bytesAvailable();
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnBytesAvailable(const QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_BytesAvailable_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_BytesAvailable_Callback>(slot));
}
}

// Base class handler implementation
long long QIODevice_QBaseBytesToWrite(const QIODevice* self) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_BytesToWrite_IsBase(true);
	return vqiodevice->bytesToWrite();
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnBytesToWrite(const QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_BytesToWrite_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_BytesToWrite_Callback>(slot));
}
}

// Base class handler implementation
bool QIODevice_QBaseCanReadLine(const QIODevice* self) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_CanReadLine_IsBase(true);
	return vqiodevice->canReadLine();
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnCanReadLine(const QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<const VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_CanReadLine_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_CanReadLine_Callback>(slot));
}
}

// Base class handler implementation
bool QIODevice_QBaseWaitForReadyRead(QIODevice* self, int msecs) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_WaitForReadyRead_IsBase(true);
	return vqiodevice->waitForReadyRead(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnWaitForReadyRead(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_WaitForReadyRead_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_WaitForReadyRead_Callback>(slot));
}
}

// Base class handler implementation
bool QIODevice_QBaseWaitForBytesWritten(QIODevice* self, int msecs) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_WaitForBytesWritten_IsBase(true);
	return vqiodevice->waitForBytesWritten(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnWaitForBytesWritten(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_WaitForBytesWritten_Callback>(slot));
}
}

// Derived class handler implementation
long long QIODevice_ReadData(QIODevice* self, char* data, long long maxlen) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
	return vqiodevice->readData(data, maxlen);
	} else {
	return self->QIODevice::readData(data, maxlen);
}
}

// Base class handler implementation
long long QIODevice_QBaseReadData(QIODevice* self, char* data, long long maxlen) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_ReadData_IsBase(true);
	return vqiodevice->readData(data, maxlen);
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnReadData(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_ReadData_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_ReadData_Callback>(slot));
}
}

// Derived class handler implementation
long long QIODevice_ReadLineData(QIODevice* self, char* data, long long maxlen) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
	return vqiodevice->readLineData(data, maxlen);
	} else {
	return self->QIODevice::readLineData(data, maxlen);
}
}

// Base class handler implementation
long long QIODevice_QBaseReadLineData(QIODevice* self, char* data, long long maxlen) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_ReadLineData_IsBase(true);
	return vqiodevice->readLineData(data, maxlen);
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnReadLineData(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_ReadLineData_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_ReadLineData_Callback>(slot));
}
}

// Derived class handler implementation
long long QIODevice_SkipData(QIODevice* self, long long maxSize) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
	return vqiodevice->skipData(maxSize);
	} else {
	return self->QIODevice::skipData(maxSize);
}
}

// Base class handler implementation
long long QIODevice_QBaseSkipData(QIODevice* self, long long maxSize) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_SkipData_IsBase(true);
	return vqiodevice->skipData(maxSize);
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSkipData(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_SkipData_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_SkipData_Callback>(slot));
}
}

// Derived class handler implementation
long long QIODevice_WriteData(QIODevice* self, const char* data, long long lenVal) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
	return vqiodevice->writeData(data, lenVal);
	} else {
	return self->QIODevice::writeData(data, lenVal);
}
}

// Base class handler implementation
long long QIODevice_QBaseWriteData(QIODevice* self, const char* data, long long lenVal) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_WriteData_IsBase(true);
	return vqiodevice->writeData(data, lenVal);
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnWriteData(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_WriteData_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_WriteData_Callback>(slot));
}
}

// Derived class handler implementation
void QIODevice_SetOpenMode(QIODevice* self, int openMode) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
	vqiodevice->setOpenMode(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
	} else {
	self->QIODevice::setOpenMode(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}
}

// Base class handler implementation
void QIODevice_QBaseSetOpenMode(QIODevice* self, int openMode) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_SetOpenMode_IsBase(true);
	vqiodevice->setOpenMode(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSetOpenMode(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_SetOpenMode_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_SetOpenMode_Callback>(slot));
}
}

// Derived class handler implementation
void QIODevice_SetErrorString(QIODevice* self, const libqt_string errorString) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
	vqiodevice->setErrorString(QString::fromUtf8(errorString.data, errorString.len));
	} else {
	self->QIODevice::setErrorString(QString::fromUtf8(errorString.data, errorString.len));
}
}

// Base class handler implementation
void QIODevice_QBaseSetErrorString(QIODevice* self, const libqt_string errorString) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_SetErrorString_IsBase(true);
	vqiodevice->setErrorString(QString::fromUtf8(errorString.data, errorString.len));
}
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSetErrorString(QIODevice* self, intptr_t slot) {
	auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
	if (vqiodevice && vqiodevice->isVirtualQIODevice) {
vqiodevice->setQIODevice_SetErrorString_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_SetErrorString_Callback>(slot));
}
}

void QIODevice_Delete(QIODevice* self) {
    delete self;
}

