const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtyperevision.html
pub const qtyperevision = struct {

    /// New constructs a new QTypeRevision object.
    pub fn New(other: ?*anyopaque) QtC.QTypeRevision {
        return qtc.QTypeRevision_new(@ptrCast(other));
    }


    /// New2 constructs a new QTypeRevision object.
    pub fn New2(other: ?*anyopaque) QtC.QTypeRevision {
        return qtc.QTypeRevision_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTypeRevision object.
    pub fn New3() QtC.QTypeRevision {
        return qtc.QTypeRevision_new3();
    }


    /// New4 constructs a new QTypeRevision object.
    pub fn New4(param1: ?*anyopaque) QtC.QTypeRevision {
        return qtc.QTypeRevision_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTypeRevision_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTypeRevision_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Zero() QtC.QTypeRevision {
        return qtc.QTypeRevision_Zero();
    }

    pub fn HasMajorVersion(self: ?*anyopaque, ) bool {
        return qtc.QTypeRevision_HasMajorVersion(@ptrCast(self));
    }

    pub fn MajorVersion(self: ?*anyopaque, ) u8 {
        return qtc.QTypeRevision_MajorVersion(@ptrCast(self));
    }

    pub fn HasMinorVersion(self: ?*anyopaque, ) bool {
        return qtc.QTypeRevision_HasMinorVersion(@ptrCast(self));
    }

    pub fn MinorVersion(self: ?*anyopaque, ) u8 {
        return qtc.QTypeRevision_MinorVersion(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTypeRevision_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTypeRevision_Delete(@ptrCast(self));
    }
};
