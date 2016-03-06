// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.24.6/WebView/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface BufferedWebViewCall :533
// {
uInterfaceType* BufferedWebViewCall_typeof();

struct BufferedWebViewCall
{
    void(*fp_Apply)(uObject*, uObject*);
    static void Apply(const uInterface& __this, uObject* wv) { __this.VTable<BufferedWebViewCall>()->fp_Apply(__this, wv); }
};
// }

}}} // ::g::Fuse::Controls
