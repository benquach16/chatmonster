#ifndef _CLIENT_H_
#define _CLIENT_H_


#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <iostream>

using namespace std; 

class Client
{
public:
    static int id;
    Client();
    ~Client();
    void connect();
    bool login();
    
protected:
    int sockfd;

    bool logincheck(string username, string password, string temp);
};

#endif
