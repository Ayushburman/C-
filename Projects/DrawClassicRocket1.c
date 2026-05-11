// rocket.c — Classic Rocket
// Compile: gcc rocket.c -o rocket && ./rocket

#include <stdio.h>

#define RESET   "\033[0m"
#define CYAN    "\033[96m"
#define YELLOW  "\033[93m"

void pad(int n) { for (int i = 0; i < n; i++) printf(" "); }

void draw_rocket(int offset) {
    printf(CYAN);
    pad(offset); puts("    *");
    pad(offset); puts("   ***");
    pad(offset); puts("  *****");
    pad(offset); puts(" *******");
    pad(offset); puts("*********");
    pad(offset); puts(" *     *");
    pad(offset); puts(" *  O  *");
    pad(offset); puts(" *     *");
    pad(offset); puts("*********");
    pad(offset); puts(" *     *");
    pad(offset); puts(" *     *");
    pad(offset); puts("  *   *");
    printf(YELLOW);
    pad(offset); puts("  * * *");
    pad(offset); puts("  *   *");
    pad(offset); puts("   * *");
    pad(offset); puts("    *");
    printf(RESET);
}

int main(void) {
    printf(CYAN "-- CLASSIC ROCKET --\n\n" RESET);
    draw_rocket(5);
    return 0;
}
