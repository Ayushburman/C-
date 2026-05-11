#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for(i = 1; i <= rows; i++) {

        // spaces
        for(space = 1; space < i; space++)
            printf(" ");

        // stars
        for(j = 1; j <= rows; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
