#include <stdio.h>

int main()
{
    int choice;

    printf("=== Asymptotic Complexity Checker ===\n");

    printf("\nChoose Operation Type:\n");
    printf("1. Single Loop\n");
    printf("2. Nested Loop\n");
    printf("3. Binary Search\n");
    printf("4. Triple Nested Loop\n");
    printf("5. Constant Operation\n");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    printf("\nTime Complexity: ");

    switch(choice)
    {
        case 1:
            printf("O(n)\n");
            break;

        case 2:
            printf("O(n^2)\n");
            break;

        case 3:
            printf("O(log n)\n");
            break;

        case 4:
            printf("O(n^3)\n");
            break;

        case 5:
            printf("O(1)\n");
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
