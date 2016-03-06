// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.ComponentName.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.Intent.h>
#include <Android.android.content.res.Resources.h>
#include <Android.android.graphics.Canvas.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.graphics.Rect.h>
#include <Android.android.graphics.SurfaceTexture.h>
#include <Android.android.os.IBinder.h>
#include <Android.android.view.ActionMode.h>
#include <Android.android.view.ActionProvider.h>
#include <Android.android.view.Choreographer.h>
#include <Android.android.view.ChoreographerDLRFrameCallback.h>
#include <Android.android.view.ContextMenuDLRContextMenuInfo.h>
#include <Android.android.view.ContextThemeWrapper.h>
#include <Android.android.view.Gravity.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.Menu.h>
#include <Android.android.view.MenuItem.h>
#include <Android.android.view.MenuItemDLROnActionExpandListener.h>
#include <Android.android.view.MenuItemDLROnMenuItemClickListener.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.SubMenu.h>
#include <Android.android.view.Surface.h>
#include <Android.android.view.SurfaceHolder.h>
#include <Android.android.view.SurfaceHolderDLRCallback.h>
#include <Android.android.view.SurfaceHolderDLRCallback2.h>
#include <Android.android.view.SurfaceView.h>
#include <Android.android.view.TextureView.h>
#include <Android.android.view.TextureViewDLRSurfaceTextureListener.h>
#include <Android.android.view.View.h>
#include <Android.android.view.ViewDLRMeasureSpec.h>
#include <Android.android.view.ViewDLROnFocusChangeListener.h>
#include <Android.android.view.ViewDLROnTouchListener.h>
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.android.view.ViewGroupDLRMarginLayoutParams.h>
#include <Android.android.view.WindowManagerDLRLayoutParams.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_content_Context.h>
#include <Android.Fallbacks.Android_android_os_IBinder.h>
#include <Android.Fallbacks.Android_android_view_ActionMode.h>
#include <Android.Fallbacks.Android_android_view_ActionProvider.h>
#include <Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h>
#include <Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h>
#include <Android.Fallbacks.Android_android_view_Menu.h>
#include <Android.Fallbacks.Android_android_view_MenuItem.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-c7e65b51.h>
#include <Android.Fallbacks.Android_android_view_SubMenu.h>
#include <Android.Fallbacks.Android_android_view_SurfaceHolder.h>
#include <Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h>
#include <Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h>
#include <Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-37a0392a.h>
#include <Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h>
#include <Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h>
#include <Android.Fallbacks.Android_android_view_ViewGroup.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.IntArray.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Type.h>
static uType* TYPES[8];

namespace g{
namespace Android{
namespace android{
namespace view{

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(246)
// ------------------------------------------------------------------------------------------------

// public abstract extern class ActionMode :246
// {
::g::Android::java::lang::Object_type* ActionMode_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ActionMode);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.ActionMode", options);
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

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(364)
// ------------------------------------------------------------------------------------------------

// public abstract extern class ActionProvider :364
// {
::g::Android::java::lang::Object_type* ActionProvider_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ActionProvider);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.ActionProvider", options);
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

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(9701)
// -------------------------------------------------------------------------------------------------

// public sealed extern class Choreographer :9701
// {
::g::Android::java::lang::Object_type* Choreographer_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Choreographer);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.Choreographer", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::Choreographer::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::Choreographer::getInstance_21644_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::Choreographer::postFrameCallback_21645_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :9705
void Choreographer___Init2_fn()
{
    Choreographer::_Init2();
}

// public static Android.android.view.Choreographer getInstance() :9708
void Choreographer__getInstance_fn(Choreographer** __retval)
{
    *__retval = Choreographer::getInstance();
}

// public static extern Android.Base.Wrappers.IJWrapper getInstance_IMPL_21644() :9733
void Choreographer__getInstance_IMPL_21644_fn(uObject** __retval)
{
    *__retval = Choreographer::getInstance_IMPL_21644();
}

// public void postFrameCallback(Android.android.view.ChoreographerDLRFrameCallback arg0) :9714
void Choreographer__postFrameCallback_fn(Choreographer* __this, uObject* arg0)
{
    __this->postFrameCallback(arg0);
}

// public static extern void postFrameCallback_IMPL_21645(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9736
void Choreographer__postFrameCallback_IMPL_21645_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Choreographer::postFrameCallback_IMPL_21645(*arg0_, *arg1_, arg2_);
}

jclass Choreographer::_javaClass2_;
jmethodID Choreographer::getInstance_21644_ID_;
jmethodID Choreographer::postFrameCallback_21645_ID_;

// public void postFrameCallback(Android.android.view.ChoreographerDLRFrameCallback arg0) [instance] :9714
void Choreographer::postFrameCallback(uObject* arg0)
{
    Choreographer::postFrameCallback_IMPL_21645(_subclassed, _javaObject, arg0);
}

// public static extern new void _Init() [static] :9705
void Choreographer::_Init2()
{
    if (Choreographer::_javaClass2()) { return; }
    INIT_JNI;
    Choreographer::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/Choreographer"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Choreographer::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.Choreographer'", 50);; }
}

// public static Android.android.view.Choreographer getInstance() [static] :9708
Choreographer* Choreographer::getInstance()
{
    return uCast<Choreographer*>(Choreographer::getInstance_IMPL_21644(), Choreographer_typeof());
}

