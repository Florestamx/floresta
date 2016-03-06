// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseReactive_bundle.h>
#include <Fuse.Camera.Camera.h>
#include <Fuse.Camera.PictureResult.h>
#include <Fuse.Camera.TakePictureOptions.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.GeoLocation.GeoCoordinates.h>
#include <Fuse.GeoLocation.GeoLocationAuthorizationType.h>
#include <Fuse.GeoLocation.Location.h>
#include <Fuse.GeoLocation.LocationTracker.h>
#include <Fuse.Launcher.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.FuseJS.Base64.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.FuseJS.Camera.h>
#include <Fuse.Reactive.FuseJS.Email.h>
#include <Fuse.Reactive.FuseJS.Environment.h>
#include <Fuse.Reactive.FuseJS.FileReaderImpl.h>
#include <Fuse.Reactive.FuseJS.FunctionClosure.h>
#include <Fuse.Reactive.FuseJS.GeoLocation.h>
#include <Fuse.Reactive.FuseJS.Globals.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.InterApp.h>
#include <Fuse.Reactive.FuseJS.Lifecycle.h>
#include <Fuse.Reactive.FuseJS.Maps.h>
#include <Fuse.Reactive.FuseJS.Phone.h>
#include <Fuse.Reactive.FuseJS.RaiseEvent.h>
#include <Fuse.Reactive.FuseJS.Storage.h>
#include <Fuse.Reactive.FuseJS.TimerManager.h>
#include <Fuse.Reactive.FuseJS.TimerManager.Timer.h>
#include <Fuse.Reactive.FuseJS.TimerModule.CallbackClosure.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.FuseJS.UserEvents.h>
#include <Fuse.Reactive.FuseJS.Vibration.h>
#include <Fuse.Reactive.Marshal.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.IModule.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.Value.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.Storage.ApplicationDir.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.Vibration.Vibration.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-4.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Text.Base64.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[113];
static uType* TYPES[74];

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(753)
// ---------------------------------------------------------------------

// internal sealed class Base64 :753
// {
::g::Fuse::Scripting::NativeModule_type* Base64_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Base64);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Base64", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)Base64__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[0] = uString::Const("encodeAscii");
    ::STRINGS[1] = uString::Const("decodeAscii");
    ::STRINGS[2] = uString::Const("encodeUtf8");
    ::STRINGS[3] = uString::Const("decodeUtf8");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3);
    return type;
}

// public Base64() :755
void Base64__ctor_1_fn(Base64* __this)
{
    __this->ctor_1();
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) :774
void Base64__DecodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeAscii(context, args);
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) :796
void Base64__DecodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeUtf8(context, args);
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) :763
void Base64__EncodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeAscii(context, args);
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) :785
void Base64__EncodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeUtf8(context, args);
}

// public Base64 New() :755
void Base64__New2_fn(Base64** __retval)
{
    *__retval = Base64::New2();
}

// public Base64() [instance] :755
void Base64::ctor_1()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Base64", ".ctor()");
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[0/*"encodeAscii"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"decodeAscii"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"encodeUtf8"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeUtf8_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"decodeUtf8"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeUtf8_fn, this)));
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :774
uObject* Base64::DecodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Base64", "DecodeAscii(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Ascii::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :796
uObject* Base64::DecodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Base64", "DecodeUtf8(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Utf8::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :763
uObject* Base64::EncodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Base64", "EncodeAscii(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Ascii::GetBytes(str));
    }

    return NULL;
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :785
uObject* Base64::EncodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Base64", "EncodeUtf8(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Utf8::GetBytes(str));
    }

    return NULL;
}

// public Base64 New() [static] :755
Base64* Base64::New2()
{
    Base64* obj1 = (Base64*)uNew(Base64_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(8)
// -------------------------------------------------------------------

// public sealed class Builtins :8
// {
// static Builtins() :10
static void Builtins__cctor__fn(uType* __type)
{
    Builtins::Register(::STRINGS[4/*"FuseJS/Envi...*/], (uObject*)::g::Fuse::Reactive::FuseJS::Environment::New2());
    Builtins::Register(::STRINGS[5/*"FuseJS/Timer"*/], (uObject*)::g::Fuse::Reactive::FuseJS::TimerModule::New2());
    Builtins::Register(::STRINGS[6/*"FuseJS/Base64"*/], (uObject*)::g::Fuse::Reactive::FuseJS::Base64::New2());
    Builtins::Register(::STRINGS[7/*"FuseJS/Vibr...*/], ::g::Fuse::Reactive::FuseJS::Vibration::CreateModule());
    Builtins::Register(::STRINGS[8/*"FuseJS/Email"*/], ::g::Fuse::Reactive::FuseJS::Email::CreateModule());
    Builtins::Register(::STRINGS[9/*"FuseJS/Maps"*/], ::g::Fuse::Reactive::FuseJS::Maps::CreateModule());
    Builtins::Register(::STRINGS[10/*"FuseJS/Life...*/], ::g::Fuse::Reactive::FuseJS::Lifecycle::CreateModule());
    Builtins::Register(::STRINGS[11/*"FuseJS/Inte...*/], ::g::Fuse::Reactive::FuseJS::InterApp::CreateModule());
    Builtins::Register(::STRINGS[12/*"FuseJS/Phone"*/], ::g::Fuse::Reactive::FuseJS::Phone::CreateModule());
    Builtins::Register(::STRINGS[13/*"FuseJS/File...*/], ::g::Fuse::Reactive::FuseJS::FileReaderImpl::CreateModule());
    Builtins::Register(::STRINGS[14/*"FuseJS/Subs...*/], (uObject*)::g::Fuse::Scripting::FileModule::New1(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::SubscriberProxy839a85ef())));
    Builtins::Register(::STRINGS[15/*"FuseJS/Obse...*/], (uObject*)::g::Fuse::Scripting::FileModule::New1(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::Observable61f9e91e())));
    Builtins::Register(::STRINGS[16/*"FuseJS/Fetch"*/], (uObject*)::g::Fuse::Scripting::FileModule::New1(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::Fetch61247183())));
    Builtins::Register(::STRINGS[17/*"FuseJS/Fetc...*/], (uObject*)::g::Fuse::Scripting::FileModule::New1(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::FetchJsoneac9198a())));
    Builtins::Register(::STRINGS[18/*"FuseJS/Camera"*/], ::g::Fuse::Reactive::FuseJS::Camera::CreateModule());
    Builtins::Register(::STRINGS[19/*"FuseJS/Stor...*/], ::g::Fuse::Reactive::FuseJS::Storage::CreateModule());
    Builtins::Register(::STRINGS[20/*"FuseJS/Glob...*/], ::g::Fuse::Reactive::FuseJS::Globals::CreateModule());
    Builtins::Register(::STRINGS[21/*"FuseJS/User...*/], ::g::Fuse::Reactive::FuseJS::UserEvents::CreateModule());
    Builtins::Register(::STRINGS[22/*"FuseJS"*/], (uObject*)::g::Fuse::Scripting::FileModule::New1(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::FuseJSb2635b47())));
}

uType* Builtins_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Builtins);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Builtins", options);
    type->fp_cctor_ = Builtins__cctor__fn;
    ::STRINGS[4] = uString::Const("FuseJS/Environment");
    ::STRINGS[5] = uString::Const("FuseJS/Timer");
    ::STRINGS[6] = uString::Const("FuseJS/Base64");
    ::STRINGS[7] = uString::Const("FuseJS/Vibration");
    ::STRINGS[8] = uString::Const("FuseJS/Email");
    ::STRINGS[9] = uString::Const("FuseJS/Maps");
    ::STRINGS[10] = uString::Const("FuseJS/Lifecycle");
    ::STRINGS[11] = uString::Const("FuseJS/InterApp");
    ::STRINGS[12] = uString::Const("FuseJS/Phone");
    ::STRINGS[13] = uString::Const("FuseJS/FileReaderImpl");
    ::STRINGS[14] = uString::Const("FuseJS/SubscriberProxy");
    ::STRINGS[15] = uString::Const("FuseJS/Observable");
    ::STRINGS[16] = uString::Const("FuseJS/Fetch");
    ::STRINGS[17] = uString::Const("FuseJS/FetchJson");
    ::STRINGS[18] = uString::Const("FuseJS/Camera");
    ::STRINGS[19] = uString::Const("FuseJS/Storage");
    ::STRINGS[20] = uString::Const("FuseJS/Globals");
    ::STRINGS[21] = uString::Const("FuseJS/UserEvents");
    ::STRINGS[22] = uString::Const("FuseJS");
    ::STRINGS[23] = uString::Const("es6-promise");
    ::STRINGS[24] = uString::Const("require");
    ::STRINGS[25] = uString::Const("FuseJS/GeoLocation");
    ::STRINGS[26] = uString::Const("browser-Window");
    ::STRINGS[27] = uString::Const("window-Timers");
    ::STRINGS[28] = uString::Const("window-EventTarget");
    ::STRINGS[29] = uString::Const("window-Base64");
    ::STRINGS[30] = uString::Const("window-File");
    ::STRINGS[31] = uString::Const("window-XMLHttpRequest");
    ::STRINGS[32] = uString::Const("window-fetch");
    ::STRINGS[33] = uString::Const("window-localStorage");
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[7] = ::g::FuseReactive_bundle_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Function_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Builtins, Observable), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Builtins, SubscriberProxy), 0);
    return type;
}

