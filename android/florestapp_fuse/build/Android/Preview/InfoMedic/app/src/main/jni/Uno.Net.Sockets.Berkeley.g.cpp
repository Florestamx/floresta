// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <arpa/inet.h>
#include <errno.h>
#include <netdb.h>
#include <netinet/in.h>
#include <poll.h>
#include <Socket.android.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <unistd.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.Berkeley.bsd_socket.h>
#include <Uno.Net.Sockets.Berkeley.Socket.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.SelectMode.h>
#include <Uno.Net.Sockets.SocketException.h>
#include <Uno.Net.Sockets.SocketShutdown.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.Object.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
static uString* STRINGS[7];
static uType* TYPES[5];

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{
namespace Berkeley{

// ..\..\ProgramData\Uno\Packages\Uno.Net.Sockets\0.24.0\$.uno(386)
// ----------------------------------------------------------------

// internal static extern class bsd_socket :386
// {
uClassType* bsd_socket_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Sockets.Berkeley.bsd_socket", options);
    ::STRINGS[0] = uString::Const("Invalid value for AddressFamily");
    ::STRINGS[1] = uString::Const("Invalid value for ProtocolType");
    ::STRINGS[2] = uString::Const("Invalid value for SelectMode");
    ::STRINGS[3] = uString::Const("Invalid value for SocketShutdown");
    ::STRINGS[4] = uString::Const("Invalid value for SocketType");
    return type;
}

// public static extern int Accept(int socketHandle) :415
void bsd_socket__Accept_fn(int* socketHandle_, int* __retval)
{
    *__retval = bsd_socket::Accept(*socketHandle_);
}

// public static extern int Bind(int socketHandle, uint address, int port) :397
void bsd_socket__Bind_fn(int* socketHandle_, uint32_t* address_, int* port_, int* __retval)
{
    *__retval = bsd_socket::Bind(*socketHandle_, *address_, *port_);
}

// public static int Close(int socketHandle) :409
void bsd_socket__Close_fn(int* socketHandle, int* __retval)
{
    *__retval = bsd_socket::Close(*socketHandle);
}

// public static extern int Connect(int socketHandle, uint address, int port) :394
void bsd_socket__Connect_fn(int* socketHandle_, uint32_t* address_, int* port_, int* __retval)
{
    *__retval = bsd_socket::Connect(*socketHandle_, *address_, *port_);
}

// public static extern string GetError() :442
void bsd_socket__GetError_fn(uString** __retval)
{
    *__retval = bsd_socket::GetError();
}

// public static int GetFamily(Uno.Net.Sockets.AddressFamily addressFamily) :478
void bsd_socket__GetFamily_fn(int* addressFamily, int* __retval)
{
    *__retval = bsd_socket::GetFamily(*addressFamily);
}

// public static int GetProtocol(Uno.Net.Sockets.ProtocolType protocolType) :500
void bsd_socket__GetProtocol_fn(int* protocolType, int* __retval)
{
    *__retval = bsd_socket::GetProtocol(*protocolType);
}

// public static short GetSelectMode(Uno.Net.Sockets.SelectMode mode) :461
void bsd_socket__GetSelectMode_fn(int* mode, int16_t* __retval)
{
    *__retval = bsd_socket::GetSelectMode(*mode);
}

// public static int GetSocketShudown(Uno.Net.Sockets.SocketShutdown how) :444
void bsd_socket__GetSocketShudown_fn(int* how, int* __retval)
{
    *__retval = bsd_socket::GetSocketShudown(*how);
}

// public static int GetType(Uno.Net.Sockets.SocketType socketType) :489
void bsd_socket__GetType_fn(int* socketType, int* __retval)
{
    *__retval = bsd_socket::GetType(*socketType);
}

// public static int Listen(int socketHandle, int backlog) :399
void bsd_socket__Listen_fn(int* socketHandle, int* backlog, int* __retval)
{
    *__retval = bsd_socket::Listen(*socketHandle, *backlog);
}

// public static extern int Poll(int socketHandle, short selectMode, int milliseconds) :439
void bsd_socket__Poll_fn(int* socketHandle_, int16_t* selectMode_, int* milliseconds_, int* __retval)
{
    *__retval = bsd_socket::Poll(*socketHandle_, *selectMode_, *milliseconds_);
}

// public static extern int Receive(int socketHandle, byte[] buffer, int offset, int length) :424
void bsd_socket__Receive_fn(int* socketHandle_, uArray* buffer_, int* offset_, int* length_, int* __retval)
{
    *__retval = bsd_socket::Receive(*socketHandle_, buffer_, *offset_, *length_);
}

// public static extern int Send(int socketHandle, byte[] buffer, int offset, int length) :421
void bsd_socket__Send1_fn(int* socketHandle_, uArray* buffer_, int* offset_, int* length_, int* __retval)
{
    *__retval = bsd_socket::Send1(*socketHandle_, buffer_, *offset_, *length_);
}

// public static int Shutdown(int socketHandle, int how) :404
void bsd_socket__Shutdown_fn(int* socketHandle, int* how, int* __retval)
{
    *__retval = bsd_socket::Shutdown(*socketHandle, *how);
}

// public static int socket(int family, int type, int protocol) :388
void bsd_socket__socket_fn(int* family, int* type, int* protocol, int* __retval)
{
    *__retval = bsd_socket::socket(*family, *type, *protocol);
}

// public static extern int Accept(int socketHandle) [static] :415
int bsd_socket::Accept(int socketHandle_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Accept(int)");
    struct sockaddr_in sockAddr;
    memset(&sockAddr, 0, sizeof(struct sockaddr_in));
    socklen_t len = sizeof(struct sockaddr_in);
    return accept(socketHandle_, (struct sockaddr*)&sockAddr, &len);
}

// public static extern int Bind(int socketHandle, uint address, int port) [static] :397
int bsd_socket::Bind(int socketHandle_, uint32_t address_, int port_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Bind(int,uint,int)");
    int socketFD = socketHandle_;
    in_addr_t address = address_;
    int port = port_;
    
    struct sockaddr_in sockAddr;
    memset(&sockAddr, 0, sizeof(struct sockaddr_in));
    
    sockAddr.sin_family = AF_INET;
    sockAddr.sin_addr.s_addr = address;
    sockAddr.sin_port = htons(port);
    
    return bind(socketFD, (struct sockaddr*)&sockAddr, sizeof(sockAddr));
}

// public static int Close(int socketHandle) [static] :409
int bsd_socket::Close(int socketHandle)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Close(int)");
    return ::close(socketHandle);
}

