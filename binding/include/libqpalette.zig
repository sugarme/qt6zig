const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpalette.html
pub const qpalette = struct {

    /// New constructs a new QPalette object.
    pub fn New() QtC.QPalette {
        return qtc.QPalette_new();
    }


    /// New2 constructs a new QPalette object.
    pub fn New2(button: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new2(@ptrCast(button));
    }


    /// New3 constructs a new QPalette object.
    pub fn New3(button: i32) QtC.QPalette {
        return qtc.QPalette_new3(@intCast(button));
    }


    /// New4 constructs a new QPalette object.
    pub fn New4(button: ?*anyopaque, window: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new4(@ptrCast(button), @ptrCast(window));
    }


    /// New5 constructs a new QPalette object.
    pub fn New5(windowText: ?*anyopaque, button: ?*anyopaque, light: ?*anyopaque, dark: ?*anyopaque, mid: ?*anyopaque, text: ?*anyopaque, bright_text: ?*anyopaque, base: ?*anyopaque, window: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new5(@ptrCast(windowText), @ptrCast(button), @ptrCast(light), @ptrCast(dark), @ptrCast(mid), @ptrCast(text), @ptrCast(bright_text), @ptrCast(base), @ptrCast(window));
    }


    /// New6 constructs a new QPalette object.
    pub fn New6(windowText: ?*anyopaque, window: ?*anyopaque, light: ?*anyopaque, dark: ?*anyopaque, mid: ?*anyopaque, text: ?*anyopaque, base: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new6(@ptrCast(windowText), @ptrCast(window), @ptrCast(light), @ptrCast(dark), @ptrCast(mid), @ptrCast(text), @ptrCast(base));
    }


    /// New7 constructs a new QPalette object.
    pub fn New7(palette: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_new7(@ptrCast(palette));
    }


    pub fn OperatorAssign(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QPalette_OperatorAssign(@ptrCast(self), @ptrCast(palette));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPalette_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QPalette_OperatorQVariant(@ptrCast(self));
    }

    pub fn CurrentColorGroup(self: ?*anyopaque, ) i32 {
        return qtc.QPalette_CurrentColorGroup(@ptrCast(self));
    }

    pub fn SetCurrentColorGroup(self: ?*anyopaque, cg: i32) void {
        qtc.QPalette_SetCurrentColorGroup(@ptrCast(self), @intCast(cg));
    }

    pub fn Color(self: ?*anyopaque, cg: i32, cr: i32) QtC.QColor {
        return qtc.QPalette_Color(@ptrCast(self), @intCast(cg), @intCast(cr));
    }

    pub fn Brush(self: ?*anyopaque, cg: i32, cr: i32) QtC.QBrush {
        return qtc.QPalette_Brush(@ptrCast(self), @intCast(cg), @intCast(cr));
    }

    pub fn SetColor(self: ?*anyopaque, cg: i32, cr: i32, color: ?*anyopaque) void {
        qtc.QPalette_SetColor(@ptrCast(self), @intCast(cg), @intCast(cr), @ptrCast(color));
    }

    pub fn SetColor2(self: ?*anyopaque, cr: i32, color: ?*anyopaque) void {
        qtc.QPalette_SetColor2(@ptrCast(self), @intCast(cr), @ptrCast(color));
    }

    pub fn SetBrush(self: ?*anyopaque, cr: i32, brush: ?*anyopaque) void {
        qtc.QPalette_SetBrush(@ptrCast(self), @intCast(cr), @ptrCast(brush));
    }

    pub fn IsBrushSet(self: ?*anyopaque, cg: i32, cr: i32) bool {
        return qtc.QPalette_IsBrushSet(@ptrCast(self), @intCast(cg), @intCast(cr));
    }

    pub fn SetBrush2(self: ?*anyopaque, cg: i32, cr: i32, brush: ?*anyopaque) void {
        qtc.QPalette_SetBrush2(@ptrCast(self), @intCast(cg), @intCast(cr), @ptrCast(brush));
    }

    pub fn SetColorGroup(self: ?*anyopaque, cr: i32, windowText: ?*anyopaque, button: ?*anyopaque, light: ?*anyopaque, dark: ?*anyopaque, mid: ?*anyopaque, text: ?*anyopaque, bright_text: ?*anyopaque, base: ?*anyopaque, window: ?*anyopaque) void {
        qtc.QPalette_SetColorGroup(@ptrCast(self), @intCast(cr), @ptrCast(windowText), @ptrCast(button), @ptrCast(light), @ptrCast(dark), @ptrCast(mid), @ptrCast(text), @ptrCast(bright_text), @ptrCast(base), @ptrCast(window));
    }

    pub fn IsEqual(self: ?*anyopaque, cr1: i32, cr2: i32) bool {
        return qtc.QPalette_IsEqual(@ptrCast(self), @intCast(cr1), @intCast(cr2));
    }

    pub fn Color2(self: ?*anyopaque, cr: i32) QtC.QColor {
        return qtc.QPalette_Color2(@ptrCast(self), @intCast(cr));
    }

    pub fn Brush2(self: ?*anyopaque, cr: i32) QtC.QBrush {
        return qtc.QPalette_Brush2(@ptrCast(self), @intCast(cr));
    }

    pub fn WindowText(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_WindowText(@ptrCast(self));
    }

    pub fn Button(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Button(@ptrCast(self));
    }

    pub fn Light(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Light(@ptrCast(self));
    }

    pub fn Dark(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Dark(@ptrCast(self));
    }

    pub fn Mid(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Mid(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Text(@ptrCast(self));
    }

    pub fn Base(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Base(@ptrCast(self));
    }

    pub fn AlternateBase(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_AlternateBase(@ptrCast(self));
    }

    pub fn ToolTipBase(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_ToolTipBase(@ptrCast(self));
    }

    pub fn ToolTipText(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_ToolTipText(@ptrCast(self));
    }

    pub fn Window(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Window(@ptrCast(self));
    }

    pub fn Midlight(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Midlight(@ptrCast(self));
    }

    pub fn BrightText(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_BrightText(@ptrCast(self));
    }

    pub fn ButtonText(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_ButtonText(@ptrCast(self));
    }

    pub fn Shadow(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Shadow(@ptrCast(self));
    }

    pub fn Highlight(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Highlight(@ptrCast(self));
    }

    pub fn HighlightedText(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_HighlightedText(@ptrCast(self));
    }

    pub fn Link(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Link(@ptrCast(self));
    }

    pub fn LinkVisited(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_LinkVisited(@ptrCast(self));
    }

    pub fn PlaceholderText(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_PlaceholderText(@ptrCast(self));
    }

    pub fn Accent(self: ?*anyopaque, ) QtC.QBrush {
        return qtc.QPalette_Accent(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPalette_OperatorEqual(@ptrCast(self), @ptrCast(p));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPalette_OperatorNotEqual(@ptrCast(self), @ptrCast(p));
    }

    pub fn IsCopyOf(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPalette_IsCopyOf(@ptrCast(self), @ptrCast(p));
    }

    pub fn CacheKey(self: ?*anyopaque, ) i64 {
        return qtc.QPalette_CacheKey(@ptrCast(self));
    }

    pub fn Resolve(self: ?*anyopaque, other: ?*anyopaque) QtC.QPalette {
        return qtc.QPalette_Resolve(@ptrCast(self), @ptrCast(other));
    }

    pub fn ResolveMask(self: ?*anyopaque, ) u64 {
        return qtc.QPalette_ResolveMask(@ptrCast(self));
    }

    pub fn SetResolveMask(self: ?*anyopaque, mask: u64) void {
        qtc.QPalette_SetResolveMask(@ptrCast(self), mask);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPalette_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/palette.html#types
pub const enums = struct {
    pub const ColorGroup = enum {
        pub const Active: i32 = 0;
        pub const Disabled: i32 = 1;
        pub const Inactive: i32 = 2;
        pub const NColorGroups: i32 = 3;
        pub const Current: i32 = 4;
        pub const All: i32 = 5;
        pub const Normal: i32 = 0;
    };

    pub const ColorRole = enum {
        pub const WindowText: i32 = 0;
        pub const Button: i32 = 1;
        pub const Light: i32 = 2;
        pub const Midlight: i32 = 3;
        pub const Dark: i32 = 4;
        pub const Mid: i32 = 5;
        pub const Text: i32 = 6;
        pub const BrightText: i32 = 7;
        pub const ButtonText: i32 = 8;
        pub const Base: i32 = 9;
        pub const Window: i32 = 10;
        pub const Shadow: i32 = 11;
        pub const Highlight: i32 = 12;
        pub const HighlightedText: i32 = 13;
        pub const Link: i32 = 14;
        pub const LinkVisited: i32 = 15;
        pub const AlternateBase: i32 = 16;
        pub const NoRole: i32 = 17;
        pub const ToolTipBase: i32 = 18;
        pub const ToolTipText: i32 = 19;
        pub const PlaceholderText: i32 = 20;
        pub const Accent: i32 = 21;
        pub const NColorRoles: i32 = 22;
    };

};
