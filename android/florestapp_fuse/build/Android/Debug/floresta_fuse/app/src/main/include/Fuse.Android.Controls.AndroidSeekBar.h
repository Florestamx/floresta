// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.24.6/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.SeekBar.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct AndroidSeekBar;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal sealed extern class AndroidSeekBar :1264
// {
::g::Android::android::view::View_type* AndroidSeekBar_typeof();
void AndroidSeekBar__ctor_21_fn(AndroidSeekBar* __this, ::g::Android::android::content::Context* arg0, uDelegate* touchCallback);
void AndroidSeekBar__New17_fn(::g::Android::android::content::Context* arg0, uDelegate* touchCallback, AndroidSeekBar** __retval);
void AndroidSeekBar__onTouchEvent_fn(AndroidSeekBar* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval);

struct AndroidSeekBar : ::g::Android::android::widget::SeekBar
{
    static jclass _javaClass6_;
    static jclass& _javaClass6() { return _javaClass6_; }
    uStrong<uDelegate*> _touchCallback;

    void ctor_21(::g::Android::android::content::Context* arg0, uDelegate* touchCallback);
    static AndroidSeekBar* New17(::g::Android::android::content::Context* arg0, uDelegate* touchCallback);
};
// }

}}}} // ::g::Fuse::Android::Controls