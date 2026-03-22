#include <QByteArray>
#include <QCborStreamWriter>
#include <QIODevice>
#include <QStringView>
#include <qcborstreamwriter.h>
#include "libqcborstreamwriter.h"
#include "libqcborstreamwriter.hxx"

QCborStreamWriter* QCborStreamWriter_new(QIODevice* device) {
	 return new QCborStreamWriter(device);
}

QCborStreamWriter* QCborStreamWriter_new2(libqt_string data) {
	 return new QCborStreamWriter(QByteArray(data.data, data.len));
}

void QCborStreamWriter_SetDevice(QCborStreamWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QCborStreamWriter_Device(const QCborStreamWriter* self) {
	return self->device();
}

void QCborStreamWriter_Append(QCborStreamWriter* self, unsigned long long u) {
	self->append(u);
}

void QCborStreamWriter_Append2(QCborStreamWriter* self, long long i) {
	self->append(i);
}

void QCborStreamWriter_Append3(QCborStreamWriter* self, quint64 n) {
	self->append(static_cast<QCborNegativeInteger>(n));
}

void QCborStreamWriter_Append4(QCborStreamWriter* self, const libqt_string ba) {
	self->append(QByteArray(ba.data, ba.len));
}

void QCborStreamWriter_Append5(QCborStreamWriter* self, QLatin1StringView str) {
	self->append(str);
}

void QCborStreamWriter_Append6(QCborStreamWriter* self, QStringView* str) {
	self->append(*str);
}

void QCborStreamWriter_Append7(QCborStreamWriter* self, quint64 tag) {
	self->append(static_cast<QCborTag>(tag));
}

void QCborStreamWriter_Append8(QCborStreamWriter* self, int tag) {
	self->append(static_cast<QCborKnownTags>(tag));
}

void QCborStreamWriter_Append9(QCborStreamWriter* self, quint8 st) {
	self->append(static_cast<QCborSimpleType>(st));
}

void QCborStreamWriter_Append11(QCborStreamWriter* self, qfloat16* f) {
	self->append(*f);
}

void QCborStreamWriter_Append12(QCborStreamWriter* self, float f) {
	self->append(f);
}

void QCborStreamWriter_Append13(QCborStreamWriter* self, double d) {
	self->append(d);
}

void QCborStreamWriter_AppendByteString(QCborStreamWriter* self, const char* data, ptrdiff_t lenVal) {
	self->appendByteString(data, lenVal);
}

void QCborStreamWriter_AppendTextString(QCborStreamWriter* self, const char* utf8, ptrdiff_t lenVal) {
	self->appendTextString(utf8, lenVal);
}

void QCborStreamWriter_Append14(QCborStreamWriter* self, bool b) {
	self->append(b);
}

void QCborStreamWriter_AppendNull(QCborStreamWriter* self) {
	self->appendNull();
}

void QCborStreamWriter_AppendUndefined(QCborStreamWriter* self) {
	self->appendUndefined();
}

void QCborStreamWriter_Append15(QCborStreamWriter* self, int i) {
	self->append(i);
}

void QCborStreamWriter_Append16(QCborStreamWriter* self, unsigned int u) {
	self->append(u);
}

void QCborStreamWriter_Append17(QCborStreamWriter* self, const char* str) {
	self->append(str);
}

void QCborStreamWriter_StartArray(QCborStreamWriter* self) {
	self->startArray();
}

void QCborStreamWriter_StartArray2(QCborStreamWriter* self, unsigned long long count) {
	self->startArray(count);
}

bool QCborStreamWriter_EndArray(QCborStreamWriter* self) {
	return self->endArray();
}

void QCborStreamWriter_StartMap(QCborStreamWriter* self) {
	self->startMap();
}

void QCborStreamWriter_StartMap2(QCborStreamWriter* self, unsigned long long count) {
	self->startMap(count);
}

bool QCborStreamWriter_EndMap(QCborStreamWriter* self) {
	return self->endMap();
}

void QCborStreamWriter_Append22(QCborStreamWriter* self, const char* str, ptrdiff_t size) {
	self->append(str, size);
}

void QCborStreamWriter_Delete(QCborStreamWriter* self) {
    delete self;
}

