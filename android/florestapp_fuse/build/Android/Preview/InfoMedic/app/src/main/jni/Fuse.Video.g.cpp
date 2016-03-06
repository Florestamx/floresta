// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseVideo_bundle.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.WhileCompleted.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.Triggers.WhileLoading.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Video.CancellationTokenSource.h>
#include <Fuse.Video.Graphics.Android.AndroidVideoLoader.h>
#include <Fuse.Video.IVideoPlayer.h>
#include <Fuse.Video.LoadedHandler.h>
#include <Fuse.Video.LoadFailed.h>
#include <Fuse.Video.LoadResult.h>
#include <Fuse.Video.LoadSucceded.h>
#include <Fuse.Video.Scale9Rectangle.h>
#include <Fuse.Video.VideoContainer.h>
#include <Fuse.Video.VideoDiskCache.h>
#include <Fuse.Video.VideoDrawElement.h>
#include <Fuse.Video.VideoLoader.h>
#include <Fuse.Video.VideoVisual.h>
#include <Uno.Action.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[6];
static uType* TYPES[39];

namespace g{
namespace Fuse{
namespace Video{

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(576)
// --------------------------------------------------------------------

// internal sealed class CancellationTokenSource :576
// {
uType* CancellationTokenSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationTokenSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Video.CancellationTokenSource", options);
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Video::CancellationTokenSource, _cancelCallback), 0);
    return type;
}

// internal CancellationTokenSource(Uno.Action cancelCallback) :581
void CancellationTokenSource__ctor__fn(CancellationTokenSource* __this, uDelegate* cancelCallback)
{
    __this->ctor_(cancelCallback);
}

// public void Cancel() :586
void CancellationTokenSource__Cancel_fn(CancellationTokenSource* __this)
{
    __this->Cancel();
}

// internal CancellationTokenSource New(Uno.Action cancelCallback) :581
void CancellationTokenSource__New1_fn(uDelegate* cancelCallback, CancellationTokenSource** __retval)
{
    *__retval = CancellationTokenSource::New1(cancelCallback);
}

// internal CancellationTokenSource(Uno.Action cancelCallback) [instance] :581
void CancellationTokenSource::ctor_(uDelegate* cancelCallback)
{
    uStackFrame __("Fuse.Video.CancellationTokenSource", ".ctor(Uno.Action)");
    _cancelCallback = cancelCallback;
}

// public void Cancel() [instance] :586
void CancellationTokenSource::Cancel()
{
    uStackFrame __("Fuse.Video.CancellationTokenSource", "Cancel()");

    if (::g::Uno::Delegate::op_Inequality(_cancelCallback, NULL))
        uPtr(_cancelCallback)->InvokeVoid();
}

// internal CancellationTokenSource New(Uno.Action cancelCallback) [static] :581
CancellationTokenSource* CancellationTokenSource::New1(uDelegate* cancelCallback)
{
    CancellationTokenSource* obj1 = (CancellationTokenSource*)uNew(CancellationTokenSource_typeof());
    obj1->ctor_(cancelCallback);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(13)
// -------------------------------------------------------------------

// public abstract interface IVideoPlayer :13
// {
uInterfaceType* IVideoPlayer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Video.IVideoPlayer", 0, 0);
    type->Reflection.SetFunctions(21,
        new uFunction("add_Completed", NULL, NULL, offsetof(IVideoPlayer, fp_add_Completed), false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Completed", NULL, NULL, offsetof(IVideoPlayer, fp_remove_Completed), false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_Duration", NULL, NULL, offsetof(IVideoPlayer, fp_get_Duration), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_Error", NULL, NULL, offsetof(IVideoPlayer, fp_add_Error), false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("remove_Error", NULL, NULL, offsetof(IVideoPlayer, fp_remove_Error), false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("get_Flip", NULL, NULL, offsetof(IVideoPlayer, fp_get_Flip), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_FrameAvailable", NULL, NULL, offsetof(IVideoPlayer, fp_add_FrameAvailable), false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_FrameAvailable", NULL, NULL, offsetof(IVideoPlayer, fp_remove_FrameAvailable), false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_IsLooping", NULL, NULL, offsetof(IVideoPlayer, fp_get_IsLooping), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsLooping", NULL, NULL, offsetof(IVideoPlayer, fp_set_IsLooping), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsPlaying", NULL, NULL, offsetof(IVideoPlayer, fp_get_IsPlaying), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Pause", NULL, NULL, offsetof(IVideoPlayer, fp_Pause), false, uVoid_typeof(), 0),
        new uFunction("Play", NULL, NULL, offsetof(IVideoPlayer, fp_Play), false, uVoid_typeof(), 0),
        new uFunction("get_Position", NULL, NULL, offsetof(IVideoPlayer, fp_get_Position), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Position", NULL, NULL, offsetof(IVideoPlayer, fp_set_Position), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Size", NULL, NULL, offsetof(IVideoPlayer, fp_get_Size), false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("Stop", NULL, NULL, offsetof(IVideoPlayer, fp_Stop), false, uVoid_typeof(), 0),
        new uFunction("Update", NULL, NULL, offsetof(IVideoPlayer, fp_Update), false, uVoid_typeof(), 0),
        new uFunction("get_VideoTexture", NULL, NULL, offsetof(IVideoPlayer, fp_get_VideoTexture), false, ::g::Uno::Graphics::VideoTexture_typeof(), 0),
        new uFunction("get_Volume", NULL, NULL, offsetof(IVideoPlayer, fp_get_Volume), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Volume", NULL, NULL, offsetof(IVideoPlayer, fp_set_Volume), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(439)
// --------------------------------------------------------------------

// internal delegate void LoadedHandler(Fuse.Video.LoadResult result) :439
uDelegateType* LoadedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Video.LoadedHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Video::LoadResult_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(565)
// --------------------------------------------------------------------

// internal sealed class LoadFailed :565
// {
uType* LoadFailed_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(LoadFailed);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Video.LoadFailed", options);
    type->SetBase(::g::Fuse::Video::LoadResult_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Video::LoadFailed, _ErrorMessage), 0);
    return type;
}

// public LoadFailed(string errorMessage) :569
void LoadFailed__ctor_1_fn(LoadFailed* __this, uString* errorMessage)
{
    __this->ctor_1(errorMessage);
}

// public generated string get_ErrorMessage() :567
void LoadFailed__get_ErrorMessage_fn(LoadFailed* __this, uString** __retval)
{
    *__retval = __this->ErrorMessage();
}

// private generated void set_ErrorMessage(string value) :567
void LoadFailed__set_ErrorMessage_fn(LoadFailed* __this, uString* value)
{
    __this->ErrorMessage(value);
}

// public LoadFailed New(string errorMessage) :569
void LoadFailed__New1_fn(uString* errorMessage, LoadFailed** __retval)
{
    *__retval = LoadFailed::New1(errorMessage);
}

// public LoadFailed(string errorMessage) [instance] :569
void LoadFailed::ctor_1(uString* errorMessage)
{
    uStackFrame __("Fuse.Video.LoadFailed", ".ctor(string)");
    ctor_();
    ErrorMessage(errorMessage);
}

// public generated string get_ErrorMessage() [instance] :567
uString* LoadFailed::ErrorMessage()
{
    uStackFrame __("Fuse.Video.LoadFailed", "get_ErrorMessage()");
    return _ErrorMessage;
}

// private generated void set_ErrorMessage(string value) [instance] :567
void LoadFailed::ErrorMessage(uString* value)
{
    uStackFrame __("Fuse.Video.LoadFailed", "set_ErrorMessage(string)");
    _ErrorMessage = value;
}

// public LoadFailed New(string errorMessage) [static] :569
LoadFailed* LoadFailed::New1(uString* errorMessage)
{
    LoadFailed* obj1 = (LoadFailed*)uNew(LoadFailed_typeof());
    obj1->ctor_1(errorMessage);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(525)
// --------------------------------------------------------------------

// internal abstract class LoadResult :525
// {
uType* LoadResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LoadResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Video.LoadResult", options);
    ::STRINGS[0] = uString::Const("No error");
    ::TYPES[2] = ::g::Fuse::Video::LoadFailed_typeof();
    ::TYPES[3] = ::g::Fuse::Video::LoadSucceded_typeof();
    return type;
}

// protected generated LoadResult() :525
void LoadResult__ctor__fn(LoadResult* __this)
{
    __this->ctor_();
}

// public static bool Failed(Fuse.Video.LoadResult result) :527
void LoadResult__Failed_fn(LoadResult* result, bool* __retval)
{
    *__retval = LoadResult::Failed(result);
}

// public static string GetErrorMessage(Fuse.Video.LoadResult result) :545
void LoadResult__GetErrorMessage_fn(LoadResult* result, uString** __retval)
{
    *__retval = LoadResult::GetErrorMessage(result);
}

// public static Fuse.Video.IVideoPlayer GetPlayer(Fuse.Video.LoadResult result) :537
void LoadResult__GetPlayer_fn(LoadResult* result, uObject** __retval)
{
    *__retval = LoadResult::GetPlayer(result);
}

// public static bool Succeded(Fuse.Video.LoadResult result) :532
void LoadResult__Succeded_fn(LoadResult* result, bool* __retval)
{
    *__retval = LoadResult::Succeded(result);
}

// protected generated LoadResult() [instance] :525
void LoadResult::ctor_()
{
}

// public static bool Failed(Fuse.Video.LoadResult result) [static] :527
bool LoadResult::Failed(LoadResult* result)
{
    uStackFrame __("Fuse.Video.LoadResult", "Failed(Fuse.Video.LoadResult)");
    return uIs(result, ::TYPES[2/*Fuse.Video.LoadFailed*/]);
}

// public static string GetErrorMessage(Fuse.Video.LoadResult result) [static] :545
uString* LoadResult::GetErrorMessage(LoadResult* result)
{
    uStackFrame __("Fuse.Video.LoadResult", "GetErrorMessage(Fuse.Video.LoadResult)");

    if (uIs(result, ::TYPES[2/*Fuse.Video.LoadFailed*/]))
        return uPtr(uCast< ::g::Fuse::Video::LoadFailed*>(result, ::TYPES[2/*Fuse.Video.LoadFailed*/]))->ErrorMessage();

    return ::STRINGS[0/*"No error"*/];
}

// public static Fuse.Video.IVideoPlayer GetPlayer(Fuse.Video.LoadResult result) [static] :537
uObject* LoadResult::GetPlayer(LoadResult* result)
{
    uStackFrame __("Fuse.Video.LoadResult", "GetPlayer(Fuse.Video.LoadResult)");

    if (uIs(result, ::TYPES[3/*Fuse.Video.LoadSucceded*/]))
        return uPtr(uCast< ::g::Fuse::Video::LoadSucceded*>(result, ::TYPES[3/*Fuse.Video.LoadSucceded*/]))->Player();

    return NULL;
}

// public static bool Succeded(Fuse.Video.LoadResult result) [static] :532
bool LoadResult::Succeded(LoadResult* result)
{
    uStackFrame __("Fuse.Video.LoadResult", "Succeded(Fuse.Video.LoadResult)");
    return uIs(result, ::TYPES[3/*Fuse.Video.LoadSucceded*/]);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(555)
// --------------------------------------------------------------------

// internal sealed class LoadSucceded :555
// {
uType* LoadSucceded_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(LoadSucceded);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Video.LoadSucceded", options);
    type->SetBase(::g::Fuse::Video::LoadResult_typeof());
    type->SetFields(0,
        ::g::Fuse::Video::IVideoPlayer_typeof(), offsetof(::g::Fuse::Video::LoadSucceded, _Player), 0);
    return type;
}

// public LoadSucceded(Fuse.Video.IVideoPlayer player) :559
void LoadSucceded__ctor_1_fn(LoadSucceded* __this, uObject* player)
{
    __this->ctor_1(player);
}

// public LoadSucceded New(Fuse.Video.IVideoPlayer player) :559
void LoadSucceded__New1_fn(uObject* player, LoadSucceded** __retval)
{
    *__retval = LoadSucceded::New1(player);
}

// public generated Fuse.Video.IVideoPlayer get_Player() :557
void LoadSucceded__get_Player_fn(LoadSucceded* __this, uObject** __retval)
{
    *__retval = __this->Player();
}

// private generated void set_Player(Fuse.Video.IVideoPlayer value) :557
void LoadSucceded__set_Player_fn(LoadSucceded* __this, uObject* value)
{
    __this->Player(value);
}

// public LoadSucceded(Fuse.Video.IVideoPlayer player) [instance] :559
void LoadSucceded::ctor_1(uObject* player)
{
    uStackFrame __("Fuse.Video.LoadSucceded", ".ctor(Fuse.Video.IVideoPlayer)");
    ctor_();
    Player(player);
}

// public generated Fuse.Video.IVideoPlayer get_Player() [instance] :557
uObject* LoadSucceded::Player()
{
    uStackFrame __("Fuse.Video.LoadSucceded", "get_Player()");
    return _Player;
}

// private generated void set_Player(Fuse.Video.IVideoPlayer value) [instance] :557
void LoadSucceded::Player(uObject* value)
{
    uStackFrame __("Fuse.Video.LoadSucceded", "set_Player(Fuse.Video.IVideoPlayer)");
    _Player = value;
}

// public LoadSucceded New(Fuse.Video.IVideoPlayer player) [static] :559
LoadSucceded* LoadSucceded::New1(uObject* player)
{
    LoadSucceded* obj1 = (LoadSucceded*)uNew(LoadSucceded_typeof());
    obj1->ctor_1(player);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(884)
// --------------------------------------------------------------------

// internal sealed class Scale9Rectangle :884
// {
// static Scale9Rectangle() :884
static void Scale9Rectangle__cctor__fn(uType* __type)
{
    Scale9Rectangle::Impl_ = Scale9Rectangle::New1();
}

uType* Scale9Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Scale9Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Video.Scale9Rectangle", options);
    type->fp_ctor_ = (void*)Scale9Rectangle__New1_fn;
    type->fp_cctor_ = Scale9Rectangle__cctor__fn;
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[5] = ::g::Uno::Float4_typeof();
    ::TYPES[6] = ::g::Uno::Float2_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Fuse::IViewport_typeof();
    ::TYPES[9] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[10] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[11] = ::g::Uno::Float3_typeof()->Array();
    ::TYPES[12] = ::g::FuseVideo_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Video::Scale9Rectangle, _draw_c0892878), 0,
        ::g::Uno::UShort_typeof()->Array(), offsetof(::g::Fuse::Video::Scale9Rectangle, Draw_indices_c0892878_1_2_12), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Video::Scale9Rectangle, Draw_xv_c0892878_1_3_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Video::Scale9Rectangle, Draw_xv_c0892878_1_3_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Video::Scale9Rectangle, Draw_yv_c0892878_1_4_6), 0,
        Scale9Rectangle_typeof(), (uintptr_t)&::g::Fuse::Video::Scale9Rectangle::Impl_, uFieldFlagsStatic);
    return type;
}

