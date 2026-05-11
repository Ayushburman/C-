#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    // Upper part
    for(i = 1; i <= rows; i++) {

        for(space = rows; space > i; space--)
            printf(" ");

        for(j = 1; j <= (2*i - 1); j++)
            printf("*");

        printf("\n");
    }

    // Lower part
    for(i = rows - 1; i >= 1; i--) {

        for(space = rows; space > i; space--)
            printf(" ");

        for(j = 1; j <= (2*i - 1); j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
