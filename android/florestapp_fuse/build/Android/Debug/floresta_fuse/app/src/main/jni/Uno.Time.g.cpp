// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Time.Calendars.Era.h>
#include <Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <Uno.Time.Calendars.TimeOfDayCalculator.h>
#include <Uno.Time.Calendars.WeekYearCalculator.h>
#include <Uno.Time.Calendars.YearMonthDayCalculator.h>
#include <Uno.Time.CalendarSystem.h>
#include <Uno.Time.Converter.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.DeviceTimeZone.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.FixedDateTimeZone.h>
#include <Uno.Time.HashCodeHelper.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.Offset.h>
#include <Uno.Time.Preconditions.h>
#include <Uno.Time.Text.LocalDateTimePattern.h>
#include <Uno.Time.Text.OffsetPattern.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.Type.h>
static uString* STRINGS[9];
static uType* TYPES[20];

namespace g{
namespace Uno{
namespace Time{

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/$.uno(8)
// -----------------------------------------------------------------------------------------

// public sealed class CalendarSystem :8
// {
uType* CalendarSystem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(CalendarSystem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.CalendarSystem", options);
    type->fp_ToString = (void(*)(uObject*, uString**))CalendarSystem__ToString_fn;
    ::STRINGS[0] = uString::Const("ISO");
    ::TYPES[0] = ::g::Uno::Time::Calendars::YearMonthDayCalculator_typeof();
    type->SetFields(0,
        ::g::Uno::Time::Calendars::Era_typeof()->Array(), offsetof(::g::Uno::Time::CalendarSystem, _eras), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _id), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _maxTicks), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _maxYear), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _minTicks), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _minYear), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _name), 0,
        ::g::Uno::Time::Calendars::WeekYearCalculator_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _weekYearCalculator), 0,
        ::g::Uno::Time::Calendars::YearMonthDayCalculator_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _yearMonthDayCalculator), 0,
        CalendarSystem_typeof(), (uintptr_t)&::g::Uno::Time::CalendarSystem::_gregorianCalendarSystem_, uFieldFlagsStatic);
    return type;
}

// private CalendarSystem(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) :41
void CalendarSystem__ctor__fn(CalendarSystem* __this, uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int* minDaysInFirstWeek)
{
    __this->ctor_(id, name, yearMonthDayCalculator, *minDaysInFirstWeek);
}

// internal int GetDayOfMonth(Uno.Time.Instant instant) :210
void CalendarSystem__GetDayOfMonth_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetDayOfMonth(*instant);
}

// internal int GetHourOfDay(Uno.Time.Instant instant) :190
void CalendarSystem__GetHourOfDay_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetHourOfDay(*instant);
}

// internal int GetMinuteOfHour(Uno.Time.Instant instant) :180
void CalendarSystem__GetMinuteOfHour_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetMinuteOfHour(*instant);
}

// internal int GetMonthOfYear(Uno.Time.Instant instant) :230
void CalendarSystem__GetMonthOfYear_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetMonthOfYear(*instant);
}

// internal int GetSecondOfMinute(Uno.Time.Instant instant) :170
void CalendarSystem__GetSecondOfMinute_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetSecondOfMinute(*instant);
}

// internal int GetYear(Uno.Time.Instant instant) :235
void CalendarSystem__GetYear_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetYear(*instant);
}

// public static Uno.Time.CalendarSystem get_Iso() :16
void CalendarSystem__get_Iso_fn(CalendarSystem** __retval)
{
    *__retval = CalendarSystem::Iso();
}

// private CalendarSystem New(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) :41
void CalendarSystem__New1_fn(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int* minDaysInFirstWeek, CalendarSystem** __retval)
{
    *__retval = CalendarSystem::New1(id, name, yearMonthDayCalculator, *minDaysInFirstWeek);
}

// public override sealed string ToString() :101
void CalendarSystem__ToString_fn(CalendarSystem* __this, uString** __retval)
{
    return *__retval = __this->_id, void();
}

uSStrong<CalendarSystem*> CalendarSystem::_gregorianCalendarSystem_;

// private CalendarSystem(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) [instance] :41
void CalendarSystem::ctor_(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    _id = id;
    _name = name;
    _yearMonthDayCalculator = yearMonthDayCalculator;
    _weekYearCalculator = ::g::Uno::Time::Calendars::WeekYearCalculator::New1(yearMonthDayCalculator, minDaysInFirstWeek);
    _eras = uPtr(_yearMonthDayCalculator)->Eras();
    _minYear = uPtr(yearMonthDayCalculator)->MinYear();
    _maxYear = yearMonthDayCalculator->MaxYear();
    _minTicks = yearMonthDayCalculator->GetStartOfYearInTicks(_minYear);
    _maxTicks = (yearMonthDayCalculator->GetStartOfYearInTicks(_maxYear + 1) - 1LL);
}

// internal int GetDayOfMonth(Uno.Time.Instant instant) [instance] :210
int CalendarSystem::GetDayOfMonth(::g::Uno::Time::Instant instant)
{
    return uPtr(_yearMonthDayCalculator)->GetDayOfMonth(instant);
}

// internal int GetHourOfDay(Uno.Time.Instant instant) [instance] :190
int CalendarSystem::GetHourOfDay(::g::Uno::Time::Instant instant)
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetHourOfDay(instant);
}

// internal int GetMinuteOfHour(Uno.Time.Instant instant) [instance] :180
int CalendarSystem::GetMinuteOfHour(::g::Uno::Time::Instant instant)
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetMinuteOfHour(instant);
}

// internal int GetMonthOfYear(Uno.Time.Instant instant) [instance] :230
int CalendarSystem::GetMonthOfYear(::g::Uno::Time::Instant instant)
{
    return uPtr(_yearMonthDayCalculator)->GetMonthOfYear(instant);
}

// internal int GetSecondOfMinute(Uno.Time.Instant instant) [instance] :170
int CalendarSystem::GetSecondOfMinute(::g::Uno::Time::Instant instant)
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetSecondOfMinute(instant);
}

// internal int GetYear(Uno.Time.Instant instant) [instance] :235
int CalendarSystem::GetYear(::g::Uno::Time::Instant instant)
{
    return uPtr(_yearMonthDayCalculator)->GetYear(instant);
}

// private CalendarSystem New(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) [static] :41
CalendarSystem* CalendarSystem::New1(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    CalendarSystem* obj2 = (CalendarSystem*)uNew(CalendarSystem_typeof());
    obj2->ctor_(id, name, yearMonthDayCalculator, minDaysInFirstWeek);
    return obj2;
}

// public static Uno.Time.CalendarSystem get_Iso() [static] :16
CalendarSystem* CalendarSystem::Iso()
{
    if (CalendarSystem::_gregorianCalendarSystem() == NULL)
        CalendarSystem::_gregorianCalendarSystem() = CalendarSystem::New1(::STRINGS[0/*"ISO"*/], ::STRINGS[0/*"ISO"*/], ::g::Uno::Time::Calendars::GregorianYearMonthDayCalculator::New1(), 4);

    return CalendarSystem::_gregorianCalendarSystem();
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/Utilities/$.uno(53)
// ----------------------------------------------------------------------------------------------------

// internal static class Converter :53
// {
uClassType* Converter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.Converter", options);
    ::TYPES[1] = ::g::Uno::Int_typeof();
    return type;
}

// internal static int TicksToDays(long ticks) :55
void Converter__TicksToDays_fn(int64_t* ticks, int* __retval)
{
    *__retval = Converter::TicksToDays(*ticks);
}

