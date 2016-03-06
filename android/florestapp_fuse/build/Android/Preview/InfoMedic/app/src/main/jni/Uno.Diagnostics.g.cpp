// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.AllocateEvent.h>
#include <Uno.Diagnostics.AlwaysProfileAttribute.h>
#include <Uno.Diagnostics.AssertionHandler.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Diagnostics.EnterEvent.h>
#include <Uno.Diagnostics.EventType.h>
#include <Uno.Diagnostics.ExitEvent.h>
#include <Uno.Diagnostics.FreeEvent.h>
#include <Uno.Diagnostics.IdMap-1.h>
#include <Uno.Diagnostics.LogHandler.h>
#include <Uno.Diagnostics.NeverProfileAttribute.h>
#include <Uno.Diagnostics.Profile.h>
#include <Uno.Diagnostics.ProfileData.h>
#include <Uno.Diagnostics.ProfileEvent.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ClockImpl.h>
#include <Uno.Runtime.Implementation.DebugImpl.h>
#include <Uno.String.h>
static uString* STRINGS[5];
static uType* TYPES[13];

namespace g{
namespace Uno{
namespace Diagnostics{

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(5)
// -----------------------------------------------------------------------------

// public sealed class AllocateEvent :5
// {
::g::Uno::Diagnostics::ProfileEvent_type* AllocateEvent_typeof()
{
    static uSStrong< ::g::Uno::Diagnostics::ProfileEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(AllocateEvent);
    options.TypeSize = sizeof(::g::Uno::Diagnostics::ProfileEvent_type);
    type = (::g::Uno::Diagnostics::ProfileEvent_type*)uClassType::New("Uno.Diagnostics.AllocateEvent", options);
    type->SetBase(::g::Uno::Diagnostics::ProfileEvent_typeof());
    type->fp_get_Type = (void(*)(::g::Uno::Diagnostics::ProfileEvent*, int*))AllocateEvent__get_Type_fn;
    type->SetFields(1);
    return type;
}

// public override sealed Uno.Diagnostics.EventType get_Type() :11
void AllocateEvent__get_Type_fn(AllocateEvent* __this, int* __retval)
{
    uStackFrame __("Uno.Diagnostics.AllocateEvent", "get_Type()");
    return *__retval = 2, void();
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(283)
// -------------------------------------------------------------------------------

// public sealed class AlwaysProfileAttribute :283
// {
uType* AlwaysProfileAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(AlwaysProfileAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Diagnostics.AlwaysProfileAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)AlwaysProfileAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)AlwaysProfileAttribute__New1_fn, 0, true, AlwaysProfileAttribute_typeof(), 0));
    return type;
}

// public generated AlwaysProfileAttribute() :283
void AlwaysProfileAttribute__ctor_1_fn(AlwaysProfileAttribute* __this)
{
    __this->ctor_1();
}

// public generated AlwaysProfileAttribute New() :283
void AlwaysProfileAttribute__New1_fn(AlwaysProfileAttribute** __retval)
{
    *__retval = AlwaysProfileAttribute::New1();
}

// public generated AlwaysProfileAttribute() [instance] :283
void AlwaysProfileAttribute::ctor_1()
{
    uStackFrame __("Uno.Diagnostics.AlwaysProfileAttribute", ".ctor()");
    ctor_();
}

// public generated AlwaysProfileAttribute New() [static] :283
AlwaysProfileAttribute* AlwaysProfileAttribute::New1()
{
    AlwaysProfileAttribute* obj1 = (AlwaysProfileAttribute*)uNew(AlwaysProfileAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(64)
// ------------------------------------------------------------------------------

// public delegate void AssertionHandler(bool value, string expression, string filename, int line, object[] operands) :64
uDelegateType* AssertionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Diagnostics.AssertionHandler", 5, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Bool_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::Int_typeof(),
        uObject_typeof()->Array());
    return type;
}

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(29)
// ------------------------------------------------------------------------------

