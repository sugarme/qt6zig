const std = @import("std");

// ===========================================================================
// Helpers
// ===========================================================================

fn eql(a: []const u8, b: []const u8) bool {
    return std.mem.eql(u8, a, b);
}

fn startsWith(haystack: []const u8, prefix: []const u8) bool {
    return std.mem.startsWith(u8, haystack, prefix);
}

fn endsWith(haystack: []const u8, suffix: []const u8) bool {
    return std.mem.endsWith(u8, haystack, suffix);
}

fn contains(haystack: []const u8, needle: []const u8) bool {
    return std.mem.indexOf(u8, haystack, needle) != null;
}

// ===========================================================================
// allowClass
// ===========================================================================

/// Returns true if the given class should be included in binding generation.
pub fn allowClass(class_name: []const u8) bool {
    // Skip private / internal classes
    if (endsWith(class_name, "Private") or endsWith(class_name, "PrivateShared"))
        return false;
    if (contains(class_name, "Private::"))
        return false;
    if (contains(class_name, "QPrivateSignal"))
        return false;

    // Block std:: types (except std::pair)
    if (startsWith(class_name, "std::") and !startsWith(class_name, "std::pair"))
        return false;

    const blocked_classes = [_][]const u8{
        "QTextStreamManipulator",
        "QException",
        "QGenericRunnable",
        "QUnhandledException",
        "QPolygon",
        "QPolygonF",
        "QAssociativeIterator",
        "QAssociativeConstIterator",
        "QAssociativeIterable",
        "QSequentialIterator",
        "QSequentialConstIterator",
        "QSequentialIterable",
        "QBrushDataPointerDeleter",
        "QPropertyBindingPrivatePtr",
        "QVariantConstPointer",
        "KCompletionMatchesWrapper",
        "KGroupId",
        "KUserId",
        "KQuickIconProvider",
        "KBookmarkGroupTraverser",
        "KLocalization::Internal",
        "KSycocaFactory",
        "KSycocaFactoryList",
        "NETWinInfo",
        "NETRootInfo",
        "OrgKdeKDirNotifyInterface",
    };
    for (blocked_classes) |blocked| {
        if (eql(class_name, blocked)) return false;
    }

    return true;
}

// ===========================================================================
// allowMethod
// ===========================================================================

