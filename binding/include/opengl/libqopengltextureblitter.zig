const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopengltextureblitter.html
pub const qopengltextureblitter = struct {

    /// New constructs a new QOpenGLTextureBlitter object.
    pub fn New() QtC.QOpenGLTextureBlitter {
        return qtc.QOpenGLTextureBlitter_new();
    }


    pub fn Create(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLTextureBlitter_Create(@ptrCast(self));
    }

    pub fn IsCreated(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLTextureBlitter_IsCreated(@ptrCast(self));
    }

    pub fn Destroy(self: ?*anyopaque, ) void {
        qtc.QOpenGLTextureBlitter_Destroy(@ptrCast(self));
    }

    pub fn SupportsExternalOESTarget(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLTextureBlitter_SupportsExternalOESTarget(@ptrCast(self));
    }

    pub fn SupportsRectangleTarget(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLTextureBlitter_SupportsRectangleTarget(@ptrCast(self));
    }

    pub fn Bind(self: ?*anyopaque, ) void {
        qtc.QOpenGLTextureBlitter_Bind(@ptrCast(self));
    }

    pub fn Release(self: ?*anyopaque, ) void {
        qtc.QOpenGLTextureBlitter_Release(@ptrCast(self));
    }

    pub fn SetRedBlueSwizzle(self: ?*anyopaque, swizzle: bool) void {
        qtc.QOpenGLTextureBlitter_SetRedBlueSwizzle(@ptrCast(self), swizzle);
    }

    pub fn SetOpacity(self: ?*anyopaque, opacity: f32) void {
        qtc.QOpenGLTextureBlitter_SetOpacity(@ptrCast(self), opacity);
    }

    pub fn Blit(self: ?*anyopaque, texture: u32, targetTransform: ?*anyopaque, sourceOrigin: i32) void {
        qtc.QOpenGLTextureBlitter_Blit(@ptrCast(self), texture, @ptrCast(targetTransform), @intCast(sourceOrigin));
    }

    pub fn TargetTransform(target: ?*anyopaque, viewport: ?*anyopaque) QtC.QMatrix4x4 {
        return qtc.QOpenGLTextureBlitter_TargetTransform(@ptrCast(target), @ptrCast(viewport));
    }

    pub fn Bind1(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLTextureBlitter_Bind1(@ptrCast(self), target);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLTextureBlitter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/opengltextureblitter.html#types
pub const enums = struct {
    pub const Origin = enum {
        pub const OriginBottomLeft: i32 = 0;
        pub const OriginTopLeft: i32 = 1;
    };

};