// public generated Scale9Rectangle() :884
void Scale9Rectangle__ctor__fn(Scale9Rectangle* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 size, float2 scaleTextureSize, Uno.Graphics.VideoTexture tex, float4 margin, bool flip) :888
void Scale9Rectangle__Draw_fn(Scale9Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2* size, ::g::Uno::Float2* scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4* margin, bool* flip)
{
    __this->Draw(dc, element, *size, *scaleTextureSize, tex, *margin, *flip);
}

// private generated void init_DrawCalls() :884
void Scale9Rectangle__init_DrawCalls_fn(Scale9Rectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated Scale9Rectangle New() :884
void Scale9Rectangle__New1_fn(Scale9Rectangle** __retval)
{
    *__retval = Scale9Rectangle::New1();
}

uSStrong<Scale9Rectangle*> Scale9Rectangle::Impl_;

// public generated Scale9Rectangle() [instance] :884
void Scale9Rectangle::ctor_()
{
    uStackFrame __("Fuse.Video.Scale9Rectangle", ".ctor()");
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 size, float2 scaleTextureSize, Uno.Graphics.VideoTexture tex, float4 margin, bool flip) [instance] :888
void Scale9Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2 size, ::g::Uno::Float2 scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4 margin, bool flip)
{
    uStackFrame __("Fuse.Video.Scale9Rectangle", "Draw(Fuse.DrawContext,Fuse.Node,float2,float2,Uno.Graphics.VideoTexture,float4,bool)");
    _draw_c0892878.BlendEnabled(true);
    _draw_c0892878.DepthTestEnabled(false);
    _draw_c0892878.CullFace(0);
    _draw_c0892878.BlendSrcRgb(2);
    _draw_c0892878.BlendDstRgb(3);
    _draw_c0892878.BlendDstAlpha(3);
    _draw_c0892878.Use();
    _draw_c0892878.Attrib1(0, 3, Draw_xv_c0892878_1_3_3, 12, 0);
    _draw_c0892878.Attrib1(1, 3, Draw_yv_c0892878_1_4_6, 12, 0);
    _draw_c0892878.Uniform(2, margin.X);
    _draw_c0892878.Uniform(3, size.X - margin.Z);
    _draw_c0892878.Uniform(4, size.X);
    _draw_c0892878.Uniform(5, margin.Y);
    _draw_c0892878.Uniform(6, size.Y - margin.W);
    _draw_c0892878.Uniform(7, size.Y);
    _draw_c0892878.Uniform12(8, uPtr(element)->WorldTransform());
    _draw_c0892878.Uniform12(9, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(dc)->Viewport()), ::TYPES[8/*Fuse.IViewport*/])));
    _draw_c0892878.Uniform(10, scaleTextureSize.X - margin.Z);
    _draw_c0892878.Uniform(11, scaleTextureSize.X);
    _draw_c0892878.Uniform(12, scaleTextureSize.Y - margin.W);
    _draw_c0892878.Uniform(13, scaleTextureSize.Y);
    _draw_c0892878.Uniform2(14, scaleTextureSize);
    _draw_c0892878.Sampler6(15, tex);
    _draw_c0892878.Draw(uPtr(Draw_indices_c0892878_1_2_12)->Length(), 2, Draw_xv_c0892878_1_3_2);
}

// private generated void init_DrawCalls() [instance] :884
void Scale9Rectangle::init_DrawCalls()
{
    uStackFrame __("Fuse.Video.Scale9Rectangle", "init_DrawCalls()");
    uArray* indices_c0892878_1_2_1 = uArray::Init<int>(::TYPES[10/*ushort[]*/], 54, 0, 4, 5, 0, 5, 1, 1, 5, 6, 1, 6, 2, 2, 6, 7, 2, 7, 3, 4, 8, 9, 4, 9, 5, 5, 9, 10, 5, 10, 6, 6, 10, 11, 6, 11, 7, 8, 12, 13, 8, 13, 9, 9, 13, 14, 9, 14, 10, 10, 14, 15, 10, 15, 11);
    Draw_xv_c0892878_1_3_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(indices_c0892878_1_2_1), 0);
    Draw_xv_c0892878_1_3_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[11/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_yv_c0892878_1_4_6 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[11/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_indices_c0892878_1_2_12 = indices_c0892878_1_2_1;
    _draw_c0892878 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseVideo_bundle::Scale9Rectangleaf9f430d());
}

