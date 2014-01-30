#include "client.h"

const int PORT = 6666;
const char HOSTNAME[] = "localhost";

Client::Client() : sockfd(0)
{
    //some code to connect to a server
    struct sockaddr_in server_addr;
    struct hostent *he;
    he = gethostbyname(HOSTNAME);
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr = *((struct in_addr*)->h_addr);

    connect(sockfd, (struct sockaddr*)&server_addr, sizeof(struct sockaddr));
}

Client::~Client()
{
}

void Client::connect()
{
    
}
