const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtimezone.html
pub const qtimezone = struct {

    /// New constructs a new QTimeZone object.
    pub fn New() QtC.QTimeZone {
        return qtc.QTimeZone_new();
    }


    /// New2 constructs a new QTimeZone object.
    pub fn New2(spec: i32) QtC.QTimeZone {
        return qtc.QTimeZone_new2(@intCast(spec));
    }


    /// New3 constructs a new QTimeZone object.
    pub fn New3(offsetSeconds: i32) QtC.QTimeZone {
        return qtc.QTimeZone_new3(offsetSeconds);
    }


    /// New4 constructs a new QTimeZone object.
    pub fn New4(ianaId: []u8) QtC.QTimeZone {
        const ianaId_str = qtc.libqt_string{
    .len = ianaId.len,
    .data = ianaId.ptr,
};
return qtc.QTimeZone_new4(ianaId_str);
    }


    /// New5 constructs a new QTimeZone object.
    pub fn New5(zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8) QtC.QTimeZone {
        const zoneId_str = qtc.libqt_string{
    .len = zoneId.len,
    .data = zoneId.ptr,
};
const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const abbreviation_str = qtc.libqt_string{
    .len = abbreviation.len,
    .data = abbreviation.ptr,
};
return qtc.QTimeZone_new5(zoneId_str, offsetSeconds, name_str, abbreviation_str);
    }


    /// New6 constructs a new QTimeZone object.
    pub fn New6(other: ?*anyopaque) QtC.QTimeZone {
        return qtc.QTimeZone_new6(@ptrCast(other));
    }


    /// New7 constructs a new QTimeZone object.
    pub fn New7(zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8, territory: u16) QtC.QTimeZone {
        const zoneId_str = qtc.libqt_string{
    .len = zoneId.len,
    .data = zoneId.ptr,
};
const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const abbreviation_str = qtc.libqt_string{
    .len = abbreviation.len,
    .data = abbreviation.ptr,
};
return qtc.QTimeZone_new7(zoneId_str, offsetSeconds, name_str, abbreviation_str, @intCast(territory));
    }


    /// New8 constructs a new QTimeZone object.
    pub fn New8(zoneId: []u8, offsetSeconds: i32, name: []const u8, abbreviation: []const u8, territory: u16, comment: []const u8) QtC.QTimeZone {
        const zoneId_str = qtc.libqt_string{
    .len = zoneId.len,
    .data = zoneId.ptr,
};
const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const abbreviation_str = qtc.libqt_string{
    .len = abbreviation.len,
    .data = abbreviation.ptr,
};
const comment_str = qtc.libqt_string{
    .len = comment.len,
    .data = comment.ptr,
};
return qtc.QTimeZone_new8(zoneId_str, offsetSeconds, name_str, abbreviation_str, @intCast(territory), comment_str);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTimeZone_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTimeZone_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QTimeZone_IsValid(@ptrCast(self));
    }

    pub fn FromSecondsAheadOfUtc(offset: i32) QtC.QTimeZone {
        return qtc.QTimeZone_FromSecondsAheadOfUtc(offset);
    }

    pub fn TimeSpec(self: ?*anyopaque, ) i32 {
        return qtc.QTimeZone_TimeSpec(@ptrCast(self));
    }

    pub fn FixedSecondsAheadOfUtc(self: ?*anyopaque, ) i32 {
        return qtc.QTimeZone_FixedSecondsAheadOfUtc(@ptrCast(self));
    }

    pub fn IsUtcOrFixedOffset(spec: i32) bool {
        return qtc.QTimeZone_IsUtcOrFixedOffset(@intCast(spec));
    }

    pub fn IsUtcOrFixedOffset2(self: ?*anyopaque, ) bool {
        return qtc.QTimeZone_IsUtcOrFixedOffset2(@ptrCast(self));
    }

    pub fn AsBackendZone(self: ?*anyopaque, ) QtC.QTimeZone {
        return qtc.QTimeZone_AsBackendZone(@ptrCast(self));
    }

    pub fn HasAlternativeName(self: ?*anyopaque, alias: []const u8) bool {
        return qtc.QTimeZone_HasAlternativeName(@ptrCast(self), @ptrCast(alias));
    }

    pub fn Id(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QTimeZone_Id(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.Id: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Territory(self: ?*anyopaque, ) u16 {
        return qtc.QTimeZone_Territory(@ptrCast(self));
    }

    pub fn Country(self: ?*anyopaque, ) u16 {
        return qtc.QTimeZone_Country(@ptrCast(self));
    }

    pub fn Comment(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_Comment(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.Comment: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DisplayName(self: ?*anyopaque, atDateTime: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName(@ptrCast(self), @ptrCast(atDateTime));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DisplayName2(self: ?*anyopaque, timeType: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName2(@ptrCast(self), @intCast(timeType));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Abbreviation(self: ?*anyopaque, atDateTime: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_Abbreviation(@ptrCast(self), @ptrCast(atDateTime));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.Abbreviation: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OffsetFromUtc(self: ?*anyopaque, atDateTime: ?*anyopaque) i32 {
        return qtc.QTimeZone_OffsetFromUtc(@ptrCast(self), @ptrCast(atDateTime));
    }

    pub fn StandardTimeOffset(self: ?*anyopaque, atDateTime: ?*anyopaque) i32 {
        return qtc.QTimeZone_StandardTimeOffset(@ptrCast(self), @ptrCast(atDateTime));
    }

    pub fn DaylightTimeOffset(self: ?*anyopaque, atDateTime: ?*anyopaque) i32 {
        return qtc.QTimeZone_DaylightTimeOffset(@ptrCast(self), @ptrCast(atDateTime));
    }

    pub fn HasDaylightTime(self: ?*anyopaque, ) bool {
        return qtc.QTimeZone_HasDaylightTime(@ptrCast(self));
    }

    pub fn IsDaylightTime(self: ?*anyopaque, atDateTime: ?*anyopaque) bool {
        return qtc.QTimeZone_IsDaylightTime(@ptrCast(self), @ptrCast(atDateTime));
    }

    pub fn OffsetData(self: ?*anyopaque, forDateTime: ?*anyopaque) QtC.QTimeZone__OffsetData {
        return qtc.QTimeZone_OffsetData(@ptrCast(self), @ptrCast(forDateTime));
    }

    pub fn HasTransitions(self: ?*anyopaque, ) bool {
        return qtc.QTimeZone_HasTransitions(@ptrCast(self));
    }

    pub fn NextTransition(self: ?*anyopaque, afterDateTime: ?*anyopaque) QtC.QTimeZone__OffsetData {
        return qtc.QTimeZone_NextTransition(@ptrCast(self), @ptrCast(afterDateTime));
    }

    pub fn PreviousTransition(self: ?*anyopaque, beforeDateTime: ?*anyopaque) QtC.QTimeZone__OffsetData {
        return qtc.QTimeZone_PreviousTransition(@ptrCast(self), @ptrCast(beforeDateTime));
    }

    pub fn Transitions(self: ?*anyopaque, fromDateTime: ?*anyopaque, toDateTime: ?*anyopaque) []const u8 {
        return qtc.QTimeZone_Transitions(@ptrCast(self), @ptrCast(fromDateTime), @ptrCast(toDateTime));
    }

    pub fn SystemTimeZoneId(, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QTimeZone_SystemTimeZoneId();
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.SystemTimeZoneId: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SystemTimeZone() QtC.QTimeZone {
        return qtc.QTimeZone_SystemTimeZone();
    }

    pub fn Utc() QtC.QTimeZone {
        return qtc.QTimeZone_Utc();
    }

    pub fn IsTimeZoneIdAvailable(ianaId: []u8) bool {
        const ianaId_str = qtc.libqt_string{
    .len = ianaId.len,
    .data = ianaId.ptr,
};
return qtc.QTimeZone_IsTimeZoneIdAvailable(ianaId_str);
    }

    pub fn AvailableTimeZoneIds() []const u8 {
        return qtc.QTimeZone_AvailableTimeZoneIds();
    }

    pub fn AvailableTimeZoneIds2(territory: u16) []const u8 {
        return qtc.QTimeZone_AvailableTimeZoneIds2(@intCast(territory));
    }

    pub fn AvailableTimeZoneIds3(offsetSeconds: i32) []const u8 {
        return qtc.QTimeZone_AvailableTimeZoneIds3(offsetSeconds);
    }

    pub fn IanaIdToWindowsId(ianaId: []u8, allocator: std.mem.Allocator) []u8 {
        const ianaId_str = qtc.libqt_string{
    .len = ianaId.len,
    .data = ianaId.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QTimeZone_IanaIdToWindowsId(ianaId_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.IanaIdToWindowsId: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn WindowsIdToDefaultIanaId(windowsId: []u8, allocator: std.mem.Allocator) []u8 {
        const windowsId_str = qtc.libqt_string{
    .len = windowsId.len,
    .data = windowsId.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QTimeZone_WindowsIdToDefaultIanaId(windowsId_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.WindowsIdToDefaultIanaId: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn WindowsIdToDefaultIanaId2(windowsId: []u8, territory: u16, allocator: std.mem.Allocator) []u8 {
        const windowsId_str = qtc.libqt_string{
    .len = windowsId.len,
    .data = windowsId.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QTimeZone_WindowsIdToDefaultIanaId2(windowsId_str, @intCast(territory));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimezone.WindowsIdToDefaultIanaId2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn WindowsIdToIanaIds(windowsId: []u8) []const u8 {
        const windowsId_str = qtc.libqt_string{
    .len = windowsId.len,
    .data = windowsId.ptr,
};
return qtc.QTimeZone_WindowsIdToIanaIds(windowsId_str);
    }

    pub fn WindowsIdToIanaIds2(windowsId: []u8, territory: u16) []const u8 {
        const windowsId_str = qtc.libqt_string{
    .len = windowsId.len,
    .data = windowsId.ptr,
};
return qtc.QTimeZone_WindowsIdToIanaIds2(windowsId_str, @intCast(territory));
    }

    pub fn DisplayName22(self: ?*anyopaque, atDateTime: ?*anyopaque, nameType: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName22(@ptrCast(self), @ptrCast(atDateTime), @intCast(nameType));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName22: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DisplayName3(self: ?*anyopaque, atDateTime: ?*anyopaque, nameType: i32, locale: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName3(@ptrCast(self), @ptrCast(atDateTime), @intCast(nameType), @ptrCast(locale));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DisplayName23(self: ?*anyopaque, timeType: i32, nameType: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName23(@ptrCast(self), @intCast(timeType), @intCast(nameType));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName23: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DisplayName32(self: ?*anyopaque, timeType: i32, nameType: i32, locale: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeZone_DisplayName32(@ptrCast(self), @intCast(timeType), @intCast(nameType), @ptrCast(locale));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimezone.DisplayName32: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTimeZone_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtimezone-offsetdata.html
pub const qtimezone__offsetdata = struct {

    /// New constructs a new QTimeZone::OffsetData object.
    pub fn New(param1: ?*anyopaque) QtC.QTimeZone__OffsetData {
        return qtc.QTimeZone__OffsetData_new(@ptrCast(param1));
    }


    /// New2 constructs a new QTimeZone::OffsetData object.
    pub fn New2() QtC.QTimeZone__OffsetData {
        return qtc.QTimeZone__OffsetData_new2();
    }


    pub fn Abbreviation(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const abbreviation_str = qtc.QTimeZone__OffsetData_Abbreviation(@ptrCast(self));
defer qtc.libqt_string_free(&abbreviation_str);
const abbreviation_ret = allocator.alloc(u8, abbreviation_str.len) catch @panic("qtimezone::offsetdata.Abbreviation: Memory allocation failed");
@memcpy(abbreviation_ret, abbreviation_str.data[0..abbreviation_str.len]);
return  abbreviation_ret;
    }

    pub fn SetAbbreviation(self: ?*anyopaque, abbreviation: []const u8) void {
        const abbreviation_str = qtc.libqt_string{
    .len = abbreviation.len,
    .data = abbreviation.ptr,
};
qtc.QTimeZone__OffsetData_SetAbbreviation(@ptrCast(self), abbreviation_str);
    }

    pub fn AtUtc(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QTimeZone__OffsetData_AtUtc(@ptrCast(self));
    }

    pub fn SetAtUtc(self: ?*anyopaque, atUtc: QtC.QDateTime) void {
        qtc.QTimeZone__OffsetData_SetAtUtc(@ptrCast(self), @ptrCast(atUtc));
    }

    pub fn OffsetFromUtc(self: ?*anyopaque, ) i32 {
        return qtc.QTimeZone__OffsetData_OffsetFromUtc(@ptrCast(self));
    }

    pub fn SetOffsetFromUtc(self: ?*anyopaque, offsetFromUtc: i32) void {
        qtc.QTimeZone__OffsetData_SetOffsetFromUtc(@ptrCast(self), offsetFromUtc);
    }

    pub fn StandardTimeOffset(self: ?*anyopaque, ) i32 {
        return qtc.QTimeZone__OffsetData_StandardTimeOffset(@ptrCast(self));
    }

    pub fn SetStandardTimeOffset(self: ?*anyopaque, standardTimeOffset: i32) void {
        qtc.QTimeZone__OffsetData_SetStandardTimeOffset(@ptrCast(self), standardTimeOffset);
    }

    pub fn DaylightTimeOffset(self: ?*anyopaque, ) i32 {
        return qtc.QTimeZone__OffsetData_DaylightTimeOffset(@ptrCast(self));
    }

    pub fn SetDaylightTimeOffset(self: ?*anyopaque, daylightTimeOffset: i32) void {
        qtc.QTimeZone__OffsetData_SetDaylightTimeOffset(@ptrCast(self), daylightTimeOffset);
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTimeZone__OffsetData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTimeZone__OffsetData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/timezone.html#types
pub const enums = struct {
    pub const Initialization = enum {
        pub const LocalTime: i32 = 0;
        pub const UTC: i32 = 1;
    };

    pub const TimeType = enum {
        pub const StandardTime: i32 = 0;
        pub const DaylightTime: i32 = 1;
        pub const GenericTime: i32 = 2;
    };

    pub const NameType = enum {
        pub const DefaultName: i32 = 0;
        pub const LongName: i32 = 1;
        pub const ShortName: i32 = 2;
        pub const OffsetName: i32 = 3;
    };

};
