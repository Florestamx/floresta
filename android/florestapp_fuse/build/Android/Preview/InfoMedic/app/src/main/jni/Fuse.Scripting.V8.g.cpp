// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.V8.Array.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Scripting.V8.Debugger.Connected.h>
#include <Fuse.Scripting.V8.Debugger.ConnectedMessageHandler.h>
#include <Fuse.Scripting.V8.Debugger.Connecting.h>
#include <Fuse.Scripting.V8.Debugger.h>
#include <Fuse.Scripting.V8.Debugger.State.h>
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
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.SocketShutdown.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
static uString* STRINGS[12];
static uType* TYPES[39];

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(7)
// ----------------------------------------------------------------

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
    uStackFrame __("Fuse.Scripting.V8.Array", "Equals(Fuse.Scripting.Array)");
    Array* that = uAs<Array*>(a, Array_typeof());

    if (that == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_array)->Equals2(uPtr(that)->_array), void();
}

// public override sealed int GetHashCode() :46
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_array)), void();
}

// public override sealed object get_Item(int index) :18
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "get_Item(int)");
    int index_ = *index;
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(uPtr(__this->_array)->Get(index_)), void();
}

// public override sealed void set_Item(int index, object value) :22
void Array__set_Item_fn(Array* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "set_Item(int,object)");
    int index_ = *index;
    uPtr(__this->_array)->Set(index_, ::g::Fuse::Scripting::V8::Marshaller::Unwrap(value));
}

// public override sealed int get_Length() :30
void Array__get_Length_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "get_Length()");
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
    uStackFrame __("Fuse.Scripting.V8.Array", ".ctor(Fuse.Scripting.V8.Simple.Array)");
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

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(160)
// ------------------------------------------------------------------

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
    uStackFrame __("Fuse.Scripting.V8.Marshaller.CallbackWrapper", ".ctor(Fuse.Scripting.Callback)");
    _callback = callback;
}

// public Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.UniqueValueVector args) [instance] :169
::g::Fuse::Scripting::V8::Simple::Value* Marshaller__CallbackWrapper::Call(::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller.CallbackWrapper", "Call(Fuse.Scripting.V8.Simple.UniqueValueVector)");
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

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(408)
// ------------------------------------------------------------------

// private sealed class Debugger.Connected :408
// {
Debugger__Connected_type* Debugger__Connected_typeof()
{
    static uSStrong<Debugger__Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger__Connected);
    options.TypeSize = sizeof(Debugger__Connected_type);
    type = (Debugger__Connected_type*)uClassType::New("Fuse.Scripting.V8.Debugger.Connected", options);
    type->interface0.fp_Run = (void(*)(uObject*, uObject**))Debugger__Connected__Run_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Debugger__Connected__Dispose_fn;
    ::STRINGS[0] = uString::Const("DEBUG_V8: Connection to a debugger agent established.");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Scripting.V8\\0.24.7\\$.uno");
    ::STRINGS[2] = uString::Const("Debugger could not read enough");
    ::TYPES[1] = ::g::Fuse::Scripting::V8::Debugger_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::V8::Debugger__State_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::V8::Debugger__State_typeof(), offsetof(Debugger__Connected_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Debugger_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _parent), 0,
        ::g::Uno::IO::TextReader_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _reader), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _reconnect), 0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _socket), 0);
    return type;
}

// public Connected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) :415
void Debugger__Connected__ctor__fn(Debugger__Connected* __this, ::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader)
{
    __this->ctor_(parent, socket, reader);
}

// public void Dispose() :495
void Debugger__Connected__Dispose_fn(Debugger__Connected* __this)
{
    __this->Dispose();
}

// public Connected New(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) :415
void Debugger__Connected__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader, Debugger__Connected** __retval)
{
    *__retval = Debugger__Connected::New1(parent, socket, reader);
}

// private bool ReadExactly(char[] buffer, int start, int count) :423
void Debugger__Connected__ReadExactly_fn(Debugger__Connected* __this, uArray* buffer, int* start, int* count, bool* __retval)
{
    *__retval = __this->ReadExactly(buffer, *start, *count);
}

// public void Reconnect() :490
void Debugger__Connected__Reconnect_fn(Debugger__Connected* __this)
{
    __this->Reconnect();
}

// public Fuse.Scripting.V8.Debugger.State Run() :442
void Debugger__Connected__Run_fn(Debugger__Connected* __this, uObject** __retval)
{
    *__retval = __this->Run();
}

