const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html
pub const qtest__qtoucheventwidgetsequence = struct {

    /// New constructs a new QTest::QTouchEventWidgetSequence object.
    pub fn New(param1: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_new(@ptrCast(param1));
    }


    pub fn Press(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Press(@ptrCast(self), touchId, @ptrCast(pt));
    }

    pub fn Move(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Move(@ptrCast(self), touchId, @ptrCast(pt));
    }

    pub fn Release(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Release(@ptrCast(self), touchId, @ptrCast(pt));
    }

    pub fn Stationary(self: ?*anyopaque, touchId: i32) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Stationary(@ptrCast(self), touchId);
    }

    /// Allows for overriding the related default method
    pub fn OnStationary(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QTest__QTouchEventWidgetSequence) void {
        qtc.QTest__QTouchEventWidgetSequence_OnStationary(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStationary(self: ?*anyopaque, touchId: i32) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_QBaseStationary(@ptrCast(self), touchId);
    }

    pub fn Commit(self: ?*anyopaque, processEvents: bool) bool {
        return qtc.QTest__QTouchEventWidgetSequence_Commit(@ptrCast(self), processEvents);
    }

    /// Allows for overriding the related default method
    pub fn OnCommit(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QTest__QTouchEventWidgetSequence_OnCommit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCommit(self: ?*anyopaque, processEvents: bool) bool {
        return qtc.QTest__QTouchEventWidgetSequence_QBaseCommit(@ptrCast(self), processEvents);
    }

    pub fn Press3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, widget: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Press3(@ptrCast(self), touchId, @ptrCast(pt), @ptrCast(widget));
    }

    pub fn Move3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, widget: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Move3(@ptrCast(self), touchId, @ptrCast(pt), @ptrCast(widget));
    }

    pub fn Release3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, widget: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Release3(@ptrCast(self), touchId, @ptrCast(pt), @ptrCast(widget));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTest__QTouchEventWidgetSequence_Delete(@ptrCast(self));
    }
};
