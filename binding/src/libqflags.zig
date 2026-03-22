const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qflag.html
pub const qflag = struct {

    /// New constructs a new QFlag object.
    pub fn New(other: ?*anyopaque) QtC.QFlag {
        return qtc.QFlag_new(@ptrCast(other));
    }


    /// New2 constructs a new QFlag object.
    pub fn New2(other: ?*anyopaque) QtC.QFlag {
        return qtc.QFlag_new2(@ptrCast(other));
    }


    /// New3 constructs a new QFlag object.
    pub fn New3(value: i32) QtC.QFlag {
        return qtc.QFlag_new3(value);
    }


    /// New4 constructs a new QFlag object.
    pub fn New4(param1: ?*anyopaque) QtC.QFlag {
        return qtc.QFlag_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFlag_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFlag_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Operatorint(self: ?*anyopaque, ) i32 {
        return qtc.QFlag_Operatorint(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFlag_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qincompatibleflag.html
pub const qincompatibleflag = struct {

    /// New constructs a new QIncompatibleFlag object.
    pub fn New(other: ?*anyopaque) QtC.QIncompatibleFlag {
        return qtc.QIncompatibleFlag_new(@ptrCast(other));
    }


    /// New2 constructs a new QIncompatibleFlag object.
    pub fn New2(other: ?*anyopaque) QtC.QIncompatibleFlag {
        return qtc.QIncompatibleFlag_new2(@ptrCast(other));
    }


    /// New3 constructs a new QIncompatibleFlag object.
    pub fn New3(i: i32) QtC.QIncompatibleFlag {
        return qtc.QIncompatibleFlag_new3(i);
    }


    /// New4 constructs a new QIncompatibleFlag object.
    pub fn New4(param1: ?*anyopaque) QtC.QIncompatibleFlag {
        return qtc.QIncompatibleFlag_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QIncompatibleFlag_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QIncompatibleFlag_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Operatorint(self: ?*anyopaque, ) i32 {
        return qtc.QIncompatibleFlag_Operatorint(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIncompatibleFlag_Delete(@ptrCast(self));
    }
};
