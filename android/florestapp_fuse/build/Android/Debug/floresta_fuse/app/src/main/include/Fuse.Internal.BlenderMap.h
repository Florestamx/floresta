// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.24.6/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}
namespace g{namespace Fuse{namespace Internal{struct BlenderMap;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class BlenderMap :10
// {
uType* BlenderMap_typeof();
void BlenderMap__Get_fn(uType* __type, ::g::Fuse::Internal::Blender** __retval);

struct BlenderMap : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _blenders_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _blenders() { return BlenderMap_typeof()->Init(), _blenders_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _scalarBlenders_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _scalarBlenders() { return BlenderMap_typeof()->Init(), _scalarBlenders_; }

    static ::g::Fuse::Internal::Blender* Get(uType* __type);
};
// }

}}} // ::g::Fuse::Internal
