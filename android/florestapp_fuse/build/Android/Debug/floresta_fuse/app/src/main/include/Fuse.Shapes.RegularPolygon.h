// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Shapes.PathShape.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Shapes{struct RegularPolygon;}}}

namespace g{
namespace Fuse{
namespace Shapes{

// public sealed class RegularPolygon :620
// {
::g::Fuse::Shapes::PathShape_type* RegularPolygon_typeof();
void RegularPolygon__get_Radius_fn(RegularPolygon* __this, float* __retval);
void RegularPolygon__UpdatePath_fn(RegularPolygon* __this);

struct RegularPolygon : ::g::Fuse::Shapes::PathShape
{
    float _cachedRadius;
    int _cachedSides;
    int _sides;

    float Radius();
};
// }

}}} // ::g::Fuse::Shapes
