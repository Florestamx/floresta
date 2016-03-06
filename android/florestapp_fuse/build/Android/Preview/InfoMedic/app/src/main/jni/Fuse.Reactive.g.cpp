// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Behavior.h>
#include <Fuse.DataContextChangedHandler.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.AsyncArray.h>
#include <Fuse.Reactive.AsyncFunction.h>
#include <Fuse.Reactive.AsyncObject.h>
#include <Fuse.Reactive.Binding.h>
#include <Fuse.Reactive.CallEventHandler.h>
#include <Fuse.Reactive.CascadingPathSubscription.BindAttempt.h>
#include <Fuse.Reactive.CascadingPathSubscription.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.DataToResourceBinding-1.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.Dispatcher.h>
#include <Fuse.Reactive.Dispatcher.UIThreadDispatcher.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EnumArray.h>
#include <Fuse.Reactive.EnumObservable.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FileSourceTell.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.IAsyncArray.h>
#include <Fuse.Reactive.InternalPathSubscription.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.JSFileSource.h>
#include <Fuse.Reactive.Marshal.Float2Enum.h>
#include <Fuse.Reactive.Marshal.Float3Enum.h>
#include <Fuse.Reactive.Marshal.h>
#include <Fuse.Reactive.Marshal.VectorEnum.h>
#include <Fuse.Reactive.Match.h>
#include <Fuse.Reactive.Observable.h>
#include <Fuse.Reactive.ObservableSubscription.h>
#include <Fuse.Reactive.ScriptEventArgs.h>
#include <Fuse.Reactive.Select.h>
#include <Fuse.Reactive.TellObject.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Reactive.WhileEmpty.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.NameRegistry.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Color.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Func-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Stream.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Testing.Assert.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[66];
static uType* TYPES[102];

namespace g{
namespace Fuse{
namespace Reactive{

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(10)
// -------------------------------------------------------------

// internal sealed class AsyncArray :10
// {
AsyncArray_type* AsyncArray_typeof()
{
    static uSStrong<AsyncArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AsyncArray);
    options.TypeSize = sizeof(AsyncArray_type);
    type = (AsyncArray_type*)uClassType::New("Fuse.Reactive.AsyncArray", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))AsyncArray__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))AsyncArray__GetHashCode_fn;
    type->interface0.fp_Enum = (void(*)(uObject*, uObject*, uDelegate*))AsyncArray__Enum_fn;
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IAsyncArray_typeof(), offsetof(AsyncArray_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::Array_typeof(), offsetof(::g::Fuse::Reactive::AsyncArray, _arr), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::AsyncArray, _worker), 0);
    return type;
}

// public AsyncArray(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :16
void AsyncArray__ctor__fn(AsyncArray* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    __this->ctor_(worker, arr);
}

// internal Fuse.Scripting.Array get_Array() :14
void AsyncArray__get_Array_fn(AsyncArray* __this, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->Array();
}

// public void Enum(Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) :22
void AsyncArray__Enum_fn(AsyncArray* __this, uObject* thread, uDelegate* callback)
{
    __this->Enum(thread, callback);
}

// public override sealed bool Equals(object obj) :27
void AsyncArray__Equals_fn(AsyncArray* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncArray", "Equals(object)");
    AsyncArray* ao = uAs<AsyncArray*>(obj, AsyncArray_typeof());

    if (ao == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_arr)->Equals2(uPtr(ao)->_arr), void();
}

// public override sealed int GetHashCode() :34
void AsyncArray__GetHashCode_fn(AsyncArray* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncArray", "GetHashCode()");
    return *__retval = uPtr(__this->_arr)->GetHashCode(), void();
}

// public AsyncArray New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :16
void AsyncArray__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr, AsyncArray** __retval)
{
    *__retval = AsyncArray::New1(worker, arr);
}

// public AsyncArray(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [instance] :16
void AsyncArray::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    uStackFrame __("Fuse.Reactive.AsyncArray", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Array)");
    _worker = worker;
    _arr = arr;
}

// internal Fuse.Scripting.Array get_Array() [instance] :14
::g::Fuse::Scripting::Array* AsyncArray::Array()
{
    uStackFrame __("Fuse.Reactive.AsyncArray", "get_Array()");
    return _arr;
}

// public void Enum(Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) [instance] :22
void AsyncArray::Enum(uObject* thread, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.AsyncArray", "Enum(Uno.Threading.IDispatcher,Uno.Action<object[]>)");
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Reactive::EnumArray__Run_fn, ::g::Fuse::Reactive::EnumArray::New1(_worker, _arr, thread, callback)));
}

// public AsyncArray New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [static] :16
AsyncArray* AsyncArray::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    AsyncArray* obj1 = (AsyncArray*)uNew(AsyncArray_typeof());
    obj1->ctor_(worker, arr);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(80)
// -------------------------------------------------------------

// internal sealed class AsyncFunction :80
// {
uType* AsyncFunction_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AsyncFunction);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.AsyncFunction", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))AsyncFunction__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))AsyncFunction__GetHashCode_fn;
    ::STRINGS[0] = uString::Const("worker was null in AsyncFunction");
    ::STRINGS[1] = uString::Const("func was null in AsyncFunction");
    ::STRINGS[2] = uString::Const("args was null in AsyncFunction");
    ::STRINGS[3] = uString::Const("args.Sender was null in AsyncFunction");
    ::TYPES[1] = ::g::Fuse::Reactive::ScriptEventArgs_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[3] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[4] = ::g::Uno::Func1_typeof()->MakeType(uObject_typeof()->Array(), uObject_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::AsyncFunction, _function), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::AsyncFunction, _worker), 0);
    return type;
}

// public AsyncFunction(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function func) :85
void AsyncFunction__ctor__fn(AsyncFunction* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func)
{
    __this->ctor_(worker, func);
}

// public void Call(Fuse.Reactive.ScriptEventArgs args) :101
void AsyncFunction__Call_fn(AsyncFunction* __this, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    __this->Call(args);
}

// public void Call(object[] args) :94
void AsyncFunction__Call1_fn(AsyncFunction* __this, uArray* args)
{
    __this->Call1(args);
}

// public override sealed bool Equals(object obj) :109
void AsyncFunction__Equals_fn(AsyncFunction* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncFunction", "Equals(object)");
    AsyncFunction* ao = uAs<AsyncFunction*>(obj, AsyncFunction_typeof());

    if (ao == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_function)->Equals2(uPtr(ao)->_function), void();
}

// public override sealed int GetHashCode() :116
void AsyncFunction__GetHashCode_fn(AsyncFunction* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncFunction", "GetHashCode()");
    return *__retval = uPtr(__this->_function)->GetHashCode(), void();
}

// public AsyncFunction New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function func) :85
void AsyncFunction__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func, AsyncFunction** __retval)
{
    *__retval = AsyncFunction::New1(worker, func);
}

// public AsyncFunction(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function func) [instance] :85
void AsyncFunction::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func)
{
    uStackFrame __("Fuse.Reactive.AsyncFunction", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Function)");

    if (worker == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"worker was ...*/]));

    if (func == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"func was nu...*/]));

    _function = func;
    _worker = worker;
}

// public void Call(Fuse.Reactive.ScriptEventArgs args) [instance] :101
void AsyncFunction::Call(::g::Fuse::Reactive::ScriptEventArgs* args)
{
    uStackFrame __("Fuse.Reactive.AsyncFunction", "Call(Fuse.Reactive.ScriptEventArgs)");

    if (args == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"args was nu...*/]));

    if (uPtr(args)->Sender == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"args.Sender...*/]));

    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Reactive::CallEventHandler__Run_fn, ::g::Fuse::Reactive::CallEventHandler::New1(_worker, _function, args)));
}

// public void Call(object[] args) [instance] :94
void AsyncFunction::Call1(uArray* args)
{
    uStackFrame __("Fuse.Reactive.AsyncFunction", "Call(object[])");

    if (args == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"args was nu...*/]));

    ::g::Uno::Threading::IDispatcherExtensions__Invoke11_fn(::TYPES[2/*Uno.Threading.IDispatcherExtensions.Invoke1<object[], object>*/], (uObject*)_worker, uDelegate::New(::TYPES[4/*Uno.Func<object[], object>*/], uPtr(_function), offsetof(::g::Fuse::Scripting::Function_type, fp_Call)), args);
}

// public AsyncFunction New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function func) [static] :85
AsyncFunction* AsyncFunction::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* func)
{
    AsyncFunction* obj1 = (AsyncFunction*)uNew(AsyncFunction_typeof());
    obj1->ctor_(worker, func);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(222)
// --------------------------------------------------------------

// internal sealed class AsyncObject :222
// {
uType* AsyncObject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AsyncObject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.AsyncObject", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))AsyncObject__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))AsyncObject__GetHashCode_fn;
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Object_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::AsyncObject, _obj), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::AsyncObject, _worker), 0);
    return type;
}

// public AsyncObject(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :228
void AsyncObject__ctor__fn(AsyncObject* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_(worker, obj);
}

// public override sealed bool Equals(object obj) :253
void AsyncObject__Equals_fn(AsyncObject* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncObject", "Equals(object)");
    AsyncObject* ao = uAs<AsyncObject*>(obj, AsyncObject_typeof());

    if (ao == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_obj)->Equals2(uPtr(ao)->_obj), void();
}

// public override sealed int GetHashCode() :260
void AsyncObject__GetHashCode_fn(AsyncObject* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.AsyncObject", "GetHashCode()");
    return *__retval = uPtr(__this->_obj)->GetHashCode(), void();
}

// public AsyncObject New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :228
void AsyncObject__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, AsyncObject** __retval)
{
    *__retval = AsyncObject::New1(worker, obj);
}

// internal Fuse.Scripting.Object get_Object() :226
void AsyncObject__get_Object_fn(AsyncObject* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Object();
}

// public void Tell(string key, Uno.Threading.IDispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) :234
void AsyncObject__Tell_fn(AsyncObject* __this, uString* key, uObject* thread, uDelegate* callback, uDelegate* failCallback)
{
    __this->Tell(key, thread, callback, failCallback);
}

// public bool TryTellSync(string key, object& result) :239
void AsyncObject__TryTellSync_fn(AsyncObject* __this, uString* key, uObject** result, bool* __retval)
{
    *__retval = __this->TryTellSync(key, result);
}

// public AsyncObject(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [instance] :228
void AsyncObject::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    uStackFrame __("Fuse.Reactive.AsyncObject", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object)");
    _worker = worker;
    _obj = obj;
}

// internal Fuse.Scripting.Object get_Object() [instance] :226
::g::Fuse::Scripting::Object* AsyncObject::Object()
{
    uStackFrame __("Fuse.Reactive.AsyncObject", "get_Object()");
    return _obj;
}

// public void Tell(string key, Uno.Threading.IDispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) [instance] :234
void AsyncObject::Tell(uString* key, uObject* thread, uDelegate* callback, uDelegate* failCallback)
{
    uStackFrame __("Fuse.Reactive.AsyncObject", "Tell(string,Uno.Threading.IDispatcher,Uno.Action<object>,Uno.Action)");
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Reactive::TellObject__Run_fn, ::g::Fuse::Reactive::TellObject::New1(_worker, _obj, key, thread, callback, failCallback)));
}

// public bool TryTellSync(string key, object& result) [instance] :239
bool AsyncObject::TryTellSync(uString* key, uObject** result)
{
    uStackFrame __("Fuse.Reactive.AsyncObject", "TryTellSync(string,object&)");
    *result = NULL;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(uPtr(_worker)->Mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[11/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (uPtr(_obj)->ContainsKey(key))
        {
            *result = uPtr(_obj)->Item(key);
            return true;
        }
    }

    return false;
}

// public AsyncObject New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [static] :228
AsyncObject* AsyncObject::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    AsyncObject* obj1 = (AsyncObject*)uNew(AsyncObject_typeof());
    obj1->ctor_(worker, obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(2150)
// ---------------------------------------------------------------

// private sealed class CascadingPathSubscription.BindAttempt :2150
// {
uType* CascadingPathSubscription__BindAttempt_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(CascadingPathSubscription__BindAttempt);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.CascadingPathSubscription.BindAttempt", options);
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[8] = ::g::Fuse::Reactive::CascadingPathSubscription_typeof();
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = ::g::Fuse::DataContextChangedHandler_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Reactive::CascadingPathSubscription_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _cps), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _cur), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _dcChangeds), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _isDisposed), 0,
        ::g::Fuse::Reactive::InternalPathSubscription_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _ps), 0);
    return type;
}

// public BindAttempt(Fuse.Reactive.CascadingPathSubscription cps) :2157
void CascadingPathSubscription__BindAttempt__ctor__fn(CascadingPathSubscription__BindAttempt* __this, ::g::Fuse::Reactive::CascadingPathSubscription* cps)
{
    __this->ctor_(cps);
}

// public void Dispose() :2208
void CascadingPathSubscription__BindAttempt__Dispose_fn(CascadingPathSubscription__BindAttempt* __this)
{
    __this->Dispose();
}

// private void Fail() :2177
void CascadingPathSubscription__BindAttempt__Fail_fn(CascadingPathSubscription__BindAttempt* __this)
{
    __this->Fail();
}

// public BindAttempt New(Fuse.Reactive.CascadingPathSubscription cps) :2157
void CascadingPathSubscription__BindAttempt__New1_fn(::g::Fuse::Reactive::CascadingPathSubscription* cps, CascadingPathSubscription__BindAttempt** __retval)
{
    *__retval = CascadingPathSubscription__BindAttempt::New1(cps);
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) :2200
void CascadingPathSubscription__BindAttempt__OnDataContextChanged_fn(CascadingPathSubscription__BindAttempt* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataContextChanged(sender, args);
}

// private void TryBind() :2164
void CascadingPathSubscription__BindAttempt__TryBind_fn(CascadingPathSubscription__BindAttempt* __this)
{
    __this->TryBind();
}

// public BindAttempt(Fuse.Reactive.CascadingPathSubscription cps) [instance] :2157
void CascadingPathSubscription__BindAttempt::ctor_(::g::Fuse::Reactive::CascadingPathSubscription* cps)
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", ".ctor(Fuse.Reactive.CascadingPathSubscription)");
    _dcChangeds = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<Fuse.Node>*/]));
    _cps = cps;
    _cur = uPtr(cps)->_n;
    TryBind();
}

// public void Dispose() [instance] :2208
void CascadingPathSubscription__BindAttempt::Dispose()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "Dispose()");
    ::g::Fuse::Node* ret2;

    if (_isDisposed)
        return;

    _isDisposed = true;

    if (_ps != NULL)
    {
        uPtr(_ps)->Dispose();
        _ps = NULL;
    }

    for (int i = 0; i < uPtr(_dcChangeds)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dcChangeds), uCRef<int>(i), &ret2), ret2))->remove_DataContextChanged(uDelegate::New(::TYPES[10/*Fuse.DataContextChangedHandler*/], (void*)CascadingPathSubscription__BindAttempt__OnDataContextChanged_fn, this));
}

// private void Fail() [instance] :2177
void CascadingPathSubscription__BindAttempt::Fail()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "Fail()");

    if (_isDisposed)
        return;

    if (_ps != NULL)
    {
        uPtr(_ps)->Dispose();
        _ps = NULL;
    }

    uObject* curdc = uPtr(_cur)->DataContext();

    while (_cur != NULL)
    {
        uObject* dc = uPtr(_cur)->DataContext();

        if ((dc != NULL) && (dc != curdc))
        {
            TryBind();
            return;
        }

        _cur = uPtr(_cur)->Parent();
    }
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) [instance] :2200
void CascadingPathSubscription__BindAttempt::OnDataContextChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "OnDataContextChanged(object,Uno.EventArgs)");

    if (_isDisposed)
        return;

    uPtr(_cps)->RestartBinding();
}

// private void TryBind() [instance] :2164
void CascadingPathSubscription__BindAttempt::TryBind()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "TryBind()");
    uObject* dc = uPtr(_cur)->DataContext();
    ::g::Uno::Collections::List__Add_fn(uPtr(_dcChangeds), _cur);
    uPtr(_cur)->add_DataContextChanged(uDelegate::New(::TYPES[10/*Fuse.DataContextChangedHandler*/], (void*)CascadingPathSubscription__BindAttempt__OnDataContextChanged_fn, this));

    if (dc != NULL)
    {
        _ps = ::g::Fuse::Reactive::InternalPathSubscription::New2(uPtr(_cps)->_b, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)CascadingPathSubscription__BindAttempt__Fail_fn, this));
        uPtr(_ps)->Init(uPtr(_cur)->DataContext(), uPtr(_cps)->_path);
    }
}

// public BindAttempt New(Fuse.Reactive.CascadingPathSubscription cps) [static] :2157
CascadingPathSubscription__BindAttempt* CascadingPathSubscription__BindAttempt::New1(::g::Fuse::Reactive::CascadingPathSubscription* cps)
{
    CascadingPathSubscription__BindAttempt* obj1 = (CascadingPathSubscription__BindAttempt*)uNew(CascadingPathSubscription__BindAttempt_typeof());
    obj1->ctor_(cps);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(314)
// --------------------------------------------------------------

// public abstract class Binding :314
// {
Binding_type* Binding_typeof()
{
    static uSStrong<Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Binding);
    options.TypeSize = sizeof(Binding_type);
    type = (Binding_type*)uClassType::New("Fuse.Reactive.Binding", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Binding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Binding__OnUnrooted_fn;
    ::TYPES[11] = ::g::Uno::IDisposable_typeof();
    ::TYPES[12] = ::g::Fuse::Behavior_typeof();
    type->SetFields(3,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::Binding, _pathSubscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Binding, _Key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Key", NULL, (void*)Binding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// protected Binding(string key) :321
void Binding__ctor_1_fn(Binding* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :317
void Binding__get_Key_fn(Binding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :317
void Binding__set_Key_fn(Binding* __this, uString* value)
{
    __this->Key(value);
}

// protected Fuse.Node get_Node() :319
void Binding__get_Node_fn(Binding* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// protected override void OnRooted(Fuse.Node n) :328
void Binding__OnRooted_fn(Binding* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Binding", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    __this->_pathSubscription = (uObject*)::g::Fuse::Reactive::CascadingPathSubscription::New1(__this, __this->Node(), __this->Key());
}

// protected override void OnUnrooted(Fuse.Node n) :334
void Binding__OnUnrooted_fn(Binding* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Binding", "OnUnrooted(Fuse.Node)");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_pathSubscription), ::TYPES[11/*Uno.IDisposable*/]));
    __this->_pathSubscription = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, n);
}

// protected Binding(string key) [instance] :321
void Binding::ctor_1(uString* key)
{
    uStackFrame __("Fuse.Reactive.Binding", ".ctor(string)");
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :317
uString* Binding::Key()
{
    uStackFrame __("Fuse.Reactive.Binding", "get_Key()");
    return _Key;
}

// private generated void set_Key(string value) [instance] :317
void Binding::Key(uString* value)
{
    uStackFrame __("Fuse.Reactive.Binding", "set_Key(string)");
    _Key = value;
}

// protected Fuse.Node get_Node() [instance] :319
::g::Fuse::Node* Binding::Node()
{
    uStackFrame __("Fuse.Reactive.Binding", "get_Node()");
    return ParentNode();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(122)
// --------------------------------------------------------------

// internal sealed class CallEventHandler :122
// {
CallEventHandler_type* CallEventHandler_typeof()
{
    static uSStrong<CallEventHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CallEventHandler);
    options.TypeSize = sizeof(CallEventHandler_type);
    type = (CallEventHandler_type*)uClassType::New("Fuse.Reactive.CallEventHandler", options);
    type->interface0.fp_AddString = (void(*)(uObject*, uString*, uString*))CallEventHandler__AddString_fn;
    type->interface0.fp_AddInt = (void(*)(uObject*, uString*, int*))CallEventHandler__AddInt_fn;
    type->interface0.fp_AddDouble = (void(*)(uObject*, uString*, double*))CallEventHandler__AddDouble_fn;
    type->interface0.fp_AddBool = (void(*)(uObject*, uString*, bool*))CallEventHandler__AddBool_fn;
    type->interface0.fp_AddObject = (void(*)(uObject*, uString*, uObject*))CallEventHandler__AddObject_fn;
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.24.7\\$.uno");
    ::STRINGS[5] = uString::Const("AddBool");
    ::STRINGS[6] = uString::Const("AddDouble");
    ::STRINGS[7] = uString::Const("AddInt");
    ::STRINGS[8] = uString::Const("AddObject");
    ::STRINGS[9] = uString::Const("AddString");
    ::STRINGS[10] = uString::Const("Run");
    ::STRINGS[11] = uString::Const("setValueExclusive");
    ::STRINGS[12] = uString::Const("data");
    ::STRINGS[13] = uString::Const("sender");
    ::TYPES[5] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::Double_typeof();
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[1] = ::g::Fuse::Reactive::ScriptEventArgs_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[17] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(CallEventHandler_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::ScriptEventArgs_typeof(), offsetof(::g::Fuse::Reactive::CallEventHandler, _args), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::CallEventHandler, _func), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::CallEventHandler, _function), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::CallEventHandler, _obj), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::CallEventHandler, _worker), 0);
    return type;
}

// public CallEventHandler(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function function, Fuse.Reactive.ScriptEventArgs args) :136
void CallEventHandler__ctor__fn(CallEventHandler* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    __this->ctor_(worker, function, args);
}

// public CallEventHandler(Fuse.Reactive.ThreadWorker worker, string function, Fuse.Reactive.ScriptEventArgs args) :129
void CallEventHandler__ctor_1_fn(CallEventHandler* __this, ::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    __this->ctor_1(worker, function, args);
}

// public void AddBool(string key, bool value) :203
void CallEventHandler__AddBool_fn(CallEventHandler* __this, uString* key, bool* value)
{
    __this->AddBool(key, *value);
}

// public void AddDouble(string key, double value) :197
void CallEventHandler__AddDouble_fn(CallEventHandler* __this, uString* key, double* value)
{
    __this->AddDouble(key, *value);
}

// public void AddInt(string key, int value) :191
void CallEventHandler__AddInt_fn(CallEventHandler* __this, uString* key, int* value)
{
    __this->AddInt(key, *value);
}

// public void AddObject(string key, object value) :179
void CallEventHandler__AddObject_fn(CallEventHandler* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public void AddString(string key, string value) :185
void CallEventHandler__AddString_fn(CallEventHandler* __this, uString* key, uString* value)
{
    __this->AddString(key, value);
}

// public CallEventHandler New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function function, Fuse.Reactive.ScriptEventArgs args) :136
void CallEventHandler__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args, CallEventHandler** __retval)
{
    *__retval = CallEventHandler::New1(worker, function, args);
}

// public CallEventHandler New(Fuse.Reactive.ThreadWorker worker, string function, Fuse.Reactive.ScriptEventArgs args) :129
void CallEventHandler__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args, CallEventHandler** __retval)
{
    *__retval = CallEventHandler::New2(worker, function, args);
}

// public void Run() :143
void CallEventHandler__Run_fn(CallEventHandler* __this)
{
    __this->Run();
}

// public CallEventHandler(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function function, Fuse.Reactive.ScriptEventArgs args) [instance] :136
void CallEventHandler::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Function,Fuse.Reactive.ScriptEventArgs)");
    _worker = worker;
    _func = function;
    _args = args;
}

