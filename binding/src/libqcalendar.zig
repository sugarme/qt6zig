const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcalendar.html
pub const qcalendar = struct {

    /// New constructs a new QCalendar object.
    pub fn New(other: ?*anyopaque) QtC.QCalendar {
        return qtc.QCalendar_new(@ptrCast(other));
    }


    /// New2 constructs a new QCalendar object.
    pub fn New2(other: ?*anyopaque) QtC.QCalendar {
        return qtc.QCalendar_new2(@ptrCast(other));
    }


    /// New3 constructs a new QCalendar object.
    pub fn New3() QtC.QCalendar {
        return qtc.QCalendar_new3();
    }


    /// New4 constructs a new QCalendar object.
    pub fn New4(system: i32) QtC.QCalendar {
        return qtc.QCalendar_new4(@intCast(system));
    }


    /// New5 constructs a new QCalendar object.
    pub fn New5(id: QtC.QCalendar__SystemId) QtC.QCalendar {
        return qtc.QCalendar_new5(@ptrCast(id));
    }


    /// New6 constructs a new QCalendar object.
    pub fn New6(param1: ?*anyopaque) QtC.QCalendar {
        return qtc.QCalendar_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QCalendar_IsValid(@ptrCast(self));
    }

    pub fn DaysInMonth(self: ?*anyopaque, month: i32) i32 {
        return qtc.QCalendar_DaysInMonth(@ptrCast(self), month);
    }

    pub fn DaysInYear(self: ?*anyopaque, year: i32) i32 {
        return qtc.QCalendar_DaysInYear(@ptrCast(self), year);
    }

    pub fn MonthsInYear(self: ?*anyopaque, year: i32) i32 {
        return qtc.QCalendar_MonthsInYear(@ptrCast(self), year);
    }

    pub fn IsDateValid(self: ?*anyopaque, year: i32, month: i32, day: i32) bool {
        return qtc.QCalendar_IsDateValid(@ptrCast(self), year, month, day);
    }

    pub fn IsLeapYear(self: ?*anyopaque, year: i32) bool {
        return qtc.QCalendar_IsLeapYear(@ptrCast(self), year);
    }

    pub fn IsGregorian(self: ?*anyopaque, ) bool {
        return qtc.QCalendar_IsGregorian(@ptrCast(self));
    }

    pub fn IsLunar(self: ?*anyopaque, ) bool {
        return qtc.QCalendar_IsLunar(@ptrCast(self));
    }

    pub fn IsLuniSolar(self: ?*anyopaque, ) bool {
        return qtc.QCalendar_IsLuniSolar(@ptrCast(self));
    }

    pub fn IsSolar(self: ?*anyopaque, ) bool {
        return qtc.QCalendar_IsSolar(@ptrCast(self));
    }

    pub fn IsProleptic(self: ?*anyopaque, ) bool {
        return qtc.QCalendar_IsProleptic(@ptrCast(self));
    }

    pub fn HasYearZero(self: ?*anyopaque, ) bool {
        return qtc.QCalendar_HasYearZero(@ptrCast(self));
    }

    pub fn MaximumDaysInMonth(self: ?*anyopaque, ) i32 {
        return qtc.QCalendar_MaximumDaysInMonth(@ptrCast(self));
    }

    pub fn MinimumDaysInMonth(self: ?*anyopaque, ) i32 {
        return qtc.QCalendar_MinimumDaysInMonth(@ptrCast(self));
    }

    pub fn MaximumMonthsInYear(self: ?*anyopaque, ) i32 {
        return qtc.QCalendar_MaximumMonthsInYear(@ptrCast(self));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DateFromParts(self: ?*anyopaque, year: i32, month: i32, day: i32) QtC.QDate {
        return qtc.QCalendar_DateFromParts(@ptrCast(self), year, month, day);
    }

    pub fn DateFromParts2(self: ?*anyopaque, parts: ?*anyopaque) QtC.QDate {
        return qtc.QCalendar_DateFromParts2(@ptrCast(self), @ptrCast(parts));
    }

    pub fn MatchCenturyToWeekday(self: ?*anyopaque, parts: ?*anyopaque, dow: i32) QtC.QDate {
        return qtc.QCalendar_MatchCenturyToWeekday(@ptrCast(self), @ptrCast(parts), dow);
    }

    pub fn PartsFromDate(self: ?*anyopaque, date: QtC.QDate) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar_PartsFromDate(@ptrCast(self), @ptrCast(date));
    }

    pub fn DayOfWeek(self: ?*anyopaque, date: QtC.QDate) i32 {
        return qtc.QCalendar_DayOfWeek(@ptrCast(self), @ptrCast(date));
    }

    pub fn MonthName(self: ?*anyopaque, locale: ?*anyopaque, month: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_MonthName(@ptrCast(self), @ptrCast(locale), month);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.MonthName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StandaloneMonthName(self: ?*anyopaque, locale: ?*anyopaque, month: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_StandaloneMonthName(@ptrCast(self), @ptrCast(locale), month);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneMonthName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn WeekDayName(self: ?*anyopaque, locale: ?*anyopaque, day: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_WeekDayName(@ptrCast(self), @ptrCast(locale), day);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.WeekDayName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StandaloneWeekDayName(self: ?*anyopaque, locale: ?*anyopaque, day: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_StandaloneWeekDayName(@ptrCast(self), @ptrCast(locale), day);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneWeekDayName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AvailableCalendars() []const u8 {
        return qtc.QCalendar_AvailableCalendars();
    }

    pub fn DaysInMonth2(self: ?*anyopaque, month: i32, year: i32) i32 {
        return qtc.QCalendar_DaysInMonth2(@ptrCast(self), month, year);
    }

    pub fn MonthName3(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_MonthName3(@ptrCast(self), @ptrCast(locale), month, year);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.MonthName3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MonthName4(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, format: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_MonthName4(@ptrCast(self), @ptrCast(locale), month, year, @intCast(format));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.MonthName4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StandaloneMonthName3(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_StandaloneMonthName3(@ptrCast(self), @ptrCast(locale), month, year);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneMonthName3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StandaloneMonthName4(self: ?*anyopaque, locale: ?*anyopaque, month: i32, year: i32, format: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_StandaloneMonthName4(@ptrCast(self), @ptrCast(locale), month, year, @intCast(format));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneMonthName4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn WeekDayName3(self: ?*anyopaque, locale: ?*anyopaque, day: i32, format: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_WeekDayName3(@ptrCast(self), @ptrCast(locale), day, @intCast(format));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.WeekDayName3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StandaloneWeekDayName3(self: ?*anyopaque, locale: ?*anyopaque, day: i32, format: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendar_StandaloneWeekDayName3(@ptrCast(self), @ptrCast(locale), day, @intCast(format));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendar.StandaloneWeekDayName3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCalendar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcalendar-yearmonthday.html
pub const qcalendar__yearmonthday = struct {

    /// New constructs a new QCalendar::YearMonthDay object.
    pub fn New(other: ?*anyopaque) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new(@ptrCast(other));
    }


    /// New2 constructs a new QCalendar::YearMonthDay object.
    pub fn New2(other: ?*anyopaque) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new2(@ptrCast(other));
    }


    /// New3 constructs a new QCalendar::YearMonthDay object.
    pub fn New3() QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new3();
    }


    /// New4 constructs a new QCalendar::YearMonthDay object.
    pub fn New4(y: i32) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new4(y);
    }


    /// New5 constructs a new QCalendar::YearMonthDay object.
    pub fn New5(y: i32, m: i32) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new5(y, m);
    }


    /// New6 constructs a new QCalendar::YearMonthDay object.
    pub fn New6(y: i32, m: i32, d: i32) QtC.QCalendar__YearMonthDay {
        return qtc.QCalendar__YearMonthDay_new6(y, m, d);
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar__YearMonthDay_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar__YearMonthDay_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QCalendar__YearMonthDay_IsValid(@ptrCast(self));
    }

    pub fn Year(self: ?*anyopaque, ) i32 {
        return qtc.QCalendar__YearMonthDay_Year(@ptrCast(self));
    }

    pub fn SetYear(self: ?*anyopaque, year: i32) void {
        qtc.QCalendar__YearMonthDay_SetYear(@ptrCast(self), year);
    }

    pub fn Month(self: ?*anyopaque, ) i32 {
        return qtc.QCalendar__YearMonthDay_Month(@ptrCast(self));
    }

    pub fn SetMonth(self: ?*anyopaque, month: i32) void {
        qtc.QCalendar__YearMonthDay_SetMonth(@ptrCast(self), month);
    }

    pub fn Day(self: ?*anyopaque, ) i32 {
        return qtc.QCalendar__YearMonthDay_Day(@ptrCast(self));
    }

    pub fn SetDay(self: ?*anyopaque, day: i32) void {
        qtc.QCalendar__YearMonthDay_SetDay(@ptrCast(self), day);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCalendar__YearMonthDay_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcalendar-systemid.html
pub const qcalendar__systemid = struct {

    /// New constructs a new QCalendar::SystemId object.
    pub fn New(other: ?*anyopaque) QtC.QCalendar__SystemId {
        return qtc.QCalendar__SystemId_new(@ptrCast(other));
    }


    /// New2 constructs a new QCalendar::SystemId object.
    pub fn New2(other: ?*anyopaque) QtC.QCalendar__SystemId {
        return qtc.QCalendar__SystemId_new2(@ptrCast(other));
    }


    /// New3 constructs a new QCalendar::SystemId object.
    pub fn New3() QtC.QCalendar__SystemId {
        return qtc.QCalendar__SystemId_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar__SystemId_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendar__SystemId_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Index(self: ?*anyopaque, ) u64 {
        return qtc.QCalendar__SystemId_Index(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QCalendar__SystemId_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCalendar__SystemId_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/calendar.html#types
pub const enums = struct {
    pub const System = enum {
        pub const Gregorian: i32 = 0;
        pub const Julian: i32 = 8;
        pub const Milankovic: i32 = 9;
        pub const Jalali: i32 = 10;
        pub const IslamicCivil: i32 = 11;
        pub const Last: i32 = 11;
        pub const User: i32 = -1;
    };

};
