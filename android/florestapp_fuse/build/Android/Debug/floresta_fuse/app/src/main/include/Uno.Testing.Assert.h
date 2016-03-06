// This file was generated based on '/usr/local/share/uno/Packages/Uno.Testing/0.24.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Testing{struct Assert;}}}

namespace g{
namespace Uno{
namespace Testing{

// public partial static class Assert :167
// {
uClassType* Assert_typeof();
void Assert__IsTrue_fn(bool* val, uString* filePath, int* lineNumber, uString* memberName);

struct Assert : uObject
{
    static int maxStringLength_;
    static int& maxStringLength() { return Assert_typeof()->Init(), maxStringLength_; }

    static void IsTrue(bool val, uString* filePath, int lineNumber, uString* memberName);
};
// }

}}} // ::g::Uno::Testing