// internal Builtins(Fuse.Scripting.Context context) :41
void Builtins__ctor__fn(Builtins* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// internal Builtins New(Fuse.Scripting.Context context) :41
void Builtins__New1_fn(::g::Fuse::Scripting::Context* context, Builtins** __retval)
{
    *__retval = Builtins::New1(context);
}

// private static void Register(string moduleId, Fuse.Scripting.IModule module) :33
void Builtins__Register_fn(uString* moduleId, uObject* module)
{
    Builtins::Register(moduleId, module);
}

// internal Builtins(Fuse.Scripting.Context context) [instance] :41
void Builtins::ctor_(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Builtins", ".ctor(Fuse.Scripting.Context)");
    ::g::Fuse::Reactive::DebugLog::Init(context);
    ::g::Fuse::Reactive::Console::Init(context);
    uPtr(context)->Evaluate1(::STRINGS[23/*"es6-promise"*/], uPtr(::g::FuseReactive_bundle::es6promise5f9ed71d())->ReadAllText());
    uPtr(context->GlobalObject())->Item(::STRINGS[24/*"require"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.Callback*/], (void*)::g::Fuse::Scripting::Context__Require_fn, context));
    SubscriberProxy = uCast< ::g::Fuse::Scripting::Function*>(context->Require1(::STRINGS[14/*"FuseJS/Subs...*/]), ::TYPES[11/*Fuse.Scripting.Function*/]);
    Observable = uCast< ::g::Fuse::Scripting::Function*>(context->Require1(::STRINGS[15/*"FuseJS/Obse...*/]), ::TYPES[11/*Fuse.Scripting.Function*/]);
    ::g::Fuse::Reactive::FuseJS::Http::New1(context);
    Builtins::Register(::STRINGS[25/*"FuseJS/GeoL...*/], (uObject*)::g::Fuse::Reactive::FuseJS::GeoLocation::New2());
    context->Evaluate1(::STRINGS[26/*"browser-Win...*/], uPtr(::g::FuseReactive_bundle::Window8c9a82ee())->ReadAllText());
    context->Evaluate1(::STRINGS[27/*"window-Timers"*/], uPtr(::g::FuseReactive_bundle::WindowTimers4c3bf21e())->ReadAllText());
    context->Evaluate1(::STRINGS[28/*"window-Even...*/], uPtr(::g::FuseReactive_bundle::EventTargetaa45843c())->ReadAllText());
    context->Evaluate1(::STRINGS[29/*"window-Base64"*/], uPtr(::g::FuseReactive_bundle::WindowBase64e1ba0ddd())->ReadAllText());
    context->Evaluate1(::STRINGS[30/*"window-File"*/], uPtr(::g::FuseReactive_bundle::Filecc62900c())->ReadAllText());
    context->Evaluate1(::STRINGS[31/*"window-XMLH...*/], uPtr(::g::FuseReactive_bundle::XMLHttpRequest3556ba4b())->ReadAllText());
    context->Evaluate1(::STRINGS[32/*"window-fetch"*/], uPtr(::g::FuseReactive_bundle::fetchfb7fd0d9())->ReadAllText());
    context->Evaluate1(::STRINGS[33/*"window-loca...*/], uPtr(::g::FuseReactive_bundle::localStorage1151a9ff())->ReadAllText());
}

// internal Builtins New(Fuse.Scripting.Context context) [static] :41
Builtins* Builtins::New1(::g::Fuse::Scripting::Context* context)
{
    Builtins* obj1 = (Builtins*)uNew(Builtins_typeof());
    obj1->ctor_(context);
    return obj1;
}

// private static void Register(string moduleId, Fuse.Scripting.IModule module) [static] :33
void Builtins::Register(uString* moduleId, uObject* module)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Builtins", "Register(string,Fuse.Scripting.IModule)");
    Builtins_typeof()->Init();
    ::g::Uno::UX::Resource::SetGlobalKey(module, moduleId);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(518)
// ---------------------------------------------------------------------

// private sealed class TimerModule.CallbackClosure :518
// {
uType* TimerModule__CallbackClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TimerModule__CallbackClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", options);
    ::TYPES[9] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[12] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _args), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _context), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _func), 0);
    return type;
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :524
void TimerModule__CallbackClosure__ctor__fn(TimerModule__CallbackClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    __this->ctor_(context, func, args);
}

// public void Callback() :531
void TimerModule__CallbackClosure__Callback_fn(TimerModule__CallbackClosure* __this)
{
    __this->Callback();
}

// private void DispatchedCallback() :536
void TimerModule__CallbackClosure__DispatchedCallback_fn(TimerModule__CallbackClosure* __this)
{
    __this->DispatchedCallback();
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :524
void TimerModule__CallbackClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args, TimerModule__CallbackClosure** __retval)
{
    *__retval = TimerModule__CallbackClosure::New1(context, func, args);
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [instance] :524
void TimerModule__CallbackClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", ".ctor(Fuse.Scripting.Context,Fuse.Scripting.Function,object[])");
    _context = context;
    _func = func;
    _args = args;
}

// public void Callback() [instance] :531
void TimerModule__CallbackClosure::Callback()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", "Callback()");
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_context)->Dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::TYPES[12/*Uno.Action*/], (void*)TimerModule__CallbackClosure__DispatchedCallback_fn, this));
}

// private void DispatchedCallback() [instance] :536
void TimerModule__CallbackClosure::DispatchedCallback()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", "DispatchedCallback()");
    uPtr(_func)->Call(_args);
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [static] :524
TimerModule__CallbackClosure* TimerModule__CallbackClosure::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    TimerModule__CallbackClosure* obj1 = (TimerModule__CallbackClosure*)uNew(TimerModule__CallbackClosure_typeof());
    obj1->ctor_(context, func, args);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(123)
// ---------------------------------------------------------------------

// internal static class Camera :123
// {
uClassType* Camera_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Camera", options);
    ::STRINGS[34] = uString::Const("File");
    ::STRINGS[35] = uString::Const("path");
    ::STRINGS[36] = uString::Const("name");
    ::STRINGS[37] = uString::Const("takePicture");
    ::STRINGS[38] = uString::Const("targetWidth");
    ::STRINGS[39] = uString::Const("targetHeight");
    ::STRINGS[40] = uString::Const("correctOrientation");
    ::TYPES[11] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[13] = ::g::Fuse::Camera::PictureResult_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[15] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof());
    ::TYPES[16] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[17] = ::g::Uno::String_typeof()->Array();
    ::TYPES[18] = ::g::Fuse::Camera::TakePictureOptions_typeof();
    return type;
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.Camera.PictureResult result) :161
void Camera__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Camera::PictureResult* result, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = Camera::Converter(context, result);
}

// public static Fuse.Scripting.IModule CreateModule() :125
void Camera__CreateModule_fn(uObject** __retval)
{
    *__retval = Camera::CreateModule();
}

// private static Uno.Threading.Future<Fuse.Camera.PictureResult> TakePicture(object[] args) :131
void Camera__TakePicture_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePicture(args);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.Camera.PictureResult result) [static] :161
::g::Fuse::Scripting::Object* Camera::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::Camera::PictureResult* result)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Camera", "Converter(Fuse.Scripting.Context,Fuse.Camera.PictureResult)");
    ::g::Fuse::Scripting::Function* func = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(context)->GlobalObject())->Item(::STRINGS[34/*"File"*/]), ::TYPES[11/*Fuse.Scripting.Function*/]);
    ::g::Fuse::Scripting::Object* file = uPtr(func)->Construct(uArray::New(::TYPES[3/*object[]*/], 0));
    uPtr(file)->Item(::STRINGS[35/*"path"*/], uPtr(result)->Path());
    file->Item(::STRINGS[36/*"name"*/], ::g::Uno::IO::Path::GetFileName(result->Path()));
    return file;
}

// public static Fuse.Scripting.IModule CreateModule() [static] :125
uObject* Camera::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Camera", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[14/*Fuse.Scripting.NativePromise<Fuse.Camera.PictureResult, Fuse.Scripting.Object>*/], ::STRINGS[37/*"takePicture"*/], uDelegate::New(::TYPES[15/*Fuse.Scripting.FutureFactory<Fuse.Camera.PictureResult>*/], (void*)Camera__TakePicture_fn), uDelegate::New(::TYPES[16/*Fuse.Scripting.ResultConverter<Fuse.Camera.PictureResult, Fuse.Scripting.Object>*/], (void*)Camera__Converter_fn))));
}

// private static Uno.Threading.Future<Fuse.Camera.PictureResult> TakePicture(object[] args) [static] :131
::g::Uno::Threading::Future1* Camera::TakePicture(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Camera", "TakePicture(object[])");
    uArray* array1;
    int index2;
    int length3;
    ::g::Fuse::Camera::TakePictureOptions* options = ::g::Fuse::Camera::TakePictureOptions::New1();

    if (uPtr(args)->Length() > 0)
    {
        ::g::Fuse::Scripting::Object* arg = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[8/*Fuse.Scripting.Object*/]);

        if (arg != NULL)

            for (array1 = uPtr(arg)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);

                if (::g::Uno::String::op_Equality(k, ::STRINGS[38/*"targetWidth"*/]))
                    uPtr(options)->TargetWidth(::g::Fuse::Reactive::Marshal::ToInt(uPtr(arg)->Item(k)));

                if (::g::Uno::String::op_Equality(k, ::STRINGS[39/*"targetHeight"*/]))
                    uPtr(options)->TargetHeight(::g::Fuse::Reactive::Marshal::ToInt(uPtr(arg)->Item(k)));

                if (::g::Uno::String::op_Equality(k, ::STRINGS[40/*"correctOrie...*/]))
                    uPtr(options)->CorrectOrientation(::g::Fuse::Reactive::Marshal::ToBool(uPtr(arg)->Item(k)));
            }
    }

    return ::g::Fuse::Camera::Camera::TakePicture1(options);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(340)
// ---------------------------------------------------------------------

// public sealed class Email :340
// {
uType* Email_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Email);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Email", options);
    type->fp_ctor_ = (void*)Email__New1_fn;
    ::STRINGS[41] = uString::Const("compose");
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("Compose", NULL, (void*)Email__Compose_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateModule", NULL, (void*)Email__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Email__New1_fn, 0, true, Email_typeof(), 0));
    return type;
}

// public generated Email() :340
void Email__ctor__fn(Email* __this)
{
    __this->ctor_();
}

// public static object Compose(Fuse.Scripting.Context context, object[] args) :347
void Email__Compose_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Email::Compose(context, args);
}

// public static Fuse.Scripting.IModule CreateModule() :342
void Email__CreateModule_fn(uObject** __retval)
{
    *__retval = Email::CreateModule();
}

// public generated Email New() :340
void Email__New1_fn(Email** __retval)
{
    *__retval = Email::New1();
}

// public generated Email() [instance] :340
void Email::ctor_()
{
}

