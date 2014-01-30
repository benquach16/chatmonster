#include "client.h"

const int PORT = 6666;

Client::Client() : sockfd(0)
{
    struct sockaddr_in server_addr;
    struct hostent *he;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
}

Client::~Client()
{
}
