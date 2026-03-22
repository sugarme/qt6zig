#include <QOpenGLContext>
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_0_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_0_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_1_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_1_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_2_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_2_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_3_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_3_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_4_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_4_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_5_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_2_0_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_2_0_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_2_1_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_0_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_0_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_1_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_2_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_3_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_3_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_0_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_1_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_2_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_3_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_4_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_5_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_5_DeprecatedBackend__Functions
#include <qopenglversionfunctions.h>
#include "libqopenglversionfunctions.h"
#include "libqopenglversionfunctions.hxx"

QOpenGLVersionStatus* QOpenGLVersionStatus_new(const QOpenGLVersionStatus* other) {
	 return new QOpenGLVersionStatus(*other);
}

QOpenGLVersionStatus* QOpenGLVersionStatus_new2(QOpenGLVersionStatus* other) {
	 return new QOpenGLVersionStatus(*other);
}

QOpenGLVersionStatus* QOpenGLVersionStatus_new3() {
	 return new QOpenGLVersionStatus();
}

QOpenGLVersionStatus* QOpenGLVersionStatus_new4(int majorVersion, int minorVersion, int functionStatus) {
	 return new QOpenGLVersionStatus(majorVersion, minorVersion, static_cast<QOpenGLVersionStatus::OpenGLStatus>(functionStatus));
}

QOpenGLVersionStatus* QOpenGLVersionStatus_new5(const QOpenGLVersionStatus* param1) {
	 return new QOpenGLVersionStatus(*param1);
}

libqt_pair QOpenGLVersionStatus_Version(const QOpenGLVersionStatus* self) {
	return self->version;
}

void QOpenGLVersionStatus_SetVersion(QOpenGLVersionStatus* self, libqt_pair version) {
	self->version;
}

int QOpenGLVersionStatus_Status(const QOpenGLVersionStatus* self) {
	return self->status;
}

void QOpenGLVersionStatus_SetStatus(QOpenGLVersionStatus* self, int status) {
	self->status;
}

void QOpenGLVersionStatus_OperatorAssign(QOpenGLVersionStatus* self, const QOpenGLVersionStatus* param1) {
	self->operator=(*param1);
}

void QOpenGLVersionStatus_Delete(QOpenGLVersionStatus* self) {
    delete self;
}

QOpenGLVersionFunctionsBackend* QOpenGLVersionFunctionsBackend_new(QOpenGLContext* ctx) {
	 return new QOpenGLVersionFunctionsBackend(ctx);
}

QOpenGLVersionFunctionsBackend* QOpenGLVersionFunctionsBackend_new2(const QOpenGLVersionFunctionsBackend* param1) {
	 return new QOpenGLVersionFunctionsBackend(*param1);
}

QOpenGLContext* QOpenGLVersionFunctionsBackend_Context(const QOpenGLVersionFunctionsBackend* self) {
	return self->context;
}

void QOpenGLVersionFunctionsBackend_SetContext(QOpenGLVersionFunctionsBackend* self, QOpenGLContext* context) {
	self->context;
}

void QOpenGLVersionFunctionsBackend_Delete(QOpenGLVersionFunctionsBackend* self) {
    delete self;
}

QOpenGLVersionFunctionsStorage* QOpenGLVersionFunctionsStorage_new(const QOpenGLVersionFunctionsStorage* other) {
	 return new QOpenGLVersionFunctionsStorage(*other);
}

QOpenGLVersionFunctionsStorage* QOpenGLVersionFunctionsStorage_new2() {
	 return new QOpenGLVersionFunctionsStorage();
}

void QOpenGLVersionFunctionsStorage_CopyAssign(QOpenGLVersionFunctionsStorage* self, QOpenGLVersionFunctionsStorage* other) {
    *self = *other;
}

QOpenGLVersionFunctionsBackend** QOpenGLVersionFunctionsStorage_Backends(const QOpenGLVersionFunctionsStorage* self) {
	return self->backends;
}

void QOpenGLVersionFunctionsStorage_SetBackends(QOpenGLVersionFunctionsStorage* self, QOpenGLVersionFunctionsBackend** backends) {
	self->backends;
}

