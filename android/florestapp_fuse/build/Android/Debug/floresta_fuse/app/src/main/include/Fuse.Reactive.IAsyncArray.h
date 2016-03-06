// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IAsyncArray :1147
// {
uInterfaceType* IAsyncArray_typeof();

struct IAsyncArray
{
    void(*fp_Enum)(uObject*, uObject*, uDelegate*);
    static void Enum(const uInterface& __this, uObject* thread, uDelegate* callback) { __this.VTable<IAsyncArray>()->fp_Enum(__this, thread, callback); }
};
// }

}}} // ::g::Fuse::Reactive
