// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.res.AssetFileDescriptor.h>
#include <Android.android.content.res.AssetManager.h>
#include <Android.android.content.res.ColorStateList.h>
#include <Android.android.content.res.Configuration.h>
#include <Android.android.content.res.Resources.h>
#include <Android.android.content.res.TypedArray.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.os.Parcel.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <Android.Fallbacks.Android_java_io_InputStream.h>
#include <Android.java.io.FileDescriptor.h>
#include <Android.java.io.InputStream.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
static uType* TYPES[7];

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\content\res\$.uno(186)
// ------------------------------------------------------------------------------------

// public sealed extern class AssetFileDescriptor :186
// {
AssetFileDescriptor_type* AssetFileDescriptor_typeof()
{
    static uSStrong<AssetFileDescriptor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(AssetFileDescriptor);
    options.TypeSize = sizeof(AssetFileDescriptor_type);
    type = (AssetFileDescriptor_type*)uClassType::New("Android.android.content.res.AssetFileDescriptor", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))AssetFileDescriptor__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))AssetFileDescriptor__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))AssetFileDescriptor__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::io::FileDescriptor_typeof();
    ::TYPES[2] = ::g::Android::java::lang::String_typeof();
    ::TYPES[3] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(AssetFileDescriptor_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(AssetFileDescriptor_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(AssetFileDescriptor_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::describeContents_3488_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::getFileDescriptor_3479_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::getLength_3482_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::getStartOffset_3480_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::toString_3487_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::writeToParcel_3489_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(12,
        new uFunction("_Init", NULL, (void*)AssetFileDescriptor___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)AssetFileDescriptor__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_3488", NULL, (void*)AssetFileDescriptor__describeContents_IMPL_3488_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getFileDescriptor", NULL, (void*)AssetFileDescriptor__getFileDescriptor_fn, 0, false, ::g::Android::java::io::FileDescriptor_typeof(), 0),
        new uFunction("getFileDescriptor_IMPL_3479", NULL, (void*)AssetFileDescriptor__getFileDescriptor_IMPL_3479_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getLength", NULL, (void*)AssetFileDescriptor__getLength_fn, 0, false, ::g::Uno::Long_typeof(), 0),
        new uFunction("getLength_IMPL_3482", NULL, (void*)AssetFileDescriptor__getLength_IMPL_3482_fn, 0, true, ::g::Uno::Long_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getStartOffset", NULL, (void*)AssetFileDescriptor__getStartOffset_fn, 0, false, ::g::Uno::Long_typeof(), 0),
        new uFunction("getStartOffset_IMPL_3480", NULL, (void*)AssetFileDescriptor__getStartOffset_IMPL_3480_fn, 0, true, ::g::Uno::Long_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_3487", NULL, (void*)AssetFileDescriptor__toString_IMPL_3487_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)AssetFileDescriptor__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_3489", NULL, (void*)AssetFileDescriptor__writeToParcel_IMPL_3489_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :190
void AssetFileDescriptor___Init2_fn()
{
    AssetFileDescriptor::_Init2();
}

// public int describeContents() :321
void AssetFileDescriptor__describeContents_fn(AssetFileDescriptor* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_3488(bool arg0, Android.Base.Primitives.ujobject arg1) :366
void AssetFileDescriptor__describeContents_IMPL_3488_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = AssetFileDescriptor::describeContents_IMPL_3488(*arg0_, *arg1_);
}

// public Android.java.io.FileDescriptor getFileDescriptor() :267
void AssetFileDescriptor__getFileDescriptor_fn(AssetFileDescriptor* __this, ::g::Android::java::io::FileDescriptor** __retval)
{
    *__retval = __this->getFileDescriptor();
}

// public static extern Android.Base.Wrappers.IJWrapper getFileDescriptor_IMPL_3479(bool arg0, Android.Base.Primitives.ujobject arg1) :339
void AssetFileDescriptor__getFileDescriptor_IMPL_3479_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AssetFileDescriptor::getFileDescriptor_IMPL_3479(*arg0_, *arg1_);
}

// public long getLength() :285
void AssetFileDescriptor__getLength_fn(AssetFileDescriptor* __this, int64_t* __retval)
{
    *__retval = __this->getLength();
}

// public static extern long getLength_IMPL_3482(bool arg0, Android.Base.Primitives.ujobject arg1) :348
void AssetFileDescriptor__getLength_IMPL_3482_fn(bool* arg0_, jobject* arg1_, int64_t* __retval)
{
    *__retval = AssetFileDescriptor::getLength_IMPL_3482(*arg0_, *arg1_);
}

// public long getStartOffset() :273
void AssetFileDescriptor__getStartOffset_fn(AssetFileDescriptor* __this, int64_t* __retval)
{
    *__retval = __this->getStartOffset();
}

// public static extern long getStartOffset_IMPL_3480(bool arg0, Android.Base.Primitives.ujobject arg1) :342
void AssetFileDescriptor__getStartOffset_IMPL_3480_fn(bool* arg0_, jobject* arg1_, int64_t* __retval)
{
    *__retval = AssetFileDescriptor::getStartOffset_IMPL_3480(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :315
void AssetFileDescriptor__toString_fn(AssetFileDescriptor* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(AssetFileDescriptor::toString_IMPL_3487(__this->_subclassed, __this->_javaObject), ::TYPES[2/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3487(bool arg0, Android.Base.Primitives.ujobject arg1) :363
void AssetFileDescriptor__toString_IMPL_3487_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AssetFileDescriptor::toString_IMPL_3487(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :327
void AssetFileDescriptor__writeToParcel_fn(AssetFileDescriptor* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_3489(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :369
void AssetFileDescriptor__writeToParcel_IMPL_3489_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    AssetFileDescriptor::writeToParcel_IMPL_3489(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass AssetFileDescriptor::_javaClass2_;
jmethodID AssetFileDescriptor::describeContents_3488_ID_;
jmethodID AssetFileDescriptor::getFileDescriptor_3479_ID_;
jmethodID AssetFileDescriptor::getLength_3482_ID_;
jmethodID AssetFileDescriptor::getStartOffset_3480_ID_;
jmethodID AssetFileDescriptor::toString_3487_ID_;
jmethodID AssetFileDescriptor::writeToParcel_3489_ID_;

// public int describeContents() [instance] :321
int AssetFileDescriptor::describeContents()
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "describeContents()");
    return AssetFileDescriptor::describeContents_IMPL_3488(_subclassed, _javaObject);
}

// public Android.java.io.FileDescriptor getFileDescriptor() [instance] :267
::g::Android::java::io::FileDescriptor* AssetFileDescriptor::getFileDescriptor()
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "getFileDescriptor()");
    return uCast< ::g::Android::java::io::FileDescriptor*>(AssetFileDescriptor::getFileDescriptor_IMPL_3479(_subclassed, _javaObject), ::TYPES[1/*Android.java.io.FileDescriptor*/]);
}

// public long getLength() [instance] :285
int64_t AssetFileDescriptor::getLength()
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "getLength()");
    return AssetFileDescriptor::getLength_IMPL_3482(_subclassed, _javaObject);
}

// public long getStartOffset() [instance] :273
int64_t AssetFileDescriptor::getStartOffset()
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "getStartOffset()");
    return AssetFileDescriptor::getStartOffset_IMPL_3480(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :327
void AssetFileDescriptor::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "writeToParcel(Android.android.os.Parcel,int)");
    int arg1_ = arg1;
    AssetFileDescriptor::writeToParcel_IMPL_3489(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :190
void AssetFileDescriptor::_Init2()
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "_Init()");
    if (AssetFileDescriptor::_javaClass2()) { return; }
    INIT_JNI;
    AssetFileDescriptor::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/AssetFileDescriptor"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AssetFileDescriptor::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.AssetFileDescriptor'", 63);; }
}

// public static extern int describeContents_IMPL_3488(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :366
int AssetFileDescriptor::describeContents_IMPL_3488(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "describeContents_IMPL_3488(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(AssetFileDescriptor::_javaClass2(),AssetFileDescriptor::_Init2());
    
    int result;
    CACHE_METHOD(AssetFileDescriptor::describeContents_3488_ID(),AssetFileDescriptor::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.content.res.AssetFileDescriptor.describeContents could not be cached",99);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AssetFileDescriptor::_javaClass2(), AssetFileDescriptor::describeContents_3488_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AssetFileDescriptor::describeContents_3488_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getFileDescriptor_IMPL_3479(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :339
uObject* AssetFileDescriptor::getFileDescriptor_IMPL_3479(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "getFileDescriptor_IMPL_3479(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(AssetFileDescriptor::_javaClass2(),AssetFileDescriptor::_Init2());
    
    uObject* result;
    CACHE_METHOD(AssetFileDescriptor::getFileDescriptor_3479_ID(),AssetFileDescriptor::_javaClass2(),"getFileDescriptor","()Ljava/io/FileDescriptor;",GetMethodID,"Id for fallback method android.content.res.AssetFileDescriptor.getFileDescriptor could not be cached",100);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AssetFileDescriptor::_javaClass2(), AssetFileDescriptor::getFileDescriptor_3479_ID()),result,::g::Android::java::io::FileDescriptor_typeof(),::g::Android::java::io::FileDescriptor*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AssetFileDescriptor::getFileDescriptor_3479_ID()),result,::g::Android::java::io::FileDescriptor_typeof(),::g::Android::java::io::FileDescriptor*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern long getLength_IMPL_3482(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :348
int64_t AssetFileDescriptor::getLength_IMPL_3482(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "getLength_IMPL_3482(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(AssetFileDescriptor::_javaClass2(),AssetFileDescriptor::_Init2());
    
    int64_t result;
    CACHE_METHOD(AssetFileDescriptor::getLength_3482_ID(),AssetFileDescriptor::_javaClass2(),"getLength","()J",GetMethodID,"Id for fallback method android.content.res.AssetFileDescriptor.getLength could not be cached",92);
    if (arg0_) {
        result = ((int64_t)U_JNIVAR->CallNonvirtualLongMethod(arg1_, AssetFileDescriptor::_javaClass2(), AssetFileDescriptor::getLength_3482_ID()));
    }
    else
    {
        result = ((int64_t)U_JNIVAR->CallLongMethod(arg1_, AssetFileDescriptor::getLength_3482_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern long getStartOffset_IMPL_3480(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :342
int64_t AssetFileDescriptor::getStartOffset_IMPL_3480(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "getStartOffset_IMPL_3480(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(AssetFileDescriptor::_javaClass2(),AssetFileDescriptor::_Init2());
    
    int64_t result;
    CACHE_METHOD(AssetFileDescriptor::getStartOffset_3480_ID(),AssetFileDescriptor::_javaClass2(),"getStartOffset","()J",GetMethodID,"Id for fallback method android.content.res.AssetFileDescriptor.getStartOffset could not be cached",97);
    if (arg0_) {
        result = ((int64_t)U_JNIVAR->CallNonvirtualLongMethod(arg1_, AssetFileDescriptor::_javaClass2(), AssetFileDescriptor::getStartOffset_3480_ID()));
    }
    else
    {
        result = ((int64_t)U_JNIVAR->CallLongMethod(arg1_, AssetFileDescriptor::getStartOffset_3480_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3487(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :363
uObject* AssetFileDescriptor::toString_IMPL_3487(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "toString_IMPL_3487(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(AssetFileDescriptor::_javaClass2(),AssetFileDescriptor::_Init2());
    
    uObject* result;
    CACHE_METHOD(AssetFileDescriptor::toString_3487_ID(),AssetFileDescriptor::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.AssetFileDescriptor.toString could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AssetFileDescriptor::_javaClass2(), AssetFileDescriptor::toString_3487_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AssetFileDescriptor::toString_3487_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_3489(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :369
void AssetFileDescriptor::writeToParcel_IMPL_3489(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    uStackFrame __("Android.android.content.res.AssetFileDescriptor", "writeToParcel_IMPL_3489(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper,int)");
    INIT_JNI;
    CLASS_INIT(AssetFileDescriptor::_javaClass2(),AssetFileDescriptor::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(AssetFileDescriptor::writeToParcel_3489_ID(),AssetFileDescriptor::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.content.res.AssetFileDescriptor.writeToParcel could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AssetFileDescriptor::_javaClass2(), AssetFileDescriptor::writeToParcel_3489_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AssetFileDescriptor::writeToParcel_3489_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\content\res\$.uno(505)
// ------------------------------------------------------------------------------------

// public sealed extern class AssetManager :505
// {
::g::Android::java::lang::Object_type* AssetManager_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AssetManager);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.AssetManager", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[4] = ::g::Android::java::io::InputStream_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[5] = ::g::Android::android::content::res::AssetFileDescriptor_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetManager::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetManager::open_3508_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetManager::openFd_3510_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("_Init", NULL, (void*)AssetManager___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("open", NULL, (void*)AssetManager__open_fn, 0, false, ::g::Android::java::io::InputStream_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("open_IMPL_3508", NULL, (void*)AssetManager__open_IMPL_3508_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("openFd", NULL, (void*)AssetManager__openFd_fn, 0, false, ::g::Android::android::content::res::AssetFileDescriptor_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("openFd_IMPL_3510", NULL, (void*)AssetManager__openFd_IMPL_3510_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public static extern new void _Init() :509
void AssetManager___Init2_fn()
{
    AssetManager::_Init2();
}

// public Android.java.io.InputStream open(Android.java.lang.String arg0) :586
void AssetManager__open_fn(AssetManager* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::io::InputStream** __retval)
{
    *__retval = __this->open(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper open_IMPL_3508(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :650
void AssetManager__open_IMPL_3508_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = AssetManager::open_IMPL_3508(*arg0_, *arg1_, arg2_);
}

// public Android.android.content.res.AssetFileDescriptor openFd(Android.java.lang.String arg0) :598
void AssetManager__openFd_fn(AssetManager* __this, ::g::Android::java::lang::String* arg0, ::g::Android::android::content::res::AssetFileDescriptor** __retval)
{
    *__retval = __this->openFd(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper openFd_IMPL_3510(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :656
void AssetManager__openFd_IMPL_3510_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = AssetManager::openFd_IMPL_3510(*arg0_, *arg1_, arg2_);
}

jclass AssetManager::_javaClass2_;
jmethodID AssetManager::open_3508_ID_;
jmethodID AssetManager::openFd_3510_ID_;

// public Android.java.io.InputStream open(Android.java.lang.String arg0) [instance] :586
::g::Android::java::io::InputStream* AssetManager::open(::g::Android::java::lang::String* arg0)
{
    uStackFrame __("Android.android.content.res.AssetManager", "open(Android.java.lang.String)");
    return uCast< ::g::Android::java::io::InputStream*>(AssetManager::open_IMPL_3508(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[4/*Android.java.io.InputStream*/]);
}

// public Android.android.content.res.AssetFileDescriptor openFd(Android.java.lang.String arg0) [instance] :598
::g::Android::android::content::res::AssetFileDescriptor* AssetManager::openFd(::g::Android::java::lang::String* arg0)
{
    uStackFrame __("Android.android.content.res.AssetManager", "openFd(Android.java.lang.String)");
    return uCast< ::g::Android::android::content::res::AssetFileDescriptor*>(AssetManager::openFd_IMPL_3510(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[5/*Android.android.content.res.AssetFileDescriptor*/]);
}

// public static extern new void _Init() [static] :509
void AssetManager::_Init2()
{
    uStackFrame __("Android.android.content.res.AssetManager", "_Init()");
    if (AssetManager::_javaClass2()) { return; }
    INIT_JNI;
    AssetManager::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/AssetManager"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AssetManager::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.AssetManager'", 56);; }
}

// public static extern Android.Base.Wrappers.IJWrapper open_IMPL_3508(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :650
uObject* AssetManager::open_IMPL_3508(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.content.res.AssetManager", "open_IMPL_3508(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(AssetManager::_javaClass2(),AssetManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(AssetManager::open_3508_ID(),AssetManager::_javaClass2(),"open","(Ljava/lang/String;)Ljava/io/InputStream;",GetMethodID,"Id for fallback method android.content.res.AssetManager.open could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AssetManager::_javaClass2(), AssetManager::open_3508_ID(), _obArg2),result,::g::Android::Fallbacks::Android_java_io_InputStream_typeof(),::g::Android::java::io::InputStream*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AssetManager::open_3508_ID(), _obArg2),result,::g::Android::Fallbacks::Android_java_io_InputStream_typeof(),::g::Android::java::io::InputStream*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper openFd_IMPL_3510(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :656
uObject* AssetManager::openFd_IMPL_3510(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.content.res.AssetManager", "openFd_IMPL_3510(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(AssetManager::_javaClass2(),AssetManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(AssetManager::openFd_3510_ID(),AssetManager::_javaClass2(),"openFd","(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",GetMethodID,"Id for fallback method android.content.res.AssetManager.openFd could not be cached",82);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AssetManager::_javaClass2(), AssetManager::openFd_3510_ID(), _obArg2),result,::g::Android::android::content::res::AssetFileDescriptor_typeof(),::g::Android::android::content::res::AssetFileDescriptor*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AssetManager::openFd_3510_ID(), _obArg2),result,::g::Android::android::content::res::AssetFileDescriptor_typeof(),::g::Android::android::content::res::AssetFileDescriptor*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\content\res\$.uno(693)
// ------------------------------------------------------------------------------------

// public sealed extern class ColorStateList :693
// {
ColorStateList_type* ColorStateList_typeof()
{
    static uSStrong<ColorStateList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ColorStateList);
    options.TypeSize = sizeof(ColorStateList_type);
    type = (ColorStateList_type*)uClassType::New("Android.android.content.res.ColorStateList", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))ColorStateList__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))ColorStateList__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))ColorStateList__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::java::lang::String_typeof();
    ::TYPES[3] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ColorStateList_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ColorStateList_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(ColorStateList_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::ColorStateList::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::ColorStateList::describeContents_3527_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::ColorStateList::getDefaultColor_3525_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::ColorStateList::toString_3526_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::ColorStateList::writeToParcel_3528_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("_Init", NULL, (void*)ColorStateList___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)ColorStateList__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_3527", NULL, (void*)ColorStateList__describeContents_IMPL_3527_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getDefaultColor", NULL, (void*)ColorStateList__getDefaultColor_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getDefaultColor_IMPL_3525", NULL, (void*)ColorStateList__getDefaultColor_IMPL_3525_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_3526", NULL, (void*)ColorStateList__toString_IMPL_3526_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)ColorStateList__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_3528", NULL, (void*)ColorStateList__writeToParcel_IMPL_3528_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :697
void ColorStateList___Init2_fn()
{
    ColorStateList::_Init2();
}

// public int describeContents() :777
void ColorStateList__describeContents_fn(ColorStateList* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_3527(bool arg0, Android.Base.Primitives.ujobject arg1) :812
void ColorStateList__describeContents_IMPL_3527_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ColorStateList::describeContents_IMPL_3527(*arg0_, *arg1_);
}

// public int getDefaultColor() :765
void ColorStateList__getDefaultColor_fn(ColorStateList* __this, int* __retval)
{
    *__retval = __this->getDefaultColor();
}

// public static extern int getDefaultColor_IMPL_3525(bool arg0, Android.Base.Primitives.ujobject arg1) :806
void ColorStateList__getDefaultColor_IMPL_3525_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ColorStateList::getDefaultColor_IMPL_3525(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :771
void ColorStateList__toString_fn(ColorStateList* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.content.res.ColorStateList", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(ColorStateList::toString_IMPL_3526(__this->_subclassed, __this->_javaObject), ::TYPES[2/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3526(bool arg0, Android.Base.Primitives.ujobject arg1) :809
void ColorStateList__toString_IMPL_3526_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ColorStateList::toString_IMPL_3526(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :783
void ColorStateList__writeToParcel_fn(ColorStateList* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_3528(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :815
void ColorStateList__writeToParcel_IMPL_3528_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    ColorStateList::writeToParcel_IMPL_3528(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass ColorStateList::_javaClass2_;
jmethodID ColorStateList::describeContents_3527_ID_;
jmethodID ColorStateList::getDefaultColor_3525_ID_;
jmethodID ColorStateList::toString_3526_ID_;
jmethodID ColorStateList::writeToParcel_3528_ID_;

// public int describeContents() [instance] :777
int ColorStateList::describeContents()
{
    uStackFrame __("Android.android.content.res.ColorStateList", "describeContents()");
    return ColorStateList::describeContents_IMPL_3527(_subclassed, _javaObject);
}

// public int getDefaultColor() [instance] :765
int ColorStateList::getDefaultColor()
{
    uStackFrame __("Android.android.content.res.ColorStateList", "getDefaultColor()");
    return ColorStateList::getDefaultColor_IMPL_3525(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :783
void ColorStateList::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    uStackFrame __("Android.android.content.res.ColorStateList", "writeToParcel(Android.android.os.Parcel,int)");
    int arg1_ = arg1;
    ColorStateList::writeToParcel_IMPL_3528(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :697
void ColorStateList::_Init2()
{
    uStackFrame __("Android.android.content.res.ColorStateList", "_Init()");
    if (ColorStateList::_javaClass2()) { return; }
    INIT_JNI;
    ColorStateList::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/ColorStateList"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ColorStateList::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.ColorStateList'", 58);; }
}

// public static extern int describeContents_IMPL_3527(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :812
int ColorStateList::describeContents_IMPL_3527(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.ColorStateList", "describeContents_IMPL_3527(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ColorStateList::_javaClass2(),ColorStateList::_Init2());
    
    int result;
    CACHE_METHOD(ColorStateList::describeContents_3527_ID(),ColorStateList::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.content.res.ColorStateList.describeContents could not be cached",94);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ColorStateList::_javaClass2(), ColorStateList::describeContents_3527_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ColorStateList::describeContents_3527_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getDefaultColor_IMPL_3525(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :806
int ColorStateList::getDefaultColor_IMPL_3525(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.ColorStateList", "getDefaultColor_IMPL_3525(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ColorStateList::_javaClass2(),ColorStateList::_Init2());
    
    int result;
    CACHE_METHOD(ColorStateList::getDefaultColor_3525_ID(),ColorStateList::_javaClass2(),"getDefaultColor","()I",GetMethodID,"Id for fallback method android.content.res.ColorStateList.getDefaultColor could not be cached",93);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ColorStateList::_javaClass2(), ColorStateList::getDefaultColor_3525_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ColorStateList::getDefaultColor_3525_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3526(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :809
uObject* ColorStateList::toString_IMPL_3526(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.ColorStateList", "toString_IMPL_3526(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ColorStateList::_javaClass2(),ColorStateList::_Init2());
    
    uObject* result;
    CACHE_METHOD(ColorStateList::toString_3526_ID(),ColorStateList::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.ColorStateList.toString could not be cached",86);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ColorStateList::_javaClass2(), ColorStateList::toString_3526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ColorStateList::toString_3526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_3528(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :815
void ColorStateList::writeToParcel_IMPL_3528(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    uStackFrame __("Android.android.content.res.ColorStateList", "writeToParcel_IMPL_3528(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper,int)");
    INIT_JNI;
    CLASS_INIT(ColorStateList::_javaClass2(),ColorStateList::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ColorStateList::writeToParcel_3528_ID(),ColorStateList::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.content.res.ColorStateList.writeToParcel could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ColorStateList::_javaClass2(), ColorStateList::writeToParcel_3528_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ColorStateList::writeToParcel_3528_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\content\res\$.uno(831)
// ------------------------------------------------------------------------------------

// public sealed extern class Configuration :831
// {
Configuration_type* Configuration_typeof()
{
    static uSStrong<Configuration_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Configuration);
    options.TypeSize = sizeof(Configuration_type);
    type = (Configuration_type*)uClassType::New("Android.android.content.res.Configuration", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_equals1 = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::Object*, bool*))Configuration__equals1_fn;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Configuration__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Configuration__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))Configuration__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))Configuration__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[2] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Configuration_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Configuration_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(Configuration_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::describeContents_3614_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::equals_3619_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::hashCode_3620_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::toString_3609_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::writeToParcel_3615_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("_Init", NULL, (void*)Configuration___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)Configuration__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_3614", NULL, (void*)Configuration__describeContents_IMPL_3614_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("equals_IMPL_3619", NULL, (void*)Configuration__equals_IMPL_3619_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("hashCode_IMPL_3620", NULL, (void*)Configuration__hashCode_IMPL_3620_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_3609", NULL, (void*)Configuration__toString_IMPL_3609_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)Configuration__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_3615", NULL, (void*)Configuration__writeToParcel_IMPL_3615_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :835
void Configuration___Init2_fn()
{
    Configuration::_Init2();
}

// public int describeContents() :2340
void Configuration__describeContents_fn(Configuration* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_3614(bool arg0, Android.Base.Primitives.ujobject arg1) :2430
void Configuration__describeContents_IMPL_3614_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Configuration::describeContents_IMPL_3614(*arg0_, *arg1_);
}

// public override sealed bool equals(Android.java.lang.Object arg0) :2370
void Configuration__equals1_fn(Configuration* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    uStackFrame __("Android.android.content.res.Configuration", "equals(Android.java.lang.Object)");
    return *__retval = Configuration::equals_IMPL_3619(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool equals_IMPL_3619(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2445
void Configuration__equals_IMPL_3619_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Configuration::equals_IMPL_3619(*arg0_, *arg1_, arg2_);
}

// public override sealed int hashCode() :2376
void Configuration__hashCode1_fn(Configuration* __this, int* __retval)
{
    uStackFrame __("Android.android.content.res.Configuration", "hashCode()");
    return *__retval = Configuration::hashCode_IMPL_3620(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_3620(bool arg0, Android.Base.Primitives.ujobject arg1) :2448
void Configuration__hashCode_IMPL_3620_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Configuration::hashCode_IMPL_3620(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :2310
void Configuration__toString_fn(Configuration* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.content.res.Configuration", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(Configuration::toString_IMPL_3609(__this->_subclassed, __this->_javaObject), ::TYPES[2/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3609(bool arg0, Android.Base.Primitives.ujobject arg1) :2415
void Configuration__toString_IMPL_3609_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Configuration::toString_IMPL_3609(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :2346
void Configuration__writeToParcel_fn(Configuration* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_3615(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :2433
void Configuration__writeToParcel_IMPL_3615_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    Configuration::writeToParcel_IMPL_3615(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass Configuration::_javaClass2_;
jmethodID Configuration::describeContents_3614_ID_;
jmethodID Configuration::equals_3619_ID_;
jmethodID Configuration::hashCode_3620_ID_;
jmethodID Configuration::toString_3609_ID_;
jmethodID Configuration::writeToParcel_3615_ID_;

// public int describeContents() [instance] :2340
int Configuration::describeContents()
{
    uStackFrame __("Android.android.content.res.Configuration", "describeContents()");
    return Configuration::describeContents_IMPL_3614(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :2346
void Configuration::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    uStackFrame __("Android.android.content.res.Configuration", "writeToParcel(Android.android.os.Parcel,int)");
    int arg1_ = arg1;
    Configuration::writeToParcel_IMPL_3615(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :835
void Configuration::_Init2()
{
    uStackFrame __("Android.android.content.res.Configuration", "_Init()");
    if (Configuration::_javaClass2()) { return; }
    INIT_JNI;
    Configuration::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/Configuration"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Configuration::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.Configuration'", 57);; }
}

// public static extern int describeContents_IMPL_3614(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2430
int Configuration::describeContents_IMPL_3614(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.Configuration", "describeContents_IMPL_3614(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    
    int result;
    CACHE_METHOD(Configuration::describeContents_3614_ID(),Configuration::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.content.res.Configuration.describeContents could not be cached",93);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Configuration::_javaClass2(), Configuration::describeContents_3614_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Configuration::describeContents_3614_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool equals_IMPL_3619(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2445
bool Configuration::equals_IMPL_3619(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.content.res.Configuration", "equals_IMPL_3619(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(Configuration::equals_3619_ID(),Configuration::_javaClass2(),"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.content.res.Configuration.equals could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, Configuration::_javaClass2(), Configuration::equals_3619_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Configuration::equals_3619_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_3620(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2448
int Configuration::hashCode_IMPL_3620(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.Configuration", "hashCode_IMPL_3620(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    
    int result;
    CACHE_METHOD(Configuration::hashCode_3620_ID(),Configuration::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.content.res.Configuration.hashCode could not be cached",85);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Configuration::_javaClass2(), Configuration::hashCode_3620_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Configuration::hashCode_3620_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3609(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2415
uObject* Configuration::toString_IMPL_3609(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.Configuration", "toString_IMPL_3609(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    
    uObject* result;
    CACHE_METHOD(Configuration::toString_3609_ID(),Configuration::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.Configuration.toString could not be cached",85);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Configuration::_javaClass2(), Configuration::toString_3609_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Configuration::toString_3609_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_3615(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :2433
void Configuration::writeToParcel_IMPL_3615(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    uStackFrame __("Android.android.content.res.Configuration", "writeToParcel_IMPL_3615(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper,int)");
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Configuration::writeToParcel_3615_ID(),Configuration::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.content.res.Configuration.writeToParcel could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Configuration::_javaClass2(), Configuration::writeToParcel_3615_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Configuration::writeToParcel_3615_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\content\res\$.uno(2836)
// -------------------------------------------------------------------------------------

// public sealed extern class Resources :2836
// {
::g::Android::java::lang::Object_type* Resources_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Resources);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.Resources", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[6] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::Resources::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Resources::getDrawable_3664_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("_Init", NULL, (void*)Resources___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("getDrawable", NULL, (void*)Resources__getDrawable_fn, 0, false, ::g::Android::android::graphics::drawable::Drawable_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getDrawable_IMPL_3664", NULL, (void*)Resources__getDrawable_IMPL_3664_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :2840
void Resources___Init2_fn()
{
    Resources::_Init2();
}

// public Android.android.graphics.drawable.Drawable getDrawable(int arg0) :2957
void Resources__getDrawable_fn(Resources* __this, int* arg0, ::g::Android::android::graphics::drawable::Drawable** __retval)
{
    *__retval = __this->getDrawable(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getDrawable_IMPL_3664(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :3193
void Resources__getDrawable_IMPL_3664_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Resources::getDrawable_IMPL_3664(*arg0_, *arg1_, *arg2_);
}

jclass Resources::_javaClass2_;
jmethodID Resources::getDrawable_3664_ID_;

// public Android.android.graphics.drawable.Drawable getDrawable(int arg0) [instance] :2957
::g::Android::android::graphics::drawable::Drawable* Resources::getDrawable(int arg0)
{
    uStackFrame __("Android.android.content.res.Resources", "getDrawable(int)");
    int arg0_ = arg0;
    return uCast< ::g::Android::android::graphics::drawable::Drawable*>(Resources::getDrawable_IMPL_3664(_subclassed, _javaObject, arg0_), ::TYPES[6/*Android.android.graphics.drawable.Drawable*/]);
}

// public static extern new void _Init() [static] :2840
void Resources::_Init2()
{
    uStackFrame __("Android.android.content.res.Resources", "_Init()");
    if (Resources::_javaClass2()) { return; }
    INIT_JNI;
    Resources::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/Resources"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Resources::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.Resources'", 53);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getDrawable_IMPL_3664(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :3193
uObject* Resources::getDrawable_IMPL_3664(bool arg0_, jobject arg1_, int arg2_)
{
    uStackFrame __("Android.android.content.res.Resources", "getDrawable_IMPL_3664(bool,Android.Base.Primitives.ujobject,int)");
    INIT_JNI;
    CLASS_INIT(Resources::_javaClass2(),Resources::_Init2());
    
    uObject* result;
    CACHE_METHOD(Resources::getDrawable_3664_ID(),Resources::_javaClass2(),"getDrawable","(I)Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.content.res.Resources.getDrawable could not be cached",84);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Resources::_javaClass2(), Resources::getDrawable_3664_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Resources::getDrawable_3664_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\content\res\$.uno(3299)
// -------------------------------------------------------------------------------------

// public sealed extern class TypedArray :3299
// {
::g::Android::java::lang::Object_type* TypedArray_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TypedArray);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.TypedArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))TypedArray__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[2] = ::g::Android::java::lang::String_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::TypedArray::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::TypedArray::toString_3723_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)TypedArray___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_3723", NULL, (void*)TypedArray__toString_IMPL_3723_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public static extern new void _Init() :3303
void TypedArray___Init2_fn()
{
    TypedArray::_Init2();
}

// public override sealed Android.java.lang.String toString() :3468
void TypedArray__toString_fn(TypedArray* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.content.res.TypedArray", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(TypedArray::toString_IMPL_3723(__this->_subclassed, __this->_javaObject), ::TYPES[2/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3723(bool arg0, Android.Base.Primitives.ujobject arg1) :3556
void TypedArray__toString_IMPL_3723_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = TypedArray::toString_IMPL_3723(*arg0_, *arg1_);
}

jclass TypedArray::_javaClass2_;
jmethodID TypedArray::toString_3723_ID_;

// public static extern new void _Init() [static] :3303
void TypedArray::_Init2()
{
    uStackFrame __("Android.android.content.res.TypedArray", "_Init()");
    if (TypedArray::_javaClass2()) { return; }
    INIT_JNI;
    TypedArray::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/TypedArray"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!TypedArray::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.TypedArray'", 54);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3723(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3556
uObject* TypedArray::toString_IMPL_3723(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.TypedArray", "toString_IMPL_3723(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(TypedArray::_javaClass2(),TypedArray::_Init2());
    
    uObject* result;
    CACHE_METHOD(TypedArray::toString_3723_ID(),TypedArray::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.TypedArray.toString could not be cached",82);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, TypedArray::_javaClass2(), TypedArray::toString_3723_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, TypedArray::toString_3723_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}}} // ::g::Android::android::content::res
