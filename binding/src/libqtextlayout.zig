const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextinlineobject.html
pub const qtextinlineobject = struct {

    /// New constructs a new QTextInlineObject object.
    pub fn New(other: ?*anyopaque) QtC.QTextInlineObject {
        return qtc.QTextInlineObject_new(@ptrCast(other));
    }


    /// New2 constructs a new QTextInlineObject object.
    pub fn New2(other: ?*anyopaque) QtC.QTextInlineObject {
        return qtc.QTextInlineObject_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTextInlineObject object.
    pub fn New3() QtC.QTextInlineObject {
        return qtc.QTextInlineObject_new3();
    }


    /// New4 constructs a new QTextInlineObject object.
    pub fn New4(param1: ?*anyopaque) QtC.QTextInlineObject {
        return qtc.QTextInlineObject_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextInlineObject_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextInlineObject_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextInlineObject_IsValid(@ptrCast(self));
    }

    pub fn Rect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QTextInlineObject_Rect(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) f64 {
        return qtc.QTextInlineObject_Width(@ptrCast(self));
    }

    pub fn Ascent(self: ?*anyopaque, ) f64 {
        return qtc.QTextInlineObject_Ascent(@ptrCast(self));
    }

    pub fn Descent(self: ?*anyopaque, ) f64 {
        return qtc.QTextInlineObject_Descent(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) f64 {
        return qtc.QTextInlineObject_Height(@ptrCast(self));
    }

    pub fn TextDirection(self: ?*anyopaque, ) i32 {
        return qtc.QTextInlineObject_TextDirection(@ptrCast(self));
    }

    pub fn SetWidth(self: ?*anyopaque, w: f64) void {
        qtc.QTextInlineObject_SetWidth(@ptrCast(self), w);
    }

    pub fn SetAscent(self: ?*anyopaque, a: f64) void {
        qtc.QTextInlineObject_SetAscent(@ptrCast(self), a);
    }

    pub fn SetDescent(self: ?*anyopaque, d: f64) void {
        qtc.QTextInlineObject_SetDescent(@ptrCast(self), d);
    }

    pub fn TextPosition(self: ?*anyopaque, ) i32 {
        return qtc.QTextInlineObject_TextPosition(@ptrCast(self));
    }

    pub fn FormatIndex(self: ?*anyopaque, ) i32 {
        return qtc.QTextInlineObject_FormatIndex(@ptrCast(self));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QTextFormat {
        return qtc.QTextInlineObject_Format(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextInlineObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextlayout.html
pub const qtextlayout = struct {

    /// New constructs a new QTextLayout object.
    pub fn New() QtC.QTextLayout {
        return qtc.QTextLayout_new();
    }


    /// New2 constructs a new QTextLayout object.
    pub fn New2(text: []const u8) QtC.QTextLayout {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTextLayout_new2(text_str);
    }


    /// New3 constructs a new QTextLayout object.
    pub fn New3(text: []const u8, font: ?*anyopaque) QtC.QTextLayout {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTextLayout_new3(text_str, @ptrCast(font));
    }


    /// New4 constructs a new QTextLayout object.
    pub fn New4(b: ?*anyopaque) QtC.QTextLayout {
        return qtc.QTextLayout_new4(@ptrCast(b));
    }


    /// New5 constructs a new QTextLayout object.
    pub fn New5(text: []const u8, font: ?*anyopaque, paintdevice: ?*anyopaque) QtC.QTextLayout {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QTextLayout_new5(text_str, @ptrCast(font), @ptrCast(paintdevice));
    }


    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QTextLayout_SetFont(@ptrCast(self), @ptrCast(f));
    }

    pub fn Font(self: ?*anyopaque, ) QtC.QFont {
        return qtc.QTextLayout_Font(@ptrCast(self));
    }

    pub fn SetRawFont(self: ?*anyopaque, rawFont: ?*anyopaque) void {
        qtc.QTextLayout_SetRawFont(@ptrCast(self), @ptrCast(rawFont));
    }

    pub fn SetText(self: ?*anyopaque, stringVal: []const u8) void {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
qtc.QTextLayout_SetText(@ptrCast(self), stringVal_str);
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextLayout_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlayout.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTextOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTextLayout_SetTextOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn TextOption(self: ?*anyopaque, ) QtC.QTextOption {
        return qtc.QTextLayout_TextOption(@ptrCast(self));
    }

    pub fn SetPreeditArea(self: ?*anyopaque, position: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTextLayout_SetPreeditArea(@ptrCast(self), position, text_str);
    }

    pub fn PreeditAreaPosition(self: ?*anyopaque, ) i32 {
        return qtc.QTextLayout_PreeditAreaPosition(@ptrCast(self));
    }

    pub fn PreeditAreaText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextLayout_PreeditAreaText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlayout.PreeditAreaText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFormats(self: ?*anyopaque, overrides: []const u8) void {
        qtc.QTextLayout_SetFormats(@ptrCast(self), @ptrCast(overrides));
    }

    pub fn Formats(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextLayout_Formats(@ptrCast(self));
    }

    pub fn ClearFormats(self: ?*anyopaque, ) void {
        qtc.QTextLayout_ClearFormats(@ptrCast(self));
    }

    pub fn SetCacheEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTextLayout_SetCacheEnabled(@ptrCast(self), enable);
    }

    pub fn CacheEnabled(self: ?*anyopaque, ) bool {
        return qtc.QTextLayout_CacheEnabled(@ptrCast(self));
    }

    pub fn SetCursorMoveStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextLayout_SetCursorMoveStyle(@ptrCast(self), @intCast(style));
    }

    pub fn CursorMoveStyle(self: ?*anyopaque, ) i32 {
        return qtc.QTextLayout_CursorMoveStyle(@ptrCast(self));
    }

    pub fn BeginLayout(self: ?*anyopaque, ) void {
        qtc.QTextLayout_BeginLayout(@ptrCast(self));
    }

    pub fn EndLayout(self: ?*anyopaque, ) void {
        qtc.QTextLayout_EndLayout(@ptrCast(self));
    }

    pub fn ClearLayout(self: ?*anyopaque, ) void {
        qtc.QTextLayout_ClearLayout(@ptrCast(self));
    }

    pub fn CreateLine(self: ?*anyopaque, ) QtC.QTextLine {
        return qtc.QTextLayout_CreateLine(@ptrCast(self));
    }

    pub fn LineCount(self: ?*anyopaque, ) i32 {
        return qtc.QTextLayout_LineCount(@ptrCast(self));
    }

    pub fn LineAt(self: ?*anyopaque, i: i32) QtC.QTextLine {
        return qtc.QTextLayout_LineAt(@ptrCast(self), i);
    }

    pub fn LineForTextPosition(self: ?*anyopaque, pos: i32) QtC.QTextLine {
        return qtc.QTextLayout_LineForTextPosition(@ptrCast(self), pos);
    }

    pub fn IsValidCursorPosition(self: ?*anyopaque, pos: i32) bool {
        return qtc.QTextLayout_IsValidCursorPosition(@ptrCast(self), pos);
    }

    pub fn NextCursorPosition(self: ?*anyopaque, oldPos: i32) i32 {
        return qtc.QTextLayout_NextCursorPosition(@ptrCast(self), oldPos);
    }

    pub fn PreviousCursorPosition(self: ?*anyopaque, oldPos: i32) i32 {
        return qtc.QTextLayout_PreviousCursorPosition(@ptrCast(self), oldPos);
    }

    pub fn LeftCursorPosition(self: ?*anyopaque, oldPos: i32) i32 {
        return qtc.QTextLayout_LeftCursorPosition(@ptrCast(self), oldPos);
    }

    pub fn RightCursorPosition(self: ?*anyopaque, oldPos: i32) i32 {
        return qtc.QTextLayout_RightCursorPosition(@ptrCast(self), oldPos);
    }

    pub fn Draw(self: ?*anyopaque, p: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QTextLayout_Draw(@ptrCast(self), @ptrCast(p), @ptrCast(pos));
    }

    pub fn DrawCursor(self: ?*anyopaque, p: ?*anyopaque, pos: ?*anyopaque, cursorPosition: i32) void {
        qtc.QTextLayout_DrawCursor(@ptrCast(self), @ptrCast(p), @ptrCast(pos), cursorPosition);
    }

    pub fn DrawCursor2(self: ?*anyopaque, p: ?*anyopaque, pos: ?*anyopaque, cursorPosition: i32, width: i32) void {
        qtc.QTextLayout_DrawCursor2(@ptrCast(self), @ptrCast(p), @ptrCast(pos), cursorPosition, width);
    }

    pub fn Position(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QTextLayout_Position(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QTextLayout_SetPosition(@ptrCast(self), @ptrCast(p));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QTextLayout_BoundingRect(@ptrCast(self));
    }

    pub fn MinimumWidth(self: ?*anyopaque, ) f64 {
        return qtc.QTextLayout_MinimumWidth(@ptrCast(self));
    }

    pub fn MaximumWidth(self: ?*anyopaque, ) f64 {
        return qtc.QTextLayout_MaximumWidth(@ptrCast(self));
    }

    pub fn GlyphRuns(self: ?*anyopaque, from: i32, length: i32, flags: u16) []const u8 {
        return qtc.QTextLayout_GlyphRuns(@ptrCast(self), from, length, @intCast(flags));
    }

    pub fn GlyphRuns2(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextLayout_GlyphRuns2(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTextLayout_SetFlags(@ptrCast(self), flags);
    }

    pub fn NextCursorPosition2(self: ?*anyopaque, oldPos: i32, mode: i32) i32 {
        return qtc.QTextLayout_NextCursorPosition2(@ptrCast(self), oldPos, @intCast(mode));
    }

    pub fn PreviousCursorPosition2(self: ?*anyopaque, oldPos: i32, mode: i32) i32 {
        return qtc.QTextLayout_PreviousCursorPosition2(@ptrCast(self), oldPos, @intCast(mode));
    }

    pub fn Draw3(self: ?*anyopaque, p: ?*anyopaque, pos: ?*anyopaque, selections: []const u8) void {
        qtc.QTextLayout_Draw3(@ptrCast(self), @ptrCast(p), @ptrCast(pos), @ptrCast(selections));
    }

    pub fn Draw4(self: ?*anyopaque, p: ?*anyopaque, pos: ?*anyopaque, selections: []const u8, clip: ?*anyopaque) void {
        qtc.QTextLayout_Draw4(@ptrCast(self), @ptrCast(p), @ptrCast(pos), @ptrCast(selections), @ptrCast(clip));
    }

    pub fn GlyphRuns1(self: ?*anyopaque, from: i32) []const u8 {
        return qtc.QTextLayout_GlyphRuns1(@ptrCast(self), from);
    }

    pub fn GlyphRuns22(self: ?*anyopaque, from: i32, length: i32) []const u8 {
        return qtc.QTextLayout_GlyphRuns22(@ptrCast(self), from, length);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextline.html
pub const qtextline = struct {

    /// New constructs a new QTextLine object.
    pub fn New(other: ?*anyopaque) QtC.QTextLine {
        return qtc.QTextLine_new(@ptrCast(other));
    }


    /// New2 constructs a new QTextLine object.
    pub fn New2(other: ?*anyopaque) QtC.QTextLine {
        return qtc.QTextLine_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTextLine object.
    pub fn New3() QtC.QTextLine {
        return qtc.QTextLine_new3();
    }


    /// New4 constructs a new QTextLine object.
    pub fn New4(param1: ?*anyopaque) QtC.QTextLine {
        return qtc.QTextLine_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextLine_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextLine_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextLine_IsValid(@ptrCast(self));
    }

    pub fn Rect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QTextLine_Rect(@ptrCast(self));
    }

    pub fn X(self: ?*anyopaque, ) f64 {
        return qtc.QTextLine_X(@ptrCast(self));
    }

    pub fn Y(self: ?*anyopaque, ) f64 {
        return qtc.QTextLine_Y(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) f64 {
        return qtc.QTextLine_Width(@ptrCast(self));
    }

    pub fn Ascent(self: ?*anyopaque, ) f64 {
        return qtc.QTextLine_Ascent(@ptrCast(self));
    }

    pub fn Descent(self: ?*anyopaque, ) f64 {
        return qtc.QTextLine_Descent(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) f64 {
        return qtc.QTextLine_Height(@ptrCast(self));
    }

    pub fn Leading(self: ?*anyopaque, ) f64 {
        return qtc.QTextLine_Leading(@ptrCast(self));
    }

    pub fn SetLeadingIncluded(self: ?*anyopaque, included: bool) void {
        qtc.QTextLine_SetLeadingIncluded(@ptrCast(self), included);
    }

    pub fn LeadingIncluded(self: ?*anyopaque, ) bool {
        return qtc.QTextLine_LeadingIncluded(@ptrCast(self));
    }

    pub fn NaturalTextWidth(self: ?*anyopaque, ) f64 {
        return qtc.QTextLine_NaturalTextWidth(@ptrCast(self));
    }

    pub fn HorizontalAdvance(self: ?*anyopaque, ) f64 {
        return qtc.QTextLine_HorizontalAdvance(@ptrCast(self));
    }

    pub fn NaturalTextRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QTextLine_NaturalTextRect(@ptrCast(self));
    }

    pub fn CursorToX(self: ?*anyopaque, cursorPos: *i32) f64 {
        return qtc.QTextLine_CursorToX(@ptrCast(self), @ptrCast(cursorPos));
    }

    pub fn CursorToX2(self: ?*anyopaque, cursorPos: i32) f64 {
        return qtc.QTextLine_CursorToX2(@ptrCast(self), cursorPos);
    }

    pub fn XToCursor(self: ?*anyopaque, x: f64) i32 {
        return qtc.QTextLine_XToCursor(@ptrCast(self), x);
    }

    pub fn SetLineWidth(self: ?*anyopaque, width: f64) void {
        qtc.QTextLine_SetLineWidth(@ptrCast(self), width);
    }

    pub fn SetNumColumns(self: ?*anyopaque, columns: i32) void {
        qtc.QTextLine_SetNumColumns(@ptrCast(self), columns);
    }

    pub fn SetNumColumns2(self: ?*anyopaque, columns: i32, alignmentWidth: f64) void {
        qtc.QTextLine_SetNumColumns2(@ptrCast(self), columns, alignmentWidth);
    }

    pub fn SetPosition(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QTextLine_SetPosition(@ptrCast(self), @ptrCast(pos));
    }

    pub fn Position(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QTextLine_Position(@ptrCast(self));
    }

    pub fn TextStart(self: ?*anyopaque, ) i32 {
        return qtc.QTextLine_TextStart(@ptrCast(self));
    }

    pub fn TextLength(self: ?*anyopaque, ) i32 {
        return qtc.QTextLine_TextLength(@ptrCast(self));
    }

    pub fn LineNumber(self: ?*anyopaque, ) i32 {
        return qtc.QTextLine_LineNumber(@ptrCast(self));
    }

    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque, position: ?*anyopaque) void {
        qtc.QTextLine_Draw(@ptrCast(self), @ptrCast(painter), @ptrCast(position));
    }

    pub fn GlyphRuns(self: ?*anyopaque, from: i32, length: i32, flags: u16) []const u8 {
        return qtc.QTextLine_GlyphRuns(@ptrCast(self), from, length, @intCast(flags));
    }

    pub fn GlyphRuns2(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextLine_GlyphRuns2(@ptrCast(self));
    }

    pub fn CursorToX22(self: ?*anyopaque, cursorPos: *i32, edge: i32) f64 {
        return qtc.QTextLine_CursorToX22(@ptrCast(self), @ptrCast(cursorPos), @intCast(edge));
    }

    pub fn CursorToX23(self: ?*anyopaque, cursorPos: i32, edge: i32) f64 {
        return qtc.QTextLine_CursorToX23(@ptrCast(self), cursorPos, @intCast(edge));
    }

    pub fn XToCursor2(self: ?*anyopaque, x: f64, param2: i32) i32 {
        return qtc.QTextLine_XToCursor2(@ptrCast(self), x, @intCast(param2));
    }

    pub fn GlyphRuns1(self: ?*anyopaque, from: i32) []const u8 {
        return qtc.QTextLine_GlyphRuns1(@ptrCast(self), from);
    }

    pub fn GlyphRuns22(self: ?*anyopaque, from: i32, length: i32) []const u8 {
        return qtc.QTextLine_GlyphRuns22(@ptrCast(self), from, length);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextLine_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextlayout-formatrange.html
pub const qtextlayout__formatrange = struct {

    /// New constructs a new QTextLayout::FormatRange object.
    pub fn New() QtC.QTextLayout__FormatRange {
        return qtc.QTextLayout__FormatRange_new();
    }


    pub fn Start(self: ?*anyopaque, ) i32 {
        return qtc.QTextLayout__FormatRange_Start(@ptrCast(self));
    }

    pub fn SetStart(self: ?*anyopaque, start: i32) void {
        qtc.QTextLayout__FormatRange_SetStart(@ptrCast(self), start);
    }

    pub fn Length(self: ?*anyopaque, ) i32 {
        return qtc.QTextLayout__FormatRange_Length(@ptrCast(self));
    }

    pub fn SetLength(self: ?*anyopaque, length: i32) void {
        qtc.QTextLayout__FormatRange_SetLength(@ptrCast(self), length);
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QTextLayout__FormatRange_Format(@ptrCast(self));
    }

    pub fn SetFormat(self: ?*anyopaque, format: QtC.QTextCharFormat) void {
        qtc.QTextLayout__FormatRange_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextLayout__FormatRange_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/textlayout.html#types
pub const enums = struct {
    pub const GlyphRunRetrievalFlag = enum {
        pub const RetrieveGlyphIndexes: u16 = 1;
        pub const RetrieveGlyphPositions: u16 = 2;
        pub const RetrieveStringIndexes: u16 = 4;
        pub const RetrieveString: u16 = 8;
        pub const DefaultRetrievalFlags: u16 = 3;
        pub const RetrieveAll: u16 = 65535;
    };

    pub const CursorMode = enum {
        pub const SkipCharacters: i32 = 0;
        pub const SkipWords: i32 = 1;
    };

    pub const Edge = enum {
        pub const Leading: i32 = 0;
        pub const Trailing: i32 = 1;
    };

    pub const CursorPosition = enum {
        pub const CursorBetweenCharacters: i32 = 0;
        pub const CursorOnCharacter: i32 = 1;
    };

};
