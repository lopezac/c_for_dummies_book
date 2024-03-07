#include <stdio.h>

int main() {
    long int fibo, nacci;

    fibo = 0;
    nacci = 1;

    do {
        printf("%ld ", fibo);
        fibo += nacci;
        printf("%ld ", nacci);
        nacci += fibo;
    } while (nacci < 3000000000000000000);

    putchar('\n');
    return(0);
}