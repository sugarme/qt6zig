const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qelapsedtimer.html
pub const qelapsedtimer = struct {

    /// New constructs a new QElapsedTimer object.
    pub fn New(other: ?*anyopaque) QtC.QElapsedTimer {
        return qtc.QElapsedTimer_new(@ptrCast(other));
    }


    /// New2 constructs a new QElapsedTimer object.
    pub fn New2(other: ?*anyopaque) QtC.QElapsedTimer {
        return qtc.QElapsedTimer_new2(@ptrCast(other));
    }


    /// New3 constructs a new QElapsedTimer object.
    pub fn New3() QtC.QElapsedTimer {
        return qtc.QElapsedTimer_new3();
    }


    /// New4 constructs a new QElapsedTimer object.
    pub fn New4(param1: ?*anyopaque) QtC.QElapsedTimer {
        return qtc.QElapsedTimer_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QElapsedTimer_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QElapsedTimer_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ClockType() i32 {
        return qtc.QElapsedTimer_ClockType();
    }

    pub fn IsMonotonic() bool {
        return qtc.QElapsedTimer_IsMonotonic();
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QElapsedTimer_Start(@ptrCast(self));
    }

    pub fn Restart(self: ?*anyopaque, ) i64 {
        return qtc.QElapsedTimer_Restart(@ptrCast(self));
    }

    pub fn Invalidate(self: ?*anyopaque, ) void {
        qtc.QElapsedTimer_Invalidate(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QElapsedTimer_IsValid(@ptrCast(self));
    }

    pub fn NsecsElapsed(self: ?*anyopaque, ) i64 {
        return qtc.QElapsedTimer_NsecsElapsed(@ptrCast(self));
    }

    pub fn Elapsed(self: ?*anyopaque, ) i64 {
        return qtc.QElapsedTimer_Elapsed(@ptrCast(self));
    }

    pub fn HasExpired(self: ?*anyopaque, timeout: i64) bool {
        return qtc.QElapsedTimer_HasExpired(@ptrCast(self), timeout);
    }

    pub fn MsecsSinceReference(self: ?*anyopaque, ) i64 {
        return qtc.QElapsedTimer_MsecsSinceReference(@ptrCast(self));
    }

    pub fn MsecsTo(self: ?*anyopaque, other: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_MsecsTo(@ptrCast(self), @ptrCast(other));
    }

    pub fn SecsTo(self: ?*anyopaque, other: ?*anyopaque) i64 {
        return qtc.QElapsedTimer_SecsTo(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QElapsedTimer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/elapsedtimer.html#types
pub const enums = struct {
    pub const ClockType = enum {
        pub const SystemTime: i32 = 0;
        pub const MonotonicClock: i32 = 1;
        pub const MachAbsoluteTime: i32 = 2;
        pub const PerformanceCounter: i32 = 3;
    };

};
