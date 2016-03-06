// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <posix_mutex.h>
#include <posix_thread.h>
#include <PosixResetEvent.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.String.h>
#include <Uno.Threading.AutoResetEvent.h>
#include <Uno.Threading.CancellationToken.h>
#include <Uno.Threading.CancellationTokenSource.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.Closure-1.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.Arg1Invoke-1.h>
#include <Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc-2.h>
#include <Uno.Threading.IDispatcherExtensions.Arg2Invoke-2.h>
#include <Uno.Threading.IDispatcherExtensions.h>
#include <Uno.Threading.ITaskScheduler.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.PosixAutoResetEvent.h>
#include <Uno.Threading.PosixManualResetEvent.h>
#include <Uno.Threading.POSIXMutex.h>
#include <Uno.Threading.POSIXThread.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.SyncDispatcher.h>
#include <Uno.Threading.Task.h>
#include <Uno.Threading.TaskDelegate.h>
#include <Uno.Threading.TaskFuture-1.h>
#include <Uno.Threading.TaskStatus.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadPool.DefaultWorkItem.h>
#include <Uno.Threading.ThreadPool.h>
#include <Uno.Threading.ThreadPool.ParameterizedWorkItem-1.h>
#include <Uno.Threading.ThreadPool.WorkItem.h>
#include <Uno.Threading.ThreadPoolTaskScheduler.h>
#include <Uno.ULong.h>
static uString* STRINGS[7];
static uType* TYPES[37];

namespace g{
namespace Uno{
namespace Threading{

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(217)
// --------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg1Invoke<T> :217
// {
uType* IDispatcherExtensions__Arg1Invoke_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg1Invoke);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg1Invoke`1", options);
    ::TYPES[0] = ::g::Uno::Action1_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Action`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg1Invoke, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public Arg1Invoke(Uno.Action<T> action, T arg) :221
void IDispatcherExtensions__Arg1Invoke__ctor__fn(IDispatcherExtensions__Arg1Invoke* __this, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions.Arg1Invoke`1", ".ctor(Uno.Action<T>,T)");
    __this->_action = action;
    __this->_arg() = arg;
}

// public Arg1Invoke New(Uno.Action<T> action, T arg) :221
void IDispatcherExtensions__Arg1Invoke__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1Invoke** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    IDispatcherExtensions__Arg1Invoke* obj1 = (IDispatcherExtensions__Arg1Invoke*)uNew(__type);
    IDispatcherExtensions__Arg1Invoke__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :226
void IDispatcherExtensions__Arg1Invoke__Run_fn(IDispatcherExtensions__Arg1Invoke* __this)
{
    __this->Run();
}

// public void Run() [instance] :226
void IDispatcherExtensions__Arg1Invoke::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<T>*/),
        __type->T(0),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions.Arg1Invoke`1", "Run()");
    uPtr(_action)->InvokeVoid(_arg());
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(289)
// --------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg1InvokeFunc<T, TResult> :289
// {
uType* IDispatcherExtensions__Arg1InvokeFunc_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg1InvokeFunc);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2", options);
    ::TYPES[1] = ::g::Uno::Func1_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Uno.Func`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg1InvokeFunc, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public Arg1InvokeFunc(Uno.Func<T, TResult> action, T arg) :293
void IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(IDispatcherExtensions__Arg1InvokeFunc* __this, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2", ".ctor(Uno.Func<T, TResult>,T)");
    __this->_action = action;
    __this->_arg() = arg;
}

// public Arg1InvokeFunc New(Uno.Func<T, TResult> action, T arg) :293
void IDispatcherExtensions__Arg1InvokeFunc__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1InvokeFunc** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    IDispatcherExtensions__Arg1InvokeFunc* obj1 = (IDispatcherExtensions__Arg1InvokeFunc*)uNew(__type);
    IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :298
void IDispatcherExtensions__Arg1InvokeFunc__Run_fn(IDispatcherExtensions__Arg1InvokeFunc* __this)
{
    __this->Run();
}

// public void Run() [instance] :298
void IDispatcherExtensions__Arg1InvokeFunc::Run()
{
    uType* __types[] = {
        __type->T(1),
        __type->Precalced(0/*Uno.Func<T, TResult>*/),
        __type->T(0),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2", "Run()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    uPtr(_action)->Invoke(&ret2, 1, (void*)_arg());
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(229)
// --------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg2Invoke<T1, T2> :229
// {
uType* IDispatcherExtensions__Arg2Invoke_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg2Invoke);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg2Invoke`2", options);
    ::TYPES[2] = ::g::Uno::Action2_typeof();
    type->SetPrecalc(
        ::TYPES[2/*Uno.Action`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg2Invoke, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public Arg2Invoke(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :234
void IDispatcherExtensions__Arg2Invoke__ctor__fn(IDispatcherExtensions__Arg2Invoke* __this, uDelegate* action, void* arg1, void* arg2)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions.Arg2Invoke`2", ".ctor(Uno.Action<T1, T2>,T1,T2)");
    __this->_action = action;
    __this->_arg1() = arg1;
    __this->_arg2() = arg2;
}

// public Arg2Invoke New(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :234
void IDispatcherExtensions__Arg2Invoke__New1_fn(uType* __type, uDelegate* action, void* arg1, void* arg2, IDispatcherExtensions__Arg2Invoke** __retval)
{
    uType* __types[] = {
        __type->T(0),
        __type->T(1),
    };
    IDispatcherExtensions__Arg2Invoke* obj1 = (IDispatcherExtensions__Arg2Invoke*)uNew(__type);
    IDispatcherExtensions__Arg2Invoke__ctor__fn(obj1, action, arg1, arg2);
    return *__retval = obj1, void();
}

// public void Run() :240
void IDispatcherExtensions__Arg2Invoke__Run_fn(IDispatcherExtensions__Arg2Invoke* __this)
{
    __this->Run();
}

// public void Run() [instance] :240
void IDispatcherExtensions__Arg2Invoke::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<T1, T2>*/),
        __type->T(0),
        __type->T(1),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions.Arg2Invoke`2", "Run()");
    uPtr(_action)->Invoke(2, (void*)_arg1(), (void*)_arg2());
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(648)
// --------------------------------------------------------------

// public abstract class AutoResetEvent :648
// {
AutoResetEvent_type* AutoResetEvent_typeof()
{
    static uSStrong<AutoResetEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AutoResetEvent);
    options.TypeSize = sizeof(AutoResetEvent_type);
    type = (AutoResetEvent_type*)uClassType::New("Uno.Threading.AutoResetEvent", options);
    ::STRINGS[0] = uString::Const("Feature not supported in this backend");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(AutoResetEvent_type, interface0));
    type->Reflection.SetFunctions(4,
        new uFunction("Create", NULL, (void*)AutoResetEvent__Create_fn, 0, true, AutoResetEvent_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Dispose", NULL, NULL, offsetof(AutoResetEvent_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("Set", NULL, NULL, offsetof(AutoResetEvent_type, fp_Set), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("WaitOne", NULL, NULL, offsetof(AutoResetEvent_type, fp_WaitOne), false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// protected generated AutoResetEvent() :648
void AutoResetEvent__ctor__fn(AutoResetEvent* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.AutoResetEvent Create(bool initialState) :650
void AutoResetEvent__Create_fn(bool* initialState, AutoResetEvent** __retval)
{
    *__retval = AutoResetEvent::Create(*initialState);
}

// protected generated AutoResetEvent() [instance] :648
void AutoResetEvent::ctor_()
{
}

// public static Uno.Threading.AutoResetEvent Create(bool initialState) [static] :650
AutoResetEvent* AutoResetEvent::Create(bool initialState)
{
    uStackFrame __("Uno.Threading.AutoResetEvent", "Create(bool)");
    return ::g::Uno::Threading::PosixAutoResetEvent::New1(initialState);
    return NULL;
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\Tasks\$.uno(34)
// -------------------------------------------------------------------

// internal sealed class CancellationToken :34
// {
uType* CancellationToken_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationToken);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.CancellationToken", options);
    type->fp_ctor_ = (void*)CancellationToken__New1_fn;
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::CancellationToken, _IsCancellationRequested), 0);
    return type;
}

// public CancellationToken() :41
void CancellationToken__ctor__fn(CancellationToken* __this)
{
    __this->ctor_();
}

// public generated bool get_IsCancellationRequested() :38
void CancellationToken__get_IsCancellationRequested_fn(CancellationToken* __this, bool* __retval)
{
    *__retval = __this->IsCancellationRequested();
}

// private generated void set_IsCancellationRequested(bool value) :38
void CancellationToken__set_IsCancellationRequested_fn(CancellationToken* __this, bool* value)
{
    __this->IsCancellationRequested(*value);
}

// public CancellationToken New() :41
void CancellationToken__New1_fn(CancellationToken** __retval)
{
    *__retval = CancellationToken::New1();
}

// internal void SetCancellationRequested() :46
void CancellationToken__SetCancellationRequested_fn(CancellationToken* __this)
{
    __this->SetCancellationRequested();
}

// public CancellationToken() [instance] :41
void CancellationToken::ctor_()
{
    uStackFrame __("Uno.Threading.CancellationToken", ".ctor()");
    IsCancellationRequested(false);
}

// public generated bool get_IsCancellationRequested() [instance] :38
bool CancellationToken::IsCancellationRequested()
{
    uStackFrame __("Uno.Threading.CancellationToken", "get_IsCancellationRequested()");
    return _IsCancellationRequested;
}

// private generated void set_IsCancellationRequested(bool value) [instance] :38
void CancellationToken::IsCancellationRequested(bool value)
{
    uStackFrame __("Uno.Threading.CancellationToken", "set_IsCancellationRequested(bool)");
    _IsCancellationRequested = value;
}

// internal void SetCancellationRequested() [instance] :46
void CancellationToken::SetCancellationRequested()
{
    uStackFrame __("Uno.Threading.CancellationToken", "SetCancellationRequested()");
    IsCancellationRequested(true);
}

// public CancellationToken New() [static] :41
CancellationToken* CancellationToken::New1()
{
    CancellationToken* obj1 = (CancellationToken*)uNew(CancellationToken_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\Tasks\$.uno(9)
// ------------------------------------------------------------------

// internal sealed class CancellationTokenSource :9
// {
uType* CancellationTokenSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationTokenSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.CancellationTokenSource", options);
    type->fp_ctor_ = (void*)CancellationTokenSource__New1_fn;
    type->SetFields(0,
        ::g::Uno::Threading::CancellationToken_typeof(), offsetof(::g::Uno::Threading::CancellationTokenSource, _token), 0);
    return type;
}

// public CancellationTokenSource() :23
void CancellationTokenSource__ctor__fn(CancellationTokenSource* __this)
{
    __this->ctor_();
}

// public void Cancel() :28
void CancellationTokenSource__Cancel_fn(CancellationTokenSource* __this)
{
    __this->Cancel();
}

// public CancellationTokenSource New() :23
void CancellationTokenSource__New1_fn(CancellationTokenSource** __retval)
{
    *__retval = CancellationTokenSource::New1();
}

// public Uno.Threading.CancellationToken get_Token() :18
void CancellationTokenSource__get_Token_fn(CancellationTokenSource* __this, ::g::Uno::Threading::CancellationToken** __retval)
{
    *__retval = __this->Token();
}

// public CancellationTokenSource() [instance] :23
void CancellationTokenSource::ctor_()
{
    uStackFrame __("Uno.Threading.CancellationTokenSource", ".ctor()");
    _token = ::g::Uno::Threading::CancellationToken::New1();
}

// public void Cancel() [instance] :28
void CancellationTokenSource::Cancel()
{
    uStackFrame __("Uno.Threading.CancellationTokenSource", "Cancel()");
    uPtr(_token)->SetCancellationRequested();
}

// public Uno.Threading.CancellationToken get_Token() [instance] :18
::g::Uno::Threading::CancellationToken* CancellationTokenSource::Token()
{
    uStackFrame __("Uno.Threading.CancellationTokenSource", "get_Token()");
    return _token;
}

// public CancellationTokenSource New() [static] :23
CancellationTokenSource* CancellationTokenSource::New1()
{
    CancellationTokenSource* obj1 = (CancellationTokenSource*)uNew(CancellationTokenSource_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(155)
// --------------------------------------------------------------

// private sealed class Future<T>.Closure<T> :155
// {
uType* Future1__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Future1__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.Future`1.Closure`1", options);
    ::TYPES[0] = ::g::Uno::Action1_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Action`1*/]->MakeType(type->T(1)));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(1)), offsetof(::g::Uno::Threading::Future1__Closure, _action), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public Closure(Uno.Action<T> action, T result) :160