// public CallEventHandler(Fuse.Reactive.ThreadWorker worker, string function, Fuse.Reactive.ScriptEventArgs args) [instance] :129
void CallEventHandler::ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", ".ctor(Fuse.Reactive.ThreadWorker,string,Fuse.Reactive.ScriptEventArgs)");
    _worker = worker;
    _function = function;
    _args = args;
}

// public void AddBool(string key, bool value) [instance] :203
void CallEventHandler::AddBool(uString* key, bool value)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "AddBool(string,bool)");
    ::g::Uno::Testing::Assert::IsTrue(uPtr(_worker)->IsOnWorkerThread(), ::STRINGS[4/*"C:\\Program...*/], 205, ::STRINGS[5/*"AddBool"*/]);
    uPtr(_obj)->Item(key, uBox(::TYPES[19/*bool*/], value));
}

// public void AddDouble(string key, double value) [instance] :197
void CallEventHandler::AddDouble(uString* key, double value)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "AddDouble(string,double)");
    ::g::Uno::Testing::Assert::IsTrue(uPtr(_worker)->IsOnWorkerThread(), ::STRINGS[4/*"C:\\Program...*/], 199, ::STRINGS[6/*"AddDouble"*/]);
    uPtr(_obj)->Item(key, uBox(::TYPES[14/*double*/], value));
}

// public void AddInt(string key, int value) [instance] :191
void CallEventHandler::AddInt(uString* key, int value)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "AddInt(string,int)");
    ::g::Uno::Testing::Assert::IsTrue(uPtr(_worker)->IsOnWorkerThread(), ::STRINGS[4/*"C:\\Program...*/], 193, ::STRINGS[7/*"AddInt"*/]);
    uPtr(_obj)->Item(key, uBox(::TYPES[14/*double*/], (double)value));
}

// public void AddObject(string key, object value) [instance] :179
void CallEventHandler::AddObject(uString* key, uObject* value)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "AddObject(string,object)");
    ::g::Uno::Testing::Assert::IsTrue(uPtr(_worker)->IsOnWorkerThread(), ::STRINGS[4/*"C:\\Program...*/], 181, ::STRINGS[8/*"AddObject"*/]);
    uPtr(_obj)->Item(key, ::g::Fuse::Reactive::Marshal::Unwrap(value));
}

// public void AddString(string key, string value) [instance] :185
void CallEventHandler::AddString(uString* key, uString* value)
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "AddString(string,string)");
    ::g::Uno::Testing::Assert::IsTrue(uPtr(_worker)->IsOnWorkerThread(), ::STRINGS[4/*"C:\\Program...*/], 187, ::STRINGS[9/*"AddString"*/]);
    uPtr(_obj)->Item(key, value);
}

// public void Run() [instance] :143
void CallEventHandler::Run()
{
    uStackFrame __("Fuse.Reactive.CallEventHandler", "Run()");
    ::g::Uno::Testing::Assert::IsTrue(uPtr(_worker)->IsOnWorkerThread(), ::STRINGS[4/*"C:\\Program...*/], 145, ::STRINGS[10/*"Run"*/]);
    uObject* dc = uPtr(uPtr(_args)->Sender)->DataContext();

    if (::g::Uno::String::op_Inequality(_function, NULL) && uPtr(uPtr(uPtr(_worker)->Context())->GlobalObject())->ContainsKey(_function))
    {
        uObject* obj = uPtr(uPtr(uPtr(_worker)->Context())->GlobalObject())->Item(_function);
        ::g::Fuse::Scripting::Object* obs = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[6/*Fuse.Scripting.Object*/]);

        if (obs != NULL)
        {
            uPtr(obs)->CallMethod(::STRINGS[11/*"setValueExc...*/], uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (uObject*)::g::Fuse::Reactive::Marshal::Unwrap(dc)));
            return;
        }

        _func = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[17/*Fuse.Scripting.Function*/]);
    }

    if (_func == NULL)
        return;

    _obj = uPtr(uPtr(_worker)->Context())->NewObject();
    uPtr(_obj)->Item(::STRINGS[12/*"data"*/], ::g::Fuse::Reactive::Marshal::Unwrap(dc));

    if (::g::Uno::String::op_Inequality(uPtr(uPtr(_args)->Sender)->Name(), NULL))
        uPtr(_obj)->Item(::STRINGS[13/*"sender"*/], uPtr(uPtr(_args)->Sender)->Name());

    if (uPtr(_args)->Args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(uPtr(_args)->Args), ::TYPES[53/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);

    uPtr(_func)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (::g::Fuse::Scripting::Object*)_obj));
}

// public CallEventHandler New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Function function, Fuse.Reactive.ScriptEventArgs args) [static] :136
CallEventHandler* CallEventHandler::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    CallEventHandler* obj2 = (CallEventHandler*)uNew(CallEventHandler_typeof());
    obj2->ctor_(worker, function, args);
    return obj2;
}

// public CallEventHandler New(Fuse.Reactive.ThreadWorker worker, string function, Fuse.Reactive.ScriptEventArgs args) [static] :129
CallEventHandler* CallEventHandler::New2(::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    CallEventHandler* obj1 = (CallEventHandler*)uNew(CallEventHandler_typeof());
    obj1->ctor_1(worker, function, args);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(2122)
// ---------------------------------------------------------------

// internal sealed class CascadingPathSubscription :2122
// {
CascadingPathSubscription_type* CascadingPathSubscription_typeof()
{
    static uSStrong<CascadingPathSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CascadingPathSubscription);
    options.TypeSize = sizeof(CascadingPathSubscription_type);
    type = (CascadingPathSubscription_type*)uClassType::New("Fuse.Reactive.CascadingPathSubscription", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))CascadingPathSubscription__Dispose_fn;
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CascadingPathSubscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Binding_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _b), 0,
        CascadingPathSubscription__BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _bindAttempt), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _n), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _path), 0);
    return type;
}

// public CascadingPathSubscription(Fuse.Reactive.Binding b, Fuse.Node n, string path) :2130
void CascadingPathSubscription__ctor__fn(CascadingPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path)
{
    __this->ctor_(b, n, path);
}

// public void Dispose() :2225
void CascadingPathSubscription__Dispose_fn(CascadingPathSubscription* __this)
{
    __this->Dispose();
}

// public CascadingPathSubscription New(Fuse.Reactive.Binding b, Fuse.Node n, string path) :2130
void CascadingPathSubscription__New1_fn(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path, CascadingPathSubscription** __retval)
{
    *__retval = CascadingPathSubscription::New1(b, n, path);
}

// private void RestartBinding() :2139
void CascadingPathSubscription__RestartBinding_fn(CascadingPathSubscription* __this)
{
    __this->RestartBinding();
}

// public CascadingPathSubscription(Fuse.Reactive.Binding b, Fuse.Node n, string path) [instance] :2130
void CascadingPathSubscription::ctor_(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path)
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription", ".ctor(Fuse.Reactive.Binding,Fuse.Node,string)");
    _n = n;
    _b = b;
    _path = path;
    RestartBinding();
}

// public void Dispose() [instance] :2225
void CascadingPathSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription", "Dispose()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }
}

// private void RestartBinding() [instance] :2139
void CascadingPathSubscription::RestartBinding()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription", "RestartBinding()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }

    _bindAttempt = CascadingPathSubscription__BindAttempt::New1(this);
}

// public CascadingPathSubscription New(Fuse.Reactive.Binding b, Fuse.Node n, string path) [static] :2130
CascadingPathSubscription* CascadingPathSubscription::New1(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path)
{
    CascadingPathSubscription* obj1 = (CascadingPathSubscription*)uNew(CascadingPathSubscription_typeof());
    obj1->ctor_(b, n, path);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1598)
// ---------------------------------------------------------------

// public sealed class Case :1598
// {
uType* Case_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Case);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Case", options);
    type->fp_ctor_ = (void*)Case__New1_fn;
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[20] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[21] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[22] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[14] = ::g::Uno::Double_typeof();
    ::TYPES[23] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), offsetof(::g::Fuse::Reactive::Case, _factories), 0,
        ::g::Fuse::Reactive::Match_typeof(), offsetof(::g::Fuse::Reactive::Case, _match), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Case, _value), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Case, _IsDefault), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Case__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Case__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Factories", NULL, (void*)Case__get_Factories_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), 0),
        new uFunction("get_IsDefault", NULL, (void*)Case__get_IsDefault_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsDefault", NULL, (void*)Case__set_IsDefault_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Case__New1_fn, 0, true, Case_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Case__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Case__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Case__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Case__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Case__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Case__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}

// public generated Case() :1598
void Case__ctor__fn(Case* __this)
{
    __this->ctor_();
}

// public bool get_Bool() :1631
void Case__get_Bool_fn(Case* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1632
void Case__set_Bool_fn(Case* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() :1647
void Case__get_Factories_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Factories();
}

// private void Invalidate() :1658
void Case__Invalidate_fn(Case* __this)
{
    __this->Invalidate();
}

// public generated bool get_IsDefault() :1637
void Case__get_IsDefault_fn(Case* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public generated void set_IsDefault(bool value) :1638
void Case__set_IsDefault_fn(Case* __this, bool* value)
{
    __this->IsDefault(*value);
}

// public generated Case New() :1598
void Case__New1_fn(Case** __retval)
{
    *__retval = Case::New1();
}

// public double get_Number() :1625
void Case__get_Number_fn(Case* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1626
void Case__set_Number_fn(Case* __this, double* value)
{
    __this->Number(*value);
}

// private void OnFactoriesChanged(Uno.UX.Factory f) :1653
void Case__OnFactoriesChanged_fn(Case* __this, ::g::Uno::UX::Factory* f)
{
    __this->OnFactoriesChanged(f);
}

// public string get_String() :1619
void Case__get_String_fn(Case* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1620
void Case__set_String_fn(Case* __this, uString* value)
{
    __this->String(value);
}

// public object get_Value() :1606
void Case__get_Value_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1607
void Case__set_Value_fn(Case* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Case() [instance] :1598
void Case::ctor_()
{
}

// public bool get_Bool() [instance] :1631
bool Case::Bool()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Bool()");
    return uIs(_value, ::TYPES[19/*bool*/]) ? uUnbox<bool>(::TYPES[19/*bool*/], _value) : false;
}

// public void set_Bool(bool value) [instance] :1632
void Case::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Bool(bool)");
    Value(uBox(::TYPES[19/*bool*/], value));
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() [instance] :1647
uObject* Case::Factories()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Factories()");
    uObject* ind1 = _factories;
    return (ind1 != NULL) ? ind1 : (uObject*)(_factories = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[21/*Uno.Collections.ObservableList<Uno.UX.Factory>*/], uDelegate::New(::TYPES[22/*Uno.Action<Uno.UX.Factory>*/], (void*)Case__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[22/*Uno.Action<Uno.UX.Factory>*/], (void*)Case__OnFactoriesChanged_fn, this))));
}

// private void Invalidate() [instance] :1658
void Case::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Case", "Invalidate()");

    if (_match != NULL)
        uPtr(_match)->Invalidate();
}

// public generated bool get_IsDefault() [instance] :1637
bool Case::IsDefault()
{
    uStackFrame __("Fuse.Reactive.Case", "get_IsDefault()");
    return _IsDefault;
}

// public generated void set_IsDefault(bool value) [instance] :1638
void Case::IsDefault(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_IsDefault(bool)");
    _IsDefault = value;
}

// public double get_Number() [instance] :1625
double Case::Number()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Number()");
    return uIs(_value, ::TYPES[14/*double*/]) ? uUnbox<double>(::TYPES[14/*double*/], _value) : 0.0;
}

// public void set_Number(double value) [instance] :1626
void Case::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Number(double)");
    Value(uBox(::TYPES[14/*double*/], value));
}

// private void OnFactoriesChanged(Uno.UX.Factory f) [instance] :1653
void Case::OnFactoriesChanged(::g::Uno::UX::Factory* f)
{
    uStackFrame __("Fuse.Reactive.Case", "OnFactoriesChanged(Uno.UX.Factory)");
    Invalidate();
}

// public string get_String() [instance] :1619
uString* Case::String()
{
    uStackFrame __("Fuse.Reactive.Case", "get_String()");
    return uAs<uString*>(_value, ::TYPES[23/*string*/]);
}

// public void set_String(string value) [instance] :1620
void Case::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_String(string)");
    Value(value);
}

// public object get_Value() [instance] :1606
uObject* Case::Value()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1607
void Case::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Value(object)");

    if (_value != value)
    {
        _value = value;
        Invalidate();
    }
}

// public generated Case New() [static] :1598
Case* Case::New1()
{
    Case* obj2 = (Case*)uNew(Case_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(597)
// --------------------------------------------------------------

// internal static class Console :597
// {
uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.24.7\\$.uno");
    ::STRINGS[14] = uString::Const("[Function]");
    ::STRINGS[15] = uString::Const("[object]");
    ::STRINGS[16] = uString::Const("[array]");
    ::STRINGS[17] = uString::Const(" - ");
    ::STRINGS[18] = uString::Const("log");
    ::STRINGS[19] = uString::Const("dir");
    ::STRINGS[20] = uString::Const("console");
    ::STRINGS[21] = uString::Const("null");
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[24] = ::g::Uno::Int_typeof();
    ::TYPES[25] = ::g::Uno::Float_typeof();
    ::TYPES[14] = ::g::Uno::Double_typeof();
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[26] = ::g::Uno::String_typeof()->Array();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Context_typeof();
    return type;
}

// private static object Dir(object[] args) :617
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int indent]) :630
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* indent)
{
    Console::Dir1(builder, obj, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :690
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :599
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :607
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :617
uObject* Console::Dir(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(object[])");
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 0);

    ::g::Uno::Diagnostics::Debug::Log5(builder->ToString(), 1, ::STRINGS[4/*"C:\\Program...*/], 626);
    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int indent]) [static] :630
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(Uno.Text.StringBuilder,object,[int])");
    uArray* array1;
    int index2;
    int length3;

    if ((((uIs(obj, ::TYPES[24/*int*/]) || uIs(obj, ::TYPES[25/*float*/])) || uIs(obj, ::TYPES[14/*double*/])) || uIs(obj, ::TYPES[19/*bool*/])) || uIs(obj, ::TYPES[23/*string*/]))
    {
        Console::Indent(builder, indent);
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[17/*Fuse.Scripting.Function*/]))
    {
        Console::Indent(builder, indent);
        uPtr(builder)->AppendLine(::STRINGS[14/*"[Function]"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[6/*Fuse.Scripting.Object*/]))
    {
        if (indent >= 1)
        {
            Console::Indent(builder, indent);
            uPtr(builder)->AppendLine(::STRINGS[15/*"[object]"*/]);
        }
        else
        {
            ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[6/*Fuse.Scripting.Object*/]);

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->AppendLine(k);
                Console::Dir1(builder, uPtr(o)->Item(k), indent + 1);
            }
        }

        return;
    }

    if (uIs(obj, ::TYPES[27/*Fuse.Scripting.Array*/]))
    {
        if (indent >= 1)
        {
            Console::Indent(builder, indent);
            uPtr(builder)->AppendLine(::STRINGS[16/*"[array]"*/]);
        }
        else
        {
            ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[27/*Fuse.Scripting.Array*/]);

            for (int i = 0; i < uPtr(a)->Length(); i++)
                Console::Dir1(builder, uPtr(a)->Item(i), indent);
        }

        return;
    }
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :690
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Indent(Uno.Text.StringBuilder,int)");

    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append1(::STRINGS[17/*" - "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :599
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.Console", "Init(Fuse.Scripting.Context)");
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[18/*"log"*/], uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[19/*"dir"*/], uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[20/*"console"*/], console);
}

// private static object Log(object[] args) [static] :607
uObject* Console::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[21/*"null"*/], 1, ::STRINGS[4/*"C:\\Program...*/], 611);

    return NULL;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(355)
// --------------------------------------------------------------

// public class DataBinding<T> :355
// {
DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding`1", options);
    type->SetBase(::g::Fuse::Reactive::Binding_typeof());
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::Binding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DataBinding__OnUnrooted_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))DataBinding__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, uObject*, uString*))DataBinding__FuseScriptingINameListenerOnNameChanged_fn;
    ::STRINGS[22] = uString::Const("Not handled: OnAdd");
    ::STRINGS[23] = uString::Const("Not handled: OnFailed");
    ::STRINGS[24] = uString::Const("Not handled: OnInsertAt");
    ::STRINGS[25] = uString::Const("Not handled: OnNewAll");
    ::STRINGS[26] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[27] = uString::Const("Not handled: OnRemoveAt");
    ::TYPES[29] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[31] = ::g::Uno::UX::Property_typeof();
    ::TYPES[32] = ::g::Uno::UX::ValueChangedHandler_typeof();
    ::TYPES[33] = ::g::Fuse::Scripting::INameListener_typeof();
    ::TYPES[34] = ::g::Uno::UX::ValueChangedArgs_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[12] = ::g::Fuse::Behavior_typeof();
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[35] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[36] = ::g::Fuse::Reactive::Marshal_typeof();
    ::TYPES[37] = ::g::Uno::Action1_typeof();
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    type->SetPrecalc(
        ::TYPES[31/*Uno.UX.Property`1*/]->MakeType(type->T(0)),
        ::TYPES[32/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0)),
        ::TYPES[34/*Uno.UX.ValueChangedArgs`1*/]->MakeType(type->T(0)),
        ::TYPES[36/*Fuse.Reactive.Marshal*/]->MakeMethod(1, type->T(0)),
        ::TYPES[37/*Uno.Action`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::Scripting::INameListener_typeof(), offsetof(DataBinding_type, interface1));
    type->SetFields(5,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _currentValue), 0,
        ::g::Fuse::Reactive::ObservableSubscription_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _subscription), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Reactive::DataBinding, _Target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)DataBinding__New1_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)DataBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0));
    return type;
}

// public DataBinding(Uno.UX.Property<T> target, string key) :361
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property* target, uString* key)
{
    __this->ctor_2(target, key);
}

// private bool Acceptor(object obj) :521
void DataBinding__Acceptor_fn(DataBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :371
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[22/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :381
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnFailed(string)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[23/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :397
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[24/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(int length) :386
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, int* length)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnNewAll(int)");
    int length_ = *length;

    if (length_ > 0)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[25/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :376
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[26/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :392
void DataBinding__FuseReactiveIObserverOnRemove_fn(DataBinding* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[27/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :366
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->PushValue(newValue);
}

// private void Fuse.Scripting.INameListener.OnNameChanged(object obj, string name) :424
void DataBinding__FuseScriptingINameListenerOnNameChanged_fn(DataBinding* __this, uObject* obj, uString* name)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Scripting.INameListener.OnNameChanged(object,string)");
    __this->PushValue(__this->_currentValue);
}

// private bool get_IsOfNodeType() :471
void DataBinding__get_IsOfNodeType_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->IsOfNodeType();
}

// public DataBinding New(Uno.UX.Property<T> target, string key) :361
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, DataBinding** __retval)
{
    *__retval = DataBinding::New1(__type, target, key);
}

// internal override void NewValue(object value) :439
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "NewValue(object)");

    if (uIs(value, __types[0]))
        __this->PushValue(value);
    else if (uIs(value, ::TYPES[29/*Fuse.Reactive.Observable*/]))
    {
        if (__this->_subscription != NULL)
        {
            uPtr(__this->_subscription)->Dispose();
            __this->_subscription = NULL;
        }

        ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(value, ::TYPES[29/*Fuse.Reactive.Observable*/]);

        if (obs != NULL)
            __this->_subscription = uPtr(obs)->Subscribe((uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :402
void DataBinding__OnRooted_fn(DataBinding* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->Precalced(0/*Uno.UX.Property<T>*/),
        __this->__type->GetBase(DataBinding_typeof())->T(0),
        __this->__type->GetBase(DataBinding_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnRooted(Fuse.Node)");
    ::g::Fuse::Reactive::Binding__OnRooted_fn(__this, parentNode);
    uPtr(__this->Target())->add_ValueChanged(uDelegate::New(__types[2], (void*)DataBinding__OnValueChanged_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :410
void DataBinding__OnUnrooted_fn(DataBinding* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->Precalced(0/*Uno.UX.Property<T>*/),
        __this->__type->GetBase(DataBinding_typeof())->T(0),
        __this->__type->GetBase(DataBinding_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::Scripting::NameRegistry::RemoveListener((uObject*)__this);
    uPtr(__this->Target())->remove_ValueChanged(uDelegate::New(__types[2], (void*)DataBinding__OnValueChanged_fn, __this));

    if (__this->_subscription != NULL)
    {
        uPtr(__this->_subscription)->Dispose();
        __this->_subscription = NULL;
    }

    ::g::Fuse::Reactive::Binding__OnUnrooted_fn(__this, parentNode);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<T> args) :429
void DataBinding__OnValueChanged_fn(DataBinding* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private void PushValue(object newValue) :473
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private void SetValue(T value) :516
void DataBinding__SetValue_fn(DataBinding* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "SetValue(T)");
    ::g::Uno::UX::Property__SetRestState_fn(uPtr(__this->Target()), value, __this);
}

// public generated Uno.UX.Property<T> get_Target() :358
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :358
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public DataBinding(Uno.UX.Property<T> target, string key) [instance] :361
void DataBinding::ctor_2(::g::Uno::UX::Property* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_1(key);
    Target(target);
}

// private bool Acceptor(object obj) [instance] :521
bool DataBinding::Acceptor(uObject* obj)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Acceptor(object)");
    return uIs(obj, __types[0]);
}

// private bool get_IsOfNodeType() [instance] :471
bool DataBinding::IsOfNodeType()
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "get_IsOfNodeType()");
    return ::g::Uno::Type::op_Equality(__types[0], ::TYPES[9/*Fuse.Node*/]) || ::g::Uno::Type::IsSubclassOf(uPtr(__types[0]), ::TYPES[9/*Fuse.Node*/]);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<T> args) [instance] :429
void DataBinding::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
        __type->GetBase(DataBinding_typeof())->Precalced(2/*Uno.UX.ValueChangedArgs<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnValueChanged(object,Uno.UX.ValueChangedArgs<T>)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if ((_subscription != NULL) && (uPtr(args)->Origin() != this))
        uPtr(_subscription)->SetExclusive(uBoxPtr(__types[0], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2)));
}

// private void PushValue(object newValue) [instance] :473
void DataBinding::PushValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
        __type->GetBase(DataBinding_typeof())->Precalced(3/*Fuse.Reactive.Marshal.ToType<T>*/),
        __type->GetBase(DataBinding_typeof())->Precalced(4/*Uno.Action<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "PushValue(object)");

    if (ParentNode() == NULL)
        return;

    _currentValue = newValue;

    if (uIs(newValue, __types[0]))
    {
        ::g::Fuse::Scripting::NameRegistry::RemoveListener((uObject*)this);
        ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), uUnboxAny(__types[0], newValue), this);
        return;
    }

    uString* name = uAs<uString*>(newValue, ::TYPES[23/*string*/]);

    if (::g::Uno::String::op_Inequality(name, NULL) && (ParentNode() != NULL))
    {
        ::g::Fuse::Scripting::NameRegistry::AddListener(name, (uObject*)this);
        ::g::Fuse::Node* k = uPtr(ParentNode())->FindNodeByName(uCast<uString*>(newValue, ::TYPES[23/*string*/]));

        if (uIs(k, __types[0]))
        {
            ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), uUnboxAny(__types[0], k), this);
            return;
        }
        else
        {
            uObject* candidate = uPtr(ParentNode())->FindObjectByName(uCast<uString*>(newValue, ::TYPES[23/*string*/]), uDelegate::New(::TYPES[35/*Uno.Predicate<object>*/], (void*)DataBinding__Acceptor_fn, this));

            if (uIs(candidate, __types[0]))
            {
                ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), uUnboxAny(__types[0], candidate), this);
                return;
            }
        }

        if (IsOfNodeType())
            return;
    }

    ::g::Fuse::Reactive::Marshal::ToType(__types[1], newValue, uDelegate::New(__types[2], (void*)DataBinding__SetValue_fn, this));
}

