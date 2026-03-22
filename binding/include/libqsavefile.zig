const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsavefile.html
pub const qsavefile = struct {

    /// New constructs a new QSaveFile object.
    pub fn New(name: []const u8) QtC.QSaveFile {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSaveFile_new(name_str);
    }


    /// New2 constructs a new QSaveFile object.
    pub fn New2() QtC.QSaveFile {
        return qtc.QSaveFile_new2();
    }


    /// New3 constructs a new QSaveFile object.
    pub fn New3(name: []const u8, parent: ?*anyopaque) QtC.QSaveFile {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QSaveFile_new3(name_str, @ptrCast(parent));
    }


    /// New4 constructs a new QSaveFile object.
    pub fn New4(parent: ?*anyopaque) QtC.QSaveFile {
        return qtc.QSaveFile_new4(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSaveFile_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSaveFile_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnFileName(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QSaveFile_OnFileName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSaveFile_QBaseFileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFileName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QSaveFile_SetFileName(@ptrCast(self), name_str);
    }

    pub fn Open(self: ?*anyopaque, flags: i32) bool {
        return qtc.QSaveFile_Open(@ptrCast(self), @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSaveFile_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpen(self: ?*anyopaque, flags: i32) bool {
        return qtc.QSaveFile_QBaseOpen(@ptrCast(self), @intCast(flags));
    }

    pub fn Commit(self: ?*anyopaque, ) bool {
        return qtc.QSaveFile_Commit(@ptrCast(self));
    }

    pub fn CancelWriting(self: ?*anyopaque, ) void {
        qtc.QSaveFile_CancelWriting(@ptrCast(self));
    }

    pub fn SetDirectWriteFallback(self: ?*anyopaque, enabled: bool) void {
        qtc.QSaveFile_SetDirectWriteFallback(@ptrCast(self), enabled);
    }

    pub fn DirectWriteFallback(self: ?*anyopaque, ) bool {
        return qtc.QSaveFile_DirectWriteFallback(@ptrCast(self));
    }

    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QSaveFile_WriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    /// Allows for overriding the related default method
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QSaveFile_OnWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QSaveFile_QBaseWriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSaveFile_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSaveFile_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsavefile.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSaveFile_Delete(@ptrCast(self));
    }
};