// public static extern int Connect(int socketHandle, uint address, int port) [static] :394
int bsd_socket::Connect(int socketHandle_, uint32_t address_, int port_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Connect(int,uint,int)");
    int socketFD = socketHandle_;
    in_addr_t address = address_;
    int port = port_;
    
    struct sockaddr_in sockAddr;
    
    memset(&sockAddr, 0, sizeof(struct sockaddr_in));
    
    sockAddr.sin_family = AF_INET;
    sockAddr.sin_addr.s_addr = address;
    sockAddr.sin_port = htons(port);
    
    return connect(socketFD, (struct sockaddr*)&sockAddr, sizeof(sockAddr));
}

// public static extern string GetError() [static] :442
uString* bsd_socket::GetError()
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetError()");
    char * error = strerror(errno);
    return ::uNewStringUtf8(error);
}

// public static int GetFamily(Uno.Net.Sockets.AddressFamily addressFamily) [static] :478
int bsd_socket::GetFamily(int addressFamily)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetFamily(Uno.Net.Sockets.AddressFamily)");

    switch (addressFamily)
    {
        case 2:
            return AF_INET;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[0/*"Invalid val...*/]));
}

// public static int GetProtocol(Uno.Net.Sockets.ProtocolType protocolType) [static] :500
int bsd_socket::GetProtocol(int protocolType)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetProtocol(Uno.Net.Sockets.ProtocolType)");

    switch (protocolType)
    {
        case 6:
            return PF_UNSPEC;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"Invalid val...*/]));
}

// public static short GetSelectMode(Uno.Net.Sockets.SelectMode mode) [static] :461
int16_t bsd_socket::GetSelectMode(int mode)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetSelectMode(Uno.Net.Sockets.SelectMode)");

    switch (mode)
    {
        case 2:
            return POLLERR;
        case 0:
            return POLLIN;
        case 1:
            return POLLOUT;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[2/*"Invalid val...*/]));
}

// public static int GetSocketShudown(Uno.Net.Sockets.SocketShutdown how) [static] :444
int bsd_socket::GetSocketShudown(int how)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetSocketShudown(Uno.Net.Sockets.SocketShutdown)");

    switch (how)
    {
        case 2:
            return SHUT_RDWR;
        case 0:
            return SHUT_RD;
        case 1:
            return SHUT_WR;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[3/*"Invalid val...*/]));
}

// public static int GetType(Uno.Net.Sockets.SocketType socketType) [static] :489
int bsd_socket::GetType(int socketType)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetType(Uno.Net.Sockets.SocketType)");

    switch (socketType)
    {
        case 1:
            return SOCK_STREAM;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[4/*"Invalid val...*/]));
}

// public static int Listen(int socketHandle, int backlog) [static] :399
int bsd_socket::Listen(int socketHandle, int backlog)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Listen(int,int)");
    return ::listen(socketHandle, backlog);
}

