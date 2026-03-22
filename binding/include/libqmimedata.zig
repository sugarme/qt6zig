const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmimedata.html
pub const qmimedata = struct {

    /// New constructs a new QMimeData object.
    pub fn New() QtC.QMimeData {
        return qtc.QMimeData_new();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeData_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimedata.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Urls(self: ?*anyopaque, ) []const u8 {
        return qtc.QMimeData_Urls(@ptrCast(self));
    }

    pub fn SetUrls(self: ?*anyopaque, urls: []const u8) void {
        qtc.QMimeData_SetUrls(@ptrCast(self), @ptrCast(urls));
    }

    pub fn HasUrls(self: ?*anyopaque, ) bool {
        return qtc.QMimeData_HasUrls(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeData_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimedata.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QMimeData_SetText(@ptrCast(self), text_str);
    }

    pub fn HasText(self: ?*anyopaque, ) bool {
        return qtc.QMimeData_HasText(@ptrCast(self));
    }

    pub fn Html(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeData_Html(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimedata.Html: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = qtc.libqt_string{
    .len = html.len,
    .data = html.ptr,
};
qtc.QMimeData_SetHtml(@ptrCast(self), html_str);
    }

    pub fn HasHtml(self: ?*anyopaque, ) bool {
        return qtc.QMimeData_HasHtml(@ptrCast(self));
    }

    pub fn ImageData(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QMimeData_ImageData(@ptrCast(self));
    }

    pub fn SetImageData(self: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QMimeData_SetImageData(@ptrCast(self), @ptrCast(image));
    }

    pub fn HasImage(self: ?*anyopaque, ) bool {
        return qtc.QMimeData_HasImage(@ptrCast(self));
    }

    pub fn ColorData(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QMimeData_ColorData(@ptrCast(self));
    }

    pub fn SetColorData(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QMimeData_SetColorData(@ptrCast(self), @ptrCast(color));
    }

    pub fn HasColor(self: ?*anyopaque, ) bool {
        return qtc.QMimeData_HasColor(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, mimetype: []const u8, allocator: std.mem.Allocator) []u8 {
        const mimetype_str = qtc.libqt_string{
    .len = mimetype.len,
    .data = mimetype.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QMimeData_Data(@ptrCast(self), mimetype_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmimedata.Data: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetData(self: ?*anyopaque, mimetype: []const u8, data: []u8) void {
        const mimetype_str = qtc.libqt_string{
    .len = mimetype.len,
    .data = mimetype.ptr,
};
const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
qtc.QMimeData_SetData(@ptrCast(self), mimetype_str, data_str);
    }

    pub fn RemoveFormat(self: ?*anyopaque, mimetype: []const u8) void {
        const mimetype_str = qtc.libqt_string{
    .len = mimetype.len,
    .data = mimetype.ptr,
};
qtc.QMimeData_RemoveFormat(@ptrCast(self), mimetype_str);
    }

    pub fn HasFormat(self: ?*anyopaque, mimetype: []const u8) bool {
        const mimetype_str = qtc.libqt_string{
    .len = mimetype.len,
    .data = mimetype.ptr,
};
return qtc.QMimeData_HasFormat(@ptrCast(self), mimetype_str);
    }

    /// Allows for overriding the related default method
    pub fn OnHasFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QMimeData_OnHasFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasFormat(self: ?*anyopaque, mimetype: []const u8) bool {
        const mimetype_str = qtc.libqt_string{
    .len = mimetype.len,
    .data = mimetype.ptr,
};
return qtc.QMimeData_QBaseHasFormat(@ptrCast(self), mimetype_str);
    }

    pub fn Formats(self: ?*anyopaque, ) []const u8 {
        return qtc.QMimeData_Formats(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFormats(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QMimeData_OnFormats(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFormats(self: ?*anyopaque, ) []const u8 {
        return qtc.QMimeData_QBaseFormats(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QMimeData_Clear(@ptrCast(self));
    }

    pub fn RetrieveData(self: ?*anyopaque, mimetype: []const u8, preferredType: QtC.QMetaType) QtC.QVariant {
        const mimetype_str = qtc.libqt_string{
    .len = mimetype.len,
    .data = mimetype.ptr,
};
return qtc.QMimeData_RetrieveData(@ptrCast(self), mimetype_str, @ptrCast(preferredType));
    }

    /// Allows for overriding the related default method
    pub fn OnRetrieveData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, QtC.QMetaType) callconv(.c) QtC.QVariant) void {
        qtc.QMimeData_OnRetrieveData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRetrieveData(self: ?*anyopaque, mimetype: []const u8, preferredType: QtC.QMetaType) QtC.QVariant {
        const mimetype_str = qtc.libqt_string{
    .len = mimetype.len,
    .data = mimetype.ptr,
};
return qtc.QMimeData_QBaseRetrieveData(@ptrCast(self), mimetype_str, @ptrCast(preferredType));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeData_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimedata.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeData_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimedata.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMimeData_Delete(@ptrCast(self));
    }
};
