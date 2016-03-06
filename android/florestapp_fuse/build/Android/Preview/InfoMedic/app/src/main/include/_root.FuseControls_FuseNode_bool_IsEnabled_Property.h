// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\.uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{struct FuseControls_FuseNode_bool_IsEnabled_Property;}

namespace g{

// internal sealed class FuseControls_FuseNode_bool_IsEnabled_Property :258
// {
::g::Uno::UX::Property_type* FuseControls_FuseNode_bool_IsEnabled_Property_typeof();
void FuseControls_FuseNode_bool_IsEnabled_Property__ctor_1_fn(FuseControls_FuseNode_bool_IsEnabled_Property* __this, ::g::Fuse::Node* obj);
void FuseControls_FuseNode_bool_IsEnabled_Property__New1_fn(::g::Fuse::Node* obj, FuseControls_FuseNode_bool_IsEnabled_Property** __retval);
void FuseControls_FuseNode_bool_IsEnabled_Property__OnGet_fn(FuseControls_FuseNode_bool_IsEnabled_Property* __this, bool* __retval);
void FuseControls_FuseNode_bool_IsEnabled_Property__OnSet_fn(FuseControls_FuseNode_bool_IsEnabled_Property* __this, bool* v, uObject* origin);

struct FuseControls_FuseNode_bool_IsEnabled_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Node*> _obj;

    void ctor_1(::g::Fuse::Node* obj);
    static FuseControls_FuseNode_bool_IsEnabled_Property* New1(::g::Fuse::Node* obj);
};
// }

} // ::g