// public static class Clock :29
// {
uClassType* Clock_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Clock", options);
    type->Reflection.SetFunctions(3,
        new uFunction("GetSeconds", NULL, (void*)Clock__GetSeconds_fn, 0, true, ::g::Uno::Double_typeof(), 0),
        new uFunction("GetTicks", NULL, (void*)Clock__GetTicks_fn, 0, true, ::g::Uno::Long_typeof(), 0),
        new uFunction("GetTimezoneOffset", NULL, (void*)Clock__GetTimezoneOffset_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static double GetSeconds() :31
void Clock__GetSeconds_fn(double* __retval)
{
    *__retval = Clock::GetSeconds();
}

// public static long GetTicks() :36
void Clock__GetTicks_fn(int64_t* __retval)
{
    *__retval = Clock::GetTicks();
}

// public static int GetTimezoneOffset(int year, int month, int day) :41
void Clock__GetTimezoneOffset_fn(int* year, int* month, int* day, int* __retval)
{
    *__retval = Clock::GetTimezoneOffset(*year, *month, *day);
}

// public static double GetSeconds() [static] :31
double Clock::GetSeconds()
{
    uStackFrame __("Uno.Diagnostics.Clock", "GetSeconds()");
    return ::g::Uno::Runtime::Implementation::ClockImpl::GetSeconds();
}

// public static long GetTicks() [static] :36
int64_t Clock::GetTicks()
{
    uStackFrame __("Uno.Diagnostics.Clock", "GetTicks()");
    return ::g::Uno::Runtime::Implementation::ClockImpl::GetTicks();
}

// public static int GetTimezoneOffset(int year, int month, int day) [static] :41
int Clock::GetTimezoneOffset(int year, int month, int day)
{
    uStackFrame __("Uno.Diagnostics.Clock", "GetTimezoneOffset(int,int,int)");
    return ::g::Uno::Runtime::Implementation::ClockImpl::GetTimezoneOffset(year, month, day);
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(67)
// ------------------------------------------------------------------------------

// public static class Debug :67
// {
// static Debug() :67
static void Debug__cctor__fn(uType* __type)
{
    Debug::_indentStr_ = ::STRINGS[0/*""*/];
}

uClassType* Debug_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Debug", options);
    type->fp_cctor_ = Debug__cctor__fn;
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("Assertion Failed: '");
    ::STRINGS[2] = uString::Const("' in ");
    ::STRINGS[3] = uString::Const("(");
    ::STRINGS[4] = uString::Const(")");
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = ::g::Uno::Diagnostics::AssertionHandler_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::Diagnostics::LogHandler_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Diagnostics::AssertionHandler_typeof(), (uintptr_t)&::g::Uno::Diagnostics::Debug::_assertionHandler_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Uno::Diagnostics::Debug::_indentStr_, uFieldFlagsStatic,
        ::g::Uno::Diagnostics::LogHandler_typeof(), (uintptr_t)&::g::Uno::Diagnostics::Debug::_logHandler_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("Assert", NULL, (void*)Debug__Assert_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), uObject_typeof()->Array()),
        new uFunction("Log", NULL, (void*)Debug__Log2_fn, 0, true, uVoid_typeof(), 4, uObject_typeof(), ::g::Uno::Diagnostics::DebugMessageType_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Log", NULL, (void*)Debug__Log3_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Log", NULL, (void*)Debug__Log4_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Diagnostics::DebugMessageType_typeof()),
        new uFunction("Log", NULL, (void*)Debug__Log5_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::String_typeof(), ::g::Uno::Diagnostics::DebugMessageType_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetLogHandler", NULL, (void*)Debug__SetLogHandler_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Diagnostics::LogHandler_typeof()));
    return type;
}

// public static void Assert(bool value, string expression, string filename, int line, object[] operands) :79
void Debug__Assert_fn(bool* value, uString* expression, uString* filename, int* line, uArray* operands)
{
    Debug::Assert(*value, expression, filename, *line, operands);
}

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type) :141
void Debug__EmitLog_fn(uString* message, int* type)
{
    Debug::EmitLog(message, *type);
}

// public static void Log(object message, Uno.Diagnostics.DebugMessageType type, string filename, int line) :103
void Debug__Log2_fn(uObject* message, int* type, uString* filename, int* line)
{
    Debug::Log2(message, *type, filename, *line);
}

// public static void Log(string message) :118
void Debug__Log3_fn(uString* message)
{
    Debug::Log3(message);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type) :108
void Debug__Log4_fn(uString* message, int* type)
{
    Debug::Log4(message, *type);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type, string filename, int line) :98
void Debug__Log5_fn(uString* message, int* type, uString* filename, int* line)
{
    Debug::Log5(message, *type, filename, *line);
}

// public static void SetLogHandler(Uno.Diagnostics.LogHandler handler) :93
void Debug__SetLogHandler_fn(uDelegate* handler)
{
    Debug::SetLogHandler(handler);
}

uSStrong<uDelegate*> Debug::_assertionHandler_;
uSStrong<uString*> Debug::_indentStr_;
uSStrong<uDelegate*> Debug::_logHandler_;

// public static void Assert(bool value, string expression, string filename, int line, object[] operands) [static] :79
void Debug::Assert(bool value, uString* expression, uString* filename, int line, uArray* operands)
{
    uStackFrame __("Uno.Diagnostics.Debug", "Assert(bool,string,string,int,object[])");
    Debug_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(Debug::_assertionHandler(), NULL))
        uPtr(Debug::_assertionHandler())->Invoke(5, uCRef(value), expression, filename, uCRef<int>(line), operands);

    if (!value)
        Debug::EmitLog(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[1/*"Assertion F...*/], expression), ::STRINGS[2/*"' in "*/]), filename), ::STRINGS[3/*"("*/]), uBox<int>(::TYPES[7/*int*/], line)), ::STRINGS[4/*")"*/]), 3);
}

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type) [static] :141
void Debug::EmitLog(uString* message, int type)
{
    uStackFrame __("Uno.Diagnostics.Debug", "EmitLog(string,Uno.Diagnostics.DebugMessageType)");
    Debug_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(Debug::_logHandler(), NULL))
        uPtr(Debug::_logHandler())->Invoke(2, (uString*)::g::Uno::String::op_Addition2(Debug::_indentStr(), message), uCRef<int>(type));

    ::g::Uno::Runtime::Implementation::DebugImpl::Log(::g::Uno::String::op_Addition2(Debug::_indentStr(), message), type);
}