// public generated Scale9Rectangle New() [static] :884
Scale9Rectangle* Scale9Rectangle::New1()
{
    Scale9Rectangle* obj1 = (Scale9Rectangle*)uNew(Scale9Rectangle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(59)
// -------------------------------------------------------------------

// internal sealed class VideoContainer :59
// {
VideoContainer_type* VideoContainer_typeof()
{
    static uSStrong<VideoContainer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(VideoContainer);
    options.TypeSize = sizeof(VideoContainer_type);
    type = (VideoContainer_type*)uClassType::New("Fuse.Video.VideoContainer", options);
    type->fp_ctor_ = (void*)VideoContainer__New1_fn;
    type->interface0.fp_get_Volume = (void(*)(uObject*, float*))VideoContainer__get_Volume_fn;
    type->interface0.fp_set_Volume = (void(*)(uObject*, float*))VideoContainer__set_Volume_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, double*))VideoContainer__get_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, double*))VideoContainer__set_Position_fn;
    type->interface0.fp_get_Duration = (void(*)(uObject*, double*))VideoContainer__get_Duration_fn;
    type->interface1.fp_Stop = (void(*)(uObject*))VideoContainer__Stop_fn;
    type->interface1.fp_PlayTo = (void(*)(uObject*, double*))VideoContainer__PlayTo_fn;
    type->interface1.fp_Pause = (void(*)(uObject*))VideoContainer__Pause_fn;
    type->interface1.fp_Resume = (void(*)(uObject*))VideoContainer__Resume_fn;
    type->interface1.fp_get_Progress = (void(*)(uObject*, double*))VideoContainer__get_Progress_fn;
    type->interface1.fp_set_Progress = (void(*)(uObject*, double*))VideoContainer__set_Progress_fn;
    type->interface1.fp_get_CanPlayTo = (void(*)(uObject*, bool*))VideoContainer__get_CanPlayTo_fn;
    type->interface1.fp_get_CanStop = (void(*)(uObject*, bool*))VideoContainer__get_CanStop_fn;
    type->interface1.fp_get_CanPause = (void(*)(uObject*, bool*))VideoContainer__get_CanPause_fn;
    type->interface1.fp_get_CanResume = (void(*)(uObject*, bool*))VideoContainer__get_CanResume_fn;
    type->interface2.fp_get_Progress = (void(*)(uObject*, double*))VideoContainer__get_Progress_fn;
    type->interface2.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))VideoContainer__add_ProgressChanged_fn;
    type->interface2.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))VideoContainer__remove_ProgressChanged_fn;
    ::TYPES[13] = ::g::Fuse::Video::IVideoPlayer_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[15] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[16] = ::g::Fuse::Video::LoadedHandler_typeof();
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[17] = uObject_typeof();
    ::TYPES[18] = ::g::Uno::EventArgs_typeof();
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[20] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[21] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[22] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::IMediaPlayback_typeof(), offsetof(VideoContainer_type, interface0),
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(VideoContainer_type, interface1),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(VideoContainer_type, interface2));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::VideoContainer, _autoPlay), 0,
        ::g::Fuse::Video::CancellationTokenSource_typeof(), offsetof(::g::Fuse::Video::VideoContainer, _cancellationTokenSource), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::VideoContainer, _isLooping), 0,
        ::g::Fuse::Video::IVideoPlayer_typeof(), offsetof(::g::Fuse::Video::VideoContainer, _player), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Video::VideoContainer, _volume), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Completed1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Video::VideoContainer, Error1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, FrameAvailable1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Loading1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Paused1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Prepared1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Video::VideoContainer, ProgressChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Started1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Stopped1), 0);
    return type;
}

// public generated VideoContainer() :59
void VideoContainer__ctor__fn(VideoContainer* __this)
{
    __this->ctor_();
}

// public bool get_AutoPlay() :102
void VideoContainer__get_AutoPlay_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->AutoPlay();
}

// public void set_AutoPlay(bool value) :103
void VideoContainer__set_AutoPlay_fn(VideoContainer* __this, bool* value)
{
    __this->AutoPlay(*value);
}

// private void Cancel() :184
void VideoContainer__Cancel_fn(VideoContainer* __this)
{
    __this->Cancel();
}

// public bool get_CanPause() :354
void VideoContainer__get_CanPause_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->CanPause();
}

// public bool get_CanPlayTo() :378
void VideoContainer__get_CanPlayTo_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->CanPlayTo();
}

// public bool get_CanResume() :359
void VideoContainer__get_CanResume_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->CanResume();
}

// public bool get_CanStop() :349
void VideoContainer__get_CanStop_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->CanStop();
}

// public generated void add_Completed(Uno.EventHandler value) :289
void VideoContainer__add_Completed_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Completed(value);
}

// public generated void remove_Completed(Uno.EventHandler value) :289
void VideoContainer__remove_Completed_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Completed(value);
}

// private void DisposePlayer() :135
void VideoContainer__DisposePlayer_fn(VideoContainer* __this)
{
    __this->DisposePlayer();
}

// public double get_Duration() :270
void VideoContainer__get_Duration_fn(VideoContainer* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void add_Error(Uno.EventHandler<string> value) :293
void VideoContainer__add_Error_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Uno.EventHandler<string> value) :293
void VideoContainer__remove_Error_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// public void set_File(Uno.UX.FileSource value) :77
void VideoContainer__set_File_fn(VideoContainer* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public bool get_Flip() :123
void VideoContainer__get_Flip_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->Flip();
}

// public generated void add_FrameAvailable(Uno.EventHandler value) :291
void VideoContainer__add_FrameAvailable_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_FrameAvailable(value);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) :291
void VideoContainer__remove_FrameAvailable_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_FrameAvailable(value);
}

// public bool get_IsLooping() :91
void VideoContainer__get_IsLooping_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->IsLooping();
}

// public void set_IsLooping(bool value) :92
void VideoContainer__set_IsLooping_fn(VideoContainer* __this, bool* value)
{
    __this->IsLooping(*value);
}

// public bool get_IsPlaying() :260
void VideoContainer__get_IsPlaying_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->IsPlaying();
}

// private void Load(string url) :159
void VideoContainer__Load_fn(VideoContainer* __this, uString* url)
{
    __this->Load(url);
}

// private void Load(Uno.UX.FileSource fileSource) :166
void VideoContainer__Load1_fn(VideoContainer* __this, ::g::Uno::UX::FileSource* fileSource)
{
    __this->Load1(fileSource);
}

// public generated void add_Loading(Uno.EventHandler value) :279
void VideoContainer__add_Loading_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Loading(value);
}

// public generated void remove_Loading(Uno.EventHandler value) :279
void VideoContainer__remove_Loading_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Loading(value);
}

// public generated VideoContainer New() :59
void VideoContainer__New1_fn(VideoContainer** __retval)
{
    *__retval = VideoContainer::New1();
}

// private void OnCompleted(object sender, Uno.EventArgs args) :229
void VideoContainer__OnCompleted_fn(VideoContainer* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnCompleted(sender, args);
}

// private void OnError(object sender, string msg) :208
void VideoContainer__OnError_fn(VideoContainer* __this, uObject* sender, uString* msg)
{
    __this->OnError(sender, msg);
}

// private void OnFrameAvailable(object sender, Uno.EventArgs args) :193
void VideoContainer__OnFrameAvailable_fn(VideoContainer* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnFrameAvailable(sender, args);
}

// private void OnLoadedHandler(Fuse.Video.LoadResult result) :173
void VideoContainer__OnLoadedHandler_fn(VideoContainer* __this, ::g::Fuse::Video::LoadResult* result)
{
    __this->OnLoadedHandler(result);
}

// private void OnLoading() :214
void VideoContainer__OnLoading_fn(VideoContainer* __this)
{
    __this->OnLoading();
}

// private void OnParamChanged() :199
void VideoContainer__OnParamChanged_fn(VideoContainer* __this)
{
    __this->OnParamChanged();
}

// private void OnPaused() :241
void VideoContainer__OnPaused_fn(VideoContainer* __this)
{
    __this->OnPaused();
}

// private void OnPrepared() :220
void VideoContainer__OnPrepared_fn(VideoContainer* __this)
{
    __this->OnPrepared();
}

// private void OnStarted() :235
void VideoContainer__OnStarted_fn(VideoContainer* __this)
{
    __this->OnStarted();
}

// private void OnStopped() :247
void VideoContainer__OnStopped_fn(VideoContainer* __this)
{
    __this->OnStopped();
}

// public void Pause() :333
void VideoContainer__Pause_fn(VideoContainer* __this)
{
    __this->Pause();
}

// public generated void add_Paused(Uno.EventHandler value) :285
void VideoContainer__add_Paused_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Paused(value);
}

// public generated void remove_Paused(Uno.EventHandler value) :285
void VideoContainer__remove_Paused_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Paused(value);
}

// public void Play() :304
void VideoContainer__Play_fn(VideoContainer* __this)
{
    __this->Play();
}

// public void PlayTo(double progress) :374
void VideoContainer__PlayTo_fn(VideoContainer* __this, double* progress)
{
    __this->PlayTo(*progress);
}

// public double get_Position() :275
void VideoContainer__get_Position_fn(VideoContainer* __this, double* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(double value) :276
void VideoContainer__set_Position_fn(VideoContainer* __this, double* value)
{
    __this->Position(*value);
}

// public generated void add_Prepared(Uno.EventHandler value) :281
void VideoContainer__add_Prepared_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Prepared(value);
}

// public generated void remove_Prepared(Uno.EventHandler value) :281
void VideoContainer__remove_Prepared_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Prepared(value);
}

