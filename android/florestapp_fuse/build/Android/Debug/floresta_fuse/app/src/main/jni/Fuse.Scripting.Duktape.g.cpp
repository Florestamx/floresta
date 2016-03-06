// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <duktape_helpers.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Duktape.CallbackClosure.h>
#include <Fuse.Scripting.Duktape.CompileFlag.h>
#include <Fuse.Scripting.Duktape.Context.h>
#include <Fuse.Scripting.Duktape.duktape.h>
#include <Fuse.Scripting.Duktape.EnumFlags.h>
#include <Fuse.Scripting.Duktape.JSArray.h>
#include <Fuse.Scripting.Duktape.JSFunction.h>
#include <Fuse.Scripting.Duktape.JSObject.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
static uString* STRINGS[13];
static uType* TYPES[16];

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.24.6/$.uno(91)
// -----------------------------------------------------------------------------------------

// internal sealed extern class CallbackClosure :91
// {
uType* CallbackClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(CallbackClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.Duktape.CallbackClosure", options);
    ::TYPES[0] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptException_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Scripting::Duktape::CallbackClosure, _callback), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::Duktape::CallbackClosure, _context), 0);
    return type;
}

// public CallbackClosure(Uno.IntPtr context, Fuse.Scripting.Callback callback) :96
void CallbackClosure__ctor__fn(CallbackClosure* __this, void** context, uDelegate* callback)
{
    __this->ctor_(*context, callback);
}

// public CallbackClosure New(Uno.IntPtr context, Fuse.Scripting.Callback callback) :96
void CallbackClosure__New1_fn(void** context, uDelegate* callback, CallbackClosure** __retval)
{
    *__retval = CallbackClosure::New1(*context, callback);
}

// public object Proxy(object[] args) :102
void CallbackClosure__Proxy_fn(CallbackClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Proxy(args);
}

// public CallbackClosure(Uno.IntPtr context, Fuse.Scripting.Callback callback) [instance] :96
void CallbackClosure::ctor_(void* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public object Proxy(object[] args) [instance] :102
uObject* CallbackClosure::Proxy(uArray* args)
{
    try
    {
        uObject* res = uPtr(_callback)->Invoke(1, args);
        return res;
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[1/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* e = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            ::g::Fuse::Scripting::Duktape::duktape::error(_context, uPtr(e)->Message());
            return NULL;
        }
        else throw __t;
    }
}

// public CallbackClosure New(Uno.IntPtr context, Fuse.Scripting.Callback callback) [static] :96
CallbackClosure* CallbackClosure::New1(void* context, uDelegate* callback)
{
    CallbackClosure* obj1 = (CallbackClosure*)uNew(CallbackClosure_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.24.6/$.uno(554)
// ------------------------------------------------------------------------------------------

// internal extern enum CompileFlag :554
uEnumType* CompileFlag_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.Duktape.CompileFlag", ::g::Uno::UInt_typeof(), 7);
    type->SetLiterals(
        "DUK_COMPILE_EVAL", 1LL,
        "DUK_COMPILE_FUNCTION", 2LL,
        "DUK_COMPILE_STRICT", 4LL,
        "DUK_COMPILE_SAFE", 8LL,
        "DUK_COMPILE_NORESULT", 16LL,
        "DUK_COMPILE_NOSOURCE", 32LL,
        "DUK_COMPILE_STRLEN", 64LL);
    return type;
}

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.24.6/$.uno(118)
// ------------------------------------------------------------------------------------------

// public sealed extern class Context :118
// {
// static Context() :118
static void Context__cctor__fn(uType* __type)
{
    Context::_emptyArgs_ = uArray::New(::TYPES[2/*object[]*/], 0);
}

::g::Fuse::Scripting::Context_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Context_type);
    type = (::g::Fuse::Scripting::Context_type*)uClassType::New("Fuse.Scripting.Duktape.Context", options);
    type->SetBase(::g::Fuse::Scripting::Context_typeof());
    type->fp_cctor_ = Context__cctor__fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate1 = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate1_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    ::STRINGS[0] = uString::Const("name");
    ::STRINGS[1] = uString::Const("message");
    ::STRINGS[2] = uString::Const("fileName");
    ::STRINGS[3] = uString::Const("lineNumber");
    ::STRINGS[4] = uString::Const("stack");
    ::STRINGS[5] = uString::Const("Could not convert index to object");
    ::STRINGS[6] = uString::Const("function() { return __global_object__.__callback_proxy__(arguments, ");
    ::STRINGS[7] = uString::Const("); }");
    ::STRINGS[8] = uString::Const("Cannot push value: ");
    ::STRINGS[9] = uString::Const("__stashKey");
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[0] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[5] = ::g::Uno::Double_typeof();
    ::TYPES[6] = ::g::Uno::String_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = ::g::Uno::Delegate_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Duktape::JSFunction_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::Duktape::JSArray_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Duktape::JSObject_typeof();
    ::TYPES[12] = ::g::Uno::UInt_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Context_type, interface0));
    type->SetFields(2,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Scripting::Callback_typeof()), offsetof(::g::Fuse::Scripting::Duktape::Context, _callbacks), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Context, _callbacksCount), 0,
        ::g::Fuse::Scripting::Duktape::JSObject_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Context, _globalObject), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Context, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Context, _isAlive), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Context, _stashKey), 0,
        uObject_typeof()->Array(), (uintptr_t)&::g::Fuse::Scripting::Duktape::Context::_emptyArgs_, uFieldFlagsStatic);
    return type;
}

// internal int AddCallback(Fuse.Scripting.Callback callback) :158
void Context__AddCallback_fn(Context* __this, uDelegate* callback, int* __retval)
{
    *__retval = __this->AddCallback(callback);
}

// internal void CheckError(int errorCode) :420
void Context__CheckError_fn(Context* __this, int* errorCode)
{
    __this->CheckError(*errorCode);
}

// internal void Construct(int argc) :502
void Context__Construct_fn(Context* __this, int* argc)
{
    __this->Construct(*argc);
}

// internal bool DelProperty(int index, string key) :434
void Context__DelProperty2_fn(Context* __this, int* index, uString* key, bool* __retval)
{
    *__retval = __this->DelProperty2(*index, key);
}

// public override sealed void Dispose() :242
void Context__Dispose_fn(Context* __this)
{
    ::g::Fuse::Scripting::Duktape::duktape::destroy_heap(__this->_handle);
    __this->_isAlive = false;
}

// internal bool EnumeratorNext(int index, bool getValue) :524
void Context__EnumeratorNext_fn(Context* __this, int* index, bool* getValue, bool* __retval)
{
    *__retval = __this->EnumeratorNext(*index, *getValue);
}

// public object Evaluate(string code) :215
void Context__Evaluate2_fn(Context* __this, uString* code, uObject** __retval)
{
    *__retval = __this->Evaluate2(code);
}

// public override sealed object Evaluate(string fileName, string code) :196
void Context__Evaluate1_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    __this->Push5(code);
    __this->Push5(fileName);
    __this->CheckError(__this->SafeCompile(0));
    __this->CheckError(__this->SafeCall(0));
    uObject* result = __this->IndexToObject(__this->GetTop() - 1);
    __this->Pop();
    return *__retval = result, void();
}

// internal bool GetBool(int index) :436
void Context__GetBool_fn(Context* __this, int* index, bool* __retval)
{
    *__retval = __this->GetBool(*index);
}

// internal Fuse.Scripting.ScriptException GetError(int index) :372
void Context__GetError_fn(Context* __this, int* index, ::g::Fuse::Scripting::ScriptException** __retval)
{
    *__retval = __this->GetError(*index);
}

// internal Uno.IntPtr GetHeapPtr(int index) :488
void Context__GetHeapPtr_fn(Context* __this, int* index, void** __retval)
{
    *__retval = __this->GetHeapPtr(*index);
}

