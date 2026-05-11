#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 6;

    for(i = rows; i >= 1; i--) {

        // spaces
        for(space = rows; space > i; space--)
            printf(" ");

        // stars
        for(j = 1; j <= (2*i-1); j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
