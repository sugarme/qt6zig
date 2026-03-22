const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextcursor.html
pub const qtextcursor = struct {

    /// New constructs a new QTextCursor object.
    pub fn New() QtC.QTextCursor {
        return qtc.QTextCursor_new();
    }


    /// New2 constructs a new QTextCursor object.
    pub fn New2(document: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new2(@ptrCast(document));
    }


    /// New3 constructs a new QTextCursor object.
    pub fn New3(frame: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new3(@ptrCast(frame));
    }


    /// New4 constructs a new QTextCursor object.
    pub fn New4(block: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new4(@ptrCast(block));
    }


    /// New5 constructs a new QTextCursor object.
    pub fn New5(cursor: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextCursor_new5(@ptrCast(cursor));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextCursor_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextCursor_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QTextCursor_IsNull(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, pos: i32) void {
        qtc.QTextCursor_SetPosition(@ptrCast(self), pos);
    }

    pub fn Position(self: ?*anyopaque, ) i32 {
        return qtc.QTextCursor_Position(@ptrCast(self));
    }

    pub fn PositionInBlock(self: ?*anyopaque, ) i32 {
        return qtc.QTextCursor_PositionInBlock(@ptrCast(self));
    }

    pub fn Anchor(self: ?*anyopaque, ) i32 {
        return qtc.QTextCursor_Anchor(@ptrCast(self));
    }

    pub fn InsertText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTextCursor_InsertText(@ptrCast(self), text_str);
    }

    pub fn InsertText2(self: ?*anyopaque, text: []const u8, format: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QTextCursor_InsertText2(@ptrCast(self), text_str, @ptrCast(format));
    }

    pub fn MovePosition(self: ?*anyopaque, op: i32) bool {
        return qtc.QTextCursor_MovePosition(@ptrCast(self), @intCast(op));
    }

    pub fn VisualNavigation(self: ?*anyopaque, ) bool {
        return qtc.QTextCursor_VisualNavigation(@ptrCast(self));
    }

    pub fn SetVisualNavigation(self: ?*anyopaque, b: bool) void {
        qtc.QTextCursor_SetVisualNavigation(@ptrCast(self), b);
    }

    pub fn SetVerticalMovementX(self: ?*anyopaque, x: i32) void {
        qtc.QTextCursor_SetVerticalMovementX(@ptrCast(self), x);
    }

    pub fn VerticalMovementX(self: ?*anyopaque, ) i32 {
        return qtc.QTextCursor_VerticalMovementX(@ptrCast(self));
    }

    pub fn SetKeepPositionOnInsert(self: ?*anyopaque, b: bool) void {
        qtc.QTextCursor_SetKeepPositionOnInsert(@ptrCast(self), b);
    }

    pub fn KeepPositionOnInsert(self: ?*anyopaque, ) bool {
        return qtc.QTextCursor_KeepPositionOnInsert(@ptrCast(self));
    }

    pub fn DeleteChar(self: ?*anyopaque, ) void {
        qtc.QTextCursor_DeleteChar(@ptrCast(self));
    }

    pub fn DeletePreviousChar(self: ?*anyopaque, ) void {
        qtc.QTextCursor_DeletePreviousChar(@ptrCast(self));
    }

    pub fn Select(self: ?*anyopaque, selection: i32) void {
        qtc.QTextCursor_Select(@ptrCast(self), @intCast(selection));
    }

    pub fn HasSelection(self: ?*anyopaque, ) bool {
        return qtc.QTextCursor_HasSelection(@ptrCast(self));
    }

    pub fn HasComplexSelection(self: ?*anyopaque, ) bool {
        return qtc.QTextCursor_HasComplexSelection(@ptrCast(self));
    }

    pub fn RemoveSelectedText(self: ?*anyopaque, ) void {
        qtc.QTextCursor_RemoveSelectedText(@ptrCast(self));
    }

    pub fn ClearSelection(self: ?*anyopaque, ) void {
        qtc.QTextCursor_ClearSelection(@ptrCast(self));
    }

    pub fn SelectionStart(self: ?*anyopaque, ) i32 {
        return qtc.QTextCursor_SelectionStart(@ptrCast(self));
    }

    pub fn SelectionEnd(self: ?*anyopaque, ) i32 {
        return qtc.QTextCursor_SelectionEnd(@ptrCast(self));
    }

    pub fn SelectedText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextCursor_SelectedText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextcursor.SelectedText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Selection(self: ?*anyopaque, ) QtC.QTextDocumentFragment {
        return qtc.QTextCursor_Selection(@ptrCast(self));
    }

    pub fn SelectedTableCells(self: ?*anyopaque, firstRow: *i32, numRows: *i32, firstColumn: *i32, numColumns: *i32) void {
        qtc.QTextCursor_SelectedTableCells(@ptrCast(self), @ptrCast(firstRow), @ptrCast(numRows), @ptrCast(firstColumn), @ptrCast(numColumns));
    }

    pub fn Block(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QTextCursor_Block(@ptrCast(self));
    }

    pub fn CharFormat(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QTextCursor_CharFormat(@ptrCast(self));
    }

    pub fn SetCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_SetCharFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn MergeCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextCursor_MergeCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    pub fn BlockFormat(self: ?*anyopaque, ) QtC.QTextBlockFormat {
        return qtc.QTextCursor_BlockFormat(@ptrCast(self));
    }

    pub fn SetBlockFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_SetBlockFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn MergeBlockFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextCursor_MergeBlockFormat(@ptrCast(self), @ptrCast(modifier));
    }

    pub fn BlockCharFormat(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QTextCursor_BlockCharFormat(@ptrCast(self));
    }

    pub fn SetBlockCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_SetBlockCharFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn MergeBlockCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QTextCursor_MergeBlockCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    pub fn AtBlockStart(self: ?*anyopaque, ) bool {
        return qtc.QTextCursor_AtBlockStart(@ptrCast(self));
    }

    pub fn AtBlockEnd(self: ?*anyopaque, ) bool {
        return qtc.QTextCursor_AtBlockEnd(@ptrCast(self));
    }

    pub fn AtStart(self: ?*anyopaque, ) bool {
        return qtc.QTextCursor_AtStart(@ptrCast(self));
    }

    pub fn AtEnd(self: ?*anyopaque, ) bool {
        return qtc.QTextCursor_AtEnd(@ptrCast(self));
    }

    pub fn InsertBlock(self: ?*anyopaque, ) void {
        qtc.QTextCursor_InsertBlock(@ptrCast(self));
    }

    pub fn InsertBlock2(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_InsertBlock2(@ptrCast(self), @ptrCast(format));
    }

    pub fn InsertBlock3(self: ?*anyopaque, format: ?*anyopaque, charFormat: ?*anyopaque) void {
        qtc.QTextCursor_InsertBlock3(@ptrCast(self), @ptrCast(format), @ptrCast(charFormat));
    }

    pub fn InsertList(self: ?*anyopaque, format: ?*anyopaque) QtC.QTextList {
        return qtc.QTextCursor_InsertList(@ptrCast(self), @ptrCast(format));
    }

    pub fn InsertList2(self: ?*anyopaque, style: i32) QtC.QTextList {
        return qtc.QTextCursor_InsertList2(@ptrCast(self), @intCast(style));
    }

    pub fn CreateList(self: ?*anyopaque, format: ?*anyopaque) QtC.QTextList {
        return qtc.QTextCursor_CreateList(@ptrCast(self), @ptrCast(format));
    }

    pub fn CreateList2(self: ?*anyopaque, style: i32) QtC.QTextList {
        return qtc.QTextCursor_CreateList2(@ptrCast(self), @intCast(style));
    }

    pub fn CurrentList(self: ?*anyopaque, ) QtC.QTextList {
        return qtc.QTextCursor_CurrentList(@ptrCast(self));
    }

    pub fn InsertTable(self: ?*anyopaque, rows: i32, cols: i32, format: ?*anyopaque) QtC.QTextTable {
        return qtc.QTextCursor_InsertTable(@ptrCast(self), rows, cols, @ptrCast(format));
    }

    pub fn InsertTable2(self: ?*anyopaque, rows: i32, cols: i32) QtC.QTextTable {
        return qtc.QTextCursor_InsertTable2(@ptrCast(self), rows, cols);
    }

    pub fn CurrentTable(self: ?*anyopaque, ) QtC.QTextTable {
        return qtc.QTextCursor_CurrentTable(@ptrCast(self));
    }

    pub fn InsertFrame(self: ?*anyopaque, format: ?*anyopaque) QtC.QTextFrame {
        return qtc.QTextCursor_InsertFrame(@ptrCast(self), @ptrCast(format));
    }

    pub fn CurrentFrame(self: ?*anyopaque, ) QtC.QTextFrame {
        return qtc.QTextCursor_CurrentFrame(@ptrCast(self));
    }

    pub fn InsertFragment(self: ?*anyopaque, fragment: ?*anyopaque) void {
        qtc.QTextCursor_InsertFragment(@ptrCast(self), @ptrCast(fragment));
    }

    pub fn InsertHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = qtc.libqt_string{
    .len = html.len,
    .data = html.ptr,
};
qtc.QTextCursor_InsertHtml(@ptrCast(self), html_str);
    }

    pub fn InsertMarkdown(self: ?*anyopaque, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
    .len = markdown.len,
    .data = markdown.ptr,
};
qtc.QTextCursor_InsertMarkdown(@ptrCast(self), markdown_str);
    }

    pub fn InsertImage(self: ?*anyopaque, format: ?*anyopaque, alignment: i32) void {
        qtc.QTextCursor_InsertImage(@ptrCast(self), @ptrCast(format), @intCast(alignment));
    }

    pub fn InsertImage2(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextCursor_InsertImage2(@ptrCast(self), @ptrCast(format));
    }

    pub fn InsertImage3(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QTextCursor_InsertImage3(@ptrCast(self), name_str);
    }

    pub fn InsertImage4(self: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QTextCursor_InsertImage4(@ptrCast(self), @ptrCast(image));
    }

    pub fn BeginEditBlock(self: ?*anyopaque, ) void {
        qtc.QTextCursor_BeginEditBlock(@ptrCast(self));
    }

    pub fn JoinPreviousEditBlock(self: ?*anyopaque, ) void {
        qtc.QTextCursor_JoinPreviousEditBlock(@ptrCast(self));
    }

    pub fn EndEditBlock(self: ?*anyopaque, ) void {
        qtc.QTextCursor_EndEditBlock(@ptrCast(self));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    pub fn OperatorLesser(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorLesser(@ptrCast(self), @ptrCast(rhs));
    }

    pub fn OperatorLesserOrEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorLesserOrEqual(@ptrCast(self), @ptrCast(rhs));
    }

    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    pub fn OperatorGreaterOrEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorGreaterOrEqual(@ptrCast(self), @ptrCast(rhs));
    }

    pub fn OperatorGreater(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return qtc.QTextCursor_OperatorGreater(@ptrCast(self), @ptrCast(rhs));
    }

    pub fn IsCopyOf(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextCursor_IsCopyOf(@ptrCast(self), @ptrCast(other));
    }

    pub fn BlockNumber(self: ?*anyopaque, ) i32 {
        return qtc.QTextCursor_BlockNumber(@ptrCast(self));
    }

    pub fn ColumnNumber(self: ?*anyopaque, ) i32 {
        return qtc.QTextCursor_ColumnNumber(@ptrCast(self));
    }

    pub fn Document(self: ?*anyopaque, ) QtC.QTextDocument {
        return qtc.QTextCursor_Document(@ptrCast(self));
    }

    pub fn SetPosition2(self: ?*anyopaque, pos: i32, mode: i32) void {
        qtc.QTextCursor_SetPosition2(@ptrCast(self), pos, @intCast(mode));
    }

    pub fn MovePosition2(self: ?*anyopaque, op: i32, param2: i32) bool {
        return qtc.QTextCursor_MovePosition2(@ptrCast(self), @intCast(op), @intCast(param2));
    }

    pub fn MovePosition3(self: ?*anyopaque, op: i32, param2: i32, n: i32) bool {
        return qtc.QTextCursor_MovePosition3(@ptrCast(self), @intCast(op), @intCast(param2), n);
    }

    pub fn InsertMarkdown2(self: ?*anyopaque, markdown: []const u8, features: i32) void {
        const markdown_str = qtc.libqt_string{
    .len = markdown.len,
    .data = markdown.ptr,
};
qtc.QTextCursor_InsertMarkdown2(@ptrCast(self), markdown_str, @intCast(features));
    }

    pub fn InsertImage22(self: ?*anyopaque, image: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QTextCursor_InsertImage22(@ptrCast(self), @ptrCast(image), name_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextCursor_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/textcursor.html#types
pub const enums = struct {
    pub const MoveMode = enum {
        pub const MoveAnchor: i32 = 0;
        pub const KeepAnchor: i32 = 1;
    };

    pub const MoveOperation = enum {
        pub const NoMove: i32 = 0;
        pub const Start: i32 = 1;
        pub const Up: i32 = 2;
        pub const StartOfLine: i32 = 3;
        pub const StartOfBlock: i32 = 4;
        pub const StartOfWord: i32 = 5;
        pub const PreviousBlock: i32 = 6;
        pub const PreviousCharacter: i32 = 7;
        pub const PreviousWord: i32 = 8;
        pub const Left: i32 = 9;
        pub const WordLeft: i32 = 10;
        pub const End: i32 = 11;
        pub const Down: i32 = 12;
        pub const EndOfLine: i32 = 13;
        pub const EndOfWord: i32 = 14;
        pub const EndOfBlock: i32 = 15;
        pub const NextBlock: i32 = 16;
        pub const NextCharacter: i32 = 17;
        pub const NextWord: i32 = 18;
        pub const Right: i32 = 19;
        pub const WordRight: i32 = 20;
        pub const NextCell: i32 = 21;
        pub const PreviousCell: i32 = 22;
        pub const NextRow: i32 = 23;
        pub const PreviousRow: i32 = 24;
    };

    pub const SelectionType = enum {
        pub const WordUnderCursor: i32 = 0;
        pub const LineUnderCursor: i32 = 1;
        pub const BlockUnderCursor: i32 = 2;
        pub const Document: i32 = 3;
    };

};
