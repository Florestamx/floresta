// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IAsyncArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct ObservableSubscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class Observable :1974
// {
struct Observable_type : uType
{
    ::g::Fuse::Reactive::IAsyncArray interface0;
};

Observable_type* Observable_typeof();
void Observable__ctor__fn(Observable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* thread);
void Observable__Enum_fn(Observable* __this, uObject* thread, uDelegate* callback);
void Observable__Equals_fn(Observable* __this, uObject* obj, bool* __retval);
void Observable__GetHashCode_fn(Observable* __this, int* __retval);
void Observable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* thread, Observable** __retval);
void Observable__Subscribe_fn(Observable* __this, uObject* observer, ::g::Fuse::Reactive::ObservableSubscription** __retval);

struct Observable : uObject
{
    uStrong< ::g::Fuse::Scripting::Object*> Object;
    uStrong<uObject*> Thread;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> Worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* thread);
    void Enum(uObject* thread, uDelegate* callback);
    ::g::Fuse::Reactive::ObservableSubscription* Subscribe(uObject* observer);
    static Observable* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* thread);
};
// }

}}} // ::g::Fuse::Reactive
