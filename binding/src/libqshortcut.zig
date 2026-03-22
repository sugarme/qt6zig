const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qshortcut.html
pub const qshortcut = struct {

    /// New constructs a new QShortcut object.
    pub fn New(parent: ?*anyopaque) QtC.QShortcut {
        return qtc.QShortcut_new(@ptrCast(parent));
    }


    /// New2 constructs a new QShortcut object.
    pub fn New2(key: ?*anyopaque, parent: ?*anyopaque) QtC.QShortcut {
        return qtc.QShortcut_new2(@ptrCast(key), @ptrCast(parent));
    }


    /// New3 constructs a new QShortcut object.
    pub fn New3(key: i32, parent: ?*anyopaque) QtC.QShortcut {
        return qtc.QShortcut_new3(@intCast(key), @ptrCast(parent));
    }


    /// New4 constructs a new QShortcut object.
    pub fn New4(key: ?*anyopaque, parent: ?*anyopaque, member: []const u8) QtC.QShortcut {
        return qtc.QShortcut_new4(@ptrCast(key), @ptrCast(parent), @ptrCast(member));
    }


    /// New5 constructs a new QShortcut object.
    pub fn New5(key: ?*anyopaque, parent: ?*anyopaque, member: []const u8, ambiguousMember: []const u8) QtC.QShortcut {
        return qtc.QShortcut_new5(@ptrCast(key), @ptrCast(parent), @ptrCast(member), @ptrCast(ambiguousMember));
    }


    /// New6 constructs a new QShortcut object.
    pub fn New6(key: ?*anyopaque, parent: ?*anyopaque, member: []const u8, ambiguousMember: []const u8, context: i32) QtC.QShortcut {
        return qtc.QShortcut_new6(@ptrCast(key), @ptrCast(parent), @ptrCast(member), @ptrCast(ambiguousMember), @intCast(context));
    }


    /// New7 constructs a new QShortcut object.
    pub fn New7(key: i32, parent: ?*anyopaque, member: []const u8) QtC.QShortcut {
        return qtc.QShortcut_new7(@intCast(key), @ptrCast(parent), @ptrCast(member));
    }


    /// New8 constructs a new QShortcut object.
    pub fn New8(key: i32, parent: ?*anyopaque, member: []const u8, ambiguousMember: []const u8) QtC.QShortcut {
        return qtc.QShortcut_new8(@intCast(key), @ptrCast(parent), @ptrCast(member), @ptrCast(ambiguousMember));
    }


    /// New9 constructs a new QShortcut object.
    pub fn New9(key: i32, parent: ?*anyopaque, member: []const u8, ambiguousMember: []const u8, context: i32) QtC.QShortcut {
        return qtc.QShortcut_new9(@intCast(key), @ptrCast(parent), @ptrCast(member), @ptrCast(ambiguousMember), @intCast(context));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QShortcut_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qshortcut.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QShortcut_SetKey(@ptrCast(self), @ptrCast(key));
    }

    pub fn Key(self: ?*anyopaque, ) QtC.QKeySequence {
        return qtc.QShortcut_Key(@ptrCast(self));
    }

    pub fn SetKeys(self: ?*anyopaque, key: i32) void {
        qtc.QShortcut_SetKeys(@ptrCast(self), @intCast(key));
    }

    pub fn SetKeys2(self: ?*anyopaque, keys: []const u8) void {
        qtc.QShortcut_SetKeys2(@ptrCast(self), @ptrCast(keys));
    }

    pub fn Keys(self: ?*anyopaque, ) []const u8 {
        return qtc.QShortcut_Keys(@ptrCast(self));
    }

    pub fn SetEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QShortcut_SetEnabled(@ptrCast(self), enable);
    }

    pub fn IsEnabled(self: ?*anyopaque, ) bool {
        return qtc.QShortcut_IsEnabled(@ptrCast(self));
    }

    pub fn SetContext(self: ?*anyopaque, context: i32) void {
        qtc.QShortcut_SetContext(@ptrCast(self), @intCast(context));
    }

    pub fn Context(self: ?*anyopaque, ) i32 {
        return qtc.QShortcut_Context(@ptrCast(self));
    }

    pub fn SetAutoRepeat(self: ?*anyopaque, on: bool) void {
        qtc.QShortcut_SetAutoRepeat(@ptrCast(self), on);
    }

    pub fn AutoRepeat(self: ?*anyopaque, ) bool {
        return qtc.QShortcut_AutoRepeat(@ptrCast(self));
    }

    pub fn Id(self: ?*anyopaque, ) i32 {
        return qtc.QShortcut_Id(@ptrCast(self));
    }

    pub fn SetWhatsThis(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QShortcut_SetWhatsThis(@ptrCast(self), text_str);
    }

    pub fn WhatsThis(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QShortcut_WhatsThis(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qshortcut.WhatsThis: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Activated(self: ?*anyopaque, ) void {
        qtc.QShortcut_Activated(@ptrCast(self));
    }

    pub fn OnActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QShortcut_Connect_Activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ActivatedAmbiguously(self: ?*anyopaque, ) void {
        qtc.QShortcut_ActivatedAmbiguously(@ptrCast(self));
    }

    pub fn OnActivatedAmbiguously(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QShortcut_Connect_ActivatedAmbiguously(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QShortcut_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QShortcut_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QShortcut_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QShortcut_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qshortcut.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QShortcut_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qshortcut.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QShortcut_Delete(@ptrCast(self));
    }
};
