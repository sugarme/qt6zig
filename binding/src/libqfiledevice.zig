const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfiledevice.html
pub const qfiledevice = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDevice_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledevice.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QFileDevice_Error(@ptrCast(self));
    }

    pub fn UnsetError(self: ?*anyopaque, ) void {
        qtc.QFileDevice_UnsetError(@ptrCast(self));
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QFileDevice_Close(@ptrCast(self));
    }

    pub fn IsSequential(self: ?*anyopaque, ) bool {
        return qtc.QFileDevice_IsSequential(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QFileDevice_OnIsSequential(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsSequential(self: ?*anyopaque, ) bool {
        return qtc.QFileDevice_QBaseIsSequential(@ptrCast(self));
    }

    pub fn Handle(self: ?*anyopaque, ) i32 {
        return qtc.QFileDevice_Handle(@ptrCast(self));
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDevice_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledevice.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnFileName(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QFileDevice_OnFileName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDevice_QBaseFileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledevice.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Pos(self: ?*anyopaque, ) i64 {
        return qtc.QFileDevice_Pos(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPos(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QFileDevice_OnPos(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePos(self: ?*anyopaque, ) i64 {
        return qtc.QFileDevice_QBasePos(@ptrCast(self));
    }

    pub fn Seek(self: ?*anyopaque, offset: i64) bool {
        return qtc.QFileDevice_Seek(@ptrCast(self), offset);
    }

    /// Allows for overriding the related default method
    pub fn OnSeek(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QFileDevice_OnSeek(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSeek(self: ?*anyopaque, offset: i64) bool {
        return qtc.QFileDevice_QBaseSeek(@ptrCast(self), offset);
    }

    pub fn AtEnd(self: ?*anyopaque, ) bool {
        return qtc.QFileDevice_AtEnd(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAtEnd(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QFileDevice_OnAtEnd(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAtEnd(self: ?*anyopaque, ) bool {
        return qtc.QFileDevice_QBaseAtEnd(@ptrCast(self));
    }

    pub fn Flush(self: ?*anyopaque, ) bool {
        return qtc.QFileDevice_Flush(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QFileDevice_Size(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QFileDevice_OnSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSize(self: ?*anyopaque, ) i64 {
        return qtc.QFileDevice_QBaseSize(@ptrCast(self));
    }

    pub fn Resize(self: ?*anyopaque, sz: i64) bool {
        return qtc.QFileDevice_Resize(@ptrCast(self), sz);
    }

    /// Allows for overriding the related default method
    pub fn OnResize(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QFileDevice_OnResize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResize(self: ?*anyopaque, sz: i64) bool {
        return qtc.QFileDevice_QBaseResize(@ptrCast(self), sz);
    }

    pub fn Permissions(self: ?*anyopaque, ) i32 {
        return qtc.QFileDevice_Permissions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPermissions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QFileDevice_OnPermissions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePermissions(self: ?*anyopaque, ) i32 {
        return qtc.QFileDevice_QBasePermissions(@ptrCast(self));
    }

    pub fn SetPermissions(self: ?*anyopaque, permissionSpec: i32) bool {
        return qtc.QFileDevice_SetPermissions(@ptrCast(self), @intCast(permissionSpec));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPermissions(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFileDevice_OnSetPermissions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPermissions(self: ?*anyopaque, permissionSpec: i32) bool {
        return qtc.QFileDevice_QBaseSetPermissions(@ptrCast(self), @intCast(permissionSpec));
    }

    pub fn Map(self: ?*anyopaque, offset: i64, size: i64) u8 {
        return @ptrCast(qtc.QFileDevice_Map(@ptrCast(self), offset, size));
    }

    pub fn Unmap(self: ?*anyopaque, address: *u8) bool {
        return qtc.QFileDevice_Unmap(@ptrCast(self), @ptrCast(address));
    }

    pub fn FileTime(self: ?*anyopaque, time: i32) QtC.QDateTime {
        return qtc.QFileDevice_FileTime(@ptrCast(self), @intCast(time));
    }

    pub fn SetFileTime(self: ?*anyopaque, newDate: ?*anyopaque, fileTime: i32) bool {
        return qtc.QFileDevice_SetFileTime(@ptrCast(self), @ptrCast(newDate), @intCast(fileTime));
    }

    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QFileDevice_ReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    /// Allows for overriding the related default method
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QFileDevice_OnReadData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QFileDevice_QBaseReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QFileDevice_WriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    /// Allows for overriding the related default method
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QFileDevice_OnWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QFileDevice_QBaseWriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QFileDevice_ReadLineData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    /// Allows for overriding the related default method
    pub fn OnReadLineData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QFileDevice_OnReadLineData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QFileDevice_QBaseReadLineData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDevice_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledevice.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileDevice_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfiledevice.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Map3(self: ?*anyopaque, offset: i64, size: i64, flags: i32) u8 {
        return @ptrCast(qtc.QFileDevice_Map3(@ptrCast(self), offset, size, @intCast(flags)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/filedevice.html#types
pub const enums = struct {
    pub const FileError = enum {
        pub const NoError: i32 = 0;
        pub const ReadError: i32 = 1;
        pub const WriteError: i32 = 2;
        pub const FatalError: i32 = 3;
        pub const ResourceError: i32 = 4;
        pub const OpenError: i32 = 5;
        pub const AbortError: i32 = 6;
        pub const TimeOutError: i32 = 7;
        pub const UnspecifiedError: i32 = 8;
        pub const RemoveError: i32 = 9;
        pub const RenameError: i32 = 10;
        pub const PositionError: i32 = 11;
        pub const ResizeError: i32 = 12;
        pub const PermissionsError: i32 = 13;
        pub const CopyError: i32 = 14;
    };

    pub const FileTime = enum {
        pub const FileAccessTime: i32 = 0;
        pub const FileBirthTime: i32 = 1;
        pub const FileMetadataChangeTime: i32 = 2;
        pub const FileModificationTime: i32 = 3;
    };

    pub const Permission = enum {
        pub const ReadOwner: i32 = 16384;
        pub const WriteOwner: i32 = 8192;
        pub const ExeOwner: i32 = 4096;
        pub const ReadUser: i32 = 1024;
        pub const WriteUser: i32 = 512;
        pub const ExeUser: i32 = 256;
        pub const ReadGroup: i32 = 64;
        pub const WriteGroup: i32 = 32;
        pub const ExeGroup: i32 = 16;
        pub const ReadOther: i32 = 4;
        pub const WriteOther: i32 = 2;
        pub const ExeOther: i32 = 1;
    };

    pub const FileHandleFlag = enum {
        pub const AutoCloseHandle: i32 = 1;
        pub const DontCloseHandle: i32 = 0;
    };

    pub const MemoryMapFlag = enum {
        pub const NoOptions: i32 = 0;
        pub const MapPrivateOption: i32 = 1;
    };

};
