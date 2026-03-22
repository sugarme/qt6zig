const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlibrary.html
pub const qlibrary = struct {

    /// New constructs a new QLibrary object.
    pub fn New() QtC.QLibrary {
        return qtc.QLibrary_new();
    }


    /// New2 constructs a new QLibrary object.
    pub fn New2(fileName: []const u8) QtC.QLibrary {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QLibrary_new2(fileName_str);
    }


    /// New3 constructs a new QLibrary object.
    pub fn New3(fileName: []const u8, verNum: i32) QtC.QLibrary {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QLibrary_new3(fileName_str, verNum);
    }


    /// New4 constructs a new QLibrary object.
    pub fn New4(fileName: []const u8, version: []const u8) QtC.QLibrary {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const version_str = qtc.libqt_string{
    .len = version.len,
    .data = version.ptr,
};
return qtc.QLibrary_new4(fileName_str, version_str);
    }


    /// New5 constructs a new QLibrary object.
    pub fn New5(parent: ?*anyopaque) QtC.QLibrary {
        return qtc.QLibrary_new5(@ptrCast(parent));
    }


    /// New6 constructs a new QLibrary object.
    pub fn New6(fileName: []const u8, parent: ?*anyopaque) QtC.QLibrary {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QLibrary_new6(fileName_str, @ptrCast(parent));
    }


    /// New7 constructs a new QLibrary object.
    pub fn New7(fileName: []const u8, verNum: i32, parent: ?*anyopaque) QtC.QLibrary {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QLibrary_new7(fileName_str, verNum, @ptrCast(parent));
    }


    /// New8 constructs a new QLibrary object.
    pub fn New8(fileName: []const u8, version: []const u8, parent: ?*anyopaque) QtC.QLibrary {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const version_str = qtc.libqt_string{
    .len = version.len,
    .data = version.ptr,
};
return qtc.QLibrary_new8(fileName_str, version_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLibrary_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlibrary.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Load(self: ?*anyopaque, ) bool {
        return qtc.QLibrary_Load(@ptrCast(self));
    }

    pub fn Unload(self: ?*anyopaque, ) bool {
        return qtc.QLibrary_Unload(@ptrCast(self));
    }

    pub fn IsLoaded(self: ?*anyopaque, ) bool {
        return qtc.QLibrary_IsLoaded(@ptrCast(self));
    }

    pub fn IsLibrary(fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QLibrary_IsLibrary(fileName_str);
    }

    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QLibrary_SetFileName(@ptrCast(self), fileName_str);
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLibrary_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlibrary.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFileNameAndVersion(self: ?*anyopaque, fileName: []const u8, verNum: i32) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QLibrary_SetFileNameAndVersion(@ptrCast(self), fileName_str, verNum);
    }

    pub fn SetFileNameAndVersion2(self: ?*anyopaque, fileName: []const u8, version: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const version_str = qtc.libqt_string{
    .len = version.len,
    .data = version.ptr,
};
qtc.QLibrary_SetFileNameAndVersion2(@ptrCast(self), fileName_str, version_str);
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLibrary_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlibrary.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetLoadHints(self: ?*anyopaque, hints: i32) void {
        qtc.QLibrary_SetLoadHints(@ptrCast(self), @intCast(hints));
    }

    pub fn LoadHints(self: ?*anyopaque, ) i32 {
        return qtc.QLibrary_LoadHints(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLibrary_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlibrary.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLibrary_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlibrary.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLibrary_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/library.html#types
pub const enums = struct {
    pub const LoadHint = enum {
        pub const ResolveAllSymbolsHint: i32 = 1;
        pub const ExportExternalSymbolsHint: i32 = 2;
        pub const LoadArchiveMemberHint: i32 = 4;
        pub const PreventUnloadHint: i32 = 8;
        pub const DeepBindHint: i32 = 16;
    };

};
