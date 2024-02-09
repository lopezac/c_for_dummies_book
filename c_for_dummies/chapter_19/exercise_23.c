#include <stdio.h>

void swap(int *x, int *y);

int main() {
    int a, b;

    a = 25;
    b = 68;

    puts("Before swap");;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    putchar('\n');

    swap(&a, &b);

    puts("After swap");;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return (0);
}

void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
