// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher__UIThreadDispatcher;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Dispatcher.UIThreadDispatcher :710
// {
struct Dispatcher__UIThreadDispatcher_type : uType
{
    ::g::Uno::Threading::IDispatcher interface0;
};

Dispatcher__UIThreadDispatcher_type* Dispatcher__UIThreadDispatcher_typeof();
void Dispatcher__UIThreadDispatcher__ctor__fn(Dispatcher__UIThreadDispatcher* __this);
void Dispatcher__UIThreadDispatcher__Invoke_fn(Dispatcher__UIThreadDispatcher* __this, uDelegate* action);
void Dispatcher__UIThreadDispatcher__New1_fn(Dispatcher__UIThreadDispatcher** __retval);
void Dispatcher__UIThreadDispatcher__Run_fn(Dispatcher__UIThreadDispatcher* __this);

struct Dispatcher__UIThreadDispatcher : uObject
{
    uStrong< ::g::Uno::Collections::List*> _actions;
    uStrong< ::g::Uno::Threading::Mutex*> _mutex;

    void ctor_();
    void Invoke(uDelegate* action);
    void Run();
    static Dispatcher__UIThreadDispatcher* New1();
};
// }

}}} // ::g::Fuse::Reactive
