// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.24.6/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct Statistics;}}}

namespace g{
namespace Fuse{
namespace Internal{

// public static class Statistics :574
// {
uClassType* Statistics_typeof();
void Statistics__ContinuousFilterAlpha_fn(float* elapsed, float* period, float* __retval);

struct Statistics : uObject
{
    static float ContinuousFilterAlpha(float elapsed, float period);
};
// }

}}} // ::g::Fuse::Internal
