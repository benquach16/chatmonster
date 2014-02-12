#include "server.h"

const int PORT = 6666;

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
	//establish connection to a client
	struct sockaddr_in client_addr;
	int sin_zie = sizeof(sockaddr_in);
	newfd = accept(sockfd, (struct sockaddr*)&client_addr,
		       (socklen_t*)&sin_size);
	int i = fork();
	switch(i)
	{
	case 0:
	{
	    //we have a child
	    //since its a child it gets to connect to a clientx
	    break;
	}
	case -1:
	{
	    //fork failed
	    cerr << "Fork failed" << endl;
	    break;
	}
	default:
	{
	    close(sockfd);
	    break;
	}

	}

    }
}


Server::~Server()
{

}
