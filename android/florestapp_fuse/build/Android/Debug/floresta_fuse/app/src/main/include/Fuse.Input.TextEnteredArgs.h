// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.24.6/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.NodeEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct TextEnteredArgs;}}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class TextEnteredArgs :1478
// {
::g::Fuse::NodeEventArgs_type* TextEnteredArgs_typeof();
void TextEnteredArgs__Serialize_fn(TextEnteredArgs* __this, uObject* s);
void TextEnteredArgs__get_Text_fn(TextEnteredArgs* __this, uString** __retval);
void TextEnteredArgs__set_Text_fn(TextEnteredArgs* __this, uString* value);

struct TextEnteredArgs : ::g::Fuse::NodeEventArgs
{
    uStrong<uString*> _Text;

    uString* Text();
    void Text(uString* value);
};
// }

}}} // ::g::Fuse::Input
