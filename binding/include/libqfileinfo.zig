const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfileinfo.html
pub const qfileinfo = struct {

    /// New constructs a new QFileInfo object.
    pub fn New() QtC.QFileInfo {
        return qtc.QFileInfo_new();
    }


    /// New2 constructs a new QFileInfo object.
    pub fn New2(file: []const u8) QtC.QFileInfo {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
return qtc.QFileInfo_new2(file_str);
    }


    /// New3 constructs a new QFileInfo object.
    pub fn New3(file: ?*anyopaque) QtC.QFileInfo {
        return qtc.QFileInfo_new3(@ptrCast(file));
    }


    /// New4 constructs a new QFileInfo object.
    pub fn New4(dir: ?*anyopaque, file: []const u8) QtC.QFileInfo {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
return qtc.QFileInfo_new4(@ptrCast(dir), file_str);
    }


    /// New5 constructs a new QFileInfo object.
    pub fn New5(fileinfo: ?*anyopaque) QtC.QFileInfo {
        return qtc.QFileInfo_new5(@ptrCast(fileinfo));
    }


    pub fn OperatorAssign(self: ?*anyopaque, fileinfo: ?*anyopaque) void {
        qtc.QFileInfo_OperatorAssign(@ptrCast(self), @ptrCast(fileinfo));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFileInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
qtc.QFileInfo_SetFile(@ptrCast(self), file_str);
    }

    pub fn SetFile2(self: ?*anyopaque, file: ?*anyopaque) void {
        qtc.QFileInfo_SetFile2(@ptrCast(self), @ptrCast(file));
    }

    pub fn SetFile3(self: ?*anyopaque, dir: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
qtc.QFileInfo_SetFile3(@ptrCast(self), @ptrCast(dir), file_str);
    }

    pub fn Exists(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_Exists(@ptrCast(self));
    }

    pub fn Exists2(file: []const u8) bool {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
return qtc.QFileInfo_Exists2(file_str);
    }

    pub fn Refresh(self: ?*anyopaque, ) void {
        qtc.QFileInfo_Refresh(@ptrCast(self));
    }

    pub fn FilePath(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_FilePath(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.FilePath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AbsoluteFilePath(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_AbsoluteFilePath(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.AbsoluteFilePath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CanonicalFilePath(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_CanonicalFilePath(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CanonicalFilePath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BaseName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_BaseName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.BaseName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CompleteBaseName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_CompleteBaseName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CompleteBaseName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Suffix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_Suffix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Suffix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BundleName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_BundleName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.BundleName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CompleteSuffix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_CompleteSuffix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CompleteSuffix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Path(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_Path(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Path: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AbsolutePath(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_AbsolutePath(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.AbsolutePath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CanonicalPath(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_CanonicalPath(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.CanonicalPath: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Dir(self: ?*anyopaque, ) QtC.QDir {
        return qtc.QFileInfo_Dir(@ptrCast(self));
    }

    pub fn AbsoluteDir(self: ?*anyopaque, ) QtC.QDir {
        return qtc.QFileInfo_AbsoluteDir(@ptrCast(self));
    }

    pub fn IsReadable(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsReadable(@ptrCast(self));
    }

    pub fn IsWritable(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsWritable(@ptrCast(self));
    }

    pub fn IsExecutable(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsExecutable(@ptrCast(self));
    }

    pub fn IsHidden(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsHidden(@ptrCast(self));
    }

    pub fn IsNativePath(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsNativePath(@ptrCast(self));
    }

    pub fn IsRelative(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsRelative(@ptrCast(self));
    }

    pub fn IsAbsolute(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsAbsolute(@ptrCast(self));
    }

    pub fn MakeAbsolute(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_MakeAbsolute(@ptrCast(self));
    }

    pub fn IsFile(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsFile(@ptrCast(self));
    }

    pub fn IsDir(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsDir(@ptrCast(self));
    }

    pub fn IsSymLink(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsSymLink(@ptrCast(self));
    }

    pub fn IsSymbolicLink(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsSymbolicLink(@ptrCast(self));
    }

    pub fn IsShortcut(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsShortcut(@ptrCast(self));
    }

    pub fn IsAlias(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsAlias(@ptrCast(self));
    }

    pub fn IsJunction(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsJunction(@ptrCast(self));
    }

    pub fn IsRoot(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsRoot(@ptrCast(self));
    }

    pub fn IsBundle(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_IsBundle(@ptrCast(self));
    }

    pub fn SymLinkTarget(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_SymLinkTarget(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.SymLinkTarget: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ReadSymLink(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_ReadSymLink(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.ReadSymLink: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn JunctionTarget(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_JunctionTarget(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.JunctionTarget: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Owner(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_Owner(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Owner: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OwnerId(self: ?*anyopaque, ) u32 {
        return qtc.QFileInfo_OwnerId(@ptrCast(self));
    }

    pub fn Group(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileInfo_Group(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileinfo.Group: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GroupId(self: ?*anyopaque, ) u32 {
        return qtc.QFileInfo_GroupId(@ptrCast(self));
    }

    pub fn Permission(self: ?*anyopaque, permissions: QFile::Permissions) bool {
        return qtc.QFileInfo_Permission(@ptrCast(self), permissions);
    }

    pub fn Permissions(self: ?*anyopaque, ) QFile::Permissions {
        return qtc.QFileInfo_Permissions(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QFileInfo_Size(@ptrCast(self));
    }

    pub fn BirthTime(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QFileInfo_BirthTime(@ptrCast(self));
    }

    pub fn MetadataChangeTime(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QFileInfo_MetadataChangeTime(@ptrCast(self));
    }

    pub fn LastModified(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QFileInfo_LastModified(@ptrCast(self));
    }

    pub fn LastRead(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QFileInfo_LastRead(@ptrCast(self));
    }

    pub fn FileTime(self: ?*anyopaque, time: QFile::FileTime) QtC.QDateTime {
        return qtc.QFileInfo_FileTime(@ptrCast(self), time);
    }

    pub fn BirthTime2(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_BirthTime2(@ptrCast(self), @ptrCast(tz));
    }

    pub fn MetadataChangeTime2(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_MetadataChangeTime2(@ptrCast(self), @ptrCast(tz));
    }

    pub fn LastModified2(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_LastModified2(@ptrCast(self), @ptrCast(tz));
    }

    pub fn LastRead2(self: ?*anyopaque, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_LastRead2(@ptrCast(self), @ptrCast(tz));
    }

    pub fn FileTime2(self: ?*anyopaque, time: QFile::FileTime, tz: ?*anyopaque) QtC.QDateTime {
        return qtc.QFileInfo_FileTime2(@ptrCast(self), time, @ptrCast(tz));
    }

    pub fn Caching(self: ?*anyopaque, ) bool {
        return qtc.QFileInfo_Caching(@ptrCast(self));
    }

    pub fn SetCaching(self: ?*anyopaque, on: bool) void {
        qtc.QFileInfo_SetCaching(@ptrCast(self), on);
    }

    pub fn Stat(self: ?*anyopaque, ) void {
        qtc.QFileInfo_Stat(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileInfo_Delete(@ptrCast(self));
    }
};