// public generated Uno.UX.Property<T> get_Target() [instance] :358
::g::Uno::UX::Property* DataBinding::Target()
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :358
void DataBinding::Target(::g::Uno::UX::Property* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// public DataBinding New(Uno.UX.Property<T> target, string key) [static] :361
DataBinding* DataBinding::New1(uType* __type, ::g::Uno::UX::Property* target, uString* key)
{
    DataBinding* obj1 = (DataBinding*)uNew(__type);
    obj1->ctor_2(target, key);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(529)
// --------------------------------------------------------------

// public sealed class DataToResourceBinding<T> :529
// {
::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DataToResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.DataToResourceBinding`1", options);
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0)));
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::Binding*, uObject*))DataToResourceBinding__NewValue_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseScriptingINameListenerOnNameChanged_fn;
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[12] = ::g::Fuse::Behavior_typeof();
    ::TYPES[35] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[38] = ::g::Fuse::Reactive::DataBinding_typeof();
    ::TYPES[13] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[38/*Fuse.Reactive.DataBinding`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::Scripting::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1));
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::DataToResourceBinding, _key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)DataToResourceBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()));
    return type;
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) :532
void DataToResourceBinding__ctor_3_fn(DataToResourceBinding* __this, ::g::Uno::UX::Property* target, uString* key)
{
    __this->ctor_3(target, key);
}

// private bool AcceptFunction(object obj) :564
void DataToResourceBinding__AcceptFunction_fn(DataToResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->AcceptFunction(obj);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) :532
void DataToResourceBinding__New2_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, DataToResourceBinding** __retval)
{
    *__retval = DataToResourceBinding::New2(__type, target, key);
}

// internal override sealed void NewValue(object value) :539
void DataToResourceBinding__NewValue_fn(DataToResourceBinding* __this, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "NewValue(object)");
    uString* key = uAs<uString*>(value, ::TYPES[23/*string*/]);

    if (::g::Uno::String::op_Equality(key, NULL))
        return;

    if (::g::Uno::String::op_Inequality(__this->_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));

    __this->_key = key;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));
    __this->OnChanged();
}

// private void OnChanged() :553
void DataToResourceBinding__OnChanged_fn(DataToResourceBinding* __this)
{
    __this->OnChanged();
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) [instance] :532
void DataToResourceBinding::ctor_3(::g::Uno::UX::Property* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_2(target, key);
}

// private bool AcceptFunction(object obj) [instance] :564
bool DataToResourceBinding::AcceptFunction(uObject* obj)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "AcceptFunction(object)");
    return uIs(obj, __types[0]);
}

// private void OnChanged() [instance] :553
void DataToResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Reactive.DataBinding<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "OnChanged()");

    if (::g::Uno::String::op_Equality(_key, NULL))
        return;

    if (ParentNode() == NULL)
        return;

    uObject* v;

    if (uPtr(ParentNode())->TryGetResource(_key, uDelegate::New(::TYPES[35/*Uno.Predicate<object>*/], (void*)DataToResourceBinding__AcceptFunction_fn, this), &v))
        ::g::Uno::UX::Property__SetRestState_fn(uPtr((::g::Uno::UX::Property*)Target()), uUnboxAny(__types[1], v), this);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) [static] :532
DataToResourceBinding* DataToResourceBinding::New2(uType* __type, ::g::Uno::UX::Property* target, uString* key)
{
    DataToResourceBinding* obj1 = (DataToResourceBinding*)uNew(__type);
    obj1->ctor_3(target, key);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(579)
// --------------------------------------------------------------

// internal static class DebugLog :579
// {
uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    ::STRINGS[28] = uString::Const("debug_log");
    ::STRINGS[21] = uString::Const("null");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.24.7\\$.uno");
    ::TYPES[6] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :581
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :586
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :581
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Init(Fuse.Scripting.Context)");
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[28/*"debug_log"*/], uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :586
uObject* DebugLog::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[21/*"null"*/], 1, ::STRINGS[4/*"C:\\Program...*/], 590);

    return NULL;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(708)
// --------------------------------------------------------------

// public static class Dispatcher :708
// {
uClassType* Dispatcher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Dispatcher", options);
    ::TYPES[3] = ::g::Uno::Threading::IDispatcher_typeof();
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), (uintptr_t)&::g::Fuse::Reactive::Dispatcher::_uiThread_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("get_UIThread", NULL, (void*)Dispatcher__get_UIThread_fn, 0, true, ::g::Uno::Threading::IDispatcher_typeof(), 0));
    return type;
}

// public static Uno.Threading.IDispatcher get_UIThread() :746
void Dispatcher__get_UIThread_fn(uObject** __retval)
{
    *__retval = Dispatcher::UIThread();
}

uSStrong<uObject*> Dispatcher::_uiThread_;

// public static Uno.Threading.IDispatcher get_UIThread() [static] :746
uObject* Dispatcher::UIThread()
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "get_UIThread()");

    if (Dispatcher::_uiThread() == NULL)
        Dispatcher::_uiThread() = (uObject*)Dispatcher__UIThreadDispatcher::New1();

    return Dispatcher::_uiThread();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(766)
// --------------------------------------------------------------

// public sealed class Each :766
// {
Each_type* Each_typeof()
{
    static uSStrong<Each_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(Each_type);
    type = (Each_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Each__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Each__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Each__OnUnrooted_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))Each__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))Each__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))Each__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))Each__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Each__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Each__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))Each__FuseReactiveIObserverOnNewAll_fn;
    ::TYPES[39] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof()));
    ::TYPES[40] = ::g::Fuse::IDataContext_typeof();
    ::TYPES[41] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[13] = uObject_typeof();
    ::TYPES[42] = ::g::Fuse::Reactive::AsyncObject_typeof();
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[43] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[44] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[45] = ::g::Uno::UX::Factory_typeof();
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[29] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[11] = ::g::Uno::IDisposable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[46] = ::g::Fuse::IObjectContainer_typeof();
    ::TYPES[12] = ::g::Fuse::Behavior_typeof();
    ::TYPES[47] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof()));
    ::TYPES[48] = ::g::Fuse::Reactive::IAsyncArray_typeof();
    ::TYPES[49] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[50] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array());
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[20] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[21] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[22] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Each_type, interface0));
    type->SetFields(3,
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Reactive::Each, _container), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Each, _count), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof())), offsetof(::g::Fuse::Reactive::Each, _elements), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), offsetof(::g::Fuse::Reactive::Each, _factories), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Each, _items), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Each, _matchKey), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::Each, _subscription), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("get_Count", NULL, (void*)Each__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Count", NULL, (void*)Each__set_Count_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Factories", NULL, (void*)Each__get_Factories_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), 0),
        new uFunction("get_Items", NULL, (void*)Each__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)Each__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_MatchKey", NULL, (void*)Each__get_MatchKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_MatchKey", NULL, (void*)Each__set_MatchKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Each__New1_fn, 0, true, Each_typeof(), 0));
    return type;
}

// public generated Each() :766
void Each__ctor_1_fn(Each* __this)
{
    __this->ctor_1();
}

// private void AddFactory(Uno.UX.Factory f, object dataContext, Uno.Collections.List<Fuse.IDataContext> newElements) :1080
void Each__AddFactory_fn(Each* __this, ::g::Uno::UX::Factory* f, uObject* dataContext, ::g::Uno::Collections::List* newElements)
{
    __this->AddFactory(f, dataContext, newElements);
}

// private void AddNew(object dataContext) :1037
void Each__AddNew_fn(Each* __this, uObject* dataContext)
{
    __this->AddNew(dataContext);
}

// public int get_Count() :828
void Each__get_Count_fn(Each* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void set_Count(int value) :832
void Each__set_Count_fn(Each* __this, int* value)
{
    __this->Count(*value);
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() :773
void Each__get_Factories_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Factories();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :919
void Each__FuseReactiveIObserverOnAdd_fn(Each* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnAdd(object)");

    if (__this->_container == NULL)
        return;

    __this->AddNew(addedValue);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :912
void Each__FuseReactiveIObserverOnFailed_fn(Each* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnFailed(string)");

    if (__this->_container == NULL)
        return;

    __this->RemoveAll();
    __this->SetFailed(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :938
void Each__FuseReactiveIObserverOnInsertAt_fn(Each* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (__this->_container == NULL)
        return;

    __this->InsertNew(index_, value);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAll(int length) :957
void Each__FuseReactiveIObserverOnNewAll_fn(Each* __this, int* length)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnNewAll(int)");

    if (__this->_container == NULL)
        return;

    __this->Repopulate();
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :946
void Each__FuseReactiveIObserverOnNewAt_fn(Each* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret12;
    ::g::Uno::Collections::List* ret13;
    int index_ = *index;

    if (__this->_container == NULL)
        return;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_elements), uCRef<int>(index_), &ret13), ret13)), &ret12), ret12); enum2.MoveNext(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
    {
        uObject* e = enum2.Current(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
        ::g::Fuse::IDataContext::DataContext(uInterface(uPtr(e), ::TYPES[40/*Fuse.IDataContext*/]), value);
    }

    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :926
void Each__FuseReactiveIObserverOnRemove_fn(Each* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret14;
    ::g::Uno::Collections::List* ret15;
    int index_ = *index;

    if (__this->_container == NULL)
        return;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_elements), uCRef<int>(index_), &ret15), ret15)), &ret14), ret14); enum1.MoveNext(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
    {
        uObject* c = enum1.Current(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
        ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(__this->_container), ::TYPES[46/*Fuse.IObjectContainer*/]), c);
    }

    uPtr(__this->_elements)->RemoveAt(index_);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :905
void Each__FuseReactiveIObserverOnSet_fn(Each* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnSet(object)");

    if (__this->_container == NULL)
        return;

    __this->Repopulate();
    __this->SetValid();
}

// private string GetMatchKey(object dataContext) :1023
void Each__GetMatchKey_fn(Each* __this, uObject* dataContext, uString** __retval)
{
    *__retval = __this->GetMatchKey(dataContext);
}

// private void InsertNew(int index, object dataContext) :1042
void Each__InsertNew_fn(Each* __this, int* index, uObject* dataContext)
{
    __this->InsertNew(*index, dataContext);
}

// private bool IsUnchanged(object[] newDcs) :988
void Each__IsUnchanged_fn(Each* __this, uArray* newDcs, bool* __retval)
{
    *__retval = __this->IsUnchanged(newDcs);
}

// public object get_Items() :814
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :815
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public string get_MatchKey() :1012
void Each__get_MatchKey_fn(Each* __this, uString** __retval)
{
    *__retval = __this->MatchKey();
}

// public void set_MatchKey(string value) :1013
void Each__set_MatchKey_fn(Each* __this, uString* value)
{
    __this->MatchKey(value);
}

// public generated Each New() :766
void Each__New1_fn(Each** __retval)
{
    *__retval = Each::New1();
}

// private void OnFactoriesChanged(Uno.UX.Factory factory) :780
void Each__OnFactoriesChanged_fn(Each* __this, ::g::Uno::UX::Factory* factory)
{
    __this->OnFactoriesChanged(factory);
}

// private void OnItemsChanged() :842
void Each__OnItemsChanged_fn(Each* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :788
void Each__OnRooted_fn(Each* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Each", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_container = uAs<uObject*>(__this->ParentNode(), ::TYPES[46/*Fuse.IObjectContainer*/]);
    __this->OnItemsChanged();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :795
void Each__OnUnrooted_fn(Each* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Each", "OnUnrooted(Fuse.Node)");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[11/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->RemoveAll();
    __this->_container = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void RemoveAll() :976
void Each__RemoveAll_fn(Each* __this)
{
    __this->RemoveAll();
}

// private void ReplaceAll(object[] dcs) :966
void Each__ReplaceAll_fn(Each* __this, uArray* dcs)
{
    __this->ReplaceAll(dcs);
}

// private void Repopulate() :860
void Each__Repopulate_fn(Each* __this)
{
    __this->Repopulate();
}

// private void SetFailed(string message) :894
void Each__SetFailed_fn(Each* __this, uString* message)
{
    __this->SetFailed(message);
}

// private void SetValid() :885
void Each__SetValid_fn(Each* __this)
{
    __this->SetValid();
}

// public generated Each() [instance] :766
void Each::ctor_1()
{
    uStackFrame __("Fuse.Reactive.Each", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[39/*Uno.Collections.List<Uno.Collections.List<Fuse.IDataContext>>*/]));
    ctor_();
}

// private void AddFactory(Uno.UX.Factory f, object dataContext, Uno.Collections.List<Fuse.IDataContext> newElements) [instance] :1080
void Each::AddFactory(::g::Uno::UX::Factory* f, uObject* dataContext, ::g::Uno::Collections::List* newElements)
{
    uStackFrame __("Fuse.Reactive.Each", "AddFactory(Uno.UX.Factory,object,Uno.Collections.List<Fuse.IDataContext>)");
    uObject* elm = uAs<uObject*>(uPtr(f)->New1(), ::TYPES[40/*Fuse.IDataContext*/]);

    if (elm != NULL)
    {
        if (dataContext != NULL)
            ::g::Fuse::IDataContext::DataContext(uInterface(uPtr(elm), ::TYPES[40/*Fuse.IDataContext*/]), dataContext);

        ::g::Uno::Collections::List__Add_fn(uPtr(newElements), elm);
    }
}

// private void AddNew(object dataContext) [instance] :1037
void Each::AddNew(uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "AddNew(object)");
    InsertNew(uPtr(_elements)->Count(), dataContext);
}

// public int get_Count() [instance] :828
int Each::Count()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Count()");
    return _count;
}

// public void set_Count(int value) [instance] :832
void Each::Count(int value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Count(int)");

    if (_count != value)
    {
        _count = value;
        OnItemsChanged();
    }
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() [instance] :773
uObject* Each::Factories()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Factories()");
    uObject* ind10 = _factories;
    return (ind10 != NULL) ? ind10 : (uObject*)(_factories = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[21/*Uno.Collections.ObservableList<Uno.UX.Factory>*/], uDelegate::New(::TYPES[22/*Uno.Action<Uno.UX.Factory>*/], (void*)Each__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[22/*Uno.Action<Uno.UX.Factory>*/], (void*)Each__OnFactoriesChanged_fn, this))));
}

// private string GetMatchKey(object dataContext) [instance] :1023
uString* Each::GetMatchKey(uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "GetMatchKey(object)");
    ::g::Fuse::Reactive::AsyncObject* ao = uAs< ::g::Fuse::Reactive::AsyncObject*>(dataContext, ::TYPES[42/*Fuse.Reactive.AsyncObject*/]);

    if ((ao != NULL) && ::g::Uno::String::op_Inequality(_matchKey, NULL))
    {
        uObject* result;

        if (uPtr(ao)->TryTellSync(_matchKey, &result))
            return uAs<uString*>(result, ::TYPES[23/*string*/]);
    }

    return NULL;
}

// private void InsertNew(int index, object dataContext) [instance] :1042
void Each::InsertNew(int index, uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "InsertNew(int,object)");
    ::g::Uno::UX::Factory* ret16;
    ::g::Uno::Collections::List* ret17;
    uObject* ret18;
    ::g::Uno::Collections::List* newElements = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[43/*Uno.Collections.List<Fuse.IDataContext>*/]);
    bool anyMatched = false;
    ::g::Uno::UX::Factory* defaultCase = NULL;
    uString* key = GetMatchKey(dataContext);

    for (uObject* enum9 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Factories()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[45/*Uno.UX.Factory*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum9), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Uno::UX::Factory* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum9), ::TYPES[44/*Uno.Collections.IEnumerator<Uno.UX.Factory>*/]), &ret16), ret16);

        if (uPtr(f)->IsDefaultCase())
            defaultCase = f;

        if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Inequality(uPtr(f)->Case(), key))
            continue;

        anyMatched = true;
        AddFactory(f, dataContext, newElements);
    }

    if (!anyMatched && (defaultCase != NULL))
        AddFactory(defaultCase, dataContext, newElements);

    int childIndex = 0;

    for (int i = 0; i < index; ++i)
        childIndex = childIndex + uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret17), ret17))->Count();

    for (int i1 = 0; i1 < newElements->Count(); ++i1)
        ::g::Fuse::IObjectContainer::Insert(uInterface(uPtr(_container), ::TYPES[46/*Fuse.IObjectContainer*/]), childIndex + i1, (::g::Uno::Collections::List__get_Item_fn(uPtr(newElements), uCRef<int>(i1), &ret18), ret18));

    ::g::Uno::Collections::List__Insert_fn(uPtr(_elements), uCRef<int>(index), newElements);
}

// private bool IsUnchanged(object[] newDcs) [instance] :988
bool Each::IsUnchanged(uArray* newDcs)
{
    uStackFrame __("Fuse.Reactive.Each", "IsUnchanged(object[])");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret19;
    ::g::Uno::Collections::List* ret20;

    if (newDcs == NULL)
    {
        if (uPtr(_elements)->Count() == 0)
            return true;
        else
            return false;
    }

    if (uPtr(newDcs)->Length() != uPtr(_elements)->Count())
        return false;

    for (int i = 0; i < uPtr(newDcs)->Length(); i++)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum8 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret20), ret20)), &ret19), ret19); enum8.MoveNext(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
        {
            uObject* e = enum8.Current(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);

            if (!::g::Uno::Object::Equals(uPtr(uPtr(newDcs)->Strong<uObject*>(i)), ::g::Fuse::IDataContext::DataContext(uInterface(uPtr(e), ::TYPES[40/*Fuse.IDataContext*/]))))
                return false;
        }

    return true;
}

// public object get_Items() [instance] :814
uObject* Each::Items()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :815
void Each::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public string get_MatchKey() [instance] :1012
uString* Each::MatchKey()
{
    uStackFrame __("Fuse.Reactive.Each", "get_MatchKey()");
    return _matchKey;
}

