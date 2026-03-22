const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qimagereader.html
pub const qimagereader = struct {

    /// New constructs a new QImageReader object.
    pub fn New() QtC.QImageReader {
        return qtc.QImageReader_new();
    }


    /// New2 constructs a new QImageReader object.
    pub fn New2(device: ?*anyopaque) QtC.QImageReader {
        return qtc.QImageReader_new2(@ptrCast(device));
    }


    /// New3 constructs a new QImageReader object.
    pub fn New3(fileName: []const u8) QtC.QImageReader {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QImageReader_new3(fileName_str);
    }


    /// New4 constructs a new QImageReader object.
    pub fn New4(device: ?*anyopaque, format: []u8) QtC.QImageReader {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QImageReader_new4(@ptrCast(device), format_str);
    }


    /// New5 constructs a new QImageReader object.
    pub fn New5(fileName: []const u8, format: []u8) QtC.QImageReader {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QImageReader_new5(fileName_str, format_str);
    }


    pub fn Tr(sourceText: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageReader_Tr(@ptrCast(sourceText));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QImageReader_SetFormat(@ptrCast(self), format_str);
    }

    pub fn Format(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QImageReader_Format(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagereader.Format: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetAutoDetectImageFormat(self: ?*anyopaque, enabled: bool) void {
        qtc.QImageReader_SetAutoDetectImageFormat(@ptrCast(self), enabled);
    }

    pub fn AutoDetectImageFormat(self: ?*anyopaque, ) bool {
        return qtc.QImageReader_AutoDetectImageFormat(@ptrCast(self));
    }

    pub fn SetDecideFormatFromContent(self: ?*anyopaque, ignored: bool) void {
        qtc.QImageReader_SetDecideFormatFromContent(@ptrCast(self), ignored);
    }

    pub fn DecideFormatFromContent(self: ?*anyopaque, ) bool {
        return qtc.QImageReader_DecideFormatFromContent(@ptrCast(self));
    }

    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QImageReader_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QImageReader_Device(@ptrCast(self));
    }

    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QImageReader_SetFileName(@ptrCast(self), fileName_str);
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageReader_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QImageReader_Size(@ptrCast(self));
    }

    pub fn ImageFormat(self: ?*anyopaque, ) i32 {
        return qtc.QImageReader_ImageFormat(@ptrCast(self));
    }

    pub fn TextKeys(self: ?*anyopaque, ) []const u8 {
        return qtc.QImageReader_TextKeys(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
const _str = qtc.QImageReader_Text(@ptrCast(self), key_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetClipRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QImageReader_SetClipRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn ClipRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QImageReader_ClipRect(@ptrCast(self));
    }

    pub fn SetScaledSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QImageReader_SetScaledSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn ScaledSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QImageReader_ScaledSize(@ptrCast(self));
    }

    pub fn SetQuality(self: ?*anyopaque, quality: i32) void {
        qtc.QImageReader_SetQuality(@ptrCast(self), quality);
    }

    pub fn Quality(self: ?*anyopaque, ) i32 {
        return qtc.QImageReader_Quality(@ptrCast(self));
    }

    pub fn SetScaledClipRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QImageReader_SetScaledClipRect(@ptrCast(self), @ptrCast(rect));
    }

    pub fn ScaledClipRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QImageReader_ScaledClipRect(@ptrCast(self));
    }

    pub fn SetBackgroundColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QImageReader_SetBackgroundColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn BackgroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QImageReader_BackgroundColor(@ptrCast(self));
    }

    pub fn SupportsAnimation(self: ?*anyopaque, ) bool {
        return qtc.QImageReader_SupportsAnimation(@ptrCast(self));
    }

    pub fn Transformation(self: ?*anyopaque, ) i32 {
        return qtc.QImageReader_Transformation(@ptrCast(self));
    }

    pub fn SetAutoTransform(self: ?*anyopaque, enabled: bool) void {
        qtc.QImageReader_SetAutoTransform(@ptrCast(self), enabled);
    }

    pub fn AutoTransform(self: ?*anyopaque, ) bool {
        return qtc.QImageReader_AutoTransform(@ptrCast(self));
    }

    pub fn SubType(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QImageReader_SubType(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagereader.SubType: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SupportedSubTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QImageReader_SupportedSubTypes(@ptrCast(self));
    }

    pub fn CanRead(self: ?*anyopaque, ) bool {
        return qtc.QImageReader_CanRead(@ptrCast(self));
    }

    pub fn Read(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QImageReader_Read(@ptrCast(self));
    }

    pub fn Read2(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageReader_Read2(@ptrCast(self), @ptrCast(image));
    }

    pub fn JumpToNextImage(self: ?*anyopaque, ) bool {
        return qtc.QImageReader_JumpToNextImage(@ptrCast(self));
    }

    pub fn JumpToImage(self: ?*anyopaque, imageNumber: i32) bool {
        return qtc.QImageReader_JumpToImage(@ptrCast(self), imageNumber);
    }

    pub fn LoopCount(self: ?*anyopaque, ) i32 {
        return qtc.QImageReader_LoopCount(@ptrCast(self));
    }

    pub fn ImageCount(self: ?*anyopaque, ) i32 {
        return qtc.QImageReader_ImageCount(@ptrCast(self));
    }

    pub fn NextImageDelay(self: ?*anyopaque, ) i32 {
        return qtc.QImageReader_NextImageDelay(@ptrCast(self));
    }

    pub fn CurrentImageNumber(self: ?*anyopaque, ) i32 {
        return qtc.QImageReader_CurrentImageNumber(@ptrCast(self));
    }

    pub fn CurrentImageRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QImageReader_CurrentImageRect(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QImageReader_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageReader_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SupportsOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QImageReader_SupportsOption(@ptrCast(self), @intCast(option));
    }

    pub fn ImageFormat2(fileName: []const u8, allocator: std.mem.Allocator) []u8 {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QImageReader_ImageFormat2(fileName_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagereader.ImageFormat2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ImageFormat3(device: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QImageReader_ImageFormat3(@ptrCast(device));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagereader.ImageFormat3: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SupportedImageFormats() []const u8 {
        return qtc.QImageReader_SupportedImageFormats();
    }

    pub fn SupportedMimeTypes() []const u8 {
        return qtc.QImageReader_SupportedMimeTypes();
    }

    pub fn ImageFormatsForMimeType(mimeType: []u8) []const u8 {
        const mimeType_str = qtc.libqt_string{
    .len = mimeType.len,
    .data = mimeType.ptr,
};
return qtc.QImageReader_ImageFormatsForMimeType(mimeType_str);
    }

    pub fn AllocationLimit() i32 {
        return qtc.QImageReader_AllocationLimit();
    }

    pub fn SetAllocationLimit(mbLimit: i32) void {
        qtc.QImageReader_SetAllocationLimit(mbLimit);
    }

    pub fn Tr2(sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageReader_Tr2(@ptrCast(sourceText), @ptrCast(disambiguation));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageReader_Tr3(@ptrCast(sourceText), @ptrCast(disambiguation), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImageReader_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/imagereader.html#types
pub const enums = struct {
    pub const ImageReaderError = enum {
        pub const UnknownError: i32 = 0;
        pub const FileNotFoundError: i32 = 1;
        pub const DeviceError: i32 = 2;
        pub const UnsupportedFormatError: i32 = 3;
        pub const InvalidDataError: i32 = 4;
    };

};
