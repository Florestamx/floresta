// This file was generated based on '/usr/local/share/uno/Packages/Android/0.24.0/Android/android/os/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace os{

// public abstract extern interface IBinderDLRDeathRecipient :11362
// {
uInterfaceType* IBinderDLRDeathRecipient_typeof();

struct IBinderDLRDeathRecipient
{
    void(*fp_binderDied)(uObject*);
    static void binderDied(const uInterface& __this) { __this.VTable<IBinderDLRDeathRecipient>()->fp_binderDied(__this); }
};
// }

}}}} // ::g::Android::android::os