// internal int GetInt(int index) :468
void Context__GetInt_fn(Context* __this, int* index, int* __retval)
{
    *__retval = __this->GetInt(*index);
}

// internal long GetLength(int index) :490
void Context__GetLength_fn(Context* __this, int* index, int64_t* __retval)
{
    *__retval = __this->GetLength(*index);
}

// internal double GetNumber(int index) :466
void Context__GetNumber_fn(Context* __this, int* index, double* __retval)
{
    *__retval = __this->GetNumber(*index);
}

// internal bool GetProperty(int index, int arrIndex) :438
void Context__GetProperty_fn(Context* __this, int* index, int* arrIndex, bool* __retval)
{
    *__retval = __this->GetProperty(*index, *arrIndex);
}

// internal bool GetProperty(int index, string key) :440
void Context__GetProperty1_fn(Context* __this, int* index, uString* key, bool* __retval)
{
    *__retval = __this->GetProperty1(*index, key);
}

// internal string GetString(int index) :492
void Context__GetString_fn(Context* __this, int* index, uString** __retval)
{
    *__retval = __this->GetString(*index);
}

// internal int GetTop() :470
void Context__GetTop_fn(Context* __this, int* __retval)
{
    *__retval = __this->GetTop();
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :123
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    if (__this->_globalObject == NULL)
    {
        __this->PushGlobalObject();
        void* handle = __this->GetHeapPtr(__this->GetTop() - 1);
        __this->Pop();
        __this->_globalObject = ::g::Fuse::Scripting::Duktape::JSObject::New1(__this, handle);
    }

    return *__retval = __this->_globalObject, void();
}

// internal bool HasProperty(int index, string key) :464
void Context__HasProperty_fn(Context* __this, int* index, uString* key, bool* __retval)
{
    *__retval = __this->HasProperty(*index, key);
}

// internal object IndexToObject(int index) :248
void Context__IndexToObject_fn(Context* __this, int* index, uObject** __retval)
{
    *__retval = __this->IndexToObject(*index);
}

// internal bool IsArray(int index) :442
void Context__IsArray_fn(Context* __this, int* index, bool* __retval)
{
    *__retval = __this->IsArray(*index);
}

// internal bool IsBool(int index) :444
void Context__IsBool_fn(Context* __this, int* index, bool* __retval)
{
    *__retval = __this->IsBool(*index);
}

// internal bool IsFunction(int index) :446
void Context__IsFunction_fn(Context* __this, int* index, bool* __retval)
{
    *__retval = __this->IsFunction(*index);
}

// internal bool IsNullOrUndefined(int index) :452
void Context__IsNullOrUndefined_fn(Context* __this, int* index, bool* __retval)
{
    *__retval = __this->IsNullOrUndefined(*index);
}

// internal bool IsNumber(int index) :454
void Context__IsNumber_fn(Context* __this, int* index, bool* __retval)
{
    *__retval = __this->IsNumber(*index);
}

// internal bool IsObject(int index) :456
void Context__IsObject_fn(Context* __this, int* index, bool* __retval)
{
    *__retval = __this->IsObject(*index);
}

// internal bool IsString(int index) :458
void Context__IsString_fn(Context* __this, int* index, bool* __retval)
{
    *__retval = __this->IsString(*index);
}

// internal void Pop() :508
void Context__Pop_fn(Context* __this)
{
    __this->Pop();
}

// internal void Pop2() :510
void Context__Pop2_fn(Context* __this)
{
    __this->Pop2();
}

// internal void Push(bool val) :514
void Context__Push_fn(Context* __this, bool* val)
{
    __this->Push(*val);
}

// internal void Push(double val) :516
void Context__Push1_fn(Context* __this, double* val)
{
    __this->Push1(*val);
}

// internal void Push(Fuse.Scripting.Callback callback) :365
void Context__Push2_fn(Context* __this, uDelegate* callback)
{
    __this->Push2(callback);
}

// internal void Push(int val) :518
void Context__Push3_fn(Context* __this, int* val)
{
    __this->Push3(*val);
}

// internal void Push(object value) :282
void Context__Push4_fn(Context* __this, uObject* value)
{
    __this->Push4(value);
}

// internal void Push(string str) :520
void Context__Push5_fn(Context* __this, uString* str)
{
    __this->Push5(str);
}

// internal void PushEnumerator(int index, Fuse.Scripting.Duktape.EnumFlags flags) :522
void Context__PushEnumerator_fn(Context* __this, int* index, int* flags)
{
    __this->PushEnumerator(*index, *flags);
}

// internal void PushGlobalObject() :530
void Context__PushGlobalObject_fn(Context* __this)
{
    __this->PushGlobalObject();
}

// internal void PushGlobalStash() :532
void Context__PushGlobalStash_fn(Context* __this)
{
    __this->PushGlobalStash();
}

// internal int PushHeapPtr(Uno.IntPtr ptr) :474
void Context__PushHeapPtr_fn(Context* __this, void** ptr, int* __retval)
{
    *__retval = __this->PushHeapPtr(*ptr);
}

// internal void PushNull() :534
void Context__PushNull_fn(Context* __this)
{
    __this->PushNull();
}

// internal bool PutProperty(int index, int arrIndex) :460
void Context__PutProperty_fn(Context* __this, int* index, int* arrIndex, bool* __retval)
{
    *__retval = __this->PutProperty(*index, *arrIndex);
}

// internal bool PutProperty(int index, string key) :462
void Context__PutProperty1_fn(Context* __this, int* index, uString* key, bool* __retval)
{
    *__retval = __this->PutProperty1(*index, key);
}

// internal int SafeCall(int argc) :478
void Context__SafeCall_fn(Context* __this, int* argc, int* __retval)
{
    *__retval = __this->SafeCall(*argc);
}

// internal int SafeCallMethod(int argc) :480
void Context__SafeCallMethod_fn(Context* __this, int* argc, int* __retval)
{
    *__retval = __this->SafeCallMethod(*argc);
}

// internal int SafeCompile(Fuse.Scripting.Duktape.CompileFlag flags) :484
void Context__SafeCompile_fn(Context* __this, uint32_t* flags, int* __retval)
{
    *__retval = __this->SafeCompile(*flags);
}

// internal int SafeCompileFunction(string source) :482
void Context__SafeCompileFunction_fn(Context* __this, uString* source, int* __retval)
{
    *__retval = __this->SafeCompileFunction(source);
}

// internal int SafeEval(string code) :486
void Context__SafeEval_fn(Context* __this, uString* code, int* __retval)
{
    *__retval = __this->SafeEval(code);
}

// internal string SafeToString(int index) :494
void Context__SafeToString_fn(Context* __this, int* index, uString** __retval)
{
    *__retval = __this->SafeToString(*index);
}

// internal string Stash(Uno.IntPtr heapPtr) :346
void Context__Stash_fn(Context* __this, void** heapPtr, uString** __retval)
{
    *__retval = __this->Stash(*heapPtr);
}

uSStrong<uArray*> Context::_emptyArgs_;

// internal int AddCallback(Fuse.Scripting.Callback callback) [instance] :158
int Context::AddCallback(uDelegate* callback)
{
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_callbacks), uCRef<int>(_callbacksCount), uDelegate::New(::TYPES[0/*Fuse.Scripting.Callback*/], (void*)::g::Fuse::Scripting::Duktape::CallbackClosure__Proxy_fn, ::g::Fuse::Scripting::Duktape::CallbackClosure::New1(_handle, callback)));
    return _callbacksCount++;
}

// internal void CheckError(int errorCode) [instance] :420
void Context::CheckError(int errorCode)
{
    if (errorCode != 0)
    {
        ::g::Fuse::Scripting::ScriptException* e = GetError(GetTop() - 1);
        Pop();
        U_THROW(e);
    }
}

