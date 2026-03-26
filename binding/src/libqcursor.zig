const QtC = @import("qt6zig");
const qtc = @import("qt6c");


/// https://doc.qt.io/qt-6/qcursor.html
pub const qcursor = struct {

    /// New constructs a new QCursor object.
    pub fn New() QtC.QCursor {
        return qtc.QCursor_new();
    }


    /// New2 constructs a new QCursor object.
    pub fn New2(shape: i32) QtC.QCursor {
        return qtc.QCursor_new2(@intCast(shape));
    }


    /// New3 constructs a new QCursor object.
    pub fn New3(bitmap: ?*anyopaque, mask: ?*anyopaque) QtC.QCursor {
        return qtc.QCursor_new3(@ptrCast(bitmap), @ptrCast(mask));
    }


    /// New4 constructs a new QCursor object.
    pub fn New4(pixmap: ?*anyopaque) QtC.QCursor {
        return qtc.QCursor_new4(@ptrCast(pixmap));
    }


    /// New5 constructs a new QCursor object.
    pub fn New5(cursor: ?*anyopaque) QtC.QCursor {
        return qtc.QCursor_new5(@ptrCast(cursor));
    }


    /// New6 constructs a new QCursor object.
    pub fn New6(bitmap: ?*anyopaque, mask: ?*anyopaque, hotX: i32) QtC.QCursor {
        return qtc.QCursor_new6(@ptrCast(bitmap), @ptrCast(mask), hotX);
    }


    /// New7 constructs a new QCursor object.
    pub fn New7(bitmap: ?*anyopaque, mask: ?*anyopaque, hotX: i32, hotY: i32) QtC.QCursor {
        return qtc.QCursor_new7(@ptrCast(bitmap), @ptrCast(mask), hotX, hotY);
    }


    /// New8 constructs a new QCursor object.
    pub fn New8(pixmap: ?*anyopaque, hotX: i32) QtC.QCursor {
        return qtc.QCursor_new8(@ptrCast(pixmap), hotX);
    }


    /// New9 constructs a new QCursor object.
    pub fn New9(pixmap: ?*anyopaque, hotX: i32, hotY: i32) QtC.QCursor {
        return qtc.QCursor_new9(@ptrCast(pixmap), hotX, hotY);
    }


    pub fn OperatorAssign(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QCursor_OperatorAssign(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCursor_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QCursor_OperatorQVariant(@ptrCast(self));
    }

    pub fn Shape(self: ?*anyopaque, ) i32 {
        return qtc.QCursor_Shape(@ptrCast(self));
    }

    pub fn SetShape(self: ?*anyopaque, newShape: i32) void {
        qtc.QCursor_SetShape(@ptrCast(self), @intCast(newShape));
    }

    pub fn Bitmap(self: ?*anyopaque, param1: i32) QtC.QBitmap {
        return qtc.QCursor_Bitmap(@ptrCast(self), @intCast(param1));
    }

    pub fn Mask(self: ?*anyopaque, param1: i32) QtC.QBitmap {
        return qtc.QCursor_Mask(@ptrCast(self), @intCast(param1));
    }

    pub fn Bitmap2(self: ?*anyopaque, ) QtC.QBitmap {
        return qtc.QCursor_Bitmap2(@ptrCast(self));
    }

    pub fn Mask2(self: ?*anyopaque, ) QtC.QBitmap {
        return qtc.QCursor_Mask2(@ptrCast(self));
    }

    pub fn Pixmap(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QCursor_Pixmap(@ptrCast(self));
    }

    pub fn HotSpot(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QCursor_HotSpot(@ptrCast(self));
    }

    pub fn Pos() QtC.QPoint {
        return qtc.QCursor_Pos();
    }

    pub fn Pos2(screen: ?*anyopaque) QtC.QPoint {
        return qtc.QCursor_Pos2(@ptrCast(screen));
    }

    pub fn SetPos(x: i32, y: i32) void {
        qtc.QCursor_SetPos(x, y);
    }

    pub fn SetPos2(screen: ?*anyopaque, x: i32, y: i32) void {
        qtc.QCursor_SetPos2(@ptrCast(screen), x, y);
    }

    pub fn SetPos3(p: ?*anyopaque) void {
        qtc.QCursor_SetPos3(@ptrCast(p));
    }

    pub fn SetPos4(screen: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QCursor_SetPos4(@ptrCast(screen), @ptrCast(p));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCursor_Delete(@ptrCast(self));
    }
};
