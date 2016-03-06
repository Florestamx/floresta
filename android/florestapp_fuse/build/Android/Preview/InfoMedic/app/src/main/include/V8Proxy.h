#pragma once
#include <include/V8Simple.h>
#include <Fuse.Scripting.V8.Simple.MessageHandler.h>
#include <Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h>
#include <Fuse.Scripting.V8.Simple.Callback.h>

namespace V8Simple
{

//#if !#{Fuse.Scripting.V8.Simple.MessageHandlerImpl:IsStripped}
class MessageHandlerProxy: public MessageHandler
{
public:
	MessageHandlerProxy(::g::Fuse::Scripting::V8::Simple::MessageHandler* unoObject);
	virtual void Handle(const ::V8Simple::String* message) override;
private:
	::g::Fuse::Scripting::V8::Simple::MessageHandler* _unoObject;
};
//#endif

//#if !#{Fuse.Scripting.V8.Simple.ScriptExceptionHandler:IsStripped}
class ScriptExceptionHandlerProxy: public ScriptExceptionHandler
{
public:
	ScriptExceptionHandlerProxy(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* unoObject);
	virtual void Handle(const ::V8Simple::ScriptException& e) override;
private:
	::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* _unoObject;
};
//#endif

//#if !#{Fuse.Scripting.V8.Simple.CallbackImpl:IsStripped}
class CallbackProxy: public Callback
{
public:
	CallbackProxy(::g::Fuse::Scripting::V8::Simple::Callback* unoObject);
	virtual Value* Call(V8Simple::UniqueValueVector* args) override;
	virtual void Retain() override;
	virtual void Release() override;
	virtual void Delete() override;
private:
	::g::Fuse::Scripting::V8::Simple::Callback* _unoObject;
};
//#endif

} // namespace V8Simple
