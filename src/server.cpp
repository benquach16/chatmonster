#include "server.h"

Server::Server() : sockfd(0)
{
    //accept client connections here
    struct sockaddr_in server_addr;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = INADDR_ANY;
    
    bind(sockfd, (struct sockaddr*)&server_addr, sizeof(sockaddr));
    
    
    //we need to fork to accept more clients
    while(1)
    {
    }
}


Server::~Server()
{

}