/// Returns true if the named method on the given class should be included.
/// This is a simplified port that covers the explicit class+method blocklist
/// from the Go source. The Go version also inspects parameter types, return
/// types, and receiver patterns at runtime; those checks belong in the
/// generator's type-analysis pass rather than in a static config table.
pub fn allowMethod(class_name: []const u8, method_name: []const u8) bool {
    // -- Per-class / per-method blocks --

    if (eql(class_name, "QBitArray") and eql(method_name, "operator~"))
        return false;

    if (eql(class_name, "QTimeZone") and (eql(method_name, "operator==") or eql(method_name, "operator!=")))
        return false;

    if (eql(class_name, "QDir") and (eql(method_name, "mkdir") or eql(method_name, "mkpath")))
        return false;

    if (eql(class_name, "QThreadStorageData") and eql(method_name, "finish"))
        return false;

    if (eql(class_name, "QWebEngineClientHints") and
        (eql(method_name, "qt_qmlMarker_uncreatable") or eql(method_name, "setQmlMarkerUncreatable")))
        return false;

    if (eql(class_name, "QWaveDecoder") and eql(method_name, "setIODevice"))
        return false;

    if (eql(class_name, "QDeadlineTimer") and eql(method_name, "_q_data"))
        return false;

    if (eql(class_name, "QNetworkCacheMetaData") and eql(method_name, "setRawHeaders"))
        return false;

    if (eql(class_name, "QHttpHeaders") and eql(method_name, "fromListOfPairs"))
        return false;

    if (eql(class_name, "QDBusPendingReplyTypes") and eql(method_name, "metaTypeFor"))
        return false;

    if ((eql(class_name, "KGradientSelector") or eql(class_name, "QGradient")) and eql(method_name, "setStops"))
        return false;

    if (eql(class_name, "QVariantAnimation") and eql(method_name, "setKeyValues"))
        return false;

    if (eql(class_name, "QXmlStreamEntityResolver") and eql(method_name, "operator="))
        return false;

    if (eql(class_name, "QAbstractVideoBuffer") and eql(method_name, "map"))
        return false;

    if (eql(class_name, "QLoggingCategory") and eql(method_name, "categoryFilter"))
        return false;

    if (eql(class_name, "QChronoTimer") and eql(method_name, "id"))
        return false;

    if (eql(class_name, "QTransform") and eql(method_name, "asAffineMatrix"))
        return false;

    if (eql(class_name, "QUrlQuery") and eql(method_name, "setQueryItems"))
        return false;

    if (eql(class_name, "QWebEnginePage") and eql(method_name, "setFeaturePermission"))
        return false;

    // QCustomPlot
    if (startsWith(class_name, "QCP") and
        (eql(method_name, "getFinalMinimumOuterSize") or eql(method_name, "getFinalMaximumOuterSize")))
        return false;

    if (eql(class_name, "QCPPolarAxisAngular") and eql(method_name, "setLabelPosition"))
        return false;

    // Attica
    if (eql(class_name, "Attica::Metadata") and eql(method_name, "setHeaders"))
        return false;

    // KConfig
    if (eql(class_name, "KCoreConfigSkeleton::ItemInt") and
        (eql(method_name, "setMinValue") or eql(method_name, "setMaxValue")))
        return false;

    // KCoreAddons
    if (eql(class_name, "KJob") and eql(method_name, "description"))
        return false;

    // QTermWidget
    if ((eql(class_name, "Konsole::Filter") or eql(class_name, "Konsole::FilterChain")) and
        (eql(method_name, "hotSpots") or eql(method_name, "hotSpotsAtLine")))
        return false;

    // KTextWidgets
    if (eql(class_name, "KRichTextWidget") and eql(method_name, "setRichTextSupport"))
        return false;

    // KIconThemes
    if (eql(class_name, "KIconLoader") and
        (eql(method_name, "LoadScaledIcon") or eql(method_name, "LoadScaledIcon2")))
        return false;

    // Solid
    if (eql(class_name, "Solid::StorageVolume") and eql(method_name, "encryptedContainer"))
        return false;

    // KWindowSystem
    if (eql(class_name, "KKeyServer") and eql(method_name, "xEventToQt"))
        return false;

    // KIO
    if (eql(class_name, "KACL") and
        (eql(method_name, "setAllGroupPermissions") or eql(method_name, "setAllUserPermissions")))
        return false;

    if (eql(class_name, "KCoreDirLister") and eql(method_name, "refreshItems"))
        return false;

    if (eql(class_name, "KProtocolManager") and eql(method_name, "fileNameUsedForCopying"))
        return false;

    if (eql(class_name, "KSslInfoDialog") and
        (eql(method_name, "setSslInfo") or eql(method_name, "certificateErrorsFromString")))
        return false;

    if (eql(class_name, "KIO::RestoreJob") and eql(method_name, "trashUrls"))
        return false;

    if (eql(class_name, "KRecentDocument") and eql(method_name, "clearEntriesOldestEntries"))
        return false;

    if (eql(class_name, "KFileItemListProperties") and eql(method_name, "items"))
        return false;

    if (eql(class_name, "KIO") and eql(method_name, "chmod"))
        return false;

    // KParts
    if ((eql(class_name, "KXMLGUIBuilder") or eql(class_name, "KXMLGUIClient")) and
        eql(method_name, "virtual_hook"))
        return false;

    // Method-name-only blocks (signals)
    if (eql(method_name, "metaObject") or eql(method_name, "qt_metacast") or eql(method_name, "qt_metacall") or eql(method_name, "clone") or eql(method_name, "qt_check_for_QGADGET_macro"))
        return false;

    // Methods containing QGADGET
    if (contains(method_name, "QGADGET"))
        return false;

    return true;
}

// ===========================================================================
// allowVirtualForClass
// ===========================================================================

/// Returns true if virtual method overrides should be generated for this class.
pub fn allowVirtualForClass(class_name: []const u8) bool {
    if (eql(class_name, "QFutureWatcherBase")) return false;
    if (eql(class_name, "QCborError")) return false;
    if (eql(class_name, "QCborParserError")) return false;
    if (eql(class_name, "QObjectData")) return false;
    if (startsWith(class_name, "QAbstractEventDispatcher")) return false;
    if (eql(class_name, "KJobTrackerInterface")) return false;

    const blocked = [_][]const u8{
        "KAbstractWidgetJobTracker",
        "KDialogJobUiDelegate",
        "KNotificationJobUiDelegate",
        "KStatusBarJobTracker",
        "KUiServerJobTracker",
        "KUiServerV2JobTracker",
        "KWidgetJobTracker",
    };
    for (blocked) |b| {
        if (eql(class_name, b)) return false;
    }

    return true;
}