// internal void Construct(int argc) [instance] :502
void Context::Construct(int argc)
{
    ::g::Fuse::Scripting::Duktape::duktape::new_(_handle, argc);
}

// internal bool DelProperty(int index, string key) [instance] :434
bool Context::DelProperty2(int index, uString* key)
{
    return ::g::Fuse::Scripting::Duktape::duktape::del_prop_string(_handle, index, key);
}

// internal bool EnumeratorNext(int index, bool getValue) [instance] :524
bool Context::EnumeratorNext(int index, bool getValue)
{
    return ::g::Fuse::Scripting::Duktape::duktape::next(_handle, index, getValue);
}

// public object Evaluate(string code) [instance] :215
uObject* Context::Evaluate2(uString* code)
{
    CheckError(SafeEval(code));
    uObject* result = IndexToObject(GetTop() - 1);
    Pop();
    return result;
}

// internal bool GetBool(int index) [instance] :436
bool Context::GetBool(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::get_boolean(_handle, index);
}

// internal Fuse.Scripting.ScriptException GetError(int index) [instance] :372
::g::Fuse::Scripting::ScriptException* Context::GetError(int index)
{
    uString* name = NULL;
    uString* message = NULL;
    uString* fileName = NULL;
    int lineNumber = -1;
    uString* stack = NULL;

    if (IsObject(index))
    {
        GetProperty1(index, ::STRINGS[0/*"name"*/]);

        if (IsString(-1))
            name = GetString(-1);

        Pop();
        GetProperty1(index, ::STRINGS[1/*"message"*/]);

        if (IsString(-1))
            message = GetString(-1);

        Pop();
        GetProperty1(index, ::STRINGS[2/*"fileName"*/]);

        if (IsString(-1))
            fileName = GetString(-1);

        Pop();
        GetProperty1(index, ::STRINGS[3/*"lineNumber"*/]);
        lineNumber = GetInt(-1);
        Pop();
        GetProperty1(index, ::STRINGS[4/*"stack"*/]);

        if (IsString(-1))
            stack = GetString(-1);

        Pop();
    }
    else
        message = SafeToString(index);

    return ::g::Fuse::Scripting::ScriptException::New4(name, message, fileName, lineNumber, NULL, stack);
}

// internal Uno.IntPtr GetHeapPtr(int index) [instance] :488
void* Context::GetHeapPtr(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::get_heapptr(_handle, index);
}

// internal int GetInt(int index) [instance] :468
int Context::GetInt(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::get_int(_handle, index);
}

// internal long GetLength(int index) [instance] :490
int64_t Context::GetLength(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::get_length(_handle, index);
}

// internal double GetNumber(int index) [instance] :466
double Context::GetNumber(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::get_number(_handle, index);
}

// internal bool GetProperty(int index, int arrIndex) [instance] :438
bool Context::GetProperty(int index, int arrIndex)
{
    return ::g::Fuse::Scripting::Duktape::duktape::get_prop_index(_handle, index, arrIndex);
}

// internal bool GetProperty(int index, string key) [instance] :440
bool Context::GetProperty1(int index, uString* key)
{
    return ::g::Fuse::Scripting::Duktape::duktape::get_prop_string(_handle, index, key);
}

// internal string GetString(int index) [instance] :492
uString* Context::GetString(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::get_string(_handle, index);
}

// internal int GetTop() [instance] :470
int Context::GetTop()
{
    return ::g::Fuse::Scripting::Duktape::duktape::get_top(_handle);
}

// internal bool HasProperty(int index, string key) [instance] :464
bool Context::HasProperty(int index, uString* key)
{
    return ::g::Fuse::Scripting::Duktape::duktape::has_prop_string(_handle, index, key);
}

// internal object IndexToObject(int index) [instance] :248
uObject* Context::IndexToObject(int index)
{
    if (IsFunction(index))
        return ::g::Fuse::Scripting::Duktape::JSFunction::New1(this, GetHeapPtr(index));

    if (IsArray(index))
        return ::g::Fuse::Scripting::Duktape::JSArray::New1(this, GetHeapPtr(index));

    if (IsObject(index))
        return ::g::Fuse::Scripting::Duktape::JSObject::New1(this, GetHeapPtr(index));

    if (IsNumber(index))
        return uBox(::TYPES[5/*double*/], GetNumber(index));

    if (IsString(index))
        return GetString(index);

    if (IsBool(index))
        return uBox(::TYPES[7/*bool*/], GetBool(index));

    if (IsNullOrUndefined(index))
        return NULL;

    U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"Could not c...*/]));
}

// internal bool IsArray(int index) [instance] :442
bool Context::IsArray(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::is_array(_handle, index);
}

// internal bool IsBool(int index) [instance] :444
bool Context::IsBool(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::is_boolean(_handle, index);
}

// internal bool IsFunction(int index) [instance] :446
bool Context::IsFunction(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::is_function(_handle, index);
}

// internal bool IsNullOrUndefined(int index) [instance] :452
bool Context::IsNullOrUndefined(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::is_null_or_undefined(_handle, index);
}

// internal bool IsNumber(int index) [instance] :454
bool Context::IsNumber(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::is_number(_handle, index);
}

// internal bool IsObject(int index) [instance] :456
bool Context::IsObject(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::is_object(_handle, index);
}

// internal bool IsString(int index) [instance] :458
bool Context::IsString(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::is_string(_handle, index);
}

// internal void Pop() [instance] :508
void Context::Pop()
{
    ::g::Fuse::Scripting::Duktape::duktape::pop(_handle);
}

// internal void Pop2() [instance] :510
void Context::Pop2()
{
    ::g::Fuse::Scripting::Duktape::duktape::pop_2(_handle);
}

// internal void Push(bool val) [instance] :514
void Context::Push(bool val)
{
    ::g::Fuse::Scripting::Duktape::duktape::push_boolean(_handle, val);
}

// internal void Push(double val) [instance] :516
void Context::Push1(double val)
{
    ::g::Fuse::Scripting::Duktape::duktape::push_number(_handle, val);
}

// internal void Push(Fuse.Scripting.Callback callback) [instance] :365
void Context::Push2(uDelegate* callback)
{
    int index = AddCallback(callback);
    int result = SafeCompileFunction(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[6/*"function() ...*/], ::g::Uno::Int::ToString(index, ::TYPES[4/*int*/])), ::STRINGS[7/*"); }"*/]));
    CheckError(result);
}

// internal void Push(int val) [instance] :518
void Context::Push3(int val)
{
    ::g::Fuse::Scripting::Duktape::duktape::push_int(_handle, val);
}

// internal void Push(object value) [instance] :282
void Context::Push4(uObject* value)
{
    if (uIs(value, ::TYPES[4/*int*/]))
    {
        Push3(uUnbox<int>(::TYPES[4/*int*/], value));
        return;
    }

    if (uIs(value, ::TYPES[5/*double*/]))
    {
        Push1(uUnbox<double>(::TYPES[5/*double*/], value));
        return;
    }

    if (uIs(value, ::TYPES[6/*string*/]))
    {
        Push5(uCast<uString*>(value, ::TYPES[6/*string*/]));
        return;
    }

    if (uIs(value, ::TYPES[7/*bool*/]))
    {
        Push(uUnbox<bool>(::TYPES[7/*bool*/], value));
        return;
    }

    if (value == NULL)
    {
        PushNull();
        return;
    }

    uDelegate* c = uAs<uDelegate*>(value, ::TYPES[0/*Fuse.Scripting.Callback*/]);

    if (::g::Uno::Delegate::op_Inequality(c, NULL))
    {
        Push2(c);
        return;
    }

    ::g::Fuse::Scripting::Duktape::JSFunction* f = uAs< ::g::Fuse::Scripting::Duktape::JSFunction*>(value, ::TYPES[9/*Fuse.Scripting.Duktape.JSFunction*/]);

    if (f != NULL)
    {
        PushHeapPtr(uPtr(f)->Handle());
        return;
    }

    ::g::Fuse::Scripting::Duktape::JSArray* a = uAs< ::g::Fuse::Scripting::Duktape::JSArray*>(value, ::TYPES[10/*Fuse.Scripting.Duktape.JSArray*/]);

    if (a != NULL)
    {
        PushHeapPtr(uPtr(a)->Handle());
        return;
    }

    ::g::Fuse::Scripting::Duktape::JSObject* o = uAs< ::g::Fuse::Scripting::Duktape::JSObject*>(value, ::TYPES[11/*Fuse.Scripting.Duktape.JSObject*/]);

    if (o != NULL)
    {
        PushHeapPtr(uPtr(o)->Handle());
        return;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[8/*"Cannot push...*/], value)));
}

