// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.ConstCharPtr.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNIEnvPtr.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Types.Arrays.h>
#include <Android.Base.Types.Bridge.h>
#include <Android.Base.Types.ByteBuffer.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.String.h>
#include <Uno.Type.h>
static uString* STRINGS[2];
static uType* TYPES[4];

namespace g{
namespace Android{
namespace Base{
namespace Types{

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\Uno\Base\$.uno(2424)
// --------------------------------------------------------------------------------------------

// public static extern class Arrays :2424
// {
uClassType* Arrays_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.Arrays", options);
    ::TYPES[0] = ::g::Uno::Long_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("JavaToUnoByteArray", NULL, (void*)Arrays__JavaToUnoByteArray_fn, 0, true, ::g::Uno::Byte_typeof()->Array(), 2, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Long_typeof()),
        new uFunction("JavaToUnoFloatArray", NULL, (void*)Arrays__JavaToUnoFloatArray_fn, 0, true, ::g::Uno::Float_typeof()->Array(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("JavaToUnoFloatArray", NULL, (void*)Arrays__JavaToUnoFloatArray1_fn, 0, true, ::g::Uno::Float_typeof()->Array(), 2, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Long_typeof()));
    return type;
}

// public static extern byte[] JavaToUnoByteArray(Android.Base.Primitives.ujobject arr, long len) :2464
void Arrays__JavaToUnoByteArray_fn(jobject* arr_, int64_t* len_, uArray** __retval)
{
    *__retval = Arrays::JavaToUnoByteArray(*arr_, *len_);
}

// public static float[] JavaToUnoFloatArray(Android.Base.Primitives.ujobject arr) :2450
void Arrays__JavaToUnoFloatArray_fn(jobject* arr, uArray** __retval)
{
    *__retval = Arrays::JavaToUnoFloatArray(*arr);
}

// public static extern float[] JavaToUnoFloatArray(Android.Base.Primitives.ujobject arr, long len) :2474
void Arrays__JavaToUnoFloatArray1_fn(jobject* arr_, int64_t* len_, uArray** __retval)
{
    *__retval = Arrays::JavaToUnoFloatArray1(*arr_, *len_);
}

// public static extern byte[] JavaToUnoByteArray(Android.Base.Primitives.ujobject arr, long len) [static] :2464
uArray* Arrays::JavaToUnoByteArray(jobject arr_, int64_t len_)
{
    uStackFrame __("Android.Base.Types.Arrays", "JavaToUnoByteArray(Android.Base.Primitives.ujobject,long)");
    if (!arr_) return NULL;
         JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
         jbyteArray jarr = (jbyteArray)arr_;
         long len = len_;
         uArray* arr = uArray::New(::g::Uno::Byte_typeof()->Array(), len);
         jni->GetByteArrayRegion(jarr, 0, len, (jbyte*)arr->_ptr);
         return arr;
}

// public static float[] JavaToUnoFloatArray(Android.Base.Primitives.ujobject arr) [static] :2450
uArray* Arrays::JavaToUnoFloatArray(jobject arr)
{
    uStackFrame __("Android.Base.Types.Arrays", "JavaToUnoFloatArray(Android.Base.Primitives.ujobject)");
    return Arrays::JavaToUnoFloatArray1(arr, (int64_t)::g::Android::Base::JNI::GetArrayLength(arr));
}

// public static extern float[] JavaToUnoFloatArray(Android.Base.Primitives.ujobject arr, long len) [static] :2474
uArray* Arrays::JavaToUnoFloatArray1(jobject arr_, int64_t len_)
{
    uStackFrame __("Android.Base.Types.Arrays", "JavaToUnoFloatArray(Android.Base.Primitives.ujobject,long)");
    if (!arr_) return NULL;
         JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
         jfloatArray jarr = (jfloatArray)arr_;
         long len = len_;
         uArray* arr = uArray::New(::g::Uno::Float_typeof()->Array(), len);
         jni->GetFloatArrayRegion(jarr, 0, len, (jfloat*)arr->_ptr);
         return arr;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\Uno\Base\$.uno(2305)
// --------------------------------------------------------------------------------------------

// public static extern class Bridge :2305
// {
uClassType* Bridge_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.Bridge", options);
    ::STRINGS[0] = uString::Const("\n"
        "Tried to find uno class for java type ");
    ::STRINGS[1] = uString::Const("\n"
        "");
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_helperCls_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_inited_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_javaToUnoMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_registerFallbackMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_registerTypeMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_unoToJavaMid_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("Init", NULL, (void*)Bridge__Init_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("JavaToUnoType", NULL, (void*)Bridge__JavaToUnoType_fn, 0, true, ::g::Uno::Type_typeof(), 3, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("RegisterUnoFallback", NULL, (void*)Bridge__RegisterUnoFallback_fn, 0, true, uVoid_typeof(), 3, ::g::Android::Base::Primitives::ConstCharPtr_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Type_typeof()),
        new uFunction("RegisterUnoType", NULL, (void*)Bridge__RegisterUnoType_fn, 0, true, uVoid_typeof(), 3, ::g::Android::Base::Primitives::ConstCharPtr_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Type_typeof()),
        new uFunction("SetWrapperType", NULL, (void*)Bridge__SetWrapperType_fn, 0, true, uVoid_typeof(), 5, ::g::Android::Base::Wrappers::JWrapper_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public static extern void Init() :2315
void Bridge__Init_fn()
{
    Bridge::Init();
}

// public static Uno.Type JavaToUnoType(Android.Base.Primitives.ujobject javaObj, Uno.Type fallbackType, bool typeHasFallbackClass) :2321
void Bridge__JavaToUnoType_fn(jobject* javaObj, uType* fallbackType, bool* typeHasFallbackClass, uType** __retval)
{
    *__retval = Bridge::JavaToUnoType(*javaObj, fallbackType, *typeHasFallbackClass);
}

// public static extern void RegisterUnoFallback(Android.Base.Primitives.ConstCharPtr typeName, int nameLen, Uno.Type typePtr) :2319
void Bridge__RegisterUnoFallback_fn(const char** typeName_, int* nameLen_, uType* typePtr_)
{
    Bridge::RegisterUnoFallback(*typeName_, *nameLen_, typePtr_);
}

// public static extern void RegisterUnoType(Android.Base.Primitives.ConstCharPtr typeName, int nameLen, Uno.Type typePtr) :2317
void Bridge__RegisterUnoType_fn(const char** typeName_, int* nameLen_, uType* typePtr_)
{
    Bridge::RegisterUnoType(*typeName_, *nameLen_, typePtr_);
}

// public static extern void SetWrapperType(Android.Base.Wrappers.JWrapper wrapper, Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) :2357
void Bridge__SetWrapperType_fn(::g::Android::Base::Wrappers::JWrapper* wrapper_, jobject* obj_, uType* typePtr_, bool* typeHasFallbackClass_, bool* resolveType_)
{
    Bridge::SetWrapperType(wrapper_, *obj_, typePtr_, *typeHasFallbackClass_, *resolveType_);
}

jclass Bridge::_helperCls_;
bool Bridge::_inited_;
jmethodID Bridge::_javaToUnoMid_;
jmethodID Bridge::_registerFallbackMid_;
jmethodID Bridge::_registerTypeMid_;
jmethodID Bridge::_unoToJavaMid_;

// public static extern void Init() [static] :2315
void Bridge::Init()
{
    uStackFrame __("Android.Base.Types.Bridge", "Init()");
    if (Bridge::_inited()) { return; }
        ::g::Android::Base::JNI::Init();
        JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
        Bridge::_helperCls() = reinterpret_cast<jclass>(jni->NewGlobalRef(::g::Android::Base::JNI::LoadClass1(::g::Android::Base::JNI::GetEnvPtr(), "com.Bindings.UnoHelper", false)));
        if (!Bridge::_helperCls()) {
            U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache class for UnoHelper",35)));
        }
    
        Bridge::_registerTypeMid() = jni->GetStaticMethodID(Bridge::_helperCls(), "RegisterUnoType", "(Ljava/lang/String;J)V");
        Bridge::_registerFallbackMid() = jni->GetStaticMethodID(Bridge::_helperCls(), "RegisterUnoFallback", "(Ljava/lang/String;J)V");
        Bridge::_javaToUnoMid() = jni->GetStaticMethodID(Bridge::_helperCls(), "JavaToUnoType", "(Ljava/lang/Object;JZ)J");
        Bridge::_unoToJavaMid() = jni->GetStaticMethodID(Bridge::_helperCls(), "UnoToJavaType", "(J)Ljava/lang/Class;");
    
        if ((!Bridge::_registerTypeMid()) || (!Bridge::_registerFallbackMid()) || (!Bridge::_javaToUnoMid()) || (!Bridge::_unoToJavaMid())) {
            U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache methods for UnoHelper", 37)));
        }
        Bridge::_inited() = true;
}

// public static Uno.Type JavaToUnoType(Android.Base.Primitives.ujobject javaObj, Uno.Type fallbackType, bool typeHasFallbackClass) [static] :2321
uType* Bridge::JavaToUnoType(jobject javaObj, uType* fallbackType, bool typeHasFallbackClass)
{
    uStackFrame __("Android.Base.Types.Bridge", "JavaToUnoType(Android.Base.Primitives.ujobject,Uno.Type,bool)");

    if (!Bridge::_inited())
        Bridge::Init();

    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    uType* result = (uType*)jni->CallStaticLongMethod(Bridge::_helperCls(), Bridge::_javaToUnoMid(), javaObj, (jlong)fallbackType, (jboolean)typeHasFallbackClass);
    ::g::Uno::Exception* excep = ::g::Android::Base::JNI::TryGetException(jni, NULL);

    if (excep != NULL)
    {
        jmethodID grabClass = jni->GetMethodID(jni->FindClass("java/lang/Object"), "getClass", "()Ljava/lang/Class;");
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject cls = jni->CallObjectMethod(javaObj, grabClass);
        jobject estring = (jobject)jni->CallObjectMethod(cls, toString);
        uString* x = ::g::Android::Base::Types::String::JavaToUno1(estring);
        excep = ::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(excep)->Message(), ::STRINGS[0/*"\nTried to ...*/]), x), ::STRINGS[1/*"\n"*/]));
        U_THROW(excep);
    }

    return result;
}

// public static extern void RegisterUnoFallback(Android.Base.Primitives.ConstCharPtr typeName, int nameLen, Uno.Type typePtr) [static] :2319
void Bridge::RegisterUnoFallback(const char* typeName_, int nameLen_, uType* typePtr_)
{
    uStackFrame __("Android.Base.Types.Bridge", "RegisterUnoFallback(Android.Base.Primitives.ConstCharPtr,int,Uno.Type)");
    if (!Bridge::_inited()) { Bridge::Init(); }
         JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    
         char *buf = (char*)malloc(nameLen_ + 1);
         strcpy(buf, typeName_);
         jstring javaTypeName = jni->NewStringUTF(buf);
    
         jni->CallStaticVoidMethod(Bridge::_helperCls(), Bridge::_registerFallbackMid(), javaTypeName, ((jlong)typePtr_));
         ::g::Android::Base::JNI::CheckException1(jni);
         jni->DeleteLocalRef(javaTypeName);
         free(buf);
}

// public static extern void RegisterUnoType(Android.Base.Primitives.ConstCharPtr typeName, int nameLen, Uno.Type typePtr) [static] :2317
void Bridge::RegisterUnoType(const char* typeName_, int nameLen_, uType* typePtr_)
{
    uStackFrame __("Android.Base.Types.Bridge", "RegisterUnoType(Android.Base.Primitives.ConstCharPtr,int,Uno.Type)");
    if (!Bridge::_inited()) { Bridge::Init(); }
         JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    
         char *buf = (char*)malloc(nameLen_ + 1);
         strcpy(buf, typeName_);
         jstring javaTypeName = jni->NewStringUTF(buf);
    
         jni->CallStaticVoidMethod(Bridge::_helperCls(), Bridge::_registerTypeMid(), javaTypeName, ((jlong)typePtr_));
         ::g::Android::Base::JNI::CheckException1(jni);
         jni->DeleteLocalRef(javaTypeName);
         free(buf);
}

// public static extern void SetWrapperType(Android.Base.Wrappers.JWrapper wrapper, Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) [static] :2357
void Bridge::SetWrapperType(::g::Android::Base::Wrappers::JWrapper* wrapper_, jobject obj_, uType* typePtr_, bool typeHasFallbackClass_, bool resolveType_)
{
    uStackFrame __("Android.Base.Types.Bridge", "SetWrapperType(Android.Base.Wrappers.JWrapper,Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    if (!wrapper_) {
             U_THROW(::g::Uno::Exception::New2(uString::Utf8("Trying to set type of null object",33)));
         } else if ((!obj_) && resolveType_) {
             U_THROW(::g::Uno::Exception::New2(uString::Utf8("Have requested to infer type from jobject but jobject is null",61)));
         } else {
             if (typePtr_) {
                 wrapper_->__type = typePtr_;
             }
             if (obj_ && resolveType_) {
                 wrapper_->__obj_type = ((uType*)Bridge::JavaToUnoType(obj_, wrapper_->__obj_type, typeHasFallbackClass_));
             }
         }
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\Uno\Base\$.uno(2361)
// --------------------------------------------------------------------------------------------

// public static extern class ByteBuffer :2361
// {
uClassType* ByteBuffer_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.ByteBuffer", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\Uno\Base\$.uno(2391)
// --------------------------------------------------------------------------------------------

// public static extern class String :2391
// {
uClassType* String_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.String", options);
    ::TYPES[3] = ::g::Android::Base::Primitives::ujobject_typeof();
    type->Reflection.SetFunctions(5,
        new uFunction("JavaToUno", NULL, (void*)String__JavaToUno_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("JavaToUno", NULL, (void*)String__JavaToUno1_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("JavaToUno", NULL, (void*)String__JavaToUno2_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("UnoToJava", NULL, (void*)String__UnoToJava_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Uno::String_typeof()),
        new uFunction("UnoToJava", NULL, (void*)String__UnoToJava1_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public static extern string JavaToUno(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject jstr) :2418
void String__JavaToUno_fn(JNIEnv** jni_, jobject* jstr_, uString** __retval)
{
    *__retval = String::JavaToUno(*jni_, *jstr_);
}

// public static string JavaToUno(Android.Base.Primitives.ujobject jstr) :2401
void String__JavaToUno1_fn(jobject* jstr, uString** __retval)
{
    *__retval = String::JavaToUno1(*jstr);
}

// public static string JavaToUno(Android.Base.Wrappers.IJWrapper jstr) :2393
void String__JavaToUno2_fn(uObject* jstr, uString** __retval)
{
    *__retval = String::JavaToUno2(jstr);
}

// public static extern Android.Base.Primitives.ujobject UnoToJava(Android.Base.Primitives.JNIEnvPtr jni, string str) :2420
void String__UnoToJava_fn(JNIEnv** jni_, uString* str_, jobject* __retval)
{
    *__retval = String::UnoToJava(*jni_, str_);
}

// public static Android.Base.Primitives.ujobject UnoToJava(string str) :2409
void String__UnoToJava1_fn(uString* str, jobject* __retval)
{
    *__retval = String::UnoToJava1(str);
}

// public static extern string JavaToUno(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject jstr) [static] :2418
uString* String::JavaToUno(JNIEnv* jni_, jobject jstr_)
{
    uStackFrame __("Android.Base.Types.String", "JavaToUno(Android.Base.Primitives.JNIEnvPtr,Android.Base.Primitives.ujobject)");
    if (!jstr_) { return NULL; }
             jobject str = jni_->NewLocalRef(jstr_);
             const jchar* raw =  jni_->GetStringChars((jstring)str, NULL);
             int len = jni_->GetStringLength((jstring)str);
             int size = len * sizeof(jchar);
             uString* result = uString::New(len);
             memcpy(result->_ptr, (void*)raw, size);
             jni_->ReleaseStringChars((jstring)str, raw);
             jni_->DeleteLocalRef(str);
             return result;
}

// public static string JavaToUno(Android.Base.Primitives.ujobject jstr) [static] :2401
uString* String::JavaToUno1(jobject jstr)
{
    uStackFrame __("Android.Base.Types.String", "JavaToUno(Android.Base.Primitives.ujobject)");

    if (::g::Android::Base::Primitives::ujobject::op_Inequality(jstr, ::g::Android::Base::Primitives::ujobject::Null()))
        return String::JavaToUno(::g::Android::Base::JNI::GetEnvPtr(), jstr);
    else
        return NULL;
}

// public static string JavaToUno(Android.Base.Wrappers.IJWrapper jstr) [static] :2393
uString* String::JavaToUno2(uObject* jstr)
{
    uStackFrame __("Android.Base.Types.String", "JavaToUno(Android.Base.Wrappers.IJWrapper)");

    if (jstr != NULL)
        return String::JavaToUno(::g::Android::Base::JNI::GetEnvPtr(), ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr(jstr), ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    else
        return NULL;
}

// public static extern Android.Base.Primitives.ujobject UnoToJava(Android.Base.Primitives.JNIEnvPtr jni, string str) [static] :2420
jobject String::UnoToJava(JNIEnv* jni_, uString* str_)
{
    uStackFrame __("Android.Base.Types.String", "UnoToJava(Android.Base.Primitives.JNIEnvPtr,string)");
    return (jobject)(jni_->NewString(str_->_ptr, str_->_length));
}

// public static Android.Base.Primitives.ujobject UnoToJava(string str) [static] :2409
jobject String::UnoToJava1(uString* str)
{
    uStackFrame __("Android.Base.Types.String", "UnoToJava(string)");

    if (::g::Uno::String::op_Inequality(str, NULL))
        return String::UnoToJava(::g::Android::Base::JNI::GetEnvPtr(), str);
    else
        return ::g::Android::Base::Primitives::ujobject::Null();
}
// }

}}}} // ::g::Android::Base::Types
