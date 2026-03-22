const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextobject.html
pub const qtextobject = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextObject_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextobject.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QTextFormat {
        return qtc.QTextObject_Format(@ptrCast(self));
    }

    pub fn FormatIndex(self: ?*anyopaque, ) i32 {
        return qtc.QTextObject_FormatIndex(@ptrCast(self));
    }

    pub fn Document(self: ?*anyopaque, ) QtC.QTextDocument {
        return qtc.QTextObject_Document(@ptrCast(self));
    }

    pub fn ObjectIndex(self: ?*anyopaque, ) i32 {
        return qtc.QTextObject_ObjectIndex(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextObject_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextobject.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextObject_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextobject.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }
};

/// https://doc.qt.io/qt-6/qtextblockgroup.html
pub const qtextblockgroup = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextBlockGroup_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextblockgroup.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BlockInserted(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QTextBlockGroup_BlockInserted(@ptrCast(self), @ptrCast(block));
    }

    /// Allows for overriding the related default method
    pub fn OnBlockInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBlockGroup_OnBlockInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBlockInserted(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QTextBlockGroup_QBaseBlockInserted(@ptrCast(self), @ptrCast(block));
    }

    pub fn BlockRemoved(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QTextBlockGroup_BlockRemoved(@ptrCast(self), @ptrCast(block));
    }

    /// Allows for overriding the related default method
    pub fn OnBlockRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBlockGroup_OnBlockRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBlockRemoved(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QTextBlockGroup_QBaseBlockRemoved(@ptrCast(self), @ptrCast(block));
    }

    pub fn BlockFormatChanged(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QTextBlockGroup_BlockFormatChanged(@ptrCast(self), @ptrCast(block));
    }

    /// Allows for overriding the related default method
    pub fn OnBlockFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QTextBlockGroup_OnBlockFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBlockFormatChanged(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QTextBlockGroup_QBaseBlockFormatChanged(@ptrCast(self), @ptrCast(block));
    }

    pub fn BlockList(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextBlockGroup_BlockList(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBlockList(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QTextBlockGroup_OnBlockList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBlockList(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextBlockGroup_QBaseBlockList(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextBlockGroup_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextblockgroup.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextBlockGroup_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextblockgroup.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }
};

/// https://doc.qt.io/qt-6/qtextframelayoutdata.html
pub const qtextframelayoutdata = struct {

    /// New constructs a new QTextFrameLayoutData object.
    pub fn New() QtC.QTextFrameLayoutData {
        return qtc.QTextFrameLayoutData_new();
    }


    /// New2 constructs a new QTextFrameLayoutData object.
    pub fn New2(param1: ?*anyopaque) QtC.QTextFrameLayoutData {
        return qtc.QTextFrameLayoutData_new2(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextFrameLayoutData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextFrameLayoutData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextframe.html
pub const qtextframe = struct {

    /// New constructs a new QTextFrame object.
    pub fn New(doc: ?*anyopaque) QtC.QTextFrame {
        return qtc.QTextFrame_new(@ptrCast(doc));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFrame_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextframe.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFrameFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextFrame_SetFrameFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn FrameFormat(self: ?*anyopaque, ) QtC.QTextFrameFormat {
        return qtc.QTextFrame_FrameFormat(@ptrCast(self));
    }

    pub fn FirstCursorPosition(self: ?*anyopaque, ) QtC.QTextCursor {
        return qtc.QTextFrame_FirstCursorPosition(@ptrCast(self));
    }

    pub fn LastCursorPosition(self: ?*anyopaque, ) QtC.QTextCursor {
        return qtc.QTextFrame_LastCursorPosition(@ptrCast(self));
    }

    pub fn FirstPosition(self: ?*anyopaque, ) i32 {
        return qtc.QTextFrame_FirstPosition(@ptrCast(self));
    }

    pub fn LastPosition(self: ?*anyopaque, ) i32 {
        return qtc.QTextFrame_LastPosition(@ptrCast(self));
    }

    pub fn LayoutData(self: ?*anyopaque, ) QtC.QTextFrameLayoutData {
        return qtc.QTextFrame_LayoutData(@ptrCast(self));
    }

    pub fn SetLayoutData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QTextFrame_SetLayoutData(@ptrCast(self), @ptrCast(data));
    }

    pub fn ChildFrames(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextFrame_ChildFrames(@ptrCast(self));
    }

    pub fn ParentFrame(self: ?*anyopaque, ) QtC.QTextFrame {
        return qtc.QTextFrame_ParentFrame(@ptrCast(self));
    }

    pub fn Begin(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QTextFrame_Begin(@ptrCast(self)));
    }

    pub fn End(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QTextFrame_End(@ptrCast(self)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFrame_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextframe.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFrame_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextframe.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextFrame_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextblockuserdata.html
pub const qtextblockuserdata = struct {

    /// New constructs a new QTextBlockUserData object.
    pub fn New() QtC.QTextBlockUserData {
        return qtc.QTextBlockUserData_new();
    }


    /// New2 constructs a new QTextBlockUserData object.
    pub fn New2(param1: ?*anyopaque) QtC.QTextBlockUserData {
        return qtc.QTextBlockUserData_new2(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextBlockUserData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextBlockUserData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextblock.html
pub const qtextblock = struct {

    /// New constructs a new QTextBlock object.
    pub fn New(priv: *QTextDocumentPrivate, b: i32) QtC.QTextBlock {
        return qtc.QTextBlock_new(@ptrCast(priv), b);
    }


    /// New2 constructs a new QTextBlock object.
    pub fn New2() QtC.QTextBlock {
        return qtc.QTextBlock_new2();
    }


    /// New3 constructs a new QTextBlock object.
    pub fn New3(o: ?*anyopaque) QtC.QTextBlock {
        return qtc.QTextBlock_new3(@ptrCast(o));
    }


    pub fn OperatorAssign(self: ?*anyopaque, o: ?*anyopaque) void {
        qtc.QTextBlock_OperatorAssign(@ptrCast(self), @ptrCast(o));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextBlock_IsValid(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QTextBlock_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QTextBlock_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    pub fn OperatorLesser(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QTextBlock_OperatorLesser(@ptrCast(self), @ptrCast(o));
    }

    pub fn Position(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlock_Position(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlock_Length(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, position: i32) bool {
        return qtc.QTextBlock_Contains(@ptrCast(self), position);
    }

    pub fn Layout(self: ?*anyopaque, ) QtC.QTextLayout {
        return qtc.QTextBlock_Layout(@ptrCast(self));
    }

    pub fn ClearLayout(self: ?*anyopaque, ) void {
        qtc.QTextBlock_ClearLayout(@ptrCast(self));
    }

    pub fn BlockFormat(self: ?*anyopaque, ) QtC.QTextBlockFormat {
        return qtc.QTextBlock_BlockFormat(@ptrCast(self));
    }

    pub fn BlockFormatIndex(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlock_BlockFormatIndex(@ptrCast(self));
    }

    pub fn CharFormat(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QTextBlock_CharFormat(@ptrCast(self));
    }

    pub fn CharFormatIndex(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlock_CharFormatIndex(@ptrCast(self));
    }

    pub fn TextDirection(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlock_TextDirection(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextBlock_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextblock.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TextFormats(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextBlock_TextFormats(@ptrCast(self));
    }

    pub fn Document(self: ?*anyopaque, ) QtC.QTextDocument {
        return qtc.QTextBlock_Document(@ptrCast(self));
    }

    pub fn TextList(self: ?*anyopaque, ) QtC.QTextList {
        return qtc.QTextBlock_TextList(@ptrCast(self));
    }

    pub fn UserData(self: ?*anyopaque, ) QtC.QTextBlockUserData {
        return qtc.QTextBlock_UserData(@ptrCast(self));
    }

    pub fn SetUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QTextBlock_SetUserData(@ptrCast(self), @ptrCast(data));
    }

    pub fn UserState(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlock_UserState(@ptrCast(self));
    }

    pub fn SetUserState(self: ?*anyopaque, state: i32) void {
        qtc.QTextBlock_SetUserState(@ptrCast(self), state);
    }

    pub fn Revision(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlock_Revision(@ptrCast(self));
    }

    pub fn SetRevision(self: ?*anyopaque, rev: i32) void {
        qtc.QTextBlock_SetRevision(@ptrCast(self), rev);
    }

    pub fn IsVisible(self: ?*anyopaque, ) bool {
        return qtc.QTextBlock_IsVisible(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QTextBlock_SetVisible(@ptrCast(self), visible);
    }

    pub fn BlockNumber(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlock_BlockNumber(@ptrCast(self));
    }

    pub fn FirstLineNumber(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlock_FirstLineNumber(@ptrCast(self));
    }

    pub fn SetLineCount(self: ?*anyopaque, count: i32) void {
        qtc.QTextBlock_SetLineCount(@ptrCast(self), count);
    }

    pub fn LineCount(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlock_LineCount(@ptrCast(self));
    }

    pub fn Begin(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QTextBlock_Begin(@ptrCast(self)));
    }

    pub fn End(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QTextBlock_End(@ptrCast(self)));
    }

    pub fn Next(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QTextBlock_Next(@ptrCast(self));
    }

    pub fn Previous(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QTextBlock_Previous(@ptrCast(self));
    }

    pub fn FragmentIndex(self: ?*anyopaque, ) i32 {
        return qtc.QTextBlock_FragmentIndex(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextBlock_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextfragment.html
pub const qtextfragment = struct {

    /// New constructs a new QTextFragment object.
    pub fn New(priv: *const QTextDocumentPrivate, f: i32, fe: i32) QtC.QTextFragment {
        return qtc.QTextFragment_new(@ptrCast(priv), f, fe);
    }


    /// New2 constructs a new QTextFragment object.
    pub fn New2() QtC.QTextFragment {
        return qtc.QTextFragment_new2();
    }


    /// New3 constructs a new QTextFragment object.
    pub fn New3(o: ?*anyopaque) QtC.QTextFragment {
        return qtc.QTextFragment_new3(@ptrCast(o));
    }


    pub fn OperatorAssign(self: ?*anyopaque, o: ?*anyopaque) void {
        qtc.QTextFragment_OperatorAssign(@ptrCast(self), @ptrCast(o));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTextFragment_IsValid(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QTextFragment_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QTextFragment_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    pub fn OperatorLesser(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QTextFragment_OperatorLesser(@ptrCast(self), @ptrCast(o));
    }

    pub fn Position(self: ?*anyopaque, ) i32 {
        return qtc.QTextFragment_Position(@ptrCast(self));
    }

    pub fn Length(self: ?*anyopaque, ) i32 {
        return qtc.QTextFragment_Length(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, position: i32) bool {
        return qtc.QTextFragment_Contains(@ptrCast(self), position);
    }

    pub fn CharFormat(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QTextFragment_CharFormat(@ptrCast(self));
    }

    pub fn CharFormatIndex(self: ?*anyopaque, ) i32 {
        return qtc.QTextFragment_CharFormatIndex(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextFragment_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextfragment.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GlyphRuns(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextFragment_GlyphRuns(@ptrCast(self));
    }

    pub fn GlyphRuns1(self: ?*anyopaque, from: i32) []const u8 {
        return qtc.QTextFragment_GlyphRuns1(@ptrCast(self), from);
    }

    pub fn GlyphRuns2(self: ?*anyopaque, from: i32, length: i32) []const u8 {
        return qtc.QTextFragment_GlyphRuns2(@ptrCast(self), from, length);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextFragment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextframe-iterator.html
pub const qtextframe__iterator = struct {

    /// New constructs a new QTextFrame::iterator object.
    pub fn New(other: ?*anyopaque) QtC.QTextFrame__iterator {
        return qtc.QTextFrame__iterator_new(@ptrCast(other));
    }


    /// New2 constructs a new QTextFrame::iterator object.
    pub fn New2(other: ?*anyopaque) QtC.QTextFrame__iterator {
        return qtc.QTextFrame__iterator_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTextFrame::iterator object.
    pub fn New3() QtC.QTextFrame__iterator {
        return qtc.QTextFrame__iterator_new3();
    }


    /// New4 constructs a new QTextFrame::iterator object.
    pub fn New4(param1: ?*anyopaque) QtC.QTextFrame__iterator {
        return qtc.QTextFrame__iterator_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFrame__iterator_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextFrame__iterator_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ParentFrame(self: ?*anyopaque, ) QtC.QTextFrame {
        return qtc.QTextFrame__iterator_ParentFrame(@ptrCast(self));
    }

    pub fn CurrentFrame(self: ?*anyopaque, ) QtC.QTextFrame {
        return qtc.QTextFrame__iterator_CurrentFrame(@ptrCast(self));
    }

    pub fn CurrentBlock(self: ?*anyopaque, ) QtC.QTextBlock {
        return qtc.QTextFrame__iterator_CurrentBlock(@ptrCast(self));
    }

    pub fn AtEnd(self: ?*anyopaque, ) bool {
        return qtc.QTextFrame__iterator_AtEnd(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QTextFrame__iterator_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QTextFrame__iterator_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    pub fn OperatorPlusPlus(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QTextFrame__iterator_OperatorPlusPlus(@ptrCast(self)));
    }

    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) It::value_type {
        return @ptrCast(qtc.QTextFrame__iterator_OperatorPlusPlus2(@ptrCast(self), param1));
    }

    pub fn OperatorMinusMinus(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QTextFrame__iterator_OperatorMinusMinus(@ptrCast(self)));
    }

    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) It::value_type {
        return @ptrCast(qtc.QTextFrame__iterator_OperatorMinusMinus2(@ptrCast(self), param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextFrame__iterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextblock-iterator.html
pub const qtextblock__iterator = struct {

    /// New constructs a new QTextBlock::iterator object.
    pub fn New(other: ?*anyopaque) QtC.QTextBlock__iterator {
        return qtc.QTextBlock__iterator_new(@ptrCast(other));
    }


    /// New2 constructs a new QTextBlock::iterator object.
    pub fn New2(other: ?*anyopaque) QtC.QTextBlock__iterator {
        return qtc.QTextBlock__iterator_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTextBlock::iterator object.
    pub fn New3() QtC.QTextBlock__iterator {
        return qtc.QTextBlock__iterator_new3();
    }


    /// New4 constructs a new QTextBlock::iterator object.
    pub fn New4(param1: ?*anyopaque) QtC.QTextBlock__iterator {
        return qtc.QTextBlock__iterator_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextBlock__iterator_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextBlock__iterator_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Fragment(self: ?*anyopaque, ) QtC.QTextFragment {
        return qtc.QTextBlock__iterator_Fragment(@ptrCast(self));
    }

    pub fn AtEnd(self: ?*anyopaque, ) bool {
        return qtc.QTextBlock__iterator_AtEnd(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QTextBlock__iterator_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QTextBlock__iterator_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    pub fn OperatorPlusPlus(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QTextBlock__iterator_OperatorPlusPlus(@ptrCast(self)));
    }

    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) It::value_type {
        return @ptrCast(qtc.QTextBlock__iterator_OperatorPlusPlus2(@ptrCast(self), param1));
    }

    pub fn OperatorMinusMinus(self: ?*anyopaque, ) It::value_type {
        return @ptrCast(qtc.QTextBlock__iterator_OperatorMinusMinus(@ptrCast(self)));
    }

    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) It::value_type {
        return @ptrCast(qtc.QTextBlock__iterator_OperatorMinusMinus2(@ptrCast(self), param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextBlock__iterator_Delete(@ptrCast(self));
    }
};
