// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNIEnvPtr.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
//~
void __JavaUnoObject_Finalizer(JNIEnv *env , jclass clazz, jlong ptr)
{
    uAutoReleasePool pool;
    uRelease((::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject*)ptr);
}
static uString* STRINGS[6];

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Foreign{
namespace Android{

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Compiler\ExportTargetInterop\Foreign\Android\$.uno(12)
// ---------------------------------------------------------------------------------------------------------------

// internal static extern class ExternBlockHost :12
// {
uClassType* ExternBlockHost_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost", options);
    return type;
}

// private static extern void RegisterFunctions() :15
void ExternBlockHost__RegisterFunctions_fn()
{
    ExternBlockHost::RegisterFunctions();
}

// private static extern void RegisterFunctions() [static] :15
void ExternBlockHost::RegisterFunctions()
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost", "RegisterFunctions()");
    JniHelper jni;
    static JNINativeMethod native_activity_funcs[] = {
    };
    int funcCount = 0;
    if ((int)jni->RegisterNatives(JniHelper::GetNativeExternClass(), native_activity_funcs, funcCount)<0) {
    LOGD("COULD NOT REGISTER NATIVE EXTERN FUNCTIONS");
    XLI_THROW("COULD NOT REGISTER NATIVE EXTERN FUNCTIONS");
    }
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Compiler\ExportTargetInterop\Foreign\Android\$.uno(32)
// ---------------------------------------------------------------------------------------------------------------

// public static extern class JavaUnoObject :32
// {
uClassType* JavaUnoObject_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", options);
    ::STRINGS[0] = uString::Const("com/Bindings/UnoObject");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::STRINGS[3] = uString::Const("_GetRetainedUnoPtr");
    ::STRINGS[4] = uString::Const("()J");
    ::STRINGS[5] = uString::Const("Could not register the finalizer callback for JavaUnoObject");
    type->SetFields(0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoObjectClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoObjectConstructor_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::_unoObjectGetRetainedUnoPtr_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("Box", NULL, (void*)JavaUnoObject__Box_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, uObject_typeof()),
        new uFunction("UnBox", NULL, (void*)JavaUnoObject__UnBox_fn, 0, true, uObject_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public static Android.Base.Primitives.ujobject Box(object unoObject) :57
void JavaUnoObject__Box_fn(uObject* unoObject, jobject* __retval)
{
    *__retval = JavaUnoObject::Box(unoObject);
}

// private static void EnsureInitialized() :38
void JavaUnoObject__EnsureInitialized_fn()
{
    JavaUnoObject::EnsureInitialized();
}

// public static object UnBox(Android.Base.Primitives.ujobject javaObject) :67
void JavaUnoObject__UnBox_fn(jobject* javaObject, uObject** __retval)
{
    *__retval = JavaUnoObject::UnBox(*javaObject);
}

jclass JavaUnoObject::_unoObjectClass_;
jmethodID JavaUnoObject::_unoObjectConstructor_;
jmethodID JavaUnoObject::_unoObjectGetRetainedUnoPtr_;

// public static Android.Base.Primitives.ujobject Box(object unoObject) [static] :57
jobject JavaUnoObject::Box(uObject* unoObject)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "Box(object)");
    JavaUnoObject::EnsureInitialized();
    uRetain(unoObject);
    int64_t longPtr = (int64_t)unoObject;
    jobject boxed = ::g::Android::Base::JNI::NewObject1(JavaUnoObject::_unoObjectClass(), JavaUnoObject::_unoObjectConstructor(), ::g::Android::Base::Primitives::ujvalue::op_Implicit17(longPtr));
    ::g::Android::Base::JNI::CheckException();
    return boxed;
}

// private static void EnsureInitialized() [static] :38
void JavaUnoObject::EnsureInitialized()
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "EnsureInitialized()");

    if (::uEnterCriticalIfNull(&JavaUnoObject::_unoObjectClass()))
    {
        ::g::Android::Base::JNI::Init();
        JavaUnoObject::_unoObjectClass() = ::g::Android::Base::JNI::NewGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[0/*"com/Binding...*/], false));
        JavaUnoObject::_unoObjectConstructor() = ::g::Android::Base::JNI::GetMethodID(JavaUnoObject::_unoObjectClass(), ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
        JavaUnoObject::_unoObjectGetRetainedUnoPtr() = ::g::Android::Base::JNI::GetMethodID(JavaUnoObject::_unoObjectClass(), ::STRINGS[3/*"_GetRetaine...*/], ::STRINGS[4/*"()J"*/]);
        JNINativeMethod nativeFunc = {(char* const)"Finalize", (char* const)"(J)V", (void *)&__JavaUnoObject_Finalizer};
        int attached = ::g::Android::Base::JNI::GetEnvPtr()->RegisterNatives(JavaUnoObject::_unoObjectClass(), &nativeFunc, 1);

        if (attached < 0)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"Could not r...*/]));

        ::uExitCritical();;
    }
}

// public static object UnBox(Android.Base.Primitives.ujobject javaObject) [static] :67
uObject* JavaUnoObject::UnBox(jobject javaObject)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject", "UnBox(Android.Base.Primitives.ujobject)");
    jlong longPtr = ::g::Android::Base::JNI::CallLongMethod(javaObject, JavaUnoObject::_unoObjectGetRetainedUnoPtr());
    ::g::Android::Base::JNI::CheckException();
    return (uObject*)longPtr;
}
// }

}}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android
