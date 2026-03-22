const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsessionmanager.html
pub const qsessionmanager = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSessionManager_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsessionmanager.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SessionId(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSessionManager_SessionId(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsessionmanager.SessionId: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SessionKey(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSessionManager_SessionKey(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsessionmanager.SessionKey: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AllowsInteraction(self: ?*anyopaque, ) bool {
        return qtc.QSessionManager_AllowsInteraction(@ptrCast(self));
    }

    pub fn AllowsErrorInteraction(self: ?*anyopaque, ) bool {
        return qtc.QSessionManager_AllowsErrorInteraction(@ptrCast(self));
    }

    pub fn Release(self: ?*anyopaque, ) void {
        qtc.QSessionManager_Release(@ptrCast(self));
    }

    pub fn Cancel(self: ?*anyopaque, ) void {
        qtc.QSessionManager_Cancel(@ptrCast(self));
    }

    pub fn SetRestartHint(self: ?*anyopaque, restartHint: i32) void {
        qtc.QSessionManager_SetRestartHint(@ptrCast(self), @intCast(restartHint));
    }

    pub fn RestartHint(self: ?*anyopaque, ) i32 {
        return qtc.QSessionManager_RestartHint(@ptrCast(self));
    }

    pub fn SetRestartCommand(self: ?*anyopaque, restartCommand: []const u8) void {
        qtc.QSessionManager_SetRestartCommand(@ptrCast(self), @ptrCast(restartCommand));
    }

    pub fn RestartCommand(self: ?*anyopaque, ) []const u8 {
        return qtc.QSessionManager_RestartCommand(@ptrCast(self));
    }

    pub fn SetDiscardCommand(self: ?*anyopaque, discardCommand: []const u8) void {
        qtc.QSessionManager_SetDiscardCommand(@ptrCast(self), @ptrCast(discardCommand));
    }

    pub fn DiscardCommand(self: ?*anyopaque, ) []const u8 {
        return qtc.QSessionManager_DiscardCommand(@ptrCast(self));
    }

    pub fn SetManagerProperty(self: ?*anyopaque, name: []const u8, value: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QSessionManager_SetManagerProperty(@ptrCast(self), name_str, value_str);
    }

    pub fn SetManagerProperty2(self: ?*anyopaque, name: []const u8, value: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QSessionManager_SetManagerProperty2(@ptrCast(self), name_str, @ptrCast(value));
    }

    pub fn IsPhase2(self: ?*anyopaque, ) bool {
        return qtc.QSessionManager_IsPhase2(@ptrCast(self));
    }

    pub fn RequestPhase2(self: ?*anyopaque, ) void {
        qtc.QSessionManager_RequestPhase2(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSessionManager_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsessionmanager.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSessionManager_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsessionmanager.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }
};

/// https://doc.qt.io/qt-6/sessionmanager.html#types
pub const enums = struct {
    pub const RestartHint = enum {
        pub const RestartIfRunning: i32 = 0;
        pub const RestartAnyway: i32 = 1;
        pub const RestartImmediately: i32 = 2;
        pub const RestartNever: i32 = 3;
    };

};
