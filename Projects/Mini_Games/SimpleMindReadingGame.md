# Mind Reading Trick — How It Works
 
## The Trick
 
Tell your friend to follow these steps silently in their head:

1. Think of any number
2. Double it
3. Add 10
4. Divide by 2
5. Subtract the original number
Then confidently say → **"Your answer is 5."**
 
---
 
## Why It Works
 
Let the secret number be **x**.
 
- Double it → `2x`
- Add 10 → `2x + 10`
- Divide by 2 → `x + 5`
- Subtract original → `x + 5 − x = 5`
The original number **x cancels out completely**.
No matter what number is chosen, the result is always **5**.
 
---
 
## Key Idea
 
The trick works because every operation is **reversible and balanced** — the original number is introduced, manipulated, and then perfectly cancelled by the final subtraction.
 
This is called an **algebraic identity** — the result is fixed regardless of input.
 
---
 
## Variations
 
| Add this in Step 3 | Final Answer |
|--------------------|--------------|
| 10                 | 5            |
| 20                 | 10           |
| 14                 | 7            |
 
Change the number you add in Step 3 to any **even number** → divide by 2 → you control the final answer.
 
---
 
## Performance Tips
 
- Pause before revealing → builds suspense
- Say *"I sense an odd number… less than 10… it is **5**"*
- Repeat with a different even number to change the magic answer





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
 


 
<img width="759" height="220" alt="image" src="https://github.com/user-attachments/assets/64becc03-4c9c-4e2e-b2ce-f5aeb6b3c4d8" />