// public Connected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) [instance] :415
void Debugger__Connected::ctor_(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", ".ctor(Fuse.Scripting.V8.Debugger,Uno.Net.Sockets.Socket,Uno.IO.TextReader)");
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[0/*"DEBUG_V8: C...*/], 1, ::STRINGS[1/*"C:\\Program...*/], 417);
    _parent = parent;
    _socket = socket;
    _reader = reader;
}

// public void Dispose() [instance] :495
void Debugger__Connected::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", "Dispose()");
    uPtr(_reader)->Dispose();

    try
    {
        uPtr(_socket)->Shutdown(2);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    uPtr(_socket)->Close();
}

// private bool ReadExactly(char[] buffer, int start, int count) [instance] :423
bool Debugger__Connected::ReadExactly(uArray* buffer, int start, int count)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", "ReadExactly(char[],int,int)");

    if (count == 0)
        return true;

    int read = 0;

    do
    {
        read = uPtr(_reader)->Read1(buffer, start, count);
        start = start + read;
        count = count - read;
    }
    while ((read > 0) && (count > 0));

    return count == 0;
}

// public void Reconnect() [instance] :490
void Debugger__Connected::Reconnect()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", "Reconnect()");
    _reconnect = true;
}

// public Fuse.Scripting.V8.Debugger.State Run() [instance] :442
uObject* Debugger__Connected::Run()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", "Run()");

    if (_reconnect)
    {
        Dispose();
        ::g::Uno::Threading::Thread::Sleep(500);
        return ::g::Fuse::Scripting::V8::Debugger::Connect(_parent);
    }

    try
    {
        uString* line = uPtr(_reader)->ReadLine();
        int i = ::g::Uno::String::op_Equality(line, NULL) ? -1 : ::g::Uno::String::IndexOf1(uPtr(line), ::g::Fuse::Scripting::V8::Debugger::_contentLengthString(), 0);

        if (i >= 0)
        {
            int contentLength = ::g::Uno::Int::Parse(::g::Uno::String::Substring(uPtr(line), i + uPtr(::g::Fuse::Scripting::V8::Debugger::_contentLengthString())->Length()));

            if (contentLength > 0)
            {
                uPtr(_reader)->ReadLine();
                uArray* buffer = uArray::New(::TYPES[3/*char[]*/], contentLength);

                if (!ReadExactly(buffer, 0, contentLength))
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Debugger co...*/]));

                uString* message = uString::CharArray(buffer);
                ::g::Fuse::Scripting::V8::Simple::Context::SendDebugCommand(::g::Fuse::Scripting::V8::Simple::String::New5(message));
                ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_parent)->_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)::g::Fuse::Scripting::V8::Simple::Context__ProcessDebugMessages_fn));
            }
        }
        else
        {
            if (::g::Uno::String::IsNullOrEmpty(line))
                Reconnect();
            else
                ::g::Uno::Threading::Thread::Sleep(10);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Reconnect();
    }

    return (uObject*)this;
}

// public Connected New(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) [static] :415
Debugger__Connected* Debugger__Connected::New1(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader)
{
    Debugger__Connected* obj1 = (Debugger__Connected*)uNew(Debugger__Connected_typeof());
    obj1->ctor_(parent, socket, reader);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(382)
// ------------------------------------------------------------------

// private sealed class Debugger.ConnectedMessageHandler :382
// {
uType* Debugger__ConnectedMessageHandler_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Debugger__ConnectedMessageHandler);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Debugger.ConnectedMessageHandler", options);
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Debugger__Connected_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__ConnectedMessageHandler, _state), 0,
        ::g::Uno::IO::TextWriter_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__ConnectedMessageHandler, _writer), 0);
    return type;
}

// public ConnectedMessageHandler(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) :387
void Debugger__ConnectedMessageHandler__ctor__fn(Debugger__ConnectedMessageHandler* __this, ::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    __this->ctor_(state, writer);
}

// public void MessageHandler(string message) :393
void Debugger__ConnectedMessageHandler__MessageHandler_fn(Debugger__ConnectedMessageHandler* __this, uString* message)
{
    __this->MessageHandler(message);
}

// public ConnectedMessageHandler New(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) :387
void Debugger__ConnectedMessageHandler__New1_fn(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer, Debugger__ConnectedMessageHandler** __retval)
{
    *__retval = Debugger__ConnectedMessageHandler::New1(state, writer);
}

// public ConnectedMessageHandler(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) [instance] :387
void Debugger__ConnectedMessageHandler::ctor_(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.ConnectedMessageHandler", ".ctor(Fuse.Scripting.V8.Debugger.Connected,Uno.IO.TextWriter)");
    _state = state;
    _writer = writer;
}

