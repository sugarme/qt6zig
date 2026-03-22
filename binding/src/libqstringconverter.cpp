#include <QByteArrayView>
#include <QChar>
#include <QStringConverter>
#include <QStringDecoder>
#include <QStringEncoder>
#include <qstringconverter.h>
#include "libqstringconverter.h"
#include "libqstringconverter.hxx"

QStringEncoder* QStringEncoder_new() {
	 return new QStringEncoder();
}

QStringEncoder* QStringEncoder_new2(int encoding) {
	 return new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding));
}

QStringEncoder* QStringEncoder_new3(int encoding, int flags) {
	 return new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QFlags<QTextOption::Flag>>(flags));
}

ptrdiff_t QStringEncoder_RequiredSpace(const QStringEncoder* self, ptrdiff_t inputLength) {
	return self->requiredSpace(inputLength);
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

QStringDecoder* QStringDecoder_new3(int encoding, int flags) {
	 return new QStringDecoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QFlags<QTextOption::Flag>>(flags));
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