// internal static int TicksToDays(long ticks) [static] :55
int Converter::TicksToDays(int64_t ticks)
{
    if (ticks >= 0LL)
        return (int)((ticks >> 14) / 52734375LL);
    else
        return (int)((ticks - 863999999999LL) / 864000000000LL);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/$.uno(308)
// -------------------------------------------------------------------------------------------

// public abstract class DateTimeZone :308
// {
// static DateTimeZone() :308
static void DateTimeZone__cctor__fn(uType* __type)
{
    DateTimeZone::UtcZone_ = ::g::Uno::Time::FixedDateTimeZone::New2(::g::Uno::Time::Offset::Zero());
}

DateTimeZone_type* DateTimeZone_typeof()
{
    static uSStrong<DateTimeZone_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(DateTimeZone);
    options.TypeSize = sizeof(DateTimeZone_type);
    type = (DateTimeZone_type*)uClassType::New("Uno.Time.DateTimeZone", options);
    type->fp_cctor_ = DateTimeZone__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))DateTimeZone__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))DateTimeZone__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))DateTimeZone__ToString_fn;
    ::STRINGS[1] = uString::Const("UTC");
    ::TYPES[2] = ::g::Uno::Time::Offset_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Time::DateTimeZone, id), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Time::DateTimeZone, isFixed), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::Time::DateTimeZone, maxOffsetTicks), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::Time::DateTimeZone, minOffsetTicks), 0,
        DateTimeZone_typeof(), (uintptr_t)&::g::Uno::Time::DateTimeZone::UtcZone_, uFieldFlagsStatic);
    return type;
}

// protected DateTimeZone(string id, bool isFixed, Uno.Time.Offset minOffset, Uno.Time.Offset maxOffset) :318
void DateTimeZone__ctor__fn(DateTimeZone* __this, uString* id1, bool* isFixed1, ::g::Uno::Time::Offset* minOffset, ::g::Uno::Time::Offset* maxOffset)
{
    __this->ctor_(id1, *isFixed1, *minOffset, *maxOffset);
}

// public override sealed bool Equals(object obj) :353
void DateTimeZone__Equals_fn(DateTimeZone* __this, uObject* obj, bool* __retval)
{
    return *__retval = __this->Equals2(uAs<DateTimeZone*>(obj, DateTimeZone_typeof())), void();
}

// public bool Equals(Uno.Time.DateTimeZone obj) :358
void DateTimeZone__Equals2_fn(DateTimeZone* __this, DateTimeZone* obj, bool* __retval)
{
    *__retval = __this->Equals2(obj);
}

// public override int GetHashCode() :367
void DateTimeZone__GetHashCode_fn(DateTimeZone* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// public string get_Id() :330
void DateTimeZone__get_Id_fn(DateTimeZone* __this, uString** __retval)
{
    *__retval = __this->Id();
}

// public override string ToString() :348
void DateTimeZone__ToString_fn(DateTimeZone* __this, uString** __retval)
{
    return *__retval = __this->Id(), void();
}

// public static Uno.Time.DateTimeZone get_Utc() :328
void DateTimeZone__get_Utc_fn(DateTimeZone** __retval)
{
    *__retval = DateTimeZone::Utc();
}

uSStrong<DateTimeZone*> DateTimeZone::UtcZone_;

// protected DateTimeZone(string id, bool isFixed, Uno.Time.Offset minOffset, Uno.Time.Offset maxOffset) [instance] :318
void DateTimeZone::ctor_(uString* id1, bool isFixed1, ::g::Uno::Time::Offset minOffset, ::g::Uno::Time::Offset maxOffset)
{
    id = id1;
    isFixed = isFixed1;
    minOffsetTicks = minOffset.Ticks();
    maxOffsetTicks = maxOffset.Ticks();
}

// public bool Equals(Uno.Time.DateTimeZone obj) [instance] :358
bool DateTimeZone::Equals2(DateTimeZone* obj)
{
    if (::g::Uno::Object::ReferenceEquals(this, obj))
        return true;

    return (!::g::Uno::Object::ReferenceEquals(obj, NULL) && ::g::Uno::Type::op_Equality(::g::Uno::Object::GetType(uPtr(obj)), ::g::Uno::Object::GetType(this))) && EqualsImpl(obj);
}

// public string get_Id() [instance] :330
uString* DateTimeZone::Id()
{
    return id;
}

// public static Uno.Time.DateTimeZone get_Utc() [static] :328
DateTimeZone* DateTimeZone::Utc()
{
    DateTimeZone_typeof()->Init();
    return DateTimeZone::UtcZone();
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/Timezones/$.uno(7)
// ---------------------------------------------------------------------------------------------------

// public sealed class DeviceTimeZone :7
// {
::g::Uno::Time::DateTimeZone_type* DeviceTimeZone_typeof()
{
    static uSStrong< ::g::Uno::Time::DateTimeZone_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(DeviceTimeZone);
    options.TypeSize = sizeof(::g::Uno::Time::DateTimeZone_type);
    type = (::g::Uno::Time::DateTimeZone_type*)uClassType::New("Uno.Time.DeviceTimeZone", options);
    type->SetBase(::g::Uno::Time::DateTimeZone_typeof());
    type->fp_ctor_ = (void*)DeviceTimeZone__New1_fn;
    type->fp_EqualsImpl = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::DateTimeZone*, bool*))DeviceTimeZone__EqualsImpl_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))DeviceTimeZone__GetHashCode_fn;
    type->fp_GetUtcOffset = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::LocalDateTime*, ::g::Uno::Time::Offset*))DeviceTimeZone__GetUtcOffset_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))DeviceTimeZone__ToString_fn;
    ::STRINGS[1] = uString::Const("UTC");
    ::TYPES[5] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Uno::Time::DateTimeZone_typeof();
    ::TYPES[7] = ::g::Uno::Time::LocalDateTime_typeof();
    type->SetFields(4);
    return type;
}

// public DeviceTimeZone() :9
void DeviceTimeZone__ctor_1_fn(DeviceTimeZone* __this)
{
    __this->ctor_1();
}

// internal DeviceTimeZone(string id) :13
void DeviceTimeZone__ctor_2_fn(DeviceTimeZone* __this, uString* id1)
{
    __this->ctor_2(id1);
}

// protected override sealed bool EqualsImpl(Uno.Time.DateTimeZone other) :31
void DeviceTimeZone__EqualsImpl_fn(DeviceTimeZone* __this, ::g::Uno::Time::DateTimeZone* other, bool* __retval)
{
    return *__retval = uIs(other, DeviceTimeZone_typeof()), void();
}

// public override sealed int GetHashCode() :36
void DeviceTimeZone__GetHashCode_fn(DeviceTimeZone* __this, int* __retval)
{
    int ret3;
    int hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[5/*Uno.Time.HashCodeHelper.Hash<string>*/], uCRef<int>(hash), __this->Id(), &ret3), ret3);
    return *__retval = hash, void();
}

// public override sealed Uno.Time.Offset GetUtcOffset(Uno.Time.LocalDateTime dateTime) :18
void DeviceTimeZone__GetUtcOffset_fn(DeviceTimeZone* __this, ::g::Uno::Time::LocalDateTime* dateTime, ::g::Uno::Time::Offset* __retval)
{
    int offsetMinutes = ::g::Uno::Diagnostics::Clock::GetTimezoneOffset(uPtr(dateTime)->Year(), uPtr(dateTime)->Month(), uPtr(dateTime)->Day());
    return *__retval = ::g::Uno::Time::Offset__FromHoursAndMinutes(offsetMinutes / 60, offsetMinutes % 60), void();
}

// public DeviceTimeZone New() :9
void DeviceTimeZone__New1_fn(DeviceTimeZone** __retval)
{
    *__retval = DeviceTimeZone::New1();
}

// public override sealed string ToString() :26
void DeviceTimeZone__ToString_fn(DeviceTimeZone* __this, uString** __retval)
{
    return *__retval = __this->Id(), void();
}

// public DeviceTimeZone() [instance] :9
void DeviceTimeZone::ctor_1()
{
    ctor_2(::STRINGS[1/*"UTC"*/]);
}

// internal DeviceTimeZone(string id) [instance] :13
void DeviceTimeZone::ctor_2(uString* id1)
{
    ctor_(id1, false, ::g::Uno::Time::Offset__FromHours(-12), ::g::Uno::Time::Offset__FromHours(12));
}