// ===========================================================================
// allowCtor
// ===========================================================================

/// Returns true if constructor generation should be allowed for this class.
pub fn allowCtor(class_name: []const u8) bool {
    if (eql(class_name, "QStringConverterBase")) return false;
    if (eql(class_name, "QBrushData")) return false;
    if (eql(class_name, "QObjectData")) return false;
    if (eql(class_name, "QNativeInterface::QGLXContext")) return false;
    if (eql(class_name, "QNativeInterface::QEGLContext")) return false;

    // QOpenGL*Backend / QOpenGL*Storage
    if (startsWith(class_name, "QOpenGL") and endsWith(class_name, "Backend")) return false;
    if (startsWith(class_name, "QOpenGL") and endsWith(class_name, "Storage")) return false;

    // Attica
    if (eql(class_name, "Attica::PlatformDependentV2") or eql(class_name, "Attica::PlatformDependentV3"))
        return false;

    // KIO
    if (eql(class_name, "KIO::WorkerFactory")) return false;

    return true;
}

// ===========================================================================
// isBlockedType
// ===========================================================================

/// Returns true if the given type name must not appear in generated bindings
/// (neither as a parameter type nor as a return type).
pub fn isBlockedType(type_name: []const u8) bool {
    // Template/wrapper types that cannot be projected
    const blocked_prefixes = [_][]const u8{
        "QDBusReply<",
        "StringResult<",
        "QScopedPointer<",
        "QExplicitlySharedDataPointer<",
        "QSharedDataPointer<",
        "QTypedArrayData<",
        "QGenericMatrix<",
        "QUrlTwoFlags<",
        "struct __",
        "FillResult<",
        "QProperty<",
        "QBindable<",
        "QNotifiedProperty<",
        "QRgbaFloat<",
        "QPointer<",
        "EncodedData<",
        "QQmlListProperty<",
        "QWebEngineCallback<",
        "Result<",
        "QSharedPointer<",
        "QWeakPointer<",
        "QArrayDataPointer<",
        "QAtomicPointer<",
        "QBasicAtomicPointer<",
        "QBasicAtomicInteger<",
        "QTaggedPointer<",
        "QCPDataContainer<",
        "ItemJob<",
        "ItemPostJob<",
        "ListJob<",
        "QtPrivate::",
    };
    for (blocked_prefixes) |prefix| {
        if (startsWith(type_name, prefix)) return true;
    }

    // std:: types (except std::pair<)
    if (startsWith(type_name, "std::") and !startsWith(type_name, "std::pair<"))
        return true;

    // Substring checks
    if (contains(type_name, "(*)") or contains(type_name, "::*)("))
        return true; // function pointers
    if (contains(type_name, "QJSValue"))
        return true;
    if (contains(type_name, "::QPrivate"))
        return true;
    if (contains(type_name, "DataPtr"))
        return true;
    if (contains(type_name, "::DataPointer"))
        return true;
    if (contains(type_name, "totally_ordered_wrapper<"))
        return true;
    if (contains(type_name, "NET::"))
        return true;
    if (contains(type_name, "stat64"))
        return true;
    if (startsWith(type_name, "xcb_"))
        return true;

    // Suffix check -- C-style array types like quuid.h
    if (endsWith(type_name, "]"))
        return true;

    // QOpenGL backend types
    if (startsWith(type_name, "QOpenGL") and contains(type_name, "Backend::"))
        return true;

    // Iterators (not projectable to C ABI)
    if (contains(type_name, "const_iterator") or contains(type_name, "iterator"))
        return true;

    // Exact blocked type names
    const blocked_types = [_][]const u8{
        "QPolygon",
        "QPolygonF",
        "QGenericMatrix",
        "QMatrix3x3",
        "QLatin1String",
        "QStringView",
        "QLatin1StringView",
        "QUtf8StringView",
        "QStringRef",
        "qfloat16",
        "char16_t",
        "char32_t",
        "wchar_t",
        "FILE",
        "sockaddr",
        "qInternalCallback",
        "QGraphicsEffectSource",
        "QXmlStreamEntityDeclarations",
        "QXmlStreamNamespaceDeclarations",
        "QXmlStreamNotationDeclarations",
        "LineLayout::ValidLevel",
        "QtMsgType",
        "QTextStreamFunction",
        "QFactoryInterface",
        "QTextEngine",
        "QVulkanInstance",
        "QPlatformNativeInterface",
        "QPlatformBackingStore",
        "QPlatformMenuBar",
        "QPlatformOffscreenSurface",
        "QPlatformPixmap",
        "QPlatformScreen",
        "QPlatformWindow",
        "QPlatformSurface",
        "QPlatformMenu",
        "QPlatformMediaCaptureSession",
        "QPlatformMediaRecorder",
        "QPlatformVideoSink",
        "QTextDocument::ResourceProvider",
        "QTransform::Affine",
        "QAbstractAudioBuffer",
        "QAbstractVideoBuffer",
        "QRhi",
        "QPostEventList",
        "QMetaCallEvent",
        "QPostEvent",
        "QQmlEngine",
        "QJSEngine",
        "Character",
        "HistoryType",
        "ScreenWindow",
        "TerminalCharacterDecoder",
        "QueryPair",
        "QWidgetItemData",
        "Macro",
        "QList<QString>::const_iterator",
        "QAtomicInt",
        "QDynamicMetaObjectData",
        "QPropertyDelayedNotifications",
        "QList<bool>",
        "group",
        "passwd",
        "DBusError",
        "ClipboardUpdater",
        "KIO::SslUi",
        "Installation",
        "GL",
        "GLsync",
        "GLDEBUGPROC",
        "QPlatformOpenGLContext",
        "KateInlineNoteData",
        "QVersionNumber::It",
        "QFormLayout::ItemRole",
        "QtMetaContainerPrivate::QMetaSequenceInterface",
        "QtMetaContainerPrivate::QMetaAssociationInterface",
        "QtMetaContainerPrivate::QMetaContainerInterface",
        "QtPrivate::QMetaTypeInterface",
        "QtPrivate::RefCounted",
        "QAnyStringView",
        "DataPtr",
        "StringResult",
        "Qt::TimerId",
    };
    for (blocked_types) |blocked| {
        if (eql(type_name, blocked)) return true;
    }

    // Also check against the class-level blocklist
    if (!allowClass(type_name)) return true;

    return false;
}

