// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct AsyncFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct ScriptEventArgs;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class AsyncFunction :80
// {
uType* AsyncFunction_typeof();
void AsyncFunction__ctor__fn(AsyncFunction* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func);
void AsyncFunction__Call_fn(AsyncFunction* __this, ::g::Fuse::Reactive::ScriptEventArgs* args);
void AsyncFunction__Equals_fn(AsyncFunction* __this, uObject* obj, bool* __retval);
void AsyncFunction__GetHashCode_fn(AsyncFunction* __this, int* __retval);
void AsyncFunction__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func, AsyncFunction** __retval);

struct AsyncFunction : uObject
{
    uStrong< ::g::Fuse::Scripting::Function*> _function;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func);
    void Call(::g::Fuse::Reactive::ScriptEventArgs* args);
    static AsyncFunction* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func);
};
// }

}}} // ::g::Fuse::Reactive
