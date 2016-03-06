// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Sockets/0.24.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Net.Sockets.Socket.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{namespace Berkeley{struct Socket;}}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{
namespace Berkeley{

// internal sealed extern class Socket :204
// {
::g::Uno::Net::Sockets::Socket_type* Socket_typeof();
void Socket__Receive1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval);
void Socket__Send1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval);

struct Socket : ::g::Uno::Net::Sockets::Socket
{
    int _handle;
};
// }

}}}}} // ::g::Uno::Net::Sockets::Berkeley
