// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseEntities_bundle.h>
#include <Fuse.DrawArgs.h>
#include <Fuse.DrawContext.h>
#include <Fuse.DrawHandler.h>
#include <Fuse.Drawing.Batching.Batch.h>
#include <Fuse.Drawing.Batching.BatchHelpers.h>
#include <Fuse.Drawing.Batching.BatchVertexBuffer.h>
#include <Fuse.Drawing.Batching.MeshBatcher.h>
#include <Fuse.Entities.Component.h>
#include <Fuse.Entities.DefaultMaterial.h>
#include <Fuse.Entities.DirectArrayMeshIntersecter.h>
#include <Fuse.Entities.DirectionalLight.h>
#include <Fuse.Entities.Entity.h>
#include <Fuse.Entities.Entry.h>
#include <Fuse.Entities.EnvironmentLight.h>
#include <Fuse.Entities.Frustum.h>
#include <Fuse.Entities.ILightVisitor.h>
#include <Fuse.Entities.IndexedArrayMeshIntersecter.h>
#include <Fuse.Entities.Internal.SceneGraphBuilder.h>
#include <Fuse.Entities.Internal.SceneGraphBuilderVisitor.h>
#include <Fuse.Entities.Light.h>
#include <Fuse.Entities.Material.h>
#include <Fuse.Entities.Mesh.h>
#include <Fuse.Entities.MeshBatchingEngine.h>
#include <Fuse.Entities.MeshHitTestMode.h>
#include <Fuse.Entities.MeshRenderer.h>
#include <Fuse.Entities.ModelMeshCollision.Direct.h>
#include <Fuse.Entities.ModelMeshCollision.h>
#include <Fuse.Entities.ModelMeshCollision.Indexed.h>
#include <Fuse.Entities.ModelMeshHelpers.h>
#include <Fuse.Entities.NodeExtensions.h>
#include <Fuse.Entities.PointLight.h>
#include <Fuse.Entities.Raycasting.EntityVisitor.h>
#include <Fuse.Entities.Raycasting.h>
#include <Fuse.Entities.RenderNode.h>
#include <Fuse.Entities.RenderToTexture.h>
#include <Fuse.Entities.Scene.h>
#include <Fuse.Entities.SkinnedMeshRenderer.h>
#include <Fuse.Entities.Skinner.h>
#include <Fuse.Entities.SpotLight.h>
#include <Fuse.Entities.Transform3D.h>
#include <Fuse.Entities.TriangleMeshIntersecter.h>
#include <Fuse.Entities.VisitAction-1.h>
#include <Fuse.Entities.VisitPredicate-1.h>
#include <Fuse.Entities.VisitType-1.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestHandler.h>
#include <Fuse.IFrustum.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.Transform.h>
#include <Uno.Action-1.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Content.Models.IndexArray.h>
#include <Uno.Content.Models.Model.h>
#include <Uno.Content.Models.ModelDrawable.h>
#include <Uno.Content.Models.ModelMaterial.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Content.Models.VertexAttributeArray.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Geometry.Box.h>
#include <Uno.Geometry.Collision.h>
#include <Uno.Geometry.Frustum.h>
#include <Uno.Geometry.Plane.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Geometry.Sphere.h>
#include <Uno.Geometry.Triangle.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.ClosingEventArgs.h>
#include <Uno.Platform.Window.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Predicate-1.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.Vector.h>
static uString* STRINGS[3];
static uType* TYPES[87];

namespace g{
namespace Fuse{
namespace Entities{

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(10)
// -------------------------------------------------------------

// public abstract class Component :10
// {
Component_type* Component_typeof()
{
    static uSStrong<Component_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Component);
    options.TypeSize = sizeof(Component_type);
    type = (Component_type*)uClassType::New("Fuse.Entities.Component", options);
    type->SetFields(0,
        ::g::Fuse::Entities::Entity_typeof(), offsetof(::g::Fuse::Entities::Component, _entity), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Entity", NULL, (void*)Component__get_Entity_fn, 0, false, ::g::Fuse::Entities::Entity_typeof(), 0));
    return type;
}

// protected generated Component() :10
void Component__ctor__fn(Component* __this)
{
    __this->ctor_();
}

// internal void Added(Fuse.Entities.Entity e) :15
void Component__Added_fn(Component* __this, ::g::Fuse::Entities::Entity* e)
{
    __this->Added(e);
}

// public Fuse.Entities.Entity get_Entity() :13
void Component__get_Entity_fn(Component* __this, ::g::Fuse::Entities::Entity** __retval)
{
    *__retval = __this->Entity();
}

// internal void Removed(Fuse.Entities.Entity e) :20
void Component__Removed_fn(Component* __this, ::g::Fuse::Entities::Entity* e)
{
    __this->Removed(e);
}

// protected generated Component() [instance] :10
void Component::ctor_()
{
}

// internal void Added(Fuse.Entities.Entity e) [instance] :15
void Component::Added(::g::Fuse::Entities::Entity* e)
{
    uStackFrame __("Fuse.Entities.Component", "Added(Fuse.Entities.Entity)");
    _entity = e;
    OnAdded(e);
}

// public Fuse.Entities.Entity get_Entity() [instance] :13
::g::Fuse::Entities::Entity* Component::Entity()
{
    uStackFrame __("Fuse.Entities.Component", "get_Entity()");
    return _entity;
}

// internal void Removed(Fuse.Entities.Entity e) [instance] :20
void Component::Removed(::g::Fuse::Entities::Entity* e)
{
    uStackFrame __("Fuse.Entities.Component", "Removed(Fuse.Entities.Entity)");
    OnRemoved(e);
    _entity = e;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(39)
// -------------------------------------------------------------

// public sealed class DefaultMaterial :39
// {
uType* DefaultMaterial_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(DefaultMaterial);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.DefaultMaterial", options);
    type->SetBase(::g::Fuse::Entities::Material_typeof());
    type->fp_ctor_ = (void*)DefaultMaterial__New1_fn;
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _DiffuseColor), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _DiffuseMap), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _EmissiveColor), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _EmissiveMap), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _IsEmissive), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _NormalMap), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _Offset), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _Shininess), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _SpecularColor), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _SpecularMap), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Entities::DefaultMaterial, _Tiling), 0);
    type->Reflection.SetFunctions(23,
        new uFunction("get_DiffuseColor", NULL, (void*)DefaultMaterial__get_DiffuseColor_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_DiffuseColor", NULL, (void*)DefaultMaterial__set_DiffuseColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_DiffuseMap", NULL, (void*)DefaultMaterial__get_DiffuseMap_fn, 0, false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("set_DiffuseMap", NULL, (void*)DefaultMaterial__set_DiffuseMap_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::Texture2D_typeof()),
        new uFunction("get_EmissiveColor", NULL, (void*)DefaultMaterial__get_EmissiveColor_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_EmissiveColor", NULL, (void*)DefaultMaterial__set_EmissiveColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_EmissiveMap", NULL, (void*)DefaultMaterial__get_EmissiveMap_fn, 0, false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("set_EmissiveMap", NULL, (void*)DefaultMaterial__set_EmissiveMap_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::Texture2D_typeof()),
        new uFunction("get_IsEmissive", NULL, (void*)DefaultMaterial__get_IsEmissive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEmissive", NULL, (void*)DefaultMaterial__set_IsEmissive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)DefaultMaterial__New1_fn, 0, true, DefaultMaterial_typeof(), 0),
        new uFunction("get_NormalMap", NULL, (void*)DefaultMaterial__get_NormalMap_fn, 0, false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("set_NormalMap", NULL, (void*)DefaultMaterial__set_NormalMap_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::Texture2D_typeof()),
        new uFunction("get_Offset", NULL, (void*)DefaultMaterial__get_Offset_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)DefaultMaterial__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Shininess", NULL, (void*)DefaultMaterial__get_Shininess_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Shininess", NULL, (void*)DefaultMaterial__set_Shininess_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_SpecularColor", NULL, (void*)DefaultMaterial__get_SpecularColor_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_SpecularColor", NULL, (void*)DefaultMaterial__set_SpecularColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_SpecularMap", NULL, (void*)DefaultMaterial__get_SpecularMap_fn, 0, false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("set_SpecularMap", NULL, (void*)DefaultMaterial__set_SpecularMap_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::Texture2D_typeof()),
        new uFunction("get_Tiling", NULL, (void*)DefaultMaterial__get_Tiling_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Tiling", NULL, (void*)DefaultMaterial__set_Tiling_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}

// public DefaultMaterial() :86
void DefaultMaterial__ctor_1_fn(DefaultMaterial* __this)
{
    __this->ctor_1();
}

// public generated float3 get_DiffuseColor() :44
void DefaultMaterial__get_DiffuseColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->DiffuseColor();
}

// public generated void set_DiffuseColor(float3 value) :44
void DefaultMaterial__set_DiffuseColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* value)
{
    __this->DiffuseColor(*value);
}

// public generated texture2D get_DiffuseMap() :67
void DefaultMaterial__get_DiffuseMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->DiffuseMap();
}

// public generated void set_DiffuseMap(texture2D value) :67
void DefaultMaterial__set_DiffuseMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->DiffuseMap(value);
}

// public generated float3 get_EmissiveColor() :64
void DefaultMaterial__get_EmissiveColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EmissiveColor();
}

// public generated void set_EmissiveColor(float3 value) :64
void DefaultMaterial__set_EmissiveColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* value)
{
    __this->EmissiveColor(*value);
}

// public generated texture2D get_EmissiveMap() :76
void DefaultMaterial__get_EmissiveMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->EmissiveMap();
}

// public generated void set_EmissiveMap(texture2D value) :76
void DefaultMaterial__set_EmissiveMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->EmissiveMap(value);
}

// public generated bool get_IsEmissive() :61
void DefaultMaterial__get_IsEmissive_fn(DefaultMaterial* __this, bool* __retval)
{
    *__retval = __this->IsEmissive();
}

// public generated void set_IsEmissive(bool value) :61
void DefaultMaterial__set_IsEmissive_fn(DefaultMaterial* __this, bool* value)
{
    __this->IsEmissive(*value);
}

// public DefaultMaterial New() :86
void DefaultMaterial__New1_fn(DefaultMaterial** __retval)
{
    *__retval = DefaultMaterial::New1();
}

// public generated texture2D get_NormalMap() :70
void DefaultMaterial__get_NormalMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->NormalMap();
}

// public generated void set_NormalMap(texture2D value) :70
void DefaultMaterial__set_NormalMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->NormalMap(value);
}

// public generated float2 get_Offset() :56
void DefaultMaterial__get_Offset_fn(DefaultMaterial* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Offset();
}

// public generated void set_Offset(float2 value) :56
void DefaultMaterial__set_Offset_fn(DefaultMaterial* __this, ::g::Uno::Float2* value)
{
    __this->Offset(*value);
}

// public generated float get_Shininess() :50
void DefaultMaterial__get_Shininess_fn(DefaultMaterial* __this, float* __retval)
{
    *__retval = __this->Shininess();
}

// public generated void set_Shininess(float value) :50
void DefaultMaterial__set_Shininess_fn(DefaultMaterial* __this, float* value)
{
    __this->Shininess(*value);
}

// public generated float3 get_SpecularColor() :47
void DefaultMaterial__get_SpecularColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->SpecularColor();
}

// public generated void set_SpecularColor(float3 value) :47
void DefaultMaterial__set_SpecularColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* value)
{
    __this->SpecularColor(*value);
}

// public generated texture2D get_SpecularMap() :73
void DefaultMaterial__get_SpecularMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->SpecularMap();
}

// public generated void set_SpecularMap(texture2D value) :73
void DefaultMaterial__set_SpecularMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->SpecularMap(value);
}

// public generated float2 get_Tiling() :53
void DefaultMaterial__get_Tiling_fn(DefaultMaterial* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Tiling();
}

// public generated void set_Tiling(float2 value) :53
void DefaultMaterial__set_Tiling_fn(DefaultMaterial* __this, ::g::Uno::Float2* value)
{
    __this->Tiling(*value);
}

// public DefaultMaterial() [instance] :86
void DefaultMaterial::ctor_1()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", ".ctor()");
    ctor_();
    Tiling(::g::Uno::Float2__New1(1.0f));
    DiffuseColor(::g::Uno::Float3__New1(1.0f));
    SpecularColor(::g::Uno::Float3__New1(1.0f));
    Shininess(6.0f);
}

// public generated float3 get_DiffuseColor() [instance] :44
::g::Uno::Float3 DefaultMaterial::DiffuseColor()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "get_DiffuseColor()");
    return _DiffuseColor;
}

// public generated void set_DiffuseColor(float3 value) [instance] :44
void DefaultMaterial::DiffuseColor(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "set_DiffuseColor(float3)");
    _DiffuseColor = value;
}

// public generated texture2D get_DiffuseMap() [instance] :67
::g::Uno::Graphics::Texture2D* DefaultMaterial::DiffuseMap()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "get_DiffuseMap()");
    return _DiffuseMap;
}

// public generated void set_DiffuseMap(texture2D value) [instance] :67
void DefaultMaterial::DiffuseMap(::g::Uno::Graphics::Texture2D* value)
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "set_DiffuseMap(texture2D)");
    _DiffuseMap = value;
}

// public generated float3 get_EmissiveColor() [instance] :64
::g::Uno::Float3 DefaultMaterial::EmissiveColor()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "get_EmissiveColor()");
    return _EmissiveColor;
}

// public generated void set_EmissiveColor(float3 value) [instance] :64
void DefaultMaterial::EmissiveColor(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "set_EmissiveColor(float3)");
    _EmissiveColor = value;
}

// public generated texture2D get_EmissiveMap() [instance] :76
::g::Uno::Graphics::Texture2D* DefaultMaterial::EmissiveMap()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "get_EmissiveMap()");
    return _EmissiveMap;
}

// public generated void set_EmissiveMap(texture2D value) [instance] :76
void DefaultMaterial::EmissiveMap(::g::Uno::Graphics::Texture2D* value)
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "set_EmissiveMap(texture2D)");
    _EmissiveMap = value;
}

// public generated bool get_IsEmissive() [instance] :61
bool DefaultMaterial::IsEmissive()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "get_IsEmissive()");
    return _IsEmissive;
}

// public generated void set_IsEmissive(bool value) [instance] :61
void DefaultMaterial::IsEmissive(bool value)
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "set_IsEmissive(bool)");
    _IsEmissive = value;
}

// public generated texture2D get_NormalMap() [instance] :70
::g::Uno::Graphics::Texture2D* DefaultMaterial::NormalMap()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "get_NormalMap()");
    return _NormalMap;
}

// public generated void set_NormalMap(texture2D value) [instance] :70
void DefaultMaterial::NormalMap(::g::Uno::Graphics::Texture2D* value)
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "set_NormalMap(texture2D)");
    _NormalMap = value;
}

// public generated float2 get_Offset() [instance] :56
::g::Uno::Float2 DefaultMaterial::Offset()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "get_Offset()");
    return _Offset;
}

// public generated void set_Offset(float2 value) [instance] :56
void DefaultMaterial::Offset(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "set_Offset(float2)");
    _Offset = value;
}

// public generated float get_Shininess() [instance] :50
float DefaultMaterial::Shininess()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "get_Shininess()");
    return _Shininess;
}

// public generated void set_Shininess(float value) [instance] :50
void DefaultMaterial::Shininess(float value)
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "set_Shininess(float)");
    _Shininess = value;
}

// public generated float3 get_SpecularColor() [instance] :47
::g::Uno::Float3 DefaultMaterial::SpecularColor()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "get_SpecularColor()");
    return _SpecularColor;
}

// public generated void set_SpecularColor(float3 value) [instance] :47
void DefaultMaterial::SpecularColor(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "set_SpecularColor(float3)");
    _SpecularColor = value;
}

// public generated texture2D get_SpecularMap() [instance] :73
::g::Uno::Graphics::Texture2D* DefaultMaterial::SpecularMap()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "get_SpecularMap()");
    return _SpecularMap;
}

// public generated void set_SpecularMap(texture2D value) [instance] :73
void DefaultMaterial::SpecularMap(::g::Uno::Graphics::Texture2D* value)
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "set_SpecularMap(texture2D)");
    _SpecularMap = value;
}

// public generated float2 get_Tiling() [instance] :53
::g::Uno::Float2 DefaultMaterial::Tiling()
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "get_Tiling()");
    return _Tiling;
}

// public generated void set_Tiling(float2 value) [instance] :53
void DefaultMaterial::Tiling(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Entities.DefaultMaterial", "set_Tiling(float2)");
    _Tiling = value;
}

// public DefaultMaterial New() [static] :86
DefaultMaterial* DefaultMaterial::New1()
{
    DefaultMaterial* obj1 = (DefaultMaterial*)uNew(DefaultMaterial_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1606)
// ---------------------------------------------------------------

// private sealed class ModelMeshCollision.Direct :1606
// {
::g::Fuse::Entities::TriangleMeshIntersecter_type* ModelMeshCollision__Direct_typeof()
{
    static uSStrong< ::g::Fuse::Entities::TriangleMeshIntersecter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ModelMeshCollision__Direct);
    options.TypeSize = sizeof(::g::Fuse::Entities::TriangleMeshIntersecter_type);
    type = (::g::Fuse::Entities::TriangleMeshIntersecter_type*)uClassType::New("Fuse.Entities.ModelMeshCollision.Direct", options);
    type->SetBase(::g::Fuse::Entities::TriangleMeshIntersecter_typeof());
    type->fp_GetTriangle = (void(*)(::g::Fuse::Entities::TriangleMeshIntersecter*, int*, ::g::Uno::Geometry::Triangle*))ModelMeshCollision__Direct__GetTriangle_fn;
    ::STRINGS[0] = uString::Const("positions can not be null");
    ::TYPES[0] = ::g::Uno::Float4_typeof();
    type->SetFields(1,
        ::g::Uno::Content::Models::VertexAttributeArray_typeof(), offsetof(::g::Fuse::Entities::ModelMeshCollision__Direct, _positions), 0);
    return type;
}

// public Direct(Uno.Content.Models.VertexAttributeArray positions, int vertexCount) :1610
void ModelMeshCollision__Direct__ctor_1_fn(ModelMeshCollision__Direct* __this, ::g::Uno::Content::Models::VertexAttributeArray* positions, int* vertexCount)
{
    __this->ctor_1(positions, *vertexCount);
}

// protected override sealed Uno.Geometry.Triangle GetTriangle(int t) :1618
void ModelMeshCollision__Direct__GetTriangle_fn(ModelMeshCollision__Direct* __this, int* t, ::g::Uno::Geometry::Triangle* __retval)
{
    uStackFrame __("Fuse.Entities.ModelMeshCollision.Direct", "GetTriangle(int)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    int t_ = *t;
    int i = t_ * 3;
    return *__retval = ::g::Uno::Geometry::Triangle__New1((ind1 = uPtr(__this->_positions)->GetFloat4(i), ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z)), (ind2 = uPtr(__this->_positions)->GetFloat4(i + 1), ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z)), (ind3 = uPtr(__this->_positions)->GetFloat4(i + 2), ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z))), void();
}

// public Direct New(Uno.Content.Models.VertexAttributeArray positions, int vertexCount) :1610
void ModelMeshCollision__Direct__New1_fn(::g::Uno::Content::Models::VertexAttributeArray* positions, int* vertexCount, ModelMeshCollision__Direct** __retval)
{
    *__retval = ModelMeshCollision__Direct::New1(positions, *vertexCount);
}

// public Direct(Uno.Content.Models.VertexAttributeArray positions, int vertexCount) [instance] :1610
void ModelMeshCollision__Direct::ctor_1(::g::Uno::Content::Models::VertexAttributeArray* positions, int vertexCount)
{
    uStackFrame __("Fuse.Entities.ModelMeshCollision.Direct", ".ctor(Uno.Content.Models.VertexAttributeArray,int)");
    ctor_(vertexCount / 3);

    if (positions == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"positions c...*/]));

    _positions = positions;
}

// public Direct New(Uno.Content.Models.VertexAttributeArray positions, int vertexCount) [static] :1610
ModelMeshCollision__Direct* ModelMeshCollision__Direct::New1(::g::Uno::Content::Models::VertexAttributeArray* positions, int vertexCount)
{
    ModelMeshCollision__Direct* obj4 = (ModelMeshCollision__Direct*)uNew(ModelMeshCollision__Direct_typeof());
    obj4->ctor_1(positions, vertexCount);
    return obj4;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(2806)
// ---------------------------------------------------------------

// internal sealed class DirectArrayMeshIntersecter :2806
// {
::g::Fuse::Entities::TriangleMeshIntersecter_type* DirectArrayMeshIntersecter_typeof()
{
    static uSStrong< ::g::Fuse::Entities::TriangleMeshIntersecter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DirectArrayMeshIntersecter);
    options.TypeSize = sizeof(::g::Fuse::Entities::TriangleMeshIntersecter_type);
    type = (::g::Fuse::Entities::TriangleMeshIntersecter_type*)uClassType::New("Fuse.Entities.DirectArrayMeshIntersecter", options);
    type->SetBase(::g::Fuse::Entities::TriangleMeshIntersecter_typeof());
    type->fp_GetTriangle = (void(*)(::g::Fuse::Entities::TriangleMeshIntersecter*, int*, ::g::Uno::Geometry::Triangle*))DirectArrayMeshIntersecter__GetTriangle_fn;
    ::STRINGS[0] = uString::Const("positions can not be null");
    ::TYPES[1] = ::g::Uno::Float3_typeof()->Array();
    type->SetFields(1,
        ::g::Uno::Float3_typeof()->Array(), offsetof(::g::Fuse::Entities::DirectArrayMeshIntersecter, _positions), 0);
    return type;
}

// public DirectArrayMeshIntersecter(float3[] positions) :2810
void DirectArrayMeshIntersecter__ctor_1_fn(DirectArrayMeshIntersecter* __this, uArray* positions)
{
    __this->ctor_1(positions);
}

// protected override sealed Uno.Geometry.Triangle GetTriangle(int t) :2818
void DirectArrayMeshIntersecter__GetTriangle_fn(DirectArrayMeshIntersecter* __this, int* t, ::g::Uno::Geometry::Triangle* __retval)
{
    uStackFrame __("Fuse.Entities.DirectArrayMeshIntersecter", "GetTriangle(int)");
    int t_ = *t;
    int i = t_ * 3;
    return *__retval = ::g::Uno::Geometry::Triangle__New1(uPtr(__this->_positions)->Item< ::g::Uno::Float3>(i), uPtr(__this->_positions)->Item< ::g::Uno::Float3>(i + 1), uPtr(__this->_positions)->Item< ::g::Uno::Float3>(i + 2)), void();
}

// public DirectArrayMeshIntersecter New(float3[] positions) :2810
void DirectArrayMeshIntersecter__New1_fn(uArray* positions, DirectArrayMeshIntersecter** __retval)
{
    *__retval = DirectArrayMeshIntersecter::New1(positions);
}

// public DirectArrayMeshIntersecter(float3[] positions) [instance] :2810
void DirectArrayMeshIntersecter::ctor_1(uArray* positions)
{
    uStackFrame __("Fuse.Entities.DirectArrayMeshIntersecter", ".ctor(float3[])");
    ctor_(uPtr(positions)->Length() / 3);

    if (positions == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"positions c...*/]));

    _positions = positions;
}

// public DirectArrayMeshIntersecter New(float3[] positions) [static] :2810
DirectArrayMeshIntersecter* DirectArrayMeshIntersecter::New1(uArray* positions)
{
    DirectArrayMeshIntersecter* obj1 = (DirectArrayMeshIntersecter*)uNew(DirectArrayMeshIntersecter_typeof());
    obj1->ctor_1(positions);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(913)
// --------------------------------------------------------------

// public sealed class DirectionalLight :913
// {
::g::Fuse::Entities::Light_type* DirectionalLight_typeof()
{
    static uSStrong< ::g::Fuse::Entities::Light_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(DirectionalLight);
    options.TypeSize = sizeof(::g::Fuse::Entities::Light_type);
    type = (::g::Fuse::Entities::Light_type*)uClassType::New("Fuse.Entities.DirectionalLight", options);
    type->SetBase(::g::Fuse::Entities::Light_typeof());
    type->fp_ctor_ = (void*)DirectionalLight__New1_fn;
    type->fp_Accept = (void(*)(::g::Fuse::Entities::Light*, uObject*))DirectionalLight__Accept_fn;
    type->SetFields(9,
        ::g::Uno::Geometry::Box_typeof(), offsetof(::g::Fuse::Entities::DirectionalLight, _Box), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Box", NULL, (void*)DirectionalLight__get_Box_fn, 0, false, ::g::Uno::Geometry::Box_typeof(), 0),
        new uFunction("set_Box", NULL, (void*)DirectionalLight__set_Box_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Geometry::Box_typeof()),
        new uFunction(".ctor", NULL, (void*)DirectionalLight__New1_fn, 0, true, DirectionalLight_typeof(), 0));
    return type;
}

// public DirectionalLight() :917
void DirectionalLight__ctor_2_fn(DirectionalLight* __this)
{
    __this->ctor_2();
}

// public override sealed void Accept(Fuse.Entities.ILightVisitor visitor) :922
void DirectionalLight__Accept_fn(DirectionalLight* __this, uObject* visitor)
{
    uStackFrame __("Fuse.Entities.DirectionalLight", "Accept(Fuse.Entities.ILightVisitor)");
    ::g::Fuse::Entities::ILightVisitor::Visit(uInterface(uPtr(visitor), ::g::Fuse::Entities::ILightVisitor_typeof()), __this);
}

// public generated Uno.Geometry.Box get_Box() :915
void DirectionalLight__get_Box_fn(DirectionalLight* __this, ::g::Uno::Geometry::Box* __retval)
{
    *__retval = __this->Box();
}

// public generated void set_Box(Uno.Geometry.Box value) :915
void DirectionalLight__set_Box_fn(DirectionalLight* __this, ::g::Uno::Geometry::Box* value)
{
    __this->Box(*value);
}

// public DirectionalLight New() :917
void DirectionalLight__New1_fn(DirectionalLight** __retval)
{
    *__retval = DirectionalLight::New1();
}

// public DirectionalLight() [instance] :917
void DirectionalLight::ctor_2()
{
    uStackFrame __("Fuse.Entities.DirectionalLight", ".ctor()");
    ctor_1();
    Box(::g::Uno::Geometry::Box__New1(::g::Uno::Float3__New2(-100.0f, -100.0f, 0.0f), ::g::Uno::Float3__New2(100.0f, 100.0f, 5000.0f)));
}

// public generated Uno.Geometry.Box get_Box() [instance] :915
::g::Uno::Geometry::Box DirectionalLight::Box()
{
    uStackFrame __("Fuse.Entities.DirectionalLight", "get_Box()");
    return _Box;
}

// public generated void set_Box(Uno.Geometry.Box value) [instance] :915
void DirectionalLight::Box(::g::Uno::Geometry::Box value)
{
    uStackFrame __("Fuse.Entities.DirectionalLight", "set_Box(Uno.Geometry.Box)");
    _Box = value;
}

// public DirectionalLight New() [static] :917
DirectionalLight* DirectionalLight::New1()
{
    DirectionalLight* obj1 = (DirectionalLight*)uNew(DirectionalLight_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(365)
// --------------------------------------------------------------

// public sealed class Entity :365
// {
::g::Fuse::Node_type* Entity_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 61;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Entity);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Entities.Entity", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_ctor_ = (void*)Entity__New1_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Node*, ::g::Fuse::DrawContext*))Entity__Draw_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))Entity__GetSubNode_fn;
    type->fp_get_HitTestBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))Entity__get_HitTestBounds_fn;
    type->fp_get_LocalBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Geometry::Box*))Entity__get_LocalBounds_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))Entity__OnHitTest_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))Entity__get_SubNodeCount_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[2] = ::g::Fuse::Entities::Component_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[4] = ::g::Fuse::DrawHandler_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(Entity_typeof());
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Entities::Component_typeof());
    ::TYPES[8] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Entities::Component_typeof());
    ::TYPES[9] = ::g::Uno::Action1_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(Entity_typeof());
    ::TYPES[11] = ::g::Uno::Collections::IList_typeof()->MakeType(Entity_typeof());
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Fuse::HitTestHandler_typeof();
    ::TYPES[14] = ::g::Uno::Action1_typeof()->MakeType(Entity_typeof());
    ::TYPES[15] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Entities::Component_typeof());
    ::TYPES[16] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Entities::Component_typeof());
    ::TYPES[17] = ::g::Fuse::Entities::Frustum_typeof();
    ::TYPES[18] = Entity_typeof()->MakeMethod(1, ::g::Fuse::IFrustum_typeof());
    ::TYPES[19] = ::g::Fuse::NodeBounds_typeof();
    ::TYPES[20] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[21] = ::g::Fuse::Entities::Transform3D_typeof();
    ::TYPES[22] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(Entity_typeof()), offsetof(::g::Fuse::Entities::Entity, _children), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Entities::Component_typeof()), offsetof(::g::Fuse::Entities::Entity, _components), 0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::Entities::Entity, _frustumComponent), 0,
        ::g::Fuse::Entities::MeshRenderer_typeof(), offsetof(::g::Fuse::Entities::Entity, _MeshRenderer), 0,
        ::g::Fuse::DrawHandler_typeof(), offsetof(::g::Fuse::Entities::Entity, ComponentDraw1), 0,
        ::g::Fuse::HitTestHandler_typeof(), offsetof(::g::Fuse::Entities::Entity, ComponentHitTest1), 0);
    type->Reflection.SetFunctions(21,
        new uFunction("get_Children", NULL, (void*)Entity__get_Children_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(Entity_typeof()), 0),
        new uFunction("add_ComponentDraw", NULL, (void*)Entity__add_ComponentDraw_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::DrawHandler_typeof()),
        new uFunction("remove_ComponentDraw", NULL, (void*)Entity__remove_ComponentDraw_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::DrawHandler_typeof()),
        new uFunction("add_ComponentHitTest", NULL, (void*)Entity__add_ComponentHitTest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::HitTestHandler_typeof()),
        new uFunction("remove_ComponentHitTest", NULL, (void*)Entity__remove_ComponentHitTest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::HitTestHandler_typeof()),
        new uFunction("get_Components", NULL, (void*)Entity__get_Components_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Entities::Component_typeof()), 0),
        new uFunction("FindAllComponents`1", type, (void*)Entity__FindAllComponents_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Action1_typeof()->MakeType(type->U(0)), ::g::Uno::Bool_typeof()),
        new uFunction("FindComponent`1", type, (void*)Entity__FindComponent_fn, 0, false, type->U(0), 0),
        new uFunction("FromModel", NULL, (void*)Entity__FromModel_fn, 0, true, Entity_typeof(), 1, ::g::Uno::Content::Models::Model_typeof()),
        new uFunction("get_Frustum", NULL, (void*)Entity__get_Frustum_fn, 0, false, ::g::Fuse::Entities::Frustum_typeof(), 0),
        new uFunction("get_HasChildren", NULL, (void*)Entity__get_HasChildren_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_MeshRenderer", NULL, (void*)Entity__get_MeshRenderer_fn, 0, false, ::g::Fuse::Entities::MeshRenderer_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Entity__New1_fn, 0, true, Entity_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Entity__New2_fn, 0, true, Entity_typeof(), 1, ::g::Fuse::Entities::Component_typeof()->Array()),
        new uFunction("get_ParentEntity", NULL, (void*)Entity__get_ParentEntity_fn, 0, false, Entity_typeof(), 0),
        new uFunction("get_Transform", NULL, (void*)Entity__get_Transform_fn, 0, false, ::g::Fuse::Entities::Transform3D_typeof(), 0),
        new uFunction("get_WorldForward", NULL, (void*)Entity__get_WorldForward_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_WorldRight", NULL, (void*)Entity__get_WorldRight_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_WorldRotationQuaternion", NULL, (void*)Entity__get_WorldRotationQuaternion_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_WorldRotationQuaternion", NULL, (void*)Entity__set_WorldRotationQuaternion_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_WorldUp", NULL, (void*)Entity__get_WorldUp_fn, 0, false, ::g::Uno::Float3_typeof(), 0));
    return type;
}