void Future1__Closure__ctor__fn(Future1__Closure* __this, uDelegate* action, void* result)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    uStackFrame __("Uno.Threading.Future`1.Closure`1", ".ctor(Uno.Action<T>,T)");
    __this->_action = action;
    __this->_result() = result;
}

// public Closure New(Uno.Action<T> action, T result) :160
void Future1__Closure__New1_fn(uType* __type, uDelegate* action, void* result, Future1__Closure** __retval)
{
    uType* __types[] = {
        __type->T(1),
    };
    Future1__Closure* obj1 = (Future1__Closure*)uNew(__type);
    Future1__Closure__ctor__fn(obj1, action, result);
    return *__retval = obj1, void();
}

// public void Run() :166
void Future1__Closure__Run_fn(Future1__Closure* __this)
{
    __this->Run();
}

// public void Run() [instance] :166
void Future1__Closure::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<T>*/),
        __type->T(1),
    };
    uStackFrame __("Uno.Threading.Future`1.Closure`1", "Run()");
    uPtr(_action)->InvokeVoid(_result());
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(919)
// --------------------------------------------------------------

// public sealed class ConcurrentQueue<T> :919
// {
ConcurrentQueue_type* ConcurrentQueue_typeof()
{
    static uSStrong<ConcurrentQueue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ConcurrentQueue);
    options.TypeSize = sizeof(ConcurrentQueue_type);
    type = (ConcurrentQueue_type*)uClassType::New("Uno.Threading.ConcurrentQueue`1", options);
    type->fp_ctor_ = (void*)ConcurrentQueue__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ConcurrentQueue__Dispose_fn;
    ::TYPES[3] = ::g::Uno::Collections::Queue_typeof();
    type->SetPrecalc(
        ::TYPES[3/*Uno.Collections.Queue`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ConcurrentQueue_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::ConcurrentQueue, _mutex), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Threading::ConcurrentQueue, _queue), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Count", NULL, (void*)ConcurrentQueue__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)ConcurrentQueue__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Enqueue", NULL, (void*)ConcurrentQueue__Enqueue_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_IsEmpty", NULL, (void*)ConcurrentQueue__get_IsEmpty_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", type, (void*)ConcurrentQueue__New1_fn, 0, true, type, 0),
        new uFunction("TryDequeue", NULL, (void*)ConcurrentQueue__TryDequeue_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)->ByRef()));
    return type;
}

// public ConcurrentQueue() :924
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this)
{
    __this->ctor_();
}

// public int get_Count() :955
void ConcurrentQueue__get_Count_fn(ConcurrentQueue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void Dispose() :970
void ConcurrentQueue__Dispose_fn(ConcurrentQueue* __this)
{
    __this->Dispose();
}

// public void Enqueue(T item) :930
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", "Enqueue(T)");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[16/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(__this->_queue), item);
    }
}

// public bool get_IsEmpty() :967
void ConcurrentQueue__get_IsEmpty_fn(ConcurrentQueue* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// public ConcurrentQueue New() :924
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval)
{
    *__retval = ConcurrentQueue::New1(__type);
}

// public bool TryDequeue(T& item) :936
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Queue<T>*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", "TryDequeue(T&)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    bool ret = false;
    item.Default(__types[0]);
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[16/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (uPtr(__this->_queue)->Count() > 0)
        {
            item.Store((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_queue), &ret2), ret2));
            ret = true;
        }
    }

    return *__retval = ret, void();
}

// public ConcurrentQueue() [instance] :924
void ConcurrentQueue::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
        __type->T(0),
    };
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", ".ctor()");
    _queue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _mutex = ::g::Uno::Threading::Mutex::Create();
}

// public int get_Count() [instance] :955
int ConcurrentQueue::Count()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
        __type->T(0),
    };
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", "get_Count()");
    int count = 0;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[16/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        count = uPtr(_queue)->Count();
    }

    return count;
}

// public void Dispose() [instance] :970
void ConcurrentQueue::Dispose()
{
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", "Dispose()");
    uPtr(_mutex)->Dispose();
}

// public bool get_IsEmpty() [instance] :967
bool ConcurrentQueue::IsEmpty()
{
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", "get_IsEmpty()");
    return Count() == 0;
}

// public ConcurrentQueue New() [static] :924
ConcurrentQueue* ConcurrentQueue::New1(uType* __type)
{
    ConcurrentQueue* obj1 = (ConcurrentQueue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(779)
// --------------------------------------------------------------

// private sealed class ThreadPool.DefaultWorkItem :779
// {
::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__DefaultWorkItem_typeof()
{
    static uSStrong< ::g::Uno::Threading::ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadPool__DefaultWorkItem);
    options.TypeSize = sizeof(::g::Uno::Threading::ThreadPool__WorkItem_type);
    type = (::g::Uno::Threading::ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.DefaultWorkItem", options);
    type->SetBase(::g::Uno::Threading::ThreadPool__WorkItem_typeof());
    type->fp_Invoke = (void(*)(::g::Uno::Threading::ThreadPool__WorkItem*))ThreadPool__DefaultWorkItem__Invoke_fn;
    ::TYPES[4] = ::g::Uno::Delegate_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Threading::ThreadPool__DefaultWorkItem, _action), 0);
    return type;
}

// public DefaultWorkItem(Uno.Action action) :783
void ThreadPool__DefaultWorkItem__ctor_1_fn(ThreadPool__DefaultWorkItem* __this, uDelegate* action)
{
    __this->ctor_1(action);
}

// public override sealed void Invoke() :788
void ThreadPool__DefaultWorkItem__Invoke_fn(ThreadPool__DefaultWorkItem* __this)
{
    uStackFrame __("Uno.Threading.ThreadPool.DefaultWorkItem", "Invoke()");

    if (::g::Uno::Delegate::op_Inequality(__this->_action, NULL))
        uPtr(__this->_action)->InvokeVoid();
}

// public DefaultWorkItem New(Uno.Action action) :783
void ThreadPool__DefaultWorkItem__New1_fn(uDelegate* action, ThreadPool__DefaultWorkItem** __retval)
{
    *__retval = ThreadPool__DefaultWorkItem::New1(action);
}

// public DefaultWorkItem(Uno.Action action) [instance] :783
void ThreadPool__DefaultWorkItem::ctor_1(uDelegate* action)
{
    uStackFrame __("Uno.Threading.ThreadPool.DefaultWorkItem", ".ctor(Uno.Action)");
    ctor_();
    _action = action;
}

// public DefaultWorkItem New(Uno.Action action) [static] :783
ThreadPool__DefaultWorkItem* ThreadPool__DefaultWorkItem::New1(uDelegate* action)
{
    ThreadPool__DefaultWorkItem* obj1 = (ThreadPool__DefaultWorkItem*)uNew(ThreadPool__DefaultWorkItem_typeof());
    obj1->ctor_1(action);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(9)
// ------------------------------------------------------------

// public abstract class Future :9
// {
Future_type* Future_typeof()
{
    static uSStrong<Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Future);
    options.TypeSize = sizeof(Future_type);
    type = (Future_type*)uClassType::New("Uno.Threading.Future", options);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Future_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::FutureState_typeof(), offsetof(::g::Uno::Threading::Future, _State), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Cancel", NULL, NULL, offsetof(Future_type, fp_Cancel), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Dispose", NULL, NULL, offsetof(Future_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("get_State", NULL, (void*)Future__get_State_fn, 0, false, ::g::Uno::Threading::FutureState_typeof(), 0),
        new uFunction("Wait", NULL, NULL, offsetof(Future_type, fp_Wait), false, uVoid_typeof(), 0));
    return type;
}

// protected generated Future() :9
void Future__ctor__fn(Future* __this)
{
    __this->ctor_();
}

// public generated Uno.Threading.FutureState get_State() :11
void Future__get_State_fn(Future* __this, int* __retval)
{
    *__retval = __this->State();
}

// protected generated void set_State(Uno.Threading.FutureState value) :11
void Future__set_State_fn(Future* __this, int* value)
{
    __this->State(*value);
}

// protected generated Future() [instance] :9
void Future::ctor_()
{
}

// public generated Uno.Threading.FutureState get_State() [instance] :11
int Future::State()
{
    uStackFrame __("Uno.Threading.Future", "get_State()");
    return _State;
}

// protected generated void set_State(Uno.Threading.FutureState value) [instance] :11
void Future::State(int value)
{
    uStackFrame __("Uno.Threading.Future", "set_State(Uno.Threading.FutureState)");
    _State = value;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(17)
// -------------------------------------------------------------

// public abstract class Future<T> :17
// {
::g::Uno::Threading::Future_type* Future1_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 6;
    options.ObjectSize = sizeof(Future1);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Future`1", options);
    type->SetBase(::g::Uno::Threading::Future_typeof());
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))Future1__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Future1__Dispose_fn;
    ::STRINGS[1] = uString::Const("dispatcher");
    ::STRINGS[2] = uString::Const("This promise is already resolved or rejected");
    ::TYPES[6] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[7] = ::g::Uno::Threading::Future_typeof();
    ::TYPES[8] = ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof()));
    ::TYPES[3] = ::g::Uno::Collections::Queue_typeof();
    ::TYPES[9] = ::g::Uno::Threading::Promise_typeof();
    ::TYPES[0] = ::g::Uno::Action1_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[11] = ::g::Uno::Exception_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[12] = Future1__Closure_typeof();
    ::TYPES[4] = ::g::Uno::Delegate_typeof();
    type->SetPrecalc(
        ::TYPES[3/*Uno.Collections.Queue`1*/]->MakeType(::TYPES[9/*Uno.Threading.Promise`1*/]->MakeType(type->T(0))),
        ::TYPES[9/*Uno.Threading.Promise`1*/]->MakeType(type->T(0)),
        ::TYPES[3/*Uno.Collections.Queue`1*/]->MakeType(::TYPES[0/*Uno.Action`1*/]->MakeType(type->T(0))),
        ::TYPES[0/*Uno.Action`1*/]->MakeType(type->T(0)),
        type->MakeMethod(1, ::TYPES[11/*Uno.Exception*/]),
        type->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(1,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof())), offsetof(::g::Uno::Threading::Future1, _catchables), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0))), offsetof(::g::Uno::Threading::Future1, _chainables), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Uno::Threading::Future1, _dispatcher), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::Future1, _mutex), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(type->T(0))), offsetof(::g::Uno::Threading::Future1, _thenables), 0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Uno::Threading::Future1, Reason), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("Catch", NULL, (void*)Future1__Catch_fn, 0, false, type, 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof())),
        new uFunction("Then", NULL, (void*)Future1__Then_fn, 0, false, type, 1, ::g::Uno::Action1_typeof()->MakeType(type->T(0))),
        new uFunction("Then", NULL, (void*)Future1__Then1_fn, 0, false, type, 2, ::g::Uno::Action1_typeof()->MakeType(type->T(0)), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof())));
    return type;
}

