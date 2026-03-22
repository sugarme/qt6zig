const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbitmap.html
pub const qbitmap = struct {

    /// New constructs a new QBitmap object.
    pub fn New() QtC.QBitmap {
        return qtc.QBitmap_new();
    }


    /// New2 constructs a new QBitmap object.
    pub fn New2(param1: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_new2(@ptrCast(param1));
    }


    /// New3 constructs a new QBitmap object.
    pub fn New3(w: i32, h: i32) QtC.QBitmap {
        return qtc.QBitmap_new3(w, h);
    }


    /// New4 constructs a new QBitmap object.
    pub fn New4(param1: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_new4(@ptrCast(param1));
    }


    /// New5 constructs a new QBitmap object.
    pub fn New5(fileName: []const u8) QtC.QBitmap {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QBitmap_new5(fileName_str);
    }


    /// New6 constructs a new QBitmap object.
    pub fn New6(fileName: []const u8, format: []const u8) QtC.QBitmap {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QBitmap_new6(fileName_str, @ptrCast(format));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitmap_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBitmap_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QBitmap_OperatorQVariant(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QBitmap_Clear(@ptrCast(self));
    }

    pub fn FromImage(image: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_FromImage(@ptrCast(image));
    }

    pub fn FromData(size: ?*anyopaque, bits: *const u8) QtC.QBitmap {
        return qtc.QBitmap_FromData(@ptrCast(size), @ptrCast(bits));
    }

    pub fn FromPixmap(pixmap: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_FromPixmap(@ptrCast(pixmap));
    }

    pub fn Transformed(self: ?*anyopaque, matrix: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_Transformed(@ptrCast(self), @ptrCast(matrix));
    }

    pub fn OperatorAssign2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitmap_OperatorAssign2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn FromImage2(image: ?*anyopaque, flags: i32) QtC.QBitmap {
        return qtc.QBitmap_FromImage2(@ptrCast(image), @intCast(flags));
    }

    pub fn FromData3(size: ?*anyopaque, bits: *const u8, monoFormat: i32) QtC.QBitmap {
        return qtc.QBitmap_FromData3(@ptrCast(size), @ptrCast(bits), @intCast(monoFormat));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBitmap_Delete(@ptrCast(self));
    }
};
