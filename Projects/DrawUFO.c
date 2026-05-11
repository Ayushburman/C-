// ufo.c — UFO / Flying Saucer
// Compile: gcc ufo.c -o ufo && ./ufo

#include <stdio.h>

#define RESET   "\033[0m"
#define GREEN   "\033[92m"
#define MAGENTA "\033[95m"
#define YELLOW  "\033[93m"

void pad(int n) { for (int i = 0; i < n; i++) printf(" "); }

void draw_ufo(int offset) {
    printf(GREEN);
    pad(offset); puts("       ***");
    pad(offset); puts("      *****");
    pad(offset); puts("     ** O **");
    printf(MAGENTA);
    pad(offset); puts("  ***********");
    pad(offset); puts(" *************");
    pad(offset); puts("***************");
    pad(offset); puts(" *************");
    pad(offset); puts("  *  *  *  *  *");
    printf(YELLOW);
    pad(offset); puts("   * * * * *");
    pad(offset); puts("    *  *  *");
    pad(offset); puts("     *  *");
    pad(offset); puts("      **");
    printf(RESET);
}

int main(void) {
    printf(GREEN "-- UFO / FLYING SAUCER --\n\n" RESET);
    draw_ufo(2);
    return 0;
}
