// This file was generated based on 'C:\Users\mmoraf\Desktop\InfoMedic\InfoMedic\build\Android\Preview\preamble\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Runtime.UxFactory.h>
#include <Uno.Bool.h>
#include <Uno.Func-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uType* TYPES[1];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxFactory :10
// {
::g::Uno::UX::Factory_type* UxFactory_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UxFactory);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Outracks.Simulator.Runtime.UxFactory", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))UxFactory__New1_fn;
    ::TYPES[0] = ::g::Uno::Func_typeof()->MakeType(uObject_typeof());
    type->SetFields(2,
        ::g::Uno::Func_typeof()->MakeType(uObject_typeof()), offsetof(::g::Outracks::Simulator::Runtime::UxFactory, _create), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UxFactory__New2_fn, 0, true, UxFactory_typeof(), 3, ::g::Uno::Func_typeof()->MakeType(uObject_typeof()), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public UxFactory(Uno.Func<object> create, string matchCase, bool isDefault) :13
void UxFactory__ctor_1_fn(UxFactory* __this, uDelegate* create, uString* matchCase, bool* isDefault)
{
    __this->ctor_1(create, matchCase, *isDefault);
}

// public override sealed object New() :20
void UxFactory__New1_fn(UxFactory* __this, uObject** __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxFactory", "New()");
    return *__retval = uPtr(__this->_create)->Invoke(), void();
}

// public UxFactory New(Uno.Func<object> create, string matchCase, bool isDefault) :13
void UxFactory__New2_fn(uDelegate* create, uString* matchCase, bool* isDefault, UxFactory** __retval)
{
    *__retval = UxFactory::New2(create, matchCase, *isDefault);
}

// public UxFactory(Uno.Func<object> create, string matchCase, bool isDefault) [instance] :13
void UxFactory::ctor_1(uDelegate* create, uString* matchCase, bool isDefault)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxFactory", ".ctor(Uno.Func<object>,string,bool)");
    ctor_(matchCase, isDefault);
    _create = create;
}

// public UxFactory New(Uno.Func<object> create, string matchCase, bool isDefault) [static] :13
UxFactory* UxFactory::New2(uDelegate* create, uString* matchCase, bool isDefault)
{
    UxFactory* obj1 = (UxFactory*)uNew(UxFactory_typeof());
    obj1->ctor_1(create, matchCase, isDefault);
    return obj1;
}
// }

}}}} // ::g::Outracks::Simulator::Runtime
