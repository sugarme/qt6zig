const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qwindowsmimeconverter.html
pub const qwindowsmimeconverter = struct {

    /// New constructs a new QWindowsMimeConverter object.
    pub fn New() QtC.QWindowsMimeConverter {
        return qtc.QWindowsMimeConverter_new();
    }


    pub fn RegisterMimeType(mimeType: []const u8) i32 {
        const mimeType_str = qtc.libqt_string{
    .len = mimeType.len,
    .data = mimeType.ptr,
};
return qtc.QWindowsMimeConverter_RegisterMimeType(mimeType_str);
    }

    pub fn CanConvertFromMime(self: ?*anyopaque, formatetc: *const tagFORMATETC, mimeData: ?*anyopaque) bool {
        return qtc.QWindowsMimeConverter_CanConvertFromMime(@ptrCast(self), @ptrCast(formatetc), @ptrCast(mimeData));
    }

    /// Allows for overriding the related default method
    pub fn OnCanConvertFromMime(self: ?*anyopaque, callback: *const fn (?*anyopaque, *const tagFORMATETC, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWindowsMimeConverter_OnCanConvertFromMime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanConvertFromMime(self: ?*anyopaque, formatetc: *const tagFORMATETC, mimeData: ?*anyopaque) bool {
        return qtc.QWindowsMimeConverter_QBaseCanConvertFromMime(@ptrCast(self), @ptrCast(formatetc), @ptrCast(mimeData));
    }

    pub fn ConvertFromMime(self: ?*anyopaque, formatetc: *const tagFORMATETC, mimeData: ?*anyopaque, pmedium: *tagSTGMEDIUM) bool {
        return qtc.QWindowsMimeConverter_ConvertFromMime(@ptrCast(self), @ptrCast(formatetc), @ptrCast(mimeData), @ptrCast(pmedium));
    }

    /// Allows for overriding the related default method
    pub fn OnConvertFromMime(self: ?*anyopaque, callback: *const fn (?*anyopaque, *const tagFORMATETC, ?*anyopaque, *tagSTGMEDIUM) callconv(.c) bool) void {
        qtc.QWindowsMimeConverter_OnConvertFromMime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseConvertFromMime(self: ?*anyopaque, formatetc: *const tagFORMATETC, mimeData: ?*anyopaque, pmedium: *tagSTGMEDIUM) bool {
        return qtc.QWindowsMimeConverter_QBaseConvertFromMime(@ptrCast(self), @ptrCast(formatetc), @ptrCast(mimeData), @ptrCast(pmedium));
    }

    pub fn FormatsForMime(self: ?*anyopaque, mimeType: []const u8, mimeData: ?*anyopaque) []const u8 {
        const mimeType_str = qtc.libqt_string{
    .len = mimeType.len,
    .data = mimeType.ptr,
};
return qtc.QWindowsMimeConverter_FormatsForMime(@ptrCast(self), mimeType_str, @ptrCast(mimeData));
    }

    /// Allows for overriding the related default method
    pub fn OnFormatsForMime(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QWindowsMimeConverter_OnFormatsForMime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFormatsForMime(self: ?*anyopaque, mimeType: []const u8, mimeData: ?*anyopaque) []const u8 {
        const mimeType_str = qtc.libqt_string{
    .len = mimeType.len,
    .data = mimeType.ptr,
};
return qtc.QWindowsMimeConverter_QBaseFormatsForMime(@ptrCast(self), mimeType_str, @ptrCast(mimeData));
    }

    pub fn CanConvertToMime(self: ?*anyopaque, mimeType: []const u8, pDataObj: *IDataObject) bool {
        const mimeType_str = qtc.libqt_string{
    .len = mimeType.len,
    .data = mimeType.ptr,
};
return qtc.QWindowsMimeConverter_CanConvertToMime(@ptrCast(self), mimeType_str, @ptrCast(pDataObj));
    }

    /// Allows for overriding the related default method
    pub fn OnCanConvertToMime(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, *IDataObject) callconv(.c) bool) void {
        qtc.QWindowsMimeConverter_OnCanConvertToMime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanConvertToMime(self: ?*anyopaque, mimeType: []const u8, pDataObj: *IDataObject) bool {
        const mimeType_str = qtc.libqt_string{
    .len = mimeType.len,
    .data = mimeType.ptr,
};
return qtc.QWindowsMimeConverter_QBaseCanConvertToMime(@ptrCast(self), mimeType_str, @ptrCast(pDataObj));
    }

    pub fn ConvertToMime(self: ?*anyopaque, mimeType: []const u8, pDataObj: *IDataObject, preferredType: QtC.QMetaType) QtC.QVariant {
        const mimeType_str = qtc.libqt_string{
    .len = mimeType.len,
    .data = mimeType.ptr,
};
return qtc.QWindowsMimeConverter_ConvertToMime(@ptrCast(self), mimeType_str, @ptrCast(pDataObj), @ptrCast(preferredType));
    }

    /// Allows for overriding the related default method
    pub fn OnConvertToMime(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, *IDataObject, QtC.QMetaType) callconv(.c) QtC.QVariant) void {
        qtc.QWindowsMimeConverter_OnConvertToMime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseConvertToMime(self: ?*anyopaque, mimeType: []const u8, pDataObj: *IDataObject, preferredType: QtC.QMetaType) QtC.QVariant {
        const mimeType_str = qtc.libqt_string{
    .len = mimeType.len,
    .data = mimeType.ptr,
};
return qtc.QWindowsMimeConverter_QBaseConvertToMime(@ptrCast(self), mimeType_str, @ptrCast(pDataObj), @ptrCast(preferredType));
    }

    pub fn MimeForFormat(self: ?*anyopaque, formatetc: *const tagFORMATETC, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWindowsMimeConverter_MimeForFormat(@ptrCast(self), @ptrCast(formatetc));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindowsmimeconverter.MimeForFormat: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnMimeForFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque, *const tagFORMATETC) callconv(.c) [*:0]const u8) void {
        qtc.QWindowsMimeConverter_OnMimeForFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMimeForFormat(self: ?*anyopaque, formatetc: *const tagFORMATETC, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWindowsMimeConverter_QBaseMimeForFormat(@ptrCast(self), @ptrCast(formatetc));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindowsmimeconverter.MimeForFormat: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWindowsMimeConverter_Delete(@ptrCast(self));
    }
};