// public DeviceTimeZone New() [static] :9
DeviceTimeZone* DeviceTimeZone::New1()
{
    DeviceTimeZone* obj1 = (DeviceTimeZone*)uNew(DeviceTimeZone_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/$.uno(383)
// -------------------------------------------------------------------------------------------

// public struct Duration :383
// {
// static Duration() :401
static void Duration__cctor__fn(uType* __type)
{
    Duration::Zero_ = Duration__New1(0LL);
    Duration::Epsilon_ = Duration__New1(1LL);
    Duration::OneStandardWeek_ = Duration__New1(6048000000000LL);
    Duration::OneStandardDay_ = Duration__New1(864000000000LL);
    Duration::OneHour_ = Duration__New1(36000000000LL);
    Duration::OneMinute_ = Duration__New1(600000000LL);
    Duration::OneSecond_ = Duration__New1(10000000LL);
    Duration::OneMillisecond_ = Duration__New1(10000LL);
}

uStructType* Duration_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ValueSize = sizeof(Duration);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.Duration", options);
    type->fp_cctor_ = Duration__cctor__fn;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Duration__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Duration__GetHashCode_fn;
    ::TYPES[8] = ::g::Uno::Long_typeof();
    type->SetFields(0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::Time::Duration, ticks), 0,
        Duration_typeof(), (uintptr_t)&::g::Uno::Time::Duration::Zero_, uFieldFlagsStatic,
        Duration_typeof(), (uintptr_t)&::g::Uno::Time::Duration::Epsilon_, uFieldFlagsStatic,
        Duration_typeof(), (uintptr_t)&::g::Uno::Time::Duration::OneStandardWeek_, uFieldFlagsStatic,
        Duration_typeof(), (uintptr_t)&::g::Uno::Time::Duration::OneStandardDay_, uFieldFlagsStatic,
        Duration_typeof(), (uintptr_t)&::g::Uno::Time::Duration::OneHour_, uFieldFlagsStatic,
        Duration_typeof(), (uintptr_t)&::g::Uno::Time::Duration::OneMinute_, uFieldFlagsStatic,
        Duration_typeof(), (uintptr_t)&::g::Uno::Time::Duration::OneSecond_, uFieldFlagsStatic,
        Duration_typeof(), (uintptr_t)&::g::Uno::Time::Duration::OneMillisecond_, uFieldFlagsStatic);
    return type;
}

// internal Duration(long ticks) :413
void Duration__ctor__fn(Duration* __this, int64_t* ticks1)
{
    __this->ctor_(*ticks1);
}

// public override sealed bool Equals(object obj) :527
void Duration__Equals_fn(Duration* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, Duration_typeof()))
        return *__retval = __this->Equals2(uUnbox<Duration>(Duration_typeof(), obj)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.Duration other) :536
void Duration__Equals2_fn(Duration* __this, Duration* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public static Uno.Time.Duration FromHours(long hours) :551
void Duration__FromHours_fn(int64_t* hours, Duration* __retval)
{
    *__retval = Duration__FromHours(*hours);
}

// public static Uno.Time.Duration FromMilliseconds(long milliseconds) :566
void Duration__FromMilliseconds_fn(int64_t* milliseconds, Duration* __retval)
{
    *__retval = Duration__FromMilliseconds(*milliseconds);
}

// public override sealed int GetHashCode() :522
void Duration__GetHashCode_fn(Duration* __this, uType* __type, int* __retval)
{
    return *__retval = ::g::Uno::Long::GetHashCode(__this->Ticks(), ::TYPES[8/*long*/]), void();
}

// internal Duration New(long ticks) :413
void Duration__New1_fn(int64_t* ticks1, Duration* __retval)
{
    *__retval = Duration__New1(*ticks1);
}

// public static operator *(Uno.Time.Duration left, long right) :462
void Duration__op_Multiply1_fn(Duration* left, int64_t* right, Duration* __retval)
{
    *__retval = Duration__op_Multiply1(*left, *right);
}

// public long get_Ticks() :420
void Duration__get_Ticks_fn(Duration* __this, int64_t* __retval)
{
    *__retval = __this->Ticks();
}

Duration Duration::Zero_;
Duration Duration::Epsilon_;
Duration Duration::OneStandardWeek_;
Duration Duration::OneStandardDay_;
Duration Duration::OneHour_;
Duration Duration::OneMinute_;
Duration Duration::OneSecond_;
Duration Duration::OneMillisecond_;

// internal Duration(long ticks) [instance] :413
void Duration::ctor_(int64_t ticks1)
{
    ticks = ticks1;
}

// public bool Equals(Uno.Time.Duration other) [instance] :536
bool Duration::Equals2(Duration other)
{
    return Ticks() == other.Ticks();
}

// public long get_Ticks() [instance] :420
int64_t Duration::Ticks()
{
    return ticks;
}

// public static Uno.Time.Duration FromHours(long hours) [static] :551
Duration Duration__FromHours(int64_t hours)
{
    Duration_typeof()->Init();
    return Duration__op_Multiply1(Duration::OneHour(), hours);
}

// public static Uno.Time.Duration FromMilliseconds(long milliseconds) [static] :566
Duration Duration__FromMilliseconds(int64_t milliseconds)
{
    Duration_typeof()->Init();
    return Duration__op_Multiply1(Duration::OneMillisecond(), milliseconds);
}

// internal Duration New(long ticks) [static] :413
Duration Duration__New1(int64_t ticks1)
{
    Duration obj1;
    obj1.ctor_(ticks1);
    return obj1;
}

// public static operator *(Uno.Time.Duration left, long right) [static] :462
Duration Duration__op_Multiply1(Duration left, int64_t right)
{
    Duration_typeof()->Init();
    return Duration__New1(left.Ticks() * right);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/Timezones/$.uno(50)
// ----------------------------------------------------------------------------------------------------

// internal sealed class FixedDateTimeZone :50
// {
::g::Uno::Time::DateTimeZone_type* FixedDateTimeZone_typeof()
{
    static uSStrong< ::g::Uno::Time::DateTimeZone_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FixedDateTimeZone);
    options.TypeSize = sizeof(::g::Uno::Time::DateTimeZone_type);
    type = (::g::Uno::Time::DateTimeZone_type*)uClassType::New("Uno.Time.FixedDateTimeZone", options);
    type->SetBase(::g::Uno::Time::DateTimeZone_typeof());
    type->fp_EqualsImpl = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::DateTimeZone*, bool*))FixedDateTimeZone__EqualsImpl_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))FixedDateTimeZone__GetHashCode_fn;
    type->fp_GetUtcOffset = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::LocalDateTime*, ::g::Uno::Time::Offset*))FixedDateTimeZone__GetUtcOffset_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))FixedDateTimeZone__ToString_fn;
    ::STRINGS[1] = uString::Const("UTC");
    ::TYPES[6] = ::g::Uno::Time::DateTimeZone_typeof();
    ::TYPES[9] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(1, ::g::Uno::Time::Offset_typeof());
    ::TYPES[5] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    type->SetFields(4,
        ::g::Uno::Time::Offset_typeof(), offsetof(::g::Uno::Time::FixedDateTimeZone, offset), 0);
    return type;
}

// public FixedDateTimeZone(string id, Uno.Time.Offset offset) :58
void FixedDateTimeZone__ctor_1_fn(FixedDateTimeZone* __this, uString* id1, ::g::Uno::Time::Offset* offset1)
{
    __this->ctor_1(id1, *offset1);
}

// public FixedDateTimeZone(Uno.Time.Offset offset) :54
void FixedDateTimeZone__ctor_2_fn(FixedDateTimeZone* __this, ::g::Uno::Time::Offset* offset1)
{
    __this->ctor_2(*offset1);
}

// protected override sealed bool EqualsImpl(Uno.Time.DateTimeZone other) :75
void FixedDateTimeZone__EqualsImpl_fn(FixedDateTimeZone* __this, ::g::Uno::Time::DateTimeZone* other, bool* __retval)
{
    FixedDateTimeZone* otherZone = uCast<FixedDateTimeZone*>(other, FixedDateTimeZone_typeof());
    return *__retval = ::g::Uno::Time::Offset::op_Equality(__this->offset, uPtr(otherZone)->offset) && ::g::Uno::String::op_Equality(__this->Id(), uPtr(other)->Id()), void();
}

