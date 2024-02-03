#include <stdio.h>

int main() {
    char caesar[3][9] = {
        "Julius", "Augustus", "Nero"
    };

    int x, index;

    for (x = 0; x < 3; x++) {
        for (index = 0; caesar[x][index] != '\0'; index++)
            putchar(caesar[x][index]);
        putchar('\n');
    }

    return(0);
}