// public static object Compose(Fuse.Scripting.Context context, object[] args) [static] :347
uObject* Email::Compose(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Email", "Compose(Fuse.Scripting.Context,object[])");
    uString* to = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    uString* cc = uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
    uString* bcc = uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[4/*string*/]);
    uString* subject = uCast<uString*>(args->Strong<uObject*>(3), ::TYPES[4/*string*/]);
    uString* message = uCast<uString*>(args->Strong<uObject*>(4), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchEmail(to, cc, bcc, subject, message);
    return NULL;
}

// public static Fuse.Scripting.IModule CreateModule() [static] :342
uObject* Email::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Email", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[41/*"compose"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Email__Compose_fn))));
}

// public generated Email New() [static] :340
Email* Email::New1()
{
    Email* obj1 = (Email*)uNew(Email_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(370)
// ---------------------------------------------------------------------

// internal sealed class Environment :370
// {
::g::Fuse::Scripting::NativeModule_type* Environment_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Environment);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Environment", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)Environment__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[42] = uString::Const("android");
    ::STRINGS[43] = uString::Const("iOS");
    ::STRINGS[44] = uString::Const("mobile");
    ::STRINGS[45] = uString::Const("desktop");
    ::STRINGS[46] = uString::Const("preview");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3);
    return type;
}

// public Environment() :372
void Environment__ctor_1_fn(Environment* __this)
{
    __this->ctor_1();
}

// public Environment New() :372
void Environment__New2_fn(Environment** __retval)
{
    *__retval = Environment::New2();
}

// public Environment() [instance] :372
void Environment::ctor_1()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Environment", ".ctor()");
    ::g::Fuse::Scripting::NativeProperty* ret2;
    ::g::Fuse::Scripting::NativeProperty* ret3;
    ::g::Fuse::Scripting::NativeProperty* ret4;
    ::g::Fuse::Scripting::NativeProperty* ret5;
    ::g::Fuse::Scripting::NativeProperty* ret6;
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[19/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[42/*"android"*/], uCRef(true), &ret2), ret2));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[19/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[43/*"iOS"*/], uCRef(false), &ret3), ret3));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[19/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[44/*"mobile"*/], uCRef(true), &ret4), ret4));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[19/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[45/*"desktop"*/], uCRef(false), &ret5), ret5));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[19/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[46/*"preview"*/], uCRef(true), &ret6), ret6));
}

// public Environment New() [static] :372
Environment* Environment::New2()
{
    Environment* obj1 = (Environment*)uNew(Environment_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(904)
// ---------------------------------------------------------------------

// internal static class FileReaderImpl :904
// {
uClassType* FileReaderImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.FileReaderImpl", options);
    ::STRINGS[47] = uString::Const("readAsDataURL");
    ::STRINGS[48] = uString::Const("readAsText");
    ::STRINGS[49] = uString::Const("PNG");
    ::STRINGS[50] = uString::Const("png");
    ::STRINGS[51] = uString::Const("jpeg");
    ::STRINGS[52] = uString::Const("data:image/");
    ::STRINGS[53] = uString::Const(";base64,");
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[20] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[21] = ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Uno::String_typeof();
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :906
void FileReaderImpl__CreateModule_fn(uObject** __retval)
{
    *__retval = FileReaderImpl::CreateModule();
}

// private static string readAsDataURL(object[] args) :913
void FileReaderImpl__readAsDataURL_fn(uArray* args, uString** __retval)
{
    *__retval = FileReaderImpl::readAsDataURL(args);
}

// private static string readAsText(object[] args) :922
void FileReaderImpl__readAsText_fn(uArray* args, uString** __retval)
{
    *__retval = FileReaderImpl::readAsText(args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :906
uObject* FileReaderImpl::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.FileReaderImpl", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 2, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[20/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[47/*"readAsDataURL"*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.ResultFactory<string>*/], (void*)FileReaderImpl__readAsDataURL_fn), NULL), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[20/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[48/*"readAsText"*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.ResultFactory<string>*/], (void*)FileReaderImpl__readAsText_fn), NULL)));
}

// private static string readAsDataURL(object[] args) [static] :913
uString* FileReaderImpl::readAsDataURL(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.FileReaderImpl", "readAsDataURL(object[])");
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    uArray* file = ::g::Uno::IO::File::ReadAllBytes(path);
    uString* type = ::g::Uno::String::EndsWith(uPtr(::g::Uno::String::ToUpper(uPtr(path))), ::STRINGS[49/*"PNG"*/]) ? ::STRINGS[50/*"png"*/] : ::STRINGS[51/*"jpeg"*/];
    uString* base64 = ::g::Uno::Text::Base64::GetString(file);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[52/*"data:image/"*/], type), ::STRINGS[53/*";base64,"*/]), base64);
}

