/*
    Bible Psalms Daily Reader (Mini Version)
    ----------------------------------------
    - Stores 10 Psalms
    - Shows one Psalm each day
    - Day changes automatically using system date

    Compile:
        gcc psalms.c -o psalms

    Run:
        ./psalms
*/

#include <stdio.h>
#include <time.h>

int main() {

    // Small database of Psalms
    char *psalms[] = {

        "Psalm 1: Blessed is the man who walks not in the counsel of the wicked.",

        "Psalm 3: But you, Lord, are a shield around me, my glory, the One who lifts my head high.",

        "Psalm 4: In peace I will lie down and sleep, for you alone, Lord, make me dwell in safety.",

        "Psalm 8: Lord, our Lord, how majestic is your name in all the earth!",

        "Psalm 19: The heavens declare the glory of God; the skies proclaim the work of his hands.",

        "Psalm 23: The Lord is my shepherd; I shall not want.",

        "Psalm 27: The Lord is my light and my salvation—whom shall I fear?",

        "Psalm 34: Taste and see that the Lord is good; blessed is the one who takes refuge in him.",

        "Psalm 46: God is our refuge and strength, an ever-present help in trouble.",

        "Psalm 91: Whoever dwells in the shelter of the Most High will rest in the shadow of the Almighty."

    };

    int total_psalms = 10;

    // Get current date
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    // Use day of year to select Psalm
    int index = tm.tm_yday % total_psalms;

    printf("\n==============================\n");
    printf("     DAILY BIBLE PSALM\n");
    printf("==============================\n\n");

    printf("Day Number : %d\n\n", tm.tm_yday + 1);

    printf("%s\n", psalms[index]);

    printf("\n==============================\n");

    return 0;
}
