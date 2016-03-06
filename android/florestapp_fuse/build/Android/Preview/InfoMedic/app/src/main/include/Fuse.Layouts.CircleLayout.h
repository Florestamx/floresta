// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct CircleLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class CircleLayout :8
// {
::g::Fuse::Layouts::Layout_type* CircleLayout_typeof();
void CircleLayout__ctor_1_fn(CircleLayout* __this);
void CircleLayout__ArrangePaddingBox_fn(CircleLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void CircleLayout__get_EndAngleDegrees_fn(CircleLayout* __this, float* __retval);
void CircleLayout__set_EndAngleDegrees_fn(CircleLayout* __this, float* value);
void CircleLayout__GetContentSize_fn(CircleLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void CircleLayout__get_ItemSpacingDegrees_fn(CircleLayout* __this, float* __retval);
void CircleLayout__set_ItemSpacingDegrees_fn(CircleLayout* __this, float* value);
void CircleLayout__New1_fn(CircleLayout** __retval);
void CircleLayout__get_Radius_fn(CircleLayout* __this, float* __retval);
void CircleLayout__set_Radius_fn(CircleLayout* __this, float* value);
void CircleLayout__get_StartAngleDegrees_fn(CircleLayout* __this, float* __retval);
void CircleLayout__set_StartAngleDegrees_fn(CircleLayout* __this, float* value);

struct CircleLayout : ::g::Fuse::Layouts::Layout
{
    float _endAngle;
    float _itemSpacing;
    float _radius;
    float _startAngle;

    void ctor_1();
    float EndAngleDegrees();
    void EndAngleDegrees(float value);
    float ItemSpacingDegrees();
    void ItemSpacingDegrees(float value);
    float Radius();
    void Radius(float value);
    float StartAngleDegrees();
    void StartAngleDegrees(float value);
    static CircleLayout* New1();
};
// }

}}} // ::g::Fuse::Layouts