// public void MessageHandler(string message) [instance] :393
void Debugger__ConnectedMessageHandler::MessageHandler(uString* message)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.ConnectedMessageHandler", "MessageHandler(string)");

    try
    {
        uPtr(_writer)->Write9(::g::Fuse::Scripting::V8::Debugger::AddHeader(message));
        uPtr(_writer)->Flush();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(_state)->Reconnect();
    }
}

// public ConnectedMessageHandler New(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) [static] :387
Debugger__ConnectedMessageHandler* Debugger__ConnectedMessageHandler::New1(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    Debugger__ConnectedMessageHandler* obj1 = (Debugger__ConnectedMessageHandler*)uNew(Debugger__ConnectedMessageHandler_typeof());
    obj1->ctor_(state, writer);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(312)
// ------------------------------------------------------------------

// private sealed class Debugger.Connecting :312
// {
Debugger__Connecting_type* Debugger__Connecting_typeof()
{
    static uSStrong<Debugger__Connecting_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger__Connecting);
    options.TypeSize = sizeof(Debugger__Connecting_type);
    type = (Debugger__Connecting_type*)uClassType::New("Fuse.Scripting.V8.Debugger.Connecting", options);
    type->interface0.fp_Run = (void(*)(uObject*, uObject**))Debugger__Connecting__Run_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Debugger__Connecting__Dispose_fn;
    ::TYPES[7] = ::g::Uno::Net::IPAddress_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::V8::Debugger_typeof();
    ::TYPES[8] = ::g::Uno::Net::EndPoint_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::V8::Debugger__State_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::V8::Debugger__State_typeof(), offsetof(Debugger__Connecting_type, interface0));
    type->SetFields(0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connecting, _listenSocket), 0,
        ::g::Fuse::Scripting::V8::Debugger_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connecting, _parent), 0);
    return type;
}

// public Connecting(Fuse.Scripting.V8.Debugger parent) :317
void Debugger__Connecting__ctor__fn(Debugger__Connecting* __this, ::g::Fuse::Scripting::V8::Debugger* parent)
{
    __this->ctor_(parent);
}

// public void Dispose() :342
void Debugger__Connecting__Dispose_fn(Debugger__Connecting* __this)
{
    __this->Dispose();
}

// public Connecting New(Fuse.Scripting.V8.Debugger parent) :317
void Debugger__Connecting__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, Debugger__Connecting** __retval)
{
    *__retval = Debugger__Connecting::New1(parent);
}

// public Fuse.Scripting.V8.Debugger.State Run() :322
void Debugger__Connecting__Run_fn(Debugger__Connecting* __this, uObject** __retval)
{
    *__retval = __this->Run();
}

// public Connecting(Fuse.Scripting.V8.Debugger parent) [instance] :317
void Debugger__Connecting::ctor_(::g::Fuse::Scripting::V8::Debugger* parent)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connecting", ".ctor(Fuse.Scripting.V8.Debugger)");
    _parent = parent;
}

// public void Dispose() [instance] :342
void Debugger__Connecting::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connecting", "Dispose()");

    if (_listenSocket != NULL)
    {
        try
        {
            uPtr(_listenSocket)->Shutdown(2);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
        }

        uPtr(_listenSocket)->Close();
        _listenSocket = NULL;
    }
}

// public Fuse.Scripting.V8.Debugger.State Run() [instance] :322
uObject* Debugger__Connecting::Run()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connecting", "Run()");

    try
    {
        _listenSocket = ::g::Uno::Net::Sockets::Socket::Create(2, 1, 6);
        ::g::Uno::Net::IPEndPoint* endPoint = ::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Any(), uPtr(_parent)->_port);
        uPtr(_listenSocket)->Bind(endPoint);
        uPtr(_listenSocket)->Listen(100);
        ::g::Uno::Net::Sockets::Socket* communicationSocket = uPtr(_listenSocket)->Accept();
        Dispose();
        return ::g::Fuse::Scripting::V8::Debugger::ToConnected(_parent, communicationSocket);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Dispose();
        ::g::Uno::Threading::Thread::Sleep(500);
        return (uObject*)this;
    }
}

// public Connecting New(Fuse.Scripting.V8.Debugger parent) [static] :317
Debugger__Connecting* Debugger__Connecting::New1(::g::Fuse::Scripting::V8::Debugger* parent)
{
    Debugger__Connecting* obj1 = (Debugger__Connecting*)uNew(Debugger__Connecting_typeof());
    obj1->ctor_(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(63)
// -----------------------------------------------------------------

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
    ::TYPES[9] = ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_typeof();
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::ScriptException_typeof());
    ::TYPES[11] = ::g::Fuse::Scripting::V8::Simple::MessageHandler_typeof();
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[13] = ::g::Fuse::Scripting::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Context_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Scripting::V8::Simple::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _context), 0,
        ::g::Fuse::Scripting::V8::Simple::MessageHandler_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _runtimeExceptionHandler), 0,
        ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _scriptExceptionHandler), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Context__New1_fn, 0, true, Context_typeof(), 1, ::g::Uno::Threading::IDispatcher_typeof()));
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
    uStackFrame __("Fuse.Scripting.V8.Context", "Dispose()");
    uPtr(__this->_context)->Dispose();
}

