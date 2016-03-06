// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct RangeAnimation;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class RangeAnimation :377
// {
::g::Fuse::Triggers::Trigger_type* RangeAnimation_typeof();
void RangeAnimation__ctor_2_fn(RangeAnimation* __this);
void RangeAnimation__get_Maximum_fn(RangeAnimation* __this, float* __retval);
void RangeAnimation__set_Maximum_fn(RangeAnimation* __this, float* value);
void RangeAnimation__get_Minimum_fn(RangeAnimation* __this, float* __retval);
void RangeAnimation__set_Minimum_fn(RangeAnimation* __this, float* value);
void RangeAnimation__New1_fn(RangeAnimation** __retval);
void RangeAnimation__OnRooted_fn(RangeAnimation* __this, ::g::Fuse::Node* parentNode);
void RangeAnimation__Update_fn(RangeAnimation* __this);
void RangeAnimation__get_Value_fn(RangeAnimation* __this, float* __retval);
void RangeAnimation__set_Value_fn(RangeAnimation* __this, float* value);

struct RangeAnimation : ::g::Fuse::Triggers::Trigger
{
    double _prevValue;
    double _value;
    float _Maximum;
    float _Minimum;

    void ctor_2();
    float Maximum();
    void Maximum(float value);
    float Minimum();
    void Minimum(float value);
    void Update();
    float Value();
    void Value(float value);
    static RangeAnimation* New1();
};
// }

}}} // ::g::Fuse::Triggers