// public override sealed int GetHashCode() :81
void FixedDateTimeZone__GetHashCode_fn(FixedDateTimeZone* __this, int* __retval)
{
    int ret3;
    int ret4;
    int hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[9/*Uno.Time.HashCodeHelper.Hash<Uno.Time.Offset>*/], uCRef<int>(hash), uCRef(__this->offset), &ret3), ret3);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[5/*Uno.Time.HashCodeHelper.Hash<string>*/], uCRef<int>(hash), __this->Id(), &ret4), ret4);
    return *__retval = hash, void();
}

// public override sealed Uno.Time.Offset GetUtcOffset(Uno.Time.LocalDateTime dateTime) :65
void FixedDateTimeZone__GetUtcOffset_fn(FixedDateTimeZone* __this, ::g::Uno::Time::LocalDateTime* dateTime, ::g::Uno::Time::Offset* __retval)
{
    return *__retval = __this->offset, void();
}

// public FixedDateTimeZone New(Uno.Time.Offset offset) :54
void FixedDateTimeZone__New2_fn(::g::Uno::Time::Offset* offset1, FixedDateTimeZone** __retval)
{
    *__retval = FixedDateTimeZone::New2(*offset1);
}

// public override sealed string ToString() :70
void FixedDateTimeZone__ToString_fn(FixedDateTimeZone* __this, uString** __retval)
{
    return *__retval = __this->Id(), void();
}

// public FixedDateTimeZone(string id, Uno.Time.Offset offset) [instance] :58
void FixedDateTimeZone::ctor_1(uString* id1, ::g::Uno::Time::Offset offset1)
{
    ctor_(id1, true, offset1, offset1);
    offset = offset1;
}

// public FixedDateTimeZone(Uno.Time.Offset offset) [instance] :54
void FixedDateTimeZone::ctor_2(::g::Uno::Time::Offset offset1)
{
    ctor_1(::STRINGS[1/*"UTC"*/], offset1);
}

// public FixedDateTimeZone New(Uno.Time.Offset offset) [static] :54
FixedDateTimeZone* FixedDateTimeZone::New2(::g::Uno::Time::Offset offset1)
{
    FixedDateTimeZone* obj1 = (FixedDateTimeZone*)uNew(FixedDateTimeZone_typeof());
    obj1->ctor_2(offset1);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/Utilities/$.uno(71)
// ----------------------------------------------------------------------------------------------------

// internal static class HashCodeHelper :71
// {
uClassType* HashCodeHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.HashCodeHelper", options);
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    return type;
}

// internal static int Hash<T>(int code, T value) :82
void HashCodeHelper__Hash_fn(uType* __type, int* code, void* value, int* __retval)
{
    uType* __types[] = {
        __type->U(0),
    };
    int code_ = *code;
    int hash = 0;

    if (!::g::Uno::Object::Equals(uBoxPtr(__types[0], value, U_ALLOCA(__types[0]->ObjectSize)), NULL))
        hash = ::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], value, U_ALLOCA(__types[0]->ObjectSize)));

    return *__retval = HashCodeHelper::MakeHash(code_, hash), void();
}

// internal static int Initialize() :77
void HashCodeHelper__Initialize_fn(int* __retval)
{
    *__retval = HashCodeHelper::Initialize();
}

// private static int MakeHash(int code, int value) :92
void HashCodeHelper__MakeHash_fn(int* code, int* value, int* __retval)
{
    *__retval = HashCodeHelper::MakeHash(*code, *value);
}

// internal static int Initialize() [static] :77
int HashCodeHelper::Initialize()
{
    return 17;
}

// private static int MakeHash(int code, int value) [static] :92
int HashCodeHelper::MakeHash(int code, int value)
{
    return (code * 37) + value;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/$.uno(585)
// -------------------------------------------------------------------------------------------

// public struct Instant :585
// {
uStructType* Instant_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(Instant);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.Instant", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Instant__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Instant__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Instant__ToString_fn;
    ::TYPES[8] = ::g::Uno::Long_typeof();
    ::TYPES[2] = ::g::Uno::Time::Offset_typeof();
    ::TYPES[10] = ::g::Uno::Time::Duration_typeof();
    ::TYPES[11] = ::g::Uno::Time::Text::LocalDateTimePattern_typeof();
    type->SetFields(0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::Time::Instant, _ticks), 0);
    return type;
}

// public Instant(long ticks) :591
void Instant__ctor__fn(Instant* __this, int64_t* ticks)
{
    __this->ctor_(*ticks);
}

// public override sealed bool Equals(object obj) :725
void Instant__Equals_fn(Instant* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, Instant_typeof()))
        return *__retval = __this->Equals2(uUnbox<Instant>(Instant_typeof(), obj)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.Instant other) :720
