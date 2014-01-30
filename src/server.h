#ifndef _SERVER_H_
#define _SERVER_H_


#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <iostream>
#include <string>
#include <map>

using namespace std;


class Server
{
public:
    Server();
    ~Server();

    void addAccount(string name, string pwd);
protected:
    //save the file descriptor
    int sockfd;
    //account names are saved here
    map<string, string> accounts;
};

#endif