// private static string readAsText(object[] args) [static] :922
uString* FileReaderImpl::readAsText(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.FileReaderImpl", "readAsText(object[])");
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    return ::g::Uno::IO::File::ReadAllText(path);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(1163)
// ----------------------------------------------------------------------

// internal sealed class FunctionClosure :1163
// {
uType* FunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.FunctionClosure", options);
    ::TYPES[22] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[10] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::FunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::FunctionClosure, _context), 0);
    return type;
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :1168
void FunctionClosure__ctor__fn(FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.Callback get_Callback() :1181
void FunctionClosure__get_Callback_fn(FunctionClosure* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// private object function(object[] args) :1174
void FunctionClosure__function_fn(FunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->function(args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :1168
void FunctionClosure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* callback, FunctionClosure** __retval)
{
    *__retval = FunctionClosure::New1(context, callback);
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [instance] :1168
void FunctionClosure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.FuseJS.FunctionClosure", ".ctor(Fuse.Scripting.Context,Uno.Func<Fuse.Scripting.Context, object[], object>)");
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.Callback get_Callback() [instance] :1181
uDelegate* FunctionClosure::Callback()
{
    uStackFrame __("Fuse.Reactive.FuseJS.FunctionClosure", "get_Callback()");
    return uDelegate::New(::TYPES[10/*Fuse.Scripting.Callback*/], (void*)FunctionClosure__function_fn, this);
}

// private object function(object[] args) [instance] :1174
uObject* FunctionClosure::function(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.FunctionClosure", "function(object[])");
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [static] :1168
FunctionClosure* FunctionClosure::New1(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    FunctionClosure* obj1 = (FunctionClosure*)uNew(FunctionClosure_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(1021)
// ----------------------------------------------------------------------

// private sealed class Http.FuseJSHttpClient :1021
// {
uType* Http__FuseJSHttpClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Http__FuseJSHttpClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", options);
    ::STRINGS[54] = uString::Const("createRequest");
    ::TYPES[8] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[23] = ::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Context_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _client), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _Obj), 0);
    return type;
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) :1028
void Http__FuseJSHttpClient__ctor__fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private object CreateRequest(object[] args) :1037
void Http__FuseJSHttpClient__CreateRequest_fn(Http__FuseJSHttpClient* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateRequest(args);
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) :1028
void Http__FuseJSHttpClient__New1_fn(::g::Fuse::Scripting::Context* context, Http__FuseJSHttpClient** __retval)
{
    *__retval = Http__FuseJSHttpClient::New1(context);
}

// public generated Fuse.Scripting.Object get_Obj() :1023
void Http__FuseJSHttpClient__get_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :1023
void Http__FuseJSHttpClient__set_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) [instance] :1028
void Http__FuseJSHttpClient::ctor_(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", ".ctor(Fuse.Scripting.Context)");
    _context = context;
    _client = ::g::Uno::Net::Http::HttpMessageHandler::New1();
    Obj(uPtr(context)->NewObject());
    uPtr(Obj())->Item(::STRINGS[54/*"createRequest"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpClient__CreateRequest_fn, this));
}

// private object CreateRequest(object[] args) [instance] :1037
uObject* Http__FuseJSHttpClient::CreateRequest(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", "CreateRequest(object[])");
    uString* method = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    uString* url = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
    return ::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest::New1(_context, uPtr(_client)->CreateRequest1(method, url, uPtr(_context)->Dispatcher))->Obj();
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :1023
::g::Fuse::Scripting::Object* Http__FuseJSHttpClient::Obj()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", "get_Obj()");
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :1023
void Http__FuseJSHttpClient::Obj(::g::Fuse::Scripting::Object* value)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", "set_Obj(Fuse.Scripting.Object)");
    _Obj = value;
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) [static] :1028
Http__FuseJSHttpClient* Http__FuseJSHttpClient::New1(::g::Fuse::Scripting::Context* context)
{
    Http__FuseJSHttpClient* obj1 = (Http__FuseJSHttpClient*)uNew(Http__FuseJSHttpClient_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(1046)
// ----------------------------------------------------------------------

// private sealed class Http.FuseJSHttpRequest :1046
// {
uType* Http__FuseJSHttpRequest_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Http__FuseJSHttpRequest);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", options);
    ::STRINGS[55] = uString::Const("enableCache");
    ::STRINGS[56] = uString::Const("setTimeout");
    ::STRINGS[57] = uString::Const("sendAsync");
    ::STRINGS[58] = uString::Const("abort");
    ::STRINGS[59] = uString::Const("setHeader");
    ::STRINGS[60] = uString::Const("getResponseHeader");
    ::STRINGS[61] = uString::Const("getResponseHeaders");
    ::STRINGS[62] = uString::Const("getState");
    ::STRINGS[63] = uString::Const("getResponseStatus");
    ::STRINGS[64] = uString::Const("getResponseReasonPhrase");
    ::STRINGS[65] = uString::Const("getResponseContentString");
    ::STRINGS[66] = uString::Const("onaborted");
    ::STRINGS[67] = uString::Const("ondone");
    ::STRINGS[68] = uString::Const("onerror");
    ::STRINGS[69] = uString::Const("onprogress");
    ::STRINGS[70] = uString::Const("onstatechanged");
    ::STRINGS[71] = uString::Const("ontimeout");
    ::TYPES[24] = ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof();
    ::TYPES[25] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    ::TYPES[26] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof());
    ::TYPES[27] = ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[8] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[12] = ::g::Uno::Action_typeof();
    ::TYPES[30] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[31] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[32] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[33] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[34] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[35] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[36] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[37] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[38] = ::g::Uno::Int_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _req), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _Obj), 0);
    return type;
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :1052
void Http__FuseJSHttpRequest__ctor__fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    __this->ctor_(context, req);
}

// private object EnableCache(object[] args) :1139
void Http__FuseJSHttpRequest__EnableCache_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->EnableCache(args);
}

// private object GetResponseReasonPhrase(object[] args) :1156
void Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetResponseReasonPhrase(args);
}

// private object GetState(object[] args) :1151
void Http__FuseJSHttpRequest__GetState_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetState(args);
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :1052
void Http__FuseJSHttpRequest__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req, Http__FuseJSHttpRequest** __retval)
{
    *__retval = Http__FuseJSHttpRequest::New1(context, req);
}

// public generated Fuse.Scripting.Object get_Obj() :1048
void Http__FuseJSHttpRequest__get_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :1048
void Http__FuseJSHttpRequest__set_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// private void OnAborted(Uno.Net.Http.HttpMessageHandlerRequest res) :1080
void Http__FuseJSHttpRequest__OnAborted_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnAborted(res);
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) :1108
void Http__FuseJSHttpRequest__OnDone_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnDone(res);
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) :1087
void Http__FuseJSHttpRequest__OnError_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    __this->OnError(res, error);
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) :1115
void Http__FuseJSHttpRequest__OnProgress_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int* current, int* total, bool* hastotal)
{
    __this->OnProgress(res, *current, *total, *hastotal);
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) :1101
void Http__FuseJSHttpRequest__OnStateChanged_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnStateChanged(res);
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) :1094
void Http__FuseJSHttpRequest__OnTimeout_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnTimeout(res);
}

// private object SendAsync(object[] args) :1122
void Http__FuseJSHttpRequest__SendAsync_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SendAsync(args);
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [instance] :1052
void Http__FuseJSHttpRequest::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", ".ctor(Fuse.Scripting.Context,Uno.Net.Http.HttpMessageHandlerRequest)");
    _req = req;
    Obj(uPtr(context)->NewObject());
    uPtr(_req)->add_Aborted(uDelegate::New(::TYPES[25/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnAborted_fn, this));
    uPtr(_req)->add_Error(uDelegate::New(::TYPES[26/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)Http__FuseJSHttpRequest__OnError_fn, this));
    uPtr(_req)->add_Timeout(uDelegate::New(::TYPES[25/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnTimeout_fn, this));
    uPtr(_req)->add_Done(uDelegate::New(::TYPES[25/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnDone_fn, this));
    uPtr(_req)->add_StateChanged(uDelegate::New(::TYPES[25/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnStateChanged_fn, this));
    uPtr(_req)->add_Progress(uDelegate::New(::TYPES[27/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/], (void*)Http__FuseJSHttpRequest__OnProgress_fn, this));
    uPtr(Obj())->Item(::STRINGS[55/*"enableCache"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__EnableCache_fn, this));
    uPtr(Obj())->Item(::STRINGS[56/*"setTimeout"*/], ::g::Fuse::Scripting::JSCallback::FromAction1(::TYPES[28/*Fuse.Scripting.JSCallback.FromAction<int>*/], uDelegate::New(::TYPES[29/*Uno.Action<int>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__SetTimeout_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[57/*"sendAsync"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__SendAsync_fn, this));
    uPtr(Obj())->Item(::STRINGS[58/*"abort"*/], ::g::Fuse::Scripting::JSCallback::FromAction(uDelegate::New(::TYPES[12/*Uno.Action*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__Abort_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[59/*"setHeader"*/], ::g::Fuse::Scripting::JSCallback::FromAction2(::TYPES[30/*Fuse.Scripting.JSCallback.FromAction<string, string>*/], uDelegate::New(::TYPES[31/*Uno.Action<string, string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__SetHeader_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[60/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc1(::TYPES[32/*Fuse.Scripting.JSCallback.FromFunc<string, string>*/], uDelegate::New(::TYPES[33/*Uno.Func<string, string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseHeader_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[61/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[34/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[35/*Uno.Func<string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseHeaders_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[62/*"getState"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetState_fn, this));
    uPtr(Obj())->Item(::STRINGS[63/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[36/*Fuse.Scripting.JSCallback.FromFunc<int>*/], uDelegate::New(::TYPES[37/*Uno.Func<int>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseStatus_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[64/*"getResponse...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn, this));
    uPtr(Obj())->Item(::STRINGS[65/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[34/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[35/*Uno.Func<string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseContentString_fn, uPtr(_req))));
}

// private object EnableCache(object[] args) [instance] :1139
uObject* Http__FuseJSHttpRequest::EnableCache(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "EnableCache(object[])");

    if (uPtr(args)->Length() > 0)
        ;

    return NULL;
}

// private object GetResponseReasonPhrase(object[] args) [instance] :1156
uObject* Http__FuseJSHttpRequest::GetResponseReasonPhrase(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "GetResponseReasonPhrase(object[])");
    return ::g::Uno::Net::Http::HttpStatusReasonPhrase::GetFromStatusCode(uPtr(_req)->GetResponseStatus());
}

// private object GetState(object[] args) [instance] :1151
uObject* Http__FuseJSHttpRequest::GetState(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "GetState(object[])");
    return uBox<int>(::TYPES[38/*int*/], uPtr(_req)->State());
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :1048
::g::Fuse::Scripting::Object* Http__FuseJSHttpRequest::Obj()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "get_Obj()");
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :1048
void Http__FuseJSHttpRequest::Obj(::g::Fuse::Scripting::Object* value)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "set_Obj(Fuse.Scripting.Object)");
    _Obj = value;
}

// private void OnAborted(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1080
void Http__FuseJSHttpRequest::OnAborted(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnAborted(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[66/*"onaborted"*/]), ::TYPES[11/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1108
void Http__FuseJSHttpRequest::OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnDone(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[67/*"ondone"*/]), ::TYPES[11/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) [instance] :1087
void Http__FuseJSHttpRequest::OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnError(Uno.Net.Http.HttpMessageHandlerRequest,string)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[68/*"onerror"*/]), ::TYPES[11/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, error));
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) [instance] :1115
void Http__FuseJSHttpRequest::OnProgress(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int current, int total, bool hastotal)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnProgress(Uno.Net.Http.HttpMessageHandlerRequest,int,int,bool)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[69/*"onprogress"*/]), ::TYPES[11/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 3, uBox<int>(::TYPES[38/*int*/], current), uBox<int>(::TYPES[38/*int*/], total), uBox(::TYPES[69/*bool*/], hastotal)));
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1101
void Http__FuseJSHttpRequest::OnStateChanged(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[70/*"onstatechan...*/]), ::TYPES[11/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uBox<int>(::TYPES[38/*int*/], uPtr(_req)->State())));
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :1094
void Http__FuseJSHttpRequest::OnTimeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[71/*"ontimeout"*/]), ::TYPES[11/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private object SendAsync(object[] args) [instance] :1122
uObject* Http__FuseJSHttpRequest::SendAsync(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "SendAsync(object[])");
    uPtr(_req)->SetResponseType(0);

    if (uPtr(args)->Length() > 0)
    {
        uString* data = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(data, NULL))
        {
            uPtr(_req)->SendAsync2(data);
            return NULL;
        }
    }

    uPtr(_req)->SendAsync();
    return NULL;
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [static] :1052
Http__FuseJSHttpRequest* Http__FuseJSHttpRequest::New1(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    Http__FuseJSHttpRequest* obj1 = (Http__FuseJSHttpRequest*)uNew(Http__FuseJSHttpRequest_typeof());
    obj1->ctor_(context, req);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(667)
// ---------------------------------------------------------------------

// internal sealed class GeoLocation :667
// {
::g::Fuse::Scripting::NativeModule_type* GeoLocation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GeoLocation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.GeoLocation", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)GeoLocation__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[72] = uString::Const("auhtorizationRequest");
    ::STRINGS[73] = uString::Const("startListening");
    ::STRINGS[74] = uString::Const("stopListening");
    ::STRINGS[75] = uString::Const("onChanged");
    ::STRINGS[76] = uString::Const("location");
    ::STRINGS[77] = uString::Const("getLocation");
    ::STRINGS[78] = uString::Const("latitude");
    ::STRINGS[79] = uString::Const("longitude");
    ::STRINGS[80] = uString::Const("accuracy");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[39] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[40] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof());
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[41] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[42] = ::g::Fuse::GeoLocation::LocationTracker_typeof();
    ::TYPES[43] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[44] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[45] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[46] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[47] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[48] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[49] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[38] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[50] = ::g::Fuse::GeoLocation::GeoCoordinates_typeof();
    ::TYPES[51] = ::g::Fuse::GeoLocation::Location_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[52] = ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3,
        ::g::Fuse::GeoLocation::LocationTracker_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::GeoLocation, _locationTracker), 0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::GeoLocation, _onChangedEvent), 0);
    return type;
}

// public GeoLocation() :672
void GeoLocation__ctor_1_fn(GeoLocation* __this)
{
    __this->ctor_1();
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) :704
void GeoLocation__AuthorizationRequestConverter_fn(::g::Fuse::Scripting::Context* context, int* type, int* __retval)
{
    *__retval = GeoLocation::AuthorizationRequestConverter(context, *type);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) :730
void GeoLocation__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = GeoLocation::Converter(context, location);
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() :714
void GeoLocation__GetAuhtorizationRequest_fn(GeoLocation* __this, int* __retval)
{
    *__retval = __this->GetAuhtorizationRequest();
}

// private Fuse.GeoLocation.Location GetLocation() :719
void GeoLocation__GetLocation_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLocation();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) :724
void GeoLocation__GetLocationAsync_fn(GeoLocation* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(args);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) :698
void GeoLocation__LocationChanged_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location* location)
{
    __this->LocationChanged(location);
}

// public GeoLocation New() :672
void GeoLocation__New2_fn(GeoLocation** __retval)
{
    *__retval = GeoLocation::New2();
}

// private void SetAuhtorizationRequest(int value) :709
void GeoLocation__SetAuhtorizationRequest_fn(GeoLocation* __this, int* value)
{
    __this->SetAuhtorizationRequest(*value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) :686
void GeoLocation__StartListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StartListening(c, args);
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) :692
void GeoLocation__StopListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StopListening(c, args);
}

