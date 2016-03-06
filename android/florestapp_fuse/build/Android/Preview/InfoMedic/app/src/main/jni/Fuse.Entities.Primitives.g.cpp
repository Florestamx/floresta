// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Meshes.MeshGenerator.h>
#include <Fuse.Entities.Mesh.h>
#include <Fuse.Entities.MeshHitTestMode.h>
#include <Fuse.Entities.Primitives.ConeRenderer.h>
#include <Fuse.Entities.Primitives.CubeRenderer.h>
#include <Fuse.Entities.Primitives.CylinderRenderer.h>
#include <Fuse.Entities.Primitives.SphereRenderer.h>
#include <Uno.Bool.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Int.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Entities{
namespace Primitives{

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1790)
// ---------------------------------------------------------------

// public sealed class ConeRenderer :1790
// {
::g::Fuse::Entities::MeshRenderer_type* ConeRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Entities::MeshRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ConeRenderer);
    options.TypeSize = sizeof(::g::Fuse::Entities::MeshRenderer_type);
    type = (::g::Fuse::Entities::MeshRenderer_type*)uClassType::New("Fuse.Entities.Primitives.ConeRenderer", options);
    type->SetBase(::g::Fuse::Entities::MeshRenderer_typeof());
    type->fp_ctor_ = (void*)ConeRenderer__New2_fn;
    ::TYPES[0] = ::g::Fuse::Entities::MeshRenderer_typeof();
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ConeRenderer__New2_fn, 0, true, ConeRenderer_typeof(), 0));
    return type;
}

// public ConeRenderer() :1792
void ConeRenderer__ctor_2_fn(ConeRenderer* __this)
{
    __this->ctor_2();
}

// public ConeRenderer New() :1792
void ConeRenderer__New2_fn(ConeRenderer** __retval)
{
    *__retval = ConeRenderer::New2();
}

// public ConeRenderer() [instance] :1792
void ConeRenderer::ctor_2()
{
    uStackFrame __("Fuse.Entities.Primitives.ConeRenderer", ".ctor()");
    ctor_1();
    Mesh(::g::Fuse::Entities::Mesh::New2(::g::Fuse::Drawing::Meshes::MeshGenerator::CreateCone(10.0f, 5.0f, 16, 16)));
}

// public ConeRenderer New() [static] :1792
ConeRenderer* ConeRenderer::New2()
{
    ConeRenderer* obj1 = (ConeRenderer*)uNew(ConeRenderer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1731)
// ---------------------------------------------------------------

// public sealed class CubeRenderer :1731
// {
::g::Fuse::Entities::MeshRenderer_type* CubeRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Entities::MeshRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(CubeRenderer);
    options.TypeSize = sizeof(::g::Fuse::Entities::MeshRenderer_type);
    type = (::g::Fuse::Entities::MeshRenderer_type*)uClassType::New("Fuse.Entities.Primitives.CubeRenderer", options);
    type->SetBase(::g::Fuse::Entities::MeshRenderer_typeof());
    type->fp_ctor_ = (void*)CubeRenderer__New2_fn;
    ::TYPES[0] = ::g::Fuse::Entities::MeshRenderer_typeof();
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CubeRenderer__New2_fn, 0, true, CubeRenderer_typeof(), 0));
    return type;
}

// public CubeRenderer() :1733
void CubeRenderer__ctor_2_fn(CubeRenderer* __this)
{
    __this->ctor_2();
}

// public CubeRenderer New() :1733
void CubeRenderer__New2_fn(CubeRenderer** __retval)
{
    *__retval = CubeRenderer::New2();
}

// public CubeRenderer() [instance] :1733
void CubeRenderer::ctor_2()
{
    uStackFrame __("Fuse.Entities.Primitives.CubeRenderer", ".ctor()");
    ctor_1();
    Mesh(::g::Fuse::Entities::Mesh::New2(::g::Fuse::Drawing::Meshes::MeshGenerator::CreateCube(::g::Uno::Float3__New1(0.0f), 5.0f)));
    HitTestMode(1);
}

// public CubeRenderer New() [static] :1733
CubeRenderer* CubeRenderer::New2()
{
    CubeRenderer* obj1 = (CubeRenderer*)uNew(CubeRenderer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1799)
// ---------------------------------------------------------------

// public sealed class CylinderRenderer :1799
// {
::g::Fuse::Entities::MeshRenderer_type* CylinderRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Entities::MeshRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(CylinderRenderer);
    options.TypeSize = sizeof(::g::Fuse::Entities::MeshRenderer_type);
    type = (::g::Fuse::Entities::MeshRenderer_type*)uClassType::New("Fuse.Entities.Primitives.CylinderRenderer", options);
    type->SetBase(::g::Fuse::Entities::MeshRenderer_typeof());
    type->fp_ctor_ = (void*)CylinderRenderer__New2_fn;
    ::TYPES[0] = ::g::Fuse::Entities::MeshRenderer_typeof();
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CylinderRenderer__New2_fn, 0, true, CylinderRenderer_typeof(), 0));
    return type;
}

