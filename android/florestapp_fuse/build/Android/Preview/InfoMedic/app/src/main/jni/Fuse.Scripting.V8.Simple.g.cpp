// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.V8.Simple.Array.h>
#include <Fuse.Scripting.V8.Simple.ArrayImpl.h>
#include <Fuse.Scripting.V8.Simple.Bool.h>
#include <Fuse.Scripting.V8.Simple.BoolImpl.h>
#include <Fuse.Scripting.V8.Simple.Callback.h>
#include <Fuse.Scripting.V8.Simple.CallbackImpl.h>
#include <Fuse.Scripting.V8.Simple.Context.h>
#include <Fuse.Scripting.V8.Simple.ContextImpl.h>
#include <Fuse.Scripting.V8.Simple.DelegateCallback.h>
#include <Fuse.Scripting.V8.Simple.DelegateMessageHandler.h>
#include <Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler.h>
#include <Fuse.Scripting.V8.Simple.DllDirectory.h>
#include <Fuse.Scripting.V8.Simple.Double.h>
#include <Fuse.Scripting.V8.Simple.DoubleImpl.h>
#include <Fuse.Scripting.V8.Simple.Function.h>
#include <Fuse.Scripting.V8.Simple.FunctionImpl.h>
#include <Fuse.Scripting.V8.Simple.Int.h>
#include <Fuse.Scripting.V8.Simple.IntImpl.h>
#include <Fuse.Scripting.V8.Simple.MessageHandler.h>
#include <Fuse.Scripting.V8.Simple.MessageHandlerImpl.h>
#include <Fuse.Scripting.V8.Simple.MultiMap-1.h>
#include <Fuse.Scripting.V8.Simple.Object.h>
#include <Fuse.Scripting.V8.Simple.ObjectImpl.h>
#include <Fuse.Scripting.V8.Simple.ScriptException.h>
#include <Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h>
#include <Fuse.Scripting.V8.Simple.ScriptExceptionHandlerImpl.h>
#include <Fuse.Scripting.V8.Simple.ScriptExceptionImpl.h>
#include <Fuse.Scripting.V8.Simple.String.h>
#include <Fuse.Scripting.V8.Simple.StringExtensions.h>
#include <Fuse.Scripting.V8.Simple.StringImpl.h>
#include <Fuse.Scripting.V8.Simple.Type.h>
#include <Fuse.Scripting.V8.Simple.UniqueValueVector.h>
#include <Fuse.Scripting.V8.Simple.UniqueValueVectorImpl.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <Fuse.Scripting.V8.Simple.ValueExtensions.h>
#include <Fuse.Scripting.V8.Simple.ValueImpl.h>
#include <Fuse.Scripting.V8.Simple.ValueVector.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <V8Proxy.h>
#include <vector>
static uString* STRINGS[2];
static uType* TYPES[15];

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1144)
// -------------------------------------------------------------------

// internal sealed extern class Array :1144
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Array", options);
    type->SetBase(::g::Fuse::Scripting::V8::Simple::Value_typeof());
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Array__GetValueType_fn;
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    type->SetFields(1);
    return type;
}

// internal extern Array(Fuse.Scripting.V8.Simple.ValueImpl impl) :1153
void Array__ctor_2_fn(Array* __this, ::V8Simple::Value** impl)
{
    __this->ctor_2(*impl);
}

// protected extern Fuse.Scripting.V8.Simple.ArrayImpl get__arrayImpl() :1148
void Array__get__arrayImpl_fn(Array* __this, ::V8Simple::Array** __retval)
{
    *__retval = __this->_arrayImpl();
}

// public bool Equals(Fuse.Scripting.V8.Simple.Array array) :1189
void Array__Equals2_fn(Array* __this, Array* array, bool* __retval)
{
    *__retval = __this->Equals2(array);
}

// public Fuse.Scripting.V8.Simple.Value Get(int index) :1165
void Array__Get_fn(Array* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Get(*index);
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1157
void Array__GetValueType_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Array", "GetValueType()");
    return *__retval = (int)__this->_arrayImpl()->GetValueType(), void();
}

// public int Length() :1181
void Array__Length_fn(Array* __this, int* __retval)
{
    *__retval = __this->Length();
}

// internal extern Array New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1153
void Array__New4_fn(::V8Simple::Value** impl, Array** __retval)
{
    *__retval = Array::New4(*impl);
}

// public void Set(int index, Fuse.Scripting.V8.Simple.Value value) :1173
void Array__Set_fn(Array* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value* value)
{
    __this->Set(*index, value);
}

// internal extern Array(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1153
void Array::ctor_2(::V8Simple::Value* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Array", ".ctor(Fuse.Scripting.V8.Simple.ValueImpl)");
    ctor_1(impl);
}

// protected extern Fuse.Scripting.V8.Simple.ArrayImpl get__arrayImpl() [instance] :1148
::V8Simple::Array* Array::_arrayImpl()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Array", "get__arrayImpl()");
    return (::V8Simple::Array*)_valueImpl;
}

// public bool Equals(Fuse.Scripting.V8.Simple.Array array) [instance] :1189
bool Array::Equals2(Array* array)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Array", "Equals(Fuse.Scripting.V8.Simple.Array)");
    return ::g::Fuse::Scripting::V8::Simple::ValueImpl::op_Equality(_valueImpl, ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(array));
}

// public Fuse.Scripting.V8.Simple.Value Get(int index) [instance] :1165
::g::Fuse::Scripting::V8::Simple::Value* Array::Get(int index)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Array", "Get(int)");
    return ::g::Fuse::Scripting::V8::Simple::Value::New2(_arrayImpl()->Get(index));
}

// public int Length() [instance] :1181
int Array::Length()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Array", "Length()");
    return _arrayImpl()->Length();
}

// public void Set(int index, Fuse.Scripting.V8.Simple.Value value) [instance] :1173
void Array::Set(int index, ::g::Fuse::Scripting::V8::Simple::Value* value)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Array", "Set(int,Fuse.Scripting.V8.Simple.Value)");
    _arrayImpl()->Set(index, ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(value));
}

// internal extern Array New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1153
Array* Array::New4(::V8Simple::Value* impl)
{
    Array* obj1 = (Array*)uNew(Array_typeof());
    obj1->ctor_2(impl);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1200)
// -------------------------------------------------------------------

// internal extern struct ArrayImpl :1200
// {
uStructType* ArrayImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Array*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ArrayImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1452)
// -------------------------------------------------------------------

// internal sealed extern class Bool :1452
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Bool_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Bool);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Bool", options);
    type->SetBase(::g::Fuse::Scripting::V8::Simple::Value_typeof());
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Bool__GetValueType_fn;
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    type->SetFields(1);
    return type;
}

// public extern Bool(bool value) :1477
void Bool__ctor_2_fn(Bool* __this, bool* value)
{
    __this->ctor_2(*value);
}

// internal extern Bool(Fuse.Scripting.V8.Simple.ValueImpl impl) :1461
void Bool__ctor_3_fn(Bool* __this, ::V8Simple::Value** impl)
{
    __this->ctor_3(*impl);
}

// protected extern Fuse.Scripting.V8.Simple.BoolImpl get__boolImpl() :1456
void Bool__get__boolImpl_fn(Bool* __this, ::V8Simple::Bool** __retval)
{
    *__retval = __this->_boolImpl();
}

// public bool GetValue() :1481
void Bool__GetValue_fn(Bool* __this, bool* __retval)
{
    *__retval = __this->GetValue();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1465
void Bool__GetValueType_fn(Bool* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Bool", "GetValueType()");
    return *__retval = (int)__this->_boolImpl()->GetValueType(), void();
}

// public extern Bool New(bool value) :1477
void Bool__New4_fn(bool* value, Bool** __retval)
{
    *__retval = Bool::New4(*value);
}

// internal extern Bool New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1461
void Bool__New5_fn(::V8Simple::Value** impl, Bool** __retval)
{
    *__retval = Bool::New5(*impl);
}

// public extern Bool(bool value) [instance] :1477
void Bool::ctor_2(bool value)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Bool", ".ctor(bool)");
    ctor_1(::V8Simple::Bool::New(value));
}

// internal extern Bool(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1461
void Bool::ctor_3(::V8Simple::Value* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Bool", ".ctor(Fuse.Scripting.V8.Simple.ValueImpl)");
    ctor_1(impl);
}

// protected extern Fuse.Scripting.V8.Simple.BoolImpl get__boolImpl() [instance] :1456
::V8Simple::Bool* Bool::_boolImpl()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Bool", "get__boolImpl()");
    return (::V8Simple::Bool*)_valueImpl;
}

// public bool GetValue() [instance] :1481
bool Bool::GetValue()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Bool", "GetValue()");
    return _boolImpl()->GetValue();
}

// public extern Bool New(bool value) [static] :1477
Bool* Bool::New4(bool value)
{
    Bool* obj2 = (Bool*)uNew(Bool_typeof());
    obj2->ctor_2(value);
    return obj2;
}

// internal extern Bool New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1461
Bool* Bool::New5(::V8Simple::Value* impl)
{
    Bool* obj1 = (Bool*)uNew(Bool_typeof());
    obj1->ctor_3(impl);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1492)
// -------------------------------------------------------------------

// internal extern struct BoolImpl :1492
// {
uStructType* BoolImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Bool*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.BoolImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1204)
// -------------------------------------------------------------------

// internal extern class Callback :1204
// {
Callback_type* Callback_typeof()
{
    static uSStrong<Callback_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(Callback_type);
    type = (Callback_type*)uClassType::New("Fuse.Scripting.V8.Simple.Callback", options);
    type->SetBase(::g::Fuse::Scripting::V8::Simple::Value_typeof());
    type->fp_ctor_ = (void*)Callback__New4_fn;
    type->fp_Call = Callback__Call_fn;
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Callback__GetValueType_fn;
    type->fp_Release = Callback__Release_fn;
    type->fp_Retain = Callback__Retain_fn;
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    type->SetFields(1);
    return type;
}

