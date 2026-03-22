const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcoreapplication.html
pub const qcoreapplication = struct {

    /// New constructs a new QCoreApplication object.
    pub fn New(argc: *i32, argv: []const u8) QtC.QCoreApplication {
        return qtc.QCoreApplication_new(@ptrCast(argc), @ptrCast(argv));
    }


    /// New2 constructs a new QCoreApplication object.
    pub fn New2(argc: *i32, argv: []const u8, param3: i32) QtC.QCoreApplication {
        return qtc.QCoreApplication_new2(@ptrCast(argc), @ptrCast(argv), param3);
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Arguments() []const u8 {
        return qtc.QCoreApplication_Arguments();
    }

    pub fn SetAttribute(attribute: i32) void {
        qtc.QCoreApplication_SetAttribute(@intCast(attribute));
    }

    pub fn TestAttribute(attribute: i32) bool {
        return qtc.QCoreApplication_TestAttribute(@intCast(attribute));
    }

    pub fn SetOrganizationDomain(orgDomain: []const u8) void {
        const orgDomain_str = qtc.libqt_string{
    .len = orgDomain.len,
    .data = orgDomain.ptr,
};
qtc.QCoreApplication_SetOrganizationDomain(orgDomain_str);
    }

    pub fn OrganizationDomain(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_OrganizationDomain();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.OrganizationDomain: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOrganizationName(orgName: []const u8) void {
        const orgName_str = qtc.libqt_string{
    .len = orgName.len,
    .data = orgName.ptr,
};
qtc.QCoreApplication_SetOrganizationName(orgName_str);
    }

    pub fn OrganizationName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_OrganizationName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.OrganizationName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetApplicationName(application: []const u8) void {
        const application_str = qtc.libqt_string{
    .len = application.len,
    .data = application.ptr,
};
qtc.QCoreApplication_SetApplicationName(application_str);
    }

    pub fn ApplicationName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetApplicationVersion(version: []const u8) void {
        const version_str = qtc.libqt_string{
    .len = version.len,
    .data = version.ptr,
};
qtc.QCoreApplication_SetApplicationVersion(version_str);
    }

    pub fn ApplicationVersion(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationVersion();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationVersion: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSetuidAllowed(allow: bool) void {
        qtc.QCoreApplication_SetSetuidAllowed(allow);
    }

    pub fn IsSetuidAllowed() bool {
        return qtc.QCoreApplication_IsSetuidAllowed();
    }

    pub fn Instance() QtC.QCoreApplication {
        return qtc.QCoreApplication_Instance();
    }

    pub fn Exec() i32 {
        return qtc.QCoreApplication_Exec();
    }

    pub fn ProcessEvents() void {
        qtc.QCoreApplication_ProcessEvents();
    }

    pub fn ProcessEvents2(flags: i32, maxtime: i32) void {
        qtc.QCoreApplication_ProcessEvents2(@intCast(flags), maxtime);
    }

    pub fn ProcessEvents3(flags: i32, deadline: QtC.QDeadlineTimer) void {
        qtc.QCoreApplication_ProcessEvents3(@intCast(flags), @ptrCast(deadline));
    }

    pub fn SendEvent(receiver: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCoreApplication_SendEvent(@ptrCast(receiver), @ptrCast(event));
    }

    pub fn PostEvent(receiver: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_PostEvent(@ptrCast(receiver), @ptrCast(event));
    }

    pub fn SendPostedEvents() void {
        qtc.QCoreApplication_SendPostedEvents();
    }

    pub fn RemovePostedEvents(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_RemovePostedEvents(@ptrCast(receiver));
    }

    pub fn EventDispatcher() QtC.QAbstractEventDispatcher {
        return qtc.QCoreApplication_EventDispatcher();
    }

    pub fn SetEventDispatcher(eventDispatcher: ?*anyopaque) void {
        qtc.QCoreApplication_SetEventDispatcher(@ptrCast(eventDispatcher));
    }

    pub fn Notify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QCoreApplication_Notify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCoreApplication_OnNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNotify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QCoreApplication_QBaseNotify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn StartingUp() bool {
        return qtc.QCoreApplication_StartingUp();
    }

    pub fn ClosingDown() bool {
        return qtc.QCoreApplication_ClosingDown();
    }

    pub fn ApplicationDirPath(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationDirPath();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationDirPath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ApplicationFilePath(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationFilePath();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.ApplicationFilePath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ApplicationPid() i64 {
        return qtc.QCoreApplication_ApplicationPid();
    }

    pub fn CheckPermission(self: ?*anyopaque, permission: ?*anyopaque) i32 {
        return qtc.QCoreApplication_CheckPermission(@ptrCast(self), @ptrCast(permission));
    }

    pub fn SetLibraryPaths(libraryPaths: []const u8) void {
        qtc.QCoreApplication_SetLibraryPaths(@ptrCast(libraryPaths));
    }

    pub fn LibraryPaths() []const u8 {
        return qtc.QCoreApplication_LibraryPaths();
    }

    pub fn AddLibraryPath(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QCoreApplication_AddLibraryPath(param1_str);
    }

    pub fn RemoveLibraryPath(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QCoreApplication_RemoveLibraryPath(param1_str);
    }

    pub fn InstallTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_InstallTranslator(@ptrCast(messageFile));
    }

    pub fn RemoveTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_RemoveTranslator(@ptrCast(messageFile));
    }

    pub fn Translate(context: []const u8, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_Translate(@ptrCast(context), @ptrCast(key));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Translate: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        return qtc.QCoreApplication_ResolveInterface(@ptrCast(self), @ptrCast(name), revision);
    }

    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ResolveInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QCoreApplication_OnResolveInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        return qtc.QCoreApplication_QBaseResolveInterface(@ptrCast(self), @ptrCast(name), revision);
    }

    pub fn InstallNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_InstallNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    pub fn OnInstallNativeEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_InstallNativeEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RemoveNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_RemoveNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    pub fn OnRemoveNativeEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_RemoveNativeEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IsQuitLockEnabled() bool {
        return qtc.QCoreApplication_IsQuitLockEnabled();
    }

    pub fn SetQuitLockEnabled(enabled: bool) void {
        qtc.QCoreApplication_SetQuitLockEnabled(enabled);
    }

    pub fn Quit() void {
        qtc.QCoreApplication_Quit();
    }

    pub fn Exit() void {
        qtc.QCoreApplication_Exit();
    }

    pub fn OrganizationNameChanged(self: ?*anyopaque, ) void {
        qtc.QCoreApplication_OrganizationNameChanged(@ptrCast(self));
    }

    pub fn OnOrganizationNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn OrganizationDomainChanged(self: ?*anyopaque, ) void {
        qtc.QCoreApplication_OrganizationDomainChanged(@ptrCast(self));
    }

    pub fn OnOrganizationDomainChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationDomainChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ApplicationNameChanged(self: ?*anyopaque, ) void {
        qtc.QCoreApplication_ApplicationNameChanged(@ptrCast(self));
    }

    pub fn OnApplicationNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ApplicationVersionChanged(self: ?*anyopaque, ) void {
        qtc.QCoreApplication_ApplicationVersionChanged(@ptrCast(self));
    }

    pub fn OnApplicationVersionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationVersionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QCoreApplication_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCoreApplication_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QCoreApplication_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn CompressEvent(self: ?*anyopaque, param1: ?*anyopaque, receiver: ?*anyopaque, param3: *QPostEventList) bool {
        return qtc.QCoreApplication_CompressEvent(@ptrCast(self), @ptrCast(param1), @ptrCast(receiver), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    pub fn OnCompressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, *QPostEventList) callconv(.c) bool) void {
        qtc.QCoreApplication_OnCompressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCompressEvent(self: ?*anyopaque, param1: ?*anyopaque, receiver: ?*anyopaque, param3: *QPostEventList) bool {
        return qtc.QCoreApplication_QBaseCompressEvent(@ptrCast(self), @ptrCast(param1), @ptrCast(receiver), @ptrCast(param3));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetAttribute2(attribute: i32, on: bool) void {
        qtc.QCoreApplication_SetAttribute2(@intCast(attribute), on);
    }

    pub fn ProcessEvents1(flags: i32) void {
        qtc.QCoreApplication_ProcessEvents1(@intCast(flags));
    }

    pub fn PostEvent3(receiver: ?*anyopaque, event: ?*anyopaque, priority: i32) void {
        qtc.QCoreApplication_PostEvent3(@ptrCast(receiver), @ptrCast(event), priority);
    }

    pub fn SendPostedEvents1(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_SendPostedEvents1(@ptrCast(receiver));
    }

    pub fn SendPostedEvents2(receiver: ?*anyopaque, event_type: i32) void {
        qtc.QCoreApplication_SendPostedEvents2(@ptrCast(receiver), event_type);
    }

    pub fn RemovePostedEvents2(receiver: ?*anyopaque, eventType: i32) void {
        qtc.QCoreApplication_RemovePostedEvents2(@ptrCast(receiver), eventType);
    }

    pub fn Translate3(context: []const u8, key: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_Translate3(@ptrCast(context), @ptrCast(key), @ptrCast(disambiguation));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Translate3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Translate4(context: []const u8, key: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_Translate4(@ptrCast(context), @ptrCast(key), @ptrCast(disambiguation), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoreapplication.Translate4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Exit1(retcode: i32) void {
        qtc.QCoreApplication_Exit1(retcode);
    }

    /// Wrapper to allow calling private signal
    pub fn OnaboutToQuit(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_aboutToQuit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCoreApplication_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/coreapplication.html#types
pub const enums = struct {
};
