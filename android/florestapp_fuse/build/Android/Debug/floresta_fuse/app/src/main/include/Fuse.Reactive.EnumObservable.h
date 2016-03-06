// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct EnumObservable;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class EnumObservable :2079
// {
uType* EnumObservable_typeof();
void EnumObservable__ctor__fn(EnumObservable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, uObject* thread, uDelegate* callback);
void EnumObservable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, uObject* thread, uDelegate* callback, EnumObservable** __retval);
void EnumObservable__Run_fn(EnumObservable* __this);

struct EnumObservable : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Fuse::Scripting::Object*> _observable;
    uStrong<uObject*> _thread;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, uObject* thread, uDelegate* callback);
    void Run();
    static EnumObservable* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, uObject* thread, uDelegate* callback);
};
// }

}}} // ::g::Fuse::Reactive
