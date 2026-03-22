const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qregularexpression.html
pub const qregularexpression = struct {

    /// New constructs a new QRegularExpression object.
    pub fn New() QtC.QRegularExpression {
        return qtc.QRegularExpression_new();
    }


    /// New2 constructs a new QRegularExpression object.
    pub fn New2(pattern: []const u8) QtC.QRegularExpression {
        const pattern_str = qtc.libqt_string{
    .len = pattern.len,
    .data = pattern.ptr,
};
return qtc.QRegularExpression_new2(pattern_str);
    }


    /// New3 constructs a new QRegularExpression object.
    pub fn New3(re: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QRegularExpression_new3(@ptrCast(re));
    }


    /// New4 constructs a new QRegularExpression object.
    pub fn New4(pattern: []const u8, options: i32) QtC.QRegularExpression {
        const pattern_str = qtc.libqt_string{
    .len = pattern.len,
    .data = pattern.ptr,
};
return qtc.QRegularExpression_new4(pattern_str, @intCast(options));
    }


    pub fn PatternOptions(self: ?*anyopaque, ) i32 {
        return qtc.QRegularExpression_PatternOptions(@ptrCast(self));
    }

    pub fn SetPatternOptions(self: ?*anyopaque, options: i32) void {
        qtc.QRegularExpression_SetPatternOptions(@ptrCast(self), @intCast(options));
    }

    pub fn OperatorAssign(self: ?*anyopaque, re: ?*anyopaque) void {
        qtc.QRegularExpression_OperatorAssign(@ptrCast(self), @ptrCast(re));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRegularExpression_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Pattern(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRegularExpression_Pattern(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.Pattern: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPattern(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
    .len = pattern.len,
    .data = pattern.ptr,
};
qtc.QRegularExpression_SetPattern(@ptrCast(self), pattern_str);
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QRegularExpression_IsValid(@ptrCast(self));
    }

    pub fn PatternErrorOffset(self: ?*anyopaque, ) i64 {
        return qtc.QRegularExpression_PatternErrorOffset(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRegularExpression_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CaptureCount(self: ?*anyopaque, ) i32 {
        return qtc.QRegularExpression_CaptureCount(@ptrCast(self));
    }

    pub fn NamedCaptureGroups(self: ?*anyopaque, ) []const u8 {
        return qtc.QRegularExpression_NamedCaptureGroups(@ptrCast(self));
    }

    pub fn Match(self: ?*anyopaque, subject: []const u8) QtC.QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
    .len = subject.len,
    .data = subject.ptr,
};
return qtc.QRegularExpression_Match(@ptrCast(self), subject_str);
    }

    pub fn GlobalMatch(self: ?*anyopaque, subject: []const u8) QtC.QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
    .len = subject.len,
    .data = subject.ptr,
};
return qtc.QRegularExpression_GlobalMatch(@ptrCast(self), subject_str);
    }

    pub fn Optimize(self: ?*anyopaque, ) void {
        qtc.QRegularExpression_Optimize(@ptrCast(self));
    }

    pub fn Escape(str: []const u8, allocator: std.mem.Allocator) []const u8 {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
const _str = qtc.QRegularExpression_Escape(str_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.Escape: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn WildcardToRegularExpression(str: []const u8, allocator: std.mem.Allocator) []const u8 {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
const _str = qtc.QRegularExpression_WildcardToRegularExpression(str_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.WildcardToRegularExpression: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AnchoredPattern(expression: []const u8, allocator: std.mem.Allocator) []const u8 {
        const expression_str = qtc.libqt_string{
    .len = expression.len,
    .data = expression.ptr,
};
const _str = qtc.QRegularExpression_AnchoredPattern(expression_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.AnchoredPattern: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Match22(self: ?*anyopaque, subject: []const u8, offset: i64) QtC.QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
    .len = subject.len,
    .data = subject.ptr,
};
return qtc.QRegularExpression_Match22(@ptrCast(self), subject_str, offset);
    }

    pub fn Match3(self: ?*anyopaque, subject: []const u8, offset: i64, matchType: i32) QtC.QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
    .len = subject.len,
    .data = subject.ptr,
};
return qtc.QRegularExpression_Match3(@ptrCast(self), subject_str, offset, @intCast(matchType));
    }

    pub fn Match4(self: ?*anyopaque, subject: []const u8, offset: i64, matchType: i32, matchOptions: i32) QtC.QRegularExpressionMatch {
        const subject_str = qtc.libqt_string{
    .len = subject.len,
    .data = subject.ptr,
};
return qtc.QRegularExpression_Match4(@ptrCast(self), subject_str, offset, @intCast(matchType), @intCast(matchOptions));
    }

    pub fn GlobalMatch22(self: ?*anyopaque, subject: []const u8, offset: i64) QtC.QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
    .len = subject.len,
    .data = subject.ptr,
};
return qtc.QRegularExpression_GlobalMatch22(@ptrCast(self), subject_str, offset);
    }

    pub fn GlobalMatch3(self: ?*anyopaque, subject: []const u8, offset: i64, matchType: i32) QtC.QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
    .len = subject.len,
    .data = subject.ptr,
};
return qtc.QRegularExpression_GlobalMatch3(@ptrCast(self), subject_str, offset, @intCast(matchType));
    }

    pub fn GlobalMatch4(self: ?*anyopaque, subject: []const u8, offset: i64, matchType: i32, matchOptions: i32) QtC.QRegularExpressionMatchIterator {
        const subject_str = qtc.libqt_string{
    .len = subject.len,
    .data = subject.ptr,
};
return qtc.QRegularExpression_GlobalMatch4(@ptrCast(self), subject_str, offset, @intCast(matchType), @intCast(matchOptions));
    }

    pub fn WildcardToRegularExpression22(str: []const u8, options: i32, allocator: std.mem.Allocator) []const u8 {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
const _str = qtc.QRegularExpression_WildcardToRegularExpression22(str_str, @intCast(options));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpression.WildcardToRegularExpression22: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRegularExpression_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qregularexpressionmatch.html
pub const qregularexpressionmatch = struct {

    /// New constructs a new QRegularExpressionMatch object.
    pub fn New() QtC.QRegularExpressionMatch {
        return qtc.QRegularExpressionMatch_new();
    }


    /// New2 constructs a new QRegularExpressionMatch object.
    pub fn New2(match: ?*anyopaque) QtC.QRegularExpressionMatch {
        return qtc.QRegularExpressionMatch_new2(@ptrCast(match));
    }


    pub fn OperatorAssign(self: ?*anyopaque, match: ?*anyopaque) void {
        qtc.QRegularExpressionMatch_OperatorAssign(@ptrCast(self), @ptrCast(match));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRegularExpressionMatch_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn RegularExpression(self: ?*anyopaque, ) QtC.QRegularExpression {
        return qtc.QRegularExpressionMatch_RegularExpression(@ptrCast(self));
    }

    pub fn MatchType(self: ?*anyopaque, ) i32 {
        return qtc.QRegularExpressionMatch_MatchType(@ptrCast(self));
    }

    pub fn MatchOptions(self: ?*anyopaque, ) i32 {
        return qtc.QRegularExpressionMatch_MatchOptions(@ptrCast(self));
    }

    pub fn HasMatch(self: ?*anyopaque, ) bool {
        return qtc.QRegularExpressionMatch_HasMatch(@ptrCast(self));
    }

    pub fn HasPartialMatch(self: ?*anyopaque, ) bool {
        return qtc.QRegularExpressionMatch_HasPartialMatch(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QRegularExpressionMatch_IsValid(@ptrCast(self));
    }

    pub fn LastCapturedIndex(self: ?*anyopaque, ) i32 {
        return qtc.QRegularExpressionMatch_LastCapturedIndex(@ptrCast(self));
    }

    pub fn HasCaptured2(self: ?*anyopaque, nth: i32) bool {
        return qtc.QRegularExpressionMatch_HasCaptured2(@ptrCast(self), nth);
    }

    pub fn Captured(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRegularExpressionMatch_Captured(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpressionmatch.Captured: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CapturedTexts(self: ?*anyopaque, ) []const u8 {
        return qtc.QRegularExpressionMatch_CapturedTexts(@ptrCast(self));
    }

    pub fn CapturedStart(self: ?*anyopaque, ) i64 {
        return qtc.QRegularExpressionMatch_CapturedStart(@ptrCast(self));
    }

    pub fn CapturedLength(self: ?*anyopaque, ) i64 {
        return qtc.QRegularExpressionMatch_CapturedLength(@ptrCast(self));
    }

    pub fn CapturedEnd(self: ?*anyopaque, ) i64 {
        return qtc.QRegularExpressionMatch_CapturedEnd(@ptrCast(self));
    }

    pub fn Captured1(self: ?*anyopaque, nth: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRegularExpressionMatch_Captured1(@ptrCast(self), nth);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpressionmatch.Captured1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CapturedStart1(self: ?*anyopaque, nth: i32) i64 {
        return qtc.QRegularExpressionMatch_CapturedStart1(@ptrCast(self), nth);
    }

    pub fn CapturedLength1(self: ?*anyopaque, nth: i32) i64 {
        return qtc.QRegularExpressionMatch_CapturedLength1(@ptrCast(self), nth);
    }

    pub fn CapturedEnd1(self: ?*anyopaque, nth: i32) i64 {
        return qtc.QRegularExpressionMatch_CapturedEnd1(@ptrCast(self), nth);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRegularExpressionMatch_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qregularexpressionmatchiterator.html
pub const qregularexpressionmatchiterator = struct {

    /// New constructs a new QRegularExpressionMatchIterator object.
    pub fn New() QtC.QRegularExpressionMatchIterator {
        return qtc.QRegularExpressionMatchIterator_new();
    }


    /// New2 constructs a new QRegularExpressionMatchIterator object.
    pub fn New2(iterator: ?*anyopaque) QtC.QRegularExpressionMatchIterator {
        return qtc.QRegularExpressionMatchIterator_new2(@ptrCast(iterator));
    }


    pub fn OperatorAssign(self: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QRegularExpressionMatchIterator_OperatorAssign(@ptrCast(self), @ptrCast(iterator));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRegularExpressionMatchIterator_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QRegularExpressionMatchIterator_IsValid(@ptrCast(self));
    }

    pub fn HasNext(self: ?*anyopaque, ) bool {
        return qtc.QRegularExpressionMatchIterator_HasNext(@ptrCast(self));
    }

    pub fn Next(self: ?*anyopaque, ) QtC.QRegularExpressionMatch {
        return qtc.QRegularExpressionMatchIterator_Next(@ptrCast(self));
    }

    pub fn PeekNext(self: ?*anyopaque, ) QtC.QRegularExpressionMatch {
        return qtc.QRegularExpressionMatchIterator_PeekNext(@ptrCast(self));
    }

    pub fn RegularExpression(self: ?*anyopaque, ) QtC.QRegularExpression {
        return qtc.QRegularExpressionMatchIterator_RegularExpression(@ptrCast(self));
    }

    pub fn MatchType(self: ?*anyopaque, ) i32 {
        return qtc.QRegularExpressionMatchIterator_MatchType(@ptrCast(self));
    }

    pub fn MatchOptions(self: ?*anyopaque, ) i32 {
        return qtc.QRegularExpressionMatchIterator_MatchOptions(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRegularExpressionMatchIterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/regularexpression.html#types
pub const enums = struct {
    pub const PatternOption = enum {
        pub const NoPatternOption: i32 = 0;
        pub const CaseInsensitiveOption: i32 = 1;
        pub const DotMatchesEverythingOption: i32 = 2;
        pub const MultilineOption: i32 = 4;
        pub const ExtendedPatternSyntaxOption: i32 = 8;
        pub const InvertedGreedinessOption: i32 = 16;
        pub const DontCaptureOption: i32 = 32;
        pub const UseUnicodePropertiesOption: i32 = 64;
    };

    pub const MatchType = enum {
        pub const NormalMatch: i32 = 0;
        pub const PartialPreferCompleteMatch: i32 = 1;
        pub const PartialPreferFirstMatch: i32 = 2;
        pub const NoMatch: i32 = 3;
    };

    pub const MatchOption = enum {
        pub const NoMatchOption: i32 = 0;
        pub const AnchorAtOffsetMatchOption: i32 = 1;
        pub const AnchoredMatchOption: i32 = 1;
        pub const DontCheckSubjectStringMatchOption: i32 = 2;
    };

    pub const WildcardConversionOption = enum {
        pub const DefaultWildcardConversion: i32 = 0;
        pub const UnanchoredWildcardConversion: i32 = 1;
        pub const NonPathWildcardConversion: i32 = 2;
    };

};
