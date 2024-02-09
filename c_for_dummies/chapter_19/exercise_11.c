#include <stdio.h>

int main() {
    enum weekdays { mon, tue, wed, thurs, fri };
    float temps[5] = { 18.7, 22.8, 25.0, 23.3, 23.2 };
    float *ptr;

    ptr = temps;

    printf("The temperature on Tuesday was %.1f\n", *(ptr + tue));
    printf("The temperature on Friday was %.1f\n", *(ptr + fri));

    return (0);
}