// ===========================================================================
// allowField / allowFieldForClass
// ===========================================================================

/// Returns true if the given struct field name should be included.
pub fn allowField(field_name: []const u8) bool {
    if (eql(field_name, "psName") or eql(field_name, "psIconName"))
        return false;
    return true;
}

/// Returns true if fields should be generated for this class at all.
pub fn allowFieldForClass(class_name: []const u8) bool {
    if (eql(class_name, "KSandbox::ProcessContext"))
        return false;
    return true;
}

// ===========================================================================
// allowStructDef / allowInnerClassDef
// ===========================================================================

/// Returns true if a struct definition should be emitted for this class.
pub fn allowStructDef(class_name: []const u8) bool {
    const blocked = [_][]const u8{
        "KIO::SslUi",
        "KNSCore::ErrorCode",
        "KParts::PartLoader",
        "KSyntaxHighlighting::WildcardMatcher",
    };
    for (blocked) |b| {
        if (eql(class_name, b)) return false;
    }
    return true;
}

/// Returns true if inner class definitions should be emitted for this class.
pub fn allowInnerClassDef(class_name: []const u8) bool {
    const allowed = [_][]const u8{
        "Attica::Event",
        "KIO::DeleteJob",
        "KIO::Job",
        "KIO::ListJob",
        "KIO::MetaData",
        "KIO::SimpleJob",
        "KIO::UDSEntry",
        "KNSCore::EngineBase",
        "KNSCore::Entry",
        "KNSCore::ErrorCode",
        "KNSCore::Provider",
        "KNSCore::SearchRequest",
        "KParts::MainWindow",
        "KParts::OpenUrlArguments",
        "KSyntaxHighlighting::Definition",
        "KSyntaxHighlighting::FoldingRegion",
        "KSyntaxHighlighting::Format",
        "KSyntaxHighlighting::Theme",
        "KTextEditor::Cursor",
        "KTextEditor::Document",
        "KTextEditor::MainWindow",
        "KTextEditor::Message",
        "KTextEditor::MovingCursor",
        "KTextEditor::MovingRange",
        "KTextEditor::Plugin",
        "Sonnet::BackgroundChecker",
        "Sonnet::Dialog",
    };
    for (allowed) |a| {
        if (eql(class_name, a)) return true;
    }
    return false;
}

