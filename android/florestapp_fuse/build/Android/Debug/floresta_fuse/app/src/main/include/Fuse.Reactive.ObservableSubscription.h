// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ObservableSubscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ObservableSubscription :2010
// {
struct ObservableSubscription_type : uType
{
    ::g::Uno::IDisposable interface0;
};

ObservableSubscription_type* ObservableSubscription_typeof();
void ObservableSubscription__ctor__fn(ObservableSubscription* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, uObject* thread);
void ObservableSubscription__CallProxyMethod_fn(ObservableSubscription* __this, uString* method, uArray* args);
void ObservableSubscription__Dispose_fn(ObservableSubscription* __this);
void ObservableSubscription__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, uObject* thread, ObservableSubscription** __retval);
void ObservableSubscription__ObserveChange_fn(ObservableSubscription* __this, uArray* args, uObject** __retval);
void ObservableSubscription__SetExclusive_fn(ObservableSubscription* __this, uObject* newValue);
void ObservableSubscription__Subscribe_fn(ObservableSubscription* __this);

struct ObservableSubscription : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Fuse::Scripting::Object*> _observable;
    uStrong<uObject*> _observer;
    uStrong< ::g::Fuse::Scripting::Object*> _subscriberProxy;
    uStrong<uObject*> _thread;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, uObject* thread);
    void CallProxyMethod(uString* method, uArray* args);
    void Dispose();
    uObject* ObserveChange(uArray* args);
    void SetExclusive(uObject* newValue);
    void Subscribe();
    static ObservableSubscription* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, uObject* thread);
};
// }

}}} // ::g::Fuse::Reactive
