// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.24.7\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Resources{

// internal abstract interface ISoftDisposable :231
// {
uInterfaceType* ISoftDisposable_typeof();

struct ISoftDisposable
{
    void(*fp_SoftDispose)(uObject*);
    static void SoftDispose(const uInterface& __this) { __this.VTable<ISoftDisposable>()->fp_SoftDispose(__this); }
};
// }

}}} // ::g::Fuse::Resources
