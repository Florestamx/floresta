// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Experimental.Physics.DestinationSimulation-1.h>
#include <Experimental.Physics.MotionSimulation-1.h>
#include <Experimental.Physics.Simulation.h>
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Physics{struct AngularAdapter;}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender;}}}

namespace g{
namespace Experimental{
namespace Physics{

// public sealed class AngularAdapter<T> :12
// {
struct AngularAdapter_type : uType
{
    ::g::Experimental::Physics::DestinationSimulation interface0;
    ::g::Experimental::Physics::MotionSimulation interface1;
    ::g::Experimental::Physics::Simulation interface2;
};

AngularAdapter_type* AngularAdapter_typeof();
void AngularAdapter__ctor__fn(AngularAdapter* __this, uObject* impl);
void AngularAdapter__get_Destination_fn(AngularAdapter* __this, uTRef __retval);
void AngularAdapter__set_Destination_fn(AngularAdapter* __this, void* value);
void AngularAdapter__get_IsStatic_fn(AngularAdapter* __this, bool* __retval);
void AngularAdapter__New1_fn(uType* __type, uObject* impl, AngularAdapter** __retval);
void AngularAdapter__get_Position_fn(AngularAdapter* __this, uTRef __retval);
void AngularAdapter__set_Position_fn(AngularAdapter* __this, void* value);
void AngularAdapter__Reset_fn(AngularAdapter* __this, void* value);
void AngularAdapter__Update_fn(AngularAdapter* __this, double* elapsed);
void AngularAdapter__get_Velocity_fn(AngularAdapter* __this, uTRef __retval);
void AngularAdapter__set_Velocity_fn(AngularAdapter* __this, void* value);
void AngularAdapter__Wrap_fn(AngularAdapter* __this);

struct AngularAdapter : uObject
{
    uStrong< ::g::Fuse::Internal::ScalarBlender*> _blender;
    uStrong<uObject*> _impl;

    void ctor_(uObject* impl);
    template<class T>
    T Destination() { T __retval; return AngularAdapter__get_Destination_fn(this, &__retval), __retval; }
    template<class T>
    void Destination(T value) { AngularAdapter__set_Destination_fn(this, uConstrain(__type->T(0), value)); }
    bool IsStatic();
    template<class T>
    T Position() { T __retval; return AngularAdapter__get_Position_fn(this, &__retval), __retval; }
    template<class T>
    void Position(T value) { AngularAdapter__set_Position_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    void Reset(T value) { AngularAdapter__Reset_fn(this, uConstrain(__type->T(0), value)); }
    void Update(double elapsed);
    template<class T>
    T Velocity() { T __retval; return AngularAdapter__get_Velocity_fn(this, &__retval), __retval; }
    template<class T>
    void Velocity(T value) { AngularAdapter__set_Velocity_fn(this, uConstrain(__type->T(0), value)); }
    void Wrap();
    static AngularAdapter* New1(uType* __type, uObject* impl);
};
// }

}}} // ::g::Experimental::Physics