// public CylinderRenderer() :1801
void CylinderRenderer__ctor_2_fn(CylinderRenderer* __this)
{
    __this->ctor_2();
}

// public CylinderRenderer New() :1801
void CylinderRenderer__New2_fn(CylinderRenderer** __retval)
{
    *__retval = CylinderRenderer::New2();
}

// public CylinderRenderer() [instance] :1801
void CylinderRenderer::ctor_2()
{
    uStackFrame __("Fuse.Entities.Primitives.CylinderRenderer", ".ctor()");
    ctor_1();
    Mesh(::g::Fuse::Entities::Mesh::New2(::g::Fuse::Drawing::Meshes::MeshGenerator::CreateCylinder(10.0f, 5.0f, 16, 16)));
}

// public CylinderRenderer New() [static] :1801
CylinderRenderer* CylinderRenderer::New2()
{
    CylinderRenderer* obj1 = (CylinderRenderer*)uNew(CylinderRenderer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1741)
// ---------------------------------------------------------------

// public sealed class SphereRenderer :1741
// {
::g::Fuse::Entities::MeshRenderer_type* SphereRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Entities::MeshRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(SphereRenderer);
    options.TypeSize = sizeof(::g::Fuse::Entities::MeshRenderer_type);
    type = (::g::Fuse::Entities::MeshRenderer_type*)uClassType::New("Fuse.Entities.Primitives.SphereRenderer", options);
    type->SetBase(::g::Fuse::Entities::MeshRenderer_typeof());
    type->fp_ctor_ = (void*)SphereRenderer__New2_fn;
    type->fp_Validate = (void(*)(::g::Fuse::Entities::MeshRenderer*))SphereRenderer__Validate_fn;
    ::TYPES[0] = ::g::Fuse::Entities::MeshRenderer_typeof();
    type->SetFields(6,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Primitives::SphereRenderer, _isDirty), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Entities::Primitives::SphereRenderer, _quality), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Primitives::SphereRenderer, _radius), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)SphereRenderer__New2_fn, 0, true, SphereRenderer_typeof(), 0),
        new uFunction("get_Quality", NULL, (void*)SphereRenderer__get_Quality_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Quality", NULL, (void*)SphereRenderer__set_Quality_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Radius", NULL, (void*)SphereRenderer__get_Radius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Radius", NULL, (void*)SphereRenderer__set_Radius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public SphereRenderer() :1773
void SphereRenderer__ctor_2_fn(SphereRenderer* __this)
{
    __this->ctor_2();
}

// public SphereRenderer New() :1773
void SphereRenderer__New2_fn(SphereRenderer** __retval)
{
    *__retval = SphereRenderer::New2();
}

// public int get_Quality() :1762
void SphereRenderer__get_Quality_fn(SphereRenderer* __this, int* __retval)
{
    *__retval = __this->Quality();
}

// public void set_Quality(int value) :1763
void SphereRenderer__set_Quality_fn(SphereRenderer* __this, int* value)
{
    __this->Quality(*value);
}

// public float get_Radius() :1748
void SphereRenderer__get_Radius_fn(SphereRenderer* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value) :1749
void SphereRenderer__set_Radius_fn(SphereRenderer* __this, float* value)
{
    __this->Radius(*value);
}

// protected override sealed void Validate() :1778
void SphereRenderer__Validate_fn(SphereRenderer* __this)
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", "Validate()");

    if (__this->_isDirty || (__this->Mesh() == NULL))
    {
        if (__this->Mesh() != NULL)
            uPtr(__this->Mesh())->Dispose();

        __this->Mesh(::g::Fuse::Entities::Mesh::New2(::g::Fuse::Drawing::Meshes::MeshGenerator::CreateSphere(::g::Uno::Float3__New1(0.0f), __this->_radius, __this->_quality, __this->_quality)));
        __this->_isDirty = false;
    }
}

// public SphereRenderer() [instance] :1773
void SphereRenderer::ctor_2()
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", ".ctor()");
    _radius = 5.0f;
    _quality = 16;
    ctor_1();
    HitTestMode(2);
}

// public int get_Quality() [instance] :1762
int SphereRenderer::Quality()
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", "get_Quality()");
    return _quality;
}

// public void set_Quality(int value) [instance] :1763
void SphereRenderer::Quality(int value)
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", "set_Quality(int)");

    if (_quality != value)
    {
        _quality = value;
        _isDirty = true;
    }
}

// public float get_Radius() [instance] :1748
float SphereRenderer::Radius()
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", "get_Radius()");
    return _radius;
}

// public void set_Radius(float value) [instance] :1749
void SphereRenderer::Radius(float value)
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", "set_Radius(float)");

    if (_radius != value)
    {
        _radius = value;
        _isDirty = true;
    }
}

// public SphereRenderer New() [static] :1773
SphereRenderer* SphereRenderer::New2()
{
    SphereRenderer* obj1 = (SphereRenderer*)uNew(SphereRenderer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}}} // ::g::Fuse::Entities::Primitives
