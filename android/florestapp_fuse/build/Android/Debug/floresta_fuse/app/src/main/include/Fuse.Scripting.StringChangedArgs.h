// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.24.6/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
namespace g{namespace Fuse{namespace Scripting{struct StringChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class StringChangedArgs :111
// {
struct StringChangedArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

StringChangedArgs_type* StringChangedArgs_typeof();
void StringChangedArgs__ctor_3_fn(StringChangedArgs* __this, uString* newValue, uObject* origin);
void StringChangedArgs__FuseScriptingIScriptEventSerialize_fn(StringChangedArgs* __this, uObject* s);
void StringChangedArgs__New4_fn(uString* newValue, uObject* origin, StringChangedArgs** __retval);

struct StringChangedArgs : ::g::Uno::UX::ValueChangedArgs
{
    void ctor_3(uString* newValue, uObject* origin);
    static StringChangedArgs* New4(uString* newValue, uObject* origin);
};
// }

}}} // ::g::Fuse::Scripting
