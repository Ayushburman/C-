#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

// Function for delay
void delay(int seconds) {
#ifdef _WIN32
    Sleep(seconds * 1000);
#else
    sleep(seconds);
#endif
}

int main() {

    while(1) {

        // RED Light
        printf("\n🔴 RED LIGHT - STOP\n");
        delay(5);

        // GREEN Light
        printf("\n🟢 GREEN LIGHT - GO\n");
        delay(5);

        // YELLOW Light
        printf("\n🟡 YELLOW LIGHT - WAIT\n");
        delay(2);
    }

    return 0;
}
