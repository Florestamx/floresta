// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.graphics.drawable.shapes.ArcShape.h>
#include <Android.android.graphics.drawable.shapes.RectShape.h>
#include <Android.android.graphics.drawable.shapes.RoundRectShape.h>
#include <Android.android.graphics.drawable.shapes.Shape.h>
#include <Android.android.graphics.RectF.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h>
#include <Android.Runtime.FloatArray.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Type.h>
static uType* TYPES[1];

namespace g{
namespace Android{
namespace android{
namespace graphics{
namespace drawable{
namespace shapes{

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\graphics\drawable\shapes\$.uno(178)
// -------------------------------------------------------------------------------------------------

// public sealed extern class ArcShape :178
// {
::g::Android::java::lang::Object_type* ArcShape_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ArcShape);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.drawable.shapes.ArcShape", options);
    type->SetBase(::g::Android::android::graphics::drawable::shapes::RectShape_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::shapes::ArcShape::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::shapes::ArcShape::ArcShape_5935_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)ArcShape___Init4_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ArcShape__New8_fn, 0, true, ArcShape_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()));
    return type;
}

// public ArcShape(float arg0, float arg1) :185
void ArcShape__ctor_10_fn(ArcShape* __this, float* arg0, float* arg1)
{
    __this->ctor_10(*arg0, *arg1);
}

// public static extern new void _Init() :182
void ArcShape___Init4_fn()
{
    ArcShape::_Init4();
}

// public ArcShape New(float arg0, float arg1) :185
void ArcShape__New8_fn(float* arg0, float* arg1, ArcShape** __retval)
{
    *__retval = ArcShape::New8(*arg0, *arg1);
}

jclass ArcShape::_javaClass4_;
jmethodID ArcShape::ArcShape_5935_ID_c_;

// public ArcShape(float arg0, float arg1) [instance] :185
void ArcShape::ctor_10(float arg0, float arg1)
{
    uStackFrame __("Android.android.graphics.drawable.shapes.ArcShape", ".ctor(float,float)");
    ctor_8(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(ArcShape::_javaClass4(),ArcShape::_Init4());;
    CACHE_METHOD(ArcShape::ArcShape_5935_ID_c(),ArcShape::_javaClass4(),"<init>","(FF)V",GetMethodID,"Id for fallback method android.graphics.drawable.shapes.ArcShape.<init> could not be cached",91);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(ArcShape::_javaClass4(), ArcShape::ArcShape_5935_ID_c(), ((jfloat)arg0), ((jfloat)arg1));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public static extern new void _Init() [static] :182
void ArcShape::_Init4()
{
    uStackFrame __("Android.android.graphics.drawable.shapes.ArcShape", "_Init()");
    if (ArcShape::_javaClass4()) { return; }
    INIT_JNI;
    ArcShape::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/shapes/ArcShape"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ArcShape::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.shapes.ArcShape'", 65);; }
}

// public ArcShape New(float arg0, float arg1) [static] :185
ArcShape* ArcShape::New8(float arg0, float arg1)
{
    ArcShape* obj2 = (ArcShape*)uNew(ArcShape_typeof());
    obj2->ctor_10(arg0, arg1);
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\graphics\drawable\shapes\$.uno(105)
// -------------------------------------------------------------------------------------------------

// public extern class RectShape :105
// {
::g::Android::java::lang::Object_type* RectShape_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RectShape);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.drawable.shapes.RectShape", options);
    type->SetBase(::g::Android::android::graphics::drawable::shapes::Shape_typeof());
    type->fp_ctor_ = (void*)RectShape__New5_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::shapes::RectShape::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::shapes::RectShape::RectShape_5943_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)RectShape___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)RectShape__New5_fn, 0, true, RectShape_typeof(), 0));
    return type;
}

// public RectShape() :112
void RectShape__ctor_7_fn(RectShape* __this)
{
    __this->ctor_7();
}

// public RectShape(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :110
void RectShape__ctor_8_fn(RectShape* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_8(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :109
void RectShape___Init3_fn()
{
    RectShape::_Init3();
}

// public RectShape New() :112
void RectShape__New5_fn(RectShape** __retval)
{
    *__retval = RectShape::New5();
}

jclass RectShape::_javaClass3_;
jmethodID RectShape::RectShape_5943_ID_c_;

// public RectShape() [instance] :112
void RectShape::ctor_7()
{
    uStackFrame __("Android.android.graphics.drawable.shapes.RectShape", ".ctor()");
    ctor_6(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(RectShape::_javaClass3(),RectShape::_Init3());;
    CACHE_METHOD(RectShape::RectShape_5943_ID_c(),RectShape::_javaClass3(),"<init>","()V",GetMethodID,"Id for fallback method android.graphics.drawable.shapes.RectShape.<init> could not be cached",92);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(RectShape::_javaClass3(), RectShape::RectShape_5943_ID_c());;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public RectShape(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :110
void RectShape::ctor_8(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.android.graphics.drawable.shapes.RectShape", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_6(obj, utype, hasFallbackClass, resolveType);
}

// public static extern new void _Init() [static] :109
void RectShape::_Init3()
{
    uStackFrame __("Android.android.graphics.drawable.shapes.RectShape", "_Init()");
    if (RectShape::_javaClass3()) { return; }
    INIT_JNI;
    RectShape::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/shapes/RectShape"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!RectShape::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.shapes.RectShape'", 66);; }
}

// public RectShape New() [static] :112
RectShape* RectShape::New5()
{
    RectShape* obj2 = (RectShape*)uNew(RectShape_typeof());
    obj2->ctor_7();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\graphics\drawable\shapes\$.uno(335)
// -------------------------------------------------------------------------------------------------

// public sealed extern class RoundRectShape :335
// {
::g::Android::java::lang::Object_type* RoundRectShape_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RoundRectShape);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.drawable.shapes.RoundRectShape", options);
    type->SetBase(::g::Android::android::graphics::drawable::shapes::RectShape_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::shapes::RoundRectShape::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::shapes::RoundRectShape::RoundRectShape_5948_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)RoundRectShape___Init4_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)RoundRectShape__New8_fn, 0, true, RoundRectShape_typeof(), 3, ::g::Android::Runtime::FloatArray_typeof(), ::g::Android::android::graphics::RectF_typeof(), ::g::Android::Runtime::FloatArray_typeof()));
    return type;
}

