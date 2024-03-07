#include <stdio.h>

int main() {
    int x;

    x = -10;
    while (x < 10) {
        printf("%d ", x);
        x++;
    }
    while (x >= -10) {
        printf("%d ", x);
        x--;
    }
    // for (x = -10; x < 10; x++)
    //     printf("%d ", x);
    // for (; x >= -10; x--)
    //     printf("%d ", x);
    putchar('\n');

    return(0);
}