// This file was generated based on '/Users/oscarbeltran/Documents/NativeLabs/P0011 - FlorestaApp/Hackaton/florestapp_fuse/.uno/floresta_fuse.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.floresta_fuse_FuseNode_bool_IsEnabled_Property.h>
#include <Fuse.Node.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class floresta_fuse_FuseNode_bool_IsEnabled_Property :17
// {
::g::Uno::UX::Property_type* floresta_fuse_FuseNode_bool_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(floresta_fuse_FuseNode_bool_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("floresta_fuse_FuseNode_bool_IsEnabled_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))floresta_fuse_FuseNode_bool_IsEnabled_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))floresta_fuse_FuseNode_bool_IsEnabled_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetFields(2,
        ::g::Fuse::Node_typeof(), offsetof(::g::floresta_fuse_FuseNode_bool_IsEnabled_Property, _obj), 0);
    return type;
}

// public floresta_fuse_FuseNode_bool_IsEnabled_Property(Fuse.Node obj) :20
void floresta_fuse_FuseNode_bool_IsEnabled_Property__ctor_1_fn(floresta_fuse_FuseNode_bool_IsEnabled_Property* __this, ::g::Fuse::Node* obj)
{
    __this->ctor_1(obj);
}

// public floresta_fuse_FuseNode_bool_IsEnabled_Property New(Fuse.Node obj) :20
void floresta_fuse_FuseNode_bool_IsEnabled_Property__New1_fn(::g::Fuse::Node* obj, floresta_fuse_FuseNode_bool_IsEnabled_Property** __retval)
{
    *__retval = floresta_fuse_FuseNode_bool_IsEnabled_Property::New1(obj);
}

// protected override sealed bool OnGet() :21
void floresta_fuse_FuseNode_bool_IsEnabled_Property__OnGet_fn(floresta_fuse_FuseNode_bool_IsEnabled_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->IsEnabled(), void();
}

// protected override sealed void OnSet(bool v, object origin) :22
void floresta_fuse_FuseNode_bool_IsEnabled_Property__OnSet_fn(floresta_fuse_FuseNode_bool_IsEnabled_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->IsEnabled(v_);
}

// public floresta_fuse_FuseNode_bool_IsEnabled_Property(Fuse.Node obj) [instance] :20
void floresta_fuse_FuseNode_bool_IsEnabled_Property::ctor_1(::g::Fuse::Node* obj)
{
    ctor_();
    _obj = obj;
}

// public floresta_fuse_FuseNode_bool_IsEnabled_Property New(Fuse.Node obj) [static] :20
floresta_fuse_FuseNode_bool_IsEnabled_Property* floresta_fuse_FuseNode_bool_IsEnabled_Property::New1(::g::Fuse::Node* obj)
{
    floresta_fuse_FuseNode_bool_IsEnabled_Property* obj1 = (floresta_fuse_FuseNode_bool_IsEnabled_Property*)uNew(floresta_fuse_FuseNode_bool_IsEnabled_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
