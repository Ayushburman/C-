
/* 10 C Programs Used in Linux / Networking / Cybersecurity
   These are beginner-to-intermediate level programs commonly related 
   to Linux systems, networking, sockets, packet analysis, process 
   handling, and cybersecurity concepts.
*/

// 1. TCP Client (Socket Programming)  // tcp_client.c
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int sock;
    struct sockaddr_in server;
    char message[] = "Hello Server";

    sock = socket(AF_INET, SOCK_STREAM, 0);

    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_family = AF_INET;
    server.sin_port = htons(8080);

    connect(sock, (struct sockaddr *)&server, sizeof(server));

    send(sock, message, strlen(message), 0);

    close(sock);

    return 0;
}
