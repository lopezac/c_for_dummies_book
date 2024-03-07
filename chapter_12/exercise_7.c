#include <stdio.h>
#include <math.h>

int main() {
    float array1[] = { 10, 12, 14, 15, 16, 18 };
    float array2[6];
    int x;

    puts("Array1 contents are:");
    for (x = 0; x < 6; x++)
        printf("%.f ", array1[x]);
    printf("\n\n");

    puts("Array2 contents are:");
    for (x = 0; x < 6; x++) {
        array2[x] = sqrt(array1[x]);
        printf("%.1f ", array2[x]);
    }
    putchar('\n');

    return(0);
}