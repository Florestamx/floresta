// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.24.6/Brushes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.StaticBrush.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Drawing{struct StaticSolidColor;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class StaticSolidColor :353
// {
::g::Fuse::Drawing::Brush_type* StaticSolidColor_typeof();
void StaticSolidColor__get_Color_fn(StaticSolidColor* __this, ::g::Uno::Float4* __retval);
void StaticSolidColor__get_IsCompletelyTransparent_fn(StaticSolidColor* __this, bool* __retval);

struct StaticSolidColor : ::g::Fuse::Drawing::StaticBrush
{
    ::g::Uno::Float4 _color;

    ::g::Uno::Float4 Color();
};
// }

}}} // ::g::Fuse::Drawing