void Instant__Equals2_fn(Instant* __this, Instant* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// internal static Uno.Time.Instant FromDuration(Uno.Time.Duration duration) :695
void Instant__FromDuration_fn(::g::Uno::Time::Duration* duration, Instant* __retval)
{
    *__retval = Instant__FromDuration(*duration);
}

// public static Uno.Time.Instant FromMillisecondsSinceUnixEpoch(long milliseconds) :690
void Instant__FromMillisecondsSinceUnixEpoch_fn(int64_t* milliseconds, Instant* __retval)
{
    *__retval = Instant__FromMillisecondsSinceUnixEpoch(*milliseconds);
}

// public override sealed int GetHashCode() :710
void Instant__GetHashCode_fn(Instant* __this, uType* __type, int* __retval)
{
    return *__retval = ::g::Uno::Long::GetHashCode(__this->Ticks(), ::TYPES[8/*long*/]), void();
}

// internal Uno.Time.Instant Minus(Uno.Time.Offset offset) :626
void Instant__Minus2_fn(Instant* __this, ::g::Uno::Time::Offset* offset, Instant* __retval)
{
    *__retval = __this->Minus2(*offset);
}

// public Instant New(long ticks) :591
void Instant__New1_fn(int64_t* ticks, Instant* __retval)
{
    *__retval = Instant__New1(*ticks);
}

// public static operator +(Uno.Time.Instant left, Uno.Time.Duration right) :643
void Instant__op_Addition_fn(Instant* left, ::g::Uno::Time::Duration* right, Instant* __retval)
{
    *__retval = Instant__op_Addition(*left, *right);
}

// public static operator ==(Uno.Time.Instant left, Uno.Time.Instant right) :658
void Instant__op_Equality_fn(Instant* left, Instant* right, bool* __retval)
{
    *__retval = Instant::op_Equality(*left, *right);
}

// public static operator >(Uno.Time.Instant left, Uno.Time.Instant right) :678
void Instant__op_GreaterThan_fn(Instant* left, Instant* right, bool* __retval)
{
    *__retval = Instant::op_GreaterThan(*left, *right);
}

// public static operator <(Uno.Time.Instant left, Uno.Time.Instant right) :668
void Instant__op_LessThan_fn(Instant* left, Instant* right, bool* __retval)
{
    *__retval = Instant::op_LessThan(*left, *right);
}

// public static operator -(Uno.Time.Instant left, Uno.Time.Duration right) :653
void Instant__op_Subtraction_fn(Instant* left, ::g::Uno::Time::Duration* right, Instant* __retval)
{
    *__retval = Instant__op_Subtraction(*left, *right);
}

// public Uno.Time.Instant Plus(Uno.Time.Duration duration) :606
void Instant__Plus_fn(Instant* __this, ::g::Uno::Time::Duration* duration, Instant* __retval)
{
    *__retval = __this->Plus(*duration);
}

// internal Uno.Time.Instant Plus(Uno.Time.Offset offset) :611
void Instant__Plus1_fn(Instant* __this, ::g::Uno::Time::Offset* offset, Instant* __retval)
{
    *__retval = __this->Plus1(*offset);
}

// public long get_Ticks() :589
void Instant__get_Ticks_fn(Instant* __this, int64_t* __retval)
{
    *__retval = __this->Ticks();
}

// public override sealed string ToString() :715
void Instant__ToString_fn(Instant* __this, uType* __type, uString** __retval)
{
    return *__retval = uPtr(::g::Uno::Time::Text::LocalDateTimePattern::GeneralIsoPattern())->Format(::g::Uno::Time::LocalDateTime::New9(*__this)), void();
}

// public Instant(long ticks) [instance] :591
void Instant::ctor_(int64_t ticks)
{
    _ticks = ticks;
}

// public bool Equals(Uno.Time.Instant other) [instance] :720
bool Instant::Equals2(Instant other)
{
    return Ticks() == other.Ticks();
}

// internal Uno.Time.Instant Minus(Uno.Time.Offset offset) [instance] :626
Instant Instant::Minus2(::g::Uno::Time::Offset offset)
{
    return Instant__New1(_ticks - offset.Ticks());
}

// public Uno.Time.Instant Plus(Uno.Time.Duration duration) [instance] :606
Instant Instant::Plus(::g::Uno::Time::Duration duration)
{
    return Instant__op_Addition(*this, duration);
}

// internal Uno.Time.Instant Plus(Uno.Time.Offset offset) [instance] :611
Instant Instant::Plus1(::g::Uno::Time::Offset offset)
{
    return Instant__New1(Ticks() + offset.Ticks());
}

// public long get_Ticks() [instance] :589
int64_t Instant::Ticks()
{
    return _ticks;
}

// public static operator ==(Uno.Time.Instant left, Uno.Time.Instant right) [static] :658
bool Instant::op_Equality(Instant left, Instant right)
{
    return left.Equals2(right);
}

// public static operator >(Uno.Time.Instant left, Uno.Time.Instant right) [static] :678
bool Instant::op_GreaterThan(Instant left, Instant right)
{
    return left.Ticks() > right.Ticks();
}

// public static operator <(Uno.Time.Instant left, Uno.Time.Instant right) [static] :668
bool Instant::op_LessThan(Instant left, Instant right)
{
    return left.Ticks() < right.Ticks();
}

// internal static Uno.Time.Instant FromDuration(Uno.Time.Duration duration) [static] :695
Instant Instant__FromDuration(::g::Uno::Time::Duration duration)
{
    return uDefault<Instant>().Plus(duration);
}

// public static Uno.Time.Instant FromMillisecondsSinceUnixEpoch(long milliseconds) [static] :690
Instant Instant__FromMillisecondsSinceUnixEpoch(int64_t milliseconds)
{
    return Instant__FromDuration(::g::Uno::Time::Duration__FromMilliseconds(milliseconds));
}

// public Instant New(long ticks) [static] :591
Instant Instant__New1(int64_t ticks)
{
    Instant obj1;
    obj1.ctor_(ticks);
    return obj1;
}

// public static operator +(Uno.Time.Instant left, Uno.Time.Duration right) [static] :643
Instant Instant__op_Addition(Instant left, ::g::Uno::Time::Duration right)
{
    return Instant__New1(left.Ticks() + right.Ticks());
}

// public static operator -(Uno.Time.Instant left, Uno.Time.Duration right) [static] :653
Instant Instant__op_Subtraction(Instant left, ::g::Uno::Time::Duration right)
{
    return Instant__New1(left.Ticks() - right.Ticks());
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/$.uno(1003)
// --------------------------------------------------------------------------------------------

// public sealed class LocalDateTime :1003
// {
uType* LocalDateTime_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LocalDateTime);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.LocalDateTime", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))LocalDateTime__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))LocalDateTime__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))LocalDateTime__ToString_fn;
    ::STRINGS[2] = uString::Const("calendar");
    ::TYPES[12] = ::g::Uno::Time::CalendarSystem_typeof();
    ::TYPES[13] = ::g::Uno::Time::Preconditions_typeof()->MakeMethod(1, ::g::Uno::Time::CalendarSystem_typeof());
    ::TYPES[3] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(1, ::g::Uno::Time::Instant_typeof());
    ::TYPES[15] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(1, ::g::Uno::Time::CalendarSystem_typeof());
    ::TYPES[2] = ::g::Uno::Time::Offset_typeof();
    ::TYPES[6] = ::g::Uno::Time::DateTimeZone_typeof();
    ::TYPES[11] = ::g::Uno::Time::Text::LocalDateTimePattern_typeof();
    type->SetFields(0,
        ::g::Uno::Time::CalendarSystem_typeof(), offsetof(::g::Uno::Time::LocalDateTime, _calendar), 0,
        ::g::Uno::Time::Instant_typeof(), offsetof(::g::Uno::Time::LocalDateTime, _instant), 0);
    return type;
}

// internal LocalDateTime(Uno.Time.Instant instant) :1008
void LocalDateTime__ctor_8_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant)
{
    __this->ctor_8(*instant);
}

// public LocalDateTime(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar) :1013
void LocalDateTime__ctor_9_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_9(*instant, calendar);
}

// public Uno.Time.CalendarSystem get_Calendar() :1070
void LocalDateTime__get_Calendar_fn(LocalDateTime* __this, ::g::Uno::Time::CalendarSystem** __retval)
{
    *__retval = __this->Calendar();
}

// public int get_Day() :1091
void LocalDateTime__get_Day_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Day();
}

// public override sealed bool Equals(object obj) :1201
void LocalDateTime__Equals_fn(LocalDateTime* __this, uObject* obj, bool* __retval)
{
    if (uIs(obj, LocalDateTime_typeof()))
        return *__retval = __this->Equals2(uCast<LocalDateTime*>(obj, LocalDateTime_typeof())), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.LocalDateTime other) :1196
void LocalDateTime__Equals2_fn(LocalDateTime* __this, LocalDateTime* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :1188
void LocalDateTime__GetHashCode_fn(LocalDateTime* __this, int* __retval)
{
    int ret21;
    int ret22;
    int hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[14/*Uno.Time.HashCodeHelper.Hash<Uno.Time.Instant>*/], uCRef<int>(hash), uCRef(__this->Instant()), &ret21), ret21);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[15/*Uno.Time.HashCodeHelper.Hash<Uno.Time.CalendarSystem>*/], uCRef<int>(hash), __this->Calendar(), &ret22), ret22);
    return *__retval = hash, void();
}

// public int get_Hour() :1097
void LocalDateTime__get_Hour_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Hour();
}

// internal Uno.Time.Instant get_Instant() :1066
void LocalDateTime__get_Instant_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* __retval)
{
    *__retval = __this->Instant();
}

// public Uno.Time.ZonedDateTime InUtc() :1296
void LocalDateTime__InUtc_fn(LocalDateTime* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->InUtc();
}

// public int get_Minute() :1101
void LocalDateTime__get_Minute_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Minute();
}

// public int get_Month() :1085
void LocalDateTime__get_Month_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Month();
}

// internal LocalDateTime New(Uno.Time.Instant instant) :1008
void LocalDateTime__New9_fn(::g::Uno::Time::Instant* instant, LocalDateTime** __retval)
{
    *__retval = LocalDateTime::New9(*instant);
}

// public LocalDateTime New(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar) :1013
void LocalDateTime__New10_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar, LocalDateTime** __retval)
{
    *__retval = LocalDateTime::New10(*instant, calendar);
}

// public static operator ==(Uno.Time.LocalDateTime left, Uno.Time.LocalDateTime right) :1126
void LocalDateTime__op_Equality_fn(LocalDateTime* left, LocalDateTime* right, bool* __retval)
{
    *__retval = LocalDateTime::op_Equality(left, right);
}

// public int get_Second() :1103
void LocalDateTime__get_Second_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Second();
}

// public override sealed string ToString() :1307
void LocalDateTime__ToString_fn(LocalDateTime* __this, uString** __retval)
{
    return *__retval = uPtr(::g::Uno::Time::Text::LocalDateTimePattern::GeneralIsoPattern())->Format(__this), void();
}

// public int get_Year() :1075
void LocalDateTime__get_Year_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Year();
}

// internal LocalDateTime(Uno.Time.Instant instant) [instance] :1008
void LocalDateTime::ctor_8(::g::Uno::Time::Instant instant)
{
    ctor_9(instant, ::g::Uno::Time::CalendarSystem::Iso());
}

