// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct ObjectDisposedException;}}

namespace g{
namespace Uno{

// public sealed class ObjectDisposedException :299
// {
::g::Uno::Exception_type* ObjectDisposedException_typeof();
void ObjectDisposedException__ctor_3_fn(ObjectDisposedException* __this, uString* objectName);
void ObjectDisposedException__New4_fn(uString* objectName, ObjectDisposedException** __retval);

struct ObjectDisposedException : ::g::Uno::Exception
{
    void ctor_3(uString* objectName);
    static ObjectDisposedException* New4(uString* objectName);
};
// }

}} // ::g::Uno
