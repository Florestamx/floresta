// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Testing{

// public abstract interface IRunner :775
// {
uInterfaceType* IRunner_typeof();

struct IRunner
{
    void(*fp_Update)(uObject*);
    static void Update(const uInterface& __this) { __this.VTable<IRunner>()->fp_Update(__this); }
};
// }

}}} // ::g::Uno::Testing
