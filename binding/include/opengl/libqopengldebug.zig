const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopengldebugmessage.html
pub const qopengldebugmessage = struct {

    /// New constructs a new QOpenGLDebugMessage object.
    pub fn New() QtC.QOpenGLDebugMessage {
        return qtc.QOpenGLDebugMessage_new();
    }


    /// New2 constructs a new QOpenGLDebugMessage object.
    pub fn New2(debugMessage: ?*anyopaque) QtC.QOpenGLDebugMessage {
        return qtc.QOpenGLDebugMessage_new2(@ptrCast(debugMessage));
    }


    pub fn OperatorAssign(self: ?*anyopaque, debugMessage: ?*anyopaque) void {
        qtc.QOpenGLDebugMessage_OperatorAssign(@ptrCast(self), @ptrCast(debugMessage));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLDebugMessage_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Source(self: ?*anyopaque, ) i64 {
        return qtc.QOpenGLDebugMessage_Source(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLDebugMessage_Type(@ptrCast(self));
    }

    pub fn Severity(self: ?*anyopaque, ) i64 {
        return qtc.QOpenGLDebugMessage_Severity(@ptrCast(self));
    }

    pub fn Id(self: ?*anyopaque, ) u32 {
        return qtc.QOpenGLDebugMessage_Id(@ptrCast(self));
    }

    pub fn Message(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLDebugMessage_Message(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebugmessage.Message: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CreateApplicationMessage(text: []const u8) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QOpenGLDebugMessage_CreateApplicationMessage(text_str);
    }

    pub fn CreateThirdPartyMessage(text: []const u8) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QOpenGLDebugMessage_CreateThirdPartyMessage(text_str);
    }

    pub fn OperatorEqual(self: ?*anyopaque, debugMessage: ?*anyopaque) bool {
        return qtc.QOpenGLDebugMessage_OperatorEqual(@ptrCast(self), @ptrCast(debugMessage));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, debugMessage: ?*anyopaque) bool {
        return qtc.QOpenGLDebugMessage_OperatorNotEqual(@ptrCast(self), @ptrCast(debugMessage));
    }

    pub fn CreateApplicationMessage2(text: []const u8, id: u32) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QOpenGLDebugMessage_CreateApplicationMessage2(text_str, id);
    }

    pub fn CreateApplicationMessage3(text: []const u8, id: u32, severity: i64) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QOpenGLDebugMessage_CreateApplicationMessage3(text_str, id, @intCast(severity));
    }

    pub fn CreateApplicationMessage4(text: []const u8, id: u32, severity: i64, typeVal: i32) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QOpenGLDebugMessage_CreateApplicationMessage4(text_str, id, @intCast(severity), @intCast(typeVal));
    }

    pub fn CreateThirdPartyMessage2(text: []const u8, id: u32) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QOpenGLDebugMessage_CreateThirdPartyMessage2(text_str, id);
    }

    pub fn CreateThirdPartyMessage3(text: []const u8, id: u32, severity: i64) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QOpenGLDebugMessage_CreateThirdPartyMessage3(text_str, id, @intCast(severity));
    }

    pub fn CreateThirdPartyMessage4(text: []const u8, id: u32, severity: i64, typeVal: i32) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QOpenGLDebugMessage_CreateThirdPartyMessage4(text_str, id, @intCast(severity), @intCast(typeVal));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLDebugMessage_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopengldebuglogger.html