// public static void Log(object message, Uno.Diagnostics.DebugMessageType type, string filename, int line) [static] :103
void Debug::Log2(uObject* message, int type, uString* filename, int line)
{
    uStackFrame __("Uno.Diagnostics.Debug", "Log(object,Uno.Diagnostics.DebugMessageType,string,int)");
    Debug_typeof()->Init();
    Debug::EmitLog(::g::Uno::Object::ToString(uPtr((message != NULL) ? message : (uString*)::g::Uno::String::Empty())), type);
}

// public static void Log(string message) [static] :118
void Debug::Log3(uString* message)
{
    uStackFrame __("Uno.Diagnostics.Debug", "Log(string)");
    Debug_typeof()->Init();
    Debug::EmitLog(message, 0);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type) [static] :108
void Debug::Log4(uString* message, int type)
{
    uStackFrame __("Uno.Diagnostics.Debug", "Log(string,Uno.Diagnostics.DebugMessageType)");
    Debug_typeof()->Init();
    Debug::EmitLog(message, type);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type, string filename, int line) [static] :98
void Debug::Log5(uString* message, int type, uString* filename, int line)
{
    uStackFrame __("Uno.Diagnostics.Debug", "Log(string,Uno.Diagnostics.DebugMessageType,string,int)");
    Debug_typeof()->Init();
    Debug::EmitLog(message, type);
}

