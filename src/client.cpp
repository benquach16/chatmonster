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


/*
 * If temp = n then new account is made return 0
 * This function will send username and password to server to check 
 * if the credentials are correct
 * The server will return either a 0 for faliure or 1 for pass
 */
bool Client::logincheck( const string username, const string password, const string temp)
 {
     char* pass; 

     //write either login or new account
     write(sockfd, temp.c_str(), sizeof(temp));
     // write username
     write(sockfd, username.c_str(), sizeof(username));
     // write password
     write(sockfd, password.c_str(), sizeof(password));
     
     //read the result
     read(sockfd, pass, 1);
     
     // if 1 then true- pass, 0 then false- fail
     return *pass == '1';
 }

/*
  By the time this function is called, the client is already connected to
  the server, and so the user must log in. The username and password
  entered here will be compared to the actual ones stored in the server.
  If they don't match then it is an invalid login. We could then 
 */
bool Client::login()
{
    
    string username;
    string password;
    string temp; 
    bool newaccount;


    cout << "Login or new account? (l/n)"; // l for login, n for new
    cin >> temp;
    cout << "Enter Username: ";
    cin >> username; 
    cout << "Enter Password: ";
    cin >> password; 
  
    // Check credentials and if its new account or not,
    //if they pass or new account successful, then return true
    return logincheck(username, password, temp);
    
}