// internal void Push(string str) [instance] :520
void Context::Push5(uString* str)
{
    ::g::Fuse::Scripting::Duktape::duktape::push_string(_handle, str);
}

// internal void PushEnumerator(int index, Fuse.Scripting.Duktape.EnumFlags flags) [instance] :522
void Context::PushEnumerator(int index, int flags)
{
    ::g::Fuse::Scripting::Duktape::duktape::enum_(_handle, index, flags);
}

// internal void PushGlobalObject() [instance] :530
void Context::PushGlobalObject()
{
    ::g::Fuse::Scripting::Duktape::duktape::push_global_object(_handle);
}

// internal void PushGlobalStash() [instance] :532
void Context::PushGlobalStash()
{
    ::g::Fuse::Scripting::Duktape::duktape::push_global_stash(_handle);
}

// internal int PushHeapPtr(Uno.IntPtr ptr) [instance] :474
int Context::PushHeapPtr(void* ptr)
{
    return ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(_handle, ptr);
}

// internal void PushNull() [instance] :534
void Context::PushNull()
{
    ::g::Fuse::Scripting::Duktape::duktape::push_null(_handle);
}

// internal bool PutProperty(int index, int arrIndex) [instance] :460
bool Context::PutProperty(int index, int arrIndex)
{
    return ::g::Fuse::Scripting::Duktape::duktape::put_prop_index(_handle, index, arrIndex);
}

// internal bool PutProperty(int index, string key) [instance] :462
bool Context::PutProperty1(int index, uString* key)
{
    return ::g::Fuse::Scripting::Duktape::duktape::put_prop_string(_handle, index, key);
}

// internal int SafeCall(int argc) [instance] :478
int Context::SafeCall(int argc)
{
    return ::g::Fuse::Scripting::Duktape::duktape::pcall(_handle, argc);
}

// internal int SafeCallMethod(int argc) [instance] :480
int Context::SafeCallMethod(int argc)
{
    return ::g::Fuse::Scripting::Duktape::duktape::pcall_method(_handle, argc);
}

// internal int SafeCompile(Fuse.Scripting.Duktape.CompileFlag flags) [instance] :484
int Context::SafeCompile(uint32_t flags)
{
    return ::g::Fuse::Scripting::Duktape::duktape::pcompile(_handle, flags);
}

// internal int SafeCompileFunction(string source) [instance] :482
int Context::SafeCompileFunction(uString* source)
{
    return ::g::Fuse::Scripting::Duktape::duktape::pcompile_string(_handle, 2U, source);
}

// internal int SafeEval(string code) [instance] :486
int Context::SafeEval(uString* code)
{
    return ::g::Fuse::Scripting::Duktape::duktape::peval_string(_handle, code);
}

// internal string SafeToString(int index) [instance] :494
uString* Context::SafeToString(int index)
{
    return ::g::Fuse::Scripting::Duktape::duktape::safe_to_string(_handle, index);
}

// internal string Stash(Uno.IntPtr heapPtr) [instance] :346
uString* Context::Stash(void* heapPtr)
{
    uString* stashKey = ::g::Uno::String::op_Addition2(::STRINGS[9/*"__stashKey"*/], ::g::Uno::Int::ToString(_stashKey, ::TYPES[4/*int*/]));
    _stashKey++;
    PushGlobalStash();
    PushHeapPtr(heapPtr);
    PutProperty1(GetTop() - 2, stashKey);
    Pop();
    return stashKey;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.24.6/$.uno(579)
// ------------------------------------------------------------------------------------------

// internal static extern class duktape :579
// {
uClassType* duktape_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.Duktape.duktape", options);
    return type;
}

// internal static bool del_prop_string(Uno.IntPtr ctx, int obj_index, string key) :750
void duktape__del_prop_string_fn(void** ctx, int* obj_index, uString* key, bool* __retval)
{
    *__retval = duktape::del_prop_string(*ctx, *obj_index, key);
}

// internal static void destroy_heap(Uno.IntPtr ctx) :855
void duktape__destroy_heap_fn(void** ctx)
{
    duktape::destroy_heap(*ctx);
}

// internal static void enum_(Uno.IntPtr ctx, int index, Fuse.Scripting.Duktape.EnumFlags flags) :595
void duktape__enum__fn(void** ctx, int* index, int* flags)
{
    duktape::enum_(*ctx, *index, *flags);
}

// internal static void error(Uno.IntPtr ctx, string message) :785
void duktape__error_fn(void** ctx, uString* message)
{
    duktape::error(*ctx, message);
}

// internal static bool get_boolean(Uno.IntPtr ctx, int index) :985
void duktape__get_boolean_fn(void** ctx, int* index, bool* __retval)
{
    *__retval = duktape::get_boolean(*ctx, *index);
}

// internal static Uno.IntPtr get_heapptr(Uno.IntPtr ctx, int index) :955
void duktape__get_heapptr_fn(void** ctx, int* index, void** __retval)
{
    *__retval = duktape::get_heapptr(*ctx, *index);
}

// internal static int get_int(Uno.IntPtr ctx, int index) :1030
void duktape__get_int_fn(void** ctx, int* index, int* __retval)
{
    *__retval = duktape::get_int(*ctx, *index);
}

// internal static long get_length(Uno.IntPtr ctx, int index) :970
void duktape__get_length_fn(void** ctx, int* index, int64_t* __retval)
{
    *__retval = duktape::get_length(*ctx, *index);
}

// internal static double get_number(Uno.IntPtr ctx, int index) :965
void duktape__get_number_fn(void** ctx, int* index, double* __retval)
{
    *__retval = duktape::get_number(*ctx, *index);
}

// internal static bool get_prop_index(Uno.IntPtr ctx, int index, int arr_index) :995
void duktape__get_prop_index_fn(void** ctx, int* index, int* arr_index, bool* __retval)
{
    *__retval = duktape::get_prop_index(*ctx, *index, *arr_index);
}

// internal static bool get_prop_string(Uno.IntPtr ctx, int obj_index, string key) :885
void duktape__get_prop_string_fn(void** ctx, int* obj_index, uString* key, bool* __retval)
{
    *__retval = duktape::get_prop_string(*ctx, *obj_index, key);
}

// internal static string get_string(Uno.IntPtr ctx, int index) :975
void duktape__get_string_fn(void** ctx, int* index, uString** __retval)
{
    *__retval = duktape::get_string(*ctx, *index);
}

// internal static int get_top(Uno.IntPtr ctx) :828
void duktape__get_top_fn(void** ctx, int* __retval)
{
    *__retval = duktape::get_top(*ctx);
}

// internal static bool has_prop_string(Uno.IntPtr ctx, int index, string key) :1040
void duktape__has_prop_string_fn(void** ctx, int* index, uString* key, bool* __retval)
{
    *__retval = duktape::has_prop_string(*ctx, *index, key);
}

// internal static bool is_array(Uno.IntPtr ctx, int index) :890
void duktape__is_array_fn(void** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_array(*ctx, *index);
}