// public static void SetLogHandler(Uno.Diagnostics.LogHandler handler) [static] :93
void Debug::SetLogHandler(uDelegate* handler)
{
    uStackFrame __("Uno.Diagnostics.Debug", "SetLogHandler(Uno.Diagnostics.LogHandler)");
    Debug_typeof()->Init();
    Debug::_logHandler() = handler;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(55)
// ------------------------------------------------------------------------------

// public enum DebugMessageType :55
uEnumType* DebugMessageType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Diagnostics.DebugMessageType", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Undefined", 0LL,
        "Debug", 1LL,
        "Information", 2LL,
        "Error", 3LL,
        "Warning", 4LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(179)
// -------------------------------------------------------------------------------

// public sealed class EnterEvent :179
// {
::g::Uno::Diagnostics::ProfileEvent_type* EnterEvent_typeof()
{
    static uSStrong< ::g::Uno::Diagnostics::ProfileEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EnterEvent);
    options.TypeSize = sizeof(::g::Uno::Diagnostics::ProfileEvent_type);
    type = (::g::Uno::Diagnostics::ProfileEvent_type*)uClassType::New("Uno.Diagnostics.EnterEvent", options);
    type->SetBase(::g::Uno::Diagnostics::ProfileEvent_typeof());
    type->fp_get_Type = (void(*)(::g::Uno::Diagnostics::ProfileEvent*, int*))EnterEvent__get_Type_fn;
    type->SetFields(1);
    return type;
}

// public override sealed Uno.Diagnostics.EventType get_Type() :182
void EnterEvent__get_Type_fn(EnterEvent* __this, int* __retval)
{
    uStackFrame __("Uno.Diagnostics.EnterEvent", "get_Type()");
    return *__retval = 0, void();
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(196)
// -------------------------------------------------------------------------------

// public enum EventType :196
uEnumType* EventType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Diagnostics.EventType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Enter", 0LL,
        "Exit", 1LL,
        "Allocate", 2LL,
        "Free", 3LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(207)
// -------------------------------------------------------------------------------

// public sealed class ExitEvent :207
// {
::g::Uno::Diagnostics::ProfileEvent_type* ExitEvent_typeof()
{
    static uSStrong< ::g::Uno::Diagnostics::ProfileEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ExitEvent);
    options.TypeSize = sizeof(::g::Uno::Diagnostics::ProfileEvent_type);
    type = (::g::Uno::Diagnostics::ProfileEvent_type*)uClassType::New("Uno.Diagnostics.ExitEvent", options);
    type->SetBase(::g::Uno::Diagnostics::ProfileEvent_typeof());
    type->fp_ctor_ = (void*)ExitEvent__New1_fn;
    type->fp_get_Type = (void(*)(::g::Uno::Diagnostics::ProfileEvent*, int*))ExitEvent__get_Type_fn;
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ExitEvent__New1_fn, 0, true, ExitEvent_typeof(), 0));
    return type;
}

// public generated ExitEvent() :207
void ExitEvent__ctor_1_fn(ExitEvent* __this)
{
    __this->ctor_1();
}

// public generated ExitEvent New() :207
void ExitEvent__New1_fn(ExitEvent** __retval)
{
    *__retval = ExitEvent::New1();
}

// public override sealed Uno.Diagnostics.EventType get_Type() :209
void ExitEvent__get_Type_fn(ExitEvent* __this, int* __retval)
{
    uStackFrame __("Uno.Diagnostics.ExitEvent", "get_Type()");
    return *__retval = 1, void();
}

// public generated ExitEvent() [instance] :207
void ExitEvent::ctor_1()
{
    uStackFrame __("Uno.Diagnostics.ExitEvent", ".ctor()");
    ctor_();
}

