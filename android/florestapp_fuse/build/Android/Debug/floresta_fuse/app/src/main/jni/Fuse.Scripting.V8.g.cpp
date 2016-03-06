// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.V8.Array.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Scripting.V8.Function.h>
#include <Fuse.Scripting.V8.Marshaller.CallbackWrapper.h>
#include <Fuse.Scripting.V8.Marshaller.h>
#include <Fuse.Scripting.V8.Object.h>
#include <Fuse.Scripting.V8.Simple.Array.h>
#include <Fuse.Scripting.V8.Simple.Bool.h>
#include <Fuse.Scripting.V8.Simple.Context.h>
#include <Fuse.Scripting.V8.Simple.DelegateCallback.h>
#include <Fuse.Scripting.V8.Simple.DelegateMessageHandler.h>
#include <Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler.h>
#include <Fuse.Scripting.V8.Simple.DllDirectory.h>
#include <Fuse.Scripting.V8.Simple.Double.h>
#include <Fuse.Scripting.V8.Simple.Function.h>
#include <Fuse.Scripting.V8.Simple.Int.h>
#include <Fuse.Scripting.V8.Simple.MessageHandler.h>
#include <Fuse.Scripting.V8.Simple.Object.h>
#include <Fuse.Scripting.V8.Simple.ScriptException.h>
#include <Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h>
#include <Fuse.Scripting.V8.Simple.String.h>
#include <Fuse.Scripting.V8.Simple.Type.h>
#include <Fuse.Scripting.V8.Simple.UniqueValueVector.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <Fuse.Scripting.V8.Simple.ValueVector.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Type.h>
static uString* STRINGS[3];
static uType* TYPES[26];

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.V8/0.24.6/$.uno(7)
// -----------------------------------------------------------------------------------

// internal sealed extern class Array :7
// {
::g::Fuse::Scripting::Array_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Array_type);
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.V8.Array", options);
    type->SetBase(::g::Fuse::Scripting::Array_typeof());
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))Array__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject**))Array__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject*))Array__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int*))Array__get_Length_fn;
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::Array_typeof(), offsetof(::g::Fuse::Scripting::V8::Array, _array), 0);
    return type;
}

// public Array(Fuse.Scripting.V8.Simple.Array array) :11
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::V8::Simple::Array* array)
{
    __this->ctor_1(array);
}

// public override sealed bool Equals(Fuse.Scripting.Array a) :36
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    Array* that = uAs<Array*>(a, Array_typeof());

    if (that == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_array)->Equals2(uPtr(that)->_array), void();
}

// public override sealed int GetHashCode() :46
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_array)), void();
}

// public override sealed object get_Item(int index) :18
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval)
{
    int index_ = *index;
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(uPtr(__this->_array)->Get(index_)), void();
}

// public override sealed void set_Item(int index, object value) :22
void Array__set_Item_fn(Array* __this, int* index, uObject* value)
{
    int index_ = *index;
    uPtr(__this->_array)->Set(index_, ::g::Fuse::Scripting::V8::Marshaller::Unwrap(value));
}

// public override sealed int get_Length() :30
void Array__get_Length_fn(Array* __this, int* __retval)
{
    return *__retval = uPtr(__this->_array)->Length(), void();
}

// public Array New(Fuse.Scripting.V8.Simple.Array array) :11
void Array__New1_fn(::g::Fuse::Scripting::V8::Simple::Array* array, Array** __retval)
{
    *__retval = Array::New1(array);
}

// public Array(Fuse.Scripting.V8.Simple.Array array) [instance] :11
void Array::ctor_1(::g::Fuse::Scripting::V8::Simple::Array* array)
{
    ctor_();
    _array = array;
}

// public Array New(Fuse.Scripting.V8.Simple.Array array) [static] :11
Array* Array::New1(::g::Fuse::Scripting::V8::Simple::Array* array)
{
    Array* obj1 = (Array*)uNew(Array_typeof());
    obj1->ctor_1(array);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.V8/0.24.6/$.uno(160)
// -------------------------------------------------------------------------------------

// private sealed class Marshaller.CallbackWrapper :160
// {
uType* Marshaller__CallbackWrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Marshaller__CallbackWrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Marshaller.CallbackWrapper", options);
    ::TYPES[0] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Scripting::V8::Marshaller__CallbackWrapper, _callback), 0);
    return type;
}