// internal static bool is_boolean(Uno.IntPtr ctx, int index) :895
void duktape__is_boolean_fn(void** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_boolean(*ctx, *index);
}

// internal static bool is_function(Uno.IntPtr ctx, int index) :905
void duktape__is_function_fn(void** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_function(*ctx, *index);
}

// internal static bool is_null_or_undefined(Uno.IntPtr ctx, int index) :920
void duktape__is_null_or_undefined_fn(void** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_null_or_undefined(*ctx, *index);
}

// internal static bool is_number(Uno.IntPtr ctx, int index) :925
void duktape__is_number_fn(void** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_number(*ctx, *index);
}

// internal static bool is_object(Uno.IntPtr ctx, int index) :930
void duktape__is_object_fn(void** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_object(*ctx, *index);
}

// internal static bool is_string(Uno.IntPtr ctx, int index) :935
void duktape__is_string_fn(void** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_string(*ctx, *index);
}

// internal static void new_(Uno.IntPtr ctx, int nargs) :1045
void duktape__new__fn(void** ctx, int* nargs)
{
    duktape::new_(*ctx, *nargs);
}

// internal static bool next(Uno.IntPtr ctx, int index, bool getValue) :600
void duktape__next_fn(void** ctx, int* index, bool* getValue, bool* __retval)
{
    *__retval = duktape::next(*ctx, *index, *getValue);
}

// internal static int pcall(Uno.IntPtr ctx, int nargs) :615
void duktape__pcall_fn(void** ctx, int* nargs, int* __retval)
{
    *__retval = duktape::pcall(*ctx, *nargs);
}

// internal static int pcall_method(Uno.IntPtr ctx, int nargs) :625
void duktape__pcall_method_fn(void** ctx, int* nargs, int* __retval)
{
    *__retval = duktape::pcall_method(*ctx, *nargs);
}

// internal static int pcompile(Uno.IntPtr ctx, uint flags) :699
void duktape__pcompile_fn(void** ctx, uint32_t* flags, int* __retval)
{
    *__retval = duktape::pcompile(*ctx, *flags);
}

// internal static int pcompile_string(Uno.IntPtr ctx, uint flags, string src) :694
void duktape__pcompile_string_fn(void** ctx, uint32_t* flags, uString* src, int* __retval)
{
    *__retval = duktape::pcompile_string(*ctx, *flags, src);
}

// internal static int peval_string(Uno.IntPtr ctx, string code) :850
void duktape__peval_string_fn(void** ctx, uString* code, int* __retval)
{
    *__retval = duktape::peval_string(*ctx, code);
}

// internal static void pop(Uno.IntPtr ctx) :823
void duktape__pop_fn(void** ctx)
{
    duktape::pop(*ctx);
}

// internal static void pop_2(Uno.IntPtr ctx) :1005
void duktape__pop_2_fn(void** ctx)
{
    duktape::pop_2(*ctx);
}

// internal static void push_boolean(Uno.IntPtr ctx, bool value) :990
void duktape__push_boolean_fn(void** ctx, bool* value)
{
    duktape::push_boolean(*ctx, *value);
}

// internal static void push_global_object(Uno.IntPtr ctx) :818
void duktape__push_global_object_fn(void** ctx)
{
    duktape::push_global_object(*ctx);
}

// internal static void push_global_stash(Uno.IntPtr ctx) :1020
void duktape__push_global_stash_fn(void** ctx)
{
    duktape::push_global_stash(*ctx);
}

// internal static int push_heapptr(Uno.IntPtr ctx, Uno.IntPtr ptr) :950
void duktape__push_heapptr_fn(void** ctx, void** ptr, int* __retval)
{
    *__retval = duktape::push_heapptr(*ctx, *ptr);
}

// internal static void push_int(Uno.IntPtr ctx, int val) :875
void duktape__push_int_fn(void** ctx, int* val)
{
    duktape::push_int(*ctx, *val);
}

// internal static void push_null(Uno.IntPtr ctx) :960
void duktape__push_null_fn(void** ctx)
{
    duktape::push_null(*ctx);
}

// internal static void push_number(Uno.IntPtr ctx, double val) :839
void duktape__push_number_fn(void** ctx, double* val)
{
    duktape::push_number(*ctx, *val);
}

// internal static void push_string(Uno.IntPtr ctx, string str) :880
void duktape__push_string_fn(void** ctx, uString* str)
{
    duktape::push_string(*ctx, str);
}

// internal static bool put_prop_index(Uno.IntPtr ctx, int index, int arr_index) :1000
void duktape__put_prop_index_fn(void** ctx, int* index, int* arr_index, bool* __retval)
{
    *__retval = duktape::put_prop_index(*ctx, *index, *arr_index);
}

// internal static bool put_prop_string(Uno.IntPtr ctx, int obj_index, string key) :844
void duktape__put_prop_string_fn(void** ctx, int* obj_index, uString* key, bool* __retval)
{
    *__retval = duktape::put_prop_string(*ctx, *obj_index, key);
}

// internal static string safe_to_string(Uno.IntPtr ctx, int index) :980
void duktape__safe_to_string_fn(void** ctx, int* index, uString** __retval)
{
    *__retval = duktape::safe_to_string(*ctx, *index);
}

// internal static bool del_prop_string(Uno.IntPtr ctx, int obj_index, string key) [static] :750
bool duktape::del_prop_string(void* ctx, int obj_index, uString* key)
{
    return duk_del_prop_string(ctx, obj_index, uStringToCStr(key));
}

// internal static void destroy_heap(Uno.IntPtr ctx) [static] :855
void duktape::destroy_heap(void* ctx)
{
    duk_destroy_heap(ctx);
}

// internal static void enum_(Uno.IntPtr ctx, int index, Fuse.Scripting.Duktape.EnumFlags flags) [static] :595
void duktape::enum_(void* ctx, int index, int flags)
{
    duk_enum(ctx, index, flags);
}

// internal static void error(Uno.IntPtr ctx, string message) [static] :785
void duktape::error(void* ctx, uString* message)
{
    duk_error(ctx, DUK_ERR_ERROR, uStringToCStr(message));
}

// internal static bool get_boolean(Uno.IntPtr ctx, int index) [static] :985
bool duktape::get_boolean(void* ctx, int index)
{
    return duk_get_boolean(ctx, index);
}

// internal static Uno.IntPtr get_heapptr(Uno.IntPtr ctx, int index) [static] :955
void* duktape::get_heapptr(void* ctx, int index)
{
    return duk_get_heapptr(ctx, index);
}

// internal static int get_int(Uno.IntPtr ctx, int index) [static] :1030
int duktape::get_int(void* ctx, int index)
{
    return duk_get_int(ctx, index);
}

// internal static long get_length(Uno.IntPtr ctx, int index) [static] :970
int64_t duktape::get_length(void* ctx, int index)
{
    return duk_get_length(ctx, index);
}

// internal static double get_number(Uno.IntPtr ctx, int index) [static] :965
double duktape::get_number(void* ctx, int index)
{
    return duk_get_number(ctx, index);
}

// internal static bool get_prop_index(Uno.IntPtr ctx, int index, int arr_index) [static] :995
bool duktape::get_prop_index(void* ctx, int index, int arr_index)
{
    return duk_get_prop_index(ctx, index, arr_index);
}

// internal static bool get_prop_string(Uno.IntPtr ctx, int obj_index, string key) [static] :885
bool duktape::get_prop_string(void* ctx, int obj_index, uString* key)
{
    return duk_get_prop_string(ctx, obj_index, uStringToCStr(key));
}

// internal static string get_string(Uno.IntPtr ctx, int index) [static] :975
uString* duktape::get_string(void* ctx, int index)
{
    return uNewStringUtf8(duk_get_string(ctx, index));
}

// internal static int get_top(Uno.IntPtr ctx) [static] :828
int duktape::get_top(void* ctx)
{
    return duk_get_top(ctx);
}