// ===========================================================================
// importHeaderForClass
// ===========================================================================

/// Returns true if the class requires a `#include <ClassName>` in generated C++ code.
pub fn importHeaderForClass(class_name: []const u8) bool {
    // MSVC built-in types that appear in AST but have no header
    if (eql(class_name, "_GUID") or eql(class_name, "type_info")) return false;

    // OpenGL types that require platform-specific GL headers
    if (eql(class_name, "QOpenGLExtraFunctions") or eql(class_name, "QAbstractOpenGLFunctions")) return false;

    // Types that are blocked from class generation but may still appear in #include
    if (eql(class_name, "QException") or eql(class_name, "QUnhandledException")) return false;
    if (eql(class_name, "QScopedPointerPodDeleter")) return false;

    if (startsWith(class_name, "QPlatform")) return false;

    if (startsWith(class_name, "QOpenGLFunctions_") and endsWith(class_name, "Backend"))
        return false;

    if (startsWith(class_name, "QCP") or eql(class_name, "QCustomPlot"))
        return false;

    if (startsWith(class_name, "NET"))
        return false;

    if (startsWith(class_name, "Qsci"))
        return false;

    const blocked = [_][]const u8{
        "QGraphicsEffectSource",
        "QAbstractConcatenable",
        "QTextEngine",
        "QText",
        "QVLABaseBase",
        "QAdoptSharedDataTag",
        "qfloat16",
        "QFormDataPartBuilder",
        "QGenericRunnable",
        "QCameraPermission",
        "QMicrophonePermission",
        "QDBusPendingReplyTypes",
        "QAbstractOpenGLFunctions",
        "QOpenGLVersionFunctionsBackend",
        "QOpenGLVersionFunctionsStorage",
        "QOpenGLVersionStatus",
        "QtVideo",
        "q20",
        "Kuit",
        "QTermWidget",
        "QTermWidgetInterface",
        "Konsole",
        "Attica",
        "KConfigSkeletonItem",
        "KConfigCompilerSignallingItem",
        "KPropertySkeletonItem",
        "KDragWidgetDecoratorBase",
        "KTwoFingerSwipeRecognizer",
        "KTwoFingerTapRecognizer",
        "KCharMacroExpander",
        "KMacroExpanderBase",
        "KWordMacroExpander",
        "KUserGroup",
        "KLocalImageCacheImplementation",
        "KModifierKeyInfoProvider",
        "KDE",
        "KBookmarkGroup",
        "KNotificationAction",
        "KStartupInfoData",
        "KStartupInfoId",
        "KFileItemList",
        "KIO",
        "KUriFilterData",
        "KUriFilterSearchProvider",
        "KUrlComboRequester",
        "KNSCore",
        "KSyntaxHighlighting",
        "KParts",
        "TerminalInterface",
        "KTextEditor",
        "QKeychain",
    };
    for (blocked) |b| {
        if (eql(class_name, b)) return false;
    }

    return true;
}

// ===========================================================================
// Tests
// ===========================================================================

test "allowClass blocks private classes" {
    try std.testing.expect(!allowClass("QFooPrivate"));
    try std.testing.expect(!allowClass("QFooPrivateShared"));
    try std.testing.expect(!allowClass("QBar::SomethingPrivate::Inner"));
    try std.testing.expect(!allowClass("QPrivateSignal"));
}

test "allowClass blocks specific classes" {
    try std.testing.expect(!allowClass("QPolygon"));
    try std.testing.expect(!allowClass("QException"));
    try std.testing.expect(!allowClass("NETWinInfo"));
}

test "allowClass allows normal classes" {
    try std.testing.expect(allowClass("QWidget"));
    try std.testing.expect(allowClass("QObject"));
    try std.testing.expect(allowClass("QPushButton"));
}

test "allowClass blocks std:: except std::pair" {
    try std.testing.expect(!allowClass("std::string"));
    try std.testing.expect(!allowClass("std::vector<int>"));
    try std.testing.expect(allowClass("std::pair<int,int>"));
}

test "allowMethod blocks known bad methods" {
    try std.testing.expect(!allowMethod("QBitArray", "operator~"));
    try std.testing.expect(!allowMethod("QDir", "mkdir"));
    try std.testing.expect(!allowMethod("QDir", "mkpath"));
    try std.testing.expect(!allowMethod("QDeadlineTimer", "_q_data"));
    try std.testing.expect(!allowMethod("KJob", "description"));
}

