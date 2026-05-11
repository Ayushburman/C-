// shuttle.c — Space Shuttle
// Compile: gcc shuttle.c -o shuttle && ./shuttle

#include <stdio.h>

#define RESET  "\033[0m"
#define WHITE  "\033[97m"
#define RED    "\033[91m"
#define YELLOW "\033[93m"

void pad(int n) { for (int i = 0; i < n; i++) printf(" "); }

void draw_shuttle(int offset) {
    printf(WHITE);
    pad(offset); puts("      *");
    pad(offset); puts("     ***");
    pad(offset); puts("    *****");
    pad(offset); puts("   *******");
    pad(offset); puts("  **** ****");
    pad(offset); puts("  **** ****");
    pad(offset); puts("  **** ****");
    pad(offset); puts("****** ******");
    pad(offset); puts("*****   *****");
    pad(offset); puts("****     ****");
    pad(offset); puts("**         **");
    printf(RED);
    pad(offset); puts("***       ***");
    pad(offset); puts(" **       **");
    pad(offset); puts("  *       *");
    printf(YELLOW);
    pad(offset); puts(" *** * * ***");
    pad(offset); puts("  *  * *  *");
    pad(offset); puts("     * *");
    pad(offset); puts("      *");
    printf(RESET);
}

int main(void) {
    printf(WHITE "-- SPACE SHUTTLE --\n\n" RESET);
    draw_shuttle(4);
    return 0;
}