// internal static bool has_prop_string(Uno.IntPtr ctx, int index, string key) [static] :1040
bool duktape::has_prop_string(void* ctx, int index, uString* key)
{
    return duk_has_prop_string(ctx, index, uStringToCStr(key));
}

// internal static bool is_array(Uno.IntPtr ctx, int index) [static] :890
bool duktape::is_array(void* ctx, int index)
{
    return duk_is_array(ctx, index);
}

// internal static bool is_boolean(Uno.IntPtr ctx, int index) [static] :895
bool duktape::is_boolean(void* ctx, int index)
{
    return duk_is_boolean(ctx, index);
}

// internal static bool is_function(Uno.IntPtr ctx, int index) [static] :905
bool duktape::is_function(void* ctx, int index)
{
    return duk_is_function(ctx, index);
}

// internal static bool is_null_or_undefined(Uno.IntPtr ctx, int index) [static] :920
bool duktape::is_null_or_undefined(void* ctx, int index)
{
    return duk_is_null_or_undefined(ctx, index);
}

// internal static bool is_number(Uno.IntPtr ctx, int index) [static] :925
bool duktape::is_number(void* ctx, int index)
{
    return duk_is_number(ctx, index);
}

// internal static bool is_object(Uno.IntPtr ctx, int index) [static] :930
bool duktape::is_object(void* ctx, int index)
{
    return duk_is_object(ctx, index);
}

// internal static bool is_string(Uno.IntPtr ctx, int index) [static] :935
bool duktape::is_string(void* ctx, int index)
{
    return duk_is_string(ctx, index);
}

// internal static void new_(Uno.IntPtr ctx, int nargs) [static] :1045
void duktape::new_(void* ctx, int nargs)
{
    duk_new(ctx, nargs);
}

// internal static bool next(Uno.IntPtr ctx, int index, bool getValue) [static] :600
bool duktape::next(void* ctx, int index, bool getValue)
{
    return duk_next(ctx, index, getValue);
}

// internal static int pcall(Uno.IntPtr ctx, int nargs) [static] :615
int duktape::pcall(void* ctx, int nargs)
{
    return duk_pcall(ctx, nargs);
}

// internal static int pcall_method(Uno.IntPtr ctx, int nargs) [static] :625
int duktape::pcall_method(void* ctx, int nargs)
{
    return duk_pcall_method(ctx, nargs);
}

// internal static int pcompile(Uno.IntPtr ctx, uint flags) [static] :699
int duktape::pcompile(void* ctx, uint32_t flags)
{
    return duk_pcompile(ctx, flags);
}

// internal static int pcompile_string(Uno.IntPtr ctx, uint flags, string src) [static] :694
int duktape::pcompile_string(void* ctx, uint32_t flags, uString* src)
{
    return duk_pcompile_string(ctx, flags, uStringToCStr(src));
}

// internal static int peval_string(Uno.IntPtr ctx, string code) [static] :850
int duktape::peval_string(void* ctx, uString* code)
{
    return duk_peval_string(ctx, uStringToCStr(code));
}

// internal static void pop(Uno.IntPtr ctx) [static] :823
void duktape::pop(void* ctx)
{
    duk_pop(ctx);
}

// internal static void pop_2(Uno.IntPtr ctx) [static] :1005
void duktape::pop_2(void* ctx)
{
    duk_pop_2(ctx);
}

// internal static void push_boolean(Uno.IntPtr ctx, bool value) [static] :990
void duktape::push_boolean(void* ctx, bool value)
{
    duk_push_boolean(ctx, value);
}

// internal static void push_global_object(Uno.IntPtr ctx) [static] :818
void duktape::push_global_object(void* ctx)
{
    duk_push_global_object(ctx);
}

// internal static void push_global_stash(Uno.IntPtr ctx) [static] :1020
void duktape::push_global_stash(void* ctx)
{
    duk_push_global_stash(ctx);
}

// internal static int push_heapptr(Uno.IntPtr ctx, Uno.IntPtr ptr) [static] :950
int duktape::push_heapptr(void* ctx, void* ptr)
{
    return duk_push_heapptr(ctx, ptr);
}

// internal static void push_int(Uno.IntPtr ctx, int val) [static] :875
void duktape::push_int(void* ctx, int val)
{
    duk_push_int(ctx, val);
}

// internal static void push_null(Uno.IntPtr ctx) [static] :960
void duktape::push_null(void* ctx)
{
    duk_push_null(ctx);
}

// internal static void push_number(Uno.IntPtr ctx, double val) [static] :839
void duktape::push_number(void* ctx, double val)
{
    duk_push_number(ctx, val);
}

// internal static void push_string(Uno.IntPtr ctx, string str) [static] :880
void duktape::push_string(void* ctx, uString* str)
{
    duk_push_string(ctx, uStringToCStr(str));
}

// internal static bool put_prop_index(Uno.IntPtr ctx, int index, int arr_index) [static] :1000
bool duktape::put_prop_index(void* ctx, int index, int arr_index)
{
    return duk_put_prop_index(ctx, index, arr_index);
}

// internal static bool put_prop_string(Uno.IntPtr ctx, int obj_index, string key) [static] :844
bool duktape::put_prop_string(void* ctx, int obj_index, uString* key)
{
    return duk_put_prop_string(ctx, obj_index, uStringToCStr(key));
}

// internal static string safe_to_string(Uno.IntPtr ctx, int index) [static] :980
uString* duktape::safe_to_string(void* ctx, int index)
{
    return uNewStringUtf8(duk_safe_to_string(ctx, index));
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.24.6/$.uno(566)
// ------------------------------------------------------------------------------------------

// internal extern enum EnumFlags :566
uEnumType* EnumFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.Duktape.EnumFlags", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "DUK_ENUM_INCLUDE_NONENUMERABLE", 1LL,
        "DUK_ENUM_INCLUDE_INTERNAL", 2LL,
        "DUK_ENUM_OWN_PROPERTIES_ONLY", 4LL,
        "DUK_ENUM_ARRAY_INDICES_ONLY", 8LL,
        "DUK_ENUM_SORT_ARRAY_INDICES", 16LL,
        "DUK_ENUM_NO_PROXY_BEHAVIOR", 32LL);
    return type;
}

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.24.6/$.uno(10)
// -----------------------------------------------------------------------------------------

// public sealed extern class JSArray :10
// {
::g::Fuse::Scripting::Array_type* JSArray_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JSArray);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Array_type);
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.Duktape.JSArray", options);
    type->SetBase(::g::Fuse::Scripting::Array_typeof());
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))JSArray__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))JSArray__GetHashCode_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject**))JSArray__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject*))JSArray__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int*))JSArray__get_Length_fn;
    ::TYPES[14] = ::g::Uno::IntPtr_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Duktape::Context_typeof(), offsetof(::g::Fuse::Scripting::Duktape::JSArray, _ctx), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::Duktape::JSArray, _handle), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::Duktape::JSArray, _stashKey), 0);
    return type;
}

// public JSArray(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :18
void JSArray__ctor_1_fn(JSArray* __this, ::g::Fuse::Scripting::Duktape::Context* ctx, void** handle)
{
    __this->ctor_1(ctx, *handle);
}

// public override sealed bool Equals(Fuse.Scripting.Array a) :48
void JSArray__Equals2_fn(JSArray* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    JSArray* ja = uAs<JSArray*>(a, JSArray_typeof());

    if (ja == NULL)
        return *__retval = false, void();

    return *__retval = (__this->_ctx == uPtr(ja)->_ctx) && ::g::Uno::IntPtr::op_Equality(__this->_handle, uPtr(ja)->_handle), void();
}

// private object Get(int index) :61
void JSArray__Get_fn(JSArray* __this, int* index, uObject** __retval)
{
    *__retval = __this->Get(*index);
}

