// This file was generated based on '/usr/local/share/uno/Packages/Android/0.24.0/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.TextView.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct Button;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class Button :5641
// {
::g::Android::android::widget::TextView_type* Button_typeof();
void Button__ctor_13_fn(Button* __this, ::g::Android::android::content::Context* arg0);
void Button__ctor_16_fn(Button* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Button___Init4_fn();
void Button__New13_fn(::g::Android::android::content::Context* arg0, Button** __retval);

struct Button : ::g::Android::android::widget::TextView
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID Button_24840_ID_c_;
    static jmethodID& Button_24840_ID_c() { return Button_24840_ID_c_; }

    void ctor_13(::g::Android::android::content::Context* arg0);
    void ctor_16(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void _Init4();
    static Button* New13(::g::Android::android::content::Context* arg0);
};
// }

}}}} // ::g::Android::android::widget
