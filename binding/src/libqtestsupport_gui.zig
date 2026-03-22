const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html
pub const qtest__qtoucheventsequence = struct {

    /// New constructs a new QTest::QTouchEventSequence object.
    pub fn New(param1: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_new(@ptrCast(param1));
    }


    pub fn Press(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Press(@ptrCast(self), touchId, @ptrCast(pt));
    }

    pub fn Move(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Move(@ptrCast(self), touchId, @ptrCast(pt));
    }

    pub fn Release(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Release(@ptrCast(self), touchId, @ptrCast(pt));
    }

    pub fn Stationary(self: ?*anyopaque, touchId: i32) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Stationary(@ptrCast(self), touchId);
    }

    /// Allows for overriding the related default method
    pub fn OnStationary(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QTest__QTouchEventSequence) void {
        qtc.QTest__QTouchEventSequence_OnStationary(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStationary(self: ?*anyopaque, touchId: i32) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_QBaseStationary(@ptrCast(self), touchId);
    }

    pub fn Commit(self: ?*anyopaque, processEvents: bool) bool {
        return qtc.QTest__QTouchEventSequence_Commit(@ptrCast(self), processEvents);
    }

    /// Allows for overriding the related default method
    pub fn OnCommit(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QTest__QTouchEventSequence_OnCommit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCommit(self: ?*anyopaque, processEvents: bool) bool {
        return qtc.QTest__QTouchEventSequence_QBaseCommit(@ptrCast(self), processEvents);
    }

    pub fn MapToScreen(self: ?*anyopaque, window: ?*anyopaque, pt: ?*anyopaque) QtC.QPoint {
        return qtc.QTest__QTouchEventSequence_MapToScreen(@ptrCast(self), @ptrCast(window), @ptrCast(pt));
    }

    /// Allows for overriding the related default method
    pub fn OnMapToScreen(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPoint) void {
        qtc.QTest__QTouchEventSequence_OnMapToScreen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMapToScreen(self: ?*anyopaque, window: ?*anyopaque, pt: ?*anyopaque) QtC.QPoint {
        return qtc.QTest__QTouchEventSequence_QBaseMapToScreen(@ptrCast(self), @ptrCast(window), @ptrCast(pt));
    }

    pub fn Point(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventSequence_Point(@ptrCast(self), touchId);
    }

    /// Allows for overriding the related default method
    pub fn OnPoint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QEventPoint) void {
        qtc.QTest__QTouchEventSequence_OnPoint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePoint(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventSequence_QBasePoint(@ptrCast(self), touchId);
    }

    pub fn PointOrPreviousPoint(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventSequence_PointOrPreviousPoint(@ptrCast(self), touchId);
    }

    /// Allows for overriding the related default method
    pub fn OnPointOrPreviousPoint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QEventPoint) void {
        qtc.QTest__QTouchEventSequence_OnPointOrPreviousPoint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePointOrPreviousPoint(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventSequence_QBasePointOrPreviousPoint(@ptrCast(self), touchId);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTest__QTouchEventSequence_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnOperatorAssign(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTest__QTouchEventSequence_OnOperatorAssign(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTest__QTouchEventSequence_QBaseOperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Press3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, window: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Press3(@ptrCast(self), touchId, @ptrCast(pt), @ptrCast(window));
    }

    pub fn Move3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, window: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Move3(@ptrCast(self), touchId, @ptrCast(pt), @ptrCast(window));
    }

    pub fn Release3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, window: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Release3(@ptrCast(self), touchId, @ptrCast(pt), @ptrCast(window));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTest__QTouchEventSequence_Delete(@ptrCast(self));
    }
};
