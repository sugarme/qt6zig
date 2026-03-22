const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcolormap.html
pub const qcolormap = struct {

    /// New constructs a new QColormap object.
    pub fn New(colormap: ?*anyopaque) QtC.QColormap {
        return qtc.QColormap_new(@ptrCast(colormap));
    }


    pub fn Initialize() void {
        qtc.QColormap_Initialize();
    }

    pub fn Cleanup() void {
        qtc.QColormap_Cleanup();
    }

    pub fn Instance() QtC.QColormap {
        return qtc.QColormap_Instance();
    }

    pub fn OperatorAssign(self: ?*anyopaque, colormap: ?*anyopaque) void {
        qtc.QColormap_OperatorAssign(@ptrCast(self), @ptrCast(colormap));
    }

    pub fn Mode(self: ?*anyopaque, ) i32 {
        return qtc.QColormap_Mode(@ptrCast(self));
    }

    pub fn Depth(self: ?*anyopaque, ) i32 {
        return qtc.QColormap_Depth(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i32 {
        return qtc.QColormap_Size(@ptrCast(self));
    }

    pub fn Pixel(self: ?*anyopaque, color: ?*anyopaque) u32 {
        return qtc.QColormap_Pixel(@ptrCast(self), @ptrCast(color));
    }

    pub fn ColorAt(self: ?*anyopaque, pixel: u32) QtC.QColor {
        return qtc.QColormap_ColorAt(@ptrCast(self), pixel);
    }

    pub fn Colormap(self: ?*anyopaque, ) []const u8 {
        return qtc.QColormap_Colormap(@ptrCast(self));
    }

    pub fn Instance1(screen: i32) QtC.QColormap {
        return qtc.QColormap_Instance1(screen);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QColormap_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/colormap.html#types
pub const enums = struct {
    pub const Mode = enum {
        pub const Direct: i32 = 0;
        pub const Indexed: i32 = 1;
        pub const Gray: i32 = 2;
    };

};
