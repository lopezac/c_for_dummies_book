#include <stdio.h>

int main() {
    char caesar[6][9] = {
      "Julius", "Augustus", "Nero", "Tiberius", "Caligula", "Claudius"
    };

    int x, index;

    for (x = 0; x < 6; x++) {
        // printf("%s", caesar[x]);
        for (index = 0; caesar[x][index] != '\0'; index++)
            putchar(caesar[x][index]);
        putchar('\n');
    }

    return (0);
}
