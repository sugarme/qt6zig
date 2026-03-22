const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvlabasebase.html
pub const qvlabasebase = struct {

    pub fn Capacity(self: ?*anyopaque, ) i64 {
        return qtc.QVLABaseBase_Capacity(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QVLABaseBase_Size(@ptrCast(self));
    }

    pub fn Empty(self: ?*anyopaque, ) bool {
        return qtc.QVLABaseBase_Empty(@ptrCast(self));
    }
};