// protected Future() :40
void Future1__ctor_1_fn(Future1* __this)
{
    __this->ctor_1();
}

// protected Future(Uno.Threading.IDispatcher dispatcher) :28
void Future1__ctor_2_fn(Future1* __this, uObject* dispatcher)
{
    __this->ctor_2(dispatcher);
}

// public Uno.Threading.Future<T> Catch(Uno.Action<Uno.Exception> failure) :150
void Future1__Catch_fn(Future1* __this, uDelegate* failure, Future1** __retval)
{
    *__retval = __this->Catch(failure);
}

// public override void Dispose() :42
void Future1__Dispose_fn(Future1* __this)
{
    uStackFrame __("Uno.Threading.Future`1", "Dispose()");
    uPtr(__this->_mutex)->Dispose();
}

// protected void InternalReject(Uno.Exception reason) :76
void Future1__InternalReject_fn(Future1* __this, ::g::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

// protected void InternalResolve(T result) :47
void Future1__InternalResolve_fn(Future1* __this, void* result)
{
    uType* __types[] = {
        __this->__type->GetBase(Future1_typeof())->T(0),
        __this->__type->GetBase(Future1_typeof())->Precalced(2/*Uno.Collections.Queue<Uno.Action<T>>*/),
        __this->__type->GetBase(Future1_typeof())->Precalced(3/*Uno.Action<T>*/),
        __this->__type->GetBase(Future1_typeof())->Precalced(5/*Uno.Threading.Future<T>.Invoke<T>*/),
        __this->__type->GetBase(Future1_typeof())->Precalced(0/*Uno.Collections.Queue<Uno.Threading.Promise<T>>*/),
        __this->__type->GetBase(Future1_typeof())->Precalced(1/*Uno.Threading.Promise<T>*/),
    };
    uStackFrame __("Uno.Threading.Future`1", "InternalResolve(T)");
    uDelegate* ret4;
    ::g::Uno::Threading::Promise* ret5;
    ::g::Uno::Threading::Promise* ret6;
    uPtr(__this->_mutex)->Lock();

    if (__this->State() != 0)
    {
        uPtr(__this->_mutex)->Unlock();
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"This promis...*/]));
    }

    __this->State(1);
    __this->Result() = result;

    try
    {
        while (uPtr(__this->_thenables)->Count() != 0)
            Future1__Invoke_fn(__this, __types[3], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_thenables), &ret4), ret4), result);

        while (uPtr(__this->_chainables)->Count() != 0)
            ::g::Uno::Threading::Promise__Resolve_fn(uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret5), ret5)), result);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(__this->_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret6), ret6))->Reject(exception);
    }

    uPtr(__this->_mutex)->Unlock();
}

// private void Invoke<T1>(Uno.Action<T1> action, T1 arg) :105
void Future1__Invoke_fn(Future1* __this, uType* __type, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[12/*Uno.Threading.Future`1.Closure`1*/]->MakeType(__this->__type->GetBase(Future1_typeof())->T(0), __type->U(0)),
        __this->__type->GetBase(Future1_typeof())->T(0),
    };
    uStackFrame __("Uno.Threading.Future`1", "Invoke`1(Uno.Action<T1>,T1)");
    Future1__Closure* ret7;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(__this->_dispatcher), ::TYPES[6/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)Future1__Closure__Run_fn, (Future1__Closure__New1_fn(__types[1], action, arg, &ret7), ret7)));
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> action) :110
void Future1__Then_fn(Future1* __this, uDelegate* action, Future1** __retval)
{
    *__retval = __this->Then(action);
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) :115
void Future1__Then1_fn(Future1* __this, uDelegate* fulfilled, uDelegate* rejected, Future1** __retval)
{
    *__retval = __this->Then1(fulfilled, rejected);
}

// protected Future() [instance] :40
void Future1::ctor_1()
{
    uStackFrame __("Uno.Threading.Future`1", ".ctor()");
    _mutex = ::g::Uno::Threading::Mutex::Create();
    ctor_2((uObject*)::g::Uno::Threading::SyncDispatcher::New1());
}

// protected Future(Uno.Threading.IDispatcher dispatcher) [instance] :28
void Future1::ctor_2(uObject* dispatcher)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(0/*Uno.Collections.Queue<Uno.Threading.Promise<T>>*/),
        __type->GetBase(Future1_typeof())->Precalced(1/*Uno.Threading.Promise<T>*/),
        __type->GetBase(Future1_typeof())->T(0),
        __type->GetBase(Future1_typeof())->Precalced(2/*Uno.Collections.Queue<Uno.Action<T>>*/),
        __type->GetBase(Future1_typeof())->Precalced(3/*Uno.Action<T>*/),
    };
    uStackFrame __("Uno.Threading.Future`1", ".ctor(Uno.Threading.IDispatcher)");
    _mutex = ::g::Uno::Threading::Mutex::Create();
    ctor_();

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"dispatcher"*/]));

    _dispatcher = dispatcher;
    State(0);
    _catchables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[8/*Uno.Collections.Queue<Uno.Action<Uno.Exception>>*/]));
    _chainables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _thenables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[3]));
}

// public Uno.Threading.Future<T> Catch(Uno.Action<Uno.Exception> failure) [instance] :150
Future1* Future1::Catch(uDelegate* failure)
{
    uStackFrame __("Uno.Threading.Future`1", "Catch(Uno.Action<Uno.Exception>)");
    return Then1(NULL, failure);
}

// protected void InternalReject(Uno.Exception reason) [instance] :76
void Future1::InternalReject(::g::Uno::Exception* reason)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(4/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
        __type->GetBase(Future1_typeof())->T(0),
        __type->GetBase(Future1_typeof())->Precalced(0/*Uno.Collections.Queue<Uno.Threading.Promise<T>>*/),
        __type->GetBase(Future1_typeof())->Precalced(1/*Uno.Threading.Promise<T>*/),
    };
    uStackFrame __("Uno.Threading.Future`1", "InternalReject(Uno.Exception)");
    uDelegate* ret1;
    ::g::Uno::Threading::Promise* ret2;
    ::g::Uno::Threading::Promise* ret3;
    uPtr(_mutex)->Lock();

    if (State() != 0)
    {
        uPtr(_mutex)->Unlock();
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"This promis...*/]));
    }

    State(2);
    Reason = reason;

    try
    {
        while (uPtr(_catchables)->Count() != 0)
            Future1__Invoke_fn(this, __types[0], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_catchables), &ret1), ret1), reason);

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret2), ret2))->Reject(reason);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret3), ret3))->Reject(exception);
    }

    uPtr(_mutex)->Unlock();
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> action) [instance] :110
Future1* Future1::Then(uDelegate* action)
{
    uStackFrame __("Uno.Threading.Future`1", "Then(Uno.Action<T>)");
    return Then1(action, NULL);
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) [instance] :115
Future1* Future1::Then1(uDelegate* fulfilled, uDelegate* rejected)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(1/*Uno.Threading.Promise<T>*/),
        __type->GetBase(Future1_typeof())->T(0),
        __type->GetBase(Future1_typeof())->Precalced(5/*Uno.Threading.Future<T>.Invoke<T>*/),
        __type->GetBase(Future1_typeof())->Precalced(4/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
    };
    uStackFrame __("Uno.Threading.Future`1", "Then(Uno.Action<T>,Uno.Action<Uno.Exception>)");
    ::g::Uno::Threading::Promise* chainable = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    uPtr(_mutex)->Lock();

    try
    {
        if (State() == 1)
        {
            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                Future1__Invoke_fn(this, __types[2], fulfilled, Result());
        }
        else if (State() == 2)
        {
            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                Future1__Invoke_fn(this, __types[3], rejected, Reason);
        }
        else
        {
            ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_chainables), chainable);

            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_thenables), fulfilled);

            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_catchables), rejected);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;
        uPtr(chainable)->Reject(exception);
    }

    uPtr(_mutex)->Unlock();
    return chainable;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(180)
// --------------------------------------------------------------

// public enum FutureState :180
uEnumType* FutureState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.FutureState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Pending", 0LL,
        "Resolved", 1LL,
        "Rejected", 2LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(195)
// --------------------------------------------------------------

// public abstract interface IDispatcher :195
// {
uInterfaceType* IDispatcher_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.IDispatcher", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Invoke", NULL, NULL, offsetof(IDispatcher, fp_Invoke), false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(200)
// --------------------------------------------------------------

// public static class IDispatcherExtensions :200
// {
uClassType* IDispatcherExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions", options);
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[13] = IDispatcherExtensions__Arg1Invoke_typeof();
    ::TYPES[14] = IDispatcherExtensions__Arg1InvokeFunc_typeof();
    ::TYPES[15] = IDispatcherExtensions__Arg2Invoke_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("Invoke1`1", type, (void*)IDispatcherExtensions__Invoke1_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Threading::IDispatcher_typeof(), ::g::Uno::Action1_typeof()->MakeType(type->U(0)), type->U(0)),
        new uFunction("Invoke1`2", type, (void*)IDispatcherExtensions__Invoke11_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Threading::IDispatcher_typeof(), ::g::Uno::Func1_typeof()->MakeType(type->U(0), type->U(1)), type->U(0)),
        new uFunction("Invoke2`2", type, (void*)IDispatcherExtensions__Invoke2_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Threading::IDispatcher_typeof(), ::g::Uno::Action2_typeof()->MakeType(type->U(0), type->U(1)), type->U(0), type->U(1)));
    return type;
}