// public static extern int Poll(int socketHandle, short selectMode, int milliseconds) [static] :439
int bsd_socket::Poll(int socketHandle_, int16_t selectMode_, int milliseconds_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Poll(int,short,int)");
    int socketFD = socketHandle_;
    short selectMode = selectMode_;
    int millis = milliseconds_;
    
    struct pollfd pf;
    memset(&pf, 0, sizeof(struct pollfd));
    
    pf.fd = socketFD;
    pf.events |= selectMode;
    
    int result = poll(&pf, 1, millis);
    
    if (0 == result)
    	return 0;
    
    if (-1 == result)
    	return -1;
    
    return ((pf.revents & selectMode) == selectMode);
}

// public static extern int Receive(int socketHandle, byte[] buffer, int offset, int length) [static] :424
int bsd_socket::Receive(int socketHandle_, uArray* buffer_, int offset_, int length_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Receive(int,byte[],int,int)");
    int socketFD = socketHandle_;
    char * buf = (char*)(buffer_->Ptr());
                        int offset = offset_;
    int length = length_;
    
    return recv(socketFD, (void*)(buf + offset), length, 0);
}

// public static extern int Send(int socketHandle, byte[] buffer, int offset, int length) [static] :421
int bsd_socket::Send1(int socketHandle_, uArray* buffer_, int offset_, int length_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Send(int,byte[],int,int)");
    int socketFD = socketHandle_;
    char * buf = (char*)(buffer_->Ptr());
    int offset = offset_;
    int length = length_;
    
    return send(socketFD, (void*)(buf + offset), length, 0);
}

// public static int Shutdown(int socketHandle, int how) [static] :404
int bsd_socket::Shutdown(int socketHandle, int how)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Shutdown(int,int)");
    return ::shutdown(socketHandle, how);
}

// public static int socket(int family, int type, int protocol) [static] :388
int bsd_socket::socket(int family, int type, int protocol)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "socket(int,int,int)");
    return ::socket(family, type, protocol);
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Net.Sockets\0.24.0\$.uno(204)
// ----------------------------------------------------------------

// internal sealed extern class Socket :204
// {
::g::Uno::Net::Sockets::Socket_type* Socket_typeof()
{
    static uSStrong< ::g::Uno::Net::Sockets::Socket_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Socket);
    options.TypeSize = sizeof(::g::Uno::Net::Sockets::Socket_type);
    type = (::g::Uno::Net::Sockets::Socket_type*)uClassType::New("Uno.Net.Sockets.Berkeley.Socket", options);
    type->SetBase(::g::Uno::Net::Sockets::Socket_typeof());
    type->fp_Accept = (void(*)(::g::Uno::Net::Sockets::Socket*, ::g::Uno::Net::Sockets::Socket**))Socket__Accept_fn;
    type->fp_Bind = (void(*)(::g::Uno::Net::Sockets::Socket*, ::g::Uno::Net::EndPoint*))Socket__Bind_fn;
    type->fp_Close = (void(*)(::g::Uno::Net::Sockets::Socket*))Socket__Close_fn;
    type->fp_Connect1 = (void(*)(::g::Uno::Net::Sockets::Socket*, ::g::Uno::Net::EndPoint*))Socket__Connect1_fn;
    type->fp_Listen = (void(*)(::g::Uno::Net::Sockets::Socket*, int*))Socket__Listen_fn;
    type->fp_Poll = (void(*)(::g::Uno::Net::Sockets::Socket*, int*, int*, bool*))Socket__Poll_fn;
    type->fp_Receive1 = (void(*)(::g::Uno::Net::Sockets::Socket*, uArray*, int*, int*, int*))Socket__Receive1_fn;
    type->fp_Send1 = (void(*)(::g::Uno::Net::Sockets::Socket*, uArray*, int*, int*, int*))Socket__Send1_fn;
    type->fp_Shutdown = (void(*)(::g::Uno::Net::Sockets::Socket*, int*))Socket__Shutdown_fn;
    ::STRINGS[5] = uString::Const("EndPoint not supported: ");
    ::STRINGS[6] = uString::Const("Offset and length out of range");
    ::TYPES[0] = ::g::Uno::Net::Sockets::Socket_typeof();
    ::TYPES[1] = ::g::Uno::Net::IPEndPoint_typeof();
    ::TYPES[2] = ::g::Uno::Net::IPAddress_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Sockets::Berkeley::Socket, _handle), 0);
    return type;
}

// private Socket(int handle) :245
void Socket__ctor_1_fn(Socket* __this, int* handle)
{
    __this->ctor_1(*handle);
}

// public override sealed Uno.Net.Sockets.Socket Accept() :353
void Socket__Accept_fn(Socket* __this, ::g::Uno::Net::Sockets::Socket** __retval)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Accept()");
    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Accept(__this->_handle);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));

    return *__retval = Socket::New1(result), void();
}