// public void set_MatchKey(string value) [instance] :1013
void Each::MatchKey(uString* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_MatchKey(string)");

    if (::g::Uno::String::op_Inequality(_matchKey, value))
    {
        _matchKey = value;
        OnItemsChanged();
    }
}

// private void OnFactoriesChanged(Uno.UX.Factory factory) [instance] :780
void Each::OnFactoriesChanged(::g::Uno::UX::Factory* factory)
{
    uStackFrame __("Fuse.Reactive.Each", "OnFactoriesChanged(Uno.UX.Factory)");

    if (_container == NULL)
        return;

    Repopulate();
}

// private void OnItemsChanged() [instance] :842
void Each::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.Each", "OnItemsChanged()");

    if (_container == NULL)
        return;

    ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(_items, ::TYPES[29/*Fuse.Reactive.Observable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[11/*Uno.IDisposable*/]));

        _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
    }
    else
        Repopulate();
}

// private void RemoveAll() [instance] :976
void Each::RemoveAll()
{
    uStackFrame __("Fuse.Reactive.Each", "RemoveAll()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret21;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret22;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret21), ret21); enum6.MoveNext(::TYPES[47/*Uno.Collections.List<Uno.Collections.List<Fuse.IDataContext>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* es = enum6.Current(::TYPES[47/*Uno.Collections.List<Uno.Collections.List<Fuse.IDataContext>>.Enumerator*/]);

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum7 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(es), &ret22), ret22); enum7.MoveNext(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
        {
            uObject* e = enum7.Current(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
            ::g::Fuse::IObjectContainer::Remove(uInterface(uPtr(_container), ::TYPES[46/*Fuse.IObjectContainer*/]), e);
        }
    }

    uPtr(_elements)->Clear();
}

// private void ReplaceAll(object[] dcs) [instance] :966
void Each::ReplaceAll(uArray* dcs)
{
    uStackFrame __("Fuse.Reactive.Each", "ReplaceAll(object[])");
    uArray* array3;
    int index4;
    int length5;

    if (IsUnchanged(dcs))
        return;

    RemoveAll();

    if (dcs != NULL)

        for (array3 = dcs, index4 = 0, length5 = uPtr(array3)->Length(); index4 < length5; ++index4)
        {
            uObject* d = uPtr(array3)->Strong<uObject*>(index4);
            AddNew(d);
        }
}

// private void Repopulate() [instance] :860
void Each::Repopulate()
{
    uStackFrame __("Fuse.Reactive.Each", "Repopulate()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[16/*object[]*/]);

    if (e != NULL)
        ReplaceAll(e);
    else
    {
        uObject* a = uAs<uObject*>(_items, ::TYPES[48/*Fuse.Reactive.IAsyncArray*/]);

        if ((a != NULL) && (Factories() != NULL))
            ::g::Fuse::Reactive::IAsyncArray::Enum(uInterface(uPtr(a), ::TYPES[48/*Fuse.Reactive.IAsyncArray*/]), ::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[50/*Uno.Action<object[]>*/], (void*)Each__ReplaceAll_fn, this));
        else
        {
            RemoveAll();

            for (int i = 0; i < Count(); i++)
                AddNew(NULL);
        }
    }
}

// private void SetFailed(string message) [instance] :894
void Each::SetFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.Each", "SetFailed(string)");
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(_container, ::TYPES[9/*Fuse.Node*/]);

    if (n != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(n, true, message);
}

// private void SetValid() [instance] :885
void Each::SetValid()
{
    uStackFrame __("Fuse.Reactive.Each", "SetValid()");
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(_container, ::TYPES[9/*Fuse.Node*/]);

    if (n != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(n, false, NULL);
}

// public generated Each New() [static] :766
Each* Each::New1()
{
    Each* obj11 = (Each*)uNew(Each_typeof());
    obj11->ctor_1();
    return obj11;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(40)
// -------------------------------------------------------------

// internal sealed class EnumArray :40
// {
uType* EnumArray_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(EnumArray);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.EnumArray", options);
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.24.7\\$.uno");
    ::STRINGS[10] = uString::Const("Run");
    ::TYPES[5] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[51] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, uObject_typeof()->Array());
    type->SetFields(0,
        ::g::Fuse::Scripting::Array_typeof(), offsetof(::g::Fuse::Reactive::EnumArray, _array), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array()), offsetof(::g::Fuse::Reactive::EnumArray, _callback), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Fuse::Reactive::EnumArray, _thread), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::EnumArray, _worker), 0);
    return type;
}

// public EnumArray(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array array, Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) :47
void EnumArray__ctor__fn(EnumArray* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, uObject* thread, uDelegate* callback)
{
    __this->ctor_(worker, array, thread, callback);
}

// public EnumArray New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array array, Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) :47
void EnumArray__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, uObject* thread, uDelegate* callback, EnumArray** __retval)
{
    *__retval = EnumArray::New1(worker, array, thread, callback);
}

// public void Run() :55
void EnumArray__Run_fn(EnumArray* __this)
{
    __this->Run();
}

// public EnumArray(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array array, Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) [instance] :47
void EnumArray::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, uObject* thread, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.EnumArray", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Array,Uno.Threading.IDispatcher,Uno.Action<object[]>)");
    _worker = worker;
    _array = array;
    _thread = thread;
    _callback = callback;
}

// public void Run() [instance] :55
void EnumArray::Run()
{
    uStackFrame __("Fuse.Reactive.EnumArray", "Run()");
    ::g::Uno::Testing::Assert::IsTrue(uPtr(_worker)->IsOnWorkerThread(), ::STRINGS[4/*"C:\\Program...*/], 57, ::STRINGS[10/*"Run"*/]);
    uArray* res = uArray::New(::TYPES[16/*object[]*/], uPtr(_array)->Length());

    for (int i = 0; i < uPtr(_array)->Length(); i++)
        uPtr(res)->Strong<uObject*>(i) = ::g::Fuse::Reactive::Marshal::Wrap(_worker, uPtr(_array)->Item(i));

    ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[51/*Uno.Threading.IDispatcherExtensions.Invoke1<object[]>*/], _thread, _callback, res);
}

// public EnumArray New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array array, Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) [static] :47
EnumArray* EnumArray::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, uObject* thread, uDelegate* callback)
{
    EnumArray* obj1 = (EnumArray*)uNew(EnumArray_typeof());
    obj1->ctor_(worker, array, thread, callback);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(2079)
// ---------------------------------------------------------------

// internal sealed class EnumObservable :2079
// {
uType* EnumObservable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(EnumObservable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.EnumObservable", options);
    ::STRINGS[29] = uString::Const("_values");
    ::TYPES[6] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[51] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, uObject_typeof()->Array());
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array()), offsetof(::g::Fuse::Reactive::EnumObservable, _callback), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::EnumObservable, _observable), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Fuse::Reactive::EnumObservable, _thread), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::EnumObservable, _worker), 0);
    return type;
}

// public EnumObservable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object observable, Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) :2086
void EnumObservable__ctor__fn(EnumObservable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, uObject* thread, uDelegate* callback)
{
    __this->ctor_(worker, observable, thread, callback);
}

// public EnumObservable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object observable, Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) :2086
void EnumObservable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, uObject* thread, uDelegate* callback, EnumObservable** __retval)
{
    *__retval = EnumObservable::New1(worker, observable, thread, callback);
}

// public void Run() :2094
void EnumObservable__Run_fn(EnumObservable* __this)
{
    __this->Run();
}

// public EnumObservable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object observable, Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) [instance] :2086
void EnumObservable::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, uObject* thread, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.EnumObservable", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,Uno.Threading.IDispatcher,Uno.Action<object[]>)");
    _worker = worker;
    _observable = observable;
    _thread = thread;
    _callback = callback;
}

// public void Run() [instance] :2094
void EnumObservable::Run()
{
    uStackFrame __("Fuse.Reactive.EnumObservable", "Run()");
    uObject* obj = uPtr(_observable)->Item(::STRINGS[29/*"_values"*/]);
    ::g::Fuse::Scripting::Array* array = uAs< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[27/*Fuse.Scripting.Array*/]);
    uArray* res = uArray::New(::TYPES[16/*object[]*/], uPtr(array)->Length());

    if (array != NULL)

        for (int i = 0; i < uPtr(array)->Length(); i++)
            uPtr(res)->Strong<uObject*>(i) = ::g::Fuse::Reactive::Marshal::Wrap(_worker, uPtr(array)->Item(i));

    ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[51/*Uno.Threading.IDispatcherExtensions.Invoke1<object[]>*/], _thread, _callback, res);
}

// public EnumObservable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object observable, Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) [static] :2086
EnumObservable* EnumObservable::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* observable, uObject* thread, uDelegate* callback)
{
    EnumObservable* obj1 = (EnumObservable*)uNew(EnumObservable_typeof());
    obj1->ctor_(worker, observable, thread, callback);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1105)
// ---------------------------------------------------------------

// public sealed class EventBinding :1105
// {
::g::Fuse::Reactive::Binding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Binding_type);
    type = (::g::Fuse::Reactive::Binding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->SetBase(::g::Fuse::Reactive::Binding_typeof());
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::Binding*, uObject*))EventBinding__NewValue_fn;
    ::STRINGS[30] = uString::Const("Can't call function when sender is unrooted");
    ::TYPES[52] = ::g::Fuse::Reactive::AsyncFunction_typeof();
    ::TYPES[53] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[12] = ::g::Fuse::Behavior_typeof();
    ::TYPES[54] = ::g::Fuse::Reactive::Binding_typeof();
    type->SetFields(5,
        ::g::Fuse::Reactive::AsyncFunction_typeof(), offsetof(::g::Fuse::Reactive::EventBinding, _func), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)EventBinding__New1_fn, 0, true, EventBinding_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnEvent", NULL, (void*)EventBinding__OnEvent_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::EventArgs_typeof()));
    return type;
}

// public EventBinding(string key) :1108
void EventBinding__ctor_2_fn(EventBinding* __this, uString* key)
{
    __this->ctor_2(key);
}

// public EventBinding New(string key) :1108
void EventBinding__New1_fn(uString* key, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key);
}

// internal override sealed void NewValue(object obj) :1115
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "NewValue(object)");
    __this->_func = uAs< ::g::Fuse::Reactive::AsyncFunction*>(obj, ::TYPES[52/*Fuse.Reactive.AsyncFunction*/]);
}

// public void OnEvent(object sender, Uno.EventArgs args) :1120
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// public EventBinding(string key) [instance] :1108
void EventBinding::ctor_2(uString* key)
{
    uStackFrame __("Fuse.Reactive.EventBinding", ".ctor(string)");
    ctor_1(key);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :1120
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnEvent(object,Uno.EventArgs)");
    uObject* se = uAs<uObject*>(args, ::TYPES[53/*Fuse.Scripting.IScriptEvent*/]);

    if (ParentNode() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[30/*"Can't call ...*/]));

    if (_func != NULL)
    {
        ::g::Fuse::Reactive::ScriptEventArgs* sea = ::g::Fuse::Reactive::ScriptEventArgs::New2(ParentNode(), Key(), se);
        uPtr(_func)->Call(sea);
    }
}

// public EventBinding New(string key) [static] :1108
EventBinding* EventBinding::New1(uString* key)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1676)
// ---------------------------------------------------------------

// internal sealed class FileSourceTell :1676
// {
uType* FileSourceTell_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FileSourceTell);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FileSourceTell", options);
    ::STRINGS[31] = uString::Const("path");
    ::TYPES[49] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[55] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[56] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof());
    ::TYPES[57] = ::g::Uno::UX::FileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof()), offsetof(::g::Fuse::Reactive::FileSourceTell, _callback), 0);
    return type;
}

// public FileSourceTell(Fuse.Reactive.AsyncObject ao, Uno.Action<Uno.UX.FileSource> callback) :1680
void FileSourceTell__ctor__fn(FileSourceTell* __this, ::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback)
{
    __this->ctor_(ao, callback);
}

// public FileSourceTell New(Fuse.Reactive.AsyncObject ao, Uno.Action<Uno.UX.FileSource> callback) :1680
void FileSourceTell__New1_fn(::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback, FileSourceTell** __retval)
{
    *__retval = FileSourceTell::New1(ao, callback);
}

// private void OnPath(object res) :1686
void FileSourceTell__OnPath_fn(FileSourceTell* __this, uObject* res)
{
    __this->OnPath(res);
}

// public FileSourceTell(Fuse.Reactive.AsyncObject ao, Uno.Action<Uno.UX.FileSource> callback) [instance] :1680
void FileSourceTell::ctor_(::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.FileSourceTell", ".ctor(Fuse.Reactive.AsyncObject,Uno.Action<Uno.UX.FileSource>)");
    _callback = callback;
    uPtr(ao)->Tell(::STRINGS[31/*"path"*/], ::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[55/*Uno.Action<object>*/], (void*)FileSourceTell__OnPath_fn, this), NULL);
}

// private void OnPath(object res) [instance] :1686
void FileSourceTell::OnPath(uObject* res)
{
    uStackFrame __("Fuse.Reactive.FileSourceTell", "OnPath(object)");
    uString* path = uAs<uString*>(res, ::TYPES[23/*string*/]);

    if (::g::Uno::String::op_Inequality(path, NULL))
        uPtr(_callback)->InvokeVoid(::g::Fuse::Reactive::JSFileSource::New1(path));
}

// public FileSourceTell New(Fuse.Reactive.AsyncObject ao, Uno.Action<Uno.UX.FileSource> callback) [static] :1680
FileSourceTell* FileSourceTell::New1(::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback)
{
    FileSourceTell* obj1 = (FileSourceTell*)uNew(FileSourceTell_typeof());
    obj1->ctor_(ao, callback);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1808)
// ---------------------------------------------------------------

// private sealed class Marshal.Float2Enum :1808
// {
uType* Marshal__Float2Enum_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Marshal__Float2Enum);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Marshal.Float2Enum", options);
    ::TYPES[58] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[59] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[60] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Reactive::Marshal__Float2Enum, _callback), 0);
    return type;
}

// public Float2Enum(object obj, Uno.Action<float2> callback) :1812
void Marshal__Float2Enum__ctor__fn(Marshal__Float2Enum* __this, uObject* obj, uDelegate* callback)
{
    __this->ctor_(obj, callback);
}

// private void Convert(float4 v) :1818
void Marshal__Float2Enum__Convert_fn(Marshal__Float2Enum* __this, ::g::Uno::Float4* v)
{
    __this->Convert(*v);
}

// public Float2Enum New(object obj, Uno.Action<float2> callback) :1812
void Marshal__Float2Enum__New1_fn(uObject* obj, uDelegate* callback, Marshal__Float2Enum** __retval)
{
    *__retval = Marshal__Float2Enum::New1(obj, callback);
}

// public Float2Enum(object obj, Uno.Action<float2> callback) [instance] :1812
void Marshal__Float2Enum::ctor_(uObject* obj, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Marshal.Float2Enum", ".ctor(object,Uno.Action<float2>)");
    _callback = callback;
    ::g::Fuse::Reactive::Marshal::ToFloat4(obj, uDelegate::New(::TYPES[58/*Uno.Action<float4>*/], (void*)Marshal__Float2Enum__Convert_fn, this));
}

// private void Convert(float4 v) [instance] :1818
void Marshal__Float2Enum::Convert(::g::Uno::Float4 v)
{
    uStackFrame __("Fuse.Reactive.Marshal.Float2Enum", "Convert(float4)");
    uPtr(_callback)->InvokeVoid(uCRef(::g::Uno::Float2__New2(v.X, v.Y)));
}

// public Float2Enum New(object obj, Uno.Action<float2> callback) [static] :1812
Marshal__Float2Enum* Marshal__Float2Enum::New1(uObject* obj, uDelegate* callback)
{
    Marshal__Float2Enum* obj1 = (Marshal__Float2Enum*)uNew(Marshal__Float2Enum_typeof());
    obj1->ctor_(obj, callback);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1792)
// ---------------------------------------------------------------

// private sealed class Marshal.Float3Enum :1792
// {
uType* Marshal__Float3Enum_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Marshal__Float3Enum);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Marshal.Float3Enum", options);
    ::TYPES[58] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[61] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float3_typeof());
    ::TYPES[60] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float3_typeof()), offsetof(::g::Fuse::Reactive::Marshal__Float3Enum, _callback), 0);
    return type;
}

// public Float3Enum(object obj, Uno.Action<float3> callback) :1796
void Marshal__Float3Enum__ctor__fn(Marshal__Float3Enum* __this, uObject* obj, uDelegate* callback)
{
    __this->ctor_(obj, callback);
}

// private void Convert(float4 v) :1802
void Marshal__Float3Enum__Convert_fn(Marshal__Float3Enum* __this, ::g::Uno::Float4* v)
{
    __this->Convert(*v);
}

// public Float3Enum New(object obj, Uno.Action<float3> callback) :1796
void Marshal__Float3Enum__New1_fn(uObject* obj, uDelegate* callback, Marshal__Float3Enum** __retval)
{
    *__retval = Marshal__Float3Enum::New1(obj, callback);
}

// public Float3Enum(object obj, Uno.Action<float3> callback) [instance] :1796
void Marshal__Float3Enum::ctor_(uObject* obj, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Marshal.Float3Enum", ".ctor(object,Uno.Action<float3>)");
    _callback = callback;
    ::g::Fuse::Reactive::Marshal::ToFloat4(obj, uDelegate::New(::TYPES[58/*Uno.Action<float4>*/], (void*)Marshal__Float3Enum__Convert_fn, this));
}

// private void Convert(float4 v) [instance] :1802
void Marshal__Float3Enum::Convert(::g::Uno::Float4 v)
{
    uStackFrame __("Fuse.Reactive.Marshal.Float3Enum", "Convert(float4)");
    uPtr(_callback)->InvokeVoid(uCRef(::g::Uno::Float3__New2(v.X, v.Y, v.Z)));
}

// public Float3Enum New(object obj, Uno.Action<float3> callback) [static] :1796
Marshal__Float3Enum* Marshal__Float3Enum::New1(uObject* obj, uDelegate* callback)
{
    Marshal__Float3Enum* obj1 = (Marshal__Float3Enum*)uNew(Marshal__Float3Enum_typeof());
    obj1->ctor_(obj, callback);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1147)
// ---------------------------------------------------------------

// public abstract interface IAsyncArray :1147
// {
uInterfaceType* IAsyncArray_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IAsyncArray", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Enum", NULL, NULL, offsetof(IAsyncArray, fp_Enum), false, uVoid_typeof(), 2, ::g::Uno::Threading::IDispatcher_typeof(), ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array())));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(2235)
// ---------------------------------------------------------------

// internal sealed class InternalPathSubscription :2235
// {
InternalPathSubscription_type* InternalPathSubscription_typeof()
{
    static uSStrong<InternalPathSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InternalPathSubscription);
    options.TypeSize = sizeof(InternalPathSubscription_type);
    type = (InternalPathSubscription_type*)uClassType::New("Fuse.Reactive.InternalPathSubscription", options);
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))InternalPathSubscription__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))InternalPathSubscription__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))InternalPathSubscription__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))InternalPathSubscription__OnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))InternalPathSubscription__OnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))InternalPathSubscription__OnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))InternalPathSubscription__OnFailed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))InternalPathSubscription__Dispose_fn;
    ::STRINGS[32] = uString::Const(".");
    ::STRINGS[33] = uString::Const("Cannot access disposed PathSubscription");
    ::STRINGS[34] = uString::Const("Data binding to '");
    ::STRINGS[35] = uString::Const("': expected single value, got array");
    ::STRINGS[36] = uString::Const("': expected single value, got array of length ");
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[49] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[55] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[11] = ::g::Uno::IDisposable_typeof();
    ::TYPES[29] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[42] = ::g::Fuse::Reactive::AsyncObject_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[13] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(InternalPathSubscription_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(InternalPathSubscription_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Reactive::Binding_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _b), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _failCallback), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _isDisposed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _isInnerLink), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _key), 0,
        InternalPathSubscription_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _next), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _subscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _unhandledPath), 0);
    return type;
}

// private InternalPathSubscription(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) :2257
void InternalPathSubscription__ctor__fn(InternalPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback)
{
    __this->ctor_(b, path, failCallback);
}

// public InternalPathSubscription(Fuse.Reactive.Binding b, Uno.Action failCallback) :2243
void InternalPathSubscription__ctor_1_fn(InternalPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, uDelegate* failCallback)
{
    __this->ctor_1(b, failCallback);
}

// private static string CombineKeyAndPath(string key, string path) :2317
void InternalPathSubscription__CombineKeyAndPath_fn(uString* key, uString* path, uString** __retval)
{
    *__retval = InternalPathSubscription::CombineKeyAndPath(key, path);
}

// public void Dispose() :2395
void InternalPathSubscription__Dispose_fn(InternalPathSubscription* __this)
{
    __this->Dispose();
}

// private void HandleNewDataContext(object val) :2266
void InternalPathSubscription__HandleNewDataContext_fn(InternalPathSubscription* __this, uObject* val)
{
    __this->HandleNewDataContext(val);
}

// private void HandleObject(Fuse.Reactive.AsyncObject obj) :2272
void InternalPathSubscription__HandleObject_fn(InternalPathSubscription* __this, ::g::Fuse::Reactive::AsyncObject* obj)
{
    __this->HandleObject(obj);
}

// private void HandleObjectCallback(object val) :2277
void InternalPathSubscription__HandleObjectCallback_fn(InternalPathSubscription* __this, uObject* val)
{
    __this->HandleObjectCallback(val);
}

// private void HandlePath(object dc, string path) :2286
void InternalPathSubscription__HandlePath_fn(InternalPathSubscription* __this, uObject* dc, uString* path)
{
    __this->HandlePath(dc, path);
}

