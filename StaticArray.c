#include <stdio.h>

int main() {

    // Static Array
    int arr[5] = {10, 20, 30, 40, 50};

    // Printing array elements
    printf("Static Array Elements:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
