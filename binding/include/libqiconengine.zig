const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qiconengine.html
pub const qiconengine = struct {

    /// New constructs a new QIconEngine object.
    pub fn New() QtC.QIconEngine {
        return qtc.QIconEngine_new();
    }


    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(mode), @intCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(mode), @intCast(state));
    }

    pub fn ActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.QIconEngine_ActualSize(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnActualSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QSize) void {
        qtc.QIconEngine_OnActualSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.QIconEngine_QBaseActualSize(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    pub fn Pixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.QIconEngine_Pixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QPixmap) void {
        qtc.QIconEngine_OnPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.QIconEngine_QBasePixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    pub fn AddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_AddPixmap(@ptrCast(self), @ptrCast(pixmap), @intCast(mode), @intCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnAddPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnAddPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_QBaseAddPixmap(@ptrCast(self), @ptrCast(pixmap), @intCast(mode), @intCast(state));
    }

    pub fn AddFile(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QIconEngine_AddFile(@ptrCast(self), fileName_str, @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnAddFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnAddFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddFile(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QIconEngine_QBaseAddFile(@ptrCast(self), fileName_str, @ptrCast(size), @intCast(mode), @intCast(state));
    }

    pub fn Key(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIconEngine_Key(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.Key: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnKey(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QIconEngine_OnKey(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKey(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIconEngine_QBaseKey(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.Key: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.QIconEngine_Read(@ptrCast(self), @ptrCast(in));
    }

    /// Allows for overriding the related default method
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QIconEngine_OnRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.QIconEngine_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.QIconEngine_Write(@ptrCast(self), @ptrCast(out));
    }

    /// Allows for overriding the related default method
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QIconEngine_OnWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.QIconEngine_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    pub fn AvailableSizes(self: ?*anyopaque, mode: i32, state: i32) []const u8 {
        return qtc.QIconEngine_AvailableSizes(@ptrCast(self), @intCast(mode), @intCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnAvailableSizes(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) [*:0]const u8) void {
        qtc.QIconEngine_OnAvailableSizes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAvailableSizes(self: ?*anyopaque, mode: i32, state: i32) []const u8 {
        return qtc.QIconEngine_QBaseAvailableSizes(@ptrCast(self), @intCast(mode), @intCast(state));
    }

    pub fn IconName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIconEngine_IconName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.IconName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnIconName(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QIconEngine_OnIconName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIconName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIconEngine_QBaseIconName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.IconName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QIconEngine_IsNull(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsNull(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QIconEngine_OnIsNull(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsNull(self: ?*anyopaque, ) bool {
        return qtc.QIconEngine_QBaseIsNull(@ptrCast(self));
    }

    pub fn ScaledPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32, scale: f64) QtC.QPixmap {
        return qtc.QIconEngine_ScaledPixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state), scale);
    }

    /// Allows for overriding the related default method
    pub fn OnScaledPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, f64) callconv(.c) QtC.QPixmap) void {
        qtc.QIconEngine_OnScaledPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScaledPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32, scale: f64) QtC.QPixmap {
        return qtc.QIconEngine_QBaseScaledPixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state), scale);
    }

    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QIconEngine_VirtualHook(@ptrCast(self), id, @ptrCast(data));
    }

    /// Allows for overriding the related default method
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QIconEngine_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QIconEngine_QBaseVirtualHook(@ptrCast(self), id, @ptrCast(data));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIconEngine_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html
pub const qiconengine__scaledpixmapargument = struct {

    /// New constructs a new QIconEngine::ScaledPixmapArgument object.
    pub fn New(param1: ?*anyopaque) QtC.QIconEngine__ScaledPixmapArgument {
        return qtc.QIconEngine__ScaledPixmapArgument_new(@ptrCast(param1));
    }


    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QIconEngine__ScaledPixmapArgument_Size(@ptrCast(self));
    }

    pub fn SetSize(self: ?*anyopaque, size: QtC.QSize) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn Mode(self: ?*anyopaque, ) i32 {
        return qtc.QIconEngine__ScaledPixmapArgument_Mode(@ptrCast(self));
    }

    pub fn SetMode(self: ?*anyopaque, mode: i32) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetMode(@ptrCast(self), @intCast(mode));
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QIconEngine__ScaledPixmapArgument_State(@ptrCast(self));
    }

    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetState(@ptrCast(self), @intCast(state));
    }

    pub fn Scale(self: ?*anyopaque, ) f64 {
        return qtc.QIconEngine__ScaledPixmapArgument_Scale(@ptrCast(self));
    }

    pub fn SetScale(self: ?*anyopaque, scale: f64) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetScale(@ptrCast(self), scale);
    }

    pub fn Pixmap(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QIconEngine__ScaledPixmapArgument_Pixmap(@ptrCast(self));
    }

    pub fn SetPixmap(self: ?*anyopaque, pixmap: QtC.QPixmap) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QIconEngine__ScaledPixmapArgument_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIconEngine__ScaledPixmapArgument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/iconengine.html#types
pub const enums = struct {
    pub const IconEngineHook = enum {
        pub const IsNullHook: i32 = 3;
        pub const ScaledPixmapHook: i32 = 4;
    };

};
