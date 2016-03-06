// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.os.BuildDLRVERSION.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.Handler.h>
#include <Android.android.os.IBinder.h>
#include <Android.android.os.IBinderDLRDeathRecipient.h>
#include <Android.android.os.IInterface.h>
#include <Android.android.os.Looper.h>
#include <Android.android.os.Parcel.h>
#include <Android.android.os.Vibrator.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_os_IBinder.h>
#include <Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h>
#include <Android.Fallbacks.Android_android_os_IInterface.h>
#include <Android.Fallbacks.Android_android_os_Vibrator.h>
#include <Android.java.io.FileDescriptor.h>
#include <Android.java.lang.Runnable.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Type.h>
static uType* TYPES[3];

namespace g{
namespace Android{
namespace android{
namespace os{

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/os/$.uno(2167)
// -----------------------------------------------------------------------------------------------

// public sealed extern class BuildDLRVERSION :2167
// {
::g::Android::java::lang::Object_type* BuildDLRVERSION_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(BuildDLRVERSION);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.BuildDLRVERSION", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::BuildDLRVERSION::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::os::BuildDLRVERSION::SDK_INT_13449_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :2171
void BuildDLRVERSION___Init2_fn()
{
    BuildDLRVERSION::_Init2();
}

// public static int get_SDK_INT() :2227
void BuildDLRVERSION__get_SDK_INT_fn(int* __retval)
{
    *__retval = BuildDLRVERSION::SDK_INT();
}

jclass BuildDLRVERSION::_javaClass2_;
jfieldID BuildDLRVERSION::SDK_INT_13449_ID_;

// public static extern new void _Init() [static] :2171
void BuildDLRVERSION::_Init2()
{
    if (BuildDLRVERSION::_javaClass2()) { return; }
    INIT_JNI;
    BuildDLRVERSION::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Build$VERSION"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!BuildDLRVERSION::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Build$VERSION'", 48);; }
}

// public static int get_SDK_INT() [static] :2227
int BuildDLRVERSION::SDK_INT()
{
    INIT_JNI;
    CLASS_INIT(BuildDLRVERSION::_javaClass2(),BuildDLRVERSION::_Init2());
    if (::uEnterCriticalIfNull(&BuildDLRVERSION::SDK_INT_13449_ID())) {;
    CACHE_FIELD(BuildDLRVERSION::SDK_INT_13449_ID(),BuildDLRVERSION::_javaClass2(),"SDK_INT","I",GetStaticFieldID,"Id for field BuildDLRVERSION.SDK_INT could not be cached",56);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(BuildDLRVERSION::_javaClass2(), BuildDLRVERSION::SDK_INT_13449_ID()));;
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/os/$.uno(3069)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Bundle :3069
// {
::g::Android::java::lang::Object_type* Bundle_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Bundle);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Bundle", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Bundle__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Bundle::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Bundle::toString_13587_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :3073
void Bundle___Init2_fn()
{
    Bundle::_Init2();
}

// public override sealed Android.java.lang.String toString() :3683
void Bundle__toString_fn(Bundle* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Bundle::toString_IMPL_13587(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13587(bool arg0, Android.Base.Primitives.ujobject arg1) :3949
void Bundle__toString_IMPL_13587_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Bundle::toString_IMPL_13587(*arg0_, *arg1_);
}

jclass Bundle::_javaClass2_;
jmethodID Bundle::toString_13587_ID_;

// public static extern new void _Init() [static] :3073
void Bundle::_Init2()
{
    if (Bundle::_javaClass2()) { return; }
    INIT_JNI;
    Bundle::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Bundle"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Bundle::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Bundle'", 41);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13587(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3949
uObject* Bundle::toString_IMPL_13587(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Bundle::_javaClass2(),Bundle::_Init2());
    
    uObject* result;
    CACHE_METHOD(Bundle::toString_13587_ID(),Bundle::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Bundle.toString could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Bundle::_javaClass2(), Bundle::toString_13587_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Bundle::toString_13587_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/os/$.uno(11)
// ---------------------------------------------------------------------------------------------

// public sealed extern class Handler :11
// {
::g::Android::java::lang::Object_type* Handler_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Handler);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Handler", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Handler__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Handler::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Handler::Handler_13778_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Handler::post_13788_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Handler::postDelayed_13791_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Handler::toString_13809_ID_, uFieldFlagsStatic);
    return type;
}

// public Handler(Android.android.os.Looper arg0) :49
void Handler__ctor_7_fn(Handler* __this, ::g::Android::android::os::Looper* arg0)
{
    __this->ctor_7(arg0);
}

// public static extern new void _Init() :15
void Handler___Init2_fn()
{
    Handler::_Init2();
}

// public Handler New(Android.android.os.Looper arg0) :49
void Handler__New7_fn(::g::Android::android::os::Looper* arg0, Handler** __retval)
{
    *__retval = Handler::New7(arg0);
}

// public bool post(Android.java.lang.Runnable arg0) :130
void Handler__post_fn(Handler* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->post(arg0);
}

// public static extern bool post_IMPL_13788(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :291
void Handler__post_IMPL_13788_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Handler::post_IMPL_13788(*arg0_, *arg1_, arg2_);
}

// public bool postDelayed(Android.java.lang.Runnable arg0, long arg1) :148
void Handler__postDelayed_fn(Handler* __this, uObject* arg0, int64_t* arg1, bool* __retval)
{
    *__retval = __this->postDelayed(arg0, *arg1);
}

// public static extern bool postDelayed_IMPL_13791(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3) :300
void Handler__postDelayed_IMPL_13791_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, bool* __retval)
{
    *__retval = Handler::postDelayed_IMPL_13791(*arg0_, *arg1_, arg2_, *arg3_);
}

// public override sealed Android.java.lang.String toString() :256
void Handler__toString_fn(Handler* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Handler::toString_IMPL_13809(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13809(bool arg0, Android.Base.Primitives.ujobject arg1) :354
void Handler__toString_IMPL_13809_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Handler::toString_IMPL_13809(*arg0_, *arg1_);
}

jclass Handler::_javaClass2_;
jmethodID Handler::Handler_13778_ID_c_;
jmethodID Handler::post_13788_ID_;
jmethodID Handler::postDelayed_13791_ID_;
jmethodID Handler::toString_13809_ID_;

// public Handler(Android.android.os.Looper arg0) [instance] :49
void Handler::ctor_7(::g::Android::android::os::Looper* arg0)
{
    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Handler::_javaClass2(),Handler::_Init2());;
    CACHE_METHOD(Handler::Handler_13778_ID_c(),Handler::_javaClass2(),"<init>","(Landroid/os/Looper;)V",GetMethodID,"Id for fallback method android.os.Handler.<init> could not be cached",68);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Handler::_javaClass2(), Handler::Handler_13778_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public bool post(Android.java.lang.Runnable arg0) [instance] :130
bool Handler::post(uObject* arg0)
{
    return Handler::post_IMPL_13788(_subclassed, _javaObject, arg0);
}

// public bool postDelayed(Android.java.lang.Runnable arg0, long arg1) [instance] :148
bool Handler::postDelayed(uObject* arg0, int64_t arg1)
{
    int64_t arg1_ = arg1;
    return Handler::postDelayed_IMPL_13791(_subclassed, _javaObject, arg0, arg1_);
}

// public static extern new void _Init() [static] :15
void Handler::_Init2()
{
    if (Handler::_javaClass2()) { return; }
    INIT_JNI;
    Handler::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Handler"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Handler::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Handler'", 42);; }
}

