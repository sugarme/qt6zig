const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnetworkdiskcache.html
pub const qnetworkdiskcache = struct {

    /// New constructs a new QNetworkDiskCache object.
    pub fn New() QtC.QNetworkDiskCache {
        return qtc.QNetworkDiskCache_new();
    }


    /// New2 constructs a new QNetworkDiskCache object.
    pub fn New2(parent: ?*anyopaque) QtC.QNetworkDiskCache {
        return qtc.QNetworkDiskCache_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkDiskCache_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkdiskcache.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CacheDirectory(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkDiskCache_CacheDirectory(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkdiskcache.CacheDirectory: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCacheDirectory(self: ?*anyopaque, cacheDir: []const u8) void {
        const cacheDir_str = qtc.libqt_string{
    .len = cacheDir.len,
    .data = cacheDir.ptr,
};
qtc.QNetworkDiskCache_SetCacheDirectory(@ptrCast(self), cacheDir_str);
    }

    pub fn MaximumCacheSize(self: ?*anyopaque, ) i64 {
        return qtc.QNetworkDiskCache_MaximumCacheSize(@ptrCast(self));
    }

    pub fn SetMaximumCacheSize(self: ?*anyopaque, size: i64) void {
        qtc.QNetworkDiskCache_SetMaximumCacheSize(@ptrCast(self), size);
    }

    pub fn CacheSize(self: ?*anyopaque, ) i64 {
        return qtc.QNetworkDiskCache_CacheSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCacheSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QNetworkDiskCache_OnCacheSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCacheSize(self: ?*anyopaque, ) i64 {
        return qtc.QNetworkDiskCache_QBaseCacheSize(@ptrCast(self));
    }

    pub fn MetaData(self: ?*anyopaque, url: ?*anyopaque) QtC.QNetworkCacheMetaData {
        return qtc.QNetworkDiskCache_MetaData(@ptrCast(self), @ptrCast(url));
    }

    /// Allows for overriding the related default method
    pub fn OnMetaData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QNetworkCacheMetaData) void {
        qtc.QNetworkDiskCache_OnMetaData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetaData(self: ?*anyopaque, url: ?*anyopaque) QtC.QNetworkCacheMetaData {
        return qtc.QNetworkDiskCache_QBaseMetaData(@ptrCast(self), @ptrCast(url));
    }

    pub fn UpdateMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QNetworkDiskCache_UpdateMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateMetaData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnUpdateMetaData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QNetworkDiskCache_QBaseUpdateMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    pub fn Data(self: ?*anyopaque, url: ?*anyopaque) QtC.QIODevice {
        return qtc.QNetworkDiskCache_Data(@ptrCast(self), @ptrCast(url));
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIODevice) void {
        qtc.QNetworkDiskCache_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, url: ?*anyopaque) QtC.QIODevice {
        return qtc.QNetworkDiskCache_QBaseData(@ptrCast(self), @ptrCast(url));
    }

    pub fn Remove(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.QNetworkDiskCache_Remove(@ptrCast(self), @ptrCast(url));
    }

    /// Allows for overriding the related default method
    pub fn OnRemove(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkDiskCache_OnRemove(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemove(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.QNetworkDiskCache_QBaseRemove(@ptrCast(self), @ptrCast(url));
    }

    pub fn Prepare(self: ?*anyopaque, metaData: ?*anyopaque) QtC.QIODevice {
        return qtc.QNetworkDiskCache_Prepare(@ptrCast(self), @ptrCast(metaData));
    }

    /// Allows for overriding the related default method
    pub fn OnPrepare(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIODevice) void {
        qtc.QNetworkDiskCache_OnPrepare(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePrepare(self: ?*anyopaque, metaData: ?*anyopaque) QtC.QIODevice {
        return qtc.QNetworkDiskCache_QBasePrepare(@ptrCast(self), @ptrCast(metaData));
    }

    pub fn Insert(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QNetworkDiskCache_Insert(@ptrCast(self), @ptrCast(device));
    }

    /// Allows for overriding the related default method
    pub fn OnInsert(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnInsert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsert(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QNetworkDiskCache_QBaseInsert(@ptrCast(self), @ptrCast(device));
    }

    pub fn FileMetaData(self: ?*anyopaque, fileName: []const u8) QtC.QNetworkCacheMetaData {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QNetworkDiskCache_FileMetaData(@ptrCast(self), fileName_str);
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QNetworkDiskCache_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClear(self: ?*anyopaque, ) void {
        qtc.QNetworkDiskCache_QBaseClear(@ptrCast(self));
    }

    pub fn Expire(self: ?*anyopaque, ) i64 {
        return qtc.QNetworkDiskCache_Expire(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExpire(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QNetworkDiskCache_OnExpire(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExpire(self: ?*anyopaque, ) i64 {
        return qtc.QNetworkDiskCache_QBaseExpire(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkDiskCache_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkdiskcache.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkDiskCache_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkdiskcache.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkDiskCache_Delete(@ptrCast(self));
    }
};