// public double get_Progress() :364
void VideoContainer__get_Progress_fn(VideoContainer* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void set_Progress(double value) :365
void VideoContainer__set_Progress_fn(VideoContainer* __this, double* value)
{
    __this->Progress(*value);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :372
void VideoContainer__add_ProgressChanged_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :372
void VideoContainer__remove_ProgressChanged_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reset() :126
void VideoContainer__Reset_fn(VideoContainer* __this)
{
    __this->Reset();
}

// public void Resume() :342
void VideoContainer__Resume_fn(VideoContainer* __this)
{
    __this->Resume();
}

// private void SetPlayer(Fuse.Video.IVideoPlayer player) :148
void VideoContainer__SetPlayer_fn(VideoContainer* __this, uObject* player)
{
    __this->SetPlayer(player);
}

// public int2 get_Size() :265
void VideoContainer__get_Size_fn(VideoContainer* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// public generated void add_Started(Uno.EventHandler value) :283
void VideoContainer__add_Started_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Started(value);
}

// public generated void remove_Started(Uno.EventHandler value) :283
void VideoContainer__remove_Started_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Started(value);
}

// public void Stop() :313
void VideoContainer__Stop_fn(VideoContainer* __this)
{
    __this->Stop();
}

// public generated void add_Stopped(Uno.EventHandler value) :287
void VideoContainer__add_Stopped_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Stopped(value);
}

// public generated void remove_Stopped(Uno.EventHandler value) :287
void VideoContainer__remove_Stopped_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Stopped(value);
}

// public void Update() :295
void VideoContainer__Update_fn(VideoContainer* __this)
{
    __this->Update();
}

// public void set_Url(string value) :64
void VideoContainer__set_Url_fn(VideoContainer* __this, uString* value)
{
    __this->Url(value);
}

// public Uno.Graphics.VideoTexture get_VideoTexture() :255
void VideoContainer__get_VideoTexture_fn(VideoContainer* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    *__retval = __this->VideoTexture();
}

// public float get_Volume() :113
void VideoContainer__get_Volume_fn(VideoContainer* __this, float* __retval)
{
    *__retval = __this->Volume();
}

// public void set_Volume(float value) :114
void VideoContainer__set_Volume_fn(VideoContainer* __this, float* value)
{
    __this->Volume(*value);
}

// public generated VideoContainer() [instance] :59
void VideoContainer::ctor_()
{
    uStackFrame __("Fuse.Video.VideoContainer", ".ctor()");
    _volume = 1.0f;
}

// public bool get_AutoPlay() [instance] :102
bool VideoContainer::AutoPlay()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_AutoPlay()");
    return _autoPlay;
}

// public void set_AutoPlay(bool value) [instance] :103
void VideoContainer::AutoPlay(bool value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "set_AutoPlay(bool)");
    _autoPlay = value;
    OnParamChanged();
}

// private void Cancel() [instance] :184
void VideoContainer::Cancel()
{
    uStackFrame __("Fuse.Video.VideoContainer", "Cancel()");

    if (_cancellationTokenSource != NULL)
    {
        uPtr(_cancellationTokenSource)->Cancel();
        _cancellationTokenSource = NULL;
    }
}

// public bool get_CanPause() [instance] :354
bool VideoContainer::CanPause()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_CanPause()");
    return _player != NULL;
}

// public bool get_CanPlayTo() [instance] :378
bool VideoContainer::CanPlayTo()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_CanPlayTo()");
    return _player != NULL;
}

// public bool get_CanResume() [instance] :359
bool VideoContainer::CanResume()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_CanResume()");
    return _player != NULL;
}

// public bool get_CanStop() [instance] :349
bool VideoContainer::CanStop()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_CanStop()");
    return _player != NULL;
}

// public generated void add_Completed(Uno.EventHandler value) [instance] :289
void VideoContainer::add_Completed(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "add_Completed(Uno.EventHandler)");
    Completed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Completed1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_Completed(Uno.EventHandler value) [instance] :289
void VideoContainer::remove_Completed(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "remove_Completed(Uno.EventHandler)");
    Completed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Completed1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// private void DisposePlayer() [instance] :135
void VideoContainer::DisposePlayer()
{
    uStackFrame __("Fuse.Video.VideoContainer", "DisposePlayer()");

    if (_player != NULL)
    {
        ::g::Fuse::Video::IVideoPlayer::Pause(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]));
        ::g::Fuse::Video::IVideoPlayer::remove_FrameAvailable(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]), uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoContainer__OnFrameAvailable_fn, this));
        ::g::Fuse::Video::IVideoPlayer::remove_Error(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]), uDelegate::New(::TYPES[15/*Uno.EventHandler<string>*/], (void*)VideoContainer__OnError_fn, this));
        ::g::Fuse::Video::IVideoPlayer::remove_Completed(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]), uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoContainer__OnCompleted_fn, this));
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_player), ::g::Uno::IDisposable_typeof()));
        _player = NULL;
    }
}

// public double get_Duration() [instance] :270
double VideoContainer::Duration()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_Duration()");
    return (_player != NULL) ? ::g::Fuse::Video::IVideoPlayer::Duration(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/])) : 0.0;
}

// public generated void add_Error(Uno.EventHandler<string> value) [instance] :293
void VideoContainer::add_Error(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "add_Error(Uno.EventHandler<string>)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[15/*Uno.EventHandler<string>*/]);
}

// public generated void remove_Error(Uno.EventHandler<string> value) [instance] :293
void VideoContainer::remove_Error(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "remove_Error(Uno.EventHandler<string>)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[15/*Uno.EventHandler<string>*/]);
}

// public void set_File(Uno.UX.FileSource value) [instance] :77
void VideoContainer::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "set_File(Uno.UX.FileSource)");

    try
    {
        Load1(value);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Reset();
        OnError(this, uPtr(e)->Message());
    }
}

// public bool get_Flip() [instance] :123
bool VideoContainer::Flip()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_Flip()");
    return (_player != NULL) ? ::g::Fuse::Video::IVideoPlayer::Flip(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/])) : false;
}

// public generated void add_FrameAvailable(Uno.EventHandler value) [instance] :291
void VideoContainer::add_FrameAvailable(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "add_FrameAvailable(Uno.EventHandler)");
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameAvailable1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) [instance] :291
void VideoContainer::remove_FrameAvailable(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "remove_FrameAvailable(Uno.EventHandler)");
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameAvailable1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public bool get_IsLooping() [instance] :91
bool VideoContainer::IsLooping()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_IsLooping()");
    return _isLooping;
}

// public void set_IsLooping(bool value) [instance] :92
void VideoContainer::IsLooping(bool value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "set_IsLooping(bool)");
    _isLooping = value;
    OnParamChanged();
}

// public bool get_IsPlaying() [instance] :260
bool VideoContainer::IsPlaying()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_IsPlaying()");
    return (_player != NULL) ? ::g::Fuse::Video::IVideoPlayer::IsPlaying(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/])) : false;
}

// private void Load(string url) [instance] :159
void VideoContainer::Load(uString* url)
{
    uStackFrame __("Fuse.Video.VideoContainer", "Load(string)");
    Reset();
    OnLoading();
    _cancellationTokenSource = ::g::Fuse::Video::VideoLoader::Load1(url, uDelegate::New(::TYPES[16/*Fuse.Video.LoadedHandler*/], (void*)VideoContainer__OnLoadedHandler_fn, this));
}

// private void Load(Uno.UX.FileSource fileSource) [instance] :166
void VideoContainer::Load1(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Video.VideoContainer", "Load(Uno.UX.FileSource)");
    Reset();
    OnLoading();
    _cancellationTokenSource = ::g::Fuse::Video::VideoLoader::Load3(fileSource, uDelegate::New(::TYPES[16/*Fuse.Video.LoadedHandler*/], (void*)VideoContainer__OnLoadedHandler_fn, this));
}

// public generated void add_Loading(Uno.EventHandler value) [instance] :279
void VideoContainer::add_Loading(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "add_Loading(Uno.EventHandler)");
    Loading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Loading1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_Loading(Uno.EventHandler value) [instance] :279
void VideoContainer::remove_Loading(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "remove_Loading(Uno.EventHandler)");
    Loading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Loading1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// private void OnCompleted(object sender, Uno.EventArgs args) [instance] :229
void VideoContainer::OnCompleted(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoContainer", "OnCompleted(object,Uno.EventArgs)");

    if (::g::Uno::Delegate::op_Inequality(Completed1, NULL))
        uPtr(Completed1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnError(object sender, string msg) [instance] :208
void VideoContainer::OnError(uObject* sender, uString* msg)
{
    uStackFrame __("Fuse.Video.VideoContainer", "OnError(object,string)");

    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, this, msg);
}

// private void OnFrameAvailable(object sender, Uno.EventArgs args) [instance] :193
void VideoContainer::OnFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoContainer", "OnFrameAvailable(object,Uno.EventArgs)");

    if (::g::Uno::Delegate::op_Inequality(FrameAvailable1, NULL))
        uPtr(FrameAvailable1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnLoadedHandler(Fuse.Video.LoadResult result) [instance] :173
void VideoContainer::OnLoadedHandler(::g::Fuse::Video::LoadResult* result)
{
    uStackFrame __("Fuse.Video.VideoContainer", "OnLoadedHandler(Fuse.Video.LoadResult)");
    _cancellationTokenSource = NULL;

    if (::g::Fuse::Video::LoadResult::Failed(result))
        OnError(this, ::g::Fuse::Video::LoadResult::GetErrorMessage(result));
    else
        SetPlayer(::g::Fuse::Video::LoadResult::GetPlayer(result));
}

// private void OnLoading() [instance] :214
void VideoContainer::OnLoading()
{
    uStackFrame __("Fuse.Video.VideoContainer", "OnLoading()");

    if (::g::Uno::Delegate::op_Inequality(Loading1, NULL))
        uPtr(Loading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnParamChanged() [instance] :199
void VideoContainer::OnParamChanged()
{
    uStackFrame __("Fuse.Video.VideoContainer", "OnParamChanged()");

    if (_player != NULL)
    {
        ::g::Fuse::Video::IVideoPlayer::IsLooping(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]), IsLooping());
        ::g::Fuse::Video::IVideoPlayer::Volume(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]), Volume());
    }
}

