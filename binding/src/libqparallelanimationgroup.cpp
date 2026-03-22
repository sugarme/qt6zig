#include <QAnimationGroup>
#include <QEvent>
#include <QObject>
#include <QParallelAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qparallelanimationgroup.h>
#include "libqparallelanimationgroup.h"
#include "libqparallelanimationgroup.hxx"

QParallelAnimationGroup* QParallelAnimationGroup_new() {
	 return new VirtualQParallelAnimationGroup();
}

QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent) {
	 return new VirtualQParallelAnimationGroup(parent);
}

libqt_string QParallelAnimationGroup_Tr(const char* s) {
	QString _ret = QParallelAnimationGroup::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QParallelAnimationGroup_Duration(const QParallelAnimationGroup* self) {
	return self->duration();
}

libqt_string QParallelAnimationGroup_Tr2(const char* s, const char* c) {
	QString _ret = QParallelAnimationGroup::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QParallelAnimationGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QParallelAnimationGroup::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QParallelAnimationGroup_QBaseDuration(const QParallelAnimationGroup* self) {
	auto* vqparallelanimationgroup = dynamic_cast<const VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_Duration_IsBase(true);
	return vqparallelanimationgroup->duration();
}
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnDuration(const QParallelAnimationGroup* self, intptr_t slot) {
	auto* vqparallelanimationgroup = dynamic_cast<const VirtualQParallelAnimationGroup*>(self);
	if (vqparallelanimationgroup && vqparallelanimationgroup->isVirtualQParallelAnimationGroup) {
vqparallelanimationgroup->setQParallelAnimationGroup_Duration_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Duration_Callback>(slot));
}
}

void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self) {
    delete self;
}

