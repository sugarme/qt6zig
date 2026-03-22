const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtexttablecell.html
pub const qtexttablecell = struct {

    /// New constructs a new QTextTableCell object.
    pub fn New() QtC.QTextTableCell {
        return qtc.QTextTableCell_new();
    }


    /// New2 constructs a new QTextTableCell object.
    pub fn New2(o: ?*anyopaque) QtC.QTextTableCell {
        return qtc.QTextTableCell_new2(@ptrCast(o));
    }


    pub fn OperatorAssign(self: ?*anyopaque, o: ?*anyopaque) void {
        qtc.QTextTableCell_OperatorAssign(@ptrCast(self), @ptrCast(o));
    }

    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextTableCell_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QTextTableCell_Format(@ptrCast(self));
    }

    pub fn Row(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableCell_Row(@ptrCast(self));
    }

    pub fn Column(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableCell_Column(@ptrCast(self));
    }

    pub fn RowSpan(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableCell_RowSpan(@ptrCast(self));
    }

    pub fn ColumnSpan(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableCell_ColumnSpan(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextTableCell_IsValid(@ptrCast(self));
    }

    pub fn FirstCursorPosition(self: ?*anyopaque, ) QtC.QTextCursor {
        return qtc.QTextTableCell_FirstCursorPosition(@ptrCast(self));
    }

    pub fn LastCursorPosition(self: ?*anyopaque, ) QtC.QTextCursor {
        return qtc.QTextTableCell_LastCursorPosition(@ptrCast(self));
    }

    pub fn FirstPosition(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableCell_FirstPosition(@ptrCast(self));
    }

    pub fn LastPosition(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableCell_LastPosition(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextTableCell_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextTableCell_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn Begin(self: ?*anyopaque, ) QtC.QTextFrame__iterator {
        return qtc.QTextTableCell_Begin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) QtC.QTextFrame__iterator {
        return qtc.QTextTableCell_End(@ptrCast(self));
    }

    pub fn TableCellFormatIndex(self: ?*anyopaque, ) i32 {
        return qtc.QTextTableCell_TableCellFormatIndex(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextTableCell_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtexttable.html
pub const qtexttable = struct {

    /// New constructs a new QTextTable object.
    pub fn New(doc: ?*anyopaque) QtC.QTextTable {
        return qtc.QTextTable_new(@ptrCast(doc));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextTable_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttable.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Resize(self: ?*anyopaque, rows: i32, cols: i32) void {
        qtc.QTextTable_Resize(@ptrCast(self), rows, cols);
    }

    pub fn InsertRows(self: ?*anyopaque, pos: i32, num: i32) void {
        qtc.QTextTable_InsertRows(@ptrCast(self), pos, num);
    }

    pub fn InsertColumns(self: ?*anyopaque, pos: i32, num: i32) void {
        qtc.QTextTable_InsertColumns(@ptrCast(self), pos, num);
    }

    pub fn AppendRows(self: ?*anyopaque, count: i32) void {
        qtc.QTextTable_AppendRows(@ptrCast(self), count);
    }

    pub fn AppendColumns(self: ?*anyopaque, count: i32) void {
        qtc.QTextTable_AppendColumns(@ptrCast(self), count);
    }

    pub fn RemoveRows(self: ?*anyopaque, pos: i32, num: i32) void {
        qtc.QTextTable_RemoveRows(@ptrCast(self), pos, num);
    }

    pub fn RemoveColumns(self: ?*anyopaque, pos: i32, num: i32) void {
        qtc.QTextTable_RemoveColumns(@ptrCast(self), pos, num);
    }

    pub fn MergeCells(self: ?*anyopaque, row: i32, col: i32, numRows: i32, numCols: i32) void {
        qtc.QTextTable_MergeCells(@ptrCast(self), row, col, numRows, numCols);
    }

    pub fn MergeCells2(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QTextTable_MergeCells2(@ptrCast(self), @ptrCast(cursor));
    }

    pub fn SplitCell(self: ?*anyopaque, row: i32, col: i32, numRows: i32, numCols: i32) void {
        qtc.QTextTable_SplitCell(@ptrCast(self), row, col, numRows, numCols);
    }

    pub fn Rows(self: ?*anyopaque, ) i32 {
        return qtc.QTextTable_Rows(@ptrCast(self));
    }

    pub fn Columns(self: ?*anyopaque, ) i32 {
        return qtc.QTextTable_Columns(@ptrCast(self));
    }

    pub fn CellAt(self: ?*anyopaque, row: i32, col: i32) QtC.QTextTableCell {
        return qtc.QTextTable_CellAt(@ptrCast(self), row, col);
    }

    pub fn CellAt2(self: ?*anyopaque, position: i32) QtC.QTextTableCell {
        return qtc.QTextTable_CellAt2(@ptrCast(self), position);
    }

    pub fn CellAt3(self: ?*anyopaque, c: ?*anyopaque) QtC.QTextTableCell {
        return qtc.QTextTable_CellAt3(@ptrCast(self), @ptrCast(c));
    }

    pub fn RowStart(self: ?*anyopaque, c: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextTable_RowStart(@ptrCast(self), @ptrCast(c));
    }

    pub fn RowEnd(self: ?*anyopaque, c: ?*anyopaque) QtC.QTextCursor {
        return qtc.QTextTable_RowEnd(@ptrCast(self), @ptrCast(c));
    }

    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextTable_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QTextTableFormat {
        return qtc.QTextTable_Format(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextTable_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttable.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextTable_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtexttable.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextTable_Delete(@ptrCast(self));
    }
};
