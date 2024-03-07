#include <stdio.h>

int main() {
    char sample[] = "Friday I'm in love!";
    char *ptr;

    for (ptr = sample; putchar(*ptr); ptr++)
        ;
    putchar('\n');

    return (0);
}
