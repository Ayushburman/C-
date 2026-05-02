Mind Reading Trick — How It Works
The Trick
Tell your friend to follow these steps silently in their head:

Think of any number
Double it
Add 10
Divide by 2
Subtract the original number

Then confidently say → "Your answer is 5."
Why It Works
Let the secret number be x.

Double it → 2x
Add 10 → 2x + 10
Divide by 2 → x + 5
Subtract original → x + 5 − x = 5

The original number x cancels out completely.
No matter what number is chosen, the result is always 5.



Key Idea
The trick works because every operation is reversible and balanced — the original number is introduced, manipulated, and then perfectly cancelled by the final subtraction.
This is called an algebraic identity — the result is fixed regardless of input.


Variations
Add this in Step 3Final Answer1052010147
Change the number you add in Step 3 to any even number → divide by 2 → you control the final answer.



```
#include <stdio.h>

int mindReading(int x) {
    x = x * 2;      // Step 1: Double it
    x = x + 10;     // Step 2: Add 10
    x = x / 2;      // Step 3: Divide by 2
    x = x - (x - 5); // Step 4: Subtract original (always gives 5)
    return x;
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

    step = step + 10;
    printf("After adding 10  : %d\n", step);

    step = step / 2;
    printf("After halving    : %d\n", step);

    step = step - number;
    printf("After subtracting: %d\n", step);

    printf("\n Your answer is: %d\n", step);
    printf("It's always 5. Magic? No — just algebra!\n");

    return 0;
}

```
