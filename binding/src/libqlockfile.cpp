#include <QLockFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlockfile.h>
#include "libqlockfile.h"
#include "libqlockfile.hxx"

QLockFile* QLockFile_new(const libqt_string fileName) {
	 return new QLockFile(QString::fromUtf8(fileName.data, fileName.len));
}

libqt_string QLockFile_FileName(const QLockFile* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QLockFile_Lock(QLockFile* self) {
	return self->lock();
}

bool QLockFile_TryLock(QLockFile* self, int timeout) {
	return self->tryLock(timeout);
}

void QLockFile_Unlock(QLockFile* self) {
	self->unlock();
}

void QLockFile_SetStaleLockTime(QLockFile* self, int staleLockTime) {
	self->setStaleLockTime(staleLockTime);
}

int QLockFile_StaleLockTime(const QLockFile* self) {
	return self->staleLockTime();
}

bool QLockFile_TryLock2(QLockFile* self) {
	return self->tryLock();
}

bool QLockFile_IsLocked(const QLockFile* self) {
	return self->isLocked();
}

bool QLockFile_GetLockInfo(const QLockFile* self, long long* pid, libqt_string hostname, libqt_string appname) {
	return self->getLockInfo(pid, QString::fromUtf8(hostname.data, hostname.len), QString::fromUtf8(appname.data, appname.len));
}

bool QLockFile_RemoveStaleLockFile(QLockFile* self) {
	return self->removeStaleLockFile();
}

int QLockFile_Error(const QLockFile* self) {
	return self->error();
}

void QLockFile_Delete(QLockFile* self) {
    delete self;
}