// public void Init(object dc, string path) :2249
void InternalPathSubscription__Init_fn(InternalPathSubscription* __this, uObject* dc, uString* path)
{
    __this->Init(dc, path);
}

// private InternalPathSubscription New(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) :2257
void InternalPathSubscription__New1_fn(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback, InternalPathSubscription** __retval)
{
    *__retval = InternalPathSubscription::New1(b, path, failCallback);
}

// public InternalPathSubscription New(Fuse.Reactive.Binding b, Uno.Action failCallback) :2243
void InternalPathSubscription__New2_fn(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback, InternalPathSubscription** __retval)
{
    *__retval = InternalPathSubscription::New2(b, failCallback);
}

// public void OnAdd(object addedValue) :2350
void InternalPathSubscription__OnAdd_fn(InternalPathSubscription* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnFailed(string message) :2337
void InternalPathSubscription__OnFailed_fn(InternalPathSubscription* __this, uString* message)
{
    __this->OnFailed(message);
}

// public void OnInsertAt(int index, object value) :2364
void InternalPathSubscription__OnInsertAt_fn(InternalPathSubscription* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(int length) :2323
void InternalPathSubscription__OnNewAll_fn(InternalPathSubscription* __this, int* length)
{
    __this->OnNewAll(*length);
}

// public void OnNewAt(int index, object newValue) :2331
void InternalPathSubscription__OnNewAt_fn(InternalPathSubscription* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemove(object value, int index) :2357
void InternalPathSubscription__OnRemove_fn(InternalPathSubscription* __this, uObject* value, int* index)
{
    __this->OnRemove(value, *index);
}

// public void OnSet(object value) :2343
void InternalPathSubscription__OnSet_fn(InternalPathSubscription* __this, uObject* value)
{
    __this->OnSet(value);
}

// private static string TakeKeyFromPath(string& path) :2372
void InternalPathSubscription__TakeKeyFromPath_fn(uString** path, uString** __retval)
{
    *__retval = InternalPathSubscription::TakeKeyFromPath(path);
}

// private InternalPathSubscription(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) [instance] :2257
void InternalPathSubscription::ctor_(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", ".ctor(Fuse.Reactive.Binding,string,Uno.Action)");
    _b = b;
    _key = InternalPathSubscription::TakeKeyFromPath(&path);
    _unhandledPath = path;
    _isInnerLink = true;
    _failCallback = failCallback;
}

// public InternalPathSubscription(Fuse.Reactive.Binding b, Uno.Action failCallback) [instance] :2243
void InternalPathSubscription::ctor_1(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", ".ctor(Fuse.Reactive.Binding,Uno.Action)");
    _b = b;
    _failCallback = failCallback;
}

// public void Dispose() [instance] :2395
void InternalPathSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "Dispose()");

    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[33/*"Cannot acce...*/]));

    _isDisposed = true;

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[11/*Uno.IDisposable*/]));
        _subscription = NULL;
    }

    if (_next != NULL)
    {
        uPtr(_next)->Dispose();
        _next = NULL;
    }

    _b = NULL;
}

// private void HandleNewDataContext(object val) [instance] :2266
void InternalPathSubscription::HandleNewDataContext(uObject* val)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "HandleNewDataContext(object)");

    if (!_isInnerLink)
        U_THROW(::g::Uno::Exception::New1());

    HandlePath(val, _unhandledPath);
}

// private void HandleObject(Fuse.Reactive.AsyncObject obj) [instance] :2272
void InternalPathSubscription::HandleObject(::g::Fuse::Reactive::AsyncObject* obj)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "HandleObject(Fuse.Reactive.AsyncObject)");
    uPtr(obj)->Tell(_key, ::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[55/*Uno.Action<object>*/], (void*)InternalPathSubscription__HandleObjectCallback_fn, this), _failCallback);
}

// private void HandleObjectCallback(object val) [instance] :2277
void InternalPathSubscription::HandleObjectCallback(uObject* val)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "HandleObjectCallback(object)");

    if (_next == NULL)
        return;

    uPtr(_next)->HandleNewDataContext(val);
    uObject* disp = uAs<uObject*>(val, ::TYPES[11/*Uno.IDisposable*/]);

    if (disp != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disp), ::TYPES[11/*Uno.IDisposable*/]));
}

// private void HandlePath(object dc, string path) [instance] :2286
void InternalPathSubscription::HandlePath(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "HandlePath(object,string)");

    if (::g::Uno::String::op_Equality(_key, NULL))
        uPtr(_b)->NewValue(dc);
    else
    {
        if (_next != NULL)
            uPtr(_next)->Dispose();

        _next = NULL;
        ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(dc, ::TYPES[29/*Fuse.Reactive.Observable*/]);

        if (obs != NULL)
        {
            _next = InternalPathSubscription::New1(_b, InternalPathSubscription::CombineKeyAndPath(_key, path), _failCallback);

            if (_subscription != NULL)
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[11/*Uno.IDisposable*/]));

            _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
        }
        else if (uIs(dc, ::TYPES[42/*Fuse.Reactive.AsyncObject*/]))
        {
            _next = InternalPathSubscription::New1(_b, path, _failCallback);
            HandleObject(uCast< ::g::Fuse::Reactive::AsyncObject*>(dc, ::TYPES[42/*Fuse.Reactive.AsyncObject*/]));
        }
        else
        {
            uPtr(_failCallback)->InvokeVoid();
            _next = NULL;
        }
    }
}

// public void Init(object dc, string path) [instance] :2249
void InternalPathSubscription::Init(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "Init(object,string)");
    _key = InternalPathSubscription::TakeKeyFromPath(&path);
    HandlePath(dc, path);
}

// public void OnAdd(object addedValue) [instance] :2350
void InternalPathSubscription::OnAdd(uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnAdd(object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"Data bindin...*/], _key), ::STRINGS[35/*"': expected...*/])));
}

// public void OnFailed(string message) [instance] :2337
void InternalPathSubscription::OnFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnFailed(string)");

    if (_isDisposed)
        return;
}

// public void OnInsertAt(int index, object value) [instance] :2364
void InternalPathSubscription::OnInsertAt(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnInsertAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"Data bindin...*/], _key), ::STRINGS[35/*"': expected...*/])));
}

// public void OnNewAll(int length) [instance] :2323
void InternalPathSubscription::OnNewAll(int length)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnNewAll(int)");

    if (_isDisposed)
        return;

    if (length > 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"Data bindin...*/], _key), ::STRINGS[36/*"': expected...*/]), uBox<int>(::TYPES[24/*int*/], length))));
}

// public void OnNewAt(int index, object newValue) [instance] :2331
void InternalPathSubscription::OnNewAt(int index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnNewAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"Data bindin...*/], _key), ::STRINGS[35/*"': expected...*/])));
}

// public void OnRemove(object value, int index) [instance] :2357
void InternalPathSubscription::OnRemove(uObject* value, int index)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnRemove(object,int)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"Data bindin...*/], _key), ::STRINGS[35/*"': expected...*/])));
}

// public void OnSet(object value) [instance] :2343
void InternalPathSubscription::OnSet(uObject* value)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnSet(object)");

    if (_isDisposed)
        return;

    uPtr(_next)->HandleNewDataContext(value);
}

// private static string CombineKeyAndPath(string key, string path) [static] :2317
uString* InternalPathSubscription::CombineKeyAndPath(uString* key, uString* path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "CombineKeyAndPath(string,string)");

    if (::g::Uno::String::op_Inequality(path, NULL) && (uPtr(path)->Length() > 0))
        return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(key, ::STRINGS[32/*"."*/]), path);
    else
        return key;
}

// private InternalPathSubscription New(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) [static] :2257
InternalPathSubscription* InternalPathSubscription::New1(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback)
{
    InternalPathSubscription* obj2 = (InternalPathSubscription*)uNew(InternalPathSubscription_typeof());
    obj2->ctor_(b, path, failCallback);
    return obj2;
}

// public InternalPathSubscription New(Fuse.Reactive.Binding b, Uno.Action failCallback) [static] :2243
InternalPathSubscription* InternalPathSubscription::New2(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback)
{
    InternalPathSubscription* obj1 = (InternalPathSubscription*)uNew(InternalPathSubscription_typeof());
    obj1->ctor_1(b, failCallback);
    return obj1;
}

// private static string TakeKeyFromPath(string& path) [static] :2372
uString* InternalPathSubscription::TakeKeyFromPath(uString** path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "TakeKeyFromPath(string&)");

    if (::g::Uno::String::op_Equality(*path, NULL))
        return NULL;

    uString* key = *path;
    int p = ::g::Uno::String::IndexOf(uPtr(key), '.', 0);

    if (p != -1)
    {
        key = ::g::Uno::String::Substring1(uPtr(key), 0, p);
        *path = ::g::Uno::String::Substring1(uPtr(*path), p + 1, (uPtr(*path)->Length() - p) - 1);
    }
    else
        *path = NULL;

    if (::g::Uno::String::op_Equality(key, NULL) || (uPtr(key)->Length() == 0))
        return NULL;
    else
        return key;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1152)
// ---------------------------------------------------------------

// public abstract interface IObserver :1152
// {
uInterfaceType* IObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObserver", 0, 0);
    type->Reflection.SetFunctions(7,
        new uFunction("OnAdd", NULL, NULL, offsetof(IObserver, fp_OnAdd), false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("OnFailed", NULL, NULL, offsetof(IObserver, fp_OnFailed), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnInsertAt", NULL, NULL, offsetof(IObserver, fp_OnInsertAt), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("OnNewAll", NULL, NULL, offsetof(IObserver, fp_OnNewAll), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("OnNewAt", NULL, NULL, offsetof(IObserver, fp_OnNewAt), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("OnRemove", NULL, NULL, offsetof(IObserver, fp_OnRemove), false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("OnSet", NULL, NULL, offsetof(IObserver, fp_OnSet), false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1175)
// ---------------------------------------------------------------

// public sealed class JavaScript :1175
// {
// static JavaScript() :1175
static void JavaScript__cctor__fn(uType* __type)
{
    JavaScript::_rootedScripts_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[62/*Uno.Collections.List<Fuse.Reactive.JavaScript>*/]));
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)JavaScript__New1_fn;
    type->fp_cctor_ = JavaScript__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))JavaScript__FuseScriptingIModuleEvaluate_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))JavaScript__FuseScriptingIModuleget_LineNumberOffset_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))JavaScript__get_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))JavaScript__get_FileName_fn;
    ::STRINGS[37] = uString::Const("(no filename)");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.24.7\\$.uno");
    ::STRINGS[38] = uString::Const("EvaluateDataContext");
    ::TYPES[62] = ::g::Uno::Collections::List_typeof()->MakeType(JavaScript_typeof());
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[63] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[12] = ::g::Fuse::Behavior_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[64] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[65] = ::g::Uno::Delegate_typeof();
    ::TYPES[66] = ::g::Uno::EventHandler_typeof();
    ::TYPES[67] = ::g::Uno::EventArgs_typeof();
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[68] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(JavaScript_typeof());
    ::TYPES[57] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[69] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(JavaScript_type, interface0));
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _anyRooted), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _code), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _dataContext), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _evaluatingDataContext), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _file), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _fileName), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _lineNumber), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _ready), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, Unrooted2), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(JavaScript_typeof()), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_rootedScripts_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_worker_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Code", NULL, (void*)JavaScript__get_Code_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Code", NULL, (void*)JavaScript__set_Code_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_File", NULL, (void*)JavaScript__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)JavaScript__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_FileName", NULL, (void*)JavaScript__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_FileName", NULL, (void*)JavaScript__set_FileName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_LineNumber", NULL, (void*)JavaScript__get_LineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LineNumber", NULL, (void*)JavaScript__set_LineNumber_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)JavaScript__New1_fn, 0, true, JavaScript_typeof(), 0),
        new uFunction("add_Unrooted", NULL, (void*)JavaScript__add_Unrooted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Unrooted", NULL, (void*)JavaScript__remove_Unrooted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()));
    return type;
}

// public generated JavaScript() :1175
void JavaScript__ctor_1_fn(JavaScript* __this)
{
    __this->ctor_1();
}

// public string get_Code() :1293
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :1299
void JavaScript__set_Code_fn(JavaScript* __this, uString* value)
{
    __this->Code(value);
}

// private void DispatchEvaluate() :1224
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private void EvaluateDataContext() :1259
void JavaScript__EvaluateDataContext_fn(JavaScript* __this)
{
    __this->EvaluateDataContext();
}

// public Uno.UX.FileSource get_File() :1327
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :1328
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :1367
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :1372
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private object Fuse.Scripting.IModule.Evaluate(string id, Fuse.Scripting.Context context) :1358
void JavaScript__FuseScriptingIModuleEvaluate_fn(JavaScript* __this, uString* id, ::g::Fuse::Scripting::Context* context, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Scripting.IModule.Evaluate(string,Fuse.Scripting.Context)");
    return *__retval = uPtr(context)->Evaluate((uObject*)__this, id), void();
}

// private int Fuse.Scripting.IModule.get_LineNumberOffset() :1348
void JavaScript__FuseScriptingIModuleget_LineNumberOffset_fn(JavaScript* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Scripting.IModule.get_LineNumberOffset()");

    if (::g::Uno::String::op_Inequality(__this->_code, NULL))
        return *__retval = __this->LineNumber(), void();

    return *__retval = 0, void();
}

// private static void GlobalKeyChanged(string key) :1194
void JavaScript__GlobalKeyChanged_fn(uString* key)
{
    JavaScript::GlobalKeyChanged(key);
}

// private void Invalidate() :1233
void JavaScript__Invalidate_fn(JavaScript* __this)
{
    __this->Invalidate();
}

// public int get_LineNumber() :1313
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :1314
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// public generated JavaScript New() :1175
void JavaScript__New1_fn(JavaScript** __retval)
{
    *__retval = JavaScript::New1();
}

// private void OnFileChanged(object sender, Uno.EventArgs args) :1341
void JavaScript__OnFileChanged_fn(JavaScript* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnFileChanged(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1206
void JavaScript__OnRooted_fn(JavaScript* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);

    if (!__this->_anyRooted)
    {
        __this->_anyRooted = true;
        ::g::Uno::UX::Resource::AddGlobalKeyListener(uDelegate::New(::TYPES[64/*Uno.Action<string>*/], (void*)JavaScript__GlobalKeyChanged_fn));
    }

    JavaScript::StartWorker();
    __this->_ready = true;
    __this->DispatchEvaluate();
    ::g::Uno::Collections::List__Add_fn(uPtr(JavaScript::_rootedScripts()), __this);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1278
void JavaScript__OnUnrooted_fn(JavaScript* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnUnrooted(Fuse.Node)");
    bool ret3;

    if (::g::Uno::Delegate::op_Inequality(__this->Unrooted2, NULL))
        uPtr(__this->Unrooted2)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    __this->_ready = false;
    ::g::Uno::Collections::List__Remove_fn(uPtr(JavaScript::_rootedScripts()), __this, &ret3);
    uPtr(__this->ParentNode())->DataContext(NULL);
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void ResetModuleAndRootedScripts() :1249
void JavaScript__ResetModuleAndRootedScripts_fn(JavaScript* __this)
{
    __this->ResetModuleAndRootedScripts();
}

// private static void ResetRootedScripts() :1189
void JavaScript__ResetRootedScripts_fn()
{
    JavaScript::ResetRootedScripts();
}

// private void SetParentDataContext() :1270
void JavaScript__SetParentDataContext_fn(JavaScript* __this)
{
    __this->SetParentDataContext();
}

// private static void StartWorker() :1179
void JavaScript__StartWorker_fn()
{
    JavaScript::StartWorker();
}

// public generated new void add_Unrooted(Uno.EventHandler value) :1276
void JavaScript__add_Unrooted_fn(JavaScript* __this, uDelegate* value)
{
    __this->add_Unrooted(value);
}

// public generated new void remove_Unrooted(Uno.EventHandler value) :1276
void JavaScript__remove_Unrooted_fn(JavaScript* __this, uDelegate* value)
{
    __this->remove_Unrooted(value);
}

uSStrong< ::g::Uno::Collections::List*> JavaScript::_rootedScripts_;
uSStrong< ::g::Fuse::Reactive::ThreadWorker*> JavaScript::_worker_;

// public generated JavaScript() [instance] :1175
void JavaScript::ctor_1()
{
    uStackFrame __("Fuse.Reactive.JavaScript", ".ctor()");
    _fileName = ::STRINGS[37/*"(no filename)"*/];
    ctor_();
}

// public string get_Code() [instance] :1293
uString* JavaScript::Code()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Code()");

    if (::g::Uno::String::op_Inequality(_code, NULL))
        return _code;

    if (_file != NULL)
        return uPtr(_file)->ReadAllText();

    return NULL;
}

// public void set_Code(string value) [instance] :1299
void JavaScript::Code(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_Code(string)");

    if (::g::Uno::String::op_Inequality(_code, value))
    {
        _code = value;
        Invalidate();
    }
}

// private void DispatchEvaluate() [instance] :1224
void JavaScript::DispatchEvaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DispatchEvaluate()");

    if ((JavaScript::_worker() != NULL) && !_evaluatingDataContext)
    {
        _evaluatingDataContext = true;
        uPtr(JavaScript::_worker())->Invoke(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext_fn, this));
    }
}

// private void EvaluateDataContext() [instance] :1259
void JavaScript::EvaluateDataContext()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateDataContext()");
    ::g::Uno::Testing::Assert::IsTrue(uPtr(JavaScript::_worker())->IsOnWorkerThread(), ::STRINGS[4/*"C:\\Program...*/], 1261, ::STRINGS[38/*"EvaluateDat...*/]);
    _evaluatingDataContext = false;

    if (_ready)
    {
        _dataContext = ::g::Fuse::Reactive::Marshal::Wrap(JavaScript::_worker(), uPtr(uPtr(JavaScript::_worker())->Context())->Evaluate((uObject*)this, _fileName));
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)JavaScript__SetParentDataContext_fn, this));
    }
}

// public Uno.UX.FileSource get_File() [instance] :1327
::g::Uno::UX::FileSource* JavaScript::File()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_File()");
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :1328
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_File(Uno.UX.FileSource)");

    if (_file != value)
    {
        if (_file != NULL)
            uPtr(_file)->remove_DataChanged(uDelegate::New(::TYPES[69/*Uno.EventHandler<Uno.EventArgs>*/], (void*)JavaScript__OnFileChanged_fn, this));

        _file = value;

        if (_file != NULL)
            uPtr(_file)->add_DataChanged(uDelegate::New(::TYPES[69/*Uno.EventHandler<Uno.EventArgs>*/], (void*)JavaScript__OnFileChanged_fn, this));

        Invalidate();
    }
}

// public string get_FileName() [instance] :1367
uString* JavaScript::FileName()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_FileName()");

    if (_file != NULL)
        return uPtr(_file)->Name;
    else
        return _fileName;
}

// public void set_FileName(string value) [instance] :1372
void JavaScript::FileName(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_FileName(string)");
    _fileName = value;
}

// private void Invalidate() [instance] :1233
void JavaScript::Invalidate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Invalidate()");

    if (IsRooted())
        DispatchEvaluate();
    else
    {
        uString* key = ::g::Uno::UX::Resource::GetGlobalKey(this);

        if (::g::Uno::String::op_Inequality(key, NULL) && (JavaScript::_worker() != NULL))
            uPtr(JavaScript::_worker())->Invoke(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)JavaScript__ResetModuleAndRootedScripts_fn, this));
    }
}

// public int get_LineNumber() [instance] :1313
int JavaScript::LineNumber()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_LineNumber()");
    return _lineNumber;
}

// public void set_LineNumber(int value) [instance] :1314
void JavaScript::LineNumber(int value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_LineNumber(int)");

    if (_lineNumber != value)
    {
        _lineNumber = value;
        Invalidate();
    }
}

// private void OnFileChanged(object sender, Uno.EventArgs args) [instance] :1341
void JavaScript::OnFileChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnFileChanged(object,Uno.EventArgs)");
    Invalidate();
}

// private void ResetModuleAndRootedScripts() [instance] :1249
void JavaScript::ResetModuleAndRootedScripts()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "ResetModuleAndRootedScripts()");
    uString* key = ::g::Uno::UX::Resource::GetGlobalKey(this);

    if (uPtr(uPtr(JavaScript::_worker())->Context())->ResetModule(key))
        JavaScript::ResetRootedScripts();
}

// private void SetParentDataContext() [instance] :1270
void JavaScript::SetParentDataContext()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "SetParentDataContext()");

    if (_ready)
        uPtr(ParentNode())->DataContext(_dataContext);
}

// public generated new void add_Unrooted(Uno.EventHandler value) [instance] :1276
void JavaScript::add_Unrooted(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "add_Unrooted(Uno.EventHandler)");
    Unrooted2 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Unrooted2, value), ::TYPES[66/*Uno.EventHandler*/]);
}

// public generated new void remove_Unrooted(Uno.EventHandler value) [instance] :1276
void JavaScript::remove_Unrooted(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "remove_Unrooted(Uno.EventHandler)");
    Unrooted2 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Unrooted2, value), ::TYPES[66/*Uno.EventHandler*/]);
}

// private static void GlobalKeyChanged(string key) [static] :1194
void JavaScript::GlobalKeyChanged(uString* key)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "GlobalKeyChanged(string)");
    JavaScript_typeof()->Init();

    if ((::g::Uno::String::op_Inequality(key, NULL) && (JavaScript::_worker() != NULL)) && (uPtr(JavaScript::_worker())->Context() != NULL))
    {
        uPtr(uPtr(JavaScript::_worker())->Context())->ResetModule(key);
        JavaScript::ResetRootedScripts();
    }
}