void QOpenGLVersionFunctionsStorage_Delete(QOpenGLVersionFunctionsStorage* self) {
    delete self;
}

bool QAbstractOpenGLFunctions_InitializeOpenGLFunctions(QAbstractOpenGLFunctions* self) {
	return self->initializeOpenGLFunctions();
}

// Base class handler implementation
bool QAbstractOpenGLFunctions_QBaseInitializeOpenGLFunctions(QAbstractOpenGLFunctions* self) {
	auto* vqabstractopenglfunctions = dynamic_cast<VirtualQAbstractOpenGLFunctions*>(self);
	if (vqabstractopenglfunctions && vqabstractopenglfunctions->isVirtualQAbstractOpenGLFunctions) {
vqabstractopenglfunctions->setQAbstractOpenGLFunctions_InitializeOpenGLFunctions_IsBase(true);
	return vqabstractopenglfunctions->initializeOpenGLFunctions();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractOpenGLFunctions_OnInitializeOpenGLFunctions(QAbstractOpenGLFunctions* self, intptr_t slot) {
	auto* vqabstractopenglfunctions = dynamic_cast<VirtualQAbstractOpenGLFunctions*>(self);
	if (vqabstractopenglfunctions && vqabstractopenglfunctions->isVirtualQAbstractOpenGLFunctions) {
vqabstractopenglfunctions->setQAbstractOpenGLFunctions_InitializeOpenGLFunctions_Callback(reinterpret_cast<VirtualQAbstractOpenGLFunctions::QAbstractOpenGLFunctions_InitializeOpenGLFunctions_Callback>(slot));
}
}

void QAbstractOpenGLFunctions_Delete(QAbstractOpenGLFunctions* self) {
    delete self;
}

QOpenGLFunctions_1_0_CoreBackend* QOpenGLFunctions_1_0_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_1_0_CoreBackend(c);
}

int QOpenGLFunctions_1_0_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_1_0_CoreBackend::versionStatus();
}

void QOpenGLFunctions_1_0_CoreBackend_Delete(QOpenGLFunctions_1_0_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_1_1_CoreBackend* QOpenGLFunctions_1_1_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_1_1_CoreBackend(c);
}

int QOpenGLFunctions_1_1_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_1_1_CoreBackend::versionStatus();
}

void QOpenGLFunctions_1_1_CoreBackend_Delete(QOpenGLFunctions_1_1_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_1_2_CoreBackend* QOpenGLFunctions_1_2_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_1_2_CoreBackend(c);
}

int QOpenGLFunctions_1_2_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_1_2_CoreBackend::versionStatus();
}

void QOpenGLFunctions_1_2_CoreBackend_Delete(QOpenGLFunctions_1_2_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_1_3_CoreBackend* QOpenGLFunctions_1_3_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_1_3_CoreBackend(c);
}

int QOpenGLFunctions_1_3_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_1_3_CoreBackend::versionStatus();
}

void QOpenGLFunctions_1_3_CoreBackend_Delete(QOpenGLFunctions_1_3_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_1_4_CoreBackend* QOpenGLFunctions_1_4_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_1_4_CoreBackend(c);
}

int QOpenGLFunctions_1_4_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_1_4_CoreBackend::versionStatus();
}

void QOpenGLFunctions_1_4_CoreBackend_Delete(QOpenGLFunctions_1_4_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_1_5_CoreBackend* QOpenGLFunctions_1_5_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_1_5_CoreBackend(c);
}

int QOpenGLFunctions_1_5_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_1_5_CoreBackend::versionStatus();
}

void QOpenGLFunctions_1_5_CoreBackend_Delete(QOpenGLFunctions_1_5_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_2_0_CoreBackend* QOpenGLFunctions_2_0_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_2_0_CoreBackend(c);
}

int QOpenGLFunctions_2_0_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_2_0_CoreBackend::versionStatus();
}

void QOpenGLFunctions_2_0_CoreBackend_Delete(QOpenGLFunctions_2_0_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_2_1_CoreBackend* QOpenGLFunctions_2_1_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_2_1_CoreBackend(c);
}

