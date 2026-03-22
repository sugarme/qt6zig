const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtemporaryfile.html
pub const qtemporaryfile = struct {

    /// New constructs a new QTemporaryFile object.
    pub fn New() QtC.QTemporaryFile {
        return qtc.QTemporaryFile_new();
    }


    /// New2 constructs a new QTemporaryFile object.
    pub fn New2(templateName: []const u8) QtC.QTemporaryFile {
        const templateName_str = qtc.libqt_string{
    .len = templateName.len,
    .data = templateName.ptr,
};
return qtc.QTemporaryFile_new2(templateName_str);
    }


    /// New3 constructs a new QTemporaryFile object.
    pub fn New3(parent: ?*anyopaque) QtC.QTemporaryFile {
        return qtc.QTemporaryFile_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QTemporaryFile object.
    pub fn New4(templateName: []const u8, parent: ?*anyopaque) QtC.QTemporaryFile {
        const templateName_str = qtc.libqt_string{
    .len = templateName.len,
    .data = templateName.ptr,
};
return qtc.QTemporaryFile_new4(templateName_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTemporaryFile_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AutoRemove(self: ?*anyopaque, ) bool {
        return qtc.QTemporaryFile_AutoRemove(@ptrCast(self));
    }

    pub fn SetAutoRemove(self: ?*anyopaque, b: bool) void {
        qtc.QTemporaryFile_SetAutoRemove(@ptrCast(self), b);
    }

    pub fn Open(self: ?*anyopaque, ) bool {
        return qtc.QTemporaryFile_Open(@ptrCast(self));
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTemporaryFile_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnFileName(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QTemporaryFile_OnFileName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTemporaryFile_QBaseFileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FileTemplate(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTemporaryFile_FileTemplate(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.FileTemplate: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFileTemplate(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QTemporaryFile_SetFileTemplate(@ptrCast(self), name_str);
    }

    pub fn Rename(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
    .len = newName.len,
    .data = newName.ptr,
};
return qtc.QTemporaryFile_Rename(@ptrCast(self), newName_str);
    }

    pub fn CreateNativeFile(fileName: []const u8) QtC.QTemporaryFile {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QTemporaryFile_CreateNativeFile(fileName_str);
    }

    pub fn CreateNativeFile2(file: ?*anyopaque) QtC.QTemporaryFile {
        return qtc.QTemporaryFile_CreateNativeFile2(@ptrCast(file));
    }

    pub fn Open2(self: ?*anyopaque, flags: i32) bool {
        return qtc.QTemporaryFile_Open2(@ptrCast(self), @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnOpen2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QTemporaryFile_OnOpen2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpen2(self: ?*anyopaque, flags: i32) bool {
        return qtc.QTemporaryFile_QBaseOpen2(@ptrCast(self), @intCast(flags));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTemporaryFile_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTemporaryFile_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTemporaryFile_Delete(@ptrCast(self));
    }
};
