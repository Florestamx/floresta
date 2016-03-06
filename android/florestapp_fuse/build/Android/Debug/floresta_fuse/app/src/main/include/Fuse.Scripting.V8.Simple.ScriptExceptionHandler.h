// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.V8/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptException;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptExceptionHandler;}}}}}
namespace V8Simple { class ScriptExceptionHandlerProxy; }

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal extern class ScriptExceptionHandler :863
// {
struct ScriptExceptionHandler_type : uType
{
    void(*fp_Handle)(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler*, ::g::Fuse::Scripting::V8::Simple::ScriptException*);
};

ScriptExceptionHandler_type* ScriptExceptionHandler_typeof();
void ScriptExceptionHandler__ctor__fn(ScriptExceptionHandler* __this);
void ScriptExceptionHandler__Handle_fn(ScriptExceptionHandler* __this, ::g::Fuse::Scripting::V8::Simple::ScriptException* e);

struct ScriptExceptionHandler : uObject
{
    ::V8Simple::ScriptExceptionHandlerProxy* _impl;

    void ctor_();
    void Handle(::g::Fuse::Scripting::V8::Simple::ScriptException* e) { (((ScriptExceptionHandler_type*)__type)->fp_Handle)(this, e); }
    static void Handle(ScriptExceptionHandler* __this, ::g::Fuse::Scripting::V8::Simple::ScriptException* e) { ScriptExceptionHandler__Handle_fn(__this, e); }
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
