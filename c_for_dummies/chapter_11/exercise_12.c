#include <stdio.h>
#include <math.h>

int main() {
    int number, power;

    number = 2;
    for (power = 0; power <= 13; power++)
        printf("%d to the power of %d is equal to %.f\n",
            number, power, pow(number, power));
    putchar('\n');

    return(0);
}