// public override sealed int GetHashCode() :56
void JSArray__GetHashCode_fn(JSArray* __this, int* __retval)
{
    void* ind1;
    return *__retval = ::g::Uno::IntPtr::GetHashCode((ind1 = __this->_handle, ind1), ::TYPES[14/*Uno.IntPtr*/]), void();
}

// internal Uno.IntPtr get_Handle() :12
void JSArray__get_Handle_fn(JSArray* __this, void** __retval)
{
    *__retval = __this->Handle();
}

// public override sealed object get_Item(int index) :44
void JSArray__get_Item_fn(JSArray* __this, int* index, uObject** __retval)
{
    int index_ = *index;
    return *__retval = __this->Get(index_), void();
}

// public override sealed void set_Item(int index, object value) :45
void JSArray__set_Item_fn(JSArray* __this, int* index, uObject* value)
{
    int index_ = *index;
    __this->Set(index_, value);
}

// public override sealed int get_Length() :33
void JSArray__get_Length_fn(JSArray* __this, int* __retval)
{
    int index = uPtr(__this->_ctx)->PushHeapPtr(__this->_handle);
    int64_t l = uPtr(__this->_ctx)->GetLength(index);
    uPtr(__this->_ctx)->Pop();
    return *__retval = (int)l, void();
}

// public JSArray New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :18
void JSArray__New1_fn(::g::Fuse::Scripting::Duktape::Context* ctx, void** handle, JSArray** __retval)
{
    *__retval = JSArray::New1(ctx, *handle);
}

// private void Set(int index, object value) :70
void JSArray__Set_fn(JSArray* __this, int* index, uObject* value)
{
    __this->Set(*index, value);
}

// public JSArray(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [instance] :18
void JSArray::ctor_1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ctor_();
    _ctx = ctx;
    _handle = handle;
    _stashKey = uPtr(_ctx)->Stash(_handle);
}

// private object Get(int index) [instance] :61
uObject* JSArray::Get(int index)
{
    int objIndex = uPtr(_ctx)->PushHeapPtr(_handle);
    uPtr(_ctx)->GetProperty(objIndex, index);
    uObject* res = uPtr(_ctx)->IndexToObject(uPtr(_ctx)->GetTop() - 1);
    uPtr(_ctx)->Pop2();
    return res;
}

// internal Uno.IntPtr get_Handle() [instance] :12
void* JSArray::Handle()
{
    return _handle;
}

// private void Set(int index, object value) [instance] :70
void JSArray::Set(int index, uObject* value)
{
    int objIndex = uPtr(_ctx)->PushHeapPtr(_handle);
    uPtr(_ctx)->Push4(value);
    uPtr(_ctx)->PutProperty(objIndex, index);
    uPtr(_ctx)->Pop();
}

// public JSArray New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [static] :18
JSArray* JSArray::New1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    JSArray* obj2 = (JSArray*)uNew(JSArray_typeof());
    obj2->ctor_1(ctx, handle);
    return obj2;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.24.6/$.uno(1063)
// -------------------------------------------------------------------------------------------

// public sealed extern class JSFunction :1063
// {
::g::Fuse::Scripting::Function_type* JSFunction_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JSFunction);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Function_type);
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.Duktape.JSFunction", options);
    type->SetBase(::g::Fuse::Scripting::Function_typeof());
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, uArray*, uObject**))JSFunction__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, uArray*, ::g::Fuse::Scripting::Object**))JSFunction__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))JSFunction__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))JSFunction__GetHashCode_fn;
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[13] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[14] = ::g::Uno::IntPtr_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Duktape::Context_typeof(), offsetof(::g::Fuse::Scripting::Duktape::JSFunction, _ctx), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::Duktape::JSFunction, _handle), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::Duktape::JSFunction, _stashKey), 0);
    return type;
}

// internal JSFunction(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :1071
void JSFunction__ctor_1_fn(JSFunction* __this, ::g::Fuse::Scripting::Duktape::Context* ctx, void** handle)
{
    __this->ctor_1(ctx, *handle);
}

// public override sealed object Call(object[] args) :1111
void JSFunction__Call_fn(JSFunction* __this, uArray* args, uObject** __retval)
{
    uPtr(__this->_ctx)->PushHeapPtr(__this->_handle);
    int argc = uPtr(args)->Length();

    for (int i = 0; i < argc; i++)
        uPtr(__this->_ctx)->Push4(uPtr(args)->Strong<uObject*>(i));

    int result = uPtr(__this->_ctx)->SafeCall(argc);
    uPtr(__this->_ctx)->CheckError(result);
    int index = uPtr(__this->_ctx)->GetTop() - 1;
    uObject* returnValue = uPtr(__this->_ctx)->IndexToObject(index);
    uPtr(__this->_ctx)->Pop();
    return *__retval = returnValue, void();
}

// public override sealed Fuse.Scripting.Object Construct(object[] args) :1097
void JSFunction__Construct_fn(JSFunction* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    uPtr(__this->_ctx)->PushHeapPtr(__this->_handle);
    int argc = uPtr(args)->Length();

    for (int i = 0; i < argc; i++)
        uPtr(__this->_ctx)->Push4(uPtr(args)->Strong<uObject*>(i));

    uPtr(__this->_ctx)->Construct(argc);
    uObject* returnValue = uPtr(__this->_ctx)->IndexToObject(uPtr(__this->_ctx)->GetTop() - 1);
    uPtr(__this->_ctx)->Pop();
    return *__retval = uCast< ::g::Fuse::Scripting::Object*>(returnValue, ::TYPES[13/*Fuse.Scripting.Object*/]), void();
}

// public override sealed bool Equals(Fuse.Scripting.Function a) :1084
void JSFunction__Equals2_fn(JSFunction* __this, ::g::Fuse::Scripting::Function* a, bool* __retval)
{
    JSFunction* f = uAs<JSFunction*>(a, JSFunction_typeof());

    if (f == NULL)
        return *__retval = false, void();

    return *__retval = (__this->_ctx == uPtr(f)->_ctx) && ::g::Uno::IntPtr::op_Equality(__this->_handle, uPtr(f)->_handle), void();
}

// public override sealed int GetHashCode() :1092
void JSFunction__GetHashCode_fn(JSFunction* __this, int* __retval)
{
    void* ind1;
    return *__retval = ::g::Uno::IntPtr::GetHashCode((ind1 = __this->_handle, ind1), ::TYPES[14/*Uno.IntPtr*/]), void();
}

// internal Uno.IntPtr get_Handle() :1065
void JSFunction__get_Handle_fn(JSFunction* __this, void** __retval)
{
    *__retval = __this->Handle();
}

// internal JSFunction New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :1071
void JSFunction__New1_fn(::g::Fuse::Scripting::Duktape::Context* ctx, void** handle, JSFunction** __retval)
{
    *__retval = JSFunction::New1(ctx, *handle);
}

// internal JSFunction(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [instance] :1071
void JSFunction::ctor_1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ctor_();
    _ctx = ctx;
    _handle = handle;
    _stashKey = uPtr(_ctx)->Stash(_handle);
}

// internal Uno.IntPtr get_Handle() [instance] :1065
void* JSFunction::Handle()
{
    return _handle;
}

// internal JSFunction New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [static] :1071
JSFunction* JSFunction::New1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    JSFunction* obj2 = (JSFunction*)uNew(JSFunction_typeof());
    obj2->ctor_1(ctx, handle);
    return obj2;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.24.6/$.uno(1195)
// -------------------------------------------------------------------------------------------

