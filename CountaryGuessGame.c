/*
 * guess_country.c
 *
 * "I can guess your country" — a trick-question program.
 *
 * Questions feel personal and unrelated to geography,
 * but each answer secretly scores across world regions
 * AND narrows which country within that region.
 *
 * Compile : gcc guess_country.c -o guess_country
 * Run     : ./guess_country
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* ── Region indices ─────────────────────────────────────────── */
#define SOUTH_ASIA     0
#define EAST_ASIA      1
#define SOUTHEAST_ASIA 2
#define MIDDLE_EAST    3
#define EUROPE         4
#define NORTH_AMERICA  5
#define SOUTH_AMERICA  6
#define AFRICA         7
#define TOTAL_REGIONS  8

typedef struct {
    int  region;
    int  sub;
    char name[32];
} Country;

Country countries[] = {
    { SOUTH_ASIA,     0, "India"           },
    { SOUTH_ASIA,     1, "Pakistan"         },
    { SOUTH_ASIA,     2, "Bangladesh"       },

    { EAST_ASIA,      0, "Japan"            },
    { EAST_ASIA,      1, "China"            },
    { EAST_ASIA,      2, "South Korea"      },

    { SOUTHEAST_ASIA, 0, "Indonesia"        },
    { SOUTHEAST_ASIA, 1, "Thailand"         },
    { SOUTHEAST_ASIA, 2, "Philippines"      },

    { MIDDLE_EAST,    0, "Turkey"           },
    { MIDDLE_EAST,    1, "Saudi Arabia"     },
    { MIDDLE_EAST,    2, "UAE"              },
    { MIDDLE_EAST,    3, "Egypt"            },

    { EUROPE,         0, "United Kingdom"   },
    { EUROPE,         1, "Germany"          },
    { EUROPE,         2, "France"           },
    { EUROPE,         3, "Russia"           },
    { EUROPE,         4, "Italy"            },

    { NORTH_AMERICA,  0, "United States"    },
    { NORTH_AMERICA,  1, "Canada"           },
    { NORTH_AMERICA,  2, "Mexico"           },

    { SOUTH_AMERICA,  0, "Brazil"           },
    { SOUTH_AMERICA,  1, "Argentina"        },
    { SOUTH_AMERICA,  2, "Colombia"         },

    { AFRICA,         0, "Nigeria"          },
    { AFRICA,         1, "Ethiopia"         },
    { AFRICA,         2, "South Africa"     },
};

int n_countries = sizeof(countries) / sizeof(Country);

int region_score[TOTAL_REGIONS] = {0};
int sub_score[TOTAL_REGIONS]    = {0};

char get_answer(void)
{
    char buf[64];
    if (!fgets(buf, sizeof(buf), stdin)) return '?';
    for (int i = 0; buf[i]; i++)
        if (!isspace((unsigned char)buf[i]))
            return toupper((unsigned char)buf[i]);
    return '?';
}

void vote(int region, int rpts, int spts)
{
    region_score[region] += rpts;
    sub_score[region]    += spts;
}