// public override sealed object Evaluate(string fileName, string code) :103
void Context__Evaluate1_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Context", "Evaluate(string,string)");
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(uPtr(__this->_context)->Evaluate(::g::Fuse::Scripting::V8::Simple::String::New5(fileName), ::g::Fuse::Scripting::V8::Simple::String::New5(code))), void();
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :110
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Context", "get_GlobalObject()");
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
    uStackFrame __("Fuse.Scripting.V8.Context", ".ctor(Uno.Threading.IDispatcher)");
    ctor_(ownerThread);
    _scriptExceptionHandler = ::g::Fuse::Scripting::V8::Simple::DelegateScriptExceptionHandler::New2(uDelegate::New(::TYPES[10/*Uno.Action<Fuse.Scripting.V8.Simple.ScriptException>*/], (void*)Context__OnScriptException_fn));
    _runtimeExceptionHandler = ::g::Fuse::Scripting::V8::Simple::DelegateMessageHandler::New2(uDelegate::New(::TYPES[12/*Uno.Action<string>*/], (void*)Context__OnRuntimeException_fn));
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
    uStackFrame __("Fuse.Scripting.V8.Context", "OnRuntimeException(string)");
    Context_typeof()->Init();
    U_THROW(::g::Uno::Exception::New2(message));
}

// private static void OnScriptException(Fuse.Scripting.V8.Simple.ScriptException e) [static] :87
void Context::OnScriptException(::g::Fuse::Scripting::V8::Simple::ScriptException* e)
{
    uStackFrame __("Fuse.Scripting.V8.Context", "OnScriptException(Fuse.Scripting.V8.Simple.ScriptException)");
    Context_typeof()->Init();
    U_THROW(::g::Fuse::Scripting::ScriptException::New4(uPtr(uPtr(e)->GetName())->GetValue(), uPtr(uPtr(e)->GetErrorMessage())->GetValue(), uPtr(uPtr(e)->GetFileName())->GetValue(), uPtr(e)->GetLineNumber(), uPtr(uPtr(e)->GetSourceLine())->GetValue(), uPtr(uPtr(e)->GetStackTrace())->GetValue()));
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(224)
// ------------------------------------------------------------------

// internal sealed extern class Debugger :224
// {
// static Debugger() :224
static void Debugger__cctor__fn(uType* __type)
{
    Debugger::_contentLengthString_ = ::STRINGS[3/*"Content-Len...*/];
}

Debugger_type* Debugger_typeof()
{
    static uSStrong<Debugger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger);
    options.TypeSize = sizeof(Debugger_type);
    type = (Debugger_type*)uClassType::New("Fuse.Scripting.V8.Debugger", options);
    type->fp_cctor_ = Debugger__cctor__fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Debugger__Dispose_fn;
    ::STRINGS[3] = uString::Const("Content-Length: ");
    ::STRINGS[4] = uString::Const("\r\n"
        "\r\n"
        "");
    ::STRINGS[5] = uString::Const("DEBUG_V8: Waiting for a debugger agent to connect on port ");
    ::STRINGS[6] = uString::Const("...");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Scripting.V8\\0.24.7\\$.uno");
    ::STRINGS[7] = uString::Const("Type: connect\r\n"
        "V8-Version: ");
    ::STRINGS[8] = uString::Const("\r\n"
        "Protocol-Version: 1\r\n"
        "Embedding-Host: Fuse\r\n"
        "Content-Length: 0\r\n"
        "\r\n"
        "");
    ::TYPES[14] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[11] = ::g::Fuse::Scripting::V8::Simple::MessageHandler_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[15] = uObject_typeof();
    ::TYPES[16] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[6] = Debugger__State_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[18] = ::g::Uno::IO::Stream_typeof();
    ::TYPES[19] = ::g::Uno::IO::TextReader_typeof();
    ::TYPES[20] = ::g::Uno::IO::TextWriter_typeof();
    ::TYPES[21] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Debugger_type, interface0));
    type->SetFields(0,
        Debugger__State_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _currentState), 0,
        ::g::Fuse::Scripting::V8::Simple::MessageHandler_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _debugMessageHandler), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _dispatcher), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Scripting::V8::Debugger, _messageHandler), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Scripting::V8::Debugger, _offlineMessages), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _port), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _shutdown), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _stateMachine), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Scripting::V8::Debugger::_contentLengthString_, uFieldFlagsStatic);
    return type;
}

