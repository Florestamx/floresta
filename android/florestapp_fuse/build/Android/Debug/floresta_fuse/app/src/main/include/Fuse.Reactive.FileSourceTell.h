// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct AsyncObject;}}}
namespace g{namespace Fuse{namespace Reactive{struct FileSourceTell;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class FileSourceTell :1676
// {
uType* FileSourceTell_typeof();
void FileSourceTell__ctor__fn(FileSourceTell* __this, ::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback);
void FileSourceTell__New1_fn(::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback, FileSourceTell** __retval);
void FileSourceTell__OnPath_fn(FileSourceTell* __this, uObject* res);

struct FileSourceTell : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback);
    void OnPath(uObject* res);
    static FileSourceTell* New1(::g::Fuse::Reactive::AsyncObject* ao, uDelegate* callback);
};
// }

}}} // ::g::Fuse::Reactive
