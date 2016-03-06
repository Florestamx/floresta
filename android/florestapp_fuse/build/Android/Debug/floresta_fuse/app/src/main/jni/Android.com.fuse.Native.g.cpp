// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.com.fuse.Native.Camera.h>
#include <Android.com.fuse.Native.CameraTask.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
//~Callbacks forCameraTask

//#if !#{Android.com.fuse.Native.CameraTask.OnSuccess(Android.Base.Wrappers.IJWrapper):IsStripped}
JNFUN(void,Android_com_fuse_Native_CameraTask__OnSuccess44280,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::Native::CameraTask*);
    JARG_TO_UNO(arg1,uObject*,((::g::Android::Base::Wrappers::JWrapper*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Base::Wrappers::JWrapper_typeof(), false, false, true)));
    JTRY
    uPtr->OnSuccess(tmparg1);
    JCATCH
}
//#endif

//#if !#{Android.com.fuse.Native.CameraTask.OnFailed(Android.Base.Wrappers.IJWrapper):IsStripped}
JNFUN(void,Android_com_fuse_Native_CameraTask__OnFailed44281,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::Native::CameraTask*);
    JARG_TO_UNO(arg1,uObject*,((::g::Android::Base::Wrappers::JWrapper*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Base::Wrappers::JWrapper_typeof(), false, false, true)));
    JTRY
    uPtr->OnFailed(tmparg1);
    JCATCH
}
//#endi
static uType* TYPES[2];

