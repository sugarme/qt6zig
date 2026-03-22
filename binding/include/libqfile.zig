const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qntfspermissioncheckguard.html
pub const qntfspermissioncheckguard = struct {

    /// New constructs a new QNtfsPermissionCheckGuard object.
    pub fn New() QtC.QNtfsPermissionCheckGuard {
        return qtc.QNtfsPermissionCheckGuard_new();
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNtfsPermissionCheckGuard_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qfile.html
pub const qfile = struct {

    /// New constructs a new QFile object.
    pub fn New() QtC.QFile {
        return qtc.QFile_new();
    }


    /// New2 constructs a new QFile object.
    pub fn New2(name: []const u8) QtC.QFile {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QFile_new2(name_str);
    }


    /// New3 constructs a new QFile object.
    pub fn New3(parent: ?*anyopaque) QtC.QFile {
        return qtc.QFile_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QFile object.
    pub fn New4(name: []const u8, parent: ?*anyopaque) QtC.QFile {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QFile_new4(name_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFile_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFile_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnFileName(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QFile_OnFileName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFile_QBaseFileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FilesystemFileName(self: ?*anyopaque, ) std::filesystem::path {
        return qtc.QFile_FilesystemFileName(@ptrCast(self));
    }

    pub fn SetFileName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QFile_SetFileName(@ptrCast(self), name_str);
    }

    pub fn EncodeName(fileName: []const u8, allocator: std.mem.Allocator) []u8 {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QFile_EncodeName(fileName_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.EncodeName: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn DecodeName(localFileName: []u8, allocator: std.mem.Allocator) []const u8 {
        const localFileName_str = qtc.libqt_string{
    .len = localFileName.len,
    .data = localFileName.ptr,
};
const _str = qtc.QFile_DecodeName(localFileName_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.DecodeName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DecodeName2(localFileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFile_DecodeName2(@ptrCast(localFileName));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.DecodeName2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Exists(self: ?*anyopaque, ) bool {
        return qtc.QFile_Exists(@ptrCast(self));
    }

    pub fn Exists2(fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QFile_Exists2(fileName_str);
    }

    pub fn SymLinkTarget(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFile_SymLinkTarget(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.SymLinkTarget: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SymLinkTarget2(fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const _str = qtc.QFile_SymLinkTarget2(fileName_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.SymLinkTarget2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FilesystemSymLinkTarget(self: ?*anyopaque, ) std::filesystem::path {
        return qtc.QFile_FilesystemSymLinkTarget(@ptrCast(self));
    }

    pub fn Remove(self: ?*anyopaque, ) bool {
        return qtc.QFile_Remove(@ptrCast(self));
    }

    pub fn Remove2(fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QFile_Remove2(fileName_str);
    }

    pub fn MoveToTrash(self: ?*anyopaque, ) bool {
        return qtc.QFile_MoveToTrash(@ptrCast(self));
    }

    pub fn MoveToTrash2(fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QFile_MoveToTrash2(fileName_str);
    }

    pub fn Rename(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
    .len = newName.len,
    .data = newName.ptr,
};
return qtc.QFile_Rename(@ptrCast(self), newName_str);
    }

    pub fn Rename2(oldName: []const u8, newName: []const u8) bool {
        const oldName_str = qtc.libqt_string{
    .len = oldName.len,
    .data = oldName.ptr,
};
const newName_str = qtc.libqt_string{
    .len = newName.len,
    .data = newName.ptr,
};
return qtc.QFile_Rename2(oldName_str, newName_str);
    }

    pub fn Link(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
    .len = newName.len,
    .data = newName.ptr,
};
return qtc.QFile_Link(@ptrCast(self), newName_str);
    }

    pub fn Link2(fileName: []const u8, newName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const newName_str = qtc.libqt_string{
    .len = newName.len,
    .data = newName.ptr,
};
return qtc.QFile_Link2(fileName_str, newName_str);
    }

    pub fn Copy(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
    .len = newName.len,
    .data = newName.ptr,
};
return qtc.QFile_Copy(@ptrCast(self), newName_str);
    }

    pub fn Copy2(fileName: []const u8, newName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const newName_str = qtc.libqt_string{
    .len = newName.len,
    .data = newName.ptr,
};
return qtc.QFile_Copy2(fileName_str, newName_str);
    }

    pub fn Open(self: ?*anyopaque, flags: i32) bool {
        return qtc.QFile_Open(@ptrCast(self), @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFile_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpen(self: ?*anyopaque, flags: i32) bool {
        return qtc.QFile_QBaseOpen(@ptrCast(self), @intCast(flags));
    }

    pub fn Open2(self: ?*anyopaque, flags: i32, permissions: i32) bool {
        return qtc.QFile_Open2(@ptrCast(self), @intCast(flags), @intCast(permissions));
    }

    pub fn Open3(self: ?*anyopaque, f: *FILE, ioFlags: i32) bool {
        return qtc.QFile_Open3(@ptrCast(self), @ptrCast(f), @intCast(ioFlags));
    }

    pub fn Open4(self: ?*anyopaque, fd: i32, ioFlags: i32) bool {
        return qtc.QFile_Open4(@ptrCast(self), fd, @intCast(ioFlags));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QFile_Size(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QFile_OnSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSize(self: ?*anyopaque, ) i64 {
        return qtc.QFile_QBaseSize(@ptrCast(self));
    }

    pub fn Resize(self: ?*anyopaque, sz: i64) bool {
        return qtc.QFile_Resize(@ptrCast(self), sz);
    }

    /// Allows for overriding the related default method
    pub fn OnResize(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QFile_OnResize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResize(self: ?*anyopaque, sz: i64) bool {
        return qtc.QFile_QBaseResize(@ptrCast(self), sz);
    }

    pub fn Resize2(filename: []const u8, sz: i64) bool {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
return qtc.QFile_Resize2(filename_str, sz);
    }

    pub fn Permissions(self: ?*anyopaque, ) i32 {
        return qtc.QFile_Permissions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPermissions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QFile_OnPermissions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePermissions(self: ?*anyopaque, ) i32 {
        return qtc.QFile_QBasePermissions(@ptrCast(self));
    }

    pub fn Permissions2(filename: []const u8) i32 {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
return qtc.QFile_Permissions2(filename_str);
    }

    pub fn SetPermissions(self: ?*anyopaque, permissionSpec: i32) bool {
        return qtc.QFile_SetPermissions(@ptrCast(self), @intCast(permissionSpec));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPermissions(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFile_OnSetPermissions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPermissions(self: ?*anyopaque, permissionSpec: i32) bool {
        return qtc.QFile_QBaseSetPermissions(@ptrCast(self), @intCast(permissionSpec));
    }

    pub fn SetPermissions2(filename: []const u8, permissionSpec: i32) bool {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
return qtc.QFile_SetPermissions2(filename_str, @intCast(permissionSpec));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFile_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFile_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MoveToTrash22(fileName: []const u8, pathInTrash: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const pathInTrash_str = qtc.libqt_string{
    .len = pathInTrash.len,
    .data = pathInTrash.ptr,
};
return qtc.QFile_MoveToTrash22(fileName_str, pathInTrash_str);
    }

    pub fn Open32(self: ?*anyopaque, f: *FILE, ioFlags: i32, handleFlags: i32) bool {
        return qtc.QFile_Open32(@ptrCast(self), @ptrCast(f), @intCast(ioFlags), @intCast(handleFlags));
    }

    pub fn Open33(self: ?*anyopaque, fd: i32, ioFlags: i32, handleFlags: i32) bool {
        return qtc.QFile_Open33(@ptrCast(self), fd, @intCast(ioFlags), @intCast(handleFlags));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFile_Delete(@ptrCast(self));
    }
};