// public Debugger(Uno.Threading.IDispatcher dispatcher, int port) :237
void Debugger__ctor__fn(Debugger* __this, uObject* dispatcher, int* port)
{
    __this->ctor_(dispatcher, *port);
}

// private static string AddHeader(string body) :306
void Debugger__AddHeader_fn(uString* body, uString** __retval)
{
    *__retval = Debugger::AddHeader(body);
}

// private static Fuse.Scripting.V8.Debugger.State Connect(Fuse.Scripting.V8.Debugger parent) :294
void Debugger__Connect_fn(Debugger* parent, uObject** __retval)
{
    *__retval = Debugger::Connect(parent);
}

// private void DisconnectedMessageHandler(string message) :301
void Debugger__DisconnectedMessageHandler_fn(Debugger* __this, uString* message)
{
    __this->DisconnectedMessageHandler(message);
}

// public void Dispose() :276
void Debugger__Dispose_fn(Debugger* __this)
{
    __this->Dispose();
}

// private void MessageHandler(string message) :263
void Debugger__MessageHandler_fn(Debugger* __this, uString* message)
{
    __this->MessageHandler(message);
}

// public Debugger New(Uno.Threading.IDispatcher dispatcher, int port) :237
void Debugger__New1_fn(uObject* dispatcher, int* port, Debugger** __retval)
{
    *__retval = Debugger::New1(dispatcher, *port);
}

// private void SetMessageHandler(Uno.Action<string> handler) :271
void Debugger__SetMessageHandler_fn(Debugger* __this, uDelegate* handler)
{
    __this->SetMessageHandler(handler);
}

// private void StateMachine() :254
void Debugger__StateMachine_fn(Debugger* __this)
{
    __this->StateMachine();
}

// private static Fuse.Scripting.V8.Debugger.State ToConnected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket communicationSocket) :357
void Debugger__ToConnected_fn(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket, uObject** __retval)
{
    *__retval = Debugger::ToConnected(parent, communicationSocket);
}

uSStrong<uString*> Debugger::_contentLengthString_;

// public Debugger(Uno.Threading.IDispatcher dispatcher, int port) [instance] :237
void Debugger::ctor_(uObject* dispatcher, int port)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", ".ctor(Uno.Threading.IDispatcher,int)");
    _dispatcher = dispatcher;
    _port = port;
    _offlineMessages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[14/*Uno.Collections.List<string>*/]));
    SetMessageHandler(uDelegate::New(::TYPES[12/*Uno.Action<string>*/], (void*)Debugger__DisconnectedMessageHandler_fn, this));
    _debugMessageHandler = ::g::Fuse::Scripting::V8::Simple::DelegateMessageHandler::New2(uDelegate::New(::TYPES[12/*Uno.Action<string>*/], (void*)Debugger__MessageHandler_fn, this));
    ::g::Fuse::Scripting::V8::Simple::Context::SetDebugMessageHandler(_debugMessageHandler);
    _stateMachine = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)Debugger__StateMachine_fn, this));
    _currentState = Debugger::Connect(this);
    uPtr(_stateMachine)->Start();
}

// private void DisconnectedMessageHandler(string message) [instance] :301
void Debugger::DisconnectedMessageHandler(uString* message)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "DisconnectedMessageHandler(string)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_offlineMessages), Debugger::AddHeader(message));
}

// public void Dispose() [instance] :276
void Debugger::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "Dispose()");
    ::g::Fuse::Scripting::V8::Simple::Context::SetDebugMessageHandler(NULL);
    _shutdown = true;

    if (!uPtr(_stateMachine)->Join1(500))
        Debugger__State::Dispose(uInterface(uPtr(_currentState), ::TYPES[6/*Fuse.Scripting.V8.Debugger.State*/]));
}

// private void MessageHandler(string message) [instance] :263
void Debugger::MessageHandler(uString* message)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "MessageHandler(string)");

    if (::g::Uno::Delegate::op_Inequality(_messageHandler, NULL))
        uPtr(_messageHandler)->InvokeVoid(message);
}

// private void SetMessageHandler(Uno.Action<string> handler) [instance] :271
void Debugger::SetMessageHandler(uDelegate* handler)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "SetMessageHandler(Uno.Action<string>)");
    _messageHandler = handler;
}

// private void StateMachine() [instance] :254
void Debugger::StateMachine()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "StateMachine()");

    while (!_shutdown)
        _currentState = Debugger__State::Run(uInterface(uPtr(_currentState), ::TYPES[6/*Fuse.Scripting.V8.Debugger.State*/]));

    Debugger__State::Dispose(uInterface(uPtr(_currentState), ::TYPES[6/*Fuse.Scripting.V8.Debugger.State*/]));
}

