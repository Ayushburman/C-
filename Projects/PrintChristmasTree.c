#include <stdio.h>

int main() {
    int i, j, space;

    // Tree leaves
    for(i = 1; i <= 5; i++) {

        for(space = 5; space > i; space--)
            printf(" ");

        for(j = 1; j <= (2*i-1); j++)
            printf("*");

        printf("\n");
    }

    // Tree trunk
    printf("    |\n");
    printf("    |\n");

    return 0;
}
