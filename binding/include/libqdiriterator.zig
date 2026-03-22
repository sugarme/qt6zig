const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdiriterator.html
pub const qdiriterator = struct {

    /// New constructs a new QDirIterator object.
    pub fn New(dir: ?*anyopaque) QtC.QDirIterator {
        return qtc.QDirIterator_new(@ptrCast(dir));
    }


    /// New2 constructs a new QDirIterator object.
    pub fn New2(path: []const u8) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QDirIterator_new2(path_str);
    }


    /// New3 constructs a new QDirIterator object.
    pub fn New3(path: []const u8, filter: i32) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QDirIterator_new3(path_str, @intCast(filter));
    }


    /// New4 constructs a new QDirIterator object.
    pub fn New4(path: []const u8, nameFilters: []const u8) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QDirIterator_new4(path_str, @ptrCast(nameFilters));
    }


    /// New5 constructs a new QDirIterator object.
    pub fn New5(dir: ?*anyopaque, flags: i32) QtC.QDirIterator {
        return qtc.QDirIterator_new5(@ptrCast(dir), @intCast(flags));
    }


    /// New6 constructs a new QDirIterator object.
    pub fn New6(path: []const u8, flags: i32) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QDirIterator_new6(path_str, @intCast(flags));
    }


    /// New7 constructs a new QDirIterator object.
    pub fn New7(path: []const u8, filter: i32, flags: i32) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QDirIterator_new7(path_str, @intCast(filter), @intCast(flags));
    }


    /// New8 constructs a new QDirIterator object.
    pub fn New8(path: []const u8, nameFilters: []const u8, filters: i32) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QDirIterator_new8(path_str, @ptrCast(nameFilters), @intCast(filters));
    }


    /// New9 constructs a new QDirIterator object.
    pub fn New9(path: []const u8, nameFilters: []const u8, filters: i32, flags: i32) QtC.QDirIterator {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QDirIterator_new9(path_str, @ptrCast(nameFilters), @intCast(filters), @intCast(flags));
    }


    pub fn Next(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirIterator_Next(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdiriterator.Next: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NextFileInfo(self: ?*anyopaque, ) QtC.QFileInfo {
        return qtc.QDirIterator_NextFileInfo(@ptrCast(self));
    }

    pub fn HasNext(self: ?*anyopaque, ) bool {
        return qtc.QDirIterator_HasNext(@ptrCast(self));
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirIterator_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdiriterator.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FilePath(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirIterator_FilePath(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdiriterator.FilePath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FileInfo(self: ?*anyopaque, ) QtC.QFileInfo {
        return qtc.QDirIterator_FileInfo(@ptrCast(self));
    }

    pub fn Path(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDirIterator_Path(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdiriterator.Path: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDirIterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/diriterator.html#types
pub const enums = struct {
    pub const IteratorFlag = enum {
        pub const NoIteratorFlags: i32 = 0;
        pub const FollowSymlinks: i32 = 1;
        pub const Subdirectories: i32 = 2;
    };

};
