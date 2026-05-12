#include <stdio.h>

int main() {
    // Arrays
    int a[4] = {1, 2, 3, 4};
    int b[4] = {2, 4, 6, 8};
    int c[4] = {10, 12, 14, 16};

    // Matrix with 3 rows and 4 columns
    int matrix[3][4];

    // Store arrays into matrix
    for(int i = 0; i < 4; i++) {
        matrix[0][i] = a[i];
        matrix[1][i] = b[i];
        matrix[2][i] = c[i];
    }

    // Print matrix
    printf("Matrix:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