// public LocalDateTime(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar) [instance] :1013
void LocalDateTime::ctor_9(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar)
{
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[13/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.CalendarSystem>*/], calendar, ::STRINGS[2/*"calendar"*/]);
    _instant = instant;
    _calendar = calendar;
}

// public Uno.Time.CalendarSystem get_Calendar() [instance] :1070
::g::Uno::Time::CalendarSystem* LocalDateTime::Calendar()
{
    ::g::Uno::Time::CalendarSystem* ind10 = _calendar;
    return (ind10 != NULL) ? ind10 : (::g::Uno::Time::CalendarSystem*)::g::Uno::Time::CalendarSystem::Iso();
}

// public int get_Day() [instance] :1091
int LocalDateTime::Day()
{
    return uPtr(Calendar())->GetDayOfMonth(_instant);
}

// public bool Equals(Uno.Time.LocalDateTime other) [instance] :1196
bool LocalDateTime::Equals2(LocalDateTime* other)
{
    return ::g::Uno::Time::Instant::op_Equality(_instant, uPtr(other)->_instant) && ::g::Uno::Object::Equals(uPtr(Calendar()), uPtr(other)->Calendar());
}

// public int get_Hour() [instance] :1097
int LocalDateTime::Hour()
{
    return uPtr(Calendar())->GetHourOfDay(_instant);
}

// internal Uno.Time.Instant get_Instant() [instance] :1066
::g::Uno::Time::Instant LocalDateTime::Instant()
{
    return _instant;
}

// public Uno.Time.ZonedDateTime InUtc() [instance] :1296
::g::Uno::Time::ZonedDateTime* LocalDateTime::InUtc()
{
    return ::g::Uno::Time::ZonedDateTime::New4(this, ::g::Uno::Time::Offset::Zero(), ::g::Uno::Time::DateTimeZone::Utc());
}

// public int get_Minute() [instance] :1101
int LocalDateTime::Minute()
{
    return uPtr(Calendar())->GetMinuteOfHour(_instant);
}

// public int get_Month() [instance] :1085
int LocalDateTime::Month()
{
    return uPtr(Calendar())->GetMonthOfYear(_instant);
}

// public int get_Second() [instance] :1103
int LocalDateTime::Second()
{
    return uPtr(Calendar())->GetSecondOfMinute(_instant);
}

// public int get_Year() [instance] :1075
int LocalDateTime::Year()
{
    return uPtr(Calendar())->GetYear(_instant);
}

// internal LocalDateTime New(Uno.Time.Instant instant) [static] :1008
LocalDateTime* LocalDateTime::New9(::g::Uno::Time::Instant instant)
{
    LocalDateTime* obj11 = (LocalDateTime*)uNew(LocalDateTime_typeof());
    obj11->ctor_8(instant);
    return obj11;
}

// public LocalDateTime New(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar) [static] :1013
LocalDateTime* LocalDateTime::New10(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar)
{
    LocalDateTime* obj12 = (LocalDateTime*)uNew(LocalDateTime_typeof());
    obj12->ctor_9(instant, calendar);
    return obj12;
}

// public static operator ==(Uno.Time.LocalDateTime left, Uno.Time.LocalDateTime right) [static] :1126
bool LocalDateTime::op_Equality(LocalDateTime* left, LocalDateTime* right)
{
    return uPtr(left)->Equals2(right);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/$.uno(1559)
// --------------------------------------------------------------------------------------------

// public struct Offset :1559
// {
// static Offset() :1567
static void Offset__cctor__fn(uType* __type)
{
    Offset::Zero_ = Offset__FromMilliseconds(0);
    Offset::MinValue_ = Offset__FromMilliseconds(-86399999);
    Offset::MaxValue_ = Offset__FromMilliseconds(86399999);
}

uStructType* Offset_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Offset);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.Offset", options);
    type->fp_cctor_ = Offset__cctor__fn;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Offset__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Offset__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Offset__ToString_fn;
    ::STRINGS[3] = uString::Const("milliseconds");
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[16] = ::g::Uno::Time::Text::OffsetPattern_typeof();
    ::TYPES[8] = ::g::Uno::Long_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Offset, _milliseconds), 0,
        Offset_typeof(), (uintptr_t)&::g::Uno::Time::Offset::Zero_, uFieldFlagsStatic,
        Offset_typeof(), (uintptr_t)&::g::Uno::Time::Offset::MinValue_, uFieldFlagsStatic,
        Offset_typeof(), (uintptr_t)&::g::Uno::Time::Offset::MaxValue_, uFieldFlagsStatic);
    return type;
}

// private Offset(int milliseconds) :1574
void Offset__ctor__fn(Offset* __this, int* milliseconds)
{
    __this->ctor_(*milliseconds);
}

// public override sealed bool Equals(object obj) :1676
void Offset__Equals_fn(Offset* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, Offset_typeof()))
        return *__retval = __this->Equals2(uUnbox<Offset>(Offset_typeof(), obj)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.Offset other) :1685
void Offset__Equals2_fn(Offset* __this, Offset* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public static Uno.Time.Offset FromHours(int hours) :1705
void Offset__FromHours_fn(int* hours, Offset* __retval)
{
    *__retval = Offset__FromHours(*hours);
}

// public static Uno.Time.Offset FromHoursAndMinutes(int hours, int minutes) :1710
void Offset__FromHoursAndMinutes_fn(int* hours, int* minutes, Offset* __retval)
{
    *__retval = Offset__FromHoursAndMinutes(*hours, *minutes);
}

// public static Uno.Time.Offset FromMilliseconds(int milliseconds) :1695
void Offset__FromMilliseconds_fn(int* milliseconds, Offset* __retval)
{
    *__retval = Offset__FromMilliseconds(*milliseconds);
}

// public override sealed int GetHashCode() :1671
void Offset__GetHashCode_fn(Offset* __this, uType* __type, int* __retval)
{
    return *__retval = ::g::Uno::Int::GetHashCode(__this->Milliseconds(), ::TYPES[1/*int*/]), void();
}

// public int get_Milliseconds() :1582
void Offset__get_Milliseconds_fn(Offset* __this, int* __retval)
{
    *__retval = __this->Milliseconds();
}

// private Offset New(int milliseconds) :1574
void Offset__New1_fn(int* milliseconds, Offset* __retval)
{
    *__retval = Offset__New1(*milliseconds);
}

// public static operator ==(Uno.Time.Offset left, Uno.Time.Offset right) :1641
void Offset__op_Equality_fn(Offset* left, Offset* right, bool* __retval)
{
    *__retval = Offset::op_Equality(*left, *right);
}

// public long get_Ticks() :1584
void Offset__get_Ticks_fn(Offset* __this, int64_t* __retval)
{
    *__retval = __this->Ticks();
}

// public override sealed string ToString() :1690
void Offset__ToString_fn(Offset* __this, uType* __type, uString** __retval)
{
    return *__retval = uPtr(::g::Uno::Time::Text::OffsetPattern::GeneralIsoPattern())->Format(*__this), void();
}

Offset Offset::Zero_;
Offset Offset::MinValue_;
Offset Offset::MaxValue_;

// private Offset(int milliseconds) [instance] :1574
void Offset::ctor_(int milliseconds)
{
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[3/*"milliseconds"*/], milliseconds, -86399999, 86399999);
    _milliseconds = milliseconds;
}

// public bool Equals(Uno.Time.Offset other) [instance] :1685
bool Offset::Equals2(Offset other)
{
    return Milliseconds() == other.Milliseconds();
}

// public int get_Milliseconds() [instance] :1582
int Offset::Milliseconds()
{
    return _milliseconds;
}

// public long get_Ticks() [instance] :1584
int64_t Offset::Ticks()
{
    return (int64_t)Milliseconds() * 10000LL;
}

// public static operator ==(Uno.Time.Offset left, Uno.Time.Offset right) [static] :1641
bool Offset::op_Equality(Offset left, Offset right)
{
    Offset_typeof()->Init();
    return ::g::Uno::Int::Equals(left.Milliseconds(), ::TYPES[1/*int*/], uBox<int>(::TYPES[1/*int*/], right.Milliseconds()));
}