// public CallbackWrapper(Fuse.Scripting.Callback callback) :164
void Marshaller__CallbackWrapper__ctor__fn(Marshaller__CallbackWrapper* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// public Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.UniqueValueVector args) :169
void Marshaller__CallbackWrapper__Call_fn(Marshaller__CallbackWrapper* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Call(args);
}

// public CallbackWrapper New(Fuse.Scripting.Callback callback) :164
void Marshaller__CallbackWrapper__New1_fn(uDelegate* callback, Marshaller__CallbackWrapper** __retval)
{
    *__retval = Marshaller__CallbackWrapper::New1(callback);
}

// public CallbackWrapper(Fuse.Scripting.Callback callback) [instance] :164
void Marshaller__CallbackWrapper::ctor_(uDelegate* callback)
{
    _callback = callback;
}

// public Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.UniqueValueVector args) [instance] :169
::g::Fuse::Scripting::V8::Simple::Value* Marshaller__CallbackWrapper::Call(::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args)
{
    return ::g::Fuse::Scripting::V8::Marshaller::Unwrap(uPtr(_callback)->Invoke(1, (uArray*)::g::Fuse::Scripting::V8::Marshaller::WrapUniqueValueVector(args)));
}

// public CallbackWrapper New(Fuse.Scripting.Callback callback) [static] :164
Marshaller__CallbackWrapper* Marshaller__CallbackWrapper::New1(uDelegate* callback)
{
    Marshaller__CallbackWrapper* obj1 = (Marshaller__CallbackWrapper*)uNew(Marshaller__CallbackWrapper_typeof());
    obj1->ctor_(callback);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.V8/0.24.6/$.uno(63)
// ------------------------------------------------------------------------------------

// public sealed extern class Context :63
// {
// static Context() :70
static void Context__cctor__fn(uType* __type)
{
    ::g::Fuse::Scripting::V8::Simple::DllDirectory::SetTargetSpecific();
}

::g::Fuse::Scripting::Context_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Context_type);
    type = (::g::Fuse::Scripting::Context_type*)uClassType::New("Fuse.Scripting.V8.Context", options);
    type->SetBase(::g::Fuse::Scripting::Context_typeof());
    type->fp_cctor_ = Context__cctor__fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate1 = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate1_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    ::TYPES[1] = ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::ScriptException_typeof());
    ::TYPES[3] = ::g::Fuse::Scripting::V8::Simple::MessageHandler_typeof();
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Fuse::Scripting::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Context_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Scripting::V8::Simple::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _context), 0,
        ::g::Fuse::Scripting::V8::Simple::MessageHandler_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _runtimeExceptionHandler), 0,
        ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _scriptExceptionHandler), 0);
    return type;
}

// public Context(Uno.Threading.IDispatcher ownerThread) :75
void Context__ctor_1_fn(Context* __this, uObject* ownerThread)
{
    __this->ctor_1(ownerThread);
}

// public override sealed void Dispose() :116
void Context__Dispose_fn(Context* __this)
{
    uPtr(__this->_context)->Dispose();
}

// public override sealed object Evaluate(string fileName, string code) :103
void Context__Evaluate1_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(uPtr(__this->_context)->Evaluate(::g::Fuse::Scripting::V8::Simple::String::New5(fileName), ::g::Fuse::Scripting::V8::Simple::String::New5(code))), void();
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :110
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    return *__retval = ::g::Fuse::Scripting::V8::Object::New1(uPtr(__this->_context)->GlobalObject()), void();
}

// public Context New(Uno.Threading.IDispatcher ownerThread) :75
void Context__New1_fn(uObject* ownerThread, Context** __retval)
{
    *__retval = Context::New1(ownerThread);
}

// private static void OnRuntimeException(string message) :98
void Context__OnRuntimeException_fn(uString* message)
{
    Context::OnRuntimeException(message);
}

