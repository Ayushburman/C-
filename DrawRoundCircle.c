#include <stdio.h>

int main() {
    int x, y;
    int r = 10;

    for(y = -r; y <= r; y++) {
        for(x = -2*r; x <= 2*r; x++) {

            // Adjust x scaling for terminal width
            int dx = x / 2;

            // Draw only boundary of circle
            int value = dx*dx + y*y;

            if(value >= r*r - r && value <= r*r + r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