// public Entity() :428
void Entity__ctor_1_fn(Entity* __this)
{
    __this->ctor_1();
}

// public Entity(Fuse.Entities.Component[] initComponents) :430
void Entity__ctor_2_fn(Entity* __this, uArray* initComponents)
{
    __this->ctor_2(initComponents);
}

// public Uno.Collections.IList<Fuse.Entities.Entity> get_Children() :372
void Entity__get_Children_fn(Entity* __this, uObject** __retval)
{
    *__retval = __this->Children();
}

// public generated void add_ComponentDraw(Fuse.DrawHandler value) :540
void Entity__add_ComponentDraw_fn(Entity* __this, uDelegate* value)
{
    __this->add_ComponentDraw(value);
}

// public generated void remove_ComponentDraw(Fuse.DrawHandler value) :540
void Entity__remove_ComponentDraw_fn(Entity* __this, uDelegate* value)
{
    __this->remove_ComponentDraw(value);
}

// public generated void add_ComponentHitTest(Fuse.HitTestHandler value) :558
void Entity__add_ComponentHitTest_fn(Entity* __this, uDelegate* value)
{
    __this->add_ComponentHitTest(value);
}

// public generated void remove_ComponentHitTest(Fuse.HitTestHandler value) :558
void Entity__remove_ComponentHitTest_fn(Entity* __this, uDelegate* value)
{
    __this->remove_ComponentHitTest(value);
}

// public Uno.Collections.IList<Fuse.Entities.Component> get_Components() :411
void Entity__get_Components_fn(Entity* __this, uObject** __retval)
{
    *__retval = __this->Components();
}

// public override sealed void Draw(Fuse.DrawContext dc) :542
void Entity__Draw_fn(Entity* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Entities.Entity", "Draw(Fuse.DrawContext)");
    Entity* ret3;

    if (::g::Uno::Delegate::op_Inequality(__this->ComponentDraw1, NULL))
        uPtr(__this->ComponentDraw1)->Invoke(2, __this, (::g::Fuse::DrawArgs*)::g::Fuse::DrawArgs::New2(dc));

    if (__this->HasChildren())

        for (int i = 0; i < uPtr(__this->_children)->Count(); i++)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_children), uCRef<int>(i), &ret3), ret3))->Draw(dc);
}

// public void FindAllComponents<T>(Uno.Action<T> callback, bool recursive) :441
void Entity__FindAllComponents_fn(Entity* __this, uType* __type, uDelegate* callback, bool* recursive)
{
    __this->FindAllComponents(__type, callback, *recursive);
}

// public T FindComponent<T>() :451
void Entity__FindComponent_fn(Entity* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->FindComponent(__type);
}

// public static Fuse.Entities.Entity FromModel(Uno.Content.Models.Model model) :436
void Entity__FromModel_fn(::g::Uno::Content::Models::Model* model, Entity** __retval)
{
    *__retval = Entity::FromModel(model);
}

// public Fuse.Entities.Frustum get_Frustum() :514
void Entity__get_Frustum_fn(Entity* __this, ::g::Fuse::Entities::Frustum** __retval)
{
    *__retval = __this->Frustum();
}

// internal Fuse.IFrustum get_FrustumComponent() :397
void Entity__get_FrustumComponent_fn(Entity* __this, uObject** __retval)
{
    *__retval = __this->FrustumComponent();
}

// public override sealed Fuse.Node GetSubNode(int index) :587
void Entity__GetSubNode_fn(Entity* __this, int* index, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Fuse.Entities.Entity", "GetSubNode(int)");
    Entity* ret10;
    int index_ = *index;
    return *__retval = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[11/*Uno.Collections.IList<Fuse.Entities.Entity>*/]), uCRef<int>(index_), &ret10), ret10), void();
}

// public bool get_HasChildren() :379
void Entity__get_HasChildren_fn(Entity* __this, bool* __retval)
{
    *__retval = __this->HasChildren();
}

// public override sealed Fuse.NodeBounds get_HitTestBounds() :579
void Entity__get_HitTestBounds_fn(Entity* __this, ::g::Fuse::NodeBounds** __retval)
{
    uStackFrame __("Fuse.Entities.Entity", "get_HitTestBounds()");
    return *__retval = ::g::Fuse::NodeBounds::Infinite(), void();
}

// public override sealed Uno.Geometry.Box get_LocalBounds() :595
void Entity__get_LocalBounds_fn(Entity* __this, ::g::Uno::Geometry::Box* __retval)
{
    uStackFrame __("Fuse.Entities.Entity", "get_LocalBounds()");
    return *__retval = ::g::Uno::Geometry::Box__New1(::g::Uno::Float3__New1(0.0f), ::g::Uno::Float3__New1(0.0f)), void();
}

// public generated Fuse.Entities.MeshRenderer get_MeshRenderer() :538
void Entity__get_MeshRenderer_fn(Entity* __this, ::g::Fuse::Entities::MeshRenderer** __retval)
{
    *__retval = __this->MeshRenderer();
}

// private generated void set_MeshRenderer(Fuse.Entities.MeshRenderer value) :538
void Entity__set_MeshRenderer_fn(Entity* __this, ::g::Fuse::Entities::MeshRenderer* value)
{
    __this->MeshRenderer(value);
}

// public Entity New() :428
void Entity__New1_fn(Entity** __retval)
{
    *__retval = Entity::New1();
}

// public Entity New(Fuse.Entities.Component[] initComponents) :430
void Entity__New2_fn(uArray* initComponents, Entity** __retval)
{
    *__retval = Entity::New2(initComponents);
}

// private void OnChildAdded(Fuse.Entities.Entity c) :381
void Entity__OnChildAdded_fn(Entity* __this, Entity* c)
{
    __this->OnChildAdded(c);
}

// private void OnChildRemoved(Fuse.Entities.Entity c) :387
void Entity__OnChildRemoved_fn(Entity* __this, Entity* c)
{
    __this->OnChildRemoved(c);
}

// private void OnComponentAdded(Fuse.Entities.Component c) :418
void Entity__OnComponentAdded_fn(Entity* __this, ::g::Fuse::Entities::Component* c)
{
    __this->OnComponentAdded(c);
}

// private void OnComponentRemoved(Fuse.Entities.Component c) :423
void Entity__OnComponentRemoved_fn(Entity* __this, ::g::Fuse::Entities::Component* c)
{
    __this->OnComponentRemoved(c);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :560
void Entity__OnHitTest_fn(Entity* __this, ::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Entities.Entity", "OnHitTest(Fuse.HitTestContext)");
    Entity* ret11;

    if (::g::Uno::Delegate::op_Inequality(__this->ComponentHitTest1, NULL))
        uPtr(__this->ComponentHitTest1)->Invoke(2, __this, htc);

    if (__this->HasChildren())

        for (int i = 0; i < uPtr(__this->_children)->Count(); i++)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_children), uCRef<int>(i), &ret11), ret11))->HitTest(htc);
}

// public Fuse.Entities.Entity get_ParentEntity() :462
void Entity__get_ParentEntity_fn(Entity* __this, Entity** __retval)
{
    *__retval = __this->ParentEntity();
}

// public override sealed int get_SubNodeCount() :584
void Entity__get_SubNodeCount_fn(Entity* __this, int* __retval)
{
    uStackFrame __("Fuse.Entities.Entity", "get_SubNodeCount()");
    return *__retval = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Entities.Entity>*/])), void();
}

// public Fuse.Entities.Transform3D get_Transform() :527
void Entity__get_Transform_fn(Entity* __this, ::g::Fuse::Entities::Transform3D** __retval)
{
    *__retval = __this->Transform();
}

// public float3 get_WorldForward() :508
void Entity__get_WorldForward_fn(Entity* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->WorldForward();
}

// public float3 get_WorldRight() :496
void Entity__get_WorldRight_fn(Entity* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->WorldRight();
}

// public float4 get_WorldRotationQuaternion() :471
void Entity__get_WorldRotationQuaternion_fn(Entity* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->WorldRotationQuaternion();
}

// public void set_WorldRotationQuaternion(float4 value) :479
void Entity__set_WorldRotationQuaternion_fn(Entity* __this, ::g::Uno::Float4* value)
{
    __this->WorldRotationQuaternion(*value);
}

// public float3 get_WorldUp() :502
void Entity__get_WorldUp_fn(Entity* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->WorldUp();
}

// public Entity() [instance] :428
void Entity::ctor_1()
{
    uStackFrame __("Fuse.Entities.Entity", ".ctor()");
    ctor_();
}

// public Entity(Fuse.Entities.Component[] initComponents) [instance] :430
void Entity::ctor_2(uArray* initComponents)
{
    uStackFrame __("Fuse.Entities.Entity", ".ctor(Fuse.Entities.Component[])");
    ctor_();

    if (initComponents != NULL)

        for (int i = 0; i < uPtr(initComponents)->Length(); i++)
            ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Components()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Entities.Component>*/]), uPtr(initComponents)->Strong< ::g::Fuse::Entities::Component*>(i));
}

// public Uno.Collections.IList<Fuse.Entities.Entity> get_Children() [instance] :372
uObject* Entity::Children()
{
    uStackFrame __("Fuse.Entities.Entity", "get_Children()");

    if (_children == NULL)
        _children = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[6/*Uno.Collections.ObservableList<Fuse.Entities.Entity>*/], uDelegate::New(::TYPES[14/*Uno.Action<Fuse.Entities.Entity>*/], (void*)Entity__OnChildAdded_fn, this), uDelegate::New(::TYPES[14/*Uno.Action<Fuse.Entities.Entity>*/], (void*)Entity__OnChildRemoved_fn, this)));

    return (uObject*)_children;
}

// public generated void add_ComponentDraw(Fuse.DrawHandler value) [instance] :540
void Entity::add_ComponentDraw(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Entity", "add_ComponentDraw(Fuse.DrawHandler)");
    ComponentDraw1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ComponentDraw1, value), ::TYPES[4/*Fuse.DrawHandler*/]);
}

// public generated void remove_ComponentDraw(Fuse.DrawHandler value) [instance] :540
void Entity::remove_ComponentDraw(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Entity", "remove_ComponentDraw(Fuse.DrawHandler)");
    ComponentDraw1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ComponentDraw1, value), ::TYPES[4/*Fuse.DrawHandler*/]);
}

// public generated void add_ComponentHitTest(Fuse.HitTestHandler value) [instance] :558
void Entity::add_ComponentHitTest(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Entity", "add_ComponentHitTest(Fuse.HitTestHandler)");
    ComponentHitTest1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ComponentHitTest1, value), ::TYPES[13/*Fuse.HitTestHandler*/]);
}

// public generated void remove_ComponentHitTest(Fuse.HitTestHandler value) [instance] :558
void Entity::remove_ComponentHitTest(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Entity", "remove_ComponentHitTest(Fuse.HitTestHandler)");
    ComponentHitTest1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ComponentHitTest1, value), ::TYPES[13/*Fuse.HitTestHandler*/]);
}

// public Uno.Collections.IList<Fuse.Entities.Component> get_Components() [instance] :411
uObject* Entity::Components()
{
    uStackFrame __("Fuse.Entities.Entity", "get_Components()");

    if (_components == NULL)
        _components = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[15/*Uno.Collections.ObservableList<Fuse.Entities.Component>*/], uDelegate::New(::TYPES[16/*Uno.Action<Fuse.Entities.Component>*/], (void*)Entity__OnComponentAdded_fn, this), uDelegate::New(::TYPES[16/*Uno.Action<Fuse.Entities.Component>*/], (void*)Entity__OnComponentRemoved_fn, this)));

    return (uObject*)_components;
}

// public void FindAllComponents<T>(Uno.Action<T> callback, bool recursive) [instance] :441
void Entity::FindAllComponents(uType* __type, uDelegate* callback, bool recursive)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[9/*Uno.Action`1*/]->MakeType(__type->U(0)),
        Entity_typeof()->MakeMethod(1, __type->U(0)),
    };
    uStackFrame __("Fuse.Entities.Entity", "FindAllComponents`1(Uno.Action<T>,bool)");
    ::g::Fuse::Entities::Component* ret4;
    ::g::Fuse::Entities::Component* ret5;
    Entity* ret6;
    Entity* ret7;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Components()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Entities.Component>*/])); i++)
        if (uIs((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Components()), ::TYPES[8/*Uno.Collections.IList<Fuse.Entities.Component>*/]), uCRef<int>(i), &ret4), ret4), __types[0]))
            uPtr(callback)->InvokeVoid(uUnboxAny(__types[0], (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Components()), ::TYPES[8/*Uno.Collections.IList<Fuse.Entities.Component>*/]), uCRef<int>(i), &ret5), ret5)));

    if (recursive && HasChildren())

        for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Entities.Entity>*/])); i1++)
            if (uIs((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.IList<Fuse.Entities.Entity>*/]), uCRef<int>(i1), &ret6), ret6), Entity_typeof()))
                uPtr(uAs<Entity*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.IList<Fuse.Entities.Entity>*/]), uCRef<int>(i1), &ret7), ret7), Entity_typeof()))->FindAllComponents(__types[2], callback, recursive);
}

