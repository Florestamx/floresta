// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.24.6/AndroidImpl/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace com{namespace fuse{namespace Native{struct Camera;}}}}}

namespace g{
namespace Android{
namespace com{
namespace fuse{
namespace Native{

// public sealed extern class Camera :9
// {
::g::Android::Base::Wrappers::JWrapper_type* Camera_typeof();
void Camera___Init1_fn();
void Camera__TakePicture_fn(uObject* arg0);
void Camera__TakePicture_IMPL_44277_fn(uObject* arg0_);

struct Camera : ::g::Android::Base::Wrappers::JWrapper
{
    static jclass _javaClass1_;
    static jclass& _javaClass1() { return _javaClass1_; }
    static jmethodID TakePicture_44277_ID_;
    static jmethodID& TakePicture_44277_ID() { return TakePicture_44277_ID_; }

    static void _Init1();
    static void TakePicture(uObject* arg0);
    static void TakePicture_IMPL_44277(uObject* arg0_);
};
// }

}}}}} // ::g::Android::com::fuse::Native