// public Handler New(Android.android.os.Looper arg0) [static] :49
Handler* Handler::New7(::g::Android::android::os::Looper* arg0)
{
    Handler* obj4 = (Handler*)uNew(Handler_typeof());
    obj4->ctor_7(arg0);
    return obj4;
}

// public static extern bool post_IMPL_13788(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :291
bool Handler::post_IMPL_13788(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Handler::_javaClass2(),Handler::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(Handler::post_13788_ID(),Handler::_javaClass2(),"post","(Ljava/lang/Runnable;)Z",GetMethodID,"Id for fallback method android.os.Handler.post could not be cached",66);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, Handler::_javaClass2(), Handler::post_13788_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Handler::post_13788_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool postDelayed_IMPL_13791(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3) [static] :300
bool Handler::postDelayed_IMPL_13791(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_)
{
    INIT_JNI;
    CLASS_INIT(Handler::_javaClass2(),Handler::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(Handler::postDelayed_13791_ID(),Handler::_javaClass2(),"postDelayed","(Ljava/lang/Runnable;J)Z",GetMethodID,"Id for fallback method android.os.Handler.postDelayed could not be cached",73);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, Handler::_javaClass2(), Handler::postDelayed_13791_ID(), _obArg2, ((jlong)arg3_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Handler::postDelayed_13791_ID(), _obArg2, ((jlong)arg3_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13809(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :354
uObject* Handler::toString_IMPL_13809(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Handler::_javaClass2(),Handler::_Init2());
    
    uObject* result;
    CACHE_METHOD(Handler::toString_13809_ID(),Handler::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Handler.toString could not be cached",70);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Handler::_javaClass2(), Handler::toString_13809_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Handler::toString_13809_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/os/$.uno(11379)
// ------------------------------------------------------------------------------------------------

// public abstract extern interface IBinder :11379
// {
uInterfaceType* IBinder_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.os.IBinder", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/os/$.uno(11362)
// ------------------------------------------------------------------------------------------------

// public abstract extern interface IBinderDLRDeathRecipient :11362
// {
uInterfaceType* IBinderDLRDeathRecipient_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.os.IBinderDLRDeathRecipient", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/os/$.uno(11440)
// ------------------------------------------------------------------------------------------------

// public abstract extern interface IInterface :11440
// {
uInterfaceType* IInterface_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.os.IInterface", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/os/$.uno(6368)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Looper :6368
// {
::g::Android::java::lang::Object_type* Looper_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Looper);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Looper", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Looper__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Looper::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Looper::getMainLooper_13840_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Looper::toString_13849_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :6372
void Looper___Init2_fn()
{
    Looper::_Init2();
}

// public static Android.android.os.Looper getMainLooper() :6387
void Looper__getMainLooper_fn(Looper** __retval)
{
    *__retval = Looper::getMainLooper();
}

// public static extern Android.Base.Wrappers.IJWrapper getMainLooper_IMPL_13840() :6454
void Looper__getMainLooper_IMPL_13840_fn(uObject** __retval)
{
    *__retval = Looper::getMainLooper_IMPL_13840();
}

// public override sealed Android.java.lang.String toString() :6441
void Looper__toString_fn(Looper* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Looper::toString_IMPL_13849(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13849(bool arg0, Android.Base.Primitives.ujobject arg1) :6481
void Looper__toString_IMPL_13849_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Looper::toString_IMPL_13849(*arg0_, *arg1_);
}

jclass Looper::_javaClass2_;
jmethodID Looper::getMainLooper_13840_ID_;
jmethodID Looper::toString_13849_ID_;

// public static extern new void _Init() [static] :6372
void Looper::_Init2()
{
    if (Looper::_javaClass2()) { return; }
    INIT_JNI;
    Looper::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Looper"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Looper::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Looper'", 41);; }
}

// public static Android.android.os.Looper getMainLooper() [static] :6387
Looper* Looper::getMainLooper()
{
    return uCast<Looper*>(Looper::getMainLooper_IMPL_13840(), Looper_typeof());
}

// public static extern Android.Base.Wrappers.IJWrapper getMainLooper_IMPL_13840() [static] :6454
uObject* Looper::getMainLooper_IMPL_13840()
{
    INIT_JNI;
    CLASS_INIT(Looper::_javaClass2(),Looper::_Init2());
    
    uObject* result;
    CACHE_METHOD(Looper::getMainLooper_13840_ID(),Looper::_javaClass2(),"getMainLooper","()Landroid/os/Looper;",GetStaticMethodID,"Id for fallback method android.os.Looper.getMainLooper could not be cached",74);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(Looper::_javaClass2(), Looper::getMainLooper_13840_ID()),result,Looper_typeof(),Looper*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13849(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :6481
uObject* Looper::toString_IMPL_13849(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Looper::_javaClass2(),Looper::_Init2());
    
    uObject* result;
    CACHE_METHOD(Looper::toString_13849_ID(),Looper::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Looper.toString could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Looper::_javaClass2(), Looper::toString_13849_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Looper::toString_13849_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/os/$.uno(7269)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Parcel :7269
// {
::g::Android::java::lang::Object_type* Parcel_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Parcel);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Parcel", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/os/$.uno(1038)
// -----------------------------------------------------------------------------------------------

// public abstract extern class Vibrator :1038
// {
Vibrator_type* Vibrator_typeof()
{
    static uSStrong<Vibrator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Vibrator);
    options.TypeSize = sizeof(Vibrator_type);
    type = (Vibrator_type*)uClassType::New("Android.android.os.Vibrator", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Vibrator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Vibrator_type, interface1));
    type->SetFields(5);
    return type;
}
// }

}}}} // ::g::Android::android::os
