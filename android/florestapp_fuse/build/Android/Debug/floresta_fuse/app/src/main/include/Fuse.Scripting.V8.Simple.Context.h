// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.V8/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.ContextImpl.h>
#include <include/V8Simple.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Context;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct MessageHandler;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Object;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptExceptionHandler;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct String;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Value;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class Context :649
// {
struct Context_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Context_type* Context_typeof();
void Context__ctor__fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler);
void Context__Dispose_fn(Context* __this);
void Context__Evaluate_fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::String* fileName, ::g::Fuse::Scripting::V8::Simple::String* code, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void Context__GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::Object** __retval);
void Context__New1_fn(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler, Context** __retval);

struct Context : uObject
{
    ::V8Simple::Context* _contextImpl;

    void ctor_(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler);
    void Dispose();
    ::g::Fuse::Scripting::V8::Simple::Value* Evaluate(::g::Fuse::Scripting::V8::Simple::String* fileName, ::g::Fuse::Scripting::V8::Simple::String* code);
    ::g::Fuse::Scripting::V8::Simple::Object* GlobalObject();
    static Context* New1(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