// public generated ExitEvent New() [static] :207
ExitEvent* ExitEvent::New1()
{
    ExitEvent* obj1 = (ExitEvent*)uNew(ExitEvent_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(218)
// -------------------------------------------------------------------------------

// public sealed class FreeEvent :218
// {
::g::Uno::Diagnostics::ProfileEvent_type* FreeEvent_typeof()
{
    static uSStrong< ::g::Uno::Diagnostics::ProfileEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FreeEvent);
    options.TypeSize = sizeof(::g::Uno::Diagnostics::ProfileEvent_type);
    type = (::g::Uno::Diagnostics::ProfileEvent_type*)uClassType::New("Uno.Diagnostics.FreeEvent", options);
    type->SetBase(::g::Uno::Diagnostics::ProfileEvent_typeof());
    type->fp_get_Type = (void(*)(::g::Uno::Diagnostics::ProfileEvent*, int*))FreeEvent__get_Type_fn;
    type->SetFields(1);
    return type;
}

// public override sealed Uno.Diagnostics.EventType get_Type() :223
void FreeEvent__get_Type_fn(FreeEvent* __this, int* __retval)
{
    uStackFrame __("Uno.Diagnostics.FreeEvent", "get_Type()");
    return *__retval = 3, void();
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(241)
// -------------------------------------------------------------------------------

// public sealed class IdMap<T> :241
// {
uType* IdMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(IdMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Diagnostics.IdMap`1", options);
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Collections::List_typeof();
    type->SetPrecalc(
        ::TYPES[6/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), ::TYPES[7/*int*/]),
        ::TYPES[8/*Uno.Collections.List`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Diagnostics::IdMap, _intToObject), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof()), offsetof(::g::Uno::Diagnostics::IdMap, _objectToInt), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Diagnostics::IdMap, _twoWay), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)IdMap__New1_fn, 0, true, type, 1, ::g::Uno::Bool_typeof()));
    return type;
}

// public IdMap(bool twoWay) :248
void IdMap__ctor__fn(IdMap* __this, bool* twoWay)
{
    __this->ctor_(*twoWay);
}

// public IdMap New(bool twoWay) :248
void IdMap__New1_fn(uType* __type, bool* twoWay, IdMap** __retval)
{
    *__retval = IdMap::New1(__type, *twoWay);
}

