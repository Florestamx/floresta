// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/FuseJS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Email;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Email :340
// {
uType* Email_typeof();
void Email__Compose_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Email__CreateModule_fn(uObject** __retval);

struct Email : uObject
{
    static uObject* Compose(::g::Fuse::Scripting::Context* context, uArray* args);
    static uObject* CreateModule();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
