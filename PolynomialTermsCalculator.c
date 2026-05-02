#include <stdio.h>
#include <string.h>

int main() {
    char poly[100];
    int terms = 1; // at least one term exists

    printf("Enter a polynomial: ");
    fgets(poly, sizeof(poly), stdin);

    // Count '+' and '-' to determine number of terms
    for(int i = 0; poly[i] != '\0'; i++) {
        if(poly[i] == '+' || poly[i] == '-') {
            // avoid counting '-' if it's the first character
            if(i != 0) {
                terms++;
            }
        }
    }

    // Determine type
    if(terms == 1) {
        printf("It is a Monomial\n");
    }
    else if(terms == 2) {
        printf("It is a Binomial\n");
    }
    else {
        printf("It is a Polynomial\n");
    }

    return 0;
}
