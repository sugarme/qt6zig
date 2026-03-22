const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdate.html
pub const qdate = struct {

    /// New constructs a new QDate object.
    pub fn New(other: ?*anyopaque) QtC.QDate {
        return qtc.QDate_new(@ptrCast(other));
    }


    /// New2 constructs a new QDate object.
    pub fn New2(other: ?*anyopaque) QtC.QDate {
        return qtc.QDate_new2(@ptrCast(other));
    }


    /// New3 constructs a new QDate object.
    pub fn New3() QtC.QDate {
        return qtc.QDate_new3();
    }


    /// New4 constructs a new QDate object.
    pub fn New4(y: i32, m: i32, d: i32) QtC.QDate {
        return qtc.QDate_new4(y, m, d);
    }


    /// New5 constructs a new QDate object.
    pub fn New5(y: i32, m: i32, d: i32, cal: QtC.QCalendar) QtC.QDate {
        return qtc.QDate_new5(y, m, d, @ptrCast(cal));
    }


    /// New6 constructs a new QDate object.
    pub fn New6(param1: ?*anyopaque) QtC.QDate {
        return qtc.QDate_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDate_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDate_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QDate_IsNull(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QDate_IsValid(@ptrCast(self));
    }

    pub fn Year(self: ?*anyopaque, ) i32 {
        return qtc.QDate_Year(@ptrCast(self));
    }

    pub fn Month(self: ?*anyopaque, ) i32 {
        return qtc.QDate_Month(@ptrCast(self));
    }

    pub fn Day(self: ?*anyopaque, ) i32 {
        return qtc.QDate_Day(@ptrCast(self));
    }

    pub fn DayOfWeek(self: ?*anyopaque, ) i32 {
        return qtc.QDate_DayOfWeek(@ptrCast(self));
    }

    pub fn DayOfYear(self: ?*anyopaque, ) i32 {
        return qtc.QDate_DayOfYear(@ptrCast(self));
    }

    pub fn DaysInMonth(self: ?*anyopaque, ) i32 {
        return qtc.QDate_DaysInMonth(@ptrCast(self));
    }

    pub fn DaysInYear(self: ?*anyopaque, ) i32 {
        return qtc.QDate_DaysInYear(@ptrCast(self));
    }

    pub fn WeekNumber(self: ?*anyopaque, ) i32 {
        return qtc.QDate_WeekNumber(@ptrCast(self));
    }

    pub fn Year2(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_Year2(@ptrCast(self), @ptrCast(cal));
    }

    pub fn Month2(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_Month2(@ptrCast(self), @ptrCast(cal));
    }

    pub fn Day2(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_Day2(@ptrCast(self), @ptrCast(cal));
    }

    pub fn DayOfWeek2(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_DayOfWeek2(@ptrCast(self), @ptrCast(cal));
    }

    pub fn DayOfYear2(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_DayOfYear2(@ptrCast(self), @ptrCast(cal));
    }

    pub fn DaysInMonth2(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_DaysInMonth2(@ptrCast(self), @ptrCast(cal));
    }

    pub fn DaysInYear2(self: ?*anyopaque, cal: QtC.QCalendar) i32 {
        return qtc.QDate_DaysInYear2(@ptrCast(self), @ptrCast(cal));
    }

    pub fn StartOfDay(self: ?*anyopaque, spec: i32) QtC.QDateTime {
        return qtc.QDate_StartOfDay(@ptrCast(self), @intCast(spec));
    }

    pub fn EndOfDay(self: ?*anyopaque, spec: i32) QtC.QDateTime {
        return qtc.QDate_EndOfDay(@ptrCast(self), @intCast(spec));
    }

    pub fn StartOfDay2(self: ?*anyopaque, zone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDate_StartOfDay2(@ptrCast(self), @ptrCast(zone));
    }

    pub fn EndOfDay2(self: ?*anyopaque, zone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDate_EndOfDay2(@ptrCast(self), @ptrCast(zone));
    }

    pub fn StartOfDay3(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QDate_StartOfDay3(@ptrCast(self));
    }

    pub fn EndOfDay3(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QDate_EndOfDay3(@ptrCast(self));
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDate_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString2(self: ?*anyopaque, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
const _str = qtc.QDate_ToString2(@ptrCast(self), format_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString3(self: ?*anyopaque, format: []const u8, cal: QtC.QCalendar, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
const _str = qtc.QDate_ToString3(@ptrCast(self), format_str, @ptrCast(cal));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString4(self: ?*anyopaque, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDate_ToString4(@ptrCast(self), @ptrCast(format));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString5(self: ?*anyopaque, format: []const u8, cal: QtC.QCalendar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDate_ToString5(@ptrCast(self), @ptrCast(format), @ptrCast(cal));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDate(self: ?*anyopaque, year: i32, month: i32, day: i32) bool {
        return qtc.QDate_SetDate(@ptrCast(self), year, month, day);
    }

    pub fn SetDate2(self: ?*anyopaque, year: i32, month: i32, day: i32, cal: QtC.QCalendar) bool {
        return qtc.QDate_SetDate2(@ptrCast(self), year, month, day, @ptrCast(cal));
    }

    pub fn GetDate(self: ?*anyopaque, year: *i32, month: *i32, day: *i32) void {
        qtc.QDate_GetDate(@ptrCast(self), @ptrCast(year), @ptrCast(month), @ptrCast(day));
    }

    pub fn AddDays(self: ?*anyopaque, days: i64) QtC.QDate {
        return qtc.QDate_AddDays(@ptrCast(self), days);
    }

    pub fn AddMonths(self: ?*anyopaque, months: i32) QtC.QDate {
        return qtc.QDate_AddMonths(@ptrCast(self), months);
    }

    pub fn AddYears(self: ?*anyopaque, years: i32) QtC.QDate {
        return qtc.QDate_AddYears(@ptrCast(self), years);
    }

    pub fn AddMonths2(self: ?*anyopaque, months: i32, cal: QtC.QCalendar) QtC.QDate {
        return qtc.QDate_AddMonths2(@ptrCast(self), months, @ptrCast(cal));
    }

    pub fn AddYears2(self: ?*anyopaque, years: i32, cal: QtC.QCalendar) QtC.QDate {
        return qtc.QDate_AddYears2(@ptrCast(self), years, @ptrCast(cal));
    }

    pub fn DaysTo(self: ?*anyopaque, d: QtC.QDate) i64 {
        return qtc.QDate_DaysTo(@ptrCast(self), @ptrCast(d));
    }

    pub fn CurrentDate() QtC.QDate {
        return qtc.QDate_CurrentDate();
    }

    pub fn FromString(stringVal: []const u8) QtC.QDate {
        return qtc.QDate_FromString(@ptrCast(stringVal));
    }

    pub fn FromString2(stringVal: []const u8) QtC.QDate {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDate_FromString2(stringVal_str);
    }

    pub fn FromString3(stringVal: []const u8, format: []const u8, cal: QtC.QCalendar) QtC.QDate {
        return qtc.QDate_FromString3(@ptrCast(stringVal), @ptrCast(format), @ptrCast(cal));
    }

    pub fn FromString4(stringVal: []const u8, format: []const u8, cal: QtC.QCalendar) QtC.QDate {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDate_FromString4(stringVal_str, @ptrCast(format), @ptrCast(cal));
    }

    pub fn FromString5(stringVal: []const u8, format: []const u8, cal: QtC.QCalendar) QtC.QDate {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QDate_FromString5(stringVal_str, format_str, @ptrCast(cal));
    }

    pub fn FromString6(stringVal: []const u8, format: []const u8) QtC.QDate {
        return qtc.QDate_FromString6(@ptrCast(stringVal), @ptrCast(format));
    }

    pub fn FromString7(stringVal: []const u8, format: []const u8, baseYear: i32, cal: QtC.QCalendar) QtC.QDate {
        return qtc.QDate_FromString7(@ptrCast(stringVal), @ptrCast(format), baseYear, @ptrCast(cal));
    }

    pub fn FromString8(stringVal: []const u8, format: []const u8) QtC.QDate {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDate_FromString8(stringVal_str, @ptrCast(format));
    }

    pub fn FromString9(stringVal: []const u8, format: []const u8, baseYear: i32, cal: QtC.QCalendar) QtC.QDate {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDate_FromString9(stringVal_str, @ptrCast(format), baseYear, @ptrCast(cal));
    }

    pub fn FromString10(stringVal: []const u8, format: []const u8) QtC.QDate {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QDate_FromString10(stringVal_str, format_str);
    }

    pub fn FromString11(stringVal: []const u8, format: []const u8, baseYear: i32, cal: QtC.QCalendar) QtC.QDate {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QDate_FromString11(stringVal_str, format_str, baseYear, @ptrCast(cal));
    }

    pub fn IsValid2(y: i32, m: i32, d: i32) bool {
        return qtc.QDate_IsValid2(y, m, d);
    }

    pub fn IsLeapYear(year: i32) bool {
        return qtc.QDate_IsLeapYear(year);
    }

    pub fn FromJulianDay(jd_: i64) QtC.QDate {
        return qtc.QDate_FromJulianDay(jd_);
    }

    pub fn ToJulianDay(self: ?*anyopaque, ) i64 {
        return qtc.QDate_ToJulianDay(@ptrCast(self));
    }

    pub fn WeekNumber1(self: ?*anyopaque, yearNum: *i32) i32 {
        return qtc.QDate_WeekNumber1(@ptrCast(self), @ptrCast(yearNum));
    }

    pub fn StartOfDay22(self: ?*anyopaque, spec: i32, offsetSeconds: i32) QtC.QDateTime {
        return qtc.QDate_StartOfDay22(@ptrCast(self), @intCast(spec), offsetSeconds);
    }

    pub fn EndOfDay22(self: ?*anyopaque, spec: i32, offsetSeconds: i32) QtC.QDateTime {
        return qtc.QDate_EndOfDay22(@ptrCast(self), @intCast(spec), offsetSeconds);
    }

    pub fn ToString1(self: ?*anyopaque, format: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDate_ToString1(@ptrCast(self), @intCast(format));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdate.ToString1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromString22(stringVal: []const u8, format: i32) QtC.QDate {
        return qtc.QDate_FromString22(@ptrCast(stringVal), @intCast(format));
    }

    pub fn FromString23(stringVal: []const u8, format: i32) QtC.QDate {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDate_FromString23(stringVal_str, @intCast(format));
    }

    pub fn FromString32(stringVal: []const u8, format: []const u8, baseYear: i32) QtC.QDate {
        return qtc.QDate_FromString32(@ptrCast(stringVal), @ptrCast(format), baseYear);
    }

    pub fn FromString33(stringVal: []const u8, format: []const u8, baseYear: i32) QtC.QDate {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDate_FromString33(stringVal_str, @ptrCast(format), baseYear);
    }

    pub fn FromString34(stringVal: []const u8, format: []const u8, baseYear: i32) QtC.QDate {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QDate_FromString34(stringVal_str, format_str, baseYear);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDate_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtime.html
pub const qtime = struct {

    /// New constructs a new QTime object.
    pub fn New(other: ?*anyopaque) QtC.QTime {
        return qtc.QTime_new(@ptrCast(other));
    }


    /// New2 constructs a new QTime object.
    pub fn New2(other: ?*anyopaque) QtC.QTime {
        return qtc.QTime_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTime object.
    pub fn New3() QtC.QTime {
        return qtc.QTime_new3();
    }


    /// New4 constructs a new QTime object.
    pub fn New4(h: i32, m: i32) QtC.QTime {
        return qtc.QTime_new4(h, m);
    }


    /// New5 constructs a new QTime object.
    pub fn New5(param1: ?*anyopaque) QtC.QTime {
        return qtc.QTime_new5(@ptrCast(param1));
    }


    /// New6 constructs a new QTime object.
    pub fn New6(h: i32, m: i32, s: i32) QtC.QTime {
        return qtc.QTime_new6(h, m, s);
    }


    /// New7 constructs a new QTime object.
    pub fn New7(h: i32, m: i32, s: i32, ms: i32) QtC.QTime {
        return qtc.QTime_new7(h, m, s, ms);
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTime_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTime_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QTime_IsNull(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTime_IsValid(@ptrCast(self));
    }

    pub fn Hour(self: ?*anyopaque, ) i32 {
        return qtc.QTime_Hour(@ptrCast(self));
    }

    pub fn Minute(self: ?*anyopaque, ) i32 {
        return qtc.QTime_Minute(@ptrCast(self));
    }

    pub fn Second(self: ?*anyopaque, ) i32 {
        return qtc.QTime_Second(@ptrCast(self));
    }

    pub fn Msec(self: ?*anyopaque, ) i32 {
        return qtc.QTime_Msec(@ptrCast(self));
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTime_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtime.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString2(self: ?*anyopaque, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
const _str = qtc.QTime_ToString2(@ptrCast(self), format_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtime.ToString2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString3(self: ?*anyopaque, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTime_ToString3(@ptrCast(self), @ptrCast(format));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtime.ToString3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetHMS(self: ?*anyopaque, h: i32, m: i32, s: i32) bool {
        return qtc.QTime_SetHMS(@ptrCast(self), h, m, s);
    }

    pub fn AddSecs(self: ?*anyopaque, secs: i32) QtC.QTime {
        return qtc.QTime_AddSecs(@ptrCast(self), secs);
    }

    pub fn SecsTo(self: ?*anyopaque, t: QtC.QTime) i32 {
        return qtc.QTime_SecsTo(@ptrCast(self), @ptrCast(t));
    }

    pub fn AddMSecs(self: ?*anyopaque, ms: i32) QtC.QTime {
        return qtc.QTime_AddMSecs(@ptrCast(self), ms);
    }

    pub fn MsecsTo(self: ?*anyopaque, t: QtC.QTime) i32 {
        return qtc.QTime_MsecsTo(@ptrCast(self), @ptrCast(t));
    }

    pub fn FromMSecsSinceStartOfDay(msecs: i32) QtC.QTime {
        return qtc.QTime_FromMSecsSinceStartOfDay(msecs);
    }

    pub fn MsecsSinceStartOfDay(self: ?*anyopaque, ) i32 {
        return qtc.QTime_MsecsSinceStartOfDay(@ptrCast(self));
    }

    pub fn CurrentTime() QtC.QTime {
        return qtc.QTime_CurrentTime();
    }

    pub fn FromString(stringVal: []const u8) QtC.QTime {
        return qtc.QTime_FromString(@ptrCast(stringVal));
    }

    pub fn FromString2(stringVal: []const u8, format: []const u8) QtC.QTime {
        return qtc.QTime_FromString2(@ptrCast(stringVal), @ptrCast(format));
    }

    pub fn FromString3(stringVal: []const u8, format: []const u8) QtC.QTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QTime_FromString3(stringVal_str, @ptrCast(format));
    }

    pub fn FromString4(stringVal: []const u8) QtC.QTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QTime_FromString4(stringVal_str);
    }

    pub fn FromString5(stringVal: []const u8, format: []const u8) QtC.QTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QTime_FromString5(stringVal_str, format_str);
    }

    pub fn IsValid2(h: i32, m: i32, s: i32) bool {
        return qtc.QTime_IsValid2(h, m, s);
    }

    pub fn ToString1(self: ?*anyopaque, f: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTime_ToString1(@ptrCast(self), @intCast(f));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtime.ToString1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetHMS4(self: ?*anyopaque, h: i32, m: i32, s: i32, ms: i32) bool {
        return qtc.QTime_SetHMS4(@ptrCast(self), h, m, s, ms);
    }

    pub fn FromString22(stringVal: []const u8, format: i32) QtC.QTime {
        return qtc.QTime_FromString22(@ptrCast(stringVal), @intCast(format));
    }

    pub fn FromString23(stringVal: []const u8, format: i32) QtC.QTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QTime_FromString23(stringVal_str, @intCast(format));
    }

    pub fn IsValid4(h: i32, m: i32, s: i32, ms: i32) bool {
        return qtc.QTime_IsValid4(h, m, s, ms);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTime_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdatetime.html
pub const qdatetime = struct {

    /// New constructs a new QDateTime object.
    pub fn New() QtC.QDateTime {
        return qtc.QDateTime_new();
    }


    /// New2 constructs a new QDateTime object.
    pub fn New2(date: QtC.QDate, time: QtC.QTime, spec: i32) QtC.QDateTime {
        return qtc.QDateTime_new2(@ptrCast(date), @ptrCast(time), @intCast(spec));
    }


    /// New3 constructs a new QDateTime object.
    pub fn New3(date: QtC.QDate, time: QtC.QTime, timeZone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_new3(@ptrCast(date), @ptrCast(time), @ptrCast(timeZone));
    }


    /// New4 constructs a new QDateTime object.
    pub fn New4(date: QtC.QDate, time: QtC.QTime) QtC.QDateTime {
        return qtc.QDateTime_new4(@ptrCast(date), @ptrCast(time));
    }


    /// New5 constructs a new QDateTime object.
    pub fn New5(other: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_new5(@ptrCast(other));
    }


    /// New6 constructs a new QDateTime object.
    pub fn New6(date: QtC.QDate, time: QtC.QTime, spec: i32, offsetSeconds: i32) QtC.QDateTime {
        return qtc.QDateTime_new6(@ptrCast(date), @ptrCast(time), @intCast(spec), offsetSeconds);
    }


    /// New7 constructs a new QDateTime object.
    pub fn New7(date: QtC.QDate, time: QtC.QTime, timeZone: ?*anyopaque, resolve: i32) QtC.QDateTime {
        return qtc.QDateTime_new7(@ptrCast(date), @ptrCast(time), @ptrCast(timeZone), @intCast(resolve));
    }


    /// New8 constructs a new QDateTime object.
    pub fn New8(date: QtC.QDate, time: QtC.QTime, resolve: i32) QtC.QDateTime {
        return qtc.QDateTime_new8(@ptrCast(date), @ptrCast(time), @intCast(resolve));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDateTime_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDateTime_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QDateTime_IsNull(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QDateTime_IsValid(@ptrCast(self));
    }

    pub fn Date(self: ?*anyopaque, ) QtC.QDate {
        return qtc.QDateTime_Date(@ptrCast(self));
    }

    pub fn Time(self: ?*anyopaque, ) QtC.QTime {
        return qtc.QDateTime_Time(@ptrCast(self));
    }

    pub fn TimeSpec(self: ?*anyopaque, ) i32 {
        return qtc.QDateTime_TimeSpec(@ptrCast(self));
    }

    pub fn OffsetFromUtc(self: ?*anyopaque, ) i32 {
        return qtc.QDateTime_OffsetFromUtc(@ptrCast(self));
    }

    pub fn TimeRepresentation(self: ?*anyopaque, ) QtC.QTimeZone {
        return qtc.QDateTime_TimeRepresentation(@ptrCast(self));
    }

    pub fn TimeZone(self: ?*anyopaque, ) QtC.QTimeZone {
        return qtc.QDateTime_TimeZone(@ptrCast(self));
    }

    pub fn TimeZoneAbbreviation(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTime_TimeZoneAbbreviation(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.TimeZoneAbbreviation: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsDaylightTime(self: ?*anyopaque, ) bool {
        return qtc.QDateTime_IsDaylightTime(@ptrCast(self));
    }

    pub fn ToMSecsSinceEpoch(self: ?*anyopaque, ) i64 {
        return qtc.QDateTime_ToMSecsSinceEpoch(@ptrCast(self));
    }

    pub fn ToSecsSinceEpoch(self: ?*anyopaque, ) i64 {
        return qtc.QDateTime_ToSecsSinceEpoch(@ptrCast(self));
    }

    pub fn SetDate(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QDateTime_SetDate(@ptrCast(self), @ptrCast(date));
    }

    pub fn SetTime(self: ?*anyopaque, time: QtC.QTime) void {
        qtc.QDateTime_SetTime(@ptrCast(self), @ptrCast(time));
    }

    pub fn SetTimeSpec(self: ?*anyopaque, spec: i32) void {
        qtc.QDateTime_SetTimeSpec(@ptrCast(self), @intCast(spec));
    }

    pub fn SetOffsetFromUtc(self: ?*anyopaque, offsetSeconds: i32) void {
        qtc.QDateTime_SetOffsetFromUtc(@ptrCast(self), offsetSeconds);
    }

    pub fn SetTimeZone(self: ?*anyopaque, toZone: ?*anyopaque) void {
        qtc.QDateTime_SetTimeZone(@ptrCast(self), @ptrCast(toZone));
    }

    pub fn SetMSecsSinceEpoch(self: ?*anyopaque, msecs: i64) void {
        qtc.QDateTime_SetMSecsSinceEpoch(@ptrCast(self), msecs);
    }

    pub fn SetSecsSinceEpoch(self: ?*anyopaque, secs: i64) void {
        qtc.QDateTime_SetSecsSinceEpoch(@ptrCast(self), secs);
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTime_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString2(self: ?*anyopaque, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
const _str = qtc.QDateTime_ToString2(@ptrCast(self), format_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString3(self: ?*anyopaque, format: []const u8, cal: QtC.QCalendar, allocator: std.mem.Allocator) []const u8 {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
const _str = qtc.QDateTime_ToString3(@ptrCast(self), format_str, @ptrCast(cal));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString4(self: ?*anyopaque, format: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTime_ToString4(@ptrCast(self), @ptrCast(format));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString4: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString5(self: ?*anyopaque, format: []const u8, cal: QtC.QCalendar, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTime_ToString5(@ptrCast(self), @ptrCast(format), @ptrCast(cal));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString5: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddDays(self: ?*anyopaque, days: i64) QtC.QDateTime {
        return qtc.QDateTime_AddDays(@ptrCast(self), days);
    }

    pub fn AddMonths(self: ?*anyopaque, months: i32) QtC.QDateTime {
        return qtc.QDateTime_AddMonths(@ptrCast(self), months);
    }

    pub fn AddYears(self: ?*anyopaque, years: i32) QtC.QDateTime {
        return qtc.QDateTime_AddYears(@ptrCast(self), years);
    }

    pub fn AddSecs(self: ?*anyopaque, secs: i64) QtC.QDateTime {
        return qtc.QDateTime_AddSecs(@ptrCast(self), secs);
    }

    pub fn AddMSecs(self: ?*anyopaque, msecs: i64) QtC.QDateTime {
        return qtc.QDateTime_AddMSecs(@ptrCast(self), msecs);
    }

    pub fn ToTimeSpec(self: ?*anyopaque, spec: i32) QtC.QDateTime {
        return qtc.QDateTime_ToTimeSpec(@ptrCast(self), @intCast(spec));
    }

    pub fn ToLocalTime(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QDateTime_ToLocalTime(@ptrCast(self));
    }

    pub fn ToUTC(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QDateTime_ToUTC(@ptrCast(self));
    }

    pub fn ToOffsetFromUtc(self: ?*anyopaque, offsetSeconds: i32) QtC.QDateTime {
        return qtc.QDateTime_ToOffsetFromUtc(@ptrCast(self), offsetSeconds);
    }

    pub fn ToTimeZone(self: ?*anyopaque, toZone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_ToTimeZone(@ptrCast(self), @ptrCast(toZone));
    }

    pub fn DaysTo(self: ?*anyopaque, param1: ?*anyopaque) i64 {
        return qtc.QDateTime_DaysTo(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SecsTo(self: ?*anyopaque, param1: ?*anyopaque) i64 {
        return qtc.QDateTime_SecsTo(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MsecsTo(self: ?*anyopaque, param1: ?*anyopaque) i64 {
        return qtc.QDateTime_MsecsTo(@ptrCast(self), @ptrCast(param1));
    }

    pub fn CurrentDateTime(zone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_CurrentDateTime(@ptrCast(zone));
    }

    pub fn CurrentDateTime2() QtC.QDateTime {
        return qtc.QDateTime_CurrentDateTime2();
    }

    pub fn CurrentDateTimeUtc() QtC.QDateTime {
        return qtc.QDateTime_CurrentDateTimeUtc();
    }

    pub fn FromString(stringVal: []const u8) QtC.QDateTime {
        return qtc.QDateTime_FromString(@ptrCast(stringVal));
    }

    pub fn FromString2(stringVal: []const u8) QtC.QDateTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDateTime_FromString2(stringVal_str);
    }

    pub fn FromString3(stringVal: []const u8, format: []const u8, cal: QtC.QCalendar) QtC.QDateTime {
        return qtc.QDateTime_FromString3(@ptrCast(stringVal), @ptrCast(format), @ptrCast(cal));
    }

    pub fn FromString4(stringVal: []const u8, format: []const u8, cal: QtC.QCalendar) QtC.QDateTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDateTime_FromString4(stringVal_str, @ptrCast(format), @ptrCast(cal));
    }

    pub fn FromString5(stringVal: []const u8, format: []const u8, cal: QtC.QCalendar) QtC.QDateTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QDateTime_FromString5(stringVal_str, format_str, @ptrCast(cal));
    }

    pub fn FromString6(stringVal: []const u8, format: []const u8) QtC.QDateTime {
        return qtc.QDateTime_FromString6(@ptrCast(stringVal), @ptrCast(format));
    }

    pub fn FromString7(stringVal: []const u8, format: []const u8, baseYear: i32, cal: QtC.QCalendar) QtC.QDateTime {
        return qtc.QDateTime_FromString7(@ptrCast(stringVal), @ptrCast(format), baseYear, @ptrCast(cal));
    }

    pub fn FromString8(stringVal: []const u8, format: []const u8) QtC.QDateTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDateTime_FromString8(stringVal_str, @ptrCast(format));
    }

    pub fn FromString9(stringVal: []const u8, format: []const u8, baseYear: i32, cal: QtC.QCalendar) QtC.QDateTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDateTime_FromString9(stringVal_str, @ptrCast(format), baseYear, @ptrCast(cal));
    }

    pub fn FromString10(stringVal: []const u8, format: []const u8) QtC.QDateTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QDateTime_FromString10(stringVal_str, format_str);
    }

    pub fn FromString11(stringVal: []const u8, format: []const u8, baseYear: i32, cal: QtC.QCalendar) QtC.QDateTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QDateTime_FromString11(stringVal_str, format_str, baseYear, @ptrCast(cal));
    }

    pub fn FromMSecsSinceEpoch(msecs: i64, spec: i32) QtC.QDateTime {
        return qtc.QDateTime_FromMSecsSinceEpoch(msecs, @intCast(spec));
    }

    pub fn FromSecsSinceEpoch(secs: i64, spec: i32) QtC.QDateTime {
        return qtc.QDateTime_FromSecsSinceEpoch(secs, @intCast(spec));
    }

    pub fn FromMSecsSinceEpoch2(msecs: i64, timeZone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_FromMSecsSinceEpoch2(msecs, @ptrCast(timeZone));
    }

    pub fn FromSecsSinceEpoch2(secs: i64, timeZone: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTime_FromSecsSinceEpoch2(secs, @ptrCast(timeZone));
    }

    pub fn FromMSecsSinceEpoch3(msecs: i64) QtC.QDateTime {
        return qtc.QDateTime_FromMSecsSinceEpoch3(msecs);
    }

    pub fn FromSecsSinceEpoch3(secs: i64) QtC.QDateTime {
        return qtc.QDateTime_FromSecsSinceEpoch3(secs);
    }

    pub fn CurrentMSecsSinceEpoch() i64 {
        return qtc.QDateTime_CurrentMSecsSinceEpoch();
    }

    pub fn CurrentSecsSinceEpoch() i64 {
        return qtc.QDateTime_CurrentSecsSinceEpoch();
    }

    pub fn SetDate2(self: ?*anyopaque, date: QtC.QDate, resolve: i32) void {
        qtc.QDateTime_SetDate2(@ptrCast(self), @ptrCast(date), @intCast(resolve));
    }

    pub fn SetTime2(self: ?*anyopaque, time: QtC.QTime, resolve: i32) void {
        qtc.QDateTime_SetTime2(@ptrCast(self), @ptrCast(time), @intCast(resolve));
    }

    pub fn SetTimeZone2(self: ?*anyopaque, toZone: ?*anyopaque, resolve: i32) void {
        qtc.QDateTime_SetTimeZone2(@ptrCast(self), @ptrCast(toZone), @intCast(resolve));
    }

    pub fn ToString1(self: ?*anyopaque, format: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTime_ToString1(@ptrCast(self), @intCast(format));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetime.ToString1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FromString22(stringVal: []const u8, format: i32) QtC.QDateTime {
        return qtc.QDateTime_FromString22(@ptrCast(stringVal), @intCast(format));
    }

    pub fn FromString23(stringVal: []const u8, format: i32) QtC.QDateTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDateTime_FromString23(stringVal_str, @intCast(format));
    }

    pub fn FromString32(stringVal: []const u8, format: []const u8, baseYear: i32) QtC.QDateTime {
        return qtc.QDateTime_FromString32(@ptrCast(stringVal), @ptrCast(format), baseYear);
    }

    pub fn FromString33(stringVal: []const u8, format: []const u8, baseYear: i32) QtC.QDateTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QDateTime_FromString33(stringVal_str, @ptrCast(format), baseYear);
    }

    pub fn FromString34(stringVal: []const u8, format: []const u8, baseYear: i32) QtC.QDateTime {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
return qtc.QDateTime_FromString34(stringVal_str, format_str, baseYear);
    }

    pub fn FromMSecsSinceEpoch32(msecs: i64, spec: i32, offsetFromUtc: i32) QtC.QDateTime {
        return qtc.QDateTime_FromMSecsSinceEpoch32(msecs, @intCast(spec), offsetFromUtc);
    }

    pub fn FromSecsSinceEpoch32(secs: i64, spec: i32, offsetFromUtc: i32) QtC.QDateTime {
        return qtc.QDateTime_FromSecsSinceEpoch32(secs, @intCast(spec), offsetFromUtc);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDateTime_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/datetime.html#types
pub const enums = struct {
    pub const TransitionResolution = enum {
        pub const Reject: i32 = 0;
        pub const RelativeToBefore: i32 = 1;
        pub const RelativeToAfter: i32 = 2;
        pub const PreferBefore: i32 = 3;
        pub const PreferAfter: i32 = 4;
        pub const PreferStandard: i32 = 5;
        pub const PreferDaylightSaving: i32 = 6;
        pub const LegacyBehavior: i32 = 1;
    };

    pub const YearRange = enum {
        pub const First: i32 = -292275056;
        pub const Last: i32 = 292278994;
    };

};
