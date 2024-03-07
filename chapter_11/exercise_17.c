#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, a, b;
    const int r_amount = 100;
    unsigned int seed;

    printf("Enter a random number seed: ");
    scanf("%u", &seed);
    srand(seed);
    
    printf("\n%d Random Numbers\n\n", r_amount);
    for (a = 0; a < r_amount / 5; a++) {
        for (b = 0; b < r_amount / 25; b++) {
            r = rand() % 20 + 1;
            printf("%d\t", r);
        }
        putchar('\n');
    }

    return(0);
}