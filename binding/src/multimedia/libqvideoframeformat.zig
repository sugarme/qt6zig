const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvideoframeformat.html
pub const qvideoframeformat = struct {

    /// New constructs a new QVideoFrameFormat object.
    pub fn New() QtC.QVideoFrameFormat {
        return qtc.QVideoFrameFormat_new();
    }


    /// New2 constructs a new QVideoFrameFormat object.
    pub fn New2(size: ?*anyopaque, pixelFormat: i32) QtC.QVideoFrameFormat {
        return qtc.QVideoFrameFormat_new2(@ptrCast(size), @intCast(pixelFormat));
    }


    /// New3 constructs a new QVideoFrameFormat object.
    pub fn New3(format: ?*anyopaque) QtC.QVideoFrameFormat {
        return qtc.QVideoFrameFormat_new3(@ptrCast(format));
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrameFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QVideoFrameFormat_Detach(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QVideoFrameFormat_OperatorAssign(@ptrCast(self), @ptrCast(format));
    }

    pub fn OperatorEqual(self: ?*anyopaque, format: ?*anyopaque) bool {
        return qtc.QVideoFrameFormat_OperatorEqual(@ptrCast(self), @ptrCast(format));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, format: ?*anyopaque) bool {
        return qtc.QVideoFrameFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(format));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QVideoFrameFormat_IsValid(@ptrCast(self));
    }

    pub fn PixelFormat(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrameFormat_PixelFormat(@ptrCast(self));
    }

    pub fn FrameSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QVideoFrameFormat_FrameSize(@ptrCast(self));
    }

    pub fn SetFrameSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QVideoFrameFormat_SetFrameSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn SetFrameSize2(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QVideoFrameFormat_SetFrameSize2(@ptrCast(self), width, height);
    }

    pub fn FrameWidth(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrameFormat_FrameWidth(@ptrCast(self));
    }

    pub fn FrameHeight(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrameFormat_FrameHeight(@ptrCast(self));
    }

    pub fn PlaneCount(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrameFormat_PlaneCount(@ptrCast(self));
    }

    pub fn Viewport(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QVideoFrameFormat_Viewport(@ptrCast(self));
    }

    pub fn SetViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QVideoFrameFormat_SetViewport(@ptrCast(self), @ptrCast(viewport));
    }

    pub fn ScanLineDirection(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrameFormat_ScanLineDirection(@ptrCast(self));
    }

    pub fn SetScanLineDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QVideoFrameFormat_SetScanLineDirection(@ptrCast(self), @intCast(direction));
    }

    pub fn FrameRate(self: ?*anyopaque, ) f64 {
        return qtc.QVideoFrameFormat_FrameRate(@ptrCast(self));
    }

    pub fn SetFrameRate(self: ?*anyopaque, rate: f64) void {
        qtc.QVideoFrameFormat_SetFrameRate(@ptrCast(self), rate);
    }

    pub fn StreamFrameRate(self: ?*anyopaque, ) f64 {
        return qtc.QVideoFrameFormat_StreamFrameRate(@ptrCast(self));
    }

    pub fn SetStreamFrameRate(self: ?*anyopaque, rate: f64) void {
        qtc.QVideoFrameFormat_SetStreamFrameRate(@ptrCast(self), rate);
    }

    pub fn YCbCrColorSpace(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrameFormat_YCbCrColorSpace(@ptrCast(self));
    }

    pub fn SetYCbCrColorSpace(self: ?*anyopaque, colorSpace: i32) void {
        qtc.QVideoFrameFormat_SetYCbCrColorSpace(@ptrCast(self), @intCast(colorSpace));
    }

    pub fn ColorSpace(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrameFormat_ColorSpace(@ptrCast(self));
    }

    pub fn SetColorSpace(self: ?*anyopaque, colorSpace: i32) void {
        qtc.QVideoFrameFormat_SetColorSpace(@ptrCast(self), @intCast(colorSpace));
    }

    pub fn ColorTransfer(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrameFormat_ColorTransfer(@ptrCast(self));
    }

    pub fn SetColorTransfer(self: ?*anyopaque, colorTransfer: i32) void {
        qtc.QVideoFrameFormat_SetColorTransfer(@ptrCast(self), @intCast(colorTransfer));
    }

    pub fn ColorRange(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrameFormat_ColorRange(@ptrCast(self));
    }

    pub fn SetColorRange(self: ?*anyopaque, range: i32) void {
        qtc.QVideoFrameFormat_SetColorRange(@ptrCast(self), @intCast(range));
    }

    pub fn IsMirrored(self: ?*anyopaque, ) bool {
        return qtc.QVideoFrameFormat_IsMirrored(@ptrCast(self));
    }

    pub fn SetMirrored(self: ?*anyopaque, mirrored: bool) void {
        qtc.QVideoFrameFormat_SetMirrored(@ptrCast(self), mirrored);
    }

    pub fn Rotation(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrameFormat_Rotation(@ptrCast(self));
    }

    pub fn SetRotation(self: ?*anyopaque, rotation: i32) void {
        qtc.QVideoFrameFormat_SetRotation(@ptrCast(self), @intCast(rotation));
    }

    pub fn VertexShaderFileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoFrameFormat_VertexShaderFileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeformat.VertexShaderFileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FragmentShaderFileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoFrameFormat_FragmentShaderFileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeformat.FragmentShaderFileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn UpdateUniformData(self: ?*anyopaque, dst: []u8, frame: ?*anyopaque, transform: ?*anyopaque, opacity: f32) void {
        const dst_str = qtc.libqt_string{
    .len = dst.len,
    .data = dst.ptr,
};
qtc.QVideoFrameFormat_UpdateUniformData(@ptrCast(self), dst_str, @ptrCast(frame), @ptrCast(transform), opacity);
    }

    pub fn MaxLuminance(self: ?*anyopaque, ) f32 {
        return qtc.QVideoFrameFormat_MaxLuminance(@ptrCast(self));
    }

    pub fn SetMaxLuminance(self: ?*anyopaque, lum: f32) void {
        qtc.QVideoFrameFormat_SetMaxLuminance(@ptrCast(self), lum);
    }

    pub fn PixelFormatFromImageFormat(format: i32) i32 {
        return qtc.QVideoFrameFormat_PixelFormatFromImageFormat(@intCast(format));
    }

    pub fn ImageFormatFromPixelFormat(format: i32) i32 {
        return qtc.QVideoFrameFormat_ImageFormatFromPixelFormat(@intCast(format));
    }

    pub fn PixelFormatToString(pixelFormat: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoFrameFormat_PixelFormatToString(@intCast(pixelFormat));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframeformat.PixelFormatToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVideoFrameFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/videoframeformat.html#types
pub const enums = struct {
    pub const PixelFormat = enum {
        pub const Format_Invalid: i32 = 0;
        pub const Format_ARGB8888: i32 = 1;
        pub const Format_ARGB8888_Premultiplied: i32 = 2;
        pub const Format_XRGB8888: i32 = 3;
        pub const Format_BGRA8888: i32 = 4;
        pub const Format_BGRA8888_Premultiplied: i32 = 5;
        pub const Format_BGRX8888: i32 = 6;
        pub const Format_ABGR8888: i32 = 7;
        pub const Format_XBGR8888: i32 = 8;
        pub const Format_RGBA8888: i32 = 9;
        pub const Format_RGBX8888: i32 = 10;
        pub const Format_AYUV: i32 = 11;
        pub const Format_AYUV_Premultiplied: i32 = 12;
        pub const Format_YUV420P: i32 = 13;
        pub const Format_YUV422P: i32 = 14;
        pub const Format_YV12: i32 = 15;
        pub const Format_UYVY: i32 = 16;
        pub const Format_YUYV: i32 = 17;
        pub const Format_NV12: i32 = 18;
        pub const Format_NV21: i32 = 19;
        pub const Format_IMC1: i32 = 20;
        pub const Format_IMC2: i32 = 21;
        pub const Format_IMC3: i32 = 22;
        pub const Format_IMC4: i32 = 23;
        pub const Format_Y8: i32 = 24;
        pub const Format_Y16: i32 = 25;
        pub const Format_P010: i32 = 26;
        pub const Format_P016: i32 = 27;
        pub const Format_SamplerExternalOES: i32 = 28;
        pub const Format_Jpeg: i32 = 29;
        pub const Format_SamplerRect: i32 = 30;
        pub const Format_YUV420P10: i32 = 31;
    };

    pub const Direction = enum {
        pub const TopToBottom: i32 = 0;
        pub const BottomToTop: i32 = 1;
    };

    pub const YCbCrColorSpace = enum {
        pub const YCbCr_Undefined: i32 = 0;
        pub const YCbCr_BT601: i32 = 1;
        pub const YCbCr_BT709: i32 = 2;
        pub const YCbCr_xvYCC601: i32 = 3;
        pub const YCbCr_xvYCC709: i32 = 4;
        pub const YCbCr_JPEG: i32 = 5;
        pub const YCbCr_BT2020: i32 = 6;
    };

    pub const ColorSpace = enum {
        pub const ColorSpace_Undefined: i32 = 0;
        pub const ColorSpace_BT601: i32 = 1;
        pub const ColorSpace_BT709: i32 = 2;
        pub const ColorSpace_AdobeRgb: i32 = 5;
        pub const ColorSpace_BT2020: i32 = 6;
    };

    pub const ColorTransfer = enum {
        pub const ColorTransfer_Unknown: i32 = 0;
        pub const ColorTransfer_BT709: i32 = 1;
        pub const ColorTransfer_BT601: i32 = 2;
        pub const ColorTransfer_Linear: i32 = 3;
        pub const ColorTransfer_Gamma22: i32 = 4;
        pub const ColorTransfer_Gamma28: i32 = 5;
        pub const ColorTransfer_ST2084: i32 = 6;
        pub const ColorTransfer_STD_B67: i32 = 7;
    };

    pub const ColorRange = enum {
        pub const ColorRange_Unknown: i32 = 0;
        pub const ColorRange_Video: i32 = 1;
        pub const ColorRange_Full: i32 = 2;
    };

};
