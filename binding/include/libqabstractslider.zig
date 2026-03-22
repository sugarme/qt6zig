const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractslider.html
pub const qabstractslider = struct {

    /// New constructs a new QAbstractSlider object.
    pub fn New(parent: ?*anyopaque) QtC.QAbstractSlider {
        return qtc.QAbstractSlider_new(@ptrCast(parent));
    }


    /// New2 constructs a new QAbstractSlider object.
    pub fn New2() QtC.QAbstractSlider {
        return qtc.QAbstractSlider_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSlider_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractslider.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSlider_Orientation(@ptrCast(self));
    }

    pub fn SetMinimum(self: ?*anyopaque, minimum: i32) void {
        qtc.QAbstractSlider_SetMinimum(@ptrCast(self), minimum);
    }

    pub fn Minimum(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSlider_Minimum(@ptrCast(self));
    }

    pub fn SetMaximum(self: ?*anyopaque, maximum: i32) void {
        qtc.QAbstractSlider_SetMaximum(@ptrCast(self), maximum);
    }

    pub fn Maximum(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSlider_Maximum(@ptrCast(self));
    }

    pub fn SetSingleStep(self: ?*anyopaque, singleStep: i32) void {
        qtc.QAbstractSlider_SetSingleStep(@ptrCast(self), singleStep);
    }

    pub fn SingleStep(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSlider_SingleStep(@ptrCast(self));
    }

    pub fn SetPageStep(self: ?*anyopaque, pageStep: i32) void {
        qtc.QAbstractSlider_SetPageStep(@ptrCast(self), pageStep);
    }

    pub fn PageStep(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSlider_PageStep(@ptrCast(self));
    }

    pub fn SetTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractSlider_SetTracking(@ptrCast(self), enable);
    }

    pub fn HasTracking(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSlider_HasTracking(@ptrCast(self));
    }

    pub fn SetSliderDown(self: ?*anyopaque, sliderDown: bool) void {
        qtc.QAbstractSlider_SetSliderDown(@ptrCast(self), sliderDown);
    }

    pub fn IsSliderDown(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSlider_IsSliderDown(@ptrCast(self));
    }

    pub fn SetSliderPosition(self: ?*anyopaque, sliderPosition: i32) void {
        qtc.QAbstractSlider_SetSliderPosition(@ptrCast(self), sliderPosition);
    }

    pub fn SliderPosition(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSlider_SliderPosition(@ptrCast(self));
    }

    pub fn SetInvertedAppearance(self: ?*anyopaque, invertedAppearance: bool) void {
        qtc.QAbstractSlider_SetInvertedAppearance(@ptrCast(self), invertedAppearance);
    }

    pub fn InvertedAppearance(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSlider_InvertedAppearance(@ptrCast(self));
    }

    pub fn SetInvertedControls(self: ?*anyopaque, invertedControls: bool) void {
        qtc.QAbstractSlider_SetInvertedControls(@ptrCast(self), invertedControls);
    }

    pub fn InvertedControls(self: ?*anyopaque, ) bool {
        return qtc.QAbstractSlider_InvertedControls(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSlider_Value(@ptrCast(self));
    }

    pub fn TriggerAction(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractSlider_TriggerAction(@ptrCast(self), @intCast(action));
    }

    pub fn SetValue(self: ?*anyopaque, value: i32) void {
        qtc.QAbstractSlider_SetValue(@ptrCast(self), value);
    }

    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QAbstractSlider_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    pub fn SetRange(self: ?*anyopaque, min: i32, max: i32) void {
        qtc.QAbstractSlider_SetRange(@ptrCast(self), min, max);
    }

    pub fn ValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QAbstractSlider_ValueChanged(@ptrCast(self), value);
    }

    pub fn OnValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_ValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SliderPressed(self: ?*anyopaque, ) void {
        qtc.QAbstractSlider_SliderPressed(@ptrCast(self));
    }

    pub fn OnSliderPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_SliderPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SliderMoved(self: ?*anyopaque, position: i32) void {
        qtc.QAbstractSlider_SliderMoved(@ptrCast(self), position);
    }

    pub fn OnSliderMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_SliderMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SliderReleased(self: ?*anyopaque, ) void {
        qtc.QAbstractSlider_SliderReleased(@ptrCast(self));
    }

    pub fn OnSliderReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_SliderReleased(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RangeChanged(self: ?*anyopaque, min: i32, max: i32) void {
        qtc.QAbstractSlider_RangeChanged(@ptrCast(self), min, max);
    }

    pub fn OnRangeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_RangeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ActionTriggered(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractSlider_ActionTriggered(@ptrCast(self), action);
    }

    pub fn OnActionTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_Connect_ActionTriggered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QAbstractSlider_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractSlider_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QAbstractSlider_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn SetRepeatAction(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractSlider_SetRepeatAction(@ptrCast(self), @intCast(action));
    }

    /// Allows for overriding the related default method
    pub fn OnSetRepeatAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_OnSetRepeatAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRepeatAction(self: ?*anyopaque, action: i32) void {
        qtc.QAbstractSlider_QBaseSetRepeatAction(@ptrCast(self), @intCast(action));
    }

    pub fn RepeatAction(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSlider_RepeatAction(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRepeatAction(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractSlider_OnRepeatAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRepeatAction(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractSlider_QBaseRepeatAction(@ptrCast(self));
    }

    pub fn SliderChange(self: ?*anyopaque, change: i32) void {
        qtc.QAbstractSlider_SliderChange(@ptrCast(self), @intCast(change));
    }

    /// Allows for overriding the related default method
    pub fn OnSliderChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_OnSliderChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSliderChange(self: ?*anyopaque, change: i32) void {
        qtc.QAbstractSlider_QBaseSliderChange(@ptrCast(self), @intCast(change));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QAbstractSlider_KeyPressEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSlider_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        qtc.QAbstractSlider_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(ev));
    }

    pub fn TimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractSlider_TimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSlider_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractSlider_QBaseTimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractSlider_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSlider_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractSlider_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractSlider_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSlider_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QAbstractSlider_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSlider_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractslider.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSlider_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractslider.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetRepeatAction2(self: ?*anyopaque, action: i32, thresholdTime: i32) void {
        qtc.QAbstractSlider_SetRepeatAction2(@ptrCast(self), @intCast(action), thresholdTime);
    }

    /// Allows for overriding the related default method
    pub fn OnSetRepeatAction2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_OnSetRepeatAction2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRepeatAction2(self: ?*anyopaque, action: i32, thresholdTime: i32) void {
        qtc.QAbstractSlider_QBaseSetRepeatAction2(@ptrCast(self), @intCast(action), thresholdTime);
    }

    pub fn SetRepeatAction3(self: ?*anyopaque, action: i32, thresholdTime: i32, repeatTime: i32) void {
        qtc.QAbstractSlider_SetRepeatAction3(@ptrCast(self), @intCast(action), thresholdTime, repeatTime);
    }

    /// Allows for overriding the related default method
    pub fn OnSetRepeatAction3(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractSlider_OnSetRepeatAction3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRepeatAction3(self: ?*anyopaque, action: i32, thresholdTime: i32, repeatTime: i32) void {
        qtc.QAbstractSlider_QBaseSetRepeatAction3(@ptrCast(self), @intCast(action), thresholdTime, repeatTime);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractSlider_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractslider.html#types
pub const enums = struct {
    pub const SliderAction = enum {
        pub const SliderNoAction: i32 = 0;
        pub const SliderSingleStepAdd: i32 = 1;
        pub const SliderSingleStepSub: i32 = 2;
        pub const SliderPageStepAdd: i32 = 3;
        pub const SliderPageStepSub: i32 = 4;
        pub const SliderToMinimum: i32 = 5;
        pub const SliderToMaximum: i32 = 6;
        pub const SliderMove: i32 = 7;
    };

    pub const SliderChange = enum {
        pub const SliderRangeChange: i32 = 0;
        pub const SliderOrientationChange: i32 = 1;
        pub const SliderStepsChange: i32 = 2;
        pub const SliderValueChange: i32 = 3;
    };

};
