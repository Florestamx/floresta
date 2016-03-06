// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Fuse{namespace Android{struct AndroidExtensions;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Android{

// internal static extern class AndroidExtensions :253
// {
uClassType* AndroidExtensions_typeof();
void AndroidExtensions__ToRect_fn(::g::Android::android::graphics::Rect* r, ::g::Uno::Rect* __retval);

struct AndroidExtensions : uObject
{
    static ::g::Uno::Rect ToRect(::g::Android::android::graphics::Rect* r);
};
// }

}}} // ::g::Fuse::Android
