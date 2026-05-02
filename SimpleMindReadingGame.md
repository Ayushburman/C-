Here's the C code with algorithm breakdown:
#include <stdio.h>
```
int mindReading(int x) {
    x = x * 2;      // Step 1: Double it
    x = x + 10;     // Step 2: Add 10
    x = x / 2;      // Step 3: Divide by 2
    x = x - (x - 5); // Step 4: Subtract original (always gives 5)
    return x;
```
}

int main() {
    int number;

    printf("=== MIND READING TRICK ===\n\n");
    printf("Think of any number: ");
    scanf("%d", &number);
 printf("\nStep-by-step:\n");
    printf("Your number      : %d\n", number);
 int step = number * 2;
    printf("After doubling   : %d\n", step);