int QOpenGLFunctions_2_1_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_2_1_CoreBackend::versionStatus();
}

void QOpenGLFunctions_2_1_CoreBackend_Delete(QOpenGLFunctions_2_1_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_3_0_CoreBackend* QOpenGLFunctions_3_0_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_3_0_CoreBackend(c);
}

int QOpenGLFunctions_3_0_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_3_0_CoreBackend::versionStatus();
}

void QOpenGLFunctions_3_0_CoreBackend_Delete(QOpenGLFunctions_3_0_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_3_1_CoreBackend* QOpenGLFunctions_3_1_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_3_1_CoreBackend(c);
}

int QOpenGLFunctions_3_1_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_3_1_CoreBackend::versionStatus();
}

void QOpenGLFunctions_3_1_CoreBackend_Delete(QOpenGLFunctions_3_1_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_3_2_CoreBackend* QOpenGLFunctions_3_2_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_3_2_CoreBackend(c);
}

int QOpenGLFunctions_3_2_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_3_2_CoreBackend::versionStatus();
}

void QOpenGLFunctions_3_2_CoreBackend_Delete(QOpenGLFunctions_3_2_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_3_3_CoreBackend* QOpenGLFunctions_3_3_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_3_3_CoreBackend(c);
}

int QOpenGLFunctions_3_3_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_3_3_CoreBackend::versionStatus();
}

void QOpenGLFunctions_3_3_CoreBackend_Delete(QOpenGLFunctions_3_3_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_4_0_CoreBackend* QOpenGLFunctions_4_0_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_4_0_CoreBackend(c);
}

int QOpenGLFunctions_4_0_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_4_0_CoreBackend::versionStatus();
}

void QOpenGLFunctions_4_0_CoreBackend_Delete(QOpenGLFunctions_4_0_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_4_1_CoreBackend* QOpenGLFunctions_4_1_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_4_1_CoreBackend(c);
}

int QOpenGLFunctions_4_1_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_4_1_CoreBackend::versionStatus();
}

void QOpenGLFunctions_4_1_CoreBackend_Delete(QOpenGLFunctions_4_1_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_4_2_CoreBackend* QOpenGLFunctions_4_2_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_4_2_CoreBackend(c);
}

int QOpenGLFunctions_4_2_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_4_2_CoreBackend::versionStatus();
}

void QOpenGLFunctions_4_2_CoreBackend_Delete(QOpenGLFunctions_4_2_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_4_3_CoreBackend* QOpenGLFunctions_4_3_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_4_3_CoreBackend(c);
}

int QOpenGLFunctions_4_3_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_4_3_CoreBackend::versionStatus();
}

void QOpenGLFunctions_4_3_CoreBackend_Delete(QOpenGLFunctions_4_3_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_4_4_CoreBackend* QOpenGLFunctions_4_4_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_4_4_CoreBackend(c);
}

int QOpenGLFunctions_4_4_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_4_4_CoreBackend::versionStatus();
}

void QOpenGLFunctions_4_4_CoreBackend_Delete(QOpenGLFunctions_4_4_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_4_5_CoreBackend* QOpenGLFunctions_4_5_CoreBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_4_5_CoreBackend(c);
}

int QOpenGLFunctions_4_5_CoreBackend_VersionStatus() {
	return QOpenGLFunctions_4_5_CoreBackend::versionStatus();
}

void QOpenGLFunctions_4_5_CoreBackend_Delete(QOpenGLFunctions_4_5_CoreBackend* self) {
    delete self;
}

QOpenGLFunctions_1_0_DeprecatedBackend* QOpenGLFunctions_1_0_DeprecatedBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_1_0_DeprecatedBackend(c);
}

int QOpenGLFunctions_1_0_DeprecatedBackend_VersionStatus() {
	return QOpenGLFunctions_1_0_DeprecatedBackend::versionStatus();
}

void QOpenGLFunctions_1_0_DeprecatedBackend_Delete(QOpenGLFunctions_1_0_DeprecatedBackend* self) {
    delete self;
}

QOpenGLFunctions_1_1_DeprecatedBackend* QOpenGLFunctions_1_1_DeprecatedBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_1_1_DeprecatedBackend(c);
}

