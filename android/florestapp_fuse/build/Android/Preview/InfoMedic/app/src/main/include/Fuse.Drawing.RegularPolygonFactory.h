// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Drawing{struct RegularPolygonFactory;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal static class RegularPolygonFactory :1427
// {
uClassType* RegularPolygonFactory_typeof();
void RegularPolygonFactory__AppendTo_fn(::g::Fuse::Drawing::PathGeometry* self, int* Sides, float* Radius, ::g::Fuse::Drawing::PathGeometry** __retval);

struct RegularPolygonFactory : uObject
{
    static ::g::Fuse::Drawing::PathGeometry* AppendTo(::g::Fuse::Drawing::PathGeometry* self, int Sides, float Radius);
};
// }

}}} // ::g::Fuse::Drawing
