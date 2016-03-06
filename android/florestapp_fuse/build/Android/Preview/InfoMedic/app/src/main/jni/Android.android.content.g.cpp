// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.ClipData.h>
#include <Android.android.content.ComponentName.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.Intent.h>
#include <Android.android.content.res.AssetManager.h>
#include <Android.android.content.res.Resources.h>
#include <Android.android.net.Uri.h>
#include <Android.android.os.Parcel.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_content_Context.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
static uType* TYPES[6];

namespace g{
namespace Android{
namespace android{
namespace content{

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\content\$.uno(10030)
// ----------------------------------------------------------------------------------

// public sealed extern class ClipData :10030
// {
ClipData_type* ClipData_typeof()
{
    static uSStrong<ClipData_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ClipData);
    options.TypeSize = sizeof(ClipData_type);
    type = (ClipData_type*)uClassType::New("Android.android.content.ClipData", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))ClipData__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))ClipData__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))ClipData__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ClipData_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ClipData_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(ClipData_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::ClipData::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ClipData::describeContents_3828_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ClipData::toString_3827_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ClipData::writeToParcel_3829_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("_Init", NULL, (void*)ClipData___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)ClipData__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_3828", NULL, (void*)ClipData__describeContents_IMPL_3828_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_3827", NULL, (void*)ClipData__toString_IMPL_3827_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)ClipData__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_3829", NULL, (void*)ClipData__writeToParcel_IMPL_3829_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :10034
void ClipData___Init2_fn()
{
    ClipData::_Init2();
}