// private static void OnScriptException(Fuse.Scripting.V8.Simple.ScriptException e) :87
void Context__OnScriptException_fn(::g::Fuse::Scripting::V8::Simple::ScriptException* e)
{
    Context::OnScriptException(e);
}

// public Context(Uno.Threading.IDispatcher ownerThread) [instance] :75
void Context::ctor_1(uObject* ownerThread)
{
    ctor_(ownerThread);
    _scriptExceptionHandler = ::g::Fuse::Scripting::V8::Simple::DelegateScriptExceptionHandler::New2(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Scripting.V8.Simple.ScriptException>*/], (void*)Context__OnScriptException_fn));
    _runtimeExceptionHandler = ::g::Fuse::Scripting::V8::Simple::DelegateMessageHandler::New2(uDelegate::New(::TYPES[4/*Uno.Action<string>*/], (void*)Context__OnRuntimeException_fn));
    _context = ::g::Fuse::Scripting::V8::Simple::Context::New1(_scriptExceptionHandler, _runtimeExceptionHandler);
}

// public Context New(Uno.Threading.IDispatcher ownerThread) [static] :75
Context* Context::New1(uObject* ownerThread)
{
    Context* obj1 = (Context*)uNew(Context_typeof());
    obj1->ctor_1(ownerThread);
    return obj1;
}

// private static void OnRuntimeException(string message) [static] :98
void Context::OnRuntimeException(uString* message)
{
    Context_typeof()->Init();
    U_THROW(::g::Uno::Exception::New2(message));
}

// private static void OnScriptException(Fuse.Scripting.V8.Simple.ScriptException e) [static] :87
void Context::OnScriptException(::g::Fuse::Scripting::V8::Simple::ScriptException* e)
{
    Context_typeof()->Init();
    U_THROW(::g::Fuse::Scripting::ScriptException::New4(uPtr(uPtr(e)->GetName())->GetValue(), uPtr(uPtr(e)->GetErrorMessage())->GetValue(), uPtr(uPtr(e)->GetFileName())->GetValue(), uPtr(e)->GetLineNumber(), uPtr(uPtr(e)->GetSourceLine())->GetValue(), uPtr(uPtr(e)->GetStackTrace())->GetValue()));
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.V8/0.24.6/$.uno(516)
// -------------------------------------------------------------------------------------

// internal sealed extern class Function :516
// {
::g::Fuse::Scripting::Function_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Function_type);
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.V8.Function", options);
    type->SetBase(::g::Fuse::Scripting::Function_typeof());
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, uArray*, uObject**))Function__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, uArray*, ::g::Fuse::Scripting::Object**))Function__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))Function__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    ::TYPES[5] = ::g::Fuse::Scripting::Object_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::Function_typeof(), offsetof(::g::Fuse::Scripting::V8::Function, _function), 0);
    return type;
}

// internal Function(Fuse.Scripting.V8.Simple.Function function) :520
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::V8::Simple::Function* function)
{
    __this->ctor_1(function);
}

// public override sealed object Call(object[] args) :525
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval)
{
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(uPtr(__this->_function)->Call(::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(args))), void();
}

// public override sealed Fuse.Scripting.Object Construct(object[] args) :530
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    return *__retval = ::g::Fuse::Scripting::V8::Object::New1(uPtr(__this->_function)->Construct(::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(args))), void();
}

// public override sealed bool Equals(Fuse.Scripting.Function f) :535
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval)
{
    Function* that = uAs<Function*>(f, Function_typeof());

    if (that == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_function)->Equals2(uPtr(that)->_function), void();
}

// public override sealed int GetHashCode() :545
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_function)), void();
}

// internal Function New(Fuse.Scripting.V8.Simple.Function function) :520
void Function__New1_fn(::g::Fuse::Scripting::V8::Simple::Function* function, Function** __retval)
{
    *__retval = Function::New1(function);
}

// internal Function(Fuse.Scripting.V8.Simple.Function function) [instance] :520
void Function::ctor_1(::g::Fuse::Scripting::V8::Simple::Function* function)
{
    ctor_();
    _function = function;
}

