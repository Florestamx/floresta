// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Builtins;}}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ThreadWorker :2450
// {
struct ThreadWorker_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Uno::Threading::IDispatcher interface1;
};

ThreadWorker_type* ThreadWorker_typeof();
void ThreadWorker__ctor__fn(ThreadWorker* __this);
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this);
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__CreateContext_fn(uObject* ownerThread, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__Dispose_fn(ThreadWorker* __this);
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval);
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action);
void ThreadWorker__get_IsOnWorkerThread_fn(ThreadWorker* __this, bool* __retval);
void ThreadWorker__New1_fn(ThreadWorker** __retval);
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args);
void ThreadWorker__Run_fn(ThreadWorker* __this);

struct ThreadWorker : uObject
{
    static uSStrong< ::g::Fuse::Scripting::Context*> _context_;
    static uSStrong< ::g::Fuse::Scripting::Context*>& _context() { return _context_; }
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _exceptionQueue;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> _fuseJS_;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*>& _fuseJS() { return _fuseJS_; }
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _queue;
    bool _terminate;
    uStrong< ::g::Uno::Threading::Thread*> _thread;
    uStrong< ::g::Uno::Threading::Mutex*> Mutex;

    void ctor_();
    void CheckAndThrow();
    ::g::Fuse::Scripting::Context* Context();
    void Dispose();
    ::g::Fuse::Reactive::FuseJS::Builtins* FuseJS();
    void Invoke(uDelegate* action);
    bool IsOnWorkerThread();
    void OnClosing(uObject* sender, ::g::Uno::EventArgs* args);
    void Run();
    static ::g::Fuse::Scripting::Context* CreateContext(uObject* ownerThread);
    static ThreadWorker* New1();
};
// }

}}} // ::g::Fuse::Reactive
