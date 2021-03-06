// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.res.AssetManager.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.BitmapDLRConfig.h>
#include <Android.android.graphics.BitmapFactory.h>
#include <Android.android.graphics.Canvas.h>
#include <Android.android.graphics.Color.h>
#include <Android.android.graphics.Matrix.h>
#include <Android.android.graphics.Paint.h>
#include <Android.android.graphics.PaintDLRStyle.h>
#include <Android.android.graphics.PorterDuffDLRMode.h>
#include <Android.android.graphics.Rect.h>
#include <Android.android.graphics.RectF.h>
#include <Android.android.graphics.SurfaceTexture.h>
#include <Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h>
#include <Android.android.graphics.Typeface.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-3d380973.h>
#include <Android.java.io.InputStream.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.FloatArray.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
static uType* TYPES[5];

namespace g{
namespace Android{
namespace android{
namespace graphics{

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(2162)
// -----------------------------------------------------------------------------------------------------

// public sealed extern class Bitmap :2162
// {
::g::Android::java::lang::Object_type* Bitmap_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Bitmap);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.Bitmap", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::Bitmap::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Bitmap::createBitmap_6455_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Bitmap::eraseColor_6482_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Bitmap::recycle_6445_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Bitmap::setHasMipMap_6481_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :2166
void Bitmap___Init2_fn()
{
    Bitmap::_Init2();
}

// public static Android.android.graphics.Bitmap createBitmap(int arg0, int arg1, Android.android.graphics.BitmapDLRConfig arg2) :2300
void Bitmap__createBitmap8_fn(int* arg0, int* arg1, ::g::Android::android::graphics::BitmapDLRConfig* arg2, Bitmap** __retval)
{
    *__retval = Bitmap::createBitmap8(*arg0, *arg1, arg2);
}

// public static extern Android.Base.Wrappers.IJWrapper createBitmap_IMPL_6455(int arg0, int arg1, Android.Base.Wrappers.IJWrapper arg2) :2577
void Bitmap__createBitmap_IMPL_6455_fn(int* arg0_, int* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Bitmap::createBitmap_IMPL_6455(*arg0_, *arg1_, arg2_);
}

// public void eraseColor(int arg0) :2462
void Bitmap__eraseColor_fn(Bitmap* __this, int* arg0)
{
    __this->eraseColor(*arg0);
}

// public static extern void eraseColor_IMPL_6482(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2658
void Bitmap__eraseColor_IMPL_6482_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Bitmap::eraseColor_IMPL_6482(*arg0_, *arg1_, *arg2_);
}

// public void recycle() :2240
void Bitmap__recycle_fn(Bitmap* __this)
{
    __this->recycle();
}

// public static extern void recycle_IMPL_6445(bool arg0, Android.Base.Primitives.ujobject arg1) :2547
void Bitmap__recycle_IMPL_6445_fn(bool* arg0_, jobject* arg1_)
{
    Bitmap::recycle_IMPL_6445(*arg0_, *arg1_);
}

// public void setHasMipMap(bool arg0) :2456
void Bitmap__setHasMipMap_fn(Bitmap* __this, bool* arg0)
{
    __this->setHasMipMap(*arg0);
}

// public static extern void setHasMipMap_IMPL_6481(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :2655
void Bitmap__setHasMipMap_IMPL_6481_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    Bitmap::setHasMipMap_IMPL_6481(*arg0_, *arg1_, *arg2_);
}

jclass Bitmap::_javaClass2_;
jmethodID Bitmap::createBitmap_6455_ID_;
jmethodID Bitmap::eraseColor_6482_ID_;
jmethodID Bitmap::recycle_6445_ID_;
jmethodID Bitmap::setHasMipMap_6481_ID_;

// public void eraseColor(int arg0) [instance] :2462
void Bitmap::eraseColor(int arg0)
{
    int arg0_ = arg0;
    Bitmap::eraseColor_IMPL_6482(_subclassed, _javaObject, arg0_);
}

// public void recycle() [instance] :2240
void Bitmap::recycle()
{
    Bitmap::recycle_IMPL_6445(_subclassed, _javaObject);
}

// public void setHasMipMap(bool arg0) [instance] :2456
void Bitmap::setHasMipMap(bool arg0)
{
    bool arg0_ = arg0;
    Bitmap::setHasMipMap_IMPL_6481(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :2166
void Bitmap::_Init2()
{
    if (Bitmap::_javaClass2()) { return; }
    INIT_JNI;
    Bitmap::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Bitmap"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Bitmap::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Bitmap'", 47);; }
}

// public static Android.android.graphics.Bitmap createBitmap(int arg0, int arg1, Android.android.graphics.BitmapDLRConfig arg2) [static] :2300
Bitmap* Bitmap::createBitmap8(int arg0, int arg1, ::g::Android::android::graphics::BitmapDLRConfig* arg2)
{
    return uCast<Bitmap*>(Bitmap::createBitmap_IMPL_6455(arg0, arg1, (uObject*)arg2), Bitmap_typeof());
}

// public static extern Android.Base.Wrappers.IJWrapper createBitmap_IMPL_6455(int arg0, int arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2577
uObject* Bitmap::createBitmap_IMPL_6455(int arg0_, int arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Bitmap::_javaClass2(),Bitmap::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Bitmap::createBitmap_6455_ID(),Bitmap::_javaClass2(),"createBitmap","(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",GetStaticMethodID,"Id for fallback method android.graphics.Bitmap.createBitmap could not be cached",79);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(Bitmap::_javaClass2(), Bitmap::createBitmap_6455_ID(), ((jint)arg0_), ((jint)arg1_), _obArg2),result,Bitmap_typeof(),Bitmap*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void eraseColor_IMPL_6482(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :2658
void Bitmap::eraseColor_IMPL_6482(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(Bitmap::_javaClass2(),Bitmap::_Init2());
    
    CACHE_METHOD(Bitmap::eraseColor_6482_ID(),Bitmap::_javaClass2(),"eraseColor","(I)V",GetMethodID,"Id for fallback method android.graphics.Bitmap.eraseColor could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Bitmap::_javaClass2(), Bitmap::eraseColor_6482_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Bitmap::eraseColor_6482_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void recycle_IMPL_6445(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2547
void Bitmap::recycle_IMPL_6445(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Bitmap::_javaClass2(),Bitmap::_Init2());
    
    CACHE_METHOD(Bitmap::recycle_6445_ID(),Bitmap::_javaClass2(),"recycle","()V",GetMethodID,"Id for fallback method android.graphics.Bitmap.recycle could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Bitmap::_javaClass2(), Bitmap::recycle_6445_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Bitmap::recycle_6445_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setHasMipMap_IMPL_6481(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :2655
void Bitmap::setHasMipMap_IMPL_6481(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(Bitmap::_javaClass2(),Bitmap::_Init2());
    
    CACHE_METHOD(Bitmap::setHasMipMap_6481_ID(),Bitmap::_javaClass2(),"setHasMipMap","(Z)V",GetMethodID,"Id for fallback method android.graphics.Bitmap.setHasMipMap could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Bitmap::_javaClass2(), Bitmap::setHasMipMap_6481_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Bitmap::setHasMipMap_6481_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(174)
// ----------------------------------------------------------------------------------------------------

// public sealed extern class BitmapDLRConfig :174
// {
::g::Android::java::lang::Object_type* BitmapDLRConfig_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(BitmapDLRConfig);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.BitmapDLRConfig", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::BitmapDLRConfig::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::graphics::BitmapDLRConfig::ARGB_8888_6432_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :178
void BitmapDLRConfig___Init3_fn()
{
    BitmapDLRConfig::_Init3();
}

// public static Android.android.graphics.BitmapDLRConfig get_ARGB_8888() :217
void BitmapDLRConfig__get_ARGB_8888_fn(BitmapDLRConfig** __retval)
{
    *__retval = BitmapDLRConfig::ARGB_8888();
}

jclass BitmapDLRConfig::_javaClass3_;
jfieldID BitmapDLRConfig::ARGB_8888_6432_ID_;

// public static extern new void _Init() [static] :178
void BitmapDLRConfig::_Init3()
{
    if (BitmapDLRConfig::_javaClass3()) { return; }
    INIT_JNI;
    BitmapDLRConfig::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Bitmap$Config"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!BitmapDLRConfig::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Bitmap$Config'", 54);; }
}

// public static Android.android.graphics.BitmapDLRConfig get_ARGB_8888() [static] :217
BitmapDLRConfig* BitmapDLRConfig::ARGB_8888()
{
    INIT_JNI;
    CLASS_INIT(BitmapDLRConfig::_javaClass3(),BitmapDLRConfig::_Init3());
    if (::uEnterCriticalIfNull(&BitmapDLRConfig::ARGB_8888_6432_ID())) {;
    CACHE_FIELD(BitmapDLRConfig::ARGB_8888_6432_ID(),BitmapDLRConfig::_javaClass3(),"ARGB_8888","Landroid/graphics/Bitmap$Config;",GetStaticFieldID,"Id for field BitmapDLRConfig.ARGB_8888 could not be cached",58);
    ::uExitCritical();;
    };
    BitmapDLRConfig* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(BitmapDLRConfig::_javaClass3(), BitmapDLRConfig::ARGB_8888_6432_ID()),result,BitmapDLRConfig_typeof(),BitmapDLRConfig*,false,true);;
    return uCast<BitmapDLRConfig*>(result, BitmapDLRConfig_typeof());
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(3225)
// -----------------------------------------------------------------------------------------------------

// public sealed extern class BitmapFactory :3225
// {
::g::Android::java::lang::Object_type* BitmapFactory_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(BitmapFactory);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.BitmapFactory", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[2] = ::g::Android::android::graphics::Bitmap_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::BitmapFactory::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::BitmapFactory::decodeFile_6516_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::BitmapFactory::decodeStream_6523_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :3229
void BitmapFactory___Init2_fn()
{
    BitmapFactory::_Init2();
}

// public static Android.android.graphics.Bitmap decodeFile(Android.java.lang.String arg0) :3253
void BitmapFactory__decodeFile_fn(::g::Android::java::lang::String* arg0, ::g::Android::android::graphics::Bitmap** __retval)
{
    *__retval = BitmapFactory::decodeFile(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper decodeFile_IMPL_6516(Android.Base.Wrappers.IJWrapper arg0) :3318
void BitmapFactory__decodeFile_IMPL_6516_fn(uObject* arg0_, uObject** __retval)
{
    *__retval = BitmapFactory::decodeFile_IMPL_6516(arg0_);
}

// public static Android.android.graphics.Bitmap decodeStream(Android.java.io.InputStream arg0) :3295
void BitmapFactory__decodeStream_fn(::g::Android::java::io::InputStream* arg0, ::g::Android::android::graphics::Bitmap** __retval)
{
    *__retval = BitmapFactory::decodeStream(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper decodeStream_IMPL_6523(Android.Base.Wrappers.IJWrapper arg0) :3339
void BitmapFactory__decodeStream_IMPL_6523_fn(uObject* arg0_, uObject** __retval)
{
    *__retval = BitmapFactory::decodeStream_IMPL_6523(arg0_);
}

jclass BitmapFactory::_javaClass2_;
jmethodID BitmapFactory::decodeFile_6516_ID_;
jmethodID BitmapFactory::decodeStream_6523_ID_;

// public static extern new void _Init() [static] :3229
void BitmapFactory::_Init2()
{
    if (BitmapFactory::_javaClass2()) { return; }
    INIT_JNI;
    BitmapFactory::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/BitmapFactory"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!BitmapFactory::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.BitmapFactory'", 54);; }
}

// public static Android.android.graphics.Bitmap decodeFile(Android.java.lang.String arg0) [static] :3253
::g::Android::android::graphics::Bitmap* BitmapFactory::decodeFile(::g::Android::java::lang::String* arg0)
{
    return uCast< ::g::Android::android::graphics::Bitmap*>(BitmapFactory::decodeFile_IMPL_6516((uObject*)arg0), ::TYPES[2/*Android.android.graphics.Bitmap*/]);
}

// public static extern Android.Base.Wrappers.IJWrapper decodeFile_IMPL_6516(Android.Base.Wrappers.IJWrapper arg0) [static] :3318
uObject* BitmapFactory::decodeFile_IMPL_6516(uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(BitmapFactory::_javaClass2(),BitmapFactory::_Init2());
    jobject _obArg0 = ((!arg0_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(BitmapFactory::decodeFile_6516_ID(),BitmapFactory::_javaClass2(),"decodeFile","(Ljava/lang/String;)Landroid/graphics/Bitmap;",GetStaticMethodID,"Id for fallback method android.graphics.BitmapFactory.decodeFile could not be cached",84);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(BitmapFactory::_javaClass2(), BitmapFactory::decodeFile_6516_ID(), _obArg0),result,::g::Android::android::graphics::Bitmap_typeof(),::g::Android::android::graphics::Bitmap*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static Android.android.graphics.Bitmap decodeStream(Android.java.io.InputStream arg0) [static] :3295
::g::Android::android::graphics::Bitmap* BitmapFactory::decodeStream(::g::Android::java::io::InputStream* arg0)
{
    return uCast< ::g::Android::android::graphics::Bitmap*>(BitmapFactory::decodeStream_IMPL_6523((uObject*)arg0), ::TYPES[2/*Android.android.graphics.Bitmap*/]);
}

// public static extern Android.Base.Wrappers.IJWrapper decodeStream_IMPL_6523(Android.Base.Wrappers.IJWrapper arg0) [static] :3339
uObject* BitmapFactory::decodeStream_IMPL_6523(uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(BitmapFactory::_javaClass2(),BitmapFactory::_Init2());
    jobject _obArg0 = ((!arg0_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(BitmapFactory::decodeStream_6523_ID(),BitmapFactory::_javaClass2(),"decodeStream","(Ljava/io/InputStream;)Landroid/graphics/Bitmap;",GetStaticMethodID,"Id for fallback method android.graphics.BitmapFactory.decodeStream could not be cached",86);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(BitmapFactory::_javaClass2(), BitmapFactory::decodeStream_6523_ID(), _obArg0),result,::g::Android::android::graphics::Bitmap_typeof(),::g::Android::android::graphics::Bitmap*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(3832)
// -----------------------------------------------------------------------------------------------------

// public sealed extern class Canvas :3832
// {
::g::Android::java::lang::Object_type* Canvas_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Canvas);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.Canvas", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::Canvas::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Canvas::Canvas_6577_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Canvas::translate_6596_ID_, uFieldFlagsStatic);
    return type;
}

// public Canvas(Android.android.graphics.Bitmap arg0) :3956
void Canvas__ctor_6_fn(Canvas* __this, ::g::Android::android::graphics::Bitmap* arg0)
{
    __this->ctor_6(arg0);
}

// public static extern new void _Init() :3836
void Canvas___Init2_fn()
{
    Canvas::_Init2();
}

// public Canvas New(Android.android.graphics.Bitmap arg0) :3956
void Canvas__New6_fn(::g::Android::android::graphics::Bitmap* arg0, Canvas** __retval)
{
    *__retval = Canvas::New6(arg0);
}

// public void translate(float arg0, float arg1) :4080
void Canvas__translate_fn(Canvas* __this, float* arg0, float* arg1)
{
    __this->translate(*arg0, *arg1);
}

// public static extern void translate_IMPL_6596(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2, float arg3) :4533
void Canvas__translate_IMPL_6596_fn(bool* arg0_, jobject* arg1_, float* arg2_, float* arg3_)
{
    Canvas::translate_IMPL_6596(*arg0_, *arg1_, *arg2_, *arg3_);
}

jclass Canvas::_javaClass2_;
jmethodID Canvas::Canvas_6577_ID_c_;
jmethodID Canvas::translate_6596_ID_;

// public Canvas(Android.android.graphics.Bitmap arg0) [instance] :3956
void Canvas::ctor_6(::g::Android::android::graphics::Bitmap* arg0)
{
    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Canvas::_javaClass2(),Canvas::_Init2());;
    CACHE_METHOD(Canvas::Canvas_6577_ID_c(),Canvas::_javaClass2(),"<init>","(Landroid/graphics/Bitmap;)V",GetMethodID,"Id for fallback method android.graphics.Canvas.<init> could not be cached",73);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Canvas::_javaClass2(), Canvas::Canvas_6577_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public void translate(float arg0, float arg1) [instance] :4080
void Canvas::translate(float arg0, float arg1)
{
    float arg0_ = arg0;
    float arg1_ = arg1;
    Canvas::translate_IMPL_6596(_subclassed, _javaObject, arg0_, arg1_);
}

// public static extern new void _Init() [static] :3836
void Canvas::_Init2()
{
    if (Canvas::_javaClass2()) { return; }
    INIT_JNI;
    Canvas::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Canvas"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Canvas::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Canvas'", 47);; }
}

// public Canvas New(Android.android.graphics.Bitmap arg0) [static] :3956
Canvas* Canvas::New6(::g::Android::android::graphics::Bitmap* arg0)
{
    Canvas* obj3 = (Canvas*)uNew(Canvas_typeof());
    obj3->ctor_6(arg0);
    return obj3;
}

// public static extern void translate_IMPL_6596(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2, float arg3) [static] :4533
void Canvas::translate_IMPL_6596(bool arg0_, jobject arg1_, float arg2_, float arg3_)
{
    INIT_JNI;
    CLASS_INIT(Canvas::_javaClass2(),Canvas::_Init2());
    
    CACHE_METHOD(Canvas::translate_6596_ID(),Canvas::_javaClass2(),"translate","(FF)V",GetMethodID,"Id for fallback method android.graphics.Canvas.translate could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Canvas::_javaClass2(), Canvas::translate_6596_ID(), ((jfloat)arg2_), ((jfloat)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Canvas::translate_6596_ID(), ((jfloat)arg2_), ((jfloat)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(4744)
// -----------------------------------------------------------------------------------------------------

// public sealed extern class Color :4744
// {
::g::Android::java::lang::Object_type* Color_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Color);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.Color", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::Color::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Color::argb_6680_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :4748
void Color___Init2_fn()
{
    Color::_Init2();
}

// public static int argb(int arg0, int arg1, int arg2, int arg3) :5000
void Color__argb_fn(int* arg0, int* arg1, int* arg2, int* arg3, int* __retval)
{
    *__retval = Color::argb(*arg0, *arg1, *arg2, *arg3);
}

// public static extern int argb_IMPL_6680(int arg0, int arg1, int arg2, int arg3) :5053
void Color__argb_IMPL_6680_fn(int* arg0_, int* arg1_, int* arg2_, int* arg3_, int* __retval)
{
    *__retval = Color::argb_IMPL_6680(*arg0_, *arg1_, *arg2_, *arg3_);
}

jclass Color::_javaClass2_;
jmethodID Color::argb_6680_ID_;

// public static extern new void _Init() [static] :4748
void Color::_Init2()
{
    if (Color::_javaClass2()) { return; }
    INIT_JNI;
    Color::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Color"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Color::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Color'", 46);; }
}

// public static int argb(int arg0, int arg1, int arg2, int arg3) [static] :5000
int Color::argb(int arg0, int arg1, int arg2, int arg3)
{
    return Color::argb_IMPL_6680(arg0, arg1, arg2, arg3);
}

// public static extern int argb_IMPL_6680(int arg0, int arg1, int arg2, int arg3) [static] :5053
int Color::argb_IMPL_6680(int arg0_, int arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(Color::_javaClass2(),Color::_Init2());
    
    int result;
    CACHE_METHOD(Color::argb_6680_ID(),Color::_javaClass2(),"argb","(IIII)I",GetStaticMethodID,"Id for fallback method android.graphics.Color.argb could not be cached",70);
    result = ((int)U_JNIVAR->CallStaticIntMethod(Color::_javaClass2(), Color::argb_6680_ID(), ((jint)arg0_), ((jint)arg1_), ((jint)arg2_), ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(6224)
// -----------------------------------------------------------------------------------------------------

// public sealed extern class Matrix :6224
// {
::g::Android::java::lang::Object_type* Matrix_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Matrix);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.Matrix", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_ctor_ = (void*)Matrix__New5_fn;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Matrix__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Matrix__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::Matrix::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Matrix::hashCode_6770_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Matrix::Matrix_6764_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Matrix::setValues_6811_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Matrix::toString_6812_ID_, uFieldFlagsStatic);
    return type;
}

// public Matrix() :6384
void Matrix__ctor_5_fn(Matrix* __this)
{
    __this->ctor_5();
}

// public static extern new void _Init() :6228
void Matrix___Init2_fn()
{
    Matrix::_Init2();
}

// public override sealed int hashCode() :6439
void Matrix__hashCode1_fn(Matrix* __this, int* __retval)
{
    return *__retval = Matrix::hashCode_IMPL_6770(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_6770(bool arg0, Android.Base.Primitives.ujobject arg1) :6724
void Matrix__hashCode_IMPL_6770_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Matrix::hashCode_IMPL_6770(*arg0_, *arg1_);
}

// public Matrix New() :6384
void Matrix__New5_fn(Matrix** __retval)
{
    *__retval = Matrix::New5();
}

// public void setValues(Android.Runtime.FloatArray arg0) :6685
void Matrix__setValues_fn(Matrix* __this, ::g::Android::Runtime::FloatArray* arg0)
{
    __this->setValues(arg0);
}

// public static extern void setValues_IMPL_6811(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :6847
void Matrix__setValues_IMPL_6811_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Matrix::setValues_IMPL_6811(*arg0_, *arg1_, arg2_);
}

// public override sealed Android.java.lang.String toString() :6691
void Matrix__toString_fn(Matrix* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Matrix::toString_IMPL_6812(__this->_subclassed, __this->_javaObject), ::TYPES[3/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_6812(bool arg0, Android.Base.Primitives.ujobject arg1) :6850
void Matrix__toString_IMPL_6812_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Matrix::toString_IMPL_6812(*arg0_, *arg1_);
}

jclass Matrix::_javaClass2_;
jmethodID Matrix::hashCode_6770_ID_;
jmethodID Matrix::Matrix_6764_ID_c_;
jmethodID Matrix::setValues_6811_ID_;
jmethodID Matrix::toString_6812_ID_;

// public Matrix() [instance] :6384
void Matrix::ctor_5()
{
    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Matrix::_javaClass2(),Matrix::_Init2());;
    CACHE_METHOD(Matrix::Matrix_6764_ID_c(),Matrix::_javaClass2(),"<init>","()V",GetMethodID,"Id for fallback method android.graphics.Matrix.<init> could not be cached",73);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Matrix::_javaClass2(), Matrix::Matrix_6764_ID_c());;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public void setValues(Android.Runtime.FloatArray arg0) [instance] :6685
void Matrix::setValues(::g::Android::Runtime::FloatArray* arg0)
{
    Matrix::setValues_IMPL_6811(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern new void _Init() [static] :6228
void Matrix::_Init2()
{
    if (Matrix::_javaClass2()) { return; }
    INIT_JNI;
    Matrix::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Matrix"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Matrix::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Matrix'", 47);; }
}

// public static extern int hashCode_IMPL_6770(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :6724
int Matrix::hashCode_IMPL_6770(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Matrix::_javaClass2(),Matrix::_Init2());
    
    int result;
    CACHE_METHOD(Matrix::hashCode_6770_ID(),Matrix::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.Matrix.hashCode could not be cached",75);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Matrix::_javaClass2(), Matrix::hashCode_6770_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Matrix::hashCode_6770_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public Matrix New() [static] :6384
Matrix* Matrix::New5()
{
    Matrix* obj2 = (Matrix*)uNew(Matrix_typeof());
    obj2->ctor_5();
    return obj2;
}

// public static extern void setValues_IMPL_6811(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :6847
void Matrix::setValues_IMPL_6811(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Matrix::_javaClass2(),Matrix::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Matrix::setValues_6811_ID(),Matrix::_javaClass2(),"setValues","([F)V",GetMethodID,"Id for fallback method android.graphics.Matrix.setValues could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Matrix::_javaClass2(), Matrix::setValues_6811_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Matrix::setValues_6811_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_6812(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :6850
uObject* Matrix::toString_IMPL_6812(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Matrix::_javaClass2(),Matrix::_Init2());
    
    uObject* result;
    CACHE_METHOD(Matrix::toString_6812_ID(),Matrix::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.graphics.Matrix.toString could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Matrix::_javaClass2(), Matrix::toString_6812_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Matrix::toString_6812_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(7509)
// -----------------------------------------------------------------------------------------------------

// public extern class Paint :7509
// {
::g::Android::java::lang::Object_type* Paint_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Paint);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.Paint", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[4] = ::g::Android::android::graphics::Typeface_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::Paint::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Paint::getTextBounds_6975_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Paint::setAntiAlias_6898_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Paint::setARGB_6919_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Paint::setColor_6916_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Paint::setStrokeWidth_6921_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Paint::setStyle_6914_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Paint::setTextSize_6950_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Paint::setTypeface_6940_ID_, uFieldFlagsStatic);
    return type;
}

// public Paint(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :7514
void Paint__ctor_7_fn(Paint* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_7(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :7513
void Paint___Init2_fn()
{
    Paint::_Init2();
}

// public void getTextBounds(Android.java.lang.String arg0, int arg1, int arg2, Android.android.graphics.Rect arg3) :8270
void Paint__getTextBounds_fn(Paint* __this, ::g::Android::java::lang::String* arg0, int* arg1, int* arg2, ::g::Android::android::graphics::Rect* arg3)
{
    __this->getTextBounds(arg0, *arg1, *arg2, arg3);
}

// public static extern void getTextBounds_IMPL_6975(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) :8544
void Paint__getTextBounds_IMPL_6975_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, uObject* arg5_)
{
    Paint::getTextBounds_IMPL_6975(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, arg5_);
}

// public void setAntiAlias(bool arg0) :7808
void Paint__setAntiAlias_fn(Paint* __this, bool* arg0)
{
    __this->setAntiAlias(*arg0);
}

// public static extern void setAntiAlias_IMPL_6898(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :8313
void Paint__setAntiAlias_IMPL_6898_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    Paint::setAntiAlias_IMPL_6898(*arg0_, *arg1_, *arg2_);
}

// public void setARGB(int arg0, int arg1, int arg2, int arg3) :7934
void Paint__setARGB_fn(Paint* __this, int* arg0, int* arg1, int* arg2, int* arg3)
{
    __this->setARGB(*arg0, *arg1, *arg2, *arg3);
}

// public static extern void setARGB_IMPL_6919(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :8376
void Paint__setARGB_IMPL_6919_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    Paint::setARGB_IMPL_6919(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public void setColor(int arg0) :7916
void Paint__setColor_fn(Paint* __this, int* arg0)
{
    __this->setColor(*arg0);
}

// public static extern void setColor_IMPL_6916(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :8367
void Paint__setColor_IMPL_6916_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Paint::setColor_IMPL_6916(*arg0_, *arg1_, *arg2_);
}

// public void setStrokeWidth(float arg0) :7946
void Paint__setStrokeWidth_fn(Paint* __this, float* arg0)
{
    __this->setStrokeWidth(*arg0);
}

// public static extern void setStrokeWidth_IMPL_6921(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) :8382
void Paint__setStrokeWidth_IMPL_6921_fn(bool* arg0_, jobject* arg1_, float* arg2_)
{
    Paint::setStrokeWidth_IMPL_6921(*arg0_, *arg1_, *arg2_);
}

// public void setStyle(Android.android.graphics.PaintDLRStyle arg0) :7904
void Paint__setStyle_fn(Paint* __this, ::g::Android::android::graphics::PaintDLRStyle* arg0)
{
    __this->setStyle(arg0);
}

// public static extern void setStyle_IMPL_6914(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :8361
void Paint__setStyle_IMPL_6914_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Paint::setStyle_IMPL_6914(*arg0_, *arg1_, arg2_);
}

// public void setTextSize(float arg0) :8120
void Paint__setTextSize_fn(Paint* __this, float* arg0)
{
    __this->setTextSize(*arg0);
}

// public static extern void setTextSize_IMPL_6950(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) :8469
void Paint__setTextSize_IMPL_6950_fn(bool* arg0_, jobject* arg1_, float* arg2_)
{
    Paint::setTextSize_IMPL_6950(*arg0_, *arg1_, *arg2_);
}

// public Android.android.graphics.Typeface setTypeface(Android.android.graphics.Typeface arg0) :8060
void Paint__setTypeface_fn(Paint* __this, ::g::Android::android::graphics::Typeface* arg0, ::g::Android::android::graphics::Typeface** __retval)
{
    *__retval = __this->setTypeface(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setTypeface_IMPL_6940(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :8439
void Paint__setTypeface_IMPL_6940_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Paint::setTypeface_IMPL_6940(*arg0_, *arg1_, arg2_);
}

jclass Paint::_javaClass2_;
jmethodID Paint::getTextBounds_6975_ID_;
jmethodID Paint::setAntiAlias_6898_ID_;
jmethodID Paint::setARGB_6919_ID_;
jmethodID Paint::setColor_6916_ID_;
jmethodID Paint::setStrokeWidth_6921_ID_;
jmethodID Paint::setStyle_6914_ID_;
jmethodID Paint::setTextSize_6950_ID_;
jmethodID Paint::setTypeface_6940_ID_;

// public Paint(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :7514
void Paint::ctor_7(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_4(obj, utype, hasFallbackClass, resolveType);
}

// public void getTextBounds(Android.java.lang.String arg0, int arg1, int arg2, Android.android.graphics.Rect arg3) [instance] :8270
void Paint::getTextBounds(::g::Android::java::lang::String* arg0, int arg1, int arg2, ::g::Android::android::graphics::Rect* arg3)
{
    int arg1_ = arg1;
    int arg2_ = arg2;
    Paint::getTextBounds_IMPL_6975(_subclassed, _javaObject, (uObject*)arg0, arg1_, arg2_, (uObject*)arg3);
}

// public void setAntiAlias(bool arg0) [instance] :7808
void Paint::setAntiAlias(bool arg0)
{
    bool arg0_ = arg0;
    Paint::setAntiAlias_IMPL_6898(_subclassed, _javaObject, arg0_);
}

// public void setARGB(int arg0, int arg1, int arg2, int arg3) [instance] :7934
void Paint::setARGB(int arg0, int arg1, int arg2, int arg3)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    int arg2_ = arg2;
    int arg3_ = arg3;
    Paint::setARGB_IMPL_6919(_subclassed, _javaObject, arg0_, arg1_, arg2_, arg3_);
}

// public void setColor(int arg0) [instance] :7916
void Paint::setColor(int arg0)
{
    int arg0_ = arg0;
    Paint::setColor_IMPL_6916(_subclassed, _javaObject, arg0_);
}

// public void setStrokeWidth(float arg0) [instance] :7946
void Paint::setStrokeWidth(float arg0)
{
    float arg0_ = arg0;
    Paint::setStrokeWidth_IMPL_6921(_subclassed, _javaObject, arg0_);
}

// public void setStyle(Android.android.graphics.PaintDLRStyle arg0) [instance] :7904
void Paint::setStyle(::g::Android::android::graphics::PaintDLRStyle* arg0)
{
    Paint::setStyle_IMPL_6914(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setTextSize(float arg0) [instance] :8120
void Paint::setTextSize(float arg0)
{
    float arg0_ = arg0;
    Paint::setTextSize_IMPL_6950(_subclassed, _javaObject, arg0_);
}

// public Android.android.graphics.Typeface setTypeface(Android.android.graphics.Typeface arg0) [instance] :8060
::g::Android::android::graphics::Typeface* Paint::setTypeface(::g::Android::android::graphics::Typeface* arg0)
{
    return uCast< ::g::Android::android::graphics::Typeface*>(Paint::setTypeface_IMPL_6940(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[4/*Android.android.graphics.Typeface*/]);
}

// public static extern new void _Init() [static] :7513
void Paint::_Init2()
{
    if (Paint::_javaClass2()) { return; }
    INIT_JNI;
    Paint::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Paint"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Paint::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Paint'", 46);; }
}

// public static extern void getTextBounds_IMPL_6975(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :8544
void Paint::getTextBounds_IMPL_6975(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(Paint::_javaClass2(),Paint::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Paint::getTextBounds_6975_ID(),Paint::_javaClass2(),"getTextBounds","(Ljava/lang/String;IILandroid/graphics/Rect;)V",GetMethodID,"Id for fallback method android.graphics.Paint.getTextBounds could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Paint::_javaClass2(), Paint::getTextBounds_6975_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), _obArg5);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Paint::getTextBounds_6975_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), _obArg5);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setAntiAlias_IMPL_6898(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :8313
void Paint::setAntiAlias_IMPL_6898(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(Paint::_javaClass2(),Paint::_Init2());
    
    CACHE_METHOD(Paint::setAntiAlias_6898_ID(),Paint::_javaClass2(),"setAntiAlias","(Z)V",GetMethodID,"Id for fallback method android.graphics.Paint.setAntiAlias could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Paint::_javaClass2(), Paint::setAntiAlias_6898_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Paint::setAntiAlias_6898_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setARGB_IMPL_6919(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :8376
void Paint::setARGB_IMPL_6919(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(Paint::_javaClass2(),Paint::_Init2());
    
    CACHE_METHOD(Paint::setARGB_6919_ID(),Paint::_javaClass2(),"setARGB","(IIII)V",GetMethodID,"Id for fallback method android.graphics.Paint.setARGB could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Paint::_javaClass2(), Paint::setARGB_6919_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Paint::setARGB_6919_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setColor_IMPL_6916(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :8367
void Paint::setColor_IMPL_6916(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(Paint::_javaClass2(),Paint::_Init2());
    
    CACHE_METHOD(Paint::setColor_6916_ID(),Paint::_javaClass2(),"setColor","(I)V",GetMethodID,"Id for fallback method android.graphics.Paint.setColor could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Paint::_javaClass2(), Paint::setColor_6916_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Paint::setColor_6916_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setStrokeWidth_IMPL_6921(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) [static] :8382
void Paint::setStrokeWidth_IMPL_6921(bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(Paint::_javaClass2(),Paint::_Init2());
    
    CACHE_METHOD(Paint::setStrokeWidth_6921_ID(),Paint::_javaClass2(),"setStrokeWidth","(F)V",GetMethodID,"Id for fallback method android.graphics.Paint.setStrokeWidth could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Paint::_javaClass2(), Paint::setStrokeWidth_6921_ID(), ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Paint::setStrokeWidth_6921_ID(), ((jfloat)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setStyle_IMPL_6914(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :8361
void Paint::setStyle_IMPL_6914(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Paint::_javaClass2(),Paint::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Paint::setStyle_6914_ID(),Paint::_javaClass2(),"setStyle","(Landroid/graphics/Paint$Style;)V",GetMethodID,"Id for fallback method android.graphics.Paint.setStyle could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Paint::_javaClass2(), Paint::setStyle_6914_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Paint::setStyle_6914_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setTextSize_IMPL_6950(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) [static] :8469
void Paint::setTextSize_IMPL_6950(bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(Paint::_javaClass2(),Paint::_Init2());
    
    CACHE_METHOD(Paint::setTextSize_6950_ID(),Paint::_javaClass2(),"setTextSize","(F)V",GetMethodID,"Id for fallback method android.graphics.Paint.setTextSize could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Paint::_javaClass2(), Paint::setTextSize_6950_ID(), ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Paint::setTextSize_6950_ID(), ((jfloat)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper setTypeface_IMPL_6940(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :8439
uObject* Paint::setTypeface_IMPL_6940(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Paint::_javaClass2(),Paint::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Paint::setTypeface_6940_ID(),Paint::_javaClass2(),"setTypeface","(Landroid/graphics/Typeface;)Landroid/graphics/Typeface;",GetMethodID,"Id for fallback method android.graphics.Paint.setTypeface could not be cached",77);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Paint::_javaClass2(), Paint::setTypeface_6940_ID(), _obArg2),result,::g::Android::android::graphics::Typeface_typeof(),::g::Android::android::graphics::Typeface*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Paint::setTypeface_6940_ID(), _obArg2),result,::g::Android::android::graphics::Typeface_typeof(),::g::Android::android::graphics::Typeface*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(1018)
// -----------------------------------------------------------------------------------------------------

// public sealed extern class PaintDLRStyle :1018
// {
::g::Android::java::lang::Object_type* PaintDLRStyle_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PaintDLRStyle);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.PaintDLRStyle", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::PaintDLRStyle::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::graphics::PaintDLRStyle::STROKE_6873_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :1022
void PaintDLRStyle___Init3_fn()
{
    PaintDLRStyle::_Init3();
}

// public static Android.android.graphics.PaintDLRStyle get_STROKE() :1061
void PaintDLRStyle__get_STROKE_fn(PaintDLRStyle** __retval)
{
    *__retval = PaintDLRStyle::STROKE();
}

jclass PaintDLRStyle::_javaClass3_;
jfieldID PaintDLRStyle::STROKE_6873_ID_;

// public static extern new void _Init() [static] :1022
void PaintDLRStyle::_Init3()
{
    if (PaintDLRStyle::_javaClass3()) { return; }
    INIT_JNI;
    PaintDLRStyle::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Paint$Style"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!PaintDLRStyle::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Paint$Style'", 52);; }
}

// public static Android.android.graphics.PaintDLRStyle get_STROKE() [static] :1061
PaintDLRStyle* PaintDLRStyle::STROKE()
{
    INIT_JNI;
    CLASS_INIT(PaintDLRStyle::_javaClass3(),PaintDLRStyle::_Init3());
    if (::uEnterCriticalIfNull(&PaintDLRStyle::STROKE_6873_ID())) {;
    CACHE_FIELD(PaintDLRStyle::STROKE_6873_ID(),PaintDLRStyle::_javaClass3(),"STROKE","Landroid/graphics/Paint$Style;",GetStaticFieldID,"Id for field PaintDLRStyle.STROKE could not be cached",53);
    ::uExitCritical();;
    };
    PaintDLRStyle* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(PaintDLRStyle::_javaClass3(), PaintDLRStyle::STROKE_6873_ID()),result,PaintDLRStyle_typeof(),PaintDLRStyle*,false,true);;
    return uCast<PaintDLRStyle*>(result, PaintDLRStyle_typeof());
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(1502)
// -----------------------------------------------------------------------------------------------------

// public sealed extern class PorterDuffDLRMode :1502
// {
::g::Android::java::lang::Object_type* PorterDuffDLRMode_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PorterDuffDLRMode);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.PorterDuffDLRMode", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::PorterDuffDLRMode::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::graphics::PorterDuffDLRMode::SRC_IN_7141_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :1506
void PorterDuffDLRMode___Init3_fn()
{
    PorterDuffDLRMode::_Init3();
}

// public static Android.android.graphics.PorterDuffDLRMode get_SRC_IN() :1749
void PorterDuffDLRMode__get_SRC_IN_fn(PorterDuffDLRMode** __retval)
{
    *__retval = PorterDuffDLRMode::SRC_IN();
}

jclass PorterDuffDLRMode::_javaClass3_;
jfieldID PorterDuffDLRMode::SRC_IN_7141_ID_;

// public static extern new void _Init() [static] :1506
void PorterDuffDLRMode::_Init3()
{
    if (PorterDuffDLRMode::_javaClass3()) { return; }
    INIT_JNI;
    PorterDuffDLRMode::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/PorterDuff$Mode"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!PorterDuffDLRMode::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.PorterDuff$Mode'", 56);; }
}

// public static Android.android.graphics.PorterDuffDLRMode get_SRC_IN() [static] :1749
PorterDuffDLRMode* PorterDuffDLRMode::SRC_IN()
{
    INIT_JNI;
    CLASS_INIT(PorterDuffDLRMode::_javaClass3(),PorterDuffDLRMode::_Init3());
    if (::uEnterCriticalIfNull(&PorterDuffDLRMode::SRC_IN_7141_ID())) {;
    CACHE_FIELD(PorterDuffDLRMode::SRC_IN_7141_ID(),PorterDuffDLRMode::_javaClass3(),"SRC_IN","Landroid/graphics/PorterDuff$Mode;",GetStaticFieldID,"Id for field PorterDuffDLRMode.SRC_IN could not be cached",57);
    ::uExitCritical();;
    };
    PorterDuffDLRMode* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(PorterDuffDLRMode::_javaClass3(), PorterDuffDLRMode::SRC_IN_7141_ID()),result,PorterDuffDLRMode_typeof(),PorterDuffDLRMode*,false,true);;
    return uCast<PorterDuffDLRMode*>(result, PorterDuffDLRMode_typeof());
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(10443)
// ------------------------------------------------------------------------------------------------------

// public sealed extern class Rect :10443
// {
::g::Android::java::lang::Object_type* Rect_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Rect);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.Rect", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_ctor_ = (void*)Rect__New5_fn;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Rect__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Rect__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::Rect::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::graphics::Rect::bottom_7157_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Rect::hashCode_7163_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::graphics::Rect::left_7154_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Rect::Rect_7159_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::graphics::Rect::right_7156_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::graphics::Rect::top_7155_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Rect::toString_7164_ID_, uFieldFlagsStatic);
    return type;
}

// public Rect() :10568
void Rect__ctor_5_fn(Rect* __this)
{
    __this->ctor_5();
}

// public static extern new void _Init() :10447
void Rect___Init2_fn()
{
    Rect::_Init2();
}

// public int get_bottom() :10527
void Rect__get_bottom_fn(Rect* __this, int* __retval)
{
    *__retval = __this->bottom();
}

// public void set_bottom(int value) :10538
void Rect__set_bottom_fn(Rect* __this, int* value)
{
    __this->bottom(*value);
}

// public override sealed int hashCode() :10620
void Rect__hashCode1_fn(Rect* __this, int* __retval)
{
    return *__retval = Rect::hashCode_IMPL_7163(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_7163(bool arg0, Android.Base.Primitives.ujobject arg1) :10825
void Rect__hashCode_IMPL_7163_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Rect::hashCode_IMPL_7163(*arg0_, *arg1_);
}

// public int get_left() :10452
void Rect__get_left_fn(Rect* __this, int* __retval)
{
    *__retval = __this->left();
}

// public void set_left(int value) :10463
void Rect__set_left_fn(Rect* __this, int* value)
{
    __this->left(*value);
}

// public Rect New() :10568
void Rect__New5_fn(Rect** __retval)
{
    *__retval = Rect::New5();
}

// public int get_right() :10502
void Rect__get_right_fn(Rect* __this, int* __retval)
{
    *__retval = __this->right();
}

// public void set_right(int value) :10513
void Rect__set_right_fn(Rect* __this, int* value)
{
    __this->right(*value);
}

// public int get_top() :10477
void Rect__get_top_fn(Rect* __this, int* __retval)
{
    *__retval = __this->top();
}

// public void set_top(int value) :10488
void Rect__set_top_fn(Rect* __this, int* value)
{
    __this->top(*value);
}

// public override sealed Android.java.lang.String toString() :10626
void Rect__toString_fn(Rect* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Rect::toString_IMPL_7164(__this->_subclassed, __this->_javaObject), ::TYPES[3/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_7164(bool arg0, Android.Base.Primitives.ujobject arg1) :10828
void Rect__toString_IMPL_7164_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Rect::toString_IMPL_7164(*arg0_, *arg1_);
}

jclass Rect::_javaClass2_;
jfieldID Rect::bottom_7157_ID_;
jmethodID Rect::hashCode_7163_ID_;
jfieldID Rect::left_7154_ID_;
jmethodID Rect::Rect_7159_ID_c_;
jfieldID Rect::right_7156_ID_;
jfieldID Rect::top_7155_ID_;
jmethodID Rect::toString_7164_ID_;

// public Rect() [instance] :10568
void Rect::ctor_5()
{
    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Rect::_javaClass2(),Rect::_Init2());;
    CACHE_METHOD(Rect::Rect_7159_ID_c(),Rect::_javaClass2(),"<init>","()V",GetMethodID,"Id for fallback method android.graphics.Rect.<init> could not be cached",71);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Rect::_javaClass2(), Rect::Rect_7159_ID_c());;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public int get_bottom() [instance] :10527
int Rect::bottom()
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&Rect::bottom_7157_ID())) {;
    CACHE_FIELD(Rect::bottom_7157_ID(),Rect::_javaClass2(),"bottom","I",GetFieldID,"Id for field Rect.bottom could not be cached",44);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(this->_javaObject, Rect::bottom_7157_ID()));;
    return result;
}

// public void set_bottom(int value) [instance] :10538
void Rect::bottom(int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&Rect::bottom_7157_ID())) {;
    CACHE_FIELD(Rect::bottom_7157_ID(),Rect::_javaClass2(),"bottom","I",GetFieldID,"Id for field Rect.bottom could not be cached",44);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(this->_javaObject, Rect::bottom_7157_ID(), ((jint)value));;
}

// public int get_left() [instance] :10452
int Rect::left()
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&Rect::left_7154_ID())) {;
    CACHE_FIELD(Rect::left_7154_ID(),Rect::_javaClass2(),"left","I",GetFieldID,"Id for field Rect.left could not be cached",42);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(this->_javaObject, Rect::left_7154_ID()));;
    return result;
}

// public void set_left(int value) [instance] :10463
void Rect::left(int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&Rect::left_7154_ID())) {;
    CACHE_FIELD(Rect::left_7154_ID(),Rect::_javaClass2(),"left","I",GetFieldID,"Id for field Rect.left could not be cached",42);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(this->_javaObject, Rect::left_7154_ID(), ((jint)value));;
}

// public int get_right() [instance] :10502
int Rect::right()
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&Rect::right_7156_ID())) {;
    CACHE_FIELD(Rect::right_7156_ID(),Rect::_javaClass2(),"right","I",GetFieldID,"Id for field Rect.right could not be cached",43);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(this->_javaObject, Rect::right_7156_ID()));;
    return result;
}

// public void set_right(int value) [instance] :10513
void Rect::right(int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&Rect::right_7156_ID())) {;
    CACHE_FIELD(Rect::right_7156_ID(),Rect::_javaClass2(),"right","I",GetFieldID,"Id for field Rect.right could not be cached",43);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(this->_javaObject, Rect::right_7156_ID(), ((jint)value));;
}

// public int get_top() [instance] :10477
int Rect::top()
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&Rect::top_7155_ID())) {;
    CACHE_FIELD(Rect::top_7155_ID(),Rect::_javaClass2(),"top","I",GetFieldID,"Id for field Rect.top could not be cached",41);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(this->_javaObject, Rect::top_7155_ID()));;
    return result;
}

