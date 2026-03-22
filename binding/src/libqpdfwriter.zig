const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpdfwriter.html
pub const qpdfwriter = struct {

    /// New constructs a new QPdfWriter object.
    pub fn New(filename: []const u8) QtC.QPdfWriter {
        const filename_str = qtc.libqt_string{
    .len = filename.len,
    .data = filename.ptr,
};
return qtc.QPdfWriter_new(filename_str);
    }


    /// New2 constructs a new QPdfWriter object.
    pub fn New2(device: ?*anyopaque) QtC.QPdfWriter {
        return qtc.QPdfWriter_new2(@ptrCast(device));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfWriter_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfwriter.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPdfVersion(self: ?*anyopaque, version: i32) void {
        qtc.QPdfWriter_SetPdfVersion(@ptrCast(self), @intCast(version));
    }

    pub fn PdfVersion(self: ?*anyopaque, ) i32 {
        return qtc.QPdfWriter_PdfVersion(@ptrCast(self));
    }

    pub fn Title(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfWriter_Title(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfwriter.Title: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
    .len = title.len,
    .data = title.ptr,
};
qtc.QPdfWriter_SetTitle(@ptrCast(self), title_str);
    }

    pub fn Creator(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfWriter_Creator(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfwriter.Creator: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetCreator(self: ?*anyopaque, creator: []const u8) void {
        const creator_str = qtc.libqt_string{
    .len = creator.len,
    .data = creator.ptr,
};
qtc.QPdfWriter_SetCreator(@ptrCast(self), creator_str);
    }

    pub fn DocumentId(self: ?*anyopaque, ) QtC.QUuid {
        return qtc.QPdfWriter_DocumentId(@ptrCast(self));
    }

    pub fn SetDocumentId(self: ?*anyopaque, documentId: QtC.QUuid) void {
        qtc.QPdfWriter_SetDocumentId(@ptrCast(self), @ptrCast(documentId));
    }

    pub fn NewPage(self: ?*anyopaque, ) bool {
        return qtc.QPdfWriter_NewPage(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNewPage(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfWriter_OnNewPage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNewPage(self: ?*anyopaque, ) bool {
        return qtc.QPdfWriter_QBaseNewPage(@ptrCast(self));
    }

    pub fn SetResolution(self: ?*anyopaque, resolution: i32) void {
        qtc.QPdfWriter_SetResolution(@ptrCast(self), resolution);
    }

    pub fn Resolution(self: ?*anyopaque, ) i32 {
        return qtc.QPdfWriter_Resolution(@ptrCast(self));
    }

    pub fn SetDocumentXmpMetadata(self: ?*anyopaque, xmpMetadata: []u8) void {
        const xmpMetadata_str = qtc.libqt_string{
    .len = xmpMetadata.len,
    .data = xmpMetadata.ptr,
};
qtc.QPdfWriter_SetDocumentXmpMetadata(@ptrCast(self), xmpMetadata_str);
    }

    pub fn DocumentXmpMetadata(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QPdfWriter_DocumentXmpMetadata(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qpdfwriter.DocumentXmpMetadata: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn AddFileAttachment(self: ?*anyopaque, fileName: []const u8, data: []u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
qtc.QPdfWriter_AddFileAttachment(@ptrCast(self), fileName_str, data_str);
    }

    pub fn ColorModel(self: ?*anyopaque, ) i32 {
        return qtc.QPdfWriter_ColorModel(@ptrCast(self));
    }

    pub fn SetColorModel(self: ?*anyopaque, model: i32) void {
        qtc.QPdfWriter_SetColorModel(@ptrCast(self), @intCast(model));
    }

    pub fn OutputIntent(self: ?*anyopaque, ) QtC.QPdfOutputIntent {
        return qtc.QPdfWriter_OutputIntent(@ptrCast(self));
    }

    pub fn SetOutputIntent(self: ?*anyopaque, intent: ?*anyopaque) void {
        qtc.QPdfWriter_SetOutputIntent(@ptrCast(self), @ptrCast(intent));
    }

    pub fn PaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QPdfWriter_PaintEngine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPaintEngine) void {
        qtc.QPdfWriter_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QPdfWriter_QBasePaintEngine(@ptrCast(self));
    }

    pub fn Metric(self: ?*anyopaque, id: i32) i32 {
        return qtc.QPdfWriter_Metric(@ptrCast(self), @intCast(id));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPdfWriter_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, id: i32) i32 {
        return qtc.QPdfWriter_QBaseMetric(@ptrCast(self), @intCast(id));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfWriter_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfwriter.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfWriter_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfwriter.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddFileAttachment3(self: ?*anyopaque, fileName: []const u8, data: []u8, mimeType: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
const mimeType_str = qtc.libqt_string{
    .len = mimeType.len,
    .data = mimeType.ptr,
};
qtc.QPdfWriter_AddFileAttachment3(@ptrCast(self), fileName_str, data_str, mimeType_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPdfWriter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/pdfwriter.html#types
pub const enums = struct {
    pub const ColorModel = enum {
        pub const RGB: i32 = 0;
        pub const Grayscale: i32 = 1;
        pub const CMYK: i32 = 2;
        pub const Auto: i32 = 3;
    };

};
