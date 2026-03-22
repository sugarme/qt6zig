const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlatin1stringmatcher.html
pub const qlatin1stringmatcher = struct {

    /// New constructs a new QLatin1StringMatcher object.
    pub fn New() QtC.QLatin1StringMatcher {
        return qtc.QLatin1StringMatcher_new();
    }


    /// New2 constructs a new QLatin1StringMatcher object.
    pub fn New2(pattern: QLatin1StringView) QtC.QLatin1StringMatcher {
        return qtc.QLatin1StringMatcher_new2(pattern);
    }


    /// New3 constructs a new QLatin1StringMatcher object.
    pub fn New3(pattern: QLatin1StringView, cs: i32) QtC.QLatin1StringMatcher {
        return qtc.QLatin1StringMatcher_new3(pattern, @intCast(cs));
    }


    pub fn SetPattern(self: ?*anyopaque, pattern: QLatin1StringView) void {
        qtc.QLatin1StringMatcher_SetPattern(@ptrCast(self), pattern);
    }

    pub fn Pattern(self: ?*anyopaque, ) QLatin1StringView {
        return qtc.QLatin1StringMatcher_Pattern(@ptrCast(self));
    }

    pub fn SetCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QLatin1StringMatcher_SetCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    pub fn CaseSensitivity(self: ?*anyopaque, ) i32 {
        return qtc.QLatin1StringMatcher_CaseSensitivity(@ptrCast(self));
    }

    pub fn IndexIn(self: ?*anyopaque, haystack: QLatin1StringView) i64 {
        return qtc.QLatin1StringMatcher_IndexIn(@ptrCast(self), haystack);
    }

    pub fn IndexIn2(self: ?*anyopaque, haystack: []const u8) i64 {
        return qtc.QLatin1StringMatcher_IndexIn2(@ptrCast(self), @ptrCast(haystack));
    }

    pub fn IndexIn22(self: ?*anyopaque, haystack: QLatin1StringView, from: i64) i64 {
        return qtc.QLatin1StringMatcher_IndexIn22(@ptrCast(self), haystack, from);
    }

    pub fn IndexIn23(self: ?*anyopaque, haystack: []const u8, from: i64) i64 {
        return qtc.QLatin1StringMatcher_IndexIn23(@ptrCast(self), @ptrCast(haystack), from);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLatin1StringMatcher_Delete(@ptrCast(self));
    }
};