// public GeoLocation() [instance] :672
void GeoLocation::ctor_1()
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", ".ctor()");
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    _locationTracker = ::g::Fuse::GeoLocation::LocationTracker::New1();
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[39/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], ::STRINGS[72/*"auhtorizati...*/], uDelegate::New(::TYPES[40/*Uno.Func<Fuse.GeoLocation.GeoLocationAuthorizationType>*/], (void*)GeoLocation__GetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[29/*Uno.Action<int>*/], (void*)GeoLocation__SetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[41/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], (void*)GeoLocation__AuthorizationRequestConverter_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[73/*"startListen...*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StartListening_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[74/*"stopListening"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StopListening_fn, this)));
    _onChangedEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[75/*"onChanged"*/], true);
    uPtr(_locationTracker)->add_LocationChanged(uDelegate::New(::TYPES[43/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__LocationChanged_fn, this));
    AddMember(_onChangedEvent);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[44/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[76/*"location"*/], uDelegate::New(::TYPES[45/*Uno.Func<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocation_fn, this), NULL, uDelegate::New(::TYPES[46/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[47/*Fuse.Scripting.NativePromise<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[77/*"getLocation"*/], uDelegate::New(::TYPES[48/*Fuse.Scripting.FutureFactory<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocationAsync_fn, this), uDelegate::New(::TYPES[49/*Fuse.Scripting.ResultConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() [instance] :714
int GeoLocation::GetAuhtorizationRequest()
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "GetAuhtorizationRequest()");
    return uPtr(_locationTracker)->AuthorizationType();
}

// private Fuse.GeoLocation.Location GetLocation() [instance] :719
::g::Fuse::GeoLocation::Location* GeoLocation::GetLocation()
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "GetLocation()");
    return uPtr(_locationTracker)->Location();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) [instance] :724
::g::Uno::Threading::Future1* GeoLocation::GetLocationAsync(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "GetLocationAsync(object[])");
    double timeout = (uPtr(args)->Length() > 0) ? ::g::Fuse::Reactive::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 20000.0;
    return uPtr(_locationTracker)->GetLocationAsync(timeout);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) [instance] :698
void GeoLocation::LocationChanged(::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "LocationChanged(Fuse.GeoLocation.Location)");
    uPtr(_onChangedEvent)->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, (::g::Fuse::Scripting::Object*)GeoLocation::Converter(uPtr(_onChangedEvent)->Context(), location)));
}

// private void SetAuhtorizationRequest(int value) [instance] :709
void GeoLocation::SetAuhtorizationRequest(int value)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "SetAuhtorizationRequest(int)");
    uPtr(_locationTracker)->AuthorizationType(value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) [instance] :686
uObject* GeoLocation::StartListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "StartListening(Fuse.Scripting.Context,object[])");
    uPtr(_locationTracker)->StartListening(0, 0.0);
    return NULL;
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) [instance] :692
uObject* GeoLocation::StopListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "StopListening(Fuse.Scripting.Context,object[])");
    uPtr(_locationTracker)->StopListening();
    return NULL;
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) [static] :704
int GeoLocation::AuthorizationRequestConverter(::g::Fuse::Scripting::Context* context, int type)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "AuthorizationRequestConverter(Fuse.Scripting.Context,Fuse.GeoLocation.GeoLocationAuthorizationType)");
    return type;
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) [static] :730
::g::Fuse::Scripting::Object* GeoLocation::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.Reactive.FuseJS.GeoLocation", "Converter(Fuse.Scripting.Context,Fuse.GeoLocation.Location)");
    ::g::Fuse::Scripting::Object* obj = uPtr(context)->NewObject();

    if (location != NULL)
    {
        uPtr(obj)->Item(::STRINGS[78/*"latitude"*/], uBox(::TYPES[64/*double*/], uPtr(uPtr(location)->Coordinates())->Latitude()));
        obj->Item(::STRINGS[79/*"longitude"*/], uBox(::TYPES[64/*double*/], uPtr(location->Coordinates())->Longitude()));
        obj->Item(::STRINGS[80/*"accuracy"*/], uBox(::TYPES[64/*double*/], location->Accuracy()));
    }

    return obj;
}

// public GeoLocation New() [static] :672
GeoLocation* GeoLocation::New2()
{
    GeoLocation* obj1 = (GeoLocation*)uNew(GeoLocation_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(80)
// --------------------------------------------------------------------

// internal static class Globals :80
// {
uClassType* Globals_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Globals", options);
    ::STRINGS[48] = uString::Const("readAsText");
    ::STRINGS[81] = uString::Const("Globals.readAsText(): Exactly one argument expected");
    ::STRINGS[82] = uString::Const("Globals.readAsText(): Argument must be string");
    ::STRINGS[83] = uString::Const("Globals.readAsText(): Global resource file '");
    ::STRINGS[84] = uString::Const("' not found");
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[20] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[21] = ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[53] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[54] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :82
void Globals__CreateModule_fn(uObject** __retval)
{
    *__retval = Globals::CreateModule();
}

// private static bool FileSourceAcceptor(object obj) :105
void Globals__FileSourceAcceptor_fn(uObject* obj, bool* __retval)
{
    *__retval = Globals::FileSourceAcceptor(obj);
}

// private static string readAsText(object[] args) :88
void Globals__readAsText_fn(uArray* args, uString** __retval)
{
    *__retval = Globals::readAsText(args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :82
uObject* Globals::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Globals", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[20/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[48/*"readAsText"*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.ResultFactory<string>*/], (void*)Globals__readAsText_fn), NULL)));
}

// private static bool FileSourceAcceptor(object obj) [static] :105
bool Globals::FileSourceAcceptor(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Globals", "FileSourceAcceptor(object)");
    return uIs(obj, ::TYPES[53/*Uno.UX.BundleFileSource*/]);
}

// private static string readAsText(object[] args) [static] :88
uString* Globals::readAsText(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Globals", "readAsText(object[])");

    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[81/*"Globals.rea...*/]));

    uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

    if (args->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[82/*"Globals.rea...*/]));

    uObject* res;

    if (::g::Uno::UX::Resource::TryFindGlobal(key, uDelegate::New(::TYPES[54/*Uno.Predicate<object>*/], (void*)Globals__FileSourceAcceptor_fn), &res))
    {
        ::g::Uno::UX::BundleFileSource* fs = uCast< ::g::Uno::UX::BundleFileSource*>(res, ::TYPES[53/*Uno.UX.BundleFileSource*/]);
        return uPtr(fs)->ReadAllText();
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[83/*"Globals.rea...*/], key), ::STRINGS[84/*"' not found"*/])));
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(1009)
// ----------------------------------------------------------------------

// internal sealed class Http :1009
// {
uType* Http_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Http);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http", options);
    ::STRINGS[85] = uString::Const("HttpClient");
    ::TYPES[8] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[55] = ::g::Fuse::Reactive::FuseJS::FunctionClosure_typeof();
    ::TYPES[22] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[56] = Http__FuseJSHttpClient_typeof();
    return type;
}

// public Http(Fuse.Scripting.Context context) :1011
void Http__ctor__fn(Http* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) :1016
void Http__CreateClient_fn(Http* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateClient(context, args);
}

// public Http New(Fuse.Scripting.Context context) :1011
void Http__New1_fn(::g::Fuse::Scripting::Context* context, Http** __retval)
{
    *__retval = Http::New1(context);
}

// public Http(Fuse.Scripting.Context context) [instance] :1011
void Http::ctor_(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http", ".ctor(Fuse.Scripting.Context)");
    uPtr(uPtr(context)->GlobalObject())->Item(::STRINGS[85/*"HttpClient"*/], ::g::Fuse::Reactive::FuseJS::FunctionClosure::New1(context, uDelegate::New(::TYPES[22/*Uno.Func<Fuse.Scripting.Context, object[], object>*/], (void*)Http__CreateClient_fn, this))->Callback());
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) [instance] :1016
uObject* Http::CreateClient(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http", "CreateClient(Fuse.Scripting.Context,object[])");
    return Http__FuseJSHttpClient::New1(context)->Obj();
}

// public Http New(Fuse.Scripting.Context context) [static] :1011
Http* Http::New1(::g::Fuse::Scripting::Context* context)
{
    Http* obj1 = (Http*)uNew(Http_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(391)
// ---------------------------------------------------------------------

// public sealed class InterApp :391
// {
// static InterApp() :397
static void InterApp__cctor__fn(uType* __type)
{
    InterApp::_cachedUris_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[57/*Uno.Collections.List<string>*/]));
    ::g::Uno::Platform2::Application::add_ReceivedURI(uDelegate::New(::TYPES[59/*Uno.EventHandler<string>*/], (void*)InterApp__OnReceivedUri_fn));
}

uType* InterApp_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InterApp);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.InterApp", options);
    type->fp_ctor_ = (void*)InterApp__New1_fn;
    type->fp_cctor_ = InterApp__cctor__fn;
    ::STRINGS[86] = uString::Const("onReceivedUri");
    ::STRINGS[87] = uString::Const("launchUri");
    ::TYPES[57] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[58] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[59] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[60] = ::g::Fuse::Scripting::NativeModule_typeof();
    ::TYPES[61] = ::g::Uno::EventHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[62] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[5] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_cachedUris_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_jsInitialized_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_onReceivedUri_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("CreateModule", NULL, (void*)InterApp__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction("LaunchUri", NULL, (void*)InterApp__LaunchUri_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)InterApp__New1_fn, 0, true, InterApp_typeof(), 0));
    return type;
}

// public generated InterApp() :391
void InterApp__ctor__fn(InterApp* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :402
void InterApp__CreateModule_fn(uObject** __retval)
{
    *__retval = InterApp::CreateModule();
}

// public static object LaunchUri(Fuse.Scripting.Context context, object[] args) :431
void InterApp__LaunchUri_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = InterApp::LaunchUri(context, args);
}

// public generated InterApp New() :391
void InterApp__New1_fn(InterApp** __retval)
{
    *__retval = InterApp::New1();
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) :414
void InterApp__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    InterApp::OnJsInitialized(sender, args);
}

// private static void OnReceivedUri(object sender, string uri) :423
void InterApp__OnReceivedUri_fn(uObject* sender, uString* uri)
{
    InterApp::OnReceivedUri(sender, uri);
}

uSStrong< ::g::Uno::Collections::List*> InterApp::_cachedUris_;
bool InterApp::_jsInitialized_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> InterApp::_onReceivedUri_;