// public static Uno.Time.Offset FromHours(int hours) [static] :1705
Offset Offset__FromHours(int hours)
{
    Offset_typeof()->Init();
    return Offset__New1(hours * 3600000);
}

// public static Uno.Time.Offset FromHoursAndMinutes(int hours, int minutes) [static] :1710
Offset Offset__FromHoursAndMinutes(int hours, int minutes)
{
    Offset_typeof()->Init();
    return Offset__New1((hours * 3600000) + (minutes * 60000));
}

// public static Uno.Time.Offset FromMilliseconds(int milliseconds) [static] :1695
Offset Offset__FromMilliseconds(int milliseconds)
{
    Offset_typeof()->Init();
    return Offset__New1(milliseconds);
}

// private Offset New(int milliseconds) [static] :1574
Offset Offset__New1(int milliseconds)
{
    Offset obj1;
    obj1.ctor_(milliseconds);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/Utilities/$.uno(104)
// -----------------------------------------------------------------------------------------------------

// internal static class Preconditions :104
// {
uClassType* Preconditions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.Preconditions", options);
    ::STRINGS[4] = uString::Const("Value should be in range [");
    ::STRINGS[5] = uString::Const("-");
    ::STRINGS[6] = uString::Const("]");
    ::TYPES[3] = uObject_typeof();
    return type;
}

// internal static void CheckArgumentRange(string paramName, int value, int minInclusive, int maxInclusive) :124
void Preconditions__CheckArgumentRange_fn(uString* paramName, int* value, int* minInclusive, int* maxInclusive)
{
    Preconditions::CheckArgumentRange(paramName, *value, *minInclusive, *maxInclusive);
}

// internal static T CheckNotNull<T>(T argument, string paramName) :106
void Preconditions__CheckNotNull_fn(uType* __type, uObject* argument, uString* paramName, uObject** __retval)
{
    *__retval = Preconditions::CheckNotNull(__type, argument, paramName);
}

// internal static void CheckArgumentRange(string paramName, int value, int minInclusive, int maxInclusive) [static] :124
void Preconditions::CheckArgumentRange(uString* paramName, int value, int minInclusive, int maxInclusive)
{
    if ((value < minInclusive) || (value > maxInclusive))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(paramName, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Value shoul...*/], uBox<int>(::TYPES[1/*int*/], minInclusive)), ::STRINGS[5/*"-"*/]), uBox<int>(::TYPES[1/*int*/], maxInclusive)), ::STRINGS[6/*"]"*/])));
}

// internal static T CheckNotNull<T>(T argument, string paramName) [static] :106
uObject* Preconditions::CheckNotNull(uType* __type, uObject* argument, uString* paramName)
{
    if (argument == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(paramName));

    return argument;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Time/$.uno(2191)
// --------------------------------------------------------------------------------------------

// public sealed class ZonedDateTime :2191
// {
uType* ZonedDateTime_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ZonedDateTime);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.ZonedDateTime", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))ZonedDateTime__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))ZonedDateTime__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ZonedDateTime__ToString_fn;
    ::STRINGS[7] = uString::Const("zone");
    ::STRINGS[2] = uString::Const("calendar");
    ::STRINGS[8] = uString::Const("targetZone");
    ::TYPES[12] = ::g::Uno::Time::CalendarSystem_typeof();
    ::TYPES[17] = ::g::Uno::Time::Preconditions_typeof()->MakeMethod(1, ::g::Uno::Time::DateTimeZone_typeof());
    ::TYPES[13] = ::g::Uno::Time::Preconditions_typeof()->MakeMethod(1, ::g::Uno::Time::CalendarSystem_typeof());
    ::TYPES[18] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(1, ::g::Uno::Time::LocalDateTime_typeof());
    ::TYPES[9] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(1, ::g::Uno::Time::Offset_typeof());
    ::TYPES[19] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(1, ::g::Uno::Time::DateTimeZone_typeof());
    ::TYPES[7] = ::g::Uno::Time::LocalDateTime_typeof();
    ::TYPES[2] = ::g::Uno::Time::Offset_typeof();
    ::TYPES[6] = ::g::Uno::Time::DateTimeZone_typeof();
    type->SetFields(0,
        ::g::Uno::Time::LocalDateTime_typeof(), offsetof(::g::Uno::Time::ZonedDateTime, _localDateTime), 0,
        ::g::Uno::Time::Offset_typeof(), offsetof(::g::Uno::Time::ZonedDateTime, _offset), 0,
        ::g::Uno::Time::DateTimeZone_typeof(), offsetof(::g::Uno::Time::ZonedDateTime, _zone), 0);
    return type;
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone) :2204
void ZonedDateTime__ctor__fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone)
{
    __this->ctor_(*instant, zone);
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar) :2208
void ZonedDateTime__ctor_1_fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_1(*instant, zone, calendar);
}

// internal ZonedDateTime(Uno.Time.LocalDateTime localDateTime, Uno.Time.Offset offset, Uno.Time.DateTimeZone zone) :2197
void ZonedDateTime__ctor_3_fn(ZonedDateTime* __this, ::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset* offset, ::g::Uno::Time::DateTimeZone* zone)
{
    __this->ctor_3(localDateTime, *offset, zone);
}

// public int get_Day() :2267
void ZonedDateTime__get_Day_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Day();
}

// public override sealed bool Equals(object obj) :2302
void ZonedDateTime__Equals_fn(ZonedDateTime* __this, uObject* obj, bool* __retval)
{
    if (uIs(obj, ZonedDateTime_typeof()))
        return *__retval = __this->Equals2(uCast<ZonedDateTime*>(obj, ZonedDateTime_typeof())), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.ZonedDateTime other) :2311
void ZonedDateTime__Equals2_fn(ZonedDateTime* __this, ZonedDateTime* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :2293
void ZonedDateTime__GetHashCode_fn(ZonedDateTime* __this, int* __retval)
{
    int ret7;
    int ret8;
    int ret9;
    int hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[18/*Uno.Time.HashCodeHelper.Hash<Uno.Time.LocalDateTime>*/], uCRef<int>(hash), __this->_localDateTime, &ret7), ret7);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[9/*Uno.Time.HashCodeHelper.Hash<Uno.Time.Offset>*/], uCRef<int>(hash), uCRef(__this->_offset), &ret8), ret8);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[19/*Uno.Time.HashCodeHelper.Hash<Uno.Time.DateTimeZone>*/], uCRef<int>(hash), __this->_zone, &ret9), ret9);
    return *__retval = hash, void();
}

// public int get_Hour() :2273
void ZonedDateTime__get_Hour_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Hour();
}

// public Uno.Time.LocalDateTime get_LocalDateTime() :2239
void ZonedDateTime__get_LocalDateTime_fn(ZonedDateTime* __this, ::g::Uno::Time::LocalDateTime** __retval)
{
    *__retval = __this->LocalDateTime();
}

// public Uno.Time.ZonedDateTime Minus(Uno.Time.Duration duration) :2366
void ZonedDateTime__Minus_fn(ZonedDateTime* __this, ::g::Uno::Time::Duration* duration, ZonedDateTime** __retval)
{
    *__retval = __this->Minus(*duration);
}

// public int get_Minute() :2277
void ZonedDateTime__get_Minute_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Minute();
}

// public int get_Month() :2261
void ZonedDateTime__get_Month_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Month();
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone) :2204
void ZonedDateTime__New1_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::New1(*instant, zone);
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar) :2208
void ZonedDateTime__New2_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar, ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::New2(*instant, zone, calendar);
}

// internal ZonedDateTime New(Uno.Time.LocalDateTime localDateTime, Uno.Time.Offset offset, Uno.Time.DateTimeZone zone) :2197
void ZonedDateTime__New4_fn(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset* offset, ::g::Uno::Time::DateTimeZone* zone, ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::New4(localDateTime, *offset, zone);
}

