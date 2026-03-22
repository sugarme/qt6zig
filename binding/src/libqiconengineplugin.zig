const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qiconengineplugin.html
pub const qiconengineplugin = struct {

    /// New constructs a new QIconEnginePlugin object.
    pub fn New() QtC.QIconEnginePlugin {
        return qtc.QIconEnginePlugin_new();
    }


    /// New2 constructs a new QIconEnginePlugin object.
    pub fn New2(parent: ?*anyopaque) QtC.QIconEnginePlugin {
        return qtc.QIconEnginePlugin_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIconEnginePlugin_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengineplugin.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Create(self: ?*anyopaque, filename: []const u8) QtC.QIconEngine {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
return qtc.QIconEnginePlugin_Create(@ptrCast(self), filename_str);
    }

    /// Allows for overriding the related default method
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QIconEngine) void {
        qtc.QIconEnginePlugin_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreate(self: ?*anyopaque, filename: []const u8) QtC.QIconEngine {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
return qtc.QIconEnginePlugin_QBaseCreate(@ptrCast(self), filename_str);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIconEnginePlugin_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengineplugin.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIconEnginePlugin_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengineplugin.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIconEnginePlugin_Delete(@ptrCast(self));
    }
};