int main(void)
{
    char ans;

    printf("\n");
    printf("  +--------------------------------------------+\n");
    printf("  |   I can guess your country.                |\n");
    printf("  |   Answer honestly. Think freely.           |\n");
    printf("  |   These questions have nothing to do       |\n");
    printf("  |   with geography... or do they?            |\n");
    printf("  +--------------------------------------------+\n\n");

    /* Q1: Meal time */
    printf("  Q1. When do you enjoy your biggest meal?\n");
    printf("      A) Morning / early afternoon\n");
    printf("      B) Late afternoon (after 2 PM)\n");
    printf("      C) Anytime — rice is always on the table\n");
    printf("      D) Evening with bread or flatbread\n");
    printf("  >> ");
    ans = get_answer();
    switch (ans) {
        case 'A': vote(EUROPE,3,1); vote(NORTH_AMERICA,3,2); break;
        case 'B': vote(SOUTH_AMERICA,3,0); vote(MIDDLE_EAST,2,0); break;
        case 'C': vote(SOUTH_ASIA,3,2); vote(EAST_ASIA,3,1); vote(SOUTHEAST_ASIA,2,1); break;
        case 'D': vote(MIDDLE_EAST,3,0); vote(AFRICA,2,0); break;
    }

    /* Q2: Weather */
    printf("\n  Q2. What weather feels most like home?\n");
    printf("      A) Cold — snow is completely normal\n");
    printf("      B) Hot and dry, sunshine all year\n");
    printf("      C) Hot and humid, monsoon season\n");
    printf("      D) Mild and temperate\n");
    printf("  >> ");
    ans = get_answer();
    switch (ans) {
        case 'A': vote(EUROPE,3,-2); vote(NORTH_AMERICA,2,-1); break;
        case 'B': vote(MIDDLE_EAST,4,0); vote(AFRICA,2,0); break;
        case 'C': vote(SOUTH_ASIA,4,2); vote(SOUTHEAST_ASIA,3,1); break;
        case 'D': vote(EAST_ASIA,2,1); vote(SOUTH_AMERICA,2,0); vote(EUROPE,2,1); break;
    }

    /* Q3: Lucky colour */
    printf("\n  Q3. Pick a colour that feels lucky to you:\n");
    printf("      A) Red\n");
    printf("      B) Green\n");
    printf("      C) Blue\n");
    printf("      D) Saffron / Orange\n");
    printf("      E) Yellow / Gold\n");
    printf("  >> ");
    ans = get_answer();
    switch (ans) {
        case 'A': vote(EAST_ASIA,3,1); vote(SOUTH_ASIA,2,2); break;
        case 'B': vote(MIDDLE_EAST,4,0); vote(SOUTH_ASIA,2,-1); vote(AFRICA,2,0); break;
        case 'C': vote(EUROPE,4,1); vote(NORTH_AMERICA,4,2); break;
        case 'D': vote(SOUTH_ASIA,5,2); break;
        case 'E': vote(SOUTHEAST_ASIA,3,1); vote(SOUTH_AMERICA,2,0); break;
    }

    /* Q4: Greeting */
    printf("\n  Q4. How do you greet someone you just met?\n");
    printf("      A) Firm handshake\n");
    printf("      B) Hands pressed together or a bow\n");
    printf("      C) Hug or cheek kiss\n");
    printf("      D) Hand placed on the heart\n");
    printf("      E) A nod or casual wave\n");
    printf("  >> ");
    ans = get_answer();
    switch (ans) {
        case 'A': vote(EUROPE,3,1); vote(NORTH_AMERICA,3,2); vote(AFRICA,1,0); break;
        case 'B': vote(SOUTH_ASIA,5,2); vote(EAST_ASIA,2,1); break;
        case 'C': vote(SOUTH_AMERICA,4,0); vote(EUROPE,3,-3); break;
        case 'D': vote(MIDDLE_EAST,5,0); break;
        case 'E': vote(EAST_ASIA,3,1); vote(SOUTHEAST_ASIA,2,0); vote(NORTH_AMERICA,2,2); break;
    }

    /* Q5: Daily drink */
    printf("\n  Q5. What is your go-to daily drink?\n");
    printf("      A) Spiced tea (chai)\n");
    printf("      B) Green tea\n");
    printf("      C) Strong black coffee or espresso\n");
    printf("      D) Mate or herbal tea\n");
    printf("      E) Soft drink / cola\n");
    printf("  >> ");
    ans = get_answer();
    switch (ans) {
        case 'A': vote(SOUTH_ASIA,5,2); break;
        case 'B': vote(EAST_ASIA,4,1); vote(SOUTHEAST_ASIA,2,1); break;
        case 'C': vote(MIDDLE_EAST,3,0); vote(EUROPE,3,-3); break;
        case 'D': vote(SOUTH_AMERICA,5,-1); break;
        case 'E': vote(NORTH_AMERICA,4,2); vote(SOUTHEAST_ASIA,1,0); break;
    }

    /* Q6: Family structure */
    printf("\n  Q6. How was your family structured growing up?\n");
    printf("      A) Large extended family, relatives always around\n");
    printf("      B) Nuclear — just parents and siblings\n");
    printf("      C) Multiple generations under one roof\n");
    printf("      D) Moved out and became independent early\n");
    printf("  >> ");
    ans = get_answer();
    switch (ans) {
        case 'A': vote(SOUTH_ASIA,3,2); vote(MIDDLE_EAST,3,0); vote(AFRICA,2,0); break;
        case 'B': vote(EUROPE,3,1); vote(NORTH_AMERICA,3,2); break;
        case 'C': vote(EAST_ASIA,3,1); vote(SOUTHEAST_ASIA,2,0); vote(SOUTH_ASIA,2,2); break;
        case 'D': vote(NORTH_AMERICA,4,2); vote(EUROPE,3,1); break;
    }

    /* Q7: Food source */
    printf("\n  Q7. Where do your favourite meals usually come from?\n");
    printf("      A) Street stalls and roadside vendors\n");
    printf("      B) Home-cooked, always\n");
    printf("      C) Restaurants and cafes\n");
    printf("      D) Equally both\n");
    printf("  >> ");
    ans = get_answer();
    switch (ans) {
        case 'A': vote(SOUTH_ASIA,3,2); vote(SOUTHEAST_ASIA,3,1); vote(MIDDLE_EAST,2,0); break;
        case 'B': vote(EAST_ASIA,3,1); vote(SOUTH_ASIA,2,2); break;
        case 'C': vote(EUROPE,4,1); vote(NORTH_AMERICA,4,2); break;
        case 'D': vote(SOUTH_AMERICA,3,0); vote(AFRICA,2,0); break;
    }

    /* ── Find top region ─────────────────────────────────────── */
    int best = 0;
    for (int i = 1; i < TOTAL_REGIONS; i++)
        if (region_score[i] > region_score[best])
            best = i;

    /*
     * Translate sub_score → country index
     *   >= 6 → 0  (India, Japan, USA, Turkey, UK, Brazil, Nigeria)
     *   >= 2 → 1
     *   >= -1→ 2
     *   <  -1→ 3  (only Middle East has index 3)
     */
    int sub;
    if      (sub_score[best] >= 6)  sub = 0;
    else if (sub_score[best] >= 2)  sub = 1;
    else if (sub_score[best] >= -1) sub = 2;
    else                            sub = 3;

    /* clamp sub to valid range for that region */
    int max_sub = 0;
    for (int i = 0; i < n_countries; i++)
        if (countries[i].region == best && countries[i].sub > max_sub)
            max_sub = countries[i].sub;
    if (sub > max_sub) sub = max_sub;

    /* lookup */
    char *result = "somewhere fascinating";
    for (int i = 0; i < n_countries; i++) {
        if (countries[i].region == best && countries[i].sub == sub) {
            result = countries[i].name;
            break;
        }
    }

    /* ── Reveal ──────────────────────────────────────────────── */
    printf("\n");
    printf("  +----------------------------------------------+\n");
    printf("  |  Processing your answers...                  |\n");
    printf("  |                                              |\n");
    printf("  |  Your food habits... your colour sense...    |\n");
    printf("  |  your family values... your daily rituals... |\n");
    printf("  |                                              |\n");
    printf("  |  Everything points to one place.             |\n");
    printf("  |                                              |\n");
    printf("  |  You are from  -->  %-22s |\n", result);
    printf("  |                                              |\n");
    printf("  |  Am I right?                                 |\n");
    printf("  +----------------------------------------------+\n\n");

    return 0;
}