// public T FindComponent<T>() [instance] :451
uObject* Entity::FindComponent(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Fuse.Entities.Entity", "FindComponent`1()");
    ::g::Fuse::Entities::Component* ret8;
    ::g::Fuse::Entities::Component* ret9;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Components()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Entities.Component>*/])); i++)
        if (uIs((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Components()), ::TYPES[8/*Uno.Collections.IList<Fuse.Entities.Component>*/]), uCRef<int>(i), &ret8), ret8), __types[0]))
            return uCast<uObject*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Components()), ::TYPES[8/*Uno.Collections.IList<Fuse.Entities.Component>*/]), uCRef<int>(i), &ret9), ret9), __types[0]);

    return NULL;
}

// public Fuse.Entities.Frustum get_Frustum() [instance] :514
::g::Fuse::Entities::Frustum* Entity::Frustum()
{
    uStackFrame __("Fuse.Entities.Entity", "get_Frustum()");
    ::g::Fuse::Entities::Component* ret12;
    ::g::Fuse::Entities::Component* ret13;

    for (int i = 0; i < uPtr(_components)->Count(); i++)
        if (uIs((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_components), uCRef<int>(i), &ret12), ret12), ::TYPES[17/*Fuse.Entities.Frustum*/]))
            return uCast< ::g::Fuse::Entities::Frustum*>((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_components), uCRef<int>(i), &ret13), ret13), ::TYPES[17/*Fuse.Entities.Frustum*/]);

    return NULL;
}

// internal Fuse.IFrustum get_FrustumComponent() [instance] :397
uObject* Entity::FrustumComponent()
{
    uStackFrame __("Fuse.Entities.Entity", "get_FrustumComponent()");

    if (_frustumComponent == NULL)
        _frustumComponent = ((uObject*)FindComponent(::TYPES[18/*Fuse.Entities.Entity.FindComponent<Fuse.IFrustum>*/]));

    return _frustumComponent;
}

// public bool get_HasChildren() [instance] :379
bool Entity::HasChildren()
{
    uStackFrame __("Fuse.Entities.Entity", "get_HasChildren()");
    return (_children != NULL) && (uPtr(_children)->Count() > 0);
}

// public generated Fuse.Entities.MeshRenderer get_MeshRenderer() [instance] :538
::g::Fuse::Entities::MeshRenderer* Entity::MeshRenderer()
{
    uStackFrame __("Fuse.Entities.Entity", "get_MeshRenderer()");
    return _MeshRenderer;
}

// private generated void set_MeshRenderer(Fuse.Entities.MeshRenderer value) [instance] :538
void Entity::MeshRenderer(::g::Fuse::Entities::MeshRenderer* value)
{
    uStackFrame __("Fuse.Entities.Entity", "set_MeshRenderer(Fuse.Entities.MeshRenderer)");
    _MeshRenderer = value;
}

// private void OnChildAdded(Fuse.Entities.Entity c) [instance] :381
void Entity::OnChildAdded(Entity* c)
{
    uStackFrame __("Fuse.Entities.Entity", "OnChildAdded(Fuse.Entities.Entity)");
    uPtr(c)->OnAdded(this);
    _frustumComponent = NULL;
}

// private void OnChildRemoved(Fuse.Entities.Entity c) [instance] :387
void Entity::OnChildRemoved(Entity* c)
{
    uStackFrame __("Fuse.Entities.Entity", "OnChildRemoved(Fuse.Entities.Entity)");
    uPtr(c)->OnRemoved(this);
    _frustumComponent = NULL;
}

// private void OnComponentAdded(Fuse.Entities.Component c) [instance] :418
void Entity::OnComponentAdded(::g::Fuse::Entities::Component* c)
{
    uStackFrame __("Fuse.Entities.Entity", "OnComponentAdded(Fuse.Entities.Component)");
    uPtr(c)->Added(this);
}

// private void OnComponentRemoved(Fuse.Entities.Component c) [instance] :423
void Entity::OnComponentRemoved(::g::Fuse::Entities::Component* c)
{
    uStackFrame __("Fuse.Entities.Entity", "OnComponentRemoved(Fuse.Entities.Component)");
    uPtr(c)->Removed(this);
}

// public Fuse.Entities.Entity get_ParentEntity() [instance] :462
Entity* Entity::ParentEntity()
{
    uStackFrame __("Fuse.Entities.Entity", "get_ParentEntity()");
    return uAs<Entity*>(Parent(), Entity_typeof());
}

// public Fuse.Entities.Transform3D get_Transform() [instance] :527
::g::Fuse::Entities::Transform3D* Entity::Transform()
{
    uStackFrame __("Fuse.Entities.Entity", "get_Transform()");
    ::g::Fuse::Transform* ret14;
    ::g::Fuse::Transform* ret15;

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Transforms()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Transform>*/])); (i--) > 0; )
        if (uIs((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Transforms()), ::TYPES[22/*Uno.Collections.IList<Fuse.Transform>*/]), uCRef<int>(i), &ret14), ret14), ::TYPES[21/*Fuse.Entities.Transform3D*/]))
            return uCast< ::g::Fuse::Entities::Transform3D*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Transforms()), ::TYPES[22/*Uno.Collections.IList<Fuse.Transform>*/]), uCRef<int>(i), &ret15), ret15), ::TYPES[21/*Fuse.Entities.Transform3D*/]);

    return NULL;
}

// public float3 get_WorldForward() [instance] :508
::g::Uno::Float3 Entity::WorldForward()
{
    uStackFrame __("Fuse.Entities.Entity", "get_WorldForward()");
    return ::g::Uno::Vector::Normalize1(::g::Uno::Vector::TransformNormal1(::g::Uno::Float3__New2(0.0f, 0.0f, -1.0f), WorldTransform()));
}

// public float3 get_WorldRight() [instance] :496
::g::Uno::Float3 Entity::WorldRight()
{
    uStackFrame __("Fuse.Entities.Entity", "get_WorldRight()");
    return ::g::Uno::Vector::Normalize1(::g::Uno::Vector::TransformNormal1(::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), WorldTransform()));
}

// public float4 get_WorldRotationQuaternion() [instance] :471
::g::Uno::Float4 Entity::WorldRotationQuaternion()
{
    uStackFrame __("Fuse.Entities.Entity", "get_WorldRotationQuaternion()");
    ::g::Uno::Float3 scale;
    ::g::Uno::Float3 translation;
    ::g::Uno::Float4 rotation;
    ::g::Uno::Matrix::Decompose(WorldTransform(), &scale, &rotation, &translation);
    return rotation;
}

// public void set_WorldRotationQuaternion(float4 value) [instance] :479
void Entity::WorldRotationQuaternion(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Entities.Entity", "set_WorldRotationQuaternion(float4)");
    ::g::Uno::Float4 parentToAbs = (ParentEntity() != NULL) ? uPtr(ParentEntity())->WorldRotationQuaternion() : ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
    ::g::Uno::Float4 absToParent = ::g::Uno::Vector::Normalize2(::g::Uno::Quaternion::Invert(parentToAbs));
    uPtr(Transform())->RotationQuaternion(::g::Uno::Quaternion::Mul(value, absToParent));
}

// public float3 get_WorldUp() [instance] :502
::g::Uno::Float3 Entity::WorldUp()
{
    uStackFrame __("Fuse.Entities.Entity", "get_WorldUp()");
    return ::g::Uno::Vector::Normalize1(::g::Uno::Vector::TransformNormal1(::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), WorldTransform()));
}

// public static Fuse.Entities.Entity FromModel(Uno.Content.Models.Model model) [static] :436
Entity* Entity::FromModel(::g::Uno::Content::Models::Model* model)
{
    uStackFrame __("Fuse.Entities.Entity", "FromModel(Uno.Content.Models.Model)");
    return ::g::Fuse::Entities::Internal::SceneGraphBuilder::New1(NULL)->Build(model);
}

// public Entity New() [static] :428
Entity* Entity::New1()
{
    Entity* obj1 = (Entity*)uNew(Entity_typeof());
    obj1->ctor_1();
    return obj1;
}

// public Entity New(Fuse.Entities.Component[] initComponents) [static] :430
Entity* Entity::New2(uArray* initComponents)
{
    Entity* obj2 = (Entity*)uNew(Entity_typeof());
    obj2->ctor_2(initComponents);
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1816)
// ---------------------------------------------------------------

// private sealed class Raycasting.EntityVisitor :1816
// {
uType* Raycasting__EntityVisitor_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Raycasting__EntityVisitor);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.Raycasting.EntityVisitor", options);
    ::TYPES[23] = ::g::Fuse::Entities::Entity_typeof()->MakeMethod(1, ::g::Fuse::Entities::MeshRenderer_typeof());
    ::TYPES[24] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Entities::MeshRenderer_typeof());
    ::TYPES[25] = ::g::Fuse::Entities::MeshRenderer_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Raycasting__EntityVisitor, _foundAnyIntersections), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Raycasting__EntityVisitor, _minDistance), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Entities::Raycasting__EntityVisitor, _point), 0,
        ::g::Fuse::DrawContext_typeof(), offsetof(::g::Fuse::Entities::Raycasting__EntityVisitor, _tc), 0);
    return type;
}

// public EntityVisitor(Fuse.DrawContext tc) :1824
void Raycasting__EntityVisitor__ctor__fn(Raycasting__EntityVisitor* __this, ::g::Fuse::DrawContext* tc)
{
    __this->ctor_(tc);
}

// public EntityVisitor New(Fuse.DrawContext tc) :1824
void Raycasting__EntityVisitor__New1_fn(::g::Fuse::DrawContext* tc, Raycasting__EntityVisitor** __retval)
{
    *__retval = Raycasting__EntityVisitor::New1(tc);
}

// public bool Visit(Fuse.Entities.Entity e, float2& p) :1829
void Raycasting__EntityVisitor__Visit_fn(Raycasting__EntityVisitor* __this, ::g::Fuse::Entities::Entity* e, ::g::Uno::Float2* p, bool* __retval)
{
    *__retval = __this->Visit(e, p);
}

// private void VisitMeshRenderer(Fuse.Entities.MeshRenderer mr) :1838
void Raycasting__EntityVisitor__VisitMeshRenderer_fn(Raycasting__EntityVisitor* __this, ::g::Fuse::Entities::MeshRenderer* mr)
{
    __this->VisitMeshRenderer(mr);
}

// public EntityVisitor(Fuse.DrawContext tc) [instance] :1824
void Raycasting__EntityVisitor::ctor_(::g::Fuse::DrawContext* tc)
{
    uStackFrame __("Fuse.Entities.Raycasting.EntityVisitor", ".ctor(Fuse.DrawContext)");
    _minDistance = 3.402823e+38f;
    _tc = tc;
}

// public bool Visit(Fuse.Entities.Entity e, float2& p) [instance] :1829
bool Raycasting__EntityVisitor::Visit(::g::Fuse::Entities::Entity* e, ::g::Uno::Float2* p)
{
    uStackFrame __("Fuse.Entities.Raycasting.EntityVisitor", "Visit(Fuse.Entities.Entity,float2&)");
    _point = *p;
    _foundAnyIntersections = false;
    uPtr(e)->FindAllComponents(::TYPES[23/*Fuse.Entities.Entity.FindAllComponents<Fuse.Entities.MeshRenderer>*/], uDelegate::New(::TYPES[24/*Uno.Action<Fuse.Entities.MeshRenderer>*/], (void*)Raycasting__EntityVisitor__VisitMeshRenderer_fn, this), true);
    *p = _point;
    return _foundAnyIntersections;
}

// private void VisitMeshRenderer(Fuse.Entities.MeshRenderer mr) [instance] :1838
void Raycasting__EntityVisitor::VisitMeshRenderer(::g::Fuse::Entities::MeshRenderer* mr)
{
    uStackFrame __("Fuse.Entities.Raycasting.EntityVisitor", "VisitMeshRenderer(Fuse.Entities.MeshRenderer)");

    if (uPtr(mr)->Mesh() == NULL)
        return;

    if (::g::Fuse::Entities::Raycasting::PointToTexcoordSpace1(_tc, mr, &_point, &_minDistance))
        _foundAnyIntersections = true;
}

// public EntityVisitor New(Fuse.DrawContext tc) [static] :1824
Raycasting__EntityVisitor* Raycasting__EntityVisitor::New1(::g::Fuse::DrawContext* tc)
{
    Raycasting__EntityVisitor* obj1 = (Raycasting__EntityVisitor*)uNew(Raycasting__EntityVisitor_typeof());
    obj1->ctor_(tc);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1080)
// ---------------------------------------------------------------

// internal struct Entry :1080
// {
uStructType* Entry_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(Entry);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Entities.Entry", options);
    type->SetFields(0,
        ::g::Fuse::Entities::Mesh_typeof(), offsetof(::g::Fuse::Entities::Entry, Mesh), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Entities::Entry, World), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Entities::Entry, WorldInverse), 0);
    return type;
}

// public Entry(Fuse.Entities.Mesh m, float4x4 t, float4x4 worldInverse) :1085
void Entry__ctor__fn(Entry* __this, ::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4* t, ::g::Uno::Float4x4* worldInverse)
{
    __this->ctor_(m, *t, *worldInverse);
}

// public Entry New(Fuse.Entities.Mesh m, float4x4 t, float4x4 worldInverse) :1085
void Entry__New1_fn(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4* t, ::g::Uno::Float4x4* worldInverse, Entry* __retval)
{
    *__retval = Entry__New1(m, *t, *worldInverse);
}

// public Entry(Fuse.Entities.Mesh m, float4x4 t, float4x4 worldInverse) [instance] :1085
void Entry::ctor_(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4 t, ::g::Uno::Float4x4 worldInverse)
{
    uStackFrame __("Fuse.Entities.Entry", ".ctor(Fuse.Entities.Mesh,float4x4,float4x4)");
    Mesh = m;
    World = t;
    WorldInverse = worldInverse;
}

// public Entry New(Fuse.Entities.Mesh m, float4x4 t, float4x4 worldInverse) [static] :1085
Entry Entry__New1(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4 t, ::g::Uno::Float4x4 worldInverse)
{
    Entry obj1;
    obj1.ctor_(m, t, worldInverse);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(871)
// --------------------------------------------------------------

// public sealed class EnvironmentLight :871
// {
::g::Fuse::Entities::Light_type* EnvironmentLight_typeof()
{
    static uSStrong< ::g::Fuse::Entities::Light_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(EnvironmentLight);
    options.TypeSize = sizeof(::g::Fuse::Entities::Light_type);
    type = (::g::Fuse::Entities::Light_type*)uClassType::New("Fuse.Entities.EnvironmentLight", options);
    type->SetBase(::g::Fuse::Entities::Light_typeof());
    type->fp_ctor_ = (void*)EnvironmentLight__New1_fn;
    type->fp_Accept = (void(*)(::g::Fuse::Entities::Light*, uObject*))EnvironmentLight__Accept_fn;
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EnvironmentLight__New1_fn, 0, true, EnvironmentLight_typeof(), 0));
    return type;
}

// public generated EnvironmentLight() :871
void EnvironmentLight__ctor_2_fn(EnvironmentLight* __this)
{
    __this->ctor_2();
}

// public override sealed void Accept(Fuse.Entities.ILightVisitor visitor) :875
void EnvironmentLight__Accept_fn(EnvironmentLight* __this, uObject* visitor)
{
    uStackFrame __("Fuse.Entities.EnvironmentLight", "Accept(Fuse.Entities.ILightVisitor)");
    ::g::Fuse::Entities::ILightVisitor::Visit1(uInterface(uPtr(visitor), ::g::Fuse::Entities::ILightVisitor_typeof()), __this);
}

// public generated EnvironmentLight New() :871
void EnvironmentLight__New1_fn(EnvironmentLight** __retval)
{
    *__retval = EnvironmentLight::New1();
}

// public generated EnvironmentLight() [instance] :871
void EnvironmentLight::ctor_2()
{
    uStackFrame __("Fuse.Entities.EnvironmentLight", ".ctor()");
    ctor_1();
}

// public generated EnvironmentLight New() [static] :871
EnvironmentLight* EnvironmentLight::New1()
{
    EnvironmentLight* obj1 = (EnvironmentLight*)uNew(EnvironmentLight_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(618)
// --------------------------------------------------------------

// public sealed class Frustum :618
// {
Frustum_type* Frustum_typeof()
{
    static uSStrong<Frustum_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Frustum);
    options.TypeSize = sizeof(Frustum_type);
    type = (Frustum_type*)uClassType::New("Fuse.Entities.Frustum", options);
    type->SetBase(::g::Fuse::Entities::Component_typeof());
    type->fp_ctor_ = (void*)Frustum__New1_fn;
    type->fp_OnAdded = (void(*)(::g::Fuse::Entities::Component*, ::g::Fuse::Entities::Entity*))Frustum__OnAdded_fn;
    type->fp_OnRemoved = (void(*)(::g::Fuse::Entities::Component*, ::g::Fuse::Entities::Entity*))Frustum__OnRemoved_fn;
    type->interface0.fp_GetProjectionTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))Frustum__GetProjectionTransform_fn;
    type->interface0.fp_GetProjectionTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))Frustum__GetProjectionTransformInverse_fn;
    type->interface0.fp_GetViewTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))Frustum__GetViewTransform_fn;
    type->interface0.fp_GetViewTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))Frustum__GetViewTransformInverse_fn;
    type->interface0.fp_GetDepthRange = (void(*)(uObject*, uObject*, ::g::Uno::Float2*))Frustum__GetDepthRange_fn;
    type->interface0.fp_GetWorldPosition = (void(*)(uObject*, uObject*, ::g::Uno::Float3*))Frustum__GetWorldPosition_fn;
    ::TYPES[26] = ::g::Uno::Geometry::Frustum_typeof();
    ::TYPES[27] = ::g::Uno::Rect_typeof();
    ::TYPES[28] = ::g::Uno::Geometry::Plane_typeof();
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[29] = ::g::Fuse::Entities::Component_typeof();
    ::TYPES[30] = ::g::Uno::Float2_typeof();
    ::TYPES[31] = ::g::Fuse::IViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::IFrustum_typeof(), offsetof(Frustum_type, interface0));
    type->SetFields(1,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Frustum, _aspect), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Frustum, _hasExplicitAspect), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Frustum, fovRadians), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Frustum, zFar), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Frustum, zNear), 0);
    type->Reflection.SetFunctions(25,
        new uFunction("get_ExplicitAspect", NULL, (void*)Frustum__get_ExplicitAspect_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ExplicitAspect", NULL, (void*)Frustum__set_ExplicitAspect_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_FovDegrees", NULL, (void*)Frustum__get_FovDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_FovDegrees", NULL, (void*)Frustum__set_FovDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_FovRadians", NULL, (void*)Frustum__get_FovRadians_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_FovRadians", NULL, (void*)Frustum__set_FovRadians_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("GetDepthRange", NULL, (void*)Frustum__GetDepthRange_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetFrustumGeometry", NULL, (void*)Frustum__GetFrustumGeometry_fn, 0, false, ::g::Uno::Geometry::Frustum_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("GetFrustumGeometry", NULL, (void*)Frustum__GetFrustumGeometry1_fn, 0, false, ::g::Uno::Geometry::Frustum_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Rect_typeof()),
        new uFunction("GetProjectionTransform", NULL, (void*)Frustum__GetProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetProjectionTransformInverse", NULL, (void*)Frustum__GetProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetViewTransform", NULL, (void*)Frustum__GetViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetViewTransformInverse", NULL, (void*)Frustum__GetViewTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetWorldPosition", NULL, (void*)Frustum__GetWorldPosition_fn, 0, false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("get_HasExplicitAspect", NULL, (void*)Frustum__get_HasExplicitAspect_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_InverseView", NULL, (void*)Frustum__get_InverseView_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Frustum__New1_fn, 0, true, Frustum_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Frustum__New2_fn, 0, true, Frustum_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Reset", NULL, (void*)Frustum__Reset_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("ResetExplicitAspect", NULL, (void*)Frustum__ResetExplicitAspect_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_View", NULL, (void*)Frustum__get_View_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ZFar", NULL, (void*)Frustum__get_ZFar_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ZFar", NULL, (void*)Frustum__set_ZFar_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ZNear", NULL, (void*)Frustum__get_ZNear_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ZNear", NULL, (void*)Frustum__set_ZNear_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public Frustum() :688
void Frustum__ctor_1_fn(Frustum* __this)
{
    __this->ctor_1();
}

// public Frustum(float fovRadians, float znear, float zfar) :681
void Frustum__ctor_2_fn(Frustum* __this, float* fovRadians1, float* znear, float* zfar)
{
    __this->ctor_2(*fovRadians1, *znear, *zfar);
}

// public float get_ExplicitAspect() :668
void Frustum__get_ExplicitAspect_fn(Frustum* __this, float* __retval)
{
    *__retval = __this->ExplicitAspect();
}

// public void set_ExplicitAspect(float value) :669
void Frustum__set_ExplicitAspect_fn(Frustum* __this, float* value)
{
    __this->ExplicitAspect(*value);
}

// public float get_FovDegrees() :643
void Frustum__get_FovDegrees_fn(Frustum* __this, float* __retval)
{
    *__retval = __this->FovDegrees();
}

// public void set_FovDegrees(float value) :644
void Frustum__set_FovDegrees_fn(Frustum* __this, float* value)
{
    __this->FovDegrees(*value);
}

// public float get_FovRadians() :636
void Frustum__get_FovRadians_fn(Frustum* __this, float* __retval)
{
    *__retval = __this->FovRadians();
}

// public void set_FovRadians(float value) :637
void Frustum__set_FovRadians_fn(Frustum* __this, float* value)
{
    __this->FovRadians(*value);
}

// public float2 GetDepthRange(Fuse.IViewport viewport) :786
void Frustum__GetDepthRange_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetDepthRange(viewport);
}

// public Uno.Geometry.Frustum GetFrustumGeometry(float aspect) :755
void Frustum__GetFrustumGeometry_fn(Frustum* __this, float* aspect1, ::g::Uno::Geometry::Frustum* __retval)
{
    *__retval = __this->GetFrustumGeometry(*aspect1);
}

// public Uno.Geometry.Frustum GetFrustumGeometry(float aspect, Uno.Rect rect) :720
void Frustum__GetFrustumGeometry1_fn(Frustum* __this, float* aspect1, ::g::Uno::Rect* rect, ::g::Uno::Geometry::Frustum* __retval)
{
    *__retval = __this->GetFrustumGeometry1(*aspect1, *rect);
}

// public float4x4 GetProjectionTransform(Fuse.IViewport viewport) :765
void Frustum__GetProjectionTransform_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransform(viewport);
}

// public float4x4 GetProjectionTransformInverse(Fuse.IViewport viewport) :775
void Frustum__GetProjectionTransformInverse_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransformInverse(viewport);
}

// public float4x4 GetViewTransform(Fuse.IViewport viewport) :770
void Frustum__GetViewTransform_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransform(viewport);
}

// public float4x4 GetViewTransformInverse(Fuse.IViewport viewport) :781
void Frustum__GetViewTransformInverse_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransformInverse(viewport);
}

// public float3 GetWorldPosition(Fuse.IViewport viewport) :791
void Frustum__GetWorldPosition_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetWorldPosition(viewport);
}

// public bool get_HasExplicitAspect() :662
void Frustum__get_HasExplicitAspect_fn(Frustum* __this, bool* __retval)
{
    *__retval = __this->HasExplicitAspect();
}

// public float4x4 get_InverseView() :713
void Frustum__get_InverseView_fn(Frustum* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->InverseView();
}

// public Frustum New() :688
void Frustum__New1_fn(Frustum** __retval)
{
    *__retval = Frustum::New1();
}

// public Frustum New(float fovRadians, float znear, float zfar) :681
void Frustum__New2_fn(float* fovRadians1, float* znear, float* zfar, Frustum** __retval)
{
    *__retval = Frustum::New2(*fovRadians1, *znear, *zfar);
}

// protected override sealed void OnAdded(Fuse.Entities.Entity e) :620
void Frustum__OnAdded_fn(Frustum* __this, ::g::Fuse::Entities::Entity* e)
{
}

// protected override sealed void OnRemoved(Fuse.Entities.Entity e) :624
void Frustum__OnRemoved_fn(Frustum* __this, ::g::Fuse::Entities::Entity* e)
{
}

// public void Reset() :695
void Frustum__Reset_fn(Frustum* __this)
{
    __this->Reset();
}

// public void ResetExplicitAspect() :676
void Frustum__ResetExplicitAspect_fn(Frustum* __this)
{
    __this->ResetExplicitAspect();
}

// public float4x4 get_View() :705
void Frustum__get_View_fn(Frustum* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->View();
}

// private float ViewportAspect(Fuse.IViewport viewport) :760
void Frustum__ViewportAspect_fn(Frustum* __this, uObject* viewport, float* __retval)
{
    *__retval = __this->ViewportAspect(viewport);
}

// public float get_ZFar() :655
void Frustum__get_ZFar_fn(Frustum* __this, float* __retval)
{
    *__retval = __this->ZFar();
}

// public void set_ZFar(float value) :656
void Frustum__set_ZFar_fn(Frustum* __this, float* value)
{
    __this->ZFar(*value);
}

// public float get_ZNear() :649
void Frustum__get_ZNear_fn(Frustum* __this, float* __retval)
{
    *__retval = __this->ZNear();
}

// public void set_ZNear(float value) :650
void Frustum__set_ZNear_fn(Frustum* __this, float* value)
{
    __this->ZNear(*value);
}

// public Frustum() [instance] :688
void Frustum::ctor_1()
{
    uStackFrame __("Fuse.Entities.Frustum", ".ctor()");
    _aspect = 1.0f;
    ctor_();
    FovRadians(0.7853982f);
    ZNear(1.0f);
    ZFar(1000.0f);
}

// public Frustum(float fovRadians, float znear, float zfar) [instance] :681
void Frustum::ctor_2(float fovRadians1, float znear, float zfar)
{
    uStackFrame __("Fuse.Entities.Frustum", ".ctor(float,float,float)");
    _aspect = 1.0f;
    ctor_();
    FovRadians(fovRadians1);
    ZNear(znear);
    ZFar(zfar);
}

// public float get_ExplicitAspect() [instance] :668
float Frustum::ExplicitAspect()
{
    uStackFrame __("Fuse.Entities.Frustum", "get_ExplicitAspect()");
    return _aspect;
}

// public void set_ExplicitAspect(float value) [instance] :669
void Frustum::ExplicitAspect(float value)
{
    uStackFrame __("Fuse.Entities.Frustum", "set_ExplicitAspect(float)");
    _aspect = value;
    _hasExplicitAspect = true;
}

// public float get_FovDegrees() [instance] :643
float Frustum::FovDegrees()
{
    uStackFrame __("Fuse.Entities.Frustum", "get_FovDegrees()");
    return (FovRadians() / 3.14159274f) * 180.0f;
}

// public void set_FovDegrees(float value) [instance] :644
void Frustum::FovDegrees(float value)
{
    uStackFrame __("Fuse.Entities.Frustum", "set_FovDegrees(float)");
    FovRadians((value / 180.0f) * 3.14159274f);
}

// public float get_FovRadians() [instance] :636
float Frustum::FovRadians()
{
    uStackFrame __("Fuse.Entities.Frustum", "get_FovRadians()");
    return fovRadians;
}

// public void set_FovRadians(float value) [instance] :637
void Frustum::FovRadians(float value)
{
    uStackFrame __("Fuse.Entities.Frustum", "set_FovRadians(float)");
    fovRadians = value;
}

// public float2 GetDepthRange(Fuse.IViewport viewport) [instance] :786
::g::Uno::Float2 Frustum::GetDepthRange(uObject* viewport)
{
    uStackFrame __("Fuse.Entities.Frustum", "GetDepthRange(Fuse.IViewport)");
    return ::g::Uno::Float2__New2(ZNear(), ZFar());
}

// public Uno.Geometry.Frustum GetFrustumGeometry(float aspect) [instance] :755
::g::Uno::Geometry::Frustum Frustum::GetFrustumGeometry(float aspect1)
{
    uStackFrame __("Fuse.Entities.Frustum", "GetFrustumGeometry(float)");
    return GetFrustumGeometry1(aspect1, ::g::Uno::Rect__New1(-1.0f, 1.0f, 1.0f, -1.0f));
}

// public Uno.Geometry.Frustum GetFrustumGeometry(float aspect, Uno.Rect rect) [instance] :720
::g::Uno::Geometry::Frustum Frustum::GetFrustumGeometry1(float aspect1, ::g::Uno::Rect rect)
{
    uStackFrame __("Fuse.Entities.Frustum", "GetFrustumGeometry(float,Uno.Rect)");
    ::g::Uno::Float3 position = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), InverseView());
    ::g::Uno::Float3 xAxis = ::g::Uno::Vector::TransformNormal1(::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), InverseView());
    ::g::Uno::Float3 yAxis = ::g::Uno::Vector::TransformNormal1(::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), InverseView());
    ::g::Uno::Float3 zAxis = ::g::Uno::Vector::TransformNormal1(::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), InverseView());
    float yScale = ::g::Uno::Math::Tan1(fovRadians * 0.5f);
    float xScale = yScale * aspect1;
    float halfWidthNear = zNear * xScale;
    float halfHeightNear = zNear * yScale;
    ::g::Uno::Float3 fc = ::g::Uno::Float3__op_Addition2(position, ::g::Uno::Float3__op_Multiply1(zAxis, zFar));
    ::g::Uno::Float3 nc = ::g::Uno::Float3__op_Addition2(position, ::g::Uno::Float3__op_Multiply1(zAxis, zNear));
    ::g::Uno::Geometry::Frustum result;
    result.Near = ::g::Uno::Geometry::Plane__New3(nc, ::g::Uno::Float3__op_UnaryNegation(zAxis));
    result.Far = ::g::Uno::Geometry::Plane__New3(fc, zAxis);
    result.Left = ::g::Uno::Geometry::Plane__New3(position, ::g::Uno::Vector::Cross(::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__op_Subtraction2(nc, ::g::Uno::Float3__op_Multiply1(xAxis, halfWidthNear * rect.Left)), position)), yAxis));
    result.Bottom = ::g::Uno::Geometry::Plane__New3(position, ::g::Uno::Vector::Cross(::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__op_Addition2(nc, ::g::Uno::Float3__op_Multiply1(yAxis, halfHeightNear * rect.Bottom)), position)), xAxis));
    result.Top = ::g::Uno::Geometry::Plane__New3(position, ::g::Uno::Vector::Cross(xAxis, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__op_Addition2(nc, ::g::Uno::Float3__op_Multiply1(yAxis, halfHeightNear * rect.Top)), position))));
    result.Right = ::g::Uno::Geometry::Plane__New3(position, ::g::Uno::Vector::Cross(yAxis, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__op_Subtraction2(nc, ::g::Uno::Float3__op_Multiply1(xAxis, halfWidthNear * rect.Right)), position))));
    result.Normalize();
    result.Near.Normal = ::g::Uno::Float3__op_Multiply1(result.Near.Normal, -1.0f);
    result.Near.D = (result.Near.D * -1.0f);
    return result;
}

// public float4x4 GetProjectionTransform(Fuse.IViewport viewport) [instance] :765
::g::Uno::Float4x4 Frustum::GetProjectionTransform(uObject* viewport)
{
    uStackFrame __("Fuse.Entities.Frustum", "GetProjectionTransform(Fuse.IViewport)");
    return ::g::Uno::Matrix::PerspectiveRH(FovRadians(), ViewportAspect(viewport), ZNear(), ZFar());
}

// public float4x4 GetProjectionTransformInverse(Fuse.IViewport viewport) [instance] :775
::g::Uno::Float4x4 Frustum::GetProjectionTransformInverse(uObject* viewport)
{
    uStackFrame __("Fuse.Entities.Frustum", "GetProjectionTransformInverse(Fuse.IViewport)");
    return ::g::Uno::Matrix::Invert2(GetProjectionTransform(viewport));
}

// public float4x4 GetViewTransform(Fuse.IViewport viewport) [instance] :770
::g::Uno::Float4x4 Frustum::GetViewTransform(uObject* viewport)
{
    uStackFrame __("Fuse.Entities.Frustum", "GetViewTransform(Fuse.IViewport)");
    return View();
}

// public float4x4 GetViewTransformInverse(Fuse.IViewport viewport) [instance] :781
::g::Uno::Float4x4 Frustum::GetViewTransformInverse(uObject* viewport)
{
    uStackFrame __("Fuse.Entities.Frustum", "GetViewTransformInverse(Fuse.IViewport)");
    return InverseView();
}

// public float3 GetWorldPosition(Fuse.IViewport viewport) [instance] :791
::g::Uno::Float3 Frustum::GetWorldPosition(uObject* viewport)
{
    uStackFrame __("Fuse.Entities.Frustum", "GetWorldPosition(Fuse.IViewport)");
    return uPtr(Entity())->WorldPosition();
}

// public bool get_HasExplicitAspect() [instance] :662
bool Frustum::HasExplicitAspect()
{
    uStackFrame __("Fuse.Entities.Frustum", "get_HasExplicitAspect()");
    return _hasExplicitAspect;
}

// public float4x4 get_InverseView() [instance] :713
::g::Uno::Float4x4 Frustum::InverseView()
{
    uStackFrame __("Fuse.Entities.Frustum", "get_InverseView()");
    return uPtr(Entity())->WorldTransform();
}

// public void Reset() [instance] :695
void Frustum::Reset()
{
    uStackFrame __("Fuse.Entities.Frustum", "Reset()");
    FovRadians(0.7853982f);
    ZNear(1.0f);
    ZFar(1000.0f);
}

// public void ResetExplicitAspect() [instance] :676
void Frustum::ResetExplicitAspect()
{
    uStackFrame __("Fuse.Entities.Frustum", "ResetExplicitAspect()");
    _hasExplicitAspect = false;
}

// public float4x4 get_View() [instance] :705
::g::Uno::Float4x4 Frustum::View()
{
    uStackFrame __("Fuse.Entities.Frustum", "get_View()");
    return uPtr(Entity())->WorldTransformInverse();
}

// private float ViewportAspect(Fuse.IViewport viewport) [instance] :760
float Frustum::ViewportAspect(uObject* viewport)
{
    uStackFrame __("Fuse.Entities.Frustum", "ViewportAspect(Fuse.IViewport)");
    return HasExplicitAspect() ? ExplicitAspect() : ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[31/*Fuse.IViewport*/])).X / ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[31/*Fuse.IViewport*/])).Y;
}

// public float get_ZFar() [instance] :655
float Frustum::ZFar()
{
    uStackFrame __("Fuse.Entities.Frustum", "get_ZFar()");
    return zFar;
}

// public void set_ZFar(float value) [instance] :656
void Frustum::ZFar(float value)
{
    uStackFrame __("Fuse.Entities.Frustum", "set_ZFar(float)");
    zFar = value;
}

// public float get_ZNear() [instance] :649
float Frustum::ZNear()
{
    uStackFrame __("Fuse.Entities.Frustum", "get_ZNear()");
    return zNear;
}

// public void set_ZNear(float value) [instance] :650
void Frustum::ZNear(float value)
{
    uStackFrame __("Fuse.Entities.Frustum", "set_ZNear(float)");
    zNear = value;
}

// public Frustum New() [static] :688
Frustum* Frustum::New1()
{
    Frustum* obj2 = (Frustum*)uNew(Frustum_typeof());
    obj2->ctor_1();
    return obj2;
}

// public Frustum New(float fovRadians, float znear, float zfar) [static] :681
Frustum* Frustum::New2(float fovRadians1, float znear, float zfar)
{
    Frustum* obj1 = (Frustum*)uNew(Frustum_typeof());
    obj1->ctor_2(fovRadians1, znear, zfar);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(811)
// --------------------------------------------------------------

// public abstract interface ILightVisitor :811
// {
uInterfaceType* ILightVisitor_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Entities.ILightVisitor", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Visit", NULL, NULL, offsetof(ILightVisitor, fp_Visit), false, uVoid_typeof(), 1, ::g::Fuse::Entities::DirectionalLight_typeof()),
        new uFunction("Visit", NULL, NULL, offsetof(ILightVisitor, fp_Visit1), false, uVoid_typeof(), 1, ::g::Fuse::Entities::EnvironmentLight_typeof()),
        new uFunction("Visit", NULL, NULL, offsetof(ILightVisitor, fp_Visit2), false, uVoid_typeof(), 1, ::g::Fuse::Entities::Light_typeof()),
        new uFunction("Visit", NULL, NULL, offsetof(ILightVisitor, fp_Visit3), false, uVoid_typeof(), 1, ::g::Fuse::Entities::PointLight_typeof()),
        new uFunction("Visit", NULL, NULL, offsetof(ILightVisitor, fp_Visit4), false, uVoid_typeof(), 1, ::g::Fuse::Entities::SpotLight_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1581)
// ---------------------------------------------------------------

// private sealed class ModelMeshCollision.Indexed :1581
// {
::g::Fuse::Entities::TriangleMeshIntersecter_type* ModelMeshCollision__Indexed_typeof()
{
    static uSStrong< ::g::Fuse::Entities::TriangleMeshIntersecter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ModelMeshCollision__Indexed);
    options.TypeSize = sizeof(::g::Fuse::Entities::TriangleMeshIntersecter_type);
    type = (::g::Fuse::Entities::TriangleMeshIntersecter_type*)uClassType::New("Fuse.Entities.ModelMeshCollision.Indexed", options);
    type->SetBase(::g::Fuse::Entities::TriangleMeshIntersecter_typeof());
    type->fp_GetTriangle = (void(*)(::g::Fuse::Entities::TriangleMeshIntersecter*, int*, ::g::Uno::Geometry::Triangle*))ModelMeshCollision__Indexed__GetTriangle_fn;
    ::STRINGS[0] = uString::Const("positions can not be null");
    ::STRINGS[1] = uString::Const("indices can not be null");
    ::TYPES[0] = ::g::Uno::Float4_typeof();
    type->SetFields(1,
        ::g::Uno::Content::Models::IndexArray_typeof(), offsetof(::g::Fuse::Entities::ModelMeshCollision__Indexed, _indices), 0,
        ::g::Uno::Content::Models::VertexAttributeArray_typeof(), offsetof(::g::Fuse::Entities::ModelMeshCollision__Indexed, _positions), 0);
    return type;
}

// public Indexed(Uno.Content.Models.VertexAttributeArray positions, Uno.Content.Models.IndexArray indices, int indexCount) :1586
void ModelMeshCollision__Indexed__ctor_1_fn(ModelMeshCollision__Indexed* __this, ::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int* indexCount)
{
    __this->ctor_1(positions, indices, *indexCount);
}

// protected override sealed Uno.Geometry.Triangle GetTriangle(int t) :1596
void ModelMeshCollision__Indexed__GetTriangle_fn(ModelMeshCollision__Indexed* __this, int* t, ::g::Uno::Geometry::Triangle* __retval)
{
    uStackFrame __("Fuse.Entities.ModelMeshCollision.Indexed", "GetTriangle(int)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    int t_ = *t;
    int i = t_ * 3;
    return *__retval = ::g::Uno::Geometry::Triangle__New1((ind1 = uPtr(__this->_positions)->GetFloat4(uPtr(__this->_indices)->GetInt(i)), ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z)), (ind2 = uPtr(__this->_positions)->GetFloat4(uPtr(__this->_indices)->GetInt(i + 1)), ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z)), (ind3 = uPtr(__this->_positions)->GetFloat4(uPtr(__this->_indices)->GetInt(i + 2)), ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z))), void();
}

// public Indexed New(Uno.Content.Models.VertexAttributeArray positions, Uno.Content.Models.IndexArray indices, int indexCount) :1586
void ModelMeshCollision__Indexed__New1_fn(::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int* indexCount, ModelMeshCollision__Indexed** __retval)
{
    *__retval = ModelMeshCollision__Indexed::New1(positions, indices, *indexCount);
}

// public Indexed(Uno.Content.Models.VertexAttributeArray positions, Uno.Content.Models.IndexArray indices, int indexCount) [instance] :1586
void ModelMeshCollision__Indexed::ctor_1(::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int indexCount)
{
    uStackFrame __("Fuse.Entities.ModelMeshCollision.Indexed", ".ctor(Uno.Content.Models.VertexAttributeArray,Uno.Content.Models.IndexArray,int)");
    ctor_(indexCount / 3);

    if (positions == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"positions c...*/]));

    if (indices == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"indices can...*/]));

    _positions = positions;
    _indices = indices;
}

// public Indexed New(Uno.Content.Models.VertexAttributeArray positions, Uno.Content.Models.IndexArray indices, int indexCount) [static] :1586
ModelMeshCollision__Indexed* ModelMeshCollision__Indexed::New1(::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int indexCount)
{
    ModelMeshCollision__Indexed* obj4 = (ModelMeshCollision__Indexed*)uNew(ModelMeshCollision__Indexed_typeof());
    obj4->ctor_1(positions, indices, indexCount);
    return obj4;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(2828)
// ---------------------------------------------------------------

// internal sealed class IndexedArrayMeshIntersecter :2828
// {
::g::Fuse::Entities::TriangleMeshIntersecter_type* IndexedArrayMeshIntersecter_typeof()
{
    static uSStrong< ::g::Fuse::Entities::TriangleMeshIntersecter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IndexedArrayMeshIntersecter);
    options.TypeSize = sizeof(::g::Fuse::Entities::TriangleMeshIntersecter_type);
    type = (::g::Fuse::Entities::TriangleMeshIntersecter_type*)uClassType::New("Fuse.Entities.IndexedArrayMeshIntersecter", options);
    type->SetBase(::g::Fuse::Entities::TriangleMeshIntersecter_typeof());
    type->fp_GetTriangle = (void(*)(::g::Fuse::Entities::TriangleMeshIntersecter*, int*, ::g::Uno::Geometry::Triangle*))IndexedArrayMeshIntersecter__GetTriangle_fn;
    ::STRINGS[0] = uString::Const("positions can not be null");
    ::STRINGS[1] = uString::Const("indices can not be null");
    ::TYPES[32] = ::g::Uno::Int_typeof()->Array();
    type->SetFields(1,
        ::g::Uno::Int_typeof()->Array(), offsetof(::g::Fuse::Entities::IndexedArrayMeshIntersecter, _indices), 0,
        ::g::Uno::Float3_typeof()->Array(), offsetof(::g::Fuse::Entities::IndexedArrayMeshIntersecter, _positions), 0);
    return type;
}

// public IndexedArrayMeshIntersecter(float3[] positions, int[] indices) :2833
void IndexedArrayMeshIntersecter__ctor_1_fn(IndexedArrayMeshIntersecter* __this, uArray* positions, uArray* indices)
{
    __this->ctor_1(positions, indices);
}

// protected override sealed Uno.Geometry.Triangle GetTriangle(int t) :2843
void IndexedArrayMeshIntersecter__GetTriangle_fn(IndexedArrayMeshIntersecter* __this, int* t, ::g::Uno::Geometry::Triangle* __retval)
{
    uStackFrame __("Fuse.Entities.IndexedArrayMeshIntersecter", "GetTriangle(int)");
    int t_ = *t;
    int i = t_ * 3;
    return *__retval = ::g::Uno::Geometry::Triangle__New1(uPtr(__this->_positions)->Item< ::g::Uno::Float3>(uPtr(__this->_indices)->Item<int>(i)), uPtr(__this->_positions)->Item< ::g::Uno::Float3>(uPtr(__this->_indices)->Item<int>(i + 1)), uPtr(__this->_positions)->Item< ::g::Uno::Float3>(uPtr(__this->_indices)->Item<int>(i + 2))), void();
}

// public IndexedArrayMeshIntersecter New(float3[] positions, int[] indices) :2833
void IndexedArrayMeshIntersecter__New1_fn(uArray* positions, uArray* indices, IndexedArrayMeshIntersecter** __retval)
{
    *__retval = IndexedArrayMeshIntersecter::New1(positions, indices);
}

// public IndexedArrayMeshIntersecter(float3[] positions, int[] indices) [instance] :2833
void IndexedArrayMeshIntersecter::ctor_1(uArray* positions, uArray* indices)
{
    uStackFrame __("Fuse.Entities.IndexedArrayMeshIntersecter", ".ctor(float3[],int[])");
    ctor_(uPtr(indices)->Length() / 3);

    if (positions == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"positions c...*/]));

    if (indices == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"indices can...*/]));

    _positions = positions;
    _indices = indices;
}

// public IndexedArrayMeshIntersecter New(float3[] positions, int[] indices) [static] :2833
IndexedArrayMeshIntersecter* IndexedArrayMeshIntersecter::New1(uArray* positions, uArray* indices)
{
    IndexedArrayMeshIntersecter* obj1 = (IndexedArrayMeshIntersecter*)uNew(IndexedArrayMeshIntersecter_typeof());
    obj1->ctor_1(positions, indices);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(821)
// --------------------------------------------------------------

// public abstract class Light :821
// {
Light_type* Light_typeof()
{
    static uSStrong<Light_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Light);
    options.TypeSize = sizeof(Light_type);
    type = (Light_type*)uClassType::New("Fuse.Entities.Light", options);
    type->SetBase(::g::Fuse::Entities::Component_typeof());
    type->fp_Accept = Light__Accept_fn;
    type->fp_OnAdded = (void(*)(::g::Fuse::Entities::Component*, ::g::Fuse::Entities::Entity*))Light__OnAdded_fn;
    type->fp_OnRemoved = (void(*)(::g::Fuse::Entities::Component*, ::g::Fuse::Entities::Entity*))Light__OnRemoved_fn;
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Light, showSprite), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Light, _CastShadow), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::Light, _Color), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Light, _Multiplier), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Light, _Range), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Light, _ShadowMapDepthBias), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Light, _ShadowMapNearPlane), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Entities::Light, _ShadowMapResolution), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("Accept", NULL, NULL, offsetof(Light_type, fp_Accept), false, uVoid_typeof(), 1, ::g::Fuse::Entities::ILightVisitor_typeof()),
        new uFunction("get_CastShadow", NULL, (void*)Light__get_CastShadow_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_CastShadow", NULL, (void*)Light__set_CastShadow_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Color", NULL, (void*)Light__get_Color_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)Light__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_Multiplier", NULL, (void*)Light__get_Multiplier_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Multiplier", NULL, (void*)Light__set_Multiplier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Range", NULL, (void*)Light__get_Range_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Range", NULL, (void*)Light__set_Range_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ShadowMapDepthBias", NULL, (void*)Light__get_ShadowMapDepthBias_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ShadowMapDepthBias", NULL, (void*)Light__set_ShadowMapDepthBias_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ShadowMapNearPlane", NULL, (void*)Light__get_ShadowMapNearPlane_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ShadowMapNearPlane", NULL, (void*)Light__set_ShadowMapNearPlane_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ShadowMapResolution", NULL, (void*)Light__get_ShadowMapResolution_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ShadowMapResolution", NULL, (void*)Light__set_ShadowMapResolution_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_ShowDesignerSprite", NULL, (void*)Light__get_ShowDesignerSprite_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowDesignerSprite", NULL, (void*)Light__set_ShowDesignerSprite_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// protected Light() :851
void Light__ctor_1_fn(Light* __this)
{
    __this->ctor_1();
}

// public virtual void Accept(Fuse.Entities.ILightVisitor visitor) :861
void Light__Accept_fn(Light* __this, uObject* visitor)
{
    uStackFrame __("Fuse.Entities.Light", "Accept(Fuse.Entities.ILightVisitor)");
    ::g::Fuse::Entities::ILightVisitor::Visit2(uInterface(uPtr(visitor), ::g::Fuse::Entities::ILightVisitor_typeof()), __this);
}

// public generated bool get_CastShadow() :833
void Light__get_CastShadow_fn(Light* __this, bool* __retval)
{
    *__retval = __this->CastShadow();
}

// public generated void set_CastShadow(bool value) :833
void Light__set_CastShadow_fn(Light* __this, bool* value)
{
    __this->CastShadow(*value);
}

// public generated float3 get_Color() :827
void Light__get_Color_fn(Light* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Color();
}

// public generated void set_Color(float3 value) :827
void Light__set_Color_fn(Light* __this, ::g::Uno::Float3* value)
{
    __this->Color(*value);
}

// public generated float get_Multiplier() :830
void Light__get_Multiplier_fn(Light* __this, float* __retval)
{
    *__retval = __this->Multiplier();
}

// public generated void set_Multiplier(float value) :830
void Light__set_Multiplier_fn(Light* __this, float* value)
{
    __this->Multiplier(*value);
}

// protected override sealed void OnAdded(Fuse.Entities.Entity e) :866
void Light__OnAdded_fn(Light* __this, ::g::Fuse::Entities::Entity* e)
{
}

// protected override sealed void OnRemoved(Fuse.Entities.Entity e) :867
void Light__OnRemoved_fn(Light* __this, ::g::Fuse::Entities::Entity* e)
{
}

// public generated float get_Range() :824
void Light__get_Range_fn(Light* __this, float* __retval)
{
    *__retval = __this->Range();
}

// public generated void set_Range(float value) :824
void Light__set_Range_fn(Light* __this, float* value)
{
    __this->Range(*value);
}

// public generated float get_ShadowMapDepthBias() :842
void Light__get_ShadowMapDepthBias_fn(Light* __this, float* __retval)
{
    *__retval = __this->ShadowMapDepthBias();
}

// public generated void set_ShadowMapDepthBias(float value) :842
void Light__set_ShadowMapDepthBias_fn(Light* __this, float* value)
{
    __this->ShadowMapDepthBias(*value);
}

// public generated float get_ShadowMapNearPlane() :836
void Light__get_ShadowMapNearPlane_fn(Light* __this, float* __retval)
{
    *__retval = __this->ShadowMapNearPlane();
}

// public generated void set_ShadowMapNearPlane(float value) :836
void Light__set_ShadowMapNearPlane_fn(Light* __this, float* value)
{
    __this->ShadowMapNearPlane(*value);
}

// public generated int get_ShadowMapResolution() :839
void Light__get_ShadowMapResolution_fn(Light* __this, int* __retval)
{
    *__retval = __this->ShadowMapResolution();
}

// public generated void set_ShadowMapResolution(int value) :839
void Light__set_ShadowMapResolution_fn(Light* __this, int* value)
{
    __this->ShadowMapResolution(*value);
}

// public bool get_ShowDesignerSprite() :849
void Light__get_ShowDesignerSprite_fn(Light* __this, bool* __retval)
{
    *__retval = __this->ShowDesignerSprite();
}

// public void set_ShowDesignerSprite(bool value) :849
void Light__set_ShowDesignerSprite_fn(Light* __this, bool* value)
{
    __this->ShowDesignerSprite(*value);
}

// protected Light() [instance] :851
void Light::ctor_1()
{
    uStackFrame __("Fuse.Entities.Light", ".ctor()");
    showSprite = true;
    ctor_();
    Color(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    Multiplier(1.0f);
    ShadowMapResolution(1024);
    ShadowMapDepthBias(0.5f);
    ShadowMapNearPlane(10.0f);
}

// public generated bool get_CastShadow() [instance] :833
bool Light::CastShadow()
{
    uStackFrame __("Fuse.Entities.Light", "get_CastShadow()");
    return _CastShadow;
}

// public generated void set_CastShadow(bool value) [instance] :833
void Light::CastShadow(bool value)
{
    uStackFrame __("Fuse.Entities.Light", "set_CastShadow(bool)");
    _CastShadow = value;
}

// public generated float3 get_Color() [instance] :827
::g::Uno::Float3 Light::Color()
{
    uStackFrame __("Fuse.Entities.Light", "get_Color()");
    return _Color;
}

// public generated void set_Color(float3 value) [instance] :827
void Light::Color(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Entities.Light", "set_Color(float3)");
    _Color = value;
}

// public generated float get_Multiplier() [instance] :830
float Light::Multiplier()
{
    uStackFrame __("Fuse.Entities.Light", "get_Multiplier()");
    return _Multiplier;
}

// public generated void set_Multiplier(float value) [instance] :830
void Light::Multiplier(float value)
{
    uStackFrame __("Fuse.Entities.Light", "set_Multiplier(float)");
    _Multiplier = value;
}

// public generated float get_Range() [instance] :824
float Light::Range()
{
    uStackFrame __("Fuse.Entities.Light", "get_Range()");
    return _Range;
}

// public generated void set_Range(float value) [instance] :824
void Light::Range(float value)
{
    uStackFrame __("Fuse.Entities.Light", "set_Range(float)");
    _Range = value;
}

// public generated float get_ShadowMapDepthBias() [instance] :842
float Light::ShadowMapDepthBias()
{
    uStackFrame __("Fuse.Entities.Light", "get_ShadowMapDepthBias()");
    return _ShadowMapDepthBias;
}

// public generated void set_ShadowMapDepthBias(float value) [instance] :842
void Light::ShadowMapDepthBias(float value)
{
    uStackFrame __("Fuse.Entities.Light", "set_ShadowMapDepthBias(float)");
    _ShadowMapDepthBias = value;
}

// public generated float get_ShadowMapNearPlane() [instance] :836
float Light::ShadowMapNearPlane()
{
    uStackFrame __("Fuse.Entities.Light", "get_ShadowMapNearPlane()");
    return _ShadowMapNearPlane;
}

// public generated void set_ShadowMapNearPlane(float value) [instance] :836
void Light::ShadowMapNearPlane(float value)
{
    uStackFrame __("Fuse.Entities.Light", "set_ShadowMapNearPlane(float)");
    _ShadowMapNearPlane = value;
}

// public generated int get_ShadowMapResolution() [instance] :839
int Light::ShadowMapResolution()
{
    uStackFrame __("Fuse.Entities.Light", "get_ShadowMapResolution()");
    return _ShadowMapResolution;
}

// public generated void set_ShadowMapResolution(int value) [instance] :839
void Light::ShadowMapResolution(int value)
{
    uStackFrame __("Fuse.Entities.Light", "set_ShadowMapResolution(int)");
    _ShadowMapResolution = value;
}

// public bool get_ShowDesignerSprite() [instance] :849
bool Light::ShowDesignerSprite()
{
    uStackFrame __("Fuse.Entities.Light", "get_ShowDesignerSprite()");
    return showSprite;
}

// public void set_ShowDesignerSprite(bool value) [instance] :849
void Light::ShowDesignerSprite(bool value)
{
    uStackFrame __("Fuse.Entities.Light", "set_ShowDesignerSprite(bool)");
    showSprite = value;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(938)
// --------------------------------------------------------------

// public abstract class Material :938
// {
uType* Material_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Material);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.Material", options);
    type->Reflection.SetFunctions(2,
        new uFunction("Draw", NULL, (void*)Material__Draw_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Fuse::Entities::Mesh_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("get_IsBatchable", NULL, (void*)Material__get_IsBatchable_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// protected generated Material() :938
void Material__ctor__fn(Material* __this)
{
    __this->ctor_();
}

// public bool Draw(Fuse.Entities.Mesh m, float4x4 transform) :945
void Material__Draw_fn(Material* __this, ::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4* transform, bool* __retval)
{
    *__retval = __this->Draw(m, *transform);
}

// public bool get_IsBatchable() :942
void Material__get_IsBatchable_fn(Material* __this, bool* __retval)
{
    *__retval = __this->IsBatchable();
}

// protected generated Material() [instance] :938
void Material::ctor_()
{
}

// public bool Draw(Fuse.Entities.Mesh m, float4x4 transform) [instance] :945
bool Material::Draw(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4 transform)
{
    uStackFrame __("Fuse.Entities.Material", "Draw(Fuse.Entities.Mesh,float4x4)");
    return false;
}

// public bool get_IsBatchable() [instance] :942
bool Material::IsBatchable()
{
    uStackFrame __("Fuse.Entities.Material", "get_IsBatchable()");
    return true;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(968)
// --------------------------------------------------------------

// public sealed class Mesh :968
// {
Mesh_type* Mesh_typeof()
{
    static uSStrong<Mesh_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mesh);
    options.TypeSize = sizeof(Mesh_type);
    type = (Mesh_type*)uClassType::New("Fuse.Entities.Mesh", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))Mesh__Dispose_fn;
    ::TYPES[33] = ::g::Uno::Bool_typeof();
    ::TYPES[34] = ::g::Uno::Content::Models::ModelMesh_typeof();
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[36] = ::g::Uno::Content::Models::IndexArray_typeof();
    ::TYPES[37] = ::g::Fuse::Drawing::Batching::Batch_typeof()->Array();
    ::TYPES[38] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Batching::Batch_typeof());
    ::TYPES[39] = ::g::Fuse::Drawing::Batching::MeshBatcher_typeof();
    ::TYPES[40] = ::g::Uno::Content::Models::ModelDrawable_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Mesh_type, interface0));
    type->SetFields(0,
        ::g::Uno::Content::Models::ModelDrawable_typeof(), offsetof(::g::Fuse::Entities::Mesh, _drawable), 0,
        ::g::Uno::Geometry::Box_typeof(), offsetof(::g::Fuse::Entities::Mesh, _meshBox), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Mesh, _meshBoxDirty), 0,
        ::g::Uno::Geometry::Sphere_typeof(), offsetof(::g::Fuse::Entities::Mesh, _meshSphere), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Mesh, _meshSphereDirty), 0,
        ::g::Fuse::Drawing::Batching::MeshBatcher_typeof(), offsetof(::g::Fuse::Entities::Mesh, batcher), 0,
        ::g::Fuse::Drawing::Batching::Batch_typeof()->Array(), offsetof(::g::Fuse::Entities::Mesh, batches), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Mesh, isDirty), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Batches", NULL, (void*)Mesh__get_Batches_fn, 0, false, ::g::Fuse::Drawing::Batching::Batch_typeof()->Array(), 0),
        new uFunction("get_BoundingBox", NULL, (void*)Mesh__get_BoundingBox_fn, 0, false, ::g::Uno::Geometry::Box_typeof(), 0),
        new uFunction("get_BoundingSphere", NULL, (void*)Mesh__get_BoundingSphere_fn, 0, false, ::g::Uno::Geometry::Sphere_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)Mesh__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Drawable", NULL, (void*)Mesh__get_Drawable_fn, 0, false, ::g::Uno::Content::Models::ModelDrawable_typeof(), 0),
        new uFunction("get_FirstBatch", NULL, (void*)Mesh__get_FirstBatch_fn, 0, false, ::g::Fuse::Drawing::Batching::Batch_typeof(), 0),
        new uFunction("Flush", NULL, (void*)Mesh__Flush_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Invalidate", NULL, (void*)Mesh__Invalidate_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Mesh__New1_fn, 0, true, Mesh_typeof(), 1, ::g::Uno::Content::Models::ModelDrawable_typeof()),
        new uFunction(".ctor", NULL, (void*)Mesh__New2_fn, 0, true, Mesh_typeof(), 1, ::g::Uno::Content::Models::ModelMesh_typeof()));
    return type;
}

// public Mesh(Uno.Content.Models.ModelDrawable modelDrawable) :1034
void Mesh__ctor__fn(Mesh* __this, ::g::Uno::Content::Models::ModelDrawable* modelDrawable)
{
    __this->ctor_(modelDrawable);
}

// public Mesh(Uno.Content.Models.ModelMesh modelMesh) :1030
void Mesh__ctor_1_fn(Mesh* __this, ::g::Uno::Content::Models::ModelMesh* modelMesh)
{
    __this->ctor_1(modelMesh);
}

// public Fuse.Drawing.Batching.Batch[] get_Batches() :1018
void Mesh__get_Batches_fn(Mesh* __this, uArray** __retval)
{
    *__retval = __this->Batches();
}

// public Uno.Geometry.Box get_BoundingBox() :989
void Mesh__get_BoundingBox_fn(Mesh* __this, ::g::Uno::Geometry::Box* __retval)
{
    *__retval = __this->BoundingBox();
}

// public Uno.Geometry.Sphere get_BoundingSphere() :1005
void Mesh__get_BoundingSphere_fn(Mesh* __this, ::g::Uno::Geometry::Sphere* __retval)
{
    *__retval = __this->BoundingSphere();
}

// public void Dispose() :982
void Mesh__Dispose_fn(Mesh* __this)
{
    __this->Dispose();
}

// public Uno.Content.Models.ModelDrawable get_Drawable() :971
void Mesh__get_Drawable_fn(Mesh* __this, ::g::Uno::Content::Models::ModelDrawable** __retval)
{
    *__retval = __this->Drawable();
}

// public Fuse.Drawing.Batching.Batch get_FirstBatch() :1027
void Mesh__get_FirstBatch_fn(Mesh* __this, ::g::Fuse::Drawing::Batching::Batch** __retval)
{
    *__retval = __this->FirstBatch();
}

// public void Flush() :1044
void Mesh__Flush_fn(Mesh* __this)
{
    __this->Flush();
}

// public void Invalidate() :1039
void Mesh__Invalidate_fn(Mesh* __this)
{
    __this->Invalidate();
}

// internal Uno.Content.Models.ModelMesh get_ModelMesh() :973
void Mesh__get_ModelMesh_fn(Mesh* __this, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = __this->ModelMesh();
}

// public Mesh New(Uno.Content.Models.ModelDrawable modelDrawable) :1034
void Mesh__New1_fn(::g::Uno::Content::Models::ModelDrawable* modelDrawable, Mesh** __retval)
{
    *__retval = Mesh::New1(modelDrawable);
}

// public Mesh New(Uno.Content.Models.ModelMesh modelMesh) :1030
void Mesh__New2_fn(::g::Uno::Content::Models::ModelMesh* modelMesh, Mesh** __retval)
{
    *__retval = Mesh::New2(modelMesh);
}

// public Mesh(Uno.Content.Models.ModelDrawable modelDrawable) [instance] :1034
void Mesh::ctor_(::g::Uno::Content::Models::ModelDrawable* modelDrawable)
{
    uStackFrame __("Fuse.Entities.Mesh", ".ctor(Uno.Content.Models.ModelDrawable)");
    _meshBoxDirty = true;
    isDirty = true;
    _meshSphereDirty = true;
    _drawable = modelDrawable;
}

// public Mesh(Uno.Content.Models.ModelMesh modelMesh) [instance] :1030
void Mesh::ctor_1(::g::Uno::Content::Models::ModelMesh* modelMesh)
{
    uStackFrame __("Fuse.Entities.Mesh", ".ctor(Uno.Content.Models.ModelMesh)");
    _meshBoxDirty = true;
    isDirty = true;
    _meshSphereDirty = true;
    ctor_(::g::Uno::Content::Models::ModelDrawable::New1(modelMesh, NULL));
}

// public Fuse.Drawing.Batching.Batch[] get_Batches() [instance] :1018
uArray* Mesh::Batches()
{
    uStackFrame __("Fuse.Entities.Mesh", "get_Batches()");

    if (isDirty)
        Flush();

    uArray* ind1 = batches;
    return (ind1 != NULL) ? ind1 : (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[38/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.Batching.Batch>*/], uPtr(batcher)->Batches());
}

// public Uno.Geometry.Box get_BoundingBox() [instance] :989
::g::Uno::Geometry::Box Mesh::BoundingBox()
{
    uStackFrame __("Fuse.Entities.Mesh", "get_BoundingBox()");

    if (_meshBoxDirty)
    {
        _meshBox = ::g::Fuse::Entities::ModelMeshHelpers::CalculateAABB(ModelMesh());
        _meshBoxDirty = false;
    }

    return _meshBox;
}

// public Uno.Geometry.Sphere get_BoundingSphere() [instance] :1005
::g::Uno::Geometry::Sphere Mesh::BoundingSphere()
{
    uStackFrame __("Fuse.Entities.Mesh", "get_BoundingSphere()");

    if (_meshSphereDirty)
    {
        _meshSphere = ::g::Fuse::Entities::ModelMeshHelpers::CalculateBoundingSphere(ModelMesh());
        _meshSphereDirty = false;
    }

    return _meshSphere;
}

// public void Dispose() [instance] :982
void Mesh::Dispose()
{
}

// public Uno.Content.Models.ModelDrawable get_Drawable() [instance] :971
::g::Uno::Content::Models::ModelDrawable* Mesh::Drawable()
{
    uStackFrame __("Fuse.Entities.Mesh", "get_Drawable()");
    return _drawable;
}

// public Fuse.Drawing.Batching.Batch get_FirstBatch() [instance] :1027
::g::Fuse::Drawing::Batching::Batch* Mesh::FirstBatch()
{
    uStackFrame __("Fuse.Entities.Mesh", "get_FirstBatch()");
    return uPtr(Batches())->Strong< ::g::Fuse::Drawing::Batching::Batch*>(0);
}

// public void Flush() [instance] :1044
void Mesh::Flush()
{
    uStackFrame __("Fuse.Entities.Mesh", "Flush()");

    if (!isDirty)
        return;

    if (((ModelMesh() != NULL) && (uPtr(ModelMesh())->Indices() != NULL)) && (uPtr(uPtr(ModelMesh())->Indices())->Type() == 4))
    {
        batcher = ::g::Fuse::Drawing::Batching::MeshBatcher::New1();
        uPtr(batcher)->AddMesh(ModelMesh());
        uPtr(batcher)->Flush();
        batches = NULL;
    }
    else
    {
        batcher = NULL;
        batches = uArray::Init< ::g::Fuse::Drawing::Batching::Batch*>(::TYPES[37/*Fuse.Drawing.Batching.Batch[]*/], 1, (::g::Fuse::Drawing::Batching::Batch*)::g::Fuse::Drawing::Batching::BatchHelpers::CreateSingleBatch(ModelMesh()));
    }

    isDirty = false;
    _meshBoxDirty = true;
    _meshSphereDirty = true;
}

// public void Invalidate() [instance] :1039
void Mesh::Invalidate()
{
    uStackFrame __("Fuse.Entities.Mesh", "Invalidate()");
    isDirty = true;
}

// internal Uno.Content.Models.ModelMesh get_ModelMesh() [instance] :973
::g::Uno::Content::Models::ModelMesh* Mesh::ModelMesh()
{
    uStackFrame __("Fuse.Entities.Mesh", "get_ModelMesh()");
    return uPtr(_drawable)->Mesh();
}

// public Mesh New(Uno.Content.Models.ModelDrawable modelDrawable) [static] :1034
Mesh* Mesh::New1(::g::Uno::Content::Models::ModelDrawable* modelDrawable)
{
    Mesh* obj3 = (Mesh*)uNew(Mesh_typeof());
    obj3->ctor_(modelDrawable);
    return obj3;
}

// public Mesh New(Uno.Content.Models.ModelMesh modelMesh) [static] :1030
Mesh* Mesh::New2(::g::Uno::Content::Models::ModelMesh* modelMesh)
{
    Mesh* obj2 = (Mesh*)uNew(Mesh_typeof());
    obj2->ctor_1(modelMesh);
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1093)
// ---------------------------------------------------------------

// public sealed class MeshBatchingEngine :1093
// {
MeshBatchingEngine_type* MeshBatchingEngine_typeof()
{
    static uSStrong<MeshBatchingEngine_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MeshBatchingEngine);
    options.TypeSize = sizeof(MeshBatchingEngine_type);
    type = (MeshBatchingEngine_type*)uClassType::New("Fuse.Entities.MeshBatchingEngine", options);
    type->fp_ctor_ = (void*)MeshBatchingEngine__New1_fn;
    type->interface0.fp_Flush = (void(*)(uObject*, ::g::Fuse::DrawContext*))MeshBatchingEngine__Flush_fn;
    ::TYPES[41] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Entities::Material_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    ::TYPES[42] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Entities::Mesh_typeof(), ::g::Fuse::Drawing::Batching::MeshBatcher_typeof());
    ::TYPES[43] = ::g::Uno::Float4x4_typeof()->Array();
    ::TYPES[33] = ::g::Uno::Bool_typeof();
    ::TYPES[44] = ::g::Fuse::Entities::Material_typeof();
    ::TYPES[45] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof());
    ::TYPES[46] = ::g::Fuse::IFlush_typeof();
    ::TYPES[47] = ::g::Fuse::Entities::DefaultMaterial_typeof();
    ::TYPES[48] = ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof();
    ::TYPES[49] = ::g::Fuse::Drawing::Batching::Batch_typeof();
    ::TYPES[50] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[31] = ::g::Fuse::IViewport_typeof();
    ::TYPES[51] = ::g::Uno::Float4x4_typeof();
    ::TYPES[52] = ::g::Uno::Graphics::SamplerState_typeof();
    ::TYPES[53] = ::g::Fuse::Entities::Entry_typeof();
    ::TYPES[39] = ::g::Fuse::Drawing::Batching::MeshBatcher_typeof();
    ::TYPES[54] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Batching::Batch_typeof());
    ::TYPES[55] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof());
    ::TYPES[56] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Entities::Mesh_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    ::TYPES[57] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Entities::Mesh_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    ::TYPES[34] = ::g::Uno::Content::Models::ModelMesh_typeof();
    ::TYPES[58] = ::g::Fuse::Entities::Mesh_typeof();
    ::TYPES[59] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Entities::Mesh_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    ::TYPES[37] = ::g::Fuse::Drawing::Batching::Batch_typeof()->Array();
    ::TYPES[60] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Entities::Material_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    ::TYPES[61] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Entities::Material_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof()));
    ::TYPES[62] = ::g::FuseEntities_bundle_typeof();
    type->SetInterfaces(
        ::g::Fuse::IFlush_typeof(), offsetof(MeshBatchingEngine_type, interface0));
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::MeshBatchingEngine, _draw_3d7404f9), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::MeshBatchingEngine, _draw_e92d1425), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Entities::Mesh_typeof(), ::g::Fuse::Drawing::Batching::MeshBatcher_typeof()), offsetof(::g::Fuse::Entities::MeshBatchingEngine, batchers), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Entities::Material_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entry_typeof())), offsetof(::g::Fuse::Entities::MeshBatchingEngine, drawLists), 0,
        ::g::Uno::Float4x4_typeof()->Array(), offsetof(::g::Fuse::Entities::MeshBatchingEngine, normalArray), 0,
        ::g::Uno::Float4x4_typeof()->Array(), offsetof(::g::Fuse::Entities::MeshBatchingEngine, worldArray), 0,
        MeshBatchingEngine_typeof(), (uintptr_t)&::g::Fuse::Entities::MeshBatchingEngine::_singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("normalArray", 4),
        new uField("worldArray", 5));
    type->Reflection.SetFunctions(5,
        new uFunction("Draw", NULL, (void*)MeshBatchingEngine__Draw_fn, 0, false, uVoid_typeof(), 4, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Entities::Mesh_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Fuse::Entities::Material_typeof()),
        new uFunction("Flush", NULL, (void*)MeshBatchingEngine__Flush_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::DrawContext_typeof()),
        new uFunction(".ctor", NULL, (void*)MeshBatchingEngine__New1_fn, 0, true, MeshBatchingEngine_typeof(), 0),
        new uFunction("PrepareMesh", NULL, (void*)MeshBatchingEngine__PrepareMesh_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Entities::Mesh_typeof()),
        new uFunction("get_Singleton", NULL, (void*)MeshBatchingEngine__get_Singleton_fn, 0, true, MeshBatchingEngine_typeof(), 0));
    return type;
}

// public generated MeshBatchingEngine() :1093
void MeshBatchingEngine__ctor__fn(MeshBatchingEngine* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Entities.Mesh mesh, float4x4 transform, Fuse.Entities.Material material) :1104
void MeshBatchingEngine__Draw_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4* transform, ::g::Fuse::Entities::Material* material)
{
    __this->Draw(dc, mesh, *transform, material);
}

// private void DrawBatch(Fuse.DrawContext dc, Fuse.Entities.Material material, Fuse.Drawing.Batching.Batch batch, float4x4 world, float4x4 worldInverse) :1304
void MeshBatchingEngine__DrawBatch_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::Batch* batch, ::g::Uno::Float4x4* world, ::g::Uno::Float4x4* worldInverse)
{
    __this->DrawBatch(dc, material, batch, *world, *worldInverse);
}

// private void DrawBatched(Fuse.DrawContext dc, Fuse.Entities.Material material, Fuse.Drawing.Batching.MeshBatcher batcher, Uno.Collections.List<Fuse.Entities.Entry> entries) :1237
void MeshBatchingEngine__DrawBatched_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::MeshBatcher* batcher, ::g::Uno::Collections::List* entries)
{
    __this->DrawBatched(dc, material, batcher, entries);
}

// private void DrawIndividual(Fuse.DrawContext dc, Fuse.Entities.Material m, Uno.Collections.List<Fuse.Entities.Entry> entries) :1288
void MeshBatchingEngine__DrawIndividual_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Uno::Collections::List* entries)
{
    __this->DrawIndividual(dc, m, entries);
}

// private void DrawList(Fuse.DrawContext dc, Fuse.Entities.Material material, Uno.Collections.List<Fuse.Entities.Entry> entries) :1133
void MeshBatchingEngine__DrawList_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Uno::Collections::List* entries)
{
    __this->DrawList(dc, material, entries);
}

// private void DrawMesh(Fuse.DrawContext dc, Fuse.Entities.Material m, Fuse.Entities.Mesh mesh, float4x4 world, float4x4 worldInverse) :1296
void MeshBatchingEngine__DrawMesh_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4* world, ::g::Uno::Float4x4* worldInverse)
{
    __this->DrawMesh(dc, m, mesh, *world, *worldInverse);
}

// private Fuse.Drawing.Batching.MeshBatcher FindOrCreateBatcher(Fuse.Entities.Mesh mesh) :1171
void MeshBatchingEngine__FindOrCreateBatcher_fn(MeshBatchingEngine* __this, ::g::Fuse::Entities::Mesh* mesh, ::g::Fuse::Drawing::Batching::MeshBatcher** __retval)
{
    *__retval = __this->FindOrCreateBatcher(mesh);
}

// public void Flush(Fuse.DrawContext dc) :1123
void MeshBatchingEngine__Flush_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc)
{
    __this->Flush(dc);
}

// private generated void init_DrawCalls() :1093
void MeshBatchingEngine__init_DrawCalls_fn(MeshBatchingEngine* __this)
{
    __this->init_DrawCalls();
}

// private int MeshVertexCount(Fuse.Entities.Mesh mesh) :1166
void MeshBatchingEngine__MeshVertexCount_fn(MeshBatchingEngine* __this, ::g::Fuse::Entities::Mesh* mesh, int* __retval)
{
    *__retval = __this->MeshVertexCount(mesh);
}

// public generated MeshBatchingEngine New() :1093
void MeshBatchingEngine__New1_fn(MeshBatchingEngine** __retval)
{
    *__retval = MeshBatchingEngine::New1();
}

// public void PrepareMesh(Fuse.Entities.Mesh m) :1188
void MeshBatchingEngine__PrepareMesh_fn(MeshBatchingEngine* __this, ::g::Fuse::Entities::Mesh* m)
{
    __this->PrepareMesh(m);
}

// public static Fuse.Entities.MeshBatchingEngine get_Singleton() :1098
void MeshBatchingEngine__get_Singleton_fn(MeshBatchingEngine** __retval)
{
    *__retval = MeshBatchingEngine::Singleton();
}

uSStrong<MeshBatchingEngine*> MeshBatchingEngine::_singleton_;

// public generated MeshBatchingEngine() [instance] :1093
void MeshBatchingEngine::ctor_()
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", ".ctor()");
    drawLists = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[41/*Uno.Collections.Dictionary<Fuse.Entities.Material, Uno.Collections.List<Fuse.Entities.Entry>>*/]));
    batchers = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[42/*Uno.Collections.Dictionary<Fuse.Entities.Mesh, Fuse.Drawing.Batching.MeshBatcher>*/]));
    worldArray = uArray::New(::TYPES[43/*float4x4[]*/], 16);
    normalArray = uArray::New(::TYPES[43/*float4x4[]*/], 16);
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Entities.Mesh mesh, float4x4 transform, Fuse.Entities.Material material) [instance] :1104
void MeshBatchingEngine::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4 transform, ::g::Fuse::Entities::Material* material)
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "Draw(Fuse.DrawContext,Fuse.Entities.Mesh,float4x4,Fuse.Entities.Material)");
    bool ret9;

    if (!uPtr(material)->IsBatchable())
        Flush(dc);

    ::g::Uno::Collections::List* list;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(drawLists), material, (void**)(&list), &ret9), ret9))
    {
        list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[45/*Uno.Collections.List<Fuse.Entities.Entry>*/]);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(drawLists), material, list);
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(list), uCRef(::g::Fuse::Entities::Entry__New1(mesh, transform, ::g::Uno::Matrix::Invert2(transform))));
    uPtr(dc)->AddFlushListener((uObject*)this);
}

// private void DrawBatch(Fuse.DrawContext dc, Fuse.Entities.Material material, Fuse.Drawing.Batching.Batch batch, float4x4 world, float4x4 worldInverse) [instance] :1304
void MeshBatchingEngine::DrawBatch(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::Batch* batch, ::g::Uno::Float4x4 world, ::g::Uno::Float4x4 worldInverse)
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "DrawBatch(Fuse.DrawContext,Fuse.Entities.Material,Fuse.Drawing.Batching.Batch,float4x4,float4x4)");

    if (uIs(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))
    {
        _draw_e92d1425.Const(0, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->DiffuseMap() != NULL);
        _draw_e92d1425.Const(1, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->NormalMap() != NULL);
        _draw_e92d1425.Const(2, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->SpecularMap() != NULL);
        _draw_e92d1425.Use();
        _draw_e92d1425.Attrib1(3, uPtr(uPtr(batch)->Positions())->DataType(), uPtr(uPtr(batch)->Positions())->VertexBuffer(), uPtr(uPtr(batch)->Positions())->StrideInBytes(), 0);
        _draw_e92d1425.Attrib1(4, uPtr(batch->TexCoord0s())->DataType(), uPtr(batch->TexCoord0s())->VertexBuffer(), uPtr(batch->TexCoord0s())->StrideInBytes(), 0);
        _draw_e92d1425.Attrib1(5, uPtr(batch->Tangents())->DataType(), uPtr(batch->Tangents())->VertexBuffer(), uPtr(batch->Tangents())->StrideInBytes(), 0);
        _draw_e92d1425.Attrib1(6, uPtr(batch->Normals())->DataType(), uPtr(batch->Normals())->VertexBuffer(), uPtr(batch->Normals())->StrideInBytes(), 0);
        _draw_e92d1425.Uniform2(7, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->Tiling());
        _draw_e92d1425.Uniform2(8, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->Offset());
        _draw_e92d1425.Uniform6(9, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->DiffuseColor());
        _draw_e92d1425.Uniform6(10, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->SpecularColor());
        _draw_e92d1425.Uniform12(11, world);
        _draw_e92d1425.Uniform6(12, (((dc != NULL) ? (uObject*)uPtr(dc)->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ViewOrigin(uInterface(uPtr((dc != NULL) ? (uObject*)uPtr(dc)->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Float3__New2(100.0f, 100.0f, 100.0f));
        _draw_e92d1425.Uniform(13, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->Shininess());
        _draw_e92d1425.Uniform12(14, ::g::Uno::Matrix::Mul8(world, (((dc != NULL) ? (uObject*)dc->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr((dc != NULL) ? (uObject*)dc->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Matrix::Mul8((((dc != NULL) ? (uObject*)dc->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ViewTransform(uInterface(uPtr((dc != NULL) ? (uObject*)dc->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Float4x4__Identity(), (((dc != NULL) ? (uObject*)dc->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ProjectionTransform(uInterface(uPtr((dc != NULL) ? (uObject*)dc->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Float4x4__Identity())));
        _draw_e92d1425.Uniform12(15, ::g::Uno::Matrix::Transpose2(worldInverse));
        _draw_e92d1425.Sampler3(16, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->DiffuseMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
        _draw_e92d1425.Sampler3(17, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->NormalMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
        _draw_e92d1425.Sampler3(18, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->SpecularMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
        _draw_e92d1425.Draw(batch->VertexCount(), batch->IndexType(), batch->IndexBuffer());
    }
}

// private void DrawBatched(Fuse.DrawContext dc, Fuse.Entities.Material material, Fuse.Drawing.Batching.MeshBatcher batcher, Uno.Collections.List<Fuse.Entities.Entry> entries) [instance] :1237
void MeshBatchingEngine::DrawBatched(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::MeshBatcher* batcher, ::g::Uno::Collections::List* entries)
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "DrawBatched(Fuse.DrawContext,Fuse.Entities.Material,Fuse.Drawing.Batching.MeshBatcher,Uno.Collections.List<Fuse.Entities.Entry>)");
    ::g::Fuse::Entities::Entry ret10;
    ::g::Fuse::Entities::Entry ret11;
    ::g::Fuse::Drawing::Batching::Batch* ret12;
    ::g::Fuse::Entities::Entry ret13;

    for (int k = 0; k < 16; k++)
        uPtr(worldArray)->Item< ::g::Uno::Float4x4>(k) = ::g::Uno::Float4x4__New1(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);

    int bc = 0;

    for (int i = 0; i < uPtr(entries)->Count(); i++)
    {
        uPtr(worldArray)->Item< ::g::Uno::Float4x4>(bc) = (::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(i), &ret10), ret10).World;
        uPtr(normalArray)->Item< ::g::Uno::Float4x4>(bc) = (::g::Uno::Collections::List__get_Item_fn(entries, uCRef<int>(i), &ret11), ret11).WorldInverse;
        bc++;

        if ((bc >= (uPtr(batcher)->EntryCount() - 1)) || (i == (entries->Count() - 1)))
        {
            ::g::Fuse::Drawing::Batching::Batch* batch = (::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[54/*Uno.Collections.EnumerableExtensions.FirstOrDefault<Fuse.Drawing.Batching.Batch>*/], uPtr(batcher)->Batches(), &ret12), ret12);

            if (batch != NULL)
            {
                int vc = bc * MeshVertexCount((::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(0), &ret13), ret13).Mesh);

                if (uIs(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))
                {
                    _draw_3d7404f9.Const(0, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->DiffuseMap() != NULL);
                    _draw_3d7404f9.Const(1, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->NormalMap() != NULL);
                    _draw_3d7404f9.Const(2, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->SpecularMap() != NULL);
                    _draw_3d7404f9.Use();
                    _draw_3d7404f9.Attrib1(3, uPtr(uPtr(batch)->Positions())->DataType(), uPtr(uPtr(batch)->Positions())->VertexBuffer(), uPtr(uPtr(batch)->Positions())->StrideInBytes(), 0);
                    _draw_3d7404f9.Attrib1(4, uPtr(batch->InstanceIndices())->DataType(), uPtr(batch->InstanceIndices())->VertexBuffer(), uPtr(batch->InstanceIndices())->StrideInBytes(), 0);
                    _draw_3d7404f9.Attrib1(5, uPtr(batch->TexCoord0s())->DataType(), uPtr(batch->TexCoord0s())->VertexBuffer(), uPtr(batch->TexCoord0s())->StrideInBytes(), 0);
                    _draw_3d7404f9.Attrib1(6, uPtr(batch->Tangents())->DataType(), uPtr(batch->Tangents())->VertexBuffer(), uPtr(batch->Tangents())->StrideInBytes(), 0);
                    _draw_3d7404f9.Attrib1(7, uPtr(batch->Normals())->DataType(), uPtr(batch->Normals())->VertexBuffer(), uPtr(batch->Normals())->StrideInBytes(), 0);
                    _draw_3d7404f9.Uniform13(8, uArray::Init< ::g::Uno::Float4x4>(::TYPES[43/*float4x4[]*/], 16, uPtr(worldArray)->Item< ::g::Uno::Float4x4>(0), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(1), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(2), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(3), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(4), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(5), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(6), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(7), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(8), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(9), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(10), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(11), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(12), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(13), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(14), uPtr(worldArray)->Item< ::g::Uno::Float4x4>(15)));
                    _draw_3d7404f9.Uniform2(9, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->Tiling());
                    _draw_3d7404f9.Uniform2(10, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->Offset());
                    _draw_3d7404f9.Uniform6(11, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->DiffuseColor());
                    _draw_3d7404f9.Uniform13(12, uArray::Init< ::g::Uno::Float4x4>(::TYPES[43/*float4x4[]*/], 16, uPtr(normalArray)->Item< ::g::Uno::Float4x4>(0), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(1), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(2), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(3), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(4), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(5), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(6), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(7), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(8), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(9), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(10), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(11), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(12), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(13), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(14), uPtr(normalArray)->Item< ::g::Uno::Float4x4>(15)));
                    _draw_3d7404f9.Uniform6(13, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->SpecularColor());
                    _draw_3d7404f9.Uniform6(14, (((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ViewOrigin(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Float3__New2(100.0f, 100.0f, 100.0f));
                    _draw_3d7404f9.Uniform(15, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->Shininess());
                    _draw_3d7404f9.Uniform12(16, (((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Matrix::Mul8((((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ViewTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Float4x4__Identity(), (((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ProjectionTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Float4x4__Identity()));
                    _draw_3d7404f9.Sampler3(17, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->DiffuseMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
                    _draw_3d7404f9.Sampler3(18, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->NormalMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
                    _draw_3d7404f9.Sampler3(19, uPtr(uAs< ::g::Fuse::Entities::DefaultMaterial*>(material, ::TYPES[47/*Fuse.Entities.DefaultMaterial*/]))->SpecularMap(), ::g::Uno::Graphics::SamplerState__LinearWrap());
                    _draw_3d7404f9.Draw(vc, batch->IndexType(), batch->IndexBuffer());
                }
            }

            bc = 0;

            for (int k1 = 0; k1 < 16; k1++)
                uPtr(worldArray)->Item< ::g::Uno::Float4x4>(k1) = ::g::Uno::Float4x4__New1(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        }
    }
}

// private void DrawIndividual(Fuse.DrawContext dc, Fuse.Entities.Material m, Uno.Collections.List<Fuse.Entities.Entry> entries) [instance] :1288
void MeshBatchingEngine::DrawIndividual(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Uno::Collections::List* entries)
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "DrawIndividual(Fuse.DrawContext,Fuse.Entities.Material,Uno.Collections.List<Fuse.Entities.Entry>)");
    ::g::Uno::Collections::List__Enumerator< ::g::Fuse::Entities::Entry> ret14;

    for (::g::Uno::Collections::List__Enumerator< ::g::Fuse::Entities::Entry> enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(entries), &ret14), ret14); enum3.MoveNext(::TYPES[55/*Uno.Collections.List<Fuse.Entities.Entry>.Enumerator*/]); )
    {
        ::g::Fuse::Entities::Entry e = enum3.Current(::TYPES[55/*Uno.Collections.List<Fuse.Entities.Entry>.Enumerator*/]);
        DrawMesh(dc, m, e.Mesh, e.World, e.WorldInverse);
    }
}

// private void DrawList(Fuse.DrawContext dc, Fuse.Entities.Material material, Uno.Collections.List<Fuse.Entities.Entry> entries) [instance] :1133
void MeshBatchingEngine::DrawList(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Uno::Collections::List* entries)
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "DrawList(Fuse.DrawContext,Fuse.Entities.Material,Uno.Collections.List<Fuse.Entities.Entry>)");
    bool ret15;
    ::g::Fuse::Entities::Entry ret16;
    ::g::Fuse::Entities::Entry ret17;
    ::g::Uno::Collections::List* ret18;
    ::g::Fuse::Entities::Entry ret19;
    ::g::Fuse::Entities::Entry ret20;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Entities::Mesh*>, uStrong< ::g::Uno::Collections::List*> > ret21;

    if (uPtr(entries)->Count() > 2)
    {
        ::g::Uno::Collections::Dictionary* meshCounts = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[56/*Uno.Collections.Dictionary<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]);

        for (int i = 0; i < uPtr(entries)->Count(); i++)
        {
            if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(meshCounts), (::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(i), &ret16), ret16).Mesh, &ret15), ret15))
                ::g::Uno::Collections::Dictionary__Add_fn(uPtr(meshCounts), (::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(i), &ret17), ret17).Mesh, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[45/*Uno.Collections.List<Fuse.Entities.Entry>*/]));

            ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(meshCounts, (::g::Uno::Collections::List__get_Item_fn(entries, uCRef<int>(i), &ret19), ret19).Mesh, &ret18), ret18)), uCRef((::g::Uno::Collections::List__get_Item_fn(entries, uCRef<int>(i), &ret20), ret20)));
        }

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Entities::Mesh*>, uStrong< ::g::Uno::Collections::List*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(meshCounts, &ret21), ret21); enum2.MoveNext(::TYPES[57/*Uno.Collections.Dictionary<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Fuse::Entities::Mesh*>, uStrong< ::g::Uno::Collections::List*> > p = enum2.Current(::TYPES[57/*Uno.Collections.Dictionary<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>.Enumerator*/]);

            if ((uPtr(uPtr(p.Key(::TYPES[59/*Uno.Collections.KeyValuePair<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]))->ModelMesh())->VertexCount() > 20000) || (uPtr(p.Value(::TYPES[59/*Uno.Collections.KeyValuePair<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]))->Count() < 3))
                DrawIndividual(dc, material, p.Value(::TYPES[59/*Uno.Collections.KeyValuePair<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]));
            else
            {
                ::g::Fuse::Drawing::Batching::MeshBatcher* batcher = FindOrCreateBatcher(p.Key(::TYPES[59/*Uno.Collections.KeyValuePair<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]));
                DrawBatched(dc, material, batcher, p.Value(::TYPES[59/*Uno.Collections.KeyValuePair<Fuse.Entities.Mesh, Uno.Collections.List<Fuse.Entities.Entry>>*/]));
            }
        }
    }
    else
        DrawIndividual(dc, material, entries);
}

// private void DrawMesh(Fuse.DrawContext dc, Fuse.Entities.Material m, Fuse.Entities.Mesh mesh, float4x4 world, float4x4 worldInverse) [instance] :1296
void MeshBatchingEngine::DrawMesh(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4 world, ::g::Uno::Float4x4 worldInverse)
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "DrawMesh(Fuse.DrawContext,Fuse.Entities.Material,Fuse.Entities.Mesh,float4x4,float4x4)");
    uArray* array4;
    int index5;
    int length6;

    for (array4 = uPtr(mesh)->Batches(), index5 = 0, length6 = uPtr(array4)->Length(); index5 < length6; ++index5)
    {
        ::g::Fuse::Drawing::Batching::Batch* b = uPtr(array4)->Strong< ::g::Fuse::Drawing::Batching::Batch*>(index5);
        DrawBatch(dc, m, b, world, worldInverse);
    }
}

// private Fuse.Drawing.Batching.MeshBatcher FindOrCreateBatcher(Fuse.Entities.Mesh mesh) [instance] :1171
::g::Fuse::Drawing::Batching::MeshBatcher* MeshBatchingEngine::FindOrCreateBatcher(::g::Fuse::Entities::Mesh* mesh)
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "FindOrCreateBatcher(Fuse.Entities.Mesh)");
    bool ret22;
    ::g::Fuse::Drawing::Batching::MeshBatcher* batcher;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(batchers), mesh, (void**)(&batcher), &ret22), ret22))
    {
        batcher = ::g::Fuse::Drawing::Batching::MeshBatcher::New1();
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(batchers), mesh, batcher);
        int instanceCount = ::g::Uno::Math::Min8(16, 65535 / ::g::Uno::Math::Max8(1, MeshVertexCount(mesh)));

        for (int i = 0; i < instanceCount; i++)
            batcher->AddMesh(uPtr(mesh)->ModelMesh());

        batcher->Flush();
    }

    return batcher;
}

// public void Flush(Fuse.DrawContext dc) [instance] :1123
void MeshBatchingEngine::Flush(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "Flush(Fuse.DrawContext)");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Entities::Material*>, uStrong< ::g::Uno::Collections::List*> > ret23;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Entities::Material*>, uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(drawLists), &ret23), ret23); enum1.MoveNext(::TYPES[60/*Uno.Collections.Dictionary<Fuse.Entities.Material, Uno.Collections.List<Fuse.Entities.Entry>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Fuse::Entities::Material*>, uStrong< ::g::Uno::Collections::List*> > p = enum1.Current(::TYPES[60/*Uno.Collections.Dictionary<Fuse.Entities.Material, Uno.Collections.List<Fuse.Entities.Entry>>.Enumerator*/]);
        DrawList(dc, p.Key(::TYPES[61/*Uno.Collections.KeyValuePair<Fuse.Entities.Material, Uno.Collections.List<Fuse.Entities.Entry>>*/]), p.Value(::TYPES[61/*Uno.Collections.KeyValuePair<Fuse.Entities.Material, Uno.Collections.List<Fuse.Entities.Entry>>*/]));
    }

    uPtr(drawLists)->Clear();
}

// private generated void init_DrawCalls() [instance] :1093
void MeshBatchingEngine::init_DrawCalls()
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "init_DrawCalls()");
    _draw_3d7404f9 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEntities_bundle::MeshBatchingEnginee840d347());
    _draw_e92d1425 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEntities_bundle::MeshBatchingEngine54fb35e2());
}

// private int MeshVertexCount(Fuse.Entities.Mesh mesh) [instance] :1166
int MeshBatchingEngine::MeshVertexCount(::g::Fuse::Entities::Mesh* mesh)
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "MeshVertexCount(Fuse.Entities.Mesh)");
    return (uPtr(uPtr(mesh)->ModelMesh())->IndexCount() != -1) ? uPtr(uPtr(mesh)->ModelMesh())->IndexCount() : uPtr(uPtr(mesh)->ModelMesh())->VertexCount();
}

// public void PrepareMesh(Fuse.Entities.Mesh m) [instance] :1188
void MeshBatchingEngine::PrepareMesh(::g::Fuse::Entities::Mesh* m)
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "PrepareMesh(Fuse.Entities.Mesh)");
    FindOrCreateBatcher(m);
}

// public generated MeshBatchingEngine New() [static] :1093
MeshBatchingEngine* MeshBatchingEngine::New1()
{
    MeshBatchingEngine* obj8 = (MeshBatchingEngine*)uNew(MeshBatchingEngine_typeof());
    obj8->ctor_();
    return obj8;
}

// public static Fuse.Entities.MeshBatchingEngine get_Singleton() [static] :1098
MeshBatchingEngine* MeshBatchingEngine::Singleton()
{
    uStackFrame __("Fuse.Entities.MeshBatchingEngine", "get_Singleton()");
    MeshBatchingEngine* ind7 = MeshBatchingEngine::_singleton();
    return (ind7 != NULL) ? ind7 : (MeshBatchingEngine*)(MeshBatchingEngine::_singleton() = MeshBatchingEngine::New1());
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1337)
// ---------------------------------------------------------------

// public enum MeshHitTestMode :1337
uEnumType* MeshHitTestMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Entities.MeshHitTestMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "BoundingBox", 1LL,
        "BoundingSphere", 2LL,
        "Precise", 3LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1345)
// ---------------------------------------------------------------

// public class MeshRenderer :1345
// {
MeshRenderer_type* MeshRenderer_typeof()
{
    static uSStrong<MeshRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(MeshRenderer);
    options.TypeSize = sizeof(MeshRenderer_type);
    type = (MeshRenderer_type*)uClassType::New("Fuse.Entities.MeshRenderer", options);
    type->SetBase(::g::Fuse::Entities::Component_typeof());
    type->fp_ctor_ = (void*)MeshRenderer__New1_fn;
    type->fp_OnAdded = (void(*)(::g::Fuse::Entities::Component*, ::g::Fuse::Entities::Entity*))MeshRenderer__OnAdded_fn;
    type->fp_OnRemoved = (void(*)(::g::Fuse::Entities::Component*, ::g::Fuse::Entities::Entity*))MeshRenderer__OnRemoved_fn;
    type->fp_Validate = MeshRenderer__Validate_fn;
    ::TYPES[63] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[48] = ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof();
    ::TYPES[49] = ::g::Fuse::Drawing::Batching::Batch_typeof();
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[29] = ::g::Fuse::Entities::Component_typeof();
    ::TYPES[50] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[31] = ::g::Fuse::IViewport_typeof();
    ::TYPES[51] = ::g::Uno::Float4x4_typeof();
    ::TYPES[58] = ::g::Fuse::Entities::Mesh_typeof();
    ::TYPES[37] = ::g::Fuse::Drawing::Batching::Batch_typeof()->Array();
    ::TYPES[62] = ::g::FuseEntities_bundle_typeof();
    ::TYPES[64] = ::g::Fuse::Entities::Entity_typeof();
    ::TYPES[4] = ::g::Fuse::DrawHandler_typeof();
    ::TYPES[13] = ::g::Fuse::HitTestHandler_typeof();
    ::TYPES[65] = ::g::Fuse::DrawArgs_typeof();
    ::TYPES[33] = ::g::Uno::Bool_typeof();
    ::TYPES[66] = ::g::Fuse::Entities::MeshBatchingEngine_typeof();
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[67] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[68] = ::g::Uno::Geometry::Ray_typeof();
    type->SetFields(1,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer, _draw_265654da), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer, _draw_6d0ca2bb), 0,
        ::g::Fuse::Entities::MeshHitTestMode_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer, _hitTestMode), 0,
        ::g::Fuse::Entities::Material_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer, _material), 0,
        ::g::Fuse::Entities::Mesh_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer, _mesh), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("DrawDepthInternal", NULL, (void*)MeshRenderer__DrawDepthInternal_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::DrawContext_typeof()),
        new uFunction("DrawSelectionCueInternal", NULL, (void*)MeshRenderer__DrawSelectionCueInternal_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_HitTestMode", NULL, (void*)MeshRenderer__get_HitTestMode_fn, 0, false, ::g::Fuse::Entities::MeshHitTestMode_typeof(), 0),
        new uFunction("set_HitTestMode", NULL, (void*)MeshRenderer__set_HitTestMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Entities::MeshHitTestMode_typeof()),
        new uFunction("get_Material", NULL, (void*)MeshRenderer__get_Material_fn, 0, false, ::g::Fuse::Entities::Material_typeof(), 0),
        new uFunction("set_Material", NULL, (void*)MeshRenderer__set_Material_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Entities::Material_typeof()),
        new uFunction("get_Mesh", NULL, (void*)MeshRenderer__get_Mesh_fn, 0, false, ::g::Fuse::Entities::Mesh_typeof(), 0),
        new uFunction("set_Mesh", NULL, (void*)MeshRenderer__set_Mesh_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Entities::Mesh_typeof()),
        new uFunction(".ctor", NULL, (void*)MeshRenderer__New1_fn, 0, true, MeshRenderer_typeof(), 0),
        new uFunction("RayIntersectObjectSpace", NULL, (void*)MeshRenderer__RayIntersectObjectSpace_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Geometry::Ray_typeof(), ::g::Uno::Float_typeof()->ByRef()),
        new uFunction("RayIntersectWorldSpace", NULL, (void*)MeshRenderer__RayIntersectWorldSpace_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Geometry::Ray_typeof(), ::g::Uno::Float_typeof()->ByRef()));
    return type;
}

// public generated MeshRenderer() :1345
void MeshRenderer__ctor_1_fn(MeshRenderer* __this)
{
    __this->ctor_1();
}

// private void DrawDepth(Fuse.Drawing.Batching.Batch batch) :1498
void MeshRenderer__DrawDepth_fn(MeshRenderer* __this, ::g::Fuse::Drawing::Batching::Batch* batch)
{
    __this->DrawDepth(batch);
}

// public void DrawDepthInternal(Fuse.DrawContext dc) :1483
void MeshRenderer__DrawDepthInternal_fn(MeshRenderer* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawDepthInternal(dc);
}

// private void DrawSelectionCue(Fuse.Drawing.Batching.Batch batch, bool selected, bool previewSelected, bool selectedSubtree) :1515
void MeshRenderer__DrawSelectionCue_fn(MeshRenderer* __this, ::g::Fuse::Drawing::Batching::Batch* batch, bool* selected, bool* previewSelected, bool* selectedSubtree)
{
    __this->DrawSelectionCue(batch, *selected, *previewSelected, *selectedSubtree);
}

// public void DrawSelectionCueInternal(bool isSelected, bool isPreviewSelected, bool isSelectedSubtree) :1491
void MeshRenderer__DrawSelectionCueInternal_fn(MeshRenderer* __this, bool* isSelected, bool* isPreviewSelected, bool* isSelectedSubtree)
{
    __this->DrawSelectionCueInternal(*isSelected, *isPreviewSelected, *isSelectedSubtree);
}

// public Fuse.Entities.MeshHitTestMode get_HitTestMode() :1375
void MeshRenderer__get_HitTestMode_fn(MeshRenderer* __this, int* __retval)
{
    *__retval = __this->HitTestMode();
}

// public void set_HitTestMode(Fuse.Entities.MeshHitTestMode value) :1376
void MeshRenderer__set_HitTestMode_fn(MeshRenderer* __this, int* value)
{
    __this->HitTestMode(*value);
}

// private generated void init_DrawCalls() :1345
void MeshRenderer__init_DrawCalls_fn(MeshRenderer* __this)
{
    __this->init_DrawCalls();
}

// public Fuse.Entities.Material get_Material() :1386
void MeshRenderer__get_Material_fn(MeshRenderer* __this, ::g::Fuse::Entities::Material** __retval)
{
    *__retval = __this->Material();
}

// public void set_Material(Fuse.Entities.Material value) :1400
void MeshRenderer__set_Material_fn(MeshRenderer* __this, ::g::Fuse::Entities::Material* value)
{
    __this->Material(value);
}

// public Fuse.Entities.Mesh get_Mesh() :1352
void MeshRenderer__get_Mesh_fn(MeshRenderer* __this, ::g::Fuse::Entities::Mesh** __retval)
{
    *__retval = __this->Mesh();
}

// public void set_Mesh(Fuse.Entities.Mesh value) :1353
void MeshRenderer__set_Mesh_fn(MeshRenderer* __this, ::g::Fuse::Entities::Mesh* value)
{
    __this->Mesh(value);
}

// public generated MeshRenderer New() :1345
void MeshRenderer__New1_fn(MeshRenderer** __retval)
{
    *__retval = MeshRenderer::New1();
}

// protected override sealed void OnAdded(Fuse.Entities.Entity e) :1360
void MeshRenderer__OnAdded_fn(MeshRenderer* __this, ::g::Fuse::Entities::Entity* e)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "OnAdded(Fuse.Entities.Entity)");
    uPtr(e)->add_ComponentDraw(uDelegate::New(::TYPES[4/*Fuse.DrawHandler*/], (void*)MeshRenderer__OnDraw_fn, __this));
    e->add_ComponentHitTest(uDelegate::New(::TYPES[13/*Fuse.HitTestHandler*/], (void*)MeshRenderer__OnHitTest_fn, __this));
}

// private void OnDraw(object sender, Fuse.DrawArgs args) :1465
void MeshRenderer__OnDraw_fn(MeshRenderer* __this, uObject* sender, ::g::Fuse::DrawArgs* args)
{
    __this->OnDraw(sender, args);
}

// private void OnHitTest(object sender, Fuse.HitTestContext args) :1407
void MeshRenderer__OnHitTest_fn(MeshRenderer* __this, uObject* sender, ::g::Fuse::HitTestContext* args)
{
    __this->OnHitTest(sender, args);
}

// protected override sealed void OnRemoved(Fuse.Entities.Entity e) :1366
void MeshRenderer__OnRemoved_fn(MeshRenderer* __this, ::g::Fuse::Entities::Entity* e)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "OnRemoved(Fuse.Entities.Entity)");
    uPtr(e)->remove_ComponentDraw(uDelegate::New(::TYPES[4/*Fuse.DrawHandler*/], (void*)MeshRenderer__OnDraw_fn, __this));
    e->remove_ComponentHitTest(uDelegate::New(::TYPES[13/*Fuse.HitTestHandler*/], (void*)MeshRenderer__OnHitTest_fn, __this));
}

// public bool RayIntersectObjectSpace(Uno.Geometry.Ray objectSpaceRay, float& distance) :1444
void MeshRenderer__RayIntersectObjectSpace_fn(MeshRenderer* __this, ::g::Uno::Geometry::Ray* objectSpaceRay, float* distance, bool* __retval)
{
    *__retval = __this->RayIntersectObjectSpace(*objectSpaceRay, distance);
}

// public bool RayIntersectWorldSpace(Uno.Geometry.Ray worldSpaceRay, float& distance) :1439
void MeshRenderer__RayIntersectWorldSpace_fn(MeshRenderer* __this, ::g::Uno::Geometry::Ray* worldSpaceRay, float* distance, bool* __retval)
{
    *__retval = __this->RayIntersectWorldSpace(*worldSpaceRay, distance);
}

// protected virtual void Validate() :1463
void MeshRenderer__Validate_fn(MeshRenderer* __this)
{
}

// public generated MeshRenderer() [instance] :1345
void MeshRenderer::ctor_1()
{
    uStackFrame __("Fuse.Entities.MeshRenderer", ".ctor()");
    ctor_();
    init_DrawCalls();
}

// private void DrawDepth(Fuse.Drawing.Batching.Batch batch) [instance] :1498
void MeshRenderer::DrawDepth(::g::Fuse::Drawing::Batching::Batch* batch)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "DrawDepth(Fuse.Drawing.Batching.Batch)");
    _draw_6d0ca2bb.WriteRed(false);
    _draw_6d0ca2bb.WriteGreen(false);
    _draw_6d0ca2bb.WriteBlue(false);
    _draw_6d0ca2bb.WriteAlpha(false);
    _draw_6d0ca2bb.Use();
    _draw_6d0ca2bb.Attrib1(0, uPtr(uPtr(batch)->Positions())->DataType(), uPtr(uPtr(batch)->Positions())->VertexBuffer(), uPtr(uPtr(batch)->Positions())->StrideInBytes(), 0);
    _draw_6d0ca2bb.Uniform12(1, ::g::Uno::Matrix::Mul8(uPtr(Entity())->WorldTransform(), (((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Matrix::Mul8((((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ViewTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Float4x4__Identity(), (((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ProjectionTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Float4x4__Identity())));
    _draw_6d0ca2bb.Draw(batch->VertexCount(), batch->IndexType(), batch->IndexBuffer());
}

// public void DrawDepthInternal(Fuse.DrawContext dc) [instance] :1483
void MeshRenderer::DrawDepthInternal(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "DrawDepthInternal(Fuse.DrawContext)");
    uArray* array1;
    int index2;
    int length3;

    if (_mesh == NULL)
        return;

    for (array1 = uPtr(_mesh)->Batches(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Drawing::Batching::Batch* batch = uPtr(array1)->Strong< ::g::Fuse::Drawing::Batching::Batch*>(index2);
        DrawDepth(batch);
    }
}

// private void DrawSelectionCue(Fuse.Drawing.Batching.Batch batch, bool selected, bool previewSelected, bool selectedSubtree) [instance] :1515
void MeshRenderer::DrawSelectionCue(::g::Fuse::Drawing::Batching::Batch* batch, bool selected, bool previewSelected, bool selectedSubtree)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "DrawSelectionCue(Fuse.Drawing.Batching.Batch,bool,bool,bool)");
    float alpha = 0.0f;

    if (selected)
        alpha = 0.8f;
    else
    {
        if (previewSelected)
            alpha = alpha + 0.2f;

        if (selectedSubtree)
            alpha = alpha + 0.2f;
    }

    _draw_265654da.BlendEnabled(true);
    _draw_265654da.WriteAlpha(false);
    _draw_265654da.BlendSrcRgb(2);
    _draw_265654da.BlendSrcAlpha(2);
    _draw_265654da.BlendDstRgb(3);
    _draw_265654da.BlendDstAlpha(3);
    _draw_265654da.Use();
    _draw_265654da.Attrib1(0, uPtr(uPtr(batch)->Positions())->DataType(), uPtr(uPtr(batch)->Positions())->VertexBuffer(), uPtr(uPtr(batch)->Positions())->StrideInBytes(), 0);
    _draw_265654da.Uniform10(1, ::g::Uno::Float4__New2(0.8f, 0.85f, 1.0f, alpha));
    _draw_265654da.Uniform12(2, ::g::Uno::Matrix::Mul8(uPtr(Entity())->WorldTransform(), (((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Matrix::Mul8((((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ViewTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Float4x4__Identity(), (((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL) != NULL) ? ::g::Fuse::IViewport::ProjectionTransform(uInterface(uPtr((NULL != NULL) ? (uObject*)uPtr< ::g::Fuse::DrawContext*>(NULL)->Viewport() : NULL), ::TYPES[31/*Fuse.IViewport*/])) : ::g::Uno::Float4x4__Identity())));
    _draw_265654da.Draw(batch->VertexCount(), batch->IndexType(), batch->IndexBuffer());
}

// public void DrawSelectionCueInternal(bool isSelected, bool isPreviewSelected, bool isSelectedSubtree) [instance] :1491
void MeshRenderer::DrawSelectionCueInternal(bool isSelected, bool isPreviewSelected, bool isSelectedSubtree)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "DrawSelectionCueInternal(bool,bool,bool)");
    uArray* array4;
    int index5;
    int length6;

    if (_mesh == NULL)
        return;

    for (array4 = uPtr(_mesh)->Batches(), index5 = 0, length6 = uPtr(array4)->Length(); index5 < length6; ++index5)
    {
        ::g::Fuse::Drawing::Batching::Batch* batch = uPtr(array4)->Strong< ::g::Fuse::Drawing::Batching::Batch*>(index5);
        DrawSelectionCue(batch, isSelected, isPreviewSelected, isSelectedSubtree);
    }
}

// public Fuse.Entities.MeshHitTestMode get_HitTestMode() [instance] :1375
int MeshRenderer::HitTestMode()
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "get_HitTestMode()");
    return _hitTestMode;
}

// public void set_HitTestMode(Fuse.Entities.MeshHitTestMode value) [instance] :1376
void MeshRenderer::HitTestMode(int value)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "set_HitTestMode(Fuse.Entities.MeshHitTestMode)");
    _hitTestMode = value;
}

// private generated void init_DrawCalls() [instance] :1345
void MeshRenderer::init_DrawCalls()
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "init_DrawCalls()");
    _draw_6d0ca2bb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEntities_bundle::MeshRenderer47c4cfe0());
    _draw_265654da = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEntities_bundle::MeshRendererb55bfadc());
}

// public Fuse.Entities.Material get_Material() [instance] :1386
::g::Fuse::Entities::Material* MeshRenderer::Material()
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "get_Material()");

    if (_material != NULL)
        return _material;

    ::g::Fuse::Entities::Entity* e = Entity();

    while (e != NULL)
    {
        e = uPtr(e)->ParentEntity();

        if ((e != NULL) && (e->MeshRenderer() != NULL))
            return uPtr(e->MeshRenderer())->Material();
    }

    return NULL;
}

// public void set_Material(Fuse.Entities.Material value) [instance] :1400
void MeshRenderer::Material(::g::Fuse::Entities::Material* value)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "set_Material(Fuse.Entities.Material)");
    _material = value;
}

// public Fuse.Entities.Mesh get_Mesh() [instance] :1352
::g::Fuse::Entities::Mesh* MeshRenderer::Mesh()
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "get_Mesh()");
    return _mesh;
}

// public void set_Mesh(Fuse.Entities.Mesh value) [instance] :1353
void MeshRenderer::Mesh(::g::Fuse::Entities::Mesh* value)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "set_Mesh(Fuse.Entities.Mesh)");

    if (value == _mesh)
        return;

    _mesh = value;
}

// private void OnDraw(object sender, Fuse.DrawArgs args) [instance] :1465
void MeshRenderer::OnDraw(uObject* sender, ::g::Fuse::DrawArgs* args)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "OnDraw(object,Fuse.DrawArgs)");
    Validate();
    ::g::Fuse::DrawContext* dc = uPtr(args)->Context();

    if (_mesh == NULL)
        return;

    if (Material() == NULL)
        return;

    ::g::Uno::Float4x4 m = uPtr(Entity())->WorldTransform();

    if (!uPtr(Material())->Draw(_mesh, m))
    {
        uPtr(::g::Fuse::Entities::MeshBatchingEngine::Singleton())->Draw(dc, _mesh, m, Material());
        uPtr(dc)->Flush();
    }
}

// private void OnHitTest(object sender, Fuse.HitTestContext args) [instance] :1407
void MeshRenderer::OnHitTest(uObject* sender, ::g::Fuse::HitTestContext* args)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "OnHitTest(object,Fuse.HitTestContext)");

    if (HitTestMode() == 0)
        return;

    if (_mesh == NULL)
        return;

    ::g::Uno::Geometry::Ray objRay = ::g::Uno::Geometry::Ray__Transform(uPtr(args)->WorldRay(), uPtr(Entity())->WorldTransformInverse());
    float distance;
    bool hit = ::g::Uno::Geometry::Collision::RayIntersectsBox(objRay, uPtr(_mesh)->BoundingBox(), &distance);

    if (hit)
    {
        if (HitTestMode() == 2)
            hit = ::g::Uno::Geometry::Collision::RayIntersectsSphere(objRay, uPtr(_mesh)->BoundingSphere(), &distance);
        else if (HitTestMode() == 3)
            hit = ::g::Fuse::Entities::ModelMeshCollision::RayIntersectsModelMesh(objRay, uPtr(_mesh)->ModelMesh(), &distance);

        ::g::Uno::Float3 hitPoint = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__op_Addition2(objRay.Position, ::g::Uno::Float3__op_Multiply1(objRay.Direction, distance)), uPtr(Entity())->WorldTransform());
        float dist = ::g::Uno::Vector::Length1(::g::Uno::Float3__op_Subtraction2(hitPoint, uPtr(args)->WorldRay().Position));
        args->Hit1(Entity(), dist);
    }
}

// public bool RayIntersectObjectSpace(Uno.Geometry.Ray objectSpaceRay, float& distance) [instance] :1444
bool MeshRenderer::RayIntersectObjectSpace(::g::Uno::Geometry::Ray objectSpaceRay, float* distance)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "RayIntersectObjectSpace(Uno.Geometry.Ray,float&)");

    if (_mesh == NULL)
    {
        *distance = 0.0f;
        return false;
    }

    if (!::g::Uno::Geometry::Collision::RayIntersectsBox(objectSpaceRay, uPtr(_mesh)->BoundingBox(), distance))
        return false;

    if (!::g::Fuse::Entities::ModelMeshCollision::RayIntersectsModelMesh(objectSpaceRay, uPtr(_mesh)->ModelMesh(), distance))
        return false;

    return true;
}

// public bool RayIntersectWorldSpace(Uno.Geometry.Ray worldSpaceRay, float& distance) [instance] :1439
bool MeshRenderer::RayIntersectWorldSpace(::g::Uno::Geometry::Ray worldSpaceRay, float* distance)
{
    uStackFrame __("Fuse.Entities.MeshRenderer", "RayIntersectWorldSpace(Uno.Geometry.Ray,float&)");
    return RayIntersectObjectSpace(::g::Uno::Geometry::Ray__Transform(worldSpaceRay, uPtr(Entity())->WorldTransformInverse()), distance);
}

// public generated MeshRenderer New() [static] :1345
MeshRenderer* MeshRenderer::New1()
{
    MeshRenderer* obj7 = (MeshRenderer*)uNew(MeshRenderer_typeof());
    obj7->ctor_1();
    return obj7;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1568)
// ---------------------------------------------------------------

// internal sealed class ModelMeshCollision :1568
// {
uType* ModelMeshCollision_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ModelMeshCollision);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.ModelMeshCollision", options);
    type->fp_ctor_ = (void*)ModelMeshCollision__New1_fn;
    ::STRINGS[2] = uString::Const("modelMesh can not be null");
    ::TYPES[34] = ::g::Uno::Content::Models::ModelMesh_typeof();
    return type;
}

// public generated ModelMeshCollision() :1568
void ModelMeshCollision__ctor__fn(ModelMeshCollision* __this)
{
    __this->ctor_();
}

// public generated ModelMeshCollision New() :1568
void ModelMeshCollision__New1_fn(ModelMeshCollision** __retval)
{
    *__retval = ModelMeshCollision::New1();
}

// public static bool RayIntersectsModelMesh(Uno.Geometry.Ray objRay, Uno.Content.Models.ModelMesh modelMesh, float& outDistance) :1570
void ModelMeshCollision__RayIntersectsModelMesh_fn(::g::Uno::Geometry::Ray* objRay, ::g::Uno::Content::Models::ModelMesh* modelMesh, float* outDistance, bool* __retval)
{
    *__retval = ModelMeshCollision::RayIntersectsModelMesh(*objRay, modelMesh, outDistance);
}

// public generated ModelMeshCollision() [instance] :1568
void ModelMeshCollision::ctor_()
{
}

// public generated ModelMeshCollision New() [static] :1568
ModelMeshCollision* ModelMeshCollision::New1()
{
    ModelMeshCollision* obj1 = (ModelMeshCollision*)uNew(ModelMeshCollision_typeof());
    obj1->ctor_();
    return obj1;
}

// public static bool RayIntersectsModelMesh(Uno.Geometry.Ray objRay, Uno.Content.Models.ModelMesh modelMesh, float& outDistance) [static] :1570
bool ModelMeshCollision::RayIntersectsModelMesh(::g::Uno::Geometry::Ray objRay, ::g::Uno::Content::Models::ModelMesh* modelMesh, float* outDistance)
{
    uStackFrame __("Fuse.Entities.ModelMeshCollision", "RayIntersectsModelMesh(Uno.Geometry.Ray,Uno.Content.Models.ModelMesh,float&)");

    if (modelMesh == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"modelMesh c...*/]));

    bool useIndices = uPtr(modelMesh)->IndexCount() > 0;
    return useIndices ? ModelMeshCollision__Indexed::New1(modelMesh->Positions(), modelMesh->Indices(), modelMesh->IndexCount())->IntersectsRay(objRay, outDistance) : ModelMeshCollision__Direct::New1(modelMesh->Positions(), modelMesh->VertexCount())->IntersectsRay(objRay, outDistance);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1639)
// ---------------------------------------------------------------

// internal static class ModelMeshHelpers :1639
// {
uClassType* ModelMeshHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Entities.ModelMeshHelpers", options);
    ::TYPES[34] = ::g::Uno::Content::Models::ModelMesh_typeof();
    ::TYPES[0] = ::g::Uno::Float4_typeof();
    ::TYPES[69] = ::g::Uno::Float3_typeof();
    return type;
}

// public static Uno.Geometry.Box CalculateAABB(Uno.Content.Models.ModelMesh modelMesh) :1641
void ModelMeshHelpers__CalculateAABB_fn(::g::Uno::Content::Models::ModelMesh* modelMesh, ::g::Uno::Geometry::Box* __retval)
{
    *__retval = ModelMeshHelpers::CalculateAABB(modelMesh);
}

// public static Uno.Geometry.Sphere CalculateBoundingSphere(Uno.Content.Models.ModelMesh modelMesh) :1655
void ModelMeshHelpers__CalculateBoundingSphere_fn(::g::Uno::Content::Models::ModelMesh* modelMesh, ::g::Uno::Geometry::Sphere* __retval)
{
    *__retval = ModelMeshHelpers::CalculateBoundingSphere(modelMesh);
}

// public static Uno.Geometry.Box CalculateAABB(Uno.Content.Models.ModelMesh modelMesh) [static] :1641
::g::Uno::Geometry::Box ModelMeshHelpers::CalculateAABB(::g::Uno::Content::Models::ModelMesh* modelMesh)
{
    uStackFrame __("Fuse.Entities.ModelMeshHelpers", "CalculateAABB(Uno.Content.Models.ModelMesh)");
    ::g::Uno::Content::Models::VertexAttributeArray* positions = uPtr(modelMesh)->Positions();
    ::g::Uno::Float3 min = ::g::Uno::Float3__New2(3.402823e+38f, 3.402823e+38f, 3.402823e+38f);
    ::g::Uno::Float3 max = ::g::Uno::Float3__New2(-3.402823e+38f, -3.402823e+38f, -3.402823e+38f);

    for (int v = 0; v < modelMesh->VertexCount(); v++)
    {
        ::g::Uno::Float4 ind1 = uPtr(positions)->GetFloat4(v);
        ::g::Uno::Float3 p = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
        min = ::g::Uno::Float3__New2(::g::Uno::Math::Min1(min.X, p.X), ::g::Uno::Math::Min1(min.Y, p.Y), ::g::Uno::Math::Min1(min.Z, p.Z));
        max = ::g::Uno::Float3__New2(::g::Uno::Math::Max1(max.X, p.X), ::g::Uno::Math::Max1(max.Y, p.Y), ::g::Uno::Math::Max1(max.Z, p.Z));
    }

    return ::g::Uno::Geometry::Box__New1(min, max);
}

// public static Uno.Geometry.Sphere CalculateBoundingSphere(Uno.Content.Models.ModelMesh modelMesh) [static] :1655
::g::Uno::Geometry::Sphere ModelMeshHelpers::CalculateBoundingSphere(::g::Uno::Content::Models::ModelMesh* modelMesh)
{
    uStackFrame __("Fuse.Entities.ModelMeshHelpers", "CalculateBoundingSphere(Uno.Content.Models.ModelMesh)");
    ::g::Uno::Content::Models::VertexAttributeArray* positions = uPtr(modelMesh)->Positions();
    ::g::Uno::Float3 center = ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f);
    float radius = 0.0f;

    for (int v = 0; v < modelMesh->VertexCount(); v++)
    {
        ::g::Uno::Float4 ind2 = uPtr(positions)->GetFloat4(v);
        ::g::Uno::Float3 p = ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z);
        float dist = ::g::Uno::Vector::Distance1(p, center);
        radius = ::g::Uno::Math::Max1(dist, radius);
    }

    return ::g::Uno::Geometry::Sphere__New1(center, radius);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1680)
// ---------------------------------------------------------------

// public static class NodeExtensions :1680
// {
uClassType* NodeExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Entities.NodeExtensions", options);
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction("IsInSubtreeOf", NULL, (void*)NodeExtensions__IsInSubtreeOf_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public static bool IsInSubtreeOf(Fuse.Node self, Fuse.Node parent) :1682
void NodeExtensions__IsInSubtreeOf_fn(::g::Fuse::Node* self, ::g::Fuse::Node* parent, bool* __retval)
{
    *__retval = NodeExtensions::IsInSubtreeOf(self, parent);
}

// public static bool IsInSubtreeOf(Fuse.Node self, Fuse.Node parent) [static] :1682
bool NodeExtensions::IsInSubtreeOf(::g::Fuse::Node* self, ::g::Fuse::Node* parent)
{
    uStackFrame __("Fuse.Entities.NodeExtensions", "IsInSubtreeOf(Fuse.Node,Fuse.Node)");

    for (::g::Fuse::Node* p = self; p != NULL; p = uPtr(p)->Parent())
        if (p == parent)
            return true;

    return false;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(899)
// --------------------------------------------------------------

// public sealed class PointLight :899
// {
::g::Fuse::Entities::Light_type* PointLight_typeof()
{
    static uSStrong< ::g::Fuse::Entities::Light_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PointLight);
    options.TypeSize = sizeof(::g::Fuse::Entities::Light_type);
    type = (::g::Fuse::Entities::Light_type*)uClassType::New("Fuse.Entities.PointLight", options);
    type->SetBase(::g::Fuse::Entities::Light_typeof());
    type->fp_ctor_ = (void*)PointLight__New1_fn;
    type->fp_Accept = (void(*)(::g::Fuse::Entities::Light*, uObject*))PointLight__Accept_fn;
    ::TYPES[70] = ::g::Fuse::Entities::Light_typeof();
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointLight__New1_fn, 0, true, PointLight_typeof(), 0));
    return type;
}

// public PointLight() :901
void PointLight__ctor_2_fn(PointLight* __this)
{
    __this->ctor_2();
}

// public override sealed void Accept(Fuse.Entities.ILightVisitor visitor) :906
void PointLight__Accept_fn(PointLight* __this, uObject* visitor)
{
    uStackFrame __("Fuse.Entities.PointLight", "Accept(Fuse.Entities.ILightVisitor)");
    ::g::Fuse::Entities::ILightVisitor::Visit3(uInterface(uPtr(visitor), ::g::Fuse::Entities::ILightVisitor_typeof()), __this);
}

// public PointLight New() :901
void PointLight__New1_fn(PointLight** __retval)
{
    *__retval = PointLight::New1();
}

// public PointLight() [instance] :901
void PointLight::ctor_2()
{
    uStackFrame __("Fuse.Entities.PointLight", ".ctor()");
    ctor_1();
    Range(200.0f);
}

// public PointLight New() [static] :901
PointLight* PointLight::New1()
{
    PointLight* obj1 = (PointLight*)uNew(PointLight_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1814)
// ---------------------------------------------------------------

// internal static class Raycasting :1814
// {
uClassType* Raycasting_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Entities.Raycasting", options);
    ::TYPES[50] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[29] = ::g::Fuse::Entities::Component_typeof();
    ::TYPES[58] = ::g::Fuse::Entities::Mesh_typeof();
    ::TYPES[25] = ::g::Fuse::Entities::MeshRenderer_typeof();
    ::TYPES[34] = ::g::Uno::Content::Models::ModelMesh_typeof();
    ::TYPES[0] = ::g::Uno::Float4_typeof();
    ::TYPES[68] = ::g::Uno::Geometry::Ray_typeof();
    ::TYPES[69] = ::g::Uno::Float3_typeof();
    return type;
}

// public static bool PointToTexcoordSpace(Fuse.DrawContext tc, Fuse.Entities.Entity e, float2& pointCoord) :1846
void Raycasting__PointToTexcoordSpace_fn(::g::Fuse::DrawContext* tc, ::g::Fuse::Entities::Entity* e, ::g::Uno::Float2* pointCoord, bool* __retval)
{
    *__retval = Raycasting::PointToTexcoordSpace(tc, e, pointCoord);
}

// public static bool PointToTexcoordSpace(Fuse.DrawContext tc, Fuse.Entities.MeshRenderer mr, float2& pointCoord, float& minDistance) :1853
void Raycasting__PointToTexcoordSpace1_fn(::g::Fuse::DrawContext* tc, ::g::Fuse::Entities::MeshRenderer* mr, ::g::Uno::Float2* pointCoord, float* minDistance, bool* __retval)
{
    *__retval = Raycasting::PointToTexcoordSpace1(tc, mr, pointCoord, minDistance);
}

// public static bool PointToTexcoordSpace(Fuse.DrawContext tc, Fuse.Entities.Entity e, float2& pointCoord) [static] :1846
bool Raycasting::PointToTexcoordSpace(::g::Fuse::DrawContext* tc, ::g::Fuse::Entities::Entity* e, ::g::Uno::Float2* pointCoord)
{
    uStackFrame __("Fuse.Entities.Raycasting", "PointToTexcoordSpace(Fuse.DrawContext,Fuse.Entities.Entity,float2&)");

    if (e == NULL)
        return false;

    Raycasting__EntityVisitor* v = Raycasting__EntityVisitor::New1(tc);
    return v->Visit(e, pointCoord);
}

// public static bool PointToTexcoordSpace(Fuse.DrawContext tc, Fuse.Entities.MeshRenderer mr, float2& pointCoord, float& minDistance) [static] :1853
bool Raycasting::PointToTexcoordSpace1(::g::Fuse::DrawContext* tc, ::g::Fuse::Entities::MeshRenderer* mr, ::g::Uno::Float2* pointCoord, float* minDistance)
{
    uStackFrame __("Fuse.Entities.Raycasting", "PointToTexcoordSpace(Fuse.DrawContext,Fuse.Entities.MeshRenderer,float2&,float&)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Geometry::Ray objRay = ::g::Uno::Geometry::Ray__Transform(::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(uPtr(tc)->Viewport()), ::TYPES[31/*Fuse.IViewport*/]), *pointCoord), uPtr(uPtr(mr)->Entity())->WorldTransformInverse());
    ::g::Uno::Float2 newPoint = *pointCoord;
    ::g::Uno::Content::Models::ModelMesh* modelMesh = uPtr(mr->Mesh())->ModelMesh();
    ::g::Uno::Content::Models::IndexArray* indices = uPtr(modelMesh)->Indices();
    ::g::Uno::Content::Models::VertexAttributeArray* positions = modelMesh->Positions();
    ::g::Uno::Content::Models::VertexAttributeArray* uvs = modelMesh->TexCoords();

    if (uvs == NULL)
        return false;

    bool hit = false;
    bool useIndices = modelMesh->IndexCount() != -1;
    int count = useIndices ? modelMesh->IndexCount() : modelMesh->VertexCount();

    for (int i = 0; i < count; i = i + 3)
    {
        int a = useIndices ? uPtr(indices)->GetInt(i) : i;
        int b = useIndices ? indices->GetInt(i + 1) : i + 1;
        int c = useIndices ? indices->GetInt(i + 2) : i + 2;
        ::g::Uno::Geometry::Triangle triangle = ::g::Uno::Geometry::Triangle__New1((ind1 = uPtr(positions)->GetFloat4(a), ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z)), (ind2 = uPtr(positions)->GetFloat4(b), ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z)), (ind3 = uPtr(positions)->GetFloat4(c), ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z)));
        float distance;

        if (::g::Uno::Geometry::Collision::RayIntersectsTriangle(objRay, triangle, &distance))
        {
            hit = true;

            if (distance < *minDistance)
                *minDistance = distance;

            ::g::Uno::Float3 point = ::g::Uno::Float3__op_Addition2(objRay.Position, ::g::Uno::Float3__op_Multiply1(::g::Uno::Vector::Normalize1(objRay.Direction), distance));
            ::g::Uno::Float3 bc = triangle.GetBarycentricCoordinatesAt(point);
            ::g::Uno::Float4 ind4 = uPtr(uvs)->GetFloat4(a);
            ::g::Uno::Float2 uva = ::g::Uno::Float2__New2(ind4.X, ind4.Y);
            ::g::Uno::Float4 ind5 = uvs->GetFloat4(b);
            ::g::Uno::Float2 uvb = ::g::Uno::Float2__New2(ind5.X, ind5.Y);
            ::g::Uno::Float4 ind6 = uvs->GetFloat4(c);
            ::g::Uno::Float2 uvc = ::g::Uno::Float2__New2(ind6.X, ind6.Y);
            ::g::Uno::Float2 uv = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply1(uva, bc.X), ::g::Uno::Float2__op_Multiply1(uvb, bc.Y)), ::g::Uno::Float2__op_Multiply1(uvc, bc.Z));
            newPoint = uv;
        }
    }

    if (hit)
        *pointCoord = newPoint;

    return hit;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1923)
// ---------------------------------------------------------------

// public class RenderNode :1923
// {
RenderNode_type* RenderNode_typeof()
{
    static uSStrong<RenderNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 56;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RenderNode);
    options.TypeSize = sizeof(RenderNode_type);
    type = (RenderNode_type*)uClassType::New("Fuse.Entities.RenderNode", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_ctor_ = (void*)RenderNode__New1_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Node*, ::g::Fuse::DrawContext*))RenderNode__Draw_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))RenderNode__GetSubNode_fn;
    type->fp_get_LocalBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Geometry::Box*))RenderNode__get_LocalBounds_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))RenderNode__OnArrangeMarginBox_fn;
    type->fp_OnDraw = RenderNode__OnDraw_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))RenderNode__OnHitTest_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))RenderNode__get_SubNodeCount_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[71] = ::g::Uno::EventHandler_typeof();
    ::TYPES[72] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[73] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[74] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[75] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[76] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(RenderNode_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(RenderNode_type, interface1));
    type->SetFields(55,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::RenderNode, _children), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Children", NULL, (void*)RenderNode__get_Children_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), 0),
        new uFunction(".ctor", NULL, (void*)RenderNode__New1_fn, 0, true, RenderNode_typeof(), 0));
    return type;
}

// public RenderNode() :1925
void RenderNode__ctor_1_fn(RenderNode* __this)
{
    __this->ctor_1();
}

// public Uno.Collections.IList<Fuse.Node> get_Children() :1941
void RenderNode__get_Children_fn(RenderNode* __this, uObject** __retval)
{
    *__retval = __this->Children();
}

// public override sealed void Draw(Fuse.DrawContext dc) :1961
void RenderNode__Draw_fn(RenderNode* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Entities.RenderNode", "Draw(Fuse.DrawContext)");

    if (__this->IsVisible())
        __this->OnDraw(dc);
}

// public override sealed Fuse.Node GetSubNode(int index) :1984
void RenderNode__GetSubNode_fn(RenderNode* __this, int* index, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Fuse.Entities.RenderNode", "GetSubNode(int)");
    ::g::Fuse::Node* ret3;
    int index_ = *index;
    return *__retval = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[72/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(index_), &ret3), ret3), void();
}

// public override sealed Uno.Geometry.Box get_LocalBounds() :1991
void RenderNode__get_LocalBounds_fn(RenderNode* __this, ::g::Uno::Geometry::Box* __retval)
{
    uStackFrame __("Fuse.Entities.RenderNode", "get_LocalBounds()");
    return *__retval = ::g::Uno::Geometry::Box__New1(::g::Uno::Float3__New1(0.0f), ::g::Uno::Float3__New1(0.0f)), void();
}

// public RenderNode New() :1925
void RenderNode__New1_fn(RenderNode** __retval)
{
    *__retval = RenderNode::New1();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :1994
void RenderNode__OnArrangeMarginBox_fn(RenderNode* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Entities.RenderNode", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Fuse::Node* ret4;
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 mx = ::g::Uno::Float2__New1(0.0f);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Children()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[12/*Fuse.Node*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Node* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[73/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret4), ret4);
        mx = ::g::Uno::Math::Max3(mx, uPtr(child)->ArrangeMarginBox(position_, lp_));
    }

    return *__retval = mx, void();
}

// private void OnChildAdded(Fuse.Node c) :1949
void RenderNode__OnChildAdded_fn(RenderNode* __this, ::g::Fuse::Node* c)
{
    __this->OnChildAdded(c);
}

// private void OnChildRemoved(Fuse.Node c) :1955
void RenderNode__OnChildRemoved_fn(RenderNode* __this, ::g::Fuse::Node* c)
{
    __this->OnChildRemoved(c);
}

// protected virtual void OnDraw(Fuse.DrawContext dc) :1967
void RenderNode__OnDraw_fn(RenderNode* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Entities.RenderNode", "OnDraw(Fuse.DrawContext)");
    ::g::Fuse::Node* ret5;

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[74/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1; i >= 0; --i)
        uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[72/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret5), ret5))->Draw(dc);
}

// protected override void OnHitTest(Fuse.HitTestContext args) :1973
void RenderNode__OnHitTest_fn(RenderNode* __this, ::g::Fuse::HitTestContext* args)
{
    uStackFrame __("Fuse.Entities.RenderNode", "OnHitTest(Fuse.HitTestContext)");
    ::g::Fuse::Node* ret6;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[74/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
        uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[72/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret6), ret6))->HitTest(args);
}

// private void OnUpdated(object s, object a) :1931
void RenderNode__OnUpdated_fn(RenderNode* __this, uObject* s, uObject* a)
{
    __this->OnUpdated(s, a);
}

// public override sealed int get_SubNodeCount() :1981
void RenderNode__get_SubNodeCount_fn(RenderNode* __this, int* __retval)
{
    uStackFrame __("Fuse.Entities.RenderNode", "get_SubNodeCount()");
    return *__retval = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[74/*Uno.Collections.ICollection<Fuse.Node>*/])), void();
}

// public RenderNode() [instance] :1925
void RenderNode::ctor_1()
{
    uStackFrame __("Fuse.Entities.RenderNode", ".ctor()");
    ctor_();
    add_Update(uDelegate::New(::TYPES[71/*Uno.EventHandler*/], (void*)RenderNode__OnUpdated_fn, this));
}

// public Uno.Collections.IList<Fuse.Node> get_Children() [instance] :1941
uObject* RenderNode::Children()
{
    uStackFrame __("Fuse.Entities.RenderNode", "get_Children()");

    if (_children == NULL)
        _children = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[75/*Uno.Collections.ObservableList<Fuse.Node>*/], uDelegate::New(::TYPES[76/*Uno.Action<Fuse.Node>*/], (void*)RenderNode__OnChildAdded_fn, this), uDelegate::New(::TYPES[76/*Uno.Action<Fuse.Node>*/], (void*)RenderNode__OnChildRemoved_fn, this)));

    return (uObject*)_children;
}

// private void OnChildAdded(Fuse.Node c) [instance] :1949
void RenderNode::OnChildAdded(::g::Fuse::Node* c)
{
    uStackFrame __("Fuse.Entities.RenderNode", "OnChildAdded(Fuse.Node)");
    uPtr(c)->OnAdded(this);
    InvalidateLayout(2);
}

// private void OnChildRemoved(Fuse.Node c) [instance] :1955
void RenderNode::OnChildRemoved(::g::Fuse::Node* c)
{
    uStackFrame __("Fuse.Entities.RenderNode", "OnChildRemoved(Fuse.Node)");
    uPtr(c)->OnRemoved(this);
    InvalidateLayout(2);
}

// private void OnUpdated(object s, object a) [instance] :1931
void RenderNode::OnUpdated(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Entities.RenderNode", "OnUpdated(object,object)");
    InvalidateVisual();
}

// public RenderNode New() [static] :1925
RenderNode* RenderNode::New1()
{
    RenderNode* obj2 = (RenderNode*)uNew(RenderNode_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(2015)
// ---------------------------------------------------------------

// public sealed class RenderToTexture :2015
// {
::g::Fuse::Entities::RenderNode_type* RenderToTexture_typeof()
{
    static uSStrong< ::g::Fuse::Entities::RenderNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 68;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RenderToTexture);
    options.TypeSize = sizeof(::g::Fuse::Entities::RenderNode_type);
    type = (::g::Fuse::Entities::RenderNode_type*)uClassType::New("Fuse.Entities.RenderToTexture", options);
    type->SetBase(::g::Fuse::Entities::RenderNode_typeof());
    type->fp_ctor_ = (void*)RenderToTexture__New2_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Entities::RenderNode*, ::g::Fuse::DrawContext*))RenderToTexture__OnDraw_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[63] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[77] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[78] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[62] = ::g::FuseEntities_bundle_typeof();
    ::TYPES[79] = ::g::Uno::Int2_typeof();
    ::TYPES[80] = ::g::Uno::Graphics::Framebuffer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Entities::RenderNode_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Entities::RenderNode_type, interface1));
    type->SetFields(56,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, _draw_606d3302), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, BlitFlipped_VertexData_606d3302_7_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, BlitFlipped_VertexData_606d3302_7_5_3), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, depth), 0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, fb), 0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, format), 0,
        ::g::Fuse::Entities::Entity_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, raycastTarget), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, resolution), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, _Clear), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, _ClearColor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, _ClearDepth), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::RenderToTexture, _FlipVertically), 0);
    type->Reflection.SetFunctions(18,
        new uFunction("get_Clear", NULL, (void*)RenderToTexture__get_Clear_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Clear", NULL, (void*)RenderToTexture__set_Clear_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ClearColor", NULL, (void*)RenderToTexture__get_ClearColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_ClearColor", NULL, (void*)RenderToTexture__set_ClearColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_ClearDepth", NULL, (void*)RenderToTexture__get_ClearDepth_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ClearDepth", NULL, (void*)RenderToTexture__set_ClearDepth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DepthBuffer", NULL, (void*)RenderToTexture__get_DepthBuffer_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_DepthBuffer", NULL, (void*)RenderToTexture__set_DepthBuffer_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_EventRaycastTarget", NULL, (void*)RenderToTexture__get_EventRaycastTarget_fn, 0, false, ::g::Fuse::Entities::Entity_typeof(), 0),
        new uFunction("set_EventRaycastTarget", NULL, (void*)RenderToTexture__set_EventRaycastTarget_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Entities::Entity_typeof()),
        new uFunction("get_FlipVertically", NULL, (void*)RenderToTexture__get_FlipVertically_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_FlipVertically", NULL, (void*)RenderToTexture__set_FlipVertically_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)RenderToTexture__New2_fn, 0, true, RenderToTexture_typeof(), 0),
        new uFunction("get_PixelFormat", NULL, (void*)RenderToTexture__get_PixelFormat_fn, 0, false, ::g::Uno::Graphics::Format_typeof(), 0),
        new uFunction("set_PixelFormat", NULL, (void*)RenderToTexture__set_PixelFormat_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::Format_typeof()),
        new uFunction("get_Resolution", NULL, (void*)RenderToTexture__get_Resolution_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Resolution", NULL, (void*)RenderToTexture__set_Resolution_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("get_Result", NULL, (void*)RenderToTexture__get_Result_fn, 0, false, ::g::Uno::Graphics::Texture2D_typeof(), 0));
    return type;
}

// public RenderToTexture() :2063
void RenderToTexture__ctor_2_fn(RenderToTexture* __this)
{
    __this->ctor_2();
}

// private void BlitFlipped(texture2D tex) :2099
void RenderToTexture__BlitFlipped_fn(RenderToTexture* __this, ::g::Uno::Graphics::Texture2D* tex)
{
    __this->BlitFlipped(tex);
}

// public generated bool get_Clear() :2055
void RenderToTexture__get_Clear_fn(RenderToTexture* __this, bool* __retval)
{
    *__retval = __this->Clear();
}

// public generated void set_Clear(bool value) :2055
void RenderToTexture__set_Clear_fn(RenderToTexture* __this, bool* value)
{
    __this->Clear(*value);
}

// public generated float4 get_ClearColor() :2058
void RenderToTexture__get_ClearColor_fn(RenderToTexture* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ClearColor();
}

// public generated void set_ClearColor(float4 value) :2058
void RenderToTexture__set_ClearColor_fn(RenderToTexture* __this, ::g::Uno::Float4* value)
{
    __this->ClearColor(*value);
}

// public generated float get_ClearDepth() :2061
void RenderToTexture__get_ClearDepth_fn(RenderToTexture* __this, float* __retval)
{
    *__retval = __this->ClearDepth();
}

// public generated void set_ClearDepth(float value) :2061
void RenderToTexture__set_ClearDepth_fn(RenderToTexture* __this, float* value)
{
    __this->ClearDepth(*value);
}

// public bool get_DepthBuffer() :2050
void RenderToTexture__get_DepthBuffer_fn(RenderToTexture* __this, bool* __retval)
{
    *__retval = __this->DepthBuffer();
}

// public void set_DepthBuffer(bool value) :2051
void RenderToTexture__set_DepthBuffer_fn(RenderToTexture* __this, bool* value)
{
    __this->DepthBuffer(*value);
}

// public Fuse.Entities.Entity get_EventRaycastTarget() :2123
void RenderToTexture__get_EventRaycastTarget_fn(RenderToTexture* __this, ::g::Fuse::Entities::Entity** __retval)
{
    *__retval = __this->EventRaycastTarget();
}

// public void set_EventRaycastTarget(Fuse.Entities.Entity value) :2124
void RenderToTexture__set_EventRaycastTarget_fn(RenderToTexture* __this, ::g::Fuse::Entities::Entity* value)
{
    __this->EventRaycastTarget(value);
}

// public generated bool get_FlipVertically() :2071
void RenderToTexture__get_FlipVertically_fn(RenderToTexture* __this, bool* __retval)
{
    *__retval = __this->FlipVertically();
}

// public generated void set_FlipVertically(bool value) :2071
void RenderToTexture__set_FlipVertically_fn(RenderToTexture* __this, bool* value)
{
    __this->FlipVertically(*value);
}

// private generated void init_DrawCalls() :2015
void RenderToTexture__init_DrawCalls_fn(RenderToTexture* __this)
{
    __this->init_DrawCalls();
}

// public RenderToTexture New() :2063
void RenderToTexture__New2_fn(RenderToTexture** __retval)
{
    *__retval = RenderToTexture::New2();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :2073
void RenderToTexture__OnDraw_fn(RenderToTexture* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "OnDraw(Fuse.DrawContext)");

    if (__this->FlipVertically())
    {
        ::g::Uno::Graphics::Framebuffer* tempfb = ::g::Fuse::FramebufferPool::Lock(__this->resolution.X, __this->resolution.Y, __this->format, __this->depth);
        uPtr(dc)->PushRenderTarget(tempfb);

        if (__this->Clear())
            dc->Clear(__this->ClearColor(), __this->ClearDepth());

        ::g::Fuse::Entities::RenderNode__OnDraw_fn(__this, dc);
        dc->PopRenderTarget();
        dc->PushRenderTarget(__this->fb);
        __this->BlitFlipped(uPtr(tempfb)->ColorBuffer());
        dc->PopRenderTarget();
        ::g::Fuse::FramebufferPool::Release(tempfb);
    }
    else
    {
        uPtr(dc)->PushRenderTarget(__this->fb);

        if (__this->Clear())
            dc->Clear(__this->ClearColor(), __this->ClearDepth());

        ::g::Fuse::Entities::RenderNode__OnDraw_fn(__this, dc);
        dc->PopRenderTarget();
    }
}

// public Uno.Graphics.Format get_PixelFormat() :2042
void RenderToTexture__get_PixelFormat_fn(RenderToTexture* __this, int* __retval)
{
    *__retval = __this->PixelFormat();
}

// public void set_PixelFormat(Uno.Graphics.Format value) :2043
void RenderToTexture__set_PixelFormat_fn(RenderToTexture* __this, int* value)
{
    __this->PixelFormat(*value);
}

// public int2 get_Resolution() :2023
void RenderToTexture__get_Resolution_fn(RenderToTexture* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Resolution();
}

// public void set_Resolution(int2 value) :2027
void RenderToTexture__set_Resolution_fn(RenderToTexture* __this, ::g::Uno::Int2* value)
{
    __this->Resolution(*value);
}

// public texture2D get_Result() :2112
void RenderToTexture__get_Result_fn(RenderToTexture* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->Result();
}

// public RenderToTexture() [instance] :2063
void RenderToTexture::ctor_2()
{
    uStackFrame __("Fuse.Entities.RenderToTexture", ".ctor()");
    format = 3;
    depth = true;
    ctor_1();
    Clear(true);
    ClearDepth(1.0f);
    Resolution(::g::Uno::Int2__New2(128, 128));
    init_DrawCalls();
}

// private void BlitFlipped(texture2D tex) [instance] :2099
void RenderToTexture::BlitFlipped(::g::Uno::Graphics::Texture2D* tex)
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "BlitFlipped(texture2D)");
    _draw_606d3302.DepthTestEnabled(false);
    _draw_606d3302.CullFace(0);
    _draw_606d3302.Use();
    _draw_606d3302.Attrib1(0, 2, BlitFlipped_VertexData_606d3302_7_5_3, 8, 0);
    _draw_606d3302.Sampler2(1, tex);
    _draw_606d3302.Draw(6, 2, BlitFlipped_VertexData_606d3302_7_5_2);
}

// public generated bool get_Clear() [instance] :2055
bool RenderToTexture::Clear()
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "get_Clear()");
    return _Clear;
}

// public generated void set_Clear(bool value) [instance] :2055
void RenderToTexture::Clear(bool value)
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "set_Clear(bool)");
    _Clear = value;
}

// public generated float4 get_ClearColor() [instance] :2058
::g::Uno::Float4 RenderToTexture::ClearColor()
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "get_ClearColor()");
    return _ClearColor;
}

// public generated void set_ClearColor(float4 value) [instance] :2058
void RenderToTexture::ClearColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "set_ClearColor(float4)");
    _ClearColor = value;
}

// public generated float get_ClearDepth() [instance] :2061
float RenderToTexture::ClearDepth()
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "get_ClearDepth()");
    return _ClearDepth;
}

// public generated void set_ClearDepth(float value) [instance] :2061
void RenderToTexture::ClearDepth(float value)
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "set_ClearDepth(float)");
    _ClearDepth = value;
}

// public bool get_DepthBuffer() [instance] :2050
bool RenderToTexture::DepthBuffer()
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "get_DepthBuffer()");
    return depth;
}

// public void set_DepthBuffer(bool value) [instance] :2051
void RenderToTexture::DepthBuffer(bool value)
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "set_DepthBuffer(bool)");
    depth = value;
}

// public Fuse.Entities.Entity get_EventRaycastTarget() [instance] :2123
::g::Fuse::Entities::Entity* RenderToTexture::EventRaycastTarget()
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "get_EventRaycastTarget()");
    return raycastTarget;
}

// public void set_EventRaycastTarget(Fuse.Entities.Entity value) [instance] :2124
void RenderToTexture::EventRaycastTarget(::g::Fuse::Entities::Entity* value)
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "set_EventRaycastTarget(Fuse.Entities.Entity)");
    raycastTarget = value;
}

// public generated bool get_FlipVertically() [instance] :2071
bool RenderToTexture::FlipVertically()
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "get_FlipVertically()");
    return _FlipVertically;
}

// public generated void set_FlipVertically(bool value) [instance] :2071
void RenderToTexture::FlipVertically(bool value)
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "set_FlipVertically(bool)");
    _FlipVertically = value;
}

// private generated void init_DrawCalls() [instance] :2015
void RenderToTexture::init_DrawCalls()
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "init_DrawCalls()");
    BlitFlipped_VertexData_606d3302_7_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(uArray::Init<int>(::TYPES[77/*ushort[]*/], 6, 0, 1, 2, 2, 3, 0)), 0);
    BlitFlipped_VertexData_606d3302_7_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[78/*float2[]*/], 4, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f))), 0);
    _draw_606d3302 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEntities_bundle::RenderToTexturea069a95b());
}

// public Uno.Graphics.Format get_PixelFormat() [instance] :2042
int RenderToTexture::PixelFormat()
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "get_PixelFormat()");
    return format;
}

// public void set_PixelFormat(Uno.Graphics.Format value) [instance] :2043
void RenderToTexture::PixelFormat(int value)
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "set_PixelFormat(Uno.Graphics.Format)");
    format = value;
}

// public int2 get_Resolution() [instance] :2023
::g::Uno::Int2 RenderToTexture::Resolution()
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "get_Resolution()");
    return resolution;
}

// public void set_Resolution(int2 value) [instance] :2027
void RenderToTexture::Resolution(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "set_Resolution(int2)");

    if (::g::Uno::Int2::op_Inequality(resolution, value))
    {
        resolution = ::g::Uno::Math::Max10(::g::Uno::Int2__New1(0), ::g::Uno::Math::Min10(value, ::g::Uno::Int2__New2(2048, 2048)));

        if (fb != NULL)
            uPtr(fb)->Dispose();

        fb = ::g::Uno::Graphics::Framebuffer::New1(resolution, PixelFormat(), 1);
    }
}

// public texture2D get_Result() [instance] :2112
::g::Uno::Graphics::Texture2D* RenderToTexture::Result()
{
    uStackFrame __("Fuse.Entities.RenderToTexture", "get_Result()");

    if (fb != NULL)
        return uPtr(fb)->ColorBuffer();
    else
        return NULL;
}

// public RenderToTexture New() [static] :2063
RenderToTexture* RenderToTexture::New2()
{
    RenderToTexture* obj1 = (RenderToTexture*)uNew(RenderToTexture_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(2142)
// ---------------------------------------------------------------

// public sealed class Scene :2142
// {
Scene_type* Scene_typeof()
{
    static uSStrong<Scene_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 60;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Scene);
    options.TypeSize = sizeof(Scene_type);
    type = (Scene_type*)uClassType::New("Fuse.Entities.Scene", options);
    type->SetBase(::g::Fuse::Entities::RenderNode_typeof());
    type->fp_ctor_ = (void*)Scene__New2_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Entities::RenderNode*, ::g::Fuse::DrawContext*))Scene__OnDraw_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))Scene__OnHitTest_fn;
    type->fp_WindowToWorldRay = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))Scene__WindowToWorldRay_fn;
    type->interface2.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))Scene__PointToWorldRay_fn;
    type->interface2.fp_get_PointDensity = (void(*)(uObject*, float*))Scene__get_PointDensity_fn;
    type->interface2.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))Scene__get_Size_fn;
    type->interface2.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))Scene__get_PixelSize_fn;
    type->interface2.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Scene__get_ProjectionTransform_fn;
    type->interface2.fp_get_ProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))Scene__get_ProjectionTransformInverse_fn;
    type->interface2.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Scene__get_ViewProjectionTransform_fn;
    type->interface2.fp_get_ViewProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))Scene__get_ViewProjectionTransformInverse_fn;
    type->interface2.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Scene__get_ViewTransform_fn;
    type->interface2.fp_get_ViewTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))Scene__get_ViewTransformInverse_fn;
    type->interface2.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))Scene__get_ViewOrigin_fn;
    type->interface2.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))Scene__get_ViewRange_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[31] = ::g::Fuse::IViewport_typeof();
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[67] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[64] = ::g::Fuse::Entities::Entity_typeof();
    ::TYPES[81] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[82] = ::g::Uno::Application_typeof();
    ::TYPES[83] = ::g::Uno::Platform2::Display_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Scene_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Scene_type, interface1),
        ::g::Fuse::IViewport_typeof(), offsetof(Scene_type, interface2));
    type->SetFields(56,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Scene, _AlwaysClear), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Scene, _AlwaysUseOwnCamera), 0,
        ::g::Fuse::Entities::Entity_typeof(), offsetof(::g::Fuse::Entities::Scene, _Camera), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Entities::Scene, _ClearColor), 0);
    type->Reflection.SetFunctions(27,
        new uFunction("get_AlwaysClear", NULL, (void*)Scene__get_AlwaysClear_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AlwaysClear", NULL, (void*)Scene__set_AlwaysClear_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_AlwaysUseOwnCamera", NULL, (void*)Scene__get_AlwaysUseOwnCamera_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AlwaysUseOwnCamera", NULL, (void*)Scene__set_AlwaysUseOwnCamera_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Camera", NULL, (void*)Scene__get_Camera_fn, 0, false, ::g::Fuse::Entities::Entity_typeof(), 0),
        new uFunction("set_Camera", NULL, (void*)Scene__set_Camera_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Entities::Entity_typeof()),
        new uFunction("get_ClearColor", NULL, (void*)Scene__get_ClearColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_ClearColor", NULL, (void*)Scene__set_ClearColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)Scene__New2_fn, 0, true, Scene_typeof(), 0),
        new uFunction("get_PixelSize", NULL, (void*)Scene__get_PixelSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PointDensity", NULL, (void*)Scene__get_PointDensity_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("PointToWorldRay", NULL, (void*)Scene__PointToWorldRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_ProjectionTransform", NULL, (void*)Scene__get_ProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ProjectionTransformInverse", NULL, (void*)Scene__get_ProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_Size", NULL, (void*)Scene__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewOrigin", NULL, (void*)Scene__get_ViewOrigin_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_ViewProjectionTransform", NULL, (void*)Scene__get_ViewProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewProjectionTransformInverse", NULL, (void*)Scene__get_ViewProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewRange", NULL, (void*)Scene__get_ViewRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewTransform", NULL, (void*)Scene__get_ViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewTransformInverse", NULL, (void*)Scene__get_ViewTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("add_WindowClosed", NULL, (void*)Scene__add_WindowClosed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_WindowClosed", NULL, (void*)Scene__remove_WindowClosed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("add_WindowClosing", NULL, (void*)Scene__add_WindowClosing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::ClosingEventArgs_typeof())),
        new uFunction("remove_WindowClosing", NULL, (void*)Scene__remove_WindowClosing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::ClosingEventArgs_typeof())),
        new uFunction("add_WindowResized", NULL, (void*)Scene__add_WindowResized_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_WindowResized", NULL, (void*)Scene__remove_WindowResized_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()));
    return type;
}

// public Scene() :2184
void Scene__ctor_2_fn(Scene* __this)
{
    __this->ctor_2();
}

// public generated bool get_AlwaysClear() :2179
void Scene__get_AlwaysClear_fn(Scene* __this, bool* __retval)
{
    *__retval = __this->AlwaysClear();
}

// public generated void set_AlwaysClear(bool value) :2179
void Scene__set_AlwaysClear_fn(Scene* __this, bool* value)
{
    __this->AlwaysClear(*value);
}

// public generated bool get_AlwaysUseOwnCamera() :2176
void Scene__get_AlwaysUseOwnCamera_fn(Scene* __this, bool* __retval)
{
    *__retval = __this->AlwaysUseOwnCamera();
}

// public generated void set_AlwaysUseOwnCamera(bool value) :2176
void Scene__set_AlwaysUseOwnCamera_fn(Scene* __this, bool* value)
{
    __this->AlwaysUseOwnCamera(*value);
}

// public generated Fuse.Entities.Entity get_Camera() :2173
void Scene__get_Camera_fn(Scene* __this, ::g::Fuse::Entities::Entity** __retval)
{
    *__retval = __this->Camera();
}

// public generated void set_Camera(Fuse.Entities.Entity value) :2173
void Scene__set_Camera_fn(Scene* __this, ::g::Fuse::Entities::Entity* value)
{
    __this->Camera(value);
}

// public generated float4 get_ClearColor() :2182
void Scene__get_ClearColor_fn(Scene* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ClearColor();
}

// public generated void set_ClearColor(float4 value) :2182
void Scene__set_ClearColor_fn(Scene* __this, ::g::Uno::Float4* value)
{
    __this->ClearColor(*value);
}

// private bool get_HasCamera() :2189
void Scene__get_HasCamera_fn(Scene* __this, bool* __retval)
{
    *__retval = __this->HasCamera();
}

// public Scene New() :2184
void Scene__New2_fn(Scene** __retval)
{
    *__retval = Scene::New2();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :2191
void Scene__OnDraw_fn(Scene* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Entities.Scene", "OnDraw(Fuse.DrawContext)");

    if (__this->AlwaysClear())
        uPtr(dc)->Clear(__this->ClearColor(), 1.0f);

    if (__this->HasCamera())
        dc->PushViewport((uObject*)__this);

    ::g::Fuse::Entities::RenderNode__OnDraw_fn(__this, dc);

    if (__this->HasCamera())
        dc->PopViewport();
}

// protected override sealed void OnHitTest(Fuse.HitTestContext args) :2204
void Scene__OnHitTest_fn(Scene* __this, ::g::Fuse::HitTestContext* args)
{
    uStackFrame __("Fuse.Entities.Scene", "OnHitTest(Fuse.HitTestContext)");
    uObject* w = __this->Viewport();

    if (w == NULL)
        return;

    ::g::Uno::Geometry::Ray ray = __this->PointToWorldRay(uPtr(args)->WindowPoint());
    ::g::Uno::Geometry::Ray oldRay = args->PushWorldRay(ray);
    ::g::Fuse::Entities::RenderNode__OnHitTest_fn(__this, args);
    args->PopWorldRay(oldRay);
}

// public float2 get_PixelSize() :2222
void Scene__get_PixelSize_fn(Scene* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PointDensity() :2223
void Scene__get_PointDensity_fn(Scene* __this, float* __retval)
{
    *__retval = __this->PointDensity();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) :2249
void Scene__PointToWorldRay_fn(Scene* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pointPos);
}

// public float4x4 get_ProjectionTransform() :2227
void Scene__get_ProjectionTransform_fn(Scene* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransform();
}

// public float4x4 get_ProjectionTransformInverse() :2231
void Scene__get_ProjectionTransformInverse_fn(Scene* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransformInverse();
}

// public float2 get_Size() :2221
void Scene__get_Size_fn(Scene* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public float3 get_ViewOrigin() :2255
void Scene__get_ViewOrigin_fn(Scene* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->ViewOrigin();
}

// public float4x4 get_ViewProjectionTransform() :2235
void Scene__get_ViewProjectionTransform_fn(Scene* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float4x4 get_ViewProjectionTransformInverse() :2239
void Scene__get_ViewProjectionTransformInverse_fn(Scene* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransformInverse();
}

// public float2 get_ViewRange() :2259
void Scene__get_ViewRange_fn(Scene* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ViewRange();
}

// public float4x4 get_ViewTransform() :2243
void Scene__get_ViewTransform_fn(Scene* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransform();
}

// public float4x4 get_ViewTransformInverse() :2247
void Scene__get_ViewTransformInverse_fn(Scene* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransformInverse();
}

// public void add_WindowClosed(Uno.EventHandler value) :2168
void Scene__add_WindowClosed_fn(Scene* __this, uDelegate* value)
{
    __this->add_WindowClosed(value);
}

// public void remove_WindowClosed(Uno.EventHandler value) :2169
void Scene__remove_WindowClosed_fn(Scene* __this, uDelegate* value)
{
    __this->remove_WindowClosed(value);
}

// public void add_WindowClosing(Uno.EventHandler<Uno.Platform.ClosingEventArgs> value) :2161
void Scene__add_WindowClosing_fn(Scene* __this, uDelegate* value)
{
    __this->add_WindowClosing(value);
}

// public void remove_WindowClosing(Uno.EventHandler<Uno.Platform.ClosingEventArgs> value) :2162
void Scene__remove_WindowClosing_fn(Scene* __this, uDelegate* value)
{
    __this->remove_WindowClosing(value);
}

// public extern void add_WindowResized(Uno.EventHandler value) :2147
void Scene__add_WindowResized_fn(Scene* __this, uDelegate* value)
{
    __this->add_WindowResized(value);
}

// public extern void remove_WindowResized(Uno.EventHandler value) :2148
void Scene__remove_WindowResized_fn(Scene* __this, uDelegate* value)
{
    __this->remove_WindowResized(value);
}

// public override sealed Uno.Geometry.Ray WindowToWorldRay(float2 windowCoord) :2216
void Scene__WindowToWorldRay_fn(Scene* __this, ::g::Uno::Float2* windowCoord, ::g::Uno::Geometry::Ray* __retval)
{
    uStackFrame __("Fuse.Entities.Scene", "WindowToWorldRay(float2)");
    ::g::Uno::Float2 windowCoord_ = *windowCoord;
    return *__retval = __this->PointToWorldRay(windowCoord_), void();
}

// public Scene() [instance] :2184
void Scene::ctor_2()
{
    uStackFrame __("Fuse.Entities.Scene", ".ctor()");
    ctor_1();
    ClearColor(::g::Uno::Float4__New1(1.0f));
}

// public generated bool get_AlwaysClear() [instance] :2179
bool Scene::AlwaysClear()
{
    uStackFrame __("Fuse.Entities.Scene", "get_AlwaysClear()");
    return _AlwaysClear;
}

// public generated void set_AlwaysClear(bool value) [instance] :2179
void Scene::AlwaysClear(bool value)
{
    uStackFrame __("Fuse.Entities.Scene", "set_AlwaysClear(bool)");
    _AlwaysClear = value;
}

// public generated bool get_AlwaysUseOwnCamera() [instance] :2176
bool Scene::AlwaysUseOwnCamera()
{
    uStackFrame __("Fuse.Entities.Scene", "get_AlwaysUseOwnCamera()");
    return _AlwaysUseOwnCamera;
}

// public generated void set_AlwaysUseOwnCamera(bool value) [instance] :2176
void Scene::AlwaysUseOwnCamera(bool value)
{
    uStackFrame __("Fuse.Entities.Scene", "set_AlwaysUseOwnCamera(bool)");
    _AlwaysUseOwnCamera = value;
}

// public generated Fuse.Entities.Entity get_Camera() [instance] :2173
::g::Fuse::Entities::Entity* Scene::Camera()
{
    uStackFrame __("Fuse.Entities.Scene", "get_Camera()");
    return _Camera;
}

// public generated void set_Camera(Fuse.Entities.Entity value) [instance] :2173
void Scene::Camera(::g::Fuse::Entities::Entity* value)
{
    uStackFrame __("Fuse.Entities.Scene", "set_Camera(Fuse.Entities.Entity)");
    _Camera = value;
}

// public generated float4 get_ClearColor() [instance] :2182
::g::Uno::Float4 Scene::ClearColor()
{
    uStackFrame __("Fuse.Entities.Scene", "get_ClearColor()");
    return _ClearColor;
}

// public generated void set_ClearColor(float4 value) [instance] :2182
void Scene::ClearColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Entities.Scene", "set_ClearColor(float4)");
    _ClearColor = value;
}

// private bool get_HasCamera() [instance] :2189
bool Scene::HasCamera()
{
    uStackFrame __("Fuse.Entities.Scene", "get_HasCamera()");
    return (Camera() != NULL) && (uPtr(Camera())->FrustumComponent() != NULL);
}

// public float2 get_PixelSize() [instance] :2222
::g::Uno::Float2 Scene::PixelSize()
{
    uStackFrame __("Fuse.Entities.Scene", "get_PixelSize()");
    return ::g::Fuse::IViewport::PixelSize(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[31/*Fuse.IViewport*/]));
}

// public float get_PointDensity() [instance] :2223
float Scene::PointDensity()
{
    uStackFrame __("Fuse.Entities.Scene", "get_PointDensity()");
    return ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[31/*Fuse.IViewport*/]));
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) [instance] :2249
::g::Uno::Geometry::Ray Scene::PointToWorldRay(::g::Uno::Float2 pointPos)
{
    uStackFrame __("Fuse.Entities.Scene", "PointToWorldRay(float2)");
    return ::g::Fuse::FrustumViewport::PointToWorldRay((uObject*)this, pointPos);
}

// public float4x4 get_ProjectionTransform() [instance] :2227
::g::Uno::Float4x4 Scene::ProjectionTransform()
{
    uStackFrame __("Fuse.Entities.Scene", "get_ProjectionTransform()");
    return ::g::Fuse::IFrustum::GetProjectionTransform(uInterface(uPtr(uPtr(Camera())->FrustumComponent()), ::g::Fuse::IFrustum_typeof()), (uObject*)this);
}

// public float4x4 get_ProjectionTransformInverse() [instance] :2231
::g::Uno::Float4x4 Scene::ProjectionTransformInverse()
{
    uStackFrame __("Fuse.Entities.Scene", "get_ProjectionTransformInverse()");
    return ::g::Fuse::IFrustum::GetProjectionTransformInverse(uInterface(uPtr(uPtr(Camera())->FrustumComponent()), ::g::Fuse::IFrustum_typeof()), (uObject*)this);
}

// public float2 get_Size() [instance] :2221
::g::Uno::Float2 Scene::Size()
{
    uStackFrame __("Fuse.Entities.Scene", "get_Size()");
    return ::g::Fuse::IViewport::Size(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[31/*Fuse.IViewport*/]));
}

// public float3 get_ViewOrigin() [instance] :2255
::g::Uno::Float3 Scene::ViewOrigin()
{
    uStackFrame __("Fuse.Entities.Scene", "get_ViewOrigin()");
    return ::g::Fuse::IFrustum::GetWorldPosition(uInterface(uPtr(uPtr(Camera())->FrustumComponent()), ::g::Fuse::IFrustum_typeof()), (uObject*)this);
}

// public float4x4 get_ViewProjectionTransform() [instance] :2235
::g::Uno::Float4x4 Scene::ViewProjectionTransform()
{
    uStackFrame __("Fuse.Entities.Scene", "get_ViewProjectionTransform()");
    return ::g::Uno::Matrix::Mul8(ViewTransform(), ProjectionTransform());
}

// public float4x4 get_ViewProjectionTransformInverse() [instance] :2239
::g::Uno::Float4x4 Scene::ViewProjectionTransformInverse()
{
    uStackFrame __("Fuse.Entities.Scene", "get_ViewProjectionTransformInverse()");
    return ::g::Uno::Matrix::Mul8(ProjectionTransformInverse(), ViewTransformInverse());
}

// public float2 get_ViewRange() [instance] :2259
::g::Uno::Float2 Scene::ViewRange()
{
    uStackFrame __("Fuse.Entities.Scene", "get_ViewRange()");
    return ::g::Fuse::IFrustum::GetDepthRange(uInterface(uPtr(uPtr(Camera())->FrustumComponent()), ::g::Fuse::IFrustum_typeof()), (uObject*)this);
}

// public float4x4 get_ViewTransform() [instance] :2243
::g::Uno::Float4x4 Scene::ViewTransform()
{
    uStackFrame __("Fuse.Entities.Scene", "get_ViewTransform()");
    return ::g::Fuse::IFrustum::GetViewTransform(uInterface(uPtr(uPtr(Camera())->FrustumComponent()), ::g::Fuse::IFrustum_typeof()), (uObject*)this);
}

// public float4x4 get_ViewTransformInverse() [instance] :2247
::g::Uno::Float4x4 Scene::ViewTransformInverse()
{
    uStackFrame __("Fuse.Entities.Scene", "get_ViewTransformInverse()");
    return ::g::Fuse::IFrustum::GetViewTransformInverse(uInterface(uPtr(uPtr(Camera())->FrustumComponent()), ::g::Fuse::IFrustum_typeof()), (uObject*)this);
}

// public void add_WindowClosed(Uno.EventHandler value) [instance] :2168
void Scene::add_WindowClosed(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Scene", "add_WindowClosed(Uno.EventHandler)");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(value);
}

// public void remove_WindowClosed(Uno.EventHandler value) [instance] :2169
void Scene::remove_WindowClosed(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Scene", "remove_WindowClosed(Uno.EventHandler)");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closed(value);
}

// public void add_WindowClosing(Uno.EventHandler<Uno.Platform.ClosingEventArgs> value) [instance] :2161
void Scene::add_WindowClosing(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Scene", "add_WindowClosing(Uno.EventHandler<Uno.Platform.ClosingEventArgs>)");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closing(value);
}

// public void remove_WindowClosing(Uno.EventHandler<Uno.Platform.ClosingEventArgs> value) [instance] :2162
void Scene::remove_WindowClosing(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Scene", "remove_WindowClosing(Uno.EventHandler<Uno.Platform.ClosingEventArgs>)");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closing(value);
}

// public extern void add_WindowResized(Uno.EventHandler value) [instance] :2147
void Scene::add_WindowResized(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Scene", "add_WindowResized(Uno.EventHandler)");
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->add_FrameChanged(value);
}

// public extern void remove_WindowResized(Uno.EventHandler value) [instance] :2148
void Scene::remove_WindowResized(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Scene", "remove_WindowResized(Uno.EventHandler)");
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->remove_FrameChanged(value);
}

// public Scene New() [static] :2184
Scene* Scene::New2()
{
    Scene* obj1 = (Scene*)uNew(Scene_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(2384)
// ---------------------------------------------------------------

// internal sealed class SkinnedMeshRenderer :2384
// {
::g::Fuse::Entities::MeshRenderer_type* SkinnedMeshRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Entities::MeshRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(SkinnedMeshRenderer);
    options.TypeSize = sizeof(::g::Fuse::Entities::MeshRenderer_type);
    type = (::g::Fuse::Entities::MeshRenderer_type*)uClassType::New("Fuse.Entities.SkinnedMeshRenderer", options);
    type->SetBase(::g::Fuse::Entities::MeshRenderer_typeof());
    type->fp_ctor_ = (void*)SkinnedMeshRenderer__New2_fn;
    ::TYPES[84] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entity_typeof());
    type->SetFields(6,
        ::g::Fuse::Entities::Skinner_typeof(), offsetof(::g::Fuse::Entities::SkinnedMeshRenderer, _assDir), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entity_typeof()), offsetof(::g::Fuse::Entities::SkinnedMeshRenderer, _bones), 0);
    return type;
}

// public generated SkinnedMeshRenderer() :2384
void SkinnedMeshRenderer__ctor_2_fn(SkinnedMeshRenderer* __this)
{
    __this->ctor_2();
}

// public Uno.Collections.List<Fuse.Entities.Entity> get_Bones() :2387
void SkinnedMeshRenderer__get_Bones_fn(SkinnedMeshRenderer* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Bones();
}

// public generated SkinnedMeshRenderer New() :2384
void SkinnedMeshRenderer__New2_fn(SkinnedMeshRenderer** __retval)
{
    *__retval = SkinnedMeshRenderer::New2();
}

// public void UpdateMesh() :2433
void SkinnedMeshRenderer__UpdateMesh_fn(SkinnedMeshRenderer* __this)
{
    __this->UpdateMesh();
}

// public generated SkinnedMeshRenderer() [instance] :2384
void SkinnedMeshRenderer::ctor_2()
{
    uStackFrame __("Fuse.Entities.SkinnedMeshRenderer", ".ctor()");
    _bones = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[84/*Uno.Collections.List<Fuse.Entities.Entity>*/]));
    _assDir = ::g::Fuse::Entities::Skinner::New1();
    ctor_1();
}

// public Uno.Collections.List<Fuse.Entities.Entity> get_Bones() [instance] :2387
::g::Uno::Collections::List* SkinnedMeshRenderer::Bones()
{
    uStackFrame __("Fuse.Entities.SkinnedMeshRenderer", "get_Bones()");
    return _bones;
}

// public void UpdateMesh() [instance] :2433
void SkinnedMeshRenderer::UpdateMesh()
{
}

// public generated SkinnedMeshRenderer New() [static] :2384
SkinnedMeshRenderer* SkinnedMeshRenderer::New2()
{
    SkinnedMeshRenderer* obj1 = (SkinnedMeshRenderer*)uNew(SkinnedMeshRenderer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(2281)
// ---------------------------------------------------------------

// internal sealed class Skinner :2281
// {
uType* Skinner_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Skinner);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.Skinner", options);
    type->fp_ctor_ = (void*)Skinner__New1_fn;
    ::TYPES[43] = ::g::Uno::Float4x4_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof()->Array(), offsetof(::g::Fuse::Entities::Skinner, BoneListData), 0);
    return type;
}

// public generated Skinner() :2281
void Skinner__ctor__fn(Skinner* __this)
{
    __this->ctor_();
}

// public generated Skinner New() :2281
void Skinner__New1_fn(Skinner** __retval)
{
    *__retval = Skinner::New1();
}

// public generated Skinner() [instance] :2281
void Skinner::ctor_()
{
    uStackFrame __("Fuse.Entities.Skinner", ".ctor()");
    BoneListData = uArray::New(::TYPES[43/*float4x4[]*/], 50);
}

// public generated Skinner New() [static] :2281
Skinner* Skinner::New1()
{
    Skinner* obj1 = (Skinner*)uNew(Skinner_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(881)
// --------------------------------------------------------------

// public sealed class SpotLight :881
// {
::g::Fuse::Entities::Light_type* SpotLight_typeof()
{
    static uSStrong< ::g::Fuse::Entities::Light_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(SpotLight);
    options.TypeSize = sizeof(::g::Fuse::Entities::Light_type);
    type = (::g::Fuse::Entities::Light_type*)uClassType::New("Fuse.Entities.SpotLight", options);
    type->SetBase(::g::Fuse::Entities::Light_typeof());
    type->fp_ctor_ = (void*)SpotLight__New1_fn;
    type->fp_Accept = (void(*)(::g::Fuse::Entities::Light*, uObject*))SpotLight__Accept_fn;
    ::TYPES[70] = ::g::Fuse::Entities::Light_typeof();
    type->SetFields(9,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::SpotLight, _Extent), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Extent", NULL, (void*)SpotLight__get_Extent_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Extent", NULL, (void*)SpotLight__set_Extent_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)SpotLight__New1_fn, 0, true, SpotLight_typeof(), 0));
    return type;
}

// public SpotLight() :886
void SpotLight__ctor_2_fn(SpotLight* __this)
{
    __this->ctor_2();
}

// public override sealed void Accept(Fuse.Entities.ILightVisitor visitor) :892
void SpotLight__Accept_fn(SpotLight* __this, uObject* visitor)
{
    uStackFrame __("Fuse.Entities.SpotLight", "Accept(Fuse.Entities.ILightVisitor)");
    ::g::Fuse::Entities::ILightVisitor::Visit4(uInterface(uPtr(visitor), ::g::Fuse::Entities::ILightVisitor_typeof()), __this);
}

// public generated float get_Extent() :884
void SpotLight__get_Extent_fn(SpotLight* __this, float* __retval)
{
    *__retval = __this->Extent();
}

// public generated void set_Extent(float value) :884
void SpotLight__set_Extent_fn(SpotLight* __this, float* value)
{
    __this->Extent(*value);
}

// public SpotLight New() :886
void SpotLight__New1_fn(SpotLight** __retval)
{
    *__retval = SpotLight::New1();
}

// public SpotLight() [instance] :886
void SpotLight::ctor_2()
{
    uStackFrame __("Fuse.Entities.SpotLight", ".ctor()");
    ctor_1();
    Range(500.0f);
    Extent(90.0f);
}

// public generated float get_Extent() [instance] :884
float SpotLight::Extent()
{
    uStackFrame __("Fuse.Entities.SpotLight", "get_Extent()");
    return _Extent;
}

// public generated void set_Extent(float value) [instance] :884
void SpotLight::Extent(float value)
{
    uStackFrame __("Fuse.Entities.SpotLight", "set_Extent(float)");
    _Extent = value;
}

// public SpotLight New() [static] :886
SpotLight* SpotLight::New1()
{
    SpotLight* obj1 = (SpotLight*)uNew(SpotLight_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(2625)
// ---------------------------------------------------------------

// public sealed class Transform3D :2625
// {
::g::Fuse::Transform_type* Transform3D_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Transform3D);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Entities.Transform3D", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)Transform3D__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Transform3D__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Transform3D__get_IsFlat_fn;
    type->fp_OnAdded = (void(*)(::g::Fuse::Transform*))Transform3D__OnAdded_fn;
    type->fp_OnRemoved = (void(*)(::g::Fuse::Transform*))Transform3D__OnRemoved_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Transform3D__PrependTo_fn;
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[64] = ::g::Fuse::Entities::Entity_typeof();
    ::TYPES[85] = ::g::Fuse::Transform_typeof();
    ::TYPES[69] = ::g::Uno::Float3_typeof();
    type->SetFields(4,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::Transform3D, position), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::Transform3D, rotationDegrees), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Entities::Transform3D, rotationQuaternion), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::Transform3D, scale), 0,
        ::g::Fuse::Entities::Entity_typeof(), offsetof(::g::Fuse::Entities::Transform3D, _Entity), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("Clone", NULL, (void*)Transform3D__Clone_fn, 0, false, Transform3D_typeof(), 0),
        new uFunction("get_Entity", NULL, (void*)Transform3D__get_Entity_fn, 0, false, ::g::Fuse::Entities::Entity_typeof(), 0),
        new uFunction("InvalidateLocal", NULL, (void*)Transform3D__InvalidateLocal_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("LookAt", NULL, (void*)Transform3D__LookAt_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction(".ctor", NULL, (void*)Transform3D__New1_fn, 0, true, Transform3D_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Transform3D__New2_fn, 0, true, Transform3D_typeof(), 3, ::g::Uno::Float3_typeof(), ::g::Uno::Float4_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("get_Position", NULL, (void*)Transform3D__get_Position_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)Transform3D__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_RotationDegrees", NULL, (void*)Transform3D__get_RotationDegrees_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_RotationDegrees", NULL, (void*)Transform3D__set_RotationDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_RotationQuaternion", NULL, (void*)Transform3D__get_RotationQuaternion_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_RotationQuaternion", NULL, (void*)Transform3D__set_RotationQuaternion_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Scaling", NULL, (void*)Transform3D__get_Scaling_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Scaling", NULL, (void*)Transform3D__set_Scaling_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()));
    return type;
}

// public Transform3D() :2665
void Transform3D__ctor_1_fn(Transform3D* __this)
{
    __this->ctor_1();
}

// public Transform3D(float3 pos, float4 rot, float3 scale) :2672
void Transform3D__ctor_2_fn(Transform3D* __this, ::g::Uno::Float3* pos, ::g::Uno::Float4* rot, ::g::Uno::Float3* scale1)
{
    __this->ctor_2(*pos, *rot, *scale1);
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :2644
void Transform3D__AppendTo_fn(Transform3D* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Entities.Transform3D", "AppendTo(Fuse.FastMatrix,float)");
    float weight_ = *weight;

    if (::g::Uno::Float3::op_Inequality(__this->Scaling(), ::g::Uno::Float3__New1(1.0f)))
        uPtr(m)->AppendScale1(::g::Uno::Math::Lerp4(::g::Uno::Float3__New1(1.0f), __this->Scaling(), weight_));

    if (::g::Uno::Float4::op_Inequality(__this->RotationQuaternion(), ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)))
        m->AppendRotationQuaternion(::g::Uno::Float4__op_Multiply1(__this->RotationQuaternion(), weight_));

    if (::g::Uno::Float3::op_Inequality(__this->Position(), ::g::Uno::Float3__New1(0.0f)))
        m->AppendTranslation1(::g::Uno::Float3__op_Multiply1(__this->Position(), weight_));
}

// public Fuse.Entities.Transform3D Clone() :2679
void Transform3D__Clone_fn(Transform3D* __this, Transform3D** __retval)
{
    *__retval = __this->Clone();
}

// public generated Fuse.Entities.Entity get_Entity() :2632
void Transform3D__get_Entity_fn(Transform3D* __this, ::g::Fuse::Entities::Entity** __retval)
{
    *__retval = __this->Entity();
}

// private generated void set_Entity(Fuse.Entities.Entity value) :2632
void Transform3D__set_Entity_fn(Transform3D* __this, ::g::Fuse::Entities::Entity* value)
{
    __this->Entity(value);
}

// public void InvalidateLocal() :2627
void Transform3D__InvalidateLocal_fn(Transform3D* __this)
{
    __this->InvalidateLocal();
}

// public override sealed bool get_IsFlat() :2755
void Transform3D__get_IsFlat_fn(Transform3D* __this, bool* __retval)
{
    uStackFrame __("Fuse.Entities.Transform3D", "get_IsFlat()");
    return *__retval = ((::g::Uno::Math::Abs1(__this->RotationDegrees().X) < 1e-05f) && (::g::Uno::Math::Abs1(__this->RotationDegrees().Y) < 1e-05f)) && (::g::Uno::Math::Abs1(__this->Position().Z) < 1e-05f), void();
}

// public void LookAt(float3 worldTarget, float3 worldUp) :2743
void Transform3D__LookAt_fn(Transform3D* __this, ::g::Uno::Float3* worldTarget, ::g::Uno::Float3* worldUp)
{
    __this->LookAt(*worldTarget, *worldUp);
}

// public Transform3D New() :2665
void Transform3D__New1_fn(Transform3D** __retval)
{
    *__retval = Transform3D::New1();
}

// public Transform3D New(float3 pos, float4 rot, float3 scale) :2672
void Transform3D__New2_fn(::g::Uno::Float3* pos, ::g::Uno::Float4* rot, ::g::Uno::Float3* scale1, Transform3D** __retval)
{
    *__retval = Transform3D::New2(*pos, *rot, *scale1);
}

// protected override sealed void OnAdded() :2634
void Transform3D__OnAdded_fn(Transform3D* __this)
{
    uStackFrame __("Fuse.Entities.Transform3D", "OnAdded()");
    __this->Entity(uAs< ::g::Fuse::Entities::Entity*>(__this->Node, ::TYPES[64/*Fuse.Entities.Entity*/]));
}

// protected override sealed void OnRemoved() :2639
void Transform3D__OnRemoved_fn(Transform3D* __this)
{
    uStackFrame __("Fuse.Entities.Transform3D", "OnRemoved()");
    __this->Entity(NULL);
}

// public float3 get_Position() :2686
void Transform3D__get_Position_fn(Transform3D* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float3 value) :2690
void Transform3D__set_Position_fn(Transform3D* __this, ::g::Uno::Float3* value)
{
    __this->Position(*value);
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :2651
void Transform3D__PrependTo_fn(Transform3D* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Entities.Transform3D", "PrependTo(Fuse.FastMatrix)");

    if (::g::Uno::Float3::op_Inequality(__this->Position(), ::g::Uno::Float3__New1(0.0f)))
        uPtr(m)->PrependTranslation1(__this->Position());

    if (::g::Uno::Float4::op_Inequality(__this->RotationQuaternion(), ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)))
        m->PrependRotationQuaternion(__this->RotationQuaternion());

    if (::g::Uno::Float3::op_Inequality(__this->Scaling(), ::g::Uno::Float3__New1(1.0f)))
        m->PrependScale1(__this->Scaling());
}

// public float3 get_RotationDegrees() :2718
void Transform3D__get_RotationDegrees_fn(Transform3D* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->RotationDegrees();
}

// public void set_RotationDegrees(float3 value) :2722
void Transform3D__set_RotationDegrees_fn(Transform3D* __this, ::g::Uno::Float3* value)
{
    __this->RotationDegrees(*value);
}

// public float4 get_RotationQuaternion() :2703
void Transform3D__get_RotationQuaternion_fn(Transform3D* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->RotationQuaternion();
}

// public void set_RotationQuaternion(float4 value) :2707
void Transform3D__set_RotationQuaternion_fn(Transform3D* __this, ::g::Uno::Float4* value)
{
    __this->RotationQuaternion(*value);
}

// public float3 get_Scaling() :2732
void Transform3D__get_Scaling_fn(Transform3D* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Scaling();
}

// public void set_Scaling(float3 value) :2736
void Transform3D__set_Scaling_fn(Transform3D* __this, ::g::Uno::Float3* value)
{
    __this->Scaling(*value);
}

// public Transform3D() [instance] :2665
void Transform3D::ctor_1()
{
    uStackFrame __("Fuse.Entities.Transform3D", ".ctor()");
    ctor_();
    position = ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f);
    rotationQuaternion = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
    scale = ::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f);
}

// public Transform3D(float3 pos, float4 rot, float3 scale) [instance] :2672
void Transform3D::ctor_2(::g::Uno::Float3 pos, ::g::Uno::Float4 rot, ::g::Uno::Float3 scale1)
{
    uStackFrame __("Fuse.Entities.Transform3D", ".ctor(float3,float4,float3)");
    ctor_();
    position = pos;
    rotationQuaternion = rot;
    scale = scale1;
}

// public Fuse.Entities.Transform3D Clone() [instance] :2679
Transform3D* Transform3D::Clone()
{
    uStackFrame __("Fuse.Entities.Transform3D", "Clone()");
    return Transform3D::New2(Position(), RotationQuaternion(), Scaling());
}

// public generated Fuse.Entities.Entity get_Entity() [instance] :2632
::g::Fuse::Entities::Entity* Transform3D::Entity()
{
    uStackFrame __("Fuse.Entities.Transform3D", "get_Entity()");
    return _Entity;
}

// private generated void set_Entity(Fuse.Entities.Entity value) [instance] :2632
void Transform3D::Entity(::g::Fuse::Entities::Entity* value)
{
    uStackFrame __("Fuse.Entities.Transform3D", "set_Entity(Fuse.Entities.Entity)");
    _Entity = value;
}

// public void InvalidateLocal() [instance] :2627
void Transform3D::InvalidateLocal()
{
    uStackFrame __("Fuse.Entities.Transform3D", "InvalidateLocal()");
    OnMatrixChanged();
}

// public void LookAt(float3 worldTarget, float3 worldUp) [instance] :2743
void Transform3D::LookAt(::g::Uno::Float3 worldTarget, ::g::Uno::Float3 worldUp)
{
    uStackFrame __("Fuse.Entities.Transform3D", "LookAt(float3,float3)");
    ::g::Uno::Float4x4 view = ::g::Uno::Matrix::LookAtRH(uPtr(Entity())->WorldPosition(), worldTarget, worldUp);
    ::g::Uno::Float3 pos;
    ::g::Uno::Float3 scale1;
    ::g::Uno::Float4 rot;
    ::g::Uno::Matrix::Decompose(view, &scale1, &rot, &pos);
    uPtr(Entity())->WorldRotationQuaternion(::g::Uno::Quaternion::Invert(rot));
}

// public float3 get_Position() [instance] :2686
::g::Uno::Float3 Transform3D::Position()
{
    uStackFrame __("Fuse.Entities.Transform3D", "get_Position()");
    return position;
}

// public void set_Position(float3 value) [instance] :2690
void Transform3D::Position(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Entities.Transform3D", "set_Position(float3)");

    if (::g::Uno::Float3::op_Inequality(position, value))
    {
        position = value;
        InvalidateLocal();
    }
}

// public float3 get_RotationDegrees() [instance] :2718
::g::Uno::Float3 Transform3D::RotationDegrees()
{
    uStackFrame __("Fuse.Entities.Transform3D", "get_RotationDegrees()");
    return rotationDegrees;
}

// public void set_RotationDegrees(float3 value) [instance] :2722
void Transform3D::RotationDegrees(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Entities.Transform3D", "set_RotationDegrees(float3)");
    rotationDegrees = value;
    rotationQuaternion = ::g::Uno::Quaternion::FromEulerAngleDegrees1(value);
    InvalidateLocal();
}

// public float4 get_RotationQuaternion() [instance] :2703
::g::Uno::Float4 Transform3D::RotationQuaternion()
{
    uStackFrame __("Fuse.Entities.Transform3D", "get_RotationQuaternion()");
    return rotationQuaternion;
}

// public void set_RotationQuaternion(float4 value) [instance] :2707
void Transform3D::RotationQuaternion(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Entities.Transform3D", "set_RotationQuaternion(float4)");
    rotationQuaternion = value;
    rotationDegrees = ::g::Uno::Quaternion::ToEulerAngleDegrees(value);
    InvalidateLocal();
}

// public float3 get_Scaling() [instance] :2732
::g::Uno::Float3 Transform3D::Scaling()
{
    uStackFrame __("Fuse.Entities.Transform3D", "get_Scaling()");
    return scale;
}

// public void set_Scaling(float3 value) [instance] :2736
void Transform3D::Scaling(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Entities.Transform3D", "set_Scaling(float3)");
    scale = value;
    InvalidateLocal();
}

// public Transform3D New() [static] :2665
Transform3D* Transform3D::New1()
{
    Transform3D* obj1 = (Transform3D*)uNew(Transform3D_typeof());
    obj1->ctor_1();
    return obj1;
}

// public Transform3D New(float3 pos, float4 rot, float3 scale) [static] :2672
Transform3D* Transform3D::New2(::g::Uno::Float3 pos, ::g::Uno::Float4 rot, ::g::Uno::Float3 scale1)
{
    Transform3D* obj2 = (Transform3D*)uNew(Transform3D_typeof());
    obj2->ctor_2(pos, rot, scale1);
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(2775)
// ---------------------------------------------------------------

// internal abstract class TriangleMeshIntersecter :2775
// {
TriangleMeshIntersecter_type* TriangleMeshIntersecter_typeof()
{
    static uSStrong<TriangleMeshIntersecter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TriangleMeshIntersecter);
    options.TypeSize = sizeof(TriangleMeshIntersecter_type);
    type = (TriangleMeshIntersecter_type*)uClassType::New("Fuse.Entities.TriangleMeshIntersecter", options);
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Entities::TriangleMeshIntersecter, _count), 0);
    return type;
}

// protected TriangleMeshIntersecter(int count) :2779
void TriangleMeshIntersecter__ctor__fn(TriangleMeshIntersecter* __this, int* count)
{
    __this->ctor_(*count);
}

// public bool IntersectsRay(Uno.Geometry.Ray objRay, float& outDistance) :2784
void TriangleMeshIntersecter__IntersectsRay_fn(TriangleMeshIntersecter* __this, ::g::Uno::Geometry::Ray* objRay, float* outDistance, bool* __retval)
{
    *__retval = __this->IntersectsRay(*objRay, outDistance);
}

// protected TriangleMeshIntersecter(int count) [instance] :2779
void TriangleMeshIntersecter::ctor_(int count)
{
    uStackFrame __("Fuse.Entities.TriangleMeshIntersecter", ".ctor(int)");
    _count = count;
}

// public bool IntersectsRay(Uno.Geometry.Ray objRay, float& outDistance) [instance] :2784
bool TriangleMeshIntersecter::IntersectsRay(::g::Uno::Geometry::Ray objRay, float* outDistance)
{
    uStackFrame __("Fuse.Entities.TriangleMeshIntersecter", "IntersectsRay(Uno.Geometry.Ray,float&)");
    float minDistance = 3.402823e+38f;
    bool hit = false;

    for (int t = 0; t < _count; t++)
    {
        float distance;

        if (::g::Uno::Geometry::Collision::RayIntersectsTriangle(objRay, GetTriangle(t), &distance))
        {
            hit = true;

            if (distance < minDistance)
                minDistance = distance;
        }
    }

    *outDistance = minDistance;
    return hit;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1702)
// ---------------------------------------------------------------

// internal sealed class VisitAction<T> :1702
// {
::g::Fuse::Entities::VisitType_type* VisitAction_typeof()
{
    static uSStrong< ::g::Fuse::Entities::VisitType_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(VisitAction);
    options.TypeSize = sizeof(::g::Fuse::Entities::VisitType_type);
    type = (::g::Fuse::Entities::VisitType_type*)uClassType::New("Fuse.Entities.VisitAction`1", options);
    type->SetBase(::g::Fuse::Entities::VisitType_typeof()->MakeType(type->T(0)));
    type->fp_Visit1 = (void(*)(::g::Fuse::Entities::VisitType*, void*, bool*))VisitAction__Visit1_fn;
    ::TYPES[9] = ::g::Uno::Action1_typeof();
    type->SetPrecalc(
        ::TYPES[9/*Uno.Action`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Entities::VisitAction, _visit), 0);
    return type;
}

// public VisitAction(Uno.Action<T> visit) :1705
void VisitAction__ctor_1_fn(VisitAction* __this, uDelegate* visit)
{
    __this->ctor_1(visit);
}

// public VisitAction New(Uno.Action<T> visit) :1705
void VisitAction__New1_fn(uType* __type, uDelegate* visit, VisitAction** __retval)
{
    *__retval = VisitAction::New1(__type, visit);
}

// protected override sealed bool Visit(T t) :1706
void VisitAction__Visit1_fn(VisitAction* __this, void* t, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Action<T>*/),
    };
    uStackFrame __("Fuse.Entities.VisitAction`1", "Visit(T)");
    uPtr(__this->_visit)->InvokeVoid(t);
    return *__retval = false, void();
}

