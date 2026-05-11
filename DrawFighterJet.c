// fighter.c — Fighter Jet
// Compile: gcc fighter.c -o fighter && ./fighter

#include <stdio.h>

#define RESET  "\033[0m"
#define CYAN   "\033[96m"
#define YELLOW "\033[93m"

void pad(int n) { for (int i = 0; i < n; i++) printf(" "); }

void draw_fighter(int offset) {
    printf(CYAN);
    pad(offset); puts("        *");
    pad(offset); puts("       ***          *");
    pad(offset); puts("      *****        ***");
    pad(offset); puts(" ***  *****  *****  **");
    pad(offset); puts("***********************");
    pad(offset); puts(" ***  *****  *****  **");
    pad(offset); puts("      *****        ***");
    pad(offset); puts("       ***          *");
    pad(offset); puts("        *");
    printf(YELLOW);
    pad(offset); puts("                     *");
    pad(offset); puts("                    ***");
    pad(offset); puts("                     *");
    printf(RESET);
}

int main(void) {
    printf(CYAN "-- FIGHTER JET --\n\n" RESET);
    draw_fighter(2);
    return 0;
}