// private static string AddHeader(string body) [static] :306
uString* Debugger::AddHeader(uString* body)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "AddHeader(string)");
    Debugger_typeof()->Init();
    uString* header = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(Debugger::_contentLengthString(), uBox<int>(::TYPES[22/*int*/], uPtr(::g::Uno::Text::Utf8::GetBytes(body))->Length())), ::STRINGS[4/*"\r\n\r\n"*/]);
    return ::g::Uno::String::op_Addition2(header, body);
}

// private static Fuse.Scripting.V8.Debugger.State Connect(Fuse.Scripting.V8.Debugger parent) [static] :294
uObject* Debugger::Connect(Debugger* parent)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "Connect(Fuse.Scripting.V8.Debugger)");
    Debugger_typeof()->Init();
    uPtr(parent)->SetMessageHandler(uDelegate::New(::TYPES[12/*Uno.Action<string>*/], (void*)Debugger__DisconnectedMessageHandler_fn, uPtr(parent)));
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[5/*"DEBUG_V8: W...*/], uBox<int>(::TYPES[22/*int*/], parent->_port)), ::STRINGS[6/*"..."*/]), 1, ::STRINGS[1/*"C:\\Program...*/], 297);
    return (uObject*)Debugger__Connecting::New1(parent);
}

// public Debugger New(Uno.Threading.IDispatcher dispatcher, int port) [static] :237
Debugger* Debugger::New1(uObject* dispatcher, int port)
{
    Debugger* obj2 = (Debugger*)uNew(Debugger_typeof());
    obj2->ctor_(dispatcher, port);
    return obj2;
}

// private static Fuse.Scripting.V8.Debugger.State ToConnected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket communicationSocket) [static] :357
uObject* Debugger::ToConnected(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "ToConnected(Fuse.Scripting.V8.Debugger,Uno.Net.Sockets.Socket)");
    Debugger_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret3;
    ::g::Uno::Net::Sockets::NetworkStream* stream = ::g::Uno::Net::Sockets::NetworkStream::New1(communicationSocket);
    ::g::Uno::IO::StreamReader* reader = ::g::Uno::IO::StreamReader::New1(stream);
    ::g::Uno::IO::StreamWriter* writer = ::g::Uno::IO::StreamWriter::New1(stream);
    Debugger__Connected* state = Debugger__Connected::New1(parent, communicationSocket, reader);
    uPtr(parent)->SetMessageHandler(uDelegate::New(::TYPES[12/*Uno.Action<string>*/], (void*)Debugger__ConnectedMessageHandler__MessageHandler_fn, Debugger__ConnectedMessageHandler::New1(state, writer)));
    writer->Write9(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*"Type: conne...*/], ::g::Fuse::Scripting::V8::Simple::Context::GetVersion()), ::STRINGS[8/*"\r\nProtoco...*/]));

    for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(parent->_offlineMessages), &ret3), ret3); enum1.MoveNext(::TYPES[21/*Uno.Collections.List<string>.Enumerator*/]); )
    {
        uString* message = enum1.Current(::TYPES[21/*Uno.Collections.List<string>.Enumerator*/]);
        uPtr(writer)->Write9(message);
    }

    parent->_offlineMessages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[14/*Uno.Collections.List<string>*/]));
    writer->Flush();
    return (uObject*)state;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(516)
// ------------------------------------------------------------------

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
    ::TYPES[13] = ::g::Fuse::Scripting::Object_typeof();
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
    uStackFrame __("Fuse.Scripting.V8.Function", "Call(object[])");
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(uPtr(__this->_function)->Call(::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(args))), void();
}

// public override sealed Fuse.Scripting.Object Construct(object[] args) :530
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "Construct(object[])");
    return *__retval = ::g::Fuse::Scripting::V8::Object::New1(uPtr(__this->_function)->Construct(::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(args))), void();
}

// public override sealed bool Equals(Fuse.Scripting.Function f) :535
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "Equals(Fuse.Scripting.Function)");
    Function* that = uAs<Function*>(f, Function_typeof());

    if (that == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_function)->Equals2(uPtr(that)->_function), void();
}

// public override sealed int GetHashCode() :545
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "GetHashCode()");
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
    uStackFrame __("Fuse.Scripting.V8.Function", ".ctor(Fuse.Scripting.V8.Simple.Function)");
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

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(126)
// ------------------------------------------------------------------

