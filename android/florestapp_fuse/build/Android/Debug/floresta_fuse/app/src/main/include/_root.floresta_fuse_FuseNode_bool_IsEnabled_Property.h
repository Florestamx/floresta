// This file was generated based on '/Users/oscarbeltran/Documents/NativeLabs/P0011 - FlorestaApp/Hackaton/florestapp_fuse/.uno/floresta_fuse.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{struct floresta_fuse_FuseNode_bool_IsEnabled_Property;}

namespace g{

// internal sealed class floresta_fuse_FuseNode_bool_IsEnabled_Property :17
// {
::g::Uno::UX::Property_type* floresta_fuse_FuseNode_bool_IsEnabled_Property_typeof();
void floresta_fuse_FuseNode_bool_IsEnabled_Property__ctor_1_fn(floresta_fuse_FuseNode_bool_IsEnabled_Property* __this, ::g::Fuse::Node* obj);
void floresta_fuse_FuseNode_bool_IsEnabled_Property__New1_fn(::g::Fuse::Node* obj, floresta_fuse_FuseNode_bool_IsEnabled_Property** __retval);
void floresta_fuse_FuseNode_bool_IsEnabled_Property__OnGet_fn(floresta_fuse_FuseNode_bool_IsEnabled_Property* __this, bool* __retval);
void floresta_fuse_FuseNode_bool_IsEnabled_Property__OnSet_fn(floresta_fuse_FuseNode_bool_IsEnabled_Property* __this, bool* v, uObject* origin);

struct floresta_fuse_FuseNode_bool_IsEnabled_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Node*> _obj;

    void ctor_1(::g::Fuse::Node* obj);
    static floresta_fuse_FuseNode_bool_IsEnabled_Property* New1(::g::Fuse::Node* obj);
};
// }

} // ::g
