// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Http.Internal.DateUtil.h>
#include <Uno.DateTime.h>
#include <Uno.Int.h>
#include <Uno.Time.ZonedDateTime.h>
static uType* TYPES[2];

namespace g{
namespace Experimental{
namespace Http{
namespace Internal{

// ..\..\ProgramData\Uno\Packages\Experimental.Http\0.24.7\Internal\$.uno(7)
// -------------------------------------------------------------------------

// internal static class DateUtil :7
// {
uClassType* DateUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.Http.Internal.DateUtil", options);
    ::TYPES[0] = ::g::Uno::DateTime_typeof();
    ::TYPES[1] = ::g::Uno::Time::ZonedDateTime_typeof();
    return type;
}

// public static int get_TimestampNow() :11
void DateUtil__get_TimestampNow_fn(int* __retval)
{
    *__retval = DateUtil::TimestampNow();
}

// public static int get_TimestampNow() [static] :11
int DateUtil::TimestampNow()
{
    uStackFrame __("Experimental.Http.Internal.DateUtil", "get_TimestampNow()");
    ::g::Uno::Time::ZonedDateTime* d = ::g::Uno::DateTime::Now();
    int mon = ((uPtr(d)->Year() - 2000) * 12) + uPtr(d)->Month();
    int day = (mon * 31) + d->Day();
    int hour = (day * 24) + d->Hour();
    int min = (hour * 60) + d->Minute();
    int sec = (min * 60) + d->Second();
    return sec;
}
// }

}}}} // ::g::Experimental::Http::Internal