// internal extern Callback() :1213
void Callback__ctor_2_fn(Callback* __this)
{
    __this->ctor_2();
}

// protected extern Fuse.Scripting.V8.Simple.CallbackImpl get__callbackImpl() :1208
void Callback__get__callbackImpl_fn(Callback* __this, ::V8Simple::CallbackProxy** __retval)
{
    *__retval = __this->_callbackImpl();
}

// public virtual Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.UniqueValueVector args) :1225
void Callback__Call_fn(Callback* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Callback", "Call(Fuse.Scripting.V8.Simple.UniqueValueVector)");
    return *__retval = NULL, void();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1217
void Callback__GetValueType_fn(Callback* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Callback", "GetValueType()");
    return *__retval = (int)__this->_callbackImpl()->GetValueType(), void();
}

// internal extern Callback New() :1213
void Callback__New4_fn(Callback** __retval)
{
    *__retval = Callback::New4();
}

// public virtual void Release() :1230
void Callback__Release_fn(Callback* __this)
{
}

// public virtual void Retain() :1229
void Callback__Retain_fn(Callback* __this)
{
}

// internal extern Callback() [instance] :1213
void Callback::ctor_2()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Callback", ".ctor()");
    ctor_1(new ::V8Simple::CallbackProxy(this));
}

// protected extern Fuse.Scripting.V8.Simple.CallbackImpl get__callbackImpl() [instance] :1208
::V8Simple::CallbackProxy* Callback::_callbackImpl()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Callback", "get__callbackImpl()");
    return (::V8Simple::CallbackProxy*)_valueImpl;
}

// internal extern Callback New() [static] :1213
Callback* Callback::New4()
{
    Callback* obj1 = (Callback*)uNew(Callback_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1234)
// -------------------------------------------------------------------

// internal extern struct CallbackImpl :1234
// {
uStructType* CallbackImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::CallbackProxy*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.CallbackImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(649)
// ------------------------------------------------------------------

// internal sealed extern class Context :649
// {
// extern ~Context() :652
static void Context__Finalize_fn(Context* __this)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "Finalize()");
    __this->Dispose();
}

Context_type* Context_typeof()
{
    static uSStrong<Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(Context_type);
    type = (Context_type*)uClassType::New("Fuse.Scripting.V8.Simple.Context", options);
    type->fp_Finalize = (void(*)(uObject*))Context__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    ::TYPES[1] = ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::V8::Simple::MessageHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Context_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::ContextImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::Context, _contextImpl), 0);
    return type;
}

// public Context(Fuse.Scripting.V8.Simple.ScriptExceptionHandler scriptExceptionHandler, Fuse.Scripting.V8.Simple.MessageHandler runtimeExceptionHandler) :670
void Context__ctor__fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler)
{
    __this->ctor_(scriptExceptionHandler, runtimeExceptionHandler);
}

// public void Dispose() :657
void Context__Dispose_fn(Context* __this)
{
    __this->Dispose();
}

// public Fuse.Scripting.V8.Simple.Value Evaluate(Fuse.Scripting.V8.Simple.String fileName, Fuse.Scripting.V8.Simple.String code) :685
void Context__Evaluate_fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::String* fileName, ::g::Fuse::Scripting::V8::Simple::String* code, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Evaluate(fileName, code);
}

// public static string GetVersion() :737
void Context__GetVersion_fn(uString** __retval)
{
    *__retval = Context::GetVersion();
}

// public Fuse.Scripting.V8.Simple.Object GlobalObject() :695
void Context__GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::Object** __retval)
{
    *__retval = __this->GlobalObject();
}

// public bool IdleNotificationDeadline(double deadline_in_seconds) :704
void Context__IdleNotificationDeadline_fn(Context* __this, double* deadline_in_seconds, bool* __retval)
{
    *__retval = __this->IdleNotificationDeadline(*deadline_in_seconds);
}

// public Context New(Fuse.Scripting.V8.Simple.ScriptExceptionHandler scriptExceptionHandler, Fuse.Scripting.V8.Simple.MessageHandler runtimeExceptionHandler) :670
void Context__New1_fn(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler, Context** __retval)
{
    *__retval = Context::New1(scriptExceptionHandler, runtimeExceptionHandler);
}

// public static void ProcessDebugMessages() :729
void Context__ProcessDebugMessages_fn()
{
    Context::ProcessDebugMessages();
}

// public static void SendDebugCommand(Fuse.Scripting.V8.Simple.String command) :721
void Context__SendDebugCommand_fn(::g::Fuse::Scripting::V8::Simple::String* command)
{
    Context::SendDebugCommand(command);
}

// public static void SetDebugMessageHandler(Fuse.Scripting.V8.Simple.MessageHandler debugMessageHandler) :713
void Context__SetDebugMessageHandler_fn(::g::Fuse::Scripting::V8::Simple::MessageHandler* debugMessageHandler)
{
    Context::SetDebugMessageHandler(debugMessageHandler);
}

// public Context(Fuse.Scripting.V8.Simple.ScriptExceptionHandler scriptExceptionHandler, Fuse.Scripting.V8.Simple.MessageHandler runtimeExceptionHandler) [instance] :670
void Context::ctor_(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", ".ctor(Fuse.Scripting.V8.Simple.ScriptExceptionHandler,Fuse.Scripting.V8.Simple.MessageHandler)");
    _contextImpl = ::V8Simple::Context::New((scriptExceptionHandler == NULL) ? NULL : uPtr(scriptExceptionHandler)->_impl, (runtimeExceptionHandler == NULL) ? NULL : uPtr(runtimeExceptionHandler)->_impl);
}

// public void Dispose() [instance] :657
void Context::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "Dispose()");

    if (::g::Fuse::Scripting::V8::Simple::ContextImpl::op_Inequality(_contextImpl, uDefault< ::V8Simple::Context*>()))
    {
        _contextImpl->Delete();
        _contextImpl = uDefault< ::V8Simple::Context*>();
    }
}

// public Fuse.Scripting.V8.Simple.Value Evaluate(Fuse.Scripting.V8.Simple.String fileName, Fuse.Scripting.V8.Simple.String code) [instance] :685
::g::Fuse::Scripting::V8::Simple::Value* Context::Evaluate(::g::Fuse::Scripting::V8::Simple::String* fileName, ::g::Fuse::Scripting::V8::Simple::String* code)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "Evaluate(Fuse.Scripting.V8.Simple.String,Fuse.Scripting.V8.Simple.String)");
    ::g::Fuse::Scripting::V8::Simple::Value* result = ::g::Fuse::Scripting::V8::Simple::Value::New2(_contextImpl->Evaluate(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(fileName), ::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(code)));
    return result;
}

// public Fuse.Scripting.V8.Simple.Object GlobalObject() [instance] :695
::g::Fuse::Scripting::V8::Simple::Object* Context::GlobalObject()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "GlobalObject()");
    return ::g::Fuse::Scripting::V8::Simple::Object::New4(_contextImpl->GlobalObject());
}

// public bool IdleNotificationDeadline(double deadline_in_seconds) [instance] :704
bool Context::IdleNotificationDeadline(double deadline_in_seconds)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "IdleNotificationDeadline(double)");
    return _contextImpl->IdleNotificationDeadline(deadline_in_seconds);
}

// public static string GetVersion() [static] :737
uString* Context::GetVersion()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "GetVersion()");
    return ::uString::Utf8(::V8Simple::Context::GetVersion());
}

// public Context New(Fuse.Scripting.V8.Simple.ScriptExceptionHandler scriptExceptionHandler, Fuse.Scripting.V8.Simple.MessageHandler runtimeExceptionHandler) [static] :670
Context* Context::New1(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler)
{
    Context* obj1 = (Context*)uNew(Context_typeof());
    obj1->ctor_(scriptExceptionHandler, runtimeExceptionHandler);
    return obj1;
}

// public static void ProcessDebugMessages() [static] :729
void Context::ProcessDebugMessages()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "ProcessDebugMessages()");
    ::V8Simple::Context::ProcessDebugMessages();
}

// public static void SendDebugCommand(Fuse.Scripting.V8.Simple.String command) [static] :721
void Context::SendDebugCommand(::g::Fuse::Scripting::V8::Simple::String* command)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "SendDebugCommand(Fuse.Scripting.V8.Simple.String)");
    ::V8Simple::Context::SendDebugCommand(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(command));
}

// public static void SetDebugMessageHandler(Fuse.Scripting.V8.Simple.MessageHandler debugMessageHandler) [static] :713
void Context::SetDebugMessageHandler(::g::Fuse::Scripting::V8::Simple::MessageHandler* debugMessageHandler)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "SetDebugMessageHandler(Fuse.Scripting.V8.Simple.MessageHandler)");
    ::V8Simple::Context::SetDebugMessageHandler((debugMessageHandler == NULL) ? NULL : uPtr(debugMessageHandler)->_impl);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(748)
// ------------------------------------------------------------------

// internal extern struct ContextImpl :748
// {
uStructType* ContextImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Context*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ContextImpl", options);
    return type;
}

// public static operator ==(Fuse.Scripting.V8.Simple.ContextImpl x, Fuse.Scripting.V8.Simple.ContextImpl y) :750
void ContextImpl__op_Equality_fn(::V8Simple::Context** x, ::V8Simple::Context** y, bool* __retval)
{
    *__retval = ContextImpl::op_Equality(*x, *y);
}

// public static operator !=(Fuse.Scripting.V8.Simple.ContextImpl x, Fuse.Scripting.V8.Simple.ContextImpl y) :754
void ContextImpl__op_Inequality_fn(::V8Simple::Context** x, ::V8Simple::Context** y, bool* __retval)
{
    *__retval = ContextImpl::op_Inequality(*x, *y);
}