// internal Function New(Fuse.Scripting.V8.Simple.Function function) [static] :520
Function* Function::New1(::g::Fuse::Scripting::V8::Simple::Function* function)
{
    Function* obj1 = (Function*)uNew(Function_typeof());
    obj1->ctor_1(function);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.V8/0.24.6/$.uno(126)
// -------------------------------------------------------------------------------------

// internal static extern class Marshaller :126
// {
uClassType* Marshaller_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Marshaller", options);
    ::STRINGS[0] = uString::Const("Unhandled type in V8 marshaller: ");
    ::STRINGS[1] = uString::Const(":");
    ::STRINGS[2] = uString::Const("V8 marshaller: The impossible happened.");
    ::TYPES[6] = ::g::Uno::Int_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    ::TYPES[8] = ::g::Uno::Double_typeof();
    ::TYPES[9] = ::g::Uno::Float_typeof();
    ::TYPES[10] = ::g::Uno::String_typeof();
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::V8::Object_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::V8::Array_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[15] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::UniqueValueVector_typeof(), ::g::Fuse::Scripting::V8::Simple::Value_typeof());
    ::TYPES[16] = uObject_typeof();
    ::TYPES[17] = uObject_typeof()->Array();
    ::TYPES[18] = ::g::Fuse::Scripting::V8::Simple::Int_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::V8::Simple::Double_typeof();
    ::TYPES[20] = ::g::Fuse::Scripting::V8::Simple::String_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::V8::Simple::Bool_typeof();
    ::TYPES[22] = ::g::Fuse::Scripting::V8::Simple::Object_typeof();
    ::TYPES[23] = ::g::Fuse::Scripting::V8::Simple::Array_typeof();
    ::TYPES[24] = ::g::Fuse::Scripting::V8::Simple::Function_typeof();
    return type;
}

// internal static Fuse.Scripting.V8.Simple.Value Unwrap(object obj) :145
void Marshaller__Unwrap_fn(uObject* obj, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = Marshaller::Unwrap(obj);
}

// internal static Fuse.Scripting.V8.Simple.ValueVector UnwrapArray(object[] objs) :175
void Marshaller__UnwrapArray_fn(uArray* objs, ::g::Fuse::Scripting::V8::Simple::ValueVector** __retval)
{
    *__retval = Marshaller::UnwrapArray(objs);
}

// internal static object Wrap(Fuse.Scripting.V8.Simple.Value obj) :128
void Marshaller__Wrap_fn(::g::Fuse::Scripting::V8::Simple::Value* obj, uObject** __retval)
{
    *__retval = Marshaller::Wrap(obj);
}

// internal static object[] WrapUniqueValueVector(Fuse.Scripting.V8.Simple.UniqueValueVector vec) :196
void Marshaller__WrapUniqueValueVector_fn(::g::Fuse::Scripting::V8::Simple::UniqueValueVector* vec, uArray** __retval)
{
    *__retval = Marshaller::WrapUniqueValueVector(vec);
}

// internal static Fuse.Scripting.V8.Simple.Value Unwrap(object obj) [static] :145
::g::Fuse::Scripting::V8::Simple::Value* Marshaller::Unwrap(uObject* obj)
{
    if (obj == NULL)
        return NULL;

    if (uIs(obj, ::TYPES[6/*int*/]))
        return ::g::Fuse::Scripting::V8::Simple::Int::New5(uUnbox<int>(::TYPES[6/*int*/], obj));

    if (uIs(obj, ::TYPES[8/*double*/]))
        return ::g::Fuse::Scripting::V8::Simple::Double::New4(uUnbox<double>(::TYPES[8/*double*/], obj));

    if (uIs(obj, ::TYPES[9/*float*/]))
        return ::g::Fuse::Scripting::V8::Simple::Double::New4((double)uUnbox<float>(::TYPES[9/*float*/], obj));

    if (uIs(obj, ::TYPES[10/*string*/]))
        return ::g::Fuse::Scripting::V8::Simple::String::New5(uCast<uString*>(obj, ::TYPES[10/*string*/]));

    if (uIs(obj, ::TYPES[11/*bool*/]))
        return ::g::Fuse::Scripting::V8::Simple::Bool::New4(uUnbox<bool>(::TYPES[11/*bool*/], obj));

    if (uIs(obj, ::TYPES[12/*Fuse.Scripting.V8.Object*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::V8::Object*>(obj, ::TYPES[12/*Fuse.Scripting.V8.Object*/]))->_object;

    if (uIs(obj, ::TYPES[13/*Fuse.Scripting.V8.Array*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::V8::Array*>(obj, ::TYPES[13/*Fuse.Scripting.V8.Array*/]))->_array;

    if (uIs(obj, ::TYPES[14/*Fuse.Scripting.V8.Function*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::V8::Function*>(obj, ::TYPES[14/*Fuse.Scripting.V8.Function*/]))->_function;

    if (uIs(obj, ::TYPES[0/*Fuse.Scripting.Callback*/]))
        return ::g::Fuse::Scripting::V8::Simple::DelegateCallback::New5(uDelegate::New(::TYPES[15/*Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value>*/], (void*)Marshaller__CallbackWrapper__Call_fn, Marshaller__CallbackWrapper::New1(uCast<uDelegate*>(obj, ::TYPES[0/*Fuse.Scripting.Callback*/]))));

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unhandled t...*/], ::g::Uno::Object::GetType(uPtr(obj))), ::STRINGS[1/*":"*/]), obj)));
}