// public static void Invoke1<T>(Uno.Threading.IDispatcher dispatcher, Uno.Action<T> action, T arg) :202
void IDispatcherExtensions__Invoke1_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[13/*Uno.Threading.IDispatcherExtensions.Arg1Invoke`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions", "Invoke1`1(Uno.Threading.IDispatcher,Uno.Action<T>,T)");
    IDispatcherExtensions__Arg1Invoke* ret1;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[6/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)IDispatcherExtensions__Arg1Invoke__Run_fn, (IDispatcherExtensions__Arg1Invoke__New1_fn(__types[1], action, arg, &ret1), ret1)));
}

// public static void Invoke1<T, TResult>(Uno.Threading.IDispatcher dispatcher, Uno.Func<T, TResult> func, T arg) :264
void IDispatcherExtensions__Invoke11_fn(uType* __type, uObject* dispatcher, uDelegate* func, void* arg)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[14/*Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2*/]->MakeType(__type->U(0), __type->U(1)),
        __type->U(1),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions", "Invoke1`2(Uno.Threading.IDispatcher,Uno.Func<T, TResult>,T)");
    IDispatcherExtensions__Arg1InvokeFunc* ret2;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[6/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)IDispatcherExtensions__Arg1InvokeFunc__Run_fn, (IDispatcherExtensions__Arg1InvokeFunc__New1_fn(__types[1], func, arg, &ret2), ret2)));
}

// public static void Invoke2<T1, T2>(Uno.Threading.IDispatcher dispatcher, Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :207
void IDispatcherExtensions__Invoke2_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg1, void* arg2)
{
    uType* __types[] = {
        __type->U(0),
        __type->U(1),
        ::TYPES[15/*Uno.Threading.IDispatcherExtensions.Arg2Invoke`2*/]->MakeType(__type->U(0), __type->U(1)),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions", "Invoke2`2(Uno.Threading.IDispatcher,Uno.Action<T1, T2>,T1,T2)");
    IDispatcherExtensions__Arg2Invoke* ret3;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[6/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)IDispatcherExtensions__Arg2Invoke__Run_fn, (IDispatcherExtensions__Arg2Invoke__New1_fn(__types[2], action, arg1, arg2, &ret3), ret3)));
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\Tasks\$.uno(206)
// --------------------------------------------------------------------

// internal abstract interface ITaskScheduler :206
// {
uInterfaceType* ITaskScheduler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.ITaskScheduler", 0, 0);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(741)
// --------------------------------------------------------------

// public sealed class LockGuard :741
// {
LockGuard_type* LockGuard_typeof()
{
    static uSStrong<LockGuard_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LockGuard);
    options.TypeSize = sizeof(LockGuard_type);
    type = (LockGuard_type*)uClassType::New("Uno.Threading.LockGuard", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))LockGuard__UnoIDisposableDispose_fn;
    ::TYPES[16] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LockGuard_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::LockGuard, _mutex), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Acquire", NULL, (void*)LockGuard__Acquire_fn, 0, true, ::g::Uno::IDisposable_typeof(), 1, ::g::Uno::Threading::Mutex_typeof()));
    return type;
}

// private LockGuard(Uno.Threading.Mutex mutex) :745
void LockGuard__ctor__fn(LockGuard* __this, ::g::Uno::Threading::Mutex* mutex)
{
    __this->ctor_(mutex);
}

// public static Uno.IDisposable Acquire(Uno.Threading.Mutex mutex) :751
void LockGuard__Acquire_fn(::g::Uno::Threading::Mutex* mutex, uObject** __retval)
{
    *__retval = LockGuard::Acquire(mutex);
}

// private LockGuard New(Uno.Threading.Mutex mutex) :745
void LockGuard__New1_fn(::g::Uno::Threading::Mutex* mutex, LockGuard** __retval)
{
    *__retval = LockGuard::New1(mutex);
}

// private void Uno.IDisposable.Dispose() :756
void LockGuard__UnoIDisposableDispose_fn(LockGuard* __this)
{
    uStackFrame __("Uno.Threading.LockGuard", "Uno.IDisposable.Dispose()");
    uPtr(__this->_mutex)->Unlock();
}

// private LockGuard(Uno.Threading.Mutex mutex) [instance] :745
void LockGuard::ctor_(::g::Uno::Threading::Mutex* mutex)
{
    uStackFrame __("Uno.Threading.LockGuard", ".ctor(Uno.Threading.Mutex)");
    _mutex = mutex;
    uPtr(_mutex)->Lock();
}

// public static Uno.IDisposable Acquire(Uno.Threading.Mutex mutex) [static] :751
uObject* LockGuard::Acquire(::g::Uno::Threading::Mutex* mutex)
{
    uStackFrame __("Uno.Threading.LockGuard", "Acquire(Uno.Threading.Mutex)");
    return (uObject*)LockGuard::New1(mutex);
}

// private LockGuard New(Uno.Threading.Mutex mutex) [static] :745
LockGuard* LockGuard::New1(::g::Uno::Threading::Mutex* mutex)
{
    LockGuard* obj1 = (LockGuard*)uNew(LockGuard_typeof());
    obj1->ctor_(mutex);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(695)
// --------------------------------------------------------------

// public abstract class ManualResetEvent :695
// {
ManualResetEvent_type* ManualResetEvent_typeof()
{
    static uSStrong<ManualResetEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ManualResetEvent);
    options.TypeSize = sizeof(ManualResetEvent_type);
    type = (ManualResetEvent_type*)uClassType::New("Uno.Threading.ManualResetEvent", options);
    ::STRINGS[0] = uString::Const("Feature not supported in this backend");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ManualResetEvent_type, interface0));
    type->Reflection.SetFunctions(4,
        new uFunction("Create", NULL, (void*)ManualResetEvent__Create_fn, 0, true, ManualResetEvent_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Dispose", NULL, NULL, offsetof(ManualResetEvent_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("Set", NULL, NULL, offsetof(ManualResetEvent_type, fp_Set), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("WaitOne", NULL, NULL, offsetof(ManualResetEvent_type, fp_WaitOne), false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// protected generated ManualResetEvent() :695
void ManualResetEvent__ctor__fn(ManualResetEvent* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.ManualResetEvent Create(bool initialState) :697
void ManualResetEvent__Create_fn(bool* initialState, ManualResetEvent** __retval)
{
    *__retval = ManualResetEvent::Create(*initialState);
}

// protected generated ManualResetEvent() [instance] :695
void ManualResetEvent::ctor_()
{
}

// public static Uno.Threading.ManualResetEvent Create(bool initialState) [static] :697
ManualResetEvent* ManualResetEvent::Create(bool initialState)
{
    uStackFrame __("Uno.Threading.ManualResetEvent", "Create(bool)");
    return ::g::Uno::Threading::PosixManualResetEvent::New1(initialState);
    return NULL;
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(468)
// --------------------------------------------------------------

// public abstract class Mutex :468
// {
Mutex_type* Mutex_typeof()
{
    static uSStrong<Mutex_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mutex);
    options.TypeSize = sizeof(Mutex_type);
    type = (Mutex_type*)uClassType::New("Uno.Threading.Mutex", options);
    ::STRINGS[0] = uString::Const("Feature not supported in this backend");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Mutex_type, interface0));
    type->Reflection.SetFunctions(4,
        new uFunction("Create", NULL, (void*)Mutex__Create_fn, 0, true, Mutex_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(Mutex_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("Lock", NULL, NULL, offsetof(Mutex_type, fp_Lock), false, uVoid_typeof(), 0),
        new uFunction("Unlock", NULL, NULL, offsetof(Mutex_type, fp_Unlock), false, uVoid_typeof(), 0));
    return type;
}

// protected generated Mutex() :468
void Mutex__ctor__fn(Mutex* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.Mutex Create() :470
void Mutex__Create_fn(Mutex** __retval)
{
    *__retval = Mutex::Create();
}

// protected generated Mutex() [instance] :468
void Mutex::ctor_()
{
}

// public static Uno.Threading.Mutex Create() [static] :470
Mutex* Mutex::Create()
{
    uStackFrame __("Uno.Threading.Mutex", "Create()");
    return ::g::Uno::Threading::POSIXMutex::New1();
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(795)
// --------------------------------------------------------------

// private sealed class ThreadPool.ParameterizedWorkItem<TState> :795
// {
::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__ParameterizedWorkItem_typeof()
{
    static uSStrong< ::g::Uno::Threading::ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ThreadPool__ParameterizedWorkItem);
    options.TypeSize = sizeof(::g::Uno::Threading::ThreadPool__WorkItem_type);
    type = (::g::Uno::Threading::ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.ParameterizedWorkItem`1", options);
    type->SetBase(::g::Uno::Threading::ThreadPool__WorkItem_typeof());
    type->fp_Invoke = (void(*)(::g::Uno::Threading::ThreadPool__WorkItem*))ThreadPool__ParameterizedWorkItem__Invoke_fn;
    ::TYPES[4] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = ::g::Uno::Action1_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Action`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Threading::ThreadPool__ParameterizedWorkItem, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public override sealed void Invoke() :806
void ThreadPool__ParameterizedWorkItem__Invoke_fn(ThreadPool__ParameterizedWorkItem* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Action<TState>*/),
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Threading.ThreadPool.ParameterizedWorkItem`1", "Invoke()");

    if (::g::Uno::Delegate::op_Inequality(__this->_action, NULL))
        uPtr(__this->_action)->InvokeVoid(__this->_state());
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\Implementation\Cpp\$.uno(349)
// ---------------------------------------------------------------------------------

// internal sealed extern class PosixAutoResetEvent :349
// {
::g::Uno::Threading::AutoResetEvent_type* PosixAutoResetEvent_typeof()
{
    static uSStrong< ::g::Uno::Threading::AutoResetEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PosixAutoResetEvent);
    options.TypeSize = sizeof(::g::Uno::Threading::AutoResetEvent_type);
    type = (::g::Uno::Threading::AutoResetEvent_type*)uClassType::New("Uno.Threading.PosixAutoResetEvent", options);
    type->SetBase(::g::Uno::Threading::AutoResetEvent_typeof());
    type->fp_Dispose = (void(*)(::g::Uno::Threading::AutoResetEvent*))PosixAutoResetEvent__Dispose_fn;
    type->fp_Set = (void(*)(::g::Uno::Threading::AutoResetEvent*, bool*))PosixAutoResetEvent__Set_fn;
    type->fp_WaitOne = (void(*)(::g::Uno::Threading::AutoResetEvent*, bool*))PosixAutoResetEvent__WaitOne_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))PosixAutoResetEvent__Dispose_fn;
    ::TYPES[17] = ::g::Uno::IntPtr_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::AutoResetEvent_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Uno::Threading::PosixAutoResetEvent, _handle), 0);
    return type;
}

// public PosixAutoResetEvent(bool initialState) :353
void PosixAutoResetEvent__ctor_1_fn(PosixAutoResetEvent* __this, bool* initialState)
{
    __this->ctor_1(*initialState);
}

// public override sealed void Dispose() :378
void PosixAutoResetEvent__Dispose_fn(PosixAutoResetEvent* __this)
{
    uStackFrame __("Uno.Threading.PosixAutoResetEvent", "Dispose()");
    FreeState( __this->_handle );
}

// public PosixAutoResetEvent New(bool initialState) :353
void PosixAutoResetEvent__New1_fn(bool* initialState, PosixAutoResetEvent** __retval)
{
    *__retval = PosixAutoResetEvent::New1(*initialState);
}

// public override sealed bool Set() :373
void PosixAutoResetEvent__Set_fn(PosixAutoResetEvent* __this, bool* __retval)
{
    uStackFrame __("Uno.Threading.PosixAutoResetEvent", "Set()");
    return *__retval = ResetEvent_Set( __this->_handle ), void();
}

// public override sealed bool WaitOne() :358
void PosixAutoResetEvent__WaitOne_fn(PosixAutoResetEvent* __this, bool* __retval)
{
    uStackFrame __("Uno.Threading.PosixAutoResetEvent", "WaitOne()");
    return *__retval = ResetEvent_WaitOne( __this->_handle ), void();
}

// public PosixAutoResetEvent(bool initialState) [instance] :353
void PosixAutoResetEvent::ctor_1(bool initialState)
{
    uStackFrame __("Uno.Threading.PosixAutoResetEvent", ".ctor(bool)");
    _handle = ::g::Uno::IntPtr::Zero();
    ctor_();
    _handle = AllocateState( initialState, true );
}

// public PosixAutoResetEvent New(bool initialState) [static] :353
PosixAutoResetEvent* PosixAutoResetEvent::New1(bool initialState)
{
    PosixAutoResetEvent* obj1 = (PosixAutoResetEvent*)uNew(PosixAutoResetEvent_typeof());
    obj1->ctor_1(initialState);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\Implementation\Cpp\$.uno(386)
// ---------------------------------------------------------------------------------

// internal sealed extern class PosixManualResetEvent :386
// {
::g::Uno::Threading::ManualResetEvent_type* PosixManualResetEvent_typeof()
{
    static uSStrong< ::g::Uno::Threading::ManualResetEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PosixManualResetEvent);
    options.TypeSize = sizeof(::g::Uno::Threading::ManualResetEvent_type);
    type = (::g::Uno::Threading::ManualResetEvent_type*)uClassType::New("Uno.Threading.PosixManualResetEvent", options);
    type->SetBase(::g::Uno::Threading::ManualResetEvent_typeof());
    type->fp_Dispose = (void(*)(::g::Uno::Threading::ManualResetEvent*))PosixManualResetEvent__Dispose_fn;
    type->fp_Set = (void(*)(::g::Uno::Threading::ManualResetEvent*, bool*))PosixManualResetEvent__Set_fn;
    type->fp_WaitOne = (void(*)(::g::Uno::Threading::ManualResetEvent*, bool*))PosixManualResetEvent__WaitOne_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))PosixManualResetEvent__Dispose_fn;
    ::TYPES[17] = ::g::Uno::IntPtr_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::ManualResetEvent_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Uno::Threading::PosixManualResetEvent, _handle), 0);
    return type;
}

