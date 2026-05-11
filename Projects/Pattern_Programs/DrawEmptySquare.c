#include <stdio.h>

int main() {
    int i, j;
    int size = 6;

    for(i = 1; i <= size; i++) {
        for(j = 1; j <= size; j++) {

            // Print border only
            if(i == 1 || i == size || j == 1 || j == size)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}
