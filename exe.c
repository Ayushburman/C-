// tcp_client.c
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
int main() {
    int sock;
    struct sockaddr_in server;
    char message[] = "Hello Server";

    sock = socket(AF_INET, SOCK_STR


    // tcp_client.c
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int sock;
    struct sockaddr_in server;
    char message[] = "Hello Server";
    // tcp_client.c
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

    sock = socket(AF_INET, SOCK_STREAM, 0);

    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_family = AF_INET;
    server.sin_port = htons(8080);

    connect(sock, (struct sockaddr *)&server, sizeof(server));

    send(sock, message, strlen(message), 0);

    close(sock);

    return 0;
}

    connect(sock, (struct sockaddr *)&server, sizeof(server));

    send(sock, message, strlen(message), 0);

    close(sock);

    return 0;
}
