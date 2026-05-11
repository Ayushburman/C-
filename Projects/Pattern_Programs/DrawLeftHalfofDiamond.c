#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    // Upper half
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // Lower half
    for(i = rows - 1; i >= 1; i--) {
        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
