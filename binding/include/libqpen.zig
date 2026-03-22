const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpen.html
pub const qpen = struct {

    /// New constructs a new QPen object.
    pub fn New() QtC.QPen {
        return qtc.QPen_new();
    }


    /// New2 constructs a new QPen object.
    pub fn New2(param1: i32) QtC.QPen {
        return qtc.QPen_new2(@intCast(param1));
    }


    /// New3 constructs a new QPen object.
    pub fn New3(color: ?*anyopaque) QtC.QPen {
        return qtc.QPen_new3(@ptrCast(color));
    }


    /// New4 constructs a new QPen object.
    pub fn New4(brush: ?*anyopaque, width: f64) QtC.QPen {
        return qtc.QPen_new4(@ptrCast(brush), width);
    }


    /// New5 constructs a new QPen object.
    pub fn New5(pen: ?*anyopaque) QtC.QPen {
        return qtc.QPen_new5(@ptrCast(pen));
    }


    /// New6 constructs a new QPen object.
    pub fn New6(brush: ?*anyopaque, width: f64, s: i32) QtC.QPen {
        return qtc.QPen_new6(@ptrCast(brush), width, @intCast(s));
    }


    /// New7 constructs a new QPen object.
    pub fn New7(brush: ?*anyopaque, width: f64, s: i32, c: i32) QtC.QPen {
        return qtc.QPen_new7(@ptrCast(brush), width, @intCast(s), @intCast(c));
    }


    /// New8 constructs a new QPen object.
    pub fn New8(brush: ?*anyopaque, width: f64, s: i32, c: i32, j: i32) QtC.QPen {
        return qtc.QPen_new8(@ptrCast(brush), width, @intCast(s), @intCast(c), @intCast(j));
    }


    pub fn OperatorAssign(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QPen_OperatorAssign(@ptrCast(self), @ptrCast(pen));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPen_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Style(self: ?*anyopaque, ) i32 {
        return qtc.QPen_Style(@ptrCast(self));
    }

    pub fn SetStyle(self: ?*anyopaque, style: i32) void {
        qtc.QPen_SetStyle(@ptrCast(self), @intCast(style));
    }

    pub fn DashPattern(self: ?*anyopaque, ) []const u8 {
        return qtc.QPen_DashPattern(@ptrCast(self));
    }

    pub fn SetDashPattern(self: ?*anyopaque, pattern: []const u8) void {
        qtc.QPen_SetDashPattern(@ptrCast(self), @ptrCast(pattern));
    }

    pub fn DashOffset(self: ?*anyopaque, ) f64 {
        return qtc.QPen_DashOffset(@ptrCast(self));
    }

    pub fn SetDashOffset(self: ?*anyopaque, doffset: f64) void {
        qtc.QPen_SetDashOffset(@ptrCast(self), doffset);
    }

    pub fn MiterLimit(self: ?*anyopaque, ) f64 {
        return qtc.QPen_MiterLimit(@ptrCast(self));
    }

    pub fn SetMiterLimit(self: ?*anyopaque, limit: f64) void {
        qtc.QPen_SetMiterLimit(@ptrCast(self), limit);
    }

    pub fn WidthF(self: ?*anyopaque, ) f64 {
        return qtc.QPen_WidthF(@ptrCast(self));
    }

    pub fn SetWidthF(self: ?*anyopaque, width: f64) void {
        qtc.QPen_SetWidthF(@ptrCast(self), width);
    }

    pub fn Width(self: ?*anyopaque, ) i32 {
        return qtc.QPen_Width(@ptrCast(self));
    }

    pub fn SetWidth(self: ?*anyopaque, width: i32) void {
        qtc.QPen_SetWidth(@ptrCast(self), width);
    }

    pub fn Color(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QPen_Color(@ptrCast(self));
    }

    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QPen_SetColor(@ptrCast(self), @ptrCast(color));
    }

    pub fn Brush(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPen_Brush(@ptrCast(self));
    }

    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QPen_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    pub fn IsSolid(self: ?*anyopaque, ) bool {
        return qtc.QPen_IsSolid(@ptrCast(self));
    }

    pub fn CapStyle(self: ?*anyopaque, ) i32 {
        return qtc.QPen_CapStyle(@ptrCast(self));
    }

    pub fn SetCapStyle(self: ?*anyopaque, pcs: i32) void {
        qtc.QPen_SetCapStyle(@ptrCast(self), @intCast(pcs));
    }

    pub fn JoinStyle(self: ?*anyopaque, ) i32 {
        return qtc.QPen_JoinStyle(@ptrCast(self));
    }

    pub fn SetJoinStyle(self: ?*anyopaque, pcs: i32) void {
        qtc.QPen_SetJoinStyle(@ptrCast(self), @intCast(pcs));
    }

    pub fn IsCosmetic(self: ?*anyopaque, ) bool {
        return qtc.QPen_IsCosmetic(@ptrCast(self));
    }

    pub fn SetCosmetic(self: ?*anyopaque, cosmetic: bool) void {
        qtc.QPen_SetCosmetic(@ptrCast(self), cosmetic);
    }

    pub fn OperatorEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPen_OperatorEqual(@ptrCast(self), @ptrCast(p));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPen_OperatorNotEqual(@ptrCast(self), @ptrCast(p));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QPen_OperatorQVariant(@ptrCast(self));
    }

    pub fn IsDetached(self: ?*anyopaque, ) bool {
        return qtc.QPen_IsDetached(@ptrCast(self));
    }

    pub fn DataPtr(self: ?*anyopaque, ) QExplicitlySharedDataPointer<QPenPrivate> {
        return @ptrCast(qtc.QPen_DataPtr(@ptrCast(self)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPen_Delete(@ptrCast(self));
    }
};