// public static operator ==(Fuse.Scripting.V8.Simple.ContextImpl x, Fuse.Scripting.V8.Simple.ContextImpl y) [static] :750
bool ContextImpl::op_Equality(::V8Simple::Context* x, ::V8Simple::Context* y)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ContextImpl", "==(Fuse.Scripting.V8.Simple.ContextImpl,Fuse.Scripting.V8.Simple.ContextImpl)");
    return x == y;
}

// public static operator !=(Fuse.Scripting.V8.Simple.ContextImpl x, Fuse.Scripting.V8.Simple.ContextImpl y) [static] :754
bool ContextImpl::op_Inequality(::V8Simple::Context* x, ::V8Simple::Context* y)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ContextImpl", "!=(Fuse.Scripting.V8.Simple.ContextImpl,Fuse.Scripting.V8.Simple.ContextImpl)");
    return x != y;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1275)
// -------------------------------------------------------------------

// internal sealed extern class DelegateCallback :1275
// {
::g::Fuse::Scripting::V8::Simple::Callback_type* DelegateCallback_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Callback_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DelegateCallback);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Callback_type);
    type = (::g::Fuse::Scripting::V8::Simple::Callback_type*)uClassType::New("Fuse.Scripting.V8.Simple.DelegateCallback", options);
    type->SetBase(::g::Fuse::Scripting::V8::Simple::Callback_typeof());
    type->fp_Call = (void(*)(::g::Fuse::Scripting::V8::Simple::Callback*, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector*, ::g::Fuse::Scripting::V8::Simple::Value**))DelegateCallback__Call_fn;
    type->fp_Release = (void(*)(::g::Fuse::Scripting::V8::Simple::Callback*))DelegateCallback__Release_fn;
    type->fp_Retain = (void(*)(::g::Fuse::Scripting::V8::Simple::Callback*))DelegateCallback__Retain_fn;
    ::TYPES[3] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::UniqueValueVector_typeof(), ::g::Fuse::Scripting::V8::Simple::Value_typeof());
    type->SetFields(1,
        ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::UniqueValueVector_typeof(), ::g::Fuse::Scripting::V8::Simple::Value_typeof()), offsetof(::g::Fuse::Scripting::V8::Simple::DelegateCallback, _callHandler), 0);
    return type;
}

// public DelegateCallback(Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value> callHandler) :1280
void DelegateCallback__ctor_3_fn(DelegateCallback* __this, uDelegate* callHandler)
{
    __this->ctor_3(callHandler);
}

// public override sealed Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.UniqueValueVector args) :1285
void DelegateCallback__Call_fn(DelegateCallback* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.DelegateCallback", "Call(Fuse.Scripting.V8.Simple.UniqueValueVector)");
    return *__retval = (::g::Fuse::Scripting::V8::Simple::Value*)uPtr(__this->_callHandler)->Invoke(1, args), void();
}

// public DelegateCallback New(Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value> callHandler) :1280
void DelegateCallback__New5_fn(uDelegate* callHandler, DelegateCallback** __retval)
{
    *__retval = DelegateCallback::New5(callHandler);
}

// public override sealed void Release() :1298
void DelegateCallback__Release_fn(DelegateCallback* __this)
{
}

// public override sealed void Retain() :1290
void DelegateCallback__Retain_fn(DelegateCallback* __this)
{
}

// public DelegateCallback(Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value> callHandler) [instance] :1280
void DelegateCallback::ctor_3(uDelegate* callHandler)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.DelegateCallback", ".ctor(Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value>)");
    ctor_2();
    _callHandler = callHandler;
}

// public DelegateCallback New(Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value> callHandler) [static] :1280
DelegateCallback* DelegateCallback::New5(uDelegate* callHandler)
{
    DelegateCallback* obj1 = (DelegateCallback*)uNew(DelegateCallback_typeof());
    obj1->ctor_3(callHandler);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(846)
// ------------------------------------------------------------------

// internal sealed extern class DelegateMessageHandler :846
// {
::g::Fuse::Scripting::V8::Simple::MessageHandler_type* DelegateMessageHandler_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::MessageHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DelegateMessageHandler);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::MessageHandler_type);
    type = (::g::Fuse::Scripting::V8::Simple::MessageHandler_type*)uClassType::New("Fuse.Scripting.V8.Simple.DelegateMessageHandler", options);
    type->SetBase(::g::Fuse::Scripting::V8::Simple::MessageHandler_typeof());
    type->fp_Handle = (void(*)(::g::Fuse::Scripting::V8::Simple::MessageHandler*, ::g::Fuse::Scripting::V8::Simple::String*))DelegateMessageHandler__Handle_fn;
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(1,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Scripting::V8::Simple::DelegateMessageHandler, _handler), 0);
    return type;
}

// public DelegateMessageHandler(Uno.Action<string> handler) :849
void DelegateMessageHandler__ctor_1_fn(DelegateMessageHandler* __this, uDelegate* handler)
{
    __this->ctor_1(handler);
}

// public override sealed void Handle(Fuse.Scripting.V8.Simple.String message) :855
void DelegateMessageHandler__Handle_fn(DelegateMessageHandler* __this, ::g::Fuse::Scripting::V8::Simple::String* message)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.DelegateMessageHandler", "Handle(Fuse.Scripting.V8.Simple.String)");
    uPtr(__this->_handler)->InvokeVoid(uPtr(message)->GetValue());
}

// public DelegateMessageHandler New(Uno.Action<string> handler) :849
void DelegateMessageHandler__New2_fn(uDelegate* handler, DelegateMessageHandler** __retval)
{
    *__retval = DelegateMessageHandler::New2(handler);
}

// public DelegateMessageHandler(Uno.Action<string> handler) [instance] :849
void DelegateMessageHandler::ctor_1(uDelegate* handler)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.DelegateMessageHandler", ".ctor(Uno.Action<string>)");
    ctor_();
    _handler = handler;
}

// public DelegateMessageHandler New(Uno.Action<string> handler) [static] :849
DelegateMessageHandler* DelegateMessageHandler::New2(uDelegate* handler)
{
    DelegateMessageHandler* obj1 = (DelegateMessageHandler*)uNew(DelegateMessageHandler_typeof());
    obj1->ctor_1(handler);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(885)
// ------------------------------------------------------------------

// internal sealed extern class DelegateScriptExceptionHandler :885
// {
::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_type* DelegateScriptExceptionHandler_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DelegateScriptExceptionHandler);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_type);
    type = (::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_type*)uClassType::New("Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler", options);
    type->SetBase(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_typeof());
    type->fp_Handle = (void(*)(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler*, ::g::Fuse::Scripting::V8::Simple::ScriptException*))DelegateScriptExceptionHandler__Handle_fn;
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::ScriptException_typeof());
    type->SetFields(1,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::ScriptException_typeof()), offsetof(::g::Fuse::Scripting::V8::Simple::DelegateScriptExceptionHandler, _handler), 0);
    return type;
}

// public DelegateScriptExceptionHandler(Uno.Action<Fuse.Scripting.V8.Simple.ScriptException> handler) :888
void DelegateScriptExceptionHandler__ctor_1_fn(DelegateScriptExceptionHandler* __this, uDelegate* handler)
{
    __this->ctor_1(handler);
}

// public override sealed void Handle(Fuse.Scripting.V8.Simple.ScriptException e) :894
void DelegateScriptExceptionHandler__Handle_fn(DelegateScriptExceptionHandler* __this, ::g::Fuse::Scripting::V8::Simple::ScriptException* e)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler", "Handle(Fuse.Scripting.V8.Simple.ScriptException)");
    uPtr(__this->_handler)->InvokeVoid(e);
}

// public DelegateScriptExceptionHandler New(Uno.Action<Fuse.Scripting.V8.Simple.ScriptException> handler) :888
void DelegateScriptExceptionHandler__New2_fn(uDelegate* handler, DelegateScriptExceptionHandler** __retval)
{
    *__retval = DelegateScriptExceptionHandler::New2(handler);
}

// public DelegateScriptExceptionHandler(Uno.Action<Fuse.Scripting.V8.Simple.ScriptException> handler) [instance] :888
void DelegateScriptExceptionHandler::ctor_1(uDelegate* handler)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler", ".ctor(Uno.Action<Fuse.Scripting.V8.Simple.ScriptException>)");
    ctor_();
    _handler = handler;
}

// public DelegateScriptExceptionHandler New(Uno.Action<Fuse.Scripting.V8.Simple.ScriptException> handler) [static] :888
DelegateScriptExceptionHandler* DelegateScriptExceptionHandler::New2(uDelegate* handler)
{
    DelegateScriptExceptionHandler* obj1 = (DelegateScriptExceptionHandler*)uNew(DelegateScriptExceptionHandler_typeof());
    obj1->ctor_1(handler);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(640)
// ------------------------------------------------------------------

// internal static extern class DllDirectory :640
// {
uClassType* DllDirectory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.DllDirectory", options);
    return type;
}

// public static void SetTargetSpecific() :642
void DllDirectory__SetTargetSpecific_fn()
{
    DllDirectory::SetTargetSpecific();
}

// public static void SetTargetSpecific() [static] :642
void DllDirectory::SetTargetSpecific()
{
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1353)
// -------------------------------------------------------------------

// internal sealed extern class Double :1353
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Double_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Double);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Double", options);
    type->SetBase(::g::Fuse::Scripting::V8::Simple::Value_typeof());
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Double__GetValueType_fn;
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    type->SetFields(1);
    return type;
}

// public extern Double(double value) :1378
void Double__ctor_2_fn(Double* __this, double* value)
{
    __this->ctor_2(*value);
}

