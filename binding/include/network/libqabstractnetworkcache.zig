const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnetworkcachemetadata.html
pub const qnetworkcachemetadata = struct {

    /// New constructs a new QNetworkCacheMetaData object.
    pub fn New() QtC.QNetworkCacheMetaData {
        return qtc.QNetworkCacheMetaData_new();
    }


    /// New2 constructs a new QNetworkCacheMetaData object.
    pub fn New2(other: ?*anyopaque) QtC.QNetworkCacheMetaData {
        return qtc.QNetworkCacheMetaData_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCacheMetaData_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCacheMetaData_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QNetworkCacheMetaData_IsValid(@ptrCast(self));
    }

    pub fn Url(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QNetworkCacheMetaData_Url(@ptrCast(self));
    }

    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    pub fn RawHeaders(self: ?*anyopaque, ) []const u8 {
        return qtc.QNetworkCacheMetaData_RawHeaders(@ptrCast(self));
    }

    pub fn SetRawHeaders(self: ?*anyopaque, headers: []const u8) void {
        qtc.QNetworkCacheMetaData_SetRawHeaders(@ptrCast(self), @ptrCast(headers));
    }

    pub fn Headers(self: ?*anyopaque, ) QtC.QHttpHeaders {
        return qtc.QNetworkCacheMetaData_Headers(@ptrCast(self));
    }

    pub fn SetHeaders(self: ?*anyopaque, headers: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_SetHeaders(@ptrCast(self), @ptrCast(headers));
    }

    pub fn LastModified(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QNetworkCacheMetaData_LastModified(@ptrCast(self));
    }

    pub fn SetLastModified(self: ?*anyopaque, dateTime: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_SetLastModified(@ptrCast(self), @ptrCast(dateTime));
    }

    pub fn ExpirationDate(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QNetworkCacheMetaData_ExpirationDate(@ptrCast(self));
    }

    pub fn SetExpirationDate(self: ?*anyopaque, dateTime: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_SetExpirationDate(@ptrCast(self), @ptrCast(dateTime));
    }

    pub fn SaveToDisk(self: ?*anyopaque, ) bool {
        return qtc.QNetworkCacheMetaData_SaveToDisk(@ptrCast(self));
    }

    pub fn SetSaveToDisk(self: ?*anyopaque, allow: bool) void {
        qtc.QNetworkCacheMetaData_SetSaveToDisk(@ptrCast(self), allow);
    }

    pub fn Attributes(self: ?*anyopaque, ) QHash<QNetworkRequest::Attribute, QVariant> {
        return qtc.QNetworkCacheMetaData_Attributes(@ptrCast(self));
    }

    pub fn SetAttributes(self: ?*anyopaque, attributes: *const QHash<QNetworkRequest::Attribute, QVariant>) void {
        qtc.QNetworkCacheMetaData_SetAttributes(@ptrCast(self), @ptrCast(attributes));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractnetworkcache.html
pub const qabstractnetworkcache = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractNetworkCache_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractnetworkcache.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MetaData(self: ?*anyopaque, url: ?*anyopaque) QtC.QNetworkCacheMetaData {
        return qtc.QAbstractNetworkCache_MetaData(@ptrCast(self), @ptrCast(url));
    }

    /// Allows for overriding the related default method
    pub fn OnMetaData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QNetworkCacheMetaData) void {
        qtc.QAbstractNetworkCache_OnMetaData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetaData(self: ?*anyopaque, url: ?*anyopaque) QtC.QNetworkCacheMetaData {
        return qtc.QAbstractNetworkCache_QBaseMetaData(@ptrCast(self), @ptrCast(url));
    }

    pub fn UpdateMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QAbstractNetworkCache_UpdateMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateMetaData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractNetworkCache_OnUpdateMetaData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QAbstractNetworkCache_QBaseUpdateMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    pub fn Data(self: ?*anyopaque, url: ?*anyopaque) QtC.QIODevice {
        return qtc.QAbstractNetworkCache_Data(@ptrCast(self), @ptrCast(url));
    }

    /// Allows for overriding the related default method
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIODevice) void {
        qtc.QAbstractNetworkCache_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseData(self: ?*anyopaque, url: ?*anyopaque) QtC.QIODevice {
        return qtc.QAbstractNetworkCache_QBaseData(@ptrCast(self), @ptrCast(url));
    }

    pub fn Remove(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.QAbstractNetworkCache_Remove(@ptrCast(self), @ptrCast(url));
    }

    /// Allows for overriding the related default method
    pub fn OnRemove(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractNetworkCache_OnRemove(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRemove(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.QAbstractNetworkCache_QBaseRemove(@ptrCast(self), @ptrCast(url));
    }

    pub fn CacheSize(self: ?*anyopaque, ) i64 {
        return qtc.QAbstractNetworkCache_CacheSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCacheSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QAbstractNetworkCache_OnCacheSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCacheSize(self: ?*anyopaque, ) i64 {
        return qtc.QAbstractNetworkCache_QBaseCacheSize(@ptrCast(self));
    }

    pub fn Prepare(self: ?*anyopaque, metaData: ?*anyopaque) QtC.QIODevice {
        return qtc.QAbstractNetworkCache_Prepare(@ptrCast(self), @ptrCast(metaData));
    }

    /// Allows for overriding the related default method
    pub fn OnPrepare(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIODevice) void {
        qtc.QAbstractNetworkCache_OnPrepare(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePrepare(self: ?*anyopaque, metaData: ?*anyopaque) QtC.QIODevice {
        return qtc.QAbstractNetworkCache_QBasePrepare(@ptrCast(self), @ptrCast(metaData));
    }

    pub fn Insert(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QAbstractNetworkCache_Insert(@ptrCast(self), @ptrCast(device));
    }

    /// Allows for overriding the related default method
    pub fn OnInsert(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractNetworkCache_OnInsert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInsert(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QAbstractNetworkCache_QBaseInsert(@ptrCast(self), @ptrCast(device));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QAbstractNetworkCache_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractNetworkCache_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClear(self: ?*anyopaque, ) void {
        qtc.QAbstractNetworkCache_QBaseClear(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractNetworkCache_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractnetworkcache.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractNetworkCache_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractnetworkcache.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractNetworkCache_Delete(@ptrCast(self));
    }
};
