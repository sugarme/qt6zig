#include <QPixelFormat>
#include <qpixelformat.h>
#include "libqpixelformat.h"
#include "libqpixelformat.hxx"

QPixelFormat* QPixelFormat_new(const QPixelFormat* other) {
	 return new QPixelFormat(*other);
}

QPixelFormat* QPixelFormat_new2(QPixelFormat* other) {
	 return new QPixelFormat(*other);
}

QPixelFormat* QPixelFormat_new3() {
	 return new QPixelFormat();
}

QPixelFormat* QPixelFormat_new4(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation) {
	 return new QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation));
}

QPixelFormat* QPixelFormat_new5(const QPixelFormat* param1) {
	 return new QPixelFormat(*param1);
}

QPixelFormat* QPixelFormat_new6(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation, int byteOrder) {
	 return new QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation), static_cast<QPixelFormat::ByteOrder>(byteOrder));
}

QPixelFormat* QPixelFormat_new7(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation, int byteOrder, unsigned char subEnum) {
	 return new QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation), static_cast<QPixelFormat::ByteOrder>(byteOrder), subEnum);
}

void QPixelFormat_CopyAssign(QPixelFormat* self, QPixelFormat* other) {
    *self = *other;
}

void QPixelFormat_MoveAssign(QPixelFormat* self, QPixelFormat* other) {
    *self = std::move(*other);
}

int QPixelFormat_ColorModel(const QPixelFormat* self) {
	return self->colorModel();
}

unsigned char QPixelFormat_ChannelCount(const QPixelFormat* self) {
	return self->channelCount();
}

unsigned char QPixelFormat_RedSize(const QPixelFormat* self) {
	return self->redSize();
}

unsigned char QPixelFormat_GreenSize(const QPixelFormat* self) {
	return self->greenSize();
}

unsigned char QPixelFormat_BlueSize(const QPixelFormat* self) {
	return self->blueSize();
}

unsigned char QPixelFormat_CyanSize(const QPixelFormat* self) {
	return self->cyanSize();
}

unsigned char QPixelFormat_MagentaSize(const QPixelFormat* self) {
	return self->magentaSize();
}

unsigned char QPixelFormat_YellowSize(const QPixelFormat* self) {
	return self->yellowSize();
}

unsigned char QPixelFormat_BlackSize(const QPixelFormat* self) {
	return self->blackSize();
}

unsigned char QPixelFormat_HueSize(const QPixelFormat* self) {
	return self->hueSize();
}

unsigned char QPixelFormat_SaturationSize(const QPixelFormat* self) {
	return self->saturationSize();
}

unsigned char QPixelFormat_LightnessSize(const QPixelFormat* self) {
	return self->lightnessSize();
}

unsigned char QPixelFormat_BrightnessSize(const QPixelFormat* self) {
	return self->brightnessSize();
}

unsigned char QPixelFormat_AlphaSize(const QPixelFormat* self) {
	return self->alphaSize();
}

unsigned char QPixelFormat_BitsPerPixel(const QPixelFormat* self) {
	return self->bitsPerPixel();
}

int QPixelFormat_AlphaUsage(const QPixelFormat* self) {
	return self->alphaUsage();
}

int QPixelFormat_AlphaPosition(const QPixelFormat* self) {
	return self->alphaPosition();
}

int QPixelFormat_Premultiplied(const QPixelFormat* self) {
	return self->premultiplied();
}

int QPixelFormat_TypeInterpretation(const QPixelFormat* self) {
	return self->typeInterpretation();
}

int QPixelFormat_ByteOrder(const QPixelFormat* self) {
	return self->byteOrder();
}

int QPixelFormat_YuvLayout(const QPixelFormat* self) {
	return self->yuvLayout();
}

unsigned char QPixelFormat_SubEnum(const QPixelFormat* self) {
	return self->subEnum();
}

void QPixelFormat_Delete(QPixelFormat* self) {
    delete self;
}