// public PosixManualResetEvent(bool initialState) :390
void PosixManualResetEvent__ctor_1_fn(PosixManualResetEvent* __this, bool* initialState)
{
    __this->ctor_1(*initialState);
}

// public override sealed void Dispose() :415
void PosixManualResetEvent__Dispose_fn(PosixManualResetEvent* __this)
{
    uStackFrame __("Uno.Threading.PosixManualResetEvent", "Dispose()");
    FreeState( __this->_handle );
}

// public PosixManualResetEvent New(bool initialState) :390
void PosixManualResetEvent__New1_fn(bool* initialState, PosixManualResetEvent** __retval)
{
    *__retval = PosixManualResetEvent::New1(*initialState);
}

// public override sealed bool Set() :410
void PosixManualResetEvent__Set_fn(PosixManualResetEvent* __this, bool* __retval)
{
    uStackFrame __("Uno.Threading.PosixManualResetEvent", "Set()");
    return *__retval = ResetEvent_Set( __this->_handle ), void();
}

// public override sealed bool WaitOne() :395
void PosixManualResetEvent__WaitOne_fn(PosixManualResetEvent* __this, bool* __retval)
{
    uStackFrame __("Uno.Threading.PosixManualResetEvent", "WaitOne()");
    return *__retval = ResetEvent_WaitOne( __this->_handle ), void();
}

// public PosixManualResetEvent(bool initialState) [instance] :390
void PosixManualResetEvent::ctor_1(bool initialState)
{
    uStackFrame __("Uno.Threading.PosixManualResetEvent", ".ctor(bool)");
    _handle = ::g::Uno::IntPtr::Zero();
    ctor_();
    _handle = AllocateState( initialState, false );
}

// public PosixManualResetEvent New(bool initialState) [static] :390
PosixManualResetEvent* PosixManualResetEvent::New1(bool initialState)
{
    PosixManualResetEvent* obj1 = (PosixManualResetEvent*)uNew(PosixManualResetEvent_typeof());
    obj1->ctor_1(initialState);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\Implementation\Cpp\$.uno(78)
// --------------------------------------------------------------------------------

// internal sealed extern class POSIXMutex :78
// {
::g::Uno::Threading::Mutex_type* POSIXMutex_typeof()
{
    static uSStrong< ::g::Uno::Threading::Mutex_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(POSIXMutex);
    options.TypeSize = sizeof(::g::Uno::Threading::Mutex_type);
    type = (::g::Uno::Threading::Mutex_type*)uClassType::New("Uno.Threading.POSIXMutex", options);
    type->SetBase(::g::Uno::Threading::Mutex_typeof());
    type->fp_ctor_ = (void*)POSIXMutex__New1_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Dispose_fn;
    type->fp_Lock = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Lock_fn;
    type->fp_Unlock = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Unlock_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))POSIXMutex__Dispose_fn;
    ::TYPES[17] = ::g::Uno::IntPtr_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Mutex_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Uno::Threading::POSIXMutex, _handle), 0);
    return type;
}

// public POSIXMutex() :82
void POSIXMutex__ctor_1_fn(POSIXMutex* __this)
{
    __this->ctor_1();
}

// public override sealed void Dispose() :111
void POSIXMutex__Dispose_fn(POSIXMutex* __this)
{
    uStackFrame __("Uno.Threading.POSIXMutex", "Dispose()");

    if (::g::Uno::IntPtr::op_Inequality(__this->_handle, ::g::Uno::IntPtr::Zero()))
    {
        free_mutex(__this->_handle);
        __this->_handle = ::g::Uno::IntPtr::Zero();
    }
}

// public override sealed void Lock() :87
void POSIXMutex__Lock_fn(POSIXMutex* __this)
{
    uStackFrame __("Uno.Threading.POSIXMutex", "Lock()");

    if (::g::Uno::IntPtr::op_Equality(__this->_handle, ::g::Uno::IntPtr::Zero()))
        U_THROW(::g::Uno::Exception::New1());

    pthread_mutex_lock( (pthread_mutex_t*)__this->_handle );
}

// public POSIXMutex New() :82
void POSIXMutex__New1_fn(POSIXMutex** __retval)
{
    *__retval = POSIXMutex::New1();
}

// public override sealed void Unlock() :103
void POSIXMutex__Unlock_fn(POSIXMutex* __this)
{
    uStackFrame __("Uno.Threading.POSIXMutex", "Unlock()");

    if (::g::Uno::IntPtr::op_Equality(__this->_handle, ::g::Uno::IntPtr::Zero()))
        U_THROW(::g::Uno::Exception::New1());

    pthread_mutex_unlock( (pthread_mutex_t*)__this->_handle );
}

// public POSIXMutex() [instance] :82
void POSIXMutex::ctor_1()
{
    uStackFrame __("Uno.Threading.POSIXMutex", ".ctor()");
    ctor_();
    _handle = init_mutex();
}

// public POSIXMutex New() [static] :82
POSIXMutex* POSIXMutex::New1()
{
    POSIXMutex* obj1 = (POSIXMutex*)uNew(POSIXMutex_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\Implementation\Cpp\$.uno(262)
// ---------------------------------------------------------------------------------

// internal sealed extern class POSIXThread :262
// {
::g::Uno::Threading::Thread_type* POSIXThread_typeof()
{
    static uSStrong< ::g::Uno::Threading::Thread_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(POSIXThread);
    options.TypeSize = sizeof(::g::Uno::Threading::Thread_type);
    type = (::g::Uno::Threading::Thread_type*)uClassType::New("Uno.Threading.POSIXThread", options);
    type->SetBase(::g::Uno::Threading::Thread_typeof());
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))POSIXThread__Equals_fn;
    type->fp_Join = (void(*)(::g::Uno::Threading::Thread*))POSIXThread__Join_fn;
    type->fp_Join1 = (void(*)(::g::Uno::Threading::Thread*, int*, bool*))POSIXThread__Join1_fn;
    type->fp_Start = (void(*)(::g::Uno::Threading::Thread*))POSIXThread__Start_fn;
    ::STRINGS[3] = uString::Const("Cannot join unstarted thread");
    ::STRINGS[4] = uString::Const("Cannot start throw more than once");
    ::TYPES[18] = ::g::Uno::ULong_typeof();
    ::TYPES[19] = ::g::Uno::Threading::Thread_typeof();
    type->SetFields(1,
        ::g::Uno::ULong_typeof(), offsetof(::g::Uno::Threading::POSIXThread, _posixHandle), 0);
    return type;
}

// private POSIXThread(ulong handle) :272
void POSIXThread__ctor_1_fn(POSIXThread* __this, uint64_t* handle)
{
    __this->ctor_1(*handle);
}

// public POSIXThread(Uno.Action callback) :278
void POSIXThread__ctor_2_fn(POSIXThread* __this, uDelegate* callback)
{
    __this->ctor_2(callback);
}

// public static Uno.Threading.POSIXThread get_CurrentThread() :267
void POSIXThread__get_CurrentThread1_fn(POSIXThread** __retval)
{
    *__retval = POSIXThread::CurrentThread1();
}

// public override sealed bool Equals(object o) :328
void POSIXThread__Equals_fn(POSIXThread* __this, uObject* o, bool* __retval)
{
    uStackFrame __("Uno.Threading.POSIXThread", "Equals(object)");
    return *__retval = uIs(o, POSIXThread_typeof()) ? pthread_equal((pthread_t)__this->_posixHandle, (pthread_t)uPtr(uCast<POSIXThread*>(o, POSIXThread_typeof()))->_posixHandle) != 0 : false, void();
}

// public override sealed void Join() :304
void POSIXThread__Join_fn(POSIXThread* __this)
{
    uStackFrame __("Uno.Threading.POSIXThread", "Join()");

    if (__this->_posixHandle == 0ULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Cannot join...*/]));

    pthread_join(((pthread_t)__this->_posixHandle), NULL);
}

// public override sealed bool Join(int timeoutMillis) :312
void POSIXThread__Join1_fn(POSIXThread* __this, int* timeoutMillis, bool* __retval)
{
    uStackFrame __("Uno.Threading.POSIXThread", "Join(int)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// private POSIXThread New(ulong handle) :272
void POSIXThread__New1_fn(uint64_t* handle, POSIXThread** __retval)
{
    *__retval = POSIXThread::New1(*handle);
}

// public POSIXThread New(Uno.Action callback) :278
void POSIXThread__New2_fn(uDelegate* callback, POSIXThread** __retval)
{
    *__retval = POSIXThread::New2(callback);
}

// public static void Sleep(int millis) :322
void POSIXThread__Sleep1_fn(int* millis)
{
    POSIXThread::Sleep1(*millis);
}

// public override sealed void Start() :296
void POSIXThread__Start_fn(POSIXThread* __this)
{
    uStackFrame __("Uno.Threading.POSIXThread", "Start()");

    if (__this->_posixHandle != 0ULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Cannot star...*/]));

    thread_start( &__this->_posixHandle, __this->_callback );
}

// private POSIXThread(ulong handle) [instance] :272
void POSIXThread::ctor_1(uint64_t handle)
{
    uStackFrame __("Uno.Threading.POSIXThread", ".ctor(ulong)");
    _posixHandle = 0ULL;
    ctor_(NULL);
    _posixHandle = handle;
}

// public POSIXThread(Uno.Action callback) [instance] :278
void POSIXThread::ctor_2(uDelegate* callback)
{
    uStackFrame __("Uno.Threading.POSIXThread", ".ctor(Uno.Action)");
    _posixHandle = 0ULL;
    ctor_(callback);
}

// private POSIXThread New(ulong handle) [static] :272
POSIXThread* POSIXThread::New1(uint64_t handle)
{
    POSIXThread* obj1 = (POSIXThread*)uNew(POSIXThread_typeof());
    obj1->ctor_1(handle);
    return obj1;
}

// public POSIXThread New(Uno.Action callback) [static] :278
POSIXThread* POSIXThread::New2(uDelegate* callback)
{
    POSIXThread* obj2 = (POSIXThread*)uNew(POSIXThread_typeof());
    obj2->ctor_2(callback);
    return obj2;
}

// public static void Sleep(int millis) [static] :322
void POSIXThread::Sleep1(int millis)
{
    uStackFrame __("Uno.Threading.POSIXThread", "Sleep(int)");
    uint64_t microSeconds = (uint64_t)millis * 1000ULL;
    thread_sleep( microSeconds );
}