// public generated JavaScript New() [static] :1175
JavaScript* JavaScript::New1()
{
    JavaScript* obj2 = (JavaScript*)uNew(JavaScript_typeof());
    obj2->ctor_1();
    return obj2;
}

// private static void ResetRootedScripts() [static] :1189
void JavaScript::ResetRootedScripts()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "ResetRootedScripts()");
    JavaScript_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<JavaScript*> > ret4;

    for (::g::Uno::Collections::List__Enumerator<uStrong<JavaScript*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(JavaScript::_rootedScripts()), &ret4), ret4); enum1.MoveNext(::TYPES[68/*Uno.Collections.List<Fuse.Reactive.JavaScript>.Enumerator*/]); )
    {
        JavaScript* s = enum1.Current(::TYPES[68/*Uno.Collections.List<Fuse.Reactive.JavaScript>.Enumerator*/]);
        uPtr(s)->Invalidate();
    }
}

// private static void StartWorker() [static] :1179
void JavaScript::StartWorker()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "StartWorker()");
    JavaScript_typeof()->Init();

    if (JavaScript::_worker() == NULL)
        JavaScript::_worker() = ::g::Fuse::Reactive::ThreadWorker::New1();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1696)
// ---------------------------------------------------------------

// internal sealed class JSFileSource :1696
// {
::g::Uno::UX::FileSource_type* JSFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JSFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Reactive.JSFileSource", options);
    type->SetBase(::g::Uno::UX::FileSource_typeof());
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))JSFileSource__OpenRead_fn;
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::JSFileSource, _path), 0);
    return type;
}

// public JSFileSource(string path) :1700
void JSFileSource__ctor_1_fn(JSFileSource* __this, uString* path)
{
    __this->ctor_1(path);
}

// public JSFileSource New(string path) :1700
void JSFileSource__New1_fn(uString* path, JSFileSource** __retval)
{
    *__retval = JSFileSource::New1(path);
}

// public override sealed Uno.IO.Stream OpenRead() :1705
void JSFileSource__OpenRead_fn(JSFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    uStackFrame __("Fuse.Reactive.JSFileSource", "OpenRead()");
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->_path), void();
}

// public JSFileSource(string path) [instance] :1700
void JSFileSource::ctor_1(uString* path)
{
    uStackFrame __("Fuse.Reactive.JSFileSource", ".ctor(string)");
    ctor_(path);
    _path = path;
}

// public JSFileSource New(string path) [static] :1700
JSFileSource* JSFileSource::New1(uString* path)
{
    JSFileSource* obj1 = (JSFileSource*)uNew(JSFileSource_typeof());
    obj1->ctor_1(path);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1711)
// ---------------------------------------------------------------

// internal static class Marshal :1711
// {
uClassType* Marshal_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Marshal", options);
    ::STRINGS[39] = uString::Const("Unable to convert ");
    ::STRINGS[40] = uString::Const(" to bool");
    ::STRINGS[41] = uString::Const("Expected number was ");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.24.7\\$.uno");
    ::STRINGS[42] = uString::Const(" to a FileSource");
    ::STRINGS[43] = uString::Const("#");
    ::STRINGS[44] = uString::Const(" to float4");
    ::STRINGS[45] = uString::Const("Marshal.ToType(): Unable to convert ");
    ::STRINGS[46] = uString::Const(" to type ");
    ::STRINGS[47] = uString::Const("Unhandled type in Marshal.Unwrap: ");
    ::STRINGS[48] = uString::Const("Wrap");
    ::STRINGS[49] = uString::Const("Unhandled type in Marshal.Wrap: ");
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[58] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[70] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[14] = ::g::Uno::Double_typeof();
    ::TYPES[25] = ::g::Uno::Float_typeof();
    ::TYPES[24] = ::g::Uno::Int_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[56] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof());
    ::TYPES[57] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[42] = ::g::Fuse::Reactive::AsyncObject_typeof();
    ::TYPES[48] = ::g::Fuse::Reactive::IAsyncArray_typeof();
    ::TYPES[49] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[50] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array());
    ::TYPES[37] = ::g::Uno::Action1_typeof();
    ::TYPES[60] = ::g::Uno::Float4_typeof();
    ::TYPES[71] = ::g::Uno::Float3_typeof();
    ::TYPES[61] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float3_typeof());
    ::TYPES[72] = ::g::Uno::Float2_typeof();
    ::TYPES[59] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[73] = ::g::Uno::Type_typeof();
    ::TYPES[74] = ::g::Fuse::Reactive::AsyncArray_typeof();
    ::TYPES[29] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[5] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[75] = ::g::Fuse::Reactive::FuseJS::Builtins_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[76] = ::g::Uno::UInt_typeof();
    return type;
}

// public static bool ToBool(object obj) :1831
void Marshal__ToBool_fn(uObject* obj, bool* __retval)
{
    *__retval = Marshal::ToBool(obj);
}

// public static Fuse.Drawing.Brush ToBrush(object o) :1824
void Marshal__ToBrush_fn(uObject* o, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = Marshal::ToBrush(o);
}

// public static double ToDouble(object o) :1713
void Marshal__ToDouble_fn(uObject* o, double* __retval)
{
    *__retval = Marshal::ToDouble(o);
}

// public static void ToFileSource(object obj, Uno.Action<Uno.UX.FileSource> callback) :1730
void Marshal__ToFileSource_fn(uObject* obj, uDelegate* callback)
{
    Marshal::ToFileSource(obj, callback);
}

// public static float ToFloat(object o) :1745
void Marshal__ToFloat_fn(uObject* o, float* __retval)
{
    *__retval = Marshal::ToFloat(o);
}

// public static void ToFloat4(object o, Uno.Action<float4> callback) :1770
void Marshal__ToFloat4_fn(uObject* o, uDelegate* callback)
{
    Marshal::ToFloat4(o, callback);
}

// public static int ToInt(object o) :1740
void Marshal__ToInt_fn(uObject* o, int* __retval)
{
    *__retval = Marshal::ToInt(o);
}

// public static void ToType<T>(object o, Uno.Action<T> callback) :1847
void Marshal__ToType_fn(uType* __type, uObject* o, uDelegate* callback)
{
    Marshal::ToType(__type, o, callback);
}

// public static object Unwrap(object dc) :1894
void Marshal__Unwrap_fn(uObject* dc, uObject** __retval)
{
    *__retval = Marshal::Unwrap(dc);
}

// public static object Wrap(Fuse.Reactive.ThreadWorker worker, object obj) :1866
void Marshal__Wrap_fn(::g::Fuse::Reactive::ThreadWorker* worker, uObject* obj, uObject** __retval)
{
    *__retval = Marshal::Wrap(worker, obj);
}

// public static bool ToBool(object obj) [static] :1831
bool Marshal::ToBool(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToBool(object)");

    if (uIs(obj, ::TYPES[19/*bool*/]))
        return uUnbox<bool>(::TYPES[19/*bool*/], obj);
    else if (uIs(obj, ::TYPES[23/*string*/]))
        return ::g::Uno::Bool::Parse(uCast<uString*>(obj, ::TYPES[23/*string*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[39/*"Unable to c...*/], obj), ::STRINGS[40/*" to bool"*/])));
}

// public static Fuse.Drawing.Brush ToBrush(object o) [static] :1824
::g::Fuse::Drawing::Brush* Marshal::ToBrush(uObject* o)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToBrush(object)");
    ::g::Fuse::Drawing::SolidColor* b = ::g::Fuse::Drawing::SolidColor::New1();
    Marshal::ToFloat4(o, uDelegate::New(::TYPES[58/*Uno.Action<float4>*/], (void*)::g::Fuse::Drawing::SolidColor__SetColor_fn, b));
    return b;
}

// public static double ToDouble(object o) [static] :1713
double Marshal::ToDouble(uObject* o)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToDouble(object)");

    if (uIs(o, ::TYPES[14/*double*/]))
        return uUnbox<double>(::TYPES[14/*double*/], o);
    else if (uIs(o, ::TYPES[25/*float*/]))
        return (double)uUnbox<float>(::TYPES[25/*float*/], o);
    else if (uIs(o, ::TYPES[24/*int*/]))
        return (double)uUnbox<int>(::TYPES[24/*int*/], o);
    else if (o == NULL)
        return 0.0;
    else if (uIs(o, ::TYPES[23/*string*/]))
        return ::g::Uno::Double::Parse(uCast<uString*>(o, ::TYPES[23/*string*/]));
    else
    {
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::STRINGS[41/*"Expected nu...*/], ::g::Uno::Object::GetType(uPtr(o))), 1, ::STRINGS[4/*"C:\\Program...*/], 1725);
        return 0.0;
    }
}

// public static void ToFileSource(object obj, Uno.Action<Uno.UX.FileSource> callback) [static] :1730
void Marshal::ToFileSource(uObject* obj, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToFileSource(object,Uno.Action<Uno.UX.FileSource>)");

    if (uIs(obj, ::TYPES[23/*string*/]))
        uPtr(callback)->InvokeVoid(::g::Fuse::Reactive::JSFileSource::New1(uCast<uString*>(obj, ::TYPES[23/*string*/])));
    else if (uIs(obj, ::TYPES[42/*Fuse.Reactive.AsyncObject*/]))
        ::g::Fuse::Reactive::FileSourceTell::New1(uCast< ::g::Fuse::Reactive::AsyncObject*>(obj, ::TYPES[42/*Fuse.Reactive.AsyncObject*/]), callback);
    else
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[39/*"Unable to c...*/], ::g::Uno::Object::GetType(uPtr(obj))), ::STRINGS[42/*" to a FileS...*/]), 1, ::STRINGS[4/*"C:\\Program...*/], 1736);
}

// public static float ToFloat(object o) [static] :1745
float Marshal::ToFloat(uObject* o)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToFloat(object)");
    return (float)Marshal::ToDouble(o);
}

// public static void ToFloat4(object o, Uno.Action<float4> callback) [static] :1770
void Marshal::ToFloat4(uObject* o, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToFloat4(object,Uno.Action<float4>)");
    uObject* aa = uAs<uObject*>(o, ::TYPES[48/*Fuse.Reactive.IAsyncArray*/]);

    if (aa != NULL)
    {
        ::g::Fuse::Reactive::IAsyncArray::Enum(uInterface(uPtr(aa), ::TYPES[48/*Fuse.Reactive.IAsyncArray*/]), ::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[50/*Uno.Action<object[]>*/], (void*)Marshal__VectorEnum__Enum_fn, Marshal__VectorEnum::New1(callback)));
        return;
    }

    if (uIs(o, ::TYPES[23/*string*/]))
    {
        uString* s = uCast<uString*>(o, ::TYPES[23/*string*/]);

        if (::g::Uno::String::StartsWith(uPtr(s), ::STRINGS[43/*"#"*/]))
            uPtr(callback)->InvokeVoid(uCRef(::g::Uno::Color::FromHex(s)));

        return;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[39/*"Unable to c...*/], o), ::STRINGS[44/*" to float4"*/])));
}

// public static int ToInt(object o) [static] :1740
int Marshal::ToInt(uObject* o)
{
    uStackFrame __("Fuse.Reactive.Marshal", "ToInt(object)");
    return (int)Marshal::ToDouble(o);
}

// public static void ToType<T>(object o, Uno.Action<T> callback) [static] :1847
void Marshal::ToType(uType* __type, uObject* o, uDelegate* callback)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[37/*Uno.Action`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Fuse.Reactive.Marshal", "ToType`1(object,Uno.Action<T>)");
    uType* t = __types[0];

    if (o == NULL)
        uPtr(callback)->InvokeVoid(uT(__types[0], U_ALLOCA(__types[0]->ValueSize)));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[19/*bool*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], uBox(::TYPES[19/*bool*/], Marshal::ToBool(o))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[25/*float*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], uBox(::TYPES[25/*float*/], Marshal::ToFloat(o))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[14/*double*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], uBox(::TYPES[14/*double*/], Marshal::ToDouble(o))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[24/*int*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], uBox<int>(::TYPES[24/*int*/], Marshal::ToInt(o))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[23/*string*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], ::g::Uno::Object::ToString(uPtr(o))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[60/*float4*/]))
        Marshal::ToFloat4(o, uCast<uDelegate*>(callback, ::TYPES[58/*Uno.Action<float4>*/]));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[71/*float3*/]))
        Marshal__Float3Enum::New1(o, uCast<uDelegate*>(callback, ::TYPES[61/*Uno.Action<float3>*/]));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[72/*float2*/]))
        Marshal__Float2Enum::New1(o, uCast<uDelegate*>(callback, ::TYPES[59/*Uno.Action<float2>*/]));
    else if (::g::Uno::Type::IsEnum(uPtr(t)) && uIs(o, ::TYPES[23/*string*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], ::g::Uno::Enum::Parse(t, uCast<uString*>(o, ::TYPES[23/*string*/]))));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[70/*Fuse.Drawing.Brush*/]))
        callback->InvokeVoid(uUnboxAny(__types[0], Marshal::ToBrush(o)));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[57/*Uno.UX.FileSource*/]))
        Marshal::ToFileSource(o, uCast<uDelegate*>(callback, ::TYPES[56/*Uno.Action<Uno.UX.FileSource>*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[45/*"Marshal.ToT...*/], o), ::STRINGS[46/*" to type "*/]), __types[0])));
}

// public static object Unwrap(object dc) [static] :1894
uObject* Marshal::Unwrap(uObject* dc)
{
    uStackFrame __("Fuse.Reactive.Marshal", "Unwrap(object)");

    if (dc == NULL)
        return NULL;

    if ((((uIs(dc, ::TYPES[23/*string*/]) || uIs(dc, ::TYPES[19/*bool*/])) || uIs(dc, ::TYPES[14/*double*/])) || uIs(dc, ::TYPES[24/*int*/])) || uIs(dc, ::TYPES[25/*float*/]))
        return dc;

    if (uIs(dc, ::TYPES[42/*Fuse.Reactive.AsyncObject*/]))
        return uPtr(uCast< ::g::Fuse::Reactive::AsyncObject*>(dc, ::TYPES[42/*Fuse.Reactive.AsyncObject*/]))->Object();

    if (uIs(dc, ::TYPES[74/*Fuse.Reactive.AsyncArray*/]))
        return uPtr(uCast< ::g::Fuse::Reactive::AsyncArray*>(dc, ::TYPES[74/*Fuse.Reactive.AsyncArray*/]))->Array();

    if (uIs(dc, ::TYPES[29/*Fuse.Reactive.Observable*/]))
        return uPtr(uCast< ::g::Fuse::Reactive::Observable*>(dc, ::TYPES[29/*Fuse.Reactive.Observable*/]))->Object;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[47/*"Unhandled t...*/], dc)));
}

// public static object Wrap(Fuse.Reactive.ThreadWorker worker, object obj) [static] :1866
uObject* Marshal::Wrap(::g::Fuse::Reactive::ThreadWorker* worker, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.Marshal", "Wrap(Fuse.Reactive.ThreadWorker,object)");
    ::g::Uno::Testing::Assert::IsTrue(uPtr(worker)->IsOnWorkerThread(), ::STRINGS[4/*"C:\\Program...*/], 1868, ::STRINGS[48/*"Wrap"*/]);

    if (obj == NULL)
        return NULL;

    if (uIs(obj, ::TYPES[6/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* sobj = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[6/*Fuse.Scripting.Object*/]);

        if (uPtr(sobj)->InstanceOf(uPtr(uPtr(worker)->FuseJS())->Observable))
            return ::g::Fuse::Reactive::Observable::New1(worker, sobj, ::g::Fuse::Reactive::Dispatcher::UIThread());
        else
            return ::g::Fuse::Reactive::AsyncObject::New1(worker, sobj);
    }

    if (uIs(obj, ::TYPES[27/*Fuse.Scripting.Array*/]))
        return ::g::Fuse::Reactive::AsyncArray::New1(worker, uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[27/*Fuse.Scripting.Array*/]));

    if (uIs(obj, ::TYPES[17/*Fuse.Scripting.Function*/]))
        return ::g::Fuse::Reactive::AsyncFunction::New1(worker, uCast< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[17/*Fuse.Scripting.Function*/]));

    if (uIs(obj, ::TYPES[23/*string*/]))
        return obj;

    if (uIs(obj, ::TYPES[19/*bool*/]))
        return obj;

    if (uIs(obj, ::TYPES[14/*double*/]))
        return obj;

    if (uIs(obj, ::TYPES[25/*float*/]))
        return uBox(::TYPES[14/*double*/], (double)uUnbox<float>(::TYPES[25/*float*/], obj));

    if (uIs(obj, ::TYPES[24/*int*/]))
        return uBox(::TYPES[14/*double*/], (double)uUnbox<int>(::TYPES[24/*int*/], obj));

    if (uIs(obj, ::TYPES[76/*uint*/]))
        return uBox(::TYPES[14/*double*/], (double)uUnbox<uint32_t>(::TYPES[76/*uint*/], obj));

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[49/*"Unhandled t...*/], obj)));
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1389)
// ---------------------------------------------------------------

// public sealed class Match :1389
// {
Match_type* Match_typeof()
{
    static uSStrong<Match_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Match);
    options.TypeSize = sizeof(Match_type);
    type = (Match_type*)uClassType::New("Fuse.Reactive.Match", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Match__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Match__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Match__OnUnrooted_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))Match__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))Match__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))Match__FuseReactiveIObserverOnRemove_fn;
    ::STRINGS[22] = uString::Const("Not handled: OnAdd");
    ::STRINGS[50] = uString::Const("Not handled: InsertAt");
    ::STRINGS[51] = uString::Const("<Match> can not be used on lists (received OnNewAll)");
    ::STRINGS[26] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[52] = uString::Const("Case already has a Match");
    ::STRINGS[53] = uString::Const("Match can only be used on IObjectContainer (e.g. Panel)");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.24.7\\$.uno");
    ::TYPES[43] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[77] = ::g::Fuse::Reactive::Case_typeof();
    ::TYPES[44] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[40] = ::g::Fuse::IDataContext_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[46] = ::g::Fuse::IObjectContainer_typeof();
    ::TYPES[12] = ::g::Fuse::Behavior_typeof();
    ::TYPES[41] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[78] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[79] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[80] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[81] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[24] = ::g::Uno::Int_typeof();
    ::TYPES[14] = ::g::Uno::Double_typeof();
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[29] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Match_type, interface0));
    type->SetFields(3,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), offsetof(::g::Fuse::Reactive::Match, _cases), 0,
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Reactive::Match, _container), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof()), offsetof(::g::Fuse::Reactive::Match, _elements), 0,
        ::g::Fuse::Reactive::Case_typeof(), offsetof(::g::Fuse::Reactive::Match, _oldCase), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _realValue), 0,
        ::g::Fuse::Reactive::ObservableSubscription_typeof(), offsetof(::g::Fuse::Reactive::Match, _subscription), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _value), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Match__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Match__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Cases", NULL, (void*)Match__get_Cases_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), 0),
        new uFunction("get_Integer", NULL, (void*)Match__get_Integer_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Integer", NULL, (void*)Match__set_Integer_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Match__New1_fn, 0, true, Match_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Match__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Match__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Match__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Match__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Match__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Match__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}

// public generated Match() :1389
void Match__ctor_1_fn(Match* __this)
{
    __this->ctor_1();
}

// private void AddElements(Fuse.Reactive.Case c) :1578
void Match__AddElements_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->AddElements(c);
}