// public static Uno.Time.ZonedDateTime get_Now() :2227
void ZonedDateTime__get_Now_fn(ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::Now();
}

// public Uno.Time.Offset get_Offset() :2235
void ZonedDateTime__get_Offset_fn(ZonedDateTime* __this, ::g::Uno::Time::Offset* __retval)
{
    *__retval = __this->Offset();
}

// public static operator -(Uno.Time.ZonedDateTime zonedDateTime, Uno.Time.Duration duration) :2371
void ZonedDateTime__op_Subtraction_fn(ZonedDateTime* zonedDateTime, ::g::Uno::Time::Duration* duration, ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::op_Subtraction(zonedDateTime, *duration);
}

// public int get_Second() :2279
void ZonedDateTime__get_Second_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Second();
}

// public Uno.Time.Instant ToInstant() :2386
void ZonedDateTime__ToInstant_fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* __retval)
{
    *__retval = __this->ToInstant();
}

// public override sealed string ToString() :2376
void ZonedDateTime__ToString_fn(ZonedDateTime* __this, uString** __retval)
{
    ::g::Uno::Time::Offset ind1;
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(__this->_localDateTime)->ToString(), uPtr(__this->_zone)->ToString()), (ind1 = __this->_offset, (&ind1))->ToString(::TYPES[2/*Uno.Time.Offset*/])), void();
}

// public Uno.Time.ZonedDateTime WithZone(Uno.Time.DateTimeZone targetZone) :2287
void ZonedDateTime__WithZone_fn(ZonedDateTime* __this, ::g::Uno::Time::DateTimeZone* targetZone, ZonedDateTime** __retval)
{
    *__retval = __this->WithZone(targetZone);
}

// public int get_Year() :2253
void ZonedDateTime__get_Year_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Year();
}

// public Uno.Time.DateTimeZone get_Zone() :2237
void ZonedDateTime__get_Zone_fn(ZonedDateTime* __this, ::g::Uno::Time::DateTimeZone** __retval)
{
    *__retval = __this->Zone();
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone) [instance] :2204
void ZonedDateTime::ctor_(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone)
{
    ctor_1(instant, zone, ::g::Uno::Time::CalendarSystem::Iso());
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar) [instance] :2208
void ZonedDateTime::ctor_1(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar)
{
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[17/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.DateTimeZone>*/], zone, ::STRINGS[7/*"zone"*/]);
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[13/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.CalendarSystem>*/], calendar, ::STRINGS[2/*"calendar"*/]);
    _offset = uPtr(zone)->GetUtcOffset(::g::Uno::Time::LocalDateTime::New10(instant, calendar));
    _localDateTime = ::g::Uno::Time::LocalDateTime::New10(instant.Plus1(_offset), calendar);
    _zone = zone;
}

// internal ZonedDateTime(Uno.Time.LocalDateTime localDateTime, Uno.Time.Offset offset, Uno.Time.DateTimeZone zone) [instance] :2197
void ZonedDateTime::ctor_3(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset offset, ::g::Uno::Time::DateTimeZone* zone)
{
    _localDateTime = localDateTime;
    _offset = offset;
    _zone = zone;
}

// public int get_Day() [instance] :2267
int ZonedDateTime::Day()
{
    return uPtr(_localDateTime)->Day();
}

// public bool Equals(Uno.Time.ZonedDateTime other) [instance] :2311
bool ZonedDateTime::Equals2(ZonedDateTime* other)
{
    return (::g::Uno::Time::LocalDateTime::op_Equality(LocalDateTime(), uPtr(other)->LocalDateTime()) && ::g::Uno::Time::Offset::op_Equality(Offset(), uPtr(other)->Offset())) && uPtr(Zone())->Equals2(uPtr(other)->Zone());
}

// public int get_Hour() [instance] :2273
int ZonedDateTime::Hour()
{
    return uPtr(_localDateTime)->Hour();
}

// public Uno.Time.LocalDateTime get_LocalDateTime() [instance] :2239
::g::Uno::Time::LocalDateTime* ZonedDateTime::LocalDateTime()
{
    return _localDateTime;
}

// public Uno.Time.ZonedDateTime Minus(Uno.Time.Duration duration) [instance] :2366
ZonedDateTime* ZonedDateTime::Minus(::g::Uno::Time::Duration duration)
{
    return ZonedDateTime::op_Subtraction(this, duration);
}

// public int get_Minute() [instance] :2277
int ZonedDateTime::Minute()
{
    return uPtr(_localDateTime)->Minute();
}

// public int get_Month() [instance] :2261
int ZonedDateTime::Month()
{
    return uPtr(_localDateTime)->Month();
}

// public Uno.Time.Offset get_Offset() [instance] :2235
::g::Uno::Time::Offset ZonedDateTime::Offset()
{
    return _offset;
}

// public int get_Second() [instance] :2279
int ZonedDateTime::Second()
{
    return uPtr(_localDateTime)->Second();
}

// public Uno.Time.Instant ToInstant() [instance] :2386
::g::Uno::Time::Instant ZonedDateTime::ToInstant()
{
    return uPtr(_localDateTime)->Instant().Minus2(_offset);
}

// public Uno.Time.ZonedDateTime WithZone(Uno.Time.DateTimeZone targetZone) [instance] :2287
ZonedDateTime* ZonedDateTime::WithZone(::g::Uno::Time::DateTimeZone* targetZone)
{
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[17/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.DateTimeZone>*/], targetZone, ::STRINGS[8/*"targetZone"*/]);
    return ZonedDateTime::New2(ToInstant(), targetZone, uPtr(_localDateTime)->Calendar());
}

// public int get_Year() [instance] :2253
int ZonedDateTime::Year()
{
    return uPtr(_localDateTime)->Year();
}

// public Uno.Time.DateTimeZone get_Zone() [instance] :2237
::g::Uno::Time::DateTimeZone* ZonedDateTime::Zone()
{
    ::g::Uno::Time::DateTimeZone* ind2 = _zone;
    return (ind2 != NULL) ? ind2 : (::g::Uno::Time::DateTimeZone*)::g::Uno::Time::DateTimeZone::Utc();
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone) [static] :2204
ZonedDateTime* ZonedDateTime::New1(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone)
{
    ZonedDateTime* obj4 = (ZonedDateTime*)uNew(ZonedDateTime_typeof());
    obj4->ctor_(instant, zone);
    return obj4;
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar) [static] :2208
ZonedDateTime* ZonedDateTime::New2(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar)
{
    ZonedDateTime* obj5 = (ZonedDateTime*)uNew(ZonedDateTime_typeof());
    obj5->ctor_1(instant, zone, calendar);
    return obj5;
}

// internal ZonedDateTime New(Uno.Time.LocalDateTime localDateTime, Uno.Time.Offset offset, Uno.Time.DateTimeZone zone) [static] :2197
ZonedDateTime* ZonedDateTime::New4(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset offset, ::g::Uno::Time::DateTimeZone* zone)
{
    ZonedDateTime* obj3 = (ZonedDateTime*)uNew(ZonedDateTime_typeof());
    obj3->ctor_3(localDateTime, offset, zone);
    return obj3;
}

// public static operator -(Uno.Time.ZonedDateTime zonedDateTime, Uno.Time.Duration duration) [static] :2371
ZonedDateTime* ZonedDateTime::op_Subtraction(ZonedDateTime* zonedDateTime, ::g::Uno::Time::Duration duration)
{
    return ZonedDateTime::New2(::g::Uno::Time::Instant__op_Subtraction(uPtr(zonedDateTime)->ToInstant(), duration), uPtr(zonedDateTime)->Zone(), uPtr(uPtr(zonedDateTime)->LocalDateTime())->Calendar());
}

// public static Uno.Time.ZonedDateTime get_Now() [static] :2227
ZonedDateTime* ZonedDateTime::Now()
{
    int64_t ticks = ::g::Uno::Diagnostics::Clock::GetTicks();
    return ZonedDateTime::New1(::g::Uno::Time::Instant__New1(ticks), ::g::Uno::Time::DeviceTimeZone::New1());
}
// }

}}} // ::g::Uno::Time
