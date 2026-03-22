const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmediatimerange.html
pub const qmediatimerange = struct {

    /// New constructs a new QMediaTimeRange object.
    pub fn New() QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_new();
    }


    /// New2 constructs a new QMediaTimeRange object.
    pub fn New2(start: i64, end: i64) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_new2(start, end);
    }


    /// New3 constructs a new QMediaTimeRange object.
    pub fn New3(param1: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_new3(@ptrCast(param1));
    }


    /// New4 constructs a new QMediaTimeRange object.
    pub fn New4(range: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_new4(@ptrCast(range));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMediaTimeRange_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaTimeRange_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QMediaTimeRange_Detach(@ptrCast(self));
    }

    pub fn OperatorAssign2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMediaTimeRange_OperatorAssign2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn EarliestTime(self: ?*anyopaque, ) i64 {
        return qtc.QMediaTimeRange_EarliestTime(@ptrCast(self));
    }

    pub fn LatestTime(self: ?*anyopaque, ) i64 {
        return qtc.QMediaTimeRange_LatestTime(@ptrCast(self));
    }

    pub fn Intervals(self: ?*anyopaque, ) []const u8 {
        return qtc.QMediaTimeRange_Intervals(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QMediaTimeRange_IsEmpty(@ptrCast(self));
    }

    pub fn IsContinuous(self: ?*anyopaque, ) bool {
        return qtc.QMediaTimeRange_IsContinuous(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, time: i64) bool {
        return qtc.QMediaTimeRange_Contains(@ptrCast(self), time);
    }

    pub fn AddInterval(self: ?*anyopaque, start: i64, end: i64) void {
        qtc.QMediaTimeRange_AddInterval(@ptrCast(self), start, end);
    }

    pub fn AddInterval2(self: ?*anyopaque, interval: ?*anyopaque) void {
        qtc.QMediaTimeRange_AddInterval2(@ptrCast(self), @ptrCast(interval));
    }

    pub fn AddTimeRange(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMediaTimeRange_AddTimeRange(@ptrCast(self), @ptrCast(param1));
    }

    pub fn RemoveInterval(self: ?*anyopaque, start: i64, end: i64) void {
        qtc.QMediaTimeRange_RemoveInterval(@ptrCast(self), start, end);
    }

    pub fn RemoveInterval2(self: ?*anyopaque, interval: ?*anyopaque) void {
        qtc.QMediaTimeRange_RemoveInterval2(@ptrCast(self), @ptrCast(interval));
    }

    pub fn RemoveTimeRange(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QMediaTimeRange_RemoveTimeRange(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_OperatorPlusAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorPlusAssign2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_OperatorPlusAssign2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, param1: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_OperatorMinusAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorMinusAssign2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QMediaTimeRange {
        return qtc.QMediaTimeRange_OperatorMinusAssign2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QMediaTimeRange_Clear(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaTimeRange_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmediatimerange-interval.html
pub const qmediatimerange__interval = struct {

    /// New constructs a new QMediaTimeRange::Interval object.
    pub fn New(other: ?*anyopaque) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_new(@ptrCast(other));
    }


    /// New2 constructs a new QMediaTimeRange::Interval object.
    pub fn New2(other: ?*anyopaque) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMediaTimeRange::Interval object.
    pub fn New3() QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_new3();
    }


    /// New4 constructs a new QMediaTimeRange::Interval object.
    pub fn New4(start: i64, end: i64) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_new4(start, end);
    }


    /// New5 constructs a new QMediaTimeRange::Interval object.
    pub fn New5(param1: ?*anyopaque) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaTimeRange__Interval_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaTimeRange__Interval_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Start(self: ?*anyopaque, ) i64 {
        return qtc.QMediaTimeRange__Interval_Start(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) i64 {
        return qtc.QMediaTimeRange__Interval_End(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, time: i64) bool {
        return qtc.QMediaTimeRange__Interval_Contains(@ptrCast(self), time);
    }

    pub fn IsNormal(self: ?*anyopaque, ) bool {
        return qtc.QMediaTimeRange__Interval_IsNormal(@ptrCast(self));
    }

    pub fn Normalized(self: ?*anyopaque, ) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_Normalized(@ptrCast(self));
    }

    pub fn Translated(self: ?*anyopaque, offset: i64) QtC.QMediaTimeRange__Interval {
        return qtc.QMediaTimeRange__Interval_Translated(@ptrCast(self), offset);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaTimeRange__Interval_Delete(@ptrCast(self));
    }
};
