const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qhashseed.html
pub const qhashseed = struct {

    /// New constructs a new QHashSeed object.
    pub fn New(other: ?*anyopaque) QtC.QHashSeed {
        return qtc.QHashSeed_new(@ptrCast(other));
    }


    /// New2 constructs a new QHashSeed object.
    pub fn New2(other: ?*anyopaque) QtC.QHashSeed {
        return qtc.QHashSeed_new2(@ptrCast(other));
    }


    /// New3 constructs a new QHashSeed object.
    pub fn New3() QtC.QHashSeed {
        return qtc.QHashSeed_new3();
    }


    /// New4 constructs a new QHashSeed object.
    pub fn New4(d: u64) QtC.QHashSeed {
        return qtc.QHashSeed_new4(d);
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHashSeed_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHashSeed_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OperatorunsignedLongLong(self: ?*anyopaque, ) u64 {
        return qtc.QHashSeed_OperatorunsignedLongLong(@ptrCast(self));
    }

    pub fn GlobalSeed() QtC.QHashSeed {
        return qtc.QHashSeed_GlobalSeed();
    }

    pub fn SetDeterministicGlobalSeed() void {
        qtc.QHashSeed_SetDeterministicGlobalSeed();
    }

    pub fn ResetRandomGlobalSeed() void {
        qtc.QHashSeed_ResetRandomGlobalSeed();
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHashSeed_Delete(@ptrCast(self));
    }
};