int QOpenGLFunctions_1_1_DeprecatedBackend_VersionStatus() {
	return QOpenGLFunctions_1_1_DeprecatedBackend::versionStatus();
}

void QOpenGLFunctions_1_1_DeprecatedBackend_Delete(QOpenGLFunctions_1_1_DeprecatedBackend* self) {
    delete self;
}

QOpenGLFunctions_1_2_DeprecatedBackend* QOpenGLFunctions_1_2_DeprecatedBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_1_2_DeprecatedBackend(c);
}

int QOpenGLFunctions_1_2_DeprecatedBackend_VersionStatus() {
	return QOpenGLFunctions_1_2_DeprecatedBackend::versionStatus();
}

void QOpenGLFunctions_1_2_DeprecatedBackend_Delete(QOpenGLFunctions_1_2_DeprecatedBackend* self) {
    delete self;
}

QOpenGLFunctions_1_3_DeprecatedBackend* QOpenGLFunctions_1_3_DeprecatedBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_1_3_DeprecatedBackend(c);
}

int QOpenGLFunctions_1_3_DeprecatedBackend_VersionStatus() {
	return QOpenGLFunctions_1_3_DeprecatedBackend::versionStatus();
}

void QOpenGLFunctions_1_3_DeprecatedBackend_Delete(QOpenGLFunctions_1_3_DeprecatedBackend* self) {
    delete self;
}

QOpenGLFunctions_1_4_DeprecatedBackend* QOpenGLFunctions_1_4_DeprecatedBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_1_4_DeprecatedBackend(c);
}

int QOpenGLFunctions_1_4_DeprecatedBackend_VersionStatus() {
	return QOpenGLFunctions_1_4_DeprecatedBackend::versionStatus();
}

void QOpenGLFunctions_1_4_DeprecatedBackend_Delete(QOpenGLFunctions_1_4_DeprecatedBackend* self) {
    delete self;
}

QOpenGLFunctions_2_0_DeprecatedBackend* QOpenGLFunctions_2_0_DeprecatedBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_2_0_DeprecatedBackend(c);
}

int QOpenGLFunctions_2_0_DeprecatedBackend_VersionStatus() {
	return QOpenGLFunctions_2_0_DeprecatedBackend::versionStatus();
}

void QOpenGLFunctions_2_0_DeprecatedBackend_Delete(QOpenGLFunctions_2_0_DeprecatedBackend* self) {
    delete self;
}

QOpenGLFunctions_3_0_DeprecatedBackend* QOpenGLFunctions_3_0_DeprecatedBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_3_0_DeprecatedBackend(c);
}

int QOpenGLFunctions_3_0_DeprecatedBackend_VersionStatus() {
	return QOpenGLFunctions_3_0_DeprecatedBackend::versionStatus();
}

void QOpenGLFunctions_3_0_DeprecatedBackend_Delete(QOpenGLFunctions_3_0_DeprecatedBackend* self) {
    delete self;
}

QOpenGLFunctions_3_3_DeprecatedBackend* QOpenGLFunctions_3_3_DeprecatedBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_3_3_DeprecatedBackend(c);
}

int QOpenGLFunctions_3_3_DeprecatedBackend_VersionStatus() {
	return QOpenGLFunctions_3_3_DeprecatedBackend::versionStatus();
}

void QOpenGLFunctions_3_3_DeprecatedBackend_Delete(QOpenGLFunctions_3_3_DeprecatedBackend* self) {
    delete self;
}

QOpenGLFunctions_4_5_DeprecatedBackend* QOpenGLFunctions_4_5_DeprecatedBackend_new(QOpenGLContext* c) {
	 return new QOpenGLFunctions_4_5_DeprecatedBackend(c);
}

int QOpenGLFunctions_4_5_DeprecatedBackend_VersionStatus() {
	return QOpenGLFunctions_4_5_DeprecatedBackend::versionStatus();
}

void QOpenGLFunctions_4_5_DeprecatedBackend_Delete(QOpenGLFunctions_4_5_DeprecatedBackend* self) {
    delete self;
}

