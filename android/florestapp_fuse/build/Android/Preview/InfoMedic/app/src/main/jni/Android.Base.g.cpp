// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.JNI.RefType.h>
#include <Android.Base.Permissions.h>
#include <Android.Base.PlatPermission.h>
#include <Android.Base.Primitives.ConstCharPtr.h>
#include <Android.Base.Primitives.JavaVMPtr.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNIEnvPtr.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Versions.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Type.h>
static uString* STRINGS[9];
static uType* TYPES[2];

namespace g{
namespace Android{
namespace Base{

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\Uno\Base\$.uno(28)
// ------------------------------------------------------------------------------------------

// public static extern class AndroidBindingMacros :28
// {
uClassType* AndroidBindingMacros_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.AndroidBindingMacros", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\Uno\Base\$.uno(31)
// ------------------------------------------------------------------------------------------

// public static extern class JNI :31
// {
// static JNI() :41
static void JNI__cctor__fn(uType* __type)
{
    JNI::Init();
}

uClassType* JNI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.JNI", options);
    type->fp_cctor_ = JNI__cctor__fn;
    ::STRINGS[0] = uString::Const("Java method id for ");
    ::STRINGS[1] = uString::Const(" is null");
    ::STRINGS[2] = uString::Const("\n"
        "");
    ::TYPES[0] = JNI__RefType_typeof();
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::_getUnoRefMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Base::JNI::_helperCls_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Android::Base::JNI::_inited_, uFieldFlagsStatic,
        ::g::Android::Base::Wrappers::JWrapper_typeof(), (uintptr_t)&::g::Android::Base::JNI::_rootActivityWrapped_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::Activity_getClassLoader_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::ClassLoader_loadClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Base::JNI::exceptionClass_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(52,
        new uFunction("CallLongMethod", NULL, (void*)JNI__CallLongMethod_fn, 0, true, ::g::Android::Base::Primitives::ujlong_typeof(), 2, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Primitives::jmethodID_typeof()),
        new uFunction("CheckException", NULL, (void*)JNI__CheckException_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("CheckException", NULL, (void*)JNI__CheckException1_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::Primitives::JNIEnvPtr_typeof()),
        new uFunction("CheckException", NULL, (void*)JNI__CheckException2_fn, 0, true, uVoid_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Uno::String_typeof()),
        new uFunction("DeleteGlobalRef", NULL, (void*)JNI__DeleteGlobalRef_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("DeleteLocalRef", NULL, (void*)JNI__DeleteLocalRef_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::Primitives::ujclass_typeof()),
        new uFunction("DeleteLocalRef", NULL, (void*)JNI__DeleteLocalRef1_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("DeleteWeakGlobalRef", NULL, (void*)JNI__DeleteWeakGlobalRef_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("GetActivityClass", NULL, (void*)JNI__GetActivityClass_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 0),
        new uFunction("GetActivityObject", NULL, (void*)JNI__GetActivityObject_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 0),
        new uFunction("GetArrayLength", NULL, (void*)JNI__GetArrayLength_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("GetBooleanArrayElement", NULL, (void*)JNI__GetBooleanArrayElement_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetByteArrayElement", NULL, (void*)JNI__GetByteArrayElement_fn, 0, true, ::g::Uno::SByte_typeof(), 2, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetCharArrayElement", NULL, (void*)JNI__GetCharArrayElement_fn, 0, true, ::g::Uno::Char_typeof(), 2, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetDefaultObject", NULL, (void*)JNI__GetDefaultObject_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 0),
        new uFunction("GetDefaultType", NULL, (void*)JNI__GetDefaultType_fn, 0, true, ::g::Uno::Type_typeof(), 0),
        new uFunction("GetDoubleArrayElement", NULL, (void*)JNI__GetDoubleArrayElement_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetEnvPtr", NULL, (void*)JNI__GetEnvPtr_fn, 0, true, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), 0),
        new uFunction("GetFloatArrayElement", NULL, (void*)JNI__GetFloatArrayElement_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetIntArrayElement", NULL, (void*)JNI__GetIntArrayElement_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetLongArrayElement", NULL, (void*)JNI__GetLongArrayElement_fn, 0, true, ::g::Uno::Long_typeof(), 2, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetMethodID", NULL, (void*)JNI__GetMethodID_fn, 0, true, ::g::Android::Base::Primitives::jmethodID_typeof(), 3, ::g::Android::Base::Primitives::ujclass_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetObjectArrayElement", NULL, (void*)JNI__GetObjectArrayElement_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 2, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetRefType", NULL, (void*)JNI__GetRefType_fn, 0, true, JNI__RefType_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("GetRefType", NULL, (void*)JNI__GetRefType1_fn, 0, true, JNI__RefType_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("GetShortArrayElement", NULL, (void*)JNI__GetShortArrayElement_fn, 0, true, ::g::Uno::Short_typeof(), 2, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetStaticFieldID", NULL, (void*)JNI__GetStaticFieldID_fn, 0, true, ::g::Android::Base::Primitives::jfieldID_typeof(), 3, ::g::Android::Base::Primitives::ujclass_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetStaticIntField", NULL, (void*)JNI__GetStaticIntField_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Android::Base::Primitives::ujclass_typeof(), ::g::Android::Base::Primitives::jfieldID_typeof()),
        new uFunction("GetStaticObjectField", NULL, (void*)JNI__GetStaticObjectField_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 2, ::g::Android::Base::Primitives::ujclass_typeof(), ::g::Android::Base::Primitives::jfieldID_typeof()),
        new uFunction("GetUnoRef", NULL, (void*)JNI__GetUnoRef_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("GetVM", NULL, (void*)JNI__GetVM_fn, 0, true, ::g::Android::Base::Primitives::JavaVMPtr_typeof(), 0),
        new uFunction("GetWrappedActivityObject", NULL, (void*)JNI__GetWrappedActivityObject_fn, 0, true, ::g::Android::Base::Wrappers::JWrapper_typeof(), 0),
        new uFunction("Init", NULL, (void*)JNI__Init_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("IsSameObject", NULL, (void*)JNI__IsSameObject_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("LoadClass", NULL, (void*)JNI__LoadClass_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Android::Base::Primitives::ConstCharPtr_typeof()),
        new uFunction("LoadClass", NULL, (void*)JNI__LoadClass1_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 3, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Android::Base::Primitives::ConstCharPtr_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("LoadClass", NULL, (void*)JNI__LoadClass2_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 3, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("LoadClass", NULL, (void*)JNI__LoadClass3_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("LocalToGlobalRef", NULL, (void*)JNI__LocalToGlobalRef_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 1, ::g::Android::Base::Primitives::ujclass_typeof()),
        new uFunction("LocalToGlobalRef", NULL, (void*)JNI__LocalToGlobalRef1_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("NewFloatArray", NULL, (void*)JNI__NewFloatArray_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewGlobalRef", NULL, (void*)JNI__NewGlobalRef_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 1, ::g::Android::Base::Primitives::ujclass_typeof()),
        new uFunction("NewGlobalRef", NULL, (void*)JNI__NewGlobalRef1_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("NewIntArray", NULL, (void*)JNI__NewIntArray_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewObject", NULL, (void*)JNI__NewObject1_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 3, ::g::Android::Base::Primitives::ujclass_typeof(), ::g::Android::Base::Primitives::jmethodID_typeof(), ::g::Android::Base::Primitives::ujvalue_typeof()),
        new uFunction("NewObject", NULL, (void*)JNI__NewObject2_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 4, ::g::Android::Base::Primitives::ujclass_typeof(), ::g::Android::Base::Primitives::jmethodID_typeof(), ::g::Android::Base::Primitives::ujvalue_typeof(), ::g::Android::Base::Primitives::ujvalue_typeof()),
        new uFunction("NewWeakGlobalRef", NULL, (void*)JNI__NewWeakGlobalRef_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("SetFloatArrayElement", NULL, (void*)JNI__SetFloatArrayElement_fn, 0, true, uVoid_typeof(), 3, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("SetIntArrayElement", NULL, (void*)JNI__SetIntArrayElement_fn, 0, true, uVoid_typeof(), 3, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetObjectArrayElement", NULL, (void*)JNI__SetObjectArrayElement_fn, 0, true, uVoid_typeof(), 3, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("ThrowNewException", NULL, (void*)JNI__ThrowNewException_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("TryGetException", NULL, (void*)JNI__TryGetException_fn, 0, true, ::g::Uno::Exception_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public static extern Android.Base.Primitives.ujlong CallLongMethod(Android.Base.Primitives.ujobject obj, Android.Base.Primitives.jmethodID mtd) :1057
void JNI__CallLongMethod_fn(jobject* obj, jmethodID* mtd, jlong* __retval)
{
    *__retval = JNI::CallLongMethod(*obj, *mtd);
}

// public static extern void CheckException() :191
void JNI__CheckException_fn()
{
    JNI::CheckException();
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni) :179
void JNI__CheckException1_fn(JNIEnv** jni)
{
    JNI::CheckException1(*jni);
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) :184
void JNI__CheckException2_fn(JNIEnv** jni, uString* appendMessage)
{
    JNI::CheckException2(*jni, appendMessage);
}

// public static extern void DeleteGlobalRef(Android.Base.Primitives.ujobject obj) :154
void JNI__DeleteGlobalRef_fn(jobject* obj_)
{
    JNI::DeleteGlobalRef(*obj_);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujclass obj) :250
void JNI__DeleteLocalRef_fn(jclass* obj)
{
    JNI::DeleteLocalRef(*obj);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujobject obj) :244
void JNI__DeleteLocalRef1_fn(jobject* obj)
{
    JNI::DeleteLocalRef1(*obj);
}

// public static extern void DeleteWeakGlobalRef(Android.Base.Primitives.ujobject obj) :157
void JNI__DeleteWeakGlobalRef_fn(jobject* obj_)
{
    JNI::DeleteWeakGlobalRef(*obj_);
}

// public static extern Android.Base.Primitives.ujclass GetActivityClass() :59
void JNI__GetActivityClass_fn(jclass* __retval)
{
    *__retval = JNI::GetActivityClass();
}

// public static extern Android.Base.Primitives.ujobject GetActivityObject() :56
void JNI__GetActivityObject_fn(jobject* __retval)
{
    *__retval = JNI::GetActivityObject();
}

// public static extern int GetArrayLength(Android.Base.Primitives.ujobject array) :263
void JNI__GetArrayLength_fn(jobject* array_, int* __retval)
{
    *__retval = JNI::GetArrayLength(*array_);
}

// public static extern bool GetBooleanArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :283
void JNI__GetBooleanArrayElement_fn(uObject* obj_, int* i_, bool* __retval)
{
    *__retval = JNI::GetBooleanArrayElement(obj_, *i_);
}

// public static extern sbyte GetByteArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :285
void JNI__GetByteArrayElement_fn(uObject* obj_, int* i_, int8_t* __retval)
{
    *__retval = JNI::GetByteArrayElement(obj_, *i_);
}

// public static extern char GetCharArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :287
void JNI__GetCharArrayElement_fn(uObject* obj_, int* i_, uChar* __retval)
{
    *__retval = JNI::GetCharArrayElement(obj_, *i_);
}

// public static extern Android.Base.Primitives.ujobject GetDefaultObject() :320
void JNI__GetDefaultObject_fn(jobject* __retval)
{
    *__retval = JNI::GetDefaultObject();
}

// public static extern Uno.Type GetDefaultType() :322
void JNI__GetDefaultType_fn(uType** __retval)
{
    *__retval = JNI::GetDefaultType();
}

// public static extern double GetDoubleArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :297
void JNI__GetDoubleArrayElement_fn(uObject* obj_, int* i_, double* __retval)
{
    *__retval = JNI::GetDoubleArrayElement(obj_, *i_);
}

// public static extern Android.Base.Primitives.JNIEnvPtr GetEnvPtr() :50
void JNI__GetEnvPtr_fn(JNIEnv** __retval)
{
    *__retval = JNI::GetEnvPtr();
}

// public static extern float GetFloatArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :295
void JNI__GetFloatArrayElement_fn(uObject* obj_, int* i_, float* __retval)
{
    *__retval = JNI::GetFloatArrayElement(obj_, *i_);
}

// public static extern int GetIntArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :291
void JNI__GetIntArrayElement_fn(uObject* obj_, int* i_, int* __retval)
{
    *__retval = JNI::GetIntArrayElement(obj_, *i_);
}

// public static extern long GetLongArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :293
void JNI__GetLongArrayElement_fn(uObject* obj_, int* i_, int64_t* __retval)
{
    *__retval = JNI::GetLongArrayElement(obj_, *i_);
}

// public static Android.Base.Primitives.jmethodID GetMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) :199
void JNI__GetMethodID_fn(jclass* cls, uString* methodName, uString* methodSig, jmethodID* __retval)
{
    *__retval = JNI::GetMethodID(*cls, methodName, methodSig);
}

// public static extern Android.Base.Primitives.ujobject GetObjectArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :299
void JNI__GetObjectArrayElement_fn(uObject* obj_, int* i_, jobject* __retval)
{
    *__retval = JNI::GetObjectArrayElement(obj_, *i_);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject obj) :77
void JNI__GetRefType_fn(JNIEnv** jni, jobject* obj, int* __retval)
{
    *__retval = JNI::GetRefType(*jni, *obj);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.ujobject obj) :82
void JNI__GetRefType1_fn(jobject* obj, int* __retval)
{
    *__retval = JNI::GetRefType1(*obj);
}

// public static extern short GetShortArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :289
void JNI__GetShortArrayElement_fn(uObject* obj_, int* i_, int16_t* __retval)
{
    *__retval = JNI::GetShortArrayElement(obj_, *i_);
}

// public static Android.Base.Primitives.jfieldID GetStaticFieldID(Android.Base.Primitives.ujclass cls, string fieldName, string fieldSig) :232
void JNI__GetStaticFieldID_fn(jclass* cls, uString* fieldName, uString* fieldSig, jfieldID* __retval)
{
    *__retval = JNI::GetStaticFieldID(*cls, fieldName, fieldSig);
}

// public static extern int GetStaticIntField(Android.Base.Primitives.ujclass obj, Android.Base.Primitives.jfieldID fld) :1926
void JNI__GetStaticIntField_fn(jclass* obj, jfieldID* fld, int* __retval)
{
    *__retval = JNI::GetStaticIntField(*obj, *fld);
}

// public static extern Android.Base.Primitives.ujobject GetStaticObjectField(Android.Base.Primitives.ujclass obj, Android.Base.Primitives.jfieldID fld) :1896
void JNI__GetStaticObjectField_fn(jclass* obj, jfieldID* fld, jobject* __retval)
{
    *__retval = JNI::GetStaticObjectField(*obj, *fld);
}

// public static extern long GetUnoRef(Android.Base.Primitives.ujobject obj) :325
void JNI__GetUnoRef_fn(jobject* obj_, int64_t* __retval)
{
    *__retval = JNI::GetUnoRef(*obj_);
}

// public static extern Android.Base.Primitives.JavaVMPtr GetVM() :53
void JNI__GetVM_fn(JavaVM** __retval)
{
    *__retval = JNI::GetVM();
}

// public static Android.Base.Wrappers.JWrapper GetWrappedActivityObject() :61
void JNI__GetWrappedActivityObject_fn(::g::Android::Base::Wrappers::JWrapper** __retval)
{
    *__retval = JNI::GetWrappedActivityObject();
}

// public static extern void Init() :47
void JNI__Init_fn()
{
    JNI::Init();
}

// public static extern bool IsSameObject(Android.Base.Primitives.ujobject objA, Android.Base.Primitives.ujobject objB) :160
void JNI__IsSameObject_fn(jobject* objA_, jobject* objB_, bool* __retval)
{
    *__retval = JNI::IsSameObject(*objA_, *objB_);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name) :70
void JNI__LoadClass_fn(JNIEnv** jni, const char** name, jclass* __retval)
{
    *__retval = JNI::LoadClass(*jni, *name);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name, bool systemClass) :87
void JNI__LoadClass1_fn(JNIEnv** jni, const char** name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass1(*jni, *name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, string name, [bool systemClass]) :103
void JNI__LoadClass2_fn(JNIEnv** jni, uString* name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass2(*jni, name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LoadClass(string name, [bool systemClass]) :111
void JNI__LoadClass3_fn(uString* name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass3(name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LocalToGlobalRef(Android.Base.Primitives.ujclass obj) :143
void JNI__LocalToGlobalRef_fn(jclass* obj, jclass* __retval)
{
    *__retval = JNI::LocalToGlobalRef(*obj);
}

// public static extern Android.Base.Primitives.ujobject LocalToGlobalRef(Android.Base.Primitives.ujobject obj) :131
void JNI__LocalToGlobalRef1_fn(jobject* obj, jobject* __retval)
{
    *__retval = JNI::LocalToGlobalRef1(*obj);
}

// public static extern Android.Base.Primitives.ujobject NewFloatArray(int len) :277
void JNI__NewFloatArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewFloatArray(*len_);
}

// public static extern Android.Base.Primitives.ujclass NewGlobalRef(Android.Base.Primitives.ujclass obj) :120
void JNI__NewGlobalRef_fn(jclass* obj, jclass* __retval)
{
    *__retval = JNI::NewGlobalRef(*obj);
}

// public static extern Android.Base.Primitives.ujobject NewGlobalRef(Android.Base.Primitives.ujobject obj) :117
void JNI__NewGlobalRef1_fn(jobject* obj_, jobject* __retval)
{
    *__retval = JNI::NewGlobalRef1(*obj_);
}

// public static extern Android.Base.Primitives.ujobject NewIntArray(int len) :273
void JNI__NewIntArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewIntArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewObject(Android.Base.Primitives.ujclass cls, Android.Base.Primitives.jmethodID mtd, Android.Base.Primitives.ujvalue arg0) :367
void JNI__NewObject1_fn(jclass* cls, jmethodID* mtd, jvalue* arg0, jobject* __retval)
{
    *__retval = JNI::NewObject1(*cls, *mtd, *arg0);
}

// public static extern Android.Base.Primitives.ujobject NewObject(Android.Base.Primitives.ujclass cls, Android.Base.Primitives.jmethodID mtd, Android.Base.Primitives.ujvalue arg0, Android.Base.Primitives.ujvalue arg1) :363
void JNI__NewObject2_fn(jclass* cls, jmethodID* mtd, jvalue* arg0, jvalue* arg1, jobject* __retval)
{
    *__retval = JNI::NewObject2(*cls, *mtd, *arg0, *arg1);
}

// public static extern Android.Base.Primitives.ujobject NewWeakGlobalRef(Android.Base.Primitives.ujobject obj) :151
void JNI__NewWeakGlobalRef_fn(jobject* obj_, jobject* __retval)
{
    *__retval = JNI::NewWeakGlobalRef(*obj_);
}

// public static extern void SetFloatArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, float val) :313
void JNI__SetFloatArrayElement_fn(uObject* obj_, int* i_, float* val_)
{
    JNI::SetFloatArrayElement(obj_, *i_, *val_);
}

// public static extern void SetIntArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, int val) :309
void JNI__SetIntArrayElement_fn(uObject* obj_, int* i_, int* val_)
{
    JNI::SetIntArrayElement(obj_, *i_, *val_);
}

// public static extern void SetObjectArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, Android.Base.Primitives.ujobject val) :317
void JNI__SetObjectArrayElement_fn(uObject* obj_, int* i_, jobject* val_)
{
    JNI::SetObjectArrayElement(obj_, *i_, *val_);
}

// public static extern void ThrowNewException(string message) :197
void JNI__ThrowNewException_fn(uString* message_)
{
    JNI::ThrowNewException(message_);
}

// public static Uno.Exception TryGetException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) :162
void JNI__TryGetException_fn(JNIEnv** jni, uString* appendMessage, ::g::Uno::Exception** __retval)
{
    *__retval = JNI::TryGetException(*jni, appendMessage);
}

jmethodID JNI::_getUnoRefMid_;
jclass JNI::_helperCls_;
bool JNI::_inited_;
uSStrong< ::g::Android::Base::Wrappers::JWrapper*> JNI::_rootActivityWrapped_;
jmethodID JNI::Activity_getClassLoader_;
jmethodID JNI::ClassLoader_loadClass_;
jclass JNI::exceptionClass_;

// public static extern Android.Base.Primitives.ujlong CallLongMethod(Android.Base.Primitives.ujobject obj, Android.Base.Primitives.jmethodID mtd) [static] :1057
jlong JNI::CallLongMethod(jobject obj, jmethodID mtd)
{
    uStackFrame __("Android.Base.JNI", "CallLongMethod(Android.Base.Primitives.ujobject,Android.Base.Primitives.jmethodID)");
    JNI_typeof()->Init();
    return JNI::GetEnvPtr()->CallLongMethod(obj,mtd);
}

// public static extern void CheckException() [static] :191
void JNI::CheckException()
{
    uStackFrame __("Android.Base.JNI", "CheckException()");
    JNI_typeof()->Init();
    JNI::CheckException1(JNI::GetEnvPtr());
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni) [static] :179
void JNI::CheckException1(JNIEnv* jni)
{
    uStackFrame __("Android.Base.JNI", "CheckException(Android.Base.Primitives.JNIEnvPtr)");
    JNI_typeof()->Init();
    JNI::CheckException2(jni, NULL);
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) [static] :184
void JNI::CheckException2(JNIEnv* jni, uString* appendMessage)
{
    uStackFrame __("Android.Base.JNI", "CheckException(Android.Base.Primitives.JNIEnvPtr,[string])");
    JNI_typeof()->Init();
    ::g::Uno::Exception* excep = JNI::TryGetException(jni, appendMessage);

    if (excep != NULL)
        U_THROW(excep);
}

// public static extern void DeleteGlobalRef(Android.Base.Primitives.ujobject obj) [static] :154
void JNI::DeleteGlobalRef(jobject obj_)
{
    uStackFrame __("Android.Base.JNI", "DeleteGlobalRef(Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    JNI::GetEnvPtr()->DeleteGlobalRef(obj_);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujclass obj) [static] :250
void JNI::DeleteLocalRef(jclass obj)
{
    uStackFrame __("Android.Base.JNI", "DeleteLocalRef(Android.Base.Primitives.ujclass)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->DeleteLocalRef(obj);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujobject obj) [static] :244
void JNI::DeleteLocalRef1(jobject obj)
{
    uStackFrame __("Android.Base.JNI", "DeleteLocalRef(Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->DeleteLocalRef(obj);
}

// public static extern void DeleteWeakGlobalRef(Android.Base.Primitives.ujobject obj) [static] :157
void JNI::DeleteWeakGlobalRef(jobject obj_)
{
    uStackFrame __("Android.Base.JNI", "DeleteWeakGlobalRef(Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    JNI::GetEnvPtr()->DeleteWeakGlobalRef(obj_);
}

// public static extern Android.Base.Primitives.ujclass GetActivityClass() [static] :59
jclass JNI::GetActivityClass()
{
    uStackFrame __("Android.Base.JNI", "GetActivityClass()");
    JNI_typeof()->Init();
    JniHelper jni;
    return JniHelper::GetActivityClass();
}

// public static extern Android.Base.Primitives.ujobject GetActivityObject() [static] :56
jobject JNI::GetActivityObject()
{
    uStackFrame __("Android.Base.JNI", "GetActivityObject()");
    JNI_typeof()->Init();
    JniHelper jni;
    return JniHelper::GetActivity();
}

// public static extern int GetArrayLength(Android.Base.Primitives.ujobject array) [static] :263
int JNI::GetArrayLength(jobject array_)
{
    uStackFrame __("Android.Base.JNI", "GetArrayLength(Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    return (int)jni->GetArrayLength((jarray)array_);
}

// public static extern bool GetBooleanArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :283
bool JNI::GetBooleanArrayElement(uObject* obj_, int i_)
{
    uStackFrame __("Android.Base.JNI", "GetBooleanArrayElement(Android.Base.Wrappers.IJWrapper,int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jboolean result;
    jni->GetBooleanArrayRegion((jbooleanArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (bool)result;
}

// public static extern sbyte GetByteArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :285
int8_t JNI::GetByteArrayElement(uObject* obj_, int i_)
{
    uStackFrame __("Android.Base.JNI", "GetByteArrayElement(Android.Base.Wrappers.IJWrapper,int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jbyte result;
    jni->GetByteArrayRegion((jbyteArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (int8_t)result;
}

// public static extern char GetCharArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :287
uChar JNI::GetCharArrayElement(uObject* obj_, int i_)
{
    uStackFrame __("Android.Base.JNI", "GetCharArrayElement(Android.Base.Wrappers.IJWrapper,int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jchar result;
    jni->GetCharArrayRegion((jcharArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (uChar)result;
}

// public static extern Android.Base.Primitives.ujobject GetDefaultObject() [static] :320
jobject JNI::GetDefaultObject()
{
    uStackFrame __("Android.Base.JNI", "GetDefaultObject()");
    JNI_typeof()->Init();
    return (jobject)0;
}

// public static extern Uno.Type GetDefaultType() [static] :322
uType* JNI::GetDefaultType()
{
    uStackFrame __("Android.Base.JNI", "GetDefaultType()");
    JNI_typeof()->Init();
    return (uType*)0;
}

// public static extern double GetDoubleArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :297
double JNI::GetDoubleArrayElement(uObject* obj_, int i_)
{
    uStackFrame __("Android.Base.JNI", "GetDoubleArrayElement(Android.Base.Wrappers.IJWrapper,int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jdouble result;
    jni->GetDoubleArrayRegion((jdoubleArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (double)result;
}

// public static extern Android.Base.Primitives.JNIEnvPtr GetEnvPtr() [static] :50
JNIEnv* JNI::GetEnvPtr()
{
    uStackFrame __("Android.Base.JNI", "GetEnvPtr()");
    JNI_typeof()->Init();
    JNIEnv* jni;
    JniHelper::GetVM()->AttachCurrentThread(&jni, NULL);
    return jni;
}

// public static extern float GetFloatArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :295
float JNI::GetFloatArrayElement(uObject* obj_, int i_)
{
    uStackFrame __("Android.Base.JNI", "GetFloatArrayElement(Android.Base.Wrappers.IJWrapper,int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jfloat result;
    jni->GetFloatArrayRegion((jfloatArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (float)result;
}

// public static extern int GetIntArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :291
int JNI::GetIntArrayElement(uObject* obj_, int i_)
{
    uStackFrame __("Android.Base.JNI", "GetIntArrayElement(Android.Base.Wrappers.IJWrapper,int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jint result;
    jni->GetIntArrayRegion((jintArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (int)result;
}

// public static extern long GetLongArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :293
int64_t JNI::GetLongArrayElement(uObject* obj_, int i_)
{
    uStackFrame __("Android.Base.JNI", "GetLongArrayElement(Android.Base.Wrappers.IJWrapper,int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jlong result;
    jni->GetLongArrayRegion((jlongArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (int64_t)result;
}

// public static Android.Base.Primitives.jmethodID GetMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) [static] :199
jmethodID JNI::GetMethodID(jclass cls, uString* methodName, uString* methodSig)
{
    uStackFrame __("Android.Base.JNI", "GetMethodID(Android.Base.Primitives.ujclass,string,string)");
    JNI_typeof()->Init();
    const char* cMethodName = ::uStringToCStr(methodName);
    const char* cMethodSig = ::uStringToCStr(methodSig);
    jmethodID mid = JNI::GetEnvPtr()->GetMethodID(cls,cMethodName,cMethodSig);
    uFreeCStr(cMethodName);
    uFreeCStr(cMethodSig);
    JNI::CheckException();

    if ((mid==0))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[0/*"Java method...*/], methodName), ::STRINGS[1/*" is null"*/])));

    return mid;
}

// public static extern Android.Base.Primitives.ujobject GetObjectArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :299
jobject JNI::GetObjectArrayElement(uObject* obj_, int i_)
{
    uStackFrame __("Android.Base.JNI", "GetObjectArrayElement(Android.Base.Wrappers.IJWrapper,int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    return reinterpret_cast<jobject>(jni->NewGlobalRef(jni->GetObjectArrayElement((jobjectArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_)));
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject obj) [static] :77
int JNI::GetRefType(JNIEnv* jni, jobject obj)
{
    uStackFrame __("Android.Base.JNI", "GetRefType(Android.Base.Primitives.JNIEnvPtr,Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    return (int)jni->GetObjectRefType(obj);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.ujobject obj) [static] :82
int JNI::GetRefType1(jobject obj)
{
    uStackFrame __("Android.Base.JNI", "GetRefType(Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    return JNI::GetRefType(JNI::GetEnvPtr(), obj);
}

// public static extern short GetShortArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :289
int16_t JNI::GetShortArrayElement(uObject* obj_, int i_)
{
    uStackFrame __("Android.Base.JNI", "GetShortArrayElement(Android.Base.Wrappers.IJWrapper,int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jshort result;
    jni->GetShortArrayRegion((jshortArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (int16_t)result;
}

// public static Android.Base.Primitives.jfieldID GetStaticFieldID(Android.Base.Primitives.ujclass cls, string fieldName, string fieldSig) [static] :232
jfieldID JNI::GetStaticFieldID(jclass cls, uString* fieldName, uString* fieldSig)
{
    uStackFrame __("Android.Base.JNI", "GetStaticFieldID(Android.Base.Primitives.ujclass,string,string)");
    JNI_typeof()->Init();
    JNIEnv* env = JNI::GetEnvPtr();
    const char* cFieldName = ::uStringToCStr(fieldName);
    const char* cFieldSig = ::uStringToCStr(fieldSig);
    jfieldID fid = env->GetStaticFieldID(cls,cFieldName,cFieldSig);
    uFreeCStr(cFieldName);
    uFreeCStr(cFieldSig);
    JNI::CheckException1(env);
    return fid;
}

// public static extern int GetStaticIntField(Android.Base.Primitives.ujclass obj, Android.Base.Primitives.jfieldID fld) [static] :1926
int JNI::GetStaticIntField(jclass obj, jfieldID fld)
{
    uStackFrame __("Android.Base.JNI", "GetStaticIntField(Android.Base.Primitives.ujclass,Android.Base.Primitives.jfieldID)");
    JNI_typeof()->Init();
    return JNI::GetEnvPtr()->GetStaticIntField(obj,fld);
}

// public static extern Android.Base.Primitives.ujobject GetStaticObjectField(Android.Base.Primitives.ujclass obj, Android.Base.Primitives.jfieldID fld) [static] :1896
jobject JNI::GetStaticObjectField(jclass obj, jfieldID fld)
{
    uStackFrame __("Android.Base.JNI", "GetStaticObjectField(Android.Base.Primitives.ujclass,Android.Base.Primitives.jfieldID)");
    JNI_typeof()->Init();
    return JNI::GetEnvPtr()->GetStaticObjectField(obj,fld);
}

// public static extern long GetUnoRef(Android.Base.Primitives.ujobject obj) [static] :325
int64_t JNI::GetUnoRef(jobject obj_)
{
    uStackFrame __("Android.Base.JNI", "GetUnoRef(Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    JNI::Init();
    if (obj_) {
        JNIEnv* jni = JNI::GetEnvPtr();
        return (int64_t)jni->CallStaticLongMethod(JNI::_helperCls(), JNI::_getUnoRefMid(), obj_);
    } else {
        return 0;
    }
}

// public static extern Android.Base.Primitives.JavaVMPtr GetVM() [static] :53
JavaVM* JNI::GetVM()
{
    uStackFrame __("Android.Base.JNI", "GetVM()");
    JNI_typeof()->Init();
    return JniHelper::GetVM();
}

// public static Android.Base.Wrappers.JWrapper GetWrappedActivityObject() [static] :61
::g::Android::Base::Wrappers::JWrapper* JNI::GetWrappedActivityObject()
{
    uStackFrame __("Android.Base.JNI", "GetWrappedActivityObject()");
    JNI_typeof()->Init();
    jobject activityObj = JNI::GetActivityObject();

    if (::g::Android::Base::Wrappers::JWrapper::op_Equality(JNI::_rootActivityWrapped(), NULL) || !JNI::IsSameObject(uPtr(JNI::_rootActivityWrapped())->_GetJavaObject(), activityObj))
        JNI::_rootActivityWrapped() = ::g::Android::Base::Wrappers::JWrapper::New1(activityObj, NULL, false, false);

    return JNI::_rootActivityWrapped();
}

// public static extern void Init() [static] :47
void JNI::Init()
{
    uStackFrame __("Android.Base.JNI", "Init()");
    JNI_typeof()->Init();
    if (!JNI::_inited())
    {
    JNI::_inited() = true;
        JNIEnv* jni = JNI::GetEnvPtr();
        JNI::Activity_getClassLoader() = jni->GetMethodID(jni->FindClass("android/app/NativeActivity"), "getClassLoader", "()Ljava/lang/ClassLoader;");
        JNI::ClassLoader_loadClass() = jni->GetMethodID(jni->FindClass("java/lang/ClassLoader"), "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        JNI::CheckException1(jni);
        JNI::_helperCls() = reinterpret_cast<jclass>(jni->NewGlobalRef(JNI::LoadClass1(JNI::GetEnvPtr(), "com.Bindings.UnoHelper", false)));
        if (!JNI::_helperCls()) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache class for UnoHelper",35)));
        }
        JNI::exceptionClass() = reinterpret_cast<jclass>(jni->NewGlobalRef(jni->FindClass("java/lang/RuntimeException")));
        JNI::_getUnoRefMid() = jni->GetStaticMethodID(JNI::_helperCls(), "GetUnoObjectRef", "(Ljava/lang/Object;)J");
        if (!JNI::_getUnoRefMid()) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache getUnoRefMid", 37)));
        }
    }
}

// public static extern bool IsSameObject(Android.Base.Primitives.ujobject objA, Android.Base.Primitives.ujobject objB) [static] :160
bool JNI::IsSameObject(jobject objA_, jobject objB_)
{
    uStackFrame __("Android.Base.JNI", "IsSameObject(Android.Base.Primitives.ujobject,Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    return (bool)JNI::GetEnvPtr()->IsSameObject(objA_,objB_);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name) [static] :70
jclass JNI::LoadClass(JNIEnv* jni, const char* name)
{
    uStackFrame __("Android.Base.JNI", "LoadClass(Android.Base.Primitives.JNIEnvPtr,Android.Base.Primitives.ConstCharPtr)");
    JNI_typeof()->Init();
    return JNI::LoadClass1(jni, name, false);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name, bool systemClass) [static] :87
jclass JNI::LoadClass1(JNIEnv* jni, const char* name, bool systemClass)
{
    uStackFrame __("Android.Base.JNI", "LoadClass(Android.Base.Primitives.JNIEnvPtr,Android.Base.Primitives.ConstCharPtr,bool)");
    JNI_typeof()->Init();
    JNI::Init();
    jclass result;
    jstring jname = jni->NewStringUTF(name);

    if (systemClass)
        result = jni->FindClass(name);
    else
        result = (jclass)jni->CallObjectMethod(jni->CallObjectMethod(JNI::GetActivityObject(), JNI::Activity_getClassLoader()),JNI::ClassLoader_loadClass(),jname);

    jni->DeleteLocalRef(jname);
    JNI::CheckException1(jni);
    return result;
}

// public static extern Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, string name, [bool systemClass]) [static] :103
jclass JNI::LoadClass2(JNIEnv* jni, uString* name, bool systemClass)
{
    uStackFrame __("Android.Base.JNI", "LoadClass(Android.Base.Primitives.JNIEnvPtr,string,[bool])");
    JNI_typeof()->Init();
    const char* cname = (const char*)::uStringToCStr(name);
    jclass result = JNI::LoadClass1(JNI::GetEnvPtr(), cname, systemClass);
    uFreeCStr(cname);
    return result;
}

// public static extern Android.Base.Primitives.ujclass LoadClass(string name, [bool systemClass]) [static] :111
jclass JNI::LoadClass3(uString* name, bool systemClass)
{
    uStackFrame __("Android.Base.JNI", "LoadClass(string,[bool])");
    JNI_typeof()->Init();
    return JNI::LoadClass2(JNI::GetEnvPtr(), name, systemClass);
}

// public static extern Android.Base.Primitives.ujclass LocalToGlobalRef(Android.Base.Primitives.ujclass obj) [static] :143
jclass JNI::LocalToGlobalRef(jclass obj)
{
    uStackFrame __("Android.Base.JNI", "LocalToGlobalRef(Android.Base.Primitives.ujclass)");
    JNI_typeof()->Init();
    jclass res = JNI::NewGlobalRef(obj);
    JNI::DeleteLocalRef(obj);
    return res;
}

// public static extern Android.Base.Primitives.ujobject LocalToGlobalRef(Android.Base.Primitives.ujobject obj) [static] :131
jobject JNI::LocalToGlobalRef1(jobject obj)
{
    uStackFrame __("Android.Base.JNI", "LocalToGlobalRef(Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    jobject res = JNI::NewGlobalRef1(obj);
    JNI::DeleteLocalRef1(obj);
    return res;
}

// public static extern Android.Base.Primitives.ujobject NewFloatArray(int len) [static] :277
jobject JNI::NewFloatArray(int len_)
{
    uStackFrame __("Android.Base.JNI", "NewFloatArray(int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewFloatArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujclass NewGlobalRef(Android.Base.Primitives.ujclass obj) [static] :120
jclass JNI::NewGlobalRef(jclass obj)
{
    uStackFrame __("Android.Base.JNI", "NewGlobalRef(Android.Base.Primitives.ujclass)");
    JNI_typeof()->Init();
    return reinterpret_cast<jclass>(JNI::GetEnvPtr()->NewGlobalRef(obj));
}

// public static extern Android.Base.Primitives.ujobject NewGlobalRef(Android.Base.Primitives.ujobject obj) [static] :117
jobject JNI::NewGlobalRef1(jobject obj_)
{
    uStackFrame __("Android.Base.JNI", "NewGlobalRef(Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    return reinterpret_cast<jobject>(JNI::GetEnvPtr()->NewGlobalRef(obj_));
}

// public static extern Android.Base.Primitives.ujobject NewIntArray(int len) [static] :273
jobject JNI::NewIntArray(int len_)
{
    uStackFrame __("Android.Base.JNI", "NewIntArray(int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewIntArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewObject(Android.Base.Primitives.ujclass cls, Android.Base.Primitives.jmethodID mtd, Android.Base.Primitives.ujvalue arg0) [static] :367
jobject JNI::NewObject1(jclass cls, jmethodID mtd, jvalue arg0)
{
    uStackFrame __("Android.Base.JNI", "NewObject(Android.Base.Primitives.ujclass,Android.Base.Primitives.jmethodID,Android.Base.Primitives.ujvalue)");
    JNI_typeof()->Init();
    return JNI::GetEnvPtr()->NewObject(cls,mtd,arg0);
}

// public static extern Android.Base.Primitives.ujobject NewObject(Android.Base.Primitives.ujclass cls, Android.Base.Primitives.jmethodID mtd, Android.Base.Primitives.ujvalue arg0, Android.Base.Primitives.ujvalue arg1) [static] :363
jobject JNI::NewObject2(jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    uStackFrame __("Android.Base.JNI", "NewObject(Android.Base.Primitives.ujclass,Android.Base.Primitives.jmethodID,Android.Base.Primitives.ujvalue,Android.Base.Primitives.ujvalue)");
    JNI_typeof()->Init();
    return JNI::GetEnvPtr()->NewObject(cls,mtd,arg0,arg1);
}

// public static extern Android.Base.Primitives.ujobject NewWeakGlobalRef(Android.Base.Primitives.ujobject obj) [static] :151
jobject JNI::NewWeakGlobalRef(jobject obj_)
{
    uStackFrame __("Android.Base.JNI", "NewWeakGlobalRef(Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    return (jobject)reinterpret_cast<jweak>(JNI::GetEnvPtr()->NewWeakGlobalRef(obj_));
}

// public static extern void SetFloatArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, float val) [static] :313
void JNI::SetFloatArrayElement(uObject* obj_, int i_, float val_)
{
    uStackFrame __("Android.Base.JNI", "SetFloatArrayElement(Android.Base.Wrappers.IJWrapper,int,float)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jfloat val = (jfloat)val_;
    jni->SetFloatArrayRegion((jfloatArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &val);
}

// public static extern void SetIntArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, int val) [static] :309
void JNI::SetIntArrayElement(uObject* obj_, int i_, int val_)
{
    uStackFrame __("Android.Base.JNI", "SetIntArrayElement(Android.Base.Wrappers.IJWrapper,int,int)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jint val = (jint)val_;
    jni->SetIntArrayRegion((jintArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &val);
}

// public static extern void SetObjectArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, Android.Base.Primitives.ujobject val) [static] :317
void JNI::SetObjectArrayElement(uObject* obj_, int i_, jobject val_)
{
    uStackFrame __("Android.Base.JNI", "SetObjectArrayElement(Android.Base.Wrappers.IJWrapper,int,Android.Base.Primitives.ujobject)");
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetObjectArrayElement((jobjectArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, val_);
}

// public static extern void ThrowNewException(string message) [static] :197
void JNI::ThrowNewException(uString* message_)
{
    uStackFrame __("Android.Base.JNI", "ThrowNewException(string)");
    JNI_typeof()->Init();
    const char* message = uStringToCStr(message_);
    LOGD("%s", message);
    JNI::GetEnvPtr()->ThrowNew(JNI::exceptionClass(), message);
    uFreeCStr(message);
}

// public static Uno.Exception TryGetException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) [static] :162
::g::Uno::Exception* JNI::TryGetException(JNIEnv* jni, uString* appendMessage)
{
    uStackFrame __("Android.Base.JNI", "TryGetException(Android.Base.Primitives.JNIEnvPtr,[string])");
    JNI_typeof()->Init();
    jthrowable err = jni->ExceptionOccurred();

    if ((err != NULL))
    {
        jni->ExceptionDescribe();
        jni->ExceptionClear();
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject estring = (jobject)jni->CallObjectMethod(err, toString);
        uString* x = ::g::Android::Base::Types::String::JavaToUno1(estring);

        if (::g::Uno::String::op_Inequality(appendMessage, NULL))
            x = ::g::Uno::String::op_Addition2(x, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(x, ::STRINGS[2/*"\n"*/]), appendMessage));

        return ::g::Uno::Exception::New2(x);
    }

    return NULL;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\$.uno(165)
// --------------------------------------------------------

// public sealed extern class Permissions :165
// {
uType* Permissions_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Permissions);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Android.Base.Permissions", options);
    type->Reflection.SetFunctions(5,
        new uFunction("get_ACCESS_FINE_LOCATION", NULL, (void*)Permissions__get_ACCESS_FINE_LOCATION_fn, 0, true, ::g::Android::Base::PlatPermission_typeof(), 0),
        new uFunction("get_CALL_PHONE", NULL, (void*)Permissions__get_CALL_PHONE_fn, 0, true, ::g::Android::Base::PlatPermission_typeof(), 0),
        new uFunction("get_INTERNET", NULL, (void*)Permissions__get_INTERNET_fn, 0, true, ::g::Android::Base::PlatPermission_typeof(), 0),
        new uFunction("RequestPermission", NULL, (void*)Permissions__RequestPermission_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::PlatPermission_typeof()),
        new uFunction("get_VIBRATE", NULL, (void*)Permissions__get_VIBRATE_fn, 0, true, ::g::Android::Base::PlatPermission_typeof(), 0));
    return type;
}

// private static extern Android.Base.PlatPermission _access_fine_location() :324
void Permissions___access_fine_location_fn(void** __retval)
{
    *__retval = Permissions::_access_fine_location();
}

// private static extern Android.Base.PlatPermission _call_phone() :390
void Permissions___call_phone_fn(void** __retval)
{
    *__retval = Permissions::_call_phone();
}

// private static extern Android.Base.PlatPermission _internet() :460
void Permissions___internet_fn(void** __retval)
{
    *__retval = Permissions::_internet();
}

// private static extern Android.Base.PlatPermission _vibrate() :588
void Permissions___vibrate_fn(void** __retval)
{
    *__retval = Permissions::_vibrate();
}

// public static Android.Base.PlatPermission get_ACCESS_FINE_LOCATION() :170
void Permissions__get_ACCESS_FINE_LOCATION_fn(void** __retval)
{
    *__retval = Permissions::ACCESS_FINE_LOCATION();
}

// public static Android.Base.PlatPermission get_CALL_PHONE() :203
void Permissions__get_CALL_PHONE_fn(void** __retval)
{
    *__retval = Permissions::CALL_PHONE();
}

// public static Android.Base.PlatPermission get_INTERNET() :238
void Permissions__get_INTERNET_fn(void** __retval)
{
    *__retval = Permissions::INTERNET();
}

// public static void RequestPermission(Android.Base.PlatPermission x) :167
void Permissions__RequestPermission_fn(void* x)
{
    Permissions::RequestPermission(x);
}

// public static Android.Base.PlatPermission get_VIBRATE() :302
void Permissions__get_VIBRATE_fn(void** __retval)
{
    *__retval = Permissions::VIBRATE();
}

// private static extern Android.Base.PlatPermission _access_fine_location() [static] :324
void* Permissions::_access_fine_location()
{
    uStackFrame __("Android.Base.Permissions", "_access_fine_location()");
    return NULL;
}

// private static extern Android.Base.PlatPermission _call_phone() [static] :390
void* Permissions::_call_phone()
{
    uStackFrame __("Android.Base.Permissions", "_call_phone()");
    return NULL;
}

// private static extern Android.Base.PlatPermission _internet() [static] :460
void* Permissions::_internet()
{
    uStackFrame __("Android.Base.Permissions", "_internet()");
    return NULL;
}

// private static extern Android.Base.PlatPermission _vibrate() [static] :588
void* Permissions::_vibrate()
{
    uStackFrame __("Android.Base.Permissions", "_vibrate()");
    return NULL;
}

// public static void RequestPermission(Android.Base.PlatPermission x) [static] :167
void Permissions::RequestPermission(void* x)
{
}

// public static Android.Base.PlatPermission get_ACCESS_FINE_LOCATION() [static] :170
void* Permissions::ACCESS_FINE_LOCATION()
{
    uStackFrame __("Android.Base.Permissions", "get_ACCESS_FINE_LOCATION()");
    return Permissions::_access_fine_location();
}

// public static Android.Base.PlatPermission get_CALL_PHONE() [static] :203
void* Permissions::CALL_PHONE()
{
    uStackFrame __("Android.Base.Permissions", "get_CALL_PHONE()");
    return Permissions::_call_phone();
}

// public static Android.Base.PlatPermission get_INTERNET() [static] :238
void* Permissions::INTERNET()
{
    uStackFrame __("Android.Base.Permissions", "get_INTERNET()");
    return Permissions::_internet();
}

// public static Android.Base.PlatPermission get_VIBRATE() [static] :302
void* Permissions::VIBRATE()
{
    uStackFrame __("Android.Base.Permissions", "get_VIBRATE()");
    return Permissions::_vibrate();
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\$.uno(162)
// --------------------------------------------------------

// public class PlatPermission :162
// {
uType* PlatPermission_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PlatPermission);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Android.Base.PlatPermission", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\Uno\Base\$.uno(75)
// ------------------------------------------------------------------------------------------

// public enum JNI.RefType :75
uEnumType* JNI__RefType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Android.Base.JNI.RefType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Invalid", 0LL,
        "Local", 1LL,
        "Global", 2LL,
        "WeakGlobal", 3LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\Uno\Base\$.uno(2491)
// --------------------------------------------------------------------------------------------

// public static extern class Versions :2491
// {
// static Versions() :2491
static void Versions__cctor__fn(uType* __type)
{
    Versions::_api_ = -1;
    Versions::_release_ = ::STRINGS[3/*"<unknown>"*/];
}

uClassType* Versions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Versions", options);
    type->fp_cctor_ = Versions__cctor__fn;
    ::STRINGS[3] = uString::Const("<unknown>");
    ::STRINGS[4] = uString::Const("android/os/Build$VERSION");
    ::STRINGS[5] = uString::Const("SDK_INT");
    ::STRINGS[6] = uString::Const("I");
    ::STRINGS[7] = uString::Const("RELEASE");
    ::STRINGS[8] = uString::Const("Ljava/lang/String;");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Android::Base::Versions::_api_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Android::Base::Versions::_release_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("get_ApiLevel", NULL, (void*)Versions__get_ApiLevel_fn, 0, true, ::g::Uno::Int_typeof(), 0));
    return type;
}

// public static int get_ApiLevel() :2510
void Versions__get_ApiLevel_fn(int* __retval)
{
    *__retval = Versions::ApiLevel();
}

// private static void Initialize() :2493
void Versions__Initialize_fn()
{
    Versions::Initialize();
}

int Versions::_api_;
uSStrong<uString*> Versions::_release_;

// private static void Initialize() [static] :2493
void Versions::Initialize()
{
    uStackFrame __("Android.Base.Versions", "Initialize()");
    Versions_typeof()->Init();

    if (Versions::_api() == -1)
    {
        jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(::STRINGS[4/*"android/os/...*/], false);
        jfieldID sdk = ::g::Android::Base::JNI::GetStaticFieldID(tmpCls, ::STRINGS[5/*"SDK_INT"*/], ::STRINGS[6/*"I"*/]);
        jfieldID release = ::g::Android::Base::JNI::GetStaticFieldID(tmpCls, ::STRINGS[7/*"RELEASE"*/], ::STRINGS[8/*"Ljava/lang/...*/]);
        Versions::_api() = ::g::Android::Base::JNI::GetStaticIntField(tmpCls, sdk);
        Versions::_release() = ::g::Android::Base::Types::String::JavaToUno1(::g::Android::Base::JNI::GetStaticObjectField(tmpCls, release));
    }
}

// public static int get_ApiLevel() [static] :2510
int Versions::ApiLevel()
{
    uStackFrame __("Android.Base.Versions", "get_ApiLevel()");
    Versions_typeof()->Init();

    if (Versions::_api() == -1)
        Versions::Initialize();

    return Versions::_api();
}
// }

}}} // ::g::Android::Base