// public RoundRectShape(Android.Runtime.FloatArray arg0, Android.android.graphics.RectF arg1, Android.Runtime.FloatArray arg2) :342
void RoundRectShape__ctor_10_fn(RoundRectShape* __this, ::g::Android::Runtime::FloatArray* arg0, ::g::Android::android::graphics::RectF* arg1, ::g::Android::Runtime::FloatArray* arg2)
{
    __this->ctor_10(arg0, arg1, arg2);
}

// public static extern new void _Init() :339
void RoundRectShape___Init4_fn()
{
    RoundRectShape::_Init4();
}

// public RoundRectShape New(Android.Runtime.FloatArray arg0, Android.android.graphics.RectF arg1, Android.Runtime.FloatArray arg2) :342
void RoundRectShape__New8_fn(::g::Android::Runtime::FloatArray* arg0, ::g::Android::android::graphics::RectF* arg1, ::g::Android::Runtime::FloatArray* arg2, RoundRectShape** __retval)
{
    *__retval = RoundRectShape::New8(arg0, arg1, arg2);
}

jclass RoundRectShape::_javaClass4_;
jmethodID RoundRectShape::RoundRectShape_5948_ID_c_;

// public RoundRectShape(Android.Runtime.FloatArray arg0, Android.android.graphics.RectF arg1, Android.Runtime.FloatArray arg2) [instance] :342
void RoundRectShape::ctor_10(::g::Android::Runtime::FloatArray* arg0, ::g::Android::android::graphics::RectF* arg1, ::g::Android::Runtime::FloatArray* arg2)
{
    uStackFrame __("Android.android.graphics.drawable.shapes.RoundRectShape", ".ctor(Android.Runtime.FloatArray,Android.android.graphics.RectF,Android.Runtime.FloatArray)");
    ctor_8(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(RoundRectShape::_javaClass4(),RoundRectShape::_Init4());;
    CACHE_METHOD(RoundRectShape::RoundRectShape_5948_ID_c(),RoundRectShape::_javaClass4(),"<init>","([FLandroid/graphics/RectF;[F)V",GetMethodID,"Id for fallback method android.graphics.drawable.shapes.RoundRectShape.<init> could not be cached",97);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg2 = ((!arg2) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(RoundRectShape::_javaClass4(), RoundRectShape::RoundRectShape_5948_ID_c(), _obArg0, _obArg1, _obArg2);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public static extern new void _Init() [static] :339
void RoundRectShape::_Init4()
{
    uStackFrame __("Android.android.graphics.drawable.shapes.RoundRectShape", "_Init()");
    if (RoundRectShape::_javaClass4()) { return; }
    INIT_JNI;
    RoundRectShape::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/shapes/RoundRectShape"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!RoundRectShape::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.shapes.RoundRectShape'", 71);; }
}

// public RoundRectShape New(Android.Runtime.FloatArray arg0, Android.android.graphics.RectF arg1, Android.Runtime.FloatArray arg2) [static] :342
RoundRectShape* RoundRectShape::New8(::g::Android::Runtime::FloatArray* arg0, ::g::Android::android::graphics::RectF* arg1, ::g::Android::Runtime::FloatArray* arg2)
{
    RoundRectShape* obj2 = (RoundRectShape*)uNew(RoundRectShape_typeof());
    obj2->ctor_10(arg0, arg1, arg2);
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\graphics\drawable\shapes\$.uno(11)
// ------------------------------------------------------------------------------------------------

// public abstract extern class Shape :11
// {
::g::Android::java::lang::Object_type* Shape_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.drawable.shapes.Shape", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}

// protected Shape(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :16
void Shape__ctor_6_fn(Shape* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_6(*obj, utype, *hasFallbackClass, *resolveType);
}

// protected Shape(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :16
void Shape::ctor_6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.android.graphics.drawable.shapes.Shape", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_4(obj, utype, hasFallbackClass, resolveType);
}
// }

}}}}}} // ::g::Android::android::graphics::drawable::shapes