// public sealed extern class JSObject :1195
// {
::g::Fuse::Scripting::Object_type* JSObject_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JSObject);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Object_type);
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.Duktape.JSObject", options);
    type->SetBase(::g::Fuse::Scripting::Object_typeof());
    type->fp_CallMethod = (void(*)(::g::Fuse::Scripting::Object*, uString*, uArray*, uObject**))JSObject__CallMethod_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Scripting::Object*, uString*, bool*))JSObject__ContainsKey_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*))JSObject__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))JSObject__GetHashCode_fn;
    type->fp_InstanceOf = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Function*, bool*))JSObject__InstanceOf_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject**))JSObject__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject*))JSObject__set_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Scripting::Object*, uArray**))JSObject__get_Keys_fn;
    ::STRINGS[10] = uString::Const("__a__");
    ::STRINGS[11] = uString::Const("__b__");
    ::STRINGS[12] = uString::Const("__a__ instanceof __b__");
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[14] = ::g::Uno::IntPtr_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Duktape::JSFunction_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[15] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::Duktape::Context_typeof(), offsetof(::g::Fuse::Scripting::Duktape::JSObject, _ctx), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::Duktape::JSObject, _handle), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::Duktape::JSObject, _stashKey), 0);
    return type;
}

// public JSObject(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :1203
void JSObject__ctor_1_fn(JSObject* __this, ::g::Fuse::Scripting::Duktape::Context* ctx, void** handle)
{
    __this->ctor_1(ctx, *handle);
}

// public override sealed object CallMethod(string name, object[] args) :1297
void JSObject__CallMethod_fn(JSObject* __this, uString* name, uArray* args, uObject** __retval)
{
    int index = uPtr(__this->_ctx)->PushHeapPtr(__this->_handle);
    uPtr(__this->_ctx)->GetProperty1(index, name);
    uPtr(__this->_ctx)->PushHeapPtr(__this->_handle);

    for (int i = 0; i < uPtr(args)->Length(); i++)
        uPtr(__this->_ctx)->Push4(uPtr(args)->Strong<uObject*>(i));

    int result = uPtr(__this->_ctx)->SafeCallMethod(args->Length());
    uPtr(__this->_ctx)->CheckError(result);
    uObject* returnVal = uPtr(__this->_ctx)->IndexToObject(uPtr(__this->_ctx)->GetTop() - 1);
    uPtr(__this->_ctx)->Pop2();
    return *__retval = returnVal, void();
}

// public override sealed bool ContainsKey(string key) :1316
void JSObject__ContainsKey_fn(JSObject* __this, uString* key, bool* __retval)
{
    int index = uPtr(__this->_ctx)->PushHeapPtr(__this->_handle);
    bool result = uPtr(__this->_ctx)->HasProperty(index, key);
    uPtr(__this->_ctx)->Pop();
    return *__retval = result, void();
}

// public override sealed bool Equals(Fuse.Scripting.Object obj) :1216
void JSObject__Equals2_fn(JSObject* __this, ::g::Fuse::Scripting::Object* obj, bool* __retval)
{
    JSObject* o = uAs<JSObject*>(obj, JSObject_typeof());

    if (o == NULL)
        return *__retval = false, void();

    return *__retval = (__this->_ctx == uPtr(o)->_ctx) && ::g::Uno::IntPtr::op_Equality(__this->_handle, uPtr(o)->_handle), void();
}

// public override sealed int GetHashCode() :1223
void JSObject__GetHashCode_fn(JSObject* __this, int* __retval)
{
    void* ind1;
    return *__retval = ::g::Uno::IntPtr::GetHashCode((ind1 = __this->_handle, ind1), ::TYPES[14/*Uno.IntPtr*/]), void();
}

// internal Uno.IntPtr get_Handle() :1197
void JSObject__get_Handle_fn(JSObject* __this, void** __retval)
{
    *__retval = __this->Handle();
}

// public override sealed bool InstanceOf(Fuse.Scripting.Function type) :1228
void JSObject__InstanceOf_fn(JSObject* __this, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    ::g::Fuse::Scripting::Duktape::JSFunction* func = uAs< ::g::Fuse::Scripting::Duktape::JSFunction*>(type, ::TYPES[9/*Fuse.Scripting.Duktape.JSFunction*/]);

    if (func != NULL)
    {
        uPtr(__this->_ctx)->PushGlobalObject();
        int index = uPtr(__this->_ctx)->PushHeapPtr(__this->_handle);
        uPtr(__this->_ctx)->PutProperty1(uPtr(__this->_ctx)->GetTop() - 2, ::STRINGS[10/*"__a__"*/]);
        int k = uPtr(__this->_ctx)->PushHeapPtr(uPtr(func)->Handle());
        uPtr(__this->_ctx)->PutProperty1(uPtr(__this->_ctx)->GetTop() - 2, ::STRINGS[11/*"__b__"*/]);
        bool res = uUnbox<bool>(::TYPES[7/*bool*/], uPtr(__this->_ctx)->Evaluate2(::STRINGS[12/*"__a__ insta...*/]));
        uPtr(__this->_ctx)->DelProperty2(uPtr(__this->_ctx)->GetTop() - 1, ::STRINGS[10/*"__a__"*/]);
        uPtr(__this->_ctx)->DelProperty2(uPtr(__this->_ctx)->GetTop() - 1, ::STRINGS[11/*"__b__"*/]);
        uPtr(__this->_ctx)->Pop();
        return *__retval = res, void();
    }

    return *__retval = false, void();
}

// public override sealed object get_Item(string key) :1257
void JSObject__get_Item_fn(JSObject* __this, uString* key, uObject** __retval)
{
    int objIndex = uPtr(__this->_ctx)->PushHeapPtr(__this->_handle);
    uPtr(__this->_ctx)->GetProperty1(objIndex, key);
    uObject* res = uPtr(__this->_ctx)->IndexToObject(uPtr(__this->_ctx)->GetTop() - 1);
    uPtr(__this->_ctx)->Pop2();
    return *__retval = res, void();
}

// public override sealed void set_Item(string key, object value) :1266
void JSObject__set_Item_fn(JSObject* __this, uString* key, uObject* value)
{
    int objIndex = uPtr(__this->_ctx)->PushHeapPtr(__this->_handle);
    uPtr(__this->_ctx)->Push4(value);
    uPtr(__this->_ctx)->PutProperty1(objIndex, key);
    uPtr(__this->_ctx)->Pop();
}

// public override sealed string[] get_Keys() :1277
void JSObject__get_Keys_fn(JSObject* __this, uArray** __retval)
{
    ::g::Uno::Collections::List* keys = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[15/*Uno.Collections.List<string>*/]);
    int index = uPtr(__this->_ctx)->PushHeapPtr(__this->_handle);
    uPtr(__this->_ctx)->PushEnumerator(index, 4);

    while (uPtr(__this->_ctx)->EnumeratorNext(uPtr(__this->_ctx)->GetTop() - 1, false))
    {
        uString* key = uPtr(__this->_ctx)->GetString(uPtr(__this->_ctx)->GetTop() - 1);
        ::g::Uno::Collections::List__Add_fn(uPtr(keys), key);
        uPtr(__this->_ctx)->Pop();
    }

    uPtr(__this->_ctx)->Pop2();
    return *__retval = (uArray*)keys->ToArray(), void();
}

// public JSObject New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :1203
void JSObject__New1_fn(::g::Fuse::Scripting::Duktape::Context* ctx, void** handle, JSObject** __retval)
{
    *__retval = JSObject::New1(ctx, *handle);
}

// public JSObject(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [instance] :1203
void JSObject::ctor_1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ctor_();
    _ctx = ctx;
    _handle = handle;
    _stashKey = uPtr(_ctx)->Stash(_handle);
}

// internal Uno.IntPtr get_Handle() [instance] :1197
void* JSObject::Handle()
{
    return _handle;
}

// public JSObject New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [static] :1203
JSObject* JSObject::New1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    JSObject* obj2 = (JSObject*)uNew(JSObject_typeof());
    obj2->ctor_1(ctx, handle);
    return obj2;
}
// }

}}}} // ::g::Fuse::Scripting::Duktape