// public static Uno.Threading.POSIXThread get_CurrentThread() [static] :267
POSIXThread* POSIXThread::CurrentThread1()
{
    uStackFrame __("Uno.Threading.POSIXThread", "get_CurrentThread()");
    return POSIXThread::New1((uint64_t)pthread_self());
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(361)
// --------------------------------------------------------------

// public sealed class Promise<T> :361
// {
::g::Uno::Threading::Future_type* Promise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Promise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Promise`1", options);
    type->SetBase(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0)));
    type->fp_ctor_ = (void*)Promise__New1_fn;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))Promise__Cancel_fn;
    type->fp_Wait = (void(*)(::g::Uno::Threading::Future*))Promise__Wait_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    ::TYPES[20] = ::g::Uno::Threading::Future1_typeof();
    ::TYPES[21] = ::g::Uno::Threading::TaskFuture_typeof();
    type->SetPrecalc(
        ::TYPES[20/*Uno.Threading.Future`1*/]->MakeType(type->T(0)),
        ::TYPES[21/*Uno.Threading.TaskFuture`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(8);
    type->Reflection.SetFunctions(8,
        new uFunction(".ctor", type, (void*)Promise__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)Promise__New2_fn, 0, true, type, 1, type->T(0)),
        new uFunction(".ctor", type, (void*)Promise__New3_fn, 0, true, type, 1, ::g::Uno::Threading::IDispatcher_typeof()),
        new uFunction(".ctor", type, (void*)Promise__New4_fn, 0, true, type, 2, ::g::Uno::Threading::IDispatcher_typeof(), type->T(0)),
        new uFunction("Reject", NULL, (void*)Promise__Reject_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Exception_typeof()),
        new uFunction("Resolve", NULL, (void*)Promise__Resolve_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Run", type, (void*)Promise__Run_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0)), 1, ::g::Uno::Func_typeof()->MakeType(type->T(0))),
        new uFunction("Run", type, (void*)Promise__Run1_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0)), 2, ::g::Uno::Threading::IDispatcher_typeof(), ::g::Uno::Func_typeof()->MakeType(type->T(0))));
    return type;
}

// public Promise() :383
void Promise__ctor_3_fn(Promise* __this)
{
    __this->ctor_3();
}

// public Promise(T result) :371
void Promise__ctor_4_fn(Promise* __this, void* result)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Threading.Promise`1", ".ctor(T)");
    __this->ctor_1();
    Promise__Resolve_fn(__this, result);
}

// public Promise(Uno.Threading.IDispatcher dispatcher) :381
void Promise__ctor_5_fn(Promise* __this, uObject* dispatcher)
{
    __this->ctor_5(dispatcher);
}

// public Promise(Uno.Threading.IDispatcher dispatcher, T result) :376
void Promise__ctor_6_fn(Promise* __this, uObject* dispatcher, void* result)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Threading.Promise`1", ".ctor(Uno.Threading.IDispatcher,T)");
    __this->ctor_2(dispatcher);
    Promise__Resolve_fn(__this, result);
}

// public override sealed void Cancel([bool shutdownGracefully]) :367
void Promise__Cancel_fn(Promise* __this, bool* shutdownGracefully)
{
}

// public Promise New() :383
void Promise__New1_fn(uType* __type, Promise** __retval)
{
    *__retval = Promise::New1(__type);
}

// public Promise New(T result) :371
void Promise__New2_fn(uType* __type, void* result, Promise** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    Promise* obj1 = (Promise*)uNew(__type);
    Promise__ctor_4_fn(obj1, result);
    return *__retval = obj1, void();
}

// public Promise New(Uno.Threading.IDispatcher dispatcher) :381
void Promise__New3_fn(uType* __type, uObject* dispatcher, Promise** __retval)
{
    *__retval = Promise::New3(__type, dispatcher);
}

// public Promise New(Uno.Threading.IDispatcher dispatcher, T result) :376
void Promise__New4_fn(uType* __type, uObject* dispatcher, void* result, Promise** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    Promise* obj2 = (Promise*)uNew(__type);
    Promise__ctor_6_fn(obj2, dispatcher, result);
    return *__retval = obj2, void();
}

// public void Reject(Uno.Exception reason) :390
void Promise__Reject_fn(Promise* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// public void Resolve(T result) :385
void Promise__Resolve_fn(Promise* __this, void* result)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Threading.Promise`1", "Resolve(T)");
    ::g::Uno::Threading::Future1__InternalResolve_fn(__this, result);
}

// public static Uno.Threading.Future<T> Run(Uno.Func<T> func) :400
void Promise__Run_fn(uType* __type, uDelegate* func, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Promise::Run(__type, func);
}

// public static Uno.Threading.Future<T> Run(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :395
void Promise__Run1_fn(uType* __type, uObject* dispatcher, uDelegate* func, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Promise::Run1(__type, dispatcher, func);
}

// public override sealed void Wait() :363
void Promise__Wait_fn(Promise* __this)
{
}

// public Promise() [instance] :383
void Promise::ctor_3()
{
    uStackFrame __("Uno.Threading.Promise`1", ".ctor()");
    ctor_1();
}

// public Promise(Uno.Threading.IDispatcher dispatcher) [instance] :381
void Promise::ctor_5(uObject* dispatcher)
{
    uStackFrame __("Uno.Threading.Promise`1", ".ctor(Uno.Threading.IDispatcher)");
    ctor_2(dispatcher);
}

// public void Reject(Uno.Exception reason) [instance] :390
void Promise::Reject(::g::Uno::Exception* reason)
{
    uStackFrame __("Uno.Threading.Promise`1", "Reject(Uno.Exception)");
    InternalReject(reason);
}

// public Promise New() [static] :383
Promise* Promise::New1(uType* __type)
{
    Promise* obj4 = (Promise*)uNew(__type);
    obj4->ctor_3();
    return obj4;
}

// public Promise New(Uno.Threading.IDispatcher dispatcher) [static] :381
Promise* Promise::New3(uType* __type, uObject* dispatcher)
{
    Promise* obj3 = (Promise*)uNew(__type);
    obj3->ctor_5(dispatcher);
    return obj3;
}

// public static Uno.Threading.Future<T> Run(Uno.Func<T> func) [static] :400
::g::Uno::Threading::Future1* Promise::Run(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Future<T>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Threading.TaskFuture<T>*/),
    };
    uStackFrame __("Uno.Threading.Promise`1", "Run(Uno.Func<T>)");
    return (::g::Uno::Threading::TaskFuture*)::g::Uno::Threading::TaskFuture::New1(__types[2], func);
}

// public static Uno.Threading.Future<T> Run(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [static] :395
::g::Uno::Threading::Future1* Promise::Run1(uType* __type, uObject* dispatcher, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Future<T>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Threading.TaskFuture<T>*/),
    };
    uStackFrame __("Uno.Threading.Promise`1", "Run(Uno.Threading.IDispatcher,Uno.Func<T>)");
    return (::g::Uno::Threading::TaskFuture*)::g::Uno::Threading::TaskFuture::New2(__types[2], dispatcher, func);
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(342)
// --------------------------------------------------------------

// internal sealed class SyncDispatcher :342
// {
SyncDispatcher_type* SyncDispatcher_typeof()
{
    static uSStrong<SyncDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SyncDispatcher);
    options.TypeSize = sizeof(SyncDispatcher_type);
    type = (SyncDispatcher_type*)uClassType::New("Uno.Threading.SyncDispatcher", options);
    type->fp_ctor_ = (void*)SyncDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))SyncDispatcher__Invoke_fn;
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(SyncDispatcher_type, interface0));
    return type;
}

// public generated SyncDispatcher() :342
void SyncDispatcher__ctor__fn(SyncDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :344
void SyncDispatcher__Invoke_fn(SyncDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public generated SyncDispatcher New() :342
void SyncDispatcher__New1_fn(SyncDispatcher** __retval)
{
    *__retval = SyncDispatcher::New1();
}

// public generated SyncDispatcher() [instance] :342
void SyncDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :344
void SyncDispatcher::Invoke(uDelegate* action)
{
    uStackFrame __("Uno.Threading.SyncDispatcher", "Invoke(Uno.Action)");
    uPtr(action)->InvokeVoid();
}

// public generated SyncDispatcher New() [static] :342
SyncDispatcher* SyncDispatcher::New1()
{
    SyncDispatcher* obj1 = (SyncDispatcher*)uNew(SyncDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\Tasks\$.uno(65)
// -------------------------------------------------------------------

// internal sealed class Task :65
// {
Task_type* Task_typeof()
{
    static uSStrong<Task_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Task);
    options.TypeSize = sizeof(Task_type);
    type = (Task_type*)uClassType::New("Uno.Threading.Task", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))Task__Dispose_fn;
    ::TYPES[22] = ::g::Uno::Exception_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Delegate_typeof();
    ::TYPES[23] = ::g::Uno::Threading::TaskDelegate_typeof();
    ::TYPES[24] = ::g::Uno::Threading::CancellationTokenSource_typeof();
    ::TYPES[25] = ::g::Uno::Threading::ITaskScheduler_typeof();
    ::TYPES[26] = ::g::Uno::Threading::ThreadPoolTaskScheduler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Task_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::CancellationTokenSource_typeof(), offsetof(::g::Uno::Threading::Task, _cancellationTokenSource), 0,
        ::g::Uno::AggregateException_typeof(), offsetof(::g::Uno::Threading::Task, _exception), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Uno::Threading::Task, _manualResetEvent), 0,
        ::g::Uno::Threading::TaskDelegate_typeof(), offsetof(::g::Uno::Threading::Task, _taskDelegate), 0,
        ::g::Uno::Threading::TaskStatus_typeof(), offsetof(::g::Uno::Threading::Task, _taskStatus), 0);
    return type;
}

// public Task(Uno.Threading.TaskDelegate taskDelegate) :106
void Task__ctor__fn(Task* __this, uDelegate* taskDelegate)
{
    __this->ctor_(taskDelegate);
}

// public Uno.Threading.CancellationTokenSource get_CancellationTokenSource() :92
void Task__get_CancellationTokenSource_fn(Task* __this, ::g::Uno::Threading::CancellationTokenSource** __retval)
{
    *__retval = __this->CancellationTokenSource();
}

// public void Dispose() :121
void Task__Dispose_fn(Task* __this)
{
    __this->Dispose();
}

// public Uno.AggregateException get_Exception() :86
void Task__get_Exception_fn(Task* __this, ::g::Uno::AggregateException** __retval)
{
    *__retval = __this->Exception();
}

// protected void set_Exception(Uno.AggregateException value) :87
void Task__set_Exception_fn(Task* __this, ::g::Uno::AggregateException* value)
{
    __this->Exception(value);
}

// internal void Execute() :126
void Task__Execute_fn(Task* __this)
{
    __this->Execute();
}

// protected void InvokeTaskDelegate() :145
void Task__InvokeTaskDelegate_fn(Task* __this)
{
    __this->InvokeTaskDelegate();
}

// public Task New(Uno.Threading.TaskDelegate taskDelegate) :106
void Task__New1_fn(uDelegate* taskDelegate, Task** __retval)
{
    *__retval = Task::New1(taskDelegate);
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate) :165
void Task__Run_fn(uDelegate* taskDelegate, Task** __retval)
{
    *__retval = Task::Run(taskDelegate);
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate, Uno.Threading.ITaskScheduler scheduler) :151
void Task__Run1_fn(uDelegate* taskDelegate, uObject* scheduler, Task** __retval)
{
    *__retval = Task::Run1(taskDelegate, scheduler);
}

// public Uno.Threading.TaskStatus get_Status() :80
void Task__get_Status_fn(Task* __this, int* __retval)
{
    *__retval = __this->Status();
}

// protected void set_Status(Uno.Threading.TaskStatus value) :81
void Task__set_Status_fn(Task* __this, int* value)
{
    __this->Status(*value);
}

// public void Wait() :111
void Task__Wait_fn(Task* __this)
{
    __this->Wait();
}

// public Task(Uno.Threading.TaskDelegate taskDelegate) [instance] :106
void Task::ctor_(uDelegate* taskDelegate)
{
    uStackFrame __("Uno.Threading.Task", ".ctor(Uno.Threading.TaskDelegate)");
    _cancellationTokenSource = ::g::Uno::Threading::CancellationTokenSource::New1();
    _manualResetEvent = ::g::Uno::Threading::ManualResetEvent::Create(false);
    _taskDelegate = taskDelegate;
}

// public Uno.Threading.CancellationTokenSource get_CancellationTokenSource() [instance] :92
::g::Uno::Threading::CancellationTokenSource* Task::CancellationTokenSource()
{
    uStackFrame __("Uno.Threading.Task", "get_CancellationTokenSource()");
    return _cancellationTokenSource;
}

// public void Dispose() [instance] :121
void Task::Dispose()
{
    uStackFrame __("Uno.Threading.Task", "Dispose()");
    uPtr(_manualResetEvent)->Dispose();
}

