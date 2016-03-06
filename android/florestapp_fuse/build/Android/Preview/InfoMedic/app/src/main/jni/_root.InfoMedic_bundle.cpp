// This file was generated based on 'C:\Users\mmoraf\Desktop\InfoMedic\InfoMedic\InfoMedic.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.InfoMedic_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{

// public static generated class InfoMedic_bundle :0
// {
// static InfoMedic_bundle() :0
static void InfoMedic_bundle__cctor__fn(uType* __type)
{
    InfoMedic_bundle::logo_hef7b87de_ = ::g::Uno::BundleFile::New1(::STRINGS[0/*"logo_h-1e79...*/]);
}

uClassType* InfoMedic_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("InfoMedic_bundle", options);
    type->fp_cctor_ = InfoMedic_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("logo_h-1e7954fc.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::InfoMedic_bundle::logo_hef7b87de_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("logo_hef7b87de", 0));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> InfoMedic_bundle::logo_hef7b87de_;
// }

} // ::g
