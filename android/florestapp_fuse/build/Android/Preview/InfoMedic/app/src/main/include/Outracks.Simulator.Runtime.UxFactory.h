// This file was generated based on 'C:\Users\mmoraf\Desktop\InfoMedic\InfoMedic\build\Android\Preview\preamble\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Factory.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UxFactory;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxFactory :10
// {
::g::Uno::UX::Factory_type* UxFactory_typeof();
void UxFactory__ctor_1_fn(UxFactory* __this, uDelegate* create, uString* matchCase, bool* isDefault);
void UxFactory__New1_fn(UxFactory* __this, uObject** __retval);
void UxFactory__New2_fn(uDelegate* create, uString* matchCase, bool* isDefault, UxFactory** __retval);

struct UxFactory : ::g::Uno::UX::Factory
{
    uStrong<uDelegate*> _create;

    void ctor_1(uDelegate* create, uString* matchCase, bool isDefault);
    static UxFactory* New2(uDelegate* create, uString* matchCase, bool isDefault);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
