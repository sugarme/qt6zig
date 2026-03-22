const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfilesystemwatcher.html
pub const qfilesystemwatcher = struct {

    /// New constructs a new QFileSystemWatcher object.
    pub fn New() QtC.QFileSystemWatcher {
        return qtc.QFileSystemWatcher_new();
    }


    /// New2 constructs a new QFileSystemWatcher object.
    pub fn New2(paths: []const u8) QtC.QFileSystemWatcher {
        return qtc.QFileSystemWatcher_new2(@ptrCast(paths));
    }


    /// New3 constructs a new QFileSystemWatcher object.
    pub fn New3(parent: ?*anyopaque) QtC.QFileSystemWatcher {
        return qtc.QFileSystemWatcher_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QFileSystemWatcher object.
    pub fn New4(paths: []const u8, parent: ?*anyopaque) QtC.QFileSystemWatcher {
        return qtc.QFileSystemWatcher_new4(@ptrCast(paths), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSystemWatcher_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfilesystemwatcher.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddPath(self: ?*anyopaque, file: []const u8) bool {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
return qtc.QFileSystemWatcher_AddPath(@ptrCast(self), file_str);
    }

    pub fn AddPaths(self: ?*anyopaque, files: []const u8) []const u8 {
        return qtc.QFileSystemWatcher_AddPaths(@ptrCast(self), @ptrCast(files));
    }

    pub fn RemovePath(self: ?*anyopaque, file: []const u8) bool {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
return qtc.QFileSystemWatcher_RemovePath(@ptrCast(self), file_str);
    }

    pub fn RemovePaths(self: ?*anyopaque, files: []const u8) []const u8 {
        return qtc.QFileSystemWatcher_RemovePaths(@ptrCast(self), @ptrCast(files));
    }

    pub fn Files(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileSystemWatcher_Files(@ptrCast(self));
    }

    pub fn Directories(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileSystemWatcher_Directories(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSystemWatcher_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfilesystemwatcher.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSystemWatcher_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfilesystemwatcher.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Wrapper to allow calling private signal
    pub fn OnfileChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileSystemWatcher_Connect_fileChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OndirectoryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFileSystemWatcher_Connect_directoryChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileSystemWatcher_Delete(@ptrCast(self));
    }
};