// private void OnPaused() [instance] :241
void VideoContainer::OnPaused()
{
    uStackFrame __("Fuse.Video.VideoContainer", "OnPaused()");

    if (::g::Uno::Delegate::op_Inequality(Paused1, NULL))
        uPtr(Paused1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnPrepared() [instance] :220
void VideoContainer::OnPrepared()
{
    uStackFrame __("Fuse.Video.VideoContainer", "OnPrepared()");

    if (::g::Uno::Delegate::op_Inequality(Prepared1, NULL))
        uPtr(Prepared1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (AutoPlay())
        Play();
}

// private void OnStarted() [instance] :235
void VideoContainer::OnStarted()
{
    uStackFrame __("Fuse.Video.VideoContainer", "OnStarted()");

    if (::g::Uno::Delegate::op_Inequality(Started1, NULL))
        uPtr(Started1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnStopped() [instance] :247
void VideoContainer::OnStopped()
{
    uStackFrame __("Fuse.Video.VideoContainer", "OnStopped()");

    if (::g::Uno::Delegate::op_Inequality(Stopped1, NULL))
        uPtr(Stopped1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void Pause() [instance] :333
void VideoContainer::Pause()
{
    uStackFrame __("Fuse.Video.VideoContainer", "Pause()");

    if ((_player != NULL) && IsPlaying())
    {
        ::g::Fuse::Video::IVideoPlayer::Pause(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]));
        OnPaused();
    }
}

// public generated void add_Paused(Uno.EventHandler value) [instance] :285
void VideoContainer::add_Paused(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "add_Paused(Uno.EventHandler)");
    Paused1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Paused1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_Paused(Uno.EventHandler value) [instance] :285
void VideoContainer::remove_Paused(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "remove_Paused(Uno.EventHandler)");
    Paused1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Paused1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public void Play() [instance] :304
void VideoContainer::Play()
{
    uStackFrame __("Fuse.Video.VideoContainer", "Play()");

    if ((_player != NULL) && !IsPlaying())
    {
        ::g::Fuse::Video::IVideoPlayer::Play(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]));
        OnStarted();
    }
}

// public void PlayTo(double progress) [instance] :374
void VideoContainer::PlayTo(double progress)
{
}

// public double get_Position() [instance] :275
double VideoContainer::Position()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_Position()");
    return (_player != NULL) ? ::g::Fuse::Video::IVideoPlayer::Position(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/])) : 0.0;
}

// public void set_Position(double value) [instance] :276
void VideoContainer::Position(double value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "set_Position(double)");

    if (_player != NULL)
        ::g::Fuse::Video::IVideoPlayer::Position(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]), ::g::Uno::Math::Clamp(value, 0.0, Duration()));
}

// public generated void add_Prepared(Uno.EventHandler value) [instance] :281
void VideoContainer::add_Prepared(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "add_Prepared(Uno.EventHandler)");
    Prepared1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Prepared1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_Prepared(Uno.EventHandler value) [instance] :281
void VideoContainer::remove_Prepared(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "remove_Prepared(Uno.EventHandler)");
    Prepared1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Prepared1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :364
double VideoContainer::Progress()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_Progress()");
    return ((_player != NULL) && (Duration() != 0.0)) ? Position() / Duration() : 0.0;
}

// public void set_Progress(double value) [instance] :365
void VideoContainer::Progress(double value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "set_Progress(double)");

    if ((_player != NULL) && (Duration() != 0.0))
        Position(value * Duration());
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :372
void VideoContainer::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[20/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :372
void VideoContainer::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[20/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reset() [instance] :126
void VideoContainer::Reset()
{
    uStackFrame __("Fuse.Video.VideoContainer", "Reset()");
    Cancel();
    DisposePlayer();
}

// public void Resume() [instance] :342
void VideoContainer::Resume()
{
    uStackFrame __("Fuse.Video.VideoContainer", "Resume()");
    Play();
}

// private void SetPlayer(Fuse.Video.IVideoPlayer player) [instance] :148
void VideoContainer::SetPlayer(uObject* player)
{
    uStackFrame __("Fuse.Video.VideoContainer", "SetPlayer(Fuse.Video.IVideoPlayer)");
    _player = player;
    ::g::Fuse::Video::IVideoPlayer::add_FrameAvailable(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]), uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoContainer__OnFrameAvailable_fn, this));
    ::g::Fuse::Video::IVideoPlayer::add_Error(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]), uDelegate::New(::TYPES[15/*Uno.EventHandler<string>*/], (void*)VideoContainer__OnError_fn, this));
    ::g::Fuse::Video::IVideoPlayer::add_Completed(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]), uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoContainer__OnCompleted_fn, this));
    OnParamChanged();
    OnPrepared();
}

// public int2 get_Size() [instance] :265
::g::Uno::Int2 VideoContainer::Size()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_Size()");
    return (_player != NULL) ? ::g::Fuse::Video::IVideoPlayer::Size(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/])) : ::g::Uno::Int2__New2(0, 0);
}

// public generated void add_Started(Uno.EventHandler value) [instance] :283
void VideoContainer::add_Started(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "add_Started(Uno.EventHandler)");
    Started1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Started1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_Started(Uno.EventHandler value) [instance] :283
void VideoContainer::remove_Started(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "remove_Started(Uno.EventHandler)");
    Started1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Started1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public void Stop() [instance] :313
void VideoContainer::Stop()
{
    uStackFrame __("Fuse.Video.VideoContainer", "Stop()");

    if (_player != NULL)
    {
        ::g::Fuse::Video::IVideoPlayer::Pause(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]));
        Position(0.0);
        OnStopped();
    }
}

// public generated void add_Stopped(Uno.EventHandler value) [instance] :287
void VideoContainer::add_Stopped(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "add_Stopped(Uno.EventHandler)");
    Stopped1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Stopped1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_Stopped(Uno.EventHandler value) [instance] :287
void VideoContainer::remove_Stopped(uDelegate* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "remove_Stopped(Uno.EventHandler)");
    Stopped1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Stopped1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public void Update() [instance] :295
void VideoContainer::Update()
{
    uStackFrame __("Fuse.Video.VideoContainer", "Update()");
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if (_player != NULL)
        ::g::Fuse::Video::IVideoPlayer::Update(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/]));

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[21/*Uno.UX.ValueChangedArgs<double>*/], uCRef(Progress()), this, &ret2), ret2));
}

// public void set_Url(string value) [instance] :64
void VideoContainer::Url(uString* value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "set_Url(string)");

    try
    {
        Load(value);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Reset();
        OnError(this, uPtr(e)->Message());
    }
}

// public Uno.Graphics.VideoTexture get_VideoTexture() [instance] :255
::g::Uno::Graphics::VideoTexture* VideoContainer::VideoTexture()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_VideoTexture()");
    return (_player != NULL) ? (::g::Uno::Graphics::VideoTexture*)::g::Fuse::Video::IVideoPlayer::VideoTexture(uInterface(uPtr(_player), ::TYPES[13/*Fuse.Video.IVideoPlayer*/])) : NULL;
}

// public float get_Volume() [instance] :113
float VideoContainer::Volume()
{
    uStackFrame __("Fuse.Video.VideoContainer", "get_Volume()");
    return _volume;
}

// public void set_Volume(float value) [instance] :114
void VideoContainer::Volume(float value)
{
    uStackFrame __("Fuse.Video.VideoContainer", "set_Volume(float)");
    _volume = value;
    OnParamChanged();
}

// public generated VideoContainer New() [static] :59
VideoContainer* VideoContainer::New1()
{
    VideoContainer* obj1 = (VideoContainer*)uNew(VideoContainer_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(397)
// --------------------------------------------------------------------

// internal static class VideoDiskCache :397
// {
// static VideoDiskCache() :397
static void VideoDiskCache__cctor__fn(uType* __type)
{
    VideoDiskCache::_files_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[23/*Uno.Collections.Dictionary<string, string>*/]));
}

uClassType* VideoDiskCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Video.VideoDiskCache", options);
    type->fp_cctor_ = VideoDiskCache__cctor__fn;
    ::STRINGS[1] = uString::Const("/tempVideo");
    ::STRINGS[2] = uString::Const(".");
    ::TYPES[23] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[24] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[25] = ::g::Uno::String_typeof()->Array();
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[26] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Video::VideoDiskCache::_fileCount_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Video::VideoDiskCache::_files_, uFieldFlagsStatic);
    return type;
}

// public static string GetFileExtension(string fileName) :416
void VideoDiskCache__GetFileExtension_fn(uString* fileName, uString** __retval)
{
    *__retval = VideoDiskCache::GetFileExtension(fileName);
}

// public static string GetFilePath(Uno.UX.FileSource fileSource) :403
void VideoDiskCache__GetFilePath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval)
{
    *__retval = VideoDiskCache::GetFilePath(fileSource);
}

int VideoDiskCache::_fileCount_;
uSStrong< ::g::Uno::Collections::Dictionary*> VideoDiskCache::_files_;

// public static string GetFileExtension(string fileName) [static] :416
uString* VideoDiskCache::GetFileExtension(uString* fileName)
{
    uStackFrame __("Fuse.Video.VideoDiskCache", "GetFileExtension(string)");
    VideoDiskCache_typeof()->Init();
    uArray* strings = ::g::Uno::String::Split(uPtr(fileName), uArray::Init<int>(::TYPES[24/*char[]*/], 1, '.'));
    return uPtr(strings)->Strong<uString*>(uPtr(strings)->Length() - 1);
}

