// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public static class Dispatcher :708
// {
uClassType* Dispatcher_typeof();
void Dispatcher__get_UIThread_fn(uObject** __retval);

struct Dispatcher : uObject
{
    static uSStrong<uObject*> _uiThread_;
    static uSStrong<uObject*>& _uiThread() { return _uiThread_; }

    static uObject* UIThread();
};
// }

}}} // ::g::Fuse::Reactive