// public static extern Android.Base.Wrappers.IJWrapper getInstance_IMPL_21644() [static] :9733
uObject* Choreographer::getInstance_IMPL_21644()
{
    INIT_JNI;
    CLASS_INIT(Choreographer::_javaClass2(),Choreographer::_Init2());
    
    uObject* result;
    CACHE_METHOD(Choreographer::getInstance_21644_ID(),Choreographer::_javaClass2(),"getInstance","()Landroid/view/Choreographer;",GetStaticMethodID,"Id for fallback method android.view.Choreographer.getInstance could not be cached",81);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(Choreographer::_javaClass2(), Choreographer::getInstance_21644_ID()),result,Choreographer_typeof(),Choreographer*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void postFrameCallback_IMPL_21645(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9736
void Choreographer::postFrameCallback_IMPL_21645(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Choreographer::_javaClass2(),Choreographer::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Choreographer::postFrameCallback_21645_ID(),Choreographer::_javaClass2(),"postFrameCallback","(Landroid/view/Choreographer$FrameCallback;)V",GetMethodID,"Id for fallback method android.view.Choreographer.postFrameCallback could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Choreographer::_javaClass2(), Choreographer::postFrameCallback_21645_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Choreographer::postFrameCallback_21645_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(26664)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface ChoreographerDLRFrameCallback :26664
// {
uInterfaceType* ChoreographerDLRFrameCallback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.ChoreographerDLRFrameCallback", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(26700)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface ContextMenuDLRContextMenuInfo :26700
// {
uInterfaceType* ContextMenuDLRContextMenuInfo_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.ContextMenuDLRContextMenuInfo", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(11)
// -----------------------------------------------------------------------------------------------

// public extern class ContextThemeWrapper :11
// {
::g::Android::android::content::Context_type* ContextThemeWrapper_typeof()
{
    static uSStrong< ::g::Android::android::content::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ContextThemeWrapper);
    options.TypeSize = sizeof(::g::Android::android::content::Context_type);
    type = (::g::Android::android::content::Context_type*)uClassType::New("Android.android.view.ContextThemeWrapper", options);
    type->SetBase(::g::Android::android::content::ContextWrapper_typeof());
    type->fp_getResources = (void(*)(::g::Android::android::content::Context*, ::g::Android::android::content::res::Resources**))ContextThemeWrapper__getResources_fn;
    type->fp_getSystemService = (void(*)(::g::Android::android::content::Context*, ::g::Android::java::lang::String*, ::g::Android::java::lang::Object**))ContextThemeWrapper__getSystemService_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[2] = ::g::Android::android::content::res::Resources_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::content::Context_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::content::Context_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::ContextThemeWrapper::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::ContextThemeWrapper::getResources_21660_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::ContextThemeWrapper::getSystemService_21663_ID_, uFieldFlagsStatic);
    return type;
}

// public ContextThemeWrapper(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :16
void ContextThemeWrapper__ctor_11_fn(ContextThemeWrapper* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_11(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :15
void ContextThemeWrapper___Init4_fn()
{
    ContextThemeWrapper::_Init4();
}

// public override sealed Android.android.content.res.Resources getResources() :61
void ContextThemeWrapper__getResources_fn(ContextThemeWrapper* __this, ::g::Android::android::content::res::Resources** __retval)
{
    return *__retval = uCast< ::g::Android::android::content::res::Resources*>(ContextThemeWrapper::getResources_IMPL_21660(__this->_subclassed, __this->_javaObject), ::TYPES[2/*Android.android.content.res.Resources*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getResources_IMPL_21660(bool arg0, Android.Base.Primitives.ujobject arg1) :100
void ContextThemeWrapper__getResources_IMPL_21660_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ContextThemeWrapper::getResources_IMPL_21660(*arg0_, *arg1_);
}

// public override Android.java.lang.Object getSystemService(Android.java.lang.String arg0) :79
void ContextThemeWrapper__getSystemService_fn(ContextThemeWrapper* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::Object*>(ContextThemeWrapper::getSystemService_IMPL_21663(__this->_subclassed, __this->_javaObject, (uObject*)arg0), ::TYPES[3/*Android.java.lang.Object*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_21663(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :109
void ContextThemeWrapper__getSystemService_IMPL_21663_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = ContextThemeWrapper::getSystemService_IMPL_21663(*arg0_, *arg1_, arg2_);
}

jclass ContextThemeWrapper::_javaClass4_;
jmethodID ContextThemeWrapper::getResources_21660_ID_;
jmethodID ContextThemeWrapper::getSystemService_21663_ID_;

// public ContextThemeWrapper(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :16
void ContextThemeWrapper::ctor_11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_8(obj, utype, hasFallbackClass, resolveType);
}

// public static extern new void _Init() [static] :15
void ContextThemeWrapper::_Init4()
{
    if (ContextThemeWrapper::_javaClass4()) { return; }
    INIT_JNI;
    ContextThemeWrapper::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/ContextThemeWrapper"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ContextThemeWrapper::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.ContextThemeWrapper'", 56);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getResources_IMPL_21660(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :100
uObject* ContextThemeWrapper::getResources_IMPL_21660(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ContextThemeWrapper::_javaClass4(),ContextThemeWrapper::_Init4());
    
    uObject* result;
    CACHE_METHOD(ContextThemeWrapper::getResources_21660_ID(),ContextThemeWrapper::_javaClass4(),"getResources","()Landroid/content/res/Resources;",GetMethodID,"Id for fallback method android.view.ContextThemeWrapper.getResources could not be cached",88);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ContextThemeWrapper::_javaClass4(), ContextThemeWrapper::getResources_21660_ID()),result,::g::Android::android::content::res::Resources_typeof(),::g::Android::android::content::res::Resources*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ContextThemeWrapper::getResources_21660_ID()),result,::g::Android::android::content::res::Resources_typeof(),::g::Android::android::content::res::Resources*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_21663(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :109
uObject* ContextThemeWrapper::getSystemService_IMPL_21663(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ContextThemeWrapper::_javaClass4(),ContextThemeWrapper::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(ContextThemeWrapper::getSystemService_21663_ID(),ContextThemeWrapper::_javaClass4(),"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.view.ContextThemeWrapper.getSystemService could not be cached",92);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ContextThemeWrapper::_javaClass4(), ContextThemeWrapper::getSystemService_21663_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ContextThemeWrapper::getSystemService_21663_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(10571)
// --------------------------------------------------------------------------------------------------

// public sealed extern class Gravity :10571
// {
::g::Android::java::lang::Object_type* Gravity_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Gravity);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.Gravity", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::Gravity::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::Gravity::CENTER_HORIZONTAL_21752_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::Gravity::LEFT_21748_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::Gravity::RIGHT_21749_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :10575
void Gravity___Init2_fn()
{
    Gravity::_Init2();
}

// public static int get_CENTER_HORIZONTAL() :10801
void Gravity__get_CENTER_HORIZONTAL_fn(int* __retval)
{
    *__retval = Gravity::CENTER_HORIZONTAL();
}

// public static int get_LEFT() :10733
void Gravity__get_LEFT_fn(int* __retval)
{
    *__retval = Gravity::LEFT();
}

// public static int get_RIGHT() :10750
void Gravity__get_RIGHT_fn(int* __retval)
{
    *__retval = Gravity::RIGHT();
}

jclass Gravity::_javaClass2_;
jfieldID Gravity::CENTER_HORIZONTAL_21752_ID_;
jfieldID Gravity::LEFT_21748_ID_;
jfieldID Gravity::RIGHT_21749_ID_;

// public static extern new void _Init() [static] :10575
void Gravity::_Init2()
{
    if (Gravity::_javaClass2()) { return; }
    INIT_JNI;
    Gravity::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/Gravity"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Gravity::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.Gravity'", 44);; }
}

// public static int get_CENTER_HORIZONTAL() [static] :10801
int Gravity::CENTER_HORIZONTAL()
{
    INIT_JNI;
    CLASS_INIT(Gravity::_javaClass2(),Gravity::_Init2());
    if (::uEnterCriticalIfNull(&Gravity::CENTER_HORIZONTAL_21752_ID())) {;
    CACHE_FIELD(Gravity::CENTER_HORIZONTAL_21752_ID(),Gravity::_javaClass2(),"CENTER_HORIZONTAL","I",GetStaticFieldID,"Id for field Gravity.CENTER_HORIZONTAL could not be cached",58);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(Gravity::_javaClass2(), Gravity::CENTER_HORIZONTAL_21752_ID()));;
    return result;
}

// public static int get_LEFT() [static] :10733
int Gravity::LEFT()
{
    INIT_JNI;
    CLASS_INIT(Gravity::_javaClass2(),Gravity::_Init2());
    if (::uEnterCriticalIfNull(&Gravity::LEFT_21748_ID())) {;
    CACHE_FIELD(Gravity::LEFT_21748_ID(),Gravity::_javaClass2(),"LEFT","I",GetStaticFieldID,"Id for field Gravity.LEFT could not be cached",45);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(Gravity::_javaClass2(), Gravity::LEFT_21748_ID()));;
    return result;
}

// public static int get_RIGHT() [static] :10750
int Gravity::RIGHT()
{
    INIT_JNI;
    CLASS_INIT(Gravity::_javaClass2(),Gravity::_Init2());
    if (::uEnterCriticalIfNull(&Gravity::RIGHT_21749_ID())) {;
    CACHE_FIELD(Gravity::RIGHT_21749_ID(),Gravity::_javaClass2(),"RIGHT","I",GetStaticFieldID,"Id for field Gravity.RIGHT could not be cached",46);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(Gravity::_javaClass2(), Gravity::RIGHT_21749_ID()));;
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(12892)
// --------------------------------------------------------------------------------------------------

// public sealed extern class KeyEvent :12892
// {
::g::Android::java::lang::Object_type* KeyEvent_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(KeyEvent);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.KeyEvent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))KeyEvent__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::KeyEvent::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::KeyEvent::toString_22231_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :12896
void KeyEvent___Init3_fn()
{
    KeyEvent::_Init3();
}

// public override sealed Android.java.lang.String toString() :17770
void KeyEvent__toString_fn(KeyEvent* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(KeyEvent::toString_IMPL_22231(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22231(bool arg0, Android.Base.Primitives.ujobject arg1) :17960
void KeyEvent__toString_IMPL_22231_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = KeyEvent::toString_IMPL_22231(*arg0_, *arg1_);
}

jclass KeyEvent::_javaClass3_;
jmethodID KeyEvent::toString_22231_ID_;

// public static extern new void _Init() [static] :12896
void KeyEvent::_Init3()
{
    if (KeyEvent::_javaClass3()) { return; }
    INIT_JNI;
    KeyEvent::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/KeyEvent"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!KeyEvent::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.KeyEvent'", 45);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22231(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :17960
uObject* KeyEvent::toString_IMPL_22231(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(KeyEvent::_javaClass3(),KeyEvent::_Init3());
    
    uObject* result;
    CACHE_METHOD(KeyEvent::toString_22231_ID(),KeyEvent::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.KeyEvent.toString could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, KeyEvent::_javaClass3(), KeyEvent::toString_22231_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, KeyEvent::toString_22231_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(26715)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface Menu :26715
// {
uInterfaceType* Menu_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.Menu", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(26956)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface MenuItem :26956
// {
uInterfaceType* MenuItem_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.MenuItem", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(26920)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface MenuItemDLROnActionExpandListener :26920
// {
uInterfaceType* MenuItemDLROnActionExpandListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.MenuItemDLROnActionExpandListener", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(26939)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface MenuItemDLROnMenuItemClickListener :26939
// {
uInterfaceType* MenuItemDLROnMenuItemClickListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.MenuItemDLROnMenuItemClickListener", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(18487)
// --------------------------------------------------------------------------------------------------

// public sealed extern class MotionEvent :18487
// {
::g::Android::java::lang::Object_type* MotionEvent_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MotionEvent);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.MotionEvent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))MotionEvent__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::ACTION_POINTER_INDEX_MASK_22376_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::ACTION_POINTER_INDEX_SHIFT_22377_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::getAction_22457_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::getActionMasked_22458_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::getEventTime_22462_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::getPointerCount_22473_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::getPointerId_22474_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::getX_22477_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::getY_22478_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::toString_22526_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :18491
void MotionEvent___Init3_fn()
{
    MotionEvent::_Init3();
}

// public static int get_ACTION_POINTER_INDEX_MASK() :18717
void MotionEvent__get_ACTION_POINTER_INDEX_MASK_fn(int* __retval)
{
    *__retval = MotionEvent::ACTION_POINTER_INDEX_MASK();
}

// public static int get_ACTION_POINTER_INDEX_SHIFT() :18734
void MotionEvent__get_ACTION_POINTER_INDEX_SHIFT_fn(int* __retval)
{
    *__retval = MotionEvent::ACTION_POINTER_INDEX_SHIFT();
}

// public int getAction() :19944
void MotionEvent__getAction_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->getAction();
}

// public static extern int getAction_IMPL_22457(bool arg0, Android.Base.Primitives.ujobject arg1) :20425
void MotionEvent__getAction_IMPL_22457_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = MotionEvent::getAction_IMPL_22457(*arg0_, *arg1_);
}

// public int getActionMasked() :19950
void MotionEvent__getActionMasked_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->getActionMasked();
}

// public static extern int getActionMasked_IMPL_22458(bool arg0, Android.Base.Primitives.ujobject arg1) :20428
void MotionEvent__getActionMasked_IMPL_22458_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = MotionEvent::getActionMasked_IMPL_22458(*arg0_, *arg1_);
}

// public long getEventTime() :19974
void MotionEvent__getEventTime_fn(MotionEvent* __this, int64_t* __retval)
{
    *__retval = __this->getEventTime();
}

// public static extern long getEventTime_IMPL_22462(bool arg0, Android.Base.Primitives.ujobject arg1) :20440
void MotionEvent__getEventTime_IMPL_22462_fn(bool* arg0_, jobject* arg1_, int64_t* __retval)
{
    *__retval = MotionEvent::getEventTime_IMPL_22462(*arg0_, *arg1_);
}

// public int getPointerCount() :20040
void MotionEvent__getPointerCount_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->getPointerCount();
}

// public static extern int getPointerCount_IMPL_22473(bool arg0, Android.Base.Primitives.ujobject arg1) :20473
void MotionEvent__getPointerCount_IMPL_22473_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = MotionEvent::getPointerCount_IMPL_22473(*arg0_, *arg1_);
}

// public int getPointerId(int arg0) :20046
void MotionEvent__getPointerId_fn(MotionEvent* __this, int* arg0, int* __retval)
{
    *__retval = __this->getPointerId(*arg0);
}

// public static extern int getPointerId_IMPL_22474(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20476
void MotionEvent__getPointerId_IMPL_22474_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval)
{
    *__retval = MotionEvent::getPointerId_IMPL_22474(*arg0_, *arg1_, *arg2_);
}

// public float getX(int arg0) :20064
void MotionEvent__getX1_fn(MotionEvent* __this, int* arg0, float* __retval)
{
    *__retval = __this->getX1(*arg0);
}

// public static extern float getX_IMPL_22477(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20485
void MotionEvent__getX_IMPL_22477_fn(bool* arg0_, jobject* arg1_, int* arg2_, float* __retval)
{
    *__retval = MotionEvent::getX_IMPL_22477(*arg0_, *arg1_, *arg2_);
}

// public float getY(int arg0) :20070
void MotionEvent__getY1_fn(MotionEvent* __this, int* arg0, float* __retval)
{
    *__retval = __this->getY1(*arg0);
}

// public static extern float getY_IMPL_22478(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20488
void MotionEvent__getY_IMPL_22478_fn(bool* arg0_, jobject* arg1_, int* arg2_, float* __retval)
{
    *__retval = MotionEvent::getY_IMPL_22478(*arg0_, *arg1_, *arg2_);
}

// public override sealed Android.java.lang.String toString() :20358
void MotionEvent__toString_fn(MotionEvent* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(MotionEvent::toString_IMPL_22526(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22526(bool arg0, Android.Base.Primitives.ujobject arg1) :20632
void MotionEvent__toString_IMPL_22526_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = MotionEvent::toString_IMPL_22526(*arg0_, *arg1_);
}

jclass MotionEvent::_javaClass3_;
jfieldID MotionEvent::ACTION_POINTER_INDEX_MASK_22376_ID_;
jfieldID MotionEvent::ACTION_POINTER_INDEX_SHIFT_22377_ID_;
jmethodID MotionEvent::getAction_22457_ID_;
jmethodID MotionEvent::getActionMasked_22458_ID_;
jmethodID MotionEvent::getEventTime_22462_ID_;
jmethodID MotionEvent::getPointerCount_22473_ID_;
jmethodID MotionEvent::getPointerId_22474_ID_;
jmethodID MotionEvent::getX_22477_ID_;
jmethodID MotionEvent::getY_22478_ID_;
jmethodID MotionEvent::toString_22526_ID_;

// public int getAction() [instance] :19944
int MotionEvent::getAction()
{
    return MotionEvent::getAction_IMPL_22457(_subclassed, _javaObject);
}

// public int getActionMasked() [instance] :19950
int MotionEvent::getActionMasked()
{
    return MotionEvent::getActionMasked_IMPL_22458(_subclassed, _javaObject);
}

// public long getEventTime() [instance] :19974
int64_t MotionEvent::getEventTime()
{
    return MotionEvent::getEventTime_IMPL_22462(_subclassed, _javaObject);
}

// public int getPointerCount() [instance] :20040
int MotionEvent::getPointerCount()
{
    return MotionEvent::getPointerCount_IMPL_22473(_subclassed, _javaObject);
}

// public int getPointerId(int arg0) [instance] :20046
int MotionEvent::getPointerId(int arg0)
{
    int arg0_ = arg0;
    return MotionEvent::getPointerId_IMPL_22474(_subclassed, _javaObject, arg0_);
}

// public float getX(int arg0) [instance] :20064
float MotionEvent::getX1(int arg0)
{
    int arg0_ = arg0;
    return MotionEvent::getX_IMPL_22477(_subclassed, _javaObject, arg0_);
}

// public float getY(int arg0) [instance] :20070
float MotionEvent::getY1(int arg0)
{
    int arg0_ = arg0;
    return MotionEvent::getY_IMPL_22478(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :18491
void MotionEvent::_Init3()
{
    if (MotionEvent::_javaClass3()) { return; }
    INIT_JNI;
    MotionEvent::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/MotionEvent"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!MotionEvent::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.MotionEvent'", 48);; }
}

// public static extern int getAction_IMPL_22457(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20425
int MotionEvent::getAction_IMPL_22457(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    
    int result;
    CACHE_METHOD(MotionEvent::getAction_22457_ID(),MotionEvent::_javaClass3(),"getAction","()I",GetMethodID,"Id for fallback method android.view.MotionEvent.getAction could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, MotionEvent::_javaClass3(), MotionEvent::getAction_22457_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, MotionEvent::getAction_22457_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getActionMasked_IMPL_22458(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20428
int MotionEvent::getActionMasked_IMPL_22458(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    
    int result;
    CACHE_METHOD(MotionEvent::getActionMasked_22458_ID(),MotionEvent::_javaClass3(),"getActionMasked","()I",GetMethodID,"Id for fallback method android.view.MotionEvent.getActionMasked could not be cached",83);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, MotionEvent::_javaClass3(), MotionEvent::getActionMasked_22458_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, MotionEvent::getActionMasked_22458_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern long getEventTime_IMPL_22462(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20440
int64_t MotionEvent::getEventTime_IMPL_22462(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    
    int64_t result;
    CACHE_METHOD(MotionEvent::getEventTime_22462_ID(),MotionEvent::_javaClass3(),"getEventTime","()J",GetMethodID,"Id for fallback method android.view.MotionEvent.getEventTime could not be cached",80);
    if (arg0_) {
        result = ((int64_t)U_JNIVAR->CallNonvirtualLongMethod(arg1_, MotionEvent::_javaClass3(), MotionEvent::getEventTime_22462_ID()));
    }
    else
    {
        result = ((int64_t)U_JNIVAR->CallLongMethod(arg1_, MotionEvent::getEventTime_22462_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getPointerCount_IMPL_22473(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20473
int MotionEvent::getPointerCount_IMPL_22473(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    
    int result;
    CACHE_METHOD(MotionEvent::getPointerCount_22473_ID(),MotionEvent::_javaClass3(),"getPointerCount","()I",GetMethodID,"Id for fallback method android.view.MotionEvent.getPointerCount could not be cached",83);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, MotionEvent::_javaClass3(), MotionEvent::getPointerCount_22473_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, MotionEvent::getPointerCount_22473_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getPointerId_IMPL_22474(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20476
int MotionEvent::getPointerId_IMPL_22474(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    
    int result;
    CACHE_METHOD(MotionEvent::getPointerId_22474_ID(),MotionEvent::_javaClass3(),"getPointerId","(I)I",GetMethodID,"Id for fallback method android.view.MotionEvent.getPointerId could not be cached",80);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, MotionEvent::_javaClass3(), MotionEvent::getPointerId_22474_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, MotionEvent::getPointerId_22474_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getX_IMPL_22477(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20485
float MotionEvent::getX_IMPL_22477(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    
    float result;
    CACHE_METHOD(MotionEvent::getX_22477_ID(),MotionEvent::_javaClass3(),"getX","(I)F",GetMethodID,"Id for fallback method android.view.MotionEvent.getX could not be cached",72);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, MotionEvent::_javaClass3(), MotionEvent::getX_22477_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, MotionEvent::getX_22477_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getY_IMPL_22478(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20488
float MotionEvent::getY_IMPL_22478(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    
    float result;
    CACHE_METHOD(MotionEvent::getY_22478_ID(),MotionEvent::_javaClass3(),"getY","(I)F",GetMethodID,"Id for fallback method android.view.MotionEvent.getY could not be cached",72);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, MotionEvent::_javaClass3(), MotionEvent::getY_22478_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, MotionEvent::getY_22478_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22526(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20632
uObject* MotionEvent::toString_IMPL_22526(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    
    uObject* result;
    CACHE_METHOD(MotionEvent::toString_22526_ID(),MotionEvent::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.MotionEvent.toString could not be cached",76);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, MotionEvent::_javaClass3(), MotionEvent::toString_22526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, MotionEvent::toString_22526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static int get_ACTION_POINTER_INDEX_MASK() [static] :18717
int MotionEvent::ACTION_POINTER_INDEX_MASK()
{
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    if (::uEnterCriticalIfNull(&MotionEvent::ACTION_POINTER_INDEX_MASK_22376_ID())) {;
    CACHE_FIELD(MotionEvent::ACTION_POINTER_INDEX_MASK_22376_ID(),MotionEvent::_javaClass3(),"ACTION_POINTER_INDEX_MASK","I",GetStaticFieldID,"Id for field MotionEvent.ACTION_POINTER_INDEX_MASK could not be cached",70);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(MotionEvent::_javaClass3(), MotionEvent::ACTION_POINTER_INDEX_MASK_22376_ID()));;
    return result;
}

// public static int get_ACTION_POINTER_INDEX_SHIFT() [static] :18734
int MotionEvent::ACTION_POINTER_INDEX_SHIFT()
{
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    if (::uEnterCriticalIfNull(&MotionEvent::ACTION_POINTER_INDEX_SHIFT_22377_ID())) {;
    CACHE_FIELD(MotionEvent::ACTION_POINTER_INDEX_SHIFT_22377_ID(),MotionEvent::_javaClass3(),"ACTION_POINTER_INDEX_SHIFT","I",GetStaticFieldID,"Id for field MotionEvent.ACTION_POINTER_INDEX_SHIFT could not be cached",71);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(MotionEvent::_javaClass3(), MotionEvent::ACTION_POINTER_INDEX_SHIFT_22377_ID()));;
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(27093)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface SubMenu :27093
// {
uInterfaceType* SubMenu_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.SubMenu", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(21086)
// --------------------------------------------------------------------------------------------------

// public sealed extern class Surface :21086
// {
::g::Android::java::lang::Object_type* Surface_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Surface);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.Surface", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Surface__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::Surface::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::Surface::release_22595_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::Surface::Surface_22593_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::Surface::toString_22603_ID_, uFieldFlagsStatic);
    return type;
}

// public Surface(Android.android.graphics.SurfaceTexture arg0) :21179
void Surface__ctor_5_fn(Surface* __this, ::g::Android::android::graphics::SurfaceTexture* arg0)
{
    __this->ctor_5(arg0);
}

// public static extern new void _Init() :21090
void Surface___Init2_fn()
{
    Surface::_Init2();
}

// public Surface New(Android.android.graphics.SurfaceTexture arg0) :21179
void Surface__New5_fn(::g::Android::android::graphics::SurfaceTexture* arg0, Surface** __retval)
{
    *__retval = Surface::New5(arg0);
}

// public void release() :21201
void Surface__release_fn(Surface* __this)
{
    __this->release();
}

// public static extern void release_IMPL_22595(bool arg0, Android.Base.Primitives.ujobject arg1) :21260
void Surface__release_IMPL_22595_fn(bool* arg0_, jobject* arg1_)
{
    Surface::release_IMPL_22595(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :21249
void Surface__toString_fn(Surface* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Surface::toString_IMPL_22603(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22603(bool arg0, Android.Base.Primitives.ujobject arg1) :21284
void Surface__toString_IMPL_22603_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Surface::toString_IMPL_22603(*arg0_, *arg1_);
}

jclass Surface::_javaClass2_;
jmethodID Surface::release_22595_ID_;
jmethodID Surface::Surface_22593_ID_c_;
jmethodID Surface::toString_22603_ID_;

// public Surface(Android.android.graphics.SurfaceTexture arg0) [instance] :21179
void Surface::ctor_5(::g::Android::android::graphics::SurfaceTexture* arg0)
{
    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Surface::_javaClass2(),Surface::_Init2());;
    CACHE_METHOD(Surface::Surface_22593_ID_c(),Surface::_javaClass2(),"<init>","(Landroid/graphics/SurfaceTexture;)V",GetMethodID,"Id for fallback method android.view.Surface.<init> could not be cached",70);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Surface::_javaClass2(), Surface::Surface_22593_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public void release() [instance] :21201
void Surface::release()
{
    Surface::release_IMPL_22595(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :21090
void Surface::_Init2()
{
    if (Surface::_javaClass2()) { return; }
    INIT_JNI;
    Surface::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/Surface"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Surface::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.Surface'", 44);; }
}

// public Surface New(Android.android.graphics.SurfaceTexture arg0) [static] :21179
Surface* Surface::New5(::g::Android::android::graphics::SurfaceTexture* arg0)
{
    Surface* obj2 = (Surface*)uNew(Surface_typeof());
    obj2->ctor_5(arg0);
    return obj2;
}

// public static extern void release_IMPL_22595(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21260
void Surface::release_IMPL_22595(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Surface::_javaClass2(),Surface::_Init2());
    
    CACHE_METHOD(Surface::release_22595_ID(),Surface::_javaClass2(),"release","()V",GetMethodID,"Id for fallback method android.view.Surface.release could not be cached",71);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Surface::_javaClass2(), Surface::release_22595_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Surface::release_22595_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22603(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21284
uObject* Surface::toString_IMPL_22603(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Surface::_javaClass2(),Surface::_Init2());
    
    uObject* result;
    CACHE_METHOD(Surface::toString_22603_ID(),Surface::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.Surface.toString could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Surface::_javaClass2(), Surface::toString_22603_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Surface::toString_22603_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(27164)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface SurfaceHolder :27164
// {
uInterfaceType* SurfaceHolder_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.SurfaceHolder", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(27126)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface SurfaceHolderDLRCallback :27126
// {
uInterfaceType* SurfaceHolderDLRCallback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.SurfaceHolderDLRCallback", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(27147)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface SurfaceHolderDLRCallback2 :27147
// {
uInterfaceType* SurfaceHolderDLRCallback2_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.SurfaceHolderDLRCallback2", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(21354)
// --------------------------------------------------------------------------------------------------

// public sealed extern class SurfaceView :21354
// {
::g::Android::android::view::View_type* SurfaceView_typeof()
{
    static uSStrong< ::g::Android::android::view::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(::g::Android::android::view::View_type);
    type = (::g::Android::android::view::View_type*)uClassType::New("Android.android.view.SurfaceView", options);
    type->SetBase(::g::Android::android::view::View_typeof());
    type->fp_setVisibility = (void(*)(::g::Android::android::view::View*, int*))SurfaceView__setVisibility_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[5] = ::g::Android::android::view::SurfaceHolder_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::View_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::SurfaceView::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::SurfaceView::getHolder_22630_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::SurfaceView::setVisibility_22633_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::SurfaceView::SurfaceView_22627_ID_c_, uFieldFlagsStatic);
    return type;
}

// public SurfaceView(Android.android.content.Context arg0) :21361
void SurfaceView__ctor_9_fn(SurfaceView* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_9(arg0);
}

// public static extern new void _Init() :21358
void SurfaceView___Init3_fn()
{
    SurfaceView::_Init3();
}

// public Android.android.view.SurfaceHolder getHolder() :21411
void SurfaceView__getHolder_fn(SurfaceView* __this, uObject** __retval)
{
    *__retval = __this->getHolder();
}

// public static extern Android.Base.Wrappers.IJWrapper getHolder_IMPL_22630(bool arg0, Android.Base.Primitives.ujobject arg1) :21487
void SurfaceView__getHolder_IMPL_22630_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = SurfaceView::getHolder_IMPL_22630(*arg0_, *arg1_);
}

// public SurfaceView New(Android.android.content.Context arg0) :21361
void SurfaceView__New9_fn(::g::Android::android::content::Context* arg0, SurfaceView** __retval)
{
    *__retval = SurfaceView::New9(arg0);
}

// public override sealed void setVisibility(int arg0) :21429
void SurfaceView__setVisibility_fn(SurfaceView* __this, int* arg0)
{
    int arg0_ = *arg0;
    SurfaceView::setVisibility_IMPL_22633(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setVisibility_IMPL_22633(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :21496
void SurfaceView__setVisibility_IMPL_22633_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    SurfaceView::setVisibility_IMPL_22633(*arg0_, *arg1_, *arg2_);
}

jclass SurfaceView::_javaClass3_;
jmethodID SurfaceView::getHolder_22630_ID_;
jmethodID SurfaceView::setVisibility_22633_ID_;
jmethodID SurfaceView::SurfaceView_22627_ID_c_;

// public SurfaceView(Android.android.content.Context arg0) [instance] :21361
void SurfaceView::ctor_9(::g::Android::android::content::Context* arg0)
{
    ctor_8(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(SurfaceView::_javaClass3(),SurfaceView::_Init3());;
    CACHE_METHOD(SurfaceView::SurfaceView_22627_ID_c(),SurfaceView::_javaClass3(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.view.SurfaceView.<init> could not be cached",74);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(SurfaceView::_javaClass3(), SurfaceView::SurfaceView_22627_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public Android.android.view.SurfaceHolder getHolder() [instance] :21411
uObject* SurfaceView::getHolder()
{
    return SurfaceView::getHolder_IMPL_22630(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :21358
void SurfaceView::_Init3()
{
    if (SurfaceView::_javaClass3()) { return; }
    INIT_JNI;
    SurfaceView::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/SurfaceView"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!SurfaceView::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.SurfaceView'", 48);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getHolder_IMPL_22630(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21487
uObject* SurfaceView::getHolder_IMPL_22630(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(SurfaceView::_javaClass3(),SurfaceView::_Init3());
    
    uObject* result;
    CACHE_METHOD(SurfaceView::getHolder_22630_ID(),SurfaceView::_javaClass3(),"getHolder","()Landroid/view/SurfaceHolder;",GetMethodID,"Id for fallback method android.view.SurfaceView.getHolder could not be cached",77);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, SurfaceView::_javaClass3(), SurfaceView::getHolder_22630_ID()),result,::g::Android::Fallbacks::Android_android_view_SurfaceHolder_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, SurfaceView::getHolder_22630_ID()),result,::g::Android::Fallbacks::Android_android_view_SurfaceHolder_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public SurfaceView New(Android.android.content.Context arg0) [static] :21361
SurfaceView* SurfaceView::New9(::g::Android::android::content::Context* arg0)
{
    SurfaceView* obj2 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj2->ctor_9(arg0);
    return obj2;
}

// public static extern void setVisibility_IMPL_22633(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :21496
void SurfaceView::setVisibility_IMPL_22633(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(SurfaceView::_javaClass3(),SurfaceView::_Init3());
    
    CACHE_METHOD(SurfaceView::setVisibility_22633_ID(),SurfaceView::_javaClass3(),"setVisibility","(I)V",GetMethodID,"Id for fallback method android.view.SurfaceView.setVisibility could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, SurfaceView::_javaClass3(), SurfaceView::setVisibility_22633_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, SurfaceView::setVisibility_22633_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(21536)
// --------------------------------------------------------------------------------------------------

// public sealed extern class TextureView :21536
// {
::g::Android::android::view::View_type* TextureView_typeof()
{
    static uSStrong< ::g::Android::android::view::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextureView);
    options.TypeSize = sizeof(::g::Android::android::view::View_type);
    type = (::g::Android::android::view::View_type*)uClassType::New("Android.android.view.TextureView", options);
    type->SetBase(::g::Android::android::view::View_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::View_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::TextureView::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::TextureView::setOpaque_22650_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::TextureView::setSurfaceTextureListener_22672_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::TextureView::TextureView_22646_ID_c_, uFieldFlagsStatic);
    return type;
}

// public TextureView(Android.android.content.Context arg0) :21543
void TextureView__ctor_9_fn(TextureView* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_9(arg0);
}

// public static extern new void _Init() :21540
void TextureView___Init3_fn()
{
    TextureView::_Init3();
}

// public TextureView New(Android.android.content.Context arg0) :21543
void TextureView__New9_fn(::g::Android::android::content::Context* arg0, TextureView** __retval)
{
    *__retval = TextureView::New9(arg0);
}

// public void setOpaque(bool arg0) :21599
void TextureView__setOpaque_fn(TextureView* __this, bool* arg0)
{
    __this->setOpaque(*arg0);
}

// public static extern void setOpaque_IMPL_22650(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :21744
void TextureView__setOpaque_IMPL_22650_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    TextureView::setOpaque_IMPL_22650(*arg0_, *arg1_, *arg2_);
}

// public void setSurfaceTextureListener(Android.android.view.TextureViewDLRSurfaceTextureListener arg0) :21731
void TextureView__setSurfaceTextureListener_fn(TextureView* __this, uObject* arg0)
{
    __this->setSurfaceTextureListener(arg0);
}

// public static extern void setSurfaceTextureListener_IMPL_22672(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21810
void TextureView__setSurfaceTextureListener_IMPL_22672_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextureView::setSurfaceTextureListener_IMPL_22672(*arg0_, *arg1_, arg2_);
}

jclass TextureView::_javaClass3_;
jmethodID TextureView::setOpaque_22650_ID_;
jmethodID TextureView::setSurfaceTextureListener_22672_ID_;
jmethodID TextureView::TextureView_22646_ID_c_;

// public TextureView(Android.android.content.Context arg0) [instance] :21543
void TextureView::ctor_9(::g::Android::android::content::Context* arg0)
{
    ctor_8(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(TextureView::_javaClass3(),TextureView::_Init3());;
    CACHE_METHOD(TextureView::TextureView_22646_ID_c(),TextureView::_javaClass3(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.view.TextureView.<init> could not be cached",74);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(TextureView::_javaClass3(), TextureView::TextureView_22646_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public void setOpaque(bool arg0) [instance] :21599
void TextureView::setOpaque(bool arg0)
{
    bool arg0_ = arg0;
    TextureView::setOpaque_IMPL_22650(_subclassed, _javaObject, arg0_);
}

// public void setSurfaceTextureListener(Android.android.view.TextureViewDLRSurfaceTextureListener arg0) [instance] :21731
void TextureView::setSurfaceTextureListener(uObject* arg0)
{
    TextureView::setSurfaceTextureListener_IMPL_22672(_subclassed, _javaObject, arg0);
}

// public static extern new void _Init() [static] :21540
void TextureView::_Init3()
{
    if (TextureView::_javaClass3()) { return; }
    INIT_JNI;
    TextureView::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/TextureView"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!TextureView::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.TextureView'", 48);; }
}

// public TextureView New(Android.android.content.Context arg0) [static] :21543
TextureView* TextureView::New9(::g::Android::android::content::Context* arg0)
{
    TextureView* obj2 = (TextureView*)uNew(TextureView_typeof());
    obj2->ctor_9(arg0);
    return obj2;
}

// public static extern void setOpaque_IMPL_22650(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :21744
void TextureView::setOpaque_IMPL_22650(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextureView::_javaClass3(),TextureView::_Init3());
    
    CACHE_METHOD(TextureView::setOpaque_22650_ID(),TextureView::_javaClass3(),"setOpaque","(Z)V",GetMethodID,"Id for fallback method android.view.TextureView.setOpaque could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextureView::_javaClass3(), TextureView::setOpaque_22650_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextureView::setOpaque_22650_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setSurfaceTextureListener_IMPL_22672(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21810
void TextureView::setSurfaceTextureListener_IMPL_22672(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextureView::_javaClass3(),TextureView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextureView::setSurfaceTextureListener_22672_ID(),TextureView::_javaClass3(),"setSurfaceTextureListener","(Landroid/view/TextureView$SurfaceTextureListener;)V",GetMethodID,"Id for fallback method android.view.TextureView.setSurfaceTextureListener could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextureView::_javaClass3(), TextureView::setSurfaceTextureListener_22672_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextureView::setSurfaceTextureListener_22672_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(27221)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface TextureViewDLRSurfaceTextureListener :27221
// {
uInterfaceType* TextureViewDLRSurfaceTextureListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.TextureViewDLRSurfaceTextureListener", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(962)
// ------------------------------------------------------------------------------------------------

// public extern class View :962
// {
View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 47;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Android.android.view.View", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hasFocus = View__hasFocus_fn;
    type->fp_onScrollChanged = View__onScrollChanged_fn;
    type->fp_onTouchEvent = View__onTouchEvent_fn;
    type->fp_requestLayout = View__requestLayout_fn;
    type->fp_setBackgroundColor = View__setBackgroundColor_fn;
    type->fp_setEnabled = View__setEnabled_fn;
    type->fp_setLayoutParams = View__setLayoutParams_fn;
    type->fp_setVisibility = View__setVisibility_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))View__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::android::content::Context_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[7] = ::g::Android::android::os::IBinder_typeof();
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::View::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::bringToFront_22995_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::getContext_22972_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::getLocationOnScreen_23197_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::getMeasuredHeight_23009_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::getMeasuredWidth_23007_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::getRootView_23196_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::getWindowToken_23119_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::hasFocus_22851_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::invalidate_23065_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::View::INVISIBLE_22732_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::measure_23211_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::onScrollChanged_22996_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::onTouchEvent_22991_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::requestFocus_22934_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::requestLayout_23209_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setAlpha_23031_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setBackground_23177_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setBackgroundColor_23175_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setBackgroundDrawable_23178_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setBackgroundResource_23176_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setEnabled_22894_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setFocusable_22895_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setFocusableInTouchMode_22896_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setLayoutParams_23057_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setOnFocusChangeListener_22828_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setOnTouchListener_22844_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setPivotX_23026_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setPivotY_23028_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setRotation_23016_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setScaleX_23022_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setScaleY_23024_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setScrollX_23000_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setScrollY_23001_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setTextAlignment_23253_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setTranslationX_23046_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setTranslationY_23048_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::setVisibility_22892_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::View::TEXT_ALIGNMENT_GRAVITY_22767_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::toString_22818_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::View_22815_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::View::VISIBLE_22731_ID_, uFieldFlagsStatic);
    return type;
}

// public View(Android.android.content.Context arg0) :2424
void View__ctor_5_fn(View* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_5(arg0);
}

// public View(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :967
void View__ctor_8_fn(View* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_8(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :966
void View___Init2_fn()
{
    View::_Init2();
}

// public void bringToFront() :3536
void View__bringToFront_fn(View* __this)
{
    __this->bringToFront();
}

// public static extern void bringToFront_IMPL_22995(bool arg0, Android.Base.Primitives.ujobject arg1) :5655
void View__bringToFront_IMPL_22995_fn(bool* arg0_, jobject* arg1_)
{
    View::bringToFront_IMPL_22995(*arg0_, *arg1_);
}

// public Android.android.content.Context getContext() :3398
void View__getContext_fn(View* __this, ::g::Android::android::content::Context** __retval)
{
    *__retval = __this->getContext();
}

// public static extern Android.Base.Wrappers.IJWrapper getContext_IMPL_22972(bool arg0, Android.Base.Primitives.ujobject arg1) :5586
void View__getContext_IMPL_22972_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = View::getContext_IMPL_22972(*arg0_, *arg1_);
}

// public void getLocationOnScreen(Android.Runtime.IntArray arg0) :4748
void View__getLocationOnScreen_fn(View* __this, ::g::Android::Runtime::IntArray* arg0)
{
    __this->getLocationOnScreen(arg0);
}

// public static extern void getLocationOnScreen_IMPL_23197(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :6261
void View__getLocationOnScreen_IMPL_23197_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    View::getLocationOnScreen_IMPL_23197(*arg0_, *arg1_, arg2_);
}

// public int getMeasuredHeight() :3620
void View__getMeasuredHeight_fn(View* __this, int* __retval)
{
    *__retval = __this->getMeasuredHeight();
}

// public static extern int getMeasuredHeight_IMPL_23009(bool arg0, Android.Base.Primitives.ujobject arg1) :5697
void View__getMeasuredHeight_IMPL_23009_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = View::getMeasuredHeight_IMPL_23009(*arg0_, *arg1_);
}

// public int getMeasuredWidth() :3608
void View__getMeasuredWidth_fn(View* __this, int* __retval)
{
    *__retval = __this->getMeasuredWidth();
}

// public static extern int getMeasuredWidth_IMPL_23007(bool arg0, Android.Base.Primitives.ujobject arg1) :5691
void View__getMeasuredWidth_IMPL_23007_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = View::getMeasuredWidth_IMPL_23007(*arg0_, *arg1_);
}

// public Android.android.view.View getRootView() :4742
void View__getRootView_fn(View* __this, View** __retval)
{
    *__retval = __this->getRootView();
}

// public static extern Android.Base.Wrappers.IJWrapper getRootView_IMPL_23196(bool arg0, Android.Base.Primitives.ujobject arg1) :6258
void View__getRootView_IMPL_23196_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = View::getRootView_IMPL_23196(*arg0_, *arg1_);
}

// public Android.android.os.IBinder getWindowToken() :4280
void View__getWindowToken_fn(View* __this, uObject** __retval)
{
    *__retval = __this->getWindowToken();
}

// public static extern Android.Base.Wrappers.IJWrapper getWindowToken_IMPL_23119(bool arg0, Android.Base.Primitives.ujobject arg1) :6027
void View__getWindowToken_IMPL_23119_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = View::getWindowToken_IMPL_23119(*arg0_, *arg1_);
}

// public virtual bool hasFocus() :2672
void View__hasFocus_fn(View* __this, bool* __retval)
{
    return *__retval = View::hasFocus_IMPL_22851(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool hasFocus_IMPL_22851(bool arg0, Android.Base.Primitives.ujobject arg1) :5223
void View__hasFocus_IMPL_22851_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = View::hasFocus_IMPL_22851(*arg0_, *arg1_);
}

// public void invalidate() :3956
void View__invalidate_fn(View* __this)
{
    __this->invalidate();
}

// public static extern void invalidate_IMPL_23065(bool arg0, Android.Base.Primitives.ujobject arg1) :5865
void View__invalidate_IMPL_23065_fn(bool* arg0_, jobject* arg1_)
{
    View::invalidate_IMPL_23065(*arg0_, *arg1_);
}

// public static int get_INVISIBLE() :1005
void View__get_INVISIBLE_fn(int* __retval)
{
    *__retval = View::INVISIBLE();
}

// public void measure(int arg0, int arg1) :4832
void View__measure_fn(View* __this, int* arg0, int* arg1)
{
    __this->measure(*arg0, *arg1);
}

// public static extern void measure_IMPL_23211(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :6303
void View__measure_IMPL_23211_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    View::measure_IMPL_23211(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public View New(Android.android.content.Context arg0) :2424
void View__New5_fn(::g::Android::android::content::Context* arg0, View** __retval)
{
    *__retval = View::New5(arg0);
}

// protected virtual void onScrollChanged(int arg0, int arg1, int arg2, int arg3) :3542
void View__onScrollChanged_fn(View* __this, int* arg0, int* arg1, int* arg2, int* arg3)
{
    int arg0_ = *arg0;
    int arg1_ = *arg1;
    int arg2_ = *arg2;
    int arg3_ = *arg3;
    View::onScrollChanged_IMPL_22996(__this->_subclassed, __this->_javaObject, arg0_, arg1_, arg2_, arg3_);
}

// public static extern void onScrollChanged_IMPL_22996(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :5658
void View__onScrollChanged_IMPL_22996_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    View::onScrollChanged_IMPL_22996(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public virtual bool onTouchEvent(Android.android.view.MotionEvent arg0) :3512
void View__onTouchEvent_fn(View* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = View::onTouchEvent_IMPL_22991(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onTouchEvent_IMPL_22991(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5643
void View__onTouchEvent_IMPL_22991_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = View::onTouchEvent_IMPL_22991(*arg0_, *arg1_, arg2_);
}

// public bool requestFocus() :3170
void View__requestFocus_fn(View* __this, bool* __retval)
{
    *__retval = __this->requestFocus();
}

// public static extern bool requestFocus_IMPL_22934(bool arg0, Android.Base.Primitives.ujobject arg1) :5472
void View__requestFocus_IMPL_22934_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = View::requestFocus_IMPL_22934(*arg0_, *arg1_);
}

// public virtual void requestLayout() :4820
void View__requestLayout_fn(View* __this)
{
    View::requestLayout_IMPL_23209(__this->_subclassed, __this->_javaObject);
}

// public static extern void requestLayout_IMPL_23209(bool arg0, Android.Base.Primitives.ujobject arg1) :6297
void View__requestLayout_IMPL_23209_fn(bool* arg0_, jobject* arg1_)
{
    View::requestLayout_IMPL_23209(*arg0_, *arg1_);
}

// public void setAlpha(float arg0) :3752
void View__setAlpha_fn(View* __this, float* arg0)
{
    __this->setAlpha(*arg0);
}

// public static extern void setAlpha_IMPL_23031(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) :5763
void View__setAlpha_IMPL_23031_fn(bool* arg0_, jobject* arg1_, float* arg2_)
{
    View::setAlpha_IMPL_23031(*arg0_, *arg1_, *arg2_);
}

// public void setBackground(Android.android.graphics.drawable.Drawable arg0) :4628
void View__setBackground_fn(View* __this, ::g::Android::android::graphics::drawable::Drawable* arg0)
{
    __this->setBackground(arg0);
}

// public static extern void setBackground_IMPL_23177(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :6201
void View__setBackground_IMPL_23177_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    View::setBackground_IMPL_23177(*arg0_, *arg1_, arg2_);
}

// public virtual void setBackgroundColor(int arg0) :4616
void View__setBackgroundColor_fn(View* __this, int* arg0)
{
    int arg0_ = *arg0;
    View::setBackgroundColor_IMPL_23175(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setBackgroundColor_IMPL_23175(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :6195
void View__setBackgroundColor_IMPL_23175_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    View::setBackgroundColor_IMPL_23175(*arg0_, *arg1_, *arg2_);
}

// public void setBackgroundDrawable(Android.android.graphics.drawable.Drawable arg0) :4634
void View__setBackgroundDrawable_fn(View* __this, ::g::Android::android::graphics::drawable::Drawable* arg0)
{
    __this->setBackgroundDrawable(arg0);
}

// public static extern void setBackgroundDrawable_IMPL_23178(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :6204
void View__setBackgroundDrawable_IMPL_23178_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    View::setBackgroundDrawable_IMPL_23178(*arg0_, *arg1_, arg2_);
}

// public void setBackgroundResource(int arg0) :4622
void View__setBackgroundResource_fn(View* __this, int* arg0)
{
    __this->setBackgroundResource(*arg0);
}

// public static extern void setBackgroundResource_IMPL_23176(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :6198
void View__setBackgroundResource_IMPL_23176_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    View::setBackgroundResource_IMPL_23176(*arg0_, *arg1_, *arg2_);
}

// public virtual void setEnabled(bool arg0) :2930
void View__setEnabled_fn(View* __this, bool* arg0)
{
    bool arg0_ = *arg0;
    View::setEnabled_IMPL_22894(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setEnabled_IMPL_22894(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :5352
void View__setEnabled_IMPL_22894_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    View::setEnabled_IMPL_22894(*arg0_, *arg1_, *arg2_);
}

// public void setFocusable(bool arg0) :2936
void View__setFocusable_fn(View* __this, bool* arg0)
{
    __this->setFocusable(*arg0);
}

// public static extern void setFocusable_IMPL_22895(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :5355
void View__setFocusable_IMPL_22895_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    View::setFocusable_IMPL_22895(*arg0_, *arg1_, *arg2_);
}

// public void setFocusableInTouchMode(bool arg0) :2942
void View__setFocusableInTouchMode_fn(View* __this, bool* arg0)
{
    __this->setFocusableInTouchMode(*arg0);
}

// public static extern void setFocusableInTouchMode_IMPL_22896(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :5358
void View__setFocusableInTouchMode_IMPL_22896_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    View::setFocusableInTouchMode_IMPL_22896(*arg0_, *arg1_, *arg2_);
}

// public virtual void setLayoutParams(Android.android.view.ViewGroupDLRLayoutParams arg0) :3908
void View__setLayoutParams_fn(View* __this, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg0)
{
    View::setLayoutParams_IMPL_23057(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void setLayoutParams_IMPL_23057(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5841
void View__setLayoutParams_IMPL_23057_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    View::setLayoutParams_IMPL_23057(*arg0_, *arg1_, arg2_);
}

// public void setOnFocusChangeListener(Android.android.view.ViewDLROnFocusChangeListener arg0) :2534
void View__setOnFocusChangeListener_fn(View* __this, uObject* arg0)
{
    __this->setOnFocusChangeListener(arg0);
}

// public static extern void setOnFocusChangeListener_IMPL_22828(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5154
void View__setOnFocusChangeListener_IMPL_22828_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    View::setOnFocusChangeListener_IMPL_22828(*arg0_, *arg1_, arg2_);
}

// public void setOnTouchListener(Android.android.view.ViewDLROnTouchListener arg0) :2630
void View__setOnTouchListener_fn(View* __this, uObject* arg0)
{
    __this->setOnTouchListener(arg0);
}

// public static extern void setOnTouchListener_IMPL_22844(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5202
void View__setOnTouchListener_IMPL_22844_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    View::setOnTouchListener_IMPL_22844(*arg0_, *arg1_, arg2_);
}

// public void setPivotX(float arg0) :3722
void View__setPivotX_fn(View* __this, float* arg0)
{
    __this->setPivotX(*arg0);
}

// public static extern void setPivotX_IMPL_23026(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) :5748
void View__setPivotX_IMPL_23026_fn(bool* arg0_, jobject* arg1_, float* arg2_)
{
    View::setPivotX_IMPL_23026(*arg0_, *arg1_, *arg2_);
}

// public void setPivotY(float arg0) :3734
void View__setPivotY_fn(View* __this, float* arg0)
{
    __this->setPivotY(*arg0);
}

// public static extern void setPivotY_IMPL_23028(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) :5754
void View__setPivotY_IMPL_23028_fn(bool* arg0_, jobject* arg1_, float* arg2_)
{
    View::setPivotY_IMPL_23028(*arg0_, *arg1_, *arg2_);
}

// public void setRotation(float arg0) :3662
void View__setRotation_fn(View* __this, float* arg0)
{
    __this->setRotation(*arg0);
}

// public static extern void setRotation_IMPL_23016(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) :5718
void View__setRotation_IMPL_23016_fn(bool* arg0_, jobject* arg1_, float* arg2_)
{
    View::setRotation_IMPL_23016(*arg0_, *arg1_, *arg2_);
}

// public void setScaleX(float arg0) :3698
void View__setScaleX_fn(View* __this, float* arg0)
{
    __this->setScaleX(*arg0);
}

// public static extern void setScaleX_IMPL_23022(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) :5736
void View__setScaleX_IMPL_23022_fn(bool* arg0_, jobject* arg1_, float* arg2_)
{
    View::setScaleX_IMPL_23022(*arg0_, *arg1_, *arg2_);
}

// public void setScaleY(float arg0) :3710
void View__setScaleY_fn(View* __this, float* arg0)
{
    __this->setScaleY(*arg0);
}

// public static extern void setScaleY_IMPL_23024(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) :5742
void View__setScaleY_IMPL_23024_fn(bool* arg0_, jobject* arg1_, float* arg2_)
{
    View::setScaleY_IMPL_23024(*arg0_, *arg1_, *arg2_);
}

// public void setScrollX(int arg0) :3566
void View__setScrollX_fn(View* __this, int* arg0)
{
    __this->setScrollX(*arg0);
}

// public static extern void setScrollX_IMPL_23000(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5670
void View__setScrollX_IMPL_23000_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    View::setScrollX_IMPL_23000(*arg0_, *arg1_, *arg2_);
}

// public void setScrollY(int arg0) :3572
void View__setScrollY_fn(View* __this, int* arg0)
{
    __this->setScrollY(*arg0);
}

// public static extern void setScrollY_IMPL_23001(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5673
void View__setScrollY_IMPL_23001_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    View::setScrollY_IMPL_23001(*arg0_, *arg1_, *arg2_);
}

// public void setTextAlignment(int arg0) :5084
void View__setTextAlignment_fn(View* __this, int* arg0)
{
    __this->setTextAlignment(*arg0);
}

// public static extern void setTextAlignment_IMPL_23253(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :6429
void View__setTextAlignment_IMPL_23253_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    View::setTextAlignment_IMPL_23253(*arg0_, *arg1_, *arg2_);
}

// public void setTranslationX(float arg0) :3842
void View__setTranslationX_fn(View* __this, float* arg0)
{
    __this->setTranslationX(*arg0);
}

// public static extern void setTranslationX_IMPL_23046(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) :5808
void View__setTranslationX_IMPL_23046_fn(bool* arg0_, jobject* arg1_, float* arg2_)
{
    View::setTranslationX_IMPL_23046(*arg0_, *arg1_, *arg2_);
}

// public void setTranslationY(float arg0) :3854
void View__setTranslationY_fn(View* __this, float* arg0)
{
    __this->setTranslationY(*arg0);
}

// public static extern void setTranslationY_IMPL_23048(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) :5814
void View__setTranslationY_IMPL_23048_fn(bool* arg0_, jobject* arg1_, float* arg2_)
{
    View::setTranslationY_IMPL_23048(*arg0_, *arg1_, *arg2_);
}

// public virtual void setVisibility(int arg0) :2918
void View__setVisibility_fn(View* __this, int* arg0)
{
    int arg0_ = *arg0;
    View::setVisibility_IMPL_22892(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setVisibility_IMPL_22892(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5346
void View__setVisibility_IMPL_22892_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    View::setVisibility_IMPL_22892(*arg0_, *arg1_, *arg2_);
}

// public static int get_TEXT_ALIGNMENT_GRAVITY() :1600
void View__get_TEXT_ALIGNMENT_GRAVITY_fn(int* __retval)
{
    *__retval = View::TEXT_ALIGNMENT_GRAVITY();
}

// public override sealed Android.java.lang.String toString() :2474
void View__toString_fn(View* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(View::toString_IMPL_22818(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22818(bool arg0, Android.Base.Primitives.ujobject arg1) :5124
void View__toString_IMPL_22818_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = View::toString_IMPL_22818(*arg0_, *arg1_);
}

// public static int get_VISIBLE() :988
void View__get_VISIBLE_fn(int* __retval)
{
    *__retval = View::VISIBLE();
}

jclass View::_javaClass2_;
jmethodID View::bringToFront_22995_ID_;
jmethodID View::getContext_22972_ID_;
jmethodID View::getLocationOnScreen_23197_ID_;
jmethodID View::getMeasuredHeight_23009_ID_;
jmethodID View::getMeasuredWidth_23007_ID_;
jmethodID View::getRootView_23196_ID_;
jmethodID View::getWindowToken_23119_ID_;
jmethodID View::hasFocus_22851_ID_;
jmethodID View::invalidate_23065_ID_;
jfieldID View::INVISIBLE_22732_ID_;
jmethodID View::measure_23211_ID_;
jmethodID View::onScrollChanged_22996_ID_;
jmethodID View::onTouchEvent_22991_ID_;
jmethodID View::requestFocus_22934_ID_;
jmethodID View::requestLayout_23209_ID_;
jmethodID View::setAlpha_23031_ID_;
jmethodID View::setBackground_23177_ID_;
jmethodID View::setBackgroundColor_23175_ID_;
jmethodID View::setBackgroundDrawable_23178_ID_;
jmethodID View::setBackgroundResource_23176_ID_;
jmethodID View::setEnabled_22894_ID_;
jmethodID View::setFocusable_22895_ID_;
jmethodID View::setFocusableInTouchMode_22896_ID_;
jmethodID View::setLayoutParams_23057_ID_;
jmethodID View::setOnFocusChangeListener_22828_ID_;
jmethodID View::setOnTouchListener_22844_ID_;
jmethodID View::setPivotX_23026_ID_;
jmethodID View::setPivotY_23028_ID_;
jmethodID View::setRotation_23016_ID_;
jmethodID View::setScaleX_23022_ID_;
jmethodID View::setScaleY_23024_ID_;
jmethodID View::setScrollX_23000_ID_;
jmethodID View::setScrollY_23001_ID_;
jmethodID View::setTextAlignment_23253_ID_;
jmethodID View::setTranslationX_23046_ID_;
jmethodID View::setTranslationY_23048_ID_;
jmethodID View::setVisibility_22892_ID_;
jfieldID View::TEXT_ALIGNMENT_GRAVITY_22767_ID_;
jmethodID View::toString_22818_ID_;
jmethodID View::View_22815_ID_c_;
jfieldID View::VISIBLE_22731_ID_;

// public View(Android.android.content.Context arg0) [instance] :2424
void View::ctor_5(::g::Android::android::content::Context* arg0)
{
    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(View::_javaClass2(),View::_Init2());;
    CACHE_METHOD(View::View_22815_ID_c(),View::_javaClass2(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.view.View.<init> could not be cached",67);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(View::_javaClass2(), View::View_22815_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public View(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :967
void View::ctor_8(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_4(obj, utype, hasFallbackClass, resolveType);
}

// public void bringToFront() [instance] :3536
void View::bringToFront()
{
    View::bringToFront_IMPL_22995(_subclassed, _javaObject);
}

// public Android.android.content.Context getContext() [instance] :3398
::g::Android::android::content::Context* View::getContext()
{
    return uCast< ::g::Android::android::content::Context*>(View::getContext_IMPL_22972(_subclassed, _javaObject), ::TYPES[6/*Android.android.content.Context*/]);
}

// public void getLocationOnScreen(Android.Runtime.IntArray arg0) [instance] :4748
void View::getLocationOnScreen(::g::Android::Runtime::IntArray* arg0)
{
    View::getLocationOnScreen_IMPL_23197(_subclassed, _javaObject, (uObject*)arg0);
}

// public int getMeasuredHeight() [instance] :3620
int View::getMeasuredHeight()
{
    return View::getMeasuredHeight_IMPL_23009(_subclassed, _javaObject);
}

// public int getMeasuredWidth() [instance] :3608
int View::getMeasuredWidth()
{
    return View::getMeasuredWidth_IMPL_23007(_subclassed, _javaObject);
}

// public Android.android.view.View getRootView() [instance] :4742
View* View::getRootView()
{
    return uCast<View*>(View::getRootView_IMPL_23196(_subclassed, _javaObject), View_typeof());
}

// public Android.android.os.IBinder getWindowToken() [instance] :4280
uObject* View::getWindowToken()
{
    return View::getWindowToken_IMPL_23119(_subclassed, _javaObject);
}

// public void invalidate() [instance] :3956
void View::invalidate()
{
    View::invalidate_IMPL_23065(_subclassed, _javaObject);
}

// public void measure(int arg0, int arg1) [instance] :4832
void View::measure(int arg0, int arg1)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    View::measure_IMPL_23211(_subclassed, _javaObject, arg0_, arg1_);
}

// public bool requestFocus() [instance] :3170
bool View::requestFocus()
{
    return View::requestFocus_IMPL_22934(_subclassed, _javaObject);
}

// public void setAlpha(float arg0) [instance] :3752
void View::setAlpha(float arg0)
{
    float arg0_ = arg0;
    View::setAlpha_IMPL_23031(_subclassed, _javaObject, arg0_);
}

// public void setBackground(Android.android.graphics.drawable.Drawable arg0) [instance] :4628
void View::setBackground(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    View::setBackground_IMPL_23177(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setBackgroundDrawable(Android.android.graphics.drawable.Drawable arg0) [instance] :4634
void View::setBackgroundDrawable(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    View::setBackgroundDrawable_IMPL_23178(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setBackgroundResource(int arg0) [instance] :4622
void View::setBackgroundResource(int arg0)
{
    int arg0_ = arg0;
    View::setBackgroundResource_IMPL_23176(_subclassed, _javaObject, arg0_);
}

// public void setFocusable(bool arg0) [instance] :2936
void View::setFocusable(bool arg0)
{
    bool arg0_ = arg0;
    View::setFocusable_IMPL_22895(_subclassed, _javaObject, arg0_);
}

// public void setFocusableInTouchMode(bool arg0) [instance] :2942
void View::setFocusableInTouchMode(bool arg0)
{
    bool arg0_ = arg0;
    View::setFocusableInTouchMode_IMPL_22896(_subclassed, _javaObject, arg0_);
}

// public void setOnFocusChangeListener(Android.android.view.ViewDLROnFocusChangeListener arg0) [instance] :2534
void View::setOnFocusChangeListener(uObject* arg0)
{
    View::setOnFocusChangeListener_IMPL_22828(_subclassed, _javaObject, arg0);
}

// public void setOnTouchListener(Android.android.view.ViewDLROnTouchListener arg0) [instance] :2630
void View::setOnTouchListener(uObject* arg0)
{
    View::setOnTouchListener_IMPL_22844(_subclassed, _javaObject, arg0);
}

// public void setPivotX(float arg0) [instance] :3722
void View::setPivotX(float arg0)
{
    float arg0_ = arg0;
    View::setPivotX_IMPL_23026(_subclassed, _javaObject, arg0_);
}

// public void setPivotY(float arg0) [instance] :3734
void View::setPivotY(float arg0)
{
    float arg0_ = arg0;
    View::setPivotY_IMPL_23028(_subclassed, _javaObject, arg0_);
}

// public void setRotation(float arg0) [instance] :3662
void View::setRotation(float arg0)
{
    float arg0_ = arg0;
    View::setRotation_IMPL_23016(_subclassed, _javaObject, arg0_);
}

// public void setScaleX(float arg0) [instance] :3698
void View::setScaleX(float arg0)
{
    float arg0_ = arg0;
    View::setScaleX_IMPL_23022(_subclassed, _javaObject, arg0_);
}

// public void setScaleY(float arg0) [instance] :3710
void View::setScaleY(float arg0)
{
    float arg0_ = arg0;
    View::setScaleY_IMPL_23024(_subclassed, _javaObject, arg0_);
}

// public void setScrollX(int arg0) [instance] :3566
void View::setScrollX(int arg0)
{
    int arg0_ = arg0;
    View::setScrollX_IMPL_23000(_subclassed, _javaObject, arg0_);
}

// public void setScrollY(int arg0) [instance] :3572
void View::setScrollY(int arg0)
{
    int arg0_ = arg0;
    View::setScrollY_IMPL_23001(_subclassed, _javaObject, arg0_);
}

// public void setTextAlignment(int arg0) [instance] :5084
void View::setTextAlignment(int arg0)
{
    int arg0_ = arg0;
    View::setTextAlignment_IMPL_23253(_subclassed, _javaObject, arg0_);
}

// public void setTranslationX(float arg0) [instance] :3842
void View::setTranslationX(float arg0)
{
    float arg0_ = arg0;
    View::setTranslationX_IMPL_23046(_subclassed, _javaObject, arg0_);
}

// public void setTranslationY(float arg0) [instance] :3854
void View::setTranslationY(float arg0)
{
    float arg0_ = arg0;
    View::setTranslationY_IMPL_23048(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :966
void View::_Init2()
{
    if (View::_javaClass2()) { return; }
    INIT_JNI;
    View::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/View"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!View::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.View'", 41);; }
}

// public static extern void bringToFront_IMPL_22995(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5655
void View::bringToFront_IMPL_22995(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::bringToFront_22995_ID(),View::_javaClass2(),"bringToFront","()V",GetMethodID,"Id for fallback method android.view.View.bringToFront could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::bringToFront_22995_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::bringToFront_22995_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper getContext_IMPL_22972(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5586
uObject* View::getContext_IMPL_22972(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    uObject* result;
    CACHE_METHOD(View::getContext_22972_ID(),View::_javaClass2(),"getContext","()Landroid/content/Context;",GetMethodID,"Id for fallback method android.view.View.getContext could not be cached",71);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, View::_javaClass2(), View::getContext_22972_ID()),result,::g::Android::Fallbacks::Android_android_content_Context_typeof(),::g::Android::android::content::Context*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, View::getContext_22972_ID()),result,::g::Android::Fallbacks::Android_android_content_Context_typeof(),::g::Android::android::content::Context*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void getLocationOnScreen_IMPL_23197(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :6261
void View::getLocationOnScreen_IMPL_23197(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(View::getLocationOnScreen_23197_ID(),View::_javaClass2(),"getLocationOnScreen","([I)V",GetMethodID,"Id for fallback method android.view.View.getLocationOnScreen could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::getLocationOnScreen_23197_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::getLocationOnScreen_23197_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern int getMeasuredHeight_IMPL_23009(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5697
int View::getMeasuredHeight_IMPL_23009(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    int result;
    CACHE_METHOD(View::getMeasuredHeight_23009_ID(),View::_javaClass2(),"getMeasuredHeight","()I",GetMethodID,"Id for fallback method android.view.View.getMeasuredHeight could not be cached",78);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, View::_javaClass2(), View::getMeasuredHeight_23009_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, View::getMeasuredHeight_23009_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getMeasuredWidth_IMPL_23007(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5691
int View::getMeasuredWidth_IMPL_23007(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    int result;
    CACHE_METHOD(View::getMeasuredWidth_23007_ID(),View::_javaClass2(),"getMeasuredWidth","()I",GetMethodID,"Id for fallback method android.view.View.getMeasuredWidth could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, View::_javaClass2(), View::getMeasuredWidth_23007_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, View::getMeasuredWidth_23007_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getRootView_IMPL_23196(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :6258
uObject* View::getRootView_IMPL_23196(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    uObject* result;
    CACHE_METHOD(View::getRootView_23196_ID(),View::_javaClass2(),"getRootView","()Landroid/view/View;",GetMethodID,"Id for fallback method android.view.View.getRootView could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, View::_javaClass2(), View::getRootView_23196_ID()),result,View_typeof(),View*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, View::getRootView_23196_ID()),result,View_typeof(),View*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getWindowToken_IMPL_23119(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :6027
uObject* View::getWindowToken_IMPL_23119(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    uObject* result;
    CACHE_METHOD(View::getWindowToken_23119_ID(),View::_javaClass2(),"getWindowToken","()Landroid/os/IBinder;",GetMethodID,"Id for fallback method android.view.View.getWindowToken could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, View::_javaClass2(), View::getWindowToken_23119_ID()),result,::g::Android::Fallbacks::Android_android_os_IBinder_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, View::getWindowToken_23119_ID()),result,::g::Android::Fallbacks::Android_android_os_IBinder_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool hasFocus_IMPL_22851(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5223
bool View::hasFocus_IMPL_22851(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    bool result;
    CACHE_METHOD(View::hasFocus_22851_ID(),View::_javaClass2(),"hasFocus","()Z",GetMethodID,"Id for fallback method android.view.View.hasFocus could not be cached",69);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, View::_javaClass2(), View::hasFocus_22851_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, View::hasFocus_22851_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void invalidate_IMPL_23065(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5865
void View::invalidate_IMPL_23065(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::invalidate_23065_ID(),View::_javaClass2(),"invalidate","()V",GetMethodID,"Id for fallback method android.view.View.invalidate could not be cached",71);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::invalidate_23065_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::invalidate_23065_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void measure_IMPL_23211(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :6303
void View::measure_IMPL_23211(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::measure_23211_ID(),View::_javaClass2(),"measure","(II)V",GetMethodID,"Id for fallback method android.view.View.measure could not be cached",68);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::measure_23211_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::measure_23211_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public View New(Android.android.content.Context arg0) [static] :2424
View* View::New5(::g::Android::android::content::Context* arg0)
{
    View* obj2 = (View*)uNew(View_typeof());
    obj2->ctor_5(arg0);
    return obj2;
}

// public static extern void onScrollChanged_IMPL_22996(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :5658
void View::onScrollChanged_IMPL_22996(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::onScrollChanged_22996_ID(),View::_javaClass2(),"onScrollChanged","(IIII)V",GetMethodID,"Id for fallback method android.view.View.onScrollChanged could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::onScrollChanged_22996_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::onScrollChanged_22996_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onTouchEvent_IMPL_22991(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5643
bool View::onTouchEvent_IMPL_22991(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(View::onTouchEvent_22991_ID(),View::_javaClass2(),"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.view.View.onTouchEvent could not be cached",73);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, View::_javaClass2(), View::onTouchEvent_22991_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, View::onTouchEvent_22991_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool requestFocus_IMPL_22934(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5472
bool View::requestFocus_IMPL_22934(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    bool result;
    CACHE_METHOD(View::requestFocus_22934_ID(),View::_javaClass2(),"requestFocus","()Z",GetMethodID,"Id for fallback method android.view.View.requestFocus could not be cached",73);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, View::_javaClass2(), View::requestFocus_22934_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, View::requestFocus_22934_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void requestLayout_IMPL_23209(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :6297
void View::requestLayout_IMPL_23209(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::requestLayout_23209_ID(),View::_javaClass2(),"requestLayout","()V",GetMethodID,"Id for fallback method android.view.View.requestLayout could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::requestLayout_23209_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::requestLayout_23209_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setAlpha_IMPL_23031(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) [static] :5763
void View::setAlpha_IMPL_23031(bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setAlpha_23031_ID(),View::_javaClass2(),"setAlpha","(F)V",GetMethodID,"Id for fallback method android.view.View.setAlpha could not be cached",69);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setAlpha_23031_ID(), ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setAlpha_23031_ID(), ((jfloat)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setBackground_IMPL_23177(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :6201
void View::setBackground_IMPL_23177(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(View::setBackground_23177_ID(),View::_javaClass2(),"setBackground","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.view.View.setBackground could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setBackground_23177_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setBackground_23177_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setBackgroundColor_IMPL_23175(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :6195
void View::setBackgroundColor_IMPL_23175(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setBackgroundColor_23175_ID(),View::_javaClass2(),"setBackgroundColor","(I)V",GetMethodID,"Id for fallback method android.view.View.setBackgroundColor could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setBackgroundColor_23175_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setBackgroundColor_23175_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setBackgroundDrawable_IMPL_23178(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :6204
void View::setBackgroundDrawable_IMPL_23178(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(View::setBackgroundDrawable_23178_ID(),View::_javaClass2(),"setBackgroundDrawable","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.view.View.setBackgroundDrawable could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setBackgroundDrawable_23178_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setBackgroundDrawable_23178_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setBackgroundResource_IMPL_23176(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :6198
void View::setBackgroundResource_IMPL_23176(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setBackgroundResource_23176_ID(),View::_javaClass2(),"setBackgroundResource","(I)V",GetMethodID,"Id for fallback method android.view.View.setBackgroundResource could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setBackgroundResource_23176_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setBackgroundResource_23176_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setEnabled_IMPL_22894(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :5352
void View::setEnabled_IMPL_22894(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setEnabled_22894_ID(),View::_javaClass2(),"setEnabled","(Z)V",GetMethodID,"Id for fallback method android.view.View.setEnabled could not be cached",71);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setEnabled_22894_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setEnabled_22894_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setFocusable_IMPL_22895(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :5355
void View::setFocusable_IMPL_22895(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setFocusable_22895_ID(),View::_javaClass2(),"setFocusable","(Z)V",GetMethodID,"Id for fallback method android.view.View.setFocusable could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setFocusable_22895_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setFocusable_22895_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setFocusableInTouchMode_IMPL_22896(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :5358
void View::setFocusableInTouchMode_IMPL_22896(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setFocusableInTouchMode_22896_ID(),View::_javaClass2(),"setFocusableInTouchMode","(Z)V",GetMethodID,"Id for fallback method android.view.View.setFocusableInTouchMode could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setFocusableInTouchMode_22896_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setFocusableInTouchMode_22896_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setLayoutParams_IMPL_23057(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5841
void View::setLayoutParams_IMPL_23057(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(View::setLayoutParams_23057_ID(),View::_javaClass2(),"setLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.view.View.setLayoutParams could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setLayoutParams_23057_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setLayoutParams_23057_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnFocusChangeListener_IMPL_22828(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5154
void View::setOnFocusChangeListener_IMPL_22828(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(View::setOnFocusChangeListener_22828_ID(),View::_javaClass2(),"setOnFocusChangeListener","(Landroid/view/View$OnFocusChangeListener;)V",GetMethodID,"Id for fallback method android.view.View.setOnFocusChangeListener could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setOnFocusChangeListener_22828_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setOnFocusChangeListener_22828_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnTouchListener_IMPL_22844(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5202
void View::setOnTouchListener_IMPL_22844(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(View::setOnTouchListener_22844_ID(),View::_javaClass2(),"setOnTouchListener","(Landroid/view/View$OnTouchListener;)V",GetMethodID,"Id for fallback method android.view.View.setOnTouchListener could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setOnTouchListener_22844_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setOnTouchListener_22844_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setPivotX_IMPL_23026(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) [static] :5748
void View::setPivotX_IMPL_23026(bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setPivotX_23026_ID(),View::_javaClass2(),"setPivotX","(F)V",GetMethodID,"Id for fallback method android.view.View.setPivotX could not be cached",70);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setPivotX_23026_ID(), ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setPivotX_23026_ID(), ((jfloat)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setPivotY_IMPL_23028(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) [static] :5754
void View::setPivotY_IMPL_23028(bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setPivotY_23028_ID(),View::_javaClass2(),"setPivotY","(F)V",GetMethodID,"Id for fallback method android.view.View.setPivotY could not be cached",70);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setPivotY_23028_ID(), ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setPivotY_23028_ID(), ((jfloat)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setRotation_IMPL_23016(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) [static] :5718
void View::setRotation_IMPL_23016(bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setRotation_23016_ID(),View::_javaClass2(),"setRotation","(F)V",GetMethodID,"Id for fallback method android.view.View.setRotation could not be cached",72);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setRotation_23016_ID(), ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setRotation_23016_ID(), ((jfloat)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setScaleX_IMPL_23022(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) [static] :5736
void View::setScaleX_IMPL_23022(bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setScaleX_23022_ID(),View::_javaClass2(),"setScaleX","(F)V",GetMethodID,"Id for fallback method android.view.View.setScaleX could not be cached",70);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setScaleX_23022_ID(), ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setScaleX_23022_ID(), ((jfloat)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setScaleY_IMPL_23024(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) [static] :5742
void View::setScaleY_IMPL_23024(bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setScaleY_23024_ID(),View::_javaClass2(),"setScaleY","(F)V",GetMethodID,"Id for fallback method android.view.View.setScaleY could not be cached",70);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setScaleY_23024_ID(), ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setScaleY_23024_ID(), ((jfloat)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setScrollX_IMPL_23000(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5670
void View::setScrollX_IMPL_23000(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setScrollX_23000_ID(),View::_javaClass2(),"setScrollX","(I)V",GetMethodID,"Id for fallback method android.view.View.setScrollX could not be cached",71);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setScrollX_23000_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setScrollX_23000_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setScrollY_IMPL_23001(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5673
void View::setScrollY_IMPL_23001(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setScrollY_23001_ID(),View::_javaClass2(),"setScrollY","(I)V",GetMethodID,"Id for fallback method android.view.View.setScrollY could not be cached",71);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setScrollY_23001_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setScrollY_23001_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setTextAlignment_IMPL_23253(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :6429
void View::setTextAlignment_IMPL_23253(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setTextAlignment_23253_ID(),View::_javaClass2(),"setTextAlignment","(I)V",GetMethodID,"Id for fallback method android.view.View.setTextAlignment could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setTextAlignment_23253_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setTextAlignment_23253_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setTranslationX_IMPL_23046(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) [static] :5808
void View::setTranslationX_IMPL_23046(bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setTranslationX_23046_ID(),View::_javaClass2(),"setTranslationX","(F)V",GetMethodID,"Id for fallback method android.view.View.setTranslationX could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setTranslationX_23046_ID(), ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setTranslationX_23046_ID(), ((jfloat)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setTranslationY_IMPL_23048(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2) [static] :5814
void View::setTranslationY_IMPL_23048(bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setTranslationY_23048_ID(),View::_javaClass2(),"setTranslationY","(F)V",GetMethodID,"Id for fallback method android.view.View.setTranslationY could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setTranslationY_23048_ID(), ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setTranslationY_23048_ID(), ((jfloat)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setVisibility_IMPL_22892(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5346
void View::setVisibility_IMPL_22892(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    CACHE_METHOD(View::setVisibility_22892_ID(),View::_javaClass2(),"setVisibility","(I)V",GetMethodID,"Id for fallback method android.view.View.setVisibility could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, View::_javaClass2(), View::setVisibility_22892_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, View::setVisibility_22892_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22818(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5124
uObject* View::toString_IMPL_22818(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    uObject* result;
    CACHE_METHOD(View::toString_22818_ID(),View::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.View.toString could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, View::_javaClass2(), View::toString_22818_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, View::toString_22818_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static int get_INVISIBLE() [static] :1005
int View::INVISIBLE()
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    if (::uEnterCriticalIfNull(&View::INVISIBLE_22732_ID())) {;
    CACHE_FIELD(View::INVISIBLE_22732_ID(),View::_javaClass2(),"INVISIBLE","I",GetStaticFieldID,"Id for field View.INVISIBLE could not be cached",47);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(View::_javaClass2(), View::INVISIBLE_22732_ID()));;
    return result;
}

// public static int get_TEXT_ALIGNMENT_GRAVITY() [static] :1600
int View::TEXT_ALIGNMENT_GRAVITY()
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    if (::uEnterCriticalIfNull(&View::TEXT_ALIGNMENT_GRAVITY_22767_ID())) {;
    CACHE_FIELD(View::TEXT_ALIGNMENT_GRAVITY_22767_ID(),View::_javaClass2(),"TEXT_ALIGNMENT_GRAVITY","I",GetStaticFieldID,"Id for field View.TEXT_ALIGNMENT_GRAVITY could not be cached",60);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(View::_javaClass2(), View::TEXT_ALIGNMENT_GRAVITY_22767_ID()));;
    return result;
}

// public static int get_VISIBLE() [static] :988
int View::VISIBLE()
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    if (::uEnterCriticalIfNull(&View::VISIBLE_22731_ID())) {;
    CACHE_FIELD(View::VISIBLE_22731_ID(),View::_javaClass2(),"VISIBLE","I",GetStaticFieldID,"Id for field View.VISIBLE could not be cached",45);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(View::_javaClass2(), View::VISIBLE_22731_ID()));;
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(22334)
// --------------------------------------------------------------------------------------------------

// public sealed extern class ViewDLRMeasureSpec :22334
// {
::g::Android::java::lang::Object_type* ViewDLRMeasureSpec_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ViewDLRMeasureSpec);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.ViewDLRMeasureSpec", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::ViewDLRMeasureSpec::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::ViewDLRMeasureSpec::EXACTLY_22710_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::ViewDLRMeasureSpec::makeMeasureSpec_22713_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::ViewDLRMeasureSpec::UNSPECIFIED_22709_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :22338
void ViewDLRMeasureSpec___Init2_fn()
{
    ViewDLRMeasureSpec::_Init2();
}

// public static int get_EXACTLY() :22360
void ViewDLRMeasureSpec__get_EXACTLY_fn(int* __retval)
{
    *__retval = ViewDLRMeasureSpec::EXACTLY();
}

// public static int makeMeasureSpec(int arg0, int arg1) :22407
void ViewDLRMeasureSpec__makeMeasureSpec_fn(int* arg0, int* arg1, int* __retval)
{
    *__retval = ViewDLRMeasureSpec::makeMeasureSpec(*arg0, *arg1);
}

// public static extern int makeMeasureSpec_IMPL_22713(int arg0, int arg1) :22433
void ViewDLRMeasureSpec__makeMeasureSpec_IMPL_22713_fn(int* arg0_, int* arg1_, int* __retval)
{
    *__retval = ViewDLRMeasureSpec::makeMeasureSpec_IMPL_22713(*arg0_, *arg1_);
}

// public static int get_UNSPECIFIED() :22343
void ViewDLRMeasureSpec__get_UNSPECIFIED_fn(int* __retval)
{
    *__retval = ViewDLRMeasureSpec::UNSPECIFIED();
}

jclass ViewDLRMeasureSpec::_javaClass2_;
jfieldID ViewDLRMeasureSpec::EXACTLY_22710_ID_;
jmethodID ViewDLRMeasureSpec::makeMeasureSpec_22713_ID_;
jfieldID ViewDLRMeasureSpec::UNSPECIFIED_22709_ID_;

// public static extern new void _Init() [static] :22338
void ViewDLRMeasureSpec::_Init2()
{
    if (ViewDLRMeasureSpec::_javaClass2()) { return; }
    INIT_JNI;
    ViewDLRMeasureSpec::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/View$MeasureSpec"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ViewDLRMeasureSpec::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.View$MeasureSpec'", 53);; }
}

// public static int makeMeasureSpec(int arg0, int arg1) [static] :22407
int ViewDLRMeasureSpec::makeMeasureSpec(int arg0, int arg1)
{
    return ViewDLRMeasureSpec::makeMeasureSpec_IMPL_22713(arg0, arg1);
}

// public static extern int makeMeasureSpec_IMPL_22713(int arg0, int arg1) [static] :22433
int ViewDLRMeasureSpec::makeMeasureSpec_IMPL_22713(int arg0_, int arg1_)
{
    INIT_JNI;
    CLASS_INIT(ViewDLRMeasureSpec::_javaClass2(),ViewDLRMeasureSpec::_Init2());
    
    int result;
    CACHE_METHOD(ViewDLRMeasureSpec::makeMeasureSpec_22713_ID(),ViewDLRMeasureSpec::_javaClass2(),"makeMeasureSpec","(II)I",GetStaticMethodID,"Id for fallback method android.view.View$MeasureSpec.makeMeasureSpec could not be cached",88);
    result = ((int)U_JNIVAR->CallStaticIntMethod(ViewDLRMeasureSpec::_javaClass2(), ViewDLRMeasureSpec::makeMeasureSpec_22713_ID(), ((jint)arg0_), ((jint)arg1_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static int get_EXACTLY() [static] :22360
int ViewDLRMeasureSpec::EXACTLY()
{
    INIT_JNI;
    CLASS_INIT(ViewDLRMeasureSpec::_javaClass2(),ViewDLRMeasureSpec::_Init2());
    if (::uEnterCriticalIfNull(&ViewDLRMeasureSpec::EXACTLY_22710_ID())) {;
    CACHE_FIELD(ViewDLRMeasureSpec::EXACTLY_22710_ID(),ViewDLRMeasureSpec::_javaClass2(),"EXACTLY","I",GetStaticFieldID,"Id for field ViewDLRMeasureSpec.EXACTLY could not be cached",59);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(ViewDLRMeasureSpec::_javaClass2(), ViewDLRMeasureSpec::EXACTLY_22710_ID()));;
    return result;
}

// public static int get_UNSPECIFIED() [static] :22343
int ViewDLRMeasureSpec::UNSPECIFIED()
{
    INIT_JNI;
    CLASS_INIT(ViewDLRMeasureSpec::_javaClass2(),ViewDLRMeasureSpec::_Init2());
    if (::uEnterCriticalIfNull(&ViewDLRMeasureSpec::UNSPECIFIED_22709_ID())) {;
    CACHE_FIELD(ViewDLRMeasureSpec::UNSPECIFIED_22709_ID(),ViewDLRMeasureSpec::_javaClass2(),"UNSPECIFIED","I",GetStaticFieldID,"Id for field ViewDLRMeasureSpec.UNSPECIFIED could not be cached",63);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(ViewDLRMeasureSpec::_javaClass2(), ViewDLRMeasureSpec::UNSPECIFIED_22709_ID()));;
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(27297)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface ViewDLROnFocusChangeListener :27297
// {
uInterfaceType* ViewDLROnFocusChangeListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.ViewDLROnFocusChangeListener", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(27416)
// --------------------------------------------------------------------------------------------------

// public abstract extern interface ViewDLROnTouchListener :27416
// {
uInterfaceType* ViewDLROnTouchListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.ViewDLROnTouchListener", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(6460)
// -------------------------------------------------------------------------------------------------

// public abstract extern class ViewGroup :6460
// {
ViewGroup_type* ViewGroup_typeof()
{
    static uSStrong<ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ViewGroup);
    options.TypeSize = sizeof(ViewGroup_type);
    type = (ViewGroup_type*)uClassType::New("Android.android.view.ViewGroup", options);
    type->SetBase(::g::Android::android::view::View_typeof());
    type->fp_addView = ViewGroup__addView_fn;
    type->fp_addView2 = ViewGroup__addView2_fn;
    type->fp_hasFocus = (void(*)(::g::Android::android::view::View*, bool*))ViewGroup__hasFocus_fn;
    type->fp_onInterceptTouchEvent = ViewGroup__onInterceptTouchEvent_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ViewGroup_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::ViewGroup::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::ViewGroup::addView_23432_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::ViewGroup::addView_23433_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::ViewGroup::bringChildToFront_23392_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::ViewGroup::hasFocus_23380_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::ViewGroup::onInterceptTouchEvent_23409_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::ViewGroup::removeView_23446_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::ViewGroup::setClipChildren_23425_ID_, uFieldFlagsStatic);
    return type;
}

// protected ViewGroup(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :6465
void ViewGroup__ctor_12_fn(ViewGroup* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_12(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :6464
void ViewGroup___Init3_fn()
{
    ViewGroup::_Init3();
}

// public virtual void addView(Android.android.view.View arg0) :7078
void ViewGroup__addView_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0)
{
    ViewGroup::addView_IMPL_23432(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public virtual void addView(Android.android.view.View arg0, int arg1) :7084
void ViewGroup__addView2_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, int* arg1)
{
    int arg1_ = *arg1;
    ViewGroup::addView_IMPL_23433(__this->_subclassed, __this->_javaObject, (uObject*)arg0, arg1_);
}

// public static extern void addView_IMPL_23432(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :7754
void ViewGroup__addView_IMPL_23432_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ViewGroup::addView_IMPL_23432(*arg0_, *arg1_, arg2_);
}

// public static extern void addView_IMPL_23433(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :7757
void ViewGroup__addView_IMPL_23433_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    ViewGroup::addView_IMPL_23433(*arg0_, *arg1_, arg2_, *arg3_);
}

// public void bringChildToFront(Android.android.view.View arg0) :6838
void ViewGroup__bringChildToFront_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0)
{
    __this->bringChildToFront(arg0);
}

// public static extern void bringChildToFront_IMPL_23392(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :7634
void ViewGroup__bringChildToFront_IMPL_23392_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ViewGroup::bringChildToFront_IMPL_23392(*arg0_, *arg1_, arg2_);
}

// public override sealed bool hasFocus() :6766
void ViewGroup__hasFocus_fn(ViewGroup* __this, bool* __retval)
{
    return *__retval = ViewGroup::hasFocus_IMPL_23380(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool hasFocus_IMPL_23380(bool arg0, Android.Base.Primitives.ujobject arg1) :7598
void ViewGroup__hasFocus_IMPL_23380_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = ViewGroup::hasFocus_IMPL_23380(*arg0_, *arg1_);
}

// public virtual bool onInterceptTouchEvent(Android.android.view.MotionEvent arg0) :6940
void ViewGroup__onInterceptTouchEvent_fn(ViewGroup* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = ViewGroup::onInterceptTouchEvent_IMPL_23409(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onInterceptTouchEvent_IMPL_23409(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :7685
void ViewGroup__onInterceptTouchEvent_IMPL_23409_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ViewGroup::onInterceptTouchEvent_IMPL_23409(*arg0_, *arg1_, arg2_);
}

// public void removeView(Android.android.view.View arg0) :7162
void ViewGroup__removeView_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0)
{
    __this->removeView(arg0);
}

// public static extern void removeView_IMPL_23446(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :7796
void ViewGroup__removeView_IMPL_23446_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ViewGroup::removeView_IMPL_23446(*arg0_, *arg1_, arg2_);
}

// public void setClipChildren(bool arg0) :7036
void ViewGroup__setClipChildren_fn(ViewGroup* __this, bool* arg0)
{
    __this->setClipChildren(*arg0);
}

// public static extern void setClipChildren_IMPL_23425(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :7733
void ViewGroup__setClipChildren_IMPL_23425_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    ViewGroup::setClipChildren_IMPL_23425(*arg0_, *arg1_, *arg2_);
}

jclass ViewGroup::_javaClass3_;
jmethodID ViewGroup::addView_23432_ID_;
jmethodID ViewGroup::addView_23433_ID_;
jmethodID ViewGroup::bringChildToFront_23392_ID_;
jmethodID ViewGroup::hasFocus_23380_ID_;
jmethodID ViewGroup::onInterceptTouchEvent_23409_ID_;
jmethodID ViewGroup::removeView_23446_ID_;
jmethodID ViewGroup::setClipChildren_23425_ID_;

// protected ViewGroup(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :6465
void ViewGroup::ctor_12(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_8(obj, utype, hasFallbackClass, resolveType);
}

// public void bringChildToFront(Android.android.view.View arg0) [instance] :6838
void ViewGroup::bringChildToFront(::g::Android::android::view::View* arg0)
{
    ViewGroup::bringChildToFront_IMPL_23392(_subclassed, _javaObject, (uObject*)arg0);
}

// public void removeView(Android.android.view.View arg0) [instance] :7162
void ViewGroup::removeView(::g::Android::android::view::View* arg0)
{
    ViewGroup::removeView_IMPL_23446(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setClipChildren(bool arg0) [instance] :7036
void ViewGroup::setClipChildren(bool arg0)
{
    bool arg0_ = arg0;
    ViewGroup::setClipChildren_IMPL_23425(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :6464
void ViewGroup::_Init3()
{
    if (ViewGroup::_javaClass3()) { return; }
    INIT_JNI;
    ViewGroup::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/ViewGroup"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ViewGroup::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.ViewGroup'", 46);; }
}

// public static extern void addView_IMPL_23432(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :7754
void ViewGroup::addView_IMPL_23432(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ViewGroup::_javaClass3(),ViewGroup::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ViewGroup::addView_23432_ID(),ViewGroup::_javaClass3(),"addView","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewGroup.addView could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ViewGroup::_javaClass3(), ViewGroup::addView_23432_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ViewGroup::addView_23432_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void addView_IMPL_23433(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :7757
void ViewGroup::addView_IMPL_23433(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(ViewGroup::_javaClass3(),ViewGroup::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ViewGroup::addView_23433_ID(),ViewGroup::_javaClass3(),"addView","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.view.ViewGroup.addView could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ViewGroup::_javaClass3(), ViewGroup::addView_23433_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ViewGroup::addView_23433_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void bringChildToFront_IMPL_23392(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :7634
void ViewGroup::bringChildToFront_IMPL_23392(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ViewGroup::_javaClass3(),ViewGroup::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ViewGroup::bringChildToFront_23392_ID(),ViewGroup::_javaClass3(),"bringChildToFront","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewGroup.bringChildToFront could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ViewGroup::_javaClass3(), ViewGroup::bringChildToFront_23392_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ViewGroup::bringChildToFront_23392_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool hasFocus_IMPL_23380(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :7598
bool ViewGroup::hasFocus_IMPL_23380(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ViewGroup::_javaClass3(),ViewGroup::_Init3());
    
    bool result;
    CACHE_METHOD(ViewGroup::hasFocus_23380_ID(),ViewGroup::_javaClass3(),"hasFocus","()Z",GetMethodID,"Id for fallback method android.view.ViewGroup.hasFocus could not be cached",74);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ViewGroup::_javaClass3(), ViewGroup::hasFocus_23380_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ViewGroup::hasFocus_23380_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onInterceptTouchEvent_IMPL_23409(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :7685
bool ViewGroup::onInterceptTouchEvent_IMPL_23409(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ViewGroup::_javaClass3(),ViewGroup::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ViewGroup::onInterceptTouchEvent_23409_ID(),ViewGroup::_javaClass3(),"onInterceptTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.view.ViewGroup.onInterceptTouchEvent could not be cached",87);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ViewGroup::_javaClass3(), ViewGroup::onInterceptTouchEvent_23409_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ViewGroup::onInterceptTouchEvent_23409_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void removeView_IMPL_23446(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :7796
void ViewGroup::removeView_IMPL_23446(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ViewGroup::_javaClass3(),ViewGroup::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ViewGroup::removeView_23446_ID(),ViewGroup::_javaClass3(),"removeView","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewGroup.removeView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ViewGroup::_javaClass3(), ViewGroup::removeView_23446_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ViewGroup::removeView_23446_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setClipChildren_IMPL_23425(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :7733
void ViewGroup::setClipChildren_IMPL_23425(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(ViewGroup::_javaClass3(),ViewGroup::_Init3());
    
    CACHE_METHOD(ViewGroup::setClipChildren_23425_ID(),ViewGroup::_javaClass3(),"setClipChildren","(Z)V",GetMethodID,"Id for fallback method android.view.ViewGroup.setClipChildren could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ViewGroup::_javaClass3(), ViewGroup::setClipChildren_23425_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ViewGroup::setClipChildren_23425_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(8899)
// -------------------------------------------------------------------------------------------------

// public extern class ViewGroupDLRLayoutParams :8899
// {
::g::Android::java::lang::Object_type* ViewGroupDLRLayoutParams_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ViewGroupDLRLayoutParams);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.ViewGroupDLRLayoutParams", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::ViewGroupDLRLayoutParams::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::ViewGroupDLRLayoutParams::FILL_PARENT_23322_ID_, uFieldFlagsStatic);
    return type;
}

// public ViewGroupDLRLayoutParams(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :8904
void ViewGroupDLRLayoutParams__ctor_7_fn(ViewGroupDLRLayoutParams* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_7(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :8903
void ViewGroupDLRLayoutParams___Init2_fn()
{
    ViewGroupDLRLayoutParams::_Init2();
}

// public static int get_FILL_PARENT() :8908
void ViewGroupDLRLayoutParams__get_FILL_PARENT_fn(int* __retval)
{
    *__retval = ViewGroupDLRLayoutParams::FILL_PARENT();
}

jclass ViewGroupDLRLayoutParams::_javaClass2_;
jfieldID ViewGroupDLRLayoutParams::FILL_PARENT_23322_ID_;

// public ViewGroupDLRLayoutParams(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :8904
void ViewGroupDLRLayoutParams::ctor_7(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_4(obj, utype, hasFallbackClass, resolveType);
}

// public static extern new void _Init() [static] :8903
void ViewGroupDLRLayoutParams::_Init2()
{
    if (ViewGroupDLRLayoutParams::_javaClass2()) { return; }
    INIT_JNI;
    ViewGroupDLRLayoutParams::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/ViewGroup$LayoutParams"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ViewGroupDLRLayoutParams::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.ViewGroup$LayoutParams'", 59);; }
}

// public static int get_FILL_PARENT() [static] :8908
int ViewGroupDLRLayoutParams::FILL_PARENT()
{
    INIT_JNI;
    CLASS_INIT(ViewGroupDLRLayoutParams::_javaClass2(),ViewGroupDLRLayoutParams::_Init2());
    if (::uEnterCriticalIfNull(&ViewGroupDLRLayoutParams::FILL_PARENT_23322_ID())) {;
    CACHE_FIELD(ViewGroupDLRLayoutParams::FILL_PARENT_23322_ID(),ViewGroupDLRLayoutParams::_javaClass2(),"FILL_PARENT","I",GetStaticFieldID,"Id for field ViewGroupDLRLayoutParams.FILL_PARENT could not be cached",69);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(ViewGroupDLRLayoutParams::_javaClass2(), ViewGroupDLRLayoutParams::FILL_PARENT_23322_ID()));;
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(9115)
// -------------------------------------------------------------------------------------------------

// public extern class ViewGroupDLRMarginLayoutParams :9115
// {
::g::Android::java::lang::Object_type* ViewGroupDLRMarginLayoutParams_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ViewGroupDLRMarginLayoutParams);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.ViewGroupDLRMarginLayoutParams", options);
    type->SetBase(::g::Android::android::view::ViewGroupDLRLayoutParams_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}

// public ViewGroupDLRMarginLayoutParams(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :9120
void ViewGroupDLRMarginLayoutParams__ctor_12_fn(ViewGroupDLRMarginLayoutParams* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_12(*obj, utype, *hasFallbackClass, *resolveType);
}

// public ViewGroupDLRMarginLayoutParams(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :9120
void ViewGroupDLRMarginLayoutParams::ctor_12(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_7(obj, utype, hasFallbackClass, resolveType);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/android/view/$.uno(23968)
// --------------------------------------------------------------------------------------------------

// public sealed extern class WindowManagerDLRLayoutParams :23968
// {
::g::Android::java::lang::Object_type* WindowManagerDLRLayoutParams_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WindowManagerDLRLayoutParams);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.WindowManagerDLRLayoutParams", options);
    type->SetBase(::g::Android::android::view::ViewGroupDLRLayoutParams_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))WindowManagerDLRLayoutParams__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::WindowManagerDLRLayoutParams::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::WindowManagerDLRLayoutParams::toString_23907_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :23972
void WindowManagerDLRLayoutParams___Init3_fn()
{
    WindowManagerDLRLayoutParams::_Init3();
}

// public override sealed Android.java.lang.String toString() :26290
void WindowManagerDLRLayoutParams__toString_fn(WindowManagerDLRLayoutParams* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(WindowManagerDLRLayoutParams::toString_IMPL_23907(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_23907(bool arg0, Android.Base.Primitives.ujobject arg1) :26325
void WindowManagerDLRLayoutParams__toString_IMPL_23907_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = WindowManagerDLRLayoutParams::toString_IMPL_23907(*arg0_, *arg1_);
}

jclass WindowManagerDLRLayoutParams::_javaClass3_;
jmethodID WindowManagerDLRLayoutParams::toString_23907_ID_;

// public static extern new void _Init() [static] :23972
void WindowManagerDLRLayoutParams::_Init3()
{
    if (WindowManagerDLRLayoutParams::_javaClass3()) { return; }
    INIT_JNI;
    WindowManagerDLRLayoutParams::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/WindowManager$LayoutParams"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!WindowManagerDLRLayoutParams::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.WindowManager$LayoutParams'", 63);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_23907(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :26325
uObject* WindowManagerDLRLayoutParams::toString_IMPL_23907(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WindowManagerDLRLayoutParams::_javaClass3(),WindowManagerDLRLayoutParams::_Init3());
    
    uObject* result;
    CACHE_METHOD(WindowManagerDLRLayoutParams::toString_23907_ID(),WindowManagerDLRLayoutParams::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.WindowManager$LayoutParams.toString could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, WindowManagerDLRLayoutParams::_javaClass3(), WindowManagerDLRLayoutParams::toString_23907_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, WindowManagerDLRLayoutParams::toString_23907_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::android::view
