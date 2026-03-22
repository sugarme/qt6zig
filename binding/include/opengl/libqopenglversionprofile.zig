const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglversionprofile.html
pub const qopenglversionprofile = struct {

    /// New constructs a new QOpenGLVersionProfile object.
    pub fn New() QtC.QOpenGLVersionProfile {
        return qtc.QOpenGLVersionProfile_new();
    }


    /// New2 constructs a new QOpenGLVersionProfile object.
    pub fn New2(format: ?*anyopaque) QtC.QOpenGLVersionProfile {
        return qtc.QOpenGLVersionProfile_new2(@ptrCast(format));
    }


    /// New3 constructs a new QOpenGLVersionProfile object.
    pub fn New3(other: ?*anyopaque) QtC.QOpenGLVersionProfile {
        return qtc.QOpenGLVersionProfile_new3(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QOpenGLVersionProfile_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    pub fn Version(self: ?*anyopaque, ) QPair<int, int> {
        return qtc.QOpenGLVersionProfile_Version(@ptrCast(self));
    }

    pub fn SetVersion(self: ?*anyopaque, majorVersion: i32, minorVersion: i32) void {
        qtc.QOpenGLVersionProfile_SetVersion(@ptrCast(self), majorVersion, minorVersion);
    }

    pub fn Profile(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLVersionProfile_Profile(@ptrCast(self));
    }

    pub fn SetProfile(self: ?*anyopaque, profile: i32) void {
        qtc.QOpenGLVersionProfile_SetProfile(@ptrCast(self), @intCast(profile));
    }

    pub fn HasProfiles(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLVersionProfile_HasProfiles(@ptrCast(self));
    }

    pub fn IsLegacyVersion(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLVersionProfile_IsLegacyVersion(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLVersionProfile_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionProfile_Delete(@ptrCast(self));
    }
};
