#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 6;

    for(i = 1; i <= rows; i++) {

        // spaces
        for(space = rows; space > i; space--)
            printf(" ");

        // stars and hollow spaces
        for(j = 1; j <= (2*i - 1); j++) {

            if(j == 1 || j == (2*i - 1) || i == rows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
