// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct GC;}}

namespace g{
namespace Uno{

// public static class GC :2618
// {
uClassType* GC_typeof();
void GC__SuppressFinalize_fn(uObject* obj);

struct GC : uObject
{
    static void SuppressFinalize(uObject* obj);
};
// }

}} // ::g::Uno