// public static string GetFilePath(Uno.UX.FileSource fileSource) [static] :403
uString* VideoDiskCache::GetFilePath(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Video.VideoDiskCache", "GetFilePath(Uno.UX.FileSource)");
    VideoDiskCache_typeof()->Init();
    bool ret1;
    uString* ret2;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(VideoDiskCache::_files()), uPtr(fileSource)->Name, &ret1), ret1))
    {
        uArray* bytes = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[1/*"/tempVideo"*/]), ::g::Uno::Int::ToString(VideoDiskCache::_fileCount(), ::TYPES[27/*int*/])), ::STRINGS[2/*"."*/]), VideoDiskCache::GetFileExtension(fileSource->Name));
        VideoDiskCache::_fileCount()++;
        ::g::Uno::IO::File::WriteAllBytes(path, bytes);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(VideoDiskCache::_files()), fileSource->Name, path);
    }

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(VideoDiskCache::_files()), uPtr(fileSource)->Name, &ret2), ret2);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(860)
// --------------------------------------------------------------------

// internal sealed class VideoDrawElement :860
// {
// static VideoDrawElement() :860
static void VideoDrawElement__cctor__fn(uType* __type)
{
    VideoDrawElement::Impl_ = VideoDrawElement::New1();
}

uType* VideoDrawElement_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(VideoDrawElement);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Video.VideoDrawElement", options);
    type->fp_ctor_ = (void*)VideoDrawElement__New1_fn;
    type->fp_cctor_ = VideoDrawElement__cctor__fn;
    ::TYPES[6] = ::g::Uno::Float2_typeof();
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[9] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[8] = ::g::Fuse::IViewport_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[28] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[29] = ::g::Uno::Float_typeof();
    ::TYPES[12] = ::g::FuseVideo_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Video::VideoDrawElement, _draw_7b23543a), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Video::VideoDrawElement, Draw_LocalTransform_7b23543a_3_8_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Video::VideoDrawElement, Draw_LocalTransform_7b23543a_3_8_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Video::VideoDrawElement, Draw_VertexData_7b23543a_6_2_1), 0,
        VideoDrawElement_typeof(), (uintptr_t)&::g::Fuse::Video::VideoDrawElement::Impl_, uFieldFlagsStatic);
    return type;
}

// public generated VideoDrawElement() :860
void VideoDrawElement__ctor__fn(VideoDrawElement* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, Uno.Graphics.VideoTexture tex, bool flip) :864
void VideoDrawElement__Draw_fn(VideoDrawElement* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Graphics::VideoTexture* tex, bool* flip)
{
    __this->Draw(dc, element, *offset, *size, *uvPosition, *uvSize, tex, *flip);
}

// private generated void init_DrawCalls() :860
void VideoDrawElement__init_DrawCalls_fn(VideoDrawElement* __this)
{
    __this->init_DrawCalls();
}

// public generated VideoDrawElement New() :860
void VideoDrawElement__New1_fn(VideoDrawElement** __retval)
{
    *__retval = VideoDrawElement::New1();
}

uSStrong<VideoDrawElement*> VideoDrawElement::Impl_;

// public generated VideoDrawElement() [instance] :860
void VideoDrawElement::ctor_()
{
    uStackFrame __("Fuse.Video.VideoDrawElement", ".ctor()");
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, Uno.Graphics.VideoTexture tex, bool flip) [instance] :864
void VideoDrawElement::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Graphics::VideoTexture* tex, bool flip)
{
    uStackFrame __("Fuse.Video.VideoDrawElement", "Draw(Fuse.DrawContext,Fuse.Node,float2,float2,float2,float2,Uno.Graphics.VideoTexture,bool)");
    ::g::Uno::Float4x4 LocalTransform_7b23543a_3_8_4 = ::g::Uno::Matrix::Mul10(Draw_LocalTransform_7b23543a_3_8_2, ::g::Uno::Matrix::Scaling1(size.X, size.Y, 1.0f), Draw_LocalTransform_7b23543a_3_8_3, ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f));
    _draw_7b23543a.BlendEnabled(true);
    _draw_7b23543a.DepthTestEnabled(false);
    _draw_7b23543a.CullFace(uPtr(dc)->CullFace());
    _draw_7b23543a.BlendSrcRgb(2);
    _draw_7b23543a.BlendDstRgb(3);
    _draw_7b23543a.BlendDstAlpha(3);
    _draw_7b23543a.Const(0, flip);
    _draw_7b23543a.Use();
    _draw_7b23543a.Attrib1(1, 2, Draw_VertexData_7b23543a_6_2_1, 8, 0);
    _draw_7b23543a.Uniform12(2, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[8/*Fuse.IViewport*/])));
    _draw_7b23543a.Uniform2(3, uvSize);
    _draw_7b23543a.Uniform2(4, uvPosition);
    _draw_7b23543a.Uniform12(5, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_7b23543a_3_8_4, uPtr(element)->WorldTransform()) : LocalTransform_7b23543a_3_8_4);
    _draw_7b23543a.Sampler6(6, tex);
    _draw_7b23543a.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance] :860
void VideoDrawElement::init_DrawCalls()
{
    uStackFrame __("Fuse.Video.VideoDrawElement", "init_DrawCalls()");
    Draw_VertexData_7b23543a_6_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[28/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Draw_LocalTransform_7b23543a_3_8_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Draw_LocalTransform_7b23543a_3_8_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_7b23543a = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseVideo_bundle::VideoDrawElementc2e30808());
}

// public generated VideoDrawElement New() [static] :860
VideoDrawElement* VideoDrawElement::New1()
{
    VideoDrawElement* obj1 = (VideoDrawElement*)uNew(VideoDrawElement_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(441)
// --------------------------------------------------------------------

// internal abstract class VideoLoader :441
// {
VideoLoader_type* VideoLoader_typeof()
{
    static uSStrong<VideoLoader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(VideoLoader);
    options.TypeSize = sizeof(VideoLoader_type);
    type = (VideoLoader_type*)uClassType::New("Fuse.Video.VideoLoader", options);
    ::STRINGS[3] = uString::Const("loadedHandler");
    ::STRINGS[4] = uString::Const("Platform not supported");
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[16] = ::g::Fuse::Video::LoadedHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::VideoLoader, _isCancelled), 0,
        ::g::Fuse::Video::LoadedHandler_typeof(), offsetof(::g::Fuse::Video::VideoLoader, _loadedHandler), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::VideoLoader, _readyToDispose), 0);
    return type;
}

// protected VideoLoader(Fuse.Video.LoadedHandler loadedHandler) :446
void VideoLoader__ctor__fn(VideoLoader* __this, uDelegate* loadedHandler)
{
    __this->ctor_(loadedHandler);
}

// private void Cancel() :456
void VideoLoader__Cancel_fn(VideoLoader* __this)
{
    __this->Cancel();
}

// private void DoDispose() :470
void VideoLoader__DoDispose_fn(VideoLoader* __this)
{
    __this->DoDispose();
}

// public Fuse.Video.CancellationTokenSource Load(string url) :488
void VideoLoader__Load_fn(VideoLoader* __this, uString* url, ::g::Fuse::Video::CancellationTokenSource** __retval)
{
    *__retval = __this->Load(url);
}

// public static Fuse.Video.CancellationTokenSource Load(string url, Fuse.Video.LoadedHandler loadedHandler) :506
void VideoLoader__Load1_fn(uString* url, uDelegate* loadedHandler, ::g::Fuse::Video::CancellationTokenSource** __retval)
{
    *__retval = VideoLoader::Load1(url, loadedHandler);
}

// public Fuse.Video.CancellationTokenSource Load(Uno.UX.FileSource fileSource) :494
void VideoLoader__Load2_fn(VideoLoader* __this, ::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Video::CancellationTokenSource** __retval)
{
    *__retval = __this->Load2(fileSource);
}

// public static Fuse.Video.CancellationTokenSource Load(Uno.UX.FileSource fileSource, Fuse.Video.LoadedHandler loadedHandler) :515
void VideoLoader__Load3_fn(::g::Uno::UX::FileSource* fileSource, uDelegate* loadedHandler, ::g::Fuse::Video::CancellationTokenSource** __retval)
{
    *__retval = VideoLoader::Load3(fileSource, loadedHandler);
}

// private void OnLoadedHandler(Fuse.Video.LoadResult result) :479
void VideoLoader__OnLoadedHandler_fn(VideoLoader* __this, ::g::Fuse::Video::LoadResult* result)
{
    __this->OnLoadedHandler(result);
}

// private void ScheduleDispose() :465
void VideoLoader__ScheduleDispose_fn(VideoLoader* __this)
{
    __this->ScheduleDispose();
}

// protected VideoLoader(Fuse.Video.LoadedHandler loadedHandler) [instance] :446
void VideoLoader::ctor_(uDelegate* loadedHandler)
{
    uStackFrame __("Fuse.Video.VideoLoader", ".ctor(Fuse.Video.LoadedHandler)");

    if (::g::Uno::Delegate::op_Equality(loadedHandler, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"loadedHandler"*/]));

    _loadedHandler = loadedHandler;
}

// private void Cancel() [instance] :456
void VideoLoader::Cancel()
{
    uStackFrame __("Fuse.Video.VideoLoader", "Cancel()");

    if (!_isCancelled)
    {
        _isCancelled = true;
        ScheduleDispose();
    }
}

// private void DoDispose() [instance] :470
void VideoLoader::DoDispose()
{
    uStackFrame __("Fuse.Video.VideoLoader", "DoDispose()");

    if (_readyToDispose)
    {
        Dispose();
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)VideoLoader__DoDispose_fn, this), 0);
    }
}

// public Fuse.Video.CancellationTokenSource Load(string url) [instance] :488
::g::Fuse::Video::CancellationTokenSource* VideoLoader::Load(uString* url)
{
    uStackFrame __("Fuse.Video.VideoLoader", "Load(string)");
    LoadInternal(url, uDelegate::New(::TYPES[16/*Fuse.Video.LoadedHandler*/], (void*)VideoLoader__OnLoadedHandler_fn, this));
    return ::g::Fuse::Video::CancellationTokenSource::New1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)VideoLoader__Cancel_fn, this));
}

