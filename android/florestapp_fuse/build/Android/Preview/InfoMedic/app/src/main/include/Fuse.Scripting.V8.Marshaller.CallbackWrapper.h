// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct UniqueValueVector;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Value;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Marshaller__CallbackWrapper;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// private sealed class Marshaller.CallbackWrapper :160
// {
uType* Marshaller__CallbackWrapper_typeof();
void Marshaller__CallbackWrapper__ctor__fn(Marshaller__CallbackWrapper* __this, uDelegate* callback);
void Marshaller__CallbackWrapper__Call_fn(Marshaller__CallbackWrapper* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void Marshaller__CallbackWrapper__New1_fn(uDelegate* callback, Marshaller__CallbackWrapper** __retval);

struct Marshaller__CallbackWrapper : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(uDelegate* callback);
    ::g::Fuse::Scripting::V8::Simple::Value* Call(::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args);
    static Marshaller__CallbackWrapper* New1(uDelegate* callback);
};
// }

}}}} // ::g::Fuse::Scripting::V8
