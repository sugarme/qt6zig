const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgenericplugin.html
pub const qgenericplugin = struct {

    /// New constructs a new QGenericPlugin object.
    pub fn New() QtC.QGenericPlugin {
        return qtc.QGenericPlugin_new();
    }


    /// New2 constructs a new QGenericPlugin object.
    pub fn New2(parent: ?*anyopaque) QtC.QGenericPlugin {
        return qtc.QGenericPlugin_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGenericPlugin_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgenericplugin.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Create(self: ?*anyopaque, name: []const u8, spec: []const u8) QtC.QObject {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const spec_str = qtc.libqt_string{
    .len = spec.len,
    .data = spec.ptr,
};
return qtc.QGenericPlugin_Create(@ptrCast(self), name_str, spec_str);
    }

    /// Allows for overriding the related default method
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) QtC.QObject) void {
        qtc.QGenericPlugin_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreate(self: ?*anyopaque, name: []const u8, spec: []const u8) QtC.QObject {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const spec_str = qtc.libqt_string{
    .len = spec.len,
    .data = spec.ptr,
};
return qtc.QGenericPlugin_QBaseCreate(@ptrCast(self), name_str, spec_str);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGenericPlugin_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgenericplugin.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGenericPlugin_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qgenericplugin.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGenericPlugin_Delete(@ptrCast(self));
    }
};