namespace g{
namespace Android{
namespace com{
namespace fuse{
namespace Native{

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Camera/0.24.6/AndroidImpl/$.uno(9)
// -----------------------------------------------------------------------------------------

// public sealed extern class Camera :9
// {
::g::Android::Base::Wrappers::JWrapper_type* Camera_typeof()
{
    static uSStrong< ::g::Android::Base::Wrappers::JWrapper_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Camera);
    options.TypeSize = sizeof(::g::Android::Base::Wrappers::JWrapper_type);
    type = (::g::Android::Base::Wrappers::JWrapper_type*)uClassType::New("Android.com.fuse.Native.Camera", options);
    type->SetBase(::g::Android::Base::Wrappers::JWrapper_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::Base::Wrappers::JWrapper_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::Base::Wrappers::JWrapper_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::com::fuse::Native::Camera::_javaClass1_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::Native::Camera::TakePicture_44277_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :19
void Camera___Init1_fn()
{
    Camera::_Init1();
}

// public static void TakePicture(Android.Base.Wrappers.IJWrapper arg0) :29
void Camera__TakePicture_fn(uObject* arg0)
{
    Camera::TakePicture(arg0);
}

// public static extern void TakePicture_IMPL_44277(Android.Base.Wrappers.IJWrapper arg0) :45
void Camera__TakePicture_IMPL_44277_fn(uObject* arg0_)
{
    Camera::TakePicture_IMPL_44277(arg0_);
}

jclass Camera::_javaClass1_;
jmethodID Camera::TakePicture_44277_ID_;

// public static extern new void _Init() [static] :19
void Camera::_Init1()
{
    if (Camera::_javaClass1()) { return; }
    INIT_JNI;
    Camera::_javaClass1() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("com/fuse/Native/Camera"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Camera::_javaClass1()) { THROW_UNO_EXCEPTION("Unable to cache class 'com.fuse.Native.Camera'", 46);; }
}

// public static void TakePicture(Android.Base.Wrappers.IJWrapper arg0) [static] :29
void Camera::TakePicture(uObject* arg0)
{
    Camera::TakePicture_IMPL_44277(arg0);
}

// public static extern void TakePicture_IMPL_44277(Android.Base.Wrappers.IJWrapper arg0) [static] :45
void Camera::TakePicture_IMPL_44277(uObject* arg0_)
{
    INIT_JNI;
    jobject _obArg0 = ((!arg0_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CLASS_INIT(Camera::_javaClass1(),Camera::_Init1());
    CACHE_METHOD(Camera::TakePicture_44277_ID(),Camera::_javaClass1(),"TakePicture","(Lcom/fuse/Native/CameraTask;)V",GetStaticMethodID,"Id for fallback method com.fuse.Native.Camera.TakePicture could not be cached",77);
    U_JNIVAR->CallStaticVoidMethod(Camera::_javaClass1(), Camera::TakePicture_44277_ID(), _obArg0);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Camera/0.24.6/AndroidImpl/$.uno(62)
// ------------------------------------------------------------------------------------------

// public abstract extern class CameraTask :62
// {
CameraTask_type* CameraTask_typeof()
{
    static uSStrong<CameraTask_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CameraTask);
    options.TypeSize = sizeof(CameraTask_type);
    type = (CameraTask_type*)uClassType::New("Android.com.fuse.Native.CameraTask", options);
    type->SetBase(::g::Android::Base::Wrappers::JWrapper_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(CameraTask_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(CameraTask_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::com::fuse::Native::CameraTask::_javaClass1_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::com::fuse::Native::CameraTask::_javaProxyClass1_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::Native::CameraTask::CameraTask_44283_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::Native::CameraTask::CameraTask_44283_ID_c_prox_, uFieldFlagsStatic);
    return type;
}

// protected CameraTask(int arg0, int arg1, bool arg2) :88
void CameraTask__ctor_4_fn(CameraTask* __this, int* arg0, int* arg1, bool* arg2)
{
    __this->ctor_4(*arg0, *arg1, *arg2);
}

// public static extern new void _Init() :72
void CameraTask___Init1_fn()
{
    CameraTask::_Init1();
}

// public static extern new void _InitProxy() :68
void CameraTask___InitProxy1_fn()
{
    CameraTask::_InitProxy1();
}

// public static extern new bool _IsThisType(Android.Base.Wrappers.IJWrapper obj) :70
void CameraTask___IsThisType1_fn(uObject* obj_, bool* __retval)
{
    *__retval = CameraTask::_IsThisType1(obj_);
}

// public static extern Android.Base.Primitives.ujobject CameraTask_IMPL_44283(Android.Base.Wrappers.IJWrapper arg0, int arg1, int arg2, bool arg3) :106
void CameraTask__CameraTask_IMPL_44283_fn(uObject* arg0_, int* arg1_, int* arg2_, bool* arg3_, jobject* __retval)
{
    *__retval = CameraTask::CameraTask_IMPL_44283(arg0_, *arg1_, *arg2_, *arg3_);
}

jclass CameraTask::_javaClass1_;
jclass CameraTask::_javaProxyClass1_;
jmethodID CameraTask::CameraTask_44283_ID_c_;
jmethodID CameraTask::CameraTask_44283_ID_c_prox_;

// protected CameraTask(int arg0, int arg1, bool arg2) [instance] :88
void CameraTask::ctor_4(int arg0, int arg1, bool arg2)
{
    ctor_1(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    _subclassed = CameraTask::_IsThisType1((uObject*)this);
    CameraTask* wrapper = _subclassed ? this : NULL;
    _javaObject = CameraTask::CameraTask_IMPL_44283((uObject*)wrapper, arg0, arg1, arg2);
}

// public static extern new void _Init() [static] :72
void CameraTask::_Init1()
{
    if (CameraTask::_javaClass1()) { return; }
    INIT_JNI;
    CameraTask::_javaClass1() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("com/fuse/Native/CameraTask"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!CameraTask::_javaClass1()) { THROW_UNO_EXCEPTION("Unable to cache class 'com.fuse.Native.CameraTask'", 50);; }
}

// public static extern new void _InitProxy() [static] :68
void CameraTask::_InitProxy1()
{
    if (CameraTask::_javaProxyClass1()) { return; }
    INIT_JNI;
    CameraTask::_javaProxyClass1() = NEW_GLOBAL_REF(jclass,::g::Android::Base::JNI::LoadClass(jni, "com.Bindings.Android_com_fuse_Native_CameraTask"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!CameraTask::_javaProxyClass1()) { THROW_UNO_EXCEPTION("Unable to cache class 'Android_com_fuse_Native_CameraTask'", 58);; }
    
    BEGIN_REG_MTD(2);
    //#if !#{Android.com.fuse.Native.CameraTask.OnSuccess(Android.Base.Wrappers.IJWrapper):IsStripped}
    REG_MTD(0,"__n_OnSuccess","(JLjava/lang/String;J)V",::Android_com_fuse_Native_CameraTask__OnSuccess44280);
    //#endif
    //#if !#{Android.com.fuse.Native.CameraTask.OnFailed(Android.Base.Wrappers.IJWrapper):IsStripped}
    REG_MTD(1,"__n_OnFailed","(JLjava/lang/String;J)V",::Android_com_fuse_Native_CameraTask__OnFailed44281);
    //#endif
    COMMIT_REG_MTD(CameraTask::_javaProxyClass1());
}

// public static extern new bool _IsThisType(Android.Base.Wrappers.IJWrapper obj) [static] :70
bool CameraTask::_IsThisType1(uObject* obj_)
{
    int N = 33;
    const char* typ = "Android.com.fuse.Native.CameraTask";
    const char* potential = obj_->__obj_type->TypeName;
    for (int i = 0; i < N; ++i)
    {
        if (potential[i]==0 || (potential[i] != typ[i])) {
            return true;
        }
    }
    return false;
}

// public static extern Android.Base.Primitives.ujobject CameraTask_IMPL_44283(Android.Base.Wrappers.IJWrapper arg0, int arg1, int arg2, bool arg3) [static] :106
jobject CameraTask::CameraTask_IMPL_44283(uObject* arg0_, int arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CLASS_INIT(CameraTask::_javaClass1(),CameraTask::_Init1());
    CACHE_METHOD(CameraTask::CameraTask_44283_ID_c(),CameraTask::_javaClass1(),"<init>","(IIZ)V",GetMethodID,"Id for fallback method com.fuse.Native.CameraTask.<init> could not be cached",76);
    if (arg0_) {
        CLASS_INIT(CameraTask::_javaProxyClass1(),CameraTask::_InitProxy1());
        CACHE_METHOD(CameraTask::CameraTask_44283_ID_c_prox(),CameraTask::_javaProxyClass1(),"<init>","(JIIZ)V",GetMethodID,"Proxy Id for method Android_com_fuse_Native_CameraTask.CameraTask_44283_ID_c_prox could not be cached",101);
    }
    
    jobject result;
    jobject _tmp;
    if (!arg0_) {
        _tmp = U_JNIVAR->NewObject(CameraTask::_javaClass1(), CameraTask::CameraTask_44283_ID_c(), ((jint)arg1_), ((jint)arg2_), ((jboolean)arg3_));
        result = NEW_GLOBAL_REF(jobject,_tmp);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    } else {
            _tmp = U_JNIVAR->NewObject(CameraTask::_javaProxyClass1(), CameraTask::CameraTask_44283_ID_c_prox(), (jlong)arg0_->__obj_weak, ((jint)arg1_), ((jint)arg2_), ((jboolean)arg3_));
        result = NEW_GLOBAL_REF(jobject,_tmp);
        ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    }
    
    U_JNIVAR->DeleteLocalRef(_tmp);
    return result;
}
// }

}}}}} // ::g::Android::com::fuse::Native
