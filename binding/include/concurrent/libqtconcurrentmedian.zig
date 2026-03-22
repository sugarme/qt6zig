const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtconcurrent-median.html
pub const qtconcurrent__median = struct {

    /// New constructs a new QtConcurrent::Median object.
    pub fn New(other: ?*anyopaque) QtC.QtConcurrent__Median {
        return qtc.QtConcurrent__Median_new(@ptrCast(other));
    }


    /// New2 constructs a new QtConcurrent::Median object.
    pub fn New2(other: ?*anyopaque) QtC.QtConcurrent__Median {
        return qtc.QtConcurrent__Median_new2(@ptrCast(other));
    }


    /// New3 constructs a new QtConcurrent::Median object.
    pub fn New3() QtC.QtConcurrent__Median {
        return qtc.QtConcurrent__Median_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QtConcurrent__Median_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QtConcurrent__Median_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__Median_Reset(@ptrCast(self));
    }

    pub fn AddValue(self: ?*anyopaque, value: f64) void {
        qtc.QtConcurrent__Median_AddValue(@ptrCast(self), value);
    }

    pub fn IsMedianValid(self: ?*anyopaque, ) bool {
        return qtc.QtConcurrent__Median_IsMedianValid(@ptrCast(self));
    }

    pub fn Median(self: ?*anyopaque, ) f64 {
        return qtc.QtConcurrent__Median_Median(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QtConcurrent__Median_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/tconcurrentmedian.html#types
pub const enums = struct {
};
