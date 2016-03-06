// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/FuseJS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Builtins;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Builtins :8
// {
uType* Builtins_typeof();
void Builtins__ctor__fn(Builtins* __this, ::g::Fuse::Scripting::Context* context);
void Builtins__New1_fn(::g::Fuse::Scripting::Context* context, Builtins** __retval);
void Builtins__Register_fn(uString* moduleId, uObject* module);

struct Builtins : uObject
{
    uStrong< ::g::Fuse::Scripting::Function*> Observable;
    uStrong< ::g::Fuse::Scripting::Function*> SubscriberProxy;

    void ctor_(::g::Fuse::Scripting::Context* context);
    static Builtins* New1(::g::Fuse::Scripting::Context* context);
    static void Register(uString* moduleId, uObject* module);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