// public bool get_Bool() :1513
void Match__get_Bool_fn(Match* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1514
void Match__set_Bool_fn(Match* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() :1396
void Match__get_Cases_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Cases();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :1421
void Match__FuseReactiveIObserverOnAdd_fn(Match* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[22/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :1436
void Match__FuseReactiveIObserverOnFailed_fn(Match* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :1431
void Match__FuseReactiveIObserverOnInsertAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[50/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(int length) :1441
void Match__FuseReactiveIObserverOnNewAll_fn(Match* __this, int* length)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAll(int)");
    int length_ = *length;

    if (length_ == 0)
    {
        __this->_realValue = NULL;
        __this->Invalidate();
        return;
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[51/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :1426
void Match__FuseReactiveIObserverOnNewAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[26/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :1453
void Match__FuseReactiveIObserverOnRemove_fn(Match* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[51/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :1415
void Match__FuseReactiveIObserverOnSet_fn(Match* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->_realValue = newValue;
    __this->Invalidate();
}

// public int get_Integer() :1507
void Match__get_Integer_fn(Match* __this, int* __retval)
{
    *__retval = __this->Integer();
}

// public void set_Integer(int value) :1508
void Match__set_Integer_fn(Match* __this, int* value)
{
    __this->Integer(*value);
}

// internal void Invalidate() :1544
void Match__Invalidate_fn(Match* __this)
{
    __this->Invalidate();
}

// public generated Match New() :1389
void Match__New1_fn(Match** __retval)
{
    *__retval = Match::New1();
}

// public double get_Number() :1501
void Match__get_Number_fn(Match* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1502
void Match__set_Number_fn(Match* __this, double* value)
{
    __this->Number(*value);
}

// private void OnCaseAdded(Fuse.Reactive.Case c) :1402
void Match__OnCaseAdded_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseAdded(c);
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) :1409
void Match__OnCaseRemoved_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseRemoved(c);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1519
void Match__OnRooted_fn(Match* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Match", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_container = uAs<uObject*>(__this->ParentNode(), ::TYPES[46/*Fuse.IObjectContainer*/]);

    if (__this->_container == NULL)
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[53/*"Match can o...*/], 1, ::STRINGS[4/*"C:\\Program...*/], 1526);

    __this->Invalidate();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1532
void Match__OnUnrooted_fn(Match* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Match", "OnUnrooted(Fuse.Node)");
    __this->RemoveElements();
    __this->_container = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void RemoveElements() :1568
void Match__RemoveElements_fn(Match* __this)
{
    __this->RemoveElements();
}

// private Fuse.Reactive.Case SelectCase() :1557
void Match__SelectCase_fn(Match* __this, ::g::Fuse::Reactive::Case** __retval)
{
    *__retval = __this->SelectCase();
}

// public string get_String() :1495
void Match__get_String_fn(Match* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1496
void Match__set_String_fn(Match* __this, uString* value)
{
    __this->String(value);
}

// public object get_Value() :1464
void Match__get_Value_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1465
void Match__set_Value_fn(Match* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Match() [instance] :1389
void Match::ctor_1()
{
    uStackFrame __("Fuse.Reactive.Match", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[43/*Uno.Collections.List<Fuse.IDataContext>*/]));
    ctor_();
}

// private void AddElements(Fuse.Reactive.Case c) [instance] :1578
void Match::AddElements(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "AddElements(Fuse.Reactive.Case)");
    ::g::Uno::UX::Factory* ret6;

    if (c != NULL)

        for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(c)->Factories()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[45/*Uno.UX.Factory*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Uno::UX::Factory* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[44/*Uno.Collections.IEnumerator<Uno.UX.Factory>*/]), &ret6), ret6);
            uObject* elm = uAs<uObject*>(uPtr(f)->New1(), ::TYPES[40/*Fuse.IDataContext*/]);

            if (elm != NULL)
            {
                ::g::Fuse::IObjectContainer::Add(uInterface(uPtr(_container), ::TYPES[46/*Fuse.IObjectContainer*/]), elm);
                ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
            }
        }

    _oldCase = c;
}

// public bool get_Bool() [instance] :1513
bool Match::Bool()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Bool()");
    return uIs(Value(), ::TYPES[19/*bool*/]) ? uUnbox<bool>(::TYPES[19/*bool*/], Value()) : false;
}

// public void set_Bool(bool value) [instance] :1514
void Match::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Bool(bool)");
    Value(uBox(::TYPES[19/*bool*/], value));
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() [instance] :1396
uObject* Match::Cases()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Cases()");
    uObject* ind4 = _cases;
    return (ind4 != NULL) ? ind4 : (uObject*)(_cases = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[80/*Uno.Collections.ObservableList<Fuse.Reactive.Case>*/], uDelegate::New(::TYPES[81/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseAdded_fn, this), uDelegate::New(::TYPES[81/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseRemoved_fn, this))));
}

// public int get_Integer() [instance] :1507
int Match::Integer()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Integer()");
    return uIs(Value(), ::TYPES[24/*int*/]) ? uUnbox<int>(::TYPES[24/*int*/], Value()) : 0;
}

// public void set_Integer(int value) [instance] :1508
void Match::Integer(int value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Integer(int)");
    Value(uBox<int>(::TYPES[24/*int*/], value));
}

// internal void Invalidate() [instance] :1544
void Match::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Match", "Invalidate()");

    if (_container == NULL)
        return;

    ::g::Fuse::Reactive::Case* newCase = SelectCase();

    if (newCase != _oldCase)
    {
        RemoveElements();
        AddElements(newCase);
    }
}

// public double get_Number() [instance] :1501
double Match::Number()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Number()");
    return uIs(Value(), ::TYPES[14/*double*/]) ? uUnbox<double>(::TYPES[14/*double*/], Value()) : 0.0;
}

// public void set_Number(double value) [instance] :1502
void Match::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Number(double)");
    Value(uBox(::TYPES[14/*double*/], value));
}

// private void OnCaseAdded(Fuse.Reactive.Case c) [instance] :1402
void Match::OnCaseAdded(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseAdded(Fuse.Reactive.Case)");

    if (uPtr(c)->_match != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[52/*"Case alread...*/]));

    uPtr(c)->_match = this;
    Invalidate();
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) [instance] :1409
void Match::OnCaseRemoved(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseRemoved(Fuse.Reactive.Case)");
    uPtr(c)->_match = NULL;
    Invalidate();
}

// private void RemoveElements() [instance] :1568
void Match::RemoveElements()
{
    uStackFrame __("Fuse.Reactive.Match", "RemoveElements()");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret7;
    _oldCase = NULL;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret7), ret7); enum2.MoveNext(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
    {
        uObject* e = enum2.Current(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
        ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(_container), ::TYPES[46/*Fuse.IObjectContainer*/]), e);
    }

    uPtr(_elements)->Clear();
}

// private Fuse.Reactive.Case SelectCase() [instance] :1557
::g::Fuse::Reactive::Case* Match::SelectCase()
{
    uStackFrame __("Fuse.Reactive.Match", "SelectCase()");
    ::g::Fuse::Reactive::Case* ret8;
    ::g::Fuse::Reactive::Case* def = NULL;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_cases), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[77/*Fuse.Reactive.Case*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Reactive::Case* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[78/*Uno.Collections.IEnumerator<Fuse.Reactive.Case>*/]), &ret8), ret8);

        if (::g::Uno::Object::Equals(uPtr(uPtr(c)->Value()), _realValue))
            return c;

        if (uPtr(c)->IsDefault())
            def = c;
    }

    return def;
}

// public string get_String() [instance] :1495
uString* Match::String()
{
    uStackFrame __("Fuse.Reactive.Match", "get_String()");
    return uAs<uString*>(Value(), ::TYPES[23/*string*/]);
}

// public void set_String(string value) [instance] :1496
void Match::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_String(string)");
    Value(value);
}

// public object get_Value() [instance] :1464
uObject* Match::Value()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1465
void Match::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Value(object)");

    if (_value != value)
    {
        _value = value;

        if (_subscription != NULL)
        {
            uPtr(_subscription)->Dispose();
            _subscription = NULL;
        }

        if (uIs(_value, ::TYPES[29/*Fuse.Reactive.Observable*/]))
        {
            ::g::Fuse::Reactive::Observable* obs = uCast< ::g::Fuse::Reactive::Observable*>(_value, ::TYPES[29/*Fuse.Reactive.Observable*/]);
            _subscription = uPtr(obs)->Subscribe((uObject*)this);
        }
        else
            _realValue = _value;

        Invalidate();
    }
}

// public generated Match New() [static] :1389
Match* Match::New1()
{
    Match* obj5 = (Match*)uNew(Match_typeof());
    obj5->ctor_1();
    return obj5;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1974)
// ---------------------------------------------------------------

// internal sealed class Observable :1974
// {
Observable_type* Observable_typeof()
{
    static uSStrong<Observable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(Observable_type);
    type = (Observable_type*)uClassType::New("Fuse.Reactive.Observable", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Observable__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Observable__GetHashCode_fn;
    type->interface0.fp_Enum = (void(*)(uObject*, uObject*, uDelegate*))Observable__Enum_fn;
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IAsyncArray_typeof(), offsetof(Observable_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::Observable, Object), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Fuse::Reactive::Observable, Thread), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::Observable, Worker), 0);
    return type;
}

// public Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Uno.Threading.IDispatcher thread) :1980
void Observable__ctor__fn(Observable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* thread)
{
    __this->ctor_(worker, obj, thread);
}

// public void Enum(Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) :2004
void Observable__Enum_fn(Observable* __this, uObject* thread, uDelegate* callback)
{
    __this->Enum(thread, callback);
}

// public override sealed bool Equals(object obj) :1992
void Observable__Equals_fn(Observable* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "Equals(object)");
    Observable* obs = uAs<Observable*>(obj, Observable_typeof());

    if (obs == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->Object)->Equals2(uPtr(obs)->Object), void();
}

// public override sealed int GetHashCode() :1999
void Observable__GetHashCode_fn(Observable* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "GetHashCode()");
    return *__retval = uPtr(__this->Object)->GetHashCode(), void();
}

// public Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Uno.Threading.IDispatcher thread) :1980
void Observable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* thread, Observable** __retval)
{
    *__retval = Observable::New1(worker, obj, thread);
}

// public Fuse.Reactive.ObservableSubscription Subscribe(Fuse.Reactive.IObserver observer) :1987
void Observable__Subscribe_fn(Observable* __this, uObject* observer, ::g::Fuse::Reactive::ObservableSubscription** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// public Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Uno.Threading.IDispatcher thread) [instance] :1980
void Observable::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* thread)
{
    uStackFrame __("Fuse.Reactive.Observable", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,Uno.Threading.IDispatcher)");
    Worker = worker;
    Object = obj;
    Thread = thread;
}

// public void Enum(Uno.Threading.IDispatcher thread, Uno.Action<object[]> callback) [instance] :2004
void Observable::Enum(uObject* thread, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Observable", "Enum(Uno.Threading.IDispatcher,Uno.Action<object[]>)");
    uPtr(Worker)->Invoke(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Reactive::EnumObservable__Run_fn, ::g::Fuse::Reactive::EnumObservable::New1(Worker, Object, Thread, callback)));
}

// public Fuse.Reactive.ObservableSubscription Subscribe(Fuse.Reactive.IObserver observer) [instance] :1987
::g::Fuse::Reactive::ObservableSubscription* Observable::Subscribe(uObject* observer)
{
    uStackFrame __("Fuse.Reactive.Observable", "Subscribe(Fuse.Reactive.IObserver)");
    return ::g::Fuse::Reactive::ObservableSubscription::New1(Worker, Object, observer, Thread);
}

// public Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Uno.Threading.IDispatcher thread) [static] :1980
Observable* Observable::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* thread)
{
    Observable* obj1 = (Observable*)uNew(Observable_typeof());
    obj1->ctor_(worker, obj, thread);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(2010)
// ---------------------------------------------------------------

// internal sealed class ObservableSubscription :2010
// {
ObservableSubscription_type* ObservableSubscription_typeof()
{
    static uSStrong<ObservableSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ObservableSubscription);
    options.TypeSize = sizeof(ObservableSubscription_type);
    type = (ObservableSubscription_type*)uClassType::New("Fuse.Reactive.ObservableSubscription", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))ObservableSubscription__Dispose_fn;
    ::STRINGS[54] = uString::Const("dispose");
    ::STRINGS[55] = uString::Const("set");
    ::STRINGS[56] = uString::Const("newAt");
    ::STRINGS[57] = uString::Const("newAll");
    ::STRINGS[58] = uString::Const("add");
    ::STRINGS[59] = uString::Const("remove");
    ::STRINGS[60] = uString::Const("insertAt");
    ::STRINGS[61] = uString::Const("failed");
    ::STRINGS[62] = uString::Const("Unhandled observable operation: ");
    ::STRINGS[63] = uString::Const("setExclusive");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.24.7\\$.uno");
    ::STRINGS[64] = uString::Const("Subscribe");
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[82] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), uObject_typeof()->Array());
    ::TYPES[3] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[83] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()->Array());
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[84] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, uObject_typeof());
    ::TYPES[55] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[85] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, ::g::Uno::Int_typeof(), uObject_typeof());
    ::TYPES[86] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Int_typeof(), uObject_typeof());
    ::TYPES[87] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[88] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[89] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, uObject_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[90] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[91] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[64] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[75] = ::g::Fuse::Reactive::FuseJS::Builtins_typeof();
    ::TYPES[13] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ObservableSubscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _callback), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _observable), 0,
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _observer), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _subscriberProxy), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _thread), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _worker), 0);
    return type;
}

// public ObservableSubscription(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer, Uno.Threading.IDispatcher thread) :2021
void ObservableSubscription__ctor__fn(ObservableSubscription* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, uObject* thread)
{
    __this->ctor_(worker, obj, observer, thread);
}

// private void CallProxyMethod(string method, object[] args) :2037
void ObservableSubscription__CallProxyMethod_fn(ObservableSubscription* __this, uString* method, uArray* args)
{
    __this->CallProxyMethod(method, args);
}

// public void Dispose() :2064
void ObservableSubscription__Dispose_fn(ObservableSubscription* __this)
{
    __this->Dispose();
}

// public ObservableSubscription New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer, Uno.Threading.IDispatcher thread) :2021
void ObservableSubscription__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, uObject* thread, ObservableSubscription** __retval)
{
    *__retval = ObservableSubscription::New1(worker, obj, observer, thread);
}

// private object ObserveChange(object[] args) :2047
void ObservableSubscription__ObserveChange_fn(ObservableSubscription* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->ObserveChange(args);
}

// public void SetExclusive(object newValue) :2042
void ObservableSubscription__SetExclusive_fn(ObservableSubscription* __this, uObject* newValue)
{
    __this->SetExclusive(newValue);
}

// private void Subscribe() :2031
void ObservableSubscription__Subscribe_fn(ObservableSubscription* __this)
{
    __this->Subscribe();
}

// public ObservableSubscription(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer, Uno.Threading.IDispatcher thread) [instance] :2021
void ObservableSubscription::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, uObject* thread)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,Fuse.Reactive.IObserver,Uno.Threading.IDispatcher)");
    _worker = worker;
    _observable = obj;
    _observer = observer;
    _thread = thread;
    _callback = uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)ObservableSubscription__ObserveChange_fn, this);
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ObservableSubscription__Subscribe_fn, this));
}

// private void CallProxyMethod(string method, object[] args) [instance] :2037
void ObservableSubscription::CallProxyMethod(uString* method, uArray* args)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "CallProxyMethod(string,object[])");
    uPtr(_subscriberProxy)->CallMethod(method, args);
}

// public void Dispose() [instance] :2064
void ObservableSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "Dispose()");
    ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[82/*Uno.Threading.IDispatcherExtensions.Invoke2<string, object[]>*/], (uObject*)_worker, uDelegate::New(::TYPES[83/*Uno.Action<string, object[]>*/], (void*)ObservableSubscription__CallProxyMethod_fn, this), ::STRINGS[54/*"dispose"*/], uArray::Init<uObject*>(::TYPES[16/*object[]*/], 0));
}

// private object ObserveChange(object[] args) [instance] :2047
uObject* ObservableSubscription::ObserveChange(uArray* args)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "ObserveChange(object[])");
    uString* op = uAs<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[23/*string*/]);
    uObject* arg = ::g::Fuse::Reactive::Marshal::Wrap(_worker, args->Strong<uObject*>(2));

    if (::g::Uno::String::op_Equality(op, ::STRINGS[55/*"set"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[84/*Uno.Threading.IDispatcherExtensions.Invoke1<object>*/], _thread, uDelegate::New(::TYPES[55/*Uno.Action<object>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnSet)), arg);
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[56/*"newAt"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[85/*Uno.Threading.IDispatcherExtensions.Invoke2<int, object>*/], _thread, uDelegate::New(::TYPES[86/*Uno.Action<int, object>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnNewAt)), uCRef<int>(::g::Fuse::Reactive::Marshal::ToInt(arg)), ::g::Fuse::Reactive::Marshal::Wrap(_worker, args->Strong<uObject*>(3)));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[57/*"newAll"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[87/*Uno.Threading.IDispatcherExtensions.Invoke1<int>*/], _thread, uDelegate::New(::TYPES[88/*Uno.Action<int>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnNewAll)), uCRef<int>(::g::Fuse::Reactive::Marshal::ToInt(arg)));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[58/*"add"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[84/*Uno.Threading.IDispatcherExtensions.Invoke1<object>*/], _thread, uDelegate::New(::TYPES[55/*Uno.Action<object>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnAdd)), arg);
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[59/*"remove"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[89/*Uno.Threading.IDispatcherExtensions.Invoke2<object, int>*/], _thread, uDelegate::New(::TYPES[90/*Uno.Action<object, int>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnRemove)), arg, uCRef<int>(::g::Fuse::Reactive::Marshal::ToInt(args->Strong<uObject*>(3))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[60/*"insertAt"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[85/*Uno.Threading.IDispatcherExtensions.Invoke2<int, object>*/], _thread, uDelegate::New(::TYPES[86/*Uno.Action<int, object>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnInsertAt)), uCRef<int>(::g::Fuse::Reactive::Marshal::ToInt(arg)), ::g::Fuse::Reactive::Marshal::Wrap(_worker, args->Strong<uObject*>(3)));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[61/*"failed"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[91/*Uno.Threading.IDispatcherExtensions.Invoke1<string>*/], _thread, uDelegate::New(::TYPES[64/*Uno.Action<string>*/], uInterface(uPtr(_observer), ::TYPES[30/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnFailed)), uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[23/*string*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[62/*"Unhandled o...*/], op)));

    return NULL;
}

// public void SetExclusive(object newValue) [instance] :2042
void ObservableSubscription::SetExclusive(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "SetExclusive(object)");
    ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[82/*Uno.Threading.IDispatcherExtensions.Invoke2<string, object[]>*/], (uObject*)_worker, uDelegate::New(::TYPES[83/*Uno.Action<string, object[]>*/], (void*)ObservableSubscription__CallProxyMethod_fn, this), ::STRINGS[63/*"setExclusive"*/], uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (uObject*)::g::Fuse::Reactive::Marshal::Unwrap(newValue)));
}

// private void Subscribe() [instance] :2031
void ObservableSubscription::Subscribe()
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "Subscribe()");
    ::g::Uno::Testing::Assert::IsTrue(uPtr(_worker)->IsOnWorkerThread(), ::STRINGS[4/*"C:\\Program...*/], 2033, ::STRINGS[64/*"Subscribe"*/]);
    _subscriberProxy = uAs< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(uPtr(_worker)->FuseJS())->SubscriberProxy)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, (::g::Fuse::Scripting::Object*)_observable, (uDelegate*)_callback)), ::TYPES[6/*Fuse.Scripting.Object*/]);
}

// public ObservableSubscription New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer, Uno.Threading.IDispatcher thread) [static] :2021
ObservableSubscription* ObservableSubscription::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* observer, uObject* thread)
{
    ObservableSubscription* obj1 = (ObservableSubscription*)uNew(ObservableSubscription_typeof());
    obj1->ctor_(worker, obj, observer, thread);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(2422)
// ---------------------------------------------------------------

// internal sealed class ScriptEventArgs :2422
// {
uType* ScriptEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScriptEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ScriptEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::Reactive::ScriptEventArgs, Args), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::ScriptEventArgs, Name), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::ScriptEventArgs, Sender), 0);
    return type;
}

// public ScriptEventArgs(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) :2429
void ScriptEventArgs__ctor_1_fn(ScriptEventArgs* __this, ::g::Fuse::Node* sender, uString* name, uObject* args)
{
    __this->ctor_1(sender, name, args);
}

// public ScriptEventArgs New(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) :2429
void ScriptEventArgs__New2_fn(::g::Fuse::Node* sender, uString* name, uObject* args, ScriptEventArgs** __retval)
{
    *__retval = ScriptEventArgs::New2(sender, name, args);
}

// public ScriptEventArgs(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) [instance] :2429
void ScriptEventArgs::ctor_1(::g::Fuse::Node* sender, uString* name, uObject* args)
{
    uStackFrame __("Fuse.Reactive.ScriptEventArgs", ".ctor(Fuse.Node,string,Fuse.Scripting.IScriptEvent)");
    ctor_();
    Sender = sender;
    Name = name;
    Args = args;
}

// public ScriptEventArgs New(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) [static] :2429
ScriptEventArgs* ScriptEventArgs::New2(::g::Fuse::Node* sender, uString* name, uObject* args)
{
    ScriptEventArgs* obj1 = (ScriptEventArgs*)uNew(ScriptEventArgs_typeof());
    obj1->ctor_1(sender, name, args);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1912)
// ---------------------------------------------------------------

// public sealed class Select :1912
// {
::g::Fuse::Triggers::Trigger_type* Select_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(Select);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Reactive.Select", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)Select__New1_fn;
    type->fp_OnNodeAdded = (void(*)(::g::Fuse::Triggers::Trigger*, ::g::Fuse::Node*))Select__OnNodeAdded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Select__OnRooted_fn;
    ::TYPES[12] = ::g::Fuse::Behavior_typeof();
    ::TYPES[92] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[93] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    type->SetFields(15,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Select, _data), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Data", NULL, (void*)Select__get_Data_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)Select__set_Data_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)Select__New1_fn, 0, true, Select_typeof(), 0));
    return type;
}

// public generated Select() :1912
void Select__ctor_2_fn(Select* __this)
{
    __this->ctor_2();
}

