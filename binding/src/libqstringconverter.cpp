#include <QAnyStringView>
#include <QByteArrayView>
#include <QChar>
#include <QStringConverter>
#include <QStringDecoder>
#include <QStringEncoder>
#include <QStringView>
#include <qstringconverter.h>
#include "libqstringconverter.h"
#include "libqstringconverter.hxx"

QStringEncoder* QStringEncoder_new() {
	 return new QStringEncoder();
}

QStringEncoder* QStringEncoder_new2(int encoding) {
	 return new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding));
}

QStringEncoder* QStringEncoder_new3(libqt_string name) {
	 return new QStringEncoder(QAnyStringView(QString::fromUtf8(name.data, name.len)));
}

QStringEncoder* QStringEncoder_new4(int encoding, int flags) {
	 return new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QFlags<QTextOption::Flag>>(flags));
}

QStringEncoder* QStringEncoder_new5(libqt_string name, int flags) {
	 return new QStringEncoder(QAnyStringView(QString::fromUtf8(name.data, name.len)), static_cast<QFlags<QTextOption::Flag>>(flags));
}

DecodedData<QStringView> QStringEncoder_OperatorCall(QStringEncoder* self, QStringView* in) {
	return self->operator()(*in);
}

DecodedData<QStringView> QStringEncoder_Encode(QStringEncoder* self, QStringView* in) {
	return self->encode(*in);
}

ptrdiff_t QStringEncoder_RequiredSpace(const QStringEncoder* self, ptrdiff_t inputLength) {
	return self->requiredSpace(inputLength);
}

char* QStringEncoder_AppendToBuffer(QStringEncoder* self, char* out, QStringView* in) {
	return self->appendToBuffer(out, *in);
}

void QStringEncoder_Delete(QStringEncoder* self) {
    delete self;
}

QStringDecoder* QStringDecoder_new(int encoding) {
	 return new QStringDecoder(static_cast<QStringConverter::Encoding>(encoding));
}

QStringDecoder* QStringDecoder_new2() {
	 return new QStringDecoder();
}

QStringDecoder* QStringDecoder_new3(libqt_string name) {
	 return new QStringDecoder(QAnyStringView(QString::fromUtf8(name.data, name.len)));
}

QStringDecoder* QStringDecoder_new4(int encoding, int flags) {
	 return new QStringDecoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QFlags<QTextOption::Flag>>(flags));
}

QStringDecoder* QStringDecoder_new5(libqt_string name, int f) {
	 return new QStringDecoder(QAnyStringView(QString::fromUtf8(name.data, name.len)), static_cast<QFlags<QTextOption::Flag>>(f));
}

EncodedData<QByteArrayView> QStringDecoder_OperatorCall(QStringDecoder* self, QByteArrayView* ba) {
	return self->operator()(*ba);
}

EncodedData<QByteArrayView> QStringDecoder_Decode(QStringDecoder* self, QByteArrayView* ba) {
	return self->decode(*ba);
}

ptrdiff_t QStringDecoder_RequiredSpace(const QStringDecoder* self, ptrdiff_t inputLength) {
	return self->requiredSpace(inputLength);
}

QChar* QStringDecoder_AppendToBuffer(QStringDecoder* self, QChar* out, QByteArrayView* ba) {
	return self->appendToBuffer(out, *ba);
}

QStringDecoder* QStringDecoder_DecoderForHtml(QByteArrayView* data) {
	return new QStringDecoder(QStringDecoder::decoderForHtml(*data));
}

void QStringDecoder_Delete(QStringDecoder* self) {
    delete self;
}

