const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qimagecapture.html
pub const qimagecapture = struct {

    /// New constructs a new QImageCapture object.
    pub fn New() QtC.QImageCapture {
        return qtc.QImageCapture_new();
    }


    /// New2 constructs a new QImageCapture object.
    pub fn New2(parent: ?*anyopaque) QtC.QImageCapture {
        return qtc.QImageCapture_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageCapture_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsAvailable(self: ?*anyopaque, ) bool {
        return qtc.QImageCapture_IsAvailable(@ptrCast(self));
    }

    pub fn CaptureSession(self: ?*anyopaque, ) QtC.QMediaCaptureSession {
        return qtc.QImageCapture_CaptureSession(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QImageCapture_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageCapture_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsReadyForCapture(self: ?*anyopaque, ) bool {
        return qtc.QImageCapture_IsReadyForCapture(@ptrCast(self));
    }

    pub fn FileFormat(self: ?*anyopaque, ) i32 {
        return qtc.QImageCapture_FileFormat(@ptrCast(self));
    }

    pub fn SetFileFormat(self: ?*anyopaque, format: i32) void {
        qtc.QImageCapture_SetFileFormat(@ptrCast(self), @intCast(format));
    }

    pub fn SupportedFormats() []const u8 {
        return qtc.QImageCapture_SupportedFormats();
    }

    pub fn FileFormatName(c: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageCapture_FileFormatName(@intCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.FileFormatName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FileFormatDescription(c: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageCapture_FileFormatDescription(@intCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.FileFormatDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Resolution(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QImageCapture_Resolution(@ptrCast(self));
    }

    pub fn SetResolution(self: ?*anyopaque, resolution: ?*anyopaque) void {
        qtc.QImageCapture_SetResolution(@ptrCast(self), @ptrCast(resolution));
    }

    pub fn SetResolution2(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QImageCapture_SetResolution2(@ptrCast(self), width, height);
    }

    pub fn Quality(self: ?*anyopaque, ) i32 {
        return qtc.QImageCapture_Quality(@ptrCast(self));
    }

    pub fn SetQuality(self: ?*anyopaque, quality: i32) void {
        qtc.QImageCapture_SetQuality(@ptrCast(self), @intCast(quality));
    }

    pub fn MetaData(self: ?*anyopaque, ) QtC.QMediaMetaData {
        return qtc.QImageCapture_MetaData(@ptrCast(self));
    }

    pub fn SetMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QImageCapture_SetMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    pub fn AddMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QImageCapture_AddMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    pub fn CaptureToFile(self: ?*anyopaque, ) i32 {
        return qtc.QImageCapture_CaptureToFile(@ptrCast(self));
    }

    pub fn Capture(self: ?*anyopaque, ) i32 {
        return qtc.QImageCapture_Capture(@ptrCast(self));
    }

    pub fn ErrorChanged(self: ?*anyopaque, ) void {
        qtc.QImageCapture_ErrorChanged(@ptrCast(self));
    }

    pub fn OnErrorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ErrorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorOccurred(self: ?*anyopaque, id: i32, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
    .len = errorString.len,
    .data = errorString.ptr,
};
qtc.QImageCapture_ErrorOccurred(@ptrCast(self), id, @intCast(errorVal), errorString_str);
    }

    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReadyForCaptureChanged(self: ?*anyopaque, ready: bool) void {
        qtc.QImageCapture_ReadyForCaptureChanged(@ptrCast(self), ready);
    }

    pub fn OnReadyForCaptureChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ReadyForCaptureChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MetaDataChanged(self: ?*anyopaque, ) void {
        qtc.QImageCapture_MetaDataChanged(@ptrCast(self));
    }

    pub fn OnMetaDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_MetaDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FileFormatChanged(self: ?*anyopaque, ) void {
        qtc.QImageCapture_FileFormatChanged(@ptrCast(self));
    }

    pub fn OnFileFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_FileFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn QualityChanged(self: ?*anyopaque, ) void {
        qtc.QImageCapture_QualityChanged(@ptrCast(self));
    }

    pub fn OnQualityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_QualityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ResolutionChanged(self: ?*anyopaque, ) void {
        qtc.QImageCapture_ResolutionChanged(@ptrCast(self));
    }

    pub fn OnResolutionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ResolutionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ImageExposed(self: ?*anyopaque, id: i32) void {
        qtc.QImageCapture_ImageExposed(@ptrCast(self), id);
    }

    pub fn OnImageExposed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageExposed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ImageCaptured(self: ?*anyopaque, id: i32, preview: ?*anyopaque) void {
        qtc.QImageCapture_ImageCaptured(@ptrCast(self), id, @ptrCast(preview));
    }

    pub fn OnImageCaptured(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageCaptured(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ImageMetadataAvailable(self: ?*anyopaque, id: i32, metaData: ?*anyopaque) void {
        qtc.QImageCapture_ImageMetadataAvailable(@ptrCast(self), id, @ptrCast(metaData));
    }

    pub fn OnImageMetadataAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageMetadataAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ImageAvailable(self: ?*anyopaque, id: i32, frame: ?*anyopaque) void {
        qtc.QImageCapture_ImageAvailable(@ptrCast(self), id, @ptrCast(frame));
    }

    pub fn OnImageAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ImageSaved(self: ?*anyopaque, id: i32, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QImageCapture_ImageSaved(@ptrCast(self), id, fileName_str);
    }

    pub fn OnImageSaved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageSaved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageCapture_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageCapture_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CaptureToFile1(self: ?*anyopaque, location: []const u8) i32 {
        const location_str = qtc.libqt_string{
    .len = location.len,
    .data = location.ptr,
};
return qtc.QImageCapture_CaptureToFile1(@ptrCast(self), location_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImageCapture_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/imagecapture.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const NotReadyError: i32 = 1;
        pub const ResourceError: i32 = 2;
        pub const OutOfSpaceError: i32 = 3;
        pub const NotSupportedFeatureError: i32 = 4;
        pub const FormatError: i32 = 5;
    };

    pub const Quality = enum {
        pub const VeryLowQuality: i32 = 0;
        pub const LowQuality: i32 = 1;
        pub const NormalQuality: i32 = 2;
        pub const HighQuality: i32 = 3;
        pub const VeryHighQuality: i32 = 4;
    };

    pub const FileFormat = enum {
        pub const UnspecifiedFormat: i32 = 0;
        pub const JPEG: i32 = 1;
        pub const PNG: i32 = 2;
        pub const WebP: i32 = 3;
        pub const Tiff: i32 = 4;
        pub const LastFileFormat: i32 = 4;
    };

};
