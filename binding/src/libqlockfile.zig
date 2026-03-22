const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlockfile.html
pub const qlockfile = struct {

    /// New constructs a new QLockFile object.
    pub fn New(fileName: []const u8) QtC.QLockFile {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QLockFile_new(fileName_str);
    }


    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLockFile_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlockfile.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Lock(self: ?*anyopaque, ) bool {
        return qtc.QLockFile_Lock(@ptrCast(self));
    }

    pub fn TryLock(self: ?*anyopaque, timeout: i32) bool {
        return qtc.QLockFile_TryLock(@ptrCast(self), timeout);
    }

    pub fn Unlock(self: ?*anyopaque, ) void {
        qtc.QLockFile_Unlock(@ptrCast(self));
    }

    pub fn SetStaleLockTime(self: ?*anyopaque, staleLockTime: i32) void {
        qtc.QLockFile_SetStaleLockTime(@ptrCast(self), staleLockTime);
    }

    pub fn StaleLockTime(self: ?*anyopaque, ) i32 {
        return qtc.QLockFile_StaleLockTime(@ptrCast(self));
    }

    pub fn TryLock2(self: ?*anyopaque, ) bool {
        return qtc.QLockFile_TryLock2(@ptrCast(self));
    }

    pub fn IsLocked(self: ?*anyopaque, ) bool {
        return qtc.QLockFile_IsLocked(@ptrCast(self));
    }

    pub fn GetLockInfo(self: ?*anyopaque, pid: *i64, hostname: []const u8, appname: []const u8) bool {
        const hostname_str = qtc.libqt_string{
    .len = hostname.len,
    .data = hostname.ptr,
};
const appname_str = qtc.libqt_string{
    .len = appname.len,
    .data = appname.ptr,
};
return qtc.QLockFile_GetLockInfo(@ptrCast(self), @ptrCast(pid), hostname_str, appname_str);
    }

    pub fn RemoveStaleLockFile(self: ?*anyopaque, ) bool {
        return qtc.QLockFile_RemoveStaleLockFile(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QLockFile_Error(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLockFile_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/lockfile.html#types
pub const enums = struct {
    pub const LockError = enum {
        pub const NoError: i32 = 0;
        pub const LockFailedError: i32 = 1;
        pub const PermissionError: i32 = 2;
        pub const UnknownError: i32 = 3;
    };

};
