const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qimagewriter.html
pub const qimagewriter = struct {

    /// New constructs a new QImageWriter object.
    pub fn New() QtC.QImageWriter {
        return qtc.QImageWriter_new();
    }


    /// New2 constructs a new QImageWriter object.
    pub fn New2(device: ?*anyopaque, format: []u8) QtC.QImageWriter {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QImageWriter_new2(@ptrCast(device), format_str);
    }


    /// New3 constructs a new QImageWriter object.
    pub fn New3(fileName: []const u8) QtC.QImageWriter {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QImageWriter_new3(fileName_str);
    }


    /// New4 constructs a new QImageWriter object.
    pub fn New4(fileName: []const u8, format: []u8) QtC.QImageWriter {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QImageWriter_new4(fileName_str, format_str);
    }


    pub fn Tr(sourceText: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageWriter_Tr(@ptrCast(sourceText));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QImageWriter_SetFormat(@ptrCast(self), format_str);
    }

    pub fn Format(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QImageWriter_Format(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagewriter.Format: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QImageWriter_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QImageWriter_Device(@ptrCast(self));
    }

    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QImageWriter_SetFileName(@ptrCast(self), fileName_str);
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageWriter_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetQuality(self: ?*anyopaque, quality: i32) void {
        qtc.QImageWriter_SetQuality(@ptrCast(self), quality);
    }

    pub fn Quality(self: ?*anyopaque, ) i32 {
        return qtc.QImageWriter_Quality(@ptrCast(self));
    }

    pub fn SetCompression(self: ?*anyopaque, compression: i32) void {
        qtc.QImageWriter_SetCompression(@ptrCast(self), compression);
    }

    pub fn Compression(self: ?*anyopaque, ) i32 {
        return qtc.QImageWriter_Compression(@ptrCast(self));
    }

    pub fn SetSubType(self: ?*anyopaque, typeVal: []u8) void {
        const typeVal_str = qtc.libqt_string{
    .len = typeVal.len,
    .data = typeVal.ptr,
};
qtc.QImageWriter_SetSubType(@ptrCast(self), typeVal_str);
    }

    pub fn SubType(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QImageWriter_SubType(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagewriter.SubType: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SupportedSubTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QImageWriter_SupportedSubTypes(@ptrCast(self));
    }

    pub fn SetOptimizedWrite(self: ?*anyopaque, optimize: bool) void {
        qtc.QImageWriter_SetOptimizedWrite(@ptrCast(self), optimize);
    }

    pub fn OptimizedWrite(self: ?*anyopaque, ) bool {
        return qtc.QImageWriter_OptimizedWrite(@ptrCast(self));
    }

    pub fn SetProgressiveScanWrite(self: ?*anyopaque, progressive: bool) void {
        qtc.QImageWriter_SetProgressiveScanWrite(@ptrCast(self), progressive);
    }

    pub fn ProgressiveScanWrite(self: ?*anyopaque, ) bool {
        return qtc.QImageWriter_ProgressiveScanWrite(@ptrCast(self));
    }

    pub fn Transformation(self: ?*anyopaque, ) i32 {
        return qtc.QImageWriter_Transformation(@ptrCast(self));
    }

    pub fn SetTransformation(self: ?*anyopaque, orientation: i32) void {
        qtc.QImageWriter_SetTransformation(@ptrCast(self), @intCast(orientation));
    }

    pub fn SetText(self: ?*anyopaque, key: []const u8, text: []const u8) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QImageWriter_SetText(@ptrCast(self), key_str, text_str);
    }

    pub fn CanWrite(self: ?*anyopaque, ) bool {
        return qtc.QImageWriter_CanWrite(@ptrCast(self));
    }

    pub fn Write(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageWriter_Write(@ptrCast(self), @ptrCast(image));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QImageWriter_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageWriter_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SupportsOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QImageWriter_SupportsOption(@ptrCast(self), @intCast(option));
    }

    pub fn SupportedImageFormats() []const u8 {
        return qtc.QImageWriter_SupportedImageFormats();
    }

    pub fn SupportedMimeTypes() []const u8 {
        return qtc.QImageWriter_SupportedMimeTypes();
    }

    pub fn ImageFormatsForMimeType(mimeType: []u8) []const u8 {
        const mimeType_str = qtc.libqt_string{
    .len = mimeType.len,
    .data = mimeType.ptr,
};
return qtc.QImageWriter_ImageFormatsForMimeType(mimeType_str);
    }

    pub fn Tr2(sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageWriter_Tr2(@ptrCast(sourceText), @ptrCast(disambiguation));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageWriter_Tr3(@ptrCast(sourceText), @ptrCast(disambiguation), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImageWriter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/imagewriter.html#types
pub const enums = struct {
    pub const ImageWriterError = enum {
        pub const UnknownError: i32 = 0;
        pub const DeviceError: i32 = 1;
        pub const UnsupportedFormatError: i32 = 2;
        pub const InvalidImageError: i32 = 3;
    };

};
