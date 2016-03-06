// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.CallerFilePathAttribute.h>
#include <Uno.Compiler.CallerLineNumberAttribute.h>
#include <Uno.Compiler.CallerMemberNameAttribute.h>
#include <Uno.Compiler.HideFromCodeCompleterAttribute.h>
#include <Uno.Compiler.IgnoreMainClassAttribute.h>
#include <Uno.Compiler.MainClassAttribute.h>
#include <Uno.Compiler.UxGeneratedAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Compiler\$.uno(9)
// --------------------------------------------------------------------------

// public sealed class CallerFilePathAttribute :9
// {
uType* CallerFilePathAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(CallerFilePathAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.CallerFilePathAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)CallerFilePathAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CallerFilePathAttribute__New1_fn, 0, true, CallerFilePathAttribute_typeof(), 0));
    return type;
}

// public generated CallerFilePathAttribute() :9
void CallerFilePathAttribute__ctor_1_fn(CallerFilePathAttribute* __this)
{
    __this->ctor_1();
}

// public generated CallerFilePathAttribute New() :9
void CallerFilePathAttribute__New1_fn(CallerFilePathAttribute** __retval)
{
    *__retval = CallerFilePathAttribute::New1();
}

// public generated CallerFilePathAttribute() [instance] :9
void CallerFilePathAttribute::ctor_1()
{
    uStackFrame __("Uno.Compiler.CallerFilePathAttribute", ".ctor()");
    ctor_();
}

// public generated CallerFilePathAttribute New() [static] :9
CallerFilePathAttribute* CallerFilePathAttribute::New1()
{
    CallerFilePathAttribute* obj1 = (CallerFilePathAttribute*)uNew(CallerFilePathAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Compiler\$.uno(23)
// ---------------------------------------------------------------------------

// public sealed class CallerLineNumberAttribute :23
// {
uType* CallerLineNumberAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(CallerLineNumberAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.CallerLineNumberAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)CallerLineNumberAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CallerLineNumberAttribute__New1_fn, 0, true, CallerLineNumberAttribute_typeof(), 0));
    return type;
}

// public generated CallerLineNumberAttribute() :23
void CallerLineNumberAttribute__ctor_1_fn(CallerLineNumberAttribute* __this)
{
    __this->ctor_1();
}

// public generated CallerLineNumberAttribute New() :23
void CallerLineNumberAttribute__New1_fn(CallerLineNumberAttribute** __retval)
{
    *__retval = CallerLineNumberAttribute::New1();
}

// public generated CallerLineNumberAttribute() [instance] :23
void CallerLineNumberAttribute::ctor_1()
{
    uStackFrame __("Uno.Compiler.CallerLineNumberAttribute", ".ctor()");
    ctor_();
}

// public generated CallerLineNumberAttribute New() [static] :23
CallerLineNumberAttribute* CallerLineNumberAttribute::New1()
{
    CallerLineNumberAttribute* obj1 = (CallerLineNumberAttribute*)uNew(CallerLineNumberAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Compiler\$.uno(37)
// ---------------------------------------------------------------------------

// public sealed class CallerMemberNameAttribute :37
// {
uType* CallerMemberNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(CallerMemberNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.CallerMemberNameAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)CallerMemberNameAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CallerMemberNameAttribute__New1_fn, 0, true, CallerMemberNameAttribute_typeof(), 0));
    return type;
}

// public generated CallerMemberNameAttribute() :37
void CallerMemberNameAttribute__ctor_1_fn(CallerMemberNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated CallerMemberNameAttribute New() :37
void CallerMemberNameAttribute__New1_fn(CallerMemberNameAttribute** __retval)
{
    *__retval = CallerMemberNameAttribute::New1();
}

// public generated CallerMemberNameAttribute() [instance] :37
void CallerMemberNameAttribute::ctor_1()
{
    uStackFrame __("Uno.Compiler.CallerMemberNameAttribute", ".ctor()");
    ctor_();
}

// public generated CallerMemberNameAttribute New() [static] :37
CallerMemberNameAttribute* CallerMemberNameAttribute::New1()
{
    CallerMemberNameAttribute* obj1 = (CallerMemberNameAttribute*)uNew(CallerMemberNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Compiler\$.uno(64)
// ---------------------------------------------------------------------------

// public sealed class HideFromCodeCompleterAttribute :64
// {
uType* HideFromCodeCompleterAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(HideFromCodeCompleterAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.HideFromCodeCompleterAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)HideFromCodeCompleterAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)HideFromCodeCompleterAttribute__New1_fn, 0, true, HideFromCodeCompleterAttribute_typeof(), 0));
    return type;
}

