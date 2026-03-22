const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstringtokenizerbasebase.html
pub const qstringtokenizerbasebase = struct {

    /// New constructs a new QStringTokenizerBaseBase object.
    pub fn New(other: ?*anyopaque) QtC.QStringTokenizerBaseBase {
        return qtc.QStringTokenizerBaseBase_new(@ptrCast(other));
    }


    /// New2 constructs a new QStringTokenizerBaseBase object.
    pub fn New2(param1: ?*anyopaque) QtC.QStringTokenizerBaseBase {
        return qtc.QStringTokenizerBaseBase_new2(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStringTokenizerBaseBase_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

};