pub const qopengldebuglogger = struct {

    /// New constructs a new QOpenGLDebugLogger object.
    pub fn New() QtC.QOpenGLDebugLogger {
        return qtc.QOpenGLDebugLogger_new();
    }


    /// New2 constructs a new QOpenGLDebugLogger object.
    pub fn New2(parent: ?*anyopaque) QtC.QOpenGLDebugLogger {
        return qtc.QOpenGLDebugLogger_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLDebugLogger_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebuglogger.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Initialize(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLDebugLogger_Initialize(@ptrCast(self));
    }

    pub fn IsLogging(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLDebugLogger_IsLogging(@ptrCast(self));
    }

    pub fn LoggingMode(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLDebugLogger_LoggingMode(@ptrCast(self));
    }

    pub fn MaximumMessageLength(self: ?*anyopaque, ) i64 {
        return qtc.QOpenGLDebugLogger_MaximumMessageLength(@ptrCast(self));
    }

    pub fn PushGroup(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QOpenGLDebugLogger_PushGroup(@ptrCast(self), name_str);
    }

    pub fn PopGroup(self: ?*anyopaque, ) void {
        qtc.QOpenGLDebugLogger_PopGroup(@ptrCast(self));
    }

    pub fn EnableMessages(self: ?*anyopaque, ) void {
        qtc.QOpenGLDebugLogger_EnableMessages(@ptrCast(self));
    }

    pub fn EnableMessages2(self: ?*anyopaque, ids: []const u8) void {
        qtc.QOpenGLDebugLogger_EnableMessages2(@ptrCast(self), @ptrCast(ids));
    }

    pub fn DisableMessages(self: ?*anyopaque, ) void {
        qtc.QOpenGLDebugLogger_DisableMessages(@ptrCast(self));
    }

    pub fn DisableMessages2(self: ?*anyopaque, ids: []const u8) void {
        qtc.QOpenGLDebugLogger_DisableMessages2(@ptrCast(self), @ptrCast(ids));
    }

    pub fn LoggedMessages(self: ?*anyopaque, ) []const u8 {
        return qtc.QOpenGLDebugLogger_LoggedMessages(@ptrCast(self));
    }

    pub fn LogMessage(self: ?*anyopaque, debugMessage: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_LogMessage(@ptrCast(self), @ptrCast(debugMessage));
    }

    pub fn StartLogging(self: ?*anyopaque, ) void {
        qtc.QOpenGLDebugLogger_StartLogging(@ptrCast(self));
    }

    pub fn StopLogging(self: ?*anyopaque, ) void {
        qtc.QOpenGLDebugLogger_StopLogging(@ptrCast(self));
    }

    pub fn MessageLogged(self: ?*anyopaque, debugMessage: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_MessageLogged(@ptrCast(self), @ptrCast(debugMessage));
    }

    pub fn OnMessageLogged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_Connect_MessageLogged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLDebugLogger_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebuglogger.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLDebugLogger_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebuglogger.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn PushGroup2(self: ?*anyopaque, name: []const u8, id: u32) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QOpenGLDebugLogger_PushGroup2(@ptrCast(self), name_str, id);
    }

    pub fn PushGroup3(self: ?*anyopaque, name: []const u8, id: u32, source: i64) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QOpenGLDebugLogger_PushGroup3(@ptrCast(self), name_str, id, @intCast(source));
    }

    pub fn EnableMessages1(self: ?*anyopaque, sources: i64) void {
        qtc.QOpenGLDebugLogger_EnableMessages1(@ptrCast(self), @intCast(sources));
    }

    pub fn EnableMessages22(self: ?*anyopaque, sources: i64, types: i64) void {
        qtc.QOpenGLDebugLogger_EnableMessages22(@ptrCast(self), @intCast(sources), @intCast(types));
    }

    pub fn EnableMessages3(self: ?*anyopaque, sources: i64, types: i64, severities: i64) void {
        qtc.QOpenGLDebugLogger_EnableMessages3(@ptrCast(self), @intCast(sources), @intCast(types), @intCast(severities));
    }

    pub fn EnableMessages23(self: ?*anyopaque, ids: []const u8, sources: i64) void {
        qtc.QOpenGLDebugLogger_EnableMessages23(@ptrCast(self), @ptrCast(ids), @intCast(sources));
    }

    pub fn EnableMessages32(self: ?*anyopaque, ids: []const u8, sources: i64, types: i64) void {
        qtc.QOpenGLDebugLogger_EnableMessages32(@ptrCast(self), @ptrCast(ids), @intCast(sources), @intCast(types));
    }

    pub fn DisableMessages1(self: ?*anyopaque, sources: i64) void {
        qtc.QOpenGLDebugLogger_DisableMessages1(@ptrCast(self), @intCast(sources));
    }

    pub fn DisableMessages22(self: ?*anyopaque, sources: i64, types: i64) void {
        qtc.QOpenGLDebugLogger_DisableMessages22(@ptrCast(self), @intCast(sources), @intCast(types));
    }

    pub fn DisableMessages3(self: ?*anyopaque, sources: i64, types: i64, severities: i64) void {
        qtc.QOpenGLDebugLogger_DisableMessages3(@ptrCast(self), @intCast(sources), @intCast(types), @intCast(severities));
    }

    pub fn DisableMessages23(self: ?*anyopaque, ids: []const u8, sources: i64) void {
        qtc.QOpenGLDebugLogger_DisableMessages23(@ptrCast(self), @ptrCast(ids), @intCast(sources));
    }

    pub fn DisableMessages32(self: ?*anyopaque, ids: []const u8, sources: i64, types: i64) void {
        qtc.QOpenGLDebugLogger_DisableMessages32(@ptrCast(self), @ptrCast(ids), @intCast(sources), @intCast(types));
    }

    pub fn StartLogging1(self: ?*anyopaque, loggingMode: i32) void {
        qtc.QOpenGLDebugLogger_StartLogging1(@ptrCast(self), @intCast(loggingMode));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/opengldebug.html#types
pub const enums = struct {
    pub const Source = enum {
        pub const InvalidSource: i64 = 0;
        pub const APISource: i64 = 1;
        pub const WindowSystemSource: i64 = 2;
        pub const ShaderCompilerSource: i64 = 4;
        pub const ThirdPartySource: i64 = 8;
        pub const ApplicationSource: i64 = 16;
        pub const OtherSource: i64 = 32;
        pub const LastSource: i64 = 32;
        pub const AnySource: i64 = 4294967295;
    };

    pub const Type = enum {
        pub const InvalidType: i64 = 0;
        pub const ErrorType: i64 = 1;
        pub const DeprecatedBehaviorType: i64 = 2;
        pub const UndefinedBehaviorType: i64 = 4;
        pub const PortabilityType: i64 = 8;
        pub const PerformanceType: i64 = 16;
        pub const OtherType: i64 = 32;
        pub const MarkerType: i64 = 64;
        pub const GroupPushType: i64 = 128;
        pub const GroupPopType: i64 = 256;
        pub const LastType: i64 = 256;
        pub const AnyType: i64 = 4294967295;
    };

    pub const Severity = enum {
        pub const InvalidSeverity: i64 = 0;
        pub const HighSeverity: i64 = 1;
        pub const MediumSeverity: i64 = 2;
        pub const LowSeverity: i64 = 4;
        pub const NotificationSeverity: i64 = 8;
        pub const LastSeverity: i64 = 8;
        pub const AnySeverity: i64 = 4294967295;
    };

    pub const LoggingMode = enum {
        pub const AsynchronousLogging: i32 = 0;
        pub const SynchronousLogging: i32 = 1;
    };

};
