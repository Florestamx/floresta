// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.24.0\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ViewDLROnGenericMotionListener :27314
// {
uInterfaceType* ViewDLROnGenericMotionListener_typeof();

struct ViewDLROnGenericMotionListener
{
    void(*fp_onGenericMotion)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*);
    static bool onGenericMotion(const uInterface& __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::MotionEvent* arg1) { bool __retval; return __this.VTable<ViewDLROnGenericMotionListener>()->fp_onGenericMotion(__this, arg0, arg1, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view