// public Fuse.Video.CancellationTokenSource Load(Uno.UX.FileSource fileSource) [instance] :494
::g::Fuse::Video::CancellationTokenSource* VideoLoader::Load2(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Video.VideoLoader", "Load(Uno.UX.FileSource)");
    LoadInternal1(fileSource, uDelegate::New(::TYPES[16/*Fuse.Video.LoadedHandler*/], (void*)VideoLoader__OnLoadedHandler_fn, this));
    return ::g::Fuse::Video::CancellationTokenSource::New1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)VideoLoader__Cancel_fn, this));
}

// private void OnLoadedHandler(Fuse.Video.LoadResult result) [instance] :479
void VideoLoader::OnLoadedHandler(::g::Fuse::Video::LoadResult* result)
{
    uStackFrame __("Fuse.Video.VideoLoader", "OnLoadedHandler(Fuse.Video.LoadResult)");

    if (_isCancelled)
        _readyToDispose = true;
    else
        uPtr(_loadedHandler)->InvokeVoid(result);
}

// private void ScheduleDispose() [instance] :465
void VideoLoader::ScheduleDispose()
{
    uStackFrame __("Fuse.Video.VideoLoader", "ScheduleDispose()");
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)VideoLoader__DoDispose_fn, this), 0);
}

// public static Fuse.Video.CancellationTokenSource Load(string url, Fuse.Video.LoadedHandler loadedHandler) [static] :506
::g::Fuse::Video::CancellationTokenSource* VideoLoader::Load1(uString* url, uDelegate* loadedHandler)
{
    uStackFrame __("Fuse.Video.VideoLoader", "Load(string,Fuse.Video.LoadedHandler)");
    return ::g::Fuse::Video::Graphics::Android::AndroidVideoLoader::New1(loadedHandler)->Load(url);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Platform no...*/]));
}

// public static Fuse.Video.CancellationTokenSource Load(Uno.UX.FileSource fileSource, Fuse.Video.LoadedHandler loadedHandler) [static] :515
::g::Fuse::Video::CancellationTokenSource* VideoLoader::Load3(::g::Uno::UX::FileSource* fileSource, uDelegate* loadedHandler)
{
    uStackFrame __("Fuse.Video.VideoLoader", "Load(Uno.UX.FileSource,Fuse.Video.LoadedHandler)");
    return ::g::Fuse::Video::Graphics::Android::AndroidVideoLoader::New1(loadedHandler)->Load2(fileSource);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Platform no...*/]));
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\Graphics\$.uno(648)
// --------------------------------------------------------------------

// public sealed extern class VideoVisual :648
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* VideoVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 66;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(VideoVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.Video.VideoVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::Video_typeof()));
    type->fp_ctor_ = (void*)VideoVisual__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))VideoVisual__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))VideoVisual__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))VideoVisual__GetMarginSize_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))VideoVisual__OnArrangeMarginBox_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))VideoVisual__OnDraw_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))VideoVisual__OnHitTest_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[5] = uString::Const("");
    ::TYPES[30] = ::g::Fuse::Controls::Video_typeof();
    ::TYPES[31] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::Video_typeof());
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[32] = ::g::Fuse::Triggers::IMediaPlayback_typeof();
    ::TYPES[33] = ::g::Fuse::Video::VideoContainer_typeof();
    ::TYPES[15] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[34] = ::g::Fuse::Internal::SizingContainer_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    ::TYPES[35] = ::g::Fuse::Video::Scale9Rectangle_typeof();
    ::TYPES[36] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[37] = ::g::Fuse::Video::VideoDrawElement_typeof();
    ::TYPES[5] = ::g::Uno::Float4_typeof();
    ::TYPES[38] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[6] = ::g::Uno::Float2_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface1));
    type->SetFields(58,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _drawOrigin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _drawSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _scale), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _sizeCache), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _sizing), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _uvClip), 0,
        ::g::Fuse::Video::VideoContainer_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _videoContainer), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)VideoVisual__New1_fn, 0, true, VideoVisual_typeof(), 0));
    return type;
}

// public generated VideoVisual() :648
void VideoVisual__ctor_3_fn(VideoVisual* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :650
void VideoVisual__Attach_fn(VideoVisual* __this)
{
    uStackFrame __("Fuse.Video.VideoVisual", "Attach()");
    ::g::Fuse::Controls::Video* ret5;
    ::g::Fuse::Controls::Video* ret6;
    ::g::Fuse::Controls::Video* ret7;
    ::g::Fuse::Controls::Video* ret8;
    ::g::Fuse::Controls::Video* ret9;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret5), ret5))->add_RenderParamChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnRenderParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->add_ParamChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->add_SourceChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnSourceChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret8), ret8))->add_Update(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnUpdate_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret9), ret9))->SetPlayback((uObject*)__this->_videoContainer);
    uPtr(__this->_videoContainer)->add_FrameAvailable(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnFrameAvailable_fn, __this));
    uPtr(__this->_videoContainer)->add_Error(uDelegate::New(::TYPES[15/*Uno.EventHandler<string>*/], (void*)VideoVisual__OnError_fn, __this));
    uPtr(__this->_videoContainer)->add_Loading(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnLoading_fn, __this));
    uPtr(__this->_videoContainer)->add_Prepared(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnPrepared_fn, __this));
    uPtr(__this->_videoContainer)->add_Completed(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnCompleted_fn, __this));
    uPtr(__this->_videoContainer)->add_Started(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnStarted_fn, __this));
    uPtr(__this->_videoContainer)->add_Paused(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnPaused_fn, __this));
    uPtr(__this->_videoContainer)->add_Stopped(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnStopped_fn, __this));
    __this->OnRenderParamChanged(NULL, NULL);
    __this->OnParamChanged(NULL, NULL);
    __this->OnSourceChanged(NULL, NULL);
}

// protected override sealed void Detach() :673
void VideoVisual__Detach_fn(VideoVisual* __this)
{
    uStackFrame __("Fuse.Video.VideoVisual", "Detach()");
    ::g::Fuse::Controls::Video* ret10;
    ::g::Fuse::Controls::Video* ret11;
    ::g::Fuse::Controls::Video* ret12;
    ::g::Fuse::Controls::Video* ret13;
    ::g::Fuse::Controls::Video* ret14;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret10), ret10))->SetPlayback(NULL);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret11), ret11))->remove_RenderParamChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnRenderParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret12), ret12))->remove_ParamChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret13), ret13))->remove_SourceChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnSourceChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret14), ret14))->remove_Update(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnUpdate_fn, __this));
    uPtr(__this->_videoContainer)->remove_FrameAvailable(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnFrameAvailable_fn, __this));
    uPtr(__this->_videoContainer)->remove_Error(uDelegate::New(::TYPES[15/*Uno.EventHandler<string>*/], (void*)VideoVisual__OnError_fn, __this));
    uPtr(__this->_videoContainer)->remove_Loading(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnLoading_fn, __this));
    uPtr(__this->_videoContainer)->remove_Prepared(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnPrepared_fn, __this));
    uPtr(__this->_videoContainer)->remove_Completed(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnCompleted_fn, __this));
    uPtr(__this->_videoContainer)->remove_Started(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnStarted_fn, __this));
    uPtr(__this->_videoContainer)->remove_Paused(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnPaused_fn, __this));
    uPtr(__this->_videoContainer)->remove_Stopped(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)VideoVisual__OnStopped_fn, __this));
    uPtr(__this->_videoContainer)->Reset();
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :795
void VideoVisual__GetMarginSize_fn(VideoVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Video.VideoVisual", "GetMarginSize(Fuse.LayoutParams)");
    ::g::Fuse::Controls::Video* ret15;
    ::g::Fuse::Controls::Video* ret16;
    ::g::Fuse::LayoutParams lp_ = *lp;
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret15), ret15))->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret16), ret16))->AbsoluteZoom();
    return *__retval = uPtr(__this->_sizing)->ExpandFillSize(__this->GetSize(), lp_), void();
}

// private float2 GetSize() :803
void VideoVisual__GetSize_fn(VideoVisual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// public generated VideoVisual New() :648
void VideoVisual__New1_fn(VideoVisual** __retval)
{
    *__retval = VideoVisual::New1();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :813
void VideoVisual__OnArrangeMarginBox_fn(VideoVisual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 ret17;
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Controls::Video* ret18;
    ::g::Fuse::Controls::Video* ret19;
    ::g::Uno::Float2 size = (::g::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox_fn(__this, uCRef(position_), uCRef(lp_), &ret17), ret17);
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret18), ret18))->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret19), ret19))->AbsoluteZoom();
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    __this->_scale = uPtr(__this->_sizing)->CalcScale(size, contentDesiredSize);
    __this->_origin = uPtr(__this->_sizing)->CalcOrigin(size, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale));
    __this->_drawOrigin = __this->_origin;
    __this->_drawSize = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale);
    __this->_uvClip = uPtr(__this->_sizing)->CalcClip(size, &__this->_drawOrigin, &__this->_drawSize);
    return *__retval = size, void();
}

