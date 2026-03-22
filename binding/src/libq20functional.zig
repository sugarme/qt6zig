const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/q20-identity.html
pub const q20__identity = struct {

    /// New constructs a new q20::identity object.
    pub fn New(other: ?*anyopaque) QtC.q20__identity {
        return qtc.q20__identity_new(@ptrCast(other));
    }


    /// New2 constructs a new q20::identity object.
    pub fn New2(other: ?*anyopaque) QtC.q20__identity {
        return qtc.q20__identity_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.q20__identity_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.q20__identity_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.q20__identity_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/q20-identity-is_transparent.html
pub const q20__identity__is_transparent = struct {

    /// New constructs a new q20::identity::is_transparent object.
    pub fn New(other: ?*anyopaque) QtC.q20__identity__is_transparent {
        return qtc.q20__identity__is_transparent_new(@ptrCast(other));
    }


    /// New2 constructs a new q20::identity::is_transparent object.
    pub fn New2(other: ?*anyopaque) QtC.q20__identity__is_transparent {
        return qtc.q20__identity__is_transparent_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.q20__identity__is_transparent_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.q20__identity__is_transparent_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.q20__identity__is_transparent_Delete(@ptrCast(self));
    }
};
