// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Testing.AbstractRunner.h>
#include <Uno.Testing.IRunner.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}
namespace g{namespace Uno{namespace Testing{struct AssertionFailedException;}}}
namespace g{namespace Uno{namespace Testing{struct Registry;}}}
namespace g{namespace Uno{namespace Testing{struct RemoteRunner;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Uno{
namespace Testing{

// public sealed class RemoteRunner :827
// {
::g::Uno::Testing::AbstractRunner_type* RemoteRunner_typeof();
void RemoteRunner__ctor_1_fn(RemoteRunner* __this, ::g::Uno::Testing::Registry* registry1, uString* prefix1);
void RemoteRunner__AssertionFailed_fn(RemoteRunner* __this, ::g::Uno::Testing::AssertionFailedException* e);
void RemoteRunner__CommandCallback_fn(RemoteRunner* __this, uString* content);
void RemoteRunner__ExceptionThrown_fn(RemoteRunner* __this, ::g::Uno::Exception* e);
void RemoteRunner__Get_fn(RemoteRunner* __this, uString* query);
void RemoteRunner__InternalError_fn(RemoteRunner* __this, ::g::Uno::Exception* e);
void RemoteRunner__New1_fn(::g::Uno::Testing::Registry* registry1, uString* prefix1, RemoteRunner** __retval);
void RemoteRunner__OnDone_fn(RemoteRunner* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request);
void RemoteRunner__OnError_fn(RemoteRunner* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* message);
void RemoteRunner__Start_fn(RemoteRunner* __this);
void RemoteRunner__TestPassed_fn(RemoteRunner* __this);
void RemoteRunner__TestStarting_fn(RemoteRunner* __this, uString* name);

struct RemoteRunner : ::g::Uno::Testing::AbstractRunner
{
    uStrong<uString*> currentTest;
    uStrong< ::g::Uno::Net::Http::HttpMessageHandler*> handler;
    uStrong<uString*> prefix;
    double startTime;

    void ctor_1(::g::Uno::Testing::Registry* registry1, uString* prefix1);
    void CommandCallback(uString* content);
    void Get(uString* query);
    void InternalError(::g::Uno::Exception* e);
    void OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* request);
    void OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* message);
    static RemoteRunner* New1(::g::Uno::Testing::Registry* registry1, uString* prefix1);
};
// }

}}} // ::g::Uno::Testing