// internal extern Double(Fuse.Scripting.V8.Simple.ValueImpl impl) :1362
void Double__ctor_3_fn(Double* __this, ::V8Simple::Value** impl)
{
    __this->ctor_3(*impl);
}

// protected extern Fuse.Scripting.V8.Simple.DoubleImpl get__doubleImpl() :1357
void Double__get__doubleImpl_fn(Double* __this, ::V8Simple::Double** __retval)
{
    *__retval = __this->_doubleImpl();
}

// public double GetValue() :1382
void Double__GetValue_fn(Double* __this, double* __retval)
{
    *__retval = __this->GetValue();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1366
void Double__GetValueType_fn(Double* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Double", "GetValueType()");
    return *__retval = (int)__this->_doubleImpl()->GetValueType(), void();
}

// public extern Double New(double value) :1378
void Double__New4_fn(double* value, Double** __retval)
{
    *__retval = Double::New4(*value);
}

// internal extern Double New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1362
void Double__New5_fn(::V8Simple::Value** impl, Double** __retval)
{
    *__retval = Double::New5(*impl);
}

// public extern Double(double value) [instance] :1378
void Double::ctor_2(double value)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Double", ".ctor(double)");
    ctor_1(new ::V8Simple::Double(value));
}

// internal extern Double(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1362
void Double::ctor_3(::V8Simple::Value* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Double", ".ctor(Fuse.Scripting.V8.Simple.ValueImpl)");
    ctor_1(impl);
}

// protected extern Fuse.Scripting.V8.Simple.DoubleImpl get__doubleImpl() [instance] :1357
::V8Simple::Double* Double::_doubleImpl()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Double", "get__doubleImpl()");
    return (::V8Simple::Double*)_valueImpl;
}

// public double GetValue() [instance] :1382
double Double::GetValue()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Double", "GetValue()");
    return _doubleImpl()->GetValue();
}

// public extern Double New(double value) [static] :1378
Double* Double::New4(double value)
{
    Double* obj2 = (Double*)uNew(Double_typeof());
    obj2->ctor_2(value);
    return obj2;
}

// internal extern Double New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1362
Double* Double::New5(::V8Simple::Value* impl)
{
    Double* obj1 = (Double*)uNew(Double_typeof());
    obj1->ctor_3(impl);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1393)
// -------------------------------------------------------------------

// internal extern struct DoubleImpl :1393
// {
uStructType* DoubleImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Double*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.DoubleImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1077)
// -------------------------------------------------------------------

// internal sealed extern class Function :1077
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Function", options);
    type->SetBase(::g::Fuse::Scripting::V8::Simple::Value_typeof());
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Function__GetValueType_fn;
    ::TYPES[6] = ::g::Fuse::Scripting::V8::Simple::ValueVector_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::V8::Simple::ValueImpl_typeof()->Array();
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    type->SetFields(1);
    return type;
}

// internal extern Function(Fuse.Scripting.V8.Simple.ValueImpl impl) :1086
void Function__ctor_2_fn(Function* __this, ::V8Simple::Value** impl)
{
    __this->ctor_2(*impl);
}

// internal extern Fuse.Scripting.V8.Simple.FunctionImpl get__functionImpl() :1081
void Function__get__functionImpl_fn(Function* __this, ::V8Simple::Function** __retval)
{
    *__retval = __this->_functionImpl();
}

// public Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.ValueVector args) :1098
void Function__Call_fn(Function* __this, ::g::Fuse::Scripting::V8::Simple::ValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Call(args);
}

// public Fuse.Scripting.V8.Simple.Object Construct(Fuse.Scripting.V8.Simple.ValueVector args) :1114
void Function__Construct_fn(Function* __this, ::g::Fuse::Scripting::V8::Simple::ValueVector* args, ::g::Fuse::Scripting::V8::Simple::Object** __retval)
{
    *__retval = __this->Construct(args);
}

// public bool Equals(Fuse.Scripting.V8.Simple.Function f) :1129
void Function__Equals2_fn(Function* __this, Function* f, bool* __retval)
{
    *__retval = __this->Equals2(f);
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1090
void Function__GetValueType_fn(Function* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Function", "GetValueType()");
    return *__retval = (int)__this->_functionImpl()->GetValueType(), void();
}

// internal extern Function New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1086
void Function__New4_fn(::V8Simple::Value** impl, Function** __retval)
{
    *__retval = Function::New4(*impl);
}

// internal extern Function(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1086
void Function::ctor_2(::V8Simple::Value* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Function", ".ctor(Fuse.Scripting.V8.Simple.ValueImpl)");
    ctor_1(impl);
}

// internal extern Fuse.Scripting.V8.Simple.FunctionImpl get__functionImpl() [instance] :1081
::V8Simple::Function* Function::_functionImpl()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Function", "get__functionImpl()");
    return (::V8Simple::Function*)_valueImpl;
}

// public Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.ValueVector args) [instance] :1098
::g::Fuse::Scripting::V8::Simple::Value* Function::Call(::g::Fuse::Scripting::V8::Simple::ValueVector* args)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Function", "Call(Fuse.Scripting.V8.Simple.ValueVector)");
    int len = uPtr(args)->Count();
    uArray* vargs = uArray::New(::TYPES[7/*Fuse.Scripting.V8.Simple.ValueImpl[]*/], len);

    for (int i = 0; i < len; ++i)
    {
        ::g::Fuse::Scripting::V8::Simple::Value* arg = uPtr(args)->Item(i);
        uPtr(vargs)->Item< ::V8Simple::Value*>(i) = ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(arg);
    }

    return ::g::Fuse::Scripting::V8::Simple::Value::New2(_functionImpl()->Call((::V8Simple::Value**)vargs->Ptr(), len));
}

// public Fuse.Scripting.V8.Simple.Object Construct(Fuse.Scripting.V8.Simple.ValueVector args) [instance] :1114
::g::Fuse::Scripting::V8::Simple::Object* Function::Construct(::g::Fuse::Scripting::V8::Simple::ValueVector* args)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Function", "Construct(Fuse.Scripting.V8.Simple.ValueVector)");
    int len = uPtr(args)->Count();
    uArray* vargs = uArray::New(::TYPES[7/*Fuse.Scripting.V8.Simple.ValueImpl[]*/], len);

    for (int i = 0; i < len; ++i)
    {
        ::g::Fuse::Scripting::V8::Simple::Value* arg = uPtr(args)->Item(i);
        uPtr(vargs)->Item< ::V8Simple::Value*>(i) = ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(arg);
    }

    return ::g::Fuse::Scripting::V8::Simple::Object::New5(_functionImpl()->Construct((::V8Simple::Value**)vargs->Ptr(), len));
}

// public bool Equals(Fuse.Scripting.V8.Simple.Function f) [instance] :1129
bool Function::Equals2(Function* f)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Function", "Equals(Fuse.Scripting.V8.Simple.Function)");
    return ::g::Fuse::Scripting::V8::Simple::ValueImpl::op_Equality(_valueImpl, ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(f));
}

// internal extern Function New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1086
Function* Function::New4(::V8Simple::Value* impl)
{
    Function* obj1 = (Function*)uNew(Function_typeof());
    obj1->ctor_2(impl);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1140)
// -------------------------------------------------------------------

// internal extern struct FunctionImpl :1140
// {
uStructType* FunctionImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Function*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.FunctionImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1309)
// -------------------------------------------------------------------

// internal sealed extern class Int :1309
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Int_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Int);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Int", options);
    type->SetBase(::g::Fuse::Scripting::V8::Simple::Value_typeof());
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Int__GetValueType_fn;
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    type->SetFields(1);
    return type;
}

// internal extern Int(Fuse.Scripting.V8.Simple.ValueImpl impl) :1318
void Int__ctor_2_fn(Int* __this, ::V8Simple::Value** impl)
{
    __this->ctor_2(*impl);
}

// public extern Int(int value) :1334
void Int__ctor_3_fn(Int* __this, int* value)
{
    __this->ctor_3(*value);
}

// protected extern Fuse.Scripting.V8.Simple.IntImpl get__intImpl() :1313
void Int__get__intImpl_fn(Int* __this, ::V8Simple::Int** __retval)
{
    *__retval = __this->_intImpl();
}

// public int GetValue() :1338
void Int__GetValue_fn(Int* __this, int* __retval)
{
    *__retval = __this->GetValue();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1322
void Int__GetValueType_fn(Int* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Int", "GetValueType()");
    return *__retval = (int)__this->_intImpl()->GetValueType(), void();
}

// internal extern Int New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1318
void Int__New4_fn(::V8Simple::Value** impl, Int** __retval)
{
    *__retval = Int::New4(*impl);
}

// public extern Int New(int value) :1334
void Int__New5_fn(int* value, Int** __retval)
{
    *__retval = Int::New5(*value);
}

// internal extern Int(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1318
void Int::ctor_2(::V8Simple::Value* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Int", ".ctor(Fuse.Scripting.V8.Simple.ValueImpl)");
    ctor_1(impl);
}

// public extern Int(int value) [instance] :1334
void Int::ctor_3(int value)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Int", ".ctor(int)");
    ctor_1(::V8Simple::Int::New(value));
}

// protected extern Fuse.Scripting.V8.Simple.IntImpl get__intImpl() [instance] :1313
::V8Simple::Int* Int::_intImpl()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Int", "get__intImpl()");
    return (::V8Simple::Int*)_valueImpl;
}

// public int GetValue() [instance] :1338
int Int::GetValue()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Int", "GetValue()");
    return _intImpl()->GetValue();
}

// internal extern Int New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1318
Int* Int::New4(::V8Simple::Value* impl)
{
    Int* obj1 = (Int*)uNew(Int_typeof());
    obj1->ctor_2(impl);
    return obj1;
}

