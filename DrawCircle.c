#include <stdio.h>

int main() {
    int x, y;
    int r = 10; // radius

    for(y = -r; y <= r; y++) {
        for(x = -r; x <= r; x++) {

            // Circle equation: x² + y² <= r²
            if(x*x + y*y <= r*r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
