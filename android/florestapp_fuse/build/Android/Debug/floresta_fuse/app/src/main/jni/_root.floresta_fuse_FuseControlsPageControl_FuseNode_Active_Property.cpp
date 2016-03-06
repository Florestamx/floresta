// This file was generated based on '/Users/oscarbeltran/Documents/NativeLabs/P0011 - FlorestaApp/Hackaton/florestapp_fuse/.uno/floresta_fuse.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property.h>
#include <Fuse.Controls.PageControl.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property :1
// {
::g::Uno::UX::Property_type* floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Node_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Controls::PageControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property, _obj), 0);
    return type;
}

// public floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property(Fuse.Controls.PageControl obj) :4
void floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property__ctor_1_fn(floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property* __this, ::g::Fuse::Controls::PageControl* obj)
{
    __this->ctor_1(obj);
}

// public floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property New(Fuse.Controls.PageControl obj) :4
void floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property__New1_fn(::g::Fuse::Controls::PageControl* obj, floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property** __retval)
{
    *__retval = floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property::New1(obj);
}

// protected override sealed Fuse.Node OnGet() :5
void floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property__OnGet_fn(floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = uPtr(__this->_obj)->Active(), void();
}

// protected override sealed void OnSet(Fuse.Node v, object origin) :6
void floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property__OnSet_fn(floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property* __this, ::g::Fuse::Node* v, uObject* origin)
{
    uPtr(__this->_obj)->Active(v);
}

// public floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property(Fuse.Controls.PageControl obj) [instance] :4
void floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property::ctor_1(::g::Fuse::Controls::PageControl* obj)
{
    ctor_();
    _obj = obj;
}

// public floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property New(Fuse.Controls.PageControl obj) [static] :4
floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property* floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property::New1(::g::Fuse::Controls::PageControl* obj)
{
    floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property* obj1 = (floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property*)uNew(floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
