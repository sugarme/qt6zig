#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QEvent>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qanimationgroup.h>
#include "libqanimationgroup.h"
#include "libqanimationgroup.hxx"

QAnimationGroup* QAnimationGroup_new() {
	 return new VirtualQAnimationGroup();
}

QAnimationGroup* QAnimationGroup_new2(QObject* parent) {
	 return new VirtualQAnimationGroup(parent);
}

libqt_string QAnimationGroup_Tr(const char* s) {
	QString _ret = QAnimationGroup::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractAnimation* QAnimationGroup_AnimationAt(const QAnimationGroup* self, int index) {
	return self->animationAt(index);
}

int QAnimationGroup_AnimationCount(const QAnimationGroup* self) {
	return self->animationCount();
}

int QAnimationGroup_IndexOfAnimation(const QAnimationGroup* self, QAbstractAnimation* animation) {
	return self->indexOfAnimation(animation);
}

void QAnimationGroup_AddAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
	self->addAnimation(animation);
}

void QAnimationGroup_InsertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation) {
	self->insertAnimation(index, animation);
}

void QAnimationGroup_RemoveAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
	self->removeAnimation(animation);
}

QAbstractAnimation* QAnimationGroup_TakeAnimation(QAnimationGroup* self, int index) {
	return self->takeAnimation(index);
}

void QAnimationGroup_Clear(QAnimationGroup* self) {
	self->clear();
}

libqt_string QAnimationGroup_Tr2(const char* s, const char* c) {
	QString _ret = QAnimationGroup::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAnimationGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAnimationGroup::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAnimationGroup_Delete(QAnimationGroup* self) {
    delete self;
}

