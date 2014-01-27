#ifndef _CLIENT_H_
#define _CLIENT_H_


#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>

class Client
{
public:
    Client();
    ~Client();
    void connect();
protected:
    
};

#endif
