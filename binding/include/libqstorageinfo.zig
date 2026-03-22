const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstorageinfo.html
pub const qstorageinfo = struct {

    /// New constructs a new QStorageInfo object.
    pub fn New() QtC.QStorageInfo {
        return qtc.QStorageInfo_new();
    }


    /// New2 constructs a new QStorageInfo object.
    pub fn New2(path: []const u8) QtC.QStorageInfo {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
return qtc.QStorageInfo_new2(path_str);
    }


    /// New3 constructs a new QStorageInfo object.
    pub fn New3(dir: ?*anyopaque) QtC.QStorageInfo {
        return qtc.QStorageInfo_new3(@ptrCast(dir));
    }


    /// New4 constructs a new QStorageInfo object.
    pub fn New4(other: ?*anyopaque) QtC.QStorageInfo {
        return qtc.QStorageInfo_new4(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStorageInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStorageInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
qtc.QStorageInfo_SetPath(@ptrCast(self), path_str);
    }

    pub fn RootPath(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStorageInfo_RootPath(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstorageinfo.RootPath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Device(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QStorageInfo_Device(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstorageinfo.Device: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Subvolume(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QStorageInfo_Subvolume(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstorageinfo.Subvolume: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn FileSystemType(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QStorageInfo_FileSystemType(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstorageinfo.FileSystemType: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStorageInfo_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstorageinfo.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DisplayName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStorageInfo_DisplayName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstorageinfo.DisplayName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BytesTotal(self: ?*anyopaque, ) i64 {
        return qtc.QStorageInfo_BytesTotal(@ptrCast(self));
    }

    pub fn BytesFree(self: ?*anyopaque, ) i64 {
        return qtc.QStorageInfo_BytesFree(@ptrCast(self));
    }

    pub fn BytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QStorageInfo_BytesAvailable(@ptrCast(self));
    }

    pub fn BlockSize(self: ?*anyopaque, ) i32 {
        return qtc.QStorageInfo_BlockSize(@ptrCast(self));
    }

    pub fn IsRoot(self: ?*anyopaque, ) bool {
        return qtc.QStorageInfo_IsRoot(@ptrCast(self));
    }

    pub fn IsReadOnly(self: ?*anyopaque, ) bool {
        return qtc.QStorageInfo_IsReadOnly(@ptrCast(self));
    }

    pub fn IsReady(self: ?*anyopaque, ) bool {
        return qtc.QStorageInfo_IsReady(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QStorageInfo_IsValid(@ptrCast(self));
    }

    pub fn Refresh(self: ?*anyopaque, ) void {
        qtc.QStorageInfo_Refresh(@ptrCast(self));
    }

    pub fn MountedVolumes() []const u8 {
        return qtc.QStorageInfo_MountedVolumes();
    }

    pub fn Root() QtC.QStorageInfo {
        return qtc.QStorageInfo_Root();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStorageInfo_Delete(@ptrCast(self));
    }
};
