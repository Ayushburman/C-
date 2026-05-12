#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    // Size input
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    int *arr = (int *)malloc(n * sizeof(int));

    // Check memory allocation
    if(arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Input elements
    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("Dynamic Array Elements:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);

    return 0;
}
