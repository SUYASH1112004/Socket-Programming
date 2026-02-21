// Server Code

#include<stdio.h>       // printf , scanf
#include<stdlib.h>      // malloc , free
#include<sys/socket.h>  // socket , bind , listen , accept , connect
#include<string.h>      // memset , memcmp
#include<fcntl.h>       // creat , unlink
#include<unistd.h>      // read , write , open
#include<netinet/in.h>  // sockaddr_in , htons


/*
    struct sockaddr 
    {
        sa_family_t sa_family;
        char sa_data[14];
    };

*/



int main()
{
    int ServerSocket = 0;
    int iRet = 0;
    int port = 11000;
    int ClientSocketfd = 0;

    char * message = "Jay Ganesh from server";

    struct sockaddr_in ServerAddr;

    // Step : 1 Create TCP Socket
    
    ServerSocket = socket(AF_INET,SOCK_STREAM,0);


    if(ServerSocket < 0)
    {
        printf("Unable to create socket \n");
        return -1;
    }

    printf("Socket gets created successfully with fd : %d \n",ServerSocket);

    // Step 2 : Attach the socket to Ip address and port number

    // set memory with 0
    memset(&ServerAddr,0,sizeof(ServerAddr));

    ServerAddr.sin_family = AF_INET;
    ServerAddr.sin_addr.s_addr = INADDR_ANY;
    ServerAddr.sin_port = htons(port);

    iRet = bind(ServerSocket,(struct sockaddr*)&ServerAddr,sizeof(ServerAddr));

    if(iRet == -1)
    {
        printf("Bind system call fail\n");
        close(ServerSocket);
        return -1;
    }

    printf("Bind operation with socket is successfull\n");  
    
    //Step 3 : Mark the socket as  a active socket

    iRet = listen(ServerSocket,11);

    if(iRet == -1)
    {
        printf("Unable to convert socket in listen mode\n");
        close(ServerSocket);

        return -1;
    }

    printf("Server is live at port %d\n",port);


    //Step 4 : Accept new socket request 

    ClientSocketfd = accept(ServerSocket,NULL,NULL);

    if(ClientSocketfd == -1)
    {
        printf("Unable to accept request from client \n");
        return -1;
    }

    printf("Request accept by server\n");

    //Step 5 : Send the message to client 
    write(ClientSocketfd,message,strlen(message));

    //Step 6 : close all resources
    close(ServerSocket);
    close(ClientSocketfd);


    printf("Terminating the server application \n");

    return 0;
}