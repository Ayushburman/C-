// rocket_parametric.c — Scalable Rocket (loop/math logic)
// Compile: gcc rocket_parametric.c -o rocket_parametric && ./rocket_parametric
// Change `size` in main() to scale the rocket up or down

#include <stdio.h>

#define RESET   "\033[0m"
#define CYAN    "\033[96m"
#define GREEN   "\033[92m"
#define MAGENTA "\033[95m"
#define YELLOW  "\033[93m"

void pad(int n) { for (int i = 0; i < n; i++) printf(" "); }

/*
 * size  = scale factor (try 2, 3, 4, 5 ...)
 * offset = left margin
 * color  = ANSI color string
 *
 * NOSE:  row r prints (2r-1) stars, centred by padding (size-r) spaces
 * BODY:  width = 2*size+1, cockpit 'O' placed at middle row
 * FINS:  row r → r stars left | gap | nozzle * | gap | r stars right
 * FLAME: single star column narrows to a point
 */
void draw_parametric_rocket(int size, int offset, const char *color) {
    int bw = 2 * size + 1;   /* body width */

    printf("%s", color);

    /* ── Nose cone ── */
    for (int r = 1; r <= size; r++) {
        pad(offset + (size - r));
        for (int c = 0; c < (2 * r - 1); c++) printf("*");
        printf("\n");
    }

    /* ── Body ── */
    for (int r = 0; r < size + 2; r++) {
        pad(offset);
        printf("*");
        if (r == (size + 2) / 2) {
            /* cockpit window centred */
            for (int c = 0; c < size - 1; c++) printf(" ");
            printf("O");
            for (int c = 0; c < size - 1; c++) printf(" ");
        } else {
            for (int c = 0; c < bw - 2; c++) printf(" ");
        }
        printf("*\n");
    }

    /* ── Base bar ── */
    pad(offset);
    for (int c = 0; c < bw; c++) printf("*");
    printf("\n");

    /* ── Fins + exhaust flame ── */
    printf(YELLOW);
    for (int r = 1; r <= size; r++) {
        pad(offset - r + 1);
        for (int c = 0; c < r; c++)        printf("*");  /* left fin  */
        for (int c = 0; c < size - 1; c++) printf(" ");  /* left gap  */
        printf("*");                                       /* nozzle    */
        for (int c = 0; c < size - 1; c++) printf(" ");  /* right gap */
        for (int c = 0; c < r; c++)        printf("*");  /* right fin */
        printf("\n");
    }

    printf(RESET);
}

int main(void) {
    printf(CYAN    "-- PARAMETRIC ROCKET  size=2 --\n\n" RESET);
    draw_parametric_rocket(2, 12, CYAN);

    printf(GREEN   "\n-- PARAMETRIC ROCKET  size=3 --\n\n" RESET);
    draw_parametric_rocket(3, 10, GREEN);

    printf(MAGENTA "\n-- PARAMETRIC ROCKET  size=4 --\n\n" RESET);
    draw_parametric_rocket(4,  8, MAGENTA);

    return 0;
}