// public VisitAction(Uno.Action<T> visit) [instance] :1705
void VisitAction::ctor_1(uDelegate* visit)
{
    uStackFrame __("Fuse.Entities.VisitAction`1", ".ctor(Uno.Action<T>)");
    ctor_();
    _visit = visit;
}

// public VisitAction New(Uno.Action<T> visit) [static] :1705
VisitAction* VisitAction::New1(uType* __type, uDelegate* visit)
{
    VisitAction* obj1 = (VisitAction*)uNew(__type);
    obj1->ctor_1(visit);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1695)
// ---------------------------------------------------------------

// internal sealed class VisitPredicate<T> :1695
// {
::g::Fuse::Entities::VisitType_type* VisitPredicate_typeof()
{
    static uSStrong< ::g::Fuse::Entities::VisitType_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(VisitPredicate);
    options.TypeSize = sizeof(::g::Fuse::Entities::VisitType_type);
    type = (::g::Fuse::Entities::VisitType_type*)uClassType::New("Fuse.Entities.VisitPredicate`1", options);
    type->SetBase(::g::Fuse::Entities::VisitType_typeof()->MakeType(type->T(0)));
    type->fp_Visit1 = (void(*)(::g::Fuse::Entities::VisitType*, void*, bool*))VisitPredicate__Visit1_fn;
    ::TYPES[86] = ::g::Uno::Predicate_typeof();
    type->SetPrecalc(
        ::TYPES[86/*Uno.Predicate`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Predicate_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Entities::VisitPredicate, _visit), 0);
    return type;
}

// public VisitPredicate(Uno.Predicate<T> visit) :1698
void VisitPredicate__ctor_1_fn(VisitPredicate* __this, uDelegate* visit)
{
    __this->ctor_1(visit);
}

// public VisitPredicate New(Uno.Predicate<T> visit) :1698
void VisitPredicate__New1_fn(uType* __type, uDelegate* visit, VisitPredicate** __retval)
{
    *__retval = VisitPredicate::New1(__type, visit);
}

// protected override sealed bool Visit(T t) :1699
void VisitPredicate__Visit1_fn(VisitPredicate* __this, void* t, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Predicate<T>*/),
    };
    uStackFrame __("Fuse.Entities.VisitPredicate`1", "Visit(T)");
    bool ret2;
    return *__retval = (uPtr(__this->_visit)->Invoke(&ret2, 1, t), ret2), void();
}

// public VisitPredicate(Uno.Predicate<T> visit) [instance] :1698
void VisitPredicate::ctor_1(uDelegate* visit)
{
    uStackFrame __("Fuse.Entities.VisitPredicate`1", ".ctor(Uno.Predicate<T>)");
    ctor_();
    _visit = visit;
}

// public VisitPredicate New(Uno.Predicate<T> visit) [static] :1698
VisitPredicate* VisitPredicate::New1(uType* __type, uDelegate* visit)
{
    VisitPredicate* obj1 = (VisitPredicate*)uNew(__type);
    obj1->ctor_1(visit);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno(1709)
// ---------------------------------------------------------------

// internal abstract class VisitType<T> :1709
// {
VisitType_type* VisitType_typeof()
{
    static uSStrong<VisitType_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(VisitType);
    options.TypeSize = sizeof(VisitType_type);
    type = (VisitType_type*)uClassType::New("Fuse.Entities.VisitType`1", options);
    return type;
}

// protected generated VisitType() :1709
void VisitType__ctor__fn(VisitType* __this)
{
    __this->ctor_();
}

// public bool Visit(Fuse.Node node) :1711
void VisitType__Visit_fn(VisitType* __this, ::g::Fuse::Node* node, bool* __retval)
{
    *__retval = __this->Visit(node);
}

// protected generated VisitType() [instance] :1709
void VisitType::ctor_()
{
}

// public bool Visit(Fuse.Node node) [instance] :1711
bool VisitType::Visit(::g::Fuse::Node* node)
{
    uType* __types[] = {
        __type->GetBase(VisitType_typeof())->T(0),
    };
    uStackFrame __("Fuse.Entities.VisitType`1", "Visit(Fuse.Node)");
    bool ret1;

    if (uIs(node, __types[0]))
        return (Visit1_ex(uUnboxAny(__types[0], node), &ret1), ret1);

    return false;
}
// }

}}} // ::g::Fuse::Entities