// internal static extern class Marshaller :126
// {
uClassType* Marshaller_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Marshaller", options);
    ::STRINGS[9] = uString::Const("Unhandled type in V8 marshaller: ");
    ::STRINGS[10] = uString::Const(":");
    ::STRINGS[11] = uString::Const("V8 marshaller: The impossible happened.");
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[23] = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    ::TYPES[24] = ::g::Uno::Double_typeof();
    ::TYPES[25] = ::g::Uno::Float_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::V8::Object_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::V8::Array_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[29] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::UniqueValueVector_typeof(), ::g::Fuse::Scripting::V8::Simple::Value_typeof());
    ::TYPES[15] = uObject_typeof();
    ::TYPES[30] = uObject_typeof()->Array();
    ::TYPES[31] = ::g::Fuse::Scripting::V8::Simple::Int_typeof();
    ::TYPES[32] = ::g::Fuse::Scripting::V8::Simple::Double_typeof();
    ::TYPES[33] = ::g::Fuse::Scripting::V8::Simple::String_typeof();
    ::TYPES[34] = ::g::Fuse::Scripting::V8::Simple::Bool_typeof();
    ::TYPES[35] = ::g::Fuse::Scripting::V8::Simple::Object_typeof();
    ::TYPES[36] = ::g::Fuse::Scripting::V8::Simple::Array_typeof();
    ::TYPES[37] = ::g::Fuse::Scripting::V8::Simple::Function_typeof();
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
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "Unwrap(object)");

    if (obj == NULL)
        return NULL;

    if (uIs(obj, ::TYPES[22/*int*/]))
        return ::g::Fuse::Scripting::V8::Simple::Int::New5(uUnbox<int>(::TYPES[22/*int*/], obj));

    if (uIs(obj, ::TYPES[24/*double*/]))
        return ::g::Fuse::Scripting::V8::Simple::Double::New4(uUnbox<double>(::TYPES[24/*double*/], obj));

    if (uIs(obj, ::TYPES[25/*float*/]))
        return ::g::Fuse::Scripting::V8::Simple::Double::New4((double)uUnbox<float>(::TYPES[25/*float*/], obj));

    if (uIs(obj, ::TYPES[2/*string*/]))
        return ::g::Fuse::Scripting::V8::Simple::String::New5(uCast<uString*>(obj, ::TYPES[2/*string*/]));

    if (uIs(obj, ::TYPES[4/*bool*/]))
        return ::g::Fuse::Scripting::V8::Simple::Bool::New4(uUnbox<bool>(::TYPES[4/*bool*/], obj));

    if (uIs(obj, ::TYPES[26/*Fuse.Scripting.V8.Object*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::V8::Object*>(obj, ::TYPES[26/*Fuse.Scripting.V8.Object*/]))->_object;

    if (uIs(obj, ::TYPES[27/*Fuse.Scripting.V8.Array*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::V8::Array*>(obj, ::TYPES[27/*Fuse.Scripting.V8.Array*/]))->_array;

    if (uIs(obj, ::TYPES[28/*Fuse.Scripting.V8.Function*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::V8::Function*>(obj, ::TYPES[28/*Fuse.Scripting.V8.Function*/]))->_function;

    if (uIs(obj, ::TYPES[0/*Fuse.Scripting.Callback*/]))
        return ::g::Fuse::Scripting::V8::Simple::DelegateCallback::New5(uDelegate::New(::TYPES[29/*Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value>*/], (void*)Marshaller__CallbackWrapper__Call_fn, Marshaller__CallbackWrapper::New1(uCast<uDelegate*>(obj, ::TYPES[0/*Fuse.Scripting.Callback*/]))));

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[9/*"Unhandled t...*/], ::g::Uno::Object::GetType(uPtr(obj))), ::STRINGS[10/*":"*/]), obj)));
}

