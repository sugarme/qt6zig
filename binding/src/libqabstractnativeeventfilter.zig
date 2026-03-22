const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractnativeeventfilter.html
pub const qabstractnativeeventfilter = struct {

    /// New constructs a new QAbstractNativeEventFilter object.
    pub fn New() QtC.QAbstractNativeEventFilter {
        return qtc.QAbstractNativeEventFilter_new();
    }


    pub fn NativeEventFilter(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
    .len = eventType.len,
    .data = eventType.ptr,
};
return qtc.QAbstractNativeEventFilter_NativeEventFilter(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Allows for overriding the related default method
    pub fn OnNativeEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QAbstractNativeEventFilter_OnNativeEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNativeEventFilter(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
    .len = eventType.len,
    .data = eventType.ptr,
};
return qtc.QAbstractNativeEventFilter_QBaseNativeEventFilter(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractNativeEventFilter_Delete(@ptrCast(self));
    }
};
