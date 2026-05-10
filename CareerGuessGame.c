


#include <stdio.h>
#include <ctype.h>

#define ENG 0
#define DOC 1
#define BNK 2
#define IAS 3
#define POL 4
#define ART 5
#define N 6

const char *career_name[N] = {
    "Engineer",
    "Doctor",
    "Banker",
    "IAS Officer",
    "Politician",
    "Artist"
};

const char *questions[5] = {
    "What excites you the most?",
    "Which subject do you enjoy most?",
    "What kind of work environment do you prefer?",
    "What motivates you the most?",
    "How do you want to be remembered?"
};

const char *options[5][4] = {

    {
        "Building things",
        "Helping sick people",
        "Understanding money",
        "Creating art/music"
    },

    {
        "Maths / Physics",
        "Biology / Chemistry",
        "Economics / Commerce",
        "Arts / Literature"
    },

    {
        "Lab or technical place",
        "Hospital or clinic",
        "Office or bank",
        "Creative studio"
    },

    {
        "Solving problems",
        "Saving lives",
        "Financial success",
        "Creative legacy"
    },

    {
        "Inventor",
        "Healer",
        "Business leader",
        "Artist / Social changer"
    }
};

int scores[5][4][N] = {

    {
        {5,0,0,0,0,1},
        {0,5,0,1,0,0},
        {0,0,5,1,1,0},
        {0,0,0,0,2,5}
    },

    {
        {5,1,0,0,0,0},
        {0,5,0,0,0,0},
        {1,0,5,2,1,0},
        {0,0,0,1,2,5}
    },

    {
        {5,0,0,0,0,1},
        {0,5,0,1,0,0},
        {0,0,5,2,1,0},
        {0,0,0,0,1,5}
    },

    {
        {5,1,0,2,1,0},
        {0,5,0,2,1,0},
        {0,0,5,1,2,0},
        {0,0,0,0,1,5}
    },

    {
        {5,0,0,1,0,2},
        {0,5,0,1,0,0},
        {0,0,5,1,2,0},
        {0,0,0,2,3,5}
    }
};

char get_choice()
{
    char ch;
    scanf(" %c", &ch);
    return toupper(ch);
}

int main()
{
    int total[N] = {0};
    char ans;
    int option;

    printf("\n=====================================\n");
    printf("       CAREER PATH ADVISOR\n");
    printf("=====================================\n");

    for(int q = 0; q < 5; q++)
    {
        printf("\nQ%d. %s\n", q + 1, questions[q]);

        printf("A) %s\n", options[q][0]);
        printf("B) %s\n", options[q][1]);
        printf("C) %s\n", options[q][2]);
        printf("D) %s\n", options[q][3]);

        printf("Enter choice (A/B/C/D): ");

        ans = get_choice();

        switch(ans)
        {
            case 'A':
                option = 0;
                break;

            case 'B':
                option = 1;
                break;

            case 'C':
                option = 2;
                break;

            case 'D':
                option = 3;
                break;

            default:
                option = 0;
        }

        for(int i = 0; i < N; i++)
        {
            total[i] += scores[q][option][i];
        }
    }

    int best = 0;

    for(int i = 1; i < N; i++)
    {
        if(total[i] > total[best])
        {
            best = i;
        }
    }

    printf("\n=====================================\n");
    printf("             RESULT\n");
    printf("=====================================\n");

    printf("\nBest Career Match: %s\n", career_name[best]);

    printf("\nCareer Scores:\n");

    for(int i = 0; i < N; i++)
    {
        printf("%-15s : %d\n", career_name[i], total[i]);
    }

    return 0;
}
