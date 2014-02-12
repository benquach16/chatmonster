#ifndef _SERVER_H_
#define _SERVER_H_


#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <iostream>
#include <string>
#include <map>

using namespace std;

struct Account
{
    int id;
    string name, string pwd;
};

class Server
{
public:
    Server();
    ~Server();

    void addAccount(string name, string pwd);
protected:
    //save the file descriptor
    int sockfd;
    int newfd;
    //save the ID of the currently connected client
    int currentClient;
    //account names are saved here
    map<string, string> accounts;
};

#endif
