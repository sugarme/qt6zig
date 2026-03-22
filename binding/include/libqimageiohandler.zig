const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qimageiohandler.html
pub const qimageiohandler = struct {

    /// New constructs a new QImageIOHandler object.
    pub fn New() QtC.QImageIOHandler {
        return qtc.QImageIOHandler_new();
    }


    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QImageIOHandler_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Device(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QImageIOHandler_Device(@ptrCast(self));
    }

    pub fn SetFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QImageIOHandler_SetFormat(@ptrCast(self), format_str);
    }

    pub fn SetFormat2(self: ?*anyopaque, format: []u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QImageIOHandler_SetFormat2(@ptrCast(self), format_str);
    }

    pub fn Format(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QImageIOHandler_Format(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimageiohandler.Format: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn CanRead(self: ?*anyopaque, ) bool {
        return qtc.QImageIOHandler_CanRead(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCanRead(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnCanRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanRead(self: ?*anyopaque, ) bool {
        return qtc.QImageIOHandler_QBaseCanRead(@ptrCast(self));
    }

    pub fn Read(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageIOHandler_Read(@ptrCast(self), @ptrCast(image));
    }

    /// Allows for overriding the related default method
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRead(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageIOHandler_QBaseRead(@ptrCast(self), @ptrCast(image));
    }

    pub fn Write(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageIOHandler_Write(@ptrCast(self), @ptrCast(image));
    }

    /// Allows for overriding the related default method
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWrite(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageIOHandler_QBaseWrite(@ptrCast(self), @ptrCast(image));
    }

    pub fn Option(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QImageIOHandler_Option(@ptrCast(self), @intCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QImageIOHandler_OnOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOption(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QImageIOHandler_QBaseOption(@ptrCast(self), @intCast(option));
    }

    pub fn SetOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QImageIOHandler_SetOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnSetOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageIOHandler_OnSetOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QImageIOHandler_QBaseSetOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    pub fn SupportsOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QImageIOHandler_SupportsOption(@ptrCast(self), @intCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnSupportsOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnSupportsOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSupportsOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QImageIOHandler_QBaseSupportsOption(@ptrCast(self), @intCast(option));
    }

    pub fn JumpToNextImage(self: ?*anyopaque, ) bool {
        return qtc.QImageIOHandler_JumpToNextImage(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnJumpToNextImage(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnJumpToNextImage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseJumpToNextImage(self: ?*anyopaque, ) bool {
        return qtc.QImageIOHandler_QBaseJumpToNextImage(@ptrCast(self));
    }

    pub fn JumpToImage(self: ?*anyopaque, imageNumber: i32) bool {
        return qtc.QImageIOHandler_JumpToImage(@ptrCast(self), imageNumber);
    }

    /// Allows for overriding the related default method
    pub fn OnJumpToImage(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnJumpToImage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseJumpToImage(self: ?*anyopaque, imageNumber: i32) bool {
        return qtc.QImageIOHandler_QBaseJumpToImage(@ptrCast(self), imageNumber);
    }

    pub fn LoopCount(self: ?*anyopaque, ) i32 {
        return qtc.QImageIOHandler_LoopCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnLoopCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QImageIOHandler_OnLoopCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseLoopCount(self: ?*anyopaque, ) i32 {
        return qtc.QImageIOHandler_QBaseLoopCount(@ptrCast(self));
    }

    pub fn ImageCount(self: ?*anyopaque, ) i32 {
        return qtc.QImageIOHandler_ImageCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnImageCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QImageIOHandler_OnImageCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseImageCount(self: ?*anyopaque, ) i32 {
        return qtc.QImageIOHandler_QBaseImageCount(@ptrCast(self));
    }

    pub fn NextImageDelay(self: ?*anyopaque, ) i32 {
        return qtc.QImageIOHandler_NextImageDelay(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNextImageDelay(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QImageIOHandler_OnNextImageDelay(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNextImageDelay(self: ?*anyopaque, ) i32 {
        return qtc.QImageIOHandler_QBaseNextImageDelay(@ptrCast(self));
    }

    pub fn CurrentImageNumber(self: ?*anyopaque, ) i32 {
        return qtc.QImageIOHandler_CurrentImageNumber(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentImageNumber(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QImageIOHandler_OnCurrentImageNumber(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentImageNumber(self: ?*anyopaque, ) i32 {
        return qtc.QImageIOHandler_QBaseCurrentImageNumber(@ptrCast(self));
    }

    pub fn CurrentImageRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QImageIOHandler_CurrentImageRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCurrentImageRect(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QImageIOHandler_OnCurrentImageRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCurrentImageRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QImageIOHandler_QBaseCurrentImageRect(@ptrCast(self));
    }

    pub fn AllocateImage(size: QtC.QSize, format: i32, image: ?*anyopaque) bool {
        return qtc.QImageIOHandler_AllocateImage(@ptrCast(size), @intCast(format), @ptrCast(image));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImageIOHandler_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qimageioplugin.html
pub const qimageioplugin = struct {

    /// New constructs a new QImageIOPlugin object.
    pub fn New() QtC.QImageIOPlugin {
        return qtc.QImageIOPlugin_new();
    }


    /// New2 constructs a new QImageIOPlugin object.
    pub fn New2(parent: ?*anyopaque) QtC.QImageIOPlugin {
        return qtc.QImageIOPlugin_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageIOPlugin_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimageioplugin.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Capabilities(self: ?*anyopaque, device: ?*anyopaque, format: []u8) i32 {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QImageIOPlugin_Capabilities(@ptrCast(self), @ptrCast(device), format_str);
    }

    /// Allows for overriding the related default method
    pub fn OnCapabilities(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]u8) callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnCapabilities(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCapabilities(self: ?*anyopaque, device: ?*anyopaque, format: []u8) i32 {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QImageIOPlugin_QBaseCapabilities(@ptrCast(self), @ptrCast(device), format_str);
    }

    pub fn Create(self: ?*anyopaque, device: ?*anyopaque, format: []u8) QtC.QImageIOHandler {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QImageIOPlugin_Create(@ptrCast(self), @ptrCast(device), format_str);
    }

    /// Allows for overriding the related default method
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]u8) callconv(.c) QtC.QImageIOHandler) void {
        qtc.QImageIOPlugin_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreate(self: ?*anyopaque, device: ?*anyopaque, format: []u8) QtC.QImageIOHandler {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QImageIOPlugin_QBaseCreate(@ptrCast(self), @ptrCast(device), format_str);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageIOPlugin_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimageioplugin.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageIOPlugin_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimageioplugin.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImageIOPlugin_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/imageiohandler.html#types
pub const enums = struct {
    pub const ImageOption = enum {
        pub const Size: i32 = 0;
        pub const ClipRect: i32 = 1;
        pub const Description: i32 = 2;
        pub const ScaledClipRect: i32 = 3;
        pub const ScaledSize: i32 = 4;
        pub const CompressionRatio: i32 = 5;
        pub const Gamma: i32 = 6;
        pub const Quality: i32 = 7;
        pub const Name: i32 = 8;
        pub const SubType: i32 = 9;
        pub const IncrementalReading: i32 = 10;
        pub const Endianness: i32 = 11;
        pub const Animation: i32 = 12;
        pub const BackgroundColor: i32 = 13;
        pub const ImageFormat: i32 = 14;
        pub const SupportedSubTypes: i32 = 15;
        pub const OptimizedWrite: i32 = 16;
        pub const ProgressiveScanWrite: i32 = 17;
        pub const ImageTransformation: i32 = 18;
    };

    pub const Transformation = enum {
        pub const TransformationNone: i32 = 0;
        pub const TransformationMirror: i32 = 1;
        pub const TransformationFlip: i32 = 2;
        pub const TransformationRotate180: i32 = 3;
        pub const TransformationRotate90: i32 = 4;
        pub const TransformationMirrorAndRotate90: i32 = 5;
        pub const TransformationFlipAndRotate90: i32 = 6;
        pub const TransformationRotate270: i32 = 7;
    };

    pub const Capability = enum {
        pub const CanRead: i32 = 1;
        pub const CanWrite: i32 = 2;
        pub const CanReadIncremental: i32 = 4;
    };

};
