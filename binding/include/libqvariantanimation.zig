const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvariantanimation.html
pub const qvariantanimation = struct {

    /// New constructs a new QVariantAnimation object.
    pub fn New() QtC.QVariantAnimation {
        return qtc.QVariantAnimation_new();
    }


    /// New2 constructs a new QVariantAnimation object.
    pub fn New2(parent: ?*anyopaque) QtC.QVariantAnimation {
        return qtc.QVariantAnimation_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVariantAnimation_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvariantanimation.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StartValue(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QVariantAnimation_StartValue(@ptrCast(self));
    }

    pub fn SetStartValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QVariantAnimation_SetStartValue(@ptrCast(self), @ptrCast(value));
    }

    pub fn EndValue(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QVariantAnimation_EndValue(@ptrCast(self));
    }

    pub fn SetEndValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QVariantAnimation_SetEndValue(@ptrCast(self), @ptrCast(value));
    }

    pub fn KeyValueAt(self: ?*anyopaque, step: f64) QtC.QVariant {
        return qtc.QVariantAnimation_KeyValueAt(@ptrCast(self), step);
    }

    pub fn SetKeyValueAt(self: ?*anyopaque, step: f64, value: ?*anyopaque) void {
        qtc.QVariantAnimation_SetKeyValueAt(@ptrCast(self), step, @ptrCast(value));
    }

    pub fn KeyValues(self: ?*anyopaque, ) []const u8 {
        return qtc.QVariantAnimation_KeyValues(@ptrCast(self));
    }

    pub fn SetKeyValues(self: ?*anyopaque, values: []const u8) void {
        qtc.QVariantAnimation_SetKeyValues(@ptrCast(self), @ptrCast(values));
    }

    pub fn CurrentValue(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QVariantAnimation_CurrentValue(@ptrCast(self));
    }

    pub fn Duration(self: ?*anyopaque, ) i32 {
        return qtc.QVariantAnimation_Duration(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDuration(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QVariantAnimation_OnDuration(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDuration(self: ?*anyopaque, ) i32 {
        return qtc.QVariantAnimation_QBaseDuration(@ptrCast(self));
    }

    pub fn SetDuration(self: ?*anyopaque, msecs: i32) void {
        qtc.QVariantAnimation_SetDuration(@ptrCast(self), msecs);
    }

    pub fn BindableDuration(self: ?*anyopaque, ) QBindable<int> {
        return qtc.QVariantAnimation_BindableDuration(@ptrCast(self));
    }

    pub fn EasingCurve(self: ?*anyopaque, ) QtC.QEasingCurve {
        return qtc.QVariantAnimation_EasingCurve(@ptrCast(self));
    }

    pub fn SetEasingCurve(self: ?*anyopaque, easing: ?*anyopaque) void {
        qtc.QVariantAnimation_SetEasingCurve(@ptrCast(self), @ptrCast(easing));
    }

    pub fn BindableEasingCurve(self: ?*anyopaque, ) QBindable<QEasingCurve> {
        return qtc.QVariantAnimation_BindableEasingCurve(@ptrCast(self));
    }

    pub fn ValueChanged(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QVariantAnimation_ValueChanged(@ptrCast(self), @ptrCast(value));
    }

    pub fn OnValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVariantAnimation_Connect_ValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVariantAnimation_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVariantAnimation_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVariantAnimation_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn UpdateCurrentTime(self: ?*anyopaque, param1: i32) void {
        qtc.QVariantAnimation_UpdateCurrentTime(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateCurrentTime(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVariantAnimation_OnUpdateCurrentTime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateCurrentTime(self: ?*anyopaque, param1: i32) void {
        qtc.QVariantAnimation_QBaseUpdateCurrentTime(@ptrCast(self), param1);
    }

    pub fn UpdateState(self: ?*anyopaque, newState: i32, oldState: i32) void {
        qtc.QVariantAnimation_UpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QVariantAnimation_OnUpdateState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateState(self: ?*anyopaque, newState: i32, oldState: i32) void {
        qtc.QVariantAnimation_QBaseUpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    pub fn UpdateCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QVariantAnimation_UpdateCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateCurrentValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVariantAnimation_OnUpdateCurrentValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QVariantAnimation_QBaseUpdateCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    pub fn Interpolated(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, progress: f64) QtC.QVariant {
        return qtc.QVariantAnimation_Interpolated(@ptrCast(self), @ptrCast(from), @ptrCast(to), progress);
    }

    /// Allows for overriding the related default method
    pub fn OnInterpolated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, f64) callconv(.c) QtC.QVariant) void {
        qtc.QVariantAnimation_OnInterpolated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInterpolated(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, progress: f64) QtC.QVariant {
        return qtc.QVariantAnimation_QBaseInterpolated(@ptrCast(self), @ptrCast(from), @ptrCast(to), progress);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVariantAnimation_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvariantanimation.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVariantAnimation_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvariantanimation.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVariantAnimation_Delete(@ptrCast(self));
    }
};
