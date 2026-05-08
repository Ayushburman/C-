/*
 * 01 — Array Basics
 * ───────────────────────────────────────────────────────────────
 * Covers  : declaration, initialization, traversal, sum
 * Compile : gcc array_basics.c -o array_basics
 * Run     : ./array_basics
 */
int main(void) {

    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("\nSum = %d\n", sum);

    return 0;
}

/*
 * 02 — Max & Min in Array
 */
#include <stdio.h>

int main(void) {

    int arr[] = {10, 25, 3, 89, 45};
    int size = 5;

    int max = arr[0], min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Max = %d\nMin = %d\n", max, min);

    return 0;
}

/*
 * 03 — Reverse Array
 */
#include <stdio.h>

int main(void) {

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Reversed array:\n");

    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
 * 04 — 2D Array (Matrix)
 */
#include <stdio.h>

int main(void) {

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Matrix:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
 * 05 — String Length (Manual)
 */
#include <stdio.h>

int main(void) {

    char str[] = "hello";
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    printf("Length = %d\n", length);

    return 0;
}


/*
 * 06 — String Copy
 */
#include <stdio.h>

int main(void) {

    char src[] = "Ayush";
    char dest[20];

    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    printf("Copied string: %s\n", dest);

    return 0;
}

/*
 * 07 — String Compare
 */
#include <stdio.h>
#include <string.h>

int main(void) {

    char a[] = "apple";
    char b[] = "banana";

    int result = strcmp(a, b);

    if (result == 0)
        printf("Equal\n");
    else if (result < 0)
        printf("a < b\n");
    else
        printf("a > b\n");

    return 0;
}


/*
 * 08 — Count Vowels
 */
#include <stdio.h>

int main(void) {

    char str[] = "hello world";
    int count = 0;

    for (int i = 0; str[i]; i++) {
        char ch = str[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            count++;
        }
    }

    printf("Vowels = %d\n", count);

    return 0;
}

/*
 * 09 — Reverse String
 */
#include <stdio.h>
#include <string.h>

int main(void) {

    char str[] = "hello";
    int len = strlen(str);

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

/*
 * 10 — Palindrome Check
 */
#include <stdio.h>
#include <string.h>

int main(void) {

    char str[] = "madam";
    int len = strlen(str);
    int flag = 1;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

/*
 * 11 — Bubble Sort
 */
#include <stdio.h>

int main(void) {

    int arr[] = {5, 2, 9, 1, 3};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
 * 12 — Frequency Count
 */
#include <stdio.h>

int main(void) {

    int arr[] = {1, 2, 2, 3, 1};
    int n = 5;

    for (int i = 0; i < n; i++) {

        int count = 1;

        if (arr[i] == -1) continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}
