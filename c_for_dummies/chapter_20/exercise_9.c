#include <stdio.h>
#include <stdlib.h>

int main() {
    int *age;

    age = (int *)malloc(sizeof(int) * 1);
    if (age == NULL) {
        puts("Out of memory");
        exit(1);
    }

    printf("How old are you?: ");
    scanf("%d", age);
    *age *= 365;
    printf("You're over %d days old!\n", *age);

    free(age);

    return (0);
}