// public override sealed void Bind(Uno.Net.EndPoint endPoint) :314
void Socket__Bind_fn(Socket* __this, ::g::Uno::Net::EndPoint* endPoint)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Bind(Uno.Net.EndPoint)");
    ::g::Uno::Net::IPEndPoint* ip = uAs< ::g::Uno::Net::IPEndPoint*>(endPoint, ::TYPES[1/*Uno.Net.IPEndPoint*/]);

    if (ip != NULL)
    {
        int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Bind(__this->_handle, uPtr(uPtr(ip)->Address())->Address(), uPtr(ip)->Port());

        if (-1 == result)
            U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));
    }
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[5/*"EndPoint no...*/], endPoint)));
}

// public override sealed void Close() :373
void Socket__Close_fn(Socket* __this)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Close()");
    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Close(__this->_handle);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));
}

// public override sealed void Connect(Uno.Net.EndPoint endPoint) :250
void Socket__Connect1_fn(Socket* __this, ::g::Uno::Net::EndPoint* endPoint)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Connect(Uno.Net.EndPoint)");
    ::g::Uno::Net::IPEndPoint* ip = uAs< ::g::Uno::Net::IPEndPoint*>(endPoint, ::TYPES[1/*Uno.Net.IPEndPoint*/]);

    if (ip != NULL)
    {
        int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Connect(__this->_handle, uPtr(uPtr(ip)->Address())->Address(), uPtr(ip)->Port());

        if (-1 == result)
            U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));
    }
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[5/*"EndPoint no...*/], endPoint)));
}

// public static Uno.Net.Sockets.Berkeley.Socket Create(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) :207
void Socket__Create1_fn(int* addressFamily, int* socketType, int* protocolType, Socket** __retval)
{
    *__retval = Socket::Create1(*addressFamily, *socketType, *protocolType);
}

// public override sealed void Listen(int backlog) :332
void Socket__Listen_fn(Socket* __this, int* backlog)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Listen(int)");
    int backlog_ = *backlog;
    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Listen(__this->_handle, backlog_);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));
}

// private Socket New(int handle) :245
void Socket__New1_fn(int* handle, Socket** __retval)
{
    *__retval = Socket::New1(*handle);
}

// public override sealed bool Poll(int milliseconds, Uno.Net.Sockets.SelectMode mode) :341
void Socket__Poll_fn(Socket* __this, int* milliseconds, int* mode, bool* __retval)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Poll(int,Uno.Net.Sockets.SelectMode)");
    int mode_ = *mode;
    int milliseconds_ = *milliseconds;
    int16_t selectMode = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetSelectMode(mode_);
    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Poll(__this->_handle, selectMode, milliseconds_);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));

    return *__retval = result > 0, void();
}

// public override sealed int Receive(byte[] buffer, int offset, int length) :298
void Socket__Receive1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Receive(byte[],int,int)");
    int offset_ = *offset;
    int length_ = *length;

    if ((offset_ + length_) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[6/*"Offset and ...*/]));

    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Receive(__this->_handle, buffer, offset_, length_);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));

    return *__retval = result, void();
}

// public override sealed int Send(byte[] buffer, int offset, int length) :281
void Socket__Send1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Send(byte[],int,int)");
    int offset_ = *offset;
    int length_ = *length;
    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Send1(__this->_handle, buffer, offset_, length_);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));

    return *__retval = result, void();
}

// public override sealed void Shutdown(Uno.Net.Sockets.SocketShutdown how) :363
void Socket__Shutdown_fn(Socket* __this, int* how)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Shutdown(Uno.Net.Sockets.SocketShutdown)");
    int how_ = *how;
    int shutdownHow = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetSocketShudown(how_);
    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Shutdown(__this->_handle, shutdownHow);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));
}

// private Socket(int handle) [instance] :245
void Socket::ctor_1(int handle)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", ".ctor(int)");
    ctor_();
    _handle = handle;
}

// public static Uno.Net.Sockets.Berkeley.Socket Create(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) [static] :207
Socket* Socket::Create1(int addressFamily, int socketType, int protocolType)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Create(Uno.Net.Sockets.AddressFamily,Uno.Net.Sockets.SocketType,Uno.Net.Sockets.ProtocolType)");
    int family = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetFamily(addressFamily);
    int type = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetType(socketType);
    int protocol = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetProtocol(protocolType);
    int handle = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::socket(family, type, protocol);

    if (-1 == handle)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));

    return Socket::New1(handle);
}

// private Socket New(int handle) [static] :245
Socket* Socket::New1(int handle)
{
    Socket* obj1 = (Socket*)uNew(Socket_typeof());
    obj1->ctor_1(handle);
    return obj1;
}
// }

}}}}} // ::g::Uno::Net::Sockets::Berkeley
