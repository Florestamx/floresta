// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollPositionChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class ScrollPositionChangedArgs :3127
// {
uType* ScrollPositionChangedArgs_typeof();
void ScrollPositionChangedArgs__ctor_1_fn(ScrollPositionChangedArgs* __this, uObject* origin);
void ScrollPositionChangedArgs__New2_fn(uObject* origin, ScrollPositionChangedArgs** __retval);
void ScrollPositionChangedArgs__get_Origin_fn(ScrollPositionChangedArgs* __this, uObject** __retval);
void ScrollPositionChangedArgs__set_Origin_fn(ScrollPositionChangedArgs* __this, uObject* value);

struct ScrollPositionChangedArgs : ::g::Uno::EventArgs
{
    uStrong<uObject*> _Origin;

    void ctor_1(uObject* origin);
    uObject* Origin();
    void Origin(uObject* value);
    static ScrollPositionChangedArgs* New2(uObject* origin);
};
// }

}}} // ::g::Fuse::Controls
