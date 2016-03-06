// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.24.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.Future-1.h>
namespace g{namespace Uno{namespace Threading{struct CancellationToken;}}}
namespace g{namespace Uno{namespace Threading{struct Task;}}}
namespace g{namespace Uno{namespace Threading{struct TaskFuture;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed class TaskFuture<T> :406
// {
::g::Uno::Threading::Future_type* TaskFuture_typeof();
void TaskFuture__ctor_3_fn(TaskFuture* __this, uDelegate* func);
void TaskFuture__Dispose_fn(TaskFuture* __this);
void TaskFuture__Invoke1_fn(TaskFuture* __this, ::g::Uno::Threading::CancellationToken* cancellationToken);
void TaskFuture__New1_fn(uType* __type, uDelegate* func, TaskFuture** __retval);

struct TaskFuture : ::g::Uno::Threading::Future1
{
    uStrong<uDelegate*> _func;
    uStrong< ::g::Uno::Threading::Task*> _task;

    void ctor_3(uDelegate* func);
    void Invoke1(::g::Uno::Threading::CancellationToken* cancellationToken);
    static TaskFuture* New1(uType* __type, uDelegate* func);
};
// }

}}} // ::g::Uno::Threading