// internal static Fuse.Scripting.V8.Simple.ValueVector UnwrapArray(object[] objs) [static] :175
::g::Fuse::Scripting::V8::Simple::ValueVector* Marshaller::UnwrapArray(uArray* objs)
{
    uArray* array1;
    int index2;
    int length3;
    ::g::Fuse::Scripting::V8::Simple::ValueVector* unwrappedObjs = ::g::Fuse::Scripting::V8::Simple::ValueVector::New1();

    for (array1 = objs, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uObject* obj = uPtr(array1)->Strong<uObject*>(index2);
        uPtr(unwrappedObjs)->Add(Marshaller::Unwrap(obj));
    }

    return unwrappedObjs;
}

// internal static object Wrap(Fuse.Scripting.V8.Simple.Value obj) [static] :128
uObject* Marshaller::Wrap(::g::Fuse::Scripting::V8::Simple::Value* obj)
{
    if (obj == NULL)
        return NULL;

    switch (uPtr(obj)->GetValueType())
    {
        case 0:
            return uBox<int>(::TYPES[6/*int*/], uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::Int*>(obj, ::TYPES[18/*Fuse.Scripting.V8.Simple.Int*/]))->GetValue());
        case 1:
            return uBox(::TYPES[8/*double*/], uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::Double*>(obj, ::TYPES[19/*Fuse.Scripting.V8.Simple.Double*/]))->GetValue());
        case 2:
            return uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::String*>(obj, ::TYPES[20/*Fuse.Scripting.V8.Simple.String*/]))->GetValue();
        case 3:
            return uBox(::TYPES[11/*bool*/], uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::Bool*>(obj, ::TYPES[21/*Fuse.Scripting.V8.Simple.Bool*/]))->GetValue());
        case 4:
            return ::g::Fuse::Scripting::V8::Object::New1(uCast< ::g::Fuse::Scripting::V8::Simple::Object*>(obj, ::TYPES[22/*Fuse.Scripting.V8.Simple.Object*/]));
        case 5:
            return ::g::Fuse::Scripting::V8::Array::New1(uCast< ::g::Fuse::Scripting::V8::Simple::Array*>(obj, ::TYPES[23/*Fuse.Scripting.V8.Simple.Array*/]));
        case 6:
            return ::g::Fuse::Scripting::V8::Function::New1(uCast< ::g::Fuse::Scripting::V8::Simple::Function*>(obj, ::TYPES[24/*Fuse.Scripting.V8.Simple.Function*/]));
        case 7:
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"V8 marshall...*/]));
    }
}

