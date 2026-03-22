const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlatin1stringmatcher.html
pub const qlatin1stringmatcher = struct {

    /// New constructs a new QLatin1StringMatcher object.
    pub fn New() QtC.QLatin1StringMatcher {
        return qtc.QLatin1StringMatcher_new();
    }


    pub fn SetCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QLatin1StringMatcher_SetCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    pub fn CaseSensitivity(self: ?*anyopaque, ) i32 {
        return qtc.QLatin1StringMatcher_CaseSensitivity(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLatin1StringMatcher_Delete(@ptrCast(self));
    }
};
