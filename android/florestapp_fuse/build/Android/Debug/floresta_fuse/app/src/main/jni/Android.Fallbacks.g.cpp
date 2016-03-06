// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.animation.TimeAnimator.h>
#include <Android.android.content.ComponentName.h>
#include <Android.android.content.Intent.h>
#include <Android.android.content.res.Resources.h>
#include <Android.android.graphics.Canvas.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.graphics.Rect.h>
#include <Android.android.graphics.SurfaceTexture.h>
#include <Android.android.location.Location.h>
#include <Android.android.media.MediaPlayer.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.IBinder.h>
#include <Android.android.os.IBinderDLRDeathRecipient.h>
#include <Android.android.os.IInterface.h>
#include <Android.android.os.Parcel.h>
#include <Android.android.text.Editable.h>
#include <Android.android.text.InputFilter.h>
#include <Android.android.text.Spanned.h>
#include <Android.android.view.ActionProvider.h>
#include <Android.android.view.ContextMenuDLRContextMenuInfo.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.MenuItem.h>
#include <Android.android.view.MenuItemDLROnActionExpandListener.h>
#include <Android.android.view.MenuItemDLROnMenuItemClickListener.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.SubMenu.h>
#include <Android.android.view.Surface.h>
#include <Android.android.view.SurfaceHolder.h>
#include <Android.android.view.SurfaceHolderDLRCallback.h>
#include <Android.android.view.View.h>
#include <Android.android.widget.CompoundButton.h>
#include <Android.android.widget.SeekBar.h>
#include <Android.android.widget.TextView.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_animation_Animator.h>
#include <Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h>
#include <Android.Fallbacks.Android_android_content_Context.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h>
#include <Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-3d380973.h>
#include <Android.Fallbacks.Android_android_location_LocationListener.h>
#include <Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-90db6e01.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-90486b0b.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h>
#include <Android.Fallbacks.Android_android_net_Uri.h>
#include <Android.Fallbacks.Android_android_os_IBinder.h>
#include <Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h>
#include <Android.Fallbacks.Android_android_os_IInterface.h>
#include <Android.Fallbacks.Android_android_os_Vibrator.h>
#include <Android.Fallbacks.Android_android_text_Editable.h>
#include <Android.Fallbacks.Android_android_text_GetChars.h>
#include <Android.Fallbacks.Android_android_text_InputFilter.h>
#include <Android.Fallbacks.Android_android_text_Layout.h>
#include <Android.Fallbacks.Android_android_text_Spannable.h>
#include <Android.Fallbacks.Android_android_text_Spanned.h>
#include <Android.Fallbacks.Android_android_text_TextWatcher.h>
#include <Android.Fallbacks.Android_android_util_AttributeSet.h>
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
#include <Android.Fallbacks.Android_android_webkit_WebSettings.h>
#include <Android.Fallbacks.Android_android_widget_AbsSeekBar.h>
#include <Android.Fallbacks.Android_android_widget_CompoundButton.h>
#include <Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-eb4d489e.h>
#include <Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-d93a5fd2.h>
#include <Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-e197328f.h>
#include <Android.Fallbacks.Android_java_io_InputStream.h>
#include <Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <Android.Fallbacks.Android_java_lang_Iterable.h>
#include <Android.Fallbacks.Android_java_lang_Runnable.h>
#include <Android.Fallbacks.Android_java_util_Collection.h>
#include <Android.Fallbacks.Android_java_util_Iterator.h>
#include <Android.Fallbacks.Android_java_util_List.h>
#include <Android.Fallbacks.Android_java_util_ListIterator.h>
#include <Android.Fallbacks.Android_java_util_Observer.h>
#include <Android.java.io.FileDescriptor.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Class.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.Collection.h>
#include <Android.java.util.Iterator.h>
#include <Android.java.util.List.h>
#include <Android.java.util.ListIterator.h>
#include <Android.java.util.Observable.h>
#include <Android.Runtime.CharArray.h>
#include <Android.Runtime.JEnumerator.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
static uType* TYPES[26];

namespace g{
namespace Android{
namespace Fallbacks{

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(2957)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_animation_Animator :2957
// {
::g::Android::java::lang::Object_type* Android_android_animation_Animator_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_animation_Animator);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_animation_Animator", options);
    type->SetBase(::g::Android::android::animation::Animator_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(22973)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_animation_TimeAnimatorDLRTimeListener :22973
// {
Android_android_animation_TimeAnimatorDLRTimeListener_type* Android_android_animation_TimeAnimatorDLRTimeListener_typeof()
{
    static uSStrong<Android_android_animation_TimeAnimatorDLRTimeListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_animation_TimeAnimatorDLRTimeListener);
    options.TypeSize = sizeof(Android_android_animation_TimeAnimatorDLRTimeListener_type);
    type = (Android_android_animation_TimeAnimatorDLRTimeListener_type*)uClassType::New("Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onTimeUpdate = (void(*)(uObject*, ::g::Android::android::animation::TimeAnimator*, int64_t*, int64_t*))Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_animation_TimeAnimatorDLRTimeListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_animation_TimeAnimatorDLRTimeListener_type, interface1),
        ::g::Android::android::animation::TimeAnimatorDLRTimeListener_typeof(), offsetof(Android_android_animation_TimeAnimatorDLRTimeListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_animation_TimeAnimatorDLRTimeListener::onTimeUpdate_375_ID_, uFieldFlagsStatic);
    return type;
}

// public void onTimeUpdate(Android.android.animation.TimeAnimator arg0, long arg1, long arg2) :22976
void Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_fn(Android_android_animation_TimeAnimatorDLRTimeListener* __this, ::g::Android::android::animation::TimeAnimator* arg0, int64_t* arg1, int64_t* arg2)
{
    __this->onTimeUpdate(arg0, *arg1, *arg2);
}

// public static extern void onTimeUpdate_IMPL_375(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3, long arg4) :22983
void Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_IMPL_375_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, int64_t* arg4_)
{
    Android_android_animation_TimeAnimatorDLRTimeListener::onTimeUpdate_IMPL_375(*arg0_, *arg1_, arg2_, *arg3_, *arg4_);
}

jmethodID Android_android_animation_TimeAnimatorDLRTimeListener::onTimeUpdate_375_ID_;

// public void onTimeUpdate(Android.android.animation.TimeAnimator arg0, long arg1, long arg2) [instance] :22976
void Android_android_animation_TimeAnimatorDLRTimeListener::onTimeUpdate(::g::Android::android::animation::TimeAnimator* arg0, int64_t arg1, int64_t arg2)
{
    Android_android_animation_TimeAnimatorDLRTimeListener::onTimeUpdate_IMPL_375(_subclassed, _javaObject, (uObject*)arg0, arg1, arg2);
}

// public static extern void onTimeUpdate_IMPL_375(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3, long arg4) [static] :22983
void Android_android_animation_TimeAnimatorDLRTimeListener::onTimeUpdate_IMPL_375(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_, int64_t arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_animation_TimeAnimatorDLRTimeListener::onTimeUpdate_375_ID(),"android/animation/TimeAnimator$TimeListener","onTimeUpdate","(Landroid/animation/TimeAnimator;JJ)V",GetMethodID,"Id for fallback method android.animation.TimeAnimator$TimeListener.onTimeUpdate could not be cached",99);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_animation_TimeAnimatorDLRTimeListener::onTimeUpdate_375_ID(), _obArg2, ((jlong)arg3_), ((jlong)arg4_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(1999)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_content_Context :1999
// {
::g::Android::android::content::Context_type* Android_android_content_Context_typeof()
{
    static uSStrong< ::g::Android::android::content::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_content_Context);
    options.TypeSize = sizeof(::g::Android::android::content::Context_type);
    type = (::g::Android::android::content::Context_type*)uClassType::New("Android.Fallbacks.Android_android_content_Context", options);
    type->SetBase(::g::Android::android::content::Context_typeof());
    type->fp_getResources = (void(*)(::g::Android::android::content::Context*, ::g::Android::android::content::res::Resources**))Android_android_content_Context__getResources_fn;
    type->fp_getSystemService = (void(*)(::g::Android::android::content::Context*, ::g::Android::java::lang::String*, ::g::Android::java::lang::Object**))Android_android_content_Context__getSystemService_fn;
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
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_content_Context::getResources_44466_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_content_Context::getSystemService_44532_ID_, uFieldFlagsStatic);
    return type;
}

// public override sealed Android.android.content.res.Resources getResources() :2007
void Android_android_content_Context__getResources_fn(Android_android_content_Context* __this, ::g::Android::android::content::res::Resources** __retval)
{
    return *__retval = uCast< ::g::Android::android::content::res::Resources*>(Android_android_content_Context::getResources_IMPL_44466(__this->_subclassed, __this->_javaObject), ::TYPES[2/*Android.android.content.res.Resources*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getResources_IMPL_44466(bool arg0, Android.Base.Primitives.ujobject arg1) :2442
void Android_android_content_Context__getResources_IMPL_44466_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_content_Context::getResources_IMPL_44466(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.Object getSystemService(Android.java.lang.String arg0) :2337
void Android_android_content_Context__getSystemService_fn(Android_android_content_Context* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::Object*>(Android_android_content_Context::getSystemService_IMPL_44532(__this->_subclassed, __this->_javaObject, (uObject*)arg0), ::TYPES[3/*Android.java.lang.Object*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_44532(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2640
void Android_android_content_Context__getSystemService_IMPL_44532_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_content_Context::getSystemService_IMPL_44532(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_content_Context::getResources_44466_ID_;
jmethodID Android_android_content_Context::getSystemService_44532_ID_;

// public static extern Android.Base.Wrappers.IJWrapper getResources_IMPL_44466(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2442
uObject* Android_android_content_Context::getResources_IMPL_44466(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_content_Context::getResources_44466_ID(),"android/content/Context","getResources","()Landroid/content/res/Resources;",GetMethodID,"Id for fallback method android.content.Context.getResources could not be cached",79);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_content_Context::getResources_44466_ID()),result,::g::Android::android::content::res::Resources_typeof(),::g::Android::android::content::res::Resources*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_44532(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2640
uObject* Android_android_content_Context::getSystemService_IMPL_44532(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_content_Context::getSystemService_44532_ID(),"android/content/Context","getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.content.Context.getSystemService could not be cached",83);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_content_Context::getSystemService_44532_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(10945)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_graphics_drawable_Drawable :10945
// {
::g::Android::java::lang::Object_type* Android_android_graphics_drawable_Drawable_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_graphics_drawable_Drawable);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_graphics_drawable_Drawable", options);
    type->SetBase(::g::Android::android::graphics::drawable::Drawable_typeof());
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

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(16353)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_graphics_drawable_shapes_Shape :16353
// {
::g::Android::java::lang::Object_type* Android_android_graphics_drawable_shapes_Shape_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_graphics_drawable_shapes_Shape);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape", options);
    type->SetBase(::g::Android::android::graphics::drawable::shapes::Shape_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(23297)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener :23297
// {
Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_type* Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_typeof()
{
    static uSStrong<Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener);
    options.TypeSize = sizeof(Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_type);
    type = (Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_type*)uClassType::New("Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onFrameAvailable = (void(*)(uObject*, ::g::Android::android::graphics::SurfaceTexture*))Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener__onFrameAvailable_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_type, interface1),
        ::g::Android::android::graphics::SurfaceTextureDLROnFrameAvailableListener_typeof(), offsetof(Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener::onFrameAvailable_7295_ID_, uFieldFlagsStatic);
    return type;
}

// public void onFrameAvailable(Android.android.graphics.SurfaceTexture arg0) :23300
void Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener__onFrameAvailable_fn(Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener* __this, ::g::Android::android::graphics::SurfaceTexture* arg0)
{
    __this->onFrameAvailable(arg0);
}

// public static extern void onFrameAvailable_IMPL_7295(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :23307
void Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener__onFrameAvailable_IMPL_7295_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener::onFrameAvailable_IMPL_7295(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener::onFrameAvailable_7295_ID_;

// public void onFrameAvailable(Android.android.graphics.SurfaceTexture arg0) [instance] :23300
void Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener::onFrameAvailable(::g::Android::android::graphics::SurfaceTexture* arg0)
{
    Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener::onFrameAvailable_IMPL_7295(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern void onFrameAvailable_IMPL_7295(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :23307
void Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener::onFrameAvailable_IMPL_7295(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener::onFrameAvailable_7295_ID(),"android/graphics/SurfaceTexture$OnFrameAvailableListener","onFrameAvailable","(Landroid/graphics/SurfaceTexture;)V",GetMethodID,"Id for fallback method android.graphics.SurfaceTexture$OnFrameAvailableListener.onFrameAvailable could not be cached",116);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener::onFrameAvailable_7295_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(27885)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_location_LocationListener :27885
// {
Android_android_location_LocationListener_type* Android_android_location_LocationListener_typeof()
{
    static uSStrong<Android_android_location_LocationListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_location_LocationListener);
    options.TypeSize = sizeof(Android_android_location_LocationListener_type);
    type = (Android_android_location_LocationListener_type*)uClassType::New("Android.Fallbacks.Android_android_location_LocationListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onLocationChanged = (void(*)(uObject*, ::g::Android::android::location::Location*))Android_android_location_LocationListener__onLocationChanged_fn;
    type->interface2.fp_onStatusChanged = (void(*)(uObject*, ::g::Android::java::lang::String*, int*, ::g::Android::android::os::Bundle*))Android_android_location_LocationListener__onStatusChanged_fn;
    type->interface2.fp_onProviderEnabled = (void(*)(uObject*, ::g::Android::java::lang::String*))Android_android_location_LocationListener__onProviderEnabled_fn;
    type->interface2.fp_onProviderDisabled = (void(*)(uObject*, ::g::Android::java::lang::String*))Android_android_location_LocationListener__onProviderDisabled_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_location_LocationListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_location_LocationListener_type, interface1),
        ::g::Android::android::location::LocationListener_typeof(), offsetof(Android_android_location_LocationListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_location_LocationListener::onLocationChanged_8298_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_location_LocationListener::onProviderDisabled_8301_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_location_LocationListener::onProviderEnabled_8300_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_location_LocationListener::onStatusChanged_8299_ID_, uFieldFlagsStatic);
    return type;
}

// public void onLocationChanged(Android.android.location.Location arg0) :27888
void Android_android_location_LocationListener__onLocationChanged_fn(Android_android_location_LocationListener* __this, ::g::Android::android::location::Location* arg0)
{
    __this->onLocationChanged(arg0);
}

// public static extern void onLocationChanged_IMPL_8298(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27910
void Android_android_location_LocationListener__onLocationChanged_IMPL_8298_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_location_LocationListener::onLocationChanged_IMPL_8298(*arg0_, *arg1_, arg2_);
}

// public void onProviderDisabled(Android.java.lang.String arg0) :27903
void Android_android_location_LocationListener__onProviderDisabled_fn(Android_android_location_LocationListener* __this, ::g::Android::java::lang::String* arg0)
{
    __this->onProviderDisabled(arg0);
}

// public static extern void onProviderDisabled_IMPL_8301(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27919
void Android_android_location_LocationListener__onProviderDisabled_IMPL_8301_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_location_LocationListener::onProviderDisabled_IMPL_8301(*arg0_, *arg1_, arg2_);
}

// public void onProviderEnabled(Android.java.lang.String arg0) :27898
void Android_android_location_LocationListener__onProviderEnabled_fn(Android_android_location_LocationListener* __this, ::g::Android::java::lang::String* arg0)
{
    __this->onProviderEnabled(arg0);
}

// public static extern void onProviderEnabled_IMPL_8300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27916
void Android_android_location_LocationListener__onProviderEnabled_IMPL_8300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_location_LocationListener::onProviderEnabled_IMPL_8300(*arg0_, *arg1_, arg2_);
}

// public void onStatusChanged(Android.java.lang.String arg0, int arg1, Android.android.os.Bundle arg2) :27893
void Android_android_location_LocationListener__onStatusChanged_fn(Android_android_location_LocationListener* __this, ::g::Android::java::lang::String* arg0, int* arg1, ::g::Android::android::os::Bundle* arg2)
{
    __this->onStatusChanged(arg0, *arg1, arg2);
}

// public static extern void onStatusChanged_IMPL_8299(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :27913
void Android_android_location_LocationListener__onStatusChanged_IMPL_8299_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_)
{
    Android_android_location_LocationListener::onStatusChanged_IMPL_8299(*arg0_, *arg1_, arg2_, *arg3_, arg4_);
}

jmethodID Android_android_location_LocationListener::onLocationChanged_8298_ID_;
jmethodID Android_android_location_LocationListener::onProviderDisabled_8301_ID_;
jmethodID Android_android_location_LocationListener::onProviderEnabled_8300_ID_;
jmethodID Android_android_location_LocationListener::onStatusChanged_8299_ID_;

// public void onLocationChanged(Android.android.location.Location arg0) [instance] :27888
void Android_android_location_LocationListener::onLocationChanged(::g::Android::android::location::Location* arg0)
{
    Android_android_location_LocationListener::onLocationChanged_IMPL_8298(_subclassed, _javaObject, (uObject*)arg0);
}

// public void onProviderDisabled(Android.java.lang.String arg0) [instance] :27903
void Android_android_location_LocationListener::onProviderDisabled(::g::Android::java::lang::String* arg0)
{
    Android_android_location_LocationListener::onProviderDisabled_IMPL_8301(_subclassed, _javaObject, (uObject*)arg0);
}

// public void onProviderEnabled(Android.java.lang.String arg0) [instance] :27898
void Android_android_location_LocationListener::onProviderEnabled(::g::Android::java::lang::String* arg0)
{
    Android_android_location_LocationListener::onProviderEnabled_IMPL_8300(_subclassed, _javaObject, (uObject*)arg0);
}

// public void onStatusChanged(Android.java.lang.String arg0, int arg1, Android.android.os.Bundle arg2) [instance] :27893
void Android_android_location_LocationListener::onStatusChanged(::g::Android::java::lang::String* arg0, int arg1, ::g::Android::android::os::Bundle* arg2)
{
    Android_android_location_LocationListener::onStatusChanged_IMPL_8299(_subclassed, _javaObject, (uObject*)arg0, arg1, (uObject*)arg2);
}

// public static extern void onLocationChanged_IMPL_8298(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27910
void Android_android_location_LocationListener::onLocationChanged_IMPL_8298(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_location_LocationListener::onLocationChanged_8298_ID(),"android/location/LocationListener","onLocationChanged","(Landroid/location/Location;)V",GetMethodID,"Id for fallback method android.location.LocationListener.onLocationChanged could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_location_LocationListener::onLocationChanged_8298_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onProviderDisabled_IMPL_8301(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27919
void Android_android_location_LocationListener::onProviderDisabled_IMPL_8301(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_location_LocationListener::onProviderDisabled_8301_ID(),"android/location/LocationListener","onProviderDisabled","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.location.LocationListener.onProviderDisabled could not be cached",95);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_location_LocationListener::onProviderDisabled_8301_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onProviderEnabled_IMPL_8300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27916
void Android_android_location_LocationListener::onProviderEnabled_IMPL_8300(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_location_LocationListener::onProviderEnabled_8300_ID(),"android/location/LocationListener","onProviderEnabled","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.location.LocationListener.onProviderEnabled could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_location_LocationListener::onProviderEnabled_8300_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onStatusChanged_IMPL_8299(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :27913
void Android_android_location_LocationListener::onStatusChanged_IMPL_8299(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_location_LocationListener::onStatusChanged_8299_ID(),"android/location/LocationListener","onStatusChanged","(Ljava/lang/String;ILandroid/os/Bundle;)V",GetMethodID,"Id for fallback method android.location.LocationListener.onStatusChanged could not be cached",92);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_location_LocationListener::onStatusChanged_8299_ID(), _obArg2, ((jint)arg3_), _obArg4);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(28017)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_media_AudioManagerDLROnAudioFocusChangeListener :28017
// {
Android_android_media_AudioManagerDLROnAudioFocusChangeListener_type* Android_android_media_AudioManagerDLROnAudioFocusChangeListener_typeof()
{
    static uSStrong<Android_android_media_AudioManagerDLROnAudioFocusChangeListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_media_AudioManagerDLROnAudioFocusChangeListener);
    options.TypeSize = sizeof(Android_android_media_AudioManagerDLROnAudioFocusChangeListener_type);
    type = (Android_android_media_AudioManagerDLROnAudioFocusChangeListener_type*)uClassType::New("Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioFocusChangeListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onAudioFocusChange = (void(*)(uObject*, int*))Android_android_media_AudioManagerDLROnAudioFocusChangeListener__onAudioFocusChange_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_media_AudioManagerDLROnAudioFocusChangeListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_media_AudioManagerDLROnAudioFocusChangeListener_type, interface1),
        ::g::Android::android::media::AudioManagerDLROnAudioFocusChangeListener_typeof(), offsetof(Android_android_media_AudioManagerDLROnAudioFocusChangeListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_media_AudioManagerDLROnAudioFocusChangeListener::onAudioFocusChange_8685_ID_, uFieldFlagsStatic);
    return type;
}

// public void onAudioFocusChange(int arg0) :28020
void Android_android_media_AudioManagerDLROnAudioFocusChangeListener__onAudioFocusChange_fn(Android_android_media_AudioManagerDLROnAudioFocusChangeListener* __this, int* arg0)
{
    __this->onAudioFocusChange(*arg0);
}

// public static extern void onAudioFocusChange_IMPL_8685(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :28027
void Android_android_media_AudioManagerDLROnAudioFocusChangeListener__onAudioFocusChange_IMPL_8685_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_media_AudioManagerDLROnAudioFocusChangeListener::onAudioFocusChange_IMPL_8685(*arg0_, *arg1_, *arg2_);
}

jmethodID Android_android_media_AudioManagerDLROnAudioFocusChangeListener::onAudioFocusChange_8685_ID_;

// public void onAudioFocusChange(int arg0) [instance] :28020
void Android_android_media_AudioManagerDLROnAudioFocusChangeListener::onAudioFocusChange(int arg0)
{
    Android_android_media_AudioManagerDLROnAudioFocusChangeListener::onAudioFocusChange_IMPL_8685(_subclassed, _javaObject, arg0);
}

// public static extern void onAudioFocusChange_IMPL_8685(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :28027
void Android_android_media_AudioManagerDLROnAudioFocusChangeListener::onAudioFocusChange_IMPL_8685(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_media_AudioManagerDLROnAudioFocusChangeListener::onAudioFocusChange_8685_ID(),"android/media/AudioManager$OnAudioFocusChangeListener","onAudioFocusChange","(I)V",GetMethodID,"Id for fallback method android.media.AudioManager$OnAudioFocusChangeListener.onAudioFocusChange could not be cached",115);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_media_AudioManagerDLROnAudioFocusChangeListener::onAudioFocusChange_8685_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(28239)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_media_MediaPlayerDLROnCompletionListener :28239
// {
Android_android_media_MediaPlayerDLROnCompletionListener_type* Android_android_media_MediaPlayerDLROnCompletionListener_typeof()
{
    static uSStrong<Android_android_media_MediaPlayerDLROnCompletionListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_media_MediaPlayerDLROnCompletionListener);
    options.TypeSize = sizeof(Android_android_media_MediaPlayerDLROnCompletionListener_type);
    type = (Android_android_media_MediaPlayerDLROnCompletionListener_type*)uClassType::New("Android.Fallbacks.Android_android_media_MediaPlayerDLROnCompletionListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onCompletion = (void(*)(uObject*, ::g::Android::android::media::MediaPlayer*))Android_android_media_MediaPlayerDLROnCompletionListener__onCompletion_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_media_MediaPlayerDLROnCompletionListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_media_MediaPlayerDLROnCompletionListener_type, interface1),
        ::g::Android::android::media::MediaPlayerDLROnCompletionListener_typeof(), offsetof(Android_android_media_MediaPlayerDLROnCompletionListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_media_MediaPlayerDLROnCompletionListener::onCompletion_9437_ID_, uFieldFlagsStatic);
    return type;
}

// public void onCompletion(Android.android.media.MediaPlayer arg0) :28242
void Android_android_media_MediaPlayerDLROnCompletionListener__onCompletion_fn(Android_android_media_MediaPlayerDLROnCompletionListener* __this, ::g::Android::android::media::MediaPlayer* arg0)
{
    __this->onCompletion(arg0);
}

// public static extern void onCompletion_IMPL_9437(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :28249
void Android_android_media_MediaPlayerDLROnCompletionListener__onCompletion_IMPL_9437_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_media_MediaPlayerDLROnCompletionListener::onCompletion_IMPL_9437(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_media_MediaPlayerDLROnCompletionListener::onCompletion_9437_ID_;

// public void onCompletion(Android.android.media.MediaPlayer arg0) [instance] :28242
void Android_android_media_MediaPlayerDLROnCompletionListener::onCompletion(::g::Android::android::media::MediaPlayer* arg0)
{
    Android_android_media_MediaPlayerDLROnCompletionListener::onCompletion_IMPL_9437(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern void onCompletion_IMPL_9437(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :28249
void Android_android_media_MediaPlayerDLROnCompletionListener::onCompletion_IMPL_9437(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_media_MediaPlayerDLROnCompletionListener::onCompletion_9437_ID(),"android/media/MediaPlayer$OnCompletionListener","onCompletion","(Landroid/media/MediaPlayer;)V",GetMethodID,"Id for fallback method android.media.MediaPlayer$OnCompletionListener.onCompletion could not be cached",102);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_media_MediaPlayerDLROnCompletionListener::onCompletion_9437_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(28265)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_media_MediaPlayerDLROnErrorListener :28265
// {
Android_android_media_MediaPlayerDLROnErrorListener_type* Android_android_media_MediaPlayerDLROnErrorListener_typeof()
{
    static uSStrong<Android_android_media_MediaPlayerDLROnErrorListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_media_MediaPlayerDLROnErrorListener);
    options.TypeSize = sizeof(Android_android_media_MediaPlayerDLROnErrorListener_type);
    type = (Android_android_media_MediaPlayerDLROnErrorListener_type*)uClassType::New("Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onError = (void(*)(uObject*, ::g::Android::android::media::MediaPlayer*, int*, int*, bool*))Android_android_media_MediaPlayerDLROnErrorListener__onError_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_media_MediaPlayerDLROnErrorListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_media_MediaPlayerDLROnErrorListener_type, interface1),
        ::g::Android::android::media::MediaPlayerDLROnErrorListener_typeof(), offsetof(Android_android_media_MediaPlayerDLROnErrorListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_media_MediaPlayerDLROnErrorListener::onError_9438_ID_, uFieldFlagsStatic);
    return type;
}

// public bool onError(Android.android.media.MediaPlayer arg0, int arg1, int arg2) :28268
void Android_android_media_MediaPlayerDLROnErrorListener__onError_fn(Android_android_media_MediaPlayerDLROnErrorListener* __this, ::g::Android::android::media::MediaPlayer* arg0, int* arg1, int* arg2, bool* __retval)
{
    *__retval = __this->onError(arg0, *arg1, *arg2);
}

// public static extern bool onError_IMPL_9438(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) :28275
void Android_android_media_MediaPlayerDLROnErrorListener__onError_IMPL_9438_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, bool* __retval)
{
    *__retval = Android_android_media_MediaPlayerDLROnErrorListener::onError_IMPL_9438(*arg0_, *arg1_, arg2_, *arg3_, *arg4_);
}

jmethodID Android_android_media_MediaPlayerDLROnErrorListener::onError_9438_ID_;

// public bool onError(Android.android.media.MediaPlayer arg0, int arg1, int arg2) [instance] :28268
bool Android_android_media_MediaPlayerDLROnErrorListener::onError(::g::Android::android::media::MediaPlayer* arg0, int arg1, int arg2)
{
    return Android_android_media_MediaPlayerDLROnErrorListener::onError_IMPL_9438(_subclassed, _javaObject, (uObject*)arg0, arg1, arg2);
}

// public static extern bool onError_IMPL_9438(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) [static] :28275
bool Android_android_media_MediaPlayerDLROnErrorListener::onError_IMPL_9438(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_media_MediaPlayerDLROnErrorListener::onError_9438_ID(),"android/media/MediaPlayer$OnErrorListener","onError","(Landroid/media/MediaPlayer;II)Z",GetMethodID,"Id for fallback method android.media.MediaPlayer$OnErrorListener.onError could not be cached",92);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_media_MediaPlayerDLROnErrorListener::onError_9438_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(28317)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_media_MediaPlayerDLROnPreparedListener :28317
// {
Android_android_media_MediaPlayerDLROnPreparedListener_type* Android_android_media_MediaPlayerDLROnPreparedListener_typeof()
{
    static uSStrong<Android_android_media_MediaPlayerDLROnPreparedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_media_MediaPlayerDLROnPreparedListener);
    options.TypeSize = sizeof(Android_android_media_MediaPlayerDLROnPreparedListener_type);
    type = (Android_android_media_MediaPlayerDLROnPreparedListener_type*)uClassType::New("Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onPrepared = (void(*)(uObject*, ::g::Android::android::media::MediaPlayer*))Android_android_media_MediaPlayerDLROnPreparedListener__onPrepared_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_media_MediaPlayerDLROnPreparedListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_media_MediaPlayerDLROnPreparedListener_type, interface1),
        ::g::Android::android::media::MediaPlayerDLROnPreparedListener_typeof(), offsetof(Android_android_media_MediaPlayerDLROnPreparedListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_media_MediaPlayerDLROnPreparedListener::onPrepared_9440_ID_, uFieldFlagsStatic);
    return type;
}

// public void onPrepared(Android.android.media.MediaPlayer arg0) :28320
void Android_android_media_MediaPlayerDLROnPreparedListener__onPrepared_fn(Android_android_media_MediaPlayerDLROnPreparedListener* __this, ::g::Android::android::media::MediaPlayer* arg0)
{
    __this->onPrepared(arg0);
}

// public static extern void onPrepared_IMPL_9440(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :28327
void Android_android_media_MediaPlayerDLROnPreparedListener__onPrepared_IMPL_9440_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_media_MediaPlayerDLROnPreparedListener::onPrepared_IMPL_9440(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_media_MediaPlayerDLROnPreparedListener::onPrepared_9440_ID_;

// public void onPrepared(Android.android.media.MediaPlayer arg0) [instance] :28320
void Android_android_media_MediaPlayerDLROnPreparedListener::onPrepared(::g::Android::android::media::MediaPlayer* arg0)
{
    Android_android_media_MediaPlayerDLROnPreparedListener::onPrepared_IMPL_9440(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern void onPrepared_IMPL_9440(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :28327
void Android_android_media_MediaPlayerDLROnPreparedListener::onPrepared_IMPL_9440(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_media_MediaPlayerDLROnPreparedListener::onPrepared_9440_ID(),"android/media/MediaPlayer$OnPreparedListener","onPrepared","(Landroid/media/MediaPlayer;)V",GetMethodID,"Id for fallback method android.media.MediaPlayer$OnPreparedListener.onPrepared could not be cached",98);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_media_MediaPlayerDLROnPreparedListener::onPrepared_9440_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(3621)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_net_Uri :3621
// {
::g::Android::java::lang::Object_type* Android_android_net_Uri_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_net_Uri);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_net_Uri", options);
    type->SetBase(::g::Android::android::net::Uri_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(22441)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_os_IBinder :22441
// {
Android_android_os_IBinder_type* Android_android_os_IBinder_typeof()
{
    static uSStrong<Android_android_os_IBinder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_os_IBinder);
    options.TypeSize = sizeof(Android_android_os_IBinder_type);
    type = (Android_android_os_IBinder_type*)uClassType::New("Android.Fallbacks.Android_android_os_IBinder", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_getInterfaceDescriptor = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_android_os_IBinder__getInterfaceDescriptor_fn;
    type->interface2.fp_pingBinder = (void(*)(uObject*, bool*))Android_android_os_IBinder__pingBinder_fn;
    type->interface2.fp_isBinderAlive = (void(*)(uObject*, bool*))Android_android_os_IBinder__isBinderAlive_fn;
    type->interface2.fp_queryLocalInterface = (void(*)(uObject*, ::g::Android::java::lang::String*, uObject**))Android_android_os_IBinder__queryLocalInterface_fn;
    type->interface2.fp_dump = (void(*)(uObject*, ::g::Android::java::io::FileDescriptor*, ::g::Android::Runtime::ObjectArray*))Android_android_os_IBinder__dump_fn;
    type->interface2.fp_dumpAsync = (void(*)(uObject*, ::g::Android::java::io::FileDescriptor*, ::g::Android::Runtime::ObjectArray*))Android_android_os_IBinder__dumpAsync_fn;
    type->interface2.fp_transact = (void(*)(uObject*, int*, ::g::Android::android::os::Parcel*, ::g::Android::android::os::Parcel*, int*, bool*))Android_android_os_IBinder__transact_fn;
    type->interface2.fp_linkToDeath = (void(*)(uObject*, uObject*, int*))Android_android_os_IBinder__linkToDeath_fn;
    type->interface2.fp_unlinkToDeath = (void(*)(uObject*, uObject*, int*, bool*))Android_android_os_IBinder__unlinkToDeath_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    ::TYPES[5] = ::g::Android::android::os::IInterface_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_os_IBinder_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_os_IBinder_type, interface1),
        ::g::Android::android::os::IBinder_typeof(), offsetof(Android_android_os_IBinder_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_IBinder::dump_13823_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_IBinder::dumpAsync_13824_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_IBinder::getInterfaceDescriptor_13819_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_IBinder::isBinderAlive_13821_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_IBinder::linkToDeath_13826_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_IBinder::pingBinder_13820_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_IBinder::queryLocalInterface_13822_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_IBinder::transact_13825_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_IBinder::unlinkToDeath_13827_ID_, uFieldFlagsStatic);
    return type;
}

// public void dump(Android.java.io.FileDescriptor arg0, Android.Runtime.ObjectArray<Android.java.lang.String> arg1) :22464
void Android_android_os_IBinder__dump_fn(Android_android_os_IBinder* __this, ::g::Android::java::io::FileDescriptor* arg0, ::g::Android::Runtime::ObjectArray* arg1)
{
    __this->dump(arg0, arg1);
}

// public static extern void dump_IMPL_13823(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :22503
void Android_android_os_IBinder__dump_IMPL_13823_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    Android_android_os_IBinder::dump_IMPL_13823(*arg0_, *arg1_, arg2_, arg3_);
}

// public void dumpAsync(Android.java.io.FileDescriptor arg0, Android.Runtime.ObjectArray<Android.java.lang.String> arg1) :22469
void Android_android_os_IBinder__dumpAsync_fn(Android_android_os_IBinder* __this, ::g::Android::java::io::FileDescriptor* arg0, ::g::Android::Runtime::ObjectArray* arg1)
{
    __this->dumpAsync(arg0, arg1);
}

// public static extern void dumpAsync_IMPL_13824(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :22506
void Android_android_os_IBinder__dumpAsync_IMPL_13824_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    Android_android_os_IBinder::dumpAsync_IMPL_13824(*arg0_, *arg1_, arg2_, arg3_);
}

// public Android.java.lang.String getInterfaceDescriptor() :22444
void Android_android_os_IBinder__getInterfaceDescriptor_fn(Android_android_os_IBinder* __this, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getInterfaceDescriptor();
}

// public static extern Android.Base.Wrappers.IJWrapper getInterfaceDescriptor_IMPL_13819(bool arg0, Android.Base.Primitives.ujobject arg1) :22491
void Android_android_os_IBinder__getInterfaceDescriptor_IMPL_13819_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_os_IBinder::getInterfaceDescriptor_IMPL_13819(*arg0_, *arg1_);
}

// public bool isBinderAlive() :22454
void Android_android_os_IBinder__isBinderAlive_fn(Android_android_os_IBinder* __this, bool* __retval)
{
    *__retval = __this->isBinderAlive();
}

// public static extern bool isBinderAlive_IMPL_13821(bool arg0, Android.Base.Primitives.ujobject arg1) :22497
void Android_android_os_IBinder__isBinderAlive_IMPL_13821_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_os_IBinder::isBinderAlive_IMPL_13821(*arg0_, *arg1_);
}

// public void linkToDeath(Android.android.os.IBinderDLRDeathRecipient arg0, int arg1) :22479
void Android_android_os_IBinder__linkToDeath_fn(Android_android_os_IBinder* __this, uObject* arg0, int* arg1)
{
    __this->linkToDeath(arg0, *arg1);
}

// public static extern void linkToDeath_IMPL_13826(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :22512
void Android_android_os_IBinder__linkToDeath_IMPL_13826_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    Android_android_os_IBinder::linkToDeath_IMPL_13826(*arg0_, *arg1_, arg2_, *arg3_);
}

// public bool pingBinder() :22449
void Android_android_os_IBinder__pingBinder_fn(Android_android_os_IBinder* __this, bool* __retval)
{
    *__retval = __this->pingBinder();
}

// public static extern bool pingBinder_IMPL_13820(bool arg0, Android.Base.Primitives.ujobject arg1) :22494
void Android_android_os_IBinder__pingBinder_IMPL_13820_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_os_IBinder::pingBinder_IMPL_13820(*arg0_, *arg1_);
}

// public Android.android.os.IInterface queryLocalInterface(Android.java.lang.String arg0) :22459
void Android_android_os_IBinder__queryLocalInterface_fn(Android_android_os_IBinder* __this, ::g::Android::java::lang::String* arg0, uObject** __retval)
{
    *__retval = __this->queryLocalInterface(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper queryLocalInterface_IMPL_13822(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :22500
void Android_android_os_IBinder__queryLocalInterface_IMPL_13822_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_os_IBinder::queryLocalInterface_IMPL_13822(*arg0_, *arg1_, arg2_);
}

// public bool transact(int arg0, Android.android.os.Parcel arg1, Android.android.os.Parcel arg2, int arg3) :22474
void Android_android_os_IBinder__transact_fn(Android_android_os_IBinder* __this, int* arg0, ::g::Android::android::os::Parcel* arg1, ::g::Android::android::os::Parcel* arg2, int* arg3, bool* __retval)
{
    *__retval = __this->transact(*arg0, arg1, arg2, *arg3);
}

// public static extern bool transact_IMPL_13825(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5) :22509
void Android_android_os_IBinder__transact_IMPL_13825_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, uObject* arg4_, int* arg5_, bool* __retval)
{
    *__retval = Android_android_os_IBinder::transact_IMPL_13825(*arg0_, *arg1_, *arg2_, arg3_, arg4_, *arg5_);
}

// public bool unlinkToDeath(Android.android.os.IBinderDLRDeathRecipient arg0, int arg1) :22484
void Android_android_os_IBinder__unlinkToDeath_fn(Android_android_os_IBinder* __this, uObject* arg0, int* arg1, bool* __retval)
{
    *__retval = __this->unlinkToDeath(arg0, *arg1);
}

// public static extern bool unlinkToDeath_IMPL_13827(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :22515
void Android_android_os_IBinder__unlinkToDeath_IMPL_13827_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval)
{
    *__retval = Android_android_os_IBinder::unlinkToDeath_IMPL_13827(*arg0_, *arg1_, arg2_, *arg3_);
}

jmethodID Android_android_os_IBinder::dump_13823_ID_;
jmethodID Android_android_os_IBinder::dumpAsync_13824_ID_;
jmethodID Android_android_os_IBinder::getInterfaceDescriptor_13819_ID_;
jmethodID Android_android_os_IBinder::isBinderAlive_13821_ID_;
jmethodID Android_android_os_IBinder::linkToDeath_13826_ID_;
jmethodID Android_android_os_IBinder::pingBinder_13820_ID_;
jmethodID Android_android_os_IBinder::queryLocalInterface_13822_ID_;
jmethodID Android_android_os_IBinder::transact_13825_ID_;
jmethodID Android_android_os_IBinder::unlinkToDeath_13827_ID_;

// public void dump(Android.java.io.FileDescriptor arg0, Android.Runtime.ObjectArray<Android.java.lang.String> arg1) [instance] :22464
void Android_android_os_IBinder::dump(::g::Android::java::io::FileDescriptor* arg0, ::g::Android::Runtime::ObjectArray* arg1)
{
    Android_android_os_IBinder::dump_IMPL_13823(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public void dumpAsync(Android.java.io.FileDescriptor arg0, Android.Runtime.ObjectArray<Android.java.lang.String> arg1) [instance] :22469
void Android_android_os_IBinder::dumpAsync(::g::Android::java::io::FileDescriptor* arg0, ::g::Android::Runtime::ObjectArray* arg1)
{
    Android_android_os_IBinder::dumpAsync_IMPL_13824(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public Android.java.lang.String getInterfaceDescriptor() [instance] :22444
::g::Android::java::lang::String* Android_android_os_IBinder::getInterfaceDescriptor()
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_os_IBinder::getInterfaceDescriptor_IMPL_13819(_subclassed, _javaObject), ::TYPES[4/*Android.java.lang.String*/]);
}

// public bool isBinderAlive() [instance] :22454
bool Android_android_os_IBinder::isBinderAlive()
{
    return Android_android_os_IBinder::isBinderAlive_IMPL_13821(_subclassed, _javaObject);
}

// public void linkToDeath(Android.android.os.IBinderDLRDeathRecipient arg0, int arg1) [instance] :22479
void Android_android_os_IBinder::linkToDeath(uObject* arg0, int arg1)
{
    Android_android_os_IBinder::linkToDeath_IMPL_13826(_subclassed, _javaObject, arg0, arg1);
}

// public bool pingBinder() [instance] :22449
bool Android_android_os_IBinder::pingBinder()
{
    return Android_android_os_IBinder::pingBinder_IMPL_13820(_subclassed, _javaObject);
}

// public Android.android.os.IInterface queryLocalInterface(Android.java.lang.String arg0) [instance] :22459
uObject* Android_android_os_IBinder::queryLocalInterface(::g::Android::java::lang::String* arg0)
{
    return Android_android_os_IBinder::queryLocalInterface_IMPL_13822(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool transact(int arg0, Android.android.os.Parcel arg1, Android.android.os.Parcel arg2, int arg3) [instance] :22474
bool Android_android_os_IBinder::transact(int arg0, ::g::Android::android::os::Parcel* arg1, ::g::Android::android::os::Parcel* arg2, int arg3)
{
    return Android_android_os_IBinder::transact_IMPL_13825(_subclassed, _javaObject, arg0, (uObject*)arg1, (uObject*)arg2, arg3);
}

// public bool unlinkToDeath(Android.android.os.IBinderDLRDeathRecipient arg0, int arg1) [instance] :22484
bool Android_android_os_IBinder::unlinkToDeath(uObject* arg0, int arg1)
{
    return Android_android_os_IBinder::unlinkToDeath_IMPL_13827(_subclassed, _javaObject, arg0, arg1);
}

// public static extern void dump_IMPL_13823(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :22503
void Android_android_os_IBinder::dump_IMPL_13823(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_IBinder::dump_13823_ID(),"android/os/IBinder","dump","(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.os.IBinder.dump could not be cached",66);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_os_IBinder::dump_13823_ID(), _obArg2, _obArg3);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void dumpAsync_IMPL_13824(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :22506
void Android_android_os_IBinder::dumpAsync_IMPL_13824(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_IBinder::dumpAsync_13824_ID(),"android/os/IBinder","dumpAsync","(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.os.IBinder.dumpAsync could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_os_IBinder::dumpAsync_13824_ID(), _obArg2, _obArg3);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper getInterfaceDescriptor_IMPL_13819(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :22491
uObject* Android_android_os_IBinder::getInterfaceDescriptor_IMPL_13819(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_IBinder::getInterfaceDescriptor_13819_ID(),"android/os/IBinder","getInterfaceDescriptor","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.IBinder.getInterfaceDescriptor could not be cached",84);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_os_IBinder::getInterfaceDescriptor_13819_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isBinderAlive_IMPL_13821(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :22497
bool Android_android_os_IBinder::isBinderAlive_IMPL_13821(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_IBinder::isBinderAlive_13821_ID(),"android/os/IBinder","isBinderAlive","()Z",GetMethodID,"Id for fallback method android.os.IBinder.isBinderAlive could not be cached",75);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_os_IBinder::isBinderAlive_13821_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void linkToDeath_IMPL_13826(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :22512
void Android_android_os_IBinder::linkToDeath_IMPL_13826(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_IBinder::linkToDeath_13826_ID(),"android/os/IBinder","linkToDeath","(Landroid/os/IBinder$DeathRecipient;I)V",GetMethodID,"Id for fallback method android.os.IBinder.linkToDeath could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_os_IBinder::linkToDeath_13826_ID(), _obArg2, ((jint)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool pingBinder_IMPL_13820(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :22494
bool Android_android_os_IBinder::pingBinder_IMPL_13820(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_IBinder::pingBinder_13820_ID(),"android/os/IBinder","pingBinder","()Z",GetMethodID,"Id for fallback method android.os.IBinder.pingBinder could not be cached",72);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_os_IBinder::pingBinder_13820_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper queryLocalInterface_IMPL_13822(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :22500
uObject* Android_android_os_IBinder::queryLocalInterface_IMPL_13822(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_IBinder::queryLocalInterface_13822_ID(),"android/os/IBinder","queryLocalInterface","(Ljava/lang/String;)Landroid/os/IInterface;",GetMethodID,"Id for fallback method android.os.IBinder.queryLocalInterface could not be cached",81);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_os_IBinder::queryLocalInterface_13822_ID(), _obArg2),result,::g::Android::Fallbacks::Android_android_os_IInterface_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool transact_IMPL_13825(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5) [static] :22509
bool Android_android_os_IBinder::transact_IMPL_13825(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_, uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_IBinder::transact_13825_ID(),"android/os/IBinder","transact","(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z",GetMethodID,"Id for fallback method android.os.IBinder.transact could not be cached",70);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_os_IBinder::transact_13825_ID(), ((jint)arg2_), _obArg3, _obArg4, ((jint)arg5_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool unlinkToDeath_IMPL_13827(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :22515
bool Android_android_os_IBinder::unlinkToDeath_IMPL_13827(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_IBinder::unlinkToDeath_13827_ID(),"android/os/IBinder","unlinkToDeath","(Landroid/os/IBinder$DeathRecipient;I)Z",GetMethodID,"Id for fallback method android.os.IBinder.unlinkToDeath could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_os_IBinder::unlinkToDeath_13827_ID(), _obArg2, ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(22415)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_os_IBinderDLRDeathRecipient :22415
// {
Android_android_os_IBinderDLRDeathRecipient_type* Android_android_os_IBinderDLRDeathRecipient_typeof()
{
    static uSStrong<Android_android_os_IBinderDLRDeathRecipient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_os_IBinderDLRDeathRecipient);
    options.TypeSize = sizeof(Android_android_os_IBinderDLRDeathRecipient_type);
    type = (Android_android_os_IBinderDLRDeathRecipient_type*)uClassType::New("Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_binderDied = (void(*)(uObject*))Android_android_os_IBinderDLRDeathRecipient__binderDied_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_os_IBinderDLRDeathRecipient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_os_IBinderDLRDeathRecipient_type, interface1),
        ::g::Android::android::os::IBinderDLRDeathRecipient_typeof(), offsetof(Android_android_os_IBinderDLRDeathRecipient_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_IBinderDLRDeathRecipient::binderDied_13818_ID_, uFieldFlagsStatic);
    return type;
}

// public void binderDied() :22418
void Android_android_os_IBinderDLRDeathRecipient__binderDied_fn(Android_android_os_IBinderDLRDeathRecipient* __this)
{
    __this->binderDied();
}

// public static extern void binderDied_IMPL_13818(bool arg0, Android.Base.Primitives.ujobject arg1) :22425
void Android_android_os_IBinderDLRDeathRecipient__binderDied_IMPL_13818_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_os_IBinderDLRDeathRecipient::binderDied_IMPL_13818(*arg0_, *arg1_);
}

jmethodID Android_android_os_IBinderDLRDeathRecipient::binderDied_13818_ID_;

// public void binderDied() [instance] :22418
void Android_android_os_IBinderDLRDeathRecipient::binderDied()
{
    Android_android_os_IBinderDLRDeathRecipient::binderDied_IMPL_13818(_subclassed, _javaObject);
}

// public static extern void binderDied_IMPL_13818(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :22425
void Android_android_os_IBinderDLRDeathRecipient::binderDied_IMPL_13818(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_IBinderDLRDeathRecipient::binderDied_13818_ID(),"android/os/IBinder$DeathRecipient","binderDied","()V",GetMethodID,"Id for fallback method android.os.IBinder$DeathRecipient.binderDied could not be cached",87);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_os_IBinderDLRDeathRecipient::binderDied_13818_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(22531)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_os_IInterface :22531
// {
Android_android_os_IInterface_type* Android_android_os_IInterface_typeof()
{
    static uSStrong<Android_android_os_IInterface_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_os_IInterface);
    options.TypeSize = sizeof(Android_android_os_IInterface_type);
    type = (Android_android_os_IInterface_type*)uClassType::New("Android.Fallbacks.Android_android_os_IInterface", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_asBinder = (void(*)(uObject*, uObject**))Android_android_os_IInterface__asBinder_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[6] = ::g::Android::android::os::IBinder_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_os_IInterface_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_os_IInterface_type, interface1),
        ::g::Android::android::os::IInterface_typeof(), offsetof(Android_android_os_IInterface_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_IInterface::asBinder_13836_ID_, uFieldFlagsStatic);
    return type;
}

// public Android.android.os.IBinder asBinder() :22534
void Android_android_os_IInterface__asBinder_fn(Android_android_os_IInterface* __this, uObject** __retval)
{
    *__retval = __this->asBinder();
}

// public static extern Android.Base.Wrappers.IJWrapper asBinder_IMPL_13836(bool arg0, Android.Base.Primitives.ujobject arg1) :22541
void Android_android_os_IInterface__asBinder_IMPL_13836_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_os_IInterface::asBinder_IMPL_13836(*arg0_, *arg1_);
}

jmethodID Android_android_os_IInterface::asBinder_13836_ID_;

// public Android.android.os.IBinder asBinder() [instance] :22534
uObject* Android_android_os_IInterface::asBinder()
{
    return Android_android_os_IInterface::asBinder_IMPL_13836(_subclassed, _javaObject);
}

// public static extern Android.Base.Wrappers.IJWrapper asBinder_IMPL_13836(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :22541
uObject* Android_android_os_IInterface::asBinder_IMPL_13836(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_IInterface::asBinder_13836_ID(),"android/os/IInterface","asBinder","()Landroid/os/IBinder;",GetMethodID,"Id for fallback method android.os.IInterface.asBinder could not be cached",73);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_os_IInterface::asBinder_13836_ID()),result,::g::Android::Fallbacks::Android_android_os_IBinder_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(2833)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_os_Vibrator :2833
// {
::g::Android::android::os::Vibrator_type* Android_android_os_Vibrator_typeof()
{
    static uSStrong< ::g::Android::android::os::Vibrator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_os_Vibrator);
    options.TypeSize = sizeof(::g::Android::android::os::Vibrator_type);
    type = (::g::Android::android::os::Vibrator_type*)uClassType::New("Android.Fallbacks.Android_android_os_Vibrator", options);
    type->SetBase(::g::Android::android::os::Vibrator_typeof());
    type->fp_vibrate1 = (void(*)(::g::Android::android::os::Vibrator*, int64_t*))Android_android_os_Vibrator__vibrate1_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::os::Vibrator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::os::Vibrator_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_os_Vibrator::vibrate_44559_ID_, uFieldFlagsStatic);
    return type;
}

// public override sealed void vibrate(long arg0) :2841
void Android_android_os_Vibrator__vibrate1_fn(Android_android_os_Vibrator* __this, int64_t* arg0)
{
    int64_t arg0_ = *arg0;
    Android_android_os_Vibrator::vibrate_IMPL_44559(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void vibrate_IMPL_44559(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2) :2861
void Android_android_os_Vibrator__vibrate_IMPL_44559_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_)
{
    Android_android_os_Vibrator::vibrate_IMPL_44559(*arg0_, *arg1_, *arg2_);
}

jmethodID Android_android_os_Vibrator::vibrate_44559_ID_;

// public static extern void vibrate_IMPL_44559(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2) [static] :2861
void Android_android_os_Vibrator::vibrate_IMPL_44559(bool arg0_, jobject arg1_, int64_t arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_os_Vibrator::vibrate_44559_ID(),"android/os/Vibrator","vibrate","(J)V",GetMethodID,"Id for fallback method android.os.Vibrator.vibrate could not be cached",70);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_os_Vibrator::vibrate_44559_ID(), ((jlong)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(26485)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_text_Editable :26485
// {
Android_android_text_Editable_type* Android_android_text_Editable_typeof()
{
    static uSStrong<Android_android_text_Editable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Android_android_text_Editable);
    options.TypeSize = sizeof(Android_android_text_Editable_type);
    type = (Android_android_text_Editable_type*)uClassType::New("Android.Fallbacks.Android_android_text_Editable", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Android_android_text_Editable__toString_fn;
    type->interface2.fp_replace1 = (void(*)(uObject*, int*, int*, uObject*, int*, int*, uObject**))Android_android_text_Editable__replace1_fn;
    type->interface2.fp_replace = (void(*)(uObject*, int*, int*, uObject*, uObject**))Android_android_text_Editable__replace_fn;
    type->interface2.fp_insert1 = (void(*)(uObject*, int*, uObject*, int*, int*, uObject**))Android_android_text_Editable__insert1_fn;
    type->interface2.fp_insert = (void(*)(uObject*, int*, uObject*, uObject**))Android_android_text_Editable__insert_fn;
    type->interface2.fp_j_delete = (void(*)(uObject*, int*, int*, uObject**))Android_android_text_Editable__j_delete_fn;
    type->interface2.fp_append = (void(*)(uObject*, uObject*, uObject**))Android_android_text_Editable__append_fn;
    type->interface2.fp_append1 = (void(*)(uObject*, uObject*, int*, int*, uObject**))Android_android_text_Editable__append1_fn;
    type->interface2.fp_append2 = (void(*)(uObject*, uChar*, uObject**))Android_android_text_Editable__append2_fn;
    type->interface2.fp_clear = (void(*)(uObject*))Android_android_text_Editable__clear_fn;
    type->interface2.fp_clearSpans = (void(*)(uObject*))Android_android_text_Editable__clearSpans_fn;
    type->interface2.fp_setFilters = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*))Android_android_text_Editable__setFilters_fn;
    type->interface2.fp_getFilters = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))Android_android_text_Editable__getFilters_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_length = (void(*)(uObject*, int*))Android_android_text_Editable__length_fn;
    type->interface3.fp_charAt = (void(*)(uObject*, int*, uChar*))Android_android_text_Editable__charAt_fn;
    type->interface3.fp_subSequence = (void(*)(uObject*, int*, int*, uObject**))Android_android_text_Editable__subSequence_fn;
    type->interface3.fp_toString = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_android_text_Editable__toString_fn;
    type->interface4.fp_getChars = (void(*)(uObject*, int*, int*, ::g::Android::Runtime::CharArray*, int*))Android_android_text_Editable__getChars_fn;
    type->interface5.fp_setSpan = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*, int*, int*))Android_android_text_Editable__setSpan_fn;
    type->interface5.fp_removeSpan = (void(*)(uObject*, ::g::Android::java::lang::Object*))Android_android_text_Editable__removeSpan_fn;
    type->interface6.fp_getSpans = (void(*)(uObject*, int*, int*, ::g::Android::java::lang::Class*, ::g::Android::Runtime::ObjectArray**))Android_android_text_Editable__getSpans_fn;
    type->interface6.fp_getSpanStart = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_android_text_Editable__getSpanStart_fn;
    type->interface6.fp_getSpanEnd = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_android_text_Editable__getSpanEnd_fn;
    type->interface6.fp_getSpanFlags = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_android_text_Editable__getSpanFlags_fn;
    type->interface6.fp_nextSpanTransition = (void(*)(uObject*, int*, int*, ::g::Android::java::lang::Class*, int*))Android_android_text_Editable__nextSpanTransition_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[7] = ::g::Android::android::text::Editable_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[8] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::android::text::InputFilter_typeof());
    ::TYPES[9] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[10] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_text_Editable_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_text_Editable_type, interface1),
        ::g::Android::android::text::Editable_typeof(), offsetof(Android_android_text_Editable_type, interface2),
        ::g::Android::java::lang::CharSequence_typeof(), offsetof(Android_android_text_Editable_type, interface3),
        ::g::Android::android::text::GetChars_typeof(), offsetof(Android_android_text_Editable_type, interface4),
        ::g::Android::android::text::Spannable_typeof(), offsetof(Android_android_text_Editable_type, interface5),
        ::g::Android::android::text::Spanned_typeof(), offsetof(Android_android_text_Editable_type, interface6));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::append_19826_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::append_19827_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::append_19828_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::charAt_30511_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::clear_19829_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::clearSpans_19830_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::getChars_19833_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::getFilters_19832_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::getSpanEnd_20038_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::getSpanFlags_20039_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::getSpans_20036_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::getSpanStart_20037_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::insert_19823_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::insert_19824_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::j_delete_19825_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::length_30510_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::nextSpanTransition_20040_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::removeSpan_19987_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::replace_19821_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::replace_19822_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::setFilters_19831_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::setSpan_19986_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::subSequence_30512_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Editable::toString_30513_ID_, uFieldFlagsStatic);
    return type;
}

// public Android.android.text.Editable append(Android.java.lang.CharSequence arg0) :26513
void Android_android_text_Editable__append_fn(Android_android_text_Editable* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->append(arg0);
}

// public Android.android.text.Editable append(Android.java.lang.CharSequence arg0, int arg1, int arg2) :26518
void Android_android_text_Editable__append1_fn(Android_android_text_Editable* __this, uObject* arg0, int* arg1, int* arg2, uObject** __retval)
{
    *__retval = __this->append1(arg0, *arg1, *arg2);
}

// public Android.android.text.Editable append(char arg0) :26523
void Android_android_text_Editable__append2_fn(Android_android_text_Editable* __this, uChar* arg0, uObject** __retval)
{
    *__retval = __this->append2(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper append_IMPL_19826(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :26640
void Android_android_text_Editable__append_IMPL_19826_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::append_IMPL_19826(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper append_IMPL_19827(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) :26643
void Android_android_text_Editable__append_IMPL_19827_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::append_IMPL_19827(*arg0_, *arg1_, arg2_, *arg3_, *arg4_);
}

// public static extern Android.Base.Wrappers.IJWrapper append_IMPL_19828(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2) :26646
void Android_android_text_Editable__append_IMPL_19828_fn(bool* arg0_, jobject* arg1_, uChar* arg2_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::append_IMPL_19828(*arg0_, *arg1_, *arg2_);
}

// public char charAt(int arg0) :26553
void Android_android_text_Editable__charAt_fn(Android_android_text_Editable* __this, int* arg0, uChar* __retval)
{
    *__retval = __this->charAt(*arg0);
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :26664
void Android_android_text_Editable__charAt_IMPL_30511_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval)
{
    *__retval = Android_android_text_Editable::charAt_IMPL_30511(*arg0_, *arg1_, *arg2_);
}

// public void clear() :26528
void Android_android_text_Editable__clear_fn(Android_android_text_Editable* __this)
{
    __this->clear();
}

// public static extern void clear_IMPL_19829(bool arg0, Android.Base.Primitives.ujobject arg1) :26649
void Android_android_text_Editable__clear_IMPL_19829_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_text_Editable::clear_IMPL_19829(*arg0_, *arg1_);
}

// public void clearSpans() :26533
void Android_android_text_Editable__clearSpans_fn(Android_android_text_Editable* __this)
{
    __this->clearSpans();
}

// public static extern void clearSpans_IMPL_19830(bool arg0, Android.Base.Primitives.ujobject arg1) :26652
void Android_android_text_Editable__clearSpans_IMPL_19830_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_text_Editable::clearSpans_IMPL_19830(*arg0_, *arg1_);
}

// public void getChars(int arg0, int arg1, Android.Runtime.CharArray arg2, int arg3) :26568
void Android_android_text_Editable__getChars_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, ::g::Android::Runtime::CharArray* arg2, int* arg3)
{
    __this->getChars(*arg0, *arg1, arg2, *arg3);
}

// public static extern void getChars_IMPL_19833(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5) :26673
void Android_android_text_Editable__getChars_IMPL_19833_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, int* arg5_)
{
    Android_android_text_Editable::getChars_IMPL_19833(*arg0_, *arg1_, *arg2_, *arg3_, arg4_, *arg5_);
}

// public Android.Runtime.ObjectArray<Android.android.text.InputFilter> getFilters() :26543
void Android_android_text_Editable__getFilters_fn(Android_android_text_Editable* __this, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->getFilters();
}

// public static extern Android.Base.Wrappers.IJWrapper getFilters_IMPL_19832(bool arg0, Android.Base.Primitives.ujobject arg1) :26658
void Android_android_text_Editable__getFilters_IMPL_19832_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::getFilters_IMPL_19832(*arg0_, *arg1_);
}

// public int getSpanEnd(Android.java.lang.Object arg0) :26593
void Android_android_text_Editable__getSpanEnd_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->getSpanEnd(arg0);
}

// public static extern int getSpanEnd_IMPL_20038(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :26688
void Android_android_text_Editable__getSpanEnd_IMPL_20038_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_android_text_Editable::getSpanEnd_IMPL_20038(*arg0_, *arg1_, arg2_);
}

// public int getSpanFlags(Android.java.lang.Object arg0) :26598
void Android_android_text_Editable__getSpanFlags_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->getSpanFlags(arg0);
}

// public static extern int getSpanFlags_IMPL_20039(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :26691
void Android_android_text_Editable__getSpanFlags_IMPL_20039_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_android_text_Editable::getSpanFlags_IMPL_20039(*arg0_, *arg1_, arg2_);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> getSpans(int arg0, int arg1, Android.java.lang.Class arg2) :26583
void Android_android_text_Editable__getSpans_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, ::g::Android::java::lang::Class* arg2, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->getSpans(*arg0, *arg1, arg2);
}

// public static extern Android.Base.Wrappers.IJWrapper getSpans_IMPL_20036(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :26682
void Android_android_text_Editable__getSpans_IMPL_20036_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::getSpans_IMPL_20036(*arg0_, *arg1_, *arg2_, *arg3_, arg4_);
}

// public int getSpanStart(Android.java.lang.Object arg0) :26588
void Android_android_text_Editable__getSpanStart_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->getSpanStart(arg0);
}

// public static extern int getSpanStart_IMPL_20037(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :26685
void Android_android_text_Editable__getSpanStart_IMPL_20037_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_android_text_Editable::getSpanStart_IMPL_20037(*arg0_, *arg1_, arg2_);
}

// public Android.android.text.Editable insert(int arg0, Android.java.lang.CharSequence arg1) :26503
void Android_android_text_Editable__insert_fn(Android_android_text_Editable* __this, int* arg0, uObject* arg1, uObject** __retval)
{
    *__retval = __this->insert(*arg0, arg1);
}

// public Android.android.text.Editable insert(int arg0, Android.java.lang.CharSequence arg1, int arg2, int arg3) :26498
void Android_android_text_Editable__insert1_fn(Android_android_text_Editable* __this, int* arg0, uObject* arg1, int* arg2, int* arg3, uObject** __retval)
{
    *__retval = __this->insert1(*arg0, arg1, *arg2, *arg3);
}

// public static extern Android.Base.Wrappers.IJWrapper insert_IMPL_19823(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4, int arg5) :26631
void Android_android_text_Editable__insert_IMPL_19823_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, int* arg4_, int* arg5_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::insert_IMPL_19823(*arg0_, *arg1_, *arg2_, arg3_, *arg4_, *arg5_);
}

// public static extern Android.Base.Wrappers.IJWrapper insert_IMPL_19824(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :26634
void Android_android_text_Editable__insert_IMPL_19824_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::insert_IMPL_19824(*arg0_, *arg1_, *arg2_, arg3_);
}

// public Android.android.text.Editable j_delete(int arg0, int arg1) :26508
void Android_android_text_Editable__j_delete_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->j_delete(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper j_delete_IMPL_19825(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :26637
void Android_android_text_Editable__j_delete_IMPL_19825_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::j_delete_IMPL_19825(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public int length() :26548
void Android_android_text_Editable__length_fn(Android_android_text_Editable* __this, int* __retval)
{
    *__retval = __this->length();
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) :26661
void Android_android_text_Editable__length_IMPL_30510_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_text_Editable::length_IMPL_30510(*arg0_, *arg1_);
}

// public int nextSpanTransition(int arg0, int arg1, Android.java.lang.Class arg2) :26603
void Android_android_text_Editable__nextSpanTransition_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, ::g::Android::java::lang::Class* arg2, int* __retval)
{
    *__retval = __this->nextSpanTransition(*arg0, *arg1, arg2);
}

// public static extern int nextSpanTransition_IMPL_20040(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :26694
void Android_android_text_Editable__nextSpanTransition_IMPL_20040_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, int* __retval)
{
    *__retval = Android_android_text_Editable::nextSpanTransition_IMPL_20040(*arg0_, *arg1_, *arg2_, *arg3_, arg4_);
}

// public void removeSpan(Android.java.lang.Object arg0) :26578
void Android_android_text_Editable__removeSpan_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::Object* arg0)
{
    __this->removeSpan(arg0);
}

// public static extern void removeSpan_IMPL_19987(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :26679
void Android_android_text_Editable__removeSpan_IMPL_19987_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_text_Editable::removeSpan_IMPL_19987(*arg0_, *arg1_, arg2_);
}

// public Android.android.text.Editable replace(int arg0, int arg1, Android.java.lang.CharSequence arg2) :26493
void Android_android_text_Editable__replace_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, uObject* arg2, uObject** __retval)
{
    *__retval = __this->replace(*arg0, *arg1, arg2);
}

// public Android.android.text.Editable replace(int arg0, int arg1, Android.java.lang.CharSequence arg2, int arg3, int arg4) :26488
void Android_android_text_Editable__replace1_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, uObject* arg2, int* arg3, int* arg4, uObject** __retval)
{
    *__retval = __this->replace1(*arg0, *arg1, arg2, *arg3, *arg4);
}

// public static extern Android.Base.Wrappers.IJWrapper replace_IMPL_19821(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5, int arg6) :26625
void Android_android_text_Editable__replace_IMPL_19821_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, int* arg5_, int* arg6_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::replace_IMPL_19821(*arg0_, *arg1_, *arg2_, *arg3_, arg4_, *arg5_, *arg6_);
}

// public static extern Android.Base.Wrappers.IJWrapper replace_IMPL_19822(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :26628
void Android_android_text_Editable__replace_IMPL_19822_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::replace_IMPL_19822(*arg0_, *arg1_, *arg2_, *arg3_, arg4_);
}

// public void setFilters(Android.Runtime.ObjectArray<Android.android.text.InputFilter> arg0) :26538
void Android_android_text_Editable__setFilters_fn(Android_android_text_Editable* __this, ::g::Android::Runtime::ObjectArray* arg0)
{
    __this->setFilters(arg0);
}

// public static extern void setFilters_IMPL_19831(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :26655
void Android_android_text_Editable__setFilters_IMPL_19831_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_text_Editable::setFilters_IMPL_19831(*arg0_, *arg1_, arg2_);
}

// public void setSpan(Android.java.lang.Object arg0, int arg1, int arg2, int arg3) :26573
void Android_android_text_Editable__setSpan_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::Object* arg0, int* arg1, int* arg2, int* arg3)
{
    __this->setSpan(arg0, *arg1, *arg2, *arg3);
}

// public static extern void setSpan_IMPL_19986(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) :26676
void Android_android_text_Editable__setSpan_IMPL_19986_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    Android_android_text_Editable::setSpan_IMPL_19986(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, *arg5_);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) :26558
void Android_android_text_Editable__subSequence_fn(Android_android_text_Editable* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subSequence(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :26667
void Android_android_text_Editable__subSequence_IMPL_30512_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::subSequence_IMPL_30512(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public override sealed Android.java.lang.String toString() :26563
void Android_android_text_Editable__toString_fn(Android_android_text_Editable* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Android_android_text_Editable::toString_IMPL_30513(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) :26670
void Android_android_text_Editable__toString_IMPL_30513_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_text_Editable::toString_IMPL_30513(*arg0_, *arg1_);
}

jmethodID Android_android_text_Editable::append_19826_ID_;
jmethodID Android_android_text_Editable::append_19827_ID_;
jmethodID Android_android_text_Editable::append_19828_ID_;
jmethodID Android_android_text_Editable::charAt_30511_ID_;
jmethodID Android_android_text_Editable::clear_19829_ID_;
jmethodID Android_android_text_Editable::clearSpans_19830_ID_;
jmethodID Android_android_text_Editable::getChars_19833_ID_;
jmethodID Android_android_text_Editable::getFilters_19832_ID_;
jmethodID Android_android_text_Editable::getSpanEnd_20038_ID_;
jmethodID Android_android_text_Editable::getSpanFlags_20039_ID_;
jmethodID Android_android_text_Editable::getSpans_20036_ID_;
jmethodID Android_android_text_Editable::getSpanStart_20037_ID_;
jmethodID Android_android_text_Editable::insert_19823_ID_;
jmethodID Android_android_text_Editable::insert_19824_ID_;
jmethodID Android_android_text_Editable::j_delete_19825_ID_;
jmethodID Android_android_text_Editable::length_30510_ID_;
jmethodID Android_android_text_Editable::nextSpanTransition_20040_ID_;
jmethodID Android_android_text_Editable::removeSpan_19987_ID_;
jmethodID Android_android_text_Editable::replace_19821_ID_;
jmethodID Android_android_text_Editable::replace_19822_ID_;
jmethodID Android_android_text_Editable::setFilters_19831_ID_;
jmethodID Android_android_text_Editable::setSpan_19986_ID_;
jmethodID Android_android_text_Editable::subSequence_30512_ID_;
jmethodID Android_android_text_Editable::toString_30513_ID_;

// public Android.android.text.Editable append(Android.java.lang.CharSequence arg0) [instance] :26513
uObject* Android_android_text_Editable::append(uObject* arg0)
{
    return Android_android_text_Editable::append_IMPL_19826(_subclassed, _javaObject, arg0);
}

// public Android.android.text.Editable append(Android.java.lang.CharSequence arg0, int arg1, int arg2) [instance] :26518
uObject* Android_android_text_Editable::append1(uObject* arg0, int arg1, int arg2)
{
    return Android_android_text_Editable::append_IMPL_19827(_subclassed, _javaObject, arg0, arg1, arg2);
}

// public Android.android.text.Editable append(char arg0) [instance] :26523
uObject* Android_android_text_Editable::append2(uChar arg0)
{
    return Android_android_text_Editable::append_IMPL_19828(_subclassed, _javaObject, arg0);
}

// public char charAt(int arg0) [instance] :26553
uChar Android_android_text_Editable::charAt(int arg0)
{
    return Android_android_text_Editable::charAt_IMPL_30511(_subclassed, _javaObject, arg0);
}

// public void clear() [instance] :26528
void Android_android_text_Editable::clear()
{
    Android_android_text_Editable::clear_IMPL_19829(_subclassed, _javaObject);
}

// public void clearSpans() [instance] :26533
void Android_android_text_Editable::clearSpans()
{
    Android_android_text_Editable::clearSpans_IMPL_19830(_subclassed, _javaObject);
}

// public void getChars(int arg0, int arg1, Android.Runtime.CharArray arg2, int arg3) [instance] :26568
void Android_android_text_Editable::getChars(int arg0, int arg1, ::g::Android::Runtime::CharArray* arg2, int arg3)
{
    Android_android_text_Editable::getChars_IMPL_19833(_subclassed, _javaObject, arg0, arg1, (uObject*)arg2, arg3);
}

// public Android.Runtime.ObjectArray<Android.android.text.InputFilter> getFilters() [instance] :26543
::g::Android::Runtime::ObjectArray* Android_android_text_Editable::getFilters()
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_android_text_Editable::getFilters_IMPL_19832(_subclassed, _javaObject), ::TYPES[8/*Android.Runtime.ObjectArray<Android.android.text.InputFilter>*/]);
}

// public int getSpanEnd(Android.java.lang.Object arg0) [instance] :26593
int Android_android_text_Editable::getSpanEnd(::g::Android::java::lang::Object* arg0)
{
    return Android_android_text_Editable::getSpanEnd_IMPL_20038(_subclassed, _javaObject, (uObject*)arg0);
}

// public int getSpanFlags(Android.java.lang.Object arg0) [instance] :26598
int Android_android_text_Editable::getSpanFlags(::g::Android::java::lang::Object* arg0)
{
    return Android_android_text_Editable::getSpanFlags_IMPL_20039(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> getSpans(int arg0, int arg1, Android.java.lang.Class arg2) [instance] :26583
::g::Android::Runtime::ObjectArray* Android_android_text_Editable::getSpans(int arg0, int arg1, ::g::Android::java::lang::Class* arg2)
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_android_text_Editable::getSpans_IMPL_20036(_subclassed, _javaObject, arg0, arg1, (uObject*)arg2), ::TYPES[9/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]);
}

// public int getSpanStart(Android.java.lang.Object arg0) [instance] :26588
int Android_android_text_Editable::getSpanStart(::g::Android::java::lang::Object* arg0)
{
    return Android_android_text_Editable::getSpanStart_IMPL_20037(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.text.Editable insert(int arg0, Android.java.lang.CharSequence arg1) [instance] :26503
uObject* Android_android_text_Editable::insert(int arg0, uObject* arg1)
{
    return Android_android_text_Editable::insert_IMPL_19824(_subclassed, _javaObject, arg0, arg1);
}

// public Android.android.text.Editable insert(int arg0, Android.java.lang.CharSequence arg1, int arg2, int arg3) [instance] :26498
uObject* Android_android_text_Editable::insert1(int arg0, uObject* arg1, int arg2, int arg3)
{
    return Android_android_text_Editable::insert_IMPL_19823(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public Android.android.text.Editable j_delete(int arg0, int arg1) [instance] :26508
uObject* Android_android_text_Editable::j_delete(int arg0, int arg1)
{
    return Android_android_text_Editable::j_delete_IMPL_19825(_subclassed, _javaObject, arg0, arg1);
}

// public int length() [instance] :26548
int Android_android_text_Editable::length()
{
    return Android_android_text_Editable::length_IMPL_30510(_subclassed, _javaObject);
}

// public int nextSpanTransition(int arg0, int arg1, Android.java.lang.Class arg2) [instance] :26603
int Android_android_text_Editable::nextSpanTransition(int arg0, int arg1, ::g::Android::java::lang::Class* arg2)
{
    return Android_android_text_Editable::nextSpanTransition_IMPL_20040(_subclassed, _javaObject, arg0, arg1, (uObject*)arg2);
}

// public void removeSpan(Android.java.lang.Object arg0) [instance] :26578
void Android_android_text_Editable::removeSpan(::g::Android::java::lang::Object* arg0)
{
    Android_android_text_Editable::removeSpan_IMPL_19987(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.text.Editable replace(int arg0, int arg1, Android.java.lang.CharSequence arg2) [instance] :26493
uObject* Android_android_text_Editable::replace(int arg0, int arg1, uObject* arg2)
{
    return Android_android_text_Editable::replace_IMPL_19822(_subclassed, _javaObject, arg0, arg1, arg2);
}

// public Android.android.text.Editable replace(int arg0, int arg1, Android.java.lang.CharSequence arg2, int arg3, int arg4) [instance] :26488
uObject* Android_android_text_Editable::replace1(int arg0, int arg1, uObject* arg2, int arg3, int arg4)
{
    return Android_android_text_Editable::replace_IMPL_19821(_subclassed, _javaObject, arg0, arg1, arg2, arg3, arg4);
}

// public void setFilters(Android.Runtime.ObjectArray<Android.android.text.InputFilter> arg0) [instance] :26538
void Android_android_text_Editable::setFilters(::g::Android::Runtime::ObjectArray* arg0)
{
    Android_android_text_Editable::setFilters_IMPL_19831(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setSpan(Android.java.lang.Object arg0, int arg1, int arg2, int arg3) [instance] :26573
void Android_android_text_Editable::setSpan(::g::Android::java::lang::Object* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_Editable::setSpan_IMPL_19986(_subclassed, _javaObject, (uObject*)arg0, arg1, arg2, arg3);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) [instance] :26558
uObject* Android_android_text_Editable::subSequence(int arg0, int arg1)
{
    return Android_android_text_Editable::subSequence_IMPL_30512(_subclassed, _javaObject, arg0, arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper append_IMPL_19826(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :26640
uObject* Android_android_text_Editable::append_IMPL_19826(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::append_19826_ID(),"android/text/Editable","append","(Ljava/lang/CharSequence;)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.append could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::append_19826_ID(), _obArg2),result,Android_android_text_Editable_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper append_IMPL_19827(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) [static] :26643
uObject* Android_android_text_Editable::append_IMPL_19827(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::append_19827_ID(),"android/text/Editable","append","(Ljava/lang/CharSequence;II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.append could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::append_19827_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_)),result,Android_android_text_Editable_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper append_IMPL_19828(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2) [static] :26646
uObject* Android_android_text_Editable::append_IMPL_19828(bool arg0_, jobject arg1_, uChar arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::append_19828_ID(),"android/text/Editable","append","(C)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.append could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::append_19828_ID(), ((jchar)arg2_)),result,Android_android_text_Editable_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :26664
uChar Android_android_text_Editable::charAt_IMPL_30511(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::charAt_30511_ID(),"android/text/Editable","charAt","(I)C",GetMethodID,"Id for fallback method android.text.Editable.charAt could not be cached",71);
    
    uChar result;
    result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, Android_android_text_Editable::charAt_30511_ID(), ((jint)arg2_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_19829(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :26649
void Android_android_text_Editable::clear_IMPL_19829(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::clear_19829_ID(),"android/text/Editable","clear","()V",GetMethodID,"Id for fallback method android.text.Editable.clear could not be cached",70);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_Editable::clear_19829_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void clearSpans_IMPL_19830(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :26652
void Android_android_text_Editable::clearSpans_IMPL_19830(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::clearSpans_19830_ID(),"android/text/Editable","clearSpans","()V",GetMethodID,"Id for fallback method android.text.Editable.clearSpans could not be cached",75);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_Editable::clearSpans_19830_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void getChars_IMPL_19833(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5) [static] :26673
void Android_android_text_Editable::getChars_IMPL_19833(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::getChars_19833_ID(),"android/text/Editable","getChars","(II[CI)V",GetMethodID,"Id for fallback method android.text.Editable.getChars could not be cached",73);
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_Editable::getChars_19833_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4, ((jint)arg5_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper getFilters_IMPL_19832(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :26658
uObject* Android_android_text_Editable::getFilters_IMPL_19832(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::getFilters_19832_ID(),"android/text/Editable","getFilters","()[Landroid/text/InputFilter;",GetMethodID,"Id for fallback method android.text.Editable.getFilters could not be cached",75);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::getFilters_19832_ID()),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::android::text::InputFilter_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getSpanEnd_IMPL_20038(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :26688
int Android_android_text_Editable::getSpanEnd_IMPL_20038(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::getSpanEnd_20038_ID(),"android/text/Editable","getSpanEnd","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Editable.getSpanEnd could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Editable::getSpanEnd_20038_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getSpanFlags_IMPL_20039(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :26691
int Android_android_text_Editable::getSpanFlags_IMPL_20039(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::getSpanFlags_20039_ID(),"android/text/Editable","getSpanFlags","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Editable.getSpanFlags could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Editable::getSpanFlags_20039_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSpans_IMPL_20036(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :26682
uObject* Android_android_text_Editable::getSpans_IMPL_20036(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::getSpans_20036_ID(),"android/text/Editable","getSpans","(IILjava/lang/Class;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method android.text.Editable.getSpans could not be cached",73);
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::getSpans_20036_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getSpanStart_IMPL_20037(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :26685
int Android_android_text_Editable::getSpanStart_IMPL_20037(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::getSpanStart_20037_ID(),"android/text/Editable","getSpanStart","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Editable.getSpanStart could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Editable::getSpanStart_20037_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper insert_IMPL_19823(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4, int arg5) [static] :26631
uObject* Android_android_text_Editable::insert_IMPL_19823(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::insert_19823_ID(),"android/text/Editable","insert","(ILjava/lang/CharSequence;II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.insert could not be cached",71);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::insert_19823_ID(), ((jint)arg2_), _obArg3, ((jint)arg4_), ((jint)arg5_)),result,Android_android_text_Editable_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper insert_IMPL_19824(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :26634
uObject* Android_android_text_Editable::insert_IMPL_19824(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::insert_19824_ID(),"android/text/Editable","insert","(ILjava/lang/CharSequence;)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.insert could not be cached",71);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::insert_19824_ID(), ((jint)arg2_), _obArg3),result,Android_android_text_Editable_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper j_delete_IMPL_19825(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :26637
uObject* Android_android_text_Editable::j_delete_IMPL_19825(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::j_delete_19825_ID(),"android/text/Editable","delete","(II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.delete could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::j_delete_19825_ID(), ((jint)arg2_), ((jint)arg3_)),result,Android_android_text_Editable_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :26661
int Android_android_text_Editable::length_IMPL_30510(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::length_30510_ID(),"android/text/Editable","length","()I",GetMethodID,"Id for fallback method android.text.Editable.length could not be cached",71);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Editable::length_30510_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int nextSpanTransition_IMPL_20040(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :26694
int Android_android_text_Editable::nextSpanTransition_IMPL_20040(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::nextSpanTransition_20040_ID(),"android/text/Editable","nextSpanTransition","(IILjava/lang/Class;)I",GetMethodID,"Id for fallback method android.text.Editable.nextSpanTransition could not be cached",83);
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Editable::nextSpanTransition_20040_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void removeSpan_IMPL_19987(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :26679
void Android_android_text_Editable::removeSpan_IMPL_19987(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::removeSpan_19987_ID(),"android/text/Editable","removeSpan","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method android.text.Editable.removeSpan could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_Editable::removeSpan_19987_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper replace_IMPL_19821(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5, int arg6) [static] :26625
uObject* Android_android_text_Editable::replace_IMPL_19821(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::replace_19821_ID(),"android/text/Editable","replace","(IILjava/lang/CharSequence;II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.replace could not be cached",72);
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::replace_19821_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4, ((jint)arg5_), ((jint)arg6_)),result,Android_android_text_Editable_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper replace_IMPL_19822(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :26628
uObject* Android_android_text_Editable::replace_IMPL_19822(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::replace_19822_ID(),"android/text/Editable","replace","(IILjava/lang/CharSequence;)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.replace could not be cached",72);
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::replace_19822_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4),result,Android_android_text_Editable_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void setFilters_IMPL_19831(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :26655
void Android_android_text_Editable::setFilters_IMPL_19831(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::setFilters_19831_ID(),"android/text/Editable","setFilters","([Landroid/text/InputFilter;)V",GetMethodID,"Id for fallback method android.text.Editable.setFilters could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_Editable::setFilters_19831_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setSpan_IMPL_19986(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) [static] :26676
void Android_android_text_Editable::setSpan_IMPL_19986(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::setSpan_19986_ID(),"android/text/Editable","setSpan","(Ljava/lang/Object;III)V",GetMethodID,"Id for fallback method android.text.Editable.setSpan could not be cached",72);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_Editable::setSpan_19986_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :26667
uObject* Android_android_text_Editable::subSequence_IMPL_30512(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::subSequence_30512_ID(),"android/text/Editable","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.Editable.subSequence could not be cached",76);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::subSequence_30512_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :26670
uObject* Android_android_text_Editable::toString_IMPL_30513(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Editable::toString_30513_ID(),"android/text/Editable","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.Editable.toString could not be cached",73);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Editable::toString_30513_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(26719)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_text_GetChars :26719
// {
Android_android_text_GetChars_type* Android_android_text_GetChars_typeof()
{
    static uSStrong<Android_android_text_GetChars_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Android_android_text_GetChars);
    options.TypeSize = sizeof(Android_android_text_GetChars_type);
    type = (Android_android_text_GetChars_type*)uClassType::New("Android.Fallbacks.Android_android_text_GetChars", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Android_android_text_GetChars__toString_fn;
    type->interface2.fp_getChars = (void(*)(uObject*, int*, int*, ::g::Android::Runtime::CharArray*, int*))Android_android_text_GetChars__getChars_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_length = (void(*)(uObject*, int*))Android_android_text_GetChars__length_fn;
    type->interface3.fp_charAt = (void(*)(uObject*, int*, uChar*))Android_android_text_GetChars__charAt_fn;
    type->interface3.fp_subSequence = (void(*)(uObject*, int*, int*, uObject**))Android_android_text_GetChars__subSequence_fn;
    type->interface3.fp_toString = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_android_text_GetChars__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[10] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_text_GetChars_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_text_GetChars_type, interface1),
        ::g::Android::android::text::GetChars_typeof(), offsetof(Android_android_text_GetChars_type, interface2),
        ::g::Android::java::lang::CharSequence_typeof(), offsetof(Android_android_text_GetChars_type, interface3));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_GetChars::charAt_30511_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_GetChars::getChars_19833_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_GetChars::length_30510_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_GetChars::subSequence_30512_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_GetChars::toString_30513_ID_, uFieldFlagsStatic);
    return type;
}

// public char charAt(int arg0) :26732
void Android_android_text_GetChars__charAt_fn(Android_android_text_GetChars* __this, int* arg0, uChar* __retval)
{
    *__retval = __this->charAt(*arg0);
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :26755
void Android_android_text_GetChars__charAt_IMPL_30511_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval)
{
    *__retval = Android_android_text_GetChars::charAt_IMPL_30511(*arg0_, *arg1_, *arg2_);
}

// public void getChars(int arg0, int arg1, Android.Runtime.CharArray arg2, int arg3) :26722
void Android_android_text_GetChars__getChars_fn(Android_android_text_GetChars* __this, int* arg0, int* arg1, ::g::Android::Runtime::CharArray* arg2, int* arg3)
{
    __this->getChars(*arg0, *arg1, arg2, *arg3);
}

// public static extern void getChars_IMPL_19833(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5) :26749
void Android_android_text_GetChars__getChars_IMPL_19833_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, int* arg5_)
{
    Android_android_text_GetChars::getChars_IMPL_19833(*arg0_, *arg1_, *arg2_, *arg3_, arg4_, *arg5_);
}

// public int length() :26727
void Android_android_text_GetChars__length_fn(Android_android_text_GetChars* __this, int* __retval)
{
    *__retval = __this->length();
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) :26752
void Android_android_text_GetChars__length_IMPL_30510_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_text_GetChars::length_IMPL_30510(*arg0_, *arg1_);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) :26737
void Android_android_text_GetChars__subSequence_fn(Android_android_text_GetChars* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subSequence(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :26758
void Android_android_text_GetChars__subSequence_IMPL_30512_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = Android_android_text_GetChars::subSequence_IMPL_30512(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public override sealed Android.java.lang.String toString() :26742
void Android_android_text_GetChars__toString_fn(Android_android_text_GetChars* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Android_android_text_GetChars::toString_IMPL_30513(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) :26761
void Android_android_text_GetChars__toString_IMPL_30513_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_text_GetChars::toString_IMPL_30513(*arg0_, *arg1_);
}

jmethodID Android_android_text_GetChars::charAt_30511_ID_;
jmethodID Android_android_text_GetChars::getChars_19833_ID_;
jmethodID Android_android_text_GetChars::length_30510_ID_;
jmethodID Android_android_text_GetChars::subSequence_30512_ID_;
jmethodID Android_android_text_GetChars::toString_30513_ID_;

// public char charAt(int arg0) [instance] :26732
uChar Android_android_text_GetChars::charAt(int arg0)
{
    return Android_android_text_GetChars::charAt_IMPL_30511(_subclassed, _javaObject, arg0);
}

// public void getChars(int arg0, int arg1, Android.Runtime.CharArray arg2, int arg3) [instance] :26722
void Android_android_text_GetChars::getChars(int arg0, int arg1, ::g::Android::Runtime::CharArray* arg2, int arg3)
{
    Android_android_text_GetChars::getChars_IMPL_19833(_subclassed, _javaObject, arg0, arg1, (uObject*)arg2, arg3);
}

// public int length() [instance] :26727
int Android_android_text_GetChars::length()
{
    return Android_android_text_GetChars::length_IMPL_30510(_subclassed, _javaObject);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) [instance] :26737
uObject* Android_android_text_GetChars::subSequence(int arg0, int arg1)
{
    return Android_android_text_GetChars::subSequence_IMPL_30512(_subclassed, _javaObject, arg0, arg1);
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :26755
uChar Android_android_text_GetChars::charAt_IMPL_30511(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_GetChars::charAt_30511_ID(),"android/text/GetChars","charAt","(I)C",GetMethodID,"Id for fallback method android.text.GetChars.charAt could not be cached",71);
    
    uChar result;
    result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, Android_android_text_GetChars::charAt_30511_ID(), ((jint)arg2_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void getChars_IMPL_19833(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5) [static] :26749
void Android_android_text_GetChars::getChars_IMPL_19833(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_GetChars::getChars_19833_ID(),"android/text/GetChars","getChars","(II[CI)V",GetMethodID,"Id for fallback method android.text.GetChars.getChars could not be cached",73);
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_GetChars::getChars_19833_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4, ((jint)arg5_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :26752
int Android_android_text_GetChars::length_IMPL_30510(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_GetChars::length_30510_ID(),"android/text/GetChars","length","()I",GetMethodID,"Id for fallback method android.text.GetChars.length could not be cached",71);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_GetChars::length_30510_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :26758
uObject* Android_android_text_GetChars::subSequence_IMPL_30512(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_GetChars::subSequence_30512_ID(),"android/text/GetChars","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.GetChars.subSequence could not be cached",76);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_GetChars::subSequence_30512_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :26761
uObject* Android_android_text_GetChars::toString_IMPL_30513(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_GetChars::toString_30513_ID(),"android/text/GetChars","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.GetChars.toString could not be cached",73);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_GetChars::toString_30513_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(26829)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_text_InputFilter :26829
// {
Android_android_text_InputFilter_type* Android_android_text_InputFilter_typeof()
{
    static uSStrong<Android_android_text_InputFilter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_text_InputFilter);
    options.TypeSize = sizeof(Android_android_text_InputFilter_type);
    type = (Android_android_text_InputFilter_type*)uClassType::New("Android.Fallbacks.Android_android_text_InputFilter", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_filter = (void(*)(uObject*, uObject*, int*, int*, uObject*, int*, int*, uObject**))Android_android_text_InputFilter__filter_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[10] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_text_InputFilter_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_text_InputFilter_type, interface1),
        ::g::Android::android::text::InputFilter_typeof(), offsetof(Android_android_text_InputFilter_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_InputFilter::filter_19845_ID_, uFieldFlagsStatic);
    return type;
}

// public Android.java.lang.CharSequence filter(Android.java.lang.CharSequence arg0, int arg1, int arg2, Android.android.text.Spanned arg3, int arg4, int arg5) :26832
void Android_android_text_InputFilter__filter_fn(Android_android_text_InputFilter* __this, uObject* arg0, int* arg1, int* arg2, uObject* arg3, int* arg4, int* arg5, uObject** __retval)
{
    *__retval = __this->filter(arg0, *arg1, *arg2, arg3, *arg4, *arg5);
}

// public static extern Android.Base.Wrappers.IJWrapper filter_IMPL_19845(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5, int arg6, int arg7) :26839
void Android_android_text_InputFilter__filter_IMPL_19845_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, uObject* arg5_, int* arg6_, int* arg7_, uObject** __retval)
{
    *__retval = Android_android_text_InputFilter::filter_IMPL_19845(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, arg5_, *arg6_, *arg7_);
}

jmethodID Android_android_text_InputFilter::filter_19845_ID_;

// public Android.java.lang.CharSequence filter(Android.java.lang.CharSequence arg0, int arg1, int arg2, Android.android.text.Spanned arg3, int arg4, int arg5) [instance] :26832
uObject* Android_android_text_InputFilter::filter(uObject* arg0, int arg1, int arg2, uObject* arg3, int arg4, int arg5)
{
    return Android_android_text_InputFilter::filter_IMPL_19845(_subclassed, _javaObject, arg0, arg1, arg2, arg3, arg4, arg5);
}

// public static extern Android.Base.Wrappers.IJWrapper filter_IMPL_19845(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5, int arg6, int arg7) [static] :26839
uObject* Android_android_text_InputFilter::filter_IMPL_19845(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, uObject* arg5_, int arg6_, int arg7_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_InputFilter::filter_19845_ID(),"android/text/InputFilter","filter","(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.InputFilter.filter could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_InputFilter::filter_19845_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), _obArg5, ((jint)arg6_), ((jint)arg7_)),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(4089)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_text_Layout :4089
// {
::g::Android::java::lang::Object_type* Android_android_text_Layout_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_text_Layout);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_text_Layout", options);
    type->SetBase(::g::Android::android::text::Layout_typeof());
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

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(26975)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_text_Spannable :26975
// {
Android_android_text_Spannable_type* Android_android_text_Spannable_typeof()
{
    static uSStrong<Android_android_text_Spannable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Android_android_text_Spannable);
    options.TypeSize = sizeof(Android_android_text_Spannable_type);
    type = (Android_android_text_Spannable_type*)uClassType::New("Android.Fallbacks.Android_android_text_Spannable", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Android_android_text_Spannable__toString_fn;
    type->interface2.fp_setSpan = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*, int*, int*))Android_android_text_Spannable__setSpan_fn;
    type->interface2.fp_removeSpan = (void(*)(uObject*, ::g::Android::java::lang::Object*))Android_android_text_Spannable__removeSpan_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_getSpans = (void(*)(uObject*, int*, int*, ::g::Android::java::lang::Class*, ::g::Android::Runtime::ObjectArray**))Android_android_text_Spannable__getSpans_fn;
    type->interface3.fp_getSpanStart = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_android_text_Spannable__getSpanStart_fn;
    type->interface3.fp_getSpanEnd = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_android_text_Spannable__getSpanEnd_fn;
    type->interface3.fp_getSpanFlags = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_android_text_Spannable__getSpanFlags_fn;
    type->interface3.fp_nextSpanTransition = (void(*)(uObject*, int*, int*, ::g::Android::java::lang::Class*, int*))Android_android_text_Spannable__nextSpanTransition_fn;
    type->interface4.fp_length = (void(*)(uObject*, int*))Android_android_text_Spannable__length_fn;
    type->interface4.fp_charAt = (void(*)(uObject*, int*, uChar*))Android_android_text_Spannable__charAt_fn;
    type->interface4.fp_subSequence = (void(*)(uObject*, int*, int*, uObject**))Android_android_text_Spannable__subSequence_fn;
    type->interface4.fp_toString = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_android_text_Spannable__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[9] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[10] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_text_Spannable_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_text_Spannable_type, interface1),
        ::g::Android::android::text::Spannable_typeof(), offsetof(Android_android_text_Spannable_type, interface2),
        ::g::Android::android::text::Spanned_typeof(), offsetof(Android_android_text_Spannable_type, interface3),
        ::g::Android::java::lang::CharSequence_typeof(), offsetof(Android_android_text_Spannable_type, interface4));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spannable::charAt_30511_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spannable::getSpanEnd_20038_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spannable::getSpanFlags_20039_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spannable::getSpans_20036_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spannable::getSpanStart_20037_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spannable::length_30510_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spannable::nextSpanTransition_20040_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spannable::removeSpan_19987_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spannable::setSpan_19986_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spannable::subSequence_30512_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spannable::toString_30513_ID_, uFieldFlagsStatic);
    return type;
}

// public char charAt(int arg0) :27018
void Android_android_text_Spannable__charAt_fn(Android_android_text_Spannable* __this, int* arg0, uChar* __retval)
{
    *__retval = __this->charAt(*arg0);
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :27059
void Android_android_text_Spannable__charAt_IMPL_30511_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval)
{
    *__retval = Android_android_text_Spannable::charAt_IMPL_30511(*arg0_, *arg1_, *arg2_);
}

// public int getSpanEnd(Android.java.lang.Object arg0) :26998
void Android_android_text_Spannable__getSpanEnd_fn(Android_android_text_Spannable* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->getSpanEnd(arg0);
}

// public static extern int getSpanEnd_IMPL_20038(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27047
void Android_android_text_Spannable__getSpanEnd_IMPL_20038_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_android_text_Spannable::getSpanEnd_IMPL_20038(*arg0_, *arg1_, arg2_);
}

// public int getSpanFlags(Android.java.lang.Object arg0) :27003
void Android_android_text_Spannable__getSpanFlags_fn(Android_android_text_Spannable* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->getSpanFlags(arg0);
}

// public static extern int getSpanFlags_IMPL_20039(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27050
void Android_android_text_Spannable__getSpanFlags_IMPL_20039_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_android_text_Spannable::getSpanFlags_IMPL_20039(*arg0_, *arg1_, arg2_);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> getSpans(int arg0, int arg1, Android.java.lang.Class arg2) :26988
void Android_android_text_Spannable__getSpans_fn(Android_android_text_Spannable* __this, int* arg0, int* arg1, ::g::Android::java::lang::Class* arg2, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->getSpans(*arg0, *arg1, arg2);
}

// public static extern Android.Base.Wrappers.IJWrapper getSpans_IMPL_20036(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :27041
void Android_android_text_Spannable__getSpans_IMPL_20036_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, uObject** __retval)
{
    *__retval = Android_android_text_Spannable::getSpans_IMPL_20036(*arg0_, *arg1_, *arg2_, *arg3_, arg4_);
}

// public int getSpanStart(Android.java.lang.Object arg0) :26993
void Android_android_text_Spannable__getSpanStart_fn(Android_android_text_Spannable* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->getSpanStart(arg0);
}

// public static extern int getSpanStart_IMPL_20037(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27044
void Android_android_text_Spannable__getSpanStart_IMPL_20037_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_android_text_Spannable::getSpanStart_IMPL_20037(*arg0_, *arg1_, arg2_);
}

// public int length() :27013
void Android_android_text_Spannable__length_fn(Android_android_text_Spannable* __this, int* __retval)
{
    *__retval = __this->length();
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) :27056
void Android_android_text_Spannable__length_IMPL_30510_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_text_Spannable::length_IMPL_30510(*arg0_, *arg1_);
}

// public int nextSpanTransition(int arg0, int arg1, Android.java.lang.Class arg2) :27008
void Android_android_text_Spannable__nextSpanTransition_fn(Android_android_text_Spannable* __this, int* arg0, int* arg1, ::g::Android::java::lang::Class* arg2, int* __retval)
{
    *__retval = __this->nextSpanTransition(*arg0, *arg1, arg2);
}

// public static extern int nextSpanTransition_IMPL_20040(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :27053
void Android_android_text_Spannable__nextSpanTransition_IMPL_20040_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, int* __retval)
{
    *__retval = Android_android_text_Spannable::nextSpanTransition_IMPL_20040(*arg0_, *arg1_, *arg2_, *arg3_, arg4_);
}

// public void removeSpan(Android.java.lang.Object arg0) :26983
void Android_android_text_Spannable__removeSpan_fn(Android_android_text_Spannable* __this, ::g::Android::java::lang::Object* arg0)
{
    __this->removeSpan(arg0);
}

// public static extern void removeSpan_IMPL_19987(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27038
void Android_android_text_Spannable__removeSpan_IMPL_19987_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_text_Spannable::removeSpan_IMPL_19987(*arg0_, *arg1_, arg2_);
}

// public void setSpan(Android.java.lang.Object arg0, int arg1, int arg2, int arg3) :26978
void Android_android_text_Spannable__setSpan_fn(Android_android_text_Spannable* __this, ::g::Android::java::lang::Object* arg0, int* arg1, int* arg2, int* arg3)
{
    __this->setSpan(arg0, *arg1, *arg2, *arg3);
}

// public static extern void setSpan_IMPL_19986(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) :27035
void Android_android_text_Spannable__setSpan_IMPL_19986_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    Android_android_text_Spannable::setSpan_IMPL_19986(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, *arg5_);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) :27023
void Android_android_text_Spannable__subSequence_fn(Android_android_text_Spannable* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subSequence(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :27062
void Android_android_text_Spannable__subSequence_IMPL_30512_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = Android_android_text_Spannable::subSequence_IMPL_30512(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public override sealed Android.java.lang.String toString() :27028
void Android_android_text_Spannable__toString_fn(Android_android_text_Spannable* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Android_android_text_Spannable::toString_IMPL_30513(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) :27065
void Android_android_text_Spannable__toString_IMPL_30513_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_text_Spannable::toString_IMPL_30513(*arg0_, *arg1_);
}

jmethodID Android_android_text_Spannable::charAt_30511_ID_;
jmethodID Android_android_text_Spannable::getSpanEnd_20038_ID_;
jmethodID Android_android_text_Spannable::getSpanFlags_20039_ID_;
jmethodID Android_android_text_Spannable::getSpans_20036_ID_;
jmethodID Android_android_text_Spannable::getSpanStart_20037_ID_;
jmethodID Android_android_text_Spannable::length_30510_ID_;
jmethodID Android_android_text_Spannable::nextSpanTransition_20040_ID_;
jmethodID Android_android_text_Spannable::removeSpan_19987_ID_;
jmethodID Android_android_text_Spannable::setSpan_19986_ID_;
jmethodID Android_android_text_Spannable::subSequence_30512_ID_;
jmethodID Android_android_text_Spannable::toString_30513_ID_;

// public char charAt(int arg0) [instance] :27018
uChar Android_android_text_Spannable::charAt(int arg0)
{
    return Android_android_text_Spannable::charAt_IMPL_30511(_subclassed, _javaObject, arg0);
}

// public int getSpanEnd(Android.java.lang.Object arg0) [instance] :26998
int Android_android_text_Spannable::getSpanEnd(::g::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spannable::getSpanEnd_IMPL_20038(_subclassed, _javaObject, (uObject*)arg0);
}

// public int getSpanFlags(Android.java.lang.Object arg0) [instance] :27003
int Android_android_text_Spannable::getSpanFlags(::g::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spannable::getSpanFlags_IMPL_20039(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> getSpans(int arg0, int arg1, Android.java.lang.Class arg2) [instance] :26988
::g::Android::Runtime::ObjectArray* Android_android_text_Spannable::getSpans(int arg0, int arg1, ::g::Android::java::lang::Class* arg2)
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_android_text_Spannable::getSpans_IMPL_20036(_subclassed, _javaObject, arg0, arg1, (uObject*)arg2), ::TYPES[9/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]);
}

// public int getSpanStart(Android.java.lang.Object arg0) [instance] :26993
int Android_android_text_Spannable::getSpanStart(::g::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spannable::getSpanStart_IMPL_20037(_subclassed, _javaObject, (uObject*)arg0);
}

// public int length() [instance] :27013
int Android_android_text_Spannable::length()
{
    return Android_android_text_Spannable::length_IMPL_30510(_subclassed, _javaObject);
}

// public int nextSpanTransition(int arg0, int arg1, Android.java.lang.Class arg2) [instance] :27008
int Android_android_text_Spannable::nextSpanTransition(int arg0, int arg1, ::g::Android::java::lang::Class* arg2)
{
    return Android_android_text_Spannable::nextSpanTransition_IMPL_20040(_subclassed, _javaObject, arg0, arg1, (uObject*)arg2);
}

// public void removeSpan(Android.java.lang.Object arg0) [instance] :26983
void Android_android_text_Spannable::removeSpan(::g::Android::java::lang::Object* arg0)
{
    Android_android_text_Spannable::removeSpan_IMPL_19987(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setSpan(Android.java.lang.Object arg0, int arg1, int arg2, int arg3) [instance] :26978
void Android_android_text_Spannable::setSpan(::g::Android::java::lang::Object* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_Spannable::setSpan_IMPL_19986(_subclassed, _javaObject, (uObject*)arg0, arg1, arg2, arg3);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) [instance] :27023
uObject* Android_android_text_Spannable::subSequence(int arg0, int arg1)
{
    return Android_android_text_Spannable::subSequence_IMPL_30512(_subclassed, _javaObject, arg0, arg1);
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :27059
uChar Android_android_text_Spannable::charAt_IMPL_30511(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spannable::charAt_30511_ID(),"android/text/Spannable","charAt","(I)C",GetMethodID,"Id for fallback method android.text.Spannable.charAt could not be cached",72);
    
    uChar result;
    result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, Android_android_text_Spannable::charAt_30511_ID(), ((jint)arg2_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getSpanEnd_IMPL_20038(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27047
int Android_android_text_Spannable::getSpanEnd_IMPL_20038(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spannable::getSpanEnd_20038_ID(),"android/text/Spannable","getSpanEnd","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spannable.getSpanEnd could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Spannable::getSpanEnd_20038_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getSpanFlags_IMPL_20039(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27050
int Android_android_text_Spannable::getSpanFlags_IMPL_20039(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spannable::getSpanFlags_20039_ID(),"android/text/Spannable","getSpanFlags","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spannable.getSpanFlags could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Spannable::getSpanFlags_20039_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSpans_IMPL_20036(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :27041
uObject* Android_android_text_Spannable::getSpans_IMPL_20036(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spannable::getSpans_20036_ID(),"android/text/Spannable","getSpans","(IILjava/lang/Class;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method android.text.Spannable.getSpans could not be cached",74);
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Spannable::getSpans_20036_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getSpanStart_IMPL_20037(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27044
int Android_android_text_Spannable::getSpanStart_IMPL_20037(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spannable::getSpanStart_20037_ID(),"android/text/Spannable","getSpanStart","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spannable.getSpanStart could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Spannable::getSpanStart_20037_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :27056
int Android_android_text_Spannable::length_IMPL_30510(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spannable::length_30510_ID(),"android/text/Spannable","length","()I",GetMethodID,"Id for fallback method android.text.Spannable.length could not be cached",72);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Spannable::length_30510_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int nextSpanTransition_IMPL_20040(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :27053
int Android_android_text_Spannable::nextSpanTransition_IMPL_20040(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spannable::nextSpanTransition_20040_ID(),"android/text/Spannable","nextSpanTransition","(IILjava/lang/Class;)I",GetMethodID,"Id for fallback method android.text.Spannable.nextSpanTransition could not be cached",84);
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Spannable::nextSpanTransition_20040_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void removeSpan_IMPL_19987(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27038
void Android_android_text_Spannable::removeSpan_IMPL_19987(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spannable::removeSpan_19987_ID(),"android/text/Spannable","removeSpan","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method android.text.Spannable.removeSpan could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_Spannable::removeSpan_19987_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setSpan_IMPL_19986(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) [static] :27035
void Android_android_text_Spannable::setSpan_IMPL_19986(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spannable::setSpan_19986_ID(),"android/text/Spannable","setSpan","(Ljava/lang/Object;III)V",GetMethodID,"Id for fallback method android.text.Spannable.setSpan could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_Spannable::setSpan_19986_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :27062
uObject* Android_android_text_Spannable::subSequence_IMPL_30512(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spannable::subSequence_30512_ID(),"android/text/Spannable","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.Spannable.subSequence could not be cached",77);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Spannable::subSequence_30512_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :27065
uObject* Android_android_text_Spannable::toString_IMPL_30513(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spannable::toString_30513_ID(),"android/text/Spannable","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.Spannable.toString could not be cached",74);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Spannable::toString_30513_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(27081)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_text_Spanned :27081
// {
Android_android_text_Spanned_type* Android_android_text_Spanned_typeof()
{
    static uSStrong<Android_android_text_Spanned_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Android_android_text_Spanned);
    options.TypeSize = sizeof(Android_android_text_Spanned_type);
    type = (Android_android_text_Spanned_type*)uClassType::New("Android.Fallbacks.Android_android_text_Spanned", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Android_android_text_Spanned__toString_fn;
    type->interface2.fp_getSpans = (void(*)(uObject*, int*, int*, ::g::Android::java::lang::Class*, ::g::Android::Runtime::ObjectArray**))Android_android_text_Spanned__getSpans_fn;
    type->interface2.fp_getSpanStart = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_android_text_Spanned__getSpanStart_fn;
    type->interface2.fp_getSpanEnd = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_android_text_Spanned__getSpanEnd_fn;
    type->interface2.fp_getSpanFlags = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_android_text_Spanned__getSpanFlags_fn;
    type->interface2.fp_nextSpanTransition = (void(*)(uObject*, int*, int*, ::g::Android::java::lang::Class*, int*))Android_android_text_Spanned__nextSpanTransition_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_length = (void(*)(uObject*, int*))Android_android_text_Spanned__length_fn;
    type->interface3.fp_charAt = (void(*)(uObject*, int*, uChar*))Android_android_text_Spanned__charAt_fn;
    type->interface3.fp_subSequence = (void(*)(uObject*, int*, int*, uObject**))Android_android_text_Spanned__subSequence_fn;
    type->interface3.fp_toString = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_android_text_Spanned__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[9] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[10] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_text_Spanned_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_text_Spanned_type, interface1),
        ::g::Android::android::text::Spanned_typeof(), offsetof(Android_android_text_Spanned_type, interface2),
        ::g::Android::java::lang::CharSequence_typeof(), offsetof(Android_android_text_Spanned_type, interface3));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spanned::charAt_30511_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spanned::getSpanEnd_20038_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spanned::getSpanFlags_20039_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spanned::getSpans_20036_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spanned::getSpanStart_20037_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spanned::length_30510_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spanned::nextSpanTransition_20040_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spanned::subSequence_30512_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_Spanned::toString_30513_ID_, uFieldFlagsStatic);
    return type;
}

// public char charAt(int arg0) :27114
void Android_android_text_Spanned__charAt_fn(Android_android_text_Spanned* __this, int* arg0, uChar* __retval)
{
    *__retval = __this->charAt(*arg0);
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :27149
void Android_android_text_Spanned__charAt_IMPL_30511_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval)
{
    *__retval = Android_android_text_Spanned::charAt_IMPL_30511(*arg0_, *arg1_, *arg2_);
}

// public int getSpanEnd(Android.java.lang.Object arg0) :27094
void Android_android_text_Spanned__getSpanEnd_fn(Android_android_text_Spanned* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->getSpanEnd(arg0);
}

// public static extern int getSpanEnd_IMPL_20038(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27137
void Android_android_text_Spanned__getSpanEnd_IMPL_20038_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_android_text_Spanned::getSpanEnd_IMPL_20038(*arg0_, *arg1_, arg2_);
}

// public int getSpanFlags(Android.java.lang.Object arg0) :27099
void Android_android_text_Spanned__getSpanFlags_fn(Android_android_text_Spanned* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->getSpanFlags(arg0);
}

// public static extern int getSpanFlags_IMPL_20039(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27140
void Android_android_text_Spanned__getSpanFlags_IMPL_20039_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_android_text_Spanned::getSpanFlags_IMPL_20039(*arg0_, *arg1_, arg2_);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> getSpans(int arg0, int arg1, Android.java.lang.Class arg2) :27084
void Android_android_text_Spanned__getSpans_fn(Android_android_text_Spanned* __this, int* arg0, int* arg1, ::g::Android::java::lang::Class* arg2, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->getSpans(*arg0, *arg1, arg2);
}

// public static extern Android.Base.Wrappers.IJWrapper getSpans_IMPL_20036(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :27131
void Android_android_text_Spanned__getSpans_IMPL_20036_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, uObject** __retval)
{
    *__retval = Android_android_text_Spanned::getSpans_IMPL_20036(*arg0_, *arg1_, *arg2_, *arg3_, arg4_);
}

// public int getSpanStart(Android.java.lang.Object arg0) :27089
void Android_android_text_Spanned__getSpanStart_fn(Android_android_text_Spanned* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->getSpanStart(arg0);
}

// public static extern int getSpanStart_IMPL_20037(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27134
void Android_android_text_Spanned__getSpanStart_IMPL_20037_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_android_text_Spanned::getSpanStart_IMPL_20037(*arg0_, *arg1_, arg2_);
}

// public int length() :27109
void Android_android_text_Spanned__length_fn(Android_android_text_Spanned* __this, int* __retval)
{
    *__retval = __this->length();
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) :27146
void Android_android_text_Spanned__length_IMPL_30510_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_text_Spanned::length_IMPL_30510(*arg0_, *arg1_);
}

// public int nextSpanTransition(int arg0, int arg1, Android.java.lang.Class arg2) :27104
void Android_android_text_Spanned__nextSpanTransition_fn(Android_android_text_Spanned* __this, int* arg0, int* arg1, ::g::Android::java::lang::Class* arg2, int* __retval)
{
    *__retval = __this->nextSpanTransition(*arg0, *arg1, arg2);
}

// public static extern int nextSpanTransition_IMPL_20040(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :27143
void Android_android_text_Spanned__nextSpanTransition_IMPL_20040_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, int* __retval)
{
    *__retval = Android_android_text_Spanned::nextSpanTransition_IMPL_20040(*arg0_, *arg1_, *arg2_, *arg3_, arg4_);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) :27119
void Android_android_text_Spanned__subSequence_fn(Android_android_text_Spanned* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subSequence(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :27152
void Android_android_text_Spanned__subSequence_IMPL_30512_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = Android_android_text_Spanned::subSequence_IMPL_30512(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public override sealed Android.java.lang.String toString() :27124
void Android_android_text_Spanned__toString_fn(Android_android_text_Spanned* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Android_android_text_Spanned::toString_IMPL_30513(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) :27155
void Android_android_text_Spanned__toString_IMPL_30513_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_text_Spanned::toString_IMPL_30513(*arg0_, *arg1_);
}

jmethodID Android_android_text_Spanned::charAt_30511_ID_;
jmethodID Android_android_text_Spanned::getSpanEnd_20038_ID_;
jmethodID Android_android_text_Spanned::getSpanFlags_20039_ID_;
jmethodID Android_android_text_Spanned::getSpans_20036_ID_;
jmethodID Android_android_text_Spanned::getSpanStart_20037_ID_;
jmethodID Android_android_text_Spanned::length_30510_ID_;
jmethodID Android_android_text_Spanned::nextSpanTransition_20040_ID_;
jmethodID Android_android_text_Spanned::subSequence_30512_ID_;
jmethodID Android_android_text_Spanned::toString_30513_ID_;

// public char charAt(int arg0) [instance] :27114
uChar Android_android_text_Spanned::charAt(int arg0)
{
    return Android_android_text_Spanned::charAt_IMPL_30511(_subclassed, _javaObject, arg0);
}

// public int getSpanEnd(Android.java.lang.Object arg0) [instance] :27094
int Android_android_text_Spanned::getSpanEnd(::g::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spanned::getSpanEnd_IMPL_20038(_subclassed, _javaObject, (uObject*)arg0);
}

// public int getSpanFlags(Android.java.lang.Object arg0) [instance] :27099
int Android_android_text_Spanned::getSpanFlags(::g::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spanned::getSpanFlags_IMPL_20039(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> getSpans(int arg0, int arg1, Android.java.lang.Class arg2) [instance] :27084
::g::Android::Runtime::ObjectArray* Android_android_text_Spanned::getSpans(int arg0, int arg1, ::g::Android::java::lang::Class* arg2)
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_android_text_Spanned::getSpans_IMPL_20036(_subclassed, _javaObject, arg0, arg1, (uObject*)arg2), ::TYPES[9/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]);
}

// public int getSpanStart(Android.java.lang.Object arg0) [instance] :27089
int Android_android_text_Spanned::getSpanStart(::g::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spanned::getSpanStart_IMPL_20037(_subclassed, _javaObject, (uObject*)arg0);
}

// public int length() [instance] :27109
int Android_android_text_Spanned::length()
{
    return Android_android_text_Spanned::length_IMPL_30510(_subclassed, _javaObject);
}

// public int nextSpanTransition(int arg0, int arg1, Android.java.lang.Class arg2) [instance] :27104
int Android_android_text_Spanned::nextSpanTransition(int arg0, int arg1, ::g::Android::java::lang::Class* arg2)
{
    return Android_android_text_Spanned::nextSpanTransition_IMPL_20040(_subclassed, _javaObject, arg0, arg1, (uObject*)arg2);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) [instance] :27119
uObject* Android_android_text_Spanned::subSequence(int arg0, int arg1)
{
    return Android_android_text_Spanned::subSequence_IMPL_30512(_subclassed, _javaObject, arg0, arg1);
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :27149
uChar Android_android_text_Spanned::charAt_IMPL_30511(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spanned::charAt_30511_ID(),"android/text/Spanned","charAt","(I)C",GetMethodID,"Id for fallback method android.text.Spanned.charAt could not be cached",70);
    
    uChar result;
    result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, Android_android_text_Spanned::charAt_30511_ID(), ((jint)arg2_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getSpanEnd_IMPL_20038(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27137
int Android_android_text_Spanned::getSpanEnd_IMPL_20038(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spanned::getSpanEnd_20038_ID(),"android/text/Spanned","getSpanEnd","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spanned.getSpanEnd could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Spanned::getSpanEnd_20038_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getSpanFlags_IMPL_20039(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27140
int Android_android_text_Spanned::getSpanFlags_IMPL_20039(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spanned::getSpanFlags_20039_ID(),"android/text/Spanned","getSpanFlags","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spanned.getSpanFlags could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Spanned::getSpanFlags_20039_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSpans_IMPL_20036(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :27131
uObject* Android_android_text_Spanned::getSpans_IMPL_20036(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spanned::getSpans_20036_ID(),"android/text/Spanned","getSpans","(IILjava/lang/Class;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method android.text.Spanned.getSpans could not be cached",72);
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Spanned::getSpans_20036_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getSpanStart_IMPL_20037(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27134
int Android_android_text_Spanned::getSpanStart_IMPL_20037(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spanned::getSpanStart_20037_ID(),"android/text/Spanned","getSpanStart","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spanned.getSpanStart could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Spanned::getSpanStart_20037_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :27146
int Android_android_text_Spanned::length_IMPL_30510(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spanned::length_30510_ID(),"android/text/Spanned","length","()I",GetMethodID,"Id for fallback method android.text.Spanned.length could not be cached",70);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Spanned::length_30510_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int nextSpanTransition_IMPL_20040(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :27143
int Android_android_text_Spanned::nextSpanTransition_IMPL_20040(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spanned::nextSpanTransition_20040_ID(),"android/text/Spanned","nextSpanTransition","(IILjava/lang/Class;)I",GetMethodID,"Id for fallback method android.text.Spanned.nextSpanTransition could not be cached",82);
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_text_Spanned::nextSpanTransition_20040_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :27152
uObject* Android_android_text_Spanned::subSequence_IMPL_30512(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spanned::subSequence_30512_ID(),"android/text/Spanned","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.Spanned.subSequence could not be cached",75);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Spanned::subSequence_30512_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :27155
uObject* Android_android_text_Spanned::toString_IMPL_30513(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_Spanned::toString_30513_ID(),"android/text/Spanned","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.Spanned.toString could not be cached",72);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_text_Spanned::toString_30513_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(27267)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_text_TextWatcher :27267
// {
Android_android_text_TextWatcher_type* Android_android_text_TextWatcher_typeof()
{
    static uSStrong<Android_android_text_TextWatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_text_TextWatcher);
    options.TypeSize = sizeof(Android_android_text_TextWatcher_type);
    type = (Android_android_text_TextWatcher_type*)uClassType::New("Android.Fallbacks.Android_android_text_TextWatcher", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_beforeTextChanged = (void(*)(uObject*, uObject*, int*, int*, int*))Android_android_text_TextWatcher__beforeTextChanged_fn;
    type->interface2.fp_onTextChanged = (void(*)(uObject*, uObject*, int*, int*, int*))Android_android_text_TextWatcher__onTextChanged_fn;
    type->interface2.fp_afterTextChanged = (void(*)(uObject*, uObject*))Android_android_text_TextWatcher__afterTextChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_text_TextWatcher_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_text_TextWatcher_type, interface1),
        ::g::Android::android::text::TextWatcher_typeof(), offsetof(Android_android_text_TextWatcher_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_TextWatcher::afterTextChanged_20153_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_TextWatcher::beforeTextChanged_20151_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_text_TextWatcher::onTextChanged_20152_ID_, uFieldFlagsStatic);
    return type;
}

// public void afterTextChanged(Android.android.text.Editable arg0) :27280
void Android_android_text_TextWatcher__afterTextChanged_fn(Android_android_text_TextWatcher* __this, uObject* arg0)
{
    __this->afterTextChanged(arg0);
}

// public static extern void afterTextChanged_IMPL_20153(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27293
void Android_android_text_TextWatcher__afterTextChanged_IMPL_20153_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_text_TextWatcher::afterTextChanged_IMPL_20153(*arg0_, *arg1_, arg2_);
}

// public void beforeTextChanged(Android.java.lang.CharSequence arg0, int arg1, int arg2, int arg3) :27270
void Android_android_text_TextWatcher__beforeTextChanged_fn(Android_android_text_TextWatcher* __this, uObject* arg0, int* arg1, int* arg2, int* arg3)
{
    __this->beforeTextChanged(arg0, *arg1, *arg2, *arg3);
}

// public static extern void beforeTextChanged_IMPL_20151(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) :27287
void Android_android_text_TextWatcher__beforeTextChanged_IMPL_20151_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    Android_android_text_TextWatcher::beforeTextChanged_IMPL_20151(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, *arg5_);
}

// public void onTextChanged(Android.java.lang.CharSequence arg0, int arg1, int arg2, int arg3) :27275
void Android_android_text_TextWatcher__onTextChanged_fn(Android_android_text_TextWatcher* __this, uObject* arg0, int* arg1, int* arg2, int* arg3)
{
    __this->onTextChanged(arg0, *arg1, *arg2, *arg3);
}

// public static extern void onTextChanged_IMPL_20152(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) :27290
void Android_android_text_TextWatcher__onTextChanged_IMPL_20152_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    Android_android_text_TextWatcher::onTextChanged_IMPL_20152(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, *arg5_);
}

jmethodID Android_android_text_TextWatcher::afterTextChanged_20153_ID_;
jmethodID Android_android_text_TextWatcher::beforeTextChanged_20151_ID_;
jmethodID Android_android_text_TextWatcher::onTextChanged_20152_ID_;

// public void afterTextChanged(Android.android.text.Editable arg0) [instance] :27280
void Android_android_text_TextWatcher::afterTextChanged(uObject* arg0)
{
    Android_android_text_TextWatcher::afterTextChanged_IMPL_20153(_subclassed, _javaObject, arg0);
}

// public void beforeTextChanged(Android.java.lang.CharSequence arg0, int arg1, int arg2, int arg3) [instance] :27270
void Android_android_text_TextWatcher::beforeTextChanged(uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_TextWatcher::beforeTextChanged_IMPL_20151(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public void onTextChanged(Android.java.lang.CharSequence arg0, int arg1, int arg2, int arg3) [instance] :27275
void Android_android_text_TextWatcher::onTextChanged(uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_TextWatcher::onTextChanged_IMPL_20152(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public static extern void afterTextChanged_IMPL_20153(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27293
void Android_android_text_TextWatcher::afterTextChanged_IMPL_20153(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_TextWatcher::afterTextChanged_20153_ID(),"android/text/TextWatcher","afterTextChanged","(Landroid/text/Editable;)V",GetMethodID,"Id for fallback method android.text.TextWatcher.afterTextChanged could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_TextWatcher::afterTextChanged_20153_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void beforeTextChanged_IMPL_20151(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) [static] :27287
void Android_android_text_TextWatcher::beforeTextChanged_IMPL_20151(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_TextWatcher::beforeTextChanged_20151_ID(),"android/text/TextWatcher","beforeTextChanged","(Ljava/lang/CharSequence;III)V",GetMethodID,"Id for fallback method android.text.TextWatcher.beforeTextChanged could not be cached",85);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_TextWatcher::beforeTextChanged_20151_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onTextChanged_IMPL_20152(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) [static] :27290
void Android_android_text_TextWatcher::onTextChanged_IMPL_20152(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_text_TextWatcher::onTextChanged_20152_ID(),"android/text/TextWatcher","onTextChanged","(Ljava/lang/CharSequence;III)V",GetMethodID,"Id for fallback method android.text.TextWatcher.onTextChanged could not be cached",81);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_text_TextWatcher::onTextChanged_20152_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(23077)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_util_AttributeSet :23077
// {
Android_android_util_AttributeSet_type* Android_android_util_AttributeSet_typeof()
{
    static uSStrong<Android_android_util_AttributeSet_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 27;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_util_AttributeSet);
    options.TypeSize = sizeof(Android_android_util_AttributeSet_type);
    type = (Android_android_util_AttributeSet_type*)uClassType::New("Android.Fallbacks.Android_android_util_AttributeSet", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_getAttributeCount = (void(*)(uObject*, int*))Android_android_util_AttributeSet__getAttributeCount_fn;
    type->interface2.fp_getAttributeName = (void(*)(uObject*, int*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getAttributeName_fn;
    type->interface2.fp_getAttributeValue1 = (void(*)(uObject*, int*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getAttributeValue1_fn;
    type->interface2.fp_getAttributeValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getAttributeValue_fn;
    type->interface2.fp_getPositionDescription = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getPositionDescription_fn;
    type->interface2.fp_getAttributeNameResource = (void(*)(uObject*, int*, int*))Android_android_util_AttributeSet__getAttributeNameResource_fn;
    type->interface2.fp_getAttributeListValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, ::g::Android::Runtime::ObjectArray*, int*, int*))Android_android_util_AttributeSet__getAttributeListValue_fn;
    type->interface2.fp_getAttributeBooleanValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, bool*, bool*))Android_android_util_AttributeSet__getAttributeBooleanValue_fn;
    type->interface2.fp_getAttributeResourceValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, int*, int*))Android_android_util_AttributeSet__getAttributeResourceValue_fn;
    type->interface2.fp_getAttributeIntValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, int*, int*))Android_android_util_AttributeSet__getAttributeIntValue_fn;
    type->interface2.fp_getAttributeUnsignedIntValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, int*, int*))Android_android_util_AttributeSet__getAttributeUnsignedIntValue_fn;
    type->interface2.fp_getAttributeFloatValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, float*, float*))Android_android_util_AttributeSet__getAttributeFloatValue_fn;
    type->interface2.fp_getAttributeListValue1 = (void(*)(uObject*, int*, ::g::Android::Runtime::ObjectArray*, int*, int*))Android_android_util_AttributeSet__getAttributeListValue1_fn;
    type->interface2.fp_getAttributeBooleanValue1 = (void(*)(uObject*, int*, bool*, bool*))Android_android_util_AttributeSet__getAttributeBooleanValue1_fn;
    type->interface2.fp_getAttributeResourceValue1 = (void(*)(uObject*, int*, int*, int*))Android_android_util_AttributeSet__getAttributeResourceValue1_fn;
    type->interface2.fp_getAttributeIntValue1 = (void(*)(uObject*, int*, int*, int*))Android_android_util_AttributeSet__getAttributeIntValue1_fn;
    type->interface2.fp_getAttributeUnsignedIntValue1 = (void(*)(uObject*, int*, int*, int*))Android_android_util_AttributeSet__getAttributeUnsignedIntValue1_fn;
    type->interface2.fp_getAttributeFloatValue1 = (void(*)(uObject*, int*, float*, float*))Android_android_util_AttributeSet__getAttributeFloatValue1_fn;
    type->interface2.fp_getIdAttribute = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getIdAttribute_fn;
    type->interface2.fp_getClassAttribute = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getClassAttribute_fn;
    type->interface2.fp_getIdAttributeResourceValue = (void(*)(uObject*, int*, int*))Android_android_util_AttributeSet__getIdAttributeResourceValue_fn;
    type->interface2.fp_getStyleAttribute = (void(*)(uObject*, int*))Android_android_util_AttributeSet__getStyleAttribute_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_util_AttributeSet_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_util_AttributeSet_type, interface1),
        ::g::Android::android::util::AttributeSet_typeof(), offsetof(Android_android_util_AttributeSet_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeBooleanValue_20306_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeBooleanValue_20312_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeCount_20299_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeFloatValue_20310_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeFloatValue_20316_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeIntValue_20308_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeIntValue_20314_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeListValue_20305_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeListValue_20311_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeName_20300_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeNameResource_20304_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeResourceValue_20307_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeResourceValue_20313_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20309_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20315_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeValue_20301_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeValue_20302_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getClassAttribute_20318_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getIdAttribute_20317_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getIdAttributeResourceValue_20319_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getPositionDescription_20303_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getStyleAttribute_20320_ID_, uFieldFlagsStatic);
    return type;
}

// public bool getAttributeBooleanValue(Android.java.lang.String arg0, Android.java.lang.String arg1, bool arg2) :23115
void Android_android_util_AttributeSet__getAttributeBooleanValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, bool* arg2, bool* __retval)
{
    *__retval = __this->getAttributeBooleanValue(arg0, arg1, *arg2);
}

// public bool getAttributeBooleanValue(int arg0, bool arg1) :23145
void Android_android_util_AttributeSet__getAttributeBooleanValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, bool* arg1, bool* __retval)
{
    *__retval = __this->getAttributeBooleanValue1(*arg0, *arg1);
}

// public static extern bool getAttributeBooleanValue_IMPL_20306(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) :23213
void Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20306_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_, bool* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20306(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public static extern bool getAttributeBooleanValue_IMPL_20312(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) :23231
void Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20312_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_, bool* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20312(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public int getAttributeCount() :23080
void Android_android_util_AttributeSet__getAttributeCount_fn(Android_android_util_AttributeSet* __this, int* __retval)
{
    *__retval = __this->getAttributeCount();
}

// public static extern int getAttributeCount_IMPL_20299(bool arg0, Android.Base.Primitives.ujobject arg1) :23192
void Android_android_util_AttributeSet__getAttributeCount_IMPL_20299_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeCount_IMPL_20299(*arg0_, *arg1_);
}

// public float getAttributeFloatValue(Android.java.lang.String arg0, Android.java.lang.String arg1, float arg2) :23135
void Android_android_util_AttributeSet__getAttributeFloatValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, float* arg2, float* __retval)
{
    *__retval = __this->getAttributeFloatValue(arg0, arg1, *arg2);
}

// public float getAttributeFloatValue(int arg0, float arg1) :23165
void Android_android_util_AttributeSet__getAttributeFloatValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, float* arg1, float* __retval)
{
    *__retval = __this->getAttributeFloatValue1(*arg0, *arg1);
}

// public static extern float getAttributeFloatValue_IMPL_20310(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, float arg4) :23225
void Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20310_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, float* arg4_, float* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20310(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public static extern float getAttributeFloatValue_IMPL_20316(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, float arg3) :23243
void Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20316_fn(bool* arg0_, jobject* arg1_, int* arg2_, float* arg3_, float* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20316(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public int getAttributeIntValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) :23125
void Android_android_util_AttributeSet__getAttributeIntValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int* arg2, int* __retval)
{
    *__retval = __this->getAttributeIntValue(arg0, arg1, *arg2);
}

// public int getAttributeIntValue(int arg0, int arg1) :23155
void Android_android_util_AttributeSet__getAttributeIntValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, int* arg1, int* __retval)
{
    *__retval = __this->getAttributeIntValue1(*arg0, *arg1);
}

// public static extern int getAttributeIntValue_IMPL_20308(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :23219
void Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20308_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20308(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public static extern int getAttributeIntValue_IMPL_20314(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :23237
void Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20314_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20314(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public int getAttributeListValue(Android.java.lang.String arg0, Android.java.lang.String arg1, Android.Runtime.ObjectArray<Android.java.lang.String> arg2, int arg3) :23110
void Android_android_util_AttributeSet__getAttributeListValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::Runtime::ObjectArray* arg2, int* arg3, int* __retval)
{
    *__retval = __this->getAttributeListValue(arg0, arg1, arg2, *arg3);
}

// public int getAttributeListValue(int arg0, Android.Runtime.ObjectArray<Android.java.lang.String> arg1, int arg2) :23140
void Android_android_util_AttributeSet__getAttributeListValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, ::g::Android::Runtime::ObjectArray* arg1, int* arg2, int* __retval)
{
    *__retval = __this->getAttributeListValue1(*arg0, arg1, *arg2);
}

// public static extern int getAttributeListValue_IMPL_20305(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5) :23210
void Android_android_util_AttributeSet__getAttributeListValue_IMPL_20305_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, int* arg5_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeListValue_IMPL_20305(*arg0_, *arg1_, arg2_, arg3_, arg4_, *arg5_);
}

// public static extern int getAttributeListValue_IMPL_20311(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :23228
void Android_android_util_AttributeSet__getAttributeListValue_IMPL_20311_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, int* arg4_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeListValue_IMPL_20311(*arg0_, *arg1_, *arg2_, arg3_, *arg4_);
}

// public Android.java.lang.String getAttributeName(int arg0) :23085
void Android_android_util_AttributeSet__getAttributeName_fn(Android_android_util_AttributeSet* __this, int* arg0, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getAttributeName(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeName_IMPL_20300(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :23195
void Android_android_util_AttributeSet__getAttributeName_IMPL_20300_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeName_IMPL_20300(*arg0_, *arg1_, *arg2_);
}

// public int getAttributeNameResource(int arg0) :23105
void Android_android_util_AttributeSet__getAttributeNameResource_fn(Android_android_util_AttributeSet* __this, int* arg0, int* __retval)
{
    *__retval = __this->getAttributeNameResource(*arg0);
}

// public static extern int getAttributeNameResource_IMPL_20304(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :23207
void Android_android_util_AttributeSet__getAttributeNameResource_IMPL_20304_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeNameResource_IMPL_20304(*arg0_, *arg1_, *arg2_);
}

// public int getAttributeResourceValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) :23120
void Android_android_util_AttributeSet__getAttributeResourceValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int* arg2, int* __retval)
{
    *__retval = __this->getAttributeResourceValue(arg0, arg1, *arg2);
}

// public int getAttributeResourceValue(int arg0, int arg1) :23150
void Android_android_util_AttributeSet__getAttributeResourceValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, int* arg1, int* __retval)
{
    *__retval = __this->getAttributeResourceValue1(*arg0, *arg1);
}

// public static extern int getAttributeResourceValue_IMPL_20307(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :23216
void Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20307_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20307(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public static extern int getAttributeResourceValue_IMPL_20313(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :23234
void Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20313_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20313(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public int getAttributeUnsignedIntValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) :23130
void Android_android_util_AttributeSet__getAttributeUnsignedIntValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int* arg2, int* __retval)
{
    *__retval = __this->getAttributeUnsignedIntValue(arg0, arg1, *arg2);
}

// public int getAttributeUnsignedIntValue(int arg0, int arg1) :23160
void Android_android_util_AttributeSet__getAttributeUnsignedIntValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, int* arg1, int* __retval)
{
    *__retval = __this->getAttributeUnsignedIntValue1(*arg0, *arg1);
}

// public static extern int getAttributeUnsignedIntValue_IMPL_20309(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :23222
void Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20309_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20309(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public static extern int getAttributeUnsignedIntValue_IMPL_20315(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :23240
void Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20315_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20315(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public Android.java.lang.String getAttributeValue(Android.java.lang.String arg0, Android.java.lang.String arg1) :23095
void Android_android_util_AttributeSet__getAttributeValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getAttributeValue(arg0, arg1);
}

// public Android.java.lang.String getAttributeValue(int arg0) :23090
void Android_android_util_AttributeSet__getAttributeValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getAttributeValue1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeValue_IMPL_20301(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :23198
void Android_android_util_AttributeSet__getAttributeValue_IMPL_20301_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeValue_IMPL_20301(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeValue_IMPL_20302(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :23201
void Android_android_util_AttributeSet__getAttributeValue_IMPL_20302_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeValue_IMPL_20302(*arg0_, *arg1_, arg2_, arg3_);
}

// public Android.java.lang.String getClassAttribute() :23175
void Android_android_util_AttributeSet__getClassAttribute_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getClassAttribute();
}

// public static extern Android.Base.Wrappers.IJWrapper getClassAttribute_IMPL_20318(bool arg0, Android.Base.Primitives.ujobject arg1) :23249
void Android_android_util_AttributeSet__getClassAttribute_IMPL_20318_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getClassAttribute_IMPL_20318(*arg0_, *arg1_);
}

// public Android.java.lang.String getIdAttribute() :23170
void Android_android_util_AttributeSet__getIdAttribute_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getIdAttribute();
}

// public static extern Android.Base.Wrappers.IJWrapper getIdAttribute_IMPL_20317(bool arg0, Android.Base.Primitives.ujobject arg1) :23246
void Android_android_util_AttributeSet__getIdAttribute_IMPL_20317_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getIdAttribute_IMPL_20317(*arg0_, *arg1_);
}

// public int getIdAttributeResourceValue(int arg0) :23180
void Android_android_util_AttributeSet__getIdAttributeResourceValue_fn(Android_android_util_AttributeSet* __this, int* arg0, int* __retval)
{
    *__retval = __this->getIdAttributeResourceValue(*arg0);
}

// public static extern int getIdAttributeResourceValue_IMPL_20319(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :23252
void Android_android_util_AttributeSet__getIdAttributeResourceValue_IMPL_20319_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getIdAttributeResourceValue_IMPL_20319(*arg0_, *arg1_, *arg2_);
}

// public Android.java.lang.String getPositionDescription() :23100
void Android_android_util_AttributeSet__getPositionDescription_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getPositionDescription();
}

// public static extern Android.Base.Wrappers.IJWrapper getPositionDescription_IMPL_20303(bool arg0, Android.Base.Primitives.ujobject arg1) :23204
void Android_android_util_AttributeSet__getPositionDescription_IMPL_20303_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getPositionDescription_IMPL_20303(*arg0_, *arg1_);
}

// public int getStyleAttribute() :23185
void Android_android_util_AttributeSet__getStyleAttribute_fn(Android_android_util_AttributeSet* __this, int* __retval)
{
    *__retval = __this->getStyleAttribute();
}

// public static extern int getStyleAttribute_IMPL_20320(bool arg0, Android.Base.Primitives.ujobject arg1) :23255
void Android_android_util_AttributeSet__getStyleAttribute_IMPL_20320_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getStyleAttribute_IMPL_20320(*arg0_, *arg1_);
}

jmethodID Android_android_util_AttributeSet::getAttributeBooleanValue_20306_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeBooleanValue_20312_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeCount_20299_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeFloatValue_20310_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeFloatValue_20316_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeIntValue_20308_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeIntValue_20314_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeListValue_20305_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeListValue_20311_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeName_20300_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeNameResource_20304_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeResourceValue_20307_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeResourceValue_20313_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20309_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20315_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeValue_20301_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeValue_20302_ID_;
jmethodID Android_android_util_AttributeSet::getClassAttribute_20318_ID_;
jmethodID Android_android_util_AttributeSet::getIdAttribute_20317_ID_;
jmethodID Android_android_util_AttributeSet::getIdAttributeResourceValue_20319_ID_;
jmethodID Android_android_util_AttributeSet::getPositionDescription_20303_ID_;
jmethodID Android_android_util_AttributeSet::getStyleAttribute_20320_ID_;

// public bool getAttributeBooleanValue(Android.java.lang.String arg0, Android.java.lang.String arg1, bool arg2) [instance] :23115
bool Android_android_util_AttributeSet::getAttributeBooleanValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, bool arg2)
{
    return Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20306(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2);
}

// public bool getAttributeBooleanValue(int arg0, bool arg1) [instance] :23145
bool Android_android_util_AttributeSet::getAttributeBooleanValue1(int arg0, bool arg1)
{
    return Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20312(_subclassed, _javaObject, arg0, arg1);
}

// public int getAttributeCount() [instance] :23080
int Android_android_util_AttributeSet::getAttributeCount()
{
    return Android_android_util_AttributeSet::getAttributeCount_IMPL_20299(_subclassed, _javaObject);
}

// public float getAttributeFloatValue(Android.java.lang.String arg0, Android.java.lang.String arg1, float arg2) [instance] :23135
float Android_android_util_AttributeSet::getAttributeFloatValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, float arg2)
{
    return Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20310(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2);
}

// public float getAttributeFloatValue(int arg0, float arg1) [instance] :23165
float Android_android_util_AttributeSet::getAttributeFloatValue1(int arg0, float arg1)
{
    return Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20316(_subclassed, _javaObject, arg0, arg1);
}

// public int getAttributeIntValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) [instance] :23125
int Android_android_util_AttributeSet::getAttributeIntValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20308(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2);
}

// public int getAttributeIntValue(int arg0, int arg1) [instance] :23155
int Android_android_util_AttributeSet::getAttributeIntValue1(int arg0, int arg1)
{
    return Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20314(_subclassed, _javaObject, arg0, arg1);
}

// public int getAttributeListValue(Android.java.lang.String arg0, Android.java.lang.String arg1, Android.Runtime.ObjectArray<Android.java.lang.String> arg2, int arg3) [instance] :23110
int Android_android_util_AttributeSet::getAttributeListValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::Runtime::ObjectArray* arg2, int arg3)
{
    return Android_android_util_AttributeSet::getAttributeListValue_IMPL_20305(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2, arg3);
}

// public int getAttributeListValue(int arg0, Android.Runtime.ObjectArray<Android.java.lang.String> arg1, int arg2) [instance] :23140
int Android_android_util_AttributeSet::getAttributeListValue1(int arg0, ::g::Android::Runtime::ObjectArray* arg1, int arg2)
{
    return Android_android_util_AttributeSet::getAttributeListValue_IMPL_20311(_subclassed, _javaObject, arg0, (uObject*)arg1, arg2);
}

// public Android.java.lang.String getAttributeName(int arg0) [instance] :23085
::g::Android::java::lang::String* Android_android_util_AttributeSet::getAttributeName(int arg0)
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getAttributeName_IMPL_20300(_subclassed, _javaObject, arg0), ::TYPES[4/*Android.java.lang.String*/]);
}

// public int getAttributeNameResource(int arg0) [instance] :23105
int Android_android_util_AttributeSet::getAttributeNameResource(int arg0)
{
    return Android_android_util_AttributeSet::getAttributeNameResource_IMPL_20304(_subclassed, _javaObject, arg0);
}

// public int getAttributeResourceValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) [instance] :23120
int Android_android_util_AttributeSet::getAttributeResourceValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20307(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2);
}

// public int getAttributeResourceValue(int arg0, int arg1) [instance] :23150
int Android_android_util_AttributeSet::getAttributeResourceValue1(int arg0, int arg1)
{
    return Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20313(_subclassed, _javaObject, arg0, arg1);
}

// public int getAttributeUnsignedIntValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) [instance] :23130
int Android_android_util_AttributeSet::getAttributeUnsignedIntValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20309(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2);
}

// public int getAttributeUnsignedIntValue(int arg0, int arg1) [instance] :23160
int Android_android_util_AttributeSet::getAttributeUnsignedIntValue1(int arg0, int arg1)
{
    return Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20315(_subclassed, _javaObject, arg0, arg1);
}

// public Android.java.lang.String getAttributeValue(Android.java.lang.String arg0, Android.java.lang.String arg1) [instance] :23095
::g::Android::java::lang::String* Android_android_util_AttributeSet::getAttributeValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1)
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getAttributeValue_IMPL_20302(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1), ::TYPES[4/*Android.java.lang.String*/]);
}

// public Android.java.lang.String getAttributeValue(int arg0) [instance] :23090
::g::Android::java::lang::String* Android_android_util_AttributeSet::getAttributeValue1(int arg0)
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getAttributeValue_IMPL_20301(_subclassed, _javaObject, arg0), ::TYPES[4/*Android.java.lang.String*/]);
}

// public Android.java.lang.String getClassAttribute() [instance] :23175
::g::Android::java::lang::String* Android_android_util_AttributeSet::getClassAttribute()
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getClassAttribute_IMPL_20318(_subclassed, _javaObject), ::TYPES[4/*Android.java.lang.String*/]);
}

// public Android.java.lang.String getIdAttribute() [instance] :23170
::g::Android::java::lang::String* Android_android_util_AttributeSet::getIdAttribute()
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getIdAttribute_IMPL_20317(_subclassed, _javaObject), ::TYPES[4/*Android.java.lang.String*/]);
}

// public int getIdAttributeResourceValue(int arg0) [instance] :23180
int Android_android_util_AttributeSet::getIdAttributeResourceValue(int arg0)
{
    return Android_android_util_AttributeSet::getIdAttributeResourceValue_IMPL_20319(_subclassed, _javaObject, arg0);
}

// public Android.java.lang.String getPositionDescription() [instance] :23100
::g::Android::java::lang::String* Android_android_util_AttributeSet::getPositionDescription()
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getPositionDescription_IMPL_20303(_subclassed, _javaObject), ::TYPES[4/*Android.java.lang.String*/]);
}

// public int getStyleAttribute() [instance] :23185
int Android_android_util_AttributeSet::getStyleAttribute()
{
    return Android_android_util_AttributeSet::getStyleAttribute_IMPL_20320(_subclassed, _javaObject);
}

// public static extern bool getAttributeBooleanValue_IMPL_20306(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) [static] :23213
bool Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20306(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeBooleanValue_20306_ID(),"android/util/AttributeSet","getAttributeBooleanValue","(Ljava/lang/String;Ljava/lang/String;Z)Z",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeBooleanValue could not be cached",93);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_util_AttributeSet::getAttributeBooleanValue_20306_ID(), _obArg2, _obArg3, ((jboolean)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool getAttributeBooleanValue_IMPL_20312(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) [static] :23231
bool Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20312(bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeBooleanValue_20312_ID(),"android/util/AttributeSet","getAttributeBooleanValue","(IZ)Z",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeBooleanValue could not be cached",93);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_util_AttributeSet::getAttributeBooleanValue_20312_ID(), ((jint)arg2_), ((jboolean)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeCount_IMPL_20299(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :23192
int Android_android_util_AttributeSet::getAttributeCount_IMPL_20299(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeCount_20299_ID(),"android/util/AttributeSet","getAttributeCount","()I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeCount could not be cached",86);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeCount_20299_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getAttributeFloatValue_IMPL_20310(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, float arg4) [static] :23225
float Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20310(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, float arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeFloatValue_20310_ID(),"android/util/AttributeSet","getAttributeFloatValue","(Ljava/lang/String;Ljava/lang/String;F)F",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeFloatValue could not be cached",91);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    float result;
    result = ((float)U_JNIVAR->CallFloatMethod(arg1_, Android_android_util_AttributeSet::getAttributeFloatValue_20310_ID(), _obArg2, _obArg3, ((jfloat)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getAttributeFloatValue_IMPL_20316(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, float arg3) [static] :23243
float Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20316(bool arg0_, jobject arg1_, int arg2_, float arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeFloatValue_20316_ID(),"android/util/AttributeSet","getAttributeFloatValue","(IF)F",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeFloatValue could not be cached",91);
    
    float result;
    result = ((float)U_JNIVAR->CallFloatMethod(arg1_, Android_android_util_AttributeSet::getAttributeFloatValue_20316_ID(), ((jint)arg2_), ((jfloat)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeIntValue_IMPL_20308(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :23219
int Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20308(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeIntValue_20308_ID(),"android/util/AttributeSet","getAttributeIntValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeIntValue could not be cached",89);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeIntValue_20308_ID(), _obArg2, _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeIntValue_IMPL_20314(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :23237
int Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20314(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeIntValue_20314_ID(),"android/util/AttributeSet","getAttributeIntValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeIntValue could not be cached",89);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeIntValue_20314_ID(), ((jint)arg2_), ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeListValue_IMPL_20305(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5) [static] :23210
int Android_android_util_AttributeSet::getAttributeListValue_IMPL_20305(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeListValue_20305_ID(),"android/util/AttributeSet","getAttributeListValue","(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeListValue could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeListValue_20305_ID(), _obArg2, _obArg3, _obArg4, ((jint)arg5_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeListValue_IMPL_20311(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :23228
int Android_android_util_AttributeSet::getAttributeListValue_IMPL_20311(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeListValue_20311_ID(),"android/util/AttributeSet","getAttributeListValue","(I[Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeListValue could not be cached",90);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeListValue_20311_ID(), ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeName_IMPL_20300(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :23195
uObject* Android_android_util_AttributeSet::getAttributeName_IMPL_20300(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeName_20300_ID(),"android/util/AttributeSet","getAttributeName","(I)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeName could not be cached",85);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getAttributeName_20300_ID(), ((jint)arg2_)),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeNameResource_IMPL_20304(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :23207
int Android_android_util_AttributeSet::getAttributeNameResource_IMPL_20304(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeNameResource_20304_ID(),"android/util/AttributeSet","getAttributeNameResource","(I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeNameResource could not be cached",93);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeNameResource_20304_ID(), ((jint)arg2_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeResourceValue_IMPL_20307(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :23216
int Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20307(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeResourceValue_20307_ID(),"android/util/AttributeSet","getAttributeResourceValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeResourceValue could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeResourceValue_20307_ID(), _obArg2, _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeResourceValue_IMPL_20313(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :23234
int Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20313(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeResourceValue_20313_ID(),"android/util/AttributeSet","getAttributeResourceValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeResourceValue could not be cached",94);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeResourceValue_20313_ID(), ((jint)arg2_), ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeUnsignedIntValue_IMPL_20309(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :23222
int Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20309(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20309_ID(),"android/util/AttributeSet","getAttributeUnsignedIntValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeUnsignedIntValue could not be cached",97);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20309_ID(), _obArg2, _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeUnsignedIntValue_IMPL_20315(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :23240
int Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20315(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20315_ID(),"android/util/AttributeSet","getAttributeUnsignedIntValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeUnsignedIntValue could not be cached",97);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20315_ID(), ((jint)arg2_), ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeValue_IMPL_20301(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :23198
uObject* Android_android_util_AttributeSet::getAttributeValue_IMPL_20301(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeValue_20301_ID(),"android/util/AttributeSet","getAttributeValue","(I)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeValue could not be cached",86);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getAttributeValue_20301_ID(), ((jint)arg2_)),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeValue_IMPL_20302(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :23201
uObject* Android_android_util_AttributeSet::getAttributeValue_IMPL_20302(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeValue_20302_ID(),"android/util/AttributeSet","getAttributeValue","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeValue could not be cached",86);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getAttributeValue_20302_ID(), _obArg2, _obArg3),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getClassAttribute_IMPL_20318(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :23249
uObject* Android_android_util_AttributeSet::getClassAttribute_IMPL_20318(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getClassAttribute_20318_ID(),"android/util/AttributeSet","getClassAttribute","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getClassAttribute could not be cached",86);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getClassAttribute_20318_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getIdAttribute_IMPL_20317(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :23246
uObject* Android_android_util_AttributeSet::getIdAttribute_IMPL_20317(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getIdAttribute_20317_ID(),"android/util/AttributeSet","getIdAttribute","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getIdAttribute could not be cached",83);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getIdAttribute_20317_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getIdAttributeResourceValue_IMPL_20319(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :23252
int Android_android_util_AttributeSet::getIdAttributeResourceValue_IMPL_20319(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getIdAttributeResourceValue_20319_ID(),"android/util/AttributeSet","getIdAttributeResourceValue","(I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getIdAttributeResourceValue could not be cached",96);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getIdAttributeResourceValue_20319_ID(), ((jint)arg2_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getPositionDescription_IMPL_20303(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :23204
uObject* Android_android_util_AttributeSet::getPositionDescription_IMPL_20303(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getPositionDescription_20303_ID(),"android/util/AttributeSet","getPositionDescription","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getPositionDescription could not be cached",91);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getPositionDescription_20303_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getStyleAttribute_IMPL_20320(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :23255
int Android_android_util_AttributeSet::getStyleAttribute_IMPL_20320(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getStyleAttribute_20320_ID(),"android/util/AttributeSet","getStyleAttribute","()I",GetMethodID,"Id for fallback method android.util.AttributeSet.getStyleAttribute could not be cached",86);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getStyleAttribute_20320_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(1137)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_ActionMode :1137
// {
::g::Android::java::lang::Object_type* Android_android_view_ActionMode_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_view_ActionMode);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_view_ActionMode", options);
    type->SetBase(::g::Android::android::view::ActionMode_typeof());
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

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(1251)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_ActionProvider :1251
// {
::g::Android::java::lang::Object_type* Android_android_view_ActionProvider_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_view_ActionProvider);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_view_ActionProvider", options);
    type->SetBase(::g::Android::android::view::ActionProvider_typeof());
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

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(18637)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_ChoreographerDLRFrameCallback :18637
// {
Android_android_view_ChoreographerDLRFrameCallback_type* Android_android_view_ChoreographerDLRFrameCallback_typeof()
{
    static uSStrong<Android_android_view_ChoreographerDLRFrameCallback_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_ChoreographerDLRFrameCallback);
    options.TypeSize = sizeof(Android_android_view_ChoreographerDLRFrameCallback_type);
    type = (Android_android_view_ChoreographerDLRFrameCallback_type*)uClassType::New("Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_doFrame = (void(*)(uObject*, int64_t*))Android_android_view_ChoreographerDLRFrameCallback__doFrame_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_ChoreographerDLRFrameCallback_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_ChoreographerDLRFrameCallback_type, interface1),
        ::g::Android::android::view::ChoreographerDLRFrameCallback_typeof(), offsetof(Android_android_view_ChoreographerDLRFrameCallback_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_ChoreographerDLRFrameCallback::doFrame_21642_ID_, uFieldFlagsStatic);
    return type;
}

// public void doFrame(long arg0) :18640
void Android_android_view_ChoreographerDLRFrameCallback__doFrame_fn(Android_android_view_ChoreographerDLRFrameCallback* __this, int64_t* arg0)
{
    __this->doFrame(*arg0);
}

// public static extern void doFrame_IMPL_21642(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2) :18647
void Android_android_view_ChoreographerDLRFrameCallback__doFrame_IMPL_21642_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_)
{
    Android_android_view_ChoreographerDLRFrameCallback::doFrame_IMPL_21642(*arg0_, *arg1_, *arg2_);
}

jmethodID Android_android_view_ChoreographerDLRFrameCallback::doFrame_21642_ID_;

// public void doFrame(long arg0) [instance] :18640
void Android_android_view_ChoreographerDLRFrameCallback::doFrame(int64_t arg0)
{
    Android_android_view_ChoreographerDLRFrameCallback::doFrame_IMPL_21642(_subclassed, _javaObject, arg0);
}

// public static extern void doFrame_IMPL_21642(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2) [static] :18647
void Android_android_view_ChoreographerDLRFrameCallback::doFrame_IMPL_21642(bool arg0_, jobject arg1_, int64_t arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_ChoreographerDLRFrameCallback::doFrame_21642_ID(),"android/view/Choreographer$FrameCallback","doFrame","(J)V",GetMethodID,"Id for fallback method android.view.Choreographer$FrameCallback.doFrame could not be cached",91);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_ChoreographerDLRFrameCallback::doFrame_21642_ID(), ((jlong)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(18697)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_ContextMenuDLRContextMenuInfo :18697
// {
Android_android_view_ContextMenuDLRContextMenuInfo_type* Android_android_view_ContextMenuDLRContextMenuInfo_typeof()
{
    static uSStrong<Android_android_view_ContextMenuDLRContextMenuInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_ContextMenuDLRContextMenuInfo);
    options.TypeSize = sizeof(Android_android_view_ContextMenuDLRContextMenuInfo_type);
    type = (Android_android_view_ContextMenuDLRContextMenuInfo_type*)uClassType::New("Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo_type, interface1),
        ::g::Android::android::view::ContextMenuDLRContextMenuInfo_typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo_type, interface2));
    type->SetFields(5);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(19251)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_Menu :19251
// {
Android_android_view_Menu_type* Android_android_view_Menu_typeof()
{
    static uSStrong<Android_android_view_Menu_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_Menu);
    options.TypeSize = sizeof(Android_android_view_Menu_type);
    type = (Android_android_view_Menu_type*)uClassType::New("Android.Fallbacks.Android_android_view_Menu", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_add = (void(*)(uObject*, uObject*, uObject**))Android_android_view_Menu__add_fn;
    type->interface2.fp_add1 = (void(*)(uObject*, int*, uObject**))Android_android_view_Menu__add1_fn;
    type->interface2.fp_add2 = (void(*)(uObject*, int*, int*, int*, uObject*, uObject**))Android_android_view_Menu__add2_fn;
    type->interface2.fp_add3 = (void(*)(uObject*, int*, int*, int*, int*, uObject**))Android_android_view_Menu__add3_fn;
    type->interface2.fp_addSubMenu = (void(*)(uObject*, uObject*, uObject**))Android_android_view_Menu__addSubMenu_fn;
    type->interface2.fp_addSubMenu1 = (void(*)(uObject*, int*, uObject**))Android_android_view_Menu__addSubMenu1_fn;
    type->interface2.fp_addSubMenu2 = (void(*)(uObject*, int*, int*, int*, uObject*, uObject**))Android_android_view_Menu__addSubMenu2_fn;
    type->interface2.fp_addSubMenu3 = (void(*)(uObject*, int*, int*, int*, int*, uObject**))Android_android_view_Menu__addSubMenu3_fn;
    type->interface2.fp_addIntentOptions = (void(*)(uObject*, int*, int*, int*, ::g::Android::android::content::ComponentName*, ::g::Android::Runtime::ObjectArray*, ::g::Android::android::content::Intent*, int*, ::g::Android::Runtime::ObjectArray*, int*))Android_android_view_Menu__addIntentOptions_fn;
    type->interface2.fp_removeItem = (void(*)(uObject*, int*))Android_android_view_Menu__removeItem_fn;
    type->interface2.fp_removeGroup = (void(*)(uObject*, int*))Android_android_view_Menu__removeGroup_fn;
    type->interface2.fp_clear = (void(*)(uObject*))Android_android_view_Menu__clear_fn;
    type->interface2.fp_setGroupCheckable = (void(*)(uObject*, int*, bool*, bool*))Android_android_view_Menu__setGroupCheckable_fn;
    type->interface2.fp_setGroupVisible = (void(*)(uObject*, int*, bool*))Android_android_view_Menu__setGroupVisible_fn;
    type->interface2.fp_setGroupEnabled = (void(*)(uObject*, int*, bool*))Android_android_view_Menu__setGroupEnabled_fn;
    type->interface2.fp_hasVisibleItems = (void(*)(uObject*, bool*))Android_android_view_Menu__hasVisibleItems_fn;
    type->interface2.fp_findItem = (void(*)(uObject*, int*, uObject**))Android_android_view_Menu__findItem_fn;
    type->interface2.fp_size = (void(*)(uObject*, int*))Android_android_view_Menu__size_fn;
    type->interface2.fp_getItem = (void(*)(uObject*, int*, uObject**))Android_android_view_Menu__getItem_fn;
    type->interface2.fp_close = (void(*)(uObject*))Android_android_view_Menu__close_fn;
    type->interface2.fp_performShortcut = (void(*)(uObject*, int*, ::g::Android::android::view::KeyEvent*, int*, bool*))Android_android_view_Menu__performShortcut_fn;
    type->interface2.fp_isShortcutKey = (void(*)(uObject*, int*, ::g::Android::android::view::KeyEvent*, bool*))Android_android_view_Menu__isShortcutKey_fn;
    type->interface2.fp_performIdentifierAction = (void(*)(uObject*, int*, int*, bool*))Android_android_view_Menu__performIdentifierAction_fn;
    type->interface2.fp_setQwertyMode = (void(*)(uObject*, bool*))Android_android_view_Menu__setQwertyMode_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[11] = ::g::Android::android::view::MenuItem_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[12] = ::g::Android::android::view::SubMenu_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_Menu_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_Menu_type, interface1),
        ::g::Android::android::view::Menu_typeof(), offsetof(Android_android_view_Menu_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::add_22256_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::add_22257_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::add_22258_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::add_22259_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::addIntentOptions_22264_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::addSubMenu_22260_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::addSubMenu_22261_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::addSubMenu_22262_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::addSubMenu_22263_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::clear_22267_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::close_22275_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::findItem_22272_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::getItem_22274_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::hasVisibleItems_22271_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::isShortcutKey_22277_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::performIdentifierAction_22278_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::performShortcut_22276_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::removeGroup_22266_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::removeItem_22265_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::setGroupCheckable_22268_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::setGroupEnabled_22270_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::setGroupVisible_22269_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::setQwertyMode_22279_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::size_22273_ID_, uFieldFlagsStatic);
    return type;
}

// public Android.android.view.MenuItem add(Android.java.lang.CharSequence arg0) :19254
void Android_android_view_Menu__add_fn(Android_android_view_Menu* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->add(arg0);
}

// public Android.android.view.MenuItem add(int arg0) :19259
void Android_android_view_Menu__add1_fn(Android_android_view_Menu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->add1(*arg0);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) :19264
void Android_android_view_Menu__add2_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, int* arg2, uObject* arg3, uObject** __retval)
{
    *__retval = __this->add2(*arg0, *arg1, *arg2, arg3);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, int arg3) :19269
void Android_android_view_Menu__add3_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, int* arg2, int* arg3, uObject** __retval)
{
    *__retval = __this->add3(*arg0, *arg1, *arg2, *arg3);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22256(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19376
void Android_android_view_Menu__add_IMPL_22256_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::add_IMPL_22256(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22257(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19379
void Android_android_view_Menu__add_IMPL_22257_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::add_IMPL_22257(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22258(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) :19382
void Android_android_view_Menu__add_IMPL_22258_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::add_IMPL_22258(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22259(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :19385
void Android_android_view_Menu__add_IMPL_22259_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::add_IMPL_22259(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public int addIntentOptions(int arg0, int arg1, int arg2, Android.android.content.ComponentName arg3, Android.Runtime.ObjectArray<Android.android.content.Intent> arg4, Android.android.content.Intent arg5, int arg6, Android.Runtime.ObjectArray<Android.android.view.MenuItem> arg7) :19294
void Android_android_view_Menu__addIntentOptions_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, int* arg2, ::g::Android::android::content::ComponentName* arg3, ::g::Android::Runtime::ObjectArray* arg4, ::g::Android::android::content::Intent* arg5, int* arg6, ::g::Android::Runtime::ObjectArray* arg7, int* __retval)
{
    *__retval = __this->addIntentOptions(*arg0, *arg1, *arg2, arg3, arg4, arg5, *arg6, arg7);
}

// public static extern int addIntentOptions_IMPL_22264(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6, Android.Base.Wrappers.IJWrapper arg7, int arg8, Android.Base.Wrappers.IJWrapper arg9) :19400
void Android_android_view_Menu__addIntentOptions_IMPL_22264_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject* arg6_, uObject* arg7_, int* arg8_, uObject* arg9_, int* __retval)
{
    *__retval = Android_android_view_Menu::addIntentOptions_IMPL_22264(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_, arg6_, arg7_, *arg8_, arg9_);
}

// public Android.android.view.SubMenu addSubMenu(Android.java.lang.CharSequence arg0) :19274
void Android_android_view_Menu__addSubMenu_fn(Android_android_view_Menu* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->addSubMenu(arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0) :19279
void Android_android_view_Menu__addSubMenu1_fn(Android_android_view_Menu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->addSubMenu1(*arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) :19284
void Android_android_view_Menu__addSubMenu2_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, int* arg2, uObject* arg3, uObject** __retval)
{
    *__retval = __this->addSubMenu2(*arg0, *arg1, *arg2, arg3);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, int arg3) :19289
void Android_android_view_Menu__addSubMenu3_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, int* arg2, int* arg3, uObject** __retval)
{
    *__retval = __this->addSubMenu3(*arg0, *arg1, *arg2, *arg3);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22260(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19388
void Android_android_view_Menu__addSubMenu_IMPL_22260_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::addSubMenu_IMPL_22260(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22261(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19391
void Android_android_view_Menu__addSubMenu_IMPL_22261_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::addSubMenu_IMPL_22261(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22262(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) :19394
void Android_android_view_Menu__addSubMenu_IMPL_22262_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::addSubMenu_IMPL_22262(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22263(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :19397
void Android_android_view_Menu__addSubMenu_IMPL_22263_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::addSubMenu_IMPL_22263(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public void clear() :19309
void Android_android_view_Menu__clear_fn(Android_android_view_Menu* __this)
{
    __this->clear();
}

// public static extern void clear_IMPL_22267(bool arg0, Android.Base.Primitives.ujobject arg1) :19409
void Android_android_view_Menu__clear_IMPL_22267_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_view_Menu::clear_IMPL_22267(*arg0_, *arg1_);
}

// public void close() :19349
void Android_android_view_Menu__close_fn(Android_android_view_Menu* __this)
{
    __this->close();
}

// public static extern void close_IMPL_22275(bool arg0, Android.Base.Primitives.ujobject arg1) :19433
void Android_android_view_Menu__close_IMPL_22275_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_view_Menu::close_IMPL_22275(*arg0_, *arg1_);
}

// public Android.android.view.MenuItem findItem(int arg0) :19334
void Android_android_view_Menu__findItem_fn(Android_android_view_Menu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->findItem(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper findItem_IMPL_22272(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19424
void Android_android_view_Menu__findItem_IMPL_22272_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::findItem_IMPL_22272(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem getItem(int arg0) :19344
void Android_android_view_Menu__getItem_fn(Android_android_view_Menu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->getItem(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22274(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19430
void Android_android_view_Menu__getItem_IMPL_22274_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::getItem_IMPL_22274(*arg0_, *arg1_, *arg2_);
}

// public bool hasVisibleItems() :19329
void Android_android_view_Menu__hasVisibleItems_fn(Android_android_view_Menu* __this, bool* __retval)
{
    *__retval = __this->hasVisibleItems();
}

// public static extern bool hasVisibleItems_IMPL_22271(bool arg0, Android.Base.Primitives.ujobject arg1) :19421
void Android_android_view_Menu__hasVisibleItems_IMPL_22271_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_Menu::hasVisibleItems_IMPL_22271(*arg0_, *arg1_);
}

// public bool isShortcutKey(int arg0, Android.android.view.KeyEvent arg1) :19359
void Android_android_view_Menu__isShortcutKey_fn(Android_android_view_Menu* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    *__retval = __this->isShortcutKey(*arg0, arg1);
}

// public static extern bool isShortcutKey_IMPL_22277(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :19439
void Android_android_view_Menu__isShortcutKey_IMPL_22277_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = Android_android_view_Menu::isShortcutKey_IMPL_22277(*arg0_, *arg1_, *arg2_, arg3_);
}

// public bool performIdentifierAction(int arg0, int arg1) :19364
void Android_android_view_Menu__performIdentifierAction_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, bool* __retval)
{
    *__retval = __this->performIdentifierAction(*arg0, *arg1);
}

// public static extern bool performIdentifierAction_IMPL_22278(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :19442
void Android_android_view_Menu__performIdentifierAction_IMPL_22278_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* __retval)
{
    *__retval = Android_android_view_Menu::performIdentifierAction_IMPL_22278(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public bool performShortcut(int arg0, Android.android.view.KeyEvent arg1, int arg2) :19354
void Android_android_view_Menu__performShortcut_fn(Android_android_view_Menu* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, int* arg2, bool* __retval)
{
    *__retval = __this->performShortcut(*arg0, arg1, *arg2);
}

// public static extern bool performShortcut_IMPL_22276(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :19436
void Android_android_view_Menu__performShortcut_IMPL_22276_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, int* arg4_, bool* __retval)
{
    *__retval = Android_android_view_Menu::performShortcut_IMPL_22276(*arg0_, *arg1_, *arg2_, arg3_, *arg4_);
}

// public void removeGroup(int arg0) :19304
void Android_android_view_Menu__removeGroup_fn(Android_android_view_Menu* __this, int* arg0)
{
    __this->removeGroup(*arg0);
}

// public static extern void removeGroup_IMPL_22266(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19406
void Android_android_view_Menu__removeGroup_IMPL_22266_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_Menu::removeGroup_IMPL_22266(*arg0_, *arg1_, *arg2_);
}

// public void removeItem(int arg0) :19299
void Android_android_view_Menu__removeItem_fn(Android_android_view_Menu* __this, int* arg0)
{
    __this->removeItem(*arg0);
}

// public static extern void removeItem_IMPL_22265(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19403
void Android_android_view_Menu__removeItem_IMPL_22265_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_Menu::removeItem_IMPL_22265(*arg0_, *arg1_, *arg2_);
}

// public void setGroupCheckable(int arg0, bool arg1, bool arg2) :19314
void Android_android_view_Menu__setGroupCheckable_fn(Android_android_view_Menu* __this, int* arg0, bool* arg1, bool* arg2)
{
    __this->setGroupCheckable(*arg0, *arg1, *arg2);
}

// public static extern void setGroupCheckable_IMPL_22268(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3, bool arg4) :19412
void Android_android_view_Menu__setGroupCheckable_IMPL_22268_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_, bool* arg4_)
{
    Android_android_view_Menu::setGroupCheckable_IMPL_22268(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_);
}

// public void setGroupEnabled(int arg0, bool arg1) :19324
void Android_android_view_Menu__setGroupEnabled_fn(Android_android_view_Menu* __this, int* arg0, bool* arg1)
{
    __this->setGroupEnabled(*arg0, *arg1);
}

// public static extern void setGroupEnabled_IMPL_22270(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) :19418
void Android_android_view_Menu__setGroupEnabled_IMPL_22270_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_)
{
    Android_android_view_Menu::setGroupEnabled_IMPL_22270(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setGroupVisible(int arg0, bool arg1) :19319
void Android_android_view_Menu__setGroupVisible_fn(Android_android_view_Menu* __this, int* arg0, bool* arg1)
{
    __this->setGroupVisible(*arg0, *arg1);
}

// public static extern void setGroupVisible_IMPL_22269(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) :19415
void Android_android_view_Menu__setGroupVisible_IMPL_22269_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_)
{
    Android_android_view_Menu::setGroupVisible_IMPL_22269(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setQwertyMode(bool arg0) :19369
void Android_android_view_Menu__setQwertyMode_fn(Android_android_view_Menu* __this, bool* arg0)
{
    __this->setQwertyMode(*arg0);
}

// public static extern void setQwertyMode_IMPL_22279(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :19445
void Android_android_view_Menu__setQwertyMode_IMPL_22279_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    Android_android_view_Menu::setQwertyMode_IMPL_22279(*arg0_, *arg1_, *arg2_);
}

// public int size() :19339
void Android_android_view_Menu__size_fn(Android_android_view_Menu* __this, int* __retval)
{
    *__retval = __this->size();
}

// public static extern int size_IMPL_22273(bool arg0, Android.Base.Primitives.ujobject arg1) :19427
void Android_android_view_Menu__size_IMPL_22273_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_view_Menu::size_IMPL_22273(*arg0_, *arg1_);
}

jmethodID Android_android_view_Menu::add_22256_ID_;
jmethodID Android_android_view_Menu::add_22257_ID_;
jmethodID Android_android_view_Menu::add_22258_ID_;
jmethodID Android_android_view_Menu::add_22259_ID_;
jmethodID Android_android_view_Menu::addIntentOptions_22264_ID_;
jmethodID Android_android_view_Menu::addSubMenu_22260_ID_;
jmethodID Android_android_view_Menu::addSubMenu_22261_ID_;
jmethodID Android_android_view_Menu::addSubMenu_22262_ID_;
jmethodID Android_android_view_Menu::addSubMenu_22263_ID_;
jmethodID Android_android_view_Menu::clear_22267_ID_;
jmethodID Android_android_view_Menu::close_22275_ID_;
jmethodID Android_android_view_Menu::findItem_22272_ID_;
jmethodID Android_android_view_Menu::getItem_22274_ID_;
jmethodID Android_android_view_Menu::hasVisibleItems_22271_ID_;
jmethodID Android_android_view_Menu::isShortcutKey_22277_ID_;
jmethodID Android_android_view_Menu::performIdentifierAction_22278_ID_;
jmethodID Android_android_view_Menu::performShortcut_22276_ID_;
jmethodID Android_android_view_Menu::removeGroup_22266_ID_;
jmethodID Android_android_view_Menu::removeItem_22265_ID_;
jmethodID Android_android_view_Menu::setGroupCheckable_22268_ID_;
jmethodID Android_android_view_Menu::setGroupEnabled_22270_ID_;
jmethodID Android_android_view_Menu::setGroupVisible_22269_ID_;
jmethodID Android_android_view_Menu::setQwertyMode_22279_ID_;
jmethodID Android_android_view_Menu::size_22273_ID_;

// public Android.android.view.MenuItem add(Android.java.lang.CharSequence arg0) [instance] :19254
uObject* Android_android_view_Menu::add(uObject* arg0)
{
    return Android_android_view_Menu::add_IMPL_22256(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem add(int arg0) [instance] :19259
uObject* Android_android_view_Menu::add1(int arg0)
{
    return Android_android_view_Menu::add_IMPL_22257(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) [instance] :19264
uObject* Android_android_view_Menu::add2(int arg0, int arg1, int arg2, uObject* arg3)
{
    return Android_android_view_Menu::add_IMPL_22258(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, int arg3) [instance] :19269
uObject* Android_android_view_Menu::add3(int arg0, int arg1, int arg2, int arg3)
{
    return Android_android_view_Menu::add_IMPL_22259(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public int addIntentOptions(int arg0, int arg1, int arg2, Android.android.content.ComponentName arg3, Android.Runtime.ObjectArray<Android.android.content.Intent> arg4, Android.android.content.Intent arg5, int arg6, Android.Runtime.ObjectArray<Android.android.view.MenuItem> arg7) [instance] :19294
int Android_android_view_Menu::addIntentOptions(int arg0, int arg1, int arg2, ::g::Android::android::content::ComponentName* arg3, ::g::Android::Runtime::ObjectArray* arg4, ::g::Android::android::content::Intent* arg5, int arg6, ::g::Android::Runtime::ObjectArray* arg7)
{
    return Android_android_view_Menu::addIntentOptions_IMPL_22264(_subclassed, _javaObject, arg0, arg1, arg2, (uObject*)arg3, (uObject*)arg4, (uObject*)arg5, arg6, (uObject*)arg7);
}

// public Android.android.view.SubMenu addSubMenu(Android.java.lang.CharSequence arg0) [instance] :19274
uObject* Android_android_view_Menu::addSubMenu(uObject* arg0)
{
    return Android_android_view_Menu::addSubMenu_IMPL_22260(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0) [instance] :19279
uObject* Android_android_view_Menu::addSubMenu1(int arg0)
{
    return Android_android_view_Menu::addSubMenu_IMPL_22261(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) [instance] :19284
uObject* Android_android_view_Menu::addSubMenu2(int arg0, int arg1, int arg2, uObject* arg3)
{
    return Android_android_view_Menu::addSubMenu_IMPL_22262(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, int arg3) [instance] :19289
uObject* Android_android_view_Menu::addSubMenu3(int arg0, int arg1, int arg2, int arg3)
{
    return Android_android_view_Menu::addSubMenu_IMPL_22263(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public void clear() [instance] :19309
void Android_android_view_Menu::clear()
{
    Android_android_view_Menu::clear_IMPL_22267(_subclassed, _javaObject);
}

// public void close() [instance] :19349
void Android_android_view_Menu::close()
{
    Android_android_view_Menu::close_IMPL_22275(_subclassed, _javaObject);
}

// public Android.android.view.MenuItem findItem(int arg0) [instance] :19334
uObject* Android_android_view_Menu::findItem(int arg0)
{
    return Android_android_view_Menu::findItem_IMPL_22272(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem getItem(int arg0) [instance] :19344
uObject* Android_android_view_Menu::getItem(int arg0)
{
    return Android_android_view_Menu::getItem_IMPL_22274(_subclassed, _javaObject, arg0);
}

// public bool hasVisibleItems() [instance] :19329
bool Android_android_view_Menu::hasVisibleItems()
{
    return Android_android_view_Menu::hasVisibleItems_IMPL_22271(_subclassed, _javaObject);
}

// public bool isShortcutKey(int arg0, Android.android.view.KeyEvent arg1) [instance] :19359
bool Android_android_view_Menu::isShortcutKey(int arg0, ::g::Android::android::view::KeyEvent* arg1)
{
    return Android_android_view_Menu::isShortcutKey_IMPL_22277(_subclassed, _javaObject, arg0, (uObject*)arg1);
}

// public bool performIdentifierAction(int arg0, int arg1) [instance] :19364
bool Android_android_view_Menu::performIdentifierAction(int arg0, int arg1)
{
    return Android_android_view_Menu::performIdentifierAction_IMPL_22278(_subclassed, _javaObject, arg0, arg1);
}

// public bool performShortcut(int arg0, Android.android.view.KeyEvent arg1, int arg2) [instance] :19354
bool Android_android_view_Menu::performShortcut(int arg0, ::g::Android::android::view::KeyEvent* arg1, int arg2)
{
    return Android_android_view_Menu::performShortcut_IMPL_22276(_subclassed, _javaObject, arg0, (uObject*)arg1, arg2);
}

// public void removeGroup(int arg0) [instance] :19304
void Android_android_view_Menu::removeGroup(int arg0)
{
    Android_android_view_Menu::removeGroup_IMPL_22266(_subclassed, _javaObject, arg0);
}

// public void removeItem(int arg0) [instance] :19299
void Android_android_view_Menu::removeItem(int arg0)
{
    Android_android_view_Menu::removeItem_IMPL_22265(_subclassed, _javaObject, arg0);
}

// public void setGroupCheckable(int arg0, bool arg1, bool arg2) [instance] :19314
void Android_android_view_Menu::setGroupCheckable(int arg0, bool arg1, bool arg2)
{
    Android_android_view_Menu::setGroupCheckable_IMPL_22268(_subclassed, _javaObject, arg0, arg1, arg2);
}

// public void setGroupEnabled(int arg0, bool arg1) [instance] :19324
void Android_android_view_Menu::setGroupEnabled(int arg0, bool arg1)
{
    Android_android_view_Menu::setGroupEnabled_IMPL_22270(_subclassed, _javaObject, arg0, arg1);
}

// public void setGroupVisible(int arg0, bool arg1) [instance] :19319
void Android_android_view_Menu::setGroupVisible(int arg0, bool arg1)
{
    Android_android_view_Menu::setGroupVisible_IMPL_22269(_subclassed, _javaObject, arg0, arg1);
}

// public void setQwertyMode(bool arg0) [instance] :19369
void Android_android_view_Menu::setQwertyMode(bool arg0)
{
    Android_android_view_Menu::setQwertyMode_IMPL_22279(_subclassed, _javaObject, arg0);
}

// public int size() [instance] :19339
int Android_android_view_Menu::size()
{
    return Android_android_view_Menu::size_IMPL_22273(_subclassed, _javaObject);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22256(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19376
uObject* Android_android_view_Menu::add_IMPL_22256(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::add_22256_ID(),"android/view/Menu","add","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::add_22256_ID(), _obArg2),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22257(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19379
uObject* Android_android_view_Menu::add_IMPL_22257(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::add_22257_ID(),"android/view/Menu","add","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::add_22257_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22258(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :19382
uObject* Android_android_view_Menu::add_IMPL_22258(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::add_22258_ID(),"android/view/Menu","add","(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::add_22258_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22259(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :19385
uObject* Android_android_view_Menu::add_IMPL_22259(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::add_22259_ID(),"android/view/Menu","add","(IIII)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::add_22259_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int addIntentOptions_IMPL_22264(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6, Android.Base.Wrappers.IJWrapper arg7, int arg8, Android.Base.Wrappers.IJWrapper arg9) [static] :19400
int Android_android_view_Menu::addIntentOptions_IMPL_22264(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_, uObject* arg6_, uObject* arg7_, int arg8_, uObject* arg9_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::addIntentOptions_22264_ID(),"android/view/Menu","addIntentOptions","(IIILandroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I[Landroid/view/MenuItem;)I",GetMethodID,"Id for fallback method android.view.Menu.addIntentOptions could not be cached",77);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg6 = ((!arg6_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg6_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg7 = ((!arg7_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg7_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg9 = ((!arg9_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg9_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_Menu::addIntentOptions_22264_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5, _obArg6, _obArg7, ((jint)arg8_), _obArg9));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22260(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19388
uObject* Android_android_view_Menu::addSubMenu_IMPL_22260(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::addSubMenu_22260_ID(),"android/view/Menu","addSubMenu","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::addSubMenu_22260_ID(), _obArg2),result,::g::Android::Fallbacks::Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22261(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19391
uObject* Android_android_view_Menu::addSubMenu_IMPL_22261(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::addSubMenu_22261_ID(),"android/view/Menu","addSubMenu","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::addSubMenu_22261_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22262(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :19394
uObject* Android_android_view_Menu::addSubMenu_IMPL_22262(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::addSubMenu_22262_ID(),"android/view/Menu","addSubMenu","(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::addSubMenu_22262_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::g::Android::Fallbacks::Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22263(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :19397
uObject* Android_android_view_Menu::addSubMenu_IMPL_22263(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::addSubMenu_22263_ID(),"android/view/Menu","addSubMenu","(IIII)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::addSubMenu_22263_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::g::Android::Fallbacks::Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_22267(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19409
void Android_android_view_Menu::clear_IMPL_22267(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::clear_22267_ID(),"android/view/Menu","clear","()V",GetMethodID,"Id for fallback method android.view.Menu.clear could not be cached",66);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::clear_22267_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void close_IMPL_22275(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19433
void Android_android_view_Menu::close_IMPL_22275(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::close_22275_ID(),"android/view/Menu","close","()V",GetMethodID,"Id for fallback method android.view.Menu.close could not be cached",66);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::close_22275_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper findItem_IMPL_22272(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19424
uObject* Android_android_view_Menu::findItem_IMPL_22272(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::findItem_22272_ID(),"android/view/Menu","findItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.findItem could not be cached",69);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::findItem_22272_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22274(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19430
uObject* Android_android_view_Menu::getItem_IMPL_22274(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::getItem_22274_ID(),"android/view/Menu","getItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.getItem could not be cached",68);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::getItem_22274_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool hasVisibleItems_IMPL_22271(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19421
bool Android_android_view_Menu::hasVisibleItems_IMPL_22271(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::hasVisibleItems_22271_ID(),"android/view/Menu","hasVisibleItems","()Z",GetMethodID,"Id for fallback method android.view.Menu.hasVisibleItems could not be cached",76);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_Menu::hasVisibleItems_22271_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isShortcutKey_IMPL_22277(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :19439
bool Android_android_view_Menu::isShortcutKey_IMPL_22277(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::isShortcutKey_22277_ID(),"android/view/Menu","isShortcutKey","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.view.Menu.isShortcutKey could not be cached",74);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_Menu::isShortcutKey_22277_ID(), ((jint)arg2_), _obArg3));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performIdentifierAction_IMPL_22278(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :19442
bool Android_android_view_Menu::performIdentifierAction_IMPL_22278(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::performIdentifierAction_22278_ID(),"android/view/Menu","performIdentifierAction","(II)Z",GetMethodID,"Id for fallback method android.view.Menu.performIdentifierAction could not be cached",84);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_Menu::performIdentifierAction_22278_ID(), ((jint)arg2_), ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performShortcut_IMPL_22276(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :19436
bool Android_android_view_Menu::performShortcut_IMPL_22276(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::performShortcut_22276_ID(),"android/view/Menu","performShortcut","(ILandroid/view/KeyEvent;I)Z",GetMethodID,"Id for fallback method android.view.Menu.performShortcut could not be cached",76);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_Menu::performShortcut_22276_ID(), ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void removeGroup_IMPL_22266(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19406
void Android_android_view_Menu::removeGroup_IMPL_22266(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::removeGroup_22266_ID(),"android/view/Menu","removeGroup","(I)V",GetMethodID,"Id for fallback method android.view.Menu.removeGroup could not be cached",72);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::removeGroup_22266_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void removeItem_IMPL_22265(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19403
void Android_android_view_Menu::removeItem_IMPL_22265(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::removeItem_22265_ID(),"android/view/Menu","removeItem","(I)V",GetMethodID,"Id for fallback method android.view.Menu.removeItem could not be cached",71);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::removeItem_22265_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupCheckable_IMPL_22268(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3, bool arg4) [static] :19412
void Android_android_view_Menu::setGroupCheckable_IMPL_22268(bool arg0_, jobject arg1_, int arg2_, bool arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::setGroupCheckable_22268_ID(),"android/view/Menu","setGroupCheckable","(IZZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupCheckable could not be cached",78);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::setGroupCheckable_22268_ID(), ((jint)arg2_), ((jboolean)arg3_), ((jboolean)arg4_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupEnabled_IMPL_22270(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) [static] :19418
void Android_android_view_Menu::setGroupEnabled_IMPL_22270(bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::setGroupEnabled_22270_ID(),"android/view/Menu","setGroupEnabled","(IZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupEnabled could not be cached",76);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::setGroupEnabled_22270_ID(), ((jint)arg2_), ((jboolean)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupVisible_IMPL_22269(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) [static] :19415
void Android_android_view_Menu::setGroupVisible_IMPL_22269(bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::setGroupVisible_22269_ID(),"android/view/Menu","setGroupVisible","(IZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupVisible could not be cached",76);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::setGroupVisible_22269_ID(), ((jint)arg2_), ((jboolean)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setQwertyMode_IMPL_22279(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :19445
void Android_android_view_Menu::setQwertyMode_IMPL_22279(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::setQwertyMode_22279_ID(),"android/view/Menu","setQwertyMode","(Z)V",GetMethodID,"Id for fallback method android.view.Menu.setQwertyMode could not be cached",74);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::setQwertyMode_22279_ID(), ((jboolean)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern int size_IMPL_22273(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19427
int Android_android_view_Menu::size_IMPL_22273(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::size_22273_ID(),"android/view/Menu","size","()I",GetMethodID,"Id for fallback method android.view.Menu.size could not be cached",65);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_Menu::size_22273_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(19521)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_MenuItem :19521
// {
Android_android_view_MenuItem_type* Android_android_view_MenuItem_typeof()
{
    static uSStrong<Android_android_view_MenuItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 46;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_MenuItem);
    options.TypeSize = sizeof(Android_android_view_MenuItem_type);
    type = (Android_android_view_MenuItem_type*)uClassType::New("Android.Fallbacks.Android_android_view_MenuItem", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_getItemId = (void(*)(uObject*, int*))Android_android_view_MenuItem__getItemId_fn;
    type->interface2.fp_getGroupId = (void(*)(uObject*, int*))Android_android_view_MenuItem__getGroupId_fn;
    type->interface2.fp_getOrder = (void(*)(uObject*, int*))Android_android_view_MenuItem__getOrder_fn;
    type->interface2.fp_setTitle = (void(*)(uObject*, uObject*, uObject**))Android_android_view_MenuItem__setTitle_fn;
    type->interface2.fp_setTitle1 = (void(*)(uObject*, int*, uObject**))Android_android_view_MenuItem__setTitle1_fn;
    type->interface2.fp_getTitle = (void(*)(uObject*, uObject**))Android_android_view_MenuItem__getTitle_fn;
    type->interface2.fp_setTitleCondensed = (void(*)(uObject*, uObject*, uObject**))Android_android_view_MenuItem__setTitleCondensed_fn;
    type->interface2.fp_getTitleCondensed = (void(*)(uObject*, uObject**))Android_android_view_MenuItem__getTitleCondensed_fn;
    type->interface2.fp_setIcon = (void(*)(uObject*, ::g::Android::android::graphics::drawable::Drawable*, uObject**))Android_android_view_MenuItem__setIcon_fn;
    type->interface2.fp_setIcon1 = (void(*)(uObject*, int*, uObject**))Android_android_view_MenuItem__setIcon1_fn;
    type->interface2.fp_getIcon = (void(*)(uObject*, ::g::Android::android::graphics::drawable::Drawable**))Android_android_view_MenuItem__getIcon_fn;
    type->interface2.fp_setIntent = (void(*)(uObject*, ::g::Android::android::content::Intent*, uObject**))Android_android_view_MenuItem__setIntent_fn;
    type->interface2.fp_getIntent = (void(*)(uObject*, ::g::Android::android::content::Intent**))Android_android_view_MenuItem__getIntent_fn;
    type->interface2.fp_setShortcut = (void(*)(uObject*, uChar*, uChar*, uObject**))Android_android_view_MenuItem__setShortcut_fn;
    type->interface2.fp_setNumericShortcut = (void(*)(uObject*, uChar*, uObject**))Android_android_view_MenuItem__setNumericShortcut_fn;
    type->interface2.fp_getNumericShortcut = (void(*)(uObject*, uChar*))Android_android_view_MenuItem__getNumericShortcut_fn;
    type->interface2.fp_setAlphabeticShortcut = (void(*)(uObject*, uChar*, uObject**))Android_android_view_MenuItem__setAlphabeticShortcut_fn;
    type->interface2.fp_getAlphabeticShortcut = (void(*)(uObject*, uChar*))Android_android_view_MenuItem__getAlphabeticShortcut_fn;
    type->interface2.fp_setCheckable = (void(*)(uObject*, bool*, uObject**))Android_android_view_MenuItem__setCheckable_fn;
    type->interface2.fp_isCheckable = (void(*)(uObject*, bool*))Android_android_view_MenuItem__isCheckable_fn;
    type->interface2.fp_setChecked = (void(*)(uObject*, bool*, uObject**))Android_android_view_MenuItem__setChecked_fn;
    type->interface2.fp_isChecked = (void(*)(uObject*, bool*))Android_android_view_MenuItem__isChecked_fn;
    type->interface2.fp_setVisible = (void(*)(uObject*, bool*, uObject**))Android_android_view_MenuItem__setVisible_fn;
    type->interface2.fp_isVisible = (void(*)(uObject*, bool*))Android_android_view_MenuItem__isVisible_fn;
    type->interface2.fp_setEnabled = (void(*)(uObject*, bool*, uObject**))Android_android_view_MenuItem__setEnabled_fn;
    type->interface2.fp_isEnabled = (void(*)(uObject*, bool*))Android_android_view_MenuItem__isEnabled_fn;
    type->interface2.fp_hasSubMenu = (void(*)(uObject*, bool*))Android_android_view_MenuItem__hasSubMenu_fn;
    type->interface2.fp_getSubMenu = (void(*)(uObject*, uObject**))Android_android_view_MenuItem__getSubMenu_fn;
    type->interface2.fp_setOnMenuItemClickListener = (void(*)(uObject*, uObject*, uObject**))Android_android_view_MenuItem__setOnMenuItemClickListener_fn;
    type->interface2.fp_getMenuInfo = (void(*)(uObject*, uObject**))Android_android_view_MenuItem__getMenuInfo_fn;
    type->interface2.fp_setShowAsAction = (void(*)(uObject*, int*))Android_android_view_MenuItem__setShowAsAction_fn;
    type->interface2.fp_setShowAsActionFlags = (void(*)(uObject*, int*, uObject**))Android_android_view_MenuItem__setShowAsActionFlags_fn;
    type->interface2.fp_setActionView = (void(*)(uObject*, ::g::Android::android::view::View*, uObject**))Android_android_view_MenuItem__setActionView_fn;
    type->interface2.fp_setActionView1 = (void(*)(uObject*, int*, uObject**))Android_android_view_MenuItem__setActionView1_fn;
    type->interface2.fp_getActionView = (void(*)(uObject*, ::g::Android::android::view::View**))Android_android_view_MenuItem__getActionView_fn;
    type->interface2.fp_setActionProvider = (void(*)(uObject*, ::g::Android::android::view::ActionProvider*, uObject**))Android_android_view_MenuItem__setActionProvider_fn;
    type->interface2.fp_getActionProvider = (void(*)(uObject*, ::g::Android::android::view::ActionProvider**))Android_android_view_MenuItem__getActionProvider_fn;
    type->interface2.fp_expandActionView = (void(*)(uObject*, bool*))Android_android_view_MenuItem__expandActionView_fn;
    type->interface2.fp_collapseActionView = (void(*)(uObject*, bool*))Android_android_view_MenuItem__collapseActionView_fn;
    type->interface2.fp_isActionViewExpanded = (void(*)(uObject*, bool*))Android_android_view_MenuItem__isActionViewExpanded_fn;
    type->interface2.fp_setOnActionExpandListener = (void(*)(uObject*, uObject*, uObject**))Android_android_view_MenuItem__setOnActionExpandListener_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[13] = ::g::Android::android::view::ActionProvider_typeof();
    ::TYPES[14] = ::g::Android::android::view::View_typeof();
    ::TYPES[15] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    ::TYPES[16] = ::g::Android::android::content::Intent_typeof();
    ::TYPES[17] = ::g::Android::android::view::ContextMenuDLRContextMenuInfo_typeof();
    ::TYPES[12] = ::g::Android::android::view::SubMenu_typeof();
    ::TYPES[10] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[11] = ::g::Android::android::view::MenuItem_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_MenuItem_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_MenuItem_type, interface1),
        ::g::Android::android::view::MenuItem_typeof(), offsetof(Android_android_view_MenuItem_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::collapseActionView_22332_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::expandActionView_22331_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getActionProvider_22330_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getActionView_22328_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getAlphabeticShortcut_22311_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getGroupId_22295_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getIcon_22304_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getIntent_22306_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getItemId_22294_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getMenuInfo_22323_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getNumericShortcut_22309_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getOrder_22296_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getSubMenu_22321_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getTitle_22299_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getTitleCondensed_22301_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::hasSubMenu_22320_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::isActionViewExpanded_22333_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::isCheckable_22313_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::isChecked_22315_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::isEnabled_22319_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::isVisible_22317_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setActionProvider_22329_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setActionView_22326_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setActionView_22327_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setAlphabeticShortcut_22310_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setCheckable_22312_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setChecked_22314_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setEnabled_22318_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setIcon_22302_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setIcon_22303_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setIntent_22305_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setNumericShortcut_22308_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setOnActionExpandListener_22334_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setOnMenuItemClickListener_22322_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setShortcut_22307_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setShowAsAction_22324_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setShowAsActionFlags_22325_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setTitle_22297_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setTitle_22298_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setTitleCondensed_22300_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setVisible_22316_ID_, uFieldFlagsStatic);
    return type;
}

// public bool collapseActionView() :19714
void Android_android_view_MenuItem__collapseActionView_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->collapseActionView();
}

// public static extern bool collapseActionView_IMPL_22332(bool arg0, Android.Base.Primitives.ujobject arg1) :19845
void Android_android_view_MenuItem__collapseActionView_IMPL_22332_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::collapseActionView_IMPL_22332(*arg0_, *arg1_);
}

// public bool expandActionView() :19709
void Android_android_view_MenuItem__expandActionView_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->expandActionView();
}

// public static extern bool expandActionView_IMPL_22331(bool arg0, Android.Base.Primitives.ujobject arg1) :19842
void Android_android_view_MenuItem__expandActionView_IMPL_22331_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::expandActionView_IMPL_22331(*arg0_, *arg1_);
}

// public Android.android.view.ActionProvider getActionProvider() :19704
void Android_android_view_MenuItem__getActionProvider_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::ActionProvider** __retval)
{
    *__retval = __this->getActionProvider();
}

// public static extern Android.Base.Wrappers.IJWrapper getActionProvider_IMPL_22330(bool arg0, Android.Base.Primitives.ujobject arg1) :19839
void Android_android_view_MenuItem__getActionProvider_IMPL_22330_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getActionProvider_IMPL_22330(*arg0_, *arg1_);
}

// public Android.android.view.View getActionView() :19694
void Android_android_view_MenuItem__getActionView_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::View** __retval)
{
    *__retval = __this->getActionView();
}

// public static extern Android.Base.Wrappers.IJWrapper getActionView_IMPL_22328(bool arg0, Android.Base.Primitives.ujobject arg1) :19833
void Android_android_view_MenuItem__getActionView_IMPL_22328_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getActionView_IMPL_22328(*arg0_, *arg1_);
}

// public char getAlphabeticShortcut() :19609
void Android_android_view_MenuItem__getAlphabeticShortcut_fn(Android_android_view_MenuItem* __this, uChar* __retval)
{
    *__retval = __this->getAlphabeticShortcut();
}

// public static extern char getAlphabeticShortcut_IMPL_22311(bool arg0, Android.Base.Primitives.ujobject arg1) :19782
void Android_android_view_MenuItem__getAlphabeticShortcut_IMPL_22311_fn(bool* arg0_, jobject* arg1_, uChar* __retval)
{
    *__retval = Android_android_view_MenuItem::getAlphabeticShortcut_IMPL_22311(*arg0_, *arg1_);
}

// public int getGroupId() :19529
void Android_android_view_MenuItem__getGroupId_fn(Android_android_view_MenuItem* __this, int* __retval)
{
    *__retval = __this->getGroupId();
}

// public static extern int getGroupId_IMPL_22295(bool arg0, Android.Base.Primitives.ujobject arg1) :19734
void Android_android_view_MenuItem__getGroupId_IMPL_22295_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_view_MenuItem::getGroupId_IMPL_22295(*arg0_, *arg1_);
}

// public Android.android.graphics.drawable.Drawable getIcon() :19574
void Android_android_view_MenuItem__getIcon_fn(Android_android_view_MenuItem* __this, ::g::Android::android::graphics::drawable::Drawable** __retval)
{
    *__retval = __this->getIcon();
}

// public static extern Android.Base.Wrappers.IJWrapper getIcon_IMPL_22304(bool arg0, Android.Base.Primitives.ujobject arg1) :19761
void Android_android_view_MenuItem__getIcon_IMPL_22304_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getIcon_IMPL_22304(*arg0_, *arg1_);
}

// public Android.android.content.Intent getIntent() :19584
void Android_android_view_MenuItem__getIntent_fn(Android_android_view_MenuItem* __this, ::g::Android::android::content::Intent** __retval)
{
    *__retval = __this->getIntent();
}

// public static extern Android.Base.Wrappers.IJWrapper getIntent_IMPL_22306(bool arg0, Android.Base.Primitives.ujobject arg1) :19767
void Android_android_view_MenuItem__getIntent_IMPL_22306_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getIntent_IMPL_22306(*arg0_, *arg1_);
}

// public int getItemId() :19524
void Android_android_view_MenuItem__getItemId_fn(Android_android_view_MenuItem* __this, int* __retval)
{
    *__retval = __this->getItemId();
}

// public static extern int getItemId_IMPL_22294(bool arg0, Android.Base.Primitives.ujobject arg1) :19731
void Android_android_view_MenuItem__getItemId_IMPL_22294_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_view_MenuItem::getItemId_IMPL_22294(*arg0_, *arg1_);
}

// public Android.android.view.ContextMenuDLRContextMenuInfo getMenuInfo() :19669
void Android_android_view_MenuItem__getMenuInfo_fn(Android_android_view_MenuItem* __this, uObject** __retval)
{
    *__retval = __this->getMenuInfo();
}

// public static extern Android.Base.Wrappers.IJWrapper getMenuInfo_IMPL_22323(bool arg0, Android.Base.Primitives.ujobject arg1) :19818
void Android_android_view_MenuItem__getMenuInfo_IMPL_22323_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getMenuInfo_IMPL_22323(*arg0_, *arg1_);
}

// public char getNumericShortcut() :19599
void Android_android_view_MenuItem__getNumericShortcut_fn(Android_android_view_MenuItem* __this, uChar* __retval)
{
    *__retval = __this->getNumericShortcut();
}

// public static extern char getNumericShortcut_IMPL_22309(bool arg0, Android.Base.Primitives.ujobject arg1) :19776
void Android_android_view_MenuItem__getNumericShortcut_IMPL_22309_fn(bool* arg0_, jobject* arg1_, uChar* __retval)
{
    *__retval = Android_android_view_MenuItem::getNumericShortcut_IMPL_22309(*arg0_, *arg1_);
}

// public int getOrder() :19534
void Android_android_view_MenuItem__getOrder_fn(Android_android_view_MenuItem* __this, int* __retval)
{
    *__retval = __this->getOrder();
}

// public static extern int getOrder_IMPL_22296(bool arg0, Android.Base.Primitives.ujobject arg1) :19737
void Android_android_view_MenuItem__getOrder_IMPL_22296_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_view_MenuItem::getOrder_IMPL_22296(*arg0_, *arg1_);
}

// public Android.android.view.SubMenu getSubMenu() :19659
void Android_android_view_MenuItem__getSubMenu_fn(Android_android_view_MenuItem* __this, uObject** __retval)
{
    *__retval = __this->getSubMenu();
}

// public static extern Android.Base.Wrappers.IJWrapper getSubMenu_IMPL_22321(bool arg0, Android.Base.Primitives.ujobject arg1) :19812
void Android_android_view_MenuItem__getSubMenu_IMPL_22321_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getSubMenu_IMPL_22321(*arg0_, *arg1_);
}

// public Android.java.lang.CharSequence getTitle() :19549
void Android_android_view_MenuItem__getTitle_fn(Android_android_view_MenuItem* __this, uObject** __retval)
{
    *__retval = __this->getTitle();
}

// public static extern Android.Base.Wrappers.IJWrapper getTitle_IMPL_22299(bool arg0, Android.Base.Primitives.ujobject arg1) :19746
void Android_android_view_MenuItem__getTitle_IMPL_22299_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getTitle_IMPL_22299(*arg0_, *arg1_);
}

// public Android.java.lang.CharSequence getTitleCondensed() :19559
void Android_android_view_MenuItem__getTitleCondensed_fn(Android_android_view_MenuItem* __this, uObject** __retval)
{
    *__retval = __this->getTitleCondensed();
}

// public static extern Android.Base.Wrappers.IJWrapper getTitleCondensed_IMPL_22301(bool arg0, Android.Base.Primitives.ujobject arg1) :19752
void Android_android_view_MenuItem__getTitleCondensed_IMPL_22301_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getTitleCondensed_IMPL_22301(*arg0_, *arg1_);
}

// public bool hasSubMenu() :19654
void Android_android_view_MenuItem__hasSubMenu_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->hasSubMenu();
}

// public static extern bool hasSubMenu_IMPL_22320(bool arg0, Android.Base.Primitives.ujobject arg1) :19809
void Android_android_view_MenuItem__hasSubMenu_IMPL_22320_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::hasSubMenu_IMPL_22320(*arg0_, *arg1_);
}

// public bool isActionViewExpanded() :19719
void Android_android_view_MenuItem__isActionViewExpanded_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->isActionViewExpanded();
}

// public static extern bool isActionViewExpanded_IMPL_22333(bool arg0, Android.Base.Primitives.ujobject arg1) :19848
void Android_android_view_MenuItem__isActionViewExpanded_IMPL_22333_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::isActionViewExpanded_IMPL_22333(*arg0_, *arg1_);
}

// public bool isCheckable() :19619
void Android_android_view_MenuItem__isCheckable_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->isCheckable();
}

// public static extern bool isCheckable_IMPL_22313(bool arg0, Android.Base.Primitives.ujobject arg1) :19788
void Android_android_view_MenuItem__isCheckable_IMPL_22313_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::isCheckable_IMPL_22313(*arg0_, *arg1_);
}

// public bool isChecked() :19629
void Android_android_view_MenuItem__isChecked_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->isChecked();
}

// public static extern bool isChecked_IMPL_22315(bool arg0, Android.Base.Primitives.ujobject arg1) :19794
void Android_android_view_MenuItem__isChecked_IMPL_22315_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::isChecked_IMPL_22315(*arg0_, *arg1_);
}

// public bool isEnabled() :19649
void Android_android_view_MenuItem__isEnabled_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->isEnabled();
}

// public static extern bool isEnabled_IMPL_22319(bool arg0, Android.Base.Primitives.ujobject arg1) :19806
void Android_android_view_MenuItem__isEnabled_IMPL_22319_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::isEnabled_IMPL_22319(*arg0_, *arg1_);
}

// public bool isVisible() :19639
void Android_android_view_MenuItem__isVisible_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->isVisible();
}

// public static extern bool isVisible_IMPL_22317(bool arg0, Android.Base.Primitives.ujobject arg1) :19800
void Android_android_view_MenuItem__isVisible_IMPL_22317_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::isVisible_IMPL_22317(*arg0_, *arg1_);
}

// public Android.android.view.MenuItem setActionProvider(Android.android.view.ActionProvider arg0) :19699
void Android_android_view_MenuItem__setActionProvider_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::ActionProvider* arg0, uObject** __retval)
{
    *__retval = __this->setActionProvider(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setActionProvider_IMPL_22329(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19836
void Android_android_view_MenuItem__setActionProvider_IMPL_22329_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setActionProvider_IMPL_22329(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.MenuItem setActionView(Android.android.view.View arg0) :19684
void Android_android_view_MenuItem__setActionView_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::View* arg0, uObject** __retval)
{
    *__retval = __this->setActionView(arg0);
}

// public Android.android.view.MenuItem setActionView(int arg0) :19689
void Android_android_view_MenuItem__setActionView1_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setActionView1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setActionView_IMPL_22326(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19827
void Android_android_view_MenuItem__setActionView_IMPL_22326_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setActionView_IMPL_22326(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setActionView_IMPL_22327(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19830
void Android_android_view_MenuItem__setActionView_IMPL_22327_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setActionView_IMPL_22327(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setAlphabeticShortcut(char arg0) :19604
void Android_android_view_MenuItem__setAlphabeticShortcut_fn(Android_android_view_MenuItem* __this, uChar* arg0, uObject** __retval)
{
    *__retval = __this->setAlphabeticShortcut(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setAlphabeticShortcut_IMPL_22310(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2) :19779
void Android_android_view_MenuItem__setAlphabeticShortcut_IMPL_22310_fn(bool* arg0_, jobject* arg1_, uChar* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setAlphabeticShortcut_IMPL_22310(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setCheckable(bool arg0) :19614
void Android_android_view_MenuItem__setCheckable_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval)
{
    *__retval = __this->setCheckable(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setCheckable_IMPL_22312(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :19785
void Android_android_view_MenuItem__setCheckable_IMPL_22312_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setCheckable_IMPL_22312(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setChecked(bool arg0) :19624
void Android_android_view_MenuItem__setChecked_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval)
{
    *__retval = __this->setChecked(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setChecked_IMPL_22314(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :19791
void Android_android_view_MenuItem__setChecked_IMPL_22314_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setChecked_IMPL_22314(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setEnabled(bool arg0) :19644
void Android_android_view_MenuItem__setEnabled_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval)
{
    *__retval = __this->setEnabled(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setEnabled_IMPL_22318(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :19803
void Android_android_view_MenuItem__setEnabled_IMPL_22318_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setEnabled_IMPL_22318(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setIcon(Android.android.graphics.drawable.Drawable arg0) :19564
void Android_android_view_MenuItem__setIcon_fn(Android_android_view_MenuItem* __this, ::g::Android::android::graphics::drawable::Drawable* arg0, uObject** __retval)
{
    *__retval = __this->setIcon(arg0);
}

// public Android.android.view.MenuItem setIcon(int arg0) :19569
void Android_android_view_MenuItem__setIcon1_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setIcon1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22302(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19755
void Android_android_view_MenuItem__setIcon_IMPL_22302_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setIcon_IMPL_22302(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22303(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19758
void Android_android_view_MenuItem__setIcon_IMPL_22303_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setIcon_IMPL_22303(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setIntent(Android.android.content.Intent arg0) :19579
void Android_android_view_MenuItem__setIntent_fn(Android_android_view_MenuItem* __this, ::g::Android::android::content::Intent* arg0, uObject** __retval)
{
    *__retval = __this->setIntent(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setIntent_IMPL_22305(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19764
void Android_android_view_MenuItem__setIntent_IMPL_22305_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setIntent_IMPL_22305(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.MenuItem setNumericShortcut(char arg0) :19594
void Android_android_view_MenuItem__setNumericShortcut_fn(Android_android_view_MenuItem* __this, uChar* arg0, uObject** __retval)
{
    *__retval = __this->setNumericShortcut(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setNumericShortcut_IMPL_22308(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2) :19773
void Android_android_view_MenuItem__setNumericShortcut_IMPL_22308_fn(bool* arg0_, jobject* arg1_, uChar* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setNumericShortcut_IMPL_22308(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setOnActionExpandListener(Android.android.view.MenuItemDLROnActionExpandListener arg0) :19724
void Android_android_view_MenuItem__setOnActionExpandListener_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->setOnActionExpandListener(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setOnActionExpandListener_IMPL_22334(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19851
void Android_android_view_MenuItem__setOnActionExpandListener_IMPL_22334_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setOnActionExpandListener_IMPL_22334(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.MenuItem setOnMenuItemClickListener(Android.android.view.MenuItemDLROnMenuItemClickListener arg0) :19664
void Android_android_view_MenuItem__setOnMenuItemClickListener_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->setOnMenuItemClickListener(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setOnMenuItemClickListener_IMPL_22322(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19815
void Android_android_view_MenuItem__setOnMenuItemClickListener_IMPL_22322_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setOnMenuItemClickListener_IMPL_22322(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.MenuItem setShortcut(char arg0, char arg1) :19589
void Android_android_view_MenuItem__setShortcut_fn(Android_android_view_MenuItem* __this, uChar* arg0, uChar* arg1, uObject** __retval)
{
    *__retval = __this->setShortcut(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper setShortcut_IMPL_22307(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2, char arg3) :19770
void Android_android_view_MenuItem__setShortcut_IMPL_22307_fn(bool* arg0_, jobject* arg1_, uChar* arg2_, uChar* arg3_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setShortcut_IMPL_22307(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setShowAsAction(int arg0) :19674
void Android_android_view_MenuItem__setShowAsAction_fn(Android_android_view_MenuItem* __this, int* arg0)
{
    __this->setShowAsAction(*arg0);
}

// public static extern void setShowAsAction_IMPL_22324(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19821
void Android_android_view_MenuItem__setShowAsAction_IMPL_22324_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_MenuItem::setShowAsAction_IMPL_22324(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setShowAsActionFlags(int arg0) :19679
void Android_android_view_MenuItem__setShowAsActionFlags_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setShowAsActionFlags(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setShowAsActionFlags_IMPL_22325(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19824
void Android_android_view_MenuItem__setShowAsActionFlags_IMPL_22325_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setShowAsActionFlags_IMPL_22325(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setTitle(Android.java.lang.CharSequence arg0) :19539
void Android_android_view_MenuItem__setTitle_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->setTitle(arg0);
}

// public Android.android.view.MenuItem setTitle(int arg0) :19544
void Android_android_view_MenuItem__setTitle1_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setTitle1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setTitle_IMPL_22297(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19740
void Android_android_view_MenuItem__setTitle_IMPL_22297_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setTitle_IMPL_22297(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setTitle_IMPL_22298(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19743
void Android_android_view_MenuItem__setTitle_IMPL_22298_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setTitle_IMPL_22298(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setTitleCondensed(Android.java.lang.CharSequence arg0) :19554
void Android_android_view_MenuItem__setTitleCondensed_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->setTitleCondensed(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setTitleCondensed_IMPL_22300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19749
void Android_android_view_MenuItem__setTitleCondensed_IMPL_22300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setTitleCondensed_IMPL_22300(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.MenuItem setVisible(bool arg0) :19634
void Android_android_view_MenuItem__setVisible_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval)
{
    *__retval = __this->setVisible(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setVisible_IMPL_22316(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :19797
void Android_android_view_MenuItem__setVisible_IMPL_22316_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setVisible_IMPL_22316(*arg0_, *arg1_, *arg2_);
}

jmethodID Android_android_view_MenuItem::collapseActionView_22332_ID_;
jmethodID Android_android_view_MenuItem::expandActionView_22331_ID_;
jmethodID Android_android_view_MenuItem::getActionProvider_22330_ID_;
jmethodID Android_android_view_MenuItem::getActionView_22328_ID_;
jmethodID Android_android_view_MenuItem::getAlphabeticShortcut_22311_ID_;
jmethodID Android_android_view_MenuItem::getGroupId_22295_ID_;
jmethodID Android_android_view_MenuItem::getIcon_22304_ID_;
jmethodID Android_android_view_MenuItem::getIntent_22306_ID_;
jmethodID Android_android_view_MenuItem::getItemId_22294_ID_;
jmethodID Android_android_view_MenuItem::getMenuInfo_22323_ID_;
jmethodID Android_android_view_MenuItem::getNumericShortcut_22309_ID_;
jmethodID Android_android_view_MenuItem::getOrder_22296_ID_;
jmethodID Android_android_view_MenuItem::getSubMenu_22321_ID_;
jmethodID Android_android_view_MenuItem::getTitle_22299_ID_;
jmethodID Android_android_view_MenuItem::getTitleCondensed_22301_ID_;
jmethodID Android_android_view_MenuItem::hasSubMenu_22320_ID_;
jmethodID Android_android_view_MenuItem::isActionViewExpanded_22333_ID_;
jmethodID Android_android_view_MenuItem::isCheckable_22313_ID_;
jmethodID Android_android_view_MenuItem::isChecked_22315_ID_;
jmethodID Android_android_view_MenuItem::isEnabled_22319_ID_;
jmethodID Android_android_view_MenuItem::isVisible_22317_ID_;
jmethodID Android_android_view_MenuItem::setActionProvider_22329_ID_;
jmethodID Android_android_view_MenuItem::setActionView_22326_ID_;
jmethodID Android_android_view_MenuItem::setActionView_22327_ID_;
jmethodID Android_android_view_MenuItem::setAlphabeticShortcut_22310_ID_;
jmethodID Android_android_view_MenuItem::setCheckable_22312_ID_;
jmethodID Android_android_view_MenuItem::setChecked_22314_ID_;
jmethodID Android_android_view_MenuItem::setEnabled_22318_ID_;
jmethodID Android_android_view_MenuItem::setIcon_22302_ID_;
jmethodID Android_android_view_MenuItem::setIcon_22303_ID_;
jmethodID Android_android_view_MenuItem::setIntent_22305_ID_;
jmethodID Android_android_view_MenuItem::setNumericShortcut_22308_ID_;
jmethodID Android_android_view_MenuItem::setOnActionExpandListener_22334_ID_;
jmethodID Android_android_view_MenuItem::setOnMenuItemClickListener_22322_ID_;
jmethodID Android_android_view_MenuItem::setShortcut_22307_ID_;
jmethodID Android_android_view_MenuItem::setShowAsAction_22324_ID_;
jmethodID Android_android_view_MenuItem::setShowAsActionFlags_22325_ID_;
jmethodID Android_android_view_MenuItem::setTitle_22297_ID_;
jmethodID Android_android_view_MenuItem::setTitle_22298_ID_;
jmethodID Android_android_view_MenuItem::setTitleCondensed_22300_ID_;
jmethodID Android_android_view_MenuItem::setVisible_22316_ID_;

// public bool collapseActionView() [instance] :19714
bool Android_android_view_MenuItem::collapseActionView()
{
    return Android_android_view_MenuItem::collapseActionView_IMPL_22332(_subclassed, _javaObject);
}

// public bool expandActionView() [instance] :19709
bool Android_android_view_MenuItem::expandActionView()
{
    return Android_android_view_MenuItem::expandActionView_IMPL_22331(_subclassed, _javaObject);
}

// public Android.android.view.ActionProvider getActionProvider() [instance] :19704
::g::Android::android::view::ActionProvider* Android_android_view_MenuItem::getActionProvider()
{
    return uCast< ::g::Android::android::view::ActionProvider*>(Android_android_view_MenuItem::getActionProvider_IMPL_22330(_subclassed, _javaObject), ::TYPES[13/*Android.android.view.ActionProvider*/]);
}

// public Android.android.view.View getActionView() [instance] :19694
::g::Android::android::view::View* Android_android_view_MenuItem::getActionView()
{
    return uCast< ::g::Android::android::view::View*>(Android_android_view_MenuItem::getActionView_IMPL_22328(_subclassed, _javaObject), ::TYPES[14/*Android.android.view.View*/]);
}

// public char getAlphabeticShortcut() [instance] :19609
uChar Android_android_view_MenuItem::getAlphabeticShortcut()
{
    return Android_android_view_MenuItem::getAlphabeticShortcut_IMPL_22311(_subclassed, _javaObject);
}

// public int getGroupId() [instance] :19529
int Android_android_view_MenuItem::getGroupId()
{
    return Android_android_view_MenuItem::getGroupId_IMPL_22295(_subclassed, _javaObject);
}

// public Android.android.graphics.drawable.Drawable getIcon() [instance] :19574
::g::Android::android::graphics::drawable::Drawable* Android_android_view_MenuItem::getIcon()
{
    return uCast< ::g::Android::android::graphics::drawable::Drawable*>(Android_android_view_MenuItem::getIcon_IMPL_22304(_subclassed, _javaObject), ::TYPES[15/*Android.android.graphics.drawable.Drawable*/]);
}

// public Android.android.content.Intent getIntent() [instance] :19584
::g::Android::android::content::Intent* Android_android_view_MenuItem::getIntent()
{
    return uCast< ::g::Android::android::content::Intent*>(Android_android_view_MenuItem::getIntent_IMPL_22306(_subclassed, _javaObject), ::TYPES[16/*Android.android.content.Intent*/]);
}

// public int getItemId() [instance] :19524
int Android_android_view_MenuItem::getItemId()
{
    return Android_android_view_MenuItem::getItemId_IMPL_22294(_subclassed, _javaObject);
}

// public Android.android.view.ContextMenuDLRContextMenuInfo getMenuInfo() [instance] :19669
uObject* Android_android_view_MenuItem::getMenuInfo()
{
    return Android_android_view_MenuItem::getMenuInfo_IMPL_22323(_subclassed, _javaObject);
}

// public char getNumericShortcut() [instance] :19599
uChar Android_android_view_MenuItem::getNumericShortcut()
{
    return Android_android_view_MenuItem::getNumericShortcut_IMPL_22309(_subclassed, _javaObject);
}

// public int getOrder() [instance] :19534
int Android_android_view_MenuItem::getOrder()
{
    return Android_android_view_MenuItem::getOrder_IMPL_22296(_subclassed, _javaObject);
}

// public Android.android.view.SubMenu getSubMenu() [instance] :19659
uObject* Android_android_view_MenuItem::getSubMenu()
{
    return Android_android_view_MenuItem::getSubMenu_IMPL_22321(_subclassed, _javaObject);
}

// public Android.java.lang.CharSequence getTitle() [instance] :19549
uObject* Android_android_view_MenuItem::getTitle()
{
    return Android_android_view_MenuItem::getTitle_IMPL_22299(_subclassed, _javaObject);
}

// public Android.java.lang.CharSequence getTitleCondensed() [instance] :19559
uObject* Android_android_view_MenuItem::getTitleCondensed()
{
    return Android_android_view_MenuItem::getTitleCondensed_IMPL_22301(_subclassed, _javaObject);
}

// public bool hasSubMenu() [instance] :19654
bool Android_android_view_MenuItem::hasSubMenu()
{
    return Android_android_view_MenuItem::hasSubMenu_IMPL_22320(_subclassed, _javaObject);
}

// public bool isActionViewExpanded() [instance] :19719
bool Android_android_view_MenuItem::isActionViewExpanded()
{
    return Android_android_view_MenuItem::isActionViewExpanded_IMPL_22333(_subclassed, _javaObject);
}

// public bool isCheckable() [instance] :19619
bool Android_android_view_MenuItem::isCheckable()
{
    return Android_android_view_MenuItem::isCheckable_IMPL_22313(_subclassed, _javaObject);
}

// public bool isChecked() [instance] :19629
bool Android_android_view_MenuItem::isChecked()
{
    return Android_android_view_MenuItem::isChecked_IMPL_22315(_subclassed, _javaObject);
}

// public bool isEnabled() [instance] :19649
bool Android_android_view_MenuItem::isEnabled()
{
    return Android_android_view_MenuItem::isEnabled_IMPL_22319(_subclassed, _javaObject);
}

// public bool isVisible() [instance] :19639
bool Android_android_view_MenuItem::isVisible()
{
    return Android_android_view_MenuItem::isVisible_IMPL_22317(_subclassed, _javaObject);
}

// public Android.android.view.MenuItem setActionProvider(Android.android.view.ActionProvider arg0) [instance] :19699
uObject* Android_android_view_MenuItem::setActionProvider(::g::Android::android::view::ActionProvider* arg0)
{
    return Android_android_view_MenuItem::setActionProvider_IMPL_22329(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.MenuItem setActionView(Android.android.view.View arg0) [instance] :19684
uObject* Android_android_view_MenuItem::setActionView(::g::Android::android::view::View* arg0)
{
    return Android_android_view_MenuItem::setActionView_IMPL_22326(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.MenuItem setActionView(int arg0) [instance] :19689
uObject* Android_android_view_MenuItem::setActionView1(int arg0)
{
    return Android_android_view_MenuItem::setActionView_IMPL_22327(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setAlphabeticShortcut(char arg0) [instance] :19604
uObject* Android_android_view_MenuItem::setAlphabeticShortcut(uChar arg0)
{
    return Android_android_view_MenuItem::setAlphabeticShortcut_IMPL_22310(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setCheckable(bool arg0) [instance] :19614
uObject* Android_android_view_MenuItem::setCheckable(bool arg0)
{
    return Android_android_view_MenuItem::setCheckable_IMPL_22312(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setChecked(bool arg0) [instance] :19624
uObject* Android_android_view_MenuItem::setChecked(bool arg0)
{
    return Android_android_view_MenuItem::setChecked_IMPL_22314(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setEnabled(bool arg0) [instance] :19644
uObject* Android_android_view_MenuItem::setEnabled(bool arg0)
{
    return Android_android_view_MenuItem::setEnabled_IMPL_22318(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setIcon(Android.android.graphics.drawable.Drawable arg0) [instance] :19564
uObject* Android_android_view_MenuItem::setIcon(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    return Android_android_view_MenuItem::setIcon_IMPL_22302(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.MenuItem setIcon(int arg0) [instance] :19569
uObject* Android_android_view_MenuItem::setIcon1(int arg0)
{
    return Android_android_view_MenuItem::setIcon_IMPL_22303(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setIntent(Android.android.content.Intent arg0) [instance] :19579
uObject* Android_android_view_MenuItem::setIntent(::g::Android::android::content::Intent* arg0)
{
    return Android_android_view_MenuItem::setIntent_IMPL_22305(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.MenuItem setNumericShortcut(char arg0) [instance] :19594
uObject* Android_android_view_MenuItem::setNumericShortcut(uChar arg0)
{
    return Android_android_view_MenuItem::setNumericShortcut_IMPL_22308(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setOnActionExpandListener(Android.android.view.MenuItemDLROnActionExpandListener arg0) [instance] :19724
uObject* Android_android_view_MenuItem::setOnActionExpandListener(uObject* arg0)
{
    return Android_android_view_MenuItem::setOnActionExpandListener_IMPL_22334(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setOnMenuItemClickListener(Android.android.view.MenuItemDLROnMenuItemClickListener arg0) [instance] :19664
uObject* Android_android_view_MenuItem::setOnMenuItemClickListener(uObject* arg0)
{
    return Android_android_view_MenuItem::setOnMenuItemClickListener_IMPL_22322(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setShortcut(char arg0, char arg1) [instance] :19589
uObject* Android_android_view_MenuItem::setShortcut(uChar arg0, uChar arg1)
{
    return Android_android_view_MenuItem::setShortcut_IMPL_22307(_subclassed, _javaObject, arg0, arg1);
}

// public void setShowAsAction(int arg0) [instance] :19674
void Android_android_view_MenuItem::setShowAsAction(int arg0)
{
    Android_android_view_MenuItem::setShowAsAction_IMPL_22324(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setShowAsActionFlags(int arg0) [instance] :19679
uObject* Android_android_view_MenuItem::setShowAsActionFlags(int arg0)
{
    return Android_android_view_MenuItem::setShowAsActionFlags_IMPL_22325(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setTitle(Android.java.lang.CharSequence arg0) [instance] :19539
uObject* Android_android_view_MenuItem::setTitle(uObject* arg0)
{
    return Android_android_view_MenuItem::setTitle_IMPL_22297(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setTitle(int arg0) [instance] :19544
uObject* Android_android_view_MenuItem::setTitle1(int arg0)
{
    return Android_android_view_MenuItem::setTitle_IMPL_22298(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setTitleCondensed(Android.java.lang.CharSequence arg0) [instance] :19554
uObject* Android_android_view_MenuItem::setTitleCondensed(uObject* arg0)
{
    return Android_android_view_MenuItem::setTitleCondensed_IMPL_22300(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setVisible(bool arg0) [instance] :19634
uObject* Android_android_view_MenuItem::setVisible(bool arg0)
{
    return Android_android_view_MenuItem::setVisible_IMPL_22316(_subclassed, _javaObject, arg0);
}

// public static extern bool collapseActionView_IMPL_22332(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19845
bool Android_android_view_MenuItem::collapseActionView_IMPL_22332(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::collapseActionView_22332_ID(),"android/view/MenuItem","collapseActionView","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.collapseActionView could not be cached",83);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::collapseActionView_22332_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool expandActionView_IMPL_22331(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19842
bool Android_android_view_MenuItem::expandActionView_IMPL_22331(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::expandActionView_22331_ID(),"android/view/MenuItem","expandActionView","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.expandActionView could not be cached",81);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::expandActionView_22331_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getActionProvider_IMPL_22330(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19839
uObject* Android_android_view_MenuItem::getActionProvider_IMPL_22330(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getActionProvider_22330_ID(),"android/view/MenuItem","getActionProvider","()Landroid/view/ActionProvider;",GetMethodID,"Id for fallback method android.view.MenuItem.getActionProvider could not be cached",82);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getActionProvider_22330_ID()),result,::g::Android::Fallbacks::Android_android_view_ActionProvider_typeof(),::g::Android::android::view::ActionProvider*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getActionView_IMPL_22328(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19833
uObject* Android_android_view_MenuItem::getActionView_IMPL_22328(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getActionView_22328_ID(),"android/view/MenuItem","getActionView","()Landroid/view/View;",GetMethodID,"Id for fallback method android.view.MenuItem.getActionView could not be cached",78);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getActionView_22328_ID()),result,::g::Android::android::view::View_typeof(),::g::Android::android::view::View*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern char getAlphabeticShortcut_IMPL_22311(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19782
uChar Android_android_view_MenuItem::getAlphabeticShortcut_IMPL_22311(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getAlphabeticShortcut_22311_ID(),"android/view/MenuItem","getAlphabeticShortcut","()C",GetMethodID,"Id for fallback method android.view.MenuItem.getAlphabeticShortcut could not be cached",86);
    
    uChar result;
    result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, Android_android_view_MenuItem::getAlphabeticShortcut_22311_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getGroupId_IMPL_22295(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19734
int Android_android_view_MenuItem::getGroupId_IMPL_22295(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getGroupId_22295_ID(),"android/view/MenuItem","getGroupId","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getGroupId could not be cached",75);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_MenuItem::getGroupId_22295_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getIcon_IMPL_22304(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19761
uObject* Android_android_view_MenuItem::getIcon_IMPL_22304(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getIcon_22304_ID(),"android/view/MenuItem","getIcon","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.view.MenuItem.getIcon could not be cached",72);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getIcon_22304_ID()),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getIntent_IMPL_22306(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19767
uObject* Android_android_view_MenuItem::getIntent_IMPL_22306(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getIntent_22306_ID(),"android/view/MenuItem","getIntent","()Landroid/content/Intent;",GetMethodID,"Id for fallback method android.view.MenuItem.getIntent could not be cached",74);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getIntent_22306_ID()),result,::g::Android::android::content::Intent_typeof(),::g::Android::android::content::Intent*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getItemId_IMPL_22294(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19731
int Android_android_view_MenuItem::getItemId_IMPL_22294(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getItemId_22294_ID(),"android/view/MenuItem","getItemId","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getItemId could not be cached",74);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_MenuItem::getItemId_22294_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getMenuInfo_IMPL_22323(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19818
uObject* Android_android_view_MenuItem::getMenuInfo_IMPL_22323(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getMenuInfo_22323_ID(),"android/view/MenuItem","getMenuInfo","()Landroid/view/ContextMenu$ContextMenuInfo;",GetMethodID,"Id for fallback method android.view.MenuItem.getMenuInfo could not be cached",76);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getMenuInfo_22323_ID()),result,::g::Android::Fallbacks::Android_android_view_ContextMenuDLRContextMenuInfo_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern char getNumericShortcut_IMPL_22309(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19776
uChar Android_android_view_MenuItem::getNumericShortcut_IMPL_22309(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getNumericShortcut_22309_ID(),"android/view/MenuItem","getNumericShortcut","()C",GetMethodID,"Id for fallback method android.view.MenuItem.getNumericShortcut could not be cached",83);
    
    uChar result;
    result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, Android_android_view_MenuItem::getNumericShortcut_22309_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getOrder_IMPL_22296(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19737
int Android_android_view_MenuItem::getOrder_IMPL_22296(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getOrder_22296_ID(),"android/view/MenuItem","getOrder","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getOrder could not be cached",73);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_MenuItem::getOrder_22296_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSubMenu_IMPL_22321(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19812
uObject* Android_android_view_MenuItem::getSubMenu_IMPL_22321(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getSubMenu_22321_ID(),"android/view/MenuItem","getSubMenu","()Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.MenuItem.getSubMenu could not be cached",75);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getSubMenu_22321_ID()),result,::g::Android::Fallbacks::Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getTitle_IMPL_22299(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19746
uObject* Android_android_view_MenuItem::getTitle_IMPL_22299(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getTitle_22299_ID(),"android/view/MenuItem","getTitle","()Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.view.MenuItem.getTitle could not be cached",73);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getTitle_22299_ID()),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getTitleCondensed_IMPL_22301(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19752
uObject* Android_android_view_MenuItem::getTitleCondensed_IMPL_22301(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getTitleCondensed_22301_ID(),"android/view/MenuItem","getTitleCondensed","()Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.view.MenuItem.getTitleCondensed could not be cached",82);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getTitleCondensed_22301_ID()),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool hasSubMenu_IMPL_22320(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19809
bool Android_android_view_MenuItem::hasSubMenu_IMPL_22320(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::hasSubMenu_22320_ID(),"android/view/MenuItem","hasSubMenu","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.hasSubMenu could not be cached",75);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::hasSubMenu_22320_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isActionViewExpanded_IMPL_22333(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19848
bool Android_android_view_MenuItem::isActionViewExpanded_IMPL_22333(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::isActionViewExpanded_22333_ID(),"android/view/MenuItem","isActionViewExpanded","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isActionViewExpanded could not be cached",85);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::isActionViewExpanded_22333_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isCheckable_IMPL_22313(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19788
bool Android_android_view_MenuItem::isCheckable_IMPL_22313(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::isCheckable_22313_ID(),"android/view/MenuItem","isCheckable","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isCheckable could not be cached",76);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::isCheckable_22313_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isChecked_IMPL_22315(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19794
bool Android_android_view_MenuItem::isChecked_IMPL_22315(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::isChecked_22315_ID(),"android/view/MenuItem","isChecked","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isChecked could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::isChecked_22315_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isEnabled_IMPL_22319(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19806
bool Android_android_view_MenuItem::isEnabled_IMPL_22319(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::isEnabled_22319_ID(),"android/view/MenuItem","isEnabled","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isEnabled could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::isEnabled_22319_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isVisible_IMPL_22317(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19800
bool Android_android_view_MenuItem::isVisible_IMPL_22317(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::isVisible_22317_ID(),"android/view/MenuItem","isVisible","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isVisible could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::isVisible_22317_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setActionProvider_IMPL_22329(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19836
uObject* Android_android_view_MenuItem::setActionProvider_IMPL_22329(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setActionProvider_22329_ID(),"android/view/MenuItem","setActionProvider","(Landroid/view/ActionProvider;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionProvider could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setActionProvider_22329_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setActionView_IMPL_22326(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19827
uObject* Android_android_view_MenuItem::setActionView_IMPL_22326(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setActionView_22326_ID(),"android/view/MenuItem","setActionView","(Landroid/view/View;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionView could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setActionView_22326_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setActionView_IMPL_22327(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19830
uObject* Android_android_view_MenuItem::setActionView_IMPL_22327(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setActionView_22327_ID(),"android/view/MenuItem","setActionView","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionView could not be cached",78);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setActionView_22327_ID(), ((jint)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setAlphabeticShortcut_IMPL_22310(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2) [static] :19779
uObject* Android_android_view_MenuItem::setAlphabeticShortcut_IMPL_22310(bool arg0_, jobject arg1_, uChar arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setAlphabeticShortcut_22310_ID(),"android/view/MenuItem","setAlphabeticShortcut","(C)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setAlphabeticShortcut could not be cached",86);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setAlphabeticShortcut_22310_ID(), ((jchar)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setCheckable_IMPL_22312(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :19785
uObject* Android_android_view_MenuItem::setCheckable_IMPL_22312(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setCheckable_22312_ID(),"android/view/MenuItem","setCheckable","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setCheckable could not be cached",77);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setCheckable_22312_ID(), ((jboolean)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setChecked_IMPL_22314(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :19791
uObject* Android_android_view_MenuItem::setChecked_IMPL_22314(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setChecked_22314_ID(),"android/view/MenuItem","setChecked","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setChecked could not be cached",75);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setChecked_22314_ID(), ((jboolean)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setEnabled_IMPL_22318(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :19803
uObject* Android_android_view_MenuItem::setEnabled_IMPL_22318(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setEnabled_22318_ID(),"android/view/MenuItem","setEnabled","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setEnabled could not be cached",75);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setEnabled_22318_ID(), ((jboolean)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22302(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19755
uObject* Android_android_view_MenuItem::setIcon_IMPL_22302(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setIcon_22302_ID(),"android/view/MenuItem","setIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIcon could not be cached",72);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setIcon_22302_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22303(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19758
uObject* Android_android_view_MenuItem::setIcon_IMPL_22303(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setIcon_22303_ID(),"android/view/MenuItem","setIcon","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIcon could not be cached",72);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setIcon_22303_ID(), ((jint)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setIntent_IMPL_22305(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19764
uObject* Android_android_view_MenuItem::setIntent_IMPL_22305(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setIntent_22305_ID(),"android/view/MenuItem","setIntent","(Landroid/content/Intent;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIntent could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setIntent_22305_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setNumericShortcut_IMPL_22308(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2) [static] :19773
uObject* Android_android_view_MenuItem::setNumericShortcut_IMPL_22308(bool arg0_, jobject arg1_, uChar arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setNumericShortcut_22308_ID(),"android/view/MenuItem","setNumericShortcut","(C)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setNumericShortcut could not be cached",83);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setNumericShortcut_22308_ID(), ((jchar)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setOnActionExpandListener_IMPL_22334(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19851
uObject* Android_android_view_MenuItem::setOnActionExpandListener_IMPL_22334(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setOnActionExpandListener_22334_ID(),"android/view/MenuItem","setOnActionExpandListener","(Landroid/view/MenuItem$OnActionExpandListener;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setOnActionExpandListener could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setOnActionExpandListener_22334_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setOnMenuItemClickListener_IMPL_22322(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19815
uObject* Android_android_view_MenuItem::setOnMenuItemClickListener_IMPL_22322(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setOnMenuItemClickListener_22322_ID(),"android/view/MenuItem","setOnMenuItemClickListener","(Landroid/view/MenuItem$OnMenuItemClickListener;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setOnMenuItemClickListener could not be cached",91);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setOnMenuItemClickListener_22322_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setShortcut_IMPL_22307(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2, char arg3) [static] :19770
uObject* Android_android_view_MenuItem::setShortcut_IMPL_22307(bool arg0_, jobject arg1_, uChar arg2_, uChar arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setShortcut_22307_ID(),"android/view/MenuItem","setShortcut","(CC)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setShortcut could not be cached",76);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setShortcut_22307_ID(), ((jchar)arg2_), ((jchar)arg3_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void setShowAsAction_IMPL_22324(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19821
void Android_android_view_MenuItem::setShowAsAction_IMPL_22324(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setShowAsAction_22324_ID(),"android/view/MenuItem","setShowAsAction","(I)V",GetMethodID,"Id for fallback method android.view.MenuItem.setShowAsAction could not be cached",80);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_MenuItem::setShowAsAction_22324_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper setShowAsActionFlags_IMPL_22325(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19824
uObject* Android_android_view_MenuItem::setShowAsActionFlags_IMPL_22325(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setShowAsActionFlags_22325_ID(),"android/view/MenuItem","setShowAsActionFlags","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setShowAsActionFlags could not be cached",85);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setShowAsActionFlags_22325_ID(), ((jint)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setTitle_IMPL_22297(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19740
uObject* Android_android_view_MenuItem::setTitle_IMPL_22297(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setTitle_22297_ID(),"android/view/MenuItem","setTitle","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitle could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setTitle_22297_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setTitle_IMPL_22298(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19743
uObject* Android_android_view_MenuItem::setTitle_IMPL_22298(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setTitle_22298_ID(),"android/view/MenuItem","setTitle","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitle could not be cached",73);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setTitle_22298_ID(), ((jint)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setTitleCondensed_IMPL_22300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19749
uObject* Android_android_view_MenuItem::setTitleCondensed_IMPL_22300(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setTitleCondensed_22300_ID(),"android/view/MenuItem","setTitleCondensed","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitleCondensed could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setTitleCondensed_22300_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setVisible_IMPL_22316(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :19797
uObject* Android_android_view_MenuItem::setVisible_IMPL_22316(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setVisible_22316_ID(),"android/view/MenuItem","setVisible","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setVisible could not be cached",75);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setVisible_22316_ID(), ((jboolean)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(19461)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_MenuItemDLROnActionExpandListener :19461
// {
Android_android_view_MenuItemDLROnActionExpandListener_type* Android_android_view_MenuItemDLROnActionExpandListener_typeof()
{
    static uSStrong<Android_android_view_MenuItemDLROnActionExpandListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_MenuItemDLROnActionExpandListener);
    options.TypeSize = sizeof(Android_android_view_MenuItemDLROnActionExpandListener_type);
    type = (Android_android_view_MenuItemDLROnActionExpandListener_type*)uClassType::New("Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onMenuItemActionExpand = (void(*)(uObject*, uObject*, bool*))Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_fn;
    type->interface2.fp_onMenuItemActionCollapse = (void(*)(uObject*, uObject*, bool*))Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener_type, interface1),
        ::g::Android::android::view::MenuItemDLROnActionExpandListener_typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_22292_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_22291_ID_, uFieldFlagsStatic);
    return type;
}

// public bool onMenuItemActionCollapse(Android.android.view.MenuItem arg0) :19469
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_fn(Android_android_view_MenuItemDLROnActionExpandListener* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->onMenuItemActionCollapse(arg0);
}

// public static extern bool onMenuItemActionCollapse_IMPL_22292(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19479
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_IMPL_22292_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_IMPL_22292(*arg0_, *arg1_, arg2_);
}

// public bool onMenuItemActionExpand(Android.android.view.MenuItem arg0) :19464
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_fn(Android_android_view_MenuItemDLROnActionExpandListener* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->onMenuItemActionExpand(arg0);
}

// public static extern bool onMenuItemActionExpand_IMPL_22291(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19476
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_IMPL_22291_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_IMPL_22291(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_22292_ID_;
jmethodID Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_22291_ID_;

// public bool onMenuItemActionCollapse(Android.android.view.MenuItem arg0) [instance] :19469
bool Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse(uObject* arg0)
{
    return Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_IMPL_22292(_subclassed, _javaObject, arg0);
}

// public bool onMenuItemActionExpand(Android.android.view.MenuItem arg0) [instance] :19464
bool Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand(uObject* arg0)
{
    return Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_IMPL_22291(_subclassed, _javaObject, arg0);
}

// public static extern bool onMenuItemActionCollapse_IMPL_22292(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19479
bool Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_IMPL_22292(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_22292_ID(),"android/view/MenuItem$OnActionExpandListener","onMenuItemActionCollapse","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnActionExpandListener.onMenuItemActionCollapse could not be cached",112);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_22292_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onMenuItemActionExpand_IMPL_22291(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19476
bool Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_IMPL_22291(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_22291_ID(),"android/view/MenuItem$OnActionExpandListener","onMenuItemActionExpand","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnActionExpandListener.onMenuItemActionExpand could not be cached",110);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_22291_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(19495)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_MenuItemDLROnMenuItemClickListener :19495
// {
Android_android_view_MenuItemDLROnMenuItemClickListener_type* Android_android_view_MenuItemDLROnMenuItemClickListener_typeof()
{
    static uSStrong<Android_android_view_MenuItemDLROnMenuItemClickListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_MenuItemDLROnMenuItemClickListener);
    options.TypeSize = sizeof(Android_android_view_MenuItemDLROnMenuItemClickListener_type);
    type = (Android_android_view_MenuItemDLROnMenuItemClickListener_type*)uClassType::New("Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemClickListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onMenuItemClick = (void(*)(uObject*, uObject*, bool*))Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener_type, interface1),
        ::g::Android::android::view::MenuItemDLROnMenuItemClickListener_typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_22293_ID_, uFieldFlagsStatic);
    return type;
}

// public bool onMenuItemClick(Android.android.view.MenuItem arg0) :19498
void Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_fn(Android_android_view_MenuItemDLROnMenuItemClickListener* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->onMenuItemClick(arg0);
}

// public static extern bool onMenuItemClick_IMPL_22293(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19505
void Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_IMPL_22293_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_IMPL_22293(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_22293_ID_;

// public bool onMenuItemClick(Android.android.view.MenuItem arg0) [instance] :19498
bool Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick(uObject* arg0)
{
    return Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_IMPL_22293(_subclassed, _javaObject, arg0);
}

// public static extern bool onMenuItemClick_IMPL_22293(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19505
bool Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_IMPL_22293(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_22293_ID(),"android/view/MenuItem$OnMenuItemClickListener","onMenuItemClick","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnMenuItemClickListener.onMenuItemClick could not be cached",104);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_22293_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(19909)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_SubMenu :19909
// {
Android_android_view_SubMenu_type* Android_android_view_SubMenu_typeof()
{
    static uSStrong<Android_android_view_SubMenu_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 38;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Android_android_view_SubMenu);
    options.TypeSize = sizeof(Android_android_view_SubMenu_type);
    type = (Android_android_view_SubMenu_type*)uClassType::New("Android.Fallbacks.Android_android_view_SubMenu", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_setHeaderTitle1 = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__setHeaderTitle1_fn;
    type->interface2.fp_setHeaderTitle = (void(*)(uObject*, uObject*, uObject**))Android_android_view_SubMenu__setHeaderTitle_fn;
    type->interface2.fp_setHeaderIcon1 = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__setHeaderIcon1_fn;
    type->interface2.fp_setHeaderIcon = (void(*)(uObject*, ::g::Android::android::graphics::drawable::Drawable*, uObject**))Android_android_view_SubMenu__setHeaderIcon_fn;
    type->interface2.fp_setHeaderView = (void(*)(uObject*, ::g::Android::android::view::View*, uObject**))Android_android_view_SubMenu__setHeaderView_fn;
    type->interface2.fp_clearHeader = (void(*)(uObject*))Android_android_view_SubMenu__clearHeader_fn;
    type->interface2.fp_setIcon1 = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__setIcon1_fn;
    type->interface2.fp_setIcon = (void(*)(uObject*, ::g::Android::android::graphics::drawable::Drawable*, uObject**))Android_android_view_SubMenu__setIcon_fn;
    type->interface2.fp_getItem = (void(*)(uObject*, uObject**))Android_android_view_SubMenu__getItem_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_add = (void(*)(uObject*, uObject*, uObject**))Android_android_view_SubMenu__add_fn;
    type->interface3.fp_add1 = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__add1_fn;
    type->interface3.fp_add2 = (void(*)(uObject*, int*, int*, int*, uObject*, uObject**))Android_android_view_SubMenu__add2_fn;
    type->interface3.fp_add3 = (void(*)(uObject*, int*, int*, int*, int*, uObject**))Android_android_view_SubMenu__add3_fn;
    type->interface3.fp_addSubMenu = (void(*)(uObject*, uObject*, uObject**))Android_android_view_SubMenu__addSubMenu_fn;
    type->interface3.fp_addSubMenu1 = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__addSubMenu1_fn;
    type->interface3.fp_addSubMenu2 = (void(*)(uObject*, int*, int*, int*, uObject*, uObject**))Android_android_view_SubMenu__addSubMenu2_fn;
    type->interface3.fp_addSubMenu3 = (void(*)(uObject*, int*, int*, int*, int*, uObject**))Android_android_view_SubMenu__addSubMenu3_fn;
    type->interface3.fp_addIntentOptions = (void(*)(uObject*, int*, int*, int*, ::g::Android::android::content::ComponentName*, ::g::Android::Runtime::ObjectArray*, ::g::Android::android::content::Intent*, int*, ::g::Android::Runtime::ObjectArray*, int*))Android_android_view_SubMenu__addIntentOptions_fn;
    type->interface3.fp_removeItem = (void(*)(uObject*, int*))Android_android_view_SubMenu__removeItem_fn;
    type->interface3.fp_removeGroup = (void(*)(uObject*, int*))Android_android_view_SubMenu__removeGroup_fn;
    type->interface3.fp_clear = (void(*)(uObject*))Android_android_view_SubMenu__clear_fn;
    type->interface3.fp_setGroupCheckable = (void(*)(uObject*, int*, bool*, bool*))Android_android_view_SubMenu__setGroupCheckable_fn;
    type->interface3.fp_setGroupVisible = (void(*)(uObject*, int*, bool*))Android_android_view_SubMenu__setGroupVisible_fn;
    type->interface3.fp_setGroupEnabled = (void(*)(uObject*, int*, bool*))Android_android_view_SubMenu__setGroupEnabled_fn;
    type->interface3.fp_hasVisibleItems = (void(*)(uObject*, bool*))Android_android_view_SubMenu__hasVisibleItems_fn;
    type->interface3.fp_findItem = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__findItem_fn;
    type->interface3.fp_size = (void(*)(uObject*, int*))Android_android_view_SubMenu__size_fn;
    type->interface3.fp_getItem = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__getItem1_fn;
    type->interface3.fp_close = (void(*)(uObject*))Android_android_view_SubMenu__close_fn;
    type->interface3.fp_performShortcut = (void(*)(uObject*, int*, ::g::Android::android::view::KeyEvent*, int*, bool*))Android_android_view_SubMenu__performShortcut_fn;
    type->interface3.fp_isShortcutKey = (void(*)(uObject*, int*, ::g::Android::android::view::KeyEvent*, bool*))Android_android_view_SubMenu__isShortcutKey_fn;
    type->interface3.fp_performIdentifierAction = (void(*)(uObject*, int*, int*, bool*))Android_android_view_SubMenu__performIdentifierAction_fn;
    type->interface3.fp_setQwertyMode = (void(*)(uObject*, bool*))Android_android_view_SubMenu__setQwertyMode_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[11] = ::g::Android::android::view::MenuItem_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[12] = ::g::Android::android::view::SubMenu_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_SubMenu_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_SubMenu_type, interface1),
        ::g::Android::android::view::SubMenu_typeof(), offsetof(Android_android_view_SubMenu_type, interface2),
        ::g::Android::android::view::Menu_typeof(), offsetof(Android_android_view_SubMenu_type, interface3));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::add_22256_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::add_22257_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::add_22258_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::add_22259_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::addIntentOptions_22264_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::addSubMenu_22260_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::addSubMenu_22261_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::addSubMenu_22262_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::addSubMenu_22263_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::clear_22267_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::clearHeader_22582_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::close_22275_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::findItem_22272_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::getItem_22274_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::getItem_22585_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::hasVisibleItems_22271_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::isShortcutKey_22277_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::performIdentifierAction_22278_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::performShortcut_22276_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::removeGroup_22266_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::removeItem_22265_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setGroupCheckable_22268_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setGroupEnabled_22270_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setGroupVisible_22269_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setHeaderIcon_22579_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setHeaderIcon_22580_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setHeaderTitle_22577_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setHeaderTitle_22578_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setHeaderView_22581_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setIcon_22583_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setIcon_22584_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setQwertyMode_22279_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::size_22273_ID_, uFieldFlagsStatic);
    return type;
}

// public Android.android.view.MenuItem add(Android.java.lang.CharSequence arg0) :19957
void Android_android_view_SubMenu__add_fn(Android_android_view_SubMenu* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->add(arg0);
}

// public Android.android.view.MenuItem add(int arg0) :19962
void Android_android_view_SubMenu__add1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->add1(*arg0);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) :19967
void Android_android_view_SubMenu__add2_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, uObject* arg3, uObject** __retval)
{
    *__retval = __this->add2(*arg0, *arg1, *arg2, arg3);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, int arg3) :19972
void Android_android_view_SubMenu__add3_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, int* arg3, uObject** __retval)
{
    *__retval = __this->add3(*arg0, *arg1, *arg2, *arg3);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22256(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20106
void Android_android_view_SubMenu__add_IMPL_22256_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::add_IMPL_22256(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22257(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20109
void Android_android_view_SubMenu__add_IMPL_22257_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::add_IMPL_22257(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22258(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) :20112
void Android_android_view_SubMenu__add_IMPL_22258_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::add_IMPL_22258(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22259(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :20115
void Android_android_view_SubMenu__add_IMPL_22259_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::add_IMPL_22259(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public int addIntentOptions(int arg0, int arg1, int arg2, Android.android.content.ComponentName arg3, Android.Runtime.ObjectArray<Android.android.content.Intent> arg4, Android.android.content.Intent arg5, int arg6, Android.Runtime.ObjectArray<Android.android.view.MenuItem> arg7) :19997
void Android_android_view_SubMenu__addIntentOptions_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, ::g::Android::android::content::ComponentName* arg3, ::g::Android::Runtime::ObjectArray* arg4, ::g::Android::android::content::Intent* arg5, int* arg6, ::g::Android::Runtime::ObjectArray* arg7, int* __retval)
{
    *__retval = __this->addIntentOptions(*arg0, *arg1, *arg2, arg3, arg4, arg5, *arg6, arg7);
}

// public static extern int addIntentOptions_IMPL_22264(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6, Android.Base.Wrappers.IJWrapper arg7, int arg8, Android.Base.Wrappers.IJWrapper arg9) :20130
void Android_android_view_SubMenu__addIntentOptions_IMPL_22264_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject* arg6_, uObject* arg7_, int* arg8_, uObject* arg9_, int* __retval)
{
    *__retval = Android_android_view_SubMenu::addIntentOptions_IMPL_22264(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_, arg6_, arg7_, *arg8_, arg9_);
}

// public Android.android.view.SubMenu addSubMenu(Android.java.lang.CharSequence arg0) :19977
void Android_android_view_SubMenu__addSubMenu_fn(Android_android_view_SubMenu* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->addSubMenu(arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0) :19982
void Android_android_view_SubMenu__addSubMenu1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->addSubMenu1(*arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) :19987
void Android_android_view_SubMenu__addSubMenu2_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, uObject* arg3, uObject** __retval)
{
    *__retval = __this->addSubMenu2(*arg0, *arg1, *arg2, arg3);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, int arg3) :19992
void Android_android_view_SubMenu__addSubMenu3_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, int* arg3, uObject** __retval)
{
    *__retval = __this->addSubMenu3(*arg0, *arg1, *arg2, *arg3);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22260(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20118
void Android_android_view_SubMenu__addSubMenu_IMPL_22260_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::addSubMenu_IMPL_22260(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22261(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20121
void Android_android_view_SubMenu__addSubMenu_IMPL_22261_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::addSubMenu_IMPL_22261(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22262(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) :20124
void Android_android_view_SubMenu__addSubMenu_IMPL_22262_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::addSubMenu_IMPL_22262(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22263(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :20127
void Android_android_view_SubMenu__addSubMenu_IMPL_22263_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::addSubMenu_IMPL_22263(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public void clear() :20012
void Android_android_view_SubMenu__clear_fn(Android_android_view_SubMenu* __this)
{
    __this->clear();
}

// public static extern void clear_IMPL_22267(bool arg0, Android.Base.Primitives.ujobject arg1) :20139
void Android_android_view_SubMenu__clear_IMPL_22267_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_view_SubMenu::clear_IMPL_22267(*arg0_, *arg1_);
}

// public void clearHeader() :19937
void Android_android_view_SubMenu__clearHeader_fn(Android_android_view_SubMenu* __this)
{
    __this->clearHeader();
}

// public static extern void clearHeader_IMPL_22582(bool arg0, Android.Base.Primitives.ujobject arg1) :20094
void Android_android_view_SubMenu__clearHeader_IMPL_22582_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_view_SubMenu::clearHeader_IMPL_22582(*arg0_, *arg1_);
}

// public void close() :20052
void Android_android_view_SubMenu__close_fn(Android_android_view_SubMenu* __this)
{
    __this->close();
}

// public static extern void close_IMPL_22275(bool arg0, Android.Base.Primitives.ujobject arg1) :20163
void Android_android_view_SubMenu__close_IMPL_22275_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_view_SubMenu::close_IMPL_22275(*arg0_, *arg1_);
}

// public Android.android.view.MenuItem findItem(int arg0) :20037
void Android_android_view_SubMenu__findItem_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->findItem(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper findItem_IMPL_22272(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20154
void Android_android_view_SubMenu__findItem_IMPL_22272_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::findItem_IMPL_22272(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem getItem() :19952
void Android_android_view_SubMenu__getItem_fn(Android_android_view_SubMenu* __this, uObject** __retval)
{
    *__retval = __this->getItem();
}

// public Android.android.view.MenuItem getItem(int arg0) :20047
void Android_android_view_SubMenu__getItem1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->getItem1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22274(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20160
void Android_android_view_SubMenu__getItem_IMPL_22274_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::getItem_IMPL_22274(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22585(bool arg0, Android.Base.Primitives.ujobject arg1) :20103
void Android_android_view_SubMenu__getItem_IMPL_22585_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::getItem_IMPL_22585(*arg0_, *arg1_);
}

// public bool hasVisibleItems() :20032
void Android_android_view_SubMenu__hasVisibleItems_fn(Android_android_view_SubMenu* __this, bool* __retval)
{
    *__retval = __this->hasVisibleItems();
}

// public static extern bool hasVisibleItems_IMPL_22271(bool arg0, Android.Base.Primitives.ujobject arg1) :20151
void Android_android_view_SubMenu__hasVisibleItems_IMPL_22271_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_SubMenu::hasVisibleItems_IMPL_22271(*arg0_, *arg1_);
}

// public bool isShortcutKey(int arg0, Android.android.view.KeyEvent arg1) :20062
void Android_android_view_SubMenu__isShortcutKey_fn(Android_android_view_SubMenu* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    *__retval = __this->isShortcutKey(*arg0, arg1);
}

// public static extern bool isShortcutKey_IMPL_22277(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :20169
void Android_android_view_SubMenu__isShortcutKey_IMPL_22277_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = Android_android_view_SubMenu::isShortcutKey_IMPL_22277(*arg0_, *arg1_, *arg2_, arg3_);
}

// public bool performIdentifierAction(int arg0, int arg1) :20067
void Android_android_view_SubMenu__performIdentifierAction_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, bool* __retval)
{
    *__retval = __this->performIdentifierAction(*arg0, *arg1);
}

// public static extern bool performIdentifierAction_IMPL_22278(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :20172
void Android_android_view_SubMenu__performIdentifierAction_IMPL_22278_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* __retval)
{
    *__retval = Android_android_view_SubMenu::performIdentifierAction_IMPL_22278(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public bool performShortcut(int arg0, Android.android.view.KeyEvent arg1, int arg2) :20057
void Android_android_view_SubMenu__performShortcut_fn(Android_android_view_SubMenu* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, int* arg2, bool* __retval)
{
    *__retval = __this->performShortcut(*arg0, arg1, *arg2);
}

// public static extern bool performShortcut_IMPL_22276(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :20166
void Android_android_view_SubMenu__performShortcut_IMPL_22276_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, int* arg4_, bool* __retval)
{
    *__retval = Android_android_view_SubMenu::performShortcut_IMPL_22276(*arg0_, *arg1_, *arg2_, arg3_, *arg4_);
}

// public void removeGroup(int arg0) :20007
void Android_android_view_SubMenu__removeGroup_fn(Android_android_view_SubMenu* __this, int* arg0)
{
    __this->removeGroup(*arg0);
}

// public static extern void removeGroup_IMPL_22266(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20136
void Android_android_view_SubMenu__removeGroup_IMPL_22266_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_SubMenu::removeGroup_IMPL_22266(*arg0_, *arg1_, *arg2_);
}

// public void removeItem(int arg0) :20002
void Android_android_view_SubMenu__removeItem_fn(Android_android_view_SubMenu* __this, int* arg0)
{
    __this->removeItem(*arg0);
}

// public static extern void removeItem_IMPL_22265(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20133
void Android_android_view_SubMenu__removeItem_IMPL_22265_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_SubMenu::removeItem_IMPL_22265(*arg0_, *arg1_, *arg2_);
}

// public void setGroupCheckable(int arg0, bool arg1, bool arg2) :20017
void Android_android_view_SubMenu__setGroupCheckable_fn(Android_android_view_SubMenu* __this, int* arg0, bool* arg1, bool* arg2)
{
    __this->setGroupCheckable(*arg0, *arg1, *arg2);
}

// public static extern void setGroupCheckable_IMPL_22268(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3, bool arg4) :20142
void Android_android_view_SubMenu__setGroupCheckable_IMPL_22268_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_, bool* arg4_)
{
    Android_android_view_SubMenu::setGroupCheckable_IMPL_22268(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_);
}

// public void setGroupEnabled(int arg0, bool arg1) :20027
void Android_android_view_SubMenu__setGroupEnabled_fn(Android_android_view_SubMenu* __this, int* arg0, bool* arg1)
{
    __this->setGroupEnabled(*arg0, *arg1);
}

// public static extern void setGroupEnabled_IMPL_22270(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) :20148
void Android_android_view_SubMenu__setGroupEnabled_IMPL_22270_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_)
{
    Android_android_view_SubMenu::setGroupEnabled_IMPL_22270(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setGroupVisible(int arg0, bool arg1) :20022
void Android_android_view_SubMenu__setGroupVisible_fn(Android_android_view_SubMenu* __this, int* arg0, bool* arg1)
{
    __this->setGroupVisible(*arg0, *arg1);
}

// public static extern void setGroupVisible_IMPL_22269(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) :20145
void Android_android_view_SubMenu__setGroupVisible_IMPL_22269_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_)
{
    Android_android_view_SubMenu::setGroupVisible_IMPL_22269(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public Android.android.view.SubMenu setHeaderIcon(Android.android.graphics.drawable.Drawable arg0) :19927
void Android_android_view_SubMenu__setHeaderIcon_fn(Android_android_view_SubMenu* __this, ::g::Android::android::graphics::drawable::Drawable* arg0, uObject** __retval)
{
    *__retval = __this->setHeaderIcon(arg0);
}

// public Android.android.view.SubMenu setHeaderIcon(int arg0) :19922
void Android_android_view_SubMenu__setHeaderIcon1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setHeaderIcon1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderIcon_IMPL_22579(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20085
void Android_android_view_SubMenu__setHeaderIcon_IMPL_22579_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setHeaderIcon_IMPL_22579(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderIcon_IMPL_22580(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20088
void Android_android_view_SubMenu__setHeaderIcon_IMPL_22580_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setHeaderIcon_IMPL_22580(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.SubMenu setHeaderTitle(Android.java.lang.CharSequence arg0) :19917
void Android_android_view_SubMenu__setHeaderTitle_fn(Android_android_view_SubMenu* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->setHeaderTitle(arg0);
}

// public Android.android.view.SubMenu setHeaderTitle(int arg0) :19912
void Android_android_view_SubMenu__setHeaderTitle1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setHeaderTitle1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderTitle_IMPL_22577(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20079
void Android_android_view_SubMenu__setHeaderTitle_IMPL_22577_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setHeaderTitle_IMPL_22577(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderTitle_IMPL_22578(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20082
void Android_android_view_SubMenu__setHeaderTitle_IMPL_22578_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setHeaderTitle_IMPL_22578(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.SubMenu setHeaderView(Android.android.view.View arg0) :19932
void Android_android_view_SubMenu__setHeaderView_fn(Android_android_view_SubMenu* __this, ::g::Android::android::view::View* arg0, uObject** __retval)
{
    *__retval = __this->setHeaderView(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderView_IMPL_22581(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20091
void Android_android_view_SubMenu__setHeaderView_IMPL_22581_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setHeaderView_IMPL_22581(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.SubMenu setIcon(Android.android.graphics.drawable.Drawable arg0) :19947
void Android_android_view_SubMenu__setIcon_fn(Android_android_view_SubMenu* __this, ::g::Android::android::graphics::drawable::Drawable* arg0, uObject** __retval)
{
    *__retval = __this->setIcon(arg0);
}

// public Android.android.view.SubMenu setIcon(int arg0) :19942
void Android_android_view_SubMenu__setIcon1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setIcon1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22583(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20097
void Android_android_view_SubMenu__setIcon_IMPL_22583_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setIcon_IMPL_22583(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22584(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20100
void Android_android_view_SubMenu__setIcon_IMPL_22584_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setIcon_IMPL_22584(*arg0_, *arg1_, arg2_);
}

// public void setQwertyMode(bool arg0) :20072
void Android_android_view_SubMenu__setQwertyMode_fn(Android_android_view_SubMenu* __this, bool* arg0)
{
    __this->setQwertyMode(*arg0);
}

// public static extern void setQwertyMode_IMPL_22279(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :20175
void Android_android_view_SubMenu__setQwertyMode_IMPL_22279_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    Android_android_view_SubMenu::setQwertyMode_IMPL_22279(*arg0_, *arg1_, *arg2_);
}

// public int size() :20042
void Android_android_view_SubMenu__size_fn(Android_android_view_SubMenu* __this, int* __retval)
{
    *__retval = __this->size();
}

// public static extern int size_IMPL_22273(bool arg0, Android.Base.Primitives.ujobject arg1) :20157
void Android_android_view_SubMenu__size_IMPL_22273_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_view_SubMenu::size_IMPL_22273(*arg0_, *arg1_);
}

jmethodID Android_android_view_SubMenu::add_22256_ID_;
jmethodID Android_android_view_SubMenu::add_22257_ID_;
jmethodID Android_android_view_SubMenu::add_22258_ID_;
jmethodID Android_android_view_SubMenu::add_22259_ID_;
jmethodID Android_android_view_SubMenu::addIntentOptions_22264_ID_;
jmethodID Android_android_view_SubMenu::addSubMenu_22260_ID_;
jmethodID Android_android_view_SubMenu::addSubMenu_22261_ID_;
jmethodID Android_android_view_SubMenu::addSubMenu_22262_ID_;
jmethodID Android_android_view_SubMenu::addSubMenu_22263_ID_;
jmethodID Android_android_view_SubMenu::clear_22267_ID_;
jmethodID Android_android_view_SubMenu::clearHeader_22582_ID_;
jmethodID Android_android_view_SubMenu::close_22275_ID_;
jmethodID Android_android_view_SubMenu::findItem_22272_ID_;
jmethodID Android_android_view_SubMenu::getItem_22274_ID_;
jmethodID Android_android_view_SubMenu::getItem_22585_ID_;
jmethodID Android_android_view_SubMenu::hasVisibleItems_22271_ID_;
jmethodID Android_android_view_SubMenu::isShortcutKey_22277_ID_;
jmethodID Android_android_view_SubMenu::performIdentifierAction_22278_ID_;
jmethodID Android_android_view_SubMenu::performShortcut_22276_ID_;
jmethodID Android_android_view_SubMenu::removeGroup_22266_ID_;
jmethodID Android_android_view_SubMenu::removeItem_22265_ID_;
jmethodID Android_android_view_SubMenu::setGroupCheckable_22268_ID_;
jmethodID Android_android_view_SubMenu::setGroupEnabled_22270_ID_;
jmethodID Android_android_view_SubMenu::setGroupVisible_22269_ID_;
jmethodID Android_android_view_SubMenu::setHeaderIcon_22579_ID_;
jmethodID Android_android_view_SubMenu::setHeaderIcon_22580_ID_;
jmethodID Android_android_view_SubMenu::setHeaderTitle_22577_ID_;
jmethodID Android_android_view_SubMenu::setHeaderTitle_22578_ID_;
jmethodID Android_android_view_SubMenu::setHeaderView_22581_ID_;
jmethodID Android_android_view_SubMenu::setIcon_22583_ID_;
jmethodID Android_android_view_SubMenu::setIcon_22584_ID_;
jmethodID Android_android_view_SubMenu::setQwertyMode_22279_ID_;
jmethodID Android_android_view_SubMenu::size_22273_ID_;

// public Android.android.view.MenuItem add(Android.java.lang.CharSequence arg0) [instance] :19957
uObject* Android_android_view_SubMenu::add(uObject* arg0)
{
    return Android_android_view_SubMenu::add_IMPL_22256(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem add(int arg0) [instance] :19962
uObject* Android_android_view_SubMenu::add1(int arg0)
{
    return Android_android_view_SubMenu::add_IMPL_22257(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) [instance] :19967
uObject* Android_android_view_SubMenu::add2(int arg0, int arg1, int arg2, uObject* arg3)
{
    return Android_android_view_SubMenu::add_IMPL_22258(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, int arg3) [instance] :19972
uObject* Android_android_view_SubMenu::add3(int arg0, int arg1, int arg2, int arg3)
{
    return Android_android_view_SubMenu::add_IMPL_22259(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public int addIntentOptions(int arg0, int arg1, int arg2, Android.android.content.ComponentName arg3, Android.Runtime.ObjectArray<Android.android.content.Intent> arg4, Android.android.content.Intent arg5, int arg6, Android.Runtime.ObjectArray<Android.android.view.MenuItem> arg7) [instance] :19997
int Android_android_view_SubMenu::addIntentOptions(int arg0, int arg1, int arg2, ::g::Android::android::content::ComponentName* arg3, ::g::Android::Runtime::ObjectArray* arg4, ::g::Android::android::content::Intent* arg5, int arg6, ::g::Android::Runtime::ObjectArray* arg7)
{
    return Android_android_view_SubMenu::addIntentOptions_IMPL_22264(_subclassed, _javaObject, arg0, arg1, arg2, (uObject*)arg3, (uObject*)arg4, (uObject*)arg5, arg6, (uObject*)arg7);
}

// public Android.android.view.SubMenu addSubMenu(Android.java.lang.CharSequence arg0) [instance] :19977
uObject* Android_android_view_SubMenu::addSubMenu(uObject* arg0)
{
    return Android_android_view_SubMenu::addSubMenu_IMPL_22260(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0) [instance] :19982
uObject* Android_android_view_SubMenu::addSubMenu1(int arg0)
{
    return Android_android_view_SubMenu::addSubMenu_IMPL_22261(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) [instance] :19987
uObject* Android_android_view_SubMenu::addSubMenu2(int arg0, int arg1, int arg2, uObject* arg3)
{
    return Android_android_view_SubMenu::addSubMenu_IMPL_22262(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, int arg3) [instance] :19992
uObject* Android_android_view_SubMenu::addSubMenu3(int arg0, int arg1, int arg2, int arg3)
{
    return Android_android_view_SubMenu::addSubMenu_IMPL_22263(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public void clear() [instance] :20012
void Android_android_view_SubMenu::clear()
{
    Android_android_view_SubMenu::clear_IMPL_22267(_subclassed, _javaObject);
}

// public void clearHeader() [instance] :19937
void Android_android_view_SubMenu::clearHeader()
{
    Android_android_view_SubMenu::clearHeader_IMPL_22582(_subclassed, _javaObject);
}

// public void close() [instance] :20052
void Android_android_view_SubMenu::close()
{
    Android_android_view_SubMenu::close_IMPL_22275(_subclassed, _javaObject);
}

// public Android.android.view.MenuItem findItem(int arg0) [instance] :20037
uObject* Android_android_view_SubMenu::findItem(int arg0)
{
    return Android_android_view_SubMenu::findItem_IMPL_22272(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem getItem() [instance] :19952
uObject* Android_android_view_SubMenu::getItem()
{
    return Android_android_view_SubMenu::getItem_IMPL_22585(_subclassed, _javaObject);
}

// public Android.android.view.MenuItem getItem(int arg0) [instance] :20047
uObject* Android_android_view_SubMenu::getItem1(int arg0)
{
    return Android_android_view_SubMenu::getItem_IMPL_22274(_subclassed, _javaObject, arg0);
}

// public bool hasVisibleItems() [instance] :20032
bool Android_android_view_SubMenu::hasVisibleItems()
{
    return Android_android_view_SubMenu::hasVisibleItems_IMPL_22271(_subclassed, _javaObject);
}

// public bool isShortcutKey(int arg0, Android.android.view.KeyEvent arg1) [instance] :20062
bool Android_android_view_SubMenu::isShortcutKey(int arg0, ::g::Android::android::view::KeyEvent* arg1)
{
    return Android_android_view_SubMenu::isShortcutKey_IMPL_22277(_subclassed, _javaObject, arg0, (uObject*)arg1);
}

// public bool performIdentifierAction(int arg0, int arg1) [instance] :20067
bool Android_android_view_SubMenu::performIdentifierAction(int arg0, int arg1)
{
    return Android_android_view_SubMenu::performIdentifierAction_IMPL_22278(_subclassed, _javaObject, arg0, arg1);
}

// public bool performShortcut(int arg0, Android.android.view.KeyEvent arg1, int arg2) [instance] :20057
bool Android_android_view_SubMenu::performShortcut(int arg0, ::g::Android::android::view::KeyEvent* arg1, int arg2)
{
    return Android_android_view_SubMenu::performShortcut_IMPL_22276(_subclassed, _javaObject, arg0, (uObject*)arg1, arg2);
}

// public void removeGroup(int arg0) [instance] :20007
void Android_android_view_SubMenu::removeGroup(int arg0)
{
    Android_android_view_SubMenu::removeGroup_IMPL_22266(_subclassed, _javaObject, arg0);
}

// public void removeItem(int arg0) [instance] :20002
void Android_android_view_SubMenu::removeItem(int arg0)
{
    Android_android_view_SubMenu::removeItem_IMPL_22265(_subclassed, _javaObject, arg0);
}

// public void setGroupCheckable(int arg0, bool arg1, bool arg2) [instance] :20017
void Android_android_view_SubMenu::setGroupCheckable(int arg0, bool arg1, bool arg2)
{
    Android_android_view_SubMenu::setGroupCheckable_IMPL_22268(_subclassed, _javaObject, arg0, arg1, arg2);
}

// public void setGroupEnabled(int arg0, bool arg1) [instance] :20027
void Android_android_view_SubMenu::setGroupEnabled(int arg0, bool arg1)
{
    Android_android_view_SubMenu::setGroupEnabled_IMPL_22270(_subclassed, _javaObject, arg0, arg1);
}

// public void setGroupVisible(int arg0, bool arg1) [instance] :20022
void Android_android_view_SubMenu::setGroupVisible(int arg0, bool arg1)
{
    Android_android_view_SubMenu::setGroupVisible_IMPL_22269(_subclassed, _javaObject, arg0, arg1);
}

// public Android.android.view.SubMenu setHeaderIcon(Android.android.graphics.drawable.Drawable arg0) [instance] :19927
uObject* Android_android_view_SubMenu::setHeaderIcon(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    return Android_android_view_SubMenu::setHeaderIcon_IMPL_22580(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.SubMenu setHeaderIcon(int arg0) [instance] :19922
uObject* Android_android_view_SubMenu::setHeaderIcon1(int arg0)
{
    return Android_android_view_SubMenu::setHeaderIcon_IMPL_22579(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu setHeaderTitle(Android.java.lang.CharSequence arg0) [instance] :19917
uObject* Android_android_view_SubMenu::setHeaderTitle(uObject* arg0)
{
    return Android_android_view_SubMenu::setHeaderTitle_IMPL_22578(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu setHeaderTitle(int arg0) [instance] :19912
uObject* Android_android_view_SubMenu::setHeaderTitle1(int arg0)
{
    return Android_android_view_SubMenu::setHeaderTitle_IMPL_22577(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu setHeaderView(Android.android.view.View arg0) [instance] :19932
uObject* Android_android_view_SubMenu::setHeaderView(::g::Android::android::view::View* arg0)
{
    return Android_android_view_SubMenu::setHeaderView_IMPL_22581(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.SubMenu setIcon(Android.android.graphics.drawable.Drawable arg0) [instance] :19947
uObject* Android_android_view_SubMenu::setIcon(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    return Android_android_view_SubMenu::setIcon_IMPL_22584(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.SubMenu setIcon(int arg0) [instance] :19942
uObject* Android_android_view_SubMenu::setIcon1(int arg0)
{
    return Android_android_view_SubMenu::setIcon_IMPL_22583(_subclassed, _javaObject, arg0);
}

// public void setQwertyMode(bool arg0) [instance] :20072
void Android_android_view_SubMenu::setQwertyMode(bool arg0)
{
    Android_android_view_SubMenu::setQwertyMode_IMPL_22279(_subclassed, _javaObject, arg0);
}

// public int size() [instance] :20042
int Android_android_view_SubMenu::size()
{
    return Android_android_view_SubMenu::size_IMPL_22273(_subclassed, _javaObject);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22256(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20106
uObject* Android_android_view_SubMenu::add_IMPL_22256(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::add_22256_ID(),"android/view/SubMenu","add","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::add_22256_ID(), _obArg2),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22257(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20109
uObject* Android_android_view_SubMenu::add_IMPL_22257(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::add_22257_ID(),"android/view/SubMenu","add","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::add_22257_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22258(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :20112
uObject* Android_android_view_SubMenu::add_IMPL_22258(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::add_22258_ID(),"android/view/SubMenu","add","(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::add_22258_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22259(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :20115
uObject* Android_android_view_SubMenu::add_IMPL_22259(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::add_22259_ID(),"android/view/SubMenu","add","(IIII)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::add_22259_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int addIntentOptions_IMPL_22264(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6, Android.Base.Wrappers.IJWrapper arg7, int arg8, Android.Base.Wrappers.IJWrapper arg9) [static] :20130
int Android_android_view_SubMenu::addIntentOptions_IMPL_22264(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_, uObject* arg6_, uObject* arg7_, int arg8_, uObject* arg9_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::addIntentOptions_22264_ID(),"android/view/SubMenu","addIntentOptions","(IIILandroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I[Landroid/view/MenuItem;)I",GetMethodID,"Id for fallback method android.view.SubMenu.addIntentOptions could not be cached",80);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg6 = ((!arg6_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg6_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg7 = ((!arg7_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg7_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg9 = ((!arg9_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg9_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_SubMenu::addIntentOptions_22264_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5, _obArg6, _obArg7, ((jint)arg8_), _obArg9));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22260(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20118
uObject* Android_android_view_SubMenu::addSubMenu_IMPL_22260(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::addSubMenu_22260_ID(),"android/view/SubMenu","addSubMenu","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::addSubMenu_22260_ID(), _obArg2),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22261(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20121
uObject* Android_android_view_SubMenu::addSubMenu_IMPL_22261(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::addSubMenu_22261_ID(),"android/view/SubMenu","addSubMenu","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::addSubMenu_22261_ID(), ((jint)arg2_)),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22262(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :20124
uObject* Android_android_view_SubMenu::addSubMenu_IMPL_22262(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::addSubMenu_22262_ID(),"android/view/SubMenu","addSubMenu","(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::addSubMenu_22262_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22263(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :20127
uObject* Android_android_view_SubMenu::addSubMenu_IMPL_22263(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::addSubMenu_22263_ID(),"android/view/SubMenu","addSubMenu","(IIII)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::addSubMenu_22263_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_22267(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20139
void Android_android_view_SubMenu::clear_IMPL_22267(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::clear_22267_ID(),"android/view/SubMenu","clear","()V",GetMethodID,"Id for fallback method android.view.SubMenu.clear could not be cached",69);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::clear_22267_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void clearHeader_IMPL_22582(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20094
void Android_android_view_SubMenu::clearHeader_IMPL_22582(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::clearHeader_22582_ID(),"android/view/SubMenu","clearHeader","()V",GetMethodID,"Id for fallback method android.view.SubMenu.clearHeader could not be cached",75);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::clearHeader_22582_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void close_IMPL_22275(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20163
void Android_android_view_SubMenu::close_IMPL_22275(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::close_22275_ID(),"android/view/SubMenu","close","()V",GetMethodID,"Id for fallback method android.view.SubMenu.close could not be cached",69);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::close_22275_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper findItem_IMPL_22272(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20154
uObject* Android_android_view_SubMenu::findItem_IMPL_22272(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::findItem_22272_ID(),"android/view/SubMenu","findItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.findItem could not be cached",72);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::findItem_22272_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22274(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20160
uObject* Android_android_view_SubMenu::getItem_IMPL_22274(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::getItem_22274_ID(),"android/view/SubMenu","getItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.getItem could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::getItem_22274_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22585(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20103
uObject* Android_android_view_SubMenu::getItem_IMPL_22585(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::getItem_22585_ID(),"android/view/SubMenu","getItem","()Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.getItem could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::getItem_22585_ID()),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool hasVisibleItems_IMPL_22271(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20151
bool Android_android_view_SubMenu::hasVisibleItems_IMPL_22271(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::hasVisibleItems_22271_ID(),"android/view/SubMenu","hasVisibleItems","()Z",GetMethodID,"Id for fallback method android.view.SubMenu.hasVisibleItems could not be cached",79);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_SubMenu::hasVisibleItems_22271_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isShortcutKey_IMPL_22277(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :20169
bool Android_android_view_SubMenu::isShortcutKey_IMPL_22277(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::isShortcutKey_22277_ID(),"android/view/SubMenu","isShortcutKey","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.view.SubMenu.isShortcutKey could not be cached",77);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_SubMenu::isShortcutKey_22277_ID(), ((jint)arg2_), _obArg3));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performIdentifierAction_IMPL_22278(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :20172
bool Android_android_view_SubMenu::performIdentifierAction_IMPL_22278(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::performIdentifierAction_22278_ID(),"android/view/SubMenu","performIdentifierAction","(II)Z",GetMethodID,"Id for fallback method android.view.SubMenu.performIdentifierAction could not be cached",87);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_SubMenu::performIdentifierAction_22278_ID(), ((jint)arg2_), ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performShortcut_IMPL_22276(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :20166
bool Android_android_view_SubMenu::performShortcut_IMPL_22276(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::performShortcut_22276_ID(),"android/view/SubMenu","performShortcut","(ILandroid/view/KeyEvent;I)Z",GetMethodID,"Id for fallback method android.view.SubMenu.performShortcut could not be cached",79);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_SubMenu::performShortcut_22276_ID(), ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void removeGroup_IMPL_22266(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20136
void Android_android_view_SubMenu::removeGroup_IMPL_22266(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::removeGroup_22266_ID(),"android/view/SubMenu","removeGroup","(I)V",GetMethodID,"Id for fallback method android.view.SubMenu.removeGroup could not be cached",75);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::removeGroup_22266_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void removeItem_IMPL_22265(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20133
void Android_android_view_SubMenu::removeItem_IMPL_22265(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::removeItem_22265_ID(),"android/view/SubMenu","removeItem","(I)V",GetMethodID,"Id for fallback method android.view.SubMenu.removeItem could not be cached",74);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::removeItem_22265_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupCheckable_IMPL_22268(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3, bool arg4) [static] :20142
void Android_android_view_SubMenu::setGroupCheckable_IMPL_22268(bool arg0_, jobject arg1_, int arg2_, bool arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setGroupCheckable_22268_ID(),"android/view/SubMenu","setGroupCheckable","(IZZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupCheckable could not be cached",81);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::setGroupCheckable_22268_ID(), ((jint)arg2_), ((jboolean)arg3_), ((jboolean)arg4_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupEnabled_IMPL_22270(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) [static] :20148
void Android_android_view_SubMenu::setGroupEnabled_IMPL_22270(bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setGroupEnabled_22270_ID(),"android/view/SubMenu","setGroupEnabled","(IZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupEnabled could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::setGroupEnabled_22270_ID(), ((jint)arg2_), ((jboolean)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupVisible_IMPL_22269(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) [static] :20145
void Android_android_view_SubMenu::setGroupVisible_IMPL_22269(bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setGroupVisible_22269_ID(),"android/view/SubMenu","setGroupVisible","(IZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupVisible could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::setGroupVisible_22269_ID(), ((jint)arg2_), ((jboolean)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderIcon_IMPL_22579(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20085
uObject* Android_android_view_SubMenu::setHeaderIcon_IMPL_22579(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setHeaderIcon_22579_ID(),"android/view/SubMenu","setHeaderIcon","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderIcon could not be cached",77);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setHeaderIcon_22579_ID(), ((jint)arg2_)),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderIcon_IMPL_22580(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20088
uObject* Android_android_view_SubMenu::setHeaderIcon_IMPL_22580(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setHeaderIcon_22580_ID(),"android/view/SubMenu","setHeaderIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderIcon could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setHeaderIcon_22580_ID(), _obArg2),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderTitle_IMPL_22577(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20079
uObject* Android_android_view_SubMenu::setHeaderTitle_IMPL_22577(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setHeaderTitle_22577_ID(),"android/view/SubMenu","setHeaderTitle","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderTitle could not be cached",78);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setHeaderTitle_22577_ID(), ((jint)arg2_)),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderTitle_IMPL_22578(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20082
uObject* Android_android_view_SubMenu::setHeaderTitle_IMPL_22578(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setHeaderTitle_22578_ID(),"android/view/SubMenu","setHeaderTitle","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderTitle could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setHeaderTitle_22578_ID(), _obArg2),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderView_IMPL_22581(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20091
uObject* Android_android_view_SubMenu::setHeaderView_IMPL_22581(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setHeaderView_22581_ID(),"android/view/SubMenu","setHeaderView","(Landroid/view/View;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderView could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setHeaderView_22581_ID(), _obArg2),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22583(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20097
uObject* Android_android_view_SubMenu::setIcon_IMPL_22583(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setIcon_22583_ID(),"android/view/SubMenu","setIcon","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setIcon could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setIcon_22583_ID(), ((jint)arg2_)),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22584(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20100
uObject* Android_android_view_SubMenu::setIcon_IMPL_22584(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setIcon_22584_ID(),"android/view/SubMenu","setIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setIcon could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setIcon_22584_ID(), _obArg2),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void setQwertyMode_IMPL_22279(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :20175
void Android_android_view_SubMenu::setQwertyMode_IMPL_22279(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setQwertyMode_22279_ID(),"android/view/SubMenu","setQwertyMode","(Z)V",GetMethodID,"Id for fallback method android.view.SubMenu.setQwertyMode could not be cached",77);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::setQwertyMode_22279_ID(), ((jboolean)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern int size_IMPL_22273(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20157
int Android_android_view_SubMenu::size_IMPL_22273(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::size_22273_ID(),"android/view/SubMenu","size","()I",GetMethodID,"Id for fallback method android.view.SubMenu.size could not be cached",68);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_SubMenu::size_22273_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(20283)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_SurfaceHolder :20283
// {
Android_android_view_SurfaceHolder_type* Android_android_view_SurfaceHolder_typeof()
{
    static uSStrong<Android_android_view_SurfaceHolder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_SurfaceHolder);
    options.TypeSize = sizeof(Android_android_view_SurfaceHolder_type);
    type = (Android_android_view_SurfaceHolder_type*)uClassType::New("Android.Fallbacks.Android_android_view_SurfaceHolder", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_addCallback = (void(*)(uObject*, uObject*))Android_android_view_SurfaceHolder__addCallback_fn;
    type->interface2.fp_removeCallback = (void(*)(uObject*, uObject*))Android_android_view_SurfaceHolder__removeCallback_fn;
    type->interface2.fp_isCreating = (void(*)(uObject*, bool*))Android_android_view_SurfaceHolder__isCreating_fn;
    type->interface2.fp_setType = (void(*)(uObject*, int*))Android_android_view_SurfaceHolder__setType_fn;
    type->interface2.fp_setFixedSize = (void(*)(uObject*, int*, int*))Android_android_view_SurfaceHolder__setFixedSize_fn;
    type->interface2.fp_setSizeFromLayout = (void(*)(uObject*))Android_android_view_SurfaceHolder__setSizeFromLayout_fn;
    type->interface2.fp_setFormat = (void(*)(uObject*, int*))Android_android_view_SurfaceHolder__setFormat_fn;
    type->interface2.fp_setKeepScreenOn = (void(*)(uObject*, bool*))Android_android_view_SurfaceHolder__setKeepScreenOn_fn;
    type->interface2.fp_lockCanvas = (void(*)(uObject*, ::g::Android::android::graphics::Canvas**))Android_android_view_SurfaceHolder__lockCanvas_fn;
    type->interface2.fp_lockCanvas1 = (void(*)(uObject*, ::g::Android::android::graphics::Rect*, ::g::Android::android::graphics::Canvas**))Android_android_view_SurfaceHolder__lockCanvas1_fn;
    type->interface2.fp_unlockCanvasAndPost = (void(*)(uObject*, ::g::Android::android::graphics::Canvas*))Android_android_view_SurfaceHolder__unlockCanvasAndPost_fn;
    type->interface2.fp_getSurfaceFrame = (void(*)(uObject*, ::g::Android::android::graphics::Rect**))Android_android_view_SurfaceHolder__getSurfaceFrame_fn;
    type->interface2.fp_getSurface = (void(*)(uObject*, ::g::Android::android::view::Surface**))Android_android_view_SurfaceHolder__getSurface_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[18] = ::g::Android::android::view::Surface_typeof();
    ::TYPES[19] = ::g::Android::android::graphics::Rect_typeof();
    ::TYPES[20] = ::g::Android::android::graphics::Canvas_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_SurfaceHolder_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_SurfaceHolder_type, interface1),
        ::g::Android::android::view::SurfaceHolder_typeof(), offsetof(Android_android_view_SurfaceHolder_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::addCallback_22610_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::getSurface_22622_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::getSurfaceFrame_22621_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::isCreating_22612_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::lockCanvas_22618_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::lockCanvas_22619_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::removeCallback_22611_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::setFixedSize_22614_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::setFormat_22616_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::setKeepScreenOn_22617_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::setSizeFromLayout_22615_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::setType_22613_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolder::unlockCanvasAndPost_22620_ID_, uFieldFlagsStatic);
    return type;
}

// public void addCallback(Android.android.view.SurfaceHolderDLRCallback arg0) :20286
void Android_android_view_SurfaceHolder__addCallback_fn(Android_android_view_SurfaceHolder* __this, uObject* arg0)
{
    __this->addCallback(arg0);
}

// public static extern void addCallback_IMPL_22610(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20353
void Android_android_view_SurfaceHolder__addCallback_IMPL_22610_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_view_SurfaceHolder::addCallback_IMPL_22610(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.Surface getSurface() :20346
void Android_android_view_SurfaceHolder__getSurface_fn(Android_android_view_SurfaceHolder* __this, ::g::Android::android::view::Surface** __retval)
{
    *__retval = __this->getSurface();
}

// public static extern Android.Base.Wrappers.IJWrapper getSurface_IMPL_22622(bool arg0, Android.Base.Primitives.ujobject arg1) :20389
void Android_android_view_SurfaceHolder__getSurface_IMPL_22622_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_SurfaceHolder::getSurface_IMPL_22622(*arg0_, *arg1_);
}

// public Android.android.graphics.Rect getSurfaceFrame() :20341
void Android_android_view_SurfaceHolder__getSurfaceFrame_fn(Android_android_view_SurfaceHolder* __this, ::g::Android::android::graphics::Rect** __retval)
{
    *__retval = __this->getSurfaceFrame();
}

// public static extern Android.Base.Wrappers.IJWrapper getSurfaceFrame_IMPL_22621(bool arg0, Android.Base.Primitives.ujobject arg1) :20386
void Android_android_view_SurfaceHolder__getSurfaceFrame_IMPL_22621_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_SurfaceHolder::getSurfaceFrame_IMPL_22621(*arg0_, *arg1_);
}

// public bool isCreating() :20296
void Android_android_view_SurfaceHolder__isCreating_fn(Android_android_view_SurfaceHolder* __this, bool* __retval)
{
    *__retval = __this->isCreating();
}

// public static extern bool isCreating_IMPL_22612(bool arg0, Android.Base.Primitives.ujobject arg1) :20359
void Android_android_view_SurfaceHolder__isCreating_IMPL_22612_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_SurfaceHolder::isCreating_IMPL_22612(*arg0_, *arg1_);
}

// public Android.android.graphics.Canvas lockCanvas() :20326
void Android_android_view_SurfaceHolder__lockCanvas_fn(Android_android_view_SurfaceHolder* __this, ::g::Android::android::graphics::Canvas** __retval)
{
    *__retval = __this->lockCanvas();
}

// public Android.android.graphics.Canvas lockCanvas(Android.android.graphics.Rect arg0) :20331
void Android_android_view_SurfaceHolder__lockCanvas1_fn(Android_android_view_SurfaceHolder* __this, ::g::Android::android::graphics::Rect* arg0, ::g::Android::android::graphics::Canvas** __retval)
{
    *__retval = __this->lockCanvas1(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper lockCanvas_IMPL_22618(bool arg0, Android.Base.Primitives.ujobject arg1) :20377
void Android_android_view_SurfaceHolder__lockCanvas_IMPL_22618_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_SurfaceHolder::lockCanvas_IMPL_22618(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper lockCanvas_IMPL_22619(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20380
void Android_android_view_SurfaceHolder__lockCanvas_IMPL_22619_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SurfaceHolder::lockCanvas_IMPL_22619(*arg0_, *arg1_, arg2_);
}

// public void removeCallback(Android.android.view.SurfaceHolderDLRCallback arg0) :20291
void Android_android_view_SurfaceHolder__removeCallback_fn(Android_android_view_SurfaceHolder* __this, uObject* arg0)
{
    __this->removeCallback(arg0);
}

// public static extern void removeCallback_IMPL_22611(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20356
void Android_android_view_SurfaceHolder__removeCallback_IMPL_22611_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_view_SurfaceHolder::removeCallback_IMPL_22611(*arg0_, *arg1_, arg2_);
}

// public void setFixedSize(int arg0, int arg1) :20306
void Android_android_view_SurfaceHolder__setFixedSize_fn(Android_android_view_SurfaceHolder* __this, int* arg0, int* arg1)
{
    __this->setFixedSize(*arg0, *arg1);
}

// public static extern void setFixedSize_IMPL_22614(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :20365
void Android_android_view_SurfaceHolder__setFixedSize_IMPL_22614_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    Android_android_view_SurfaceHolder::setFixedSize_IMPL_22614(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setFormat(int arg0) :20316
void Android_android_view_SurfaceHolder__setFormat_fn(Android_android_view_SurfaceHolder* __this, int* arg0)
{
    __this->setFormat(*arg0);
}

// public static extern void setFormat_IMPL_22616(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20371
void Android_android_view_SurfaceHolder__setFormat_IMPL_22616_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_SurfaceHolder::setFormat_IMPL_22616(*arg0_, *arg1_, *arg2_);
}

// public void setKeepScreenOn(bool arg0) :20321
void Android_android_view_SurfaceHolder__setKeepScreenOn_fn(Android_android_view_SurfaceHolder* __this, bool* arg0)
{
    __this->setKeepScreenOn(*arg0);
}

// public static extern void setKeepScreenOn_IMPL_22617(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :20374
void Android_android_view_SurfaceHolder__setKeepScreenOn_IMPL_22617_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    Android_android_view_SurfaceHolder::setKeepScreenOn_IMPL_22617(*arg0_, *arg1_, *arg2_);
}

// public void setSizeFromLayout() :20311
void Android_android_view_SurfaceHolder__setSizeFromLayout_fn(Android_android_view_SurfaceHolder* __this)
{
    __this->setSizeFromLayout();
}

// public static extern void setSizeFromLayout_IMPL_22615(bool arg0, Android.Base.Primitives.ujobject arg1) :20368
void Android_android_view_SurfaceHolder__setSizeFromLayout_IMPL_22615_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_view_SurfaceHolder::setSizeFromLayout_IMPL_22615(*arg0_, *arg1_);
}

// public void setType(int arg0) :20301
void Android_android_view_SurfaceHolder__setType_fn(Android_android_view_SurfaceHolder* __this, int* arg0)
{
    __this->setType(*arg0);
}

// public static extern void setType_IMPL_22613(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20362
void Android_android_view_SurfaceHolder__setType_IMPL_22613_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_SurfaceHolder::setType_IMPL_22613(*arg0_, *arg1_, *arg2_);
}

// public void unlockCanvasAndPost(Android.android.graphics.Canvas arg0) :20336
void Android_android_view_SurfaceHolder__unlockCanvasAndPost_fn(Android_android_view_SurfaceHolder* __this, ::g::Android::android::graphics::Canvas* arg0)
{
    __this->unlockCanvasAndPost(arg0);
}

// public static extern void unlockCanvasAndPost_IMPL_22620(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20383
void Android_android_view_SurfaceHolder__unlockCanvasAndPost_IMPL_22620_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_view_SurfaceHolder::unlockCanvasAndPost_IMPL_22620(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_view_SurfaceHolder::addCallback_22610_ID_;
jmethodID Android_android_view_SurfaceHolder::getSurface_22622_ID_;
jmethodID Android_android_view_SurfaceHolder::getSurfaceFrame_22621_ID_;
jmethodID Android_android_view_SurfaceHolder::isCreating_22612_ID_;
jmethodID Android_android_view_SurfaceHolder::lockCanvas_22618_ID_;
jmethodID Android_android_view_SurfaceHolder::lockCanvas_22619_ID_;
jmethodID Android_android_view_SurfaceHolder::removeCallback_22611_ID_;
jmethodID Android_android_view_SurfaceHolder::setFixedSize_22614_ID_;
jmethodID Android_android_view_SurfaceHolder::setFormat_22616_ID_;
jmethodID Android_android_view_SurfaceHolder::setKeepScreenOn_22617_ID_;
jmethodID Android_android_view_SurfaceHolder::setSizeFromLayout_22615_ID_;
jmethodID Android_android_view_SurfaceHolder::setType_22613_ID_;
jmethodID Android_android_view_SurfaceHolder::unlockCanvasAndPost_22620_ID_;

// public void addCallback(Android.android.view.SurfaceHolderDLRCallback arg0) [instance] :20286
void Android_android_view_SurfaceHolder::addCallback(uObject* arg0)
{
    Android_android_view_SurfaceHolder::addCallback_IMPL_22610(_subclassed, _javaObject, arg0);
}

// public Android.android.view.Surface getSurface() [instance] :20346
::g::Android::android::view::Surface* Android_android_view_SurfaceHolder::getSurface()
{
    return uCast< ::g::Android::android::view::Surface*>(Android_android_view_SurfaceHolder::getSurface_IMPL_22622(_subclassed, _javaObject), ::TYPES[18/*Android.android.view.Surface*/]);
}

// public Android.android.graphics.Rect getSurfaceFrame() [instance] :20341
::g::Android::android::graphics::Rect* Android_android_view_SurfaceHolder::getSurfaceFrame()
{
    return uCast< ::g::Android::android::graphics::Rect*>(Android_android_view_SurfaceHolder::getSurfaceFrame_IMPL_22621(_subclassed, _javaObject), ::TYPES[19/*Android.android.graphics.Rect*/]);
}

// public bool isCreating() [instance] :20296
bool Android_android_view_SurfaceHolder::isCreating()
{
    return Android_android_view_SurfaceHolder::isCreating_IMPL_22612(_subclassed, _javaObject);
}

// public Android.android.graphics.Canvas lockCanvas() [instance] :20326
::g::Android::android::graphics::Canvas* Android_android_view_SurfaceHolder::lockCanvas()
{
    return uCast< ::g::Android::android::graphics::Canvas*>(Android_android_view_SurfaceHolder::lockCanvas_IMPL_22618(_subclassed, _javaObject), ::TYPES[20/*Android.android.graphics.Canvas*/]);
}

// public Android.android.graphics.Canvas lockCanvas(Android.android.graphics.Rect arg0) [instance] :20331
::g::Android::android::graphics::Canvas* Android_android_view_SurfaceHolder::lockCanvas1(::g::Android::android::graphics::Rect* arg0)
{
    return uCast< ::g::Android::android::graphics::Canvas*>(Android_android_view_SurfaceHolder::lockCanvas_IMPL_22619(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[20/*Android.android.graphics.Canvas*/]);
}

// public void removeCallback(Android.android.view.SurfaceHolderDLRCallback arg0) [instance] :20291
void Android_android_view_SurfaceHolder::removeCallback(uObject* arg0)
{
    Android_android_view_SurfaceHolder::removeCallback_IMPL_22611(_subclassed, _javaObject, arg0);
}

// public void setFixedSize(int arg0, int arg1) [instance] :20306
void Android_android_view_SurfaceHolder::setFixedSize(int arg0, int arg1)
{
    Android_android_view_SurfaceHolder::setFixedSize_IMPL_22614(_subclassed, _javaObject, arg0, arg1);
}

// public void setFormat(int arg0) [instance] :20316
void Android_android_view_SurfaceHolder::setFormat(int arg0)
{
    Android_android_view_SurfaceHolder::setFormat_IMPL_22616(_subclassed, _javaObject, arg0);
}

// public void setKeepScreenOn(bool arg0) [instance] :20321
void Android_android_view_SurfaceHolder::setKeepScreenOn(bool arg0)
{
    Android_android_view_SurfaceHolder::setKeepScreenOn_IMPL_22617(_subclassed, _javaObject, arg0);
}

// public void setSizeFromLayout() [instance] :20311
void Android_android_view_SurfaceHolder::setSizeFromLayout()
{
    Android_android_view_SurfaceHolder::setSizeFromLayout_IMPL_22615(_subclassed, _javaObject);
}

// public void setType(int arg0) [instance] :20301
void Android_android_view_SurfaceHolder::setType(int arg0)
{
    Android_android_view_SurfaceHolder::setType_IMPL_22613(_subclassed, _javaObject, arg0);
}

// public void unlockCanvasAndPost(Android.android.graphics.Canvas arg0) [instance] :20336
void Android_android_view_SurfaceHolder::unlockCanvasAndPost(::g::Android::android::graphics::Canvas* arg0)
{
    Android_android_view_SurfaceHolder::unlockCanvasAndPost_IMPL_22620(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern void addCallback_IMPL_22610(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20353
void Android_android_view_SurfaceHolder::addCallback_IMPL_22610(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::addCallback_22610_ID(),"android/view/SurfaceHolder","addCallback","(Landroid/view/SurfaceHolder$Callback;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.addCallback could not be cached",81);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolder::addCallback_22610_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper getSurface_IMPL_22622(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20389
uObject* Android_android_view_SurfaceHolder::getSurface_IMPL_22622(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::getSurface_22622_ID(),"android/view/SurfaceHolder","getSurface","()Landroid/view/Surface;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.getSurface could not be cached",80);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SurfaceHolder::getSurface_22622_ID()),result,::g::Android::android::view::Surface_typeof(),::g::Android::android::view::Surface*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSurfaceFrame_IMPL_22621(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20386
uObject* Android_android_view_SurfaceHolder::getSurfaceFrame_IMPL_22621(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::getSurfaceFrame_22621_ID(),"android/view/SurfaceHolder","getSurfaceFrame","()Landroid/graphics/Rect;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.getSurfaceFrame could not be cached",85);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SurfaceHolder::getSurfaceFrame_22621_ID()),result,::g::Android::android::graphics::Rect_typeof(),::g::Android::android::graphics::Rect*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isCreating_IMPL_22612(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20359
bool Android_android_view_SurfaceHolder::isCreating_IMPL_22612(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::isCreating_22612_ID(),"android/view/SurfaceHolder","isCreating","()Z",GetMethodID,"Id for fallback method android.view.SurfaceHolder.isCreating could not be cached",80);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_SurfaceHolder::isCreating_22612_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper lockCanvas_IMPL_22618(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20377
uObject* Android_android_view_SurfaceHolder::lockCanvas_IMPL_22618(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::lockCanvas_22618_ID(),"android/view/SurfaceHolder","lockCanvas","()Landroid/graphics/Canvas;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.lockCanvas could not be cached",80);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SurfaceHolder::lockCanvas_22618_ID()),result,::g::Android::android::graphics::Canvas_typeof(),::g::Android::android::graphics::Canvas*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper lockCanvas_IMPL_22619(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20380
uObject* Android_android_view_SurfaceHolder::lockCanvas_IMPL_22619(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::lockCanvas_22619_ID(),"android/view/SurfaceHolder","lockCanvas","(Landroid/graphics/Rect;)Landroid/graphics/Canvas;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.lockCanvas could not be cached",80);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SurfaceHolder::lockCanvas_22619_ID(), _obArg2),result,::g::Android::android::graphics::Canvas_typeof(),::g::Android::android::graphics::Canvas*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void removeCallback_IMPL_22611(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20356
void Android_android_view_SurfaceHolder::removeCallback_IMPL_22611(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::removeCallback_22611_ID(),"android/view/SurfaceHolder","removeCallback","(Landroid/view/SurfaceHolder$Callback;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.removeCallback could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolder::removeCallback_22611_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setFixedSize_IMPL_22614(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :20365
void Android_android_view_SurfaceHolder::setFixedSize_IMPL_22614(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::setFixedSize_22614_ID(),"android/view/SurfaceHolder","setFixedSize","(II)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setFixedSize could not be cached",82);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolder::setFixedSize_22614_ID(), ((jint)arg2_), ((jint)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setFormat_IMPL_22616(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20371
void Android_android_view_SurfaceHolder::setFormat_IMPL_22616(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::setFormat_22616_ID(),"android/view/SurfaceHolder","setFormat","(I)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setFormat could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolder::setFormat_22616_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setKeepScreenOn_IMPL_22617(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :20374
void Android_android_view_SurfaceHolder::setKeepScreenOn_IMPL_22617(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::setKeepScreenOn_22617_ID(),"android/view/SurfaceHolder","setKeepScreenOn","(Z)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setKeepScreenOn could not be cached",85);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolder::setKeepScreenOn_22617_ID(), ((jboolean)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setSizeFromLayout_IMPL_22615(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20368
void Android_android_view_SurfaceHolder::setSizeFromLayout_IMPL_22615(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::setSizeFromLayout_22615_ID(),"android/view/SurfaceHolder","setSizeFromLayout","()V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setSizeFromLayout could not be cached",87);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolder::setSizeFromLayout_22615_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setType_IMPL_22613(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20362
void Android_android_view_SurfaceHolder::setType_IMPL_22613(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::setType_22613_ID(),"android/view/SurfaceHolder","setType","(I)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setType could not be cached",77);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolder::setType_22613_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void unlockCanvasAndPost_IMPL_22620(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20383
void Android_android_view_SurfaceHolder::unlockCanvasAndPost_IMPL_22620(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolder::unlockCanvasAndPost_22620_ID(),"android/view/SurfaceHolder","unlockCanvasAndPost","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.unlockCanvasAndPost could not be cached",89);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolder::unlockCanvasAndPost_22620_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(20191)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_SurfaceHolderDLRCallback :20191
// {
Android_android_view_SurfaceHolderDLRCallback_type* Android_android_view_SurfaceHolderDLRCallback_typeof()
{
    static uSStrong<Android_android_view_SurfaceHolderDLRCallback_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_SurfaceHolderDLRCallback);
    options.TypeSize = sizeof(Android_android_view_SurfaceHolderDLRCallback_type);
    type = (Android_android_view_SurfaceHolderDLRCallback_type*)uClassType::New("Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_surfaceCreated = (void(*)(uObject*, uObject*))Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_fn;
    type->interface2.fp_surfaceChanged = (void(*)(uObject*, uObject*, int*, int*, int*))Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_fn;
    type->interface2.fp_surfaceDestroyed = (void(*)(uObject*, uObject*))Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback_type, interface1),
        ::g::Android::android::view::SurfaceHolderDLRCallback_typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback::surfaceChanged_22607_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback::surfaceCreated_22606_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback::surfaceDestroyed_22608_ID_, uFieldFlagsStatic);
    return type;
}

// public void surfaceChanged(Android.android.view.SurfaceHolder arg0, int arg1, int arg2, int arg3) :20199
void Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_fn(Android_android_view_SurfaceHolderDLRCallback* __this, uObject* arg0, int* arg1, int* arg2, int* arg3)
{
    __this->surfaceChanged(arg0, *arg1, *arg2, *arg3);
}

// public static extern void surfaceChanged_IMPL_22607(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) :20214
void Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_IMPL_22607_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    Android_android_view_SurfaceHolderDLRCallback::surfaceChanged_IMPL_22607(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, *arg5_);
}

// public void surfaceCreated(Android.android.view.SurfaceHolder arg0) :20194
void Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_fn(Android_android_view_SurfaceHolderDLRCallback* __this, uObject* arg0)
{
    __this->surfaceCreated(arg0);
}

// public static extern void surfaceCreated_IMPL_22606(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20211
void Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_IMPL_22606_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_view_SurfaceHolderDLRCallback::surfaceCreated_IMPL_22606(*arg0_, *arg1_, arg2_);
}

// public void surfaceDestroyed(Android.android.view.SurfaceHolder arg0) :20204
void Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_fn(Android_android_view_SurfaceHolderDLRCallback* __this, uObject* arg0)
{
    __this->surfaceDestroyed(arg0);
}

// public static extern void surfaceDestroyed_IMPL_22608(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20217
void Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_IMPL_22608_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_view_SurfaceHolderDLRCallback::surfaceDestroyed_IMPL_22608(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_view_SurfaceHolderDLRCallback::surfaceChanged_22607_ID_;
jmethodID Android_android_view_SurfaceHolderDLRCallback::surfaceCreated_22606_ID_;
jmethodID Android_android_view_SurfaceHolderDLRCallback::surfaceDestroyed_22608_ID_;

// public void surfaceChanged(Android.android.view.SurfaceHolder arg0, int arg1, int arg2, int arg3) [instance] :20199
void Android_android_view_SurfaceHolderDLRCallback::surfaceChanged(uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_view_SurfaceHolderDLRCallback::surfaceChanged_IMPL_22607(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public void surfaceCreated(Android.android.view.SurfaceHolder arg0) [instance] :20194
void Android_android_view_SurfaceHolderDLRCallback::surfaceCreated(uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback::surfaceCreated_IMPL_22606(_subclassed, _javaObject, arg0);
}

// public void surfaceDestroyed(Android.android.view.SurfaceHolder arg0) [instance] :20204
void Android_android_view_SurfaceHolderDLRCallback::surfaceDestroyed(uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback::surfaceDestroyed_IMPL_22608(_subclassed, _javaObject, arg0);
}

// public static extern void surfaceChanged_IMPL_22607(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) [static] :20214
void Android_android_view_SurfaceHolderDLRCallback::surfaceChanged_IMPL_22607(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolderDLRCallback::surfaceChanged_22607_ID(),"android/view/SurfaceHolder$Callback","surfaceChanged","(Landroid/view/SurfaceHolder;III)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback.surfaceChanged could not be cached",93);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolderDLRCallback::surfaceChanged_22607_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void surfaceCreated_IMPL_22606(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20211
void Android_android_view_SurfaceHolderDLRCallback::surfaceCreated_IMPL_22606(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolderDLRCallback::surfaceCreated_22606_ID(),"android/view/SurfaceHolder$Callback","surfaceCreated","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback.surfaceCreated could not be cached",93);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolderDLRCallback::surfaceCreated_22606_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void surfaceDestroyed_IMPL_22608(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20217
void Android_android_view_SurfaceHolderDLRCallback::surfaceDestroyed_IMPL_22608(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolderDLRCallback::surfaceDestroyed_22608_ID(),"android/view/SurfaceHolder$Callback","surfaceDestroyed","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback.surfaceDestroyed could not be cached",95);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolderDLRCallback::surfaceDestroyed_22608_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(20233)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_SurfaceHolderDLRCallback2 :20233
// {
Android_android_view_SurfaceHolderDLRCallback2_type* Android_android_view_SurfaceHolderDLRCallback2_typeof()
{
    static uSStrong<Android_android_view_SurfaceHolderDLRCallback2_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Android_android_view_SurfaceHolderDLRCallback2);
    options.TypeSize = sizeof(Android_android_view_SurfaceHolderDLRCallback2_type);
    type = (Android_android_view_SurfaceHolderDLRCallback2_type*)uClassType::New("Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_surfaceRedrawNeeded = (void(*)(uObject*, uObject*))Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_surfaceCreated = (void(*)(uObject*, uObject*))Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_fn;
    type->interface3.fp_surfaceChanged = (void(*)(uObject*, uObject*, int*, int*, int*))Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_fn;
    type->interface3.fp_surfaceDestroyed = (void(*)(uObject*, uObject*))Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2_type, interface1),
        ::g::Android::android::view::SurfaceHolderDLRCallback2_typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2_type, interface2),
        ::g::Android::android::view::SurfaceHolderDLRCallback_typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2_type, interface3));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2::surfaceChanged_22607_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2::surfaceCreated_22606_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2::surfaceDestroyed_22608_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2::surfaceRedrawNeeded_22609_ID_, uFieldFlagsStatic);
    return type;
}

// public void surfaceChanged(Android.android.view.SurfaceHolder arg0, int arg1, int arg2, int arg3) :20246
void Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_fn(Android_android_view_SurfaceHolderDLRCallback2* __this, uObject* arg0, int* arg1, int* arg2, int* arg3)
{
    __this->surfaceChanged(arg0, *arg1, *arg2, *arg3);
}

// public static extern void surfaceChanged_IMPL_22607(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) :20264
void Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_IMPL_22607_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    Android_android_view_SurfaceHolderDLRCallback2::surfaceChanged_IMPL_22607(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, *arg5_);
}

// public void surfaceCreated(Android.android.view.SurfaceHolder arg0) :20241
void Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_fn(Android_android_view_SurfaceHolderDLRCallback2* __this, uObject* arg0)
{
    __this->surfaceCreated(arg0);
}

// public static extern void surfaceCreated_IMPL_22606(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20261
void Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_IMPL_22606_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_view_SurfaceHolderDLRCallback2::surfaceCreated_IMPL_22606(*arg0_, *arg1_, arg2_);
}

// public void surfaceDestroyed(Android.android.view.SurfaceHolder arg0) :20251
void Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_fn(Android_android_view_SurfaceHolderDLRCallback2* __this, uObject* arg0)
{
    __this->surfaceDestroyed(arg0);
}

// public static extern void surfaceDestroyed_IMPL_22608(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20267
void Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_IMPL_22608_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_view_SurfaceHolderDLRCallback2::surfaceDestroyed_IMPL_22608(*arg0_, *arg1_, arg2_);
}

// public void surfaceRedrawNeeded(Android.android.view.SurfaceHolder arg0) :20236
void Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_fn(Android_android_view_SurfaceHolderDLRCallback2* __this, uObject* arg0)
{
    __this->surfaceRedrawNeeded(arg0);
}

// public static extern void surfaceRedrawNeeded_IMPL_22609(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20258
void Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_IMPL_22609_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_view_SurfaceHolderDLRCallback2::surfaceRedrawNeeded_IMPL_22609(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_view_SurfaceHolderDLRCallback2::surfaceChanged_22607_ID_;
jmethodID Android_android_view_SurfaceHolderDLRCallback2::surfaceCreated_22606_ID_;
jmethodID Android_android_view_SurfaceHolderDLRCallback2::surfaceDestroyed_22608_ID_;
jmethodID Android_android_view_SurfaceHolderDLRCallback2::surfaceRedrawNeeded_22609_ID_;

// public void surfaceChanged(Android.android.view.SurfaceHolder arg0, int arg1, int arg2, int arg3) [instance] :20246
void Android_android_view_SurfaceHolderDLRCallback2::surfaceChanged(uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_view_SurfaceHolderDLRCallback2::surfaceChanged_IMPL_22607(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public void surfaceCreated(Android.android.view.SurfaceHolder arg0) [instance] :20241
void Android_android_view_SurfaceHolderDLRCallback2::surfaceCreated(uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback2::surfaceCreated_IMPL_22606(_subclassed, _javaObject, arg0);
}

// public void surfaceDestroyed(Android.android.view.SurfaceHolder arg0) [instance] :20251
void Android_android_view_SurfaceHolderDLRCallback2::surfaceDestroyed(uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback2::surfaceDestroyed_IMPL_22608(_subclassed, _javaObject, arg0);
}

// public void surfaceRedrawNeeded(Android.android.view.SurfaceHolder arg0) [instance] :20236
void Android_android_view_SurfaceHolderDLRCallback2::surfaceRedrawNeeded(uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback2::surfaceRedrawNeeded_IMPL_22609(_subclassed, _javaObject, arg0);
}

// public static extern void surfaceChanged_IMPL_22607(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5) [static] :20264
void Android_android_view_SurfaceHolderDLRCallback2::surfaceChanged_IMPL_22607(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolderDLRCallback2::surfaceChanged_22607_ID(),"android/view/SurfaceHolder$Callback2","surfaceChanged","(Landroid/view/SurfaceHolder;III)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceChanged could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolderDLRCallback2::surfaceChanged_22607_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void surfaceCreated_IMPL_22606(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20261
void Android_android_view_SurfaceHolderDLRCallback2::surfaceCreated_IMPL_22606(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolderDLRCallback2::surfaceCreated_22606_ID(),"android/view/SurfaceHolder$Callback2","surfaceCreated","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceCreated could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolderDLRCallback2::surfaceCreated_22606_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void surfaceDestroyed_IMPL_22608(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20267
void Android_android_view_SurfaceHolderDLRCallback2::surfaceDestroyed_IMPL_22608(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolderDLRCallback2::surfaceDestroyed_22608_ID(),"android/view/SurfaceHolder$Callback2","surfaceDestroyed","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceDestroyed could not be cached",96);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolderDLRCallback2::surfaceDestroyed_22608_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void surfaceRedrawNeeded_IMPL_22609(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20258
void Android_android_view_SurfaceHolderDLRCallback2::surfaceRedrawNeeded_IMPL_22609(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SurfaceHolderDLRCallback2::surfaceRedrawNeeded_22609_ID(),"android/view/SurfaceHolder$Callback2","surfaceRedrawNeeded","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceRedrawNeeded could not be cached",99);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SurfaceHolderDLRCallback2::surfaceRedrawNeeded_22609_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(20405)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_TextureViewDLRSurfaceTextureListener :20405
// {
Android_android_view_TextureViewDLRSurfaceTextureListener_type* Android_android_view_TextureViewDLRSurfaceTextureListener_typeof()
{
    static uSStrong<Android_android_view_TextureViewDLRSurfaceTextureListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_TextureViewDLRSurfaceTextureListener);
    options.TypeSize = sizeof(Android_android_view_TextureViewDLRSurfaceTextureListener_type);
    type = (Android_android_view_TextureViewDLRSurfaceTextureListener_type*)uClassType::New("Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTextureListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onSurfaceTextureAvailable = (void(*)(uObject*, ::g::Android::android::graphics::SurfaceTexture*, int*, int*))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_fn;
    type->interface2.fp_onSurfaceTextureSizeChanged = (void(*)(uObject*, ::g::Android::android::graphics::SurfaceTexture*, int*, int*))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_fn;
    type->interface2.fp_onSurfaceTextureDestroyed = (void(*)(uObject*, ::g::Android::android::graphics::SurfaceTexture*, bool*))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_fn;
    type->interface2.fp_onSurfaceTextureUpdated = (void(*)(uObject*, ::g::Android::android::graphics::SurfaceTexture*))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_TextureViewDLRSurfaceTextureListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_TextureViewDLRSurfaceTextureListener_type, interface1),
        ::g::Android::android::view::TextureViewDLRSurfaceTextureListener_typeof(), offsetof(Android_android_view_TextureViewDLRSurfaceTextureListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureAvailable_22642_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureDestroyed_22644_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureSizeChanged_22643_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureUpdated_22645_ID_, uFieldFlagsStatic);
    return type;
}

// public void onSurfaceTextureAvailable(Android.android.graphics.SurfaceTexture arg0, int arg1, int arg2) :20408
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_fn(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* arg0, int* arg1, int* arg2)
{
    __this->onSurfaceTextureAvailable(arg0, *arg1, *arg2);
}

// public static extern void onSurfaceTextureAvailable_IMPL_22642(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) :20430
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_IMPL_22642_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureAvailable_IMPL_22642(*arg0_, *arg1_, arg2_, *arg3_, *arg4_);
}

// public bool onSurfaceTextureDestroyed(Android.android.graphics.SurfaceTexture arg0) :20418
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_fn(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* arg0, bool* __retval)
{
    *__retval = __this->onSurfaceTextureDestroyed(arg0);
}

// public static extern bool onSurfaceTextureDestroyed_IMPL_22644(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20436
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_IMPL_22644_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureDestroyed_IMPL_22644(*arg0_, *arg1_, arg2_);
}

// public void onSurfaceTextureSizeChanged(Android.android.graphics.SurfaceTexture arg0, int arg1, int arg2) :20413
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_fn(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* arg0, int* arg1, int* arg2)
{
    __this->onSurfaceTextureSizeChanged(arg0, *arg1, *arg2);
}

// public static extern void onSurfaceTextureSizeChanged_IMPL_22643(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) :20433
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_IMPL_22643_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureSizeChanged_IMPL_22643(*arg0_, *arg1_, arg2_, *arg3_, *arg4_);
}

// public void onSurfaceTextureUpdated(Android.android.graphics.SurfaceTexture arg0) :20423
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_fn(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* arg0)
{
    __this->onSurfaceTextureUpdated(arg0);
}

// public static extern void onSurfaceTextureUpdated_IMPL_22645(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20439
void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_IMPL_22645_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureUpdated_IMPL_22645(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureAvailable_22642_ID_;
jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureDestroyed_22644_ID_;
jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureSizeChanged_22643_ID_;
jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureUpdated_22645_ID_;

// public void onSurfaceTextureAvailable(Android.android.graphics.SurfaceTexture arg0, int arg1, int arg2) [instance] :20408
void Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureAvailable(::g::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureAvailable_IMPL_22642(_subclassed, _javaObject, (uObject*)arg0, arg1, arg2);
}

// public bool onSurfaceTextureDestroyed(Android.android.graphics.SurfaceTexture arg0) [instance] :20418
bool Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureDestroyed(::g::Android::android::graphics::SurfaceTexture* arg0)
{
    return Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureDestroyed_IMPL_22644(_subclassed, _javaObject, (uObject*)arg0);
}

// public void onSurfaceTextureSizeChanged(Android.android.graphics.SurfaceTexture arg0, int arg1, int arg2) [instance] :20413
void Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureSizeChanged(::g::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureSizeChanged_IMPL_22643(_subclassed, _javaObject, (uObject*)arg0, arg1, arg2);
}

// public void onSurfaceTextureUpdated(Android.android.graphics.SurfaceTexture arg0) [instance] :20423
void Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureUpdated(::g::Android::android::graphics::SurfaceTexture* arg0)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureUpdated_IMPL_22645(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern void onSurfaceTextureAvailable_IMPL_22642(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) [static] :20430
void Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureAvailable_IMPL_22642(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureAvailable_22642_ID(),"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureAvailable","(Landroid/graphics/SurfaceTexture;II)V",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureAvailable could not be cached",116);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureAvailable_22642_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onSurfaceTextureDestroyed_IMPL_22644(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20436
bool Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureDestroyed_IMPL_22644(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureDestroyed_22644_ID(),"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureDestroyed","(Landroid/graphics/SurfaceTexture;)Z",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureDestroyed could not be cached",116);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureDestroyed_22644_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onSurfaceTextureSizeChanged_IMPL_22643(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) [static] :20433
void Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureSizeChanged_IMPL_22643(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureSizeChanged_22643_ID(),"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureSizeChanged","(Landroid/graphics/SurfaceTexture;II)V",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureSizeChanged could not be cached",118);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureSizeChanged_22643_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onSurfaceTextureUpdated_IMPL_22645(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20439
void Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureUpdated_IMPL_22645(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureUpdated_22645_ID(),"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureUpdated","(Landroid/graphics/SurfaceTexture;)V",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureUpdated could not be cached",114);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_TextureViewDLRSurfaceTextureListener::onSurfaceTextureUpdated_22645_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(20567)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_ViewDLROnFocusChangeListener :20567
// {
Android_android_view_ViewDLROnFocusChangeListener_type* Android_android_view_ViewDLROnFocusChangeListener_typeof()
{
    static uSStrong<Android_android_view_ViewDLROnFocusChangeListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_ViewDLROnFocusChangeListener);
    options.TypeSize = sizeof(Android_android_view_ViewDLROnFocusChangeListener_type);
    type = (Android_android_view_ViewDLROnFocusChangeListener_type*)uClassType::New("Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onFocusChange = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_ViewDLROnFocusChangeListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_ViewDLROnFocusChangeListener_type, interface1),
        ::g::Android::android::view::ViewDLROnFocusChangeListener_typeof(), offsetof(Android_android_view_ViewDLROnFocusChangeListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_ViewDLROnFocusChangeListener::onFocusChange_22722_ID_, uFieldFlagsStatic);
    return type;
}

// public void onFocusChange(Android.android.view.View arg0, bool arg1) :20570
void Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_fn(Android_android_view_ViewDLROnFocusChangeListener* __this, ::g::Android::android::view::View* arg0, bool* arg1)
{
    __this->onFocusChange(arg0, *arg1);
}

// public static extern void onFocusChange_IMPL_22722(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, bool arg3) :20577
void Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_IMPL_22722_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_)
{
    Android_android_view_ViewDLROnFocusChangeListener::onFocusChange_IMPL_22722(*arg0_, *arg1_, arg2_, *arg3_);
}

jmethodID Android_android_view_ViewDLROnFocusChangeListener::onFocusChange_22722_ID_;

// public void onFocusChange(Android.android.view.View arg0, bool arg1) [instance] :20570
void Android_android_view_ViewDLROnFocusChangeListener::onFocusChange(::g::Android::android::view::View* arg0, bool arg1)
{
    Android_android_view_ViewDLROnFocusChangeListener::onFocusChange_IMPL_22722(_subclassed, _javaObject, (uObject*)arg0, arg1);
}

// public static extern void onFocusChange_IMPL_22722(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, bool arg3) [static] :20577
void Android_android_view_ViewDLROnFocusChangeListener::onFocusChange_IMPL_22722(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_ViewDLROnFocusChangeListener::onFocusChange_22722_ID(),"android/view/View$OnFocusChangeListener","onFocusChange","(Landroid/view/View;Z)V",GetMethodID,"Id for fallback method android.view.View$OnFocusChangeListener.onFocusChange could not be cached",96);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_ViewDLROnFocusChangeListener::onFocusChange_22722_ID(), _obArg2, ((jboolean)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(20749)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_ViewDLROnTouchListener :20749
// {
Android_android_view_ViewDLROnTouchListener_type* Android_android_view_ViewDLROnTouchListener_typeof()
{
    static uSStrong<Android_android_view_ViewDLROnTouchListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_ViewDLROnTouchListener);
    options.TypeSize = sizeof(Android_android_view_ViewDLROnTouchListener_type);
    type = (Android_android_view_ViewDLROnTouchListener_type*)uClassType::New("Android.Fallbacks.Android_android_view_ViewDLROnTouchListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onTouch = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))Android_android_view_ViewDLROnTouchListener__onTouch_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_ViewDLROnTouchListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_ViewDLROnTouchListener_type, interface1),
        ::g::Android::android::view::ViewDLROnTouchListener_typeof(), offsetof(Android_android_view_ViewDLROnTouchListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_ViewDLROnTouchListener::onTouch_22729_ID_, uFieldFlagsStatic);
    return type;
}

// public bool onTouch(Android.android.view.View arg0, Android.android.view.MotionEvent arg1) :20752
void Android_android_view_ViewDLROnTouchListener__onTouch_fn(Android_android_view_ViewDLROnTouchListener* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::MotionEvent* arg1, bool* __retval)
{
    *__retval = __this->onTouch(arg0, arg1);
}

// public static extern bool onTouch_IMPL_22729(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :20759
void Android_android_view_ViewDLROnTouchListener__onTouch_IMPL_22729_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = Android_android_view_ViewDLROnTouchListener::onTouch_IMPL_22729(*arg0_, *arg1_, arg2_, arg3_);
}

jmethodID Android_android_view_ViewDLROnTouchListener::onTouch_22729_ID_;

// public bool onTouch(Android.android.view.View arg0, Android.android.view.MotionEvent arg1) [instance] :20752
bool Android_android_view_ViewDLROnTouchListener::onTouch(::g::Android::android::view::View* arg0, ::g::Android::android::view::MotionEvent* arg1)
{
    return Android_android_view_ViewDLROnTouchListener::onTouch_IMPL_22729(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public static extern bool onTouch_IMPL_22729(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :20759
bool Android_android_view_ViewDLROnTouchListener::onTouch_IMPL_22729(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_ViewDLROnTouchListener::onTouch_22729_ID(),"android/view/View$OnTouchListener","onTouch","(Landroid/view/View;Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.view.View$OnTouchListener.onTouch could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_ViewDLROnTouchListener::onTouch_22729_ID(), _obArg2, _obArg3));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(1405)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_view_ViewGroup :1405
// {
::g::Android::android::view::ViewGroup_type* Android_android_view_ViewGroup_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_view_ViewGroup);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.Fallbacks.Android_android_view_ViewGroup", options);
    type->SetBase(::g::Android::android::view::ViewGroup_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(5167)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_webkit_WebSettings :5167
// {
::g::Android::java::lang::Object_type* Android_android_webkit_WebSettings_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_webkit_WebSettings);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_webkit_WebSettings", options);
    type->SetBase(::g::Android::android::webkit::WebSettings_typeof());
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

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(3127)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_widget_AbsSeekBar :3127
// {
::g::Android::android::view::View_type* Android_android_widget_AbsSeekBar_typeof()
{
    static uSStrong< ::g::Android::android::view::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_widget_AbsSeekBar);
    options.TypeSize = sizeof(::g::Android::android::view::View_type);
    type = (::g::Android::android::view::View_type*)uClassType::New("Android.Fallbacks.Android_android_widget_AbsSeekBar", options);
    type->SetBase(::g::Android::android::widget::AbsSeekBar_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::View_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(3379)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_widget_CompoundButton :3379
// {
::g::Android::android::widget::CompoundButton_type* Android_android_widget_CompoundButton_typeof()
{
    static uSStrong< ::g::Android::android::widget::CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_widget_CompoundButton);
    options.TypeSize = sizeof(::g::Android::android::widget::CompoundButton_type);
    type = (::g::Android::android::widget::CompoundButton_type*)uClassType::New("Android.Fallbacks.Android_android_widget_CompoundButton", options);
    type->SetBase(::g::Android::android::widget::CompoundButton_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::widget::CompoundButton_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::widget::CompoundButton_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(23839)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_widget_CompoundButtonDLROnCheckedChangeListener :23839
// {
Android_android_widget_CompoundButtonDLROnCheckedChangeListener_type* Android_android_widget_CompoundButtonDLROnCheckedChangeListener_typeof()
{
    static uSStrong<Android_android_widget_CompoundButtonDLROnCheckedChangeListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener);
    options.TypeSize = sizeof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener_type);
    type = (Android_android_widget_CompoundButtonDLROnCheckedChangeListener_type*)uClassType::New("Android.Fallbacks.Android_android_widget_CompoundButtonDLROnCheckedChangeListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onCheckedChanged = (void(*)(uObject*, ::g::Android::android::widget::CompoundButton*, bool*))Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener_type, interface1),
        ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener_typeof(), offsetof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_widget_CompoundButtonDLROnCheckedChangeListener::onCheckedChanged_24924_ID_, uFieldFlagsStatic);
    return type;
}

// public void onCheckedChanged(Android.android.widget.CompoundButton arg0, bool arg1) :23842
void Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_fn(Android_android_widget_CompoundButtonDLROnCheckedChangeListener* __this, ::g::Android::android::widget::CompoundButton* arg0, bool* arg1)
{
    __this->onCheckedChanged(arg0, *arg1);
}

// public static extern void onCheckedChanged_IMPL_24924(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, bool arg3) :23849
void Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_IMPL_24924_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_)
{
    Android_android_widget_CompoundButtonDLROnCheckedChangeListener::onCheckedChanged_IMPL_24924(*arg0_, *arg1_, arg2_, *arg3_);
}

jmethodID Android_android_widget_CompoundButtonDLROnCheckedChangeListener::onCheckedChanged_24924_ID_;

// public void onCheckedChanged(Android.android.widget.CompoundButton arg0, bool arg1) [instance] :23842
void Android_android_widget_CompoundButtonDLROnCheckedChangeListener::onCheckedChanged(::g::Android::android::widget::CompoundButton* arg0, bool arg1)
{
    Android_android_widget_CompoundButtonDLROnCheckedChangeListener::onCheckedChanged_IMPL_24924(_subclassed, _javaObject, (uObject*)arg0, arg1);
}

// public static extern void onCheckedChanged_IMPL_24924(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, bool arg3) [static] :23849
void Android_android_widget_CompoundButtonDLROnCheckedChangeListener::onCheckedChanged_IMPL_24924(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_widget_CompoundButtonDLROnCheckedChangeListener::onCheckedChanged_24924_ID(),"android/widget/CompoundButton$OnCheckedChangeListener","onCheckedChanged","(Landroid/widget/CompoundButton;Z)V",GetMethodID,"Id for fallback method android.widget.CompoundButton$OnCheckedChangeListener.onCheckedChanged could not be cached",113);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_widget_CompoundButtonDLROnCheckedChangeListener::onCheckedChanged_24924_ID(), _obArg2, ((jboolean)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(24981)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_widget_SeekBarDLROnSeekBarChangeListener :24981
// {
Android_android_widget_SeekBarDLROnSeekBarChangeListener_type* Android_android_widget_SeekBarDLROnSeekBarChangeListener_typeof()
{
    static uSStrong<Android_android_widget_SeekBarDLROnSeekBarChangeListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_widget_SeekBarDLROnSeekBarChangeListener);
    options.TypeSize = sizeof(Android_android_widget_SeekBarDLROnSeekBarChangeListener_type);
    type = (Android_android_widget_SeekBarDLROnSeekBarChangeListener_type*)uClassType::New("Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarChangeListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onProgressChanged = (void(*)(uObject*, ::g::Android::android::widget::SeekBar*, int*, bool*))Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_fn;
    type->interface2.fp_onStartTrackingTouch = (void(*)(uObject*, ::g::Android::android::widget::SeekBar*))Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_fn;
    type->interface2.fp_onStopTrackingTouch = (void(*)(uObject*, ::g::Android::android::widget::SeekBar*))Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_widget_SeekBarDLROnSeekBarChangeListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_widget_SeekBarDLROnSeekBarChangeListener_type, interface1),
        ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof(), offsetof(Android_android_widget_SeekBarDLROnSeekBarChangeListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener::onProgressChanged_26181_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStartTrackingTouch_26182_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStopTrackingTouch_26183_ID_, uFieldFlagsStatic);
    return type;
}

// public void onProgressChanged(Android.android.widget.SeekBar arg0, int arg1, bool arg2) :24984
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_fn(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::g::Android::android::widget::SeekBar* arg0, int* arg1, bool* arg2)
{
    __this->onProgressChanged(arg0, *arg1, *arg2);
}

// public static extern void onProgressChanged_IMPL_26181(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, bool arg4) :25001
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_IMPL_26181_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* arg4_)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener::onProgressChanged_IMPL_26181(*arg0_, *arg1_, arg2_, *arg3_, *arg4_);
}

// public void onStartTrackingTouch(Android.android.widget.SeekBar arg0) :24989
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_fn(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::g::Android::android::widget::SeekBar* arg0)
{
    __this->onStartTrackingTouch(arg0);
}

// public static extern void onStartTrackingTouch_IMPL_26182(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :25004
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_IMPL_26182_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStartTrackingTouch_IMPL_26182(*arg0_, *arg1_, arg2_);
}

// public void onStopTrackingTouch(Android.android.widget.SeekBar arg0) :24994
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_fn(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::g::Android::android::widget::SeekBar* arg0)
{
    __this->onStopTrackingTouch(arg0);
}

// public static extern void onStopTrackingTouch_IMPL_26183(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :25007
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_IMPL_26183_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStopTrackingTouch_IMPL_26183(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener::onProgressChanged_26181_ID_;
jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStartTrackingTouch_26182_ID_;
jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStopTrackingTouch_26183_ID_;

// public void onProgressChanged(Android.android.widget.SeekBar arg0, int arg1, bool arg2) [instance] :24984
void Android_android_widget_SeekBarDLROnSeekBarChangeListener::onProgressChanged(::g::Android::android::widget::SeekBar* arg0, int arg1, bool arg2)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener::onProgressChanged_IMPL_26181(_subclassed, _javaObject, (uObject*)arg0, arg1, arg2);
}

// public void onStartTrackingTouch(Android.android.widget.SeekBar arg0) [instance] :24989
void Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStartTrackingTouch(::g::Android::android::widget::SeekBar* arg0)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStartTrackingTouch_IMPL_26182(_subclassed, _javaObject, (uObject*)arg0);
}

// public void onStopTrackingTouch(Android.android.widget.SeekBar arg0) [instance] :24994
void Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStopTrackingTouch(::g::Android::android::widget::SeekBar* arg0)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStopTrackingTouch_IMPL_26183(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern void onProgressChanged_IMPL_26181(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, bool arg4) [static] :25001
void Android_android_widget_SeekBarDLROnSeekBarChangeListener::onProgressChanged_IMPL_26181(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_widget_SeekBarDLROnSeekBarChangeListener::onProgressChanged_26181_ID(),"android/widget/SeekBar$OnSeekBarChangeListener","onProgressChanged","(Landroid/widget/SeekBar;IZ)V",GetMethodID,"Id for fallback method android.widget.SeekBar$OnSeekBarChangeListener.onProgressChanged could not be cached",107);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_widget_SeekBarDLROnSeekBarChangeListener::onProgressChanged_26181_ID(), _obArg2, ((jint)arg3_), ((jboolean)arg4_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onStartTrackingTouch_IMPL_26182(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :25004
void Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStartTrackingTouch_IMPL_26182(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStartTrackingTouch_26182_ID(),"android/widget/SeekBar$OnSeekBarChangeListener","onStartTrackingTouch","(Landroid/widget/SeekBar;)V",GetMethodID,"Id for fallback method android.widget.SeekBar$OnSeekBarChangeListener.onStartTrackingTouch could not be cached",110);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStartTrackingTouch_26182_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onStopTrackingTouch_IMPL_26183(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :25007
void Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStopTrackingTouch_IMPL_26183(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStopTrackingTouch_26183_ID(),"android/widget/SeekBar$OnSeekBarChangeListener","onStopTrackingTouch","(Landroid/widget/SeekBar;)V",GetMethodID,"Id for fallback method android.widget.SeekBar$OnSeekBarChangeListener.onStopTrackingTouch could not be cached",109);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_widget_SeekBarDLROnSeekBarChangeListener::onStopTrackingTouch_26183_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(25397)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_android_widget_TextViewDLROnEditorActionListener :25397
// {
Android_android_widget_TextViewDLROnEditorActionListener_type* Android_android_widget_TextViewDLROnEditorActionListener_typeof()
{
    static uSStrong<Android_android_widget_TextViewDLROnEditorActionListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_widget_TextViewDLROnEditorActionListener);
    options.TypeSize = sizeof(Android_android_widget_TextViewDLROnEditorActionListener_type);
    type = (Android_android_widget_TextViewDLROnEditorActionListener_type*)uClassType::New("Android.Fallbacks.Android_android_widget_TextViewDLROnEditorActionListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onEditorAction = (void(*)(uObject*, ::g::Android::android::widget::TextView*, int*, ::g::Android::android::view::KeyEvent*, bool*))Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_widget_TextViewDLROnEditorActionListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_widget_TextViewDLROnEditorActionListener_type, interface1),
        ::g::Android::android::widget::TextViewDLROnEditorActionListener_typeof(), offsetof(Android_android_widget_TextViewDLROnEditorActionListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_widget_TextViewDLROnEditorActionListener::onEditorAction_26520_ID_, uFieldFlagsStatic);
    return type;
}

// public bool onEditorAction(Android.android.widget.TextView arg0, int arg1, Android.android.view.KeyEvent arg2) :25400
void Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_fn(Android_android_widget_TextViewDLROnEditorActionListener* __this, ::g::Android::android::widget::TextView* arg0, int* arg1, ::g::Android::android::view::KeyEvent* arg2, bool* __retval)
{
    *__retval = __this->onEditorAction(arg0, *arg1, arg2);
}

// public static extern bool onEditorAction_IMPL_26520(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :25407
void Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_IMPL_26520_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_, bool* __retval)
{
    *__retval = Android_android_widget_TextViewDLROnEditorActionListener::onEditorAction_IMPL_26520(*arg0_, *arg1_, arg2_, *arg3_, arg4_);
}

jmethodID Android_android_widget_TextViewDLROnEditorActionListener::onEditorAction_26520_ID_;

// public bool onEditorAction(Android.android.widget.TextView arg0, int arg1, Android.android.view.KeyEvent arg2) [instance] :25400
bool Android_android_widget_TextViewDLROnEditorActionListener::onEditorAction(::g::Android::android::widget::TextView* arg0, int arg1, ::g::Android::android::view::KeyEvent* arg2)
{
    return Android_android_widget_TextViewDLROnEditorActionListener::onEditorAction_IMPL_26520(_subclassed, _javaObject, (uObject*)arg0, arg1, (uObject*)arg2);
}

// public static extern bool onEditorAction_IMPL_26520(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :25407
bool Android_android_widget_TextViewDLROnEditorActionListener::onEditorAction_IMPL_26520(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_widget_TextViewDLROnEditorActionListener::onEditorAction_26520_ID(),"android/widget/TextView$OnEditorActionListener","onEditorAction","(Landroid/widget/TextView;ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView$OnEditorActionListener.onEditorAction could not be cached",104);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_widget_TextViewDLROnEditorActionListener::onEditorAction_26520_ID(), _obArg2, ((jint)arg3_), _obArg4));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(6351)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Android_java_io_InputStream :6351
// {
::g::Android::java::lang::Object_type* Android_java_io_InputStream_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_java_io_InputStream);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_java_io_InputStream", options);
    type->SetBase(::g::Android::java::io::InputStream_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(30953)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_java_lang_CharSequence :30953
// {
Android_java_lang_CharSequence_type* Android_java_lang_CharSequence_typeof()
{
    static uSStrong<Android_java_lang_CharSequence_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_java_lang_CharSequence);
    options.TypeSize = sizeof(Android_java_lang_CharSequence_type);
    type = (Android_java_lang_CharSequence_type*)uClassType::New("Android.Fallbacks.Android_java_lang_CharSequence", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Android_java_lang_CharSequence__toString_fn;
    type->interface2.fp_length = (void(*)(uObject*, int*))Android_java_lang_CharSequence__length_fn;
    type->interface2.fp_charAt = (void(*)(uObject*, int*, uChar*))Android_java_lang_CharSequence__charAt_fn;
    type->interface2.fp_subSequence = (void(*)(uObject*, int*, int*, uObject**))Android_java_lang_CharSequence__subSequence_fn;
    type->interface2.fp_toString = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_java_lang_CharSequence__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[10] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[4] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_lang_CharSequence_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_lang_CharSequence_type, interface1),
        ::g::Android::java::lang::CharSequence_typeof(), offsetof(Android_java_lang_CharSequence_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_CharSequence::charAt_30511_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_CharSequence::length_30510_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_CharSequence::subSequence_30512_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_CharSequence::toString_30513_ID_, uFieldFlagsStatic);
    return type;
}

// public char charAt(int arg0) :30961
void Android_java_lang_CharSequence__charAt_fn(Android_java_lang_CharSequence* __this, int* arg0, uChar* __retval)
{
    *__retval = __this->charAt(*arg0);
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :30981
void Android_java_lang_CharSequence__charAt_IMPL_30511_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval)
{
    *__retval = Android_java_lang_CharSequence::charAt_IMPL_30511(*arg0_, *arg1_, *arg2_);
}

// public int length() :30956
void Android_java_lang_CharSequence__length_fn(Android_java_lang_CharSequence* __this, int* __retval)
{
    *__retval = __this->length();
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) :30978
void Android_java_lang_CharSequence__length_IMPL_30510_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_lang_CharSequence::length_IMPL_30510(*arg0_, *arg1_);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) :30966
void Android_java_lang_CharSequence__subSequence_fn(Android_java_lang_CharSequence* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subSequence(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :30984
void Android_java_lang_CharSequence__subSequence_IMPL_30512_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = Android_java_lang_CharSequence::subSequence_IMPL_30512(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public override sealed Android.java.lang.String toString() :30971
void Android_java_lang_CharSequence__toString_fn(Android_java_lang_CharSequence* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Android_java_lang_CharSequence::toString_IMPL_30513(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) :30987
void Android_java_lang_CharSequence__toString_IMPL_30513_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_lang_CharSequence::toString_IMPL_30513(*arg0_, *arg1_);
}

jmethodID Android_java_lang_CharSequence::charAt_30511_ID_;
jmethodID Android_java_lang_CharSequence::length_30510_ID_;
jmethodID Android_java_lang_CharSequence::subSequence_30512_ID_;
jmethodID Android_java_lang_CharSequence::toString_30513_ID_;

// public char charAt(int arg0) [instance] :30961
uChar Android_java_lang_CharSequence::charAt(int arg0)
{
    return Android_java_lang_CharSequence::charAt_IMPL_30511(_subclassed, _javaObject, arg0);
}

// public int length() [instance] :30956
int Android_java_lang_CharSequence::length()
{
    return Android_java_lang_CharSequence::length_IMPL_30510(_subclassed, _javaObject);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) [instance] :30966
uObject* Android_java_lang_CharSequence::subSequence(int arg0, int arg1)
{
    return Android_java_lang_CharSequence::subSequence_IMPL_30512(_subclassed, _javaObject, arg0, arg1);
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :30981
uChar Android_java_lang_CharSequence::charAt_IMPL_30511(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_CharSequence::charAt_30511_ID(),"java/lang/CharSequence","charAt","(I)C",GetMethodID,"Id for fallback method java.lang.CharSequence.charAt could not be cached",72);
    
    uChar result;
    result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, Android_java_lang_CharSequence::charAt_30511_ID(), ((jint)arg2_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :30978
int Android_java_lang_CharSequence::length_IMPL_30510(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_CharSequence::length_30510_ID(),"java/lang/CharSequence","length","()I",GetMethodID,"Id for fallback method java.lang.CharSequence.length could not be cached",72);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_lang_CharSequence::length_30510_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :30984
uObject* Android_java_lang_CharSequence::subSequence_IMPL_30512(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_CharSequence::subSequence_30512_ID(),"java/lang/CharSequence","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method java.lang.CharSequence.subSequence could not be cached",77);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_lang_CharSequence::subSequence_30512_ID(), ((jint)arg2_), ((jint)arg3_)),result,Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :30987
uObject* Android_java_lang_CharSequence::toString_IMPL_30513(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_CharSequence::toString_30513_ID(),"java/lang/CharSequence","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.CharSequence.toString could not be cached",74);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_lang_CharSequence::toString_30513_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(31047)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_java_lang_Iterable :31047
// {
Android_java_lang_Iterable_type* Android_java_lang_Iterable_typeof()
{
    static uSStrong<Android_java_lang_Iterable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Android_java_lang_Iterable);
    options.TypeSize = sizeof(Android_java_lang_Iterable_type);
    type = (Android_java_lang_Iterable_type*)uClassType::New("Android.Fallbacks.Android_java_lang_Iterable", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_iterator = (void(*)(uObject*, uObject**))Android_java_lang_Iterable__iterator_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))Android_java_lang_Iterable__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[21] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[22] = ::g::Android::java::lang::Iterable_typeof();
    ::TYPES[23] = ::g::Android::java::util::Iterator_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_lang_Iterable_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_lang_Iterable_type, interface1),
        ::g::Android::java::lang::Iterable_typeof(), offsetof(Android_java_lang_Iterable_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), offsetof(Android_java_lang_Iterable_type, interface3));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_Iterable::iterator_31161_ID_, uFieldFlagsStatic);
    return type;
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() :31050
void Android_java_lang_Iterable__GetEnumerator_fn(Android_java_lang_Iterable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Android.java.util.Iterator iterator() :31052
void Android_java_lang_Iterable__iterator_fn(Android_java_lang_Iterable* __this, uObject** __retval)
{
    *__retval = __this->iterator();
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_31161(bool arg0, Android.Base.Primitives.ujobject arg1) :31059
void Android_java_lang_Iterable__iterator_IMPL_31161_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_lang_Iterable::iterator_IMPL_31161(*arg0_, *arg1_);
}

jmethodID Android_java_lang_Iterable::iterator_31161_ID_;

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() [instance] :31050
uObject* Android_java_lang_Iterable::GetEnumerator()
{
    return (uObject*)::g::Android::Runtime::JEnumerator::New1((uObject*)this);
}

// public Android.java.util.Iterator iterator() [instance] :31052
uObject* Android_java_lang_Iterable::iterator()
{
    return Android_java_lang_Iterable::iterator_IMPL_31161(_subclassed, _javaObject);
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_31161(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31059
uObject* Android_java_lang_Iterable::iterator_IMPL_31161(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_Iterable::iterator_31161_ID(),"java/lang/Iterable","iterator","()Ljava/util/Iterator;",GetMethodID,"Id for fallback method java.lang.Iterable.iterator could not be cached",70);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_lang_Iterable::iterator_31161_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(31101)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_java_lang_Runnable :31101
// {
Android_java_lang_Runnable_type* Android_java_lang_Runnable_typeof()
{
    static uSStrong<Android_java_lang_Runnable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_java_lang_Runnable);
    options.TypeSize = sizeof(Android_java_lang_Runnable_type);
    type = (Android_java_lang_Runnable_type*)uClassType::New("Android.Fallbacks.Android_java_lang_Runnable", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_run = (void(*)(uObject*))Android_java_lang_Runnable__run_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_lang_Runnable_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_lang_Runnable_type, interface1),
        ::g::Android::java::lang::Runnable_typeof(), offsetof(Android_java_lang_Runnable_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_Runnable::run_31342_ID_, uFieldFlagsStatic);
    return type;
}

// public void run() :31104
void Android_java_lang_Runnable__run_fn(Android_java_lang_Runnable* __this)
{
    __this->run();
}

// public static extern void run_IMPL_31342(bool arg0, Android.Base.Primitives.ujobject arg1) :31111
void Android_java_lang_Runnable__run_IMPL_31342_fn(bool* arg0_, jobject* arg1_)
{
    Android_java_lang_Runnable::run_IMPL_31342(*arg0_, *arg1_);
}

jmethodID Android_java_lang_Runnable::run_31342_ID_;

// public void run() [instance] :31104
void Android_java_lang_Runnable::run()
{
    Android_java_lang_Runnable::run_IMPL_31342(_subclassed, _javaObject);
}

// public static extern void run_IMPL_31342(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31111
void Android_java_lang_Runnable::run_IMPL_31342(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_Runnable::run_31342_ID(),"java/lang/Runnable","run","()V",GetMethodID,"Id for fallback method java.lang.Runnable.run could not be cached",65);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_lang_Runnable::run_31342_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(31153)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_java_util_Collection :31153
// {
Android_java_util_Collection_type* Android_java_util_Collection_typeof()
{
    static uSStrong<Android_java_util_Collection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Android_java_util_Collection);
    options.TypeSize = sizeof(Android_java_util_Collection_type);
    type = (Android_java_util_Collection_type*)uClassType::New("Android.Fallbacks.Android_java_util_Collection", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Android_java_util_Collection__hashCode1_fn;
    type->interface2.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_Collection__add_fn;
    type->interface2.fp_addAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_Collection__addAll_fn;
    type->interface2.fp_clear = (void(*)(uObject*))Android_java_util_Collection__clear_fn;
    type->interface2.fp_contains = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_Collection__contains_fn;
    type->interface2.fp_containsAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_Collection__containsAll_fn;
    type->interface2.fp_equals = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_Collection__equals1_fn;
    type->interface2.fp_hashCode = (void(*)(uObject*, int*))Android_java_util_Collection__hashCode1_fn;
    type->interface2.fp_isEmpty = (void(*)(uObject*, bool*))Android_java_util_Collection__isEmpty_fn;
    type->interface2.fp_iterator = (void(*)(uObject*, uObject**))Android_java_util_Collection__iterator_fn;
    type->interface2.fp_remove = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_Collection__remove_fn;
    type->interface2.fp_removeAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_Collection__removeAll_fn;
    type->interface2.fp_retainAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_Collection__retainAll_fn;
    type->interface2.fp_size = (void(*)(uObject*, int*))Android_java_util_Collection__size_fn;
    type->interface2.fp_toArray = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))Android_java_util_Collection__toArray_fn;
    type->interface2.fp_toArray1 = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))Android_java_util_Collection__toArray1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_iterator = (void(*)(uObject*, uObject**))Android_java_util_Collection__iterator_fn;
    type->interface4.fp_GetEnumerator = (void(*)(uObject*, uObject**))Android_java_util_Collection__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[21] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[22] = ::g::Android::java::lang::Iterable_typeof();
    ::TYPES[23] = ::g::Android::java::util::Iterator_typeof();
    ::TYPES[9] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_util_Collection_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_util_Collection_type, interface1),
        ::g::Android::java::util::Collection_typeof(), offsetof(Android_java_util_Collection_type, interface2),
        ::g::Android::java::lang::Iterable_typeof(), offsetof(Android_java_util_Collection_type, interface3),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), offsetof(Android_java_util_Collection_type, interface4));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::add_37811_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::addAll_37812_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::clear_37813_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::contains_37814_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::containsAll_37815_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::equals_37816_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::hashCode_37817_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::isEmpty_37818_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::iterator_37819_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::remove_37820_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::removeAll_37821_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::retainAll_37822_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::size_37823_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::toArray_37824_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::toArray_37825_ID_, uFieldFlagsStatic);
    return type;
}

// public bool add(Android.java.lang.Object arg0) :31158
void Android_java_util_Collection__add_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->add(arg0);
}

// public static extern bool add_IMPL_37811(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31235
void Android_java_util_Collection__add_IMPL_37811_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::add_IMPL_37811(*arg0_, *arg1_, arg2_);
}

// public bool addAll(Android.java.util.Collection arg0) :31163
void Android_java_util_Collection__addAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->addAll(arg0);
}

// public static extern bool addAll_IMPL_37812(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31238
void Android_java_util_Collection__addAll_IMPL_37812_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::addAll_IMPL_37812(*arg0_, *arg1_, arg2_);
}

// public void clear() :31168
void Android_java_util_Collection__clear_fn(Android_java_util_Collection* __this)
{
    __this->clear();
}

// public static extern void clear_IMPL_37813(bool arg0, Android.Base.Primitives.ujobject arg1) :31241
void Android_java_util_Collection__clear_IMPL_37813_fn(bool* arg0_, jobject* arg1_)
{
    Android_java_util_Collection::clear_IMPL_37813(*arg0_, *arg1_);
}

// public bool contains(Android.java.lang.Object arg0) :31173
void Android_java_util_Collection__contains_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->contains(arg0);
}

// public static extern bool contains_IMPL_37814(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31244
void Android_java_util_Collection__contains_IMPL_37814_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::contains_IMPL_37814(*arg0_, *arg1_, arg2_);
}

// public bool containsAll(Android.java.util.Collection arg0) :31178
void Android_java_util_Collection__containsAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->containsAll(arg0);
}

// public static extern bool containsAll_IMPL_37815(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31247
void Android_java_util_Collection__containsAll_IMPL_37815_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::containsAll_IMPL_37815(*arg0_, *arg1_, arg2_);
}

// public bool equals(Android.java.lang.Object arg0) :31183
void Android_java_util_Collection__equals1_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->equals1(arg0);
}

// public static extern bool equals_IMPL_37816(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31250
void Android_java_util_Collection__equals_IMPL_37816_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::equals_IMPL_37816(*arg0_, *arg1_, arg2_);
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() :31156
void Android_java_util_Collection__GetEnumerator_fn(Android_java_util_Collection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public override sealed int hashCode() :31188
void Android_java_util_Collection__hashCode1_fn(Android_java_util_Collection* __this, int* __retval)
{
    return *__retval = Android_java_util_Collection::hashCode_IMPL_37817(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_37817(bool arg0, Android.Base.Primitives.ujobject arg1) :31253
void Android_java_util_Collection__hashCode_IMPL_37817_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_Collection::hashCode_IMPL_37817(*arg0_, *arg1_);
}

// public bool isEmpty() :31193
void Android_java_util_Collection__isEmpty_fn(Android_java_util_Collection* __this, bool* __retval)
{
    *__retval = __this->isEmpty();
}

// public static extern bool isEmpty_IMPL_37818(bool arg0, Android.Base.Primitives.ujobject arg1) :31256
void Android_java_util_Collection__isEmpty_IMPL_37818_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_java_util_Collection::isEmpty_IMPL_37818(*arg0_, *arg1_);
}

// public Android.java.util.Iterator iterator() :31198
void Android_java_util_Collection__iterator_fn(Android_java_util_Collection* __this, uObject** __retval)
{
    *__retval = __this->iterator();
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_37819(bool arg0, Android.Base.Primitives.ujobject arg1) :31259
void Android_java_util_Collection__iterator_IMPL_37819_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_Collection::iterator_IMPL_37819(*arg0_, *arg1_);
}

// public bool remove(Android.java.lang.Object arg0) :31203
void Android_java_util_Collection__remove_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->remove(arg0);
}

// public static extern bool remove_IMPL_37820(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31262
void Android_java_util_Collection__remove_IMPL_37820_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::remove_IMPL_37820(*arg0_, *arg1_, arg2_);
}

// public bool removeAll(Android.java.util.Collection arg0) :31208
void Android_java_util_Collection__removeAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->removeAll(arg0);
}

// public static extern bool removeAll_IMPL_37821(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31265
void Android_java_util_Collection__removeAll_IMPL_37821_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::removeAll_IMPL_37821(*arg0_, *arg1_, arg2_);
}

// public bool retainAll(Android.java.util.Collection arg0) :31213
void Android_java_util_Collection__retainAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->retainAll(arg0);
}

// public static extern bool retainAll_IMPL_37822(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31268
void Android_java_util_Collection__retainAll_IMPL_37822_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::retainAll_IMPL_37822(*arg0_, *arg1_, arg2_);
}

// public int size() :31218
void Android_java_util_Collection__size_fn(Android_java_util_Collection* __this, int* __retval)
{
    *__retval = __this->size();
}

// public static extern int size_IMPL_37823(bool arg0, Android.Base.Primitives.ujobject arg1) :31271
void Android_java_util_Collection__size_IMPL_37823_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_Collection::size_IMPL_37823(*arg0_, *arg1_);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray() :31223
void Android_java_util_Collection__toArray_fn(Android_java_util_Collection* __this, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->toArray();
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray(Android.Runtime.ObjectArray<Android.java.lang.Object> arg0) :31228
void Android_java_util_Collection__toArray1_fn(Android_java_util_Collection* __this, ::g::Android::Runtime::ObjectArray* arg0, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->toArray1(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37824(bool arg0, Android.Base.Primitives.ujobject arg1) :31274
void Android_java_util_Collection__toArray_IMPL_37824_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_Collection::toArray_IMPL_37824(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37825(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31277
void Android_java_util_Collection__toArray_IMPL_37825_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_java_util_Collection::toArray_IMPL_37825(*arg0_, *arg1_, arg2_);
}

jmethodID Android_java_util_Collection::add_37811_ID_;
jmethodID Android_java_util_Collection::addAll_37812_ID_;
jmethodID Android_java_util_Collection::clear_37813_ID_;
jmethodID Android_java_util_Collection::contains_37814_ID_;
jmethodID Android_java_util_Collection::containsAll_37815_ID_;
jmethodID Android_java_util_Collection::equals_37816_ID_;
jmethodID Android_java_util_Collection::hashCode_37817_ID_;
jmethodID Android_java_util_Collection::isEmpty_37818_ID_;
jmethodID Android_java_util_Collection::iterator_37819_ID_;
jmethodID Android_java_util_Collection::remove_37820_ID_;
jmethodID Android_java_util_Collection::removeAll_37821_ID_;
jmethodID Android_java_util_Collection::retainAll_37822_ID_;
jmethodID Android_java_util_Collection::size_37823_ID_;
jmethodID Android_java_util_Collection::toArray_37824_ID_;
jmethodID Android_java_util_Collection::toArray_37825_ID_;

// public bool add(Android.java.lang.Object arg0) [instance] :31158
bool Android_java_util_Collection::add(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_Collection::add_IMPL_37811(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool addAll(Android.java.util.Collection arg0) [instance] :31163
bool Android_java_util_Collection::addAll(uObject* arg0)
{
    return Android_java_util_Collection::addAll_IMPL_37812(_subclassed, _javaObject, arg0);
}

// public void clear() [instance] :31168
void Android_java_util_Collection::clear()
{
    Android_java_util_Collection::clear_IMPL_37813(_subclassed, _javaObject);
}

// public bool contains(Android.java.lang.Object arg0) [instance] :31173
bool Android_java_util_Collection::contains(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_Collection::contains_IMPL_37814(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool containsAll(Android.java.util.Collection arg0) [instance] :31178
bool Android_java_util_Collection::containsAll(uObject* arg0)
{
    return Android_java_util_Collection::containsAll_IMPL_37815(_subclassed, _javaObject, arg0);
}

// public bool equals(Android.java.lang.Object arg0) [instance] :31183
bool Android_java_util_Collection::equals1(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_Collection::equals_IMPL_37816(_subclassed, _javaObject, (uObject*)arg0);
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() [instance] :31156
uObject* Android_java_util_Collection::GetEnumerator()
{
    return (uObject*)::g::Android::Runtime::JEnumerator::New1((uObject*)this);
}

// public bool isEmpty() [instance] :31193
bool Android_java_util_Collection::isEmpty()
{
    return Android_java_util_Collection::isEmpty_IMPL_37818(_subclassed, _javaObject);
}

// public Android.java.util.Iterator iterator() [instance] :31198
uObject* Android_java_util_Collection::iterator()
{
    return Android_java_util_Collection::iterator_IMPL_37819(_subclassed, _javaObject);
}

// public bool remove(Android.java.lang.Object arg0) [instance] :31203
bool Android_java_util_Collection::remove(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_Collection::remove_IMPL_37820(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool removeAll(Android.java.util.Collection arg0) [instance] :31208
bool Android_java_util_Collection::removeAll(uObject* arg0)
{
    return Android_java_util_Collection::removeAll_IMPL_37821(_subclassed, _javaObject, arg0);
}

// public bool retainAll(Android.java.util.Collection arg0) [instance] :31213
bool Android_java_util_Collection::retainAll(uObject* arg0)
{
    return Android_java_util_Collection::retainAll_IMPL_37822(_subclassed, _javaObject, arg0);
}

// public int size() [instance] :31218
int Android_java_util_Collection::size()
{
    return Android_java_util_Collection::size_IMPL_37823(_subclassed, _javaObject);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray() [instance] :31223
::g::Android::Runtime::ObjectArray* Android_java_util_Collection::toArray()
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_java_util_Collection::toArray_IMPL_37824(_subclassed, _javaObject), ::TYPES[9/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray(Android.Runtime.ObjectArray<Android.java.lang.Object> arg0) [instance] :31228
::g::Android::Runtime::ObjectArray* Android_java_util_Collection::toArray1(::g::Android::Runtime::ObjectArray* arg0)
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_java_util_Collection::toArray_IMPL_37825(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[9/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]);
}

// public static extern bool add_IMPL_37811(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31235
bool Android_java_util_Collection::add_IMPL_37811(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::add_37811_ID(),"java/util/Collection","add","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.Collection.add could not be cached",67);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::add_37811_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool addAll_IMPL_37812(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31238
bool Android_java_util_Collection::addAll_IMPL_37812(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::addAll_37812_ID(),"java/util/Collection","addAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.Collection.addAll could not be cached",70);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::addAll_37812_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_37813(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31241
void Android_java_util_Collection::clear_IMPL_37813(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::clear_37813_ID(),"java/util/Collection","clear","()V",GetMethodID,"Id for fallback method java.util.Collection.clear could not be cached",69);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_Collection::clear_37813_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool contains_IMPL_37814(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31244
bool Android_java_util_Collection::contains_IMPL_37814(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::contains_37814_ID(),"java/util/Collection","contains","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.Collection.contains could not be cached",72);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::contains_37814_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool containsAll_IMPL_37815(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31247
bool Android_java_util_Collection::containsAll_IMPL_37815(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::containsAll_37815_ID(),"java/util/Collection","containsAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.Collection.containsAll could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::containsAll_37815_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool equals_IMPL_37816(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31250
bool Android_java_util_Collection::equals_IMPL_37816(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::equals_37816_ID(),"java/util/Collection","equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.Collection.equals could not be cached",70);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::equals_37816_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_37817(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31253
int Android_java_util_Collection::hashCode_IMPL_37817(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::hashCode_37817_ID(),"java/util/Collection","hashCode","()I",GetMethodID,"Id for fallback method java.util.Collection.hashCode could not be cached",72);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_Collection::hashCode_37817_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isEmpty_IMPL_37818(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31256
bool Android_java_util_Collection::isEmpty_IMPL_37818(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::isEmpty_37818_ID(),"java/util/Collection","isEmpty","()Z",GetMethodID,"Id for fallback method java.util.Collection.isEmpty could not be cached",71);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::isEmpty_37818_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_37819(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31259
uObject* Android_java_util_Collection::iterator_IMPL_37819(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::iterator_37819_ID(),"java/util/Collection","iterator","()Ljava/util/Iterator;",GetMethodID,"Id for fallback method java.util.Collection.iterator could not be cached",72);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_Collection::iterator_37819_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool remove_IMPL_37820(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31262
bool Android_java_util_Collection::remove_IMPL_37820(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::remove_37820_ID(),"java/util/Collection","remove","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.Collection.remove could not be cached",70);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::remove_37820_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool removeAll_IMPL_37821(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31265
bool Android_java_util_Collection::removeAll_IMPL_37821(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::removeAll_37821_ID(),"java/util/Collection","removeAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.Collection.removeAll could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::removeAll_37821_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool retainAll_IMPL_37822(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31268
bool Android_java_util_Collection::retainAll_IMPL_37822(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::retainAll_37822_ID(),"java/util/Collection","retainAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.Collection.retainAll could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::retainAll_37822_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int size_IMPL_37823(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31271
int Android_java_util_Collection::size_IMPL_37823(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::size_37823_ID(),"java/util/Collection","size","()I",GetMethodID,"Id for fallback method java.util.Collection.size could not be cached",68);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_Collection::size_37823_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37824(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31274
uObject* Android_java_util_Collection::toArray_IMPL_37824(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::toArray_37824_ID(),"java/util/Collection","toArray","()[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.Collection.toArray could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_Collection::toArray_37824_ID()),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37825(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31277
uObject* Android_java_util_Collection::toArray_IMPL_37825(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::toArray_37825_ID(),"java/util/Collection","toArray","([Ljava/lang/Object;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.Collection.toArray could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_Collection::toArray_37825_ID(), _obArg2),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(31721)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_java_util_Iterator :31721
// {
Android_java_util_Iterator_type* Android_java_util_Iterator_typeof()
{
    static uSStrong<Android_java_util_Iterator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_java_util_Iterator);
    options.TypeSize = sizeof(Android_java_util_Iterator_type);
    type = (Android_java_util_Iterator_type*)uClassType::New("Android.Fallbacks.Android_java_util_Iterator", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_hasNext = (void(*)(uObject*, bool*))Android_java_util_Iterator__hasNext_fn;
    type->interface2.fp_next = (void(*)(uObject*, ::g::Android::java::lang::Object**))Android_java_util_Iterator__next_fn;
    type->interface2.fp_remove = (void(*)(uObject*))Android_java_util_Iterator__remove_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::Object_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_util_Iterator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_util_Iterator_type, interface1),
        ::g::Android::java::util::Iterator_typeof(), offsetof(Android_java_util_Iterator_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Iterator::hasNext_38163_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Iterator::next_38164_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Iterator::remove_38165_ID_, uFieldFlagsStatic);
    return type;
}

// public bool hasNext() :31724
void Android_java_util_Iterator__hasNext_fn(Android_java_util_Iterator* __this, bool* __retval)
{
    *__retval = __this->hasNext();
}

// public static extern bool hasNext_IMPL_38163(bool arg0, Android.Base.Primitives.ujobject arg1) :31741
void Android_java_util_Iterator__hasNext_IMPL_38163_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_java_util_Iterator::hasNext_IMPL_38163(*arg0_, *arg1_);
}

// public Android.java.lang.Object next() :31729
void Android_java_util_Iterator__next_fn(Android_java_util_Iterator* __this, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->next();
}

// public static extern Android.Base.Wrappers.IJWrapper next_IMPL_38164(bool arg0, Android.Base.Primitives.ujobject arg1) :31744
void Android_java_util_Iterator__next_IMPL_38164_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_Iterator::next_IMPL_38164(*arg0_, *arg1_);
}

// public void remove() :31734
void Android_java_util_Iterator__remove_fn(Android_java_util_Iterator* __this)
{
    __this->remove();
}

// public static extern void remove_IMPL_38165(bool arg0, Android.Base.Primitives.ujobject arg1) :31747
void Android_java_util_Iterator__remove_IMPL_38165_fn(bool* arg0_, jobject* arg1_)
{
    Android_java_util_Iterator::remove_IMPL_38165(*arg0_, *arg1_);
}

jmethodID Android_java_util_Iterator::hasNext_38163_ID_;
jmethodID Android_java_util_Iterator::next_38164_ID_;
jmethodID Android_java_util_Iterator::remove_38165_ID_;

// public bool hasNext() [instance] :31724
bool Android_java_util_Iterator::hasNext()
{
    return Android_java_util_Iterator::hasNext_IMPL_38163(_subclassed, _javaObject);
}

// public Android.java.lang.Object next() [instance] :31729
::g::Android::java::lang::Object* Android_java_util_Iterator::next()
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_Iterator::next_IMPL_38164(_subclassed, _javaObject), ::TYPES[3/*Android.java.lang.Object*/]);
}

// public void remove() [instance] :31734
void Android_java_util_Iterator::remove()
{
    Android_java_util_Iterator::remove_IMPL_38165(_subclassed, _javaObject);
}

// public static extern bool hasNext_IMPL_38163(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31741
bool Android_java_util_Iterator::hasNext_IMPL_38163(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Iterator::hasNext_38163_ID(),"java/util/Iterator","hasNext","()Z",GetMethodID,"Id for fallback method java.util.Iterator.hasNext could not be cached",69);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Iterator::hasNext_38163_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper next_IMPL_38164(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31744
uObject* Android_java_util_Iterator::next_IMPL_38164(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Iterator::next_38164_ID(),"java/util/Iterator","next","()Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.Iterator.next could not be cached",66);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_Iterator::next_38164_ID()),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void remove_IMPL_38165(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31747
void Android_java_util_Iterator::remove_IMPL_38165(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Iterator::remove_38165_ID(),"java/util/Iterator","remove","()V",GetMethodID,"Id for fallback method java.util.Iterator.remove could not be cached",68);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_Iterator::remove_38165_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(31763)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_java_util_List :31763
// {
Android_java_util_List_type* Android_java_util_List_typeof()
{
    static uSStrong<Android_java_util_List_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Android_java_util_List);
    options.TypeSize = sizeof(Android_java_util_List_type);
    type = (Android_java_util_List_type*)uClassType::New("Android.Fallbacks.Android_java_util_List", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Android_java_util_List__hashCode1_fn;
    type->interface2.fp_add1 = (void(*)(uObject*, int*, ::g::Android::java::lang::Object*))Android_java_util_List__add1_fn;
    type->interface2.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__add_fn;
    type->interface2.fp_addAll1 = (void(*)(uObject*, int*, uObject*, bool*))Android_java_util_List__addAll1_fn;
    type->interface2.fp_addAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__addAll_fn;
    type->interface2.fp_clear = (void(*)(uObject*))Android_java_util_List__clear_fn;
    type->interface2.fp_contains = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__contains_fn;
    type->interface2.fp_containsAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__containsAll_fn;
    type->interface2.fp_equals = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__equals1_fn;
    type->interface2.fp_get = (void(*)(uObject*, int*, ::g::Android::java::lang::Object**))Android_java_util_List__get_fn;
    type->interface2.fp_hashCode = (void(*)(uObject*, int*))Android_java_util_List__hashCode1_fn;
    type->interface2.fp_indexOf = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_java_util_List__indexOf_fn;
    type->interface2.fp_isEmpty = (void(*)(uObject*, bool*))Android_java_util_List__isEmpty_fn;
    type->interface2.fp_iterator = (void(*)(uObject*, uObject**))Android_java_util_List__iterator_fn;
    type->interface2.fp_lastIndexOf = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_java_util_List__lastIndexOf_fn;
    type->interface2.fp_listIterator = (void(*)(uObject*, uObject**))Android_java_util_List__listIterator_fn;
    type->interface2.fp_listIterator1 = (void(*)(uObject*, int*, uObject**))Android_java_util_List__listIterator1_fn;
    type->interface2.fp_remove1 = (void(*)(uObject*, int*, ::g::Android::java::lang::Object**))Android_java_util_List__remove1_fn;
    type->interface2.fp_remove = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__remove_fn;
    type->interface2.fp_removeAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__removeAll_fn;
    type->interface2.fp_retainAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__retainAll_fn;
    type->interface2.fp_set = (void(*)(uObject*, int*, ::g::Android::java::lang::Object*, ::g::Android::java::lang::Object**))Android_java_util_List__set_fn;
    type->interface2.fp_size = (void(*)(uObject*, int*))Android_java_util_List__size_fn;
    type->interface2.fp_subList = (void(*)(uObject*, int*, int*, uObject**))Android_java_util_List__subList_fn;
    type->interface2.fp_toArray = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))Android_java_util_List__toArray_fn;
    type->interface2.fp_toArray1 = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))Android_java_util_List__toArray1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__add_fn;
    type->interface3.fp_addAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__addAll_fn;
    type->interface3.fp_clear = (void(*)(uObject*))Android_java_util_List__clear_fn;
    type->interface3.fp_contains = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__contains_fn;
    type->interface3.fp_containsAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__containsAll_fn;
    type->interface3.fp_equals = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__equals1_fn;
    type->interface3.fp_hashCode = (void(*)(uObject*, int*))Android_java_util_List__hashCode1_fn;
    type->interface3.fp_isEmpty = (void(*)(uObject*, bool*))Android_java_util_List__isEmpty_fn;
    type->interface3.fp_iterator = (void(*)(uObject*, uObject**))Android_java_util_List__iterator_fn;
    type->interface3.fp_remove = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__remove_fn;
    type->interface3.fp_removeAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__removeAll_fn;
    type->interface3.fp_retainAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__retainAll_fn;
    type->interface3.fp_size = (void(*)(uObject*, int*))Android_java_util_List__size_fn;
    type->interface3.fp_toArray = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))Android_java_util_List__toArray_fn;
    type->interface3.fp_toArray1 = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))Android_java_util_List__toArray1_fn;
    type->interface4.fp_iterator = (void(*)(uObject*, uObject**))Android_java_util_List__iterator_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))Android_java_util_List__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[21] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[22] = ::g::Android::java::lang::Iterable_typeof();
    ::TYPES[23] = ::g::Android::java::util::Iterator_typeof();
    ::TYPES[24] = ::g::Android::java::util::ListIterator_typeof();
    ::TYPES[25] = ::g::Android::java::util::List_typeof();
    ::TYPES[9] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_util_List_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_util_List_type, interface1),
        ::g::Android::java::util::List_typeof(), offsetof(Android_java_util_List_type, interface2),
        ::g::Android::java::util::Collection_typeof(), offsetof(Android_java_util_List_type, interface3),
        ::g::Android::java::lang::Iterable_typeof(), offsetof(Android_java_util_List_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), offsetof(Android_java_util_List_type, interface5));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::add_38220_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::add_38221_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::addAll_38222_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::addAll_38223_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::clear_38224_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::contains_38225_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::containsAll_38226_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::equals_38227_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::get_38228_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::hashCode_38229_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::indexOf_38230_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::isEmpty_38231_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::iterator_38232_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::lastIndexOf_38233_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::listIterator_38234_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::listIterator_38235_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::remove_38236_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::remove_38237_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::removeAll_38238_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::retainAll_38239_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::set_38240_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::size_38241_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::subList_38242_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::toArray_38243_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::toArray_38244_ID_, uFieldFlagsStatic);
    return type;
}

// public bool add(Android.java.lang.Object arg0) :31773
void Android_java_util_List__add_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->add(arg0);
}

// public void add(int arg0, Android.java.lang.Object arg1) :31768
void Android_java_util_List__add1_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object* arg1)
{
    __this->add1(*arg0, arg1);
}

// public static extern void add_IMPL_38220(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :31895
void Android_java_util_List__add_IMPL_38220_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_)
{
    Android_java_util_List::add_IMPL_38220(*arg0_, *arg1_, *arg2_, arg3_);
}

// public static extern bool add_IMPL_38221(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31898
void Android_java_util_List__add_IMPL_38221_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::add_IMPL_38221(*arg0_, *arg1_, arg2_);
}

// public bool addAll(Android.java.util.Collection arg0) :31783
void Android_java_util_List__addAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->addAll(arg0);
}

// public bool addAll(int arg0, Android.java.util.Collection arg1) :31778
void Android_java_util_List__addAll1_fn(Android_java_util_List* __this, int* arg0, uObject* arg1, bool* __retval)
{
    *__retval = __this->addAll1(*arg0, arg1);
}

// public static extern bool addAll_IMPL_38222(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :31901
void Android_java_util_List__addAll_IMPL_38222_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = Android_java_util_List::addAll_IMPL_38222(*arg0_, *arg1_, *arg2_, arg3_);
}

// public static extern bool addAll_IMPL_38223(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31904
void Android_java_util_List__addAll_IMPL_38223_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::addAll_IMPL_38223(*arg0_, *arg1_, arg2_);
}

// public void clear() :31788
void Android_java_util_List__clear_fn(Android_java_util_List* __this)
{
    __this->clear();
}

// public static extern void clear_IMPL_38224(bool arg0, Android.Base.Primitives.ujobject arg1) :31907
void Android_java_util_List__clear_IMPL_38224_fn(bool* arg0_, jobject* arg1_)
{
    Android_java_util_List::clear_IMPL_38224(*arg0_, *arg1_);
}

// public bool contains(Android.java.lang.Object arg0) :31793
void Android_java_util_List__contains_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->contains(arg0);
}

// public static extern bool contains_IMPL_38225(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31910
void Android_java_util_List__contains_IMPL_38225_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::contains_IMPL_38225(*arg0_, *arg1_, arg2_);
}

// public bool containsAll(Android.java.util.Collection arg0) :31798
void Android_java_util_List__containsAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->containsAll(arg0);
}

// public static extern bool containsAll_IMPL_38226(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31913
void Android_java_util_List__containsAll_IMPL_38226_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::containsAll_IMPL_38226(*arg0_, *arg1_, arg2_);
}

// public bool equals(Android.java.lang.Object arg0) :31803
void Android_java_util_List__equals1_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->equals1(arg0);
}

// public static extern bool equals_IMPL_38227(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31916
void Android_java_util_List__equals_IMPL_38227_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::equals_IMPL_38227(*arg0_, *arg1_, arg2_);
}

// public Android.java.lang.Object get(int arg0) :31808
void Android_java_util_List__get_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->get(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper get_IMPL_38228(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :31919
void Android_java_util_List__get_IMPL_38228_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_java_util_List::get_IMPL_38228(*arg0_, *arg1_, *arg2_);
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() :31766
void Android_java_util_List__GetEnumerator_fn(Android_java_util_List* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public override sealed int hashCode() :31813
void Android_java_util_List__hashCode1_fn(Android_java_util_List* __this, int* __retval)
{
    return *__retval = Android_java_util_List::hashCode_IMPL_38229(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_38229(bool arg0, Android.Base.Primitives.ujobject arg1) :31922
void Android_java_util_List__hashCode_IMPL_38229_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_List::hashCode_IMPL_38229(*arg0_, *arg1_);
}

// public int indexOf(Android.java.lang.Object arg0) :31818
void Android_java_util_List__indexOf_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->indexOf(arg0);
}

// public static extern int indexOf_IMPL_38230(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31925
void Android_java_util_List__indexOf_IMPL_38230_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_java_util_List::indexOf_IMPL_38230(*arg0_, *arg1_, arg2_);
}

// public bool isEmpty() :31823
void Android_java_util_List__isEmpty_fn(Android_java_util_List* __this, bool* __retval)
{
    *__retval = __this->isEmpty();
}

// public static extern bool isEmpty_IMPL_38231(bool arg0, Android.Base.Primitives.ujobject arg1) :31928
void Android_java_util_List__isEmpty_IMPL_38231_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_java_util_List::isEmpty_IMPL_38231(*arg0_, *arg1_);
}

// public Android.java.util.Iterator iterator() :31828
void Android_java_util_List__iterator_fn(Android_java_util_List* __this, uObject** __retval)
{
    *__retval = __this->iterator();
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_38232(bool arg0, Android.Base.Primitives.ujobject arg1) :31931
void Android_java_util_List__iterator_IMPL_38232_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_List::iterator_IMPL_38232(*arg0_, *arg1_);
}

// public int lastIndexOf(Android.java.lang.Object arg0) :31833
void Android_java_util_List__lastIndexOf_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->lastIndexOf(arg0);
}

// public static extern int lastIndexOf_IMPL_38233(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31934
void Android_java_util_List__lastIndexOf_IMPL_38233_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_java_util_List::lastIndexOf_IMPL_38233(*arg0_, *arg1_, arg2_);
}

// public Android.java.util.ListIterator listIterator() :31838
void Android_java_util_List__listIterator_fn(Android_java_util_List* __this, uObject** __retval)
{
    *__retval = __this->listIterator();
}

// public Android.java.util.ListIterator listIterator(int arg0) :31843
void Android_java_util_List__listIterator1_fn(Android_java_util_List* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->listIterator1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_38234(bool arg0, Android.Base.Primitives.ujobject arg1) :31937
void Android_java_util_List__listIterator_IMPL_38234_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_List::listIterator_IMPL_38234(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_38235(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :31940
void Android_java_util_List__listIterator_IMPL_38235_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_java_util_List::listIterator_IMPL_38235(*arg0_, *arg1_, *arg2_);
}

// public bool remove(Android.java.lang.Object arg0) :31853
void Android_java_util_List__remove_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->remove(arg0);
}

// public Android.java.lang.Object remove(int arg0) :31848
void Android_java_util_List__remove1_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->remove1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper remove_IMPL_38236(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :31943
void Android_java_util_List__remove_IMPL_38236_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_java_util_List::remove_IMPL_38236(*arg0_, *arg1_, *arg2_);
}

// public static extern bool remove_IMPL_38237(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31946
void Android_java_util_List__remove_IMPL_38237_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::remove_IMPL_38237(*arg0_, *arg1_, arg2_);
}

// public bool removeAll(Android.java.util.Collection arg0) :31858
void Android_java_util_List__removeAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->removeAll(arg0);
}

// public static extern bool removeAll_IMPL_38238(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31949
void Android_java_util_List__removeAll_IMPL_38238_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::removeAll_IMPL_38238(*arg0_, *arg1_, arg2_);
}

// public bool retainAll(Android.java.util.Collection arg0) :31863
void Android_java_util_List__retainAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->retainAll(arg0);
}

// public static extern bool retainAll_IMPL_38239(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31952
void Android_java_util_List__retainAll_IMPL_38239_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::retainAll_IMPL_38239(*arg0_, *arg1_, arg2_);
}

// public Android.java.lang.Object set(int arg0, Android.java.lang.Object arg1) :31868
void Android_java_util_List__set_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object* arg1, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->set(*arg0, arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper set_IMPL_38240(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :31955
void Android_java_util_List__set_IMPL_38240_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, uObject** __retval)
{
    *__retval = Android_java_util_List::set_IMPL_38240(*arg0_, *arg1_, *arg2_, arg3_);
}

// public int size() :31873
void Android_java_util_List__size_fn(Android_java_util_List* __this, int* __retval)
{
    *__retval = __this->size();
}

// public static extern int size_IMPL_38241(bool arg0, Android.Base.Primitives.ujobject arg1) :31958
void Android_java_util_List__size_IMPL_38241_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_List::size_IMPL_38241(*arg0_, *arg1_);
}

// public Android.java.util.List subList(int arg0, int arg1) :31878
void Android_java_util_List__subList_fn(Android_java_util_List* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subList(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subList_IMPL_38242(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :31961
void Android_java_util_List__subList_IMPL_38242_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = Android_java_util_List::subList_IMPL_38242(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray() :31883
void Android_java_util_List__toArray_fn(Android_java_util_List* __this, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->toArray();
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray(Android.Runtime.ObjectArray<Android.java.lang.Object> arg0) :31888
void Android_java_util_List__toArray1_fn(Android_java_util_List* __this, ::g::Android::Runtime::ObjectArray* arg0, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->toArray1(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_38243(bool arg0, Android.Base.Primitives.ujobject arg1) :31964
void Android_java_util_List__toArray_IMPL_38243_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_List::toArray_IMPL_38243(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_38244(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31967
void Android_java_util_List__toArray_IMPL_38244_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_java_util_List::toArray_IMPL_38244(*arg0_, *arg1_, arg2_);
}

jmethodID Android_java_util_List::add_38220_ID_;
jmethodID Android_java_util_List::add_38221_ID_;
jmethodID Android_java_util_List::addAll_38222_ID_;
jmethodID Android_java_util_List::addAll_38223_ID_;
jmethodID Android_java_util_List::clear_38224_ID_;
jmethodID Android_java_util_List::contains_38225_ID_;
jmethodID Android_java_util_List::containsAll_38226_ID_;
jmethodID Android_java_util_List::equals_38227_ID_;
jmethodID Android_java_util_List::get_38228_ID_;
jmethodID Android_java_util_List::hashCode_38229_ID_;
jmethodID Android_java_util_List::indexOf_38230_ID_;
jmethodID Android_java_util_List::isEmpty_38231_ID_;
jmethodID Android_java_util_List::iterator_38232_ID_;
jmethodID Android_java_util_List::lastIndexOf_38233_ID_;
jmethodID Android_java_util_List::listIterator_38234_ID_;
jmethodID Android_java_util_List::listIterator_38235_ID_;
jmethodID Android_java_util_List::remove_38236_ID_;
jmethodID Android_java_util_List::remove_38237_ID_;
jmethodID Android_java_util_List::removeAll_38238_ID_;
jmethodID Android_java_util_List::retainAll_38239_ID_;
jmethodID Android_java_util_List::set_38240_ID_;
jmethodID Android_java_util_List::size_38241_ID_;
jmethodID Android_java_util_List::subList_38242_ID_;
jmethodID Android_java_util_List::toArray_38243_ID_;
jmethodID Android_java_util_List::toArray_38244_ID_;

// public bool add(Android.java.lang.Object arg0) [instance] :31773
bool Android_java_util_List::add(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::add_IMPL_38221(_subclassed, _javaObject, (uObject*)arg0);
}

// public void add(int arg0, Android.java.lang.Object arg1) [instance] :31768
void Android_java_util_List::add1(int arg0, ::g::Android::java::lang::Object* arg1)
{
    Android_java_util_List::add_IMPL_38220(_subclassed, _javaObject, arg0, (uObject*)arg1);
}

// public bool addAll(Android.java.util.Collection arg0) [instance] :31783
bool Android_java_util_List::addAll(uObject* arg0)
{
    return Android_java_util_List::addAll_IMPL_38223(_subclassed, _javaObject, arg0);
}

// public bool addAll(int arg0, Android.java.util.Collection arg1) [instance] :31778
bool Android_java_util_List::addAll1(int arg0, uObject* arg1)
{
    return Android_java_util_List::addAll_IMPL_38222(_subclassed, _javaObject, arg0, arg1);
}

// public void clear() [instance] :31788
void Android_java_util_List::clear()
{
    Android_java_util_List::clear_IMPL_38224(_subclassed, _javaObject);
}

// public bool contains(Android.java.lang.Object arg0) [instance] :31793
bool Android_java_util_List::contains(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::contains_IMPL_38225(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool containsAll(Android.java.util.Collection arg0) [instance] :31798
bool Android_java_util_List::containsAll(uObject* arg0)
{
    return Android_java_util_List::containsAll_IMPL_38226(_subclassed, _javaObject, arg0);
}

// public bool equals(Android.java.lang.Object arg0) [instance] :31803
bool Android_java_util_List::equals1(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::equals_IMPL_38227(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.java.lang.Object get(int arg0) [instance] :31808
::g::Android::java::lang::Object* Android_java_util_List::get(int arg0)
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_List::get_IMPL_38228(_subclassed, _javaObject, arg0), ::TYPES[3/*Android.java.lang.Object*/]);
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() [instance] :31766
uObject* Android_java_util_List::GetEnumerator()
{
    return (uObject*)::g::Android::Runtime::JEnumerator::New1((uObject*)this);
}

// public int indexOf(Android.java.lang.Object arg0) [instance] :31818
int Android_java_util_List::indexOf(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::indexOf_IMPL_38230(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool isEmpty() [instance] :31823
bool Android_java_util_List::isEmpty()
{
    return Android_java_util_List::isEmpty_IMPL_38231(_subclassed, _javaObject);
}

// public Android.java.util.Iterator iterator() [instance] :31828
uObject* Android_java_util_List::iterator()
{
    return Android_java_util_List::iterator_IMPL_38232(_subclassed, _javaObject);
}

// public int lastIndexOf(Android.java.lang.Object arg0) [instance] :31833
int Android_java_util_List::lastIndexOf(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::lastIndexOf_IMPL_38233(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.java.util.ListIterator listIterator() [instance] :31838
uObject* Android_java_util_List::listIterator()
{
    return Android_java_util_List::listIterator_IMPL_38234(_subclassed, _javaObject);
}

// public Android.java.util.ListIterator listIterator(int arg0) [instance] :31843
uObject* Android_java_util_List::listIterator1(int arg0)
{
    return Android_java_util_List::listIterator_IMPL_38235(_subclassed, _javaObject, arg0);
}

// public bool remove(Android.java.lang.Object arg0) [instance] :31853
bool Android_java_util_List::remove(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::remove_IMPL_38237(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.java.lang.Object remove(int arg0) [instance] :31848
::g::Android::java::lang::Object* Android_java_util_List::remove1(int arg0)
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_List::remove_IMPL_38236(_subclassed, _javaObject, arg0), ::TYPES[3/*Android.java.lang.Object*/]);
}

// public bool removeAll(Android.java.util.Collection arg0) [instance] :31858
bool Android_java_util_List::removeAll(uObject* arg0)
{
    return Android_java_util_List::removeAll_IMPL_38238(_subclassed, _javaObject, arg0);
}

// public bool retainAll(Android.java.util.Collection arg0) [instance] :31863
bool Android_java_util_List::retainAll(uObject* arg0)
{
    return Android_java_util_List::retainAll_IMPL_38239(_subclassed, _javaObject, arg0);
}

// public Android.java.lang.Object set(int arg0, Android.java.lang.Object arg1) [instance] :31868
::g::Android::java::lang::Object* Android_java_util_List::set(int arg0, ::g::Android::java::lang::Object* arg1)
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_List::set_IMPL_38240(_subclassed, _javaObject, arg0, (uObject*)arg1), ::TYPES[3/*Android.java.lang.Object*/]);
}

// public int size() [instance] :31873
int Android_java_util_List::size()
{
    return Android_java_util_List::size_IMPL_38241(_subclassed, _javaObject);
}

// public Android.java.util.List subList(int arg0, int arg1) [instance] :31878
uObject* Android_java_util_List::subList(int arg0, int arg1)
{
    return Android_java_util_List::subList_IMPL_38242(_subclassed, _javaObject, arg0, arg1);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray() [instance] :31883
::g::Android::Runtime::ObjectArray* Android_java_util_List::toArray()
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_java_util_List::toArray_IMPL_38243(_subclassed, _javaObject), ::TYPES[9/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray(Android.Runtime.ObjectArray<Android.java.lang.Object> arg0) [instance] :31888
::g::Android::Runtime::ObjectArray* Android_java_util_List::toArray1(::g::Android::Runtime::ObjectArray* arg0)
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_java_util_List::toArray_IMPL_38244(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[9/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]);
}

// public static extern void add_IMPL_38220(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :31895
void Android_java_util_List::add_IMPL_38220(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::add_38220_ID(),"java/util/List","add","(ILjava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.List.add could not be cached",61);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_List::add_38220_ID(), ((jint)arg2_), _obArg3);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool add_IMPL_38221(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31898
bool Android_java_util_List::add_IMPL_38221(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::add_38221_ID(),"java/util/List","add","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.List.add could not be cached",61);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::add_38221_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool addAll_IMPL_38222(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :31901
bool Android_java_util_List::addAll_IMPL_38222(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::addAll_38222_ID(),"java/util/List","addAll","(ILjava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.List.addAll could not be cached",64);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::addAll_38222_ID(), ((jint)arg2_), _obArg3));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool addAll_IMPL_38223(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31904
bool Android_java_util_List::addAll_IMPL_38223(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::addAll_38223_ID(),"java/util/List","addAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.List.addAll could not be cached",64);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::addAll_38223_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_38224(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31907
void Android_java_util_List::clear_IMPL_38224(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::clear_38224_ID(),"java/util/List","clear","()V",GetMethodID,"Id for fallback method java.util.List.clear could not be cached",63);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_List::clear_38224_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool contains_IMPL_38225(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31910
bool Android_java_util_List::contains_IMPL_38225(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::contains_38225_ID(),"java/util/List","contains","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.List.contains could not be cached",66);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::contains_38225_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool containsAll_IMPL_38226(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31913
bool Android_java_util_List::containsAll_IMPL_38226(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::containsAll_38226_ID(),"java/util/List","containsAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.List.containsAll could not be cached",69);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::containsAll_38226_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool equals_IMPL_38227(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31916
bool Android_java_util_List::equals_IMPL_38227(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::equals_38227_ID(),"java/util/List","equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.List.equals could not be cached",64);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::equals_38227_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper get_IMPL_38228(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :31919
uObject* Android_java_util_List::get_IMPL_38228(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::get_38228_ID(),"java/util/List","get","(I)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.List.get could not be cached",61);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::get_38228_ID(), ((jint)arg2_)),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_38229(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31922
int Android_java_util_List::hashCode_IMPL_38229(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::hashCode_38229_ID(),"java/util/List","hashCode","()I",GetMethodID,"Id for fallback method java.util.List.hashCode could not be cached",66);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_List::hashCode_38229_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int indexOf_IMPL_38230(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31925
int Android_java_util_List::indexOf_IMPL_38230(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::indexOf_38230_ID(),"java/util/List","indexOf","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method java.util.List.indexOf could not be cached",65);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_List::indexOf_38230_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isEmpty_IMPL_38231(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31928
bool Android_java_util_List::isEmpty_IMPL_38231(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::isEmpty_38231_ID(),"java/util/List","isEmpty","()Z",GetMethodID,"Id for fallback method java.util.List.isEmpty could not be cached",65);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::isEmpty_38231_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_38232(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31931
uObject* Android_java_util_List::iterator_IMPL_38232(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::iterator_38232_ID(),"java/util/List","iterator","()Ljava/util/Iterator;",GetMethodID,"Id for fallback method java.util.List.iterator could not be cached",66);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::iterator_38232_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int lastIndexOf_IMPL_38233(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31934
int Android_java_util_List::lastIndexOf_IMPL_38233(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::lastIndexOf_38233_ID(),"java/util/List","lastIndexOf","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method java.util.List.lastIndexOf could not be cached",69);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_List::lastIndexOf_38233_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_38234(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31937
uObject* Android_java_util_List::listIterator_IMPL_38234(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::listIterator_38234_ID(),"java/util/List","listIterator","()Ljava/util/ListIterator;",GetMethodID,"Id for fallback method java.util.List.listIterator could not be cached",70);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::listIterator_38234_ID()),result,::g::Android::Fallbacks::Android_java_util_ListIterator_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_38235(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :31940
uObject* Android_java_util_List::listIterator_IMPL_38235(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::listIterator_38235_ID(),"java/util/List","listIterator","(I)Ljava/util/ListIterator;",GetMethodID,"Id for fallback method java.util.List.listIterator could not be cached",70);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::listIterator_38235_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_java_util_ListIterator_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper remove_IMPL_38236(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :31943
uObject* Android_java_util_List::remove_IMPL_38236(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::remove_38236_ID(),"java/util/List","remove","(I)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.List.remove could not be cached",64);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::remove_38236_ID(), ((jint)arg2_)),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool remove_IMPL_38237(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31946
bool Android_java_util_List::remove_IMPL_38237(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::remove_38237_ID(),"java/util/List","remove","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.List.remove could not be cached",64);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::remove_38237_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool removeAll_IMPL_38238(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31949
bool Android_java_util_List::removeAll_IMPL_38238(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::removeAll_38238_ID(),"java/util/List","removeAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.List.removeAll could not be cached",67);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::removeAll_38238_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool retainAll_IMPL_38239(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31952
bool Android_java_util_List::retainAll_IMPL_38239(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::retainAll_38239_ID(),"java/util/List","retainAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.List.retainAll could not be cached",67);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::retainAll_38239_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper set_IMPL_38240(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :31955
uObject* Android_java_util_List::set_IMPL_38240(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::set_38240_ID(),"java/util/List","set","(ILjava/lang/Object;)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.List.set could not be cached",61);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::set_38240_ID(), ((jint)arg2_), _obArg3),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int size_IMPL_38241(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31958
int Android_java_util_List::size_IMPL_38241(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::size_38241_ID(),"java/util/List","size","()I",GetMethodID,"Id for fallback method java.util.List.size could not be cached",62);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_List::size_38241_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper subList_IMPL_38242(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :31961
uObject* Android_java_util_List::subList_IMPL_38242(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::subList_38242_ID(),"java/util/List","subList","(II)Ljava/util/List;",GetMethodID,"Id for fallback method java.util.List.subList could not be cached",65);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::subList_38242_ID(), ((jint)arg2_), ((jint)arg3_)),result,Android_java_util_List_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_38243(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31964
uObject* Android_java_util_List::toArray_IMPL_38243(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::toArray_38243_ID(),"java/util/List","toArray","()[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.List.toArray could not be cached",65);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::toArray_38243_ID()),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_38244(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31967
uObject* Android_java_util_List::toArray_IMPL_38244(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::toArray_38244_ID(),"java/util/List","toArray","([Ljava/lang/Object;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.List.toArray could not be cached",65);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::toArray_38244_ID(), _obArg2),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(31983)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_java_util_ListIterator :31983
// {
Android_java_util_ListIterator_type* Android_java_util_ListIterator_typeof()
{
    static uSStrong<Android_java_util_ListIterator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Android_java_util_ListIterator);
    options.TypeSize = sizeof(Android_java_util_ListIterator_type);
    type = (Android_java_util_ListIterator_type*)uClassType::New("Android.Fallbacks.Android_java_util_ListIterator", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*))Android_java_util_ListIterator__add_fn;
    type->interface2.fp_hasNext = (void(*)(uObject*, bool*))Android_java_util_ListIterator__hasNext_fn;
    type->interface2.fp_hasPrevious = (void(*)(uObject*, bool*))Android_java_util_ListIterator__hasPrevious_fn;
    type->interface2.fp_next = (void(*)(uObject*, ::g::Android::java::lang::Object**))Android_java_util_ListIterator__next_fn;
    type->interface2.fp_nextIndex = (void(*)(uObject*, int*))Android_java_util_ListIterator__nextIndex_fn;
    type->interface2.fp_previous = (void(*)(uObject*, ::g::Android::java::lang::Object**))Android_java_util_ListIterator__previous_fn;
    type->interface2.fp_previousIndex = (void(*)(uObject*, int*))Android_java_util_ListIterator__previousIndex_fn;
    type->interface2.fp_remove = (void(*)(uObject*))Android_java_util_ListIterator__remove_fn;
    type->interface2.fp_set = (void(*)(uObject*, ::g::Android::java::lang::Object*))Android_java_util_ListIterator__set_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_hasNext = (void(*)(uObject*, bool*))Android_java_util_ListIterator__hasNext_fn;
    type->interface3.fp_next = (void(*)(uObject*, ::g::Android::java::lang::Object**))Android_java_util_ListIterator__next_fn;
    type->interface3.fp_remove = (void(*)(uObject*))Android_java_util_ListIterator__remove_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::Object_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_util_ListIterator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_util_ListIterator_type, interface1),
        ::g::Android::java::util::ListIterator_typeof(), offsetof(Android_java_util_ListIterator_type, interface2),
        ::g::Android::java::util::Iterator_typeof(), offsetof(Android_java_util_ListIterator_type, interface3));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::add_38245_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::hasNext_38246_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::hasPrevious_38247_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::next_38248_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::nextIndex_38249_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::previous_38250_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::previousIndex_38251_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::remove_38252_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::set_38253_ID_, uFieldFlagsStatic);
    return type;
}

// public void add(Android.java.lang.Object arg0) :31986
void Android_java_util_ListIterator__add_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object* arg0)
{
    __this->add(arg0);
}

// public static extern void add_IMPL_38245(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :32033
void Android_java_util_ListIterator__add_IMPL_38245_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_java_util_ListIterator::add_IMPL_38245(*arg0_, *arg1_, arg2_);
}

// public bool hasNext() :31991
void Android_java_util_ListIterator__hasNext_fn(Android_java_util_ListIterator* __this, bool* __retval)
{
    *__retval = __this->hasNext();
}

// public static extern bool hasNext_IMPL_38246(bool arg0, Android.Base.Primitives.ujobject arg1) :32036
void Android_java_util_ListIterator__hasNext_IMPL_38246_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_java_util_ListIterator::hasNext_IMPL_38246(*arg0_, *arg1_);
}

// public bool hasPrevious() :31996
void Android_java_util_ListIterator__hasPrevious_fn(Android_java_util_ListIterator* __this, bool* __retval)
{
    *__retval = __this->hasPrevious();
}

// public static extern bool hasPrevious_IMPL_38247(bool arg0, Android.Base.Primitives.ujobject arg1) :32039
void Android_java_util_ListIterator__hasPrevious_IMPL_38247_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_java_util_ListIterator::hasPrevious_IMPL_38247(*arg0_, *arg1_);
}

// public Android.java.lang.Object next() :32001
void Android_java_util_ListIterator__next_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->next();
}

// public static extern Android.Base.Wrappers.IJWrapper next_IMPL_38248(bool arg0, Android.Base.Primitives.ujobject arg1) :32042
void Android_java_util_ListIterator__next_IMPL_38248_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_ListIterator::next_IMPL_38248(*arg0_, *arg1_);
}

// public int nextIndex() :32006
void Android_java_util_ListIterator__nextIndex_fn(Android_java_util_ListIterator* __this, int* __retval)
{
    *__retval = __this->nextIndex();
}

// public static extern int nextIndex_IMPL_38249(bool arg0, Android.Base.Primitives.ujobject arg1) :32045
void Android_java_util_ListIterator__nextIndex_IMPL_38249_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_ListIterator::nextIndex_IMPL_38249(*arg0_, *arg1_);
}

// public Android.java.lang.Object previous() :32011
void Android_java_util_ListIterator__previous_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->previous();
}

// public static extern Android.Base.Wrappers.IJWrapper previous_IMPL_38250(bool arg0, Android.Base.Primitives.ujobject arg1) :32048
void Android_java_util_ListIterator__previous_IMPL_38250_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_ListIterator::previous_IMPL_38250(*arg0_, *arg1_);
}

// public int previousIndex() :32016
void Android_java_util_ListIterator__previousIndex_fn(Android_java_util_ListIterator* __this, int* __retval)
{
    *__retval = __this->previousIndex();
}

// public static extern int previousIndex_IMPL_38251(bool arg0, Android.Base.Primitives.ujobject arg1) :32051
void Android_java_util_ListIterator__previousIndex_IMPL_38251_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_ListIterator::previousIndex_IMPL_38251(*arg0_, *arg1_);
}

// public void remove() :32021
void Android_java_util_ListIterator__remove_fn(Android_java_util_ListIterator* __this)
{
    __this->remove();
}

// public static extern void remove_IMPL_38252(bool arg0, Android.Base.Primitives.ujobject arg1) :32054
void Android_java_util_ListIterator__remove_IMPL_38252_fn(bool* arg0_, jobject* arg1_)
{
    Android_java_util_ListIterator::remove_IMPL_38252(*arg0_, *arg1_);
}

// public void set(Android.java.lang.Object arg0) :32026
void Android_java_util_ListIterator__set_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object* arg0)
{
    __this->set(arg0);
}

// public static extern void set_IMPL_38253(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :32057
void Android_java_util_ListIterator__set_IMPL_38253_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_java_util_ListIterator::set_IMPL_38253(*arg0_, *arg1_, arg2_);
}

jmethodID Android_java_util_ListIterator::add_38245_ID_;
jmethodID Android_java_util_ListIterator::hasNext_38246_ID_;
jmethodID Android_java_util_ListIterator::hasPrevious_38247_ID_;
jmethodID Android_java_util_ListIterator::next_38248_ID_;
jmethodID Android_java_util_ListIterator::nextIndex_38249_ID_;
jmethodID Android_java_util_ListIterator::previous_38250_ID_;
jmethodID Android_java_util_ListIterator::previousIndex_38251_ID_;
jmethodID Android_java_util_ListIterator::remove_38252_ID_;
jmethodID Android_java_util_ListIterator::set_38253_ID_;

// public void add(Android.java.lang.Object arg0) [instance] :31986
void Android_java_util_ListIterator::add(::g::Android::java::lang::Object* arg0)
{
    Android_java_util_ListIterator::add_IMPL_38245(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool hasNext() [instance] :31991
bool Android_java_util_ListIterator::hasNext()
{
    return Android_java_util_ListIterator::hasNext_IMPL_38246(_subclassed, _javaObject);
}

// public bool hasPrevious() [instance] :31996
bool Android_java_util_ListIterator::hasPrevious()
{
    return Android_java_util_ListIterator::hasPrevious_IMPL_38247(_subclassed, _javaObject);
}

// public Android.java.lang.Object next() [instance] :32001
::g::Android::java::lang::Object* Android_java_util_ListIterator::next()
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_ListIterator::next_IMPL_38248(_subclassed, _javaObject), ::TYPES[3/*Android.java.lang.Object*/]);
}

// public int nextIndex() [instance] :32006
int Android_java_util_ListIterator::nextIndex()
{
    return Android_java_util_ListIterator::nextIndex_IMPL_38249(_subclassed, _javaObject);
}

// public Android.java.lang.Object previous() [instance] :32011
::g::Android::java::lang::Object* Android_java_util_ListIterator::previous()
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_ListIterator::previous_IMPL_38250(_subclassed, _javaObject), ::TYPES[3/*Android.java.lang.Object*/]);
}

// public int previousIndex() [instance] :32016
int Android_java_util_ListIterator::previousIndex()
{
    return Android_java_util_ListIterator::previousIndex_IMPL_38251(_subclassed, _javaObject);
}

// public void remove() [instance] :32021
void Android_java_util_ListIterator::remove()
{
    Android_java_util_ListIterator::remove_IMPL_38252(_subclassed, _javaObject);
}

// public void set(Android.java.lang.Object arg0) [instance] :32026
void Android_java_util_ListIterator::set(::g::Android::java::lang::Object* arg0)
{
    Android_java_util_ListIterator::set_IMPL_38253(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern void add_IMPL_38245(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :32033
void Android_java_util_ListIterator::add_IMPL_38245(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::add_38245_ID(),"java/util/ListIterator","add","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.ListIterator.add could not be cached",69);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_ListIterator::add_38245_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool hasNext_IMPL_38246(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32036
bool Android_java_util_ListIterator::hasNext_IMPL_38246(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::hasNext_38246_ID(),"java/util/ListIterator","hasNext","()Z",GetMethodID,"Id for fallback method java.util.ListIterator.hasNext could not be cached",73);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_ListIterator::hasNext_38246_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool hasPrevious_IMPL_38247(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32039
bool Android_java_util_ListIterator::hasPrevious_IMPL_38247(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::hasPrevious_38247_ID(),"java/util/ListIterator","hasPrevious","()Z",GetMethodID,"Id for fallback method java.util.ListIterator.hasPrevious could not be cached",77);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_ListIterator::hasPrevious_38247_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper next_IMPL_38248(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32042
uObject* Android_java_util_ListIterator::next_IMPL_38248(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::next_38248_ID(),"java/util/ListIterator","next","()Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.ListIterator.next could not be cached",70);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_ListIterator::next_38248_ID()),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int nextIndex_IMPL_38249(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32045
int Android_java_util_ListIterator::nextIndex_IMPL_38249(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::nextIndex_38249_ID(),"java/util/ListIterator","nextIndex","()I",GetMethodID,"Id for fallback method java.util.ListIterator.nextIndex could not be cached",75);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_ListIterator::nextIndex_38249_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper previous_IMPL_38250(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32048
uObject* Android_java_util_ListIterator::previous_IMPL_38250(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::previous_38250_ID(),"java/util/ListIterator","previous","()Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.ListIterator.previous could not be cached",74);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_ListIterator::previous_38250_ID()),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int previousIndex_IMPL_38251(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32051
int Android_java_util_ListIterator::previousIndex_IMPL_38251(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::previousIndex_38251_ID(),"java/util/ListIterator","previousIndex","()I",GetMethodID,"Id for fallback method java.util.ListIterator.previousIndex could not be cached",79);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_ListIterator::previousIndex_38251_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void remove_IMPL_38252(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32054
void Android_java_util_ListIterator::remove_IMPL_38252(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::remove_38252_ID(),"java/util/ListIterator","remove","()V",GetMethodID,"Id for fallback method java.util.ListIterator.remove could not be cached",72);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_ListIterator::remove_38252_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void set_IMPL_38253(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :32057
void Android_java_util_ListIterator::set_IMPL_38253(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::set_38253_ID(),"java/util/ListIterator","set","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.ListIterator.set could not be cached",69);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_ListIterator::set_38253_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/Fallbacks/$.uno(32859)
// -----------------------------------------------------------------------------------------------

// public sealed extern class Android_java_util_Observer :32859
// {
Android_java_util_Observer_type* Android_java_util_Observer_typeof()
{
    static uSStrong<Android_java_util_Observer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_java_util_Observer);
    options.TypeSize = sizeof(Android_java_util_Observer_type);
    type = (Android_java_util_Observer_type*)uClassType::New("Android.Fallbacks.Android_java_util_Observer", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_update = (void(*)(uObject*, ::g::Android::java::util::Observable*, ::g::Android::java::lang::Object*))Android_java_util_Observer__update_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_util_Observer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_util_Observer_type, interface1),
        ::g::Android::java::util::Observer_typeof(), offsetof(Android_java_util_Observer_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Observer::update_38392_ID_, uFieldFlagsStatic);
    return type;
}

// public void update(Android.java.util.Observable arg0, Android.java.lang.Object arg1) :32862
void Android_java_util_Observer__update_fn(Android_java_util_Observer* __this, ::g::Android::java::util::Observable* arg0, ::g::Android::java::lang::Object* arg1)
{
    __this->update(arg0, arg1);
}

// public static extern void update_IMPL_38392(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :32869
void Android_java_util_Observer__update_IMPL_38392_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    Android_java_util_Observer::update_IMPL_38392(*arg0_, *arg1_, arg2_, arg3_);
}

jmethodID Android_java_util_Observer::update_38392_ID_;

// public void update(Android.java.util.Observable arg0, Android.java.lang.Object arg1) [instance] :32862
void Android_java_util_Observer::update(::g::Android::java::util::Observable* arg0, ::g::Android::java::lang::Object* arg1)
{
    Android_java_util_Observer::update_IMPL_38392(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public static extern void update_IMPL_38392(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :32869
void Android_java_util_Observer::update_IMPL_38392(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Observer::update_38392_ID(),"java/util/Observer","update","(Ljava/util/Observable;Ljava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.Observer.update could not be cached",68);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_Observer::update_38392_ID(), _obArg2, _obArg3);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

}}} // ::g::Android::Fallbacks
