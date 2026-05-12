#include <stdio.h>

int main() {

    int arr[100], n, i;
    int pos, value, found = 0;
    int sum = 0, max, min;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // DISPLAY
    printf("\nArray Elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // INSERTION
    printf("\n\nEnter position to insert: ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    printf("\nAfter Insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // DELETION
    printf("\n\nEnter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("\nAfter Deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // SEARCHING
    printf("\n\nEnter value to search: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Element not found\n");
    }

    // UPDATE
    printf("\nEnter position to update: ");
    scanf("%d", &pos);

    printf("Enter new value: ");
    scanf("%d", &value);

    arr[pos - 1] = value;

    printf("\nAfter Updation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // SUM
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("\n\nSum = %d\n", sum);

    // MAXIMUM & MINIMUM
    max = min = arr[0];

    for(i = 1; i < n; i++) {

        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    // REVERSE
    printf("\nReverse Array:\n");

    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
