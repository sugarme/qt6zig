const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbasictimer.html
pub const qbasictimer = struct {

    /// New constructs a new QBasicTimer object.
    pub fn New() QtC.QBasicTimer {
        return qtc.QBasicTimer_new();
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBasicTimer_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QBasicTimer_IsActive(@ptrCast(self));
    }

    pub fn TimerId(self: ?*anyopaque, ) i32 {
        return qtc.QBasicTimer_TimerId(@ptrCast(self));
    }

    pub fn Start(self: ?*anyopaque, msec: i32, obj: ?*anyopaque) void {
        qtc.QBasicTimer_Start(@ptrCast(self), msec, @ptrCast(obj));
    }

    pub fn Start2(self: ?*anyopaque, msec: i32, timerType: i32, obj: ?*anyopaque) void {
        qtc.QBasicTimer_Start2(@ptrCast(self), msec, @intCast(timerType), @ptrCast(obj));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QBasicTimer_Stop(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBasicTimer_Delete(@ptrCast(self));
    }
};
