const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtconcurrent-taskstartparameters.html
pub const qtconcurrent__taskstartparameters = struct {

    /// New constructs a new QtConcurrent::TaskStartParameters object.
    pub fn New(other: ?*anyopaque) QtC.QtConcurrent__TaskStartParameters {
        return qtc.QtConcurrent__TaskStartParameters_new(@ptrCast(other));
    }


    /// New2 constructs a new QtConcurrent::TaskStartParameters object.
    pub fn New2(other: ?*anyopaque) QtC.QtConcurrent__TaskStartParameters {
        return qtc.QtConcurrent__TaskStartParameters_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QtConcurrent__TaskStartParameters_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QtConcurrent__TaskStartParameters_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ThreadPool(self: ?*anyopaque, ) QtC.QThreadPool {
        return qtc.QtConcurrent__TaskStartParameters_ThreadPool(@ptrCast(self));
    }

    pub fn SetThreadPool(self: ?*anyopaque, threadPool: ?*anyopaque) void {
        qtc.QtConcurrent__TaskStartParameters_SetThreadPool(@ptrCast(self), @ptrCast(threadPool));
    }

    pub fn Priority(self: ?*anyopaque, ) i32 {
        return qtc.QtConcurrent__TaskStartParameters_Priority(@ptrCast(self));
    }

    pub fn SetPriority(self: ?*anyopaque, priority: i32) void {
        qtc.QtConcurrent__TaskStartParameters_SetPriority(@ptrCast(self), priority);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QtConcurrent__TaskStartParameters_Delete(@ptrCast(self));
    }
};
