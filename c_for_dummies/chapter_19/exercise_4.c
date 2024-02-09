#include <stdio.h>

int main() {
    int numbers[10];
    int x;
    int *pn;

    pn = numbers;

    // Fill array
    for (x = 0; x < 10; x++) {
        *pn = x + 1;
        pn++;
    }

    // Display array
    pn--;
    for (x = 9; x >= 0; x--) {
        printf("numbers[%d] = %p = %d\n", x, pn, *pn);
        pn--;
    }

    return (0);
}