// public extern Int New(int value) [static] :1334
Int* Int::New5(int value)
{
    Int* obj2 = (Int*)uNew(Int_typeof());
    obj2->ctor_3(value);
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1349)
// -------------------------------------------------------------------

// internal extern struct IntImpl :1349
// {
uStructType* IntImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Int*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.IntImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(828)
// ------------------------------------------------------------------

// internal extern class MessageHandler :828
// {
// extern ~MessageHandler() :835
static void MessageHandler__Finalize_fn(MessageHandler* __this)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.MessageHandler", "Finalize()");
    delete __this->_impl;
}

MessageHandler_type* MessageHandler_typeof()
{
    static uSStrong<MessageHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(MessageHandler);
    options.TypeSize = sizeof(MessageHandler_type);
    type = (MessageHandler_type*)uClassType::New("Fuse.Scripting.V8.Simple.MessageHandler", options);
    type->fp_ctor_ = (void*)MessageHandler__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))MessageHandler__Finalize_fn;
    type->fp_Handle = MessageHandler__Handle_fn;
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::MessageHandlerImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::MessageHandler, _impl), 0);
    return type;
}

// public extern MessageHandler() :831
void MessageHandler__ctor__fn(MessageHandler* __this)
{
    __this->ctor_();
}

// public virtual void Handle(Fuse.Scripting.V8.Simple.String message) :840
void MessageHandler__Handle_fn(MessageHandler* __this, ::g::Fuse::Scripting::V8::Simple::String* message)
{
}

// public extern MessageHandler New() :831
void MessageHandler__New1_fn(MessageHandler** __retval)
{
    *__retval = MessageHandler::New1();
}

// public extern MessageHandler() [instance] :831
void MessageHandler::ctor_()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.MessageHandler", ".ctor()");
    _impl = new ::V8Simple::MessageHandlerProxy(this);
}

// public extern MessageHandler New() [static] :831
MessageHandler* MessageHandler::New1()
{
    MessageHandler* obj1 = (MessageHandler*)uNew(MessageHandler_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(844)
// ------------------------------------------------------------------

// internal extern struct MessageHandlerImpl :844
// {
uStructType* MessageHandlerImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::MessageHandlerProxy*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.MessageHandlerImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1586)
// -------------------------------------------------------------------

// internal sealed extern class MultiMap<T> :1586
// {
uType* MultiMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(MultiMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.MultiMap`1", options);
    type->fp_ctor_ = (void*)MultiMap__New1_fn;
    ::STRINGS[0] = uString::Const("MultiMap did not contain the given key");
    ::TYPES[8] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[9] = ::g::Uno::Int_typeof();
    type->SetPrecalc(
        ::TYPES[8/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), ::TYPES[9/*int*/]));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof()), offsetof(::g::Fuse::Scripting::V8::Simple::MultiMap, _dict), 0);
    return type;
}

// public MultiMap() :1590
void MultiMap__ctor__fn(MultiMap* __this)
{
    __this->ctor_();
}

// public void Add(T item) :1595
void MultiMap__Add_fn(MultiMap* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<T, int>*/),
    };
    uStackFrame __("Fuse.Scripting.V8.Simple.MultiMap`1", "Add(T)");
    bool ret2;
    int count;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dict), item, &count, &ret2), ret2))
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dict), item, uCRef<int>(count + 1));
    else
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dict), item, uCRef<int>(1));
}

// public MultiMap New() :1590
void MultiMap__New1_fn(uType* __type, MultiMap** __retval)
{
    *__retval = MultiMap::New1(__type);
}

// public void Remove(T item) :1608
void MultiMap__Remove_fn(MultiMap* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<T, int>*/),
    };
    uStackFrame __("Fuse.Scripting.V8.Simple.MultiMap`1", "Remove(T)");
    bool ret3;
    bool ret4;
    int count;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dict), item, &count, &ret3), ret3))
    {
        int newCount = count - 1;

        if (newCount == 0)
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_dict), item, &ret4);
        else
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dict), item, uCRef<int>(newCount));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"MultiMap di...*/]));
}