// public int describeContents() :10166
void ClipData__describeContents_fn(ClipData* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_3828(bool arg0, Android.Base.Primitives.ujobject arg1) :10212
void ClipData__describeContents_IMPL_3828_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ClipData::describeContents_IMPL_3828(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :10160
void ClipData__toString_fn(ClipData* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.content.ClipData", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(ClipData::toString_IMPL_3827(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3827(bool arg0, Android.Base.Primitives.ujobject arg1) :10209
void ClipData__toString_IMPL_3827_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ClipData::toString_IMPL_3827(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :10172
void ClipData__writeToParcel_fn(ClipData* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_3829(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :10215
void ClipData__writeToParcel_IMPL_3829_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    ClipData::writeToParcel_IMPL_3829(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass ClipData::_javaClass2_;
jmethodID ClipData::describeContents_3828_ID_;
jmethodID ClipData::toString_3827_ID_;
jmethodID ClipData::writeToParcel_3829_ID_;

// public int describeContents() [instance] :10166
int ClipData::describeContents()
{
    uStackFrame __("Android.android.content.ClipData", "describeContents()");
    return ClipData::describeContents_IMPL_3828(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :10172
void ClipData::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    uStackFrame __("Android.android.content.ClipData", "writeToParcel(Android.android.os.Parcel,int)");
    int arg1_ = arg1;
    ClipData::writeToParcel_IMPL_3829(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :10034
void ClipData::_Init2()
{
    uStackFrame __("Android.android.content.ClipData", "_Init()");
    if (ClipData::_javaClass2()) { return; }
    INIT_JNI;
    ClipData::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/ClipData"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ClipData::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.ClipData'", 48);; }
}

// public static extern int describeContents_IMPL_3828(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :10212
int ClipData::describeContents_IMPL_3828(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.ClipData", "describeContents_IMPL_3828(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ClipData::_javaClass2(),ClipData::_Init2());
    
    int result;
    CACHE_METHOD(ClipData::describeContents_3828_ID(),ClipData::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.content.ClipData.describeContents could not be cached",84);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ClipData::_javaClass2(), ClipData::describeContents_3828_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ClipData::describeContents_3828_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3827(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :10209
uObject* ClipData::toString_IMPL_3827(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.ClipData", "toString_IMPL_3827(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ClipData::_javaClass2(),ClipData::_Init2());
    
    uObject* result;
    CACHE_METHOD(ClipData::toString_3827_ID(),ClipData::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.ClipData.toString could not be cached",76);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ClipData::_javaClass2(), ClipData::toString_3827_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ClipData::toString_3827_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_3829(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :10215
void ClipData::writeToParcel_IMPL_3829(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    uStackFrame __("Android.android.content.ClipData", "writeToParcel_IMPL_3829(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper,int)");
    INIT_JNI;
    CLASS_INIT(ClipData::_javaClass2(),ClipData::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ClipData::writeToParcel_3829_ID(),ClipData::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.content.ClipData.writeToParcel could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ClipData::_javaClass2(), ClipData::writeToParcel_3829_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ClipData::writeToParcel_3829_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\content\$.uno(10556)
// ----------------------------------------------------------------------------------

// public sealed extern class ComponentName :10556
// {
ComponentName_type* ComponentName_typeof()
{
    static uSStrong<ComponentName_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ComponentName);
    options.TypeSize = sizeof(ComponentName_type);
    type = (ComponentName_type*)uClassType::New("Android.android.content.ComponentName", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_equals1 = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::Object*, bool*))ComponentName__equals1_fn;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))ComponentName__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))ComponentName__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))ComponentName__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))ComponentName__writeToParcel1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ComponentName_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ComponentName_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(ComponentName_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::describeContents_3884_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::equals_3881_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::hashCode_3882_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::toString_3880_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::writeToParcel_3885_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("_Init", NULL, (void*)ComponentName___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)ComponentName__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_3884", NULL, (void*)ComponentName__describeContents_IMPL_3884_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("equals_IMPL_3881", NULL, (void*)ComponentName__equals_IMPL_3881_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("hashCode_IMPL_3882", NULL, (void*)ComponentName__hashCode_IMPL_3882_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_3880", NULL, (void*)ComponentName__toString_IMPL_3880_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)ComponentName__writeToParcel1_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_3885", NULL, (void*)ComponentName__writeToParcel_IMPL_3885_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :10560
void ComponentName___Init2_fn()
{
    ComponentName::_Init2();
}

// public int describeContents() :10720
void ComponentName__describeContents_fn(ComponentName* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_3884(bool arg0, Android.Base.Primitives.ujobject arg1) :10791
void ComponentName__describeContents_IMPL_3884_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ComponentName::describeContents_IMPL_3884(*arg0_, *arg1_);
}

// public override sealed bool equals(Android.java.lang.Object arg0) :10702
void ComponentName__equals1_fn(ComponentName* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    uStackFrame __("Android.android.content.ComponentName", "equals(Android.java.lang.Object)");
    return *__retval = ComponentName::equals_IMPL_3881(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool equals_IMPL_3881(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :10782
void ComponentName__equals_IMPL_3881_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ComponentName::equals_IMPL_3881(*arg0_, *arg1_, arg2_);
}

// public override sealed int hashCode() :10708
void ComponentName__hashCode1_fn(ComponentName* __this, int* __retval)
{
    uStackFrame __("Android.android.content.ComponentName", "hashCode()");
    return *__retval = ComponentName::hashCode_IMPL_3882(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_3882(bool arg0, Android.Base.Primitives.ujobject arg1) :10785
void ComponentName__hashCode_IMPL_3882_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ComponentName::hashCode_IMPL_3882(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :10696
void ComponentName__toString_fn(ComponentName* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.content.ComponentName", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(ComponentName::toString_IMPL_3880(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3880(bool arg0, Android.Base.Primitives.ujobject arg1) :10779
void ComponentName__toString_IMPL_3880_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ComponentName::toString_IMPL_3880(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :10726
void ComponentName__writeToParcel1_fn(ComponentName* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel1(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_3885(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :10794
void ComponentName__writeToParcel_IMPL_3885_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    ComponentName::writeToParcel_IMPL_3885(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass ComponentName::_javaClass2_;
jmethodID ComponentName::describeContents_3884_ID_;
jmethodID ComponentName::equals_3881_ID_;
jmethodID ComponentName::hashCode_3882_ID_;
jmethodID ComponentName::toString_3880_ID_;
jmethodID ComponentName::writeToParcel_3885_ID_;

// public int describeContents() [instance] :10720
int ComponentName::describeContents()
{
    uStackFrame __("Android.android.content.ComponentName", "describeContents()");
    return ComponentName::describeContents_IMPL_3884(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :10726
void ComponentName::writeToParcel1(::g::Android::android::os::Parcel* arg0, int arg1)
{
    uStackFrame __("Android.android.content.ComponentName", "writeToParcel(Android.android.os.Parcel,int)");
    int arg1_ = arg1;
    ComponentName::writeToParcel_IMPL_3885(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :10560
void ComponentName::_Init2()
{
    uStackFrame __("Android.android.content.ComponentName", "_Init()");
    if (ComponentName::_javaClass2()) { return; }
    INIT_JNI;
    ComponentName::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/ComponentName"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ComponentName::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.ComponentName'", 53);; }
}

// public static extern int describeContents_IMPL_3884(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :10791
int ComponentName::describeContents_IMPL_3884(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.ComponentName", "describeContents_IMPL_3884(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ComponentName::_javaClass2(),ComponentName::_Init2());
    
    int result;
    CACHE_METHOD(ComponentName::describeContents_3884_ID(),ComponentName::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.content.ComponentName.describeContents could not be cached",89);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ComponentName::_javaClass2(), ComponentName::describeContents_3884_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ComponentName::describeContents_3884_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool equals_IMPL_3881(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :10782
bool ComponentName::equals_IMPL_3881(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.content.ComponentName", "equals_IMPL_3881(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(ComponentName::_javaClass2(),ComponentName::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ComponentName::equals_3881_ID(),ComponentName::_javaClass2(),"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.content.ComponentName.equals could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ComponentName::_javaClass2(), ComponentName::equals_3881_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ComponentName::equals_3881_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_3882(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :10785
int ComponentName::hashCode_IMPL_3882(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.ComponentName", "hashCode_IMPL_3882(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ComponentName::_javaClass2(),ComponentName::_Init2());
    
    int result;
    CACHE_METHOD(ComponentName::hashCode_3882_ID(),ComponentName::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.content.ComponentName.hashCode could not be cached",81);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ComponentName::_javaClass2(), ComponentName::hashCode_3882_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ComponentName::hashCode_3882_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3880(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :10779
uObject* ComponentName::toString_IMPL_3880(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.ComponentName", "toString_IMPL_3880(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ComponentName::_javaClass2(),ComponentName::_Init2());
    
    uObject* result;
    CACHE_METHOD(ComponentName::toString_3880_ID(),ComponentName::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.ComponentName.toString could not be cached",81);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ComponentName::_javaClass2(), ComponentName::toString_3880_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ComponentName::toString_3880_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_3885(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :10794
void ComponentName::writeToParcel_IMPL_3885(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    uStackFrame __("Android.android.content.ComponentName", "writeToParcel_IMPL_3885(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper,int)");
    INIT_JNI;
    CLASS_INIT(ComponentName::_javaClass2(),ComponentName::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ComponentName::writeToParcel_3885_ID(),ComponentName::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.content.ComponentName.writeToParcel could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ComponentName::_javaClass2(), ComponentName::writeToParcel_3885_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ComponentName::writeToParcel_3885_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\content\$.uno(11)
// -------------------------------------------------------------------------------

// public abstract extern class Context :11
// {
Context_type* Context_typeof()
{
    static uSStrong<Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(Context_type);
    type = (Context_type*)uClassType::New("Android.android.content.Context", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Context_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Context_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::Context::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Context::AUDIO_SERVICE_4140_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Context::INPUT_METHOD_SERVICE_4144_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Context::LOCATION_SERVICE_4130_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Context::VIBRATOR_SERVICE_4135_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("_Init", NULL, (void*)Context___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_AUDIO_SERVICE", NULL, (void*)Context__get_AUDIO_SERVICE_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("getResources", NULL, NULL, offsetof(Context_type, fp_getResources), false, ::g::Android::android::content::res::Resources_typeof(), 0),
        new uFunction("getSystemService", NULL, NULL, offsetof(Context_type, fp_getSystemService), false, ::g::Android::java::lang::Object_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("get_INPUT_METHOD_SERVICE", NULL, (void*)Context__get_INPUT_METHOD_SERVICE_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("get_LOCATION_SERVICE", NULL, (void*)Context__get_LOCATION_SERVICE_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("get_VIBRATOR_SERVICE", NULL, (void*)Context__get_VIBRATOR_SERVICE_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0));
    return type;
}

// protected Context(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :16
void Context__ctor_6_fn(Context* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_6(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :15
void Context___Init2_fn()
{
    Context::_Init2();
}

// public static Android.java.lang.String get_AUDIO_SERVICE() :598
void Context__get_AUDIO_SERVICE_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Context::AUDIO_SERVICE();
}

// public static Android.java.lang.String get_INPUT_METHOD_SERVICE() :666
void Context__get_INPUT_METHOD_SERVICE_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Context::INPUT_METHOD_SERVICE();
}

// public static Android.java.lang.String get_LOCATION_SERVICE() :428
void Context__get_LOCATION_SERVICE_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Context::LOCATION_SERVICE();
}

// public static Android.java.lang.String get_VIBRATOR_SERVICE() :513
void Context__get_VIBRATOR_SERVICE_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Context::VIBRATOR_SERVICE();
}

jclass Context::_javaClass2_;
jfieldID Context::AUDIO_SERVICE_4140_ID_;
jfieldID Context::INPUT_METHOD_SERVICE_4144_ID_;
jfieldID Context::LOCATION_SERVICE_4130_ID_;
jfieldID Context::VIBRATOR_SERVICE_4135_ID_;

// protected Context(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :16
void Context::ctor_6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.android.content.Context", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_4(obj, utype, hasFallbackClass, resolveType);
}

// public static extern new void _Init() [static] :15
void Context::_Init2()
{
    uStackFrame __("Android.android.content.Context", "_Init()");
    if (Context::_javaClass2()) { return; }
    INIT_JNI;
    Context::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/Context"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Context::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.Context'", 47);; }
}

// public static Android.java.lang.String get_AUDIO_SERVICE() [static] :598
::g::Android::java::lang::String* Context::AUDIO_SERVICE()
{
    uStackFrame __("Android.android.content.Context", "get_AUDIO_SERVICE()");
    INIT_JNI;
    CLASS_INIT(Context::_javaClass2(),Context::_Init2());
    if (::uEnterCriticalIfNull(&Context::AUDIO_SERVICE_4140_ID())) {;
    CACHE_FIELD(Context::AUDIO_SERVICE_4140_ID(),Context::_javaClass2(),"AUDIO_SERVICE","Ljava/lang/String;",GetStaticFieldID,"Id for field Context.AUDIO_SERVICE could not be cached",54);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Context::_javaClass2(), Context::AUDIO_SERVICE_4140_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_INPUT_METHOD_SERVICE() [static] :666
::g::Android::java::lang::String* Context::INPUT_METHOD_SERVICE()
{
    uStackFrame __("Android.android.content.Context", "get_INPUT_METHOD_SERVICE()");
    INIT_JNI;
    CLASS_INIT(Context::_javaClass2(),Context::_Init2());
    if (::uEnterCriticalIfNull(&Context::INPUT_METHOD_SERVICE_4144_ID())) {;
    CACHE_FIELD(Context::INPUT_METHOD_SERVICE_4144_ID(),Context::_javaClass2(),"INPUT_METHOD_SERVICE","Ljava/lang/String;",GetStaticFieldID,"Id for field Context.INPUT_METHOD_SERVICE could not be cached",61);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Context::_javaClass2(), Context::INPUT_METHOD_SERVICE_4144_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_LOCATION_SERVICE() [static] :428
::g::Android::java::lang::String* Context::LOCATION_SERVICE()
{
    uStackFrame __("Android.android.content.Context", "get_LOCATION_SERVICE()");
    INIT_JNI;
    CLASS_INIT(Context::_javaClass2(),Context::_Init2());
    if (::uEnterCriticalIfNull(&Context::LOCATION_SERVICE_4130_ID())) {;
    CACHE_FIELD(Context::LOCATION_SERVICE_4130_ID(),Context::_javaClass2(),"LOCATION_SERVICE","Ljava/lang/String;",GetStaticFieldID,"Id for field Context.LOCATION_SERVICE could not be cached",57);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Context::_javaClass2(), Context::LOCATION_SERVICE_4130_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_VIBRATOR_SERVICE() [static] :513
::g::Android::java::lang::String* Context::VIBRATOR_SERVICE()
{
    uStackFrame __("Android.android.content.Context", "get_VIBRATOR_SERVICE()");
    INIT_JNI;
    CLASS_INIT(Context::_javaClass2(),Context::_Init2());
    if (::uEnterCriticalIfNull(&Context::VIBRATOR_SERVICE_4135_ID())) {;
    CACHE_FIELD(Context::VIBRATOR_SERVICE_4135_ID(),Context::_javaClass2(),"VIBRATOR_SERVICE","Ljava/lang/String;",GetStaticFieldID,"Id for field Context.VIBRATOR_SERVICE could not be cached",57);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Context::_javaClass2(), Context::VIBRATOR_SERVICE_4135_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\content\$.uno(1351)
// ---------------------------------------------------------------------------------

// public extern class ContextWrapper :1351
// {
::g::Android::android::content::Context_type* ContextWrapper_typeof()
{
    static uSStrong< ::g::Android::android::content::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ContextWrapper);
    options.TypeSize = sizeof(::g::Android::android::content::Context_type);
    type = (::g::Android::android::content::Context_type*)uClassType::New("Android.android.content.ContextWrapper", options);
    type->SetBase(::g::Android::android::content::Context_typeof());
    type->fp_getResources = (void(*)(::g::Android::android::content::Context*, ::g::Android::android::content::res::Resources**))ContextWrapper__getResources_fn;
    type->fp_getSystemService = (void(*)(::g::Android::android::content::Context*, ::g::Android::java::lang::String*, ::g::Android::java::lang::Object**))ContextWrapper__getSystemService_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[3] = ::g::Android::android::content::res::AssetManager_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[4] = ::g::Android::android::content::res::Resources_typeof();
    ::TYPES[5] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::content::Context_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::content::Context_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::ContextWrapper::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ContextWrapper::getAssets_4263_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ContextWrapper::getResources_4264_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ContextWrapper::getSystemService_4330_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("_Init", NULL, (void*)ContextWrapper___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("getAssets", NULL, (void*)ContextWrapper__getAssets_fn, 0, false, ::g::Android::android::content::res::AssetManager_typeof(), 0),
        new uFunction("getAssets_IMPL_4263", NULL, (void*)ContextWrapper__getAssets_IMPL_4263_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getResources_IMPL_4264", NULL, (void*)ContextWrapper__getResources_IMPL_4264_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getSystemService_IMPL_4330", NULL, (void*)ContextWrapper__getSystemService_IMPL_4330_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public ContextWrapper(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :1356
void ContextWrapper__ctor_8_fn(ContextWrapper* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_8(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :1355
void ContextWrapper___Init3_fn()
{
    ContextWrapper::_Init3();
}

// public Android.android.content.res.AssetManager getAssets() :1386
void ContextWrapper__getAssets_fn(ContextWrapper* __this, ::g::Android::android::content::res::AssetManager** __retval)
{
    *__retval = __this->getAssets();
}

// public static extern Android.Base.Wrappers.IJWrapper getAssets_IMPL_4263(bool arg0, Android.Base.Primitives.ujobject arg1) :1922
void ContextWrapper__getAssets_IMPL_4263_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ContextWrapper::getAssets_IMPL_4263(*arg0_, *arg1_);
}

// public override Android.android.content.res.Resources getResources() :1392
void ContextWrapper__getResources_fn(ContextWrapper* __this, ::g::Android::android::content::res::Resources** __retval)
{
    uStackFrame __("Android.android.content.ContextWrapper", "getResources()");
    return *__retval = uCast< ::g::Android::android::content::res::Resources*>(ContextWrapper::getResources_IMPL_4264(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.android.content.res.Resources*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getResources_IMPL_4264(bool arg0, Android.Base.Primitives.ujobject arg1) :1925
void ContextWrapper__getResources_IMPL_4264_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ContextWrapper::getResources_IMPL_4264(*arg0_, *arg1_);
}

// public override Android.java.lang.Object getSystemService(Android.java.lang.String arg0) :1788
void ContextWrapper__getSystemService_fn(ContextWrapper* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval)
{
    uStackFrame __("Android.android.content.ContextWrapper", "getSystemService(Android.java.lang.String)");
    return *__retval = uCast< ::g::Android::java::lang::Object*>(ContextWrapper::getSystemService_IMPL_4330(__this->_subclassed, __this->_javaObject, (uObject*)arg0), ::TYPES[5/*Android.java.lang.Object*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_4330(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2123
void ContextWrapper__getSystemService_IMPL_4330_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = ContextWrapper::getSystemService_IMPL_4330(*arg0_, *arg1_, arg2_);
}

jclass ContextWrapper::_javaClass3_;
jmethodID ContextWrapper::getAssets_4263_ID_;
jmethodID ContextWrapper::getResources_4264_ID_;
jmethodID ContextWrapper::getSystemService_4330_ID_;

// public ContextWrapper(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :1356
void ContextWrapper::ctor_8(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.android.content.ContextWrapper", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_6(obj, utype, hasFallbackClass, resolveType);
}

// public Android.android.content.res.AssetManager getAssets() [instance] :1386
::g::Android::android::content::res::AssetManager* ContextWrapper::getAssets()
{
    uStackFrame __("Android.android.content.ContextWrapper", "getAssets()");
    return uCast< ::g::Android::android::content::res::AssetManager*>(ContextWrapper::getAssets_IMPL_4263(_subclassed, _javaObject), ::TYPES[3/*Android.android.content.res.AssetManager*/]);
}

// public static extern new void _Init() [static] :1355
void ContextWrapper::_Init3()
{
    uStackFrame __("Android.android.content.ContextWrapper", "_Init()");
    if (ContextWrapper::_javaClass3()) { return; }
    INIT_JNI;
    ContextWrapper::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/ContextWrapper"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ContextWrapper::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.ContextWrapper'", 54);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getAssets_IMPL_4263(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1922
uObject* ContextWrapper::getAssets_IMPL_4263(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.ContextWrapper", "getAssets_IMPL_4263(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ContextWrapper::_javaClass3(),ContextWrapper::_Init3());
    
    uObject* result;
    CACHE_METHOD(ContextWrapper::getAssets_4263_ID(),ContextWrapper::_javaClass3(),"getAssets","()Landroid/content/res/AssetManager;",GetMethodID,"Id for fallback method android.content.ContextWrapper.getAssets could not be cached",83);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ContextWrapper::_javaClass3(), ContextWrapper::getAssets_4263_ID()),result,::g::Android::android::content::res::AssetManager_typeof(),::g::Android::android::content::res::AssetManager*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ContextWrapper::getAssets_4263_ID()),result,::g::Android::android::content::res::AssetManager_typeof(),::g::Android::android::content::res::AssetManager*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getResources_IMPL_4264(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1925
uObject* ContextWrapper::getResources_IMPL_4264(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.ContextWrapper", "getResources_IMPL_4264(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ContextWrapper::_javaClass3(),ContextWrapper::_Init3());
    
    uObject* result;
    CACHE_METHOD(ContextWrapper::getResources_4264_ID(),ContextWrapper::_javaClass3(),"getResources","()Landroid/content/res/Resources;",GetMethodID,"Id for fallback method android.content.ContextWrapper.getResources could not be cached",86);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ContextWrapper::_javaClass3(), ContextWrapper::getResources_4264_ID()),result,::g::Android::android::content::res::Resources_typeof(),::g::Android::android::content::res::Resources*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ContextWrapper::getResources_4264_ID()),result,::g::Android::android::content::res::Resources_typeof(),::g::Android::android::content::res::Resources*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_4330(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2123
uObject* ContextWrapper::getSystemService_IMPL_4330(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.content.ContextWrapper", "getSystemService_IMPL_4330(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(ContextWrapper::_javaClass3(),ContextWrapper::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(ContextWrapper::getSystemService_4330_ID(),ContextWrapper::_javaClass3(),"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.content.ContextWrapper.getSystemService could not be cached",90);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ContextWrapper::_javaClass3(), ContextWrapper::getSystemService_4330_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ContextWrapper::getSystemService_4330_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\content\$.uno(4242)
// ---------------------------------------------------------------------------------

// public sealed extern class Intent :4242
// {
Intent_type* Intent_typeof()
{
    static uSStrong<Intent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Intent);
    options.TypeSize = sizeof(Intent_type);
    type = (Intent_type*)uClassType::New("Android.android.content.Intent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Intent__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))Intent__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))Intent__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Intent_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Intent_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(Intent_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::Intent::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::ACTION_CALL_4422_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::ACTION_SENDTO_4423_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::ACTION_VIEW_4408_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::describeContents_4758_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::Intent_4637_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::setClassName_4749_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::setData_4701_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::toString_4755_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::writeToParcel_4759_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(14,
        new uFunction("_Init", NULL, (void*)Intent___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_ACTION_CALL", NULL, (void*)Intent__get_ACTION_CALL_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("get_ACTION_SENDTO", NULL, (void*)Intent__get_ACTION_SENDTO_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("get_ACTION_VIEW", NULL, (void*)Intent__get_ACTION_VIEW_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)Intent__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_4758", NULL, (void*)Intent__describeContents_IMPL_4758_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction(".ctor", NULL, (void*)Intent__New9_fn, 0, true, Intent_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("setClassName", NULL, (void*)Intent__setClassName1_fn, 0, false, Intent_typeof(), 2, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("setClassName_IMPL_4749", NULL, (void*)Intent__setClassName_IMPL_4749_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setData", NULL, (void*)Intent__setData_fn, 0, false, Intent_typeof(), 1, ::g::Android::android::net::Uri_typeof()),
        new uFunction("setData_IMPL_4701", NULL, (void*)Intent__setData_IMPL_4701_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("toString_IMPL_4755", NULL, (void*)Intent__toString_IMPL_4755_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)Intent__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_4759", NULL, (void*)Intent__writeToParcel_IMPL_4759_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public Intent(Android.java.lang.String arg0) :8157
void Intent__ctor_9_fn(Intent* __this, ::g::Android::java::lang::String* arg0)
{
    __this->ctor_9(arg0);
}

// public static extern new void _Init() :4246
void Intent___Init2_fn()
{
    Intent::_Init2();
}

// public static Android.java.lang.String get_ACTION_CALL() :4506
void Intent__get_ACTION_CALL_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Intent::ACTION_CALL();
}

// public static Android.java.lang.String get_ACTION_SENDTO() :4523
void Intent__get_ACTION_SENDTO_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Intent::ACTION_SENDTO();
}

// public static Android.java.lang.String get_ACTION_VIEW() :4268
void Intent__get_ACTION_VIEW_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Intent::ACTION_VIEW();
}

// public int describeContents() :8928
void Intent__describeContents_fn(Intent* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_4758(bool arg0, Android.Base.Primitives.ujobject arg1) :9316
void Intent__describeContents_IMPL_4758_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Intent::describeContents_IMPL_4758(*arg0_, *arg1_);
}

// public Intent New(Android.java.lang.String arg0) :8157
void Intent__New9_fn(::g::Android::java::lang::String* arg0, Intent** __retval)
{
    *__retval = Intent::New9(arg0);
}

// public Android.android.content.Intent setClassName(Android.java.lang.String arg0, Android.java.lang.String arg1) :8874
void Intent__setClassName1_fn(Intent* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, Intent** __retval)
{
    *__retval = __this->setClassName1(arg0, arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper setClassName_IMPL_4749(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :9289
void Intent__setClassName_IMPL_4749_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval)
{
    *__retval = Intent::setClassName_IMPL_4749(*arg0_, *arg1_, arg2_, arg3_);
}

// public Android.android.content.Intent setData(Android.android.net.Uri arg0) :8586
void Intent__setData_fn(Intent* __this, ::g::Android::android::net::Uri* arg0, Intent** __retval)
{
    *__retval = __this->setData(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setData_IMPL_4701(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9145
void Intent__setData_IMPL_4701_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Intent::setData_IMPL_4701(*arg0_, *arg1_, arg2_);
}

// public override sealed Android.java.lang.String toString() :8910
void Intent__toString_fn(Intent* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.content.Intent", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(Intent::toString_IMPL_4755(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_4755(bool arg0, Android.Base.Primitives.ujobject arg1) :9307
void Intent__toString_IMPL_4755_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Intent::toString_IMPL_4755(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :8934
void Intent__writeToParcel_fn(Intent* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_4759(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :9319
void Intent__writeToParcel_IMPL_4759_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    Intent::writeToParcel_IMPL_4759(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass Intent::_javaClass2_;
jfieldID Intent::ACTION_CALL_4422_ID_;
jfieldID Intent::ACTION_SENDTO_4423_ID_;
jfieldID Intent::ACTION_VIEW_4408_ID_;
jmethodID Intent::describeContents_4758_ID_;
jmethodID Intent::Intent_4637_ID_c_;
jmethodID Intent::setClassName_4749_ID_;
jmethodID Intent::setData_4701_ID_;
jmethodID Intent::toString_4755_ID_;
jmethodID Intent::writeToParcel_4759_ID_;

// public Intent(Android.java.lang.String arg0) [instance] :8157
void Intent::ctor_9(::g::Android::java::lang::String* arg0)
{
    uStackFrame __("Android.android.content.Intent", ".ctor(Android.java.lang.String)");
    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());;
    CACHE_METHOD(Intent::Intent_4637_ID_c(),Intent::_javaClass2(),"<init>","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.content.Intent.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Intent::_javaClass2(), Intent::Intent_4637_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public int describeContents() [instance] :8928
int Intent::describeContents()
{
    uStackFrame __("Android.android.content.Intent", "describeContents()");
    return Intent::describeContents_IMPL_4758(_subclassed, _javaObject);
}

// public Android.android.content.Intent setClassName(Android.java.lang.String arg0, Android.java.lang.String arg1) [instance] :8874
Intent* Intent::setClassName1(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1)
{
    uStackFrame __("Android.android.content.Intent", "setClassName(Android.java.lang.String,Android.java.lang.String)");
    return uCast<Intent*>(Intent::setClassName_IMPL_4749(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1), Intent_typeof());
}

// public Android.android.content.Intent setData(Android.android.net.Uri arg0) [instance] :8586
Intent* Intent::setData(::g::Android::android::net::Uri* arg0)
{
    uStackFrame __("Android.android.content.Intent", "setData(Android.android.net.Uri)");
    return uCast<Intent*>(Intent::setData_IMPL_4701(_subclassed, _javaObject, (uObject*)arg0), Intent_typeof());
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :8934
void Intent::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    uStackFrame __("Android.android.content.Intent", "writeToParcel(Android.android.os.Parcel,int)");
    int arg1_ = arg1;
    Intent::writeToParcel_IMPL_4759(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :4246
void Intent::_Init2()
{
    uStackFrame __("Android.android.content.Intent", "_Init()");
    if (Intent::_javaClass2()) { return; }
    INIT_JNI;
    Intent::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/Intent"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Intent::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.Intent'", 46);; }
}

// public static extern int describeContents_IMPL_4758(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9316
int Intent::describeContents_IMPL_4758(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.Intent", "describeContents_IMPL_4758(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    
    int result;
    CACHE_METHOD(Intent::describeContents_4758_ID(),Intent::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.content.Intent.describeContents could not be cached",82);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Intent::_javaClass2(), Intent::describeContents_4758_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Intent::describeContents_4758_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public Intent New(Android.java.lang.String arg0) [static] :8157
Intent* Intent::New9(::g::Android::java::lang::String* arg0)
{
    Intent* obj4 = (Intent*)uNew(Intent_typeof());
    obj4->ctor_9(arg0);
    return obj4;
}

// public static extern Android.Base.Wrappers.IJWrapper setClassName_IMPL_4749(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :9289
uObject* Intent::setClassName_IMPL_4749(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    uStackFrame __("Android.android.content.Intent", "setClassName_IMPL_4749(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Intent::setClassName_4749_ID(),Intent::_javaClass2(),"setClassName","(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;",GetMethodID,"Id for fallback method android.content.Intent.setClassName could not be cached",78);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::setClassName_4749_ID(), _obArg2, _obArg3),result,Intent_typeof(),Intent*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::setClassName_4749_ID(), _obArg2, _obArg3),result,Intent_typeof(),Intent*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setData_IMPL_4701(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9145
uObject* Intent::setData_IMPL_4701(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.content.Intent", "setData_IMPL_4701(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Intent::setData_4701_ID(),Intent::_javaClass2(),"setData","(Landroid/net/Uri;)Landroid/content/Intent;",GetMethodID,"Id for fallback method android.content.Intent.setData could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::setData_4701_ID(), _obArg2),result,Intent_typeof(),Intent*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::setData_4701_ID(), _obArg2),result,Intent_typeof(),Intent*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_4755(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9307
uObject* Intent::toString_IMPL_4755(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.Intent", "toString_IMPL_4755(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    
    uObject* result;
    CACHE_METHOD(Intent::toString_4755_ID(),Intent::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.Intent.toString could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::toString_4755_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::toString_4755_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_4759(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :9319
void Intent::writeToParcel_IMPL_4759(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    uStackFrame __("Android.android.content.Intent", "writeToParcel_IMPL_4759(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper,int)");
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Intent::writeToParcel_4759_ID(),Intent::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.content.Intent.writeToParcel could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Intent::_javaClass2(), Intent::writeToParcel_4759_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Intent::writeToParcel_4759_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static Android.java.lang.String get_ACTION_CALL() [static] :4506
::g::Android::java::lang::String* Intent::ACTION_CALL()
{
    uStackFrame __("Android.android.content.Intent", "get_ACTION_CALL()");
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    if (::uEnterCriticalIfNull(&Intent::ACTION_CALL_4422_ID())) {;
    CACHE_FIELD(Intent::ACTION_CALL_4422_ID(),Intent::_javaClass2(),"ACTION_CALL","Ljava/lang/String;",GetStaticFieldID,"Id for field Intent.ACTION_CALL could not be cached",51);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Intent::_javaClass2(), Intent::ACTION_CALL_4422_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_ACTION_SENDTO() [static] :4523
::g::Android::java::lang::String* Intent::ACTION_SENDTO()
{
    uStackFrame __("Android.android.content.Intent", "get_ACTION_SENDTO()");
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    if (::uEnterCriticalIfNull(&Intent::ACTION_SENDTO_4423_ID())) {;
    CACHE_FIELD(Intent::ACTION_SENDTO_4423_ID(),Intent::_javaClass2(),"ACTION_SENDTO","Ljava/lang/String;",GetStaticFieldID,"Id for field Intent.ACTION_SENDTO could not be cached",53);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Intent::_javaClass2(), Intent::ACTION_SENDTO_4423_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_ACTION_VIEW() [static] :4268
::g::Android::java::lang::String* Intent::ACTION_VIEW()
{
    uStackFrame __("Android.android.content.Intent", "get_ACTION_VIEW()");
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    if (::uEnterCriticalIfNull(&Intent::ACTION_VIEW_4408_ID())) {;
    CACHE_FIELD(Intent::ACTION_VIEW_4408_ID(),Intent::_javaClass2(),"ACTION_VIEW","Ljava/lang/String;",GetStaticFieldID,"Id for field Intent.ACTION_VIEW could not be cached",51);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Intent::_javaClass2(), Intent::ACTION_VIEW_4408_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}
// }

}}}} // ::g::Android::android::content
