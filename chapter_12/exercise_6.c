#include <stdio.h>

int main() {
    float market[] = { 1000.5, 1026.11, 111.61, 66.77, 7777.0 };
    int x;
    
    puts("Stock Market Close");
    for (x = 0; x < 5; x++)
        printf("Day %d: %.2f\n", x, market[x]);

    return(0);
}