// private void OnCompleted(object sender, Uno.EventArgs args) :763
void VideoVisual__OnCompleted_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnCompleted(sender, args);
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :832
void VideoVisual__OnDraw_fn(VideoVisual* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnDraw(Fuse.DrawContext)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::Controls::Video* ret21;
    ::g::Fuse::Controls::Video* ret22;
    ::g::Uno::Graphics::VideoTexture* texture = uPtr(__this->_videoContainer)->VideoTexture();

    if (texture == NULL)
        return;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret21), ret21))->StretchMode() == 4)
        uPtr(::g::Fuse::Video::Scale9Rectangle::Impl())->Draw(dc, __this, __this->ActualSize(), __this->GetSize(), texture, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret22), ret22))->Scale9Margin(), uPtr(__this->_videoContainer)->Flip());
    else
        uPtr(::g::Fuse::Video::VideoDrawElement::Impl())->Draw(dc, __this, __this->_drawOrigin, __this->_drawSize, (ind1 = __this->_uvClip, ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__op_Subtraction2((ind2 = __this->_uvClip, ::g::Uno::Float2__New2(ind2.Z, ind2.W)), (ind3 = __this->_uvClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y))), texture, uPtr(__this->_videoContainer)->Flip());
}

// private void OnError(object sender, string msg) :745
void VideoVisual__OnError_fn(VideoVisual* __this, uObject* sender, uString* msg)
{
    __this->OnError(sender, msg);
}

// private void OnFrameAvailable(object sender, Uno.EventArgs args) :735
void VideoVisual__OnFrameAvailable_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnFrameAvailable(sender, args);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :847
void VideoVisual__OnHitTest_fn(VideoVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnHitTest(Fuse.HitTestContext)");
    ::g::Uno::Float2 lp = uPtr(htc)->LocalPoint();

    if ((((lp.X >= __this->_drawOrigin.X) && (lp.X <= (__this->_drawOrigin.X + __this->_drawSize.X))) && (lp.Y >= __this->_drawOrigin.Y)) && (lp.Y <= (__this->_drawOrigin.Y + __this->_drawSize.Y)))
        htc->Hit(__this);

    ::g::Fuse::Node__OnHitTest_fn(__this, htc);
}

// private void OnLoading(object sender, Uno.EventArgs args) :751
void VideoVisual__OnLoading_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLoading(sender, args);
}

// private void OnParamChanged(object sender, Uno.EventArgs args) :712
void VideoVisual__OnParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnParamChanged(sender, args);
}

// private void OnPaused(object sender, Uno.EventArgs args) :775
void VideoVisual__OnPaused_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPaused(sender, args);
}

// private void OnPrepared(object sender, Uno.EventArgs args) :757
void VideoVisual__OnPrepared_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPrepared(sender, args);
}

// private void OnRenderParamChanged(object sender, Uno.EventArgs args) :702
void VideoVisual__OnRenderParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnRenderParamChanged(sender, args);
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) :719
void VideoVisual__OnSourceChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSourceChanged(sender, args);
}

// private void OnStarted(object sender, Uno.EventArgs args) :769
void VideoVisual__OnStarted_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnStarted(sender, args);
}

// private void OnStopped(object sender, Uno.EventArgs args) :781
void VideoVisual__OnStopped_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnStopped(sender, args);
}

// private void OnUpdate(object sender, Uno.EventArgs args) :697
void VideoVisual__OnUpdate_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnUpdate(sender, args);
}

// private void ResetTriggers() :786
void VideoVisual__ResetTriggers_fn(VideoVisual* __this)
{
    __this->ResetTriggers();
}

// public generated VideoVisual() [instance] :648
void VideoVisual::ctor_3()
{
    uStackFrame __("Fuse.Video.VideoVisual", ".ctor()");
    _videoContainer = ::g::Fuse::Video::VideoContainer::New1();
    _sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _sizeCache = ::g::Uno::Int2__New2(0, 0);
    ctor_2();
}

// private float2 GetSize() [instance] :803
::g::Uno::Float2 VideoVisual::GetSize()
{
    uStackFrame __("Fuse.Video.VideoVisual", "GetSize()");
    return ::g::Uno::Float2__op_Implicit1(uPtr(_videoContainer)->Size());
}

// private void OnCompleted(object sender, Uno.EventArgs args) [instance] :763
void VideoVisual::OnCompleted(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnCompleted(object,Uno.EventArgs)");
    ::g::Fuse::Controls::Video* ret20;
    ResetTriggers();
    ::g::Fuse::Triggers::WhileCompleted::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret20), ret20), true);
}

// private void OnError(object sender, string msg) [instance] :745
void VideoVisual::OnError(uObject* sender, uString* msg)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnError(object,string)");
    ::g::Fuse::Controls::Video* ret23;
    ResetTriggers();
    ::g::Fuse::Triggers::WhileFailed::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret23), ret23), true, msg);
}

// private void OnFrameAvailable(object sender, Uno.EventArgs args) [instance] :735
void VideoVisual::OnFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnFrameAvailable(object,Uno.EventArgs)");

    if (::g::Uno::Int2::op_Inequality(uPtr(_videoContainer)->Size(), _sizeCache))
    {
        _sizeCache = uPtr(_videoContainer)->Size();
        InvalidateLayout(2);
    }

    InvalidateVisual();
}

// private void OnLoading(object sender, Uno.EventArgs args) [instance] :751
void VideoVisual::OnLoading(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnLoading(object,Uno.EventArgs)");
    ::g::Fuse::Controls::Video* ret24;
    ResetTriggers();
    ::g::Fuse::Triggers::WhileLoading::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret24), ret24), true);
}

// private void OnParamChanged(object sender, Uno.EventArgs args) [instance] :712
void VideoVisual::OnParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnParamChanged(object,Uno.EventArgs)");
    ::g::Fuse::Controls::Video* ret25;
    ::g::Fuse::Controls::Video* ret26;
    ::g::Fuse::Controls::Video* ret27;
    uPtr(_videoContainer)->IsLooping(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret25), ret25))->IsLooping());
    uPtr(_videoContainer)->AutoPlay(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret26), ret26))->AutoPlay());
    uPtr(_videoContainer)->Volume(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret27), ret27))->Volume());
}

// private void OnPaused(object sender, Uno.EventArgs args) [instance] :775
void VideoVisual::OnPaused(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnPaused(object,Uno.EventArgs)");
    ::g::Fuse::Controls::Video* ret28;
    ResetTriggers();
    ::g::Fuse::Triggers::WhilePaused::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret28), ret28), true);
}

// private void OnPrepared(object sender, Uno.EventArgs args) [instance] :757
void VideoVisual::OnPrepared(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnPrepared(object,Uno.EventArgs)");
    ::g::Fuse::Controls::Video* ret29;
    ResetTriggers();
    ::g::Fuse::Triggers::WhileLoading::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret29), ret29), false);
}

// private void OnRenderParamChanged(object sender, Uno.EventArgs args) [instance] :702
void VideoVisual::OnRenderParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnRenderParamChanged(object,Uno.EventArgs)");
    ::g::Fuse::Controls::Video* ret30;
    ::g::Fuse::Controls::Video* ret31;
    ::g::Fuse::Controls::Video* ret32;
    ::g::Fuse::Controls::Video* ret33;
    uPtr(_sizing)->SetStretchMode(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret30), ret30))->StretchMode());
    uPtr(_sizing)->SetStretchDirection(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret31), ret31))->StretchDirection());
    uPtr(_sizing)->SetStretchSizing(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret32), ret32))->StretchSizing());
    uPtr(_sizing)->SetAlignment(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret33), ret33))->ContentAlignment());
    InvalidateVisual();
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) [instance] :719
void VideoVisual::OnSourceChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnSourceChanged(object,Uno.EventArgs)");
    ::g::Fuse::Controls::Video* ret34;
    ::g::Fuse::Controls::Video* ret35;
    ::g::Fuse::Controls::Video* ret36;
    ::g::Fuse::Controls::Video* ret37;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret34), ret34))->File() != NULL)
    {
        uPtr(_videoContainer)->File(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret35), ret35))->File());
        return;
    }

    if (::g::Uno::String::op_Inequality(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret36), ret36))->Url(), NULL))
    {
        uPtr(_videoContainer)->Url(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret37), ret37))->Url());
        return;
    }
}

// private void OnStarted(object sender, Uno.EventArgs args) [instance] :769
void VideoVisual::OnStarted(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnStarted(object,Uno.EventArgs)");
    ::g::Fuse::Controls::Video* ret38;
    ResetTriggers();
    ::g::Fuse::Triggers::WhilePlaying::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret38), ret38), true);
}

// private void OnStopped(object sender, Uno.EventArgs args) [instance] :781
void VideoVisual::OnStopped(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnStopped(object,Uno.EventArgs)");
    ResetTriggers();
}

// private void OnUpdate(object sender, Uno.EventArgs args) [instance] :697
void VideoVisual::OnUpdate(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Video.VideoVisual", "OnUpdate(object,Uno.EventArgs)");
    uPtr(_videoContainer)->Update();
}

// private void ResetTriggers() [instance] :786
void VideoVisual::ResetTriggers()
{
    uStackFrame __("Fuse.Video.VideoVisual", "ResetTriggers()");
    ::g::Fuse::Controls::Video* ret39;
    ::g::Fuse::Controls::Video* ret40;
    ::g::Fuse::Controls::Video* ret41;
    ::g::Fuse::Controls::Video* ret42;
    ::g::Fuse::Controls::Video* ret43;
    ::g::Fuse::Triggers::WhileFailed::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret39), ret39), false, ::STRINGS[5/*""*/]);
    ::g::Fuse::Triggers::WhileLoading::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret40), ret40), false);
    ::g::Fuse::Triggers::WhileCompleted::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret41), ret41), false);
    ::g::Fuse::Triggers::WhilePlaying::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret42), ret42), false);
    ::g::Fuse::Triggers::WhilePaused::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret43), ret43), false);
}

// public generated VideoVisual New() [static] :648
VideoVisual* VideoVisual::New1()
{
    VideoVisual* obj4 = (VideoVisual*)uNew(VideoVisual_typeof());
    obj4->ctor_3();
    return obj4;
}
// }

}}} // ::g::Fuse::Video
