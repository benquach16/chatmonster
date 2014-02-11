#include "client.h" 

int main()
{
    Client c;

    //dont get out unless credentials are correct
    while(!c.login());

    
    return 0;
}