// internal static Fuse.Scripting.V8.Simple.ValueVector UnwrapArray(object[] objs) [static] :175
::g::Fuse::Scripting::V8::Simple::ValueVector* Marshaller::UnwrapArray(uArray* objs)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "UnwrapArray(object[])");
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
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "Wrap(Fuse.Scripting.V8.Simple.Value)");

    if (obj == NULL)
        return NULL;

    switch (uPtr(obj)->GetValueType())
    {
        case 0:
            return uBox<int>(::TYPES[22/*int*/], uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::Int*>(obj, ::TYPES[31/*Fuse.Scripting.V8.Simple.Int*/]))->GetValue());
        case 1:
            return uBox(::TYPES[24/*double*/], uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::Double*>(obj, ::TYPES[32/*Fuse.Scripting.V8.Simple.Double*/]))->GetValue());
        case 2:
            return uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::String*>(obj, ::TYPES[33/*Fuse.Scripting.V8.Simple.String*/]))->GetValue();
        case 3:
            return uBox(::TYPES[4/*bool*/], uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::Bool*>(obj, ::TYPES[34/*Fuse.Scripting.V8.Simple.Bool*/]))->GetValue());
        case 4:
            return ::g::Fuse::Scripting::V8::Object::New1(uCast< ::g::Fuse::Scripting::V8::Simple::Object*>(obj, ::TYPES[35/*Fuse.Scripting.V8.Simple.Object*/]));
        case 5:
            return ::g::Fuse::Scripting::V8::Array::New1(uCast< ::g::Fuse::Scripting::V8::Simple::Array*>(obj, ::TYPES[36/*Fuse.Scripting.V8.Simple.Array*/]));
        case 6:
            return ::g::Fuse::Scripting::V8::Function::New1(uCast< ::g::Fuse::Scripting::V8::Simple::Function*>(obj, ::TYPES[37/*Fuse.Scripting.V8.Simple.Function*/]));
        case 7:
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"V8 marshall...*/]));
    }
}

// internal static object[] WrapUniqueValueVector(Fuse.Scripting.V8.Simple.UniqueValueVector vec) [static] :196
uArray* Marshaller::WrapUniqueValueVector(::g::Fuse::Scripting::V8::Simple::UniqueValueVector* vec)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "WrapUniqueValueVector(Fuse.Scripting.V8.Simple.UniqueValueVector)");
    int len = uPtr(vec)->Length();
    uArray* wrappedVec = uArray::New(::TYPES[30/*object[]*/], len);

    for (int i = 0; i < len; ++i)
        uPtr(wrappedVec)->Strong<uObject*>(i) = Marshaller::Wrap(uPtr(vec)->Get(i));

    return wrappedVec;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(561)
// ------------------------------------------------------------------

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
    ::TYPES[28] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[38] = ::g::Uno::String_typeof()->Array();
    ::TYPES[33] = ::g::Fuse::Scripting::V8::Simple::String_typeof();
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
    uStackFrame __("Fuse.Scripting.V8.Object", "CallMethod(string,object[])");
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(uPtr(__this->_object)->CallMethod(::g::Fuse::Scripting::V8::Simple::String::New5(name), ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(args))), void();
}

// public override sealed bool ContainsKey(string key) :607
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "ContainsKey(string)");
    return *__retval = uPtr(__this->_object)->ContainsKey(::g::Fuse::Scripting::V8::Simple::String::New5(key)), void();
}

// public override sealed bool Equals(Fuse.Scripting.Object o) :612
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "Equals(Fuse.Scripting.Object)");
    Object* that = uAs<Object*>(o, Object_typeof());

    if (that == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->_object)->Equals2(uPtr(that)->_object), void();
}

// public override sealed int GetHashCode() :622
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_object)), void();
}

// public override sealed bool InstanceOf(Fuse.Scripting.Function type) :597
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "InstanceOf(Fuse.Scripting.Function)");
    return *__retval = uPtr(__this->_object)->InstanceOf(uPtr(uCast< ::g::Fuse::Scripting::V8::Function*>(type, ::TYPES[28/*Fuse.Scripting.V8.Function*/]))->_function), void();
}

// public override sealed object get_Item(string key) :572
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "get_Item(string)");
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(uPtr(__this->_object)->Get(::g::Fuse::Scripting::V8::Simple::String::New5(key))), void();
}

// public override sealed void set_Item(string key, object value) :576
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "set_Item(string,object)");
    uPtr(__this->_object)->Set(::g::Fuse::Scripting::V8::Simple::String::New5(key), ::g::Fuse::Scripting::V8::Marshaller::Unwrap(value));
}

// public override sealed string[] get_Keys() :584
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "get_Keys()");
    ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* keys = uPtr(__this->_object)->Keys();
    int len = uPtr(keys)->Length();
    uArray* result = uArray::New(::TYPES[38/*string[]*/], len);

    for (int i = 0; i < len; ++i)
        uPtr(result)->Strong<uString*>(i) = uPtr(uAs< ::g::Fuse::Scripting::V8::Simple::String*>(uPtr(keys)->Get(i), ::TYPES[33/*Fuse.Scripting.V8.Simple.String*/]))->GetValue();

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
    uStackFrame __("Fuse.Scripting.V8.Object", ".ctor(Fuse.Scripting.V8.Simple.Object)");
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

// ..\..\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno(288)
// ------------------------------------------------------------------

// private abstract interface Debugger.State :288
// {
uInterfaceType* Debugger__State_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.V8.Debugger.State", 0, 0);
    return type;
}
// }

}}}} // ::g::Fuse::Scripting::V8