// public generated InterApp() [instance] :391
void InterApp::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :402
uObject* InterApp::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.InterApp", "CreateModule()");
    InterApp_typeof()->Init();
    InterApp::_onReceivedUri() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[86/*"onReceivedUri"*/], true);
    ::g::Fuse::Scripting::NativeModule* module = ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 2, (::g::Fuse::Scripting::NativeEvent*)InterApp::_onReceivedUri(), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[87/*"launchUri"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)InterApp__LaunchUri_fn))));
    module->add_Evaluated(uDelegate::New(::TYPES[61/*Uno.EventHandler*/], (void*)InterApp__OnJsInitialized_fn));
    return (uObject*)module;
}

// public static object LaunchUri(Fuse.Scripting.Context context, object[] args) [static] :431
uObject* InterApp::LaunchUri(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.InterApp", "LaunchUri(Fuse.Scripting.Context,object[])");
    InterApp_typeof()->Init();
    ::g::Fuse::Launcher::LaunchUri(::g::Uno::Net::Http::Uri::New1(uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/])));
    return NULL;
}

// public generated InterApp New() [static] :391
InterApp* InterApp::New1()
{
    InterApp* obj2 = (InterApp*)uNew(InterApp_typeof());
    obj2->ctor_();
    return obj2;
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) [static] :414
void InterApp::OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.InterApp", "OnJsInitialized(object,Uno.EventArgs)");
    InterApp_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret3;

    if (InterApp::_cachedUris() != NULL)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(InterApp::_cachedUris()), &ret3), ret3); enum1.MoveNext(::TYPES[62/*Uno.Collections.List<string>.Enumerator*/]); )
        {
            uString* uri = enum1.Current(::TYPES[62/*Uno.Collections.List<string>.Enumerator*/]);
            uPtr(InterApp::_onReceivedUri())->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uri));
        }

    InterApp::_cachedUris() = NULL;
    InterApp::_jsInitialized() = true;
}

// private static void OnReceivedUri(object sender, string uri) [static] :423
void InterApp::OnReceivedUri(uObject* sender, uString* uri)
{
    uStackFrame __("Fuse.Reactive.FuseJS.InterApp", "OnReceivedUri(object,string)");
    InterApp_typeof()->Init();

    if (InterApp::_jsInitialized())
        uPtr(InterApp::_onReceivedUri())->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uri));
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(InterApp::_cachedUris()), uri);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(179)
// ---------------------------------------------------------------------

// public sealed class Lifecycle :179
// {
uType* Lifecycle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Lifecycle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Lifecycle", options);
    type->fp_ctor_ = (void*)Lifecycle__New1_fn;
    ::STRINGS[88] = uString::Const("onEnteringForeground");
    ::STRINGS[89] = uString::Const("onEnteringInteractive");
    ::STRINGS[90] = uString::Const("onExitedInteractive");
    ::STRINGS[91] = uString::Const("onEnteringBackground");
    ::STRINGS[92] = uString::Const("onTerminating");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[60] = ::g::Fuse::Scripting::NativeModule_typeof();
    ::TYPES[61] = ::g::Uno::EventHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[58] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[63] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringBackground_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringForeground_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringInteractive_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_exitedInteractive_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_terminating_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("CreateModule", NULL, (void*)Lifecycle__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Lifecycle__New1_fn, 0, true, Lifecycle_typeof(), 0));
    return type;
}

// public generated Lifecycle() :179
void Lifecycle__ctor__fn(Lifecycle* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :193
void Lifecycle__CreateModule_fn(uObject** __retval)
{
    *__retval = Lifecycle::CreateModule();
}

// public generated Lifecycle New() :179
void Lifecycle__New1_fn(Lifecycle** __retval)
{
    *__retval = Lifecycle::New1();
}

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) :244
void Lifecycle__OnEnteringBackground_fn(int* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) :223
void Lifecycle__OnEnteringForeground_fn(int* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) :230
void Lifecycle__OnEnteringInteractive_fn(int* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) :237
void Lifecycle__OnExitedInteractive_fn(int* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) :214
void Lifecycle__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    Lifecycle::OnJsInitialized(sender, args);
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) :251
void Lifecycle__OnTerminating_fn(int* newState)
{
    Lifecycle::OnTerminating(*newState);
}

uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringBackground_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringForeground_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringInteractive_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_exitedInteractive_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_terminating_;

// public generated Lifecycle() [instance] :179
void Lifecycle::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :193
uObject* Lifecycle::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "CreateModule()");
    Lifecycle::_enteringForeground() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[88/*"onEnteringF...*/], true);
    Lifecycle::_enteringInteractive() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[89/*"onEnteringI...*/], true);
    Lifecycle::_exitedInteractive() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[90/*"onExitedInt...*/], true);
    Lifecycle::_enteringBackground() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[91/*"onEnteringB...*/], true);
    Lifecycle::_terminating() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[92/*"onTerminating"*/], true);
    ::g::Fuse::Scripting::NativeModule* module = ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 5, (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringForeground(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringInteractive(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_exitedInteractive(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringBackground(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_terminating()));
    module->add_Evaluated(uDelegate::New(::TYPES[61/*Uno.EventHandler*/], (void*)Lifecycle__OnJsInitialized_fn));
    return (uObject*)module;
}

// public generated Lifecycle New() [static] :179
Lifecycle* Lifecycle::New1()
{
    Lifecycle* obj1 = (Lifecycle*)uNew(Lifecycle_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) [static] :244
void Lifecycle::OnEnteringBackground(int newState)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnEnteringBackground(Uno.Platform2.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringBackground();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringBackground())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) [static] :223
void Lifecycle::OnEnteringForeground(int newState)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnEnteringForeground(Uno.Platform2.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringForeground();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringForeground())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) [static] :230
void Lifecycle::OnEnteringInteractive(int newState)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnEnteringInteractive(Uno.Platform2.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringInteractive();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringInteractive())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) [static] :237
void Lifecycle::OnExitedInteractive(int newState)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnExitedInteractive(Uno.Platform2.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_exitedInteractive();

    if (handler != NULL)
        uPtr(Lifecycle::_exitedInteractive())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) [static] :214
void Lifecycle::OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnJsInitialized(object,Uno.EventArgs)");
    ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Uno::Platform2::Application::add_EnteringInteractive(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Uno::Platform2::Application::add_ExitedInteractive(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringBackground_fn));
    ::g::Uno::Platform2::Application::add_Terminating(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnTerminating_fn));
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) [static] :251
void Lifecycle::OnTerminating(int newState)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Lifecycle", "OnTerminating(Uno.Platform2.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_terminating();

    if (handler != NULL)
        uPtr(Lifecycle::_terminating())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(270)
// ---------------------------------------------------------------------

// public sealed class Maps :270
// {
uType* Maps_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Maps);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Maps", options);
    type->fp_ctor_ = (void*)Maps__New1_fn;
    ::STRINGS[93] = uString::Const("openAt");
    ::STRINGS[94] = uString::Const("searchNearby");
    ::STRINGS[95] = uString::Const("searchNear");
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[64] = ::g::Uno::Double_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    type->Reflection.SetFunctions(5,
        new uFunction("CreateModule", NULL, (void*)Maps__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Maps__New1_fn, 0, true, Maps_typeof(), 0),
        new uFunction("OpenAt", NULL, (void*)Maps__OpenAt_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("SearchNear", NULL, (void*)Maps__SearchNear_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("SearchNearby", NULL, (void*)Maps__SearchNearby_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()));
    return type;
}

// public generated Maps() :270
void Maps__ctor__fn(Maps* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :272
void Maps__CreateModule_fn(uObject** __retval)
{
    *__retval = Maps::CreateModule();
}

// public generated Maps New() :270
void Maps__New1_fn(Maps** __retval)
{
    *__retval = Maps::New1();
}

// public static object OpenAt(Fuse.Scripting.Context context, object[] args) :296
void Maps__OpenAt_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::OpenAt(context, args);
}

// public static object SearchNear(Fuse.Scripting.Context context, object[] args) :287
void Maps__SearchNear_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::SearchNear(context, args);
}

// public static object SearchNearby(Fuse.Scripting.Context context, object[] args) :280
void Maps__SearchNearby_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::SearchNearby(context, args);
}

// public generated Maps() [instance] :270
void Maps::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :272
uObject* Maps::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Maps", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 3, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[93/*"openAt"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__OpenAt_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[94/*"searchNearby"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__SearchNearby_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[95/*"searchNear"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__SearchNear_fn))));
}

// public generated Maps New() [static] :270
Maps* Maps::New1()
{
    Maps* obj1 = (Maps*)uNew(Maps_typeof());
    obj1->ctor_();
    return obj1;
}

// public static object OpenAt(Fuse.Scripting.Context context, object[] args) [static] :296
uObject* Maps::OpenAt(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Maps", "OpenAt(Fuse.Scripting.Context,object[])");
    double latitude = uUnbox<double>(::TYPES[64/*double*/], uPtr(args)->Strong<uObject*>(0));
    double longitude = uUnbox<double>(::TYPES[64/*double*/], args->Strong<uObject*>(1));
    ::g::Fuse::Launcher::LaunchMaps(latitude, longitude);
    return NULL;
}

// public static object SearchNear(Fuse.Scripting.Context context, object[] args) [static] :287
uObject* Maps::SearchNear(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Maps", "SearchNear(Fuse.Scripting.Context,object[])");
    uString* query = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchMaps2(query);
    return NULL;
}

// public static object SearchNearby(Fuse.Scripting.Context context, object[] args) [static] :280
uObject* Maps::SearchNearby(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Maps", "SearchNearby(Fuse.Scripting.Context,object[])");
    uString* query = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchMaps2(query);
    return NULL;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(315)
// ---------------------------------------------------------------------

// public sealed class Phone :315
// {
uType* Phone_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Phone);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Phone", options);
    type->fp_ctor_ = (void*)Phone__New1_fn;
    ::STRINGS[96] = uString::Const("call");
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("Call", NULL, (void*)Phone__Call_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateModule", NULL, (void*)Phone__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Phone__New1_fn, 0, true, Phone_typeof(), 0));
    return type;
}

// public generated Phone() :315
void Phone__ctor__fn(Phone* __this)
{
    __this->ctor_();
}

