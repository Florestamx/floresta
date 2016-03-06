// This file was generated based on '/Users/oscarbeltran/Documents/NativeLabs/P0011 - FlorestaApp/Hackaton/florestapp_fuse/floresta_fuse.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.floresta_fuse_bundle.h>
#include <Uno.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class floresta_fuse_bundle :0
// {
// static floresta_fuse_bundle() :0
static void floresta_fuse_bundle__cctor__fn(uType* __type)
{
    floresta_fuse_bundle::florestad315e263_ = ::g::Uno::BundleFile::New1(::STRINGS[0/*"floresta-16...*/]);
    floresta_fuse_bundle::icon_principalcd1cce07_ = ::g::Uno::BundleFile::New1(::STRINGS[1/*"icon_princi...*/]);
}

uClassType* floresta_fuse_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("floresta_fuse_bundle", options);
    type->fp_cctor_ = floresta_fuse_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("floresta-16fa586b.png");
    ::STRINGS[1] = uString::Const("icon_principal-508c3d0f.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::floresta_fuse_bundle::florestad315e263_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::floresta_fuse_bundle::icon_principalcd1cce07_, uFieldFlagsStatic);
    return type;
}

uSStrong< ::g::Uno::BundleFile*> floresta_fuse_bundle::florestad315e263_;
uSStrong< ::g::Uno::BundleFile*> floresta_fuse_bundle::icon_principalcd1cce07_;
// }

} // ::g
