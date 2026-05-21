

    connect(sock, (struct sockaddr *)&server, sizeof(server));

    send(sock, message, strlen(message), 0);
int main() {
    int sock;
    struct sockaddr_in server;
    char message[] = "Hello Server";

    sock = socket(AF_INET, SOCK_STR
    close(sock);
int main() {
    int sock;
    struct sockaddr_in server;
    char message[] = "Hello Server";

    sock = socket(AF_INET, SOCK_STR
    return 0;
}

    connect(sock, (struct sockaddr *)&server, sizeof(server));

    send(sock, message, strlen(message), 0);

    close(sock);

    return 0;
}
