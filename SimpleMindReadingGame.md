# Mind Reading Trick — How It Works
 
## The Trick
 
Tell your friend to follow these steps silently in their head:







```
#include <stdio.h>
#include <windows.h>   // Sleep() for Windows (use unistd.h on Linux/Mac)

int main() {
    int number;

    printf("=== MIND READING TRICK ===\n\n");
    Sleep(1000);  // wait 1 second

    printf("Think of any number: ");
    scanf("%d", &number);
    Sleep(1500);

    printf("\nStep-by-step:\n");
    Sleep(800);

    printf("Your number      : %d\n", number);
    Sleep(1200);

    int step = number * 2;
    printf("After doubling   : %d\n", step);
    Sleep(1200);

    step = step + 10;
    printf("After adding 10  : %d\n", step);
    Sleep(1200);

    step = step / 2;
    printf("After halving    : %d\n", step);
    Sleep(1200);

    step = step - number;
    printf("After subtracting: %d\n", step);
    Sleep(2000);  // longer pause before the reveal

    printf("\n Your answer is: %d\n", step);
    Sleep(1000);

    printf("It's always 5. Magic? No — just algebra!\n");

    return 0;
}
```
 


 