// public generated HideFromCodeCompleterAttribute() :64
void HideFromCodeCompleterAttribute__ctor_1_fn(HideFromCodeCompleterAttribute* __this)
{
    __this->ctor_1();
}

// public generated HideFromCodeCompleterAttribute New() :64
void HideFromCodeCompleterAttribute__New1_fn(HideFromCodeCompleterAttribute** __retval)
{
    *__retval = HideFromCodeCompleterAttribute::New1();
}

// public generated HideFromCodeCompleterAttribute() [instance] :64
void HideFromCodeCompleterAttribute::ctor_1()
{
    uStackFrame __("Uno.Compiler.HideFromCodeCompleterAttribute", ".ctor()");
    ctor_();
}

// public generated HideFromCodeCompleterAttribute New() [static] :64
HideFromCodeCompleterAttribute* HideFromCodeCompleterAttribute::New1()
{
    HideFromCodeCompleterAttribute* obj1 = (HideFromCodeCompleterAttribute*)uNew(HideFromCodeCompleterAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Compiler\$.uno(75)
// ---------------------------------------------------------------------------

// public sealed class IgnoreMainClassAttribute :75
// {
uType* IgnoreMainClassAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(IgnoreMainClassAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.IgnoreMainClassAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)IgnoreMainClassAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IgnoreMainClassAttribute__New1_fn, 0, true, IgnoreMainClassAttribute_typeof(), 0));
    return type;
}

// public generated IgnoreMainClassAttribute() :75
void IgnoreMainClassAttribute__ctor_1_fn(IgnoreMainClassAttribute* __this)
{
    __this->ctor_1();
}

// public generated IgnoreMainClassAttribute New() :75
void IgnoreMainClassAttribute__New1_fn(IgnoreMainClassAttribute** __retval)
{
    *__retval = IgnoreMainClassAttribute::New1();
}

// public generated IgnoreMainClassAttribute() [instance] :75
void IgnoreMainClassAttribute::ctor_1()
{
    uStackFrame __("Uno.Compiler.IgnoreMainClassAttribute", ".ctor()");
    ctor_();
}

// public generated IgnoreMainClassAttribute New() [static] :75
IgnoreMainClassAttribute* IgnoreMainClassAttribute::New1()
{
    IgnoreMainClassAttribute* obj1 = (IgnoreMainClassAttribute*)uNew(IgnoreMainClassAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Compiler\$.uno(86)
// ---------------------------------------------------------------------------

// public sealed class MainClassAttribute :86
// {
uType* MainClassAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(MainClassAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.MainClassAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)MainClassAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainClassAttribute__New1_fn, 0, true, MainClassAttribute_typeof(), 0));
    return type;
}

// public generated MainClassAttribute() :86
void MainClassAttribute__ctor_1_fn(MainClassAttribute* __this)
{
    __this->ctor_1();
}

// public generated MainClassAttribute New() :86
void MainClassAttribute__New1_fn(MainClassAttribute** __retval)
{
    *__retval = MainClassAttribute::New1();
}

// public generated MainClassAttribute() [instance] :86
void MainClassAttribute::ctor_1()
{
    uStackFrame __("Uno.Compiler.MainClassAttribute", ".ctor()");
    ctor_();
}

// public generated MainClassAttribute New() [static] :86
MainClassAttribute* MainClassAttribute::New1()
{
    MainClassAttribute* obj1 = (MainClassAttribute*)uNew(MainClassAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Compiler\$.uno(97)
// ---------------------------------------------------------------------------

// public sealed class UxGeneratedAttribute :97
// {
uType* UxGeneratedAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UxGeneratedAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.UxGeneratedAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UxGeneratedAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UxGeneratedAttribute__New1_fn, 0, true, UxGeneratedAttribute_typeof(), 0));
    return type;
}

// public generated UxGeneratedAttribute() :97
void UxGeneratedAttribute__ctor_1_fn(UxGeneratedAttribute* __this)
{
    __this->ctor_1();
}

// public generated UxGeneratedAttribute New() :97
void UxGeneratedAttribute__New1_fn(UxGeneratedAttribute** __retval)
{
    *__retval = UxGeneratedAttribute::New1();
}

// public generated UxGeneratedAttribute() [instance] :97
void UxGeneratedAttribute::ctor_1()
{
    uStackFrame __("Uno.Compiler.UxGeneratedAttribute", ".ctor()");
    ctor_();
}

// public generated UxGeneratedAttribute New() [static] :97
UxGeneratedAttribute* UxGeneratedAttribute::New1()
{
    UxGeneratedAttribute* obj1 = (UxGeneratedAttribute*)uNew(UxGeneratedAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Compiler