// public Uno.AggregateException get_Exception() [instance] :86
::g::Uno::AggregateException* Task::Exception()
{
    uStackFrame __("Uno.Threading.Task", "get_Exception()");
    return _exception;
}

// protected void set_Exception(Uno.AggregateException value) [instance] :87
void Task::Exception(::g::Uno::AggregateException* value)
{
    uStackFrame __("Uno.Threading.Task", "set_Exception(Uno.AggregateException)");
    _exception = value;
}

// internal void Execute() [instance] :126
void Task::Execute()
{
    uStackFrame __("Uno.Threading.Task", "Execute()");

    {
        const auto __finally_fun = [&]()
        {
            uPtr(_manualResetEvent)->Set();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            Status(3);
            InvokeTaskDelegate();
            Status(2);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            Status(1);
            Exception(::g::Uno::AggregateException::New7(uArray::Init< ::g::Uno::Exception*>(::TYPES[22/*Uno.Exception[]*/], 1, e)));
        }
    }
}

// protected void InvokeTaskDelegate() [instance] :145
void Task::InvokeTaskDelegate()
{
    uStackFrame __("Uno.Threading.Task", "InvokeTaskDelegate()");

    if (::g::Uno::Delegate::op_Inequality(_taskDelegate, NULL))
        uPtr(_taskDelegate)->InvokeVoid(uPtr(CancellationTokenSource())->Token());
}

// public Uno.Threading.TaskStatus get_Status() [instance] :80
int Task::Status()
{
    uStackFrame __("Uno.Threading.Task", "get_Status()");
    return _taskStatus;
}

// protected void set_Status(Uno.Threading.TaskStatus value) [instance] :81
void Task::Status(int value)
{
    uStackFrame __("Uno.Threading.Task", "set_Status(Uno.Threading.TaskStatus)");
    _taskStatus = value;
}

// public void Wait() [instance] :111
void Task::Wait()
{
    uStackFrame __("Uno.Threading.Task", "Wait()");
    uPtr(_manualResetEvent)->WaitOne();
}

// public Task New(Uno.Threading.TaskDelegate taskDelegate) [static] :106
Task* Task::New1(uDelegate* taskDelegate)
{
    Task* obj1 = (Task*)uNew(Task_typeof());
    obj1->ctor_(taskDelegate);
    return obj1;
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate) [static] :165
Task* Task::Run(uDelegate* taskDelegate)
{
    uStackFrame __("Uno.Threading.Task", "Run(Uno.Threading.TaskDelegate)");
    return Task::Run1(taskDelegate, (uObject*)::g::Uno::Threading::ThreadPoolTaskScheduler::Default());
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate, Uno.Threading.ITaskScheduler scheduler) [static] :151
Task* Task::Run1(uDelegate* taskDelegate, uObject* scheduler)
{
    uStackFrame __("Uno.Threading.Task", "Run(Uno.Threading.TaskDelegate,Uno.Threading.ITaskScheduler)");
    Task* task = Task::New1(taskDelegate);
    ::g::Uno::Threading::ITaskScheduler::ScheduleTask(uInterface(uPtr(scheduler), ::TYPES[25/*Uno.Threading.ITaskScheduler*/]), task);
    return task;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\Tasks\$.uno(61)
// -------------------------------------------------------------------

// internal delegate void TaskDelegate(Uno.Threading.CancellationToken cancellationToken) :61
uDelegateType* TaskDelegate_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Threading.TaskDelegate", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Threading::CancellationToken_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(406)
// --------------------------------------------------------------

// internal sealed class TaskFuture<T> :406
// {
::g::Uno::Threading::Future_type* TaskFuture_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TaskFuture);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.TaskFuture`1", options);
    type->SetBase(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0)));
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))TaskFuture__Cancel_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))TaskFuture__Dispose_fn;
    type->fp_Wait = (void(*)(::g::Uno::Threading::Future*))TaskFuture__Wait_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TaskFuture__Dispose_fn;
    ::STRINGS[5] = uString::Const("wait");
    ::STRINGS[6] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Uno.Threading\\0.24.5\\$.uno");
    ::TYPES[23] = ::g::Uno::Threading::TaskDelegate_typeof();
    ::TYPES[27] = ::g::Uno::Threading::Task_typeof();
    ::TYPES[4] = ::g::Uno::Delegate_typeof();
    ::TYPES[28] = ::g::Uno::Func_typeof();
    type->SetPrecalc(
        ::TYPES[28/*Uno.Func`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(8,
        ::g::Uno::Func_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Threading::TaskFuture, _func), 0,
        ::g::Uno::Threading::Task_typeof(), offsetof(::g::Uno::Threading::TaskFuture, _task), 0);
    return type;
}

// public TaskFuture(Uno.Func<T> func) :418
void TaskFuture__ctor_3_fn(TaskFuture* __this, uDelegate* func)
{
    __this->ctor_3(func);
}

// public TaskFuture(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :412
void TaskFuture__ctor_4_fn(TaskFuture* __this, uObject* dispatcher, uDelegate* func)
{
    __this->ctor_4(dispatcher, func);
}

// public override sealed void Cancel([bool shutdownGracefully]) :445
void TaskFuture__Cancel_fn(TaskFuture* __this, bool* shutdownGracefully)
{
    uStackFrame __("Uno.Threading.TaskFuture`1", "Cancel([bool])");
    uPtr(uPtr(__this->_task)->CancellationTokenSource())->Cancel();
}

// public override sealed void Dispose() :450
void TaskFuture__Dispose_fn(TaskFuture* __this)
{
    uStackFrame __("Uno.Threading.TaskFuture`1", "Dispose()");
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    uPtr(__this->_task)->Dispose();
}

// private void Invoke(Uno.Threading.CancellationToken cancellationToken) :424
void TaskFuture__Invoke1_fn(TaskFuture* __this, ::g::Uno::Threading::CancellationToken* cancellationToken)
{
    __this->Invoke1(cancellationToken);
}

// public TaskFuture New(Uno.Func<T> func) :418
void TaskFuture__New1_fn(uType* __type, uDelegate* func, TaskFuture** __retval)
{
    *__retval = TaskFuture::New1(__type, func);
}

// public TaskFuture New(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :412
void TaskFuture__New2_fn(uType* __type, uObject* dispatcher, uDelegate* func, TaskFuture** __retval)
{
    *__retval = TaskFuture::New2(__type, dispatcher, func);
}

// public override sealed void Wait() :439
void TaskFuture__Wait_fn(TaskFuture* __this)
{
    uStackFrame __("Uno.Threading.TaskFuture`1", "Wait()");
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"wait"*/], 1, ::STRINGS[6/*"C:\\Program...*/], 441);
    uPtr(__this->_task)->Wait();
}

// public TaskFuture(Uno.Func<T> func) [instance] :418
void TaskFuture::ctor_3(uDelegate* func)
{
    uStackFrame __("Uno.Threading.TaskFuture`1", ".ctor(Uno.Func<T>)");
    ctor_1();
    _func = func;
    _task = ::g::Uno::Threading::Task::Run(uDelegate::New(::TYPES[23/*Uno.Threading.TaskDelegate*/], (void*)TaskFuture__Invoke1_fn, this));
}

// public TaskFuture(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [instance] :412
void TaskFuture::ctor_4(uObject* dispatcher, uDelegate* func)
{
    uStackFrame __("Uno.Threading.TaskFuture`1", ".ctor(Uno.Threading.IDispatcher,Uno.Func<T>)");
    ctor_2(dispatcher);
    _func = func;
    _task = ::g::Uno::Threading::Task::Run(uDelegate::New(::TYPES[23/*Uno.Threading.TaskDelegate*/], (void*)TaskFuture__Invoke1_fn, this));
}

// private void Invoke(Uno.Threading.CancellationToken cancellationToken) [instance] :424
void TaskFuture::Invoke1(::g::Uno::Threading::CancellationToken* cancellationToken)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Uno.Func<T>*/),
    };
    uStackFrame __("Uno.Threading.TaskFuture`1", "Invoke(Uno.Threading.CancellationToken)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT result(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    try
    {
        result = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));

        if (::g::Uno::Delegate::op_Inequality(_func, NULL))
            result = (uPtr(_func)->Invoke(&ret3), ret3);

        ::g::Uno::Threading::Future1__InternalResolve_fn(this, result);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        InternalReject(e);
    }
}

// public TaskFuture New(Uno.Func<T> func) [static] :418
TaskFuture* TaskFuture::New1(uType* __type, uDelegate* func)
{
    TaskFuture* obj2 = (TaskFuture*)uNew(__type);
    obj2->ctor_3(func);
    return obj2;
}

// public TaskFuture New(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [static] :412
TaskFuture* TaskFuture::New2(uType* __type, uObject* dispatcher, uDelegate* func)
{
    TaskFuture* obj1 = (TaskFuture*)uNew(__type);
    obj1->ctor_4(dispatcher, func);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\Tasks\$.uno(52)
// -------------------------------------------------------------------

// internal enum TaskStatus :52
uEnumType* TaskStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.TaskStatus", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Created", 0LL,
        "Faulted", 1LL,
        "RanToCompletion", 2LL,
        "Running", 3LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(510)
// --------------------------------------------------------------

// public abstract class Thread :510
// {
Thread_type* Thread_typeof()
{
    static uSStrong<Thread_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Thread);
    options.TypeSize = sizeof(Thread_type);
    type = (Thread_type*)uClassType::New("Uno.Threading.Thread", options);
    ::STRINGS[0] = uString::Const("Feature not supported in this backend");
    ::TYPES[29] = ::g::Uno::Threading::POSIXThread_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Threading::Thread, _callback), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("Create", NULL, (void*)Thread__Create_fn, 0, true, Thread_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("get_CurrentThread", NULL, (void*)Thread__get_CurrentThread_fn, 0, true, Thread_typeof(), 0),
        new uFunction("Join", NULL, NULL, offsetof(Thread_type, fp_Join), false, uVoid_typeof(), 0),
        new uFunction("Join", NULL, NULL, offsetof(Thread_type, fp_Join1), false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Sleep", NULL, (void*)Thread__Sleep_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Start", NULL, NULL, offsetof(Thread_type, fp_Start), false, uVoid_typeof(), 0));
    return type;
}

// protected Thread(Uno.Action callback) :536
void Thread__ctor__fn(Thread* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// public static Uno.Threading.Thread Create(Uno.Action callback) :513
void Thread__Create_fn(uDelegate* callback, Thread** __retval)
{
    *__retval = Thread::Create(callback);
}

// public static Uno.Threading.Thread get_CurrentThread() :549
void Thread__get_CurrentThread_fn(Thread** __retval)
{
    *__retval = Thread::CurrentThread();
}

// public static void Sleep(int millis) :564
void Thread__Sleep_fn(int* millis)
{
    Thread::Sleep(*millis);
}

// protected Thread(Uno.Action callback) [instance] :536
void Thread::ctor_(uDelegate* callback)
{
    uStackFrame __("Uno.Threading.Thread", ".ctor(Uno.Action)");
    _callback = callback;
}

// public static Uno.Threading.Thread Create(Uno.Action callback) [static] :513
Thread* Thread::Create(uDelegate* callback)
{
    uStackFrame __("Uno.Threading.Thread", "Create(Uno.Action)");
    return ::g::Uno::Threading::POSIXThread::New2(callback);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}

// public static void Sleep(int millis) [static] :564
void Thread::Sleep(int millis)
{
    uStackFrame __("Uno.Threading.Thread", "Sleep(int)");
    ::g::Uno::Threading::POSIXThread::Sleep1(millis);
    return;
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}

// public static Uno.Threading.Thread get_CurrentThread() [static] :549
Thread* Thread::CurrentThread()
{
    uStackFrame __("Uno.Threading.Thread", "get_CurrentThread()");
    return ::g::Uno::Threading::POSIXThread::CurrentThread1();
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(771)
// --------------------------------------------------------------

// public sealed class ThreadPool :771
// {
ThreadPool_type* ThreadPool_typeof()
{
    static uSStrong<ThreadPool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ThreadPool);
    options.TypeSize = sizeof(ThreadPool_type);
    type = (ThreadPool_type*)uClassType::New("Uno.Threading.ThreadPool", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadPool__Dispose_fn;
    ::TYPES[30] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(ThreadPool__WorkItem_typeof());
    ::TYPES[31] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Threading::Thread_typeof());
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[32] = ::g::Uno::Bool_typeof();
    ::TYPES[33] = ThreadPool__WorkItem_typeof();
    ::TYPES[19] = ::g::Uno::Threading::Thread_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadPool_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Threading::Thread_typeof()), offsetof(::g::Uno::Threading::ThreadPool, _disposeQueue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _isDisposed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _poolSize), 0,
        ::g::Uno::Threading::AutoResetEvent_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _resetEvent), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _running), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(ThreadPool__WorkItem_typeof()), offsetof(::g::Uno::Threading::ThreadPool, _taskQueue), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Dispose", NULL, (void*)ThreadPool__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ThreadPool__New1_fn, 0, true, ThreadPool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("QueueAction", NULL, (void*)ThreadPool__QueueAction_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()));
    return type;
}