// public void set_top(int value) [instance] :10488
void Rect::top(int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&Rect::top_7155_ID())) {;
    CACHE_FIELD(Rect::top_7155_ID(),Rect::_javaClass2(),"top","I",GetFieldID,"Id for field Rect.top could not be cached",41);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(this->_javaObject, Rect::top_7155_ID(), ((jint)value));;
}

// public static extern new void _Init() [static] :10447
void Rect::_Init2()
{
    if (Rect::_javaClass2()) { return; }
    INIT_JNI;
    Rect::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Rect"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Rect::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Rect'", 45);; }
}

// public static extern int hashCode_IMPL_7163(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :10825
int Rect::hashCode_IMPL_7163(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Rect::_javaClass2(),Rect::_Init2());
    
    int result;
    CACHE_METHOD(Rect::hashCode_7163_ID(),Rect::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.Rect.hashCode could not be cached",73);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Rect::_javaClass2(), Rect::hashCode_7163_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Rect::hashCode_7163_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public Rect New() [static] :10568
Rect* Rect::New5()
{
    Rect* obj2 = (Rect*)uNew(Rect_typeof());
    obj2->ctor_5();
    return obj2;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_7164(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :10828
uObject* Rect::toString_IMPL_7164(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Rect::_javaClass2(),Rect::_Init2());
    
    uObject* result;
    CACHE_METHOD(Rect::toString_7164_ID(),Rect::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.graphics.Rect.toString could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Rect::_javaClass2(), Rect::toString_7164_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Rect::toString_7164_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(10937)
// ------------------------------------------------------------------------------------------------------

// public sealed extern class RectF :10937
// {
::g::Android::java::lang::Object_type* RectF_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RectF);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.RectF", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))RectF__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))RectF__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::RectF::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::RectF::hashCode_7206_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::RectF::toString_7207_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :10941
void RectF___Init2_fn()
{
    RectF::_Init2();
}

// public override sealed int hashCode() :11130
void RectF__hashCode1_fn(RectF* __this, int* __retval)
{
    return *__retval = RectF::hashCode_IMPL_7206(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_7206(bool arg0, Android.Base.Primitives.ujobject arg1) :11330
void RectF__hashCode_IMPL_7206_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = RectF::hashCode_IMPL_7206(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :11136
void RectF__toString_fn(RectF* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(RectF::toString_IMPL_7207(__this->_subclassed, __this->_javaObject), ::TYPES[3/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_7207(bool arg0, Android.Base.Primitives.ujobject arg1) :11333
void RectF__toString_IMPL_7207_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = RectF::toString_IMPL_7207(*arg0_, *arg1_);
}

jclass RectF::_javaClass2_;
jmethodID RectF::hashCode_7206_ID_;
jmethodID RectF::toString_7207_ID_;

// public static extern new void _Init() [static] :10941
void RectF::_Init2()
{
    if (RectF::_javaClass2()) { return; }
    INIT_JNI;
    RectF::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/RectF"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!RectF::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.RectF'", 46);; }
}

// public static extern int hashCode_IMPL_7206(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :11330
int RectF::hashCode_IMPL_7206(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(RectF::_javaClass2(),RectF::_Init2());
    
    int result;
    CACHE_METHOD(RectF::hashCode_7206_ID(),RectF::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.RectF.hashCode could not be cached",74);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, RectF::_javaClass2(), RectF::hashCode_7206_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, RectF::hashCode_7206_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_7207(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :11333
uObject* RectF::toString_IMPL_7207(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(RectF::_javaClass2(),RectF::_Init2());
    
    uObject* result;
    CACHE_METHOD(RectF::toString_7207_ID(),RectF::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.graphics.RectF.toString could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, RectF::_javaClass2(), RectF::toString_7207_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, RectF::toString_7207_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(11972)
// ------------------------------------------------------------------------------------------------------

// public sealed extern class SurfaceTexture :11972
// {
::g::Android::java::lang::Object_type* SurfaceTexture_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SurfaceTexture);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.SurfaceTexture", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::SurfaceTexture::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::SurfaceTexture::release_7308_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::SurfaceTexture::setOnFrameAvailableListener_7300_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::SurfaceTexture::SurfaceTexture_7298_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::SurfaceTexture::updateTexImage_7302_ID_, uFieldFlagsStatic);
    return type;
}

// public SurfaceTexture(int arg0) :11979
void SurfaceTexture__ctor_6_fn(SurfaceTexture* __this, int* arg0)
{
    __this->ctor_6(*arg0);
}

// public static extern new void _Init() :11976
void SurfaceTexture___Init2_fn()
{
    SurfaceTexture::_Init2();
}

// public SurfaceTexture New(int arg0) :11979
void SurfaceTexture__New6_fn(int* arg0, SurfaceTexture** __retval)
{
    *__retval = SurfaceTexture::New6(*arg0);
}

// public void release() :12057
void SurfaceTexture__release_fn(SurfaceTexture* __this)
{
    __this->release();
}

// public static extern void release_IMPL_7308(bool arg0, Android.Base.Primitives.ujobject arg1) :12096
void SurfaceTexture__release_IMPL_7308_fn(bool* arg0_, jobject* arg1_)
{
    SurfaceTexture::release_IMPL_7308(*arg0_, *arg1_);
}

// public void setOnFrameAvailableListener(Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener arg0) :12009
void SurfaceTexture__setOnFrameAvailableListener_fn(SurfaceTexture* __this, uObject* arg0)
{
    __this->setOnFrameAvailableListener(arg0);
}

// public static extern void setOnFrameAvailableListener_IMPL_7300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :12072
void SurfaceTexture__setOnFrameAvailableListener_IMPL_7300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    SurfaceTexture::setOnFrameAvailableListener_IMPL_7300(*arg0_, *arg1_, arg2_);
}

// public void updateTexImage() :12021
void SurfaceTexture__updateTexImage_fn(SurfaceTexture* __this)
{
    __this->updateTexImage();
}

// public static extern void updateTexImage_IMPL_7302(bool arg0, Android.Base.Primitives.ujobject arg1) :12078
void SurfaceTexture__updateTexImage_IMPL_7302_fn(bool* arg0_, jobject* arg1_)
{
    SurfaceTexture::updateTexImage_IMPL_7302(*arg0_, *arg1_);
}

jclass SurfaceTexture::_javaClass2_;
jmethodID SurfaceTexture::release_7308_ID_;
jmethodID SurfaceTexture::setOnFrameAvailableListener_7300_ID_;
jmethodID SurfaceTexture::SurfaceTexture_7298_ID_c_;
jmethodID SurfaceTexture::updateTexImage_7302_ID_;

// public SurfaceTexture(int arg0) [instance] :11979
void SurfaceTexture::ctor_6(int arg0)
{
    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(SurfaceTexture::_javaClass2(),SurfaceTexture::_Init2());;
    CACHE_METHOD(SurfaceTexture::SurfaceTexture_7298_ID_c(),SurfaceTexture::_javaClass2(),"<init>","(I)V",GetMethodID,"Id for fallback method android.graphics.SurfaceTexture.<init> could not be cached",81);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(SurfaceTexture::_javaClass2(), SurfaceTexture::SurfaceTexture_7298_ID_c(), ((jint)arg0));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public void release() [instance] :12057
void SurfaceTexture::release()
{
    SurfaceTexture::release_IMPL_7308(_subclassed, _javaObject);
}

// public void setOnFrameAvailableListener(Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener arg0) [instance] :12009
void SurfaceTexture::setOnFrameAvailableListener(uObject* arg0)
{
    SurfaceTexture::setOnFrameAvailableListener_IMPL_7300(_subclassed, _javaObject, arg0);
}

// public void updateTexImage() [instance] :12021
void SurfaceTexture::updateTexImage()
{
    SurfaceTexture::updateTexImage_IMPL_7302(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :11976
void SurfaceTexture::_Init2()
{
    if (SurfaceTexture::_javaClass2()) { return; }
    INIT_JNI;
    SurfaceTexture::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/SurfaceTexture"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!SurfaceTexture::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.SurfaceTexture'", 55);; }
}

// public SurfaceTexture New(int arg0) [static] :11979
SurfaceTexture* SurfaceTexture::New6(int arg0)
{
    SurfaceTexture* obj2 = (SurfaceTexture*)uNew(SurfaceTexture_typeof());
    obj2->ctor_6(arg0);
    return obj2;
}

// public static extern void release_IMPL_7308(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12096
void SurfaceTexture::release_IMPL_7308(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(SurfaceTexture::_javaClass2(),SurfaceTexture::_Init2());
    
    CACHE_METHOD(SurfaceTexture::release_7308_ID(),SurfaceTexture::_javaClass2(),"release","()V",GetMethodID,"Id for fallback method android.graphics.SurfaceTexture.release could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, SurfaceTexture::_javaClass2(), SurfaceTexture::release_7308_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, SurfaceTexture::release_7308_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnFrameAvailableListener_IMPL_7300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :12072
void SurfaceTexture::setOnFrameAvailableListener_IMPL_7300(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(SurfaceTexture::_javaClass2(),SurfaceTexture::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(SurfaceTexture::setOnFrameAvailableListener_7300_ID(),SurfaceTexture::_javaClass2(),"setOnFrameAvailableListener","(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;)V",GetMethodID,"Id for fallback method android.graphics.SurfaceTexture.setOnFrameAvailableListener could not be cached",102);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, SurfaceTexture::_javaClass2(), SurfaceTexture::setOnFrameAvailableListener_7300_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, SurfaceTexture::setOnFrameAvailableListener_7300_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void updateTexImage_IMPL_7302(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12078
void SurfaceTexture::updateTexImage_IMPL_7302(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(SurfaceTexture::_javaClass2(),SurfaceTexture::_Init2());
    
    CACHE_METHOD(SurfaceTexture::updateTexImage_7302_ID(),SurfaceTexture::_javaClass2(),"updateTexImage","()V",GetMethodID,"Id for fallback method android.graphics.SurfaceTexture.updateTexImage could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, SurfaceTexture::_javaClass2(), SurfaceTexture::updateTexImage_7302_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, SurfaceTexture::updateTexImage_7302_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(12544)
// ------------------------------------------------------------------------------------------------------

// public abstract extern interface SurfaceTextureDLROnFrameAvailableListener :12544
// {
uInterfaceType* SurfaceTextureDLROnFrameAvailableListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/graphics/$.uno(12170)
// ------------------------------------------------------------------------------------------------------

// public sealed extern class Typeface :12170
// {
::g::Android::java::lang::Object_type* Typeface_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Typeface);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.Typeface", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Typeface__hashCode1_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::Typeface::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Typeface::createFromAsset_7328_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Typeface::createFromFile_7330_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::graphics::Typeface::DEFAULT_7312_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::Typeface::hashCode_7333_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :12174
void Typeface___Init2_fn()
{
    Typeface::_Init2();
}

// public static Android.android.graphics.Typeface createFromAsset(Android.android.content.res.AssetManager arg0, Android.java.lang.String arg1) :12366
void Typeface__createFromAsset_fn(::g::Android::android::content::res::AssetManager* arg0, ::g::Android::java::lang::String* arg1, Typeface** __retval)
{
    *__retval = Typeface::createFromAsset(arg0, arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper createFromAsset_IMPL_7328(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1) :12421
void Typeface__createFromAsset_IMPL_7328_fn(uObject* arg0_, uObject* arg1_, uObject** __retval)
{
    *__retval = Typeface::createFromAsset_IMPL_7328(arg0_, arg1_);
}

// public static Android.android.graphics.Typeface createFromFile(Android.java.lang.String arg0) :12378
void Typeface__createFromFile1_fn(::g::Android::java::lang::String* arg0, Typeface** __retval)
{
    *__retval = Typeface::createFromFile1(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper createFromFile_IMPL_7330(Android.Base.Wrappers.IJWrapper arg0) :12427
void Typeface__createFromFile_IMPL_7330_fn(uObject* arg0_, uObject** __retval)
{
    *__retval = Typeface::createFromFile_IMPL_7330(arg0_);
}

// public static Android.android.graphics.Typeface get_DEFAULT() :12179
void Typeface__get_DEFAULT_fn(Typeface** __retval)
{
    *__retval = Typeface::DEFAULT();
}

// public override sealed int hashCode() :12396
void Typeface__hashCode1_fn(Typeface* __this, int* __retval)
{
    return *__retval = Typeface::hashCode_IMPL_7333(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_7333(bool arg0, Android.Base.Primitives.ujobject arg1) :12436
void Typeface__hashCode_IMPL_7333_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Typeface::hashCode_IMPL_7333(*arg0_, *arg1_);
}

jclass Typeface::_javaClass2_;
jmethodID Typeface::createFromAsset_7328_ID_;
jmethodID Typeface::createFromFile_7330_ID_;
jfieldID Typeface::DEFAULT_7312_ID_;
jmethodID Typeface::hashCode_7333_ID_;

// public static extern new void _Init() [static] :12174
void Typeface::_Init2()
{
    if (Typeface::_javaClass2()) { return; }
    INIT_JNI;
    Typeface::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Typeface"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Typeface::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Typeface'", 49);; }
}

// public static Android.android.graphics.Typeface createFromAsset(Android.android.content.res.AssetManager arg0, Android.java.lang.String arg1) [static] :12366
Typeface* Typeface::createFromAsset(::g::Android::android::content::res::AssetManager* arg0, ::g::Android::java::lang::String* arg1)
{
    return uCast<Typeface*>(Typeface::createFromAsset_IMPL_7328((uObject*)arg0, (uObject*)arg1), Typeface_typeof());
}

// public static extern Android.Base.Wrappers.IJWrapper createFromAsset_IMPL_7328(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1) [static] :12421
uObject* Typeface::createFromAsset_IMPL_7328(uObject* arg0_, uObject* arg1_)
{
    INIT_JNI;
    CLASS_INIT(Typeface::_javaClass2(),Typeface::_Init2());
    jobject _obArg0 = ((!arg0_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg1 = ((!arg1_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Typeface::createFromAsset_7328_ID(),Typeface::_javaClass2(),"createFromAsset","(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/Typeface;",GetStaticMethodID,"Id for fallback method android.graphics.Typeface.createFromAsset could not be cached",84);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(Typeface::_javaClass2(), Typeface::createFromAsset_7328_ID(), _obArg0, _obArg1),result,Typeface_typeof(),Typeface*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static Android.android.graphics.Typeface createFromFile(Android.java.lang.String arg0) [static] :12378
Typeface* Typeface::createFromFile1(::g::Android::java::lang::String* arg0)
{
    return uCast<Typeface*>(Typeface::createFromFile_IMPL_7330((uObject*)arg0), Typeface_typeof());
}

// public static extern Android.Base.Wrappers.IJWrapper createFromFile_IMPL_7330(Android.Base.Wrappers.IJWrapper arg0) [static] :12427
uObject* Typeface::createFromFile_IMPL_7330(uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(Typeface::_javaClass2(),Typeface::_Init2());
    jobject _obArg0 = ((!arg0_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Typeface::createFromFile_7330_ID(),Typeface::_javaClass2(),"createFromFile","(Ljava/lang/String;)Landroid/graphics/Typeface;",GetStaticMethodID,"Id for fallback method android.graphics.Typeface.createFromFile could not be cached",83);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(Typeface::_javaClass2(), Typeface::createFromFile_7330_ID(), _obArg0),result,Typeface_typeof(),Typeface*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_7333(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12436
int Typeface::hashCode_IMPL_7333(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Typeface::_javaClass2(),Typeface::_Init2());
    
    int result;
    CACHE_METHOD(Typeface::hashCode_7333_ID(),Typeface::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.Typeface.hashCode could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Typeface::_javaClass2(), Typeface::hashCode_7333_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Typeface::hashCode_7333_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static Android.android.graphics.Typeface get_DEFAULT() [static] :12179
Typeface* Typeface::DEFAULT()
{
    INIT_JNI;
    CLASS_INIT(Typeface::_javaClass2(),Typeface::_Init2());
    if (::uEnterCriticalIfNull(&Typeface::DEFAULT_7312_ID())) {;
    CACHE_FIELD(Typeface::DEFAULT_7312_ID(),Typeface::_javaClass2(),"DEFAULT","Landroid/graphics/Typeface;",GetStaticFieldID,"Id for field Typeface.DEFAULT could not be cached",49);
    ::uExitCritical();;
    };
    Typeface* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Typeface::_javaClass2(), Typeface::DEFAULT_7312_ID()),result,Typeface_typeof(),Typeface*,false,true);;
    return uCast<Typeface*>(result, Typeface_typeof());
}
// }

}}}} // ::g::Android::android::graphics