// internal static object[] WrapUniqueValueVector(Fuse.Scripting.V8.Simple.UniqueValueVector vec) [static] :196
uArray* Marshaller::WrapUniqueValueVector(::g::Fuse::Scripting::V8::Simple::UniqueValueVector* vec)
{
    int len = uPtr(vec)->Length();
    uArray* wrappedVec = uArray::New(::TYPES[17/*object[]*/], len);

    for (int i = 0; i < len; ++i)
        uPtr(wrappedVec)->Strong<uObject*>(i) = Marshaller::Wrap(uPtr(vec)->Get(i));

    return wrappedVec;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.V8/0.24.6/$.uno(561)
// -------------------------------------------------------------------------------------

// internal sealed extern class Object :561
// {
::g::Fuse::Scripting::Object_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Object_type);
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.V8.Object", options);
    type->SetBase(::g::Fuse::Scripting::Object_typeof());
    type->fp_CallMethod = (void(*)(::g::Fuse::Scripting::Object*, uString*, uArray*, uObject**))Object__CallMethod_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Scripting::Object*, uString*, bool*))Object__ContainsKey_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*))Object__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->fp_InstanceOf = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Function*, bool*))Object__InstanceOf_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject**))Object__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject*))Object__set_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Scripting::Object*, uArray**))Object__get_Keys_fn;
    ::TYPES[14] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[25] = ::g::Uno::String_typeof()->Array();
    ::TYPES[20] = ::g::Fuse::Scripting::V8::Simple::String_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::Object_typeof(), offsetof(::g::Fuse::Scripting::V8::Object, _object), 0);
    return type;
}

// public Object(Fuse.Scripting.V8.Simple.Object obj) :565
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::Object* obj)
{
    __this->ctor_1(obj);
}

// public override sealed object CallMethod(string name, object[] args) :602
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval)
{
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(uPtr(__this->_object)->CallMethod(::g::Fuse::Scripting::V8::Simple::String::New5(name), ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(args))), void();
}

// public override sealed bool ContainsKey(string key) :607
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    return *__retval = uPtr(__this->_object)->ContainsKey(::g::Fuse::Scripting::V8::Simple::String::New5(key)), void();
}

// public override sealed bool Equals(Fuse.Scripting.Object o) :612
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval)
{
    Object* that = uAs<Object*>(o, Object_typeof());

    if (that == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_object)->Equals2(uPtr(that)->_object), void();
}

// public override sealed int GetHashCode() :622
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_object)), void();
}

// public override sealed bool InstanceOf(Fuse.Scripting.Function type) :597
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    return *__retval = uPtr(__this->_object)->InstanceOf(uPtr(uCast< ::g::Fuse::Scripting::V8::Function*>(type, ::TYPES[14/*Fuse.Scripting.V8.Function*/]))->_function), void();
}

// public override sealed object get_Item(string key) :572
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(uPtr(__this->_object)->Get(::g::Fuse::Scripting::V8::Simple::String::New5(key))), void();
}

// public override sealed void set_Item(string key, object value) :576
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    uPtr(__this->_object)->Set(::g::Fuse::Scripting::V8::Simple::String::New5(key), ::g::Fuse::Scripting::V8::Marshaller::Unwrap(value));
}

// public override sealed string[] get_Keys() :584
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* keys = uPtr(__this->_object)->Keys();
    int len = uPtr(keys)->Length();
    uArray* result = uArray::New(::TYPES[25/*string[]*/], len);

    for (int i = 0; i < len; ++i)
        uPtr(result)->Strong<uString*>(i) = uPtr(uAs< ::g::Fuse::Scripting::V8::Simple::String*>(uPtr(keys)->Get(i), ::TYPES[20/*Fuse.Scripting.V8.Simple.String*/]))->GetValue();

    return *__retval = result, void();
}

// public Object New(Fuse.Scripting.V8.Simple.Object obj) :565
void Object__New1_fn(::g::Fuse::Scripting::V8::Simple::Object* obj, Object** __retval)
{
    *__retval = Object::New1(obj);
}

// public Object(Fuse.Scripting.V8.Simple.Object obj) [instance] :565
void Object::ctor_1(::g::Fuse::Scripting::V8::Simple::Object* obj)
{
    ctor_();
    _object = obj;
}

// public Object New(Fuse.Scripting.V8.Simple.Object obj) [static] :565
Object* Object::New1(::g::Fuse::Scripting::V8::Simple::Object* obj)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

}}}} // ::g::Fuse::Scripting::V8
