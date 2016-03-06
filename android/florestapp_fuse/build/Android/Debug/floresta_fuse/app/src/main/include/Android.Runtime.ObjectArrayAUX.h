// This file was generated based on '/usr/local/share/uno/Packages/Android/0.24.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.h>
namespace g{namespace Android{namespace Runtime{struct ObjectArrayAUX;}}}

namespace g{
namespace Android{
namespace Runtime{

// internal static extern class ObjectArrayAUX :1169
// {
uClassType* ObjectArrayAUX_typeof();
void ObjectArrayAUX__makeArrayJObject_fn(uString* typeName_, int* length_, jobject* __retval);

struct ObjectArrayAUX : uObject
{
    static jobject makeArrayJObject(uString* typeName_, int length_);
};
// }

}}} // ::g::Android::Runtime