// public static object Call(Fuse.Scripting.Context context, object[] args) :322
void Phone__Call_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Phone::Call(context, args);
}

// public static Fuse.Scripting.IModule CreateModule() :317
void Phone__CreateModule_fn(uObject** __retval)
{
    *__retval = Phone::CreateModule();
}

// public generated Phone New() :315
void Phone__New1_fn(Phone** __retval)
{
    *__retval = Phone::New1();
}

// public generated Phone() [instance] :315
void Phone::ctor_()
{
}

// public static object Call(Fuse.Scripting.Context context, object[] args) [static] :322
uObject* Phone::Call(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Phone", "Call(Fuse.Scripting.Context,object[])");
    uString* callString = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchCall(callString);
    return NULL;
}

// public static Fuse.Scripting.IModule CreateModule() [static] :317
uObject* Phone::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Phone", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[96/*"call"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Phone__Call_fn))));
}

// public generated Phone New() [static] :315
Phone* Phone::New1()
{
    Phone* obj1 = (Phone*)uNew(Phone_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(938)
// ---------------------------------------------------------------------

// internal sealed class RaiseEvent :938
// {
uType* RaiseEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RaiseEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.RaiseEvent", options);
    type->fp_ctor_ = (void*)RaiseEvent__New1_fn;
    ::STRINGS[97] = uString::Const("Cannot find message with name: ");
    ::STRINGS[98] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.24.7\\FuseJS\\$.uno");
    ::STRINGS[99] = uString::Const("Raise");
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Args), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Name), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Source), 0);
    return type;
}

// public generated RaiseEvent() :938
void RaiseEvent__ctor__fn(RaiseEvent* __this)
{
    __this->ctor_();
}

// public generated RaiseEvent New() :938
void RaiseEvent__New1_fn(RaiseEvent** __retval)
{
    *__retval = RaiseEvent::New1();
}

// public void Raise() :945
void RaiseEvent__Raise_fn(RaiseEvent* __this)
{
    __this->Raise();
}

// public generated RaiseEvent() [instance] :938
void RaiseEvent::ctor_()
{
}

// public void Raise() [instance] :945
void RaiseEvent::Raise()
{
    uStackFrame __("Fuse.Reactive.FuseJS.RaiseEvent", "Raise()");
    ::g::Fuse::UserEventDispatch* dispatch = ::g::Fuse::UserEventDispatch::GetByName(Name);

    if (dispatch == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition2(::STRINGS[97/*"Cannot find...*/], Name), NULL, ::STRINGS[98/*"C:\\Program...*/], 950, ::STRINGS[99/*"Raise"*/]);
        return;
    }

    uPtr(dispatch)->DirectRaise(Source, Args);
}

// public generated RaiseEvent New() [static] :938
RaiseEvent* RaiseEvent::New1()
{
    RaiseEvent* obj1 = (RaiseEvent*)uNew(RaiseEvent_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(818)
// ---------------------------------------------------------------------

// internal static class Storage :818
// {
uClassType* Storage_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Storage", options);
    ::STRINGS[100] = uString::Const("writeSync");
    ::STRINGS[101] = uString::Const("readSync");
    ::STRINGS[102] = uString::Const("deleteSync");
    ::STRINGS[103] = uString::Const("write");
    ::STRINGS[104] = uString::Const("read");
    ::STRINGS[105] = uString::Const("");
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[65] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[66] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[20] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[67] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = uObject_typeof();
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :820
void Storage__CreateModule_fn(uObject** __retval)
{
    *__retval = Storage::CreateModule();
}

// private static object Delete(Fuse.Scripting.Context c, object[] args) :853
void Storage__Delete_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Delete(c, args);
}

// private static object Read(Fuse.Scripting.Context c, object[] args) :875
void Storage__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Read(c, args);
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) :843
void Storage__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Storage::ReadAsync(args);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) :863
void Storage__Write_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Write(c, args);
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) :831
void Storage__WriteAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Storage::WriteAsync(args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :820
uObject* Storage::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 5, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[100/*"writeSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Write_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[101/*"readSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Read_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[102/*"deleteSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Delete_fn)), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[65/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[103/*"write"*/], uDelegate::New(::TYPES[66/*Fuse.Scripting.FutureFactory<bool>*/], (void*)Storage__WriteAsync_fn), NULL), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[20/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[104/*"read"*/], uDelegate::New(::TYPES[67/*Fuse.Scripting.FutureFactory<string>*/], (void*)Storage__ReadAsync_fn), NULL)));
}

// private static object Delete(Fuse.Scripting.Context c, object[] args) [static] :853
uObject* Storage::Delete(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "Delete(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        return uBox(::TYPES[69/*bool*/], ::g::Fuse::Storage::ApplicationDir::Delete(filename));
    }

    return uBox(::TYPES[69/*bool*/], false);
}

// private static object Read(Fuse.Scripting.Context c, object[] args) [static] :875
uObject* Storage::Read(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "Read(Fuse.Scripting.Context,object[])");

    try
    {
        if (uPtr(args)->Length() > 0)
        {
            uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
            return ::g::Fuse::Storage::ApplicationDir::Read((filename != NULL) ? filename : ::STRINGS[105/*""*/]);
        }

        return ::g::Fuse::Storage::ApplicationDir::Read(::STRINGS[105/*""*/]);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        return ::STRINGS[105/*""*/];
    }
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) [static] :843
::g::Uno::Threading::Future1* Storage::ReadAsync(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "ReadAsync(object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::ReadAsync((filename != NULL) ? filename : ::STRINGS[105/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::ReadAsync(::STRINGS[105/*""*/]);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) [static] :863
uObject* Storage::Write(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "Write(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
        return uBox(::TYPES[69/*bool*/], ::g::Fuse::Storage::ApplicationDir::Write((filename != NULL) ? filename : ::STRINGS[105/*""*/], (value != NULL) ? value : ::STRINGS[105/*""*/]));
    }

    return uBox(::TYPES[69/*bool*/], ::g::Fuse::Storage::ApplicationDir::Write(::STRINGS[105/*""*/], ::STRINGS[105/*""*/]));
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) [static] :831
::g::Uno::Threading::Future1* Storage::WriteAsync(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Storage", "WriteAsync(object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::WriteAsync((filename != NULL) ? filename : ::STRINGS[105/*""*/], (value != NULL) ? value : ::STRINGS[105/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::WriteAsync(::STRINGS[105/*""*/], ::STRINGS[105/*""*/]);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(586)
// ---------------------------------------------------------------------

// private sealed class TimerManager.Timer :586
// {
uType* TimerManager__Timer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TimerManager__Timer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager.Timer", options);
    ::TYPES[64] = ::g::Uno::Double_typeof();
    ::TYPES[12] = ::g::Uno::Action_typeof();
    ::TYPES[68] = ::g::Uno::Delegate_typeof();
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[69] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _callback), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _isRunning), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _repeat), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _startTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _timeout), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, ID), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, OnStop), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::TimerManager__Timer::_id_, uFieldFlagsStatic);
    return type;
}

// public Timer(double ms, Uno.Action callback, bool repeat) :600
void TimerManager__Timer__ctor__fn(TimerManager__Timer* __this, double* ms, uDelegate* callback, bool* repeat)
{
    __this->ctor_(*ms, callback, *repeat);
}

// private double GetMilliseconds() :647
void TimerManager__Timer__GetMilliseconds_fn(TimerManager__Timer* __this, double* __retval)
{
    *__retval = __this->GetMilliseconds();
}

// public Timer New(double ms, Uno.Action callback, bool repeat) :600
void TimerManager__Timer__New1_fn(double* ms, uDelegate* callback, bool* repeat, TimerManager__Timer** __retval)
{
    *__retval = TimerManager__Timer::New1(*ms, callback, *repeat);
}

// private void Start() :609
void TimerManager__Timer__Start_fn(TimerManager__Timer* __this)
{
    __this->Start();
}

// public void Stop() :616
void TimerManager__Timer__Stop_fn(TimerManager__Timer* __this)
{
    __this->Stop();
}

// private void Update() :624
void TimerManager__Timer__Update_fn(TimerManager__Timer* __this)
{
    __this->Update();
}

int TimerManager__Timer::_id_;

// public Timer(double ms, Uno.Action callback, bool repeat) [instance] :600
void TimerManager__Timer::ctor_(double ms, uDelegate* callback, bool repeat)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", ".ctor(double,Uno.Action,bool)");
    ID = (TimerManager__Timer::_id()++);
    _timeout = ms;
    _callback = callback;
    _repeat = repeat;
    Start();
}

// private double GetMilliseconds() [instance] :647
double TimerManager__Timer::GetMilliseconds()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "GetMilliseconds()");
    return (double)(::g::Uno::Diagnostics::Clock::GetTicks() / 10000LL);
}

// private void Start() [instance] :609
void TimerManager__Timer::Start()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "Start()");
    _startTime = GetMilliseconds();
    _isRunning = true;
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[12/*Uno.Action*/], (void*)TimerManager__Timer__Update_fn, this), 0);
}

// public void Stop() [instance] :616
void TimerManager__Timer::Stop()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "Stop()");
    _isRunning = false;
    ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[12/*Uno.Action*/], (void*)TimerManager__Timer__Update_fn, this), 0);

    if (::g::Uno::Delegate::op_Inequality(OnStop, NULL))
        uPtr(OnStop)->InvokeVoid(uCRef<int>(ID));
}

// private void Update() [instance] :624
void TimerManager__Timer::Update()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "Update()");

    if (!_isRunning)
        return;

    double now = GetMilliseconds();
    double elapsed = now - _startTime;

    if (_timeout < elapsed)
    {
        {
            const auto __finally_fun = [&]()
            {
                if (_repeat)
                    _startTime = now;
                else
                    Stop();
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (::g::Uno::Delegate::op_Inequality(_callback, NULL))
                uPtr(_callback)->InvokeVoid();
        }
    }
}

// public Timer New(double ms, Uno.Action callback, bool repeat) [static] :600
TimerManager__Timer* TimerManager__Timer::New1(double ms, uDelegate* callback, bool repeat)
{
    TimerManager__Timer* obj1 = (TimerManager__Timer*)uNew(TimerManager__Timer_typeof());
    obj1->ctor_(ms, callback, repeat);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(544)
// ---------------------------------------------------------------------

// internal sealed class TimerManager :544
// {
uType* TimerManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TimerManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager", options);
    type->fp_ctor_ = (void*)TimerManager__New1_fn;
    ::TYPES[70] = ::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof());
    ::TYPES[71] = TimerManager__Timer_typeof();
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager, _timers), 0);
    return type;
}