// public ThreadPool([int poolSize]) :822
void ThreadPool__ctor__fn(ThreadPool* __this, int* poolSize)
{
    __this->ctor_(*poolSize);
}

// public void Dispose() :877
void ThreadPool__Dispose_fn(ThreadPool* __this)
{
    __this->Dispose();
}

// private bool DoTask() :850
void ThreadPool__DoTask_fn(ThreadPool* __this, bool* __retval)
{
    *__retval = __this->DoTask();
}

// public ThreadPool New([int poolSize]) :822
void ThreadPool__New1_fn(int* poolSize, ThreadPool** __retval)
{
    *__retval = ThreadPool::New1(*poolSize);
}

// public void QueueAction(Uno.Action action) :861
void ThreadPool__QueueAction_fn(ThreadPool* __this, uDelegate* action)
{
    __this->QueueAction(action);
}

// private void WorkerEntrypoint() :837
void ThreadPool__WorkerEntrypoint_fn(ThreadPool* __this)
{
    __this->WorkerEntrypoint();
}

// public ThreadPool([int poolSize]) [instance] :822
void ThreadPool::ctor_(int poolSize)
{
    uStackFrame __("Uno.Threading.ThreadPool", ".ctor([int])");
    _resetEvent = ::g::Uno::Threading::AutoResetEvent::Create(false);
    _taskQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[30/*Uno.Threading.ConcurrentQueue<Uno.Threading.ThreadPool.WorkItem>*/]));
    _running = true;
    _disposeQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[31/*Uno.Threading.ConcurrentQueue<Uno.Threading.Thread>*/]));
    _poolSize = poolSize;

    for (int i = 0; i < _poolSize; i++)
    {
        ::g::Uno::Threading::Thread* t = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)ThreadPool__WorkerEntrypoint_fn, this));
        uPtr(t)->Start();
    }
}

// public void Dispose() [instance] :877
void ThreadPool::Dispose()
{
    uStackFrame __("Uno.Threading.ThreadPool", "Dispose()");
    bool ret2;

    if (_isDisposed)
        return;

    _isDisposed = true;

    while (!uPtr(_taskQueue)->IsEmpty())
        ::g::Uno::Threading::Thread::Sleep(1);

    _running = false;
    int disposeCount = 0;

    while (disposeCount != _poolSize)
    {
        uPtr(_resetEvent)->Set();
        ::g::Uno::Threading::Thread* thread;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_disposeQueue), (void**)(&thread), &ret2), ret2))
        {
            uPtr(thread)->Join();
            disposeCount++;
        }
    }

    uPtr(_resetEvent)->Dispose();
    uPtr(_taskQueue)->Dispose();
    uPtr(_disposeQueue)->Dispose();
}

// private bool DoTask() [instance] :850
bool ThreadPool::DoTask()
{
    uStackFrame __("Uno.Threading.ThreadPool", "DoTask()");
    bool ret3;
    ThreadPool__WorkItem* workItem;

    if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_taskQueue), (void**)(&workItem), &ret3), ret3))
    {
        uPtr(workItem)->Invoke();
        return true;
    }

    return false;
}

// public void QueueAction(Uno.Action action) [instance] :861
void ThreadPool::QueueAction(uDelegate* action)
{
    uStackFrame __("Uno.Threading.ThreadPool", "QueueAction(Uno.Action)");
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_taskQueue), ThreadPool__DefaultWorkItem::New1(action));
    uPtr(_resetEvent)->Set();
}

// private void WorkerEntrypoint() [instance] :837
void ThreadPool::WorkerEntrypoint()
{
    uStackFrame __("Uno.Threading.ThreadPool", "WorkerEntrypoint()");

    while (_running)
    {
        ::uAutoReleasePool ____pool;

        if (DoTask())
            continue;

        uPtr(_resetEvent)->WaitOne();
    }

    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_disposeQueue), ::g::Uno::Threading::Thread::CurrentThread());
}

// public ThreadPool New([int poolSize]) [static] :822
ThreadPool* ThreadPool::New1(int poolSize)
{
    ThreadPool* obj1 = (ThreadPool*)uNew(ThreadPool_typeof());
    obj1->ctor_(poolSize);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\Tasks\$.uno(211)
// --------------------------------------------------------------------

// internal sealed class ThreadPoolTaskScheduler :211
// {
// static ThreadPoolTaskScheduler() :222
static void ThreadPoolTaskScheduler__cctor__fn(uType* __type)
{
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[36/*Uno.EventHandler*/], (void*)ThreadPoolTaskScheduler__OnWindowClosed_fn));
}

ThreadPoolTaskScheduler_type* ThreadPoolTaskScheduler_typeof()
{
    static uSStrong<ThreadPoolTaskScheduler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ThreadPoolTaskScheduler);
    options.TypeSize = sizeof(ThreadPoolTaskScheduler_type);
    type = (ThreadPoolTaskScheduler_type*)uClassType::New("Uno.Threading.ThreadPoolTaskScheduler", options);
    type->fp_ctor_ = (void*)ThreadPoolTaskScheduler__New1_fn;
    type->fp_cctor_ = ThreadPoolTaskScheduler__cctor__fn;
    type->interface0.fp_ScheduleTask = (void(*)(uObject*, ::g::Uno::Threading::Task*))ThreadPoolTaskScheduler__ScheduleTask_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ThreadPoolTaskScheduler__Dispose_fn;
    ::TYPES[34] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[35] = ::g::Uno::Application_typeof();
    ::TYPES[36] = ::g::Uno::EventHandler_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Threading::ITaskScheduler_typeof(), offsetof(ThreadPoolTaskScheduler_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadPoolTaskScheduler_type, interface1));
    type->SetFields(0,
        ::g::Uno::Threading::ThreadPool_typeof(), offsetof(::g::Uno::Threading::ThreadPoolTaskScheduler, _threadPool), 0,
        ThreadPoolTaskScheduler_typeof(), (uintptr_t)&::g::Uno::Threading::ThreadPoolTaskScheduler::_default_, uFieldFlagsStatic);
    return type;
}

// public ThreadPoolTaskScheduler() :238
void ThreadPoolTaskScheduler__ctor__fn(ThreadPoolTaskScheduler* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.ThreadPoolTaskScheduler get_Default() :217
void ThreadPoolTaskScheduler__get_Default_fn(ThreadPoolTaskScheduler** __retval)
{
    *__retval = ThreadPoolTaskScheduler::Default();
}

// public void Dispose() :248
void ThreadPoolTaskScheduler__Dispose_fn(ThreadPoolTaskScheduler* __this)
{
    __this->Dispose();
}

// public ThreadPoolTaskScheduler New() :238
void ThreadPoolTaskScheduler__New1_fn(ThreadPoolTaskScheduler** __retval)
{
    *__retval = ThreadPoolTaskScheduler::New1();
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) :227
void ThreadPoolTaskScheduler__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    ThreadPoolTaskScheduler::OnWindowClosed(sender, args);
}

// public void ScheduleTask(Uno.Threading.Task task) :243
void ThreadPoolTaskScheduler__ScheduleTask_fn(ThreadPoolTaskScheduler* __this, ::g::Uno::Threading::Task* task)
{
    __this->ScheduleTask(task);
}

uSStrong<ThreadPoolTaskScheduler*> ThreadPoolTaskScheduler::_default_;

// public ThreadPoolTaskScheduler() [instance] :238
void ThreadPoolTaskScheduler::ctor_()
{
    uStackFrame __("Uno.Threading.ThreadPoolTaskScheduler", ".ctor()");
    _threadPool = ::g::Uno::Threading::ThreadPool::New1(4);
}

// public void Dispose() [instance] :248
void ThreadPoolTaskScheduler::Dispose()
{
    uStackFrame __("Uno.Threading.ThreadPoolTaskScheduler", "Dispose()");
    uPtr(_threadPool)->Dispose();
}

// public void ScheduleTask(Uno.Threading.Task task) [instance] :243
void ThreadPoolTaskScheduler::ScheduleTask(::g::Uno::Threading::Task* task)
{
    uStackFrame __("Uno.Threading.ThreadPoolTaskScheduler", "ScheduleTask(Uno.Threading.Task)");
    uPtr(_threadPool)->QueueAction(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)::g::Uno::Threading::Task__Execute_fn, uPtr(task)));
}

// public ThreadPoolTaskScheduler New() [static] :238
ThreadPoolTaskScheduler* ThreadPoolTaskScheduler::New1()
{
    ThreadPoolTaskScheduler* obj2 = (ThreadPoolTaskScheduler*)uNew(ThreadPoolTaskScheduler_typeof());
    obj2->ctor_();
    return obj2;
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) [static] :227
void ThreadPoolTaskScheduler::OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Uno.Threading.ThreadPoolTaskScheduler", "OnWindowClosed(object,Uno.EventArgs)");
    ThreadPoolTaskScheduler_typeof()->Init();

    if (ThreadPoolTaskScheduler::_default() != NULL)
    {
        uPtr(ThreadPoolTaskScheduler::_default())->Dispose();
        ThreadPoolTaskScheduler::_default() = NULL;
    }
}

// public static Uno.Threading.ThreadPoolTaskScheduler get_Default() [static] :217
ThreadPoolTaskScheduler* ThreadPoolTaskScheduler::Default()
{
    uStackFrame __("Uno.Threading.ThreadPoolTaskScheduler", "get_Default()");
    ThreadPoolTaskScheduler_typeof()->Init();
    ThreadPoolTaskScheduler* ind1 = ThreadPoolTaskScheduler::_default();
    return (ind1 != NULL) ? ind1 : (ThreadPoolTaskScheduler*)(ThreadPoolTaskScheduler::_default() = ThreadPoolTaskScheduler::New1());
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Threading\0.24.5\$.uno(774)
// --------------------------------------------------------------

// private abstract class ThreadPool.WorkItem :774
// {
ThreadPool__WorkItem_type* ThreadPool__WorkItem_typeof()
{
    static uSStrong<ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ThreadPool__WorkItem);
    options.TypeSize = sizeof(ThreadPool__WorkItem_type);
    type = (ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.WorkItem", options);
    return type;
}

// protected generated WorkItem() :774
void ThreadPool__WorkItem__ctor__fn(ThreadPool__WorkItem* __this)
{
    __this->ctor_();
}

// protected generated WorkItem() [instance] :774
void ThreadPool__WorkItem::ctor_()
{
}
// }

}}} // ::g::Uno::Threading