// public object get_Data() :1917
void Select__get_Data_fn(Select* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(object value) :1918
void Select__set_Data_fn(Select* __this, uObject* value)
{
    __this->Data(value);
}

// private bool get_IsOn() :1946
void Select__get_IsOn_fn(Select* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated Select New() :1912
void Select__New1_fn(Select** __retval)
{
    *__retval = Select::New1();
}

// private void OnChanged() :1928
void Select__OnChanged_fn(Select* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnNodeAdded(Fuse.Node n) :1956
void Select__OnNodeAdded_fn(Select* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Select", "OnNodeAdded(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnNodeAdded_fn(__this, n);
    __this->OnChanged();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1948
void Select__OnRooted_fn(Select* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Select", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->UpdateNodes();

    if (__this->IsOn())
        __this->BypassActivate();
}

// private void UpdateNodes() :1940
void Select__UpdateNodes_fn(Select* __this)
{
    __this->UpdateNodes();
}

// public generated Select() [instance] :1912
void Select::ctor_2()
{
    uStackFrame __("Fuse.Reactive.Select", ".ctor()");
    ctor_1();
}

// public object get_Data() [instance] :1917
uObject* Select::Data()
{
    uStackFrame __("Fuse.Reactive.Select", "get_Data()");
    return _data;
}

// public void set_Data(object value) [instance] :1918
void Select::Data(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Select", "set_Data(object)");

    if (_data != value)
    {
        _data = value;
        OnChanged();
    }
}

// private bool get_IsOn() [instance] :1946
bool Select::IsOn()
{
    uStackFrame __("Fuse.Reactive.Select", "get_IsOn()");
    return _data != NULL;
}

// private void OnChanged() [instance] :1928
void Select::OnChanged()
{
    uStackFrame __("Fuse.Reactive.Select", "OnChanged()");
    UpdateNodes();

    if (IsRooted())
    {
        if (IsOn())
            Activate(NULL);
        else
            Deactivate();
    }
}

// private void UpdateNodes() [instance] :1940
void Select::UpdateNodes()
{
    uStackFrame __("Fuse.Reactive.Select", "UpdateNodes()");
    ::g::Fuse::Node* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Nodes()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[9/*Fuse.Node*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[93/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret3), ret3);
        uPtr(n)->DataContext(_data);
    }
}

// public generated Select New() [static] :1912
Select* Select::New1()
{
    Select* obj2 = (Select*)uNew(Select_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(266)
// --------------------------------------------------------------

// internal sealed class TellObject :266
// {
uType* TellObject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TellObject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.TellObject", options);
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.24.7\\$.uno");
    ::STRINGS[10] = uString::Const("Run");
    ::TYPES[5] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[84] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, uObject_typeof());
    ::TYPES[65] = ::g::Uno::Delegate_typeof();
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Reactive::TellObject, _callback), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::TellObject, _failCallback), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::TellObject, _key), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::TellObject, _object), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Fuse::Reactive::TellObject, _thread), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::TellObject, _worker), 0);
    return type;
}

// public TellObject(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, string key, Uno.Threading.IDispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) :275
void TellObject__ctor__fn(TellObject* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, uObject* thread, uDelegate* callback, uDelegate* failCallback)
{
    __this->ctor_(worker, obj, key, thread, callback, failCallback);
}

// public TellObject New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, string key, Uno.Threading.IDispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) :275
void TellObject__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, uObject* thread, uDelegate* callback, uDelegate* failCallback, TellObject** __retval)
{
    *__retval = TellObject::New1(worker, obj, key, thread, callback, failCallback);
}

// public void Run() :285
void TellObject__Run_fn(TellObject* __this)
{
    __this->Run();
}

// public TellObject(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, string key, Uno.Threading.IDispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) [instance] :275
void TellObject::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, uObject* thread, uDelegate* callback, uDelegate* failCallback)
{
    uStackFrame __("Fuse.Reactive.TellObject", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,string,Uno.Threading.IDispatcher,Uno.Action<object>,Uno.Action)");
    _worker = worker;
    _object = obj;
    _key = key;
    _thread = thread;
    _callback = callback;
    _failCallback = failCallback;
}

// public void Run() [instance] :285
void TellObject::Run()
{
    uStackFrame __("Fuse.Reactive.TellObject", "Run()");
    ::g::Uno::Testing::Assert::IsTrue(uPtr(_worker)->IsOnWorkerThread(), ::STRINGS[4/*"C:\\Program...*/], 287, ::STRINGS[10/*"Run"*/]);
    ::g::Fuse::Scripting::Object* ind1 = _object;
    ::g::Fuse::Scripting::Object* obj = (ind1 != NULL) ? ind1 : (::g::Fuse::Scripting::Object*)uPtr(uPtr(_worker)->Context())->GlobalObject();

    if (uPtr(obj)->ContainsKey(_key))
    {
        uObject* res = uPtr(obj)->Item(_key);
        uObject* wrap = ::g::Fuse::Reactive::Marshal::Wrap(_worker, res);
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[84/*Uno.Threading.IDispatcherExtensions.Invoke1<object>*/], _thread, _callback, wrap);
    }
    else if (::g::Uno::Delegate::op_Inequality(_failCallback, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_thread), ::TYPES[3/*Uno.Threading.IDispatcher*/]), _failCallback);
}

// public TellObject New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, string key, Uno.Threading.IDispatcher thread, Uno.Action<object> callback, Uno.Action failCallback) [static] :275
TellObject* TellObject::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, uObject* thread, uDelegate* callback, uDelegate* failCallback)
{
    TellObject* obj2 = (TellObject*)uNew(TellObject_typeof());
    obj2->ctor_(worker, obj, key, thread, callback, failCallback);
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(2450)
// ---------------------------------------------------------------

// internal sealed class ThreadWorker :2450
// {
ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Reactive.ThreadWorker", options);
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    ::STRINGS[65] = uString::Const("Could not create script context");
    ::TYPES[94] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[95] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[96] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[97] = ::g::Uno::Application_typeof();
    ::TYPES[66] = ::g::Uno::EventHandler_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[3] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[98] = ::g::Uno::Threading::Thread_typeof();
    ::TYPES[13] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1));
    type->SetFields(0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _exceptionQueue), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _queue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _terminate), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _thread), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, Mutex), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_fuseJS_, uFieldFlagsStatic);
    return type;
}

// public ThreadWorker() :2473
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// public void CheckAndThrow() :2548
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this)
{
    __this->CheckAndThrow();
}

// public Fuse.Scripting.Context get_Context() :2461
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// internal static Fuse.Scripting.Context CreateContext(Uno.Threading.IDispatcher ownerThread) :2452
void ThreadWorker__CreateContext_fn(uObject* ownerThread, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(ownerThread);
}

// public void Dispose() :2503
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() :2464
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = __this->FuseJS();
}

// public void Invoke(Uno.Action action) :2557
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// internal bool get_IsOnWorkerThread() :2492
void ThreadWorker__get_IsOnWorkerThread_fn(ThreadWorker* __this, bool* __retval)
{
    *__retval = __this->IsOnWorkerThread();
}

// public ThreadWorker New() :2473
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// private void OnClosing(object sender, Uno.EventArgs args) :2498
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnClosing(sender, args);
}

// private void Run() :2509
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> ThreadWorker::_fuseJS_;

// public ThreadWorker() [instance] :2473
void ThreadWorker::ctor_()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", ".ctor()");
    Mutex = ::g::Uno::Threading::Mutex::Create();
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[94/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    _exceptionQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[95/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[66/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
    _thread = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ThreadWorker__Run_fn, this));
    uPtr(_thread)->Start();
}

// public void CheckAndThrow() [instance] :2548
void ThreadWorker::CheckAndThrow()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CheckAndThrow()");
    bool ret2;
    ::g::Uno::Exception* e = NULL;

    if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_exceptionQueue), (void**)(&e), &ret2), ret2))
        U_THROW(e);
}

// public Fuse.Scripting.Context get_Context() [instance] :2461
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_Context()");
    return ThreadWorker::_context();
}

// public void Dispose() [instance] :2503
void ThreadWorker::Dispose()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Dispose()");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closed(uDelegate::New(::TYPES[66/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
    _terminate = true;
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() [instance] :2464
::g::Fuse::Reactive::FuseJS::Builtins* ThreadWorker::FuseJS()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_FuseJS()");
    return ThreadWorker::_fuseJS();
}

// public void Invoke(Uno.Action action) [instance] :2557
void ThreadWorker::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Invoke(Uno.Action)");
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// internal bool get_IsOnWorkerThread() [instance] :2492
bool ThreadWorker::IsOnWorkerThread()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_IsOnWorkerThread()");
    return ::g::Uno::Object::Equals(uPtr(::g::Uno::Threading::Thread::CurrentThread()), _thread);
}

// private void OnClosing(object sender, Uno.EventArgs args) [instance] :2498
void ThreadWorker::OnClosing(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "OnClosing(object,Uno.EventArgs)");
    Dispose();
}

// private void Run() [instance] :2509
void ThreadWorker::Run()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Run()");
    bool ret3;

    if (ThreadWorker::_context() == NULL)
    {
        ThreadWorker::_context() = ThreadWorker::CreateContext((uObject*)this);

        if (ThreadWorker::_context() == NULL)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[65/*"Could not c...*/]));

        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ThreadWorker__CheckAndThrow_fn, this), 0);
        ThreadWorker::_fuseJS() = ::g::Fuse::Reactive::FuseJS::Builtins::New1(ThreadWorker::_context());
    }

    while (!_terminate)
    {
        ::uAutoReleasePool ____pool;
        uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(Mutex);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[11/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            uDelegate* action;

            if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret3), ret3))
            {
                try
                {
                    uPtr(action)->InvokeVoid();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
                }

                continue;
            }
        }

        ::g::Uno::Threading::Thread::Sleep(1);
    }
}

// internal static Fuse.Scripting.Context CreateContext(Uno.Threading.IDispatcher ownerThread) [static] :2452
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* ownerThread)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CreateContext(Uno.Threading.IDispatcher)");
    return ::g::Fuse::Scripting::V8::Context::New1(ownerThread);
}

// public ThreadWorker New() [static] :2473
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(710)
// --------------------------------------------------------------

// private sealed class Dispatcher.UIThreadDispatcher :710
// {
Dispatcher__UIThreadDispatcher_type* Dispatcher__UIThreadDispatcher_typeof()
{
    static uSStrong<Dispatcher__UIThreadDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Dispatcher__UIThreadDispatcher);
    options.TypeSize = sizeof(Dispatcher__UIThreadDispatcher_type);
    type = (Dispatcher__UIThreadDispatcher_type*)uClassType::New("Fuse.Reactive.Dispatcher.UIThreadDispatcher", options);
    type->fp_ctor_ = (void*)Dispatcher__UIThreadDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))Dispatcher__UIThreadDispatcher__Invoke_fn;
    ::TYPES[99] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[100] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Action_typeof());
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(Dispatcher__UIThreadDispatcher_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Reactive::Dispatcher__UIThreadDispatcher, _actions), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::Dispatcher__UIThreadDispatcher, _mutex), 0);
    return type;
}

// public UIThreadDispatcher() :715
void Dispatcher__UIThreadDispatcher__ctor__fn(Dispatcher__UIThreadDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :734
void Dispatcher__UIThreadDispatcher__Invoke_fn(Dispatcher__UIThreadDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public UIThreadDispatcher New() :715
void Dispatcher__UIThreadDispatcher__New1_fn(Dispatcher__UIThreadDispatcher** __retval)
{
    *__retval = Dispatcher__UIThreadDispatcher::New1();
}

// private void Run() :720
void Dispatcher__UIThreadDispatcher__Run_fn(Dispatcher__UIThreadDispatcher* __this)
{
    __this->Run();
}

// public UIThreadDispatcher() [instance] :715
void Dispatcher__UIThreadDispatcher::ctor_()
{
    uStackFrame __("Fuse.Reactive.Dispatcher.UIThreadDispatcher", ".ctor()");
    _actions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[99/*Uno.Collections.List<Uno.Action>*/]));
    _mutex = ::g::Uno::Threading::Mutex::Create();
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Dispatcher__UIThreadDispatcher__Run_fn, this), 0);
}

// public void Invoke(Uno.Action action) [instance] :734
void Dispatcher__UIThreadDispatcher::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.Dispatcher.UIThreadDispatcher", "Invoke(Uno.Action)");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[11/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(_actions), action);
    }
}

// private void Run() [instance] :720
void Dispatcher__UIThreadDispatcher::Run()
{
    uStackFrame __("Fuse.Reactive.Dispatcher.UIThreadDispatcher", "Run()");
    ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > ret3;
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[99/*Uno.Collections.List<Uno.Action>*/]);
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[11/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List* tmp = _actions;
        _actions = list;
        list = tmp;
    }

    for (::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(list), &ret3), ret3); enum1.MoveNext(::TYPES[100/*Uno.Collections.List<Uno.Action>.Enumerator*/]); )
    {
        uDelegate* a = enum1.Current(::TYPES[100/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
        uPtr(a)->InvokeVoid();
    }
}

// public UIThreadDispatcher New() [static] :715
Dispatcher__UIThreadDispatcher* Dispatcher__UIThreadDispatcher::New1()
{
    Dispatcher__UIThreadDispatcher* obj2 = (Dispatcher__UIThreadDispatcher*)uNew(Dispatcher__UIThreadDispatcher_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(1750)
// ---------------------------------------------------------------

// private sealed class Marshal.VectorEnum :1750
// {
uType* Marshal__VectorEnum_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Marshal__VectorEnum);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Marshal.VectorEnum", options);
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[58] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4_typeof());
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Fuse::Reactive::Marshal__VectorEnum, _callback), 0);
    return type;
}

// public VectorEnum(Uno.Action<float4> callback) :1754
void Marshal__VectorEnum__ctor__fn(Marshal__VectorEnum* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// public void Enum(object[] values) :1759
void Marshal__VectorEnum__Enum_fn(Marshal__VectorEnum* __this, uArray* values)
{
    __this->Enum(values);
}

// public VectorEnum New(Uno.Action<float4> callback) :1754
void Marshal__VectorEnum__New1_fn(uDelegate* callback, Marshal__VectorEnum** __retval)
{
    *__retval = Marshal__VectorEnum::New1(callback);
}

// public VectorEnum(Uno.Action<float4> callback) [instance] :1754
void Marshal__VectorEnum::ctor_(uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.Marshal.VectorEnum", ".ctor(Uno.Action<float4>)");
    _callback = callback;
}

// public void Enum(object[] values) [instance] :1759
void Marshal__VectorEnum::Enum(uArray* values)
{
    uStackFrame __("Fuse.Reactive.Marshal.VectorEnum", "Enum(object[])");
    float r = (uPtr(values)->Length() > 0) ? ::g::Fuse::Reactive::Marshal::ToFloat(uPtr(values)->Strong<uObject*>(0)) : 0.0f;
    float g = (values->Length() > 1) ? ::g::Fuse::Reactive::Marshal::ToFloat(values->Strong<uObject*>(1)) : r;
    float b = (values->Length() > 2) ? ::g::Fuse::Reactive::Marshal::ToFloat(values->Strong<uObject*>(2)) : r;
    float a = (values->Length() > 3) ? ::g::Fuse::Reactive::Marshal::ToFloat(values->Strong<uObject*>(3)) : 1.0f;
    uPtr(_callback)->InvokeVoid(uCRef(::g::Uno::Float4__New2(r, g, b, a)));
}

// public VectorEnum New(Uno.Action<float4> callback) [static] :1754
Marshal__VectorEnum* Marshal__VectorEnum::New1(uDelegate* callback)
{
    Marshal__VectorEnum* obj1 = (Marshal__VectorEnum*)uNew(Marshal__VectorEnum_typeof());
    obj1->ctor_(callback);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(2574)
// ---------------------------------------------------------------

// public class WhileCount :2574
// {
WhileCount_type* WhileCount_typeof()
{
    static uSStrong<WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 25;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WhileCount);
    options.TypeSize = sizeof(WhileCount_type);
    type = (WhileCount_type*)uClassType::New("Fuse.Reactive.WhileCount", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)WhileCount__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileCount__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileCount__OnUnrooted_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))WhileCount__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))WhileCount__FuseReactiveIObserverOnNewAll_fn;
    ::TYPES[29] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[11] = ::g::Uno::IDisposable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[48] = ::g::Fuse::Reactive::IAsyncArray_typeof();
    ::TYPES[49] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[50] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()->Array());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(WhileCount_type, interface0));
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _isRooting), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _items), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanValue), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _oldCount), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _subscription), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_EqualTo", NULL, (void*)WhileCount__get_EqualTo_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileCount__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileCount__get_GreaterThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileCount__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Items", NULL, (void*)WhileCount__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)WhileCount__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileCount__get_LessThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileCount__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileCount__New1_fn, 0, true, WhileCount_typeof(), 0));
    return type;
}

// public generated WhileCount() :2574
void WhileCount__ctor_2_fn(WhileCount* __this)
{
    __this->ctor_2();
}

// private void Assess(int count) :2651
void WhileCount__Assess_fn(WhileCount* __this, int* count)
{
    __this->Assess(*count);
}

// public int get_EqualTo() :2696
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->EqualTo();
}

// public void set_EqualTo(int value) :2697
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value)
{
    __this->EqualTo(*value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :2714
void WhileCount__FuseReactiveIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :2710
void WhileCount__FuseReactiveIObserverOnFailed_fn(WhileCount* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnFailed(string)");
    __this->Assess(0);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :2727
void WhileCount__FuseReactiveIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(int length) :2732
void WhileCount__FuseReactiveIObserverOnNewAll_fn(WhileCount* __this, int* length)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnNewAll(int)");
    int length_ = *length;
    __this->Assess(length_);
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :2723
void WhileCount__FuseReactiveIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value)
{
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :2718
void WhileCount__FuseReactiveIObserverOnRemove_fn(WhileCount* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    __this->Assess(__this->_oldCount - 1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :2706
void WhileCount__FuseReactiveIObserverOnSet_fn(WhileCount* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->Assess(1);
}

// public int get_GreaterThan() :2684
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(int value) :2685
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value)
{
    __this->GreaterThan(*value);
}

// public object get_Items() :2601
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :2602
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value)
{
    __this->Items(value);
}

// public int get_LessThan() :2672
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(int value) :2673
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value)
{
    __this->LessThan(*value);
}

// public generated WhileCount New() :2574
void WhileCount__New1_fn(WhileCount** __retval)
{
    *__retval = WhileCount::New1();
}

// private void OnItemsChanged() :2612
void WhileCount__OnItemsChanged_fn(WhileCount* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :2577
void WhileCount__OnRooted_fn(WhileCount* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_isRooting = true;
    __this->OnItemsChanged();
    __this->_isRooting = false;
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :2585
void WhileCount__OnUnrooted_fn(WhileCount* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnUnrooted(Fuse.Node)");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[11/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->Assess(0);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// private void Reassess() :2626
void WhileCount__Reassess_fn(WhileCount* __this)
{
    __this->Reassess();
}

// private void ReplaceAll(object[] arr) :2646
void WhileCount__ReplaceAll_fn(WhileCount* __this, uArray* arr)
{
    __this->ReplaceAll(arr);
}

// public generated WhileCount() [instance] :2574
void WhileCount::ctor_2()
{
    uStackFrame __("Fuse.Reactive.WhileCount", ".ctor()");
    ctor_1();
}

// private void Assess(int count) [instance] :2651
void WhileCount::Assess(int count)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Assess(int)");
    _oldCount = count;

    if (((_equalToMode && (count == _equalToValue)) || (_lessThanMode && (count < _lessThanValue))) || (_greaterThanMode && (count > _greaterThanValue)))
    {
        if (_isRooting)
            BypassActivate();
        else
            Activate(NULL);
    }
    else
        Deactivate();
}

// public int get_EqualTo() [instance] :2696
int WhileCount::EqualTo()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_EqualTo()");
    return _equalToValue;
}

// public void set_EqualTo(int value) [instance] :2697
void WhileCount::EqualTo(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_EqualTo(int)");
    _equalToMode = true;
    _equalToValue = value;
}

// public int get_GreaterThan() [instance] :2684
int WhileCount::GreaterThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_GreaterThan()");
    return _greaterThanValue;
}

// public void set_GreaterThan(int value) [instance] :2685
void WhileCount::GreaterThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_GreaterThan(int)");
    _greaterThanMode = true;
    _greaterThanValue = value;
}

// public object get_Items() [instance] :2601
uObject* WhileCount::Items()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :2602
void WhileCount::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public int get_LessThan() [instance] :2672
int WhileCount::LessThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_LessThan()");
    return _lessThanValue;
}

// public void set_LessThan(int value) [instance] :2673
void WhileCount::LessThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_LessThan(int)");
    _lessThanMode = true;
    _lessThanValue = value;
}

// private void OnItemsChanged() [instance] :2612
void WhileCount::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnItemsChanged()");
    ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(_items, ::TYPES[29/*Fuse.Reactive.Observable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[11/*Uno.IDisposable*/]));

        _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
    }
    else
        Reassess();
}

// private void Reassess() [instance] :2626
void WhileCount::Reassess()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Reassess()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[16/*object[]*/]);

    if (e != NULL)
        Assess(uPtr(e)->Length());
    else
    {
        uObject* a = uAs<uObject*>(_items, ::TYPES[48/*Fuse.Reactive.IAsyncArray*/]);

        if (a != NULL)
            ::g::Fuse::Reactive::IAsyncArray::Enum(uInterface(uPtr(a), ::TYPES[48/*Fuse.Reactive.IAsyncArray*/]), ::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[50/*Uno.Action<object[]>*/], (void*)WhileCount__ReplaceAll_fn, this));
    }
}

// private void ReplaceAll(object[] arr) [instance] :2646
void WhileCount::ReplaceAll(uArray* arr)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "ReplaceAll(object[])");
    Assess(uPtr(arr)->Length());
}

// public generated WhileCount New() [static] :2574
WhileCount* WhileCount::New1()
{
    WhileCount* obj1 = (WhileCount*)uNew(WhileCount_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno(2749)
// ---------------------------------------------------------------

// public sealed class WhileEmpty :2749
// {
::g::Fuse::Reactive::WhileCount_type* WhileEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 25;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WhileEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileEmpty", options);
    type->SetBase(::g::Fuse::Reactive::WhileCount_typeof());
    type->fp_ctor_ = (void*)WhileEmpty__New2_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAll_fn;
    ::TYPES[101] = ::g::Fuse::Reactive::WhileCount_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0));
    type->SetFields(25);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEmpty__New2_fn, 0, true, WhileEmpty_typeof(), 0));
    return type;
}

// public WhileEmpty() :2751
void WhileEmpty__ctor_3_fn(WhileEmpty* __this)
{
    __this->ctor_3();
}

// public WhileEmpty New() :2751
void WhileEmpty__New2_fn(WhileEmpty** __retval)
{
    *__retval = WhileEmpty::New2();
}

// public WhileEmpty() [instance] :2751
void WhileEmpty::ctor_3()
{
    uStackFrame __("Fuse.Reactive.WhileEmpty", ".ctor()");
    ctor_2();
    EqualTo(0);
}

// public WhileEmpty New() [static] :2751
WhileEmpty* WhileEmpty::New2()
{
    WhileEmpty* obj1 = (WhileEmpty*)uNew(WhileEmpty_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Fuse::Reactive