// public generated TimerManager() :544
void TimerManager__ctor__fn(TimerManager* __this)
{
    __this->ctor_();
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) :548
void TimerManager__AddTimer_fn(TimerManager* __this, double* ms, uDelegate* callback, bool* repeat, int* __retval)
{
    *__retval = __this->AddTimer(*ms, callback, *repeat);
}

// public bool DeleteTimer(int id) :556
void TimerManager__DeleteTimer_fn(TimerManager* __this, int* id, bool* __retval)
{
    *__retval = __this->DeleteTimer(*id);
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) :576
void TimerManager__GetTimer_fn(TimerManager* __this, int* id, TimerManager__Timer** __retval)
{
    *__retval = __this->GetTimer(*id);
}

// public generated TimerManager New() :544
void TimerManager__New1_fn(TimerManager** __retval)
{
    *__retval = TimerManager::New1();
}

// private void RemoveTimer(int id) :567
void TimerManager__RemoveTimer_fn(TimerManager* __this, int* id)
{
    __this->RemoveTimer(*id);
}

// public generated TimerManager() [instance] :544
void TimerManager::ctor_()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", ".ctor()");
    _timers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[70/*Uno.Collections.List<Fuse.Reactive.FuseJS.TimerManager.Timer>*/]));
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) [instance] :548
int TimerManager::AddTimer(double ms, uDelegate* callback, bool repeat)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "AddTimer(double,Uno.Action,[bool])");
    TimerManager__Timer* t = TimerManager__Timer::New1(ms, callback, repeat);
    t->OnStop = uDelegate::New(::TYPES[29/*Uno.Action<int>*/], (void*)TimerManager__RemoveTimer_fn, this);
    ::g::Uno::Collections::List__Add_fn(uPtr(_timers), t);
    return t->ID;
}

// public bool DeleteTimer(int id) [instance] :556
bool TimerManager::DeleteTimer(int id)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "DeleteTimer(int)");
    TimerManager__Timer* timer = GetTimer(id);

    if (timer != NULL)
    {
        uPtr(timer)->Stop();
        return true;
    }

    return false;
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) [instance] :576
TimerManager__Timer* TimerManager::GetTimer(int id)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "GetTimer(int)");
    TimerManager__Timer* ret2;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
    {
        TimerManager__Timer* timer = (::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret2), ret2);

        if (uPtr(timer)->ID == id)
            return timer;
    }

    return NULL;
}

// private void RemoveTimer(int id) [instance] :567
void TimerManager::RemoveTimer(int id)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "RemoveTimer(int)");
    TimerManager__Timer* ret3;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret3), ret3))->ID == id)
            uPtr(_timers)->RemoveAt(i);
}

// public generated TimerManager New() [static] :544
TimerManager* TimerManager::New1()
{
    TimerManager* obj1 = (TimerManager*)uNew(TimerManager_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(478)
// ---------------------------------------------------------------------

// internal sealed class TimerModule :478
// {
::g::Fuse::Scripting::NativeModule_type* TimerModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TimerModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.TimerModule", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)TimerModule__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[106] = uString::Const("create");
    ::STRINGS[107] = uString::Const("delete");
    ::STRINGS[108] = uString::Const("create(): requires at least three arguments");
    ::STRINGS[109] = uString::Const("create(): first argument must be a function");
    ::STRINGS[110] = uString::Const("delete(): requires one argument");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[69] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[12] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3,
        ::g::Fuse::Reactive::FuseJS::TimerManager_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule, _tm), 0);
    return type;
}

// public TimerModule() :482
void TimerModule__ctor_1_fn(TimerModule* __this)
{
    __this->ctor_1();
}

// private object Create(Fuse.Scripting.Context context, object[] args) :489
void TimerModule__Create_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Create(context, args);
}

// private object Delete(Fuse.Scripting.Context context, object[] args) :508
void TimerModule__Delete_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Delete(context, args);
}

// public TimerModule New() :482
void TimerModule__New2_fn(TimerModule** __retval)
{
    *__retval = TimerModule::New2();
}

// public TimerModule() [instance] :482
void TimerModule::ctor_1()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule", ".ctor()");
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    _tm = ::g::Fuse::Reactive::FuseJS::TimerManager::New1();
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[106/*"create"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Create_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[107/*"delete"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Delete_fn, this)));
}

// private object Create(Fuse.Scripting.Context context, object[] args) [instance] :489
uObject* TimerModule::Create(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule", "Create(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() < 3)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[108/*"create(): r...*/]));

    if (!uIs(uPtr(args)->Strong<uObject*>(0), ::TYPES[11/*Fuse.Scripting.Function*/]))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[109/*"create(): f...*/]));

    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[11/*Fuse.Scripting.Function*/]);
    double ms = ::g::Fuse::Scripting::Value::ToNumber(args->Strong<uObject*>(1));
    bool repeat = uUnbox<bool>(::TYPES[69/*bool*/], args->Strong<uObject*>(2));
    uArray* innerArgs = uArray::New(::TYPES[3/*object[]*/], args->Length() - 3);

    for (int i = 0; i < innerArgs->Length(); i++)
        innerArgs->Strong<uObject*>(i) = args->Strong<uObject*>(3 + i);

    return uBox<int>(::TYPES[38/*int*/], uPtr(_tm)->AddTimer(ms, uDelegate::New(::TYPES[12/*Uno.Action*/], (void*)TimerModule__CallbackClosure__Callback_fn, TimerModule__CallbackClosure::New1(context, func, innerArgs)), repeat));
}

// private object Delete(Fuse.Scripting.Context context, object[] args) [instance] :508
uObject* TimerModule::Delete(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule", "Delete(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[110/*"delete(): r...*/]));

    uPtr(_tm)->DeleteTimer(::g::Fuse::Reactive::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0)));
    return NULL;
}

// public TimerModule New() [static] :482
TimerModule* TimerModule::New2()
{
    TimerModule* obj1 = (TimerModule*)uNew(TimerModule_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(959)
// ---------------------------------------------------------------------

// public sealed class UserEvents :959
// {
uType* UserEvents_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UserEvents);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.UserEvents", options);
    type->fp_ctor_ = (void*)UserEvents__New1_fn;
    ::STRINGS[111] = uString::Const("raise");
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[8] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[72] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[17] = ::g::Uno::String_typeof()->Array();
    ::TYPES[73] = ::g::Fuse::Reactive::FuseJS::RaiseEvent_typeof();
    ::TYPES[12] = ::g::Uno::Action_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("CreateModule", NULL, (void*)UserEvents__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UserEvents__New1_fn, 0, true, UserEvents_typeof(), 0),
        new uFunction("Raise", NULL, (void*)UserEvents__Raise_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()));
    return type;
}

// public generated UserEvents() :959
void UserEvents__ctor__fn(UserEvents* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :961
void UserEvents__CreateModule_fn(uObject** __retval)
{
    *__retval = UserEvents::CreateModule();
}

// public generated UserEvents New() :959
void UserEvents__New1_fn(UserEvents** __retval)
{
    *__retval = UserEvents::New1();
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) :972
void UserEvents__Raise_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = UserEvents::Raise(context, args);
}

// public generated UserEvents() [instance] :959
void UserEvents::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :961
uObject* UserEvents::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.UserEvents", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[111/*"raise"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)UserEvents__Raise_fn))));
}

// public generated UserEvents New() [static] :959
UserEvents* UserEvents::New1()
{
    UserEvents* obj4 = (UserEvents*)uNew(UserEvents_typeof());
    obj4->ctor_();
    return obj4;
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) [static] :972
uObject* UserEvents::Raise(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.UserEvents", "Raise(Fuse.Scripting.Context,object[])");
    uString* eventName = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Uno::Collections::Dictionary* postArgs = NULL;
    ::g::Fuse::Scripting::Object* p = (args->Length() > 1) ? uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[8/*Fuse.Scripting.Object*/]) : NULL;

    if (p != NULL)
    {
        uArray* keys = uPtr(p)->Keys();
        postArgs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[72/*Uno.Collections.Dictionary<string, object>*/]);

        for (int index2 = 0, length3 = uPtr(keys)->Length(); index2 < length3; ++index2)
        {
            uString* key = uPtr(keys)->Strong<uString*>(index2);
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(postArgs), key, uPtr(p)->Item(key));
        }
    }

    ::g::Fuse::Reactive::FuseJS::RaiseEvent* re = ::g::Fuse::Reactive::FuseJS::RaiseEvent::New1();
    re->Source = NULL;
    re->Name = eventName;
    re->Args = postArgs;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[12/*Uno.Action*/], (void*)::g::Fuse::Reactive::FuseJS::RaiseEvent__Raise_fn, re));
    return NULL;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\FuseJS\$.uno(451)
// ---------------------------------------------------------------------

// internal static class Vibration :451
// {
uClassType* Vibration_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Vibration", options);
    ::STRINGS[112] = uString::Const("vibrate");
    ::TYPES[6] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :453
void Vibration__CreateModule_fn(uObject** __retval)
{
    *__retval = Vibration::CreateModule();
}

// private static object[] Vibrate(Fuse.Scripting.Context context, object[] args) :458
void Vibration__Vibrate_fn(::g::Fuse::Scripting::Context* context, uArray* args, uArray** __retval)
{
    *__retval = Vibration::Vibrate(context, args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :453
uObject* Vibration::CreateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Vibration", "CreateModule()");
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[112/*"vibrate"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Vibration__Vibrate_fn))));
}

// private static object[] Vibrate(Fuse.Scripting.Context context, object[] args) [static] :458
uArray* Vibration::Vibrate(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Vibration", "Vibrate(Fuse.Scripting.Context,object[])");
    double ms = (uPtr(args)->Length() > 0) ? ::g::Fuse::Reactive::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 200.0;
    ::g::Fuse::Vibration::Vibration::Vibrate(ms);
    return NULL;
}
// }

}}}} // ::g::Fuse::Reactive::FuseJS
