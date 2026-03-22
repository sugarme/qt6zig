const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qgesturerecognizer.html
pub const qgesturerecognizer = struct {

    /// New constructs a new QGestureRecognizer object.
    pub fn New() QtC.QGestureRecognizer {
        return qtc.QGestureRecognizer_new();
    }


    /// New2 constructs a new QGestureRecognizer object.
    pub fn New2(param1: ?*anyopaque) QtC.QGestureRecognizer {
        return qtc.QGestureRecognizer_new2(@ptrCast(param1));
    }


    pub fn Create(self: ?*anyopaque, target: ?*anyopaque) QtC.QGesture {
        return qtc.QGestureRecognizer_Create(@ptrCast(self), @ptrCast(target));
    }

    /// Allows for overriding the related default method
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QGesture) void {
        qtc.QGestureRecognizer_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreate(self: ?*anyopaque, target: ?*anyopaque) QtC.QGesture {
        return qtc.QGestureRecognizer_QBaseCreate(@ptrCast(self), @ptrCast(target));
    }

    pub fn Recognize(self: ?*anyopaque, state: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QGestureRecognizer_Recognize(@ptrCast(self), @ptrCast(state), @ptrCast(watched), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnRecognize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGestureRecognizer_OnRecognize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRecognize(self: ?*anyopaque, state: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QGestureRecognizer_QBaseRecognize(@ptrCast(self), @ptrCast(state), @ptrCast(watched), @ptrCast(event));
    }

    pub fn Reset(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QGestureRecognizer_Reset(@ptrCast(self), @ptrCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnReset(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGestureRecognizer_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReset(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QGestureRecognizer_QBaseReset(@ptrCast(self), @ptrCast(state));
    }

    pub fn RegisterRecognizer(recognizer: ?*anyopaque) i64 {
        return qtc.QGestureRecognizer_RegisterRecognizer(@ptrCast(recognizer));
    }

    pub fn UnregisterRecognizer(typeVal: i64) void {
        qtc.QGestureRecognizer_UnregisterRecognizer(@intCast(typeVal));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGestureRecognizer_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGestureRecognizer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/gesturerecognizer.html#types
pub const enums = struct {
    pub const ResultFlag = enum {
        pub const Ignore: i32 = 1;
        pub const MayBeGesture: i32 = 2;
        pub const TriggerGesture: i32 = 4;
        pub const FinishGesture: i32 = 8;
        pub const CancelGesture: i32 = 16;
        pub const ResultState_Mask: i32 = 255;
        pub const ConsumeEventHint: i32 = 256;
        pub const ResultHint_Mask: i32 = 65280;
    };

};