// public MultiMap() [instance] :1590
void MultiMap::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, int>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Scripting.V8.Simple.MultiMap`1", ".ctor()");
    _dict = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public MultiMap New() [static] :1590
MultiMap* MultiMap::New1(uType* __type)
{
    MultiMap* obj1 = (MultiMap*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(980)
// ------------------------------------------------------------------

// internal sealed extern class Object :980
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Object", options);
    type->SetBase(::g::Fuse::Scripting::V8::Simple::Value_typeof());
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Object__GetValueType_fn;
    ::TYPES[6] = ::g::Fuse::Scripting::V8::Simple::ValueVector_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::V8::Simple::ValueImpl_typeof()->Array();
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::V8::Simple::Function_typeof();
    type->SetFields(1);
    return type;
}

// internal extern Object(Fuse.Scripting.V8.Simple.ObjectImpl impl) :993
void Object__ctor_2_fn(Object* __this, ::V8Simple::Object** impl)
{
    __this->ctor_2(*impl);
}

// internal extern Object(Fuse.Scripting.V8.Simple.ValueImpl impl) :989
void Object__ctor_3_fn(Object* __this, ::V8Simple::Value** impl)
{
    __this->ctor_3(*impl);
}

// protected extern Fuse.Scripting.V8.Simple.ObjectImpl get__objectImpl() :984
void Object__get__objectImpl_fn(Object* __this, ::V8Simple::Object** __retval)
{
    *__retval = __this->_objectImpl();
}

// public Fuse.Scripting.V8.Simple.Value CallMethod(Fuse.Scripting.V8.Simple.String name, Fuse.Scripting.V8.Simple.ValueVector args) :1038
void Object__CallMethod_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* name, ::g::Fuse::Scripting::V8::Simple::ValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->CallMethod(name, args);
}

// public bool ContainsKey(Fuse.Scripting.V8.Simple.String key) :1054
void Object__ContainsKey_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// public bool Equals(Fuse.Scripting.V8.Simple.Object arg) :1062
void Object__Equals2_fn(Object* __this, Object* arg, bool* __retval)
{
    *__retval = __this->Equals2(arg);
}

// public Fuse.Scripting.V8.Simple.Value Get(Fuse.Scripting.V8.Simple.String key) :1005
void Object__Get_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* key, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Get(key);
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :997
void Object__GetValueType_fn(Object* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "GetValueType()");
    return *__retval = (int)__this->_objectImpl()->GetValueType(), void();
}

// public bool InstanceOf(Fuse.Scripting.V8.Simple.Function type) :1030
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::Function* type, bool* __retval)
{
    *__retval = __this->InstanceOf(type);
}

// public Fuse.Scripting.V8.Simple.UniqueValueVector Keys() :1022
void Object__Keys_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector** __retval)
{
    *__retval = __this->Keys();
}

// internal extern Object New(Fuse.Scripting.V8.Simple.ObjectImpl impl) :993
void Object__New4_fn(::V8Simple::Object** impl, Object** __retval)
{
    *__retval = Object::New4(*impl);
}

// internal extern Object New(Fuse.Scripting.V8.Simple.ValueImpl impl) :989
void Object__New5_fn(::V8Simple::Value** impl, Object** __retval)
{
    *__retval = Object::New5(*impl);
}

// public void Set(Fuse.Scripting.V8.Simple.String key, Fuse.Scripting.V8.Simple.Value value) :1014
void Object__Set_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* key, ::g::Fuse::Scripting::V8::Simple::Value* value)
{
    __this->Set(key, value);
}

// internal extern Object(Fuse.Scripting.V8.Simple.ObjectImpl impl) [instance] :993
void Object::ctor_2(::V8Simple::Object* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", ".ctor(Fuse.Scripting.V8.Simple.ObjectImpl)");
    ctor_1((::V8Simple::Value*)impl);
}

// internal extern Object(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :989
void Object::ctor_3(::V8Simple::Value* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", ".ctor(Fuse.Scripting.V8.Simple.ValueImpl)");
    ctor_1(impl);
}

// protected extern Fuse.Scripting.V8.Simple.ObjectImpl get__objectImpl() [instance] :984
::V8Simple::Object* Object::_objectImpl()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "get__objectImpl()");
    return (::V8Simple::Object*)_valueImpl;
}

// public Fuse.Scripting.V8.Simple.Value CallMethod(Fuse.Scripting.V8.Simple.String name, Fuse.Scripting.V8.Simple.ValueVector args) [instance] :1038
::g::Fuse::Scripting::V8::Simple::Value* Object::CallMethod(::g::Fuse::Scripting::V8::Simple::String* name, ::g::Fuse::Scripting::V8::Simple::ValueVector* args)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "CallMethod(Fuse.Scripting.V8.Simple.String,Fuse.Scripting.V8.Simple.ValueVector)");
    int len = uPtr(args)->Count();
    uArray* vargs = uArray::New(::TYPES[7/*Fuse.Scripting.V8.Simple.ValueImpl[]*/], len);

    for (int i = 0; i < len; ++i)
    {
        ::g::Fuse::Scripting::V8::Simple::Value* arg = uPtr(args)->Item(i);
        uPtr(vargs)->Item< ::V8Simple::Value*>(i) = ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(arg);
    }

    return ::g::Fuse::Scripting::V8::Simple::Value::New2(_objectImpl()->CallMethod(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(name), (::V8Simple::Value**)vargs->Ptr(), len));
}

// public bool ContainsKey(Fuse.Scripting.V8.Simple.String key) [instance] :1054
bool Object::ContainsKey(::g::Fuse::Scripting::V8::Simple::String* key)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "ContainsKey(Fuse.Scripting.V8.Simple.String)");
    return _objectImpl()->ContainsKey(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(key));
}

// public bool Equals(Fuse.Scripting.V8.Simple.Object arg) [instance] :1062
bool Object::Equals2(Object* arg)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "Equals(Fuse.Scripting.V8.Simple.Object)");
    return ::g::Fuse::Scripting::V8::Simple::ValueImpl::op_Equality(_valueImpl, ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(arg));
}

// public Fuse.Scripting.V8.Simple.Value Get(Fuse.Scripting.V8.Simple.String key) [instance] :1005
::g::Fuse::Scripting::V8::Simple::Value* Object::Get(::g::Fuse::Scripting::V8::Simple::String* key)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "Get(Fuse.Scripting.V8.Simple.String)");
    ::g::Fuse::Scripting::V8::Simple::Value* result = ::g::Fuse::Scripting::V8::Simple::Value::New2(_objectImpl()->Get(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(key)));
    return result;
}

// public bool InstanceOf(Fuse.Scripting.V8.Simple.Function type) [instance] :1030
bool Object::InstanceOf(::g::Fuse::Scripting::V8::Simple::Function* type)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "InstanceOf(Fuse.Scripting.V8.Simple.Function)");
    return _objectImpl()->InstanceOf(uPtr(type)->_functionImpl());
}

// public Fuse.Scripting.V8.Simple.UniqueValueVector Keys() [instance] :1022
::g::Fuse::Scripting::V8::Simple::UniqueValueVector* Object::Keys()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "Keys()");
    return ::g::Fuse::Scripting::V8::Simple::UniqueValueVector::New1(_objectImpl()->Keys(), true);
}

// public void Set(Fuse.Scripting.V8.Simple.String key, Fuse.Scripting.V8.Simple.Value value) [instance] :1014
void Object::Set(::g::Fuse::Scripting::V8::Simple::String* key, ::g::Fuse::Scripting::V8::Simple::Value* value)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "Set(Fuse.Scripting.V8.Simple.String,Fuse.Scripting.V8.Simple.Value)");
    _objectImpl()->Set(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(key), ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(value));
}

// internal extern Object New(Fuse.Scripting.V8.Simple.ObjectImpl impl) [static] :993
Object* Object::New4(::V8Simple::Object* impl)
{
    Object* obj2 = (Object*)uNew(Object_typeof());
    obj2->ctor_2(impl);
    return obj2;
}

// internal extern Object New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :989
Object* Object::New5(::V8Simple::Value* impl)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_3(impl);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1073)
// -------------------------------------------------------------------

// internal extern struct ObjectImpl :1073
// {
uStructType* ObjectImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Object*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ObjectImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(762)
// ------------------------------------------------------------------

// internal sealed extern class ScriptException :762
// {
// extern ~ScriptException() :769
static void ScriptException__Finalize_fn(ScriptException* __this)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ScriptException", "Finalize()");
    __this->_scriptExceptionImpl->Delete();
}

uType* ScriptException_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ScriptException);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.ScriptException", options);
    type->fp_Finalize = (void(*)(uObject*))ScriptException__Finalize_fn;
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::ScriptExceptionImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::ScriptException, _scriptExceptionImpl), 0);
    return type;
}

// private extern ScriptException(Fuse.Scripting.V8.Simple.ScriptExceptionImpl impl) :765
void ScriptException__ctor__fn(ScriptException* __this, ::V8Simple::ScriptException** impl)
{
    __this->ctor_(*impl);
}

// public Fuse.Scripting.V8.Simple.String GetErrorMessage() :781
void ScriptException__GetErrorMessage_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval)
{
    *__retval = __this->GetErrorMessage();
}

// public Fuse.Scripting.V8.Simple.String GetFileName() :789
void ScriptException__GetFileName_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval)
{
    *__retval = __this->GetFileName();
}

// public int GetLineNumber() :797
void ScriptException__GetLineNumber_fn(ScriptException* __this, int* __retval)
{
    *__retval = __this->GetLineNumber();
}

// public Fuse.Scripting.V8.Simple.String GetName() :773
void ScriptException__GetName_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval)
{
    *__retval = __this->GetName();
}

// public Fuse.Scripting.V8.Simple.String GetSourceLine() :813
void ScriptException__GetSourceLine_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval)
{
    *__retval = __this->GetSourceLine();
}

// public Fuse.Scripting.V8.Simple.String GetStackTrace() :805
void ScriptException__GetStackTrace_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval)
{
    *__retval = __this->GetStackTrace();
}

// private extern ScriptException New(Fuse.Scripting.V8.Simple.ScriptExceptionImpl impl) :765
void ScriptException__New1_fn(::V8Simple::ScriptException** impl, ScriptException** __retval)
{
    *__retval = ScriptException::New1(*impl);
}

// private extern ScriptException(Fuse.Scripting.V8.Simple.ScriptExceptionImpl impl) [instance] :765
void ScriptException::ctor_(::V8Simple::ScriptException* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ScriptException", ".ctor(Fuse.Scripting.V8.Simple.ScriptExceptionImpl)");
    _scriptExceptionImpl = impl;
}

// public Fuse.Scripting.V8.Simple.String GetErrorMessage() [instance] :781
::g::Fuse::Scripting::V8::Simple::String* ScriptException::GetErrorMessage()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ScriptException", "GetErrorMessage()");
    return ::g::Fuse::Scripting::V8::Simple::String::New4(_scriptExceptionImpl->GetErrorMessage());
}

// public Fuse.Scripting.V8.Simple.String GetFileName() [instance] :789
::g::Fuse::Scripting::V8::Simple::String* ScriptException::GetFileName()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ScriptException", "GetFileName()");
    return ::g::Fuse::Scripting::V8::Simple::String::New4(_scriptExceptionImpl->GetFileName());
}

// public int GetLineNumber() [instance] :797
int ScriptException::GetLineNumber()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ScriptException", "GetLineNumber()");
    return _scriptExceptionImpl->GetLineNumber();
}

// public Fuse.Scripting.V8.Simple.String GetName() [instance] :773
::g::Fuse::Scripting::V8::Simple::String* ScriptException::GetName()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ScriptException", "GetName()");
    return ::g::Fuse::Scripting::V8::Simple::String::New4(_scriptExceptionImpl->GetName());
}

// public Fuse.Scripting.V8.Simple.String GetSourceLine() [instance] :813
::g::Fuse::Scripting::V8::Simple::String* ScriptException::GetSourceLine()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ScriptException", "GetSourceLine()");
    return ::g::Fuse::Scripting::V8::Simple::String::New4(_scriptExceptionImpl->GetSourceLine());
}

// public Fuse.Scripting.V8.Simple.String GetStackTrace() [instance] :805
::g::Fuse::Scripting::V8::Simple::String* ScriptException::GetStackTrace()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ScriptException", "GetStackTrace()");
    return ::g::Fuse::Scripting::V8::Simple::String::New4(_scriptExceptionImpl->GetStackTrace());
}

// private extern ScriptException New(Fuse.Scripting.V8.Simple.ScriptExceptionImpl impl) [static] :765
ScriptException* ScriptException::New1(::V8Simple::ScriptException* impl)
{
    ScriptException* obj1 = (ScriptException*)uNew(ScriptException_typeof());
    obj1->ctor_(impl);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(863)
// ------------------------------------------------------------------

// internal extern class ScriptExceptionHandler :863
// {
// extern ~ScriptExceptionHandler() :874
static void ScriptExceptionHandler__Finalize_fn(ScriptExceptionHandler* __this)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ScriptExceptionHandler", "Finalize()");
    delete __this->_impl;
}

ScriptExceptionHandler_type* ScriptExceptionHandler_typeof()
{
    static uSStrong<ScriptExceptionHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ScriptExceptionHandler);
    options.TypeSize = sizeof(ScriptExceptionHandler_type);
    type = (ScriptExceptionHandler_type*)uClassType::New("Fuse.Scripting.V8.Simple.ScriptExceptionHandler", options);
    type->fp_ctor_ = (void*)ScriptExceptionHandler__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))ScriptExceptionHandler__Finalize_fn;
    type->fp_Handle = ScriptExceptionHandler__Handle_fn;
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandlerImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler, _impl), 0);
    return type;
}

// public ScriptExceptionHandler() :866
void ScriptExceptionHandler__ctor__fn(ScriptExceptionHandler* __this)
{
    __this->ctor_();
}

// public virtual void Handle(Fuse.Scripting.V8.Simple.ScriptException e) :879
void ScriptExceptionHandler__Handle_fn(ScriptExceptionHandler* __this, ::g::Fuse::Scripting::V8::Simple::ScriptException* e)
{
}

// public ScriptExceptionHandler New() :866
void ScriptExceptionHandler__New1_fn(ScriptExceptionHandler** __retval)
{
    *__retval = ScriptExceptionHandler::New1();
}

// public ScriptExceptionHandler() [instance] :866
void ScriptExceptionHandler::ctor_()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ScriptExceptionHandler", ".ctor()");
    _impl = new ::V8Simple::ScriptExceptionHandlerProxy(this);
}

// public ScriptExceptionHandler New() [static] :866
ScriptExceptionHandler* ScriptExceptionHandler::New1()
{
    ScriptExceptionHandler* obj1 = (ScriptExceptionHandler*)uNew(ScriptExceptionHandler_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(883)
// ------------------------------------------------------------------

// internal extern struct ScriptExceptionHandlerImpl :883
// {
uStructType* ScriptExceptionHandlerImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::ScriptExceptionHandlerProxy*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ScriptExceptionHandlerImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(824)
// ------------------------------------------------------------------

// internal extern struct ScriptExceptionImpl :824
// {
uStructType* ScriptExceptionImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::ScriptException*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ScriptExceptionImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1397)
// -------------------------------------------------------------------

// internal sealed extern class String :1397
// {
::g::Fuse::Scripting::V8::Simple::Value_type* String_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(String);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.String", options);
    type->SetBase(::g::Fuse::Scripting::V8::Simple::Value_typeof());
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))String__GetValueType_fn;
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    type->SetFields(1);
    return type;
}

// internal extern String(Fuse.Scripting.V8.Simple.ValueImpl impl) :1406
void String__ctor_2_fn(String* __this, ::V8Simple::Value** impl)
{
    __this->ctor_2(*impl);
}

// internal extern Fuse.Scripting.V8.Simple.StringImpl get__stringImpl() :1401
void String__get__stringImpl_fn(String* __this, ::V8Simple::String** __retval)
{
    *__retval = __this->_stringImpl();
}

// public string GetValue() :1429
void String__GetValue_fn(String* __this, uString** __retval)
{
    *__retval = __this->GetValue();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1410
void String__GetValueType_fn(String* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.String", "GetValueType()");
    return *__retval = (int)__this->_stringImpl()->GetValueType(), void();
}

// internal extern String New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1406
void String__New4_fn(::V8Simple::Value** impl, String** __retval)
{
    *__retval = String::New4(*impl);
}

// public static Fuse.Scripting.V8.Simple.String New(string value) :1418
void String__New5_fn(uString* value, String** __retval)
{
    *__retval = String::New5(value);
}

// internal extern String(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1406
void String::ctor_2(::V8Simple::Value* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.String", ".ctor(Fuse.Scripting.V8.Simple.ValueImpl)");
    ctor_1(impl);
}

// internal extern Fuse.Scripting.V8.Simple.StringImpl get__stringImpl() [instance] :1401
::V8Simple::String* String::_stringImpl()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.String", "get__stringImpl()");
    return (::V8Simple::String*)_valueImpl;
}

// public string GetValue() [instance] :1429
uString* String::GetValue()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.String", "GetValue()");
    return ::uString::Utf8((const char*)_stringImpl()->GetValue());
}

// internal extern String New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1406
String* String::New4(::V8Simple::Value* impl)
{
    String* obj1 = (String*)uNew(String_typeof());
    obj1->ctor_2(impl);
    return obj1;
}

// public static Fuse.Scripting.V8.Simple.String New(string value) [static] :1418
String* String::New5(uString* value)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.String", "New(string)");
    const char* cvalue = ::uAllocCStr(value);
    ::V8Simple::Value* valueImpl = ::V8Simple::String::New((const ::V8Simple::byte*)cvalue, cvalue == nullptr ? 0 : std::strlen(cvalue));
    ::uFreeCStr(cvalue);
    return ::g::Fuse::Scripting::V8::Simple::ValueImpl::op_Equality(valueImpl, NULL) ? uCast<String*>(NULL, String_typeof()) : (String*)String::New4(valueImpl);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1442)
// -------------------------------------------------------------------

// internal static extern class StringExtensions :1442
// {
uClassType* StringExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.StringExtensions", options);
    ::TYPES[11] = ::g::Fuse::Scripting::V8::Simple::String_typeof();
    return type;
}

// public static Fuse.Scripting.V8.Simple.StringImpl GetStringImpl(Fuse.Scripting.V8.Simple.String str) :1444
void StringExtensions__GetStringImpl_fn(::g::Fuse::Scripting::V8::Simple::String* str, ::V8Simple::String** __retval)
{
    *__retval = StringExtensions::GetStringImpl(str);
}

// public static Fuse.Scripting.V8.Simple.StringImpl GetStringImpl(Fuse.Scripting.V8.Simple.String str) [static] :1444
::V8Simple::String* StringExtensions::GetStringImpl(::g::Fuse::Scripting::V8::Simple::String* str)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.StringExtensions", "GetStringImpl(Fuse.Scripting.V8.Simple.String)");
    return (str == NULL) ? NULL : uPtr(str)->_stringImpl();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1440)
// -------------------------------------------------------------------

// internal extern struct StringImpl :1440
// {
uStructType* StringImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::String*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.StringImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(901)
// ------------------------------------------------------------------

// public extern enum Type :901
uEnumType* Type_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.V8.Simple.Type", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Int", 0LL,
        "Double", 1LL,
        "String", 2LL,
        "Bool", 3LL,
        "Object", 4LL,
        "Array", 5LL,
        "Function", 6LL,
        "Callback", 7LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1238)
// -------------------------------------------------------------------

// internal sealed extern class UniqueValueVector :1238
// {
// extern ~UniqueValueVector() :1247
static void UniqueValueVector__Finalize_fn(UniqueValueVector* __this)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.UniqueValueVector", "Finalize()");

    if (__this->_owned)
        __this->_impl->Delete();
}

uType* UniqueValueVector_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UniqueValueVector);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.UniqueValueVector", options);
    type->fp_Finalize = (void(*)(uObject*))UniqueValueVector__Finalize_fn;
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::UniqueValueVectorImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::UniqueValueVector, _impl), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::UniqueValueVector, _owned), 0);
    return type;
}

// internal extern UniqueValueVector(Fuse.Scripting.V8.Simple.UniqueValueVectorImpl impl, [bool owned]) :1242
void UniqueValueVector__ctor__fn(UniqueValueVector* __this, ::V8Simple::UniqueValueVector** impl, bool* owned)
{
    __this->ctor_(*impl, *owned);
}

// public Fuse.Scripting.V8.Simple.Value Get(int i) :1262
void UniqueValueVector__Get_fn(UniqueValueVector* __this, int* i, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Get(*i);
}

// public int Length() :1254
void UniqueValueVector__Length_fn(UniqueValueVector* __this, int* __retval)
{
    *__retval = __this->Length();
}

// internal extern UniqueValueVector New(Fuse.Scripting.V8.Simple.UniqueValueVectorImpl impl, [bool owned]) :1242
void UniqueValueVector__New1_fn(::V8Simple::UniqueValueVector** impl, bool* owned, UniqueValueVector** __retval)
{
    *__retval = UniqueValueVector::New1(*impl, *owned);
}

// internal extern UniqueValueVector(Fuse.Scripting.V8.Simple.UniqueValueVectorImpl impl, [bool owned]) [instance] :1242
void UniqueValueVector::ctor_(::V8Simple::UniqueValueVector* impl, bool owned)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.UniqueValueVector", ".ctor(Fuse.Scripting.V8.Simple.UniqueValueVectorImpl,[bool])");
    _impl = impl;
    _owned = owned;
}

// public Fuse.Scripting.V8.Simple.Value Get(int i) [instance] :1262
::g::Fuse::Scripting::V8::Simple::Value* UniqueValueVector::Get(int i)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.UniqueValueVector", "Get(int)");
    return ::g::Fuse::Scripting::V8::Simple::Value::New2(_impl->Get(i));
}

// public int Length() [instance] :1254
int UniqueValueVector::Length()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.UniqueValueVector", "Length()");
    return _impl->Length();
}

// internal extern UniqueValueVector New(Fuse.Scripting.V8.Simple.UniqueValueVectorImpl impl, [bool owned]) [static] :1242
UniqueValueVector* UniqueValueVector::New1(::V8Simple::UniqueValueVector* impl, bool owned)
{
    UniqueValueVector* obj1 = (UniqueValueVector*)uNew(UniqueValueVector_typeof());
    obj1->ctor_(impl, owned);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1273)
// -------------------------------------------------------------------

// internal extern struct UniqueValueVectorImpl :1273
// {
uStructType* UniqueValueVectorImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::UniqueValueVector*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.UniqueValueVectorImpl", options);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(914)
// ------------------------------------------------------------------

// internal extern class Value :914
// {
// extern ~Value() :943
static void Value__Finalize_fn(Value* __this)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Value", "Finalize()");
    __this->_valueImpl->Delete();
}

Value_type* Value_typeof()
{
    static uSStrong<Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Value);
    options.TypeSize = sizeof(Value_type);
    type = (Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Value", options);
    type->fp_ctor_ = (void*)Value__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))Value__Finalize_fn;
    type->fp_GetValueType = Value__GetValueType_fn;
    ::STRINGS[1] = uString::Const("V8Simple: Unhandled type on Uno side: ");
    ::TYPES[12] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::ValueImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::Value, _valueImpl), 0);
    return type;
}

// protected extern Value() :917
void Value__ctor__fn(Value* __this)
{
    __this->ctor_();
}

// protected extern Value(Fuse.Scripting.V8.Simple.ValueImpl impl) :920
void Value__ctor_1_fn(Value* __this, ::V8Simple::Value** impl)
{
    __this->ctor_1(*impl);
}

// public virtual Fuse.Scripting.V8.Simple.Type GetValueType() :947
void Value__GetValueType_fn(Value* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Value", "GetValueType()");
    return *__retval = (int)__this->_valueImpl->GetValueType(), void();
}

// protected extern Value New() :917
void Value__New1_fn(Value** __retval)
{
    *__retval = Value::New1();
}

// internal static extern Fuse.Scripting.V8.Simple.Value New(Fuse.Scripting.V8.Simple.ValueImpl impl) :924
void Value__New2_fn(::V8Simple::Value** impl, Value** __retval)
{
    *__retval = Value::New2(*impl);
}

// protected extern Value New(Fuse.Scripting.V8.Simple.ValueImpl impl) :920
void Value__New3_fn(::V8Simple::Value** impl, Value** __retval)
{
    *__retval = Value::New3(*impl);
}

// protected extern Value() [instance] :917
void Value::ctor_()
{
}

// protected extern Value(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :920
void Value::ctor_1(::V8Simple::Value* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Value", ".ctor(Fuse.Scripting.V8.Simple.ValueImpl)");
    _valueImpl = impl;
}

// protected extern Value New() [static] :917
Value* Value::New1()
{
    Value* obj1 = (Value*)uNew(Value_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static extern Fuse.Scripting.V8.Simple.Value New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :924
Value* Value::New2(::V8Simple::Value* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Value", "New(Fuse.Scripting.V8.Simple.ValueImpl)");

    if (::g::Fuse::Scripting::V8::Simple::ValueImpl::op_Equality(impl, NULL))
        return NULL;

    int type = (int)impl->GetValueType();

    switch (type)
    {
        case 0:
            return ::g::Fuse::Scripting::V8::Simple::Int::New4(impl);
        case 1:
            return ::g::Fuse::Scripting::V8::Simple::Double::New5(impl);
        case 2:
            return ::g::Fuse::Scripting::V8::Simple::String::New4(impl);
        case 3:
            return ::g::Fuse::Scripting::V8::Simple::Bool::New5(impl);
        case 4:
            return ::g::Fuse::Scripting::V8::Simple::Object::New5(impl);
        case 5:
            return ::g::Fuse::Scripting::V8::Simple::Array::New4(impl);
        case 6:
            return ::g::Fuse::Scripting::V8::Simple::Function::New4(impl);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[1/*"V8Simple: U...*/], uBox<int>(::g::Fuse::Scripting::V8::Simple::Type_typeof(), type))));
}

// protected extern Value New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :920
Value* Value::New3(::V8Simple::Value* impl)
{
    Value* obj2 = (Value*)uNew(Value_typeof());
    obj2->ctor_1(impl);
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(970)
// ------------------------------------------------------------------

// internal static extern class ValueExtensions :970
// {
uClassType* ValueExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.ValueExtensions", options);
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    return type;
}

// public static Fuse.Scripting.V8.Simple.ValueImpl GetValueImpl(Fuse.Scripting.V8.Simple.Value val) :972
void ValueExtensions__GetValueImpl_fn(::g::Fuse::Scripting::V8::Simple::Value* val, ::V8Simple::Value** __retval)
{
    *__retval = ValueExtensions::GetValueImpl(val);
}

// public static Fuse.Scripting.V8.Simple.ValueImpl GetValueImpl(Fuse.Scripting.V8.Simple.Value val) [static] :972
::V8Simple::Value* ValueExtensions::GetValueImpl(::g::Fuse::Scripting::V8::Simple::Value* val)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueExtensions", "GetValueImpl(Fuse.Scripting.V8.Simple.Value)");
    return (val == NULL) ? NULL : uPtr(val)->_valueImpl;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(958)
// ------------------------------------------------------------------

// internal extern struct ValueImpl :958
// {
uStructType* ValueImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Value*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ValueImpl", options);
    return type;
}

// public static operator ==(Fuse.Scripting.V8.Simple.ValueImpl x, Fuse.Scripting.V8.Simple.ValueImpl y) :960
void ValueImpl__op_Equality_fn(::V8Simple::Value** x, ::V8Simple::Value** y, bool* __retval)
{
    *__retval = ValueImpl::op_Equality(*x, *y);
}

// public static operator !=(Fuse.Scripting.V8.Simple.ValueImpl x, Fuse.Scripting.V8.Simple.ValueImpl y) :964
void ValueImpl__op_Inequality_fn(::V8Simple::Value** x, ::V8Simple::Value** y, bool* __retval)
{
    *__retval = ValueImpl::op_Inequality(*x, *y);
}

// public static operator ==(Fuse.Scripting.V8.Simple.ValueImpl x, Fuse.Scripting.V8.Simple.ValueImpl y) [static] :960
bool ValueImpl::op_Equality(::V8Simple::Value* x, ::V8Simple::Value* y)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueImpl", "==(Fuse.Scripting.V8.Simple.ValueImpl,Fuse.Scripting.V8.Simple.ValueImpl)");
    return x == y;
}

// public static operator !=(Fuse.Scripting.V8.Simple.ValueImpl x, Fuse.Scripting.V8.Simple.ValueImpl y) [static] :964
bool ValueImpl::op_Inequality(::V8Simple::Value* x, ::V8Simple::Value* y)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueImpl", "!=(Fuse.Scripting.V8.Simple.ValueImpl,Fuse.Scripting.V8.Simple.ValueImpl)");
    return x != y;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(1495)
// -------------------------------------------------------------------

// internal sealed extern class ValueVector :1495
// {
ValueVector_type* ValueVector_typeof()
{
    static uSStrong<ValueVector_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ValueVector);
    options.TypeSize = sizeof(ValueVector_type);
    type = (ValueVector_type*)uClassType::New("Fuse.Scripting.V8.Simple.ValueVector", options);
    type->fp_ctor_ = (void*)ValueVector__New1_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))ValueVector__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))ValueVector__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))ValueVector__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))ValueVector__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))ValueVector__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))ValueVector__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))ValueVector__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))ValueVector__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ValueVector__GetEnumerator_fn;
    ::TYPES[13] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::Value_typeof());
    ::TYPES[14] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::Value_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::Value_typeof()), offsetof(ValueVector_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::Value_typeof()), offsetof(ValueVector_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::Value_typeof()), offsetof(ValueVector_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::Value_typeof()), offsetof(::g::Fuse::Scripting::V8::Simple::ValueVector, _list), 0);
    return type;
}

// public ValueVector() :1498
void ValueVector__ctor__fn(ValueVector* __this)
{
    __this->ctor_();
}

// public void Add(Fuse.Scripting.V8.Simple.Value item) :1514
void ValueVector__Add_fn(ValueVector* __this, ::g::Fuse::Scripting::V8::Simple::Value* item)
{
    __this->Add(item);
}

// public void Clear() :1506
void ValueVector__Clear_fn(ValueVector* __this)
{
    __this->Clear();
}

// public bool Contains(Fuse.Scripting.V8.Simple.Value item) :1530
void ValueVector__Contains_fn(ValueVector* __this, ::g::Fuse::Scripting::V8::Simple::Value* item, bool* __retval)
{
    *__retval = __this->Contains(item);
}

// public int get_Count() :1540
void ValueVector__get_Count_fn(ValueVector* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.IEnumerator<Fuse.Scripting.V8.Simple.Value> GetEnumerator() :1549
void ValueVector__GetEnumerator_fn(ValueVector* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public void Insert(int index, Fuse.Scripting.V8.Simple.Value item) :1557
void ValueVector__Insert_fn(ValueVector* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value* item)
{
    __this->Insert(*index, item);
}

// public Fuse.Scripting.V8.Simple.Value get_Item(int index) :1575
void ValueVector__get_Item_fn(ValueVector* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Item(*index);
}

// public ValueVector New() :1498
void ValueVector__New1_fn(ValueVector** __retval)
{
    *__retval = ValueVector::New1();
}

// public bool Remove(Fuse.Scripting.V8.Simple.Value item) :1522
void ValueVector__Remove_fn(ValueVector* __this, ::g::Fuse::Scripting::V8::Simple::Value* item, bool* __retval)
{
    *__retval = __this->Remove(item);
}

// public void RemoveAt(int index) :1565
void ValueVector__RemoveAt_fn(ValueVector* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public ValueVector() [instance] :1498
void ValueVector::ctor_()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", ".ctor()");
    _list = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[13/*Uno.Collections.List<Fuse.Scripting.V8.Simple.Value>*/]));
}

// public void Add(Fuse.Scripting.V8.Simple.Value item) [instance] :1514
void ValueVector::Add(::g::Fuse::Scripting::V8::Simple::Value* item)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "Add(Fuse.Scripting.V8.Simple.Value)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_list), item);
}

// public void Clear() [instance] :1506
void ValueVector::Clear()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "Clear()");
    uPtr(_list)->Clear();
}

// public bool Contains(Fuse.Scripting.V8.Simple.Value item) [instance] :1530
bool ValueVector::Contains(::g::Fuse::Scripting::V8::Simple::Value* item)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "Contains(Fuse.Scripting.V8.Simple.Value)");
    bool ret2;
    return (::g::Uno::Collections::List__Contains_fn(uPtr(_list), item, &ret2), ret2);
}

// public int get_Count() [instance] :1540
int ValueVector::Count()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "get_Count()");
    return uPtr(_list)->Count();
}

// public Uno.Collections.IEnumerator<Fuse.Scripting.V8.Simple.Value> GetEnumerator() [instance] :1549
uObject* ValueVector::GetEnumerator()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "GetEnumerator()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::V8::Simple::Value*> > ret3;
    return uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[0/*Fuse.Scripting.V8.Simple.Value*/]), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_list), &ret3), ret3));
}

// public void Insert(int index, Fuse.Scripting.V8.Simple.Value item) [instance] :1557
void ValueVector::Insert(int index, ::g::Fuse::Scripting::V8::Simple::Value* item)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "Insert(int,Fuse.Scripting.V8.Simple.Value)");
    ::g::Uno::Collections::List__Insert_fn(uPtr(_list), uCRef<int>(index), item);
}

// public Fuse.Scripting.V8.Simple.Value get_Item(int index) [instance] :1575
::g::Fuse::Scripting::V8::Simple::Value* ValueVector::Item(int index)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "get_Item(int)");
    ::g::Fuse::Scripting::V8::Simple::Value* ret5;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_list), uCRef<int>(index), &ret5), ret5);
}

// public bool Remove(Fuse.Scripting.V8.Simple.Value item) [instance] :1522
bool ValueVector::Remove(::g::Fuse::Scripting::V8::Simple::Value* item)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "Remove(Fuse.Scripting.V8.Simple.Value)");
    bool ret4;
    return (::g::Uno::Collections::List__Remove_fn(uPtr(_list), item, &ret4), ret4);
}

// public void RemoveAt(int index) [instance] :1565
void ValueVector::RemoveAt(int index)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "RemoveAt(int)");
    uPtr(_list)->RemoveAt(index);
}

// public ValueVector New() [static] :1498
ValueVector* ValueVector::New1()
{
    ValueVector* obj1 = (ValueVector*)uNew(ValueVector_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
