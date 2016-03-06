// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.24.6/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.Bool.h>
#include <Uno.UX.ValueChangedArgs-1.h>
namespace g{namespace Fuse{namespace Scripting{struct BoolChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class BoolChangedArgs :133
// {
struct BoolChangedArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

BoolChangedArgs_type* BoolChangedArgs_typeof();
void BoolChangedArgs__ctor_3_fn(BoolChangedArgs* __this, bool* value, uObject* origin);
void BoolChangedArgs__FuseScriptingIScriptEventSerialize_fn(BoolChangedArgs* __this, uObject* s);
void BoolChangedArgs__New4_fn(bool* value, uObject* origin, BoolChangedArgs** __retval);

struct BoolChangedArgs : ::g::Uno::UX::ValueChangedArgs
{
    void ctor_3(bool value, uObject* origin);
    static BoolChangedArgs* New4(bool value, uObject* origin);
};
// }

}}} // ::g::Fuse::Scripting