// public IdMap(bool twoWay) [instance] :248
void IdMap::ctor_(bool twoWay)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, int>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Uno.Diagnostics.IdMap`1", ".ctor(bool)");
    _objectToInt = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
    _intToObject = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[2]));
    _twoWay = twoWay;
}

// public IdMap New(bool twoWay) [static] :248
IdMap* IdMap::New1(uType* __type, bool twoWay)
{
    IdMap* obj1 = (IdMap*)uNew(__type);
    obj1->ctor_(twoWay);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(65)
// ------------------------------------------------------------------------------

// public delegate void LogHandler(string message, Uno.Diagnostics.DebugMessageType type) :65
uDelegateType* LogHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Diagnostics.LogHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::Diagnostics::DebugMessageType_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(284)
// -------------------------------------------------------------------------------

// public sealed class NeverProfileAttribute :284
// {
uType* NeverProfileAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(NeverProfileAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Diagnostics.NeverProfileAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)NeverProfileAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NeverProfileAttribute__New1_fn, 0, true, NeverProfileAttribute_typeof(), 0));
    return type;
}

// public generated NeverProfileAttribute() :284
void NeverProfileAttribute__ctor_1_fn(NeverProfileAttribute* __this)
{
    __this->ctor_1();
}

// public generated NeverProfileAttribute New() :284
void NeverProfileAttribute__New1_fn(NeverProfileAttribute** __retval)
{
    *__retval = NeverProfileAttribute::New1();
}

// public generated NeverProfileAttribute() [instance] :284
void NeverProfileAttribute::ctor_1()
{
    uStackFrame __("Uno.Diagnostics.NeverProfileAttribute", ".ctor()");
    ctor_();
}

// public generated NeverProfileAttribute New() [static] :284
NeverProfileAttribute* NeverProfileAttribute::New1()
{
    NeverProfileAttribute* obj1 = (NeverProfileAttribute*)uNew(NeverProfileAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(286)
// -------------------------------------------------------------------------------

// public static class Profile :286
// {
uClassType* Profile_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Profile", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Uno::Diagnostics::Profile::StartTimeStamp_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("StartTimeStamp", 0));
    return type;
}

double Profile::StartTimeStamp_;
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(376)
// -------------------------------------------------------------------------------

// public sealed class ProfileData :376
// {
uType* ProfileData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ProfileData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Diagnostics.ProfileData", options);
    type->fp_ctor_ = (void*)ProfileData__New1_fn;
    ::TYPES[9] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[10] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Diagnostics::ProfileEvent_typeof());
    ::TYPES[11] = ::g::Uno::Diagnostics::IdMap_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Uno::Diagnostics::ProfileData, FunctionIds), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Diagnostics::ProfileEvent_typeof()), offsetof(::g::Uno::Diagnostics::ProfileData, ProfileEvents), 0,
        ::g::Uno::Diagnostics::IdMap_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Uno::Diagnostics::ProfileData, TypeMap), 0);
    type->Reflection.SetFields(3,
        new uField("FunctionIds", 0),
        new uField("ProfileEvents", 1),
        new uField("TypeMap", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ProfileData__New1_fn, 0, true, ProfileData_typeof(), 0));
    return type;
}

// public generated ProfileData() :376
void ProfileData__ctor__fn(ProfileData* __this)
{
    __this->ctor_();
}

// public generated ProfileData New() :376
void ProfileData__New1_fn(ProfileData** __retval)
{
    *__retval = ProfileData::New1();
}

// public generated ProfileData() [instance] :376
void ProfileData::ctor_()
{
    uStackFrame __("Uno.Diagnostics.ProfileData", ".ctor()");
    FunctionIds = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[9/*Uno.Collections.List<string>*/]));
    ProfileEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[10/*Uno.Collections.List<Uno.Diagnostics.ProfileEvent>*/]));
    TypeMap = ((::g::Uno::Diagnostics::IdMap*)::g::Uno::Diagnostics::IdMap::New1(::TYPES[11/*Uno.Diagnostics.IdMap<string>*/], true));
}

// public generated ProfileData New() [static] :376
ProfileData* ProfileData::New1()
{
    ProfileData* obj1 = (ProfileData*)uNew(ProfileData_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Diagnostics\$.uno(389)
// -------------------------------------------------------------------------------

// public abstract class ProfileEvent :389
// {
ProfileEvent_type* ProfileEvent_typeof()
{
    static uSStrong<ProfileEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ProfileEvent);
    options.TypeSize = sizeof(ProfileEvent_type);
    type = (ProfileEvent_type*)uClassType::New("Uno.Diagnostics.ProfileEvent", options);
    ::TYPES[12] = ::g::Uno::Diagnostics::Profile_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::Diagnostics::ProfileEvent, TimeStamp), 0);
    type->Reflection.SetFields(1,
        new uField("TimeStamp", 0));
    type->Reflection.SetFunctions(1,
        new uFunction("get_Type", NULL, NULL, offsetof(ProfileEvent_type, fp_get_Type), false, ::g::Uno::Diagnostics::EventType_typeof(), 0));
    return type;
}

// protected ProfileEvent() :394
void ProfileEvent__ctor__fn(ProfileEvent* __this)
{
    __this->ctor_();
}

// protected ProfileEvent() [instance] :394
void ProfileEvent::ctor_()
{
    uStackFrame __("Uno.Diagnostics.ProfileEvent", ".ctor()");
    TimeStamp = (::g::Uno::Diagnostics::Clock::GetSeconds() - ::g::Uno::Diagnostics::Profile::StartTimeStamp());
}
// }

}}} // ::g::Uno::Diagnostics
