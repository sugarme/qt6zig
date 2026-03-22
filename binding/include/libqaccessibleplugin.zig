const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaccessibleplugin.html
pub const qaccessibleplugin = struct {

    /// New constructs a new QAccessiblePlugin object.
    pub fn New() QtC.QAccessiblePlugin {
        return qtc.QAccessiblePlugin_new();
    }


    /// New2 constructs a new QAccessiblePlugin object.
    pub fn New2(parent: ?*anyopaque) QtC.QAccessiblePlugin {
        return qtc.QAccessiblePlugin_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessiblePlugin_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleplugin.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Create(self: ?*anyopaque, key: []const u8, object: ?*anyopaque) QtC.QAccessibleInterface {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QAccessiblePlugin_Create(@ptrCast(self), key_str, @ptrCast(object));
    }

    /// Allows for overriding the related default method
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessiblePlugin_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreate(self: ?*anyopaque, key: []const u8, object: ?*anyopaque) QtC.QAccessibleInterface {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QAccessiblePlugin_QBaseCreate(@ptrCast(self), key_str, @ptrCast(object));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessiblePlugin_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleplugin.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessiblePlugin_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleplugin.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessiblePlugin_Delete(@ptrCast(self));
    }
};