test "allowMethod allows normal methods" {
    try std.testing.expect(allowMethod("QWidget", "show"));
    try std.testing.expect(allowMethod("QObject", "setParent"));
}

test "allowMethod blocks metaObject and qt_metacast everywhere" {
    try std.testing.expect(!allowMethod("QWidget", "metaObject"));
    try std.testing.expect(!allowMethod("QObject", "qt_metacast"));
    try std.testing.expect(!allowMethod("QWidget", "clone"));
}

test "allowVirtualForClass blocks specific classes" {
    try std.testing.expect(!allowVirtualForClass("QFutureWatcherBase"));
    try std.testing.expect(!allowVirtualForClass("QObjectData"));
    try std.testing.expect(!allowVirtualForClass("QAbstractEventDispatcher"));
    try std.testing.expect(!allowVirtualForClass("KJobTrackerInterface"));
    try std.testing.expect(!allowVirtualForClass("KWidgetJobTracker"));
}

test "allowVirtualForClass allows normal classes" {
    try std.testing.expect(allowVirtualForClass("QWidget"));
    try std.testing.expect(allowVirtualForClass("QObject"));
}

test "allowCtor blocks specific classes" {
    try std.testing.expect(!allowCtor("QStringConverterBase"));
    try std.testing.expect(!allowCtor("QBrushData"));
    try std.testing.expect(!allowCtor("QOpenGLFunctions_1_0_CoreBackend"));
    try std.testing.expect(!allowCtor("Attica::PlatformDependentV2"));
}

test "allowCtor allows normal classes" {
    try std.testing.expect(allowCtor("QWidget"));
    try std.testing.expect(allowCtor("QObject"));
}

test "isBlockedType blocks template types" {
    try std.testing.expect(isBlockedType("QDBusReply<bool>"));
    try std.testing.expect(isBlockedType("QBindable<int>"));
    try std.testing.expect(isBlockedType("QScopedPointer<QFoo>"));
    try std.testing.expect(isBlockedType("std::string"));
}

test "isBlockedType allows std::pair" {
    try std.testing.expect(!isBlockedType("std::pair<int,int>"));
}

test "isBlockedType blocks exact type names" {
    try std.testing.expect(isBlockedType("qfloat16"));
    try std.testing.expect(isBlockedType("QPlatformWindow"));
    try std.testing.expect(isBlockedType("QVulkanInstance"));
    try std.testing.expect(isBlockedType("FILE"));
}

test "isBlockedType blocks function pointers" {
    try std.testing.expect(isBlockedType("void(*)()"));
    try std.testing.expect(isBlockedType("SomeClass::*)(int)"));
}

test "isBlockedType allows normal types" {
    try std.testing.expect(!isBlockedType("QWidget"));
    try std.testing.expect(!isBlockedType("QObject"));
    try std.testing.expect(!isBlockedType("int"));
}

test "allowField blocks specific fields" {
    try std.testing.expect(!allowField("psName"));
    try std.testing.expect(!allowField("psIconName"));
    try std.testing.expect(allowField("someField"));
}

test "allowStructDef blocks specific classes" {
    try std.testing.expect(!allowStructDef("KIO::SslUi"));
    try std.testing.expect(allowStructDef("QWidget"));
}

test "allowInnerClassDef allows specific classes" {
    try std.testing.expect(allowInnerClassDef("Attica::Event"));
    try std.testing.expect(allowInnerClassDef("KTextEditor::Cursor"));
    try std.testing.expect(!allowInnerClassDef("QWidget"));
}

test "importHeaderForClass blocks QPlatform classes" {
    try std.testing.expect(!importHeaderForClass("QPlatformPixmap"));
    try std.testing.expect(!importHeaderForClass("QPlatformWindow"));
}

test "importHeaderForClass blocks specific classes" {
    try std.testing.expect(!importHeaderForClass("QTermWidget"));
    try std.testing.expect(!importHeaderForClass("Konsole"));
    try std.testing.expect(!importHeaderForClass("KTextEditor"));
}

test "importHeaderForClass allows normal classes" {
    try std.testing.expect(importHeaderForClass("QWidget"));
    try std.testing.expect(importHeaderForClass("QLabel